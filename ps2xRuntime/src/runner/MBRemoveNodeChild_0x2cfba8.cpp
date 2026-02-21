#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBRemoveNodeChild
// Address: 0x2cfba8 - 0x2cfc68
void MBRemoveNodeChild_0x2cfba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cfba8u;

label_2cfba8:
    // 0x2cfba8: 0x27bdffa0
    ctx->pc = 0x2cfba8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cfbac: 0xffbf0050
    ctx->pc = 0x2cfbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2cfbb0: 0xffb40040
    ctx->pc = 0x2cfbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2cfbb4: 0xffb30030
    ctx->pc = 0x2cfbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2cfbb8: 0xffb20020
    ctx->pc = 0x2cfbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cfbbc: 0xffb10010
    ctx->pc = 0x2cfbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cfbc0: 0x80882d
    ctx->pc = 0x2cfbc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfbc4: 0x12200020
    ctx->pc = 0x2CFBC4u;
    {
        const bool branch_taken_0x2cfbc4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFBC8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x2cfbc4) {
            ctx->pc = 0x2CFC48u;
            goto label_2cfc48;
        }
    }
    ctx->pc = 0x2CFBCCu;
    // 0x2cfbcc: 0x3c141000
    ctx->pc = 0x2cfbccu;
    SET_GPR_U32(ctx, 20, ((uint32_t)4096 << 16));
    // 0x2cfbd0: 0x2413000e
    ctx->pc = 0x2cfbd0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2cfbd4: 0x3c12003a
    ctx->pc = 0x2cfbd4u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2cfbd8: 0x8e240078
    ctx->pc = 0x2cfbd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2cfbdc: 0x0
    ctx->pc = 0x2cfbdcu;
    // NOP
label_2cfbe0:
    // 0x2cfbe0: 0x10800003
    ctx->pc = 0x2CFBE0u;
    {
        const bool branch_taken_0x2cfbe0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFBE4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cfbe0) {
            ctx->pc = 0x2CFBF0u;
            goto label_2cfbf0;
        }
    }
    ctx->pc = 0x2CFBE8u;
    // 0x2cfbe8: 0xc0b3eea
    ctx->pc = 0x2CFBE8u;
    SET_GPR_U32(ctx, 31, 0x2CFBF0u);
    ctx->pc = 0x2CFBA8u;
    goto label_2cfba8;
    ctx->pc = 0x2CFBF0u;
label_2cfbf0:
    // 0x2cfbf0: 0x8e020060
    ctx->pc = 0x2cfbf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2cfbf4: 0x541024
    ctx->pc = 0x2cfbf4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2cfbf8: 0x10400003
    ctx->pc = 0x2CFBF8u;
    {
        const bool branch_taken_0x2cfbf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFBFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cfbf8) {
            ctx->pc = 0x2CFC08u;
            goto label_2cfc08;
        }
    }
    ctx->pc = 0x2CFC00u;
    // 0x2cfc00: 0xc0b42a0
    ctx->pc = 0x2CFC00u;
    SET_GPR_U32(ctx, 31, 0x2CFC08u);
    ctx->pc = 0x2CFC04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearUVScaleAdd_0x2d0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC08u; }
    }
    if (ctx->pc != 0x2CFC08u) { return; }
    ctx->pc = 0x2CFC08u;
label_2cfc08:
    // 0x2cfc08: 0x82020052
    ctx->pc = 0x2cfc08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x2cfc0c: 0x1453000a
    ctx->pc = 0x2CFC0Cu;
    {
        const bool branch_taken_0x2cfc0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x2CFC10u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 124)));
        if (branch_taken_0x2cfc0c) {
            ctx->pc = 0x2CFC38u;
            goto label_2cfc38;
        }
    }
    ctx->pc = 0x2CFC14u;
    // 0x2cfc14: 0x8e020070
    ctx->pc = 0x2cfc14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2cfc18: 0x10400007
    ctx->pc = 0x2CFC18u;
    {
        const bool branch_taken_0x2cfc18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFC1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cfc18) {
            ctx->pc = 0x2CFC38u;
            goto label_2cfc38;
        }
    }
    ctx->pc = 0x2CFC20u;
    // 0x2cfc20: 0xc0b3f94
    ctx->pc = 0x2CFC20u;
    SET_GPR_U32(ctx, 31, 0x2CFC28u);
    ctx->pc = 0x2CFC24u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 5300)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC28u; }
    }
    if (ctx->pc != 0x2CFC28u) { return; }
    ctx->pc = 0x2CFC28u;
    // 0x2cfc28: 0xc0b245c
    ctx->pc = 0x2CFC28u;
    SET_GPR_U32(ctx, 31, 0x2CFC30u);
    ctx->pc = 0x2CFC2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C9170u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemovePsys_0x2c9170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC30u; }
    }
    if (ctx->pc != 0x2CFC30u) { return; }
    ctx->pc = 0x2CFC30u;
    // 0x2cfc30: 0x10000003
    ctx->pc = 0x2CFC30u;
    {
        const bool branch_taken_0x2cfc30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cfc30) {
            ctx->pc = 0x2CFC40u;
            goto label_2cfc40;
        }
    }
    ctx->pc = 0x2CFC38u;
label_2cfc38:
    // 0x2cfc38: 0xc0b3ee2
    ctx->pc = 0x2CFC38u;
    SET_GPR_U32(ctx, 31, 0x2CFC40u);
    ctx->pc = 0x2CFC3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetEmpty_0x2cfb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC40u; }
    }
    if (ctx->pc != 0x2CFC40u) { return; }
    ctx->pc = 0x2CFC40u;
label_2cfc40:
    // 0x2cfc40: 0x5620ffe7
    ctx->pc = 0x2CFC40u;
    {
        const bool branch_taken_0x2cfc40 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cfc40) {
            ctx->pc = 0x2CFC44u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 120)));
            ctx->pc = 0x2CFBE0u;
            goto label_2cfbe0;
        }
    }
    ctx->pc = 0x2CFC48u;
label_2cfc48:
    // 0x2cfc48: 0xdfbf0050
    ctx->pc = 0x2cfc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cfc4c: 0xdfb40040
    ctx->pc = 0x2cfc4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cfc50: 0xdfb30030
    ctx->pc = 0x2cfc50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cfc54: 0xdfb20020
    ctx->pc = 0x2cfc54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfc58: 0xdfb10010
    ctx->pc = 0x2cfc58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfc5c: 0xdfb00000
    ctx->pc = 0x2cfc5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfc60: 0x3e00008
    ctx->pc = 0x2CFC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFC64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CFBA8u: goto label_2cfba8;
            case 0x2CFBE0u: goto label_2cfbe0;
            case 0x2CFBF0u: goto label_2cfbf0;
            case 0x2CFC08u: goto label_2cfc08;
            case 0x2CFC38u: goto label_2cfc38;
            case 0x2CFC40u: goto label_2cfc40;
            case 0x2CFC48u: goto label_2cfc48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CFC68u;
}
