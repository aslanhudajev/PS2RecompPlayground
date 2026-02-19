#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sel_set_choice
// Address: 0x286188 - 0x286204
void sel_set_choice_0x286188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x286188u;

    // 0x286188: 0x2407ffff
    ctx->pc = 0x286188u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28618c: 0x302d
    ctx->pc = 0x28618cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286190: 0x240300e8
    ctx->pc = 0x286190u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 232));
    // 0x286194: 0x831818
    ctx->pc = 0x286194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x286198: 0x3c020035
    ctx->pc = 0x286198u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28619c: 0x2442a63c
    ctx->pc = 0x28619cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944316));
    // 0x2861a0: 0x621821
    ctx->pc = 0x2861a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2861a4: 0x24080024
    ctx->pc = 0x2861a4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 36));
    // 0x2861a8: 0x8c690000
    ctx->pc = 0x2861a8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2861ac: 0x0
    ctx->pc = 0x2861acu;
    // NOP
label_2861b0:
    // 0x2861b0: 0xc81018
    ctx->pc = 0x2861b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2861b4: 0x491821
    ctx->pc = 0x2861b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2861b8: 0x8c620000
    ctx->pc = 0x2861b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2861bc: 0x10400008
    ctx->pc = 0x2861BCu;
    {
        const bool branch_taken_0x2861bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2861bc) {
            ctx->pc = 0x2861E0u;
            goto label_2861e0;
        }
    }
    ctx->pc = 0x2861C4u;
    // 0x2861c4: 0x8c620004
    ctx->pc = 0x2861c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2861c8: 0x5445fff9
    ctx->pc = 0x2861C8u;
    {
        const bool branch_taken_0x2861c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x2861c8) {
            ctx->pc = 0x2861CCu;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x2861B0u;
            goto label_2861b0;
        }
    }
    ctx->pc = 0x2861D0u;
    // 0x2861d0: 0x8c620020
    ctx->pc = 0x2861d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2861d4: 0x442fff6
    ctx->pc = 0x2861D4u;
    {
        const bool branch_taken_0x2861d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2861d4) {
            ctx->pc = 0x2861D8u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x2861B0u;
            goto label_2861b0;
        }
    }
    ctx->pc = 0x2861DCu;
    // 0x2861dc: 0xc0382d
    ctx->pc = 0x2861dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2861e0:
    // 0x2861e0: 0x4e00006
    ctx->pc = 0x2861E0u;
    {
        const bool branch_taken_0x2861e0 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2861E4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x2861e0) {
            ctx->pc = 0x2861FCu;
            goto label_2861fc;
        }
    }
    ctx->pc = 0x2861E8u;
    // 0x2861e8: 0x2463a620
    ctx->pc = 0x2861e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
    // 0x2861ec: 0x240200e8
    ctx->pc = 0x2861ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
    // 0x2861f0: 0x821018
    ctx->pc = 0x2861f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2861f4: 0x621821
    ctx->pc = 0x2861f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2861f8: 0xac670074
    ctx->pc = 0x2861f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 7));
label_2861fc:
    // 0x2861fc: 0x3e00008
    ctx->pc = 0x2861FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2861B0u: goto label_2861b0;
            case 0x2861E0u: goto label_2861e0;
            case 0x2861FCu: goto label_2861fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x286204u;
}
