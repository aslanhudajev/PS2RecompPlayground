#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ch4dma
// Address: 0x125b78 - 0x125c4c
void _ch4dma_0x125b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125b78u;

    // 0x125b78: 0x3c021000
    ctx->pc = 0x125b78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x125b7c: 0x24030010
    ctx->pc = 0x125b7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x125b80: 0x3442e010
    ctx->pc = 0x125b80u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 57360));
    // 0x125b84: 0x3c040075
    ctx->pc = 0x125b84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)117 << 16));
    // 0x125b88: 0xac430000
    ctx->pc = 0x125b88u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x125b8c: 0x3c0a0075
    ctx->pc = 0x125b8cu;
    SET_GPR_U32(ctx, 10, ((uint32_t)117 << 16));
    // 0x125b90: 0x8c82e4dc
    ctx->pc = 0x125b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294960348)));
    // 0x125b94: 0x8d48e4e0
    ctx->pc = 0x125b94u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 10), 4294960352)));
    // 0x125b98: 0x24420001
    ctx->pc = 0x125b98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x125b9c: 0x15000003
    ctx->pc = 0x125B9Cu;
    {
        const bool branch_taken_0x125b9c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x125BA0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294960348), GPR_U32(ctx, 2));
        if (branch_taken_0x125b9c) {
            ctx->pc = 0x125BACu;
            goto label_125bac;
        }
    }
    ctx->pc = 0x125BA4u;
    // 0x125ba4: 0x3e00008
    ctx->pc = 0x125BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125BA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125BACu: goto label_125bac;
            case 0x125C10u: goto label_125c10;
            case 0x125C44u: goto label_125c44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125BACu;
label_125bac:
    // 0x125bac: 0x3409ffff
    ctx->pc = 0x125bacu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 0), 65535));
    // 0x125bb0: 0x128102b
    ctx->pc = 0x125bb0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x125bb4: 0x10400016
    ctx->pc = 0x125BB4u;
    {
        const bool branch_taken_0x125bb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x125BB8u;
        SET_GPR_U32(ctx, 7, ((uint32_t)117 << 16));
        if (branch_taken_0x125bb4) {
            ctx->pc = 0x125C10u;
            goto label_125c10;
        }
    }
    ctx->pc = 0x125BBCu;
    // 0x125bbc: 0x3c021000
    ctx->pc = 0x125bbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x125bc0: 0x8ce6e4e4
    ctx->pc = 0x125bc0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 4294960356)));
    // 0x125bc4: 0x3442b410
    ctx->pc = 0x125bc4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46096));
    // 0x125bc8: 0x3c03000f
    ctx->pc = 0x125bc8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15 << 16));
    // 0x125bcc: 0x3c041000
    ctx->pc = 0x125bccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x125bd0: 0xac460000
    ctx->pc = 0x125bd0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x125bd4: 0x3463fff0
    ctx->pc = 0x125bd4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65520));
    // 0x125bd8: 0xc33021
    ctx->pc = 0x125bd8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x125bdc: 0x3484b420
    ctx->pc = 0x125bdcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46112));
    // 0x125be0: 0x3c051000
    ctx->pc = 0x125be0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x125be4: 0xac890000
    ctx->pc = 0x125be4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x125be8: 0x24030101
    ctx->pc = 0x125be8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 257));
    // 0x125bec: 0x3c020fff
    ctx->pc = 0x125becu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x125bf0: 0x34a5b400
    ctx->pc = 0x125bf0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 46080));
    // 0x125bf4: 0x3442ffff
    ctx->pc = 0x125bf4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x125bf8: 0xaca30000
    ctx->pc = 0x125bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x125bfc: 0xc23024
    ctx->pc = 0x125bfcu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x125c00: 0x1091823
    ctx->pc = 0x125c00u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x125c04: 0xace6e4e4
    ctx->pc = 0x125c04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960356), GPR_U32(ctx, 6));
    // 0x125c08: 0x1000000e
    ctx->pc = 0x125C08u;
    {
        const bool branch_taken_0x125c08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125C0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 10), 4294960352), GPR_U32(ctx, 3));
        if (branch_taken_0x125c08) {
            ctx->pc = 0x125C44u;
            goto label_125c44;
        }
    }
    ctx->pc = 0x125C10u;
label_125c10:
    // 0x125c10: 0x3c020075
    ctx->pc = 0x125c10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)117 << 16));
    // 0x125c14: 0x3c031000
    ctx->pc = 0x125c14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x125c18: 0x8c45e4e4
    ctx->pc = 0x125c18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294960356)));
    // 0x125c1c: 0x3463b410
    ctx->pc = 0x125c1cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46096));
    // 0x125c20: 0x3c021000
    ctx->pc = 0x125c20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x125c24: 0x3c041000
    ctx->pc = 0x125c24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x125c28: 0xac650000
    ctx->pc = 0x125c28u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x125c2c: 0x3442b420
    ctx->pc = 0x125c2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46112));
    // 0x125c30: 0xac480000
    ctx->pc = 0x125c30u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8)); // MMIO: 0x10000000
    // 0x125c34: 0x3484b400
    ctx->pc = 0x125c34u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46080));
    // 0x125c38: 0x24020101
    ctx->pc = 0x125c38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 257));
    // 0x125c3c: 0xac820000
    ctx->pc = 0x125c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x125c40: 0xad40e4e0
    ctx->pc = 0x125c40u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294960352), GPR_U32(ctx, 0));
label_125c44:
    // 0x125c44: 0x3e00008
    ctx->pc = 0x125C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125C48u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125BACu: goto label_125bac;
            case 0x125C10u: goto label_125c10;
            case 0x125C44u: goto label_125c44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125C4Cu;
}
