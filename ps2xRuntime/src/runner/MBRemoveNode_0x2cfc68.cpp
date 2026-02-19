#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBRemoveNode
// Address: 0x2cfc68 - 0x2cfe4c
void MBRemoveNode_0x2cfc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cfc68u;

    // 0x2cfc68: 0x27bdffc0
    ctx->pc = 0x2cfc68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cfc6c: 0xffbf0030
    ctx->pc = 0x2cfc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cfc70: 0xffb20020
    ctx->pc = 0x2cfc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cfc74: 0xffb10010
    ctx->pc = 0x2cfc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cfc78: 0xffb00000
    ctx->pc = 0x2cfc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cfc7c: 0x80882d
    ctx->pc = 0x2cfc7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfc80: 0xa0902d
    ctx->pc = 0x2cfc80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfc84: 0x1220006b
    ctx->pc = 0x2CFC84u;
    {
        const bool branch_taken_0x2cfc84 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFC88u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cfc84) {
            ctx->pc = 0x2CFE34u;
            goto label_2cfe34;
        }
    }
    ctx->pc = 0x2CFC8Cu;
    // 0x2cfc8c: 0x82220052
    ctx->pc = 0x2cfc8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x2cfc90: 0x10400067
    ctx->pc = 0x2CFC90u;
    {
        const bool branch_taken_0x2cfc90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFC94u;
        SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
        if (branch_taken_0x2cfc90) {
            ctx->pc = 0x2CFE30u;
            goto label_2cfe30;
        }
    }
    ctx->pc = 0x2CFC98u;
    // 0x2cfc98: 0x8e220060
    ctx->pc = 0x2cfc98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2cfc9c: 0x431024
    ctx->pc = 0x2cfc9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfca0: 0x10400003
    ctx->pc = 0x2CFCA0u;
    {
        const bool branch_taken_0x2cfca0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFCA4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cfca0) {
            ctx->pc = 0x2CFCB0u;
            goto label_2cfcb0;
        }
    }
    ctx->pc = 0x2CFCA8u;
    // 0x2cfca8: 0xc0b42a0
    ctx->pc = 0x2CFCA8u;
    SET_GPR_U32(ctx, 31, 0x2CFCB0u);
    ctx->pc = 0x2CFCACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearUVScaleAdd_0x2d0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFCB0u; }
    }
    if (ctx->pc != 0x2CFCB0u) { return; }
    ctx->pc = 0x2CFCB0u;
label_2cfcb0:
    // 0x2cfcb0: 0x8e300074
    ctx->pc = 0x2cfcb0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2cfcb4: 0x3c02003a
    ctx->pc = 0x2cfcb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cfcb8: 0x12400004
    ctx->pc = 0x2CFCB8u;
    {
        const bool branch_taken_0x2cfcb8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFCBCu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 3228), GPR_U32(ctx, 16));
        if (branch_taken_0x2cfcb8) {
            ctx->pc = 0x2CFCCCu;
            goto label_2cfccc;
        }
    }
    ctx->pc = 0x2CFCC0u;
    // 0x2cfcc0: 0xc0b3eea
    ctx->pc = 0x2CFCC0u;
    SET_GPR_U32(ctx, 31, 0x2CFCC8u);
    ctx->pc = 0x2CFCC4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 120)));
    ctx->pc = 0x2CFBA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNodeChild_0x2cfba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFCC8u; }
    }
    if (ctx->pc != 0x2CFCC8u) { return; }
    ctx->pc = 0x2CFCC8u;
    // 0x2cfcc8: 0xae200078
    ctx->pc = 0x2cfcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
