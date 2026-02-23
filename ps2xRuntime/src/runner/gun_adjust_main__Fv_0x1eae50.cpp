#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gun_adjust_main__Fv
// Address: 0x1eae50 - 0x1eb028
void gun_adjust_main__Fv_0x1eae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gun_adjust_main__Fv");


    ctx->pc = 0x1eae50u;

    // 0x1eae50: 0x27bdffd0
    ctx->pc = 0x1eae50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eae54: 0x7fbf0020
    ctx->pc = 0x1eae54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1eae58: 0x7fb10010
    ctx->pc = 0x1eae58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eae5c: 0x7fb00000
    ctx->pc = 0x1eae5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eae60: 0x8f838db4
    ctx->pc = 0x1eae60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
    // 0x1eae64: 0x24020001
    ctx->pc = 0x1eae64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eae68: 0x10620010
    ctx->pc = 0x1EAE68u;
    {
        const bool branch_taken_0x1eae68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1EAE6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 0));
        if (branch_taken_0x1eae68) {
            ctx->pc = 0x1EAEACu;
            goto label_1eaeac;
        }
    }
    ctx->pc = 0x1EAE70u;
    // 0x1eae70: 0x10600003
    ctx->pc = 0x1EAE70u;
    {
        const bool branch_taken_0x1eae70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eae70) {
            ctx->pc = 0x1EAE80u;
            goto label_1eae80;
        }
    }
    ctx->pc = 0x1EAE78u;
    // 0x1eae78: 0x10000061
    ctx->pc = 0x1EAE78u;
    {
        const bool branch_taken_0x1eae78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EAE7Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
        if (branch_taken_0x1eae78) {
            ctx->pc = 0x1EB000u;
            goto label_1eb000;
        }
    }
    ctx->pc = 0x1EAE80u;
label_1eae80:
    // 0x1eae80: 0x8f828dbc
    ctx->pc = 0x1eae80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938044)));
    // 0x1eae84: 0x2442ffff
    ctx->pc = 0x1eae84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1eae88: 0xaf828dbc
    ctx->pc = 0x1eae88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938044), GPR_U32(ctx, 2));
    // 0x1eae8c: 0x8f828dbc
    ctx->pc = 0x1eae8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938044)));
    // 0x1eae90: 0x14400002
    ctx->pc = 0x1EAE90u;
    {
        const bool branch_taken_0x1eae90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EAE94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x1eae90) {
            ctx->pc = 0x1EAE9Cu;
            goto label_1eae9c;
        }
    }
    ctx->pc = 0x1EAE98u;
    // 0x1eae98: 0xaf828db4
    ctx->pc = 0x1eae98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938036), GPR_U32(ctx, 2));
label_1eae9c:
    // 0x1eae9c: 0xc07ac0c
    ctx->pc = 0x1EAE9Cu;
    SET_GPR_U32(ctx, 31, 0x1EAEA4u);
    ctx->pc = 0x1EB030u;
    {
        const uint32_t __entryPc = ctx->pc;
        GunAdjustInit__Fv_0x1eb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAEA4u; }
        else if (ctx->pc != 0x1EAEA4u) { ctx->pc = 0x1EAEA4u; }
    }
    if (ctx->pc != 0x1EAEA4u) { return; }
    ctx->pc = 0x1EAEA4u;
    // 0x1eaea4: 0x10000055
    ctx->pc = 0x1EAEA4u;
    {
        const bool branch_taken_0x1eaea4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eaea4) {
            ctx->pc = 0x1EAFFCu;
            goto label_1eaffc;
        }
    }
    ctx->pc = 0x1EAEACu;
