#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufReset
// Address: 0x2df310 - 0x2df474
void viBufReset_0x2df310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2df310u;

    // 0x2df310: 0x27bdffc0
    ctx->pc = 0x2df310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2df314: 0xffbf0030
    ctx->pc = 0x2df314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2df318: 0xffb20020
    ctx->pc = 0x2df318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2df31c: 0xffb10010
    ctx->pc = 0x2df31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2df320: 0xffb00000
    ctx->pc = 0x2df320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2df324: 0x80882d
    ctx->pc = 0x2df324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df328: 0xae20000c
    ctx->pc = 0x2df328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2df32c: 0xae200010
    ctx->pc = 0x2df32cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2df330: 0xae200014
    ctx->pc = 0x2df330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2df334: 0x24020001
    ctx->pc = 0x2df334u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df338: 0xae220044
    ctx->pc = 0x2df338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x2df33c: 0xae200058
    ctx->pc = 0x2df33cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x2df340: 0xae20005c
    ctx->pc = 0x2df340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x2df344: 0x8e220054
    ctx->pc = 0x2df344u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2df348: 0x18400016
    ctx->pc = 0x2DF348u;
    {
        const bool branch_taken_0x2df348 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DF34Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2df348) {
            ctx->pc = 0x2DF3A4u;
            goto label_2df3a4;
        }
    }
    ctx->pc = 0x2DF350u;
    // 0x2df350: 0x24050018
    ctx->pc = 0x2df350u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2df354: 0x2404ffff
    ctx->pc = 0x2df354u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2df358: 0x8e220050
    ctx->pc = 0x2df358u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2df35c: 0x0
    ctx->pc = 0x2df35cu;
    // NOP
label_2df360:
    // 0x2df360: 0x2051818
    ctx->pc = 0x2df360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2df364: 0x621021
    ctx->pc = 0x2df364u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2df368: 0xfc440000
    ctx->pc = 0x2df368u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x2df36c: 0x8e220050
    ctx->pc = 0x2df36cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2df370: 0x621021
    ctx->pc = 0x2df370u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2df374: 0xfc440008
    ctx->pc = 0x2df374u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x2df378: 0x8e220050
    ctx->pc = 0x2df378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2df37c: 0x621021
    ctx->pc = 0x2df37cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2df380: 0xac400010
    ctx->pc = 0x2df380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2df384: 0x8e220050
    ctx->pc = 0x2df384u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2df388: 0x621821
    ctx->pc = 0x2df388u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2df38c: 0xac600014
    ctx->pc = 0x2df38cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x2df390: 0x26100001
    ctx->pc = 0x2df390u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2df394: 0x8e220054
    ctx->pc = 0x2df394u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2df398: 0x202102a
    ctx->pc = 0x2df398u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2df39c: 0x5440fff0
    ctx->pc = 0x2DF39Cu;
    {
        const bool branch_taken_0x2df39c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2df39c) {
            ctx->pc = 0x2DF3A0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->pc = 0x2DF360u;
            goto label_2df360;
        }
    }
    ctx->pc = 0x2DF3A4u;
label_2df3a4:
    // 0x2df3a4: 0x8e220008
    ctx->pc = 0x2df3a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2df3a8: 0x18400013
    ctx->pc = 0x2DF3A8u;
    {
        const bool branch_taken_0x2df3a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DF3ACu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2df3a8) {
            ctx->pc = 0x2DF3F8u;
            goto label_2df3f8;
        }
    }
    ctx->pc = 0x2DF3B0u;
    // 0x2df3b0: 0x3c120fff
    ctx->pc = 0x2df3b0u;
    SET_GPR_U32(ctx, 18, ((uint32_t)4095 << 16));
    // 0x2df3b4: 0x3652ffff
    ctx->pc = 0x2df3b4u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 65535));
    // 0x2df3b8: 0x101900
    ctx->pc = 0x2df3b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
    // 0x2df3bc: 0x0
    ctx->pc = 0x2df3bcu;
    // NOP
