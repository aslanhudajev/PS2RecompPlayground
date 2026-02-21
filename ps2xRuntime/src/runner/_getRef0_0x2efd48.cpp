#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _getRef0
// Address: 0x2efd48 - 0x2f0168
void _getRef0_0x2efd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2efd48u;

    // 0x2efd48: 0x27bdff50
    ctx->pc = 0x2efd48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2efd4c: 0x3c0c003a
    ctx->pc = 0x2efd4cu;
    SET_GPR_U32(ctx, 12, ((uint32_t)58 << 16));
    // 0x2efd50: 0xffb60080
    ctx->pc = 0x2efd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2efd54: 0x25833638
    ctx->pc = 0x2efd54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 12), 13880));
    // 0x2efd58: 0xffb50070
    ctx->pc = 0x2efd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2efd5c: 0x24020140
    ctx->pc = 0x2efd5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2efd60: 0xffb40060
    ctx->pc = 0x2efd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2efd64: 0x246e0048
    ctx->pc = 0x2efd64u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 3), 72));
    // 0x2efd68: 0xffb30050
    ctx->pc = 0x2efd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2efd6c: 0x240c001c
    ctx->pc = 0x2efd6cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2efd70: 0xffb20040
    ctx->pc = 0x2efd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2efd74: 0x80b02d
    ctx->pc = 0x2efd74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd78: 0xffb10030
    ctx->pc = 0x2efd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2efd7c: 0xa0a02d
    ctx->pc = 0x2efd7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd80: 0xffb00020
    ctx->pc = 0x2efd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2efd84: 0x160882d
    ctx->pc = 0x2efd84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd88: 0xffbe00a0
    ctx->pc = 0x2efd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2efd8c: 0x246b00b8
    ctx->pc = 0x2efd8cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 3), 184));
    // 0x2efd90: 0xffb70090
    ctx->pc = 0x2efd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2efd94: 0xe0902d
    ctx->pc = 0x2efd94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd98: 0x8faf00b8
    ctx->pc = 0x2efd98u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2efd9c: 0x100c02d
    ctx->pc = 0x2efd9cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efda0: 0x8c6d0280
    ctx->pc = 0x2efda0u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x2efda4: 0x140982d
    ctx->pc = 0x2efda4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efda8: 0xafa90004
    ctx->pc = 0x2efda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x2efdac: 0x1a26818
    ctx->pc = 0x2efdacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2efdb0: 0xafa60000
    ctx->pc = 0x2efdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2efdb4: 0x3c02003a
    ctx->pc = 0x2efdb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2efdb8: 0x114843
    ctx->pc = 0x2efdb8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 17), 1));
    // 0x2efdbc: 0x8c423020
    ctx->pc = 0x2efdbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12320)));
    // 0x2efdc0: 0x8fb500b0
    ctx->pc = 0x2efdc0u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2efdc4: 0xafa20008
    ctx->pc = 0x2efdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2efdc8: 0x6d1821
    ctx->pc = 0x2efdc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x2efdcc: 0x8fa20004
    ctx->pc = 0x2efdccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2efdd0: 0x8c77012c
    ctx->pc = 0x2efdd0u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x2efdd4: 0x122c821
    ctx->pc = 0x2efdd4u;
    SET_GPR_U32(ctx, 25, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2efdd8: 0x2ec6018
    ctx->pc = 0x2efdd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2efddc: 0x18b5821
    ctx->pc = 0x2efddcu;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x2efde0: 0x18e6021
    ctx->pc = 0x2efde0u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x2efde4: 0x1ab8021
    ctx->pc = 0x2efde4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x2efde8: 0x11e00005
    ctx->pc = 0x2EFDE8u;
    {
        const bool branch_taken_0x2efde8 = (GPR_U32(ctx, 15) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFDECu;
        SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
        if (branch_taken_0x2efde8) {
            ctx->pc = 0x2EFE00u;
            goto label_2efe00;
        }
    }
    ctx->pc = 0x2EFDF0u;
    // 0x2efdf0: 0x151043
    ctx->pc = 0x2efdf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x2efdf4: 0x2541821
    ctx->pc = 0x2efdf4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x2efdf8: 0x10000003
    ctx->pc = 0x2EFDF8u;
    {
        const bool branch_taken_0x2efdf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFDFCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x2efdf8) {
            ctx->pc = 0x2EFE08u;
            goto label_2efe08;
        }
    }
    ctx->pc = 0x2EFE00u;
label_2efe00:
    // 0x2efe00: 0x151043
    ctx->pc = 0x2efe00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x2efe04: 0x2541821
    ctx->pc = 0x2efe04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_2efe08:
    // 0x2efe08: 0x531021
    ctx->pc = 0x2efe08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2efe0c: 0x433021
    ctx->pc = 0x2efe0cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2efe10: 0x8ec50010
    ctx->pc = 0x2efe10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2efe14: 0x195903
    ctx->pc = 0x2efe14u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 25), 4));
    // 0x2efe18: 0x8fa30000
    ctx->pc = 0x2efe18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efe1c: 0x67103
    ctx->pc = 0x2efe1cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 6), 4));
    // 0x2efe20: 0x1652818
    ctx->pc = 0x2efe20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2efe24: 0x8fac0008
    ctx->pc = 0x2efe24u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2efe28: 0x722021
    ctx->pc = 0x2efe28u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2efe2c: 0xe1100
    ctx->pc = 0x2efe2cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 14), 4));
    // 0x2efe30: 0xb1900
    ctx->pc = 0x2efe30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 11), 4));
    // 0x2efe34: 0x42140
    ctx->pc = 0x2efe34u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x2efe38: 0x3231823
    ctx->pc = 0x2efe38u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x2efe3c: 0x1842021
    ctx->pc = 0x2efe3cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x2efe40: 0xada30004
    ctx->pc = 0x2efe40u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x2efe44: 0xae2821
    ctx->pc = 0x2efe44u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x2efe48: 0xafa50010
    ctx->pc = 0x2efe48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2efe4c: 0xc23023
    ctx->pc = 0x2efe4cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2efe50: 0xada40000
    ctx->pc = 0x2efe50u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x2efe54: 0x32b90001
    ctx->pc = 0x2efe54u;
    SET_GPR_U32(ctx, 25, AND32(GPR_U32(ctx, 21), 1));
    // 0x2efe58: 0x1320000f
    ctx->pc = 0x2EFE58u;
    {
        const bool branch_taken_0x2efe58 = (GPR_U32(ctx, 25) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFE5Cu;
        SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2efe58) {
            ctx->pc = 0x2EFE98u;
            goto label_2efe98;
        }
    }
    ctx->pc = 0x2EFE60u;
    // 0x2efe60: 0x1f81004
    ctx->pc = 0x2efe60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x2efe64: 0xc21021
    ctx->pc = 0x2efe64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2efe68: 0x28420010
    ctx->pc = 0x2efe68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 16));
    // 0x2efe6c: 0x54400017
    ctx->pc = 0x2EFE6Cu;
    {
        const bool branch_taken_0x2efe6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2efe6c) {
            ctx->pc = 0x2EFE70u;
            WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 24));
            ctx->pc = 0x2EFECCu;
            goto label_2efecc;
        }
    }
    ctx->pc = 0x2EFE74u;
    // 0x2efe74: 0x24020010
    ctx->pc = 0x2efe74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2efe78: 0x1e61807
    ctx->pc = 0x2efe78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x2efe7c: 0x1e21007
    ctx->pc = 0x2efe7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x2efe80: 0x431023
    ctx->pc = 0x2efe80u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2efe84: 0x2442ffff
    ctx->pc = 0x2efe84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2efe88: 0x3021823
    ctx->pc = 0x2efe88u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x2efe8c: 0xada20008
    ctx->pc = 0x2efe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x2efe90: 0x1000000f
    ctx->pc = 0x2EFE90u;
    {
        const bool branch_taken_0x2efe90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFE94u;
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x2efe90) {
            ctx->pc = 0x2EFED0u;
            goto label_2efed0;
        }
    }
    ctx->pc = 0x2EFE98u;
