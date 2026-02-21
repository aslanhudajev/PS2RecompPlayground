#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_audiomenu
// Address: 0x20cc20 - 0x20cd74
void do_audiomenu_0x20cc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20cc20u;

    // 0x20cc20: 0x27bdff80
    ctx->pc = 0x20cc20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20cc24: 0xffbf0070
    ctx->pc = 0x20cc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x20cc28: 0xffb60060
    ctx->pc = 0x20cc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x20cc2c: 0xffb50050
    ctx->pc = 0x20cc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x20cc30: 0xffb40040
    ctx->pc = 0x20cc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20cc34: 0xffb30030
    ctx->pc = 0x20cc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20cc38: 0xffb20020
    ctx->pc = 0x20cc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20cc3c: 0xffb10010
    ctx->pc = 0x20cc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20cc40: 0xffb00000
    ctx->pc = 0x20cc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20cc44: 0x80802d
    ctx->pc = 0x20cc44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc48: 0x882d
    ctx->pc = 0x20cc48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc4c: 0x3c020032
    ctx->pc = 0x20cc4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20cc50: 0x8c44d36c
    ctx->pc = 0x20cc50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20cc54: 0xc080570
    ctx->pc = 0x20CC54u;
    SET_GPR_U32(ctx, 31, 0x20CC5Cu);
    ctx->pc = 0x20CC58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2015C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontHeight_0x2015c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC5Cu; }
    }
    if (ctx->pc != 0x20CC5Cu) { return; }
    ctx->pc = 0x20CC5Cu;
    // 0x20cc5c: 0x40902d
    ctx->pc = 0x20cc5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc60: 0x3c04003c
    ctx->pc = 0x20cc60u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x20cc64: 0x3c03003c
    ctx->pc = 0x20cc64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x20cc68: 0x8c82c598
    ctx->pc = 0x20cc68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294952344)));
    // 0x20cc6c: 0x8c63c508
    ctx->pc = 0x20cc6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294952200)));
    // 0x20cc70: 0x431021
    ctx->pc = 0x20cc70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20cc74: 0xac82c598
    ctx->pc = 0x20cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952344), GPR_U32(ctx, 2));
    // 0x20cc78: 0x3c160032
    ctx->pc = 0x20cc78u;
    SET_GPR_U32(ctx, 22, ((uint32_t)50 << 16));
    // 0x20cc7c: 0x3c150032
    ctx->pc = 0x20cc7cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)50 << 16));
    // 0x20cc80: 0x3c140032
    ctx->pc = 0x20cc80u;
    SET_GPR_U32(ctx, 20, ((uint32_t)50 << 16));
    // 0x20cc84: 0x3c020032
    ctx->pc = 0x20cc84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20cc88: 0x2453f458
    ctx->pc = 0x20cc88u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294964312));
    // 0x20cc8c: 0x0
    ctx->pc = 0x20cc8cu;
    // NOP
label_20cc90:
    // 0x20cc90: 0x24020024
    ctx->pc = 0x20cc90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
    // 0x20cc94: 0x2221018
    ctx->pc = 0x20cc94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20cc98: 0x8e03001c
    ctx->pc = 0x20cc98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20cc9c: 0x432021
    ctx->pc = 0x20cc9cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20cca0: 0x8c820000
    ctx->pc = 0x20cca0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20cca4: 0x1040002a
    ctx->pc = 0x20CCA4u;
    {
        const bool branch_taken_0x20cca4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CCA8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x20cca4) {
            ctx->pc = 0x20CD50u;
            goto label_20cd50;
        }
    }
    ctx->pc = 0x20CCACu;
    // 0x20ccac: 0x8e020074
    ctx->pc = 0x20ccacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x20ccb0: 0x2221026
    ctx->pc = 0x20ccb0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x20ccb4: 0x2482b
    ctx->pc = 0x20ccb4u;
    SET_GPR_U32(ctx, 9, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x20ccb8: 0x8c830004
    ctx->pc = 0x20ccb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20ccbc: 0x24020018
    ctx->pc = 0x20ccbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x20ccc0: 0x10620011
    ctx->pc = 0x20CCC0u;
    {
        const bool branch_taken_0x20ccc0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20CCC4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 25));
        if (branch_taken_0x20ccc0) {
            ctx->pc = 0x20CD08u;
            goto label_20cd08;
        }
    }
    ctx->pc = 0x20CCC8u;
    // 0x20ccc8: 0x10400005
    ctx->pc = 0x20CCC8u;
    {
        const bool branch_taken_0x20ccc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CCCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x20ccc8) {
            ctx->pc = 0x20CCE0u;
            goto label_20cce0;
        }
    }
    ctx->pc = 0x20CCD0u;
    // 0x20ccd0: 0x50620008
    ctx->pc = 0x20CCD0u;
    {
        const bool branch_taken_0x20ccd0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x20ccd0) {
            ctx->pc = 0x20CCD4u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->pc = 0x20CCF4u;
            goto label_20ccf4;
        }
    }
    ctx->pc = 0x20CCD8u;
    // 0x20ccd8: 0x1000ffed
    ctx->pc = 0x20CCD8u;
    {
        const bool branch_taken_0x20ccd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CCDCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x20ccd8) {
            ctx->pc = 0x20CC90u;
            goto label_20cc90;
        }
    }
    ctx->pc = 0x20CCE0u;
