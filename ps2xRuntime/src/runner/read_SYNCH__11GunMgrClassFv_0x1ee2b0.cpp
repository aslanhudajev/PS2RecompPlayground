#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: read_SYNCH__11GunMgrClassFv
// Address: 0x1ee2b0 - 0x1ee3e4
void read_SYNCH__11GunMgrClassFv_0x1ee2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("read_SYNCH__11GunMgrClassFv");


    ctx->pc = 0x1ee2b0u;

    // 0x1ee2b0: 0x27bdffb0
    ctx->pc = 0x1ee2b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ee2b4: 0x7fbf0040
    ctx->pc = 0x1ee2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1ee2b8: 0x7fb30030
    ctx->pc = 0x1ee2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ee2bc: 0x7fb20020
    ctx->pc = 0x1ee2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ee2c0: 0x7fb10010
    ctx->pc = 0x1ee2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ee2c4: 0x7fb00000
    ctx->pc = 0x1ee2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ee2c8: 0x8c8300c8
    ctx->pc = 0x1ee2c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x1ee2cc: 0x1060003e
    ctx->pc = 0x1EE2CCu;
    {
        const bool branch_taken_0x1ee2cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE2D0u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ee2cc) {
            ctx->pc = 0x1EE3C8u;
            goto label_1ee3c8;
        }
    }
    ctx->pc = 0x1EE2D4u;
    // 0x1ee2d4: 0xc07b8fc
    ctx->pc = 0x1EE2D4u;
    SET_GPR_U32(ctx, 31, 0x1EE2DCu);
    ctx->pc = 0x1EE3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        orgAddTrig0__11GunMgrClassFv_0x1ee3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE2DCu; }
        else if (ctx->pc != 0x1EE2DCu) { ctx->pc = 0x1EE2DCu; }
    }
    if (ctx->pc != 0x1EE2DCu) { return; }
    ctx->pc = 0x1EE2DCu;
    // 0x1ee2dc: 0x3c020050
    ctx->pc = 0x1ee2dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ee2e0: 0x70008628
    ctx->pc = 0x1ee2e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ee2e4: 0x72608e28
    ctx->pc = 0x1ee2e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1ee2e8: 0x2452dd20
    ctx->pc = 0x1ee2e8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294958368));