label_1eaeac:
    // 0x1eaeac: 0xc07bf9c
    ctx->pc = 0x1EAEACu;
    SET_GPR_U32(ctx, 31, 0x1EAEB4u);
    ctx->pc = 0x1EAEB0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAEB4u; }
        else if (ctx->pc != 0x1EAEB4u) { ctx->pc = 0x1EAEB4u; }
    }
    if (ctx->pc != 0x1EAEB4u) { return; }
    ctx->pc = 0x1EAEB4u;
    // 0x1eaeb4: 0x8f848db8
    ctx->pc = 0x1eaeb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1eaeb8: 0x70408628
    ctx->pc = 0x1eaeb8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eaebc: 0x27828dc0
    ctx->pc = 0x1eaebcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294938048));
    // 0x1eaec0: 0x41880
    ctx->pc = 0x1eaec0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1eaec4: 0x431021
    ctx->pc = 0x1eaec4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eaec8: 0x8c420000
    ctx->pc = 0x1eaec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eaecc: 0x12020003
    ctx->pc = 0x1EAECCu;
    {
        const bool branch_taken_0x1eaecc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x1EAED0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1eaecc) {
            ctx->pc = 0x1EAEDCu;
            goto label_1eaedc;
        }
    }
    ctx->pc = 0x1EAED4u;
    // 0x1eaed4: 0x10000012
    ctx->pc = 0x1EAED4u;
    {
        const bool branch_taken_0x1eaed4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EAED8u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eaed4) {
            ctx->pc = 0x1EAF20u;
            goto label_1eaf20;
        }
    }
    ctx->pc = 0x1EAEDCu;
label_1eaedc:
    // 0x1eaedc: 0x1202000e
    ctx->pc = 0x1EAEDCu;
    {
        const bool branch_taken_0x1eaedc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x1EAEE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1eaedc) {
            ctx->pc = 0x1EAF18u;
            goto label_1eaf18;
        }
    }
    ctx->pc = 0x1EAEE4u;
    // 0x1eaee4: 0x12020003
    ctx->pc = 0x1EAEE4u;
    {
        const bool branch_taken_0x1eaee4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x1eaee4) {
            ctx->pc = 0x1EAEF4u;
            goto label_1eaef4;
        }
    }
    ctx->pc = 0x1EAEECu;
    // 0x1eaeec: 0x1000000c
    ctx->pc = 0x1EAEECu;
    {
        const bool branch_taken_0x1eaeec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EAEF0u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eaeec) {
            ctx->pc = 0x1EAF20u;
            goto label_1eaf20;
        }
    }
    ctx->pc = 0x1EAEF4u;
label_1eaef4:
    // 0x1eaef4: 0xc07b518
    ctx->pc = 0x1EAEF4u;
    SET_GPR_U32(ctx, 31, 0x1EAEFCu);
    ctx->pc = 0x1ED460u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunBuffer__Fi_0x1ed460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAEFCu; }
        else if (ctx->pc != 0x1EAEFCu) { ctx->pc = 0x1EAEFCu; }
    }
    if (ctx->pc != 0x1EAEFCu) { return; }
    ctx->pc = 0x1EAEFCu;
    // 0x1eaefc: 0x8f848db8
    ctx->pc = 0x1eaefcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1eaf00: 0xc07ac14
    ctx->pc = 0x1EAF00u;
    SET_GPR_U32(ctx, 31, 0x1EAF08u);
    ctx->pc = 0x1EAF04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EB050u;
    {
        const uint32_t __entryPc = ctx->pc;
        GunAdjust__FiP11Gun_Act_tag_0x1eb050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF08u; }
        else if (ctx->pc != 0x1EAF08u) { ctx->pc = 0x1EAF08u; }
    }
    if (ctx->pc != 0x1EAF08u) { return; }
    ctx->pc = 0x1EAF08u;
    // 0x1eaf08: 0x14400005
    ctx->pc = 0x1EAF08u;
    {
        const bool branch_taken_0x1eaf08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eaf08) {
            ctx->pc = 0x1EAF20u;
            goto label_1eaf20;
        }
    }
    ctx->pc = 0x1EAF10u;
    // 0x1eaf10: 0x10000003
    ctx->pc = 0x1EAF10u;
    {
        const bool branch_taken_0x1eaf10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EAF14u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938056), GPR_U32(ctx, 0));
        if (branch_taken_0x1eaf10) {
            ctx->pc = 0x1EAF20u;
            goto label_1eaf20;
        }
    }
    ctx->pc = 0x1EAF18u;
label_1eaf18:
    // 0x1eaf18: 0xc07aff0
    ctx->pc = 0x1EAF18u;
    SET_GPR_U32(ctx, 31, 0x1EAF20u);
    ctx->pc = 0x1EBFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GunAdjustGC1__Fi_0x1ebfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF20u; }
        else if (ctx->pc != 0x1EAF20u) { ctx->pc = 0x1EAF20u; }
    }
    if (ctx->pc != 0x1EAF20u) { return; }
    ctx->pc = 0x1EAF20u;
