#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutLoadTextureOndemand
// Address: 0x1aa8c0 - 0x1aa9e4
void nlObjPutLoadTextureOndemand_0x1aa8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutLoadTextureOndemand");


    ctx->pc = 0x1aa8c0u;

    // 0x1aa8c0: 0x27bdffa0
    ctx->pc = 0x1aa8c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1aa8c4: 0x7fbf0050
    ctx->pc = 0x1aa8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1aa8c8: 0x7fb40040
    ctx->pc = 0x1aa8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1aa8cc: 0x7fb30030
    ctx->pc = 0x1aa8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1aa8d0: 0x7fb20020
    ctx->pc = 0x1aa8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aa8d4: 0x7fb10010
    ctx->pc = 0x1aa8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aa8d8: 0x7fb00000
    ctx->pc = 0x1aa8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aa8dc: 0x8ca20000
    ctx->pc = 0x1aa8dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1aa8e0: 0x70e0a628
    ctx->pc = 0x1aa8e0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1aa8e4: 0x24b00010
    ctx->pc = 0x1aa8e4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 16));
    // 0x1aa8e8: 0x48a03
    ctx->pc = 0x1aa8e8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 8));
    // 0x1aa8ec: 0x4810003
    ctx->pc = 0x1AA8ECu;
    {
        const bool branch_taken_0x1aa8ec = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1AA8F0u;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        if (branch_taken_0x1aa8ec) {
            ctx->pc = 0x1AA8FCu;
            goto label_1aa8fc;
        }
    }
    ctx->pc = 0x1AA8F4u;
    // 0x1aa8f4: 0x248200ff
    ctx->pc = 0x1aa8f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 255));
    // 0x1aa8f8: 0x28a03
    ctx->pc = 0x1aa8f8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 8));
label_1aa8fc:
    // 0x1aa8fc: 0x4c1002a
    ctx->pc = 0x1AA8FCu;
    {
        const bool branch_taken_0x1aa8fc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1AA900u;
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 8));
        if (branch_taken_0x1aa8fc) {
            ctx->pc = 0x1AA9A8u;
            goto label_1aa9a8;
        }
    }
    ctx->pc = 0x1AA904u;
    // 0x1aa904: 0x24c200ff
    ctx->pc = 0x1aa904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 255));
    // 0x1aa908: 0x29203
    ctx->pc = 0x1aa908u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1aa90c: 0x10000027
    ctx->pc = 0x1AA90Cu;
    {
        const bool branch_taken_0x1aa90c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA910u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        if (branch_taken_0x1aa90c) {
            ctx->pc = 0x1AA9ACu;
            goto label_1aa9ac;
        }
    }
    ctx->pc = 0x1AA914u;
label_1aa914:
    // 0x1aa914: 0x8e040024
    ctx->pc = 0x1aa914u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1aa918: 0x2403c000
    ctx->pc = 0x1aa918u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1aa91c: 0x24020002
    ctx->pc = 0x1aa91cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa920: 0x831824
    ctx->pc = 0x1aa920u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1aa924: 0xae030024
    ctx->pc = 0x1aa924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1aa928: 0x8e830018
    ctx->pc = 0x1aa928u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1aa92c: 0x10620008
    ctx->pc = 0x1AA92Cu;
    {
        const bool branch_taken_0x1aa92c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1aa92c) {
            ctx->pc = 0x1AA950u;
            goto label_1aa950;
        }
    }
    ctx->pc = 0x1AA934u;
    // 0x1aa934: 0x24020001
    ctx->pc = 0x1aa934u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa938: 0x10620001
    ctx->pc = 0x1AA938u;
    {
        const bool branch_taken_0x1aa938 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1aa938) {
            ctx->pc = 0x1AA940u;
            goto label_1aa940;
        }
    }
    ctx->pc = 0x1AA940u;
label_1aa940:
    // 0x1aa940: 0x8e020024
    ctx->pc = 0x1aa940u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1aa944: 0x511025
    ctx->pc = 0x1aa944u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1aa948: 0x10000005
    ctx->pc = 0x1AA948u;
    {
        const bool branch_taken_0x1aa948 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA94Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1aa948) {
            ctx->pc = 0x1AA960u;
            goto label_1aa960;
        }
    }
    ctx->pc = 0x1AA950u;