label_1ee2ec:
    // 0x1ee2ec: 0xc07bf9c
    ctx->pc = 0x1EE2ECu;
    SET_GPR_U32(ctx, 31, 0x1EE2F4u);
    ctx->pc = 0x1EE2F0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE2F4u; }
        else if (ctx->pc != 0x1EE2F4u) { ctx->pc = 0x1EE2F4u; }
    }
    if (ctx->pc != 0x1EE2F4u) { return; }
    ctx->pc = 0x1EE2F4u;
    // 0x1ee2f4: 0x1040001a
    ctx->pc = 0x1EE2F4u;
    {
        const bool branch_taken_0x1ee2f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE2F8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1ee2f4) {
            ctx->pc = 0x1EE360u;
            goto label_1ee360;
        }
    }
    ctx->pc = 0x1EE2FCu;
    // 0x1ee2fc: 0x10430014
    ctx->pc = 0x1EE2FCu;
    {
        const bool branch_taken_0x1ee2fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1EE300u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ee2fc) {
            ctx->pc = 0x1EE350u;
            goto label_1ee350;
        }
    }
    ctx->pc = 0x1EE304u;
    // 0x1ee304: 0x24030002
    ctx->pc = 0x1ee304u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee308: 0x1043000c
    ctx->pc = 0x1EE308u;
    {
        const bool branch_taken_0x1ee308 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1EE30Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ee308) {
            ctx->pc = 0x1EE33Cu;
            goto label_1ee33c;
        }
    }
    ctx->pc = 0x1EE310u;
    // 0x1ee310: 0x24030001
    ctx->pc = 0x1ee310u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee314: 0x10430004
    ctx->pc = 0x1EE314u;
    {
        const bool branch_taken_0x1ee314 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1EE318u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ee314) {
            ctx->pc = 0x1EE328u;
            goto label_1ee328;
        }
    }
    ctx->pc = 0x1EE31Cu;
    // 0x1ee31c: 0x10000011
    ctx->pc = 0x1EE31Cu;
    {
        const bool branch_taken_0x1ee31c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE320u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1ee31c) {
            ctx->pc = 0x1EE364u;
            goto label_1ee364;
        }
    }
    ctx->pc = 0x1EE324u;
    // 0x1ee324: 0x72602628
    ctx->pc = 0x1ee324u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1ee328:
    // 0x1ee328: 0xc07b760
    ctx->pc = 0x1EE328u;
    SET_GPR_U32(ctx, 31, 0x1EE330u);
    ctx->pc = 0x1EE32Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EDD80u;
    {
        const uint32_t __entryPc = ctx->pc;
        read_SYNCH_pad__11GunMgrClassFi_0x1edd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE330u; }
        else if (ctx->pc != 0x1EE330u) { ctx->pc = 0x1EE330u; }
    }
    if (ctx->pc != 0x1EE330u) { return; }
    ctx->pc = 0x1EE330u;
    // 0x1ee330: 0x1000000e
    ctx->pc = 0x1EE330u;
    {
        const bool branch_taken_0x1ee330 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE334u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ee330) {
            ctx->pc = 0x1EE36Cu;
            goto label_1ee36c;
        }
    }
    ctx->pc = 0x1EE338u;
    // 0x1ee338: 0x72602628
    ctx->pc = 0x1ee338u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1ee33c:
    // 0x1ee33c: 0xc07b820
    ctx->pc = 0x1EE33Cu;
    SET_GPR_U32(ctx, 31, 0x1EE344u);
    ctx->pc = 0x1EE340u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EE080u;
    {
        const uint32_t __entryPc = ctx->pc;
        read_SYNCH_gun1__11GunMgrClassFi_0x1ee080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE344u; }
        else if (ctx->pc != 0x1EE344u) { ctx->pc = 0x1EE344u; }
    }
    if (ctx->pc != 0x1EE344u) { return; }
    ctx->pc = 0x1EE344u;
    // 0x1ee344: 0x10000008
    ctx->pc = 0x1EE344u;
    {
        const bool branch_taken_0x1ee344 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ee344) {
            ctx->pc = 0x1EE368u;
            goto label_1ee368;
        }
    }
    ctx->pc = 0x1EE34Cu;
    // 0x1ee34c: 0x72602628
    ctx->pc = 0x1ee34cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1ee350:
    // 0x1ee350: 0xc07b874
    ctx->pc = 0x1EE350u;
    SET_GPR_U32(ctx, 31, 0x1EE358u);
    ctx->pc = 0x1EE354u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EE1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        read_SYNCH_gun2__11GunMgrClassFi_0x1ee1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE358u; }
        else if (ctx->pc != 0x1EE358u) { ctx->pc = 0x1EE358u; }
    }
    if (ctx->pc != 0x1EE358u) { return; }
    ctx->pc = 0x1EE358u;
    // 0x1ee358: 0x10000003
    ctx->pc = 0x1EE358u;
    {
        const bool branch_taken_0x1ee358 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ee358) {
            ctx->pc = 0x1EE368u;
            goto label_1ee368;
        }
    }
    ctx->pc = 0x1EE360u;
label_1ee360:
    // 0x1ee360: 0xa220000e
    ctx->pc = 0x1ee360u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 0));
label_1ee364:
    // 0x1ee364: 0x0
    ctx->pc = 0x1ee364u;
    // NOP
