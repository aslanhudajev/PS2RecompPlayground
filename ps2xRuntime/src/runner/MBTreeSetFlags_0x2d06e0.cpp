#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBTreeSetFlags
// Address: 0x2d06e0 - 0x2d0790
void MBTreeSetFlags_0x2d06e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d06e0u;

label_2d06e0:
    // 0x2d06e0: 0x27bdffb0
    ctx->pc = 0x2d06e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d06e4: 0xffbf0040
    ctx->pc = 0x2d06e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d06e8: 0xffb30030
    ctx->pc = 0x2d06e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d06ec: 0xffb20020
    ctx->pc = 0x2d06ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d06f0: 0xffb10010
    ctx->pc = 0x2d06f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d06f4: 0xffb00000
    ctx->pc = 0x2d06f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d06f8: 0x80802d
    ctx->pc = 0x2d06f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d06fc: 0xa0902d
    ctx->pc = 0x2d06fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0700: 0xc0882d
    ctx->pc = 0x2d0700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0704: 0x1000000b
    ctx->pc = 0x2D0704u;
    {
        const bool branch_taken_0x2d0704 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0708u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2d0704) {
            ctx->pc = 0x2D0734u;
            goto label_2d0734;
        }
    }
    ctx->pc = 0x2D070Cu;
    // 0x2d070c: 0x0
    ctx->pc = 0x2d070cu;
    // NOP
label_2d0710:
    // 0x2d0710: 0x12000019
    ctx->pc = 0x2D0710u;
    {
        const bool branch_taken_0x2d0710 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0714u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2d0710) {
            ctx->pc = 0x2D0778u;
            goto label_2d0778;
        }
    }
    ctx->pc = 0x2D0718u;
    // 0x2d0718: 0x8e10007c
    ctx->pc = 0x2d0718u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2d071c: 0x52000017
    ctx->pc = 0x2D071Cu;
    {
        const bool branch_taken_0x2d071c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d071c) {
            ctx->pc = 0x2D0720u;
            SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->pc = 0x2D077Cu;
            goto label_2d077c;
        }
    }
    ctx->pc = 0x2D0724u;
    // 0x2d0724: 0x8e020060
    ctx->pc = 0x2d0724u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d0728: 0x30420010
    ctx->pc = 0x2d0728u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d072c: 0x1440fff8
    ctx->pc = 0x2D072Cu;
    {
        const bool branch_taken_0x2d072c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d072c) {
            ctx->pc = 0x2D0710u;
            goto label_2d0710;
        }
    }
    ctx->pc = 0x2D0734u;
label_2d0734:
    // 0x2d0734: 0x52000010
    ctx->pc = 0x2D0734u;
    {
        const bool branch_taken_0x2d0734 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d0734) {
            ctx->pc = 0x2D0738u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->pc = 0x2D0778u;
            goto label_2d0778;
        }
    }
    ctx->pc = 0x2D073Cu;
    // 0x2d073c: 0x8e020060
    ctx->pc = 0x2d073cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d0740: 0x2421025
    ctx->pc = 0x2d0740u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d0744: 0x1220000a
    ctx->pc = 0x2D0744u;
    {
        const bool branch_taken_0x2d0744 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0748u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        if (branch_taken_0x2d0744) {
            ctx->pc = 0x2D0770u;
            goto label_2d0770;
        }
    }
    ctx->pc = 0x2D074Cu;
    // 0x2d074c: 0x8e040078
    ctx->pc = 0x2d074cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2d0750: 0x10800007
    ctx->pc = 0x2D0750u;
    {
        const bool branch_taken_0x2d0750 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d0750) {
            ctx->pc = 0x2D0770u;
            goto label_2d0770;
        }
    }
    ctx->pc = 0x2D0758u;
    // 0x2d0758: 0x8c820060
    ctx->pc = 0x2d0758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2d075c: 0x30420010
    ctx->pc = 0x2d075cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d0760: 0x14400003
    ctx->pc = 0x2D0760u;
    {
        const bool branch_taken_0x2d0760 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D0764u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d0760) {
            ctx->pc = 0x2D0770u;
            goto label_2d0770;
        }
    }
    ctx->pc = 0x2D0768u;
    // 0x2d0768: 0xc0b41b8
    ctx->pc = 0x2D0768u;
    SET_GPR_U32(ctx, 31, 0x2D0770u);
    ctx->pc = 0x2D076Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D06E0u;
    goto label_2d06e0;
    ctx->pc = 0x2D0770u;
label_2d0770:
    // 0x2d0770: 0x1233ffe7
    ctx->pc = 0x2D0770u;
    {
        const bool branch_taken_0x2d0770 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 19));
        ctx->pc = 0x2D0774u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2d0770) {
            ctx->pc = 0x2D0710u;
            goto label_2d0710;
        }
    }
    ctx->pc = 0x2D0778u;
label_2d0778:
    // 0x2d0778: 0xdfb30030
    ctx->pc = 0x2d0778u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d077c:
    // 0x2d077c: 0xdfb20020
    ctx->pc = 0x2d077cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0780: 0xdfb10010
    ctx->pc = 0x2d0780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0784: 0xdfb00000
    ctx->pc = 0x2d0784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0788: 0x3e00008
    ctx->pc = 0x2D0788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D078Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D06E0u: goto label_2d06e0;
            case 0x2D0710u: goto label_2d0710;
            case 0x2D0734u: goto label_2d0734;
            case 0x2D0770u: goto label_2d0770;
            case 0x2D0778u: goto label_2d0778;
            case 0x2D077Cu: goto label_2d077c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D0790u;
}
