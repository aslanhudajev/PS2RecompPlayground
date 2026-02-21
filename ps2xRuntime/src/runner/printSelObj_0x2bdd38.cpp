#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: printSelObj
// Address: 0x2bdd38 - 0x2bdf80
void printSelObj_0x2bdd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bdd38u;

    // 0x2bdd38: 0x27bdffd0
    ctx->pc = 0x2bdd38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bdd3c: 0xffbf0020
    ctx->pc = 0x2bdd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bdd40: 0xffb10010
    ctx->pc = 0x2bdd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bdd44: 0xffb00000
    ctx->pc = 0x2bdd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bdd48: 0x3c020036
    ctx->pc = 0x2bdd48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2bdd4c: 0x8c51dee0
    ctx->pc = 0x2bdd4cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2bdd50: 0x3c020037
    ctx->pc = 0x2bdd50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bdd54: 0xc0af720
    ctx->pc = 0x2BDD54u;
    SET_GPR_U32(ctx, 31, 0x2BDD5Cu);
    ctx->pc = 0x2BDD58u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    ctx->pc = 0x2BDC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcObjCnt_0x2bdc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDD5Cu; }
    }
    if (ctx->pc != 0x2BDD5Cu) { return; }
    ctx->pc = 0x2BDD5Cu;
    // 0x2bdd5c: 0x3c04003b
    ctx->pc = 0x2bdd5cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bdd60: 0xc0b4a34
    ctx->pc = 0x2BDD60u;
    SET_GPR_U32(ctx, 31, 0x2BDD68u);
    ctx->pc = 0x2BDD64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26920));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDD68u; }
    }
    if (ctx->pc != 0x2BDD68u) { return; }
    ctx->pc = 0x2BDD68u;
    // 0x2bdd68: 0x8e050008
    ctx->pc = 0x2bdd68u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bdd6c: 0x8e02000c
    ctx->pc = 0x2bdd6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2bdd70: 0x14a2000f
    ctx->pc = 0x2BDD70u;
    {
        const bool branch_taken_0x2bdd70 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BDD74u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bdd70) {
            ctx->pc = 0x2BDDB0u;
            goto label_2bddb0;
        }
    }
    ctx->pc = 0x2BDD78u;
    // 0x2bdd78: 0x3c04003b
    ctx->pc = 0x2bdd78u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bdd7c: 0xc0b4a34
    ctx->pc = 0x2BDD7Cu;
    SET_GPR_U32(ctx, 31, 0x2BDD84u);
    ctx->pc = 0x2BDD80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26944));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDD84u; }
    }
    if (ctx->pc != 0x2BDD84u) { return; }
    ctx->pc = 0x2BDD84u;
    // 0x2bdd84: 0x8e230038
    ctx->pc = 0x2bdd84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2bdd88: 0x8e020008
    ctx->pc = 0x2bdd88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bdd8c: 0x21100
    ctx->pc = 0x2bdd8cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bdd90: 0x621821
    ctx->pc = 0x2bdd90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bdd94: 0x8c650004
    ctx->pc = 0x2bdd94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bdd98: 0x3c04003b
    ctx->pc = 0x2bdd98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bdd9c: 0x24846948
    ctx->pc = 0x2bdd9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26952));
    // 0x2bdda0: 0xc0b4a34
    ctx->pc = 0x2BDDA0u;
    SET_GPR_U32(ctx, 31, 0x2BDDA8u);
    ctx->pc = 0x2BDDA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDA8u; }
    }
    if (ctx->pc != 0x2BDDA8u) { return; }
    ctx->pc = 0x2BDDA8u;
    // 0x2bdda8: 0x10000006
    ctx->pc = 0x2BDDA8u;
    {
        const bool branch_taken_0x2bdda8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDDACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        if (branch_taken_0x2bdda8) {
            ctx->pc = 0x2BDDC4u;
            goto label_2bddc4;
        }
    }
    ctx->pc = 0x2BDDB0u;