label_2efe98:
    // 0x2efe98: 0x1f81004
    ctx->pc = 0x2efe98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x2efe9c: 0xc21021
    ctx->pc = 0x2efe9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2efea0: 0x28420011
    ctx->pc = 0x2efea0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 17));
    // 0x2efea4: 0x54400009
    ctx->pc = 0x2EFEA4u;
    {
        const bool branch_taken_0x2efea4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2efea4) {
            ctx->pc = 0x2EFEA8u;
            WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 24));
            ctx->pc = 0x2EFECCu;
            goto label_2efecc;
        }
    }
    ctx->pc = 0x2EFEACu;
    // 0x2efeac: 0x24020010
    ctx->pc = 0x2efeacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2efeb0: 0x1e61807
    ctx->pc = 0x2efeb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x2efeb4: 0x1e21007
    ctx->pc = 0x2efeb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x2efeb8: 0x431023
    ctx->pc = 0x2efeb8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2efebc: 0x3022023
    ctx->pc = 0x2efebcu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x2efec0: 0xada20008
    ctx->pc = 0x2efec0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x2efec4: 0x10000002
    ctx->pc = 0x2EFEC4u;
    {
        const bool branch_taken_0x2efec4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFEC8u;
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 4));
        if (branch_taken_0x2efec4) {
            ctx->pc = 0x2EFED0u;
            goto label_2efed0;
        }
    }
    ctx->pc = 0x2EFECCu;
