#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: changeShadowModel__15OneSkinMgrClassFP10MotObjTask
// Address: 0x1ffe80 - 0x200120
void changeShadowModel__15OneSkinMgrClassFP10MotObjTask_0x1ffe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("changeShadowModel__15OneSkinMgrClassFP10MotObjTask");


    ctx->pc = 0x1ffe80u;

    // 0x1ffe80: 0x27bdffe0
    ctx->pc = 0x1ffe80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ffe84: 0x7fbf0010
    ctx->pc = 0x1ffe84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ffe88: 0x7fb00000
    ctx->pc = 0x1ffe88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ffe8c: 0x70a08628
    ctx->pc = 0x1ffe8cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ffe90: 0x84a5002c
    ctx->pc = 0x1ffe90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1ffe94: 0x24030029
    ctx->pc = 0x1ffe94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 41));
    // 0x1ffe98: 0x10a30060
    ctx->pc = 0x1FFE98u;
    {
        const bool branch_taken_0x1ffe98 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1FFE9Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 40));
        if (branch_taken_0x1ffe98) {
            ctx->pc = 0x20001Cu;
            goto label_20001c;
        }
    }
    ctx->pc = 0x1FFEA0u;
    // 0x1ffea0: 0x10a30039
    ctx->pc = 0x1FFEA0u;
    {
        const bool branch_taken_0x1ffea0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1FFEA4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 39));
        if (branch_taken_0x1ffea0) {
            ctx->pc = 0x1FFF88u;
            goto label_1fff88;
        }
    }
    ctx->pc = 0x1FFEA8u;
    // 0x1ffea8: 0x10a30037
    ctx->pc = 0x1FFEA8u;
    {
        const bool branch_taken_0x1ffea8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1FFEACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 38));
        if (branch_taken_0x1ffea8) {
            ctx->pc = 0x1FFF88u;
            goto label_1fff88;
        }
    }
    ctx->pc = 0x1FFEB0u;
    // 0x1ffeb0: 0x10a30005
    ctx->pc = 0x1FFEB0u;
    {
        const bool branch_taken_0x1ffeb0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1FFEB4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 37));
        if (branch_taken_0x1ffeb0) {
            ctx->pc = 0x1FFEC8u;
            goto label_1ffec8;
        }
    }
    ctx->pc = 0x1FFEB8u;
    // 0x1ffeb8: 0x10a30003
    ctx->pc = 0x1FFEB8u;
    {
        const bool branch_taken_0x1ffeb8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ffeb8) {
            ctx->pc = 0x1FFEC8u;
            goto label_1ffec8;
        }
    }
    ctx->pc = 0x1FFEC0u;
    // 0x1ffec0: 0x10000094
    ctx->pc = 0x1FFEC0u;
    {
        const bool branch_taken_0x1ffec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FFEC4u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1ffec0) {
            ctx->pc = 0x200114u;
            goto label_200114;
        }
    }
    ctx->pc = 0x1FFEC8u;
label_1ffec8:
    // 0x1ffec8: 0x8e020214
    ctx->pc = 0x1ffec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x1ffecc: 0x26050070
    ctx->pc = 0x1ffeccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffed0: 0x24060001
    ctx->pc = 0x1ffed0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffed4: 0x24070248
    ctx->pc = 0x1ffed4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 584));
    // 0x1ffed8: 0x34424000
    ctx->pc = 0x1ffed8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
    // 0x1ffedc: 0xc07fc64
    ctx->pc = 0x1FFEDCu;
    SET_GPR_U32(ctx, 31, 0x1FFEE4u);
    ctx->pc = 0x1FFEE0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFEE4u; }
        else if (ctx->pc != 0x1FFEE4u) { ctx->pc = 0x1FFEE4u; }
    }
    if (ctx->pc != 0x1FFEE4u) { return; }
    ctx->pc = 0x1FFEE4u;
    // 0x1ffee4: 0x260601e0
    ctx->pc = 0x1ffee4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 480));
    // 0x1ffee8: 0x24050002
    ctx->pc = 0x1ffee8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffeec: 0x2407bfff
    ctx->pc = 0x1ffeecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294950911));
