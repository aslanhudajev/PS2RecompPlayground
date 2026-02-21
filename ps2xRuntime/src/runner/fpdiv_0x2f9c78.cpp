#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fpdiv
// Address: 0x2f9c78 - 0x2f9dd8
void fpdiv_0x2f9c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f9c78u;

    // 0x2f9c78: 0x27bdffb0
    ctx->pc = 0x2f9c78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f9c7c: 0xffb00030
    ctx->pc = 0x2f9c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2f9c80: 0x27a40020
    ctx->pc = 0x2f9c80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f9c84: 0xffbf0040
    ctx->pc = 0x2f9c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f9c88: 0x3a0282d
    ctx->pc = 0x2f9c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9c8c: 0xe7ac0020
    ctx->pc = 0x2f9c8cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2f9c90: 0xc0be5be
    ctx->pc = 0x2F9C90u;
    SET_GPR_U32(ctx, 31, 0x2F9C98u);
    ctx->pc = 0x2F9C94u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x2F96F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x2f96f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9C98u; }
    }
    if (ctx->pc != 0x2F9C98u) { return; }
    ctx->pc = 0x2F9C98u;
    // 0x2f9c98: 0x27b00010
    ctx->pc = 0x2f9c98u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f9c9c: 0x27a40024
    ctx->pc = 0x2f9c9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 36));
    // 0x2f9ca0: 0xc0be5be
    ctx->pc = 0x2F9CA0u;
    SET_GPR_U32(ctx, 31, 0x2F9CA8u);
    ctx->pc = 0x2F9CA4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F96F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x2f96f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9CA8u; }
    }
    if (ctx->pc != 0x2F9CA8u) { return; }
    ctx->pc = 0x2F9CA8u;
    // 0x2f9ca8: 0x8fa70000
    ctx->pc = 0x2f9ca8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9cac: 0x2ce20002
    ctx->pc = 0x2f9cacu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 2));
    // 0x2f9cb0: 0x10400003
    ctx->pc = 0x2F9CB0u;
    {
        const bool branch_taken_0x2f9cb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9CB4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f9cb0) {
            ctx->pc = 0x2F9CC0u;
            goto label_2f9cc0;
        }
    }
    ctx->pc = 0x2F9CB8u;
    // 0x2f9cb8: 0x10000041
    ctx->pc = 0x2F9CB8u;
    {
        const bool branch_taken_0x2f9cb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9CBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f9cb8) {
            ctx->pc = 0x2F9DC0u;
            goto label_2f9dc0;
        }
    }
    ctx->pc = 0x2F9CC0u;
label_2f9cc0:
    // 0x2f9cc0: 0x8fa60010
    ctx->pc = 0x2f9cc0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9cc4: 0x2cc20002
    ctx->pc = 0x2f9cc4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 2));
    // 0x2f9cc8: 0x1440003d
    ctx->pc = 0x2F9CC8u;
    {
        const bool branch_taken_0x2f9cc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9CCCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f9cc8) {
            ctx->pc = 0x2F9DC0u;
            goto label_2f9dc0;
        }
    }
    ctx->pc = 0x2F9CD0u;
    // 0x2f9cd0: 0x8fa20004
    ctx->pc = 0x2f9cd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f9cd4: 0x38e40004
    ctx->pc = 0x2f9cd4u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 7), 4));
    // 0x2f9cd8: 0x8fa30014
    ctx->pc = 0x2f9cd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f9cdc: 0x431026
    ctx->pc = 0x2f9cdcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f9ce0: 0x10800004
    ctx->pc = 0x2F9CE0u;
    {
        const bool branch_taken_0x2f9ce0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9CE4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x2f9ce0) {
            ctx->pc = 0x2F9CF4u;
            goto label_2f9cf4;
        }
    }
    ctx->pc = 0x2F9CE8u;
    // 0x2f9ce8: 0x38e20002
    ctx->pc = 0x2f9ce8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 7), 2));
    // 0x2f9cec: 0x14400006
    ctx->pc = 0x2F9CECu;
    {
        const bool branch_taken_0x2f9cec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9CF0u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x2f9cec) {
            ctx->pc = 0x2F9D08u;
            goto label_2f9d08;
        }
    }
    ctx->pc = 0x2F9CF4u;
