#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: UTY_MemcpyDword
// Address: 0x1806c8 - 0x180798
void UTY_MemcpyDword_0x1806c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("UTY_MemcpyDword");


    ctx->pc = 0x1806c8u;

    // 0x1806c8: 0x30c3000f
    ctx->pc = 0x1806c8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 15));
    // 0x1806cc: 0x10600009
    ctx->pc = 0x1806CCu;
    {
        const bool branch_taken_0x1806cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1806D0u;
        SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x1806cc) {
            ctx->pc = 0x1806F4u;
            goto label_1806f4;
        }
    }
    ctx->pc = 0x1806D4u;
    // 0x1806d4: 0x0
    ctx->pc = 0x1806d4u;
    // NOP
label_1806d8:
    // 0x1806d8: 0x8ca20000
    ctx->pc = 0x1806d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1806dc: 0x2463ffff
    ctx->pc = 0x1806dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1806e0: 0x24a50004
    ctx->pc = 0x1806e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1806e4: 0xac820000
    ctx->pc = 0x1806e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1806e8: 0x24840004
    ctx->pc = 0x1806e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x1806ec: 0x1460fffa
    ctx->pc = 0x1806ECu;
    {
        const bool branch_taken_0x1806ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1806ec) {
            ctx->pc = 0x1806D8u;
            goto label_1806d8;
        }
    }
    ctx->pc = 0x1806F4u;
label_1806f4:
    // 0x1806f4: 0x10c00026
    ctx->pc = 0x1806F4u;
    {
        const bool branch_taken_0x1806f4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x1806F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x1806f4) {
            ctx->pc = 0x180790u;
            goto label_180790;
        }
    }
    ctx->pc = 0x1806FCu;
    // 0x1806fc: 0x0
    ctx->pc = 0x1806fcu;
    // NOP
label_180700:
    // 0x180700: 0x8c43fffc
    ctx->pc = 0x180700u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x180704: 0x24c6ffff
    ctx->pc = 0x180704u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x180708: 0x8c450000
    ctx->pc = 0x180708u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18070c: 0x8c470004
    ctx->pc = 0x18070cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x180710: 0x8c480008
    ctx->pc = 0x180710u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x180714: 0xac830000
    ctx->pc = 0x180714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x180718: 0xac850004
    ctx->pc = 0x180718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x18071c: 0xac870008
    ctx->pc = 0x18071cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x180720: 0xac88000c
    ctx->pc = 0x180720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x180724: 0x8c480018
    ctx->pc = 0x180724u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x180728: 0x8c43000c
    ctx->pc = 0x180728u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18072c: 0x8c450010
    ctx->pc = 0x18072cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x180730: 0x8c470014
    ctx->pc = 0x180730u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x180734: 0xac830010
    ctx->pc = 0x180734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x180738: 0xac850014
    ctx->pc = 0x180738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x18073c: 0xac870018
    ctx->pc = 0x18073cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
    // 0x180740: 0xac88001c
    ctx->pc = 0x180740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 8));
    // 0x180744: 0x8c480028
    ctx->pc = 0x180744u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x180748: 0x8c43001c
    ctx->pc = 0x180748u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x18074c: 0x8c450020
    ctx->pc = 0x18074cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x180750: 0x8c470024
    ctx->pc = 0x180750u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x180754: 0xac830020
    ctx->pc = 0x180754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x180758: 0xac850024
    ctx->pc = 0x180758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x18075c: 0xac870028
    ctx->pc = 0x18075cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 7));
    // 0x180760: 0xac88002c
    ctx->pc = 0x180760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 8));
    // 0x180764: 0x8c480038
    ctx->pc = 0x180764u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x180768: 0x8c43002c
    ctx->pc = 0x180768u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x18076c: 0x8c450030
    ctx->pc = 0x18076cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x180770: 0x8c470034
    ctx->pc = 0x180770u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x180774: 0xac830030
    ctx->pc = 0x180774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x180778: 0x24420040
    ctx->pc = 0x180778u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 64));
    // 0x18077c: 0xac850034
    ctx->pc = 0x18077cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x180780: 0xac870038
    ctx->pc = 0x180780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 7));
    // 0x180784: 0xac88003c
    ctx->pc = 0x180784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 8));
    // 0x180788: 0x14c0ffdd
    ctx->pc = 0x180788u;
    {
        const bool branch_taken_0x180788 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x18078Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x180788) {
            ctx->pc = 0x180700u;
            goto label_180700;
        }
    }
    ctx->pc = 0x180790u;
label_180790:
    // 0x180790: 0x3e00008
    ctx->pc = 0x180790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1806D8u: goto label_1806d8;
            case 0x1806F4u: goto label_1806f4;
            case 0x180700u: goto label_180700;
            case 0x180790u: goto label_180790;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180798u;
}
