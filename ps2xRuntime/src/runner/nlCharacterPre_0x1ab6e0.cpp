#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlCharacterPre
// Address: 0x1ab6e0 - 0x1ab830
void nlCharacterPre_0x1ab6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlCharacterPre");


    ctx->pc = 0x1ab6e0u;

    // 0x1ab6e0: 0x27bdfff0
    ctx->pc = 0x1ab6e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab6e4: 0x7fbf0000
    ctx->pc = 0x1ab6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ab6e8: 0xc069528
    ctx->pc = 0x1AB6E8u;
    SET_GPR_U32(ctx, 31, 0x1AB6F0u);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6F0u; }
        else if (ctx->pc != 0x1AB6F0u) { ctx->pc = 0x1AB6F0u; }
    }
    if (ctx->pc != 0x1AB6F0u) { return; }
    ctx->pc = 0x1AB6F0u;
    // 0x1ab6f0: 0xaf828a64
    ctx->pc = 0x1ab6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937188), GPR_U32(ctx, 2));
label_1ab6f4:
    // 0x1ab6f4: 0x3c011001
    ctx->pc = 0x1ab6f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1ab6f8: 0x8c23d000
    ctx->pc = 0x1ab6f8u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1ab6fc: 0x30630100
    ctx->pc = 0x1ab6fcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1ab700: 0x0
    ctx->pc = 0x1ab700u;
    // NOP
    // 0x1ab704: 0x0
    ctx->pc = 0x1ab704u;
    // NOP
    // 0x1ab708: 0x1460fffa
    ctx->pc = 0x1AB708u;
    {
        const bool branch_taken_0x1ab708 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ab708) {
            ctx->pc = 0x1AB6F4u;
            goto label_1ab6f4;
        }
    }
    ctx->pc = 0x1AB710u;
    // 0x1ab710: 0x8f858a64
    ctx->pc = 0x1ab710u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab714: 0x3c181000
    ctx->pc = 0x1ab714u;
    SET_GPR_U32(ctx, 24, ((uint32_t)4096 << 16));
    // 0x1ab718: 0x3c035000
    ctx->pc = 0x1ab718u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20480 << 16));
    // 0x1ab71c: 0x3203c
    ctx->pc = 0x1ab71cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab720: 0x24030001
    ctx->pc = 0x1ab720u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab724: 0x646825
    ctx->pc = 0x1ab724u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab728: 0xacb80000
    ctx->pc = 0x1ab728u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 24));
    // 0x1ab72c: 0x8f858a64
    ctx->pc = 0x1ab72cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab730: 0x3c04000e
    ctx->pc = 0x1ab730u;
    SET_GPR_U32(ctx, 4, ((uint32_t)14 << 16));
    // 0x1ab734: 0x348ceeee
    ctx->pc = 0x1ab734u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 4), 61166));
    // 0x1ab738: 0x3c040007
    ctx->pc = 0x1ab738u;
    SET_GPR_U32(ctx, 4, ((uint32_t)7 << 16));
    // 0x1ab73c: 0x3488000e
    ctx->pc = 0x1ab73cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 4), 14));
    // 0x1ab740: 0x3c0e5100
    ctx->pc = 0x1ab740u;
    SET_GPR_U32(ctx, 14, ((uint32_t)20736 << 16));
    // 0x1ab744: 0xaca00004
    ctx->pc = 0x1ab744u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1ab748: 0x8f8f8a64
    ctx->pc = 0x1ab748u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab74c: 0x240b0044
    ctx->pc = 0x1ab74cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 68));
    // 0x1ab750: 0x240a0042
    ctx->pc = 0x1ab750u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 66));
    // 0x1ab754: 0x2409003b
    ctx->pc = 0x1ab754u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 59));
    // 0x1ab758: 0x24070047
    ctx->pc = 0x1ab758u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 71));
    // 0x1ab75c: 0x24060014
    ctx->pc = 0x1ab75cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ab760: 0xadf80008
    ctx->pc = 0x1ab760u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 24));
    // 0x1ab764: 0x8f848a64
    ctx->pc = 0x1ab764u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab768: 0x3c053f80
    ctx->pc = 0x1ab768u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16256 << 16));
    // 0x1ab76c: 0xac80000c
    ctx->pc = 0x1ab76cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1ab770: 0x8f848a64
    ctx->pc = 0x1ab770u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab774: 0xac800010
    ctx->pc = 0x1ab774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1ab778: 0x8f848a64
    ctx->pc = 0x1ab778u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab77c: 0xac800014
    ctx->pc = 0x1ab77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1ab780: 0x8f848a64
    ctx->pc = 0x1ab780u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab784: 0xac800018
    ctx->pc = 0x1ab784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1ab788: 0x8f848a64
    ctx->pc = 0x1ab788u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab78c: 0xac8e001c
    ctx->pc = 0x1ab78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 14));
    // 0x1ab790: 0x8f848a64
    ctx->pc = 0x1ab790u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab794: 0xfc8d0020
    ctx->pc = 0x1ab794u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 13));
    // 0x1ab798: 0x8f848a64
    ctx->pc = 0x1ab798u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab79c: 0xfc8c0028
    ctx->pc = 0x1ab79cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 12));
    // 0x1ab7a0: 0x8f848a64
    ctx->pc = 0x1ab7a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab7a4: 0xfc8b0030
    ctx->pc = 0x1ab7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 11));
    // 0x1ab7a8: 0x8f848a64
    ctx->pc = 0x1ab7a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab7ac: 0xfc8a0038
    ctx->pc = 0x1ab7acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 10));
    // 0x1ab7b0: 0x8f8a8a68
    ctx->pc = 0x1ab7b0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x1ab7b4: 0x8f848a64
    ctx->pc = 0x1ab7b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab7b8: 0xa5602
    ctx->pc = 0x1ab7b8u;
    SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 10), 24));
    // 0x1ab7bc: 0x314a00ff
    ctx->pc = 0x1ab7bcu;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 10), 255));
    // 0x1ab7c0: 0xa503c
    ctx->pc = 0x1ab7c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1ab7c4: 0xfc8a0040
    ctx->pc = 0x1ab7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 10));
    // 0x1ab7c8: 0x8f848a64
    ctx->pc = 0x1ab7c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab7cc: 0xfc890048
    ctx->pc = 0x1ab7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 9));
    // 0x1ab7d0: 0x9f898a6c
    ctx->pc = 0x1ab7d0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 28), 4294937196)));
    // 0x1ab7d4: 0x8f848a64
    ctx->pc = 0x1ab7d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab7d8: 0x1284025
    ctx->pc = 0x1ab7d8u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1ab7dc: 0xfc880050
    ctx->pc = 0x1ab7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 8));
    // 0x1ab7e0: 0x8f848a64
    ctx->pc = 0x1ab7e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab7e4: 0xfc870058
    ctx->pc = 0x1ab7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 7));
    // 0x1ab7e8: 0x8f848a64
    ctx->pc = 0x1ab7e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab7ec: 0xfc800060
    ctx->pc = 0x1ab7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 0));
    // 0x1ab7f0: 0x8f848a64
    ctx->pc = 0x1ab7f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab7f4: 0xfc860068
    ctx->pc = 0x1ab7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 6));
    // 0x1ab7f8: 0x8f868a68
    ctx->pc = 0x1ab7f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x1ab7fc: 0x8f848a64
    ctx->pc = 0x1ab7fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab800: 0xac860070
    ctx->pc = 0x1ab800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 6));
    // 0x1ab804: 0x8f848a64
    ctx->pc = 0x1ab804u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab808: 0xac850074
    ctx->pc = 0x1ab808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 5));
    // 0x1ab80c: 0x8f848a64
    ctx->pc = 0x1ab80cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab810: 0xfc830078
    ctx->pc = 0x1ab810u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 120), GPR_U64(ctx, 3));
    // 0x1ab814: 0x8f838a64
    ctx->pc = 0x1ab814u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab818: 0xaf808a5c
    ctx->pc = 0x1ab818u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937180), GPR_U32(ctx, 0));
    // 0x1ab81c: 0x24630090
    ctx->pc = 0x1ab81cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 144));
    // 0x1ab820: 0xaf838a60
    ctx->pc = 0x1ab820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937184), GPR_U32(ctx, 3));
    // 0x1ab824: 0x7bbf0000
    ctx->pc = 0x1ab824u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab828: 0x3e00008
    ctx->pc = 0x1AB828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB82Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB6F4u: goto label_1ab6f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB830u;
}
