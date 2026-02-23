#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_CreateEx
// Address: 0x190be8 - 0x190c38
void sfadxt_CreateEx_0x190be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_CreateEx");


    ctx->pc = 0x190be8u;

    // 0x190be8: 0x27bdffe0
    ctx->pc = 0x190be8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190bec: 0x80102d
    ctx->pc = 0x190becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190bf0: 0xffb00000
    ctx->pc = 0x190bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x190bf4: 0xffbf0010
    ctx->pc = 0x190bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x190bf8: 0x8c460014
    ctx->pc = 0x190bf8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x190bfc: 0x8c44000c
    ctx->pc = 0x190bfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x190c00: 0xc05c534
    ctx->pc = 0x190C00u;
    SET_GPR_U32(ctx, 31, 0x190C08u);
    ctx->pc = 0x190C04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->pc = 0x1714D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Create_0x1714d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C08u; }
        else if (ctx->pc != 0x190C08u) { ctx->pc = 0x190C08u; }
    }
    if (ctx->pc != 0x190C08u) { return; }
    ctx->pc = 0x190C08u;
    // 0x190c08: 0x40802d
    ctx->pc = 0x190c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c0c: 0x16000003
    ctx->pc = 0x190C0Cu;
    {
        const bool branch_taken_0x190c0c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x190C10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x190c0c) {
            ctx->pc = 0x190C1Cu;
            goto label_190c1c;
        }
    }
    ctx->pc = 0x190C14u;
    // 0x190c14: 0x10000004
    ctx->pc = 0x190C14u;
    {
        const bool branch_taken_0x190c14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x190C18u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x190c14) {
            ctx->pc = 0x190C28u;
            goto label_190c28;
        }
    }
    ctx->pc = 0x190C1Cu;
label_190c1c:
    // 0x190c1c: 0xc05c952
    ctx->pc = 0x190C1Cu;
    SET_GPR_U32(ctx, 31, 0x190C24u);
    ctx->pc = 0x190C20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172548u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_SetAutoRcvr_0x172548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C24u; }
        else if (ctx->pc != 0x190C24u) { ctx->pc = 0x190C24u; }
    }
    if (ctx->pc != 0x190C24u) { return; }
    ctx->pc = 0x190C24u;
    // 0x190c24: 0x200102d
    ctx->pc = 0x190c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190c28:
    // 0x190c28: 0xdfbf0010
    ctx->pc = 0x190c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190c2c: 0xdfb00000
    ctx->pc = 0x190c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190c30: 0x3e00008
    ctx->pc = 0x190C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190C34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190C1Cu: goto label_190c1c;
            case 0x190C28u: goto label_190c28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x190C38u;
}