label_2cfccc:
    // 0x2cfccc: 0x82230052
    ctx->pc = 0x2cfcccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x2cfcd0: 0x2402000e
    ctx->pc = 0x2cfcd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2cfcd4: 0x1462000b
    ctx->pc = 0x2CFCD4u;
    {
        const bool branch_taken_0x2cfcd4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2cfcd4) {
            ctx->pc = 0x2CFD04u;
            goto label_2cfd04;
        }
    }
    ctx->pc = 0x2CFCDCu;
    // 0x2cfcdc: 0x8e220070
    ctx->pc = 0x2cfcdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2cfce0: 0x10400008
    ctx->pc = 0x2CFCE0u;
    {
        const bool branch_taken_0x2cfce0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFCE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2cfce0) {
            ctx->pc = 0x2CFD04u;
            goto label_2cfd04;
        }
    }
    ctx->pc = 0x2CFCE8u;
    // 0x2cfce8: 0x220202d
    ctx->pc = 0x2cfce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfcec: 0xc0b3f94
    ctx->pc = 0x2CFCECu;
    SET_GPR_U32(ctx, 31, 0x2CFCF4u);
    ctx->pc = 0x2CFCF0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 5300)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFCF4u; }
    }
    if (ctx->pc != 0x2CFCF4u) { return; }
    ctx->pc = 0x2CFCF4u;
    // 0x2cfcf4: 0xc0b245c
    ctx->pc = 0x2CFCF4u;
    SET_GPR_U32(ctx, 31, 0x2CFCFCu);
    ctx->pc = 0x2CFCF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C9170u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemovePsys_0x2c9170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFCFCu; }
    }
    if (ctx->pc != 0x2CFCFCu) { return; }
    ctx->pc = 0x2CFCFCu;
    // 0x2cfcfc: 0x1000004d
    ctx->pc = 0x2CFCFCu;
    {
        const bool branch_taken_0x2cfcfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFD00u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cfcfc) {
            ctx->pc = 0x2CFE34u;
            goto label_2cfe34;
        }
    }
    ctx->pc = 0x2CFD04u;
label_2cfd04:
    // 0x2cfd04: 0x12000017
    ctx->pc = 0x2CFD04u;
    {
        const bool branch_taken_0x2cfd04 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFD08u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2cfd04) {
            ctx->pc = 0x2CFD64u;
            goto label_2cfd64;
        }
    }
    ctx->pc = 0x2CFD0Cu;
    // 0x2cfd0c: 0x8e020078
    ctx->pc = 0x2cfd0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2cfd10: 0x14510015
    ctx->pc = 0x2CFD10u;
    {
        const bool branch_taken_0x2cfd10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x2CFD14u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3220)));
        if (branch_taken_0x2cfd10) {
            ctx->pc = 0x2CFD68u;
            goto label_2cfd68;
        }
    }
    ctx->pc = 0x2CFD18u;
    // 0x2cfd18: 0x8e220078
    ctx->pc = 0x2cfd18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2cfd1c: 0x54400004
    ctx->pc = 0x2CFD1Cu;
    {
        const bool branch_taken_0x2cfd1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cfd1c) {
            ctx->pc = 0x2CFD20u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
            ctx->pc = 0x2CFD30u;
            goto label_2cfd30;
        }
    }
    ctx->pc = 0x2CFD24u;
    // 0x2cfd24: 0x8e22007c
    ctx->pc = 0x2cfd24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x2cfd28: 0x1000003f
    ctx->pc = 0x2CFD28u;
    {
        const bool branch_taken_0x2cfd28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFD2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
        if (branch_taken_0x2cfd28) {
            ctx->pc = 0x2CFE28u;
            goto label_2cfe28;
        }
    }
    ctx->pc = 0x2CFD30u;
label_2cfd30:
    // 0x2cfd30: 0x8e230078
    ctx->pc = 0x2cfd30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2cfd34: 0x8c62007c
    ctx->pc = 0x2cfd34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2cfd38: 0x50400039
    ctx->pc = 0x2CFD38u;
    {
        const bool branch_taken_0x2cfd38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cfd38) {
            ctx->pc = 0x2CFD3Cu;
            WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 16));
            ctx->pc = 0x2CFE20u;
            goto label_2cfe20;
        }
    }
    ctx->pc = 0x2CFD40u;
label_2cfd40:
    // 0x2cfd40: 0xac700074
    ctx->pc = 0x2cfd40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 16));
    // 0x2cfd44: 0x8c63007c
    ctx->pc = 0x2cfd44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2cfd48: 0x8c62007c
    ctx->pc = 0x2cfd48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2cfd4c: 0x0
    ctx->pc = 0x2cfd4cu;
    // NOP
    // 0x2cfd50: 0x0
    ctx->pc = 0x2cfd50u;
    // NOP
    // 0x2cfd54: 0x1440fffa
    ctx->pc = 0x2CFD54u;
    {
        const bool branch_taken_0x2cfd54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cfd54) {
            ctx->pc = 0x2CFD40u;
            goto label_2cfd40;
        }
    }
    ctx->pc = 0x2CFD5Cu;
    // 0x2cfd5c: 0x10000030
    ctx->pc = 0x2CFD5Cu;
    {
        const bool branch_taken_0x2cfd5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFD60u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 16));
        if (branch_taken_0x2cfd5c) {
            ctx->pc = 0x2CFE20u;
            goto label_2cfe20;
        }
    }
    ctx->pc = 0x2CFD64u;
