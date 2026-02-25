#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Globals from PS2 libhi / Hi DMA (0x22xxxx, 0x20xxxx)
static constexpr uint32_t kMemFunc = 0x002271DCu;
static constexpr uint32_t kMemFree = 0x002271E0u;
static constexpr uint32_t kPubId = 0x002271B4u;
static constexpr uint32_t kHiDMAState = 0x00217788u;
static constexpr uint32_t kDat20F88C = 0x0020F88Cu;
static constexpr uint32_t kDat20F890 = 0x0020F890u;

void sceHiDMAInit_0x10d990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiDMAInit_0x10d990");
#endif
    uint32_t allocFunc = GPR_U32(ctx, 4);  // a0
    uint32_t freeFunc = GPR_U32(ctx, 5);   // a1
    uint32_t param = GPR_U32(ctx, 6);       // a2

    if (allocFunc == 0u)
        allocFunc = 0x10d6f0u;  // sceHiMemAlign
    if (freeFunc == 0u)
        freeFunc = 0x10d5d0u;   // sceHiMemFree

    FAST_WRITE32(kMemFunc, allocFunc);
    FAST_WRITE32(kMemFree, freeFunc);

    // alloc(0x40, param)
    uint32_t buffer = 0u;
    if (runtime && runtime->hasFunction(allocFunc)) {
        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, 0x40u);
        SET_GPR_U32(&tmp, 5, param);
        SET_GPR_U32(&tmp, 31, 0x10d990u);  // ra for return
        tmp.pc = allocFunc;
        auto fn = runtime->lookupFunction(allocFunc);
        fn(rdram, &tmp, runtime);
        buffer = getRegU32(&tmp, 2);  // v0
    }

    if (buffer == 0u) {
        setReturnU32(ctx, 0xFFFFFFFFu);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    // _buf_init(buffer, param>>4, 0x40)
    int32_t bufInitRet = -1;
    if (runtime && runtime->hasFunction(0x10e8e0u)) {
        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, buffer);
        SET_GPR_U32(&tmp, 5, param >> 4u);
        SET_GPR_U32(&tmp, 6, 0x40u);
        SET_GPR_U32(&tmp, 31, 0x10d990u);
        tmp.pc = 0x10e8e0u;
        auto fn = runtime->lookupFunction(0x10e8e0u);
        fn(rdram, &tmp, runtime);
        bufInitRet = static_cast<int32_t>(getRegU32(&tmp, 2));
    }

    if (bufInitRet != 0) {
        setReturnU32(ctx, static_cast<uint32_t>(bufInitRet));
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    // Success: set globals and return 0
    FAST_WRITE32(kPubId, 1u);
    FAST_WRITE32(kHiDMAState, 0xCu);
    FAST_WRITE32(kDat20F890, 0xFFFFFFFFu);
    FAST_WRITE32(kDat20F88C, 0u);
    // lump_start_dat_ptr, _save_regs, _regs - use adjacent slots for compat
    FAST_WRITE32(0x0020F894u, 0xFFFFFFFFu);
    FAST_WRITE32(0x0020F898u, 0u);
    FAST_WRITE32(0x0020F89Cu, 0u);

    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
