#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScreenSaverStart
// Address: 0x22ac48 - 0x22ad50
void ScreenSaverStart_0x22ac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22ac48u;

    // 0x22ac48: 0x27bdffa0
    ctx->pc = 0x22ac48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22ac4c: 0xffbf0050
    ctx->pc = 0x22ac4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22ac50: 0xffb30040
    ctx->pc = 0x22ac50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22ac54: 0xffb20030
    ctx->pc = 0x22ac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22ac58: 0xffb10020
    ctx->pc = 0x22ac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22ac5c: 0xc09710c
    ctx->pc = 0x22AC5Cu;
    SET_GPR_U32(ctx, 31, 0x22AC64u);
    ctx->pc = 0x22AC60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x25C430u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStopAll_0x25c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AC64u; }
    }
    if (ctx->pc != 0x22AC64u) { return; }
    ctx->pc = 0x22AC64u;
    // 0x22ac64: 0xc08839e
    ctx->pc = 0x22AC64u;
    SET_GPR_U32(ctx, 31, 0x22AC6Cu);
    ctx->pc = 0x220E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStreamStop_0x220e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AC6Cu; }
    }
    if (ctx->pc != 0x22AC6Cu) { return; }
    ctx->pc = 0x22AC6Cu;
    // 0x22ac6c: 0x3c020031
    ctx->pc = 0x22ac6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22ac70: 0x8c42f184
    ctx->pc = 0x22ac70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x22ac74: 0x10400004
    ctx->pc = 0x22AC74u;
    {
        const bool branch_taken_0x22ac74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22AC78u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x22ac74) {
            ctx->pc = 0x22AC88u;
            goto label_22ac88;
        }
    }
    ctx->pc = 0x22AC7Cu;
    // 0x22ac7c: 0xc08026e
    ctx->pc = 0x22AC7Cu;
    SET_GPR_U32(ctx, 31, 0x22AC84u);
    ctx->pc = 0x2009B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DemoEnd_0x2009b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AC84u; }
    }
    if (ctx->pc != 0x22AC84u) { return; }
    ctx->pc = 0x22AC84u;
    // 0x22ac84: 0x3c040032
    ctx->pc = 0x22ac84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_22ac88:
    // 0x22ac88: 0x3c030032
    ctx->pc = 0x22ac88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22ac8c: 0x8c62d358
    ctx->pc = 0x22ac8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294955864)));
    // 0x22ac90: 0xac82131c
    ctx->pc = 0x22ac90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4892), GPR_U32(ctx, 2));
    // 0x22ac94: 0x24020064
    ctx->pc = 0x22ac94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
    // 0x22ac98: 0xac62d358
    ctx->pc = 0x22ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955864), GPR_U32(ctx, 2));
    // 0x22ac9c: 0x3c02003a
    ctx->pc = 0x22ac9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x22aca0: 0x8c500c94
    ctx->pc = 0x22aca0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 3220)));
    // 0x22aca4: 0x12000013
    ctx->pc = 0x22ACA4u;
    {
        const bool branch_taken_0x22aca4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x22ACA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22aca4) {
            ctx->pc = 0x22ACF4u;
            goto label_22acf4;
        }
    }
    ctx->pc = 0x22ACACu;
    // 0x22acac: 0x24130007
    ctx->pc = 0x22acacu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 7));
    // 0x22acb0: 0x24120009
    ctx->pc = 0x22acb0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 9));
    // 0x22acb4: 0x3c11003a
    ctx->pc = 0x22acb4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x22acb8: 0x82020052
    ctx->pc = 0x22acb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x22acbc: 0x0
    ctx->pc = 0x22acbcu;
    // NOP
