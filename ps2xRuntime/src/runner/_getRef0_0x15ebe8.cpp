#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _getRef0
// Address: 0x15ebe8 - 0x15f008
void _getRef0_0x15ebe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_getRef0");


    ctx->pc = 0x15ebe8u;

    // 0x15ebe8: 0x27bdff50
    ctx->pc = 0x15ebe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x15ebec: 0x3c0c0023
    ctx->pc = 0x15ebecu;
    SET_GPR_U32(ctx, 12, ((uint32_t)35 << 16));
    // 0x15ebf0: 0xffb60080
    ctx->pc = 0x15ebf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x15ebf4: 0x2583a838
    ctx->pc = 0x15ebf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 12), 4294944824));
    // 0x15ebf8: 0xffb50070
    ctx->pc = 0x15ebf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x15ebfc: 0x24020140
    ctx->pc = 0x15ebfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
    // 0x15ec00: 0xffb40060
    ctx->pc = 0x15ec00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x15ec04: 0x246e0048
    ctx->pc = 0x15ec04u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 3), 72));
    // 0x15ec08: 0xffb30050
    ctx->pc = 0x15ec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x15ec0c: 0x240c001c
    ctx->pc = 0x15ec0cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 28));
    // 0x15ec10: 0xffb20040
    ctx->pc = 0x15ec10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x15ec14: 0x80b02d
    ctx->pc = 0x15ec14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec18: 0xffb10030
    ctx->pc = 0x15ec18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x15ec1c: 0xa0a02d
    ctx->pc = 0x15ec1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec20: 0xffb00020
    ctx->pc = 0x15ec20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x15ec24: 0x160882d
    ctx->pc = 0x15ec24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec28: 0xffbe00a0
    ctx->pc = 0x15ec28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x15ec2c: 0x246b00b8
    ctx->pc = 0x15ec2cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 3), 184));
    // 0x15ec30: 0xffb70090
    ctx->pc = 0x15ec30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x15ec34: 0xe0902d
    ctx->pc = 0x15ec34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec38: 0x8faf00b8
    ctx->pc = 0x15ec38u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15ec3c: 0x100c02d
    ctx->pc = 0x15ec3cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec40: 0x8c6d0280
    ctx->pc = 0x15ec40u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x15ec44: 0x140982d
    ctx->pc = 0x15ec44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec48: 0xafa90004
    ctx->pc = 0x15ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x15ec4c: 0x1a26818
    ctx->pc = 0x15ec4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)(uint32_t)result); }
    // 0x15ec50: 0xafa60000
    ctx->pc = 0x15ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x15ec54: 0x3c020023
    ctx->pc = 0x15ec54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15ec58: 0x114843
    ctx->pc = 0x15ec58u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 17), 1));
    // 0x15ec5c: 0x8c42a218
    ctx->pc = 0x15ec5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943256)));
    // 0x15ec60: 0x8fb500b0
    ctx->pc = 0x15ec60u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15ec64: 0xafa20008
    ctx->pc = 0x15ec64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x15ec68: 0x6d1821
    ctx->pc = 0x15ec68u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x15ec6c: 0x8fa20004
    ctx->pc = 0x15ec6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15ec70: 0x8c77012c
    ctx->pc = 0x15ec70u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x15ec74: 0x122c821
    ctx->pc = 0x15ec74u;
    SET_GPR_U32(ctx, 25, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x15ec78: 0x2ec6018
    ctx->pc = 0x15ec78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)(uint32_t)result); }
    // 0x15ec7c: 0x18b5821
    ctx->pc = 0x15ec7cu;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x15ec80: 0x18e6021
    ctx->pc = 0x15ec80u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x15ec84: 0x1ab8021
    ctx->pc = 0x15ec84u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x15ec88: 0x11e00005
    ctx->pc = 0x15EC88u;
    {
        const bool branch_taken_0x15ec88 = (GPR_U32(ctx, 15) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EC8Cu;
        SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
        if (branch_taken_0x15ec88) {
            ctx->pc = 0x15ECA0u;
            goto label_15eca0;
        }
    }
    ctx->pc = 0x15EC90u;
    // 0x15ec90: 0x151043
    ctx->pc = 0x15ec90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x15ec94: 0x2541821
    ctx->pc = 0x15ec94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x15ec98: 0x10000003
    ctx->pc = 0x15EC98u;
    {
        const bool branch_taken_0x15ec98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EC9Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x15ec98) {
            ctx->pc = 0x15ECA8u;
            goto label_15eca8;
        }
    }
    ctx->pc = 0x15ECA0u;
