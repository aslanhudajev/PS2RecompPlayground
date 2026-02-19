#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ipbObjDmaSend
// Address: 0x2a82e8 - 0x2a8440
void ipbObjDmaSend_0x2a82e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a82e8u;

    // 0x2a82e8: 0x27bdffd0
    ctx->pc = 0x2a82e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a82ec: 0xffbf0020
    ctx->pc = 0x2a82ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a82f0: 0xffbe0010
    ctx->pc = 0x2a82f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2a82f4: 0x3a0f02d
    ctx->pc = 0x2a82f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82f8: 0xafc40000
    ctx->pc = 0x2a82f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a82fc: 0xafc00004
    ctx->pc = 0x2a82fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x2a8300: 0x8fc20000
    ctx->pc = 0x2a8300u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a8304: 0x40182d
    ctx->pc = 0x2a8304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8308: 0x31080
    ctx->pc = 0x2a8308u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a830c: 0x3c030037
    ctx->pc = 0x2a830cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a8310: 0x24632d90
    ctx->pc = 0x2a8310u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11664));
    // 0x2a8314: 0x621021
    ctx->pc = 0x2a8314u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a8318: 0x8c430000
    ctx->pc = 0x2a8318u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a831c: 0x3c020fff
    ctx->pc = 0x2a831cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2a8320: 0x3442ffff
    ctx->pc = 0x2a8320u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2a8324: 0x621824
    ctx->pc = 0x2a8324u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a8328: 0xafc30008
    ctx->pc = 0x2a8328u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
    // 0x2a832c: 0x40024800
    ctx->pc = 0x2a832cu;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x2a8330: 0x40182d
    ctx->pc = 0x2a8330u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8334: 0xafc3000c
    ctx->pc = 0x2a8334u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 3));
    // 0x2a8338: 0x8fc2000c
    ctx->pc = 0x2a8338u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a833c: 0x3c01003a
    ctx->pc = 0x2a833cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
    // 0x2a8340: 0xac2220c8
    ctx->pc = 0x2a8340u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8392), GPR_U32(ctx, 2));
    // 0x2a8344: 0x0
    ctx->pc = 0x2a8344u;
    // NOP
label_2a8348:
    // 0x2a8348: 0x3c031001
    ctx->pc = 0x2a8348u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4097 << 16));
    // 0x2a834c: 0x8c639000
    ctx->pc = 0x2a834cu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294938624))); // MMIO: 0x10009000
    // 0x2a8350: 0x30620100
    ctx->pc = 0x2a8350u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 256));
    // 0x2a8354: 0x14400003
    ctx->pc = 0x2A8354u;
    {
        const bool branch_taken_0x2a8354 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a8354) {
            ctx->pc = 0x2A8364u;
            goto label_2a8364;
        }
    }
    ctx->pc = 0x2A835Cu;
    // 0x2a835c: 0x10000011
    ctx->pc = 0x2A835Cu;
    {
        const bool branch_taken_0x2a835c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a835c) {
            ctx->pc = 0x2A83A4u;
            goto label_2a83a4;
        }
    }
    ctx->pc = 0x2A8364u;
label_2a8364:
    // 0x2a8364: 0x8fc20004
    ctx->pc = 0x2a8364u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a8368: 0x24430001
    ctx->pc = 0x2a8368u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a836c: 0x60102d
    ctx->pc = 0x2a836cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8370: 0xafc20004
    ctx->pc = 0x2a8370u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a8374: 0x3c03000f
    ctx->pc = 0x2a8374u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15 << 16));
    // 0x2a8378: 0x34634240
    ctx->pc = 0x2a8378u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16960));
    // 0x2a837c: 0x62102a
    ctx->pc = 0x2a837cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2a8380: 0x10400006
    ctx->pc = 0x2A8380u;
    {
        const bool branch_taken_0x2a8380 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8380) {
            ctx->pc = 0x2A839Cu;
            goto label_2a839c;
        }
    }
    ctx->pc = 0x2A8388u;
    // 0x2a8388: 0x3c04003b
    ctx->pc = 0x2a8388u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a838c: 0x2484f390
    ctx->pc = 0x2a838cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964112));
    // 0x2a8390: 0x3c050080
    ctx->pc = 0x2a8390u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x2a8394: 0xc0b49a6
    ctx->pc = 0x2A8394u;
    SET_GPR_U32(ctx, 31, 0x2A839Cu);
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A839Cu; }
    }
    if (ctx->pc != 0x2A839Cu) { return; }
    ctx->pc = 0x2A839Cu;
