#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_SuspendThread
// Address: 0x16cd60 - 0x16cdc0
void adxm_SuspendThread_0x16cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_SuspendThread");


    ctx->pc = 0x16cd60u;

    // 0x16cd60: 0x27bdffa0
    ctx->pc = 0x16cd60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16cd64: 0xffb10040
    ctx->pc = 0x16cd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x16cd68: 0xffb00030
    ctx->pc = 0x16cd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16cd6c: 0x882d
    ctx->pc = 0x16cd6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd70: 0x80802d
    ctx->pc = 0x16cd70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd74: 0x1200000c
    ctx->pc = 0x16CD74u;
    {
        const bool branch_taken_0x16cd74 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CD78u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        if (branch_taken_0x16cd74) {
            ctx->pc = 0x16CDA8u;
            goto label_16cda8;
        }
    }
    ctx->pc = 0x16CD7Cu;
    // 0x16cd7c: 0xc0551f8
    ctx->pc = 0x16CD7Cu;
    SET_GPR_U32(ctx, 31, 0x16CD84u);
    ctx->pc = 0x16CD80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1547E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReferThreadStatus_0x1547e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD84u; }
        else if (ctx->pc != 0x16CD84u) { ctx->pc = 0x16CD84u; }
    }
    if (ctx->pc != 0x16CD84u) { return; }
    ctx->pc = 0x16CD84u;
    // 0x16cd84: 0x8fa30000
    ctx->pc = 0x16cd84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cd88: 0x24020008
    ctx->pc = 0x16cd88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x16cd8c: 0x10620006
    ctx->pc = 0x16CD8Cu;
    {
        const bool branch_taken_0x16cd8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16CD90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x16cd8c) {
            ctx->pc = 0x16CDA8u;
            goto label_16cda8;
        }
    }
    ctx->pc = 0x16CD94u;
    // 0x16cd94: 0x10620005
    ctx->pc = 0x16CD94u;
    {
        const bool branch_taken_0x16cd94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16CD98u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16cd94) {
            ctx->pc = 0x16CDACu;
            goto label_16cdac;
        }
    }
    ctx->pc = 0x16CD9Cu;
    // 0x16cd9c: 0xc055214
    ctx->pc = 0x16CD9Cu;
    SET_GPR_U32(ctx, 31, 0x16CDA4u);
    ctx->pc = 0x16CDA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154850u;
    {
        const uint32_t __entryPc = ctx->pc;
        SuspendThread_0x154850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDA4u; }
        else if (ctx->pc != 0x16CDA4u) { ctx->pc = 0x16CDA4u; }
    }
    if (ctx->pc != 0x16CDA4u) { return; }
    ctx->pc = 0x16CDA4u;
    // 0x16cda4: 0x40882d
    ctx->pc = 0x16cda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16cda8:
    // 0x16cda8: 0x220102d
    ctx->pc = 0x16cda8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cdac:
    // 0x16cdac: 0xdfbf0050
    ctx->pc = 0x16cdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16cdb0: 0xdfb10040
    ctx->pc = 0x16cdb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16cdb4: 0xdfb00030
    ctx->pc = 0x16cdb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16cdb8: 0x3e00008
    ctx->pc = 0x16CDB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CDBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CDA8u: goto label_16cda8;
            case 0x16CDACu: goto label_16cdac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16CDC0u;
}