label_15eca0:
    // 0x15eca0: 0x151043
    ctx->pc = 0x15eca0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x15eca4: 0x2541821
    ctx->pc = 0x15eca4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_15eca8:
    // 0x15eca8: 0x531021
    ctx->pc = 0x15eca8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x15ecac: 0x433021
    ctx->pc = 0x15ecacu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ecb0: 0x8ec50010
    ctx->pc = 0x15ecb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x15ecb4: 0x195903
    ctx->pc = 0x15ecb4u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 25), 4));
    // 0x15ecb8: 0x8fa30000
    ctx->pc = 0x15ecb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ecbc: 0x67103
    ctx->pc = 0x15ecbcu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 6), 4));
    // 0x15ecc0: 0x1652818
    ctx->pc = 0x15ecc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x15ecc4: 0x8fac0008
    ctx->pc = 0x15ecc4u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15ecc8: 0x722021
    ctx->pc = 0x15ecc8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15eccc: 0xe1100
    ctx->pc = 0x15ecccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 14), 4));
    // 0x15ecd0: 0xb1900
    ctx->pc = 0x15ecd0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 11), 4));
    // 0x15ecd4: 0x42140
    ctx->pc = 0x15ecd4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x15ecd8: 0x3231823
    ctx->pc = 0x15ecd8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x15ecdc: 0x1842021
    ctx->pc = 0x15ecdcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x15ece0: 0xada30004
    ctx->pc = 0x15ece0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x15ece4: 0xae2821
    ctx->pc = 0x15ece4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x15ece8: 0xafa50010
    ctx->pc = 0x15ece8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x15ecec: 0xc23023
    ctx->pc = 0x15ececu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15ecf0: 0xada40000
    ctx->pc = 0x15ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x15ecf4: 0x32b90001
    ctx->pc = 0x15ecf4u;
    SET_GPR_U32(ctx, 25, AND32(GPR_U32(ctx, 21), 1));
    // 0x15ecf8: 0x1320000f
    ctx->pc = 0x15ECF8u;
    {
        const bool branch_taken_0x15ecf8 = (GPR_U32(ctx, 25) == GPR_U32(ctx, 0));
        ctx->pc = 0x15ECFCu;
        SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x15ecf8) {
            ctx->pc = 0x15ED38u;
            goto label_15ed38;
        }
    }
    ctx->pc = 0x15ED00u;
    // 0x15ed00: 0x1f81004
    ctx->pc = 0x15ed00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x15ed04: 0xc21021
    ctx->pc = 0x15ed04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15ed08: 0x28420010
    ctx->pc = 0x15ed08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 16));
    // 0x15ed0c: 0x54400017
    ctx->pc = 0x15ED0Cu;
    {
        const bool branch_taken_0x15ed0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15ed0c) {
            ctx->pc = 0x15ED10u;
            WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 24));
            ctx->pc = 0x15ED6Cu;
            goto label_15ed6c;
        }
    }
    ctx->pc = 0x15ED14u;
    // 0x15ed14: 0x24020010
    ctx->pc = 0x15ed14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x15ed18: 0x1e61807
    ctx->pc = 0x15ed18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x15ed1c: 0x1e21007
    ctx->pc = 0x15ed1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x15ed20: 0x431023
    ctx->pc = 0x15ed20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ed24: 0x2442ffff
    ctx->pc = 0x15ed24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15ed28: 0x3021823
    ctx->pc = 0x15ed28u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x15ed2c: 0xada20008
    ctx->pc = 0x15ed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x15ed30: 0x1000000f
    ctx->pc = 0x15ED30u;
    {
        const bool branch_taken_0x15ed30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15ED34u;
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x15ed30) {
            ctx->pc = 0x15ED70u;
            goto label_15ed70;
        }
    }
    ctx->pc = 0x15ED38u;
