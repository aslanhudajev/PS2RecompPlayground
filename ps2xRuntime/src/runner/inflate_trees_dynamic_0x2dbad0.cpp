#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflate_trees_dynamic
// Address: 0x2dbad0 - 0x2dbc44
void inflate_trees_dynamic_0x2dbad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dbad0u;

    // 0x2dbad0: 0x27bdff70
    ctx->pc = 0x2dbad0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2dbad4: 0xffbf0080
    ctx->pc = 0x2dbad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2dbad8: 0xffb70070
    ctx->pc = 0x2dbad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2dbadc: 0xffb60060
    ctx->pc = 0x2dbadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2dbae0: 0xffb50050
    ctx->pc = 0x2dbae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2dbae4: 0xffb40040
    ctx->pc = 0x2dbae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2dbae8: 0xffb30030
    ctx->pc = 0x2dbae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2dbaec: 0xffb20020
    ctx->pc = 0x2dbaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2dbaf0: 0xffb10010
    ctx->pc = 0x2dbaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2dbaf4: 0xffb00000
    ctx->pc = 0x2dbaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dbaf8: 0x80a02d
    ctx->pc = 0x2dbaf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbafc: 0xa0b02d
    ctx->pc = 0x2dbafcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb00: 0xc0982d
    ctx->pc = 0x2dbb00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb04: 0xe0102d
    ctx->pc = 0x2dbb04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb08: 0x100b82d
    ctx->pc = 0x2dbb08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb0c: 0x120902d
    ctx->pc = 0x2dbb0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb10: 0x140a82d
    ctx->pc = 0x2dbb10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb14: 0x160882d
    ctx->pc = 0x2dbb14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb18: 0x260202d
    ctx->pc = 0x2dbb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb1c: 0x280282d
    ctx->pc = 0x2dbb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb20: 0x24060101
    ctx->pc = 0x2dbb20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 257));
    // 0x2dbb24: 0x3c07003a
    ctx->pc = 0x2dbb24u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2dbb28: 0x24e72798
    ctx->pc = 0x2dbb28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 10136));
    // 0x2dbb2c: 0x3c08003a
    ctx->pc = 0x2dbb2cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x2dbb30: 0x25082818
    ctx->pc = 0x2dbb30u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 10264));
    // 0x2dbb34: 0xc0b6d0c
    ctx->pc = 0x2DBB34u;
    SET_GPR_U32(ctx, 31, 0x2DBB3Cu);
    ctx->pc = 0x2DBB38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DB430u;
    {
        const uint32_t __entryPc = ctx->pc;
        huft_build_0x2db430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB3Cu; }
    }
    if (ctx->pc != 0x2DBB3Cu) { return; }
    ctx->pc = 0x2DBB3Cu;
    // 0x2dbb3c: 0x40802d
    ctx->pc = 0x2dbb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb40: 0x12000011
    ctx->pc = 0x2DBB40u;
    {
        const bool branch_taken_0x2dbb40 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DBB44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2dbb40) {
            ctx->pc = 0x2DBB88u;
            goto label_2dbb88;
        }
    }
    ctx->pc = 0x2DBB48u;
    // 0x2dbb48: 0x16020005
    ctx->pc = 0x2DBB48u;
    {
        const bool branch_taken_0x2dbb48 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x2DBB4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        if (branch_taken_0x2dbb48) {
            ctx->pc = 0x2DBB60u;
            goto label_2dbb60;
        }
    }
    ctx->pc = 0x2DBB50u;
    // 0x2dbb50: 0x3c02003c
    ctx->pc = 0x2dbb50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2dbb54: 0x244282c0
    ctx->pc = 0x2dbb54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935232));
    // 0x2dbb58: 0x1000002c
    ctx->pc = 0x2DBB58u;
    {
        const bool branch_taken_0x2dbb58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DBB5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x2dbb58) {
            ctx->pc = 0x2DBC0Cu;
            goto label_2dbc0c;
        }
    }
    ctx->pc = 0x2DBB60u;
label_2dbb60:
    // 0x2dbb60: 0x1602002d
    ctx->pc = 0x2DBB60u;
    {
        const bool branch_taken_0x2dbb60 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x2DBB64u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dbb60) {
            ctx->pc = 0x2DBC18u;
            goto label_2dbc18;
        }
    }
    ctx->pc = 0x2DBB68u;
    // 0x2dbb68: 0x8e440000
    ctx->pc = 0x2dbb68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2dbb6c: 0xc0b6f98
    ctx->pc = 0x2DBB6Cu;
    SET_GPR_U32(ctx, 31, 0x2DBB74u);
    ctx->pc = 0x2DBB70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DBE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_free_0x2dbe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB74u; }
    }
    if (ctx->pc != 0x2DBB74u) { return; }
    ctx->pc = 0x2DBB74u;
    // 0x2dbb74: 0x3c02003c
    ctx->pc = 0x2dbb74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2dbb78: 0x244282e8
    ctx->pc = 0x2dbb78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935272));
    // 0x2dbb7c: 0xae220018
    ctx->pc = 0x2dbb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x2dbb80: 0x10000022
    ctx->pc = 0x2DBB80u;
    {
        const bool branch_taken_0x2dbb80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DBB84u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2dbb80) {
            ctx->pc = 0x2DBC0Cu;
            goto label_2dbc0c;
        }
    }
    ctx->pc = 0x2DBB88u;