label_1ffef0:
    // 0x1ffef0: 0x8cc40124
    ctx->pc = 0x1ffef0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 292)));
    // 0x1ffef4: 0x24a50008
    ctx->pc = 0x1ffef4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x1ffef8: 0x28a30012
    ctx->pc = 0x1ffef8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 18));
    // 0x1ffefc: 0x872024
    ctx->pc = 0x1ffefcu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1fff00: 0xacc40124
    ctx->pc = 0x1fff00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 292), GPR_U32(ctx, 4));
    // 0x1fff04: 0xacc00070
    ctx->pc = 0x1fff04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 0));
    // 0x1fff08: 0x8cc40214
    ctx->pc = 0x1fff08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 532)));
    // 0x1fff0c: 0x872024
    ctx->pc = 0x1fff0cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1fff10: 0xacc40214
    ctx->pc = 0x1fff10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 532), GPR_U32(ctx, 4));
    // 0x1fff14: 0xacc00160
    ctx->pc = 0x1fff14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 352), GPR_U32(ctx, 0));
    // 0x1fff18: 0x8cc40304
    ctx->pc = 0x1fff18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 772)));
    // 0x1fff1c: 0x872024
    ctx->pc = 0x1fff1cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1fff20: 0xacc40304
    ctx->pc = 0x1fff20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 772), GPR_U32(ctx, 4));
    // 0x1fff24: 0xacc00250
    ctx->pc = 0x1fff24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 592), GPR_U32(ctx, 0));
    // 0x1fff28: 0x8cc403f4
    ctx->pc = 0x1fff28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 1012)));
    // 0x1fff2c: 0x872024
    ctx->pc = 0x1fff2cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1fff30: 0xacc403f4
    ctx->pc = 0x1fff30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1012), GPR_U32(ctx, 4));
    // 0x1fff34: 0xacc00340
    ctx->pc = 0x1fff34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 832), GPR_U32(ctx, 0));
    // 0x1fff38: 0x8cc404e4
    ctx->pc = 0x1fff38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 1252)));
    // 0x1fff3c: 0x872024
    ctx->pc = 0x1fff3cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1fff40: 0xacc404e4
    ctx->pc = 0x1fff40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1252), GPR_U32(ctx, 4));
    // 0x1fff44: 0xacc00430
    ctx->pc = 0x1fff44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1072), GPR_U32(ctx, 0));
    // 0x1fff48: 0x8cc405d4
    ctx->pc = 0x1fff48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 1492)));
    // 0x1fff4c: 0x872024
    ctx->pc = 0x1fff4cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1fff50: 0xacc405d4
    ctx->pc = 0x1fff50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1492), GPR_U32(ctx, 4));
    // 0x1fff54: 0xacc00520
    ctx->pc = 0x1fff54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1312), GPR_U32(ctx, 0));
    // 0x1fff58: 0x8cc406c4
    ctx->pc = 0x1fff58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 1732)));
    // 0x1fff5c: 0x872024
    ctx->pc = 0x1fff5cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1fff60: 0xacc406c4
    ctx->pc = 0x1fff60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1732), GPR_U32(ctx, 4));
    // 0x1fff64: 0xacc00610
    ctx->pc = 0x1fff64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1552), GPR_U32(ctx, 0));
    // 0x1fff68: 0x8cc407b4
    ctx->pc = 0x1fff68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 1972)));
    // 0x1fff6c: 0x872024
    ctx->pc = 0x1fff6cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1fff70: 0xacc407b4
    ctx->pc = 0x1fff70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1972), GPR_U32(ctx, 4));
    // 0x1fff74: 0xacc00700
    ctx->pc = 0x1fff74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1792), GPR_U32(ctx, 0));
    // 0x1fff78: 0x1460ffdd
    ctx->pc = 0x1FFF78u;
    {
        const bool branch_taken_0x1fff78 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FFF7Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1920));
        if (branch_taken_0x1fff78) {
            ctx->pc = 0x1FFEF0u;
            goto label_1ffef0;
        }
    }
    ctx->pc = 0x1FFF80u;
    // 0x1fff80: 0x10000063
    ctx->pc = 0x1FFF80u;
    {
        const bool branch_taken_0x1fff80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fff80) {
            ctx->pc = 0x200110u;
            goto label_200110;
        }
    }
    ctx->pc = 0x1FFF88u;
