#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Globals from PS2 libhi (0x22xxxx)
static constexpr uint32_t kHMMBuffer = 0x00227170u;
static constexpr uint32_t kHMMBufEnd = 0x00227174u;
static constexpr uint32_t kHMMSliceNum = 0x00227178u;

void sceHiMemInit_0x10d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiMemInit_0x10d450");
#endif
    const uint32_t __entryPc = ctx->pc;
    uint32_t param1 = GPR_U32(ctx, 4);  // a0 = buffer base
    uint32_t param2 = GPR_U32(ctx, 5);  // a1 = size

    int32_t iVar1 = 4 - static_cast<int32_t>(param1 & 3u);
    if (iVar1 != 0)
        param2 -= static_cast<uint32_t>(iVar1);

    uint32_t sliceNum = param2 >> 2u;
    uint32_t bufEnd = param1 + sliceNum * 4u;

    FAST_WRITE32(kHMMBuffer, param1);
    FAST_WRITE32(kHMMBufEnd, bufEnd);
    FAST_WRITE32(kHMMSliceNum, sliceNum);
    // make_info_block(buf, sliceNum-1, 0): writes (a2<<31 | a1) to *buf; with a2=0 -> sliceNum-1
    if (sliceNum > 0u)
        FAST_WRITE32(param1, sliceNum - 1u);

    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