label_2df3c0:
    // 0x2df3c0: 0x8e240004
    ctx->pc = 0x2df3c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2df3c4: 0x102ac0
    ctx->pc = 0x2df3c4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 16), 11));
    // 0x2df3c8: 0x8e220000
    ctx->pc = 0x2df3c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2df3cc: 0xa22821
    ctx->pc = 0x2df3ccu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2df3d0: 0x642021
    ctx->pc = 0x2df3d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2df3d4: 0xb22824
    ctx->pc = 0x2df3d4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2df3d8: 0x24060003
    ctx->pc = 0x2df3d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2df3dc: 0xc0b7c9c
    ctx->pc = 0x2DF3DCu;
    SET_GPR_U32(ctx, 31, 0x2DF3E4u);
    ctx->pc = 0x2DF3E0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x2DF270u;
    {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x2df270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF3E4u; }
    }
    if (ctx->pc != 0x2DF3E4u) { return; }
    ctx->pc = 0x2DF3E4u;
    // 0x2df3e4: 0x26100001
    ctx->pc = 0x2df3e4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2df3e8: 0x8e220008
    ctx->pc = 0x2df3e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2df3ec: 0x202102a
    ctx->pc = 0x2df3ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2df3f0: 0x1440fff3
    ctx->pc = 0x2DF3F0u;
    {
        const bool branch_taken_0x2df3f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DF3F4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x2df3f0) {
            ctx->pc = 0x2DF3C0u;
            goto label_2df3c0;
        }
    }
    ctx->pc = 0x2DF3F8u;
label_2df3f8:
    // 0x2df3f8: 0x102100
    ctx->pc = 0x2df3f8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 4));
    // 0x2df3fc: 0x8e250004
    ctx->pc = 0x2df3fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2df400: 0x3c100fff
    ctx->pc = 0x2df400u;
    SET_GPR_U32(ctx, 16, ((uint32_t)4095 << 16));
    // 0x2df404: 0x3610ffff
    ctx->pc = 0x2df404u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 65535));
    // 0x2df408: 0x852021
    ctx->pc = 0x2df408u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2df40c: 0xb02824
    ctx->pc = 0x2df40cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2df410: 0x24060002
    ctx->pc = 0x2df410u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df414: 0xc0b7c9c
    ctx->pc = 0x2DF414u;
    SET_GPR_U32(ctx, 31, 0x2DF41Cu);
    ctx->pc = 0x2DF418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DF270u;
    {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x2df270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF41Cu; }
    }
    if (ctx->pc != 0x2DF41Cu) { return; }
    ctx->pc = 0x2DF41Cu;
    // 0x2df41c: 0x3c021000
    ctx->pc = 0x2df41cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2df420: 0x3442b420
    ctx->pc = 0x2df420u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46112));
    // 0x2df424: 0xac400000
    ctx->pc = 0x2df424u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2df428: 0x3c031000
    ctx->pc = 0x2df428u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2df42c: 0x3463b410
    ctx->pc = 0x2df42cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46096));
    // 0x2df430: 0x8e220000
    ctx->pc = 0x2df430u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2df434: 0x501024
    ctx->pc = 0x2df434u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2df438: 0xac620000
    ctx->pc = 0x2df438u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x2df43c: 0x3c031000
    ctx->pc = 0x2df43cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2df440: 0x3463b430
    ctx->pc = 0x2df440u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46128));
    // 0x2df444: 0x8e220004
    ctx->pc = 0x2df444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2df448: 0x501024
    ctx->pc = 0x2df448u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2df44c: 0xac620000
    ctx->pc = 0x2df44cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x2df450: 0xc0b7c80
    ctx->pc = 0x2DF450u;
    SET_GPR_U32(ctx, 31, 0x2DF458u);
    ctx->pc = 0x2DF454u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x2DF200u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x2df200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF458u; }
    }
    if (ctx->pc != 0x2DF458u) { return; }
    ctx->pc = 0x2DF458u;
    // 0x2df458: 0x24020001
    ctx->pc = 0x2df458u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df45c: 0xdfbf0030
    ctx->pc = 0x2df45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df460: 0xdfb20020
    ctx->pc = 0x2df460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df464: 0xdfb10010
    ctx->pc = 0x2df464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df468: 0xdfb00000
    ctx->pc = 0x2df468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df46c: 0x3e00008
    ctx->pc = 0x2DF46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF470u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DF360u: goto label_2df360;
            case 0x2DF3A4u: goto label_2df3a4;
            case 0x2DF3C0u: goto label_2df3c0;
            case 0x2DF3F8u: goto label_2df3f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DF474u;
}
