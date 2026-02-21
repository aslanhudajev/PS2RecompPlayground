#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerGiveCrystal
// Address: 0x276ce8 - 0x276dec
void PlayerGiveCrystal_0x276ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x276ce8u;

    // 0x276ce8: 0x27bdfff0
    ctx->pc = 0x276ce8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276cec: 0x4810004
    ctx->pc = 0x276CECu;
    {
        const bool branch_taken_0x276cec = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x276CF0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x276cec) {
            ctx->pc = 0x276D00u;
            goto label_276d00;
        }
    }
    ctx->pc = 0x276CF4u;
    // 0x276cf4: 0x102d
    ctx->pc = 0x276cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276cf8: 0x10000002
    ctx->pc = 0x276CF8u;
    {
        const bool branch_taken_0x276cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x276CFCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x276cf8) {
            ctx->pc = 0x276D04u;
            goto label_276d04;
        }
    }
    ctx->pc = 0x276D00u;
label_276d00:
    // 0x276d00: 0x80102d
    ctx->pc = 0x276d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_276d04:
    // 0x276d04: 0x40502d
    ctx->pc = 0x276d04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d08: 0x8a102a
    ctx->pc = 0x276d08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 10)));
    // 0x276d0c: 0x14400035
    ctx->pc = 0x276D0Cu;
    {
        const bool branch_taken_0x276d0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x276D10u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x276d0c) {
            ctx->pc = 0x276DE4u;
            goto label_276de4;
        }
    }
    ctx->pc = 0x276D14u;
    // 0x276d14: 0x24192b00
    ctx->pc = 0x276d14u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x276d18: 0x3c020032
    ctx->pc = 0x276d18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x276d1c: 0x24501bc0
    ctx->pc = 0x276d1cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x276d20: 0x24180001
    ctx->pc = 0x276d20u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 1));
    // 0x276d24: 0x240f0004
    ctx->pc = 0x276d24u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 4));
    // 0x276d28: 0x3c020034
    ctx->pc = 0x276d28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x276d2c: 0x2442fa90
    ctx->pc = 0x276d2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965904));
    // 0x276d30: 0x51880
    ctx->pc = 0x276d30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x276d34: 0x626821
    ctx->pc = 0x276d34u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x276d38: 0x3c020034
    ctx->pc = 0x276d38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x276d3c: 0x8c4ce7f0
    ctx->pc = 0x276d3cu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x276d40: 0x240e000d
    ctx->pc = 0x276d40u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 13));
    // 0x276d44: 0x3c014040
    ctx->pc = 0x276d44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x276d48: 0x44810000
    ctx->pc = 0x276d48u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x276d4c: 0x1591018
    ctx->pc = 0x276d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_276d50:
    // 0x276d50: 0x503821
    ctx->pc = 0x276d50u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x276d54: 0x8ce200fc
    ctx->pc = 0x276d54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 252)));
    // 0x276d58: 0x10580004
    ctx->pc = 0x276D58u;
    {
        const bool branch_taken_0x276d58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 24));
        ctx->pc = 0x276D5Cu;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x276d58) {
            ctx->pc = 0x276D6Cu;
            goto label_276d6c;
        }
    }
    ctx->pc = 0x276D60u;
    // 0x276d60: 0x544f001c
    ctx->pc = 0x276D60u;
    {
        const bool branch_taken_0x276d60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 15));
        if (branch_taken_0x276d60) {
            ctx->pc = 0x276D64u;
            SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
            ctx->pc = 0x276DD4u;
            goto label_276dd4;
        }
    }
    ctx->pc = 0x276D68u;
    // 0x276d68: 0x54840
    ctx->pc = 0x276d68u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 5), 1));
label_276d6c:
    // 0x276d6c: 0x8ce3000c
    ctx->pc = 0x276d6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x276d70: 0x240b00b4
    ctx->pc = 0x276d70u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 180));
    // 0x276d74: 0x6b1818
    ctx->pc = 0x276d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276d78: 0x1231821
    ctx->pc = 0x276d78u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x276d7c: 0x24e20d0a
    ctx->pc = 0x276d7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 3338));
    // 0x276d80: 0x433021
    ctx->pc = 0x276d80u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276d84: 0x84c30000
    ctx->pc = 0x276d84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x276d88: 0x460000f
    ctx->pc = 0x276D88u;
    {
        const bool branch_taken_0x276d88 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x276D8Cu;
        SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x276d88) {
            ctx->pc = 0x276DC8u;
            goto label_276dc8;
        }
    }
    ctx->pc = 0x276D90u;
    // 0x276d90: 0x8da20000
    ctx->pc = 0x276d90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x276d94: 0x62102a
    ctx->pc = 0x276d94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x276d98: 0x1040000b
    ctx->pc = 0x276D98u;
    {
        const bool branch_taken_0x276d98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x276D9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x276d98) {
            ctx->pc = 0x276DC8u;
            goto label_276dc8;
        }
    }
    ctx->pc = 0x276DA0u;
    // 0x276da0: 0x158e0009
    ctx->pc = 0x276DA0u;
    {
        const bool branch_taken_0x276da0 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 14));
        ctx->pc = 0x276DA4u;
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x276da0) {
            ctx->pc = 0x276DC8u;
            goto label_276dc8;
        }
    }
    ctx->pc = 0x276DA8u;
    // 0x276da8: 0x8ce2000c
    ctx->pc = 0x276da8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x276dac: 0x4b1818
    ctx->pc = 0x276dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276db0: 0x691021
    ctx->pc = 0x276db0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x276db4: 0x24e31d96
    ctx->pc = 0x276db4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 7574));
    // 0x276db8: 0x621821
    ctx->pc = 0x276db8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x276dbc: 0x94620000
    ctx->pc = 0x276dbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x276dc0: 0x24420001
    ctx->pc = 0x276dc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x276dc4: 0xa4620000
    ctx->pc = 0x276dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_276dc8:
    // 0x276dc8: 0xace50900
    ctx->pc = 0x276dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2304), GPR_U32(ctx, 5));
    // 0x276dcc: 0xe4e00904
    ctx->pc = 0x276dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 2308), bits); }
    // 0x276dd0: 0x254a0001
    ctx->pc = 0x276dd0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_276dd4:
    // 0x276dd4: 0x8a102a
    ctx->pc = 0x276dd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 10)));
    // 0x276dd8: 0x1040ffdd
    ctx->pc = 0x276DD8u;
    {
        const bool branch_taken_0x276dd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x276DDCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x276dd8) {
            ctx->pc = 0x276D50u;
            goto label_276d50;
        }
    }
    ctx->pc = 0x276DE0u;
    // 0x276de0: 0xdfb00000
    ctx->pc = 0x276de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_276de4:
    // 0x276de4: 0x3e00008
    ctx->pc = 0x276DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276DE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276D00u: goto label_276d00;
            case 0x276D04u: goto label_276d04;
            case 0x276D50u: goto label_276d50;
            case 0x276D6Cu: goto label_276d6c;
            case 0x276DC8u: goto label_276dc8;
            case 0x276DD4u: goto label_276dd4;
            case 0x276DE4u: goto label_276de4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276DECu;
}