label_15ed38:
    // 0x15ed38: 0x1f81004
    ctx->pc = 0x15ed38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x15ed3c: 0xc21021
    ctx->pc = 0x15ed3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15ed40: 0x28420011
    ctx->pc = 0x15ed40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 17));
    // 0x15ed44: 0x54400009
    ctx->pc = 0x15ED44u;
    {
        const bool branch_taken_0x15ed44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15ed44) {
            ctx->pc = 0x15ED48u;
            WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 24));
            ctx->pc = 0x15ED6Cu;
            goto label_15ed6c;
        }
    }
    ctx->pc = 0x15ED4Cu;
    // 0x15ed4c: 0x24020010
    ctx->pc = 0x15ed4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x15ed50: 0x1e61807
    ctx->pc = 0x15ed50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x15ed54: 0x1e21007
    ctx->pc = 0x15ed54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x15ed58: 0x431023
    ctx->pc = 0x15ed58u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ed5c: 0x3022023
    ctx->pc = 0x15ed5cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x15ed60: 0xada20008
    ctx->pc = 0x15ed60u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x15ed64: 0x10000002
    ctx->pc = 0x15ED64u;
    {
        const bool branch_taken_0x15ed64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15ED68u;
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 4));
        if (branch_taken_0x15ed64) {
            ctx->pc = 0x15ED70u;
            goto label_15ed70;
        }
    }
    ctx->pc = 0x15ED6Cu;
label_15ed6c:
    // 0x15ed6c: 0xada0000c
    ctx->pc = 0x15ed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
label_15ed70:
    // 0x15ed70: 0x3c030023
    ctx->pc = 0x15ed70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x15ed74: 0x24070600
    ctx->pc = 0x15ed74u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1536));
    // 0x15ed78: 0x2462a838
    ctx->pc = 0x15ed78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294944824));
    // 0x15ed7c: 0x2e73818
    ctx->pc = 0x15ed7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
    // 0x15ed80: 0x8c450280
    ctx->pc = 0x15ed80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x15ed84: 0x24030140
    ctx->pc = 0x15ed84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
    // 0x15ed88: 0x64900
    ctx->pc = 0x15ed88u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 6), 4));
    // 0x15ed8c: 0xa32018
    ctx->pc = 0x15ed8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x15ed90: 0x252a0300
    ctx->pc = 0x15ed90u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 9), 768));
    // 0x15ed94: 0xc1840
    ctx->pc = 0x15ed94u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 12), 1));
    // 0x15ed98: 0x24060010
    ctx->pc = 0x15ed98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x15ed9c: 0x1e63004
    ctx->pc = 0x15ed9cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x15eda0: 0x822821
    ctx->pc = 0x15eda0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15eda4: 0x8fa200c0
    ctx->pc = 0x15eda4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15eda8: 0x1127c2
    ctx->pc = 0x15eda8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 17), 31));
    // 0x15edac: 0x8ca80000
    ctx->pc = 0x15edacu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15edb0: 0x2242021
    ctx->pc = 0x15edb0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x15edb4: 0x2f080
    ctx->pc = 0x15edb4u;
    SET_GPR_U32(ctx, 30, SLL32(GPR_U32(ctx, 2), 2));
    // 0x15edb8: 0x48843
    ctx->pc = 0x15edb8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 1));
    // 0x15edbc: 0x3c31825
    ctx->pc = 0x15edbcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x15edc0: 0x1517c2
    ctx->pc = 0x15edc0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 21), 31));
    // 0x15edc4: 0x791825
    ctx->pc = 0x15edc4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x15edc8: 0x1072821
    ctx->pc = 0x15edc8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x15edcc: 0xafa3000c
    ctx->pc = 0x15edccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x15edd0: 0x2a26021
    ctx->pc = 0x15edd0u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15edd4: 0x8fa30004
    ctx->pc = 0x15edd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15edd8: 0xaa5021
    ctx->pc = 0x15edd8u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x15eddc: 0x42083
    ctx->pc = 0x15eddcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x15ede0: 0xa94821
    ctx->pc = 0x15ede0u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x15ede4: 0x31043
    ctx->pc = 0x15ede4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x15ede8: 0xca843
    ctx->pc = 0x15ede8u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 12), 1));
    // 0x15edec: 0xada60010
    ctx->pc = 0x15edecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 6));
    // 0x15edf0: 0x82c821
    ctx->pc = 0x15edf0u;
    SET_GPR_U32(ctx, 25, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15edf4: 0xada90014
    ctx->pc = 0x15edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 9));
    // 0x15edf8: 0x123843
    ctx->pc = 0x15edf8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 18), 1));
    // 0x15edfc: 0xadaa0018
    ctx->pc = 0x15edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 10));
    // 0x15ee00: 0x11e00008
    ctx->pc = 0x15EE00u;
    {
        const bool branch_taken_0x15ee00 = (GPR_U32(ctx, 15) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EE04u;
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 24), 1));
        if (branch_taken_0x15ee00) {
            ctx->pc = 0x15EE24u;
            goto label_15ee24;
        }
    }
    ctx->pc = 0x15EE08u;
    // 0x15ee08: 0xc1083
    ctx->pc = 0x15ee08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 2));
    // 0x15ee0c: 0x132043
    ctx->pc = 0x15ee0cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 1));
    // 0x15ee10: 0x21040
    ctx->pc = 0x15ee10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x15ee14: 0xf41821
    ctx->pc = 0x15ee14u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x15ee18: 0x441021
    ctx->pc = 0x15ee18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15ee1c: 0x10000006
    ctx->pc = 0x15EE1Cu;
    {
        const bool branch_taken_0x15ee1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EE20u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x15ee1c) {
            ctx->pc = 0x15EE38u;
            goto label_15ee38;
        }
    }
    ctx->pc = 0x15EE24u;