label_1ee368:
    // 0x1ee368: 0x72602628
    ctx->pc = 0x1ee368u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1ee36c:
    // 0x1ee36c: 0xc07b918
    ctx->pc = 0x1EE36Cu;
    SET_GPR_U32(ctx, 31, 0x1EE374u);
    ctx->pc = 0x1EE370u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EE460u;
    {
        const uint32_t __entryPc = ctx->pc;
        orgAddTrig__11GunMgrClassFi_0x1ee460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE374u; }
        else if (ctx->pc != 0x1EE374u) { ctx->pc = 0x1EE374u; }
    }
    if (ctx->pc != 0x1EE374u) { return; }
    ctx->pc = 0x1EE374u;
    // 0x1ee374: 0xc080948
    ctx->pc = 0x1EE374u;
    SET_GPR_U32(ctx, 31, 0x1EE37Cu);
    ctx->pc = 0x1EE378u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x202520u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressReload__Fi_0x202520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE37Cu; }
        else if (ctx->pc != 0x1EE37Cu) { ctx->pc = 0x1EE37Cu; }
    }
    if (ctx->pc != 0x1EE37Cu) { return; }
    ctx->pc = 0x1EE37Cu;
    // 0x1ee37c: 0x10400004
    ctx->pc = 0x1EE37Cu;
    {
        const bool branch_taken_0x1ee37c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ee37c) {
            ctx->pc = 0x1EE390u;
            goto label_1ee390;
        }
    }
    ctx->pc = 0x1EE384u;
    // 0x1ee384: 0x24020001
    ctx->pc = 0x1ee384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee388: 0xae42005c
    ctx->pc = 0x1ee388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x1ee38c: 0x0
    ctx->pc = 0x1ee38cu;
    // NOP
label_1ee390:
    // 0x1ee390: 0x3c020050
    ctx->pc = 0x1ee390u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ee394: 0xc07ce18
    ctx->pc = 0x1EE394u;
    SET_GPR_U32(ctx, 31, 0x1EE39Cu);
    ctx->pc = 0x1EE398u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE39Cu; }
        else if (ctx->pc != 0x1EE39Cu) { ctx->pc = 0x1EE39Cu; }
    }
    if (ctx->pc != 0x1EE39Cu) { return; }
    ctx->pc = 0x1EE39Cu;
    // 0x1ee39c: 0x58400005
    ctx->pc = 0x1EE39Cu;
    {
        const bool branch_taken_0x1ee39c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ee39c) {
            ctx->pc = 0x1EE3A0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x1EE3B4u;
            goto label_1ee3b4;
        }
    }
    ctx->pc = 0x1EE3A4u;
    // 0x1ee3a4: 0xa220000e
    ctx->pc = 0x1ee3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ee3a8: 0xa220000f
    ctx->pc = 0x1ee3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ee3ac: 0x0
    ctx->pc = 0x1ee3acu;
    // NOP
    // 0x1ee3b0: 0x26100001
    ctx->pc = 0x1ee3b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1ee3b4:
    // 0x1ee3b4: 0x2a030002
    ctx->pc = 0x1ee3b4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2));
    // 0x1ee3b8: 0x26310064
    ctx->pc = 0x1ee3b8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 100));
    // 0x1ee3bc: 0x1460ffcb
    ctx->pc = 0x1EE3BCu;
    {
        const bool branch_taken_0x1ee3bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EE3C0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 840));
        if (branch_taken_0x1ee3bc) {
            ctx->pc = 0x1EE2ECu;
            goto label_1ee2ec;
        }
    }
    ctx->pc = 0x1EE3C4u;
    // 0x1ee3c4: 0x0
    ctx->pc = 0x1ee3c4u;
    // NOP
label_1ee3c8:
    // 0x1ee3c8: 0x7bbf0040
    ctx->pc = 0x1ee3c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ee3cc: 0x7bb30030
    ctx->pc = 0x1ee3ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee3d0: 0x7bb20020
    ctx->pc = 0x1ee3d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee3d4: 0x7bb10010
    ctx->pc = 0x1ee3d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee3d8: 0x7bb00000
    ctx->pc = 0x1ee3d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee3dc: 0x3e00008
    ctx->pc = 0x1EE3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE3E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE2ECu: goto label_1ee2ec;
            case 0x1EE328u: goto label_1ee328;
            case 0x1EE33Cu: goto label_1ee33c;
            case 0x1EE350u: goto label_1ee350;
            case 0x1EE360u: goto label_1ee360;
            case 0x1EE364u: goto label_1ee364;
            case 0x1EE368u: goto label_1ee368;
            case 0x1EE36Cu: goto label_1ee36c;
            case 0x1EE390u: goto label_1ee390;
            case 0x1EE3B4u: goto label_1ee3b4;
            case 0x1EE3C8u: goto label_1ee3c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EE3E4u;
}
