#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiIsExistFcache
// Address: 0x179cd8 - 0x179cfc
void htCiIsExistFcache_0x179cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiIsExistFcache");


    ctx->pc = 0x179cd8u;

    // 0x179cd8: 0x27bdffe0
    ctx->pc = 0x179cd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179cdc: 0xffbf0010
    ctx->pc = 0x179cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x179ce0: 0xc05e6a2
    ctx->pc = 0x179CE0u;
    SET_GPR_U32(ctx, 31, 0x179CE8u);
    ctx->pc = 0x179CE4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179A88u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_get_finf_0x179a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179CE8u; }
        else if (ctx->pc != 0x179CE8u) { ctx->pc = 0x179CE8u; }
    }
    if (ctx->pc != 0x179CE8u) { return; }
    ctx->pc = 0x179CE8u;
    // 0x179ce8: 0x8fa20004
    ctx->pc = 0x179ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x179cec: 0xdfbf0010
    ctx->pc = 0x179cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179cf0: 0x2102b
    ctx->pc = 0x179cf0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x179cf4: 0x3e00008
    ctx->pc = 0x179CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179CF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179CFCu;
}