label_1aa950:
    // 0x1aa950: 0x8e020024
    ctx->pc = 0x1aa950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1aa954: 0x521025
    ctx->pc = 0x1aa954u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1aa958: 0xae020024
    ctx->pc = 0x1aa958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1aa95c: 0xae920010
    ctx->pc = 0x1aa95cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
label_1aa960:
    // 0x1aa960: 0x8e030060
    ctx->pc = 0x1aa960u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1aa964: 0x3c02ffff
    ctx->pc = 0x1aa964u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x1aa968: 0x34427fff
    ctx->pc = 0x1aa968u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32767));
    // 0x1aa96c: 0x621024
    ctx->pc = 0x1aa96cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aa970: 0xae020060
    ctx->pc = 0x1aa970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1aa974: 0x8e82000c
    ctx->pc = 0x1aa974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1aa978: 0x2621021
    ctx->pc = 0x1aa978u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1aa97c: 0xae020074
    ctx->pc = 0x1aa97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x1aa980: 0xae000034
    ctx->pc = 0x1aa980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1aa984: 0x8e020024
    ctx->pc = 0x1aa984u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1aa988: 0x8e050040
    ctx->pc = 0x1aa988u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1aa98c: 0x8e060044
    ctx->pc = 0x1aa98cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1aa990: 0x21603
    ctx->pc = 0x1aa990u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1aa994: 0xc06a664
    ctx->pc = 0x1AA994u;
    SET_GPR_U32(ctx, 31, 0x1AA99Cu);
    ctx->pc = 0x1AA998u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 31));
    ctx->pc = 0x1A9990u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_tex_size_0x1a9990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA99Cu; }
        else if (ctx->pc != 0x1AA99Cu) { ctx->pc = 0x1AA99Cu; }
    }
    if (ctx->pc != 0x1AA99Cu) { return; }
    ctx->pc = 0x1AA99Cu;
    // 0x1aa99c: 0x26100080
    ctx->pc = 0x1aa99cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 128));
    // 0x1aa9a0: 0x26940020
    ctx->pc = 0x1aa9a0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 32));
    // 0x1aa9a4: 0x0
    ctx->pc = 0x1aa9a4u;
    // NOP
label_1aa9a8:
    // 0x1aa9a8: 0x8e030010
    ctx->pc = 0x1aa9a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1aa9ac:
    // 0x1aa9ac: 0x2402ffff
    ctx->pc = 0x1aa9acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aa9b0: 0x1462ffd8
    ctx->pc = 0x1AA9B0u;
    {
        const bool branch_taken_0x1aa9b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1aa9b0) {
            ctx->pc = 0x1AA914u;
            goto label_1aa914;
        }
    }
    ctx->pc = 0x1AA9B8u;
    // 0x1aa9b8: 0xc0552d8
    ctx->pc = 0x1AA9B8u;
    SET_GPR_U32(ctx, 31, 0x1AA9C0u);
    ctx->pc = 0x1AA9BCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA9C0u; }
        else if (ctx->pc != 0x1AA9C0u) { ctx->pc = 0x1AA9C0u; }
    }
    if (ctx->pc != 0x1AA9C0u) { return; }
    ctx->pc = 0x1AA9C0u;
    // 0x1aa9c0: 0x7bbf0050
    ctx->pc = 0x1aa9c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aa9c4: 0x7bb40040
    ctx->pc = 0x1aa9c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aa9c8: 0x7bb30030
    ctx->pc = 0x1aa9c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aa9cc: 0x7bb20020
    ctx->pc = 0x1aa9ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa9d0: 0x7bb10010
    ctx->pc = 0x1aa9d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa9d4: 0x7bb00000
    ctx->pc = 0x1aa9d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa9d8: 0x70001628
    ctx->pc = 0x1aa9d8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aa9dc: 0x3e00008
    ctx->pc = 0x1AA9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA9E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA8FCu: goto label_1aa8fc;
            case 0x1AA914u: goto label_1aa914;
            case 0x1AA940u: goto label_1aa940;
            case 0x1AA950u: goto label_1aa950;
            case 0x1AA960u: goto label_1aa960;
            case 0x1AA9A8u: goto label_1aa9a8;
            case 0x1AA9ACu: goto label_1aa9ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA9E4u;
}
