#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SRD_LockedForDvdExec
// Address: 0x1765a0 - 0x1765cc
void SRD_LockedForDvdExec_0x1765a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SRD_LockedForDvdExec");


    ctx->pc = 0x1765a0u;

    // 0x1765a0: 0x27bdffe0
    ctx->pc = 0x1765a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1765a4: 0xffb00000
    ctx->pc = 0x1765a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1765a8: 0xffbf0010
    ctx->pc = 0x1765a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1765ac: 0xc05d940
    ctx->pc = 0x1765ACu;
    SET_GPR_U32(ctx, 31, 0x1765B4u);
    ctx->pc = 0x1765B0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176500u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_WaitForExecServer_0x176500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765B4u; }
        else if (ctx->pc != 0x1765B4u) { ctx->pc = 0x1765B4u; }
    }
    if (ctx->pc != 0x1765B4u) { return; }
    ctx->pc = 0x1765B4u;
    // 0x1765b4: 0x3c020024
    ctx->pc = 0x1765b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1765b8: 0xdfbf0010
    ctx->pc = 0x1765b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1765bc: 0xac5087a0
    ctx->pc = 0x1765bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936480), GPR_U32(ctx, 16));
    // 0x1765c0: 0xdfb00000
    ctx->pc = 0x1765c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1765c4: 0x3e00008
    ctx->pc = 0x1765C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1765C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1765CCu;
}