label_2cfd64:
    // 0x2cfd64: 0x8c620c94
    ctx->pc = 0x2cfd64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3220)));
label_2cfd68:
    // 0x2cfd68: 0x16220016
    ctx->pc = 0x2CFD68u;
    {
        const bool branch_taken_0x2cfd68 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x2cfd68) {
            ctx->pc = 0x2CFDC4u;
            goto label_2cfdc4;
        }
    }
    ctx->pc = 0x2CFD70u;
    // 0x2cfd70: 0x8e220078
    ctx->pc = 0x2cfd70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2cfd74: 0x14400004
    ctx->pc = 0x2CFD74u;
    {
        const bool branch_taken_0x2cfd74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CFD78u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2cfd74) {
            ctx->pc = 0x2CFD88u;
            goto label_2cfd88;
        }
    }
    ctx->pc = 0x2CFD7Cu;
    // 0x2cfd7c: 0x8e22007c
    ctx->pc = 0x2cfd7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x2cfd80: 0x10000029
    ctx->pc = 0x2CFD80u;
    {
        const bool branch_taken_0x2cfd80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFD84u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 3220), GPR_U32(ctx, 2));
        if (branch_taken_0x2cfd80) {
            ctx->pc = 0x2CFE28u;
            goto label_2cfe28;
        }
    }
    ctx->pc = 0x2CFD88u;
label_2cfd88:
    // 0x2cfd88: 0x8e230078
    ctx->pc = 0x2cfd88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2cfd8c: 0xac430c94
    ctx->pc = 0x2cfd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3220), GPR_U32(ctx, 3));
    // 0x2cfd90: 0x8c62007c
    ctx->pc = 0x2cfd90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2cfd94: 0x10400021
    ctx->pc = 0x2CFD94u;
    {
        const bool branch_taken_0x2cfd94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFD98u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd94) {
            ctx->pc = 0x2CFE1Cu;
            goto label_2cfe1c;
        }
    }
    ctx->pc = 0x2CFD9Cu;
    // 0x2cfd9c: 0x0
    ctx->pc = 0x2cfd9cu;
    // NOP
label_2cfda0:
    // 0x2cfda0: 0xac700074
    ctx->pc = 0x2cfda0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 16));
    // 0x2cfda4: 0x8c63007c
    ctx->pc = 0x2cfda4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2cfda8: 0x8c62007c
    ctx->pc = 0x2cfda8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2cfdac: 0x0
    ctx->pc = 0x2cfdacu;
    // NOP
    // 0x2cfdb0: 0x0
    ctx->pc = 0x2cfdb0u;
    // NOP
    // 0x2cfdb4: 0x1440fffa
    ctx->pc = 0x2CFDB4u;
    {
        const bool branch_taken_0x2cfdb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cfdb4) {
            ctx->pc = 0x2CFDA0u;
            goto label_2cfda0;
        }
    }
    ctx->pc = 0x2CFDBCu;
    // 0x2cfdbc: 0x10000018
    ctx->pc = 0x2CFDBCu;
    {
        const bool branch_taken_0x2cfdbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFDC0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 16));
        if (branch_taken_0x2cfdbc) {
            ctx->pc = 0x2CFE20u;
            goto label_2cfe20;
        }
    }
    ctx->pc = 0x2CFDC4u;