label_2efecc:
    // 0x2efecc: 0xada0000c
    ctx->pc = 0x2efeccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
label_2efed0:
    // 0x2efed0: 0x3c03003a
    ctx->pc = 0x2efed0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2efed4: 0x24070600
    ctx->pc = 0x2efed4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1536));
    // 0x2efed8: 0x24623638
    ctx->pc = 0x2efed8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 13880));
    // 0x2efedc: 0x2e73818
    ctx->pc = 0x2efedcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2efee0: 0x8c450280
    ctx->pc = 0x2efee0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x2efee4: 0x24030140
    ctx->pc = 0x2efee4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2efee8: 0x64900
    ctx->pc = 0x2efee8u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 6), 4));
    // 0x2efeec: 0xa32018
    ctx->pc = 0x2efeecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2efef0: 0x252a0300
    ctx->pc = 0x2efef0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 9), 768));
    // 0x2efef4: 0xc1840
    ctx->pc = 0x2efef4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 12), 1));
    // 0x2efef8: 0x24060010
    ctx->pc = 0x2efef8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2efefc: 0x1e63004
    ctx->pc = 0x2efefcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x2eff00: 0x822821
    ctx->pc = 0x2eff00u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eff04: 0x8fa200c0
    ctx->pc = 0x2eff04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2eff08: 0x1127c2
    ctx->pc = 0x2eff08u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 17), 31));
    // 0x2eff0c: 0x8ca80000
    ctx->pc = 0x2eff0cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eff10: 0x2242021
    ctx->pc = 0x2eff10u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2eff14: 0x2f080
    ctx->pc = 0x2eff14u;
    SET_GPR_U32(ctx, 30, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eff18: 0x48843
    ctx->pc = 0x2eff18u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2eff1c: 0x3c31825
    ctx->pc = 0x2eff1cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2eff20: 0x1517c2
    ctx->pc = 0x2eff20u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 21), 31));
    // 0x2eff24: 0x791825
    ctx->pc = 0x2eff24u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x2eff28: 0x1072821
    ctx->pc = 0x2eff28u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2eff2c: 0xafa3000c
    ctx->pc = 0x2eff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x2eff30: 0x2a26021
    ctx->pc = 0x2eff30u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2eff34: 0x8fa30004
    ctx->pc = 0x2eff34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2eff38: 0xaa5021
    ctx->pc = 0x2eff38u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2eff3c: 0x42083
    ctx->pc = 0x2eff3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2eff40: 0xa94821
    ctx->pc = 0x2eff40u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2eff44: 0x31043
    ctx->pc = 0x2eff44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2eff48: 0xca843
    ctx->pc = 0x2eff48u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 12), 1));
    // 0x2eff4c: 0xada60010
    ctx->pc = 0x2eff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 6));
    // 0x2eff50: 0x82c821
    ctx->pc = 0x2eff50u;
    SET_GPR_U32(ctx, 25, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eff54: 0xada90014
    ctx->pc = 0x2eff54u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 9));
    // 0x2eff58: 0x123843
    ctx->pc = 0x2eff58u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 18), 1));
    // 0x2eff5c: 0xadaa0018
    ctx->pc = 0x2eff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 10));
    // 0x2eff60: 0x11e00008
    ctx->pc = 0x2EFF60u;
    {
        const bool branch_taken_0x2eff60 = (GPR_U32(ctx, 15) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFF64u;
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 24), 1));
        if (branch_taken_0x2eff60) {
            ctx->pc = 0x2EFF84u;
            goto label_2eff84;
        }
    }
    ctx->pc = 0x2EFF68u;
    // 0x2eff68: 0xc1083
    ctx->pc = 0x2eff68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 2));
    // 0x2eff6c: 0x132043
    ctx->pc = 0x2eff6cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 1));
    // 0x2eff70: 0x21040
    ctx->pc = 0x2eff70u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x2eff74: 0xf41821
    ctx->pc = 0x2eff74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x2eff78: 0x441021
    ctx->pc = 0x2eff78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2eff7c: 0x10000006
    ctx->pc = 0x2EFF7Cu;
    {
        const bool branch_taken_0x2eff7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFF80u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x2eff7c) {
            ctx->pc = 0x2EFF98u;
            goto label_2eff98;
        }
    }
    ctx->pc = 0x2EFF84u;