label_15ee24:
    // 0x15ee24: 0xc1083
    ctx->pc = 0x15ee24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 2));
    // 0x15ee28: 0x131843
    ctx->pc = 0x15ee28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 1));
    // 0x15ee2c: 0x431021
    ctx->pc = 0x15ee2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ee30: 0xf42021
    ctx->pc = 0x15ee30u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x15ee34: 0x443021
    ctx->pc = 0x15ee34u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15ee38:
    // 0x15ee38: 0x8fa40000
    ctx->pc = 0x15ee38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ee3c: 0x1948c3
    ctx->pc = 0x15ee3cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 25), 3));
    // 0x15ee40: 0x8fac0008
    ctx->pc = 0x15ee40u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15ee44: 0x650c3
    ctx->pc = 0x15ee44u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 3));
    // 0x15ee48: 0x871021
    ctx->pc = 0x15ee48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x15ee4c: 0x918c0
    ctx->pc = 0x15ee4cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 3));
    // 0x15ee50: 0x21100
    ctx->pc = 0x15ee50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x15ee54: 0x3231823
    ctx->pc = 0x15ee54u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x15ee58: 0x24420200
    ctx->pc = 0x15ee58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 512));
    // 0x15ee5c: 0xa20c0
    ctx->pc = 0x15ee5cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 10), 3));
    // 0x15ee60: 0x1821021
    ctx->pc = 0x15ee60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x15ee64: 0xc43023
    ctx->pc = 0x15ee64u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15ee68: 0x322c0001
    ctx->pc = 0x15ee68u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 17), 1));
    // 0x15ee6c: 0x32b90001
    ctx->pc = 0x15ee6cu;
    SET_GPR_U32(ctx, 25, AND32(GPR_U32(ctx, 21), 1));
    // 0x15ee70: 0xae030004
    ctx->pc = 0x15ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x15ee74: 0x1320000f
    ctx->pc = 0x15EE74u;
    {
        const bool branch_taken_0x15ee74 = (GPR_U32(ctx, 25) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EE78u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x15ee74) {
            ctx->pc = 0x15EEB4u;
            goto label_15eeb4;
        }
    }
    ctx->pc = 0x15EE7Cu;
    // 0x15ee7c: 0x1e81004
    ctx->pc = 0x15ee7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 15) & 0x1F));
    // 0x15ee80: 0xc21021
    ctx->pc = 0x15ee80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15ee84: 0x28420008
    ctx->pc = 0x15ee84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 8));
    // 0x15ee88: 0x54400017
    ctx->pc = 0x15EE88u;
    {
        const bool branch_taken_0x15ee88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15ee88) {
            ctx->pc = 0x15EE8Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
            ctx->pc = 0x15EEE8u;
            goto label_15eee8;
        }
    }
    ctx->pc = 0x15EE90u;
    // 0x15ee90: 0x24020008
    ctx->pc = 0x15ee90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15ee94: 0x1e61807
    ctx->pc = 0x15ee94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x15ee98: 0x1e21007
    ctx->pc = 0x15ee98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x15ee9c: 0x431023
    ctx->pc = 0x15ee9cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15eea0: 0x2442ffff
    ctx->pc = 0x15eea0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15eea4: 0x1021823
    ctx->pc = 0x15eea4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x15eea8: 0xae020008
    ctx->pc = 0x15eea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x15eeac: 0x1000000f
    ctx->pc = 0x15EEACu;
    {
        const bool branch_taken_0x15eeac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EEB0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x15eeac) {
            ctx->pc = 0x15EEECu;
            goto label_15eeec;
        }
    }
    ctx->pc = 0x15EEB4u;