label_2cfdc4:
    // 0x2cfdc4: 0xc0b3e40
    ctx->pc = 0x2CFDC4u;
    SET_GPR_U32(ctx, 31, 0x2CFDCCu);
    ctx->pc = 0x2CFDC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF900u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodePrevNode_0x2cf900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFDCCu; }
    }
    if (ctx->pc != 0x2CFDCCu) { return; }
    ctx->pc = 0x2CFDCCu;
    // 0x2cfdcc: 0x40182d
    ctx->pc = 0x2cfdccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfdd0: 0x10600015
    ctx->pc = 0x2CFDD0u;
    {
        const bool branch_taken_0x2cfdd0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cfdd0) {
            ctx->pc = 0x2CFE28u;
            goto label_2cfe28;
        }
    }
    ctx->pc = 0x2CFDD8u;
    // 0x2cfdd8: 0x8e220078
    ctx->pc = 0x2cfdd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2cfddc: 0x50400011
    ctx->pc = 0x2CFDDCu;
    {
        const bool branch_taken_0x2cfddc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cfddc) {
            ctx->pc = 0x2CFDE0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 124)));
            ctx->pc = 0x2CFE24u;
            goto label_2cfe24;
        }
    }
    ctx->pc = 0x2CFDE4u;
    // 0x2cfde4: 0xac62007c
    ctx->pc = 0x2cfde4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
    // 0x2cfde8: 0x8c700074
    ctx->pc = 0x2cfde8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x2cfdec: 0x8e230078
    ctx->pc = 0x2cfdecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2cfdf0: 0x8c62007c
    ctx->pc = 0x2cfdf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2cfdf4: 0x5040000a
    ctx->pc = 0x2CFDF4u;
    {
        const bool branch_taken_0x2cfdf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cfdf4) {
            ctx->pc = 0x2CFDF8u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 16));
            ctx->pc = 0x2CFE20u;
            goto label_2cfe20;
        }
    }
    ctx->pc = 0x2CFDFCu;
    // 0x2cfdfc: 0x0
    ctx->pc = 0x2cfdfcu;
    // NOP
label_2cfe00:
    // 0x2cfe00: 0xac700074
    ctx->pc = 0x2cfe00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 16));
    // 0x2cfe04: 0x8c63007c
    ctx->pc = 0x2cfe04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2cfe08: 0x8c62007c
    ctx->pc = 0x2cfe08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2cfe0c: 0x0
    ctx->pc = 0x2cfe0cu;
    // NOP
    // 0x2cfe10: 0x0
    ctx->pc = 0x2cfe10u;
    // NOP
    // 0x2cfe14: 0x1440fffa
    ctx->pc = 0x2CFE14u;
    {
        const bool branch_taken_0x2cfe14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cfe14) {
            ctx->pc = 0x2CFE00u;
            goto label_2cfe00;
        }
    }
    ctx->pc = 0x2CFE1Cu;
label_2cfe1c:
    // 0x2cfe1c: 0xac700074
    ctx->pc = 0x2cfe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 16));
label_2cfe20:
    // 0x2cfe20: 0x8e22007c
    ctx->pc = 0x2cfe20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_2cfe24:
    // 0x2cfe24: 0xac62007c
    ctx->pc = 0x2cfe24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
label_2cfe28:
    // 0x2cfe28: 0xc0b3ee2
    ctx->pc = 0x2CFE28u;
    SET_GPR_U32(ctx, 31, 0x2CFE30u);
    ctx->pc = 0x2CFE2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetEmpty_0x2cfb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFE30u; }
    }
    if (ctx->pc != 0x2CFE30u) { return; }
    ctx->pc = 0x2CFE30u;
label_2cfe30:
    // 0x2cfe30: 0x102d
    ctx->pc = 0x2cfe30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cfe34:
    // 0x2cfe34: 0xdfbf0030
    ctx->pc = 0x2cfe34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cfe38: 0xdfb20020
    ctx->pc = 0x2cfe38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfe3c: 0xdfb10010
    ctx->pc = 0x2cfe3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfe40: 0xdfb00000
    ctx->pc = 0x2cfe40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfe44: 0x3e00008
    ctx->pc = 0x2CFE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFE48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CFCB0u: goto label_2cfcb0;
            case 0x2CFCCCu: goto label_2cfccc;
            case 0x2CFD04u: goto label_2cfd04;
            case 0x2CFD30u: goto label_2cfd30;
            case 0x2CFD40u: goto label_2cfd40;
            case 0x2CFD64u: goto label_2cfd64;
            case 0x2CFD68u: goto label_2cfd68;
            case 0x2CFD88u: goto label_2cfd88;
            case 0x2CFDA0u: goto label_2cfda0;
            case 0x2CFDC4u: goto label_2cfdc4;
            case 0x2CFE00u: goto label_2cfe00;
            case 0x2CFE1Cu: goto label_2cfe1c;
            case 0x2CFE20u: goto label_2cfe20;
            case 0x2CFE24u: goto label_2cfe24;
            case 0x2CFE28u: goto label_2cfe28;
            case 0x2CFE30u: goto label_2cfe30;
            case 0x2CFE34u: goto label_2cfe34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CFE4Cu;
}
