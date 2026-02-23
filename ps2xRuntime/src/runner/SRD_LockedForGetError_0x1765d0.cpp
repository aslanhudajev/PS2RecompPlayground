#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SRD_LockedForGetError
// Address: 0x1765d0 - 0x1765fc
void SRD_LockedForGetError_0x1765d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SRD_LockedForGetError");


    ctx->pc = 0x1765d0u;

    // 0x1765d0: 0x27bdffe0
    ctx->pc = 0x1765d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1765d4: 0xffb00000
    ctx->pc = 0x1765d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1765d8: 0xffbf0010
    ctx->pc = 0x1765d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1765dc: 0xc05d940
    ctx->pc = 0x1765DCu;
    SET_GPR_U32(ctx, 31, 0x1765E4u);
    ctx->pc = 0x1765E0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176500u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_WaitForExecServer_0x176500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765E4u; }
        else if (ctx->pc != 0x1765E4u) { ctx->pc = 0x1765E4u; }
    }
    if (ctx->pc != 0x1765E4u) { return; }
    ctx->pc = 0x1765E4u;
    // 0x1765e4: 0x3c020024
    ctx->pc = 0x1765e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1765e8: 0xdfbf0010
    ctx->pc = 0x1765e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1765ec: 0xac5087a4
    ctx->pc = 0x1765ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936484), GPR_U32(ctx, 16));
    // 0x1765f0: 0xdfb00000
    ctx->pc = 0x1765f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1765f4: 0x3e00008
    ctx->pc = 0x1765F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1765F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1765FCu;
}