label_1eaf20:
    // 0x1eaf20: 0x14400036
    ctx->pc = 0x1EAF20u;
    {
        const bool branch_taken_0x1eaf20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eaf20) {
            ctx->pc = 0x1EAFFCu;
            goto label_1eaffc;
        }
    }
    ctx->pc = 0x1EAF28u;
    // 0x1eaf28: 0x8f918db8
    ctx->pc = 0x1eaf28u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1eaf2c: 0x27828dc0
    ctx->pc = 0x1eaf2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294938048));
    // 0x1eaf30: 0x111880
    ctx->pc = 0x1eaf30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1eaf34: 0x431021
    ctx->pc = 0x1eaf34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eaf38: 0x8c420000
    ctx->pc = 0x1eaf38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eaf3c: 0x1602000a
    ctx->pc = 0x1EAF3Cu;
    {
        const bool branch_taken_0x1eaf3c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1EAF40u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1eaf3c) {
            ctx->pc = 0x1EAF68u;
            goto label_1eaf68;
        }
    }
    ctx->pc = 0x1EAF44u;
    // 0x1eaf44: 0x3c020050
    ctx->pc = 0x1eaf44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eaf48: 0x111900
    ctx->pc = 0x1eaf48u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 4));
    // 0x1eaf4c: 0x24420df0
    ctx->pc = 0x1eaf4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3568));
    // 0x1eaf50: 0x431821
    ctx->pc = 0x1eaf50u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eaf54: 0x101080
    ctx->pc = 0x1eaf54u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1eaf58: 0x24040001
    ctx->pc = 0x1eaf58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eaf5c: 0x431021
    ctx->pc = 0x1eaf5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eaf60: 0xac440000
    ctx->pc = 0x1eaf60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1eaf64: 0x26230001
    ctx->pc = 0x1eaf64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
label_1eaf68:
    // 0x1eaf68: 0x4610004
    ctx->pc = 0x1EAF68u;
    {
        const bool branch_taken_0x1eaf68 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EAF6Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x1eaf68) {
            ctx->pc = 0x1EAF7Cu;
            goto label_1eaf7c;
        }
    }
    ctx->pc = 0x1EAF70u;
    // 0x1eaf70: 0x10400002
    ctx->pc = 0x1EAF70u;
    {
        const bool branch_taken_0x1eaf70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eaf70) {
            ctx->pc = 0x1EAF7Cu;
            goto label_1eaf7c;
        }
    }
    ctx->pc = 0x1EAF78u;
    // 0x1eaf78: 0x2442fffe
    ctx->pc = 0x1eaf78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_1eaf7c:
    // 0x1eaf7c: 0xaf828db8
    ctx->pc = 0x1eaf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938040), GPR_U32(ctx, 2));
    // 0x1eaf80: 0xc07bf9c
    ctx->pc = 0x1EAF80u;
    SET_GPR_U32(ctx, 31, 0x1EAF88u);
    ctx->pc = 0x1EAF84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF88u; }
        else if (ctx->pc != 0x1EAF88u) { ctx->pc = 0x1EAF88u; }
    }
    if (ctx->pc != 0x1EAF88u) { return; }
    ctx->pc = 0x1EAF88u;
    // 0x1eaf88: 0x8f878db8
    ctx->pc = 0x1eaf88u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1eaf8c: 0x27858dc0
    ctx->pc = 0x1eaf8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 28), 4294938048));
    // 0x1eaf90: 0x111880
    ctx->pc = 0x1eaf90u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1eaf94: 0xa32021
    ctx->pc = 0x1eaf94u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1eaf98: 0x3c030050
    ctx->pc = 0x1eaf98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1eaf9c: 0x24630df0
    ctx->pc = 0x1eaf9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3568));
    // 0x1eafa0: 0x73080
    ctx->pc = 0x1eafa0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1eafa4: 0xa62821
    ctx->pc = 0x1eafa4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1eafa8: 0xaca20000
    ctx->pc = 0x1eafa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1eafac: 0xac900000
    ctx->pc = 0x1eafacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x1eafb0: 0x72100
    ctx->pc = 0x1eafb0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), 4));
    // 0x1eafb4: 0x641821
    ctx->pc = 0x1eafb4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1eafb8: 0x21080
    ctx->pc = 0x1eafb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eafbc: 0x431021
    ctx->pc = 0x1eafbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eafc0: 0x8c420000
    ctx->pc = 0x1eafc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eafc4: 0x1040000b
    ctx->pc = 0x1EAFC4u;
    {
        const bool branch_taken_0x1eafc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EAFC8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
        if (branch_taken_0x1eafc4) {
            ctx->pc = 0x1EAFF4u;
            goto label_1eaff4;
        }
    }
    ctx->pc = 0x1EAFCCu;
    // 0x1eafcc: 0x112100
    ctx->pc = 0x1eafccu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 4));
    // 0x1eafd0: 0x24630df0
    ctx->pc = 0x1eafd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3568));
    // 0x1eafd4: 0x101080
    ctx->pc = 0x1eafd4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1eafd8: 0x641821
    ctx->pc = 0x1eafd8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1eafdc: 0x431021
    ctx->pc = 0x1eafdcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eafe0: 0x8c420000
    ctx->pc = 0x1eafe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eafe4: 0x10400003
    ctx->pc = 0x1EAFE4u;
    {
        const bool branch_taken_0x1eafe4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EAFE8u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eafe4) {
            ctx->pc = 0x1EAFF4u;
            goto label_1eaff4;
        }
    }
    ctx->pc = 0x1EAFECu;
    // 0x1eafec: 0x1000000a
    ctx->pc = 0x1EAFECu;
    {
        const bool branch_taken_0x1eafec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EAFF0u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1eafec) {
            ctx->pc = 0x1EB018u;
            goto label_1eb018;
        }
    }
    ctx->pc = 0x1EAFF4u;