label_22acc0:
    // 0x22acc0: 0x50530009
    ctx->pc = 0x22ACC0u;
    {
        const bool branch_taken_0x22acc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        if (branch_taken_0x22acc0) {
            ctx->pc = 0x22ACC4u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 124)));
            ctx->pc = 0x22ACE8u;
            goto label_22ace8;
        }
    }
    ctx->pc = 0x22ACC8u;
    // 0x22acc8: 0x10520006
    ctx->pc = 0x22ACC8u;
    {
        const bool branch_taken_0x22acc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        ctx->pc = 0x22ACCCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 5300)));
        if (branch_taken_0x22acc8) {
            ctx->pc = 0x22ACE4u;
            goto label_22ace4;
        }
    }
    ctx->pc = 0x22ACD0u;
    // 0x22acd0: 0x12020004
    ctx->pc = 0x22ACD0u;
    {
        const bool branch_taken_0x22acd0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x22ACD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22acd0) {
            ctx->pc = 0x22ACE4u;
            goto label_22ace4;
        }
    }
    ctx->pc = 0x22ACD8u;
    // 0x22acd8: 0x24050002
    ctx->pc = 0x22acd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x22acdc: 0xc0b41b8
    ctx->pc = 0x22ACDCu;
    SET_GPR_U32(ctx, 31, 0x22ACE4u);
    ctx->pc = 0x22ACE0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ACE4u; }
    }
    if (ctx->pc != 0x22ACE4u) { return; }
    ctx->pc = 0x22ACE4u;
label_22ace4:
    // 0x22ace4: 0x8e10007c
    ctx->pc = 0x22ace4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_22ace8:
    // 0x22ace8: 0x5600fff5
    ctx->pc = 0x22ACE8u;
    {
        const bool branch_taken_0x22ace8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x22ace8) {
            ctx->pc = 0x22ACECu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 82)));
            ctx->pc = 0x22ACC0u;
            goto label_22acc0;
        }
    }
    ctx->pc = 0x22ACF0u;
    // 0x22acf0: 0x202d
    ctx->pc = 0x22acf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22acf4:
    // 0x22acf4: 0x282d
    ctx->pc = 0x22acf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22acf8: 0xc0b3ec0
    ctx->pc = 0x22ACF8u;
    SET_GPR_U32(ctx, 31, 0x22AD00u);
    ctx->pc = 0x22ACFCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AD00u; }
    }
    if (ctx->pc != 0x22AD00u) { return; }
    ctx->pc = 0x22AD00u;
    // 0x22ad00: 0x3c030032
    ctx->pc = 0x22ad00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22ad04: 0xac621318
    ctx->pc = 0x22ad04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4888), GPR_U32(ctx, 2));
    // 0x22ad08: 0x3c03003a
    ctx->pc = 0x22ad08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x22ad0c: 0x8c640c94
    ctx->pc = 0x22ad0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 3220)));
    // 0x22ad10: 0xc0b400a
    ctx->pc = 0x22AD10u;
    SET_GPR_U32(ctx, 31, 0x22AD18u);
    ctx->pc = 0x22AD14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0028u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeOrder_0x2d0028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AD18u; }
    }
    if (ctx->pc != 0x22AD18u) { return; }
    ctx->pc = 0x22AD18u;
    // 0x22ad18: 0x802d
    ctx->pc = 0x22ad18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ad1c: 0x0
    ctx->pc = 0x22ad1cu;
    // NOP
label_22ad20:
    // 0x22ad20: 0xc08a8f8
    ctx->pc = 0x22AD20u;
    SET_GPR_U32(ctx, 31, 0x22AD28u);
    ctx->pc = 0x22AD24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22A3E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScreenSaverInitWeap_0x22a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AD28u; }
    }
    if (ctx->pc != 0x22AD28u) { return; }
    ctx->pc = 0x22AD28u;
    // 0x22ad28: 0x26100001
    ctx->pc = 0x22ad28u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x22ad2c: 0x2a020004
    ctx->pc = 0x22ad2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x22ad30: 0x1440fffb
    ctx->pc = 0x22AD30u;
    {
        const bool branch_taken_0x22ad30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22AD34u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x22ad30) {
            ctx->pc = 0x22AD20u;
            goto label_22ad20;
        }
    }
    ctx->pc = 0x22AD38u;
    // 0x22ad38: 0xdfb30040
    ctx->pc = 0x22ad38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ad3c: 0xdfb20030
    ctx->pc = 0x22ad3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ad40: 0xdfb10020
    ctx->pc = 0x22ad40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ad44: 0xdfb00010
    ctx->pc = 0x22ad44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ad48: 0x3e00008
    ctx->pc = 0x22AD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AD4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22AC88u: goto label_22ac88;
            case 0x22ACC0u: goto label_22acc0;
            case 0x22ACE4u: goto label_22ace4;
            case 0x22ACE8u: goto label_22ace8;
            case 0x22ACF4u: goto label_22acf4;
            case 0x22AD20u: goto label_22ad20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22AD50u;
}