label_20cce0:
    // 0x20cce0: 0x24020019
    ctx->pc = 0x20cce0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25));
    // 0x20cce4: 0x50620014
    ctx->pc = 0x20CCE4u;
    {
        const bool branch_taken_0x20cce4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x20cce4) {
            ctx->pc = 0x20CCE8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->pc = 0x20CD38u;
            goto label_20cd38;
        }
    }
    ctx->pc = 0x20CCECu;
    // 0x20ccec: 0x1000ffe8
    ctx->pc = 0x20CCECu;
    {
        const bool branch_taken_0x20ccec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CCF0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x20ccec) {
            ctx->pc = 0x20CC90u;
            goto label_20cc90;
        }
    }
    ctx->pc = 0x20CCF4u;
label_20ccf4:
    // 0x20ccf4: 0x2463021
    ctx->pc = 0x20ccf4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x20ccf8: 0x8ec2f32c
    ctx->pc = 0x20ccf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4294964012)));
    // 0x20ccfc: 0x3c04003c
    ctx->pc = 0x20ccfcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x20cd00: 0x10000006
    ctx->pc = 0x20CD00u;
    {
        const bool branch_taken_0x20cd00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CD04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952296));
        if (branch_taken_0x20cd00) {
            ctx->pc = 0x20CD1Cu;
            goto label_20cd1c;
        }
    }
    ctx->pc = 0x20CD08u;
label_20cd08:
    // 0x20cd08: 0x8c860014
    ctx->pc = 0x20cd08u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x20cd0c: 0x2463021
    ctx->pc = 0x20cd0cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x20cd10: 0x8ec2f32c
    ctx->pc = 0x20cd10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4294964012)));
    // 0x20cd14: 0x3c04003c
    ctx->pc = 0x20cd14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x20cd18: 0x2484c580
    ctx->pc = 0x20cd18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952320));
label_20cd1c:
    // 0x20cd1c: 0x8e05000c
    ctx->pc = 0x20cd1cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20cd20: 0xc23021
    ctx->pc = 0x20cd20u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20cd24: 0x8ea7f324
    ctx->pc = 0x20cd24u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 21), 4294964004)));
    // 0x20cd28: 0xc083296
    ctx->pc = 0x20CD28u;
    SET_GPR_U32(ctx, 31, 0x20CD30u);
    ctx->pc = 0x20CD2Cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 20), 4294964008)));
    ctx->pc = 0x20CA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        position_audioslider_0x20ca58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD30u; }
    }
    if (ctx->pc != 0x20CD30u) { return; }
    ctx->pc = 0x20CD30u;
    // 0x20cd30: 0x1000ffd7
    ctx->pc = 0x20CD30u;
    {
        const bool branch_taken_0x20cd30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CD34u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x20cd30) {
            ctx->pc = 0x20CC90u;
            goto label_20cc90;
        }
    }
    ctx->pc = 0x20CD38u;
label_20cd38:
    // 0x20cd38: 0x24420001
    ctx->pc = 0x20cd38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20cd3c: 0xac82001c
    ctx->pc = 0x20cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x20cd40: 0x8e620008
    ctx->pc = 0x20cd40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x20cd44: 0xac820020
    ctx->pc = 0x20cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x20cd48: 0x1000ffd1
    ctx->pc = 0x20CD48u;
    {
        const bool branch_taken_0x20cd48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CD4Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x20cd48) {
            ctx->pc = 0x20CC90u;
            goto label_20cc90;
        }
    }
    ctx->pc = 0x20CD50u;
label_20cd50:
    // 0x20cd50: 0xdfb60060
    ctx->pc = 0x20cd50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20cd54: 0xdfb50050
    ctx->pc = 0x20cd54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20cd58: 0xdfb40040
    ctx->pc = 0x20cd58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20cd5c: 0xdfb30030
    ctx->pc = 0x20cd5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20cd60: 0xdfb20020
    ctx->pc = 0x20cd60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20cd64: 0xdfb10010
    ctx->pc = 0x20cd64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cd68: 0xdfb00000
    ctx->pc = 0x20cd68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cd6c: 0x3e00008
    ctx->pc = 0x20CD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CD70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20CC90u: goto label_20cc90;
            case 0x20CCE0u: goto label_20cce0;
            case 0x20CCF4u: goto label_20ccf4;
            case 0x20CD08u: goto label_20cd08;
            case 0x20CD1Cu: goto label_20cd1c;
            case 0x20CD38u: goto label_20cd38;
            case 0x20CD50u: goto label_20cd50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20CD74u;
}