label_2dbb88:
    // 0x2dbb88: 0x142080
    ctx->pc = 0x2dbb88u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 20), 2));
    // 0x2dbb8c: 0x2642021
    ctx->pc = 0x2dbb8cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2dbb90: 0x2c0282d
    ctx->pc = 0x2dbb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb94: 0x302d
    ctx->pc = 0x2dbb94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb98: 0x3c07003a
    ctx->pc = 0x2dbb98u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2dbb9c: 0x24e72898
    ctx->pc = 0x2dbb9cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 10392));
    // 0x2dbba0: 0x3c08003a
    ctx->pc = 0x2dbba0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x2dbba4: 0x25082910
    ctx->pc = 0x2dbba4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 10512));
    // 0x2dbba8: 0x2a0482d
    ctx->pc = 0x2dbba8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbbac: 0x2e0502d
    ctx->pc = 0x2dbbacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbbb0: 0xc0b6d0c
    ctx->pc = 0x2DBBB0u;
    SET_GPR_U32(ctx, 31, 0x2DBBB8u);
    ctx->pc = 0x2DBBB4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DB430u;
    {
        const uint32_t __entryPc = ctx->pc;
        huft_build_0x2db430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBB8u; }
    }
    if (ctx->pc != 0x2DBBB8u) { return; }
    ctx->pc = 0x2DBBB8u;
    // 0x2dbbb8: 0x40802d
    ctx->pc = 0x2dbbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbbbc: 0x12000015
    ctx->pc = 0x2DBBBCu;
    {
        const bool branch_taken_0x2dbbbc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DBBC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2dbbbc) {
            ctx->pc = 0x2DBC14u;
            goto label_2dbc14;
        }
    }
    ctx->pc = 0x2DBBC4u;
    // 0x2dbbc4: 0x16020005
    ctx->pc = 0x2DBBC4u;
    {
        const bool branch_taken_0x2dbbc4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x2DBBC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        if (branch_taken_0x2dbbc4) {
            ctx->pc = 0x2DBBDCu;
            goto label_2dbbdc;
        }
    }
    ctx->pc = 0x2DBBCCu;
    // 0x2dbbcc: 0x3c02003c
    ctx->pc = 0x2dbbccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2dbbd0: 0x244282c0
    ctx->pc = 0x2dbbd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935232));
    // 0x2dbbd4: 0x1000000a
    ctx->pc = 0x2DBBD4u;
    {
        const bool branch_taken_0x2dbbd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DBBD8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x2dbbd4) {
            ctx->pc = 0x2DBC00u;
            goto label_2dbc00;
        }
    }
    ctx->pc = 0x2DBBDCu;
label_2dbbdc:
    // 0x2dbbdc: 0x56020009
    ctx->pc = 0x2DBBDCu;
    {
        const bool branch_taken_0x2dbbdc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x2dbbdc) {
            ctx->pc = 0x2DBBE0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x2DBC04u;
            goto label_2dbc04;
        }
    }
    ctx->pc = 0x2DBBE4u;
    // 0x2dbbe4: 0x8ea40000
    ctx->pc = 0x2dbbe4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2dbbe8: 0xc0b6f98
    ctx->pc = 0x2DBBE8u;
    SET_GPR_U32(ctx, 31, 0x2DBBF0u);
    ctx->pc = 0x2DBBECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DBE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_free_0x2dbe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBF0u; }
    }
    if (ctx->pc != 0x2DBBF0u) { return; }
    ctx->pc = 0x2DBBF0u;
    // 0x2dbbf0: 0x3c02003c
    ctx->pc = 0x2dbbf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2dbbf4: 0x244282e8
    ctx->pc = 0x2dbbf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935272));
    // 0x2dbbf8: 0xae220018
    ctx->pc = 0x2dbbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x2dbbfc: 0x2410fffd
    ctx->pc = 0x2dbbfcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967293));
label_2dbc00:
    // 0x2dbc00: 0x8e440000
    ctx->pc = 0x2dbc00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dbc04:
    // 0x2dbc04: 0xc0b6f98
    ctx->pc = 0x2DBC04u;
    SET_GPR_U32(ctx, 31, 0x2DBC0Cu);
    ctx->pc = 0x2DBC08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DBE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_free_0x2dbe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC0Cu; }
    }
    if (ctx->pc != 0x2DBC0Cu) { return; }
    ctx->pc = 0x2DBC0Cu;
label_2dbc0c:
    // 0x2dbc0c: 0x10000002
    ctx->pc = 0x2DBC0Cu;
    {
        const bool branch_taken_0x2dbc0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DBC10u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dbc0c) {
            ctx->pc = 0x2DBC18u;
            goto label_2dbc18;
        }
    }
    ctx->pc = 0x2DBC14u;
label_2dbc14:
    // 0x2dbc14: 0x102d
    ctx->pc = 0x2dbc14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dbc18:
    // 0x2dbc18: 0xdfbf0080
    ctx->pc = 0x2dbc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dbc1c: 0xdfb70070
    ctx->pc = 0x2dbc1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dbc20: 0xdfb60060
    ctx->pc = 0x2dbc20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dbc24: 0xdfb50050
    ctx->pc = 0x2dbc24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dbc28: 0xdfb40040
    ctx->pc = 0x2dbc28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dbc2c: 0xdfb30030
    ctx->pc = 0x2dbc2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dbc30: 0xdfb20020
    ctx->pc = 0x2dbc30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dbc34: 0xdfb10010
    ctx->pc = 0x2dbc34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbc38: 0xdfb00000
    ctx->pc = 0x2dbc38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbc3c: 0x3e00008
    ctx->pc = 0x2DBC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBC40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DBB60u: goto label_2dbb60;
            case 0x2DBB88u: goto label_2dbb88;
            case 0x2DBBDCu: goto label_2dbbdc;
            case 0x2DBC00u: goto label_2dbc00;
            case 0x2DBC04u: goto label_2dbc04;
            case 0x2DBC0Cu: goto label_2dbc0c;
            case 0x2DBC14u: goto label_2dbc14;
            case 0x2DBC18u: goto label_2dbc18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DBC44u;
}