label_2a839c:
    // 0x2a839c: 0x1000ffea
    ctx->pc = 0x2A839Cu;
    {
        const bool branch_taken_0x2a839c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a839c) {
            ctx->pc = 0x2A8348u;
            goto label_2a8348;
        }
    }
    ctx->pc = 0x2A83A4u;
label_2a83a4:
    // 0x2a83a4: 0x3c011001
    ctx->pc = 0x2a83a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x2a83a8: 0xac209020
    ctx->pc = 0x2a83a8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294938656), GPR_U32(ctx, 0)); // MMIO: 0x10009020
    // 0x2a83ac: 0x8fc20008
    ctx->pc = 0x2a83acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a83b0: 0x3c011001
    ctx->pc = 0x2a83b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x2a83b4: 0xac229030
    ctx->pc = 0x2a83b4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294938672), GPR_U32(ctx, 2)); // MMIO: 0x10009030
    // 0x2a83b8: 0x24020002
    ctx->pc = 0x2a83b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a83bc: 0x3c011001
    ctx->pc = 0x2a83bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x2a83c0: 0xac22e010
    ctx->pc = 0x2a83c0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294959120), GPR_U32(ctx, 2)); // MMIO: 0x1000e010
    // 0x2a83c4: 0x24020145
    ctx->pc = 0x2a83c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 325));
    // 0x2a83c8: 0x3c011001
    ctx->pc = 0x2a83c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x2a83cc: 0xac229000
    ctx->pc = 0x2a83ccu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294938624), GPR_U32(ctx, 2)); // MMIO: 0x10009000
    // 0x2a83d0: 0x8fc20000
    ctx->pc = 0x2a83d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a83d4: 0x3c010037
    ctx->pc = 0x2a83d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2a83d8: 0xac222958
    ctx->pc = 0x2a83d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10584), GPR_U32(ctx, 2));
    // 0x2a83dc: 0x40024800
    ctx->pc = 0x2a83dcu;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x2a83e0: 0x40182d
    ctx->pc = 0x2a83e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a83e4: 0xafc3000c
    ctx->pc = 0x2a83e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 3));
    // 0x2a83e8: 0x8fc2000c
    ctx->pc = 0x2a83e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a83ec: 0x3c03003a
    ctx->pc = 0x2a83ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2a83f0: 0x8c6320c8
    ctx->pc = 0x2a83f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8392)));
    // 0x2a83f4: 0x431023
    ctx->pc = 0x2a83f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a83f8: 0xafc2000c
    ctx->pc = 0x2a83f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x2a83fc: 0x3c02003a
    ctx->pc = 0x2a83fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2a8400: 0x8c4220c0
    ctx->pc = 0x2a8400u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8384)));
    // 0x2a8404: 0x8fc3000c
    ctx->pc = 0x2a8404u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a8408: 0x431021
    ctx->pc = 0x2a8408u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a840c: 0x3c01003a
    ctx->pc = 0x2a840cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
    // 0x2a8410: 0xac2220c0
    ctx->pc = 0x2a8410u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8384), GPR_U32(ctx, 2));
    // 0x2a8414: 0x3c02003a
    ctx->pc = 0x2a8414u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2a8418: 0x8c4220c4
    ctx->pc = 0x2a8418u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8388)));
    // 0x2a841c: 0x24430001
    ctx->pc = 0x2a841cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a8420: 0x3c01003a
    ctx->pc = 0x2a8420u;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
    // 0x2a8424: 0xac2320c4
    ctx->pc = 0x2a8424u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8388), GPR_U32(ctx, 3));
    // 0x2a8428: 0x3c0e82d
    ctx->pc = 0x2a8428u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a842c: 0xdfbf0020
    ctx->pc = 0x2a842cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8430: 0xdfbe0010
    ctx->pc = 0x2a8430u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8434: 0x27bd0030
    ctx->pc = 0x2a8434u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a8438: 0x3e00008
    ctx->pc = 0x2A8438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A8348u: goto label_2a8348;
            case 0x2A8364u: goto label_2a8364;
            case 0x2A839Cu: goto label_2a839c;
            case 0x2A83A4u: goto label_2a83a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A8440u;
}