label_15eeb4:
    // 0x15eeb4: 0x1e81004
    ctx->pc = 0x15eeb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 15) & 0x1F));
    // 0x15eeb8: 0xc21021
    ctx->pc = 0x15eeb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15eebc: 0x28420009
    ctx->pc = 0x15eebcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 9));
    // 0x15eec0: 0x54400009
    ctx->pc = 0x15EEC0u;
    {
        const bool branch_taken_0x15eec0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15eec0) {
            ctx->pc = 0x15EEC4u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
            ctx->pc = 0x15EEE8u;
            goto label_15eee8;
        }
    }
    ctx->pc = 0x15EEC8u;
    // 0x15eec8: 0x24020008
    ctx->pc = 0x15eec8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15eecc: 0x1e61807
    ctx->pc = 0x15eeccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x15eed0: 0x1e21007
    ctx->pc = 0x15eed0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x15eed4: 0x431023
    ctx->pc = 0x15eed4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15eed8: 0x1022023
    ctx->pc = 0x15eed8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x15eedc: 0xae020008
    ctx->pc = 0x15eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x15eee0: 0x10000002
    ctx->pc = 0x15EEE0u;
    {
        const bool branch_taken_0x15eee0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EEE4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
        if (branch_taken_0x15eee0) {
            ctx->pc = 0x15EEECu;
            goto label_15eeec;
        }
    }
    ctx->pc = 0x15EEE8u;