label_1fff88:
    // 0x1fff88: 0x8e020304
    ctx->pc = 0x1fff88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1fff8c: 0x26050070
    ctx->pc = 0x1fff8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1fff90: 0x24060002
    ctx->pc = 0x1fff90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fff94: 0x24070249
    ctx->pc = 0x1fff94u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 585));
    // 0x1fff98: 0x34424000
    ctx->pc = 0x1fff98u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
    // 0x1fff9c: 0xc07fc64
    ctx->pc = 0x1FFF9Cu;
    SET_GPR_U32(ctx, 31, 0x1FFFA4u);
    ctx->pc = 0x1FFFA0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 2));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFFA4u; }
        else if (ctx->pc != 0x1FFFA4u) { ctx->pc = 0x1FFFA4u; }
    }
    if (ctx->pc != 0x1FFFA4u) { return; }
    ctx->pc = 0x1FFFA4u;
    // 0x1fffa4: 0x8e0303f4
    ctx->pc = 0x1fffa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1012)));
    // 0x1fffa8: 0x2404bfff
    ctx->pc = 0x1fffa8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1fffac: 0x641824
    ctx->pc = 0x1fffacu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fffb0: 0xae0303f4
    ctx->pc = 0x1fffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1012), GPR_U32(ctx, 3));
    // 0x1fffb4: 0xae000340
    ctx->pc = 0x1fffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
    // 0x1fffb8: 0x8e0304e4
    ctx->pc = 0x1fffb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1252)));
    // 0x1fffbc: 0x641824
    ctx->pc = 0x1fffbcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fffc0: 0xae0304e4
    ctx->pc = 0x1fffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1252), GPR_U32(ctx, 3));
    // 0x1fffc4: 0xae000430
    ctx->pc = 0x1fffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1072), GPR_U32(ctx, 0));
    // 0x1fffc8: 0x8e0305d4
    ctx->pc = 0x1fffc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1492)));
    // 0x1fffcc: 0x641824
    ctx->pc = 0x1fffccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fffd0: 0xae0305d4
    ctx->pc = 0x1fffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1492), GPR_U32(ctx, 3));
    // 0x1fffd4: 0xae000520
    ctx->pc = 0x1fffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 0));
    // 0x1fffd8: 0x8e0306c4
    ctx->pc = 0x1fffd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1732)));
    // 0x1fffdc: 0x641824
    ctx->pc = 0x1fffdcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fffe0: 0xae0306c4
    ctx->pc = 0x1fffe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1732), GPR_U32(ctx, 3));
    // 0x1fffe4: 0xae000610
    ctx->pc = 0x1fffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 0));
    // 0x1fffe8: 0x8e0307b4
    ctx->pc = 0x1fffe8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1972)));
    // 0x1fffec: 0x641824
    ctx->pc = 0x1fffecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ffff0: 0xae0307b4
    ctx->pc = 0x1ffff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 3));
    // 0x1ffff4: 0xae000700
    ctx->pc = 0x1ffff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1792), GPR_U32(ctx, 0));
    // 0x1ffff8: 0x8e0308a4
    ctx->pc = 0x1ffff8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2212)));
    // 0x1ffffc: 0x641824
    ctx->pc = 0x1ffffcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200000: 0xae0308a4
    ctx->pc = 0x200000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2212), GPR_U32(ctx, 3));
    // 0x200004: 0xae0007f0
    ctx->pc = 0x200004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2032), GPR_U32(ctx, 0));
    // 0x200008: 0x8e030994
    ctx->pc = 0x200008u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2452)));
    // 0x20000c: 0x641824
    ctx->pc = 0x20000cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200010: 0xae030994
    ctx->pc = 0x200010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2452), GPR_U32(ctx, 3));
    // 0x200014: 0x1000003e
    ctx->pc = 0x200014u;
    {
        const bool branch_taken_0x200014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x200018u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2272), GPR_U32(ctx, 0));
        if (branch_taken_0x200014) {
            ctx->pc = 0x200110u;
            goto label_200110;
        }
    }
    ctx->pc = 0x20001Cu;
