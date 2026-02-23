#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: WAIT_FRM__13EventCtrlTaskFv
// Address: 0x1e3760 - 0x1e382c
void WAIT_FRM__13EventCtrlTaskFv_0x1e3760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("WAIT_FRM__13EventCtrlTaskFv");


    ctx->pc = 0x1e3760u;

    // 0x1e3760: 0x8f838ce8
    ctx->pc = 0x1e3760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
    // 0x1e3764: 0x10600006
    ctx->pc = 0x1E3764u;
    {
        const bool branch_taken_0x1e3764 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e3764) {
            ctx->pc = 0x1E3780u;
            goto label_1e3780;
        }
    }
    ctx->pc = 0x1E376Cu;
    // 0x1e376c: 0xa0800004
    ctx->pc = 0x1e376cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3770: 0x8c83000c
    ctx->pc = 0x1e3770u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3774: 0x24630008
    ctx->pc = 0x1e3774u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3778: 0x1000002a
    ctx->pc = 0x1E3778u;
    {
        const bool branch_taken_0x1e3778 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E377Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x1e3778) {
            ctx->pc = 0x1E3824u;
            goto label_1e3824;
        }
    }
    ctx->pc = 0x1E3780u;
label_1e3780:
    // 0x1e3780: 0x80850004
    ctx->pc = 0x1e3780u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e3784: 0x24030001
    ctx->pc = 0x1e3784u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3788: 0x10a30015
    ctx->pc = 0x1E3788u;
    {
        const bool branch_taken_0x1e3788 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e3788) {
            ctx->pc = 0x1E37E0u;
            goto label_1e37e0;
        }
    }
    ctx->pc = 0x1E3790u;
    // 0x1e3790: 0x8c86000c
    ctx->pc = 0x1e3790u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3794: 0x3c038888
    ctx->pc = 0x1e3794u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
    // 0x1e3798: 0x34658889
    ctx->pc = 0x1e3798u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 34953));
    // 0x1e379c: 0x24030001
    ctx->pc = 0x1e379cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e37a0: 0x8cc70004
    ctx->pc = 0x1e37a0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1e37a4: 0x73080
    ctx->pc = 0x1e37a4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e37a8: 0xc73821
    ctx->pc = 0x1e37a8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1e37ac: 0x73080
    ctx->pc = 0x1e37acu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e37b0: 0xe63021
    ctx->pc = 0x1e37b0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1e37b4: 0x63840
    ctx->pc = 0x1e37b4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1e37b8: 0xa70018
    ctx->pc = 0x1e37b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x1e37bc: 0x737c2
    ctx->pc = 0x1e37bcu;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
    // 0x1e37c0: 0x0
    ctx->pc = 0x1e37c0u;
    // NOP
    // 0x1e37c4: 0x2810
    ctx->pc = 0x1e37c4u;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x1e37c8: 0xa72821
    ctx->pc = 0x1e37c8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1e37cc: 0x52943
    ctx->pc = 0x1e37ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x1e37d0: 0xa62821
    ctx->pc = 0x1e37d0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e37d4: 0xac850014
    ctx->pc = 0x1e37d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x1e37d8: 0x10000012
    ctx->pc = 0x1E37D8u;
    {
        const bool branch_taken_0x1e37d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E37DCu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1e37d8) {
            ctx->pc = 0x1E3824u;
            goto label_1e3824;
        }
    }
    ctx->pc = 0x1E37E0u;
label_1e37e0:
    // 0x1e37e0: 0x8c830014
    ctx->pc = 0x1e37e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1e37e4: 0x4600003
    ctx->pc = 0x1E37E4u;
    {
        const bool branch_taken_0x1e37e4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e37e4) {
            ctx->pc = 0x1E37F4u;
            goto label_1e37f4;
        }
    }
    ctx->pc = 0x1E37ECu;
    // 0x1e37ec: 0x2463ffff
    ctx->pc = 0x1e37ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e37f0: 0xac830014
    ctx->pc = 0x1e37f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_1e37f4:
    // 0x1e37f4: 0x8c830014
    ctx->pc = 0x1e37f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1e37f8: 0x461000a
    ctx->pc = 0x1E37F8u;
    {
        const bool branch_taken_0x1e37f8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e37f8) {
            ctx->pc = 0x1E3824u;
            goto label_1e3824;
        }
    }
    ctx->pc = 0x1E3800u;
    // 0x1e3800: 0x83838b2c
    ctx->pc = 0x1e3800u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x1e3804: 0x10600007
    ctx->pc = 0x1E3804u;
    {
        const bool branch_taken_0x1e3804 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e3804) {
            ctx->pc = 0x1E3824u;
            goto label_1e3824;
        }
    }
    ctx->pc = 0x1E380Cu;
    // 0x1e380c: 0x2403ffff
    ctx->pc = 0x1e380cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e3810: 0xac830014
    ctx->pc = 0x1e3810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1e3814: 0xa0800004
    ctx->pc = 0x1e3814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3818: 0x8c83000c
    ctx->pc = 0x1e3818u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e381c: 0x24630008
    ctx->pc = 0x1e381cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3820: 0xac83000c
    ctx->pc = 0x1e3820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1e3824:
    // 0x1e3824: 0x3e00008
    ctx->pc = 0x1E3824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3780u: goto label_1e3780;
            case 0x1E37E0u: goto label_1e37e0;
            case 0x1E37F4u: goto label_1e37f4;
            case 0x1E3824u: goto label_1e3824;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E382Cu;
}