label_15eee8:
    // 0x15eee8: 0xae00000c
    ctx->pc = 0x15eee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_15eeec:
    // 0x15eeec: 0x24020008
    ctx->pc = 0x15eeecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15eef0: 0x3c110023
    ctx->pc = 0x15eef0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x15eef4: 0x1e21004
    ctx->pc = 0x15eef4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x15eef8: 0x2627a838
    ctx->pc = 0x15eef8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 4294944824));
    // 0x15eefc: 0xae020010
    ctx->pc = 0x15eefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x15ef00: 0x14e1823
    ctx->pc = 0x15ef00u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x15ef04: 0x12b2023
    ctx->pc = 0x15ef04u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x15ef08: 0x24020140
    ctx->pc = 0x15ef08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
    // 0x15ef0c: 0x8cea0280
    ctx->pc = 0x15ef0cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 7), 640)));
    // 0x15ef10: 0x42040
    ctx->pc = 0x15ef10u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x15ef14: 0x240b0180
    ctx->pc = 0x15ef14u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 384));
    // 0x15ef18: 0x832021
    ctx->pc = 0x15ef18u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15ef1c: 0x1425018
    ctx->pc = 0x15ef1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)(uint32_t)result); }
    // 0x15ef20: 0x8fa30010
    ctx->pc = 0x15ef20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ef24: 0x8b1018
    ctx->pc = 0x15ef24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x15ef28: 0x8ece0010
    ctx->pc = 0x15ef28u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x15ef2c: 0x6b7818
    ctx->pc = 0x15ef2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)(uint32_t)result); }
    // 0x15ef30: 0x630c0
    ctx->pc = 0x15ef30u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 3));
    // 0x15ef34: 0x3c030023
    ctx->pc = 0x15ef34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x15ef38: 0x24c90400
    ctx->pc = 0x15ef38u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 6), 1024));
    // 0x15ef3c: 0x2463a108
    ctx->pc = 0x15ef3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294942984));
    // 0x15ef40: 0x8ecd0000
    ctx->pc = 0x15ef40u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x15ef44: 0x452021
    ctx->pc = 0x15ef44u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15ef48: 0x24c60100
    ctx->pc = 0x15ef48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 256));
    // 0x15ef4c: 0x8fa50010
    ctx->pc = 0x15ef4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ef50: 0xc1040
    ctx->pc = 0x15ef50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 12), 1));
    // 0x15ef54: 0x8fac000c
    ctx->pc = 0x15ef54u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x15ef58: 0x3c21025
    ctx->pc = 0x15ef58u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x15ef5c: 0xae7021
    ctx->pc = 0x15ef5cu;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x15ef60: 0x591025
    ctx->pc = 0x15ef60u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x15ef64: 0x1cb8818
    ctx->pc = 0x15ef64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)(uint32_t)result); }
    // 0x15ef68: 0xc4080
    ctx->pc = 0x15ef68u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 12), 2));
    // 0x15ef6c: 0x1034021
    ctx->pc = 0x15ef6cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x15ef70: 0x3c050023
    ctx->pc = 0x15ef70u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x15ef74: 0x894821
    ctx->pc = 0x15ef74u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x15ef78: 0x24ec012c
    ctx->pc = 0x15ef78u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 7), 300));
    // 0x15ef7c: 0x171880
    ctx->pc = 0x15ef7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 23), 2));
    // 0x15ef80: 0x24a5a128
    ctx->pc = 0x15ef80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294943016));
    // 0x15ef84: 0x21080
    ctx->pc = 0x15ef84u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x15ef88: 0x6a1821
    ctx->pc = 0x15ef88u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x15ef8c: 0x14c6021
    ctx->pc = 0x15ef8cu;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x15ef90: 0x451021
    ctx->pc = 0x15ef90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15ef94: 0x862021
    ctx->pc = 0x15ef94u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15ef98: 0x22d7021
    ctx->pc = 0x15ef98u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x15ef9c: 0xe33021
    ctx->pc = 0x15ef9cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15efa0: 0xae040014
    ctx->pc = 0x15efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x15efa4: 0x8d0b0000
    ctx->pc = 0x15efa4u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15efa8: 0x1af6821
    ctx->pc = 0x15efa8u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x15efac: 0x8d850000
    ctx->pc = 0x15efacu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x15efb0: 0xc0402d
    ctx->pc = 0x15efb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15efb4: 0xae090018
    ctx->pc = 0x15efb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 9));
    // 0x15efb8: 0xc0502d
    ctx->pc = 0x15efb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15efbc: 0x8c440000
    ctx->pc = 0x15efbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15efc0: 0x24a50001
    ctx->pc = 0x15efc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x15efc4: 0xaccd0008
    ctx->pc = 0x15efc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 13));
    // 0x15efc8: 0xc0382d
    ctx->pc = 0x15efc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15efcc: 0xad0b0028
    ctx->pc = 0x15efccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 11));
    // 0x15efd0: 0xdfbe00a0
    ctx->pc = 0x15efd0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15efd4: 0xdfb70090
    ctx->pc = 0x15efd4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15efd8: 0xdfb60080
    ctx->pc = 0x15efd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15efdc: 0xdfb50070
    ctx->pc = 0x15efdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15efe0: 0xdfb40060
    ctx->pc = 0x15efe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15efe4: 0xdfb30050
    ctx->pc = 0x15efe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15efe8: 0xdfb20040
    ctx->pc = 0x15efe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15efec: 0xdfb10030
    ctx->pc = 0x15efecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15eff0: 0xdfb00020
    ctx->pc = 0x15eff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15eff4: 0xacee0018
    ctx->pc = 0x15eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 14));
    // 0x15eff8: 0xad440038
    ctx->pc = 0x15eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 56), GPR_U32(ctx, 4));
    // 0x15effc: 0xad850000
    ctx->pc = 0x15effcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x15f000: 0x3e00008
    ctx->pc = 0x15F000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F004u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15ECA0u: goto label_15eca0;
            case 0x15ECA8u: goto label_15eca8;
            case 0x15ED38u: goto label_15ed38;
            case 0x15ED6Cu: goto label_15ed6c;
            case 0x15ED70u: goto label_15ed70;
            case 0x15EE24u: goto label_15ee24;
            case 0x15EE38u: goto label_15ee38;
            case 0x15EEB4u: goto label_15eeb4;
            case 0x15EEE8u: goto label_15eee8;
            case 0x15EEECu: goto label_15eeec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15F008u;
}