label_2f9cf4:
    // 0x2f9cf4: 0x14e60032
    ctx->pc = 0x2F9CF4u;
    {
        const bool branch_taken_0x2f9cf4 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 6));
        ctx->pc = 0x2F9CF8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f9cf4) {
            ctx->pc = 0x2F9DC0u;
            goto label_2f9dc0;
        }
    }
    ctx->pc = 0x2F9CFCu;
    // 0x2f9cfc: 0x3c02003e
    ctx->pc = 0x2f9cfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2f9d00: 0x1000002f
    ctx->pc = 0x2F9D00u;
    {
        const bool branch_taken_0x2f9d00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9D04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 15888));
        if (branch_taken_0x2f9d00) {
            ctx->pc = 0x2F9DC0u;
            goto label_2f9dc0;
        }
    }
    ctx->pc = 0x2F9D08u;
label_2f9d08:
    // 0x2f9d08: 0x14400005
    ctx->pc = 0x2F9D08u;
    {
        const bool branch_taken_0x2f9d08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9D0Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x2f9d08) {
            ctx->pc = 0x2F9D20u;
            goto label_2f9d20;
        }
    }
    ctx->pc = 0x2F9D10u;
    // 0x2f9d10: 0xafa0000c
    ctx->pc = 0x2f9d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2f9d14: 0x3a0202d
    ctx->pc = 0x2f9d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9d18: 0x10000029
    ctx->pc = 0x2F9D18u;
    {
        const bool branch_taken_0x2f9d18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9D1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x2f9d18) {
            ctx->pc = 0x2F9DC0u;
            goto label_2f9dc0;
        }
    }
    ctx->pc = 0x2F9D20u;
label_2f9d20:
    // 0x2f9d20: 0x14400005
    ctx->pc = 0x2F9D20u;
    {
        const bool branch_taken_0x2f9d20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9D24u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x2f9d20) {
            ctx->pc = 0x2F9D38u;
            goto label_2f9d38;
        }
    }
    ctx->pc = 0x2F9D28u;
    // 0x2f9d28: 0x24020004
    ctx->pc = 0x2f9d28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f9d2c: 0x3a0202d
    ctx->pc = 0x2f9d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9d30: 0x10000023
    ctx->pc = 0x2F9D30u;
    {
        const bool branch_taken_0x2f9d30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9D34u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2f9d30) {
            ctx->pc = 0x2F9DC0u;
            goto label_2f9dc0;
        }
    }
    ctx->pc = 0x2F9D38u;
label_2f9d38:
    // 0x2f9d38: 0x8fa20018
    ctx->pc = 0x2f9d38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f9d3c: 0x8fa4000c
    ctx->pc = 0x2f9d3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2f9d40: 0x8fa8001c
    ctx->pc = 0x2f9d40u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2f9d44: 0x621023
    ctx->pc = 0x2f9d44u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f9d48: 0x88302b
    ctx->pc = 0x2f9d48u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2f9d4c: 0x10c00005
    ctx->pc = 0x2F9D4Cu;
    {
        const bool branch_taken_0x2f9d4c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9D50u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x2f9d4c) {
            ctx->pc = 0x2F9D64u;
            goto label_2f9d64;
        }
    }
    ctx->pc = 0x2F9D54u;
    // 0x2f9d54: 0x2442ffff
    ctx->pc = 0x2f9d54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f9d58: 0x42040
    ctx->pc = 0x2f9d58u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2f9d5c: 0xafa20008
    ctx->pc = 0x2f9d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2f9d60: 0x88302b
    ctx->pc = 0x2f9d60u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_2f9d64:
    // 0x2f9d64: 0x3c024000
    ctx->pc = 0x2f9d64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x2f9d68: 0x10000002
    ctx->pc = 0x2F9D68u;
    {
        const bool branch_taken_0x2f9d68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9D6Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d68) {
            ctx->pc = 0x2F9D74u;
            goto label_2f9d74;
        }
    }
    ctx->pc = 0x2F9D70u;
