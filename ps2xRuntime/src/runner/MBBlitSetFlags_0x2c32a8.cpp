#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitSetFlags
// Address: 0x2c32a8 - 0x2c3398
void MBBlitSetFlags_0x2c32a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c32a8u;

    // 0x2c32a8: 0x27bdffa0
    ctx->pc = 0x2c32a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c32ac: 0xffbf0050
    ctx->pc = 0x2c32acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c32b0: 0xffb30040
    ctx->pc = 0x2c32b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2c32b4: 0xffb20030
    ctx->pc = 0x2c32b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c32b8: 0xffb10020
    ctx->pc = 0x2c32b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c32bc: 0xffb00010
    ctx->pc = 0x2c32bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c32c0: 0x80802d
    ctx->pc = 0x2c32c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c32c4: 0x8e130000
    ctx->pc = 0x2c32c4u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c32c8: 0xb38824
    ctx->pc = 0x2c32c8u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2c32cc: 0x2268825
    ctx->pc = 0x2c32ccu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2c32d0: 0x2339026
    ctx->pc = 0x2c32d0u;
    SET_GPR_U32(ctx, 18, XOR32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2c32d4: 0x12400028
    ctx->pc = 0x2C32D4u;
    {
        const bool branch_taken_0x2c32d4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C32D8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 320));
        if (branch_taken_0x2c32d4) {
            ctx->pc = 0x2C3378u;
            goto label_2c3378;
        }
    }
    ctx->pc = 0x2C32DCu;
    // 0x2c32dc: 0x10400016
    ctx->pc = 0x2C32DCu;
    {
        const bool branch_taken_0x2c32dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C32E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c32dc) {
            ctx->pc = 0x2C3338u;
            goto label_2c3338;
        }
    }
    ctx->pc = 0x2C32E4u;
    // 0x2c32e4: 0x3a0282d
    ctx->pc = 0x2c32e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c32e8: 0x27a60004
    ctx->pc = 0x2c32e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x2c32ec: 0xc0b0e24
    ctx->pc = 0x2C32ECu;
    SET_GPR_U32(ctx, 31, 0x2C32F4u);
    ctx->pc = 0x2C32F0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3890u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitGetPos_0x2c3890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32F4u; }
    }
    if (ctx->pc != 0x2C32F4u) { return; }
    ctx->pc = 0x2C32F4u;
    // 0x2c32f4: 0x200202d
    ctx->pc = 0x2c32f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c32f8: 0x27a50008
    ctx->pc = 0x2c32f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 8));
    // 0x2c32fc: 0xc0b0d52
    ctx->pc = 0x2C32FCu;
    SET_GPR_U32(ctx, 31, 0x2C3304u);
    ctx->pc = 0x2C3300u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x2C3548u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitGetSize_0x2c3548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3304u; }
    }
    if (ctx->pc != 0x2C3304u) { return; }
    ctx->pc = 0x2C3304u;
    // 0x2c3304: 0xae110000
    ctx->pc = 0x2c3304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2c3308: 0x200202d
    ctx->pc = 0x2c3308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c330c: 0x8fa50000
    ctx->pc = 0x2c330cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3310: 0x3c01bf80
    ctx->pc = 0x2c3310u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2c3314: 0x44816000
    ctx->pc = 0x2c3314u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2c3318: 0xc0b0df2
    ctx->pc = 0x2C3318u;
    SET_GPR_U32(ctx, 31, 0x2C3320u);
    ctx->pc = 0x2C331Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3320u; }
    }
    if (ctx->pc != 0x2C3320u) { return; }
    ctx->pc = 0x2C3320u;
    // 0x2c3320: 0x200202d
    ctx->pc = 0x2c3320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3324: 0x8fa50008
    ctx->pc = 0x2c3324u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3328: 0xc0b0cf6
    ctx->pc = 0x2C3328u;
    SET_GPR_U32(ctx, 31, 0x2C3330u);
    ctx->pc = 0x2C332Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3330u; }
    }
    if (ctx->pc != 0x2C3330u) { return; }
    ctx->pc = 0x2C3330u;
    // 0x2c3330: 0x10000003
    ctx->pc = 0x2C3330u;
    {
        const bool branch_taken_0x2c3330 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C3334u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 32));
        if (branch_taken_0x2c3330) {
            ctx->pc = 0x2C3340u;
            goto label_2c3340;
        }
    }
    ctx->pc = 0x2C3338u;
label_2c3338:
    // 0x2c3338: 0xae110000
    ctx->pc = 0x2c3338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2c333c: 0x32420020
    ctx->pc = 0x2c333cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 32));
label_2c3340:
    // 0x2c3340: 0x10400006
    ctx->pc = 0x2C3340u;
    {
        const bool branch_taken_0x2c3340 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C3344u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 128));
        if (branch_taken_0x2c3340) {
            ctx->pc = 0x2C335Cu;
            goto label_2c335c;
        }
    }
    ctx->pc = 0x2C3348u;
    // 0x2c3348: 0x86030014
    ctx->pc = 0x2c3348u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c334c: 0x96020016
    ctx->pc = 0x2c334cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2c3350: 0xa6020014
    ctx->pc = 0x2c3350u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c3354: 0xa6030016
    ctx->pc = 0x2c3354u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c3358: 0x32420080
    ctx->pc = 0x2c3358u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 128));
label_2c335c:
    // 0x2c335c: 0x50400006
    ctx->pc = 0x2C335Cu;
    {
        const bool branch_taken_0x2c335c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c335c) {
            ctx->pc = 0x2C3360u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->pc = 0x2C3378u;
            goto label_2c3378;
        }
    }
    ctx->pc = 0x2C3364u;
    // 0x2c3364: 0x86030018
    ctx->pc = 0x2c3364u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c3368: 0x9602001a
    ctx->pc = 0x2c3368u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x2c336c: 0xa6020018
    ctx->pc = 0x2c336cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c3370: 0xa603001a
    ctx->pc = 0x2c3370u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c3374: 0xae110000
    ctx->pc = 0x2c3374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_2c3378:
    // 0x2c3378: 0x260102d
    ctx->pc = 0x2c3378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c337c: 0xdfbf0050
    ctx->pc = 0x2c337cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c3380: 0xdfb30040
    ctx->pc = 0x2c3380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3384: 0xdfb20030
    ctx->pc = 0x2c3384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3388: 0xdfb10020
    ctx->pc = 0x2c3388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c338c: 0xdfb00010
    ctx->pc = 0x2c338cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3390: 0x3e00008
    ctx->pc = 0x2C3390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3394u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C3338u: goto label_2c3338;
            case 0x2C3340u: goto label_2c3340;
            case 0x2C335Cu: goto label_2c335c;
            case 0x2C3378u: goto label_2c3378;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C3398u;
}