label_2bddb0:
    // 0x2bddb0: 0x24846950
    ctx->pc = 0x2bddb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26960));
    // 0x2bddb4: 0x8e050008
    ctx->pc = 0x2bddb4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bddb8: 0xc0b4a34
    ctx->pc = 0x2BDDB8u;
    SET_GPR_U32(ctx, 31, 0x2BDDC0u);
    ctx->pc = 0x2BDDBCu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDC0u; }
    }
    if (ctx->pc != 0x2BDDC0u) { return; }
    ctx->pc = 0x2BDDC0u;
    // 0x2bddc0: 0x8e020010
    ctx->pc = 0x2bddc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2bddc4:
    // 0x2bddc4: 0x1c400008
    ctx->pc = 0x2BDDC4u;
    {
        const bool branch_taken_0x2bddc4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2BDDC8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bddc4) {
            ctx->pc = 0x2BDDE8u;
            goto label_2bdde8;
        }
    }
    ctx->pc = 0x2BDDCCu;
    // 0x2bddcc: 0x8e030014
    ctx->pc = 0x2bddccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2bddd0: 0x3c023fff
    ctx->pc = 0x2bddd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16383 << 16));
    // 0x2bddd4: 0x3442fffe
    ctx->pc = 0x2bddd4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
    // 0x2bddd8: 0x43102a
    ctx->pc = 0x2bddd8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2bdddc: 0x5440002c
    ctx->pc = 0x2BDDDCu;
    {
        const bool branch_taken_0x2bdddc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bdddc) {
            ctx->pc = 0x2BDDE0u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2BDE90u;
            goto label_2bde90;
        }
    }
    ctx->pc = 0x2BDDE4u;
    // 0x2bdde4: 0x3c04003b
    ctx->pc = 0x2bdde4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bdde8:
    // 0x2bdde8: 0xc0b4a34
    ctx->pc = 0x2BDDE8u;
    SET_GPR_U32(ctx, 31, 0x2BDDF0u);
    ctx->pc = 0x2BDDECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26976));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDF0u; }
    }
    if (ctx->pc != 0x2BDDF0u) { return; }
    ctx->pc = 0x2BDDF0u;
    // 0x2bddf0: 0x8e050010
    ctx->pc = 0x2bddf0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bddf4: 0x8e020014
    ctx->pc = 0x2bddf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2bddf8: 0x54a20014
    ctx->pc = 0x2BDDF8u;
    {
        const bool branch_taken_0x2bddf8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x2bddf8) {
            ctx->pc = 0x2BDDFCu;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2BDE4Cu;
            goto label_2bde4c;
        }
    }
    ctx->pc = 0x2BDE00u;
    // 0x2bde00: 0x3c04003b
    ctx->pc = 0x2bde00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bde04: 0xc0b4a34
    ctx->pc = 0x2BDE04u;
    SET_GPR_U32(ctx, 31, 0x2BDE0Cu);
    ctx->pc = 0x2BDE08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26944));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE0Cu; }
    }
    if (ctx->pc != 0x2BDE0Cu) { return; }
    ctx->pc = 0x2BDE0Cu;
    // 0x2bde0c: 0x8e230038
    ctx->pc = 0x2bde0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2bde10: 0x8e020008
    ctx->pc = 0x2bde10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bde14: 0x21100
    ctx->pc = 0x2bde14u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bde18: 0x621821
    ctx->pc = 0x2bde18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bde1c: 0x8c630004
    ctx->pc = 0x2bde1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bde20: 0x8e020010
    ctx->pc = 0x2bde20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bde24: 0x21180
    ctx->pc = 0x2bde24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x2bde28: 0x8c630054
    ctx->pc = 0x2bde28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2bde2c: 0x431021
    ctx->pc = 0x2bde2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bde30: 0x8c45002c
    ctx->pc = 0x2bde30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2bde34: 0x10a00009
    ctx->pc = 0x2BDE34u;
    {
        const bool branch_taken_0x2bde34 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDE38u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bde34) {
            ctx->pc = 0x2BDE5Cu;
            goto label_2bde5c;
        }
    }
    ctx->pc = 0x2BDE3Cu;
    // 0x2bde3c: 0xc0b4a34
    ctx->pc = 0x2BDE3Cu;
    SET_GPR_U32(ctx, 31, 0x2BDE44u);
    ctx->pc = 0x2BDE40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26992));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE44u; }
    }
    if (ctx->pc != 0x2BDE44u) { return; }
    ctx->pc = 0x2BDE44u;
    // 0x2bde44: 0x10000006
    ctx->pc = 0x2BDE44u;
    {
        const bool branch_taken_0x2bde44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDE48u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 32)));
        if (branch_taken_0x2bde44) {
            ctx->pc = 0x2BDE60u;
            goto label_2bde60;
        }
    }
    ctx->pc = 0x2BDE4Cu;
