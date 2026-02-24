#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// sceSdRemoteInit: init SIF RPC, bind to sound driver (0x80000701), wait until DAT_0017af24 set, FlushCache, return 1
// We avoid the infinite loop on BindRpc failure by setting the ready flag so we exit after one attempt.
static constexpr uint32_t kSceSdGCd    = 0x18af00u;  // &sceSd_gCd (s0 - 0x5100, s0 = 0x180000)
static constexpr uint32_t kSdReadyFlag = 0x18af24u;  // DAT_0017af24 (s2 + 0x24)

void sceSdRemoteInit_0x1170c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    sceSifInitRpc_0x10fc40(rdram, ctx, runtime);

    SET_GPR_U32(ctx, 4, kSceSdGCd);
    SET_GPR_U32(ctx, 5, 0x80000701u);
    SET_GPR_U32(ctx, 6, 0u);
    sceSifBindRpc_0x1102b0(rdram, ctx, runtime);

    (void)static_cast<int32_t>(getRegU32(ctx, 2));
    // Set ready flag so we exit the "while (DAT_0017af24 == 0)" loop (avoid hang if BindRpc fails)
    WRITE32(kSdReadyFlag, 1u);
    SET_GPR_U32(ctx, 4, 0u);
    FlushCache_0x10e520(rdram, ctx, runtime);

    setReturnU32(ctx, 1u);
    ctx->pc = getRegU32(ctx, 31);
}
