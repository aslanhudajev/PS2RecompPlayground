#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getFreeTmpBuf__11PalMgrClassFs
// Address: 0x203d30 - 0x203e50
void getFreeTmpBuf__11PalMgrClassFs_0x203d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getFreeTmpBuf__11PalMgrClassFs");


    ctx->pc = 0x203d30u;

    // 0x203d30: 0x27bdfff0
    ctx->pc = 0x203d30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x203d34: 0x7fbf0000
    ctx->pc = 0x203d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x203d38: 0x84860024
    ctx->pc = 0x203d38u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x203d3c: 0x52c3c
    ctx->pc = 0x203d3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x203d40: 0x52c3f
    ctx->pc = 0x203d40u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x203d44: 0x24a2ffff
    ctx->pc = 0x203d44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x203d48: 0x54040
    ctx->pc = 0x203d48u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 5), 1));
    // 0x203d4c: 0x402027
    ctx->pc = 0x203d4cu;
    SET_GPR_U32(ctx, 4, NOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x203d50: 0x3c020052
    ctx->pc = 0x203d50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x203d54: 0x2443c0b0
    ctx->pc = 0x203d54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294951088));
    // 0x203d58: 0xc51021
    ctx->pc = 0x203d58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x203d5c: 0x2442ffff
    ctx->pc = 0x203d5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x203d60: 0x821024
    ctx->pc = 0x203d60u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x203d64: 0x22040
    ctx->pc = 0x203d64u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 1));
    // 0x203d68: 0x643821
    ctx->pc = 0x203d68u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x203d6c: 0x24030020
    ctx->pc = 0x203d6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x203d70: 0x454821
    ctx->pc = 0x203d70u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x203d74: 0x10000028
    ctx->pc = 0x203D74u;
    {
        const bool branch_taken_0x203d74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203D78u;
        SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        if (branch_taken_0x203d74) {
            ctx->pc = 0x203E18u;
            goto label_203e18;
        }
    }
    ctx->pc = 0x203D7Cu;
label_203d7c:
    // 0x203d7c: 0x80e30000
    ctx->pc = 0x203d7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x203d80: 0x54600022
    ctx->pc = 0x203D80u;
    {
        const bool branch_taken_0x203d80 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x203d80) {
            ctx->pc = 0x203D84u;
            SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
            ctx->pc = 0x203E0Cu;
            goto label_203e0c;
        }
    }
    ctx->pc = 0x203D88u;
    // 0x203d88: 0x24460001
    ctx->pc = 0x203d88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 1));
    // 0x203d8c: 0x3c030052
    ctx->pc = 0x203d8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x203d90: 0x62040
    ctx->pc = 0x203d90u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 1));
    // 0x203d94: 0x2463c0b0
    ctx->pc = 0x203d94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294951088));
    // 0x203d98: 0x10000007
    ctx->pc = 0x203D98u;
    {
        const bool branch_taken_0x203d98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203D9Cu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x203d98) {
            ctx->pc = 0x203DB8u;
            goto label_203db8;
        }
    }
    ctx->pc = 0x203DA0u;
label_203da0:
    // 0x203da0: 0x80830000
    ctx->pc = 0x203da0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203da4: 0x14600018
    ctx->pc = 0x203DA4u;
    {
        const bool branch_taken_0x203da4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x203da4) {
            ctx->pc = 0x203E08u;
            goto label_203e08;
        }
    }
    ctx->pc = 0x203DACu;
    // 0x203dac: 0x24840002
    ctx->pc = 0x203dacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x203db0: 0x24c60001
    ctx->pc = 0x203db0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x203db4: 0x0
    ctx->pc = 0x203db4u;
    // NOP
label_203db8:
    // 0x203db8: 0xc9182a
    ctx->pc = 0x203db8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 9)));
    // 0x203dbc: 0x1460fff8
    ctx->pc = 0x203DBCu;
    {
        const bool branch_taken_0x203dbc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x203DC0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
        if (branch_taken_0x203dbc) {
            ctx->pc = 0x203DA0u;
            goto label_203da0;
        }
    }
    ctx->pc = 0x203DC4u;
    // 0x203dc4: 0x453021
    ctx->pc = 0x203dc4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x203dc8: 0x22040
    ctx->pc = 0x203dc8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 1));
    // 0x203dcc: 0x2463c0b0
    ctx->pc = 0x203dccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294951088));
    // 0x203dd0: 0x642821
    ctx->pc = 0x203dd0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x203dd4: 0x70403e28
    ctx->pc = 0x203dd4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x203dd8: 0x10000005
    ctx->pc = 0x203DD8u;
    {
        const bool branch_taken_0x203dd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203DDCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x203dd8) {
            ctx->pc = 0x203DF0u;
            goto label_203df0;
        }
    }
    ctx->pc = 0x203DE0u;