label_2bde4c:
    // 0x2bde4c: 0x24846978
    ctx->pc = 0x2bde4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27000));
    // 0x2bde50: 0x8e050010
    ctx->pc = 0x2bde50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bde54: 0xc0b4a34
    ctx->pc = 0x2BDE54u;
    SET_GPR_U32(ctx, 31, 0x2BDE5Cu);
    ctx->pc = 0x2BDE58u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE5Cu; }
    }
    if (ctx->pc != 0x2BDE5Cu) { return; }
    ctx->pc = 0x2BDE5Cu;
label_2bde5c:
    // 0x2bde5c: 0x8e050020
    ctx->pc = 0x2bde5cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2bde60:
    // 0x2bde60: 0x3c023fff
    ctx->pc = 0x2bde60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16383 << 16));
    // 0x2bde64: 0x3442ffff
    ctx->pc = 0x2bde64u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2bde68: 0x50a20005
    ctx->pc = 0x2BDE68u;
    {
        const bool branch_taken_0x2bde68 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x2bde68) {
            ctx->pc = 0x2BDE6Cu;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2BDE80u;
            goto label_2bde80;
        }
    }
    ctx->pc = 0x2BDE70u;
    // 0x2bde70: 0x3c04003b
    ctx->pc = 0x2bde70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bde74: 0xc0b4a34
    ctx->pc = 0x2BDE74u;
    SET_GPR_U32(ctx, 31, 0x2BDE7Cu);
    ctx->pc = 0x2BDE78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27016));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE7Cu; }
    }
    if (ctx->pc != 0x2BDE7Cu) { return; }
    ctx->pc = 0x2BDE7Cu;
    // 0x2bde7c: 0x3c04003b
    ctx->pc = 0x2bde7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bde80:
    // 0x2bde80: 0xc0b4a34
    ctx->pc = 0x2BDE80u;
    SET_GPR_U32(ctx, 31, 0x2BDE88u);
    ctx->pc = 0x2BDE84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27024));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE88u; }
    }
    if (ctx->pc != 0x2BDE88u) { return; }
    ctx->pc = 0x2BDE88u;
    // 0x2bde88: 0x10000004
    ctx->pc = 0x2BDE88u;
    {
        const bool branch_taken_0x2bde88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDE8Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        if (branch_taken_0x2bde88) {
            ctx->pc = 0x2BDE9Cu;
            goto label_2bde9c;
        }
    }
    ctx->pc = 0x2BDE90u;