label_20001c:
    // 0x20001c: 0x8e020304
    ctx->pc = 0x20001cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x200020: 0x26050070
    ctx->pc = 0x200020u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x200024: 0x24060002
    ctx->pc = 0x200024u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x200028: 0x2407024a
    ctx->pc = 0x200028u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 586));
    // 0x20002c: 0x34424000
    ctx->pc = 0x20002cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
    // 0x200030: 0xc07fc64
    ctx->pc = 0x200030u;
    SET_GPR_U32(ctx, 31, 0x200038u);
    ctx->pc = 0x200034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 2));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200038u; }
        else if (ctx->pc != 0x200038u) { ctx->pc = 0x200038u; }
    }
    if (ctx->pc != 0x200038u) { return; }
    ctx->pc = 0x200038u;
    // 0x200038: 0x24030003
    ctx->pc = 0x200038u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x20003c: 0x260602d0
    ctx->pc = 0x20003cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 720));
    // 0x200040: 0x2407bfff
    ctx->pc = 0x200040u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294950911));
label_200044:
    // 0x200044: 0x8cc50124
    ctx->pc = 0x200044u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 292)));
    // 0x200048: 0x24630008
    ctx->pc = 0x200048u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x20004c: 0x28640004
    ctx->pc = 0x20004cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 4));
    // 0x200050: 0xa72824
    ctx->pc = 0x200050u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x200054: 0xacc50124
    ctx->pc = 0x200054u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 292), GPR_U32(ctx, 5));
    // 0x200058: 0xacc00070
    ctx->pc = 0x200058u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 0));
    // 0x20005c: 0x8cc50214
    ctx->pc = 0x20005cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 532)));
    // 0x200060: 0xa72824
    ctx->pc = 0x200060u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x200064: 0xacc50214
    ctx->pc = 0x200064u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 532), GPR_U32(ctx, 5));
    // 0x200068: 0xacc00160
    ctx->pc = 0x200068u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 352), GPR_U32(ctx, 0));
    // 0x20006c: 0x8cc50304
    ctx->pc = 0x20006cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 772)));
    // 0x200070: 0xa72824
    ctx->pc = 0x200070u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x200074: 0xacc50304
    ctx->pc = 0x200074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 772), GPR_U32(ctx, 5));
    // 0x200078: 0xacc00250
    ctx->pc = 0x200078u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 592), GPR_U32(ctx, 0));
    // 0x20007c: 0x8cc503f4
    ctx->pc = 0x20007cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 1012)));
    // 0x200080: 0xa72824
    ctx->pc = 0x200080u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x200084: 0xacc503f4
    ctx->pc = 0x200084u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1012), GPR_U32(ctx, 5));
    // 0x200088: 0xacc00340
    ctx->pc = 0x200088u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 832), GPR_U32(ctx, 0));
    // 0x20008c: 0x8cc504e4
    ctx->pc = 0x20008cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 1252)));
    // 0x200090: 0xa72824
    ctx->pc = 0x200090u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x200094: 0xacc504e4
    ctx->pc = 0x200094u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1252), GPR_U32(ctx, 5));
    // 0x200098: 0xacc00430
    ctx->pc = 0x200098u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1072), GPR_U32(ctx, 0));
    // 0x20009c: 0x8cc505d4
    ctx->pc = 0x20009cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 1492)));
    // 0x2000a0: 0xa72824
    ctx->pc = 0x2000a0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2000a4: 0xacc505d4
    ctx->pc = 0x2000a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1492), GPR_U32(ctx, 5));
    // 0x2000a8: 0xacc00520
    ctx->pc = 0x2000a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1312), GPR_U32(ctx, 0));
    // 0x2000ac: 0x8cc506c4
    ctx->pc = 0x2000acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 1732)));
    // 0x2000b0: 0xa72824
    ctx->pc = 0x2000b0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2000b4: 0xacc506c4
    ctx->pc = 0x2000b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1732), GPR_U32(ctx, 5));
    // 0x2000b8: 0xacc00610
    ctx->pc = 0x2000b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1552), GPR_U32(ctx, 0));
    // 0x2000bc: 0x8cc507b4
    ctx->pc = 0x2000bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 1972)));
    // 0x2000c0: 0xa72824
    ctx->pc = 0x2000c0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2000c4: 0xacc507b4
    ctx->pc = 0x2000c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1972), GPR_U32(ctx, 5));
    // 0x2000c8: 0xacc00700
    ctx->pc = 0x2000c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1792), GPR_U32(ctx, 0));
    // 0x2000cc: 0x1480ffdd
    ctx->pc = 0x2000CCu;
    {
        const bool branch_taken_0x2000cc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2000D0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1920));
        if (branch_taken_0x2000cc) {
            ctx->pc = 0x200044u;
            goto label_200044;
        }
    }
    ctx->pc = 0x2000D4u;
    // 0x2000d4: 0x2861000c
    ctx->pc = 0x2000d4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 12));
    // 0x2000d8: 0x1020000d
    ctx->pc = 0x2000D8u;
    {
        const bool branch_taken_0x2000d8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x2000DCu;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x2000d8) {
            ctx->pc = 0x200110u;
            goto label_200110;
        }
    }
    ctx->pc = 0x2000E0u;
    // 0x2000e0: 0x832023
    ctx->pc = 0x2000e0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2000e4: 0x42100
    ctx->pc = 0x2000e4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2000e8: 0x2043821
    ctx->pc = 0x2000e8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2000ec: 0x2406bfff
    ctx->pc = 0x2000ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294950911));