label_1eaff4:
    // 0x1eaff4: 0xc07ac0c
    ctx->pc = 0x1EAFF4u;
    SET_GPR_U32(ctx, 31, 0x1EAFFCu);
    ctx->pc = 0x1EB030u;
    {
        const uint32_t __entryPc = ctx->pc;
        GunAdjustInit__Fv_0x1eb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAFFCu; }
        else if (ctx->pc != 0x1EAFFCu) { ctx->pc = 0x1EAFFCu; }
    }
    if (ctx->pc != 0x1EAFFCu) { return; }
    ctx->pc = 0x1EAFFCu;
label_1eaffc:
    // 0x1eaffc: 0x8f828db0
    ctx->pc = 0x1eaffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1eb000:
    // 0x1eb000: 0x10400004
    ctx->pc = 0x1EB000u;
    {
        const bool branch_taken_0x1eb000 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB004u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1eb000) {
            ctx->pc = 0x1EB014u;
            goto label_1eb014;
        }
    }
    ctx->pc = 0x1EB008u;
    // 0x1eb008: 0xc07bac8
    ctx->pc = 0x1EB008u;
    SET_GPR_U32(ctx, 31, 0x1EB010u);
    ctx->pc = 0x1EEB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispGunFlash__Fv_0x1eeb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB010u; }
        else if (ctx->pc != 0x1EB010u) { ctx->pc = 0x1EB010u; }
    }
    if (ctx->pc != 0x1EB010u) { return; }
    ctx->pc = 0x1EB010u;
    // 0x1eb010: 0x24020001
    ctx->pc = 0x1eb010u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1eb014:
    // 0x1eb014: 0x7bbf0020
    ctx->pc = 0x1eb014u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1eb018:
    // 0x1eb018: 0x7bb10010
    ctx->pc = 0x1eb018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb01c: 0x7bb00000
    ctx->pc = 0x1eb01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb020: 0x3e00008
    ctx->pc = 0x1EB020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB024u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EAE80u: goto label_1eae80;
            case 0x1EAE9Cu: goto label_1eae9c;
            case 0x1EAEACu: goto label_1eaeac;
            case 0x1EAEDCu: goto label_1eaedc;
            case 0x1EAEF4u: goto label_1eaef4;
            case 0x1EAF18u: goto label_1eaf18;
            case 0x1EAF20u: goto label_1eaf20;
            case 0x1EAF68u: goto label_1eaf68;
            case 0x1EAF7Cu: goto label_1eaf7c;
            case 0x1EAFF4u: goto label_1eaff4;
            case 0x1EAFFCu: goto label_1eaffc;
            case 0x1EB000u: goto label_1eb000;
            case 0x1EB014u: goto label_1eb014;
            case 0x1EB018u: goto label_1eb018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB028u;
}