label_2bde90:
    // 0x2bde90: 0xc0b4a34
    ctx->pc = 0x2BDE90u;
    SET_GPR_U32(ctx, 31, 0x2BDE98u);
    ctx->pc = 0x2BDE94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27032));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE98u; }
    }
    if (ctx->pc != 0x2BDE98u) { return; }
    ctx->pc = 0x2BDE98u;
    // 0x2bde98: 0x8e050018
    ctx->pc = 0x2bde98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2bde9c:
    // 0x2bde9c: 0x4a00010
    ctx->pc = 0x2BDE9Cu;
    {
        const bool branch_taken_0x2bde9c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2BDEA0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bde9c) {
            ctx->pc = 0x2BDEE0u;
            goto label_2bdee0;
        }
    }
    ctx->pc = 0x2BDEA4u;
    // 0x2bdea4: 0xc0b4a34
    ctx->pc = 0x2BDEA4u;
    SET_GPR_U32(ctx, 31, 0x2BDEACu);
    ctx->pc = 0x2BDEA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27048));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDEACu; }
    }
    if (ctx->pc != 0x2BDEACu) { return; }
    ctx->pc = 0x2BDEACu;
    // 0x2bdeac: 0x8e050024
    ctx->pc = 0x2bdeacu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2bdeb0: 0x3c023fff
    ctx->pc = 0x2bdeb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16383 << 16));
    // 0x2bdeb4: 0x3442ffff
    ctx->pc = 0x2bdeb4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2bdeb8: 0x50a20005
    ctx->pc = 0x2BDEB8u;
    {
        const bool branch_taken_0x2bdeb8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x2bdeb8) {
            ctx->pc = 0x2BDEBCu;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2BDED0u;
            goto label_2bded0;
        }
    }
    ctx->pc = 0x2BDEC0u;
    // 0x2bdec0: 0x3c04003b
    ctx->pc = 0x2bdec0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bdec4: 0xc0b4a34
    ctx->pc = 0x2BDEC4u;
    SET_GPR_U32(ctx, 31, 0x2BDECCu);
    ctx->pc = 0x2BDEC8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27016));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDECCu; }
    }
    if (ctx->pc != 0x2BDECCu) { return; }
    ctx->pc = 0x2BDECCu;
    // 0x2bdecc: 0x3c04003b
    ctx->pc = 0x2bdeccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bded0:
    // 0x2bded0: 0xc0b4a34
    ctx->pc = 0x2BDED0u;
    SET_GPR_U32(ctx, 31, 0x2BDED8u);
    ctx->pc = 0x2BDED4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27024));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDED8u; }
    }
    if (ctx->pc != 0x2BDED8u) { return; }
    ctx->pc = 0x2BDED8u;
    // 0x2bded8: 0x1000000a
    ctx->pc = 0x2BDED8u;
    {
        const bool branch_taken_0x2bded8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDEDCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        if (branch_taken_0x2bded8) {
            ctx->pc = 0x2BDF04u;
            goto label_2bdf04;
        }
    }
    ctx->pc = 0x2BDEE0u;