label_2000f0:
    // 0x2000f0: 0x8ce50124
    ctx->pc = 0x2000f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 292)));
    // 0x2000f4: 0x24630001
    ctx->pc = 0x2000f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2000f8: 0x2864000c
    ctx->pc = 0x2000f8u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 12));
    // 0x2000fc: 0xa62824
    ctx->pc = 0x2000fcu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x200100: 0xace50124
    ctx->pc = 0x200100u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 292), GPR_U32(ctx, 5));
    // 0x200104: 0xace00070
    ctx->pc = 0x200104u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 112), GPR_U32(ctx, 0));
    // 0x200108: 0x1480fff9
    ctx->pc = 0x200108u;
    {
        const bool branch_taken_0x200108 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x20010Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 240));
        if (branch_taken_0x200108) {
            ctx->pc = 0x2000F0u;
            goto label_2000f0;
        }
    }
    ctx->pc = 0x200110u;
label_200110:
    // 0x200110: 0x7bbf0010
    ctx->pc = 0x200110u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_200114:
    // 0x200114: 0x7bb00000
    ctx->pc = 0x200114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200118: 0x3e00008
    ctx->pc = 0x200118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20011Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FFEC8u: goto label_1ffec8;
            case 0x1FFEF0u: goto label_1ffef0;
            case 0x1FFF88u: goto label_1fff88;
            case 0x20001Cu: goto label_20001c;
            case 0x200044u: goto label_200044;
            case 0x2000F0u: goto label_2000f0;
            case 0x200110u: goto label_200110;
            case 0x200114u: goto label_200114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200120u;
}
