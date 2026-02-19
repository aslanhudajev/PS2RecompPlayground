#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBTreeSetAlpha
// Address: 0x2d0300 - 0x2d03dc
void MBTreeSetAlpha_0x2d0300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0300u;

label_2d0300:
    // 0x2d0300: 0x27bdff90
    ctx->pc = 0x2d0300u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d0304: 0xffbf0060
    ctx->pc = 0x2d0304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d0308: 0xffb50050
    ctx->pc = 0x2d0308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2d030c: 0xffb40040
    ctx->pc = 0x2d030cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d0310: 0xffb30030
    ctx->pc = 0x2d0310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d0314: 0xffb20020
    ctx->pc = 0x2d0314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d0318: 0xffb10010
    ctx->pc = 0x2d0318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d031c: 0xffb00000
    ctx->pc = 0x2d031cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0320: 0x80802d
    ctx->pc = 0x2d0320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0324: 0xa0882d
    ctx->pc = 0x2d0324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0328: 0xc0902d
    ctx->pc = 0x2d0328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d032c: 0x119827
    ctx->pc = 0x2d032cu;
    SET_GPR_U32(ctx, 19, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x2d0330: 0x3c15ffff
    ctx->pc = 0x2d0330u;
    SET_GPR_U32(ctx, 21, ((uint32_t)65535 << 16));
    // 0x2d0334: 0x36b5fdff
    ctx->pc = 0x2d0334u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 21), 65023));
    // 0x2d0338: 0x1000000a
    ctx->pc = 0x2D0338u;
    {
        const bool branch_taken_0x2d0338 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D033Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2d0338) {
            ctx->pc = 0x2D0364u;
            goto label_2d0364;
        }
    }
    ctx->pc = 0x2D0340u;
label_2d0340:
    // 0x2d0340: 0x1200001e
    ctx->pc = 0x2D0340u;
    {
        const bool branch_taken_0x2d0340 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0344u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x2d0340) {
            ctx->pc = 0x2D03BCu;
            goto label_2d03bc;
        }
    }
    ctx->pc = 0x2D0348u;
    // 0x2d0348: 0x8e10007c
    ctx->pc = 0x2d0348u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2d034c: 0x5200001c
    ctx->pc = 0x2D034Cu;
    {
        const bool branch_taken_0x2d034c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d034c) {
            ctx->pc = 0x2D0350u;
            SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->pc = 0x2D03C0u;
            goto label_2d03c0;
        }
    }
    ctx->pc = 0x2D0354u;
    // 0x2d0354: 0x8e020060
    ctx->pc = 0x2d0354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d0358: 0x30420010
    ctx->pc = 0x2d0358u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d035c: 0x1440fff8
    ctx->pc = 0x2D035Cu;
    {
        const bool branch_taken_0x2d035c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d035c) {
            ctx->pc = 0x2D0340u;
            goto label_2d0340;
        }
    }
    ctx->pc = 0x2D0364u;
label_2d0364:
    // 0x2d0364: 0x52000015
    ctx->pc = 0x2D0364u;
    {
        const bool branch_taken_0x2d0364 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d0364) {
            ctx->pc = 0x2D0368u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->pc = 0x2D03BCu;
            goto label_2d03bc;
        }
    }
    ctx->pc = 0x2D036Cu;
    // 0x2d036c: 0x1a200004
    ctx->pc = 0x2D036Cu;
    {
        const bool branch_taken_0x2d036c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2D0370u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 83), (uint8_t)GPR_U32(ctx, 19));
        if (branch_taken_0x2d036c) {
            ctx->pc = 0x2D0380u;
            goto label_2d0380;
        }
    }
    ctx->pc = 0x2D0374u;
    // 0x2d0374: 0x8e020060
    ctx->pc = 0x2d0374u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d0378: 0x10000003
    ctx->pc = 0x2D0378u;
    {
        const bool branch_taken_0x2d0378 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D037Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 512));
        if (branch_taken_0x2d0378) {
            ctx->pc = 0x2D0388u;
            goto label_2d0388;
        }
    }
    ctx->pc = 0x2D0380u;
label_2d0380:
    // 0x2d0380: 0x8e020060
    ctx->pc = 0x2d0380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d0384: 0x551024
    ctx->pc = 0x2d0384u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2d0388:
    // 0x2d0388: 0x1240000a
    ctx->pc = 0x2D0388u;
    {
        const bool branch_taken_0x2d0388 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D038Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        if (branch_taken_0x2d0388) {
            ctx->pc = 0x2D03B4u;
            goto label_2d03b4;
        }
    }
    ctx->pc = 0x2D0390u;
    // 0x2d0390: 0x8e040078
    ctx->pc = 0x2d0390u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2d0394: 0x10800007
    ctx->pc = 0x2D0394u;
    {
        const bool branch_taken_0x2d0394 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d0394) {
            ctx->pc = 0x2D03B4u;
            goto label_2d03b4;
        }
    }
    ctx->pc = 0x2D039Cu;
    // 0x2d039c: 0x8c820060
    ctx->pc = 0x2d039cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2d03a0: 0x30420010
    ctx->pc = 0x2d03a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d03a4: 0x14400003
    ctx->pc = 0x2D03A4u;
    {
        const bool branch_taken_0x2d03a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D03A8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d03a4) {
            ctx->pc = 0x2D03B4u;
            goto label_2d03b4;
        }
    }
    ctx->pc = 0x2D03ACu;
    // 0x2d03ac: 0xc0b40c0
    ctx->pc = 0x2D03ACu;
    SET_GPR_U32(ctx, 31, 0x2D03B4u);
    ctx->pc = 0x2D03B0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D0300u;
    goto label_2d0300;
    ctx->pc = 0x2D03B4u;
label_2d03b4:
    // 0x2d03b4: 0x1254ffe2
    ctx->pc = 0x2D03B4u;
    {
        const bool branch_taken_0x2d03b4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 20));
        ctx->pc = 0x2D03B8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x2d03b4) {
            ctx->pc = 0x2D0340u;
            goto label_2d0340;
        }
    }
    ctx->pc = 0x2D03BCu;
label_2d03bc:
    // 0x2d03bc: 0xdfb50050
    ctx->pc = 0x2d03bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2d03c0:
    // 0x2d03c0: 0xdfb40040
    ctx->pc = 0x2d03c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d03c4: 0xdfb30030
    ctx->pc = 0x2d03c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d03c8: 0xdfb20020
    ctx->pc = 0x2d03c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d03cc: 0xdfb10010
    ctx->pc = 0x2d03ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d03d0: 0xdfb00000
    ctx->pc = 0x2d03d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d03d4: 0x3e00008
    ctx->pc = 0x2D03D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D03D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0300u: goto label_2d0300;
            case 0x2D0340u: goto label_2d0340;
            case 0x2D0364u: goto label_2d0364;
            case 0x2D0380u: goto label_2d0380;
            case 0x2D0388u: goto label_2d0388;
            case 0x2D03B4u: goto label_2d03b4;
            case 0x2D03BCu: goto label_2d03bc;
            case 0x2D03C0u: goto label_2d03c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D03DCu;
}