label_2bdee0:
    // 0x2bdee0: 0x8e050024
    ctx->pc = 0x2bdee0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2bdee4: 0x3c023fff
    ctx->pc = 0x2bdee4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16383 << 16));
    // 0x2bdee8: 0x3442ffff
    ctx->pc = 0x2bdee8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2bdeec: 0x50a20005
    ctx->pc = 0x2BDEECu;
    {
        const bool branch_taken_0x2bdeec = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x2bdeec) {
            ctx->pc = 0x2BDEF0u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->pc = 0x2BDF04u;
            goto label_2bdf04;
        }
    }
    ctx->pc = 0x2BDEF4u;
    // 0x2bdef4: 0x3c04003b
    ctx->pc = 0x2bdef4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bdef8: 0xc0b4a34
    ctx->pc = 0x2BDEF8u;
    SET_GPR_U32(ctx, 31, 0x2BDF00u);
    ctx->pc = 0x2BDEFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27064));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF00u; }
    }
    if (ctx->pc != 0x2BDF00u) { return; }
    ctx->pc = 0x2BDF00u;
    // 0x2bdf00: 0x8e05001c
    ctx->pc = 0x2bdf00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2bdf04:
    // 0x2bdf04: 0x4a00010
    ctx->pc = 0x2BDF04u;
    {
        const bool branch_taken_0x2bdf04 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2BDF08u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bdf04) {
            ctx->pc = 0x2BDF48u;
            goto label_2bdf48;
        }
    }
    ctx->pc = 0x2BDF0Cu;
    // 0x2bdf0c: 0xc0b4a34
    ctx->pc = 0x2BDF0Cu;
    SET_GPR_U32(ctx, 31, 0x2BDF14u);
    ctx->pc = 0x2BDF10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27088));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF14u; }
    }
    if (ctx->pc != 0x2BDF14u) { return; }
    ctx->pc = 0x2BDF14u;
    // 0x2bdf14: 0x8e050028
    ctx->pc = 0x2bdf14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2bdf18: 0x3c023fff
    ctx->pc = 0x2bdf18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16383 << 16));
    // 0x2bdf1c: 0x3442ffff
    ctx->pc = 0x2bdf1cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2bdf20: 0x50a20005
    ctx->pc = 0x2BDF20u;
    {
        const bool branch_taken_0x2bdf20 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x2bdf20) {
            ctx->pc = 0x2BDF24u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2BDF38u;
            goto label_2bdf38;
        }
    }
    ctx->pc = 0x2BDF28u;
    // 0x2bdf28: 0x3c04003b
    ctx->pc = 0x2bdf28u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bdf2c: 0xc0b4a34
    ctx->pc = 0x2BDF2Cu;
    SET_GPR_U32(ctx, 31, 0x2BDF34u);
    ctx->pc = 0x2BDF30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27016));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF34u; }
    }
    if (ctx->pc != 0x2BDF34u) { return; }
    ctx->pc = 0x2BDF34u;
    // 0x2bdf34: 0x3c04003b
    ctx->pc = 0x2bdf34u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bdf38:
    // 0x2bdf38: 0xc0b4a34
    ctx->pc = 0x2BDF38u;
    SET_GPR_U32(ctx, 31, 0x2BDF40u);
    ctx->pc = 0x2BDF3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27024));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF40u; }
    }
    if (ctx->pc != 0x2BDF40u) { return; }
    ctx->pc = 0x2BDF40u;
    // 0x2bdf40: 0x10000009
    ctx->pc = 0x2BDF40u;
    {
        const bool branch_taken_0x2bdf40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDF44u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bdf40) {
            ctx->pc = 0x2BDF68u;
            goto label_2bdf68;
        }
    }
    ctx->pc = 0x2BDF48u;
label_2bdf48:
    // 0x2bdf48: 0x8e050028
    ctx->pc = 0x2bdf48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2bdf4c: 0x3c023fff
    ctx->pc = 0x2bdf4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16383 << 16));
    // 0x2bdf50: 0x3442ffff
    ctx->pc = 0x2bdf50u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2bdf54: 0x10a20003
    ctx->pc = 0x2BDF54u;
    {
        const bool branch_taken_0x2bdf54 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BDF58u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bdf54) {
            ctx->pc = 0x2BDF64u;
            goto label_2bdf64;
        }
    }
    ctx->pc = 0x2BDF5Cu;
    // 0x2bdf5c: 0xc0b4a34
    ctx->pc = 0x2BDF5Cu;
    SET_GPR_U32(ctx, 31, 0x2BDF64u);
    ctx->pc = 0x2BDF60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27104));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF64u; }
    }
    if (ctx->pc != 0x2BDF64u) { return; }
    ctx->pc = 0x2BDF64u;
label_2bdf64:
    // 0x2bdf64: 0x3c04003b
    ctx->pc = 0x2bdf64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bdf68:
    // 0x2bdf68: 0x248469f8
    ctx->pc = 0x2bdf68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27128));
    // 0x2bdf6c: 0xdfbf0020
    ctx->pc = 0x2bdf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bdf70: 0xdfb10010
    ctx->pc = 0x2bdf70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdf74: 0xdfb00000
    ctx->pc = 0x2bdf74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdf78: 0x80b4a34
    ctx->pc = 0x2BDF78u;
    ctx->pc = 0x2BDF7Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2D28D0u;
    LogfilePrintf_0x2d28d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2BDF80u;
}