label_2eff84:
    // 0x2eff84: 0xc1083
    ctx->pc = 0x2eff84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 2));
    // 0x2eff88: 0x131843
    ctx->pc = 0x2eff88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 1));
    // 0x2eff8c: 0x431021
    ctx->pc = 0x2eff8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eff90: 0xf42021
    ctx->pc = 0x2eff90u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x2eff94: 0x443021
    ctx->pc = 0x2eff94u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2eff98:
    // 0x2eff98: 0x8fa40000
    ctx->pc = 0x2eff98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eff9c: 0x1948c3
    ctx->pc = 0x2eff9cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 25), 3));
    // 0x2effa0: 0x8fac0008
    ctx->pc = 0x2effa0u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2effa4: 0x650c3
    ctx->pc = 0x2effa4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 3));
    // 0x2effa8: 0x871021
    ctx->pc = 0x2effa8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2effac: 0x918c0
    ctx->pc = 0x2effacu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 3));
    // 0x2effb0: 0x21100
    ctx->pc = 0x2effb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2effb4: 0x3231823
    ctx->pc = 0x2effb4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x2effb8: 0x24420200
    ctx->pc = 0x2effb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 512));
    // 0x2effbc: 0xa20c0
    ctx->pc = 0x2effbcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 10), 3));
    // 0x2effc0: 0x1821021
    ctx->pc = 0x2effc0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2effc4: 0xc43023
    ctx->pc = 0x2effc4u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2effc8: 0x322c0001
    ctx->pc = 0x2effc8u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 17), 1));
    // 0x2effcc: 0x32b90001
    ctx->pc = 0x2effccu;
    SET_GPR_U32(ctx, 25, AND32(GPR_U32(ctx, 21), 1));
    // 0x2effd0: 0xae030004
    ctx->pc = 0x2effd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2effd4: 0x1320000f
    ctx->pc = 0x2EFFD4u;
    {
        const bool branch_taken_0x2effd4 = (GPR_U32(ctx, 25) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFFD8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2effd4) {
            ctx->pc = 0x2F0014u;
            goto label_2f0014;
        }
    }
    ctx->pc = 0x2EFFDCu;
    // 0x2effdc: 0x1e81004
    ctx->pc = 0x2effdcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 15) & 0x1F));
    // 0x2effe0: 0xc21021
    ctx->pc = 0x2effe0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2effe4: 0x28420008
    ctx->pc = 0x2effe4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 8));
    // 0x2effe8: 0x54400017
    ctx->pc = 0x2EFFE8u;
    {
        const bool branch_taken_0x2effe8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2effe8) {
            ctx->pc = 0x2EFFECu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
            ctx->pc = 0x2F0048u;
            goto label_2f0048;
        }
    }
    ctx->pc = 0x2EFFF0u;
    // 0x2efff0: 0x24020008
    ctx->pc = 0x2efff0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2efff4: 0x1e61807
    ctx->pc = 0x2efff4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x2efff8: 0x1e21007
    ctx->pc = 0x2efff8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x2efffc: 0x431023
    ctx->pc = 0x2efffcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0000: 0x2442ffff
    ctx->pc = 0x2f0000u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f0004: 0x1021823
    ctx->pc = 0x2f0004u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2f0008: 0xae020008
    ctx->pc = 0x2f0008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2f000c: 0x1000000f
    ctx->pc = 0x2F000Cu;
    {
        const bool branch_taken_0x2f000c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F0010u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x2f000c) {
            ctx->pc = 0x2F004Cu;
            goto label_2f004c;
        }
    }
    ctx->pc = 0x2F0014u;