label_203de0:
    // 0x203de0: 0xa0a40000
    ctx->pc = 0x203de0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x203de4: 0x24a50002
    ctx->pc = 0x203de4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x203de8: 0x24e70001
    ctx->pc = 0x203de8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x203dec: 0x0
    ctx->pc = 0x203decu;
    // NOP
label_203df0:
    // 0x203df0: 0xe6182a
    ctx->pc = 0x203df0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x203df4: 0x0
    ctx->pc = 0x203df4u;
    // NOP
    // 0x203df8: 0x1460fff9
    ctx->pc = 0x203DF8u;
    {
        const bool branch_taken_0x203df8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x203df8) {
            ctx->pc = 0x203DE0u;
            goto label_203de0;
        }
    }
    ctx->pc = 0x203E00u;
    // 0x203e00: 0x10000011
    ctx->pc = 0x203E00u;
    {
        const bool branch_taken_0x203e00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203E04u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x203e00) {
            ctx->pc = 0x203E48u;
            goto label_203e48;
        }
    }
    ctx->pc = 0x203E08u;
label_203e08:
    // 0x203e08: 0xe83821
    ctx->pc = 0x203e08u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_203e0c:
    // 0x203e0c: 0x1254821
    ctx->pc = 0x203e0cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x203e10: 0x451021
    ctx->pc = 0x203e10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x203e14: 0x0
    ctx->pc = 0x203e14u;
    // NOP
label_203e18:
    // 0x203e18: 0x142082a
    ctx->pc = 0x203e18u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 2)));
    // 0x203e1c: 0x1020ffd7
    ctx->pc = 0x203E1Cu;
    {
        const bool branch_taken_0x203e1c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x203e1c) {
            ctx->pc = 0x203D7Cu;
            goto label_203d7c;
        }
    }
    ctx->pc = 0x203E24u;
    // 0x203e24: 0x3c020027
    ctx->pc = 0x203e24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x203e28: 0xc05114a
    ctx->pc = 0x203E28u;
    SET_GPR_U32(ctx, 31, 0x203E30u);
    ctx->pc = 0x203E2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 9840));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203E30u; }
        else if (ctx->pc != 0x203E30u) { ctx->pc = 0x203E30u; }
    }
    if (ctx->pc != 0x203E30u) { return; }
    ctx->pc = 0x203E30u;
    // 0x203e30: 0x3c020027
    ctx->pc = 0x203e30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x203e34: 0xc05114a
    ctx->pc = 0x203E34u;
    SET_GPR_U32(ctx, 31, 0x203E3Cu);
    ctx->pc = 0x203E38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 9936));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203E3Cu; }
        else if (ctx->pc != 0x203E3Cu) { ctx->pc = 0x203E3Cu; }
    }
    if (ctx->pc != 0x203E3Cu) { return; }
    ctx->pc = 0x203E3Cu;
label_203e3c:
    // 0x203e3c: 0x1000ffff
    ctx->pc = 0x203E3Cu;
    {
        const bool branch_taken_0x203e3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x203e3c) {
            ctx->pc = 0x203E3Cu;
            goto label_203e3c;
        }
    }
    ctx->pc = 0x203E44u;
    // 0x203e44: 0x7bbf0000
    ctx->pc = 0x203e44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_203e48:
    // 0x203e48: 0x3e00008
    ctx->pc = 0x203E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203E4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203D7Cu: goto label_203d7c;
            case 0x203DA0u: goto label_203da0;
            case 0x203DB8u: goto label_203db8;
            case 0x203DE0u: goto label_203de0;
            case 0x203DF0u: goto label_203df0;
            case 0x203E08u: goto label_203e08;
            case 0x203E0Cu: goto label_203e0c;
            case 0x203E18u: goto label_203e18;
            case 0x203E3Cu: goto label_203e3c;
            case 0x203E48u: goto label_203e48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203E50u;
}
