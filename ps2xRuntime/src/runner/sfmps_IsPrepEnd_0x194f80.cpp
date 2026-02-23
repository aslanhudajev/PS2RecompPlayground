#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_IsPrepEnd
// Address: 0x194f80 - 0x194fcc
void sfmps_IsPrepEnd_0x194f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_IsPrepEnd");


    ctx->pc = 0x194f80u;

    // 0x194f80: 0x27bdffe0
    ctx->pc = 0x194f80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194f84: 0xffbf0010
    ctx->pc = 0x194f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x194f88: 0xffb00000
    ctx->pc = 0x194f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x194f8c: 0x8c830008
    ctx->pc = 0x194f8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x194f90: 0x18600005
    ctx->pc = 0x194F90u;
    {
        const bool branch_taken_0x194f90 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x194F94u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2540)));
        if (branch_taken_0x194f90) {
            ctx->pc = 0x194FA8u;
            goto label_194fa8;
        }
    }
    ctx->pc = 0x194F98u;
    // 0x194f98: 0x40802d
    ctx->pc = 0x194f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f9c: 0x70102a
    ctx->pc = 0x194f9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
    // 0x194fa0: 0x10000002
    ctx->pc = 0x194FA0u;
    {
        const bool branch_taken_0x194fa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194FA4u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        if (branch_taken_0x194fa0) {
            ctx->pc = 0x194FACu;
            goto label_194fac;
        }
    }
    ctx->pc = 0x194FA8u;
label_194fa8:
    // 0x194fa8: 0x40802d
    ctx->pc = 0x194fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194fac:
    // 0x194fac: 0xc0648a2
    ctx->pc = 0x194FACu;
    SET_GPR_U32(ctx, 31, 0x194FB4u);
    ctx->pc = 0x194FB0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192288u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetRTot_0x192288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194FB4u; }
        else if (ctx->pc != 0x194FB4u) { ctx->pc = 0x194FB4u; }
    }
    if (ctx->pc != 0x194FB4u) { return; }
    ctx->pc = 0x194FB4u;
    // 0x194fb4: 0x50102a
    ctx->pc = 0x194fb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x194fb8: 0xdfbf0010
    ctx->pc = 0x194fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194fbc: 0xdfb00000
    ctx->pc = 0x194fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194fc0: 0x38420001
    ctx->pc = 0x194fc0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x194fc4: 0x3e00008
    ctx->pc = 0x194FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194FC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194FA8u: goto label_194fa8;
            case 0x194FACu: goto label_194fac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194FCCu;
}