label_2f0014:
    // 0x2f0014: 0x1e81004
    ctx->pc = 0x2f0014u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 15) & 0x1F));
    // 0x2f0018: 0xc21021
    ctx->pc = 0x2f0018u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2f001c: 0x28420009
    ctx->pc = 0x2f001cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 9));
    // 0x2f0020: 0x54400009
    ctx->pc = 0x2F0020u;
    {
        const bool branch_taken_0x2f0020 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f0020) {
            ctx->pc = 0x2F0024u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
            ctx->pc = 0x2F0048u;
            goto label_2f0048;
        }
    }
    ctx->pc = 0x2F0028u;
    // 0x2f0028: 0x24020008
    ctx->pc = 0x2f0028u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f002c: 0x1e61807
    ctx->pc = 0x2f002cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x2f0030: 0x1e21007
    ctx->pc = 0x2f0030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x2f0034: 0x431023
    ctx->pc = 0x2f0034u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0038: 0x1022023
    ctx->pc = 0x2f0038u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2f003c: 0xae020008
    ctx->pc = 0x2f003cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2f0040: 0x10000002
    ctx->pc = 0x2F0040u;
    {
        const bool branch_taken_0x2f0040 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F0044u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
        if (branch_taken_0x2f0040) {
            ctx->pc = 0x2F004Cu;
            goto label_2f004c;
        }
    }
    ctx->pc = 0x2F0048u;