label_2f9d70:
    // 0x2f9d70: 0x88302b
    ctx->pc = 0x2f9d70u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_2f9d74:
    // 0x2f9d74: 0x54c00004
    ctx->pc = 0x2F9D74u;
    {
        const bool branch_taken_0x2f9d74 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f9d74) {
            ctx->pc = 0x2F9D78u;
            SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
            ctx->pc = 0x2F9D88u;
            goto label_2f9d88;
        }
    }
    ctx->pc = 0x2F9D7Cu;
    // 0x2f9d7c: 0xe23825
    ctx->pc = 0x2f9d7cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2f9d80: 0x882023
    ctx->pc = 0x2f9d80u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2f9d84: 0x21042
    ctx->pc = 0x2f9d84u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_2f9d88:
    // 0x2f9d88: 0x1440fff9
    ctx->pc = 0x2F9D88u;
    {
        const bool branch_taken_0x2f9d88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9D8Cu;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x2f9d88) {
            ctx->pc = 0x2F9D70u;
            goto label_2f9d70;
        }
    }
    ctx->pc = 0x2F9D90u;
    // 0x2f9d90: 0x30e3007f
    ctx->pc = 0x2f9d90u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 7), 127));
    // 0x2f9d94: 0x24020040
    ctx->pc = 0x2f9d94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2f9d98: 0x54620008
    ctx->pc = 0x2F9D98u;
    {
        const bool branch_taken_0x2f9d98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2f9d98) {
            ctx->pc = 0x2F9D9Cu;
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
            ctx->pc = 0x2F9DBCu;
            goto label_2f9dbc;
        }
    }
    ctx->pc = 0x2F9DA0u;
    // 0x2f9da0: 0x30e20080
    ctx->pc = 0x2f9da0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 128));
    // 0x2f9da4: 0x10400003
    ctx->pc = 0x2F9DA4u;
    {
        const bool branch_taken_0x2f9da4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9DA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 64));
        if (branch_taken_0x2f9da4) {
            ctx->pc = 0x2F9DB4u;
            goto label_2f9db4;
        }
    }
    ctx->pc = 0x2F9DACu;
    // 0x2f9dac: 0x10000002
    ctx->pc = 0x2F9DACu;
    {
        const bool branch_taken_0x2f9dac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9DB0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 64));
        if (branch_taken_0x2f9dac) {
            ctx->pc = 0x2F9DB8u;
            goto label_2f9db8;
        }
    }
    ctx->pc = 0x2F9DB4u;
label_2f9db4:
    // 0x2f9db4: 0x44380b
    ctx->pc = 0x2f9db4u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
label_2f9db8:
    // 0x2f9db8: 0xaca7000c
    ctx->pc = 0x2f9db8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
label_2f9dbc:
    // 0x2f9dbc: 0xa0202d
    ctx->pc = 0x2f9dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f9dc0:
    // 0x2f9dc0: 0xc0be57a
    ctx->pc = 0x2F9DC0u;
    SET_GPR_U32(ctx, 31, 0x2F9DC8u);
    ctx->pc = 0x2F95E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x2f95e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9DC8u; }
    }
    if (ctx->pc != 0x2F9DC8u) { return; }
    ctx->pc = 0x2F9DC8u;
    // 0x2f9dc8: 0xdfbf0040
    ctx->pc = 0x2f9dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f9dcc: 0xdfb00030
    ctx->pc = 0x2f9dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f9dd0: 0x3e00008
    ctx->pc = 0x2F9DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9DD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F9CC0u: goto label_2f9cc0;
            case 0x2F9CF4u: goto label_2f9cf4;
            case 0x2F9D08u: goto label_2f9d08;
            case 0x2F9D20u: goto label_2f9d20;
            case 0x2F9D38u: goto label_2f9d38;
            case 0x2F9D64u: goto label_2f9d64;
            case 0x2F9D70u: goto label_2f9d70;
            case 0x2F9D74u: goto label_2f9d74;
            case 0x2F9D88u: goto label_2f9d88;
            case 0x2F9DB4u: goto label_2f9db4;
            case 0x2F9DB8u: goto label_2f9db8;
            case 0x2F9DBCu: goto label_2f9dbc;
            case 0x2F9DC0u: goto label_2f9dc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F9DD8u;
}