label_2f0048:
    // 0x2f0048: 0xae00000c
    ctx->pc = 0x2f0048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2f004c:
    // 0x2f004c: 0x24020008
    ctx->pc = 0x2f004cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f0050: 0x3c11003a
    ctx->pc = 0x2f0050u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f0054: 0x1e21004
    ctx->pc = 0x2f0054u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x2f0058: 0x26273638
    ctx->pc = 0x2f0058u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 13880));
    // 0x2f005c: 0xae020010
    ctx->pc = 0x2f005cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2f0060: 0x14e1823
    ctx->pc = 0x2f0060u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x2f0064: 0x12b2023
    ctx->pc = 0x2f0064u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x2f0068: 0x24020140
    ctx->pc = 0x2f0068u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2f006c: 0x8cea0280
    ctx->pc = 0x2f006cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 7), 640)));
    // 0x2f0070: 0x42040
    ctx->pc = 0x2f0070u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2f0074: 0x240b0180
    ctx->pc = 0x2f0074u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 384));
    // 0x2f0078: 0x832021
    ctx->pc = 0x2f0078u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f007c: 0x1425018
    ctx->pc = 0x2f007cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2f0080: 0x8fa30010
    ctx->pc = 0x2f0080u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0084: 0x8b1018
    ctx->pc = 0x2f0084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2f0088: 0x8ece0010
    ctx->pc = 0x2f0088u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2f008c: 0x6b7818
    ctx->pc = 0x2f008cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2f0090: 0x630c0
    ctx->pc = 0x2f0090u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 3));
    // 0x2f0094: 0x3c03003a
    ctx->pc = 0x2f0094u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f0098: 0x24c90400
    ctx->pc = 0x2f0098u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 6), 1024));
    // 0x2f009c: 0x24633908
    ctx->pc = 0x2f009cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 14600));
    // 0x2f00a0: 0x8ecd0000
    ctx->pc = 0x2f00a0u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f00a4: 0x452021
    ctx->pc = 0x2f00a4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f00a8: 0x24c60100
    ctx->pc = 0x2f00a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 256));
    // 0x2f00ac: 0x8fa50010
    ctx->pc = 0x2f00acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f00b0: 0xc1040
    ctx->pc = 0x2f00b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 12), 1));
    // 0x2f00b4: 0x8fac000c
    ctx->pc = 0x2f00b4u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2f00b8: 0x3c21025
    ctx->pc = 0x2f00b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2f00bc: 0xae7021
    ctx->pc = 0x2f00bcu;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x2f00c0: 0x591025
    ctx->pc = 0x2f00c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x2f00c4: 0x1cb8818
    ctx->pc = 0x2f00c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2f00c8: 0xc4080
    ctx->pc = 0x2f00c8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 12), 2));
    // 0x2f00cc: 0x1034021
    ctx->pc = 0x2f00ccu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2f00d0: 0x3c05003a
    ctx->pc = 0x2f00d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2f00d4: 0x894821
    ctx->pc = 0x2f00d4u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2f00d8: 0x24ec012c
    ctx->pc = 0x2f00d8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 7), 300));
    // 0x2f00dc: 0x171880
    ctx->pc = 0x2f00dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 23), 2));
    // 0x2f00e0: 0x24a53928
    ctx->pc = 0x2f00e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 14632));
    // 0x2f00e4: 0x21080
    ctx->pc = 0x2f00e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f00e8: 0x6a1821
    ctx->pc = 0x2f00e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2f00ec: 0x14c6021
    ctx->pc = 0x2f00ecu;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x2f00f0: 0x451021
    ctx->pc = 0x2f00f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f00f4: 0x862021
    ctx->pc = 0x2f00f4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2f00f8: 0x22d7021
    ctx->pc = 0x2f00f8u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x2f00fc: 0xe33021
    ctx->pc = 0x2f00fcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2f0100: 0xae040014
    ctx->pc = 0x2f0100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x2f0104: 0x8d0b0000
    ctx->pc = 0x2f0104u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2f0108: 0x1af6821
    ctx->pc = 0x2f0108u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x2f010c: 0x8d850000
    ctx->pc = 0x2f010cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2f0110: 0xc0402d
    ctx->pc = 0x2f0110u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0114: 0xae090018
    ctx->pc = 0x2f0114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 9));
    // 0x2f0118: 0xc0502d
    ctx->pc = 0x2f0118u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f011c: 0x8c440000
    ctx->pc = 0x2f011cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f0120: 0x24a50001
    ctx->pc = 0x2f0120u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f0124: 0xaccd0008
    ctx->pc = 0x2f0124u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 13));
    // 0x2f0128: 0xc0382d
    ctx->pc = 0x2f0128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f012c: 0xad0b0028
    ctx->pc = 0x2f012cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 11));
    // 0x2f0130: 0xdfbe00a0
    ctx->pc = 0x2f0130u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f0134: 0xdfb70090
    ctx->pc = 0x2f0134u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f0138: 0xdfb60080
    ctx->pc = 0x2f0138u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f013c: 0xdfb50070
    ctx->pc = 0x2f013cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f0140: 0xdfb40060
    ctx->pc = 0x2f0140u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f0144: 0xdfb30050
    ctx->pc = 0x2f0144u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f0148: 0xdfb20040
    ctx->pc = 0x2f0148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f014c: 0xdfb10030
    ctx->pc = 0x2f014cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f0150: 0xdfb00020
    ctx->pc = 0x2f0150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0154: 0xacee0018
    ctx->pc = 0x2f0154u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 14));
    // 0x2f0158: 0xad440038
    ctx->pc = 0x2f0158u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 56), GPR_U32(ctx, 4));
    // 0x2f015c: 0xad850000
    ctx->pc = 0x2f015cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x2f0160: 0x3e00008
    ctx->pc = 0x2F0160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0164u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EFE00u: goto label_2efe00;
            case 0x2EFE08u: goto label_2efe08;
            case 0x2EFE98u: goto label_2efe98;
            case 0x2EFECCu: goto label_2efecc;
            case 0x2EFED0u: goto label_2efed0;
            case 0x2EFF84u: goto label_2eff84;
            case 0x2EFF98u: goto label_2eff98;
            case 0x2F0014u: goto label_2f0014;
            case 0x2F0048u: goto label_2f0048;
            case 0x2F004Cu: goto label_2f004c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F0168u;
}
