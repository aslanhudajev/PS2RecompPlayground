#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutMoji__11TrnMojiUchiFUiiUif
// Address: 0x226ca0 - 0x226e3c
void PutMoji__11TrnMojiUchiFUiiUif_0x226ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutMoji__11TrnMojiUchiFUiiUif");


    ctx->pc = 0x226ca0u;

label_226ca0:
    // 0x226ca0: 0x27bdff90
    ctx->pc = 0x226ca0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_226ca4:
    // 0x226ca4: 0x7fbf0060
    ctx->pc = 0x226ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
label_226ca8:
    // 0x226ca8: 0x7fb40050
    ctx->pc = 0x226ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_226cac:
    // 0x226cac: 0x7fb30040
    ctx->pc = 0x226cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_226cb0:
    // 0x226cb0: 0x7fb20030
    ctx->pc = 0x226cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_226cb4:
    // 0x226cb4: 0x7fb10020
    ctx->pc = 0x226cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_226cb8:
    // 0x226cb8: 0x7fb00010
    ctx->pc = 0x226cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_226cbc:
    // 0x226cbc: 0x70a09e28
    ctx->pc = 0x226cbcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_226cc0:
    // 0x226cc0: 0xe7b40000
    ctx->pc = 0x226cc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_226cc4:
    // 0x226cc4: 0x2e610008
    ctx->pc = 0x226cc4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 19), 8));
label_226cc8:
    // 0x226cc8: 0x7080a628
    ctx->pc = 0x226cc8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_226ccc:
    // 0x226ccc: 0x70c09628
    ctx->pc = 0x226cccu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_226cd0:
    // 0x226cd0: 0x70e08e28
    ctx->pc = 0x226cd0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_226cd4:
    // 0x226cd4: 0x1020001d
label_226cd8:
    if (ctx->pc == 0x226CD8u) {
        ctx->pc = 0x226CD8u;
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x226CDCu;
        goto label_226cdc;
    }
    ctx->pc = 0x226CD4u;
    {
        const bool branch_taken_0x226cd4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x226CD8u;
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x226cd4) {
            ctx->pc = 0x226D4Cu;
            goto label_226d4c;
        }
    }
    ctx->pc = 0x226CDCu;
label_226cdc:
    // 0x226cdc: 0x3c02002c
    ctx->pc = 0x226cdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_226ce0:
    // 0x226ce0: 0x24432310
    ctx->pc = 0x226ce0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8976));
label_226ce4:
    // 0x226ce4: 0x131080
    ctx->pc = 0x226ce4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
label_226ce8:
    // 0x226ce8: 0x431021
    ctx->pc = 0x226ce8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_226cec:
    // 0x226cec: 0x8c420000
    ctx->pc = 0x226cecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_226cf0:
    // 0x226cf0: 0x400008
label_226cf4:
    if (ctx->pc == 0x226CF4u) {
        ctx->pc = 0x226CF8u;
        goto label_226cf8;
    }
    ctx->pc = 0x226CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226CA0u: goto label_226ca0;
            case 0x226CA4u: goto label_226ca4;
            case 0x226CA8u: goto label_226ca8;
            case 0x226CACu: goto label_226cac;
            case 0x226CB0u: goto label_226cb0;
            case 0x226CB4u: goto label_226cb4;
            case 0x226CB8u: goto label_226cb8;
            case 0x226CBCu: goto label_226cbc;
            case 0x226CC0u: goto label_226cc0;
            case 0x226CC4u: goto label_226cc4;
            case 0x226CC8u: goto label_226cc8;
            case 0x226CCCu: goto label_226ccc;
            case 0x226CD0u: goto label_226cd0;
            case 0x226CD4u: goto label_226cd4;
            case 0x226CD8u: goto label_226cd8;
            case 0x226CDCu: goto label_226cdc;
            case 0x226CE0u: goto label_226ce0;
            case 0x226CE4u: goto label_226ce4;
            case 0x226CE8u: goto label_226ce8;
            case 0x226CECu: goto label_226cec;
            case 0x226CF0u: goto label_226cf0;
            case 0x226CF4u: goto label_226cf4;
            case 0x226CF8u: goto label_226cf8;
            case 0x226CFCu: goto label_226cfc;
            case 0x226D00u: goto label_226d00;
            case 0x226D04u: goto label_226d04;
            case 0x226D08u: goto label_226d08;
            case 0x226D0Cu: goto label_226d0c;
            case 0x226D10u: goto label_226d10;
            case 0x226D14u: goto label_226d14;
            case 0x226D18u: goto label_226d18;
            case 0x226D1Cu: goto label_226d1c;
            case 0x226D20u: goto label_226d20;
            case 0x226D24u: goto label_226d24;
            case 0x226D28u: goto label_226d28;
            case 0x226D2Cu: goto label_226d2c;
            case 0x226D30u: goto label_226d30;
            case 0x226D34u: goto label_226d34;
            case 0x226D38u: goto label_226d38;
            case 0x226D3Cu: goto label_226d3c;
            case 0x226D40u: goto label_226d40;
            case 0x226D44u: goto label_226d44;
            case 0x226D48u: goto label_226d48;
            case 0x226D4Cu: goto label_226d4c;
            case 0x226D50u: goto label_226d50;
            case 0x226D54u: goto label_226d54;
            case 0x226D58u: goto label_226d58;
            case 0x226D5Cu: goto label_226d5c;
            case 0x226D60u: goto label_226d60;
            case 0x226D64u: goto label_226d64;
            case 0x226D68u: goto label_226d68;
            case 0x226D6Cu: goto label_226d6c;
            case 0x226D70u: goto label_226d70;
            case 0x226D74u: goto label_226d74;
            case 0x226D78u: goto label_226d78;
            case 0x226D7Cu: goto label_226d7c;
            case 0x226D80u: goto label_226d80;
            case 0x226D84u: goto label_226d84;
            case 0x226D88u: goto label_226d88;
            case 0x226D8Cu: goto label_226d8c;
            case 0x226D90u: goto label_226d90;
            case 0x226D94u: goto label_226d94;
            case 0x226D98u: goto label_226d98;
            case 0x226D9Cu: goto label_226d9c;
            case 0x226DA0u: goto label_226da0;
            case 0x226DA4u: goto label_226da4;
            case 0x226DA8u: goto label_226da8;
            case 0x226DACu: goto label_226dac;
            case 0x226DB0u: goto label_226db0;
            case 0x226DB4u: goto label_226db4;
            case 0x226DB8u: goto label_226db8;
            case 0x226DBCu: goto label_226dbc;
            case 0x226DC0u: goto label_226dc0;
            case 0x226DC4u: goto label_226dc4;
            case 0x226DC8u: goto label_226dc8;
            case 0x226DCCu: goto label_226dcc;
            case 0x226DD0u: goto label_226dd0;
            case 0x226DD4u: goto label_226dd4;
            case 0x226DD8u: goto label_226dd8;
            case 0x226DDCu: goto label_226ddc;
            case 0x226DE0u: goto label_226de0;
            case 0x226DE4u: goto label_226de4;
            case 0x226DE8u: goto label_226de8;
            case 0x226DECu: goto label_226dec;
            case 0x226DF0u: goto label_226df0;
            case 0x226DF4u: goto label_226df4;
            case 0x226DF8u: goto label_226df8;
            case 0x226DFCu: goto label_226dfc;
            case 0x226E00u: goto label_226e00;
            case 0x226E04u: goto label_226e04;
            case 0x226E08u: goto label_226e08;
            case 0x226E0Cu: goto label_226e0c;
            case 0x226E10u: goto label_226e10;
            case 0x226E14u: goto label_226e14;
            case 0x226E18u: goto label_226e18;
            case 0x226E1Cu: goto label_226e1c;
            case 0x226E20u: goto label_226e20;
            case 0x226E24u: goto label_226e24;
            case 0x226E28u: goto label_226e28;
            case 0x226E2Cu: goto label_226e2c;
            case 0x226E30u: goto label_226e30;
            case 0x226E34u: goto label_226e34;
            case 0x226E38u: goto label_226e38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226CF8u;
label_226cf8:
    // 0x226cf8: 0x10000014
label_226cfc:
    if (ctx->pc == 0x226CFCu) {
        ctx->pc = 0x226CFCu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294938244)));
        ctx->pc = 0x226D00u;
        goto label_226d00;
    }
    ctx->pc = 0x226CF8u;
    {
        const bool branch_taken_0x226cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226CFCu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294938244)));
        if (branch_taken_0x226cf8) {
            ctx->pc = 0x226D4Cu;
            goto label_226d4c;
        }
    }
    ctx->pc = 0x226D00u;
label_226d00:
    // 0x226d00: 0x10000012
label_226d04:
    if (ctx->pc == 0x226D04u) {
        ctx->pc = 0x226D04u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294938248)));
        ctx->pc = 0x226D08u;
        goto label_226d08;
    }
    ctx->pc = 0x226D00u;
    {
        const bool branch_taken_0x226d00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226D04u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294938248)));
        if (branch_taken_0x226d00) {
            ctx->pc = 0x226D4Cu;
            goto label_226d4c;
        }
    }
    ctx->pc = 0x226D08u;
label_226d08:
    // 0x226d08: 0x10000010
label_226d0c:
    if (ctx->pc == 0x226D0Cu) {
        ctx->pc = 0x226D0Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294938252)));
        ctx->pc = 0x226D10u;
        goto label_226d10;
    }
    ctx->pc = 0x226D08u;
    {
        const bool branch_taken_0x226d08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226D0Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294938252)));
        if (branch_taken_0x226d08) {
            ctx->pc = 0x226D4Cu;
            goto label_226d4c;
        }
    }
    ctx->pc = 0x226D10u;
label_226d10:
    // 0x226d10: 0x1000000e
label_226d14:
    if (ctx->pc == 0x226D14u) {
        ctx->pc = 0x226D14u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294938252)));
        ctx->pc = 0x226D18u;
        goto label_226d18;
    }
    ctx->pc = 0x226D10u;
    {
        const bool branch_taken_0x226d10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226D14u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294938252)));
        if (branch_taken_0x226d10) {
            ctx->pc = 0x226D4Cu;
            goto label_226d4c;
        }
    }
    ctx->pc = 0x226D18u;
label_226d18:
    // 0x226d18: 0x1000000c
label_226d1c:
    if (ctx->pc == 0x226D1Cu) {
        ctx->pc = 0x226D1Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
        ctx->pc = 0x226D20u;
        goto label_226d20;
    }
    ctx->pc = 0x226D18u;
    {
        const bool branch_taken_0x226d18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226D1Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
        if (branch_taken_0x226d18) {
            ctx->pc = 0x226D4Cu;
            goto label_226d4c;
        }
    }
    ctx->pc = 0x226D20u;
label_226d20:
    // 0x226d20: 0x1000000a
label_226d24:
    if (ctx->pc == 0x226D24u) {
        ctx->pc = 0x226D24u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294938260)));
        ctx->pc = 0x226D28u;
        goto label_226d28;
    }
    ctx->pc = 0x226D20u;
    {
        const bool branch_taken_0x226d20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226D24u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294938260)));
        if (branch_taken_0x226d20) {
            ctx->pc = 0x226D4Cu;
            goto label_226d4c;
        }
    }
    ctx->pc = 0x226D28u;
label_226d28:
    // 0x226d28: 0x3c02002b
    ctx->pc = 0x226d28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
label_226d2c:
    // 0x226d2c: 0x121880
    ctx->pc = 0x226d2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
label_226d30:
    // 0x226d30: 0x24428d40
    ctx->pc = 0x226d30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937920));
label_226d34:
    // 0x226d34: 0x431021
    ctx->pc = 0x226d34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_226d38:
    // 0x226d38: 0x8f908e98
    ctx->pc = 0x226d38u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294938264)));
label_226d3c:
    // 0x226d3c: 0x10000003
label_226d40:
    if (ctx->pc == 0x226D40u) {
        ctx->pc = 0x226D40u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x226D44u;
        goto label_226d44;
    }
    ctx->pc = 0x226D3Cu;
    {
        const bool branch_taken_0x226d3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226D40u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x226d3c) {
            ctx->pc = 0x226D4Cu;
            goto label_226d4c;
        }
    }
    ctx->pc = 0x226D44u;
label_226d44:
    // 0x226d44: 0x8f908e9c
    ctx->pc = 0x226d44u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
label_226d48:
    // 0x226d48: 0x0
    ctx->pc = 0x226d48u;
    // NOP
label_226d4c:
    // 0x226d4c: 0x131180
    ctx->pc = 0x226d4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 6));
label_226d50:
    // 0x226d50: 0x531023
    ctx->pc = 0x226d50u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_226d54:
    // 0x226d54: 0x21880
    ctx->pc = 0x226d54u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
label_226d58:
    // 0x226d58: 0x3c02002b
    ctx->pc = 0x226d58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
label_226d5c:
    // 0x226d5c: 0x24426530
    ctx->pc = 0x226d5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25904));
label_226d60:
    // 0x226d60: 0x432821
    ctx->pc = 0x226d60u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_226d64:
    // 0x226d64: 0x3c010050
    ctx->pc = 0x226d64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_226d68:
    // 0x226d68: 0x8023fec5
    ctx->pc = 0x226d68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
label_226d6c:
    // 0x226d6c: 0x72802628
    ctx->pc = 0x226d6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_226d70:
    // 0x226d70: 0x310c0
    ctx->pc = 0x226d70u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
label_226d74:
    // 0x226d74: 0x431021
    ctx->pc = 0x226d74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_226d78:
    // 0x226d78: 0x21080
    ctx->pc = 0x226d78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_226d7c:
    // 0x226d7c: 0x451021
    ctx->pc = 0x226d7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_226d80:
    // 0x226d80: 0xc089b90
label_226d84:
    if (ctx->pc == 0x226D84u) {
        ctx->pc = 0x226D84u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x226D88u;
        goto label_226d88;
    }
    ctx->pc = 0x226D80u;
    SET_GPR_U32(ctx, 31, 0x226D88u);
    ctx->pc = 0x226D84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 12));
    ctx->pc = 0x226E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        Spr2Cam__11TrnMojiUchiF11tagNLpoint3_0x226e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226D88u; }
        else if (ctx->pc != 0x226D88u) { ctx->pc = 0x226D88u; }
    }
    if (ctx->pc != 0x226D88u) { return; }
    ctx->pc = 0x226D88u;
label_226d88:
    // 0x226d88: 0x24030001
    ctx->pc = 0x226d88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_226d8c:
    // 0x226d8c: 0x16230011
label_226d90:
    if (ctx->pc == 0x226D90u) {
        ctx->pc = 0x226D94u;
        goto label_226d94;
    }
    ctx->pc = 0x226D8Cu;
    {
        const bool branch_taken_0x226d8c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        if (branch_taken_0x226d8c) {
            ctx->pc = 0x226DD4u;
            goto label_226dd4;
        }
    }
    ctx->pc = 0x226D94u;
label_226d94:
    // 0x226d94: 0x4bede37d
    ctx->pc = 0x226d94u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_226d98:
    // 0x226d98: 0x4bedeb7d
    ctx->pc = 0x226d98u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_226d9c:
    // 0x226d9c: 0x4bedf37d
    ctx->pc = 0x226d9cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_226da0:
    // 0x226da0: 0x4bedfb7d
    ctx->pc = 0x226da0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_226da4:
    // 0x226da4: 0x121080
    ctx->pc = 0x226da4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_226da8:
    // 0x226da8: 0x2021021
    ctx->pc = 0x226da8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_226dac:
    // 0x226dac: 0x8c460000
    ctx->pc = 0x226dacu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_226db0:
    // 0x226db0: 0x72802628
    ctx->pc = 0x226db0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_226db4:
    // 0x226db4: 0x72602e28
    ctx->pc = 0x226db4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_226db8:
    // 0x226db8: 0xc0899b0
label_226dbc:
    if (ctx->pc == 0x226DBCu) {
        ctx->pc = 0x226DBCu;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x226DC0u;
        goto label_226dc0;
    }
    ctx->pc = 0x226DB8u;
    SET_GPR_U32(ctx, 31, 0x226DC0u);
    ctx->pc = 0x226DBCu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2266C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutFontCenter__11TrnMojiUchiFUiPcf_0x2266c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226DC0u; }
        else if (ctx->pc != 0x226DC0u) { ctx->pc = 0x226DC0u; }
    }
    if (ctx->pc != 0x226DC0u) { return; }
    ctx->pc = 0x226DC0u;
label_226dc0:
    // 0x226dc0: 0x4bff6b7e
    ctx->pc = 0x226dc0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_226dc4:
    // 0x226dc4: 0x4bfe6b7e
    ctx->pc = 0x226dc4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_226dc8:
    // 0x226dc8: 0x4bfd6b7e
    ctx->pc = 0x226dc8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_226dcc:
    // 0x226dcc: 0x10000012
label_226dd0:
    if (ctx->pc == 0x226DD0u) {
        ctx->pc = 0x226DD0u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->pc = 0x226DD4u;
        goto label_226dd4;
    }
    ctx->pc = 0x226DCCu;
    {
        const bool branch_taken_0x226dcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226DD0u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x226dcc) {
            ctx->pc = 0x226E18u;
            goto label_226e18;
        }
    }
    ctx->pc = 0x226DD4u;
label_226dd4:
    // 0x226dd4: 0x16200010
label_226dd8:
    if (ctx->pc == 0x226DD8u) {
        ctx->pc = 0x226DDCu;
        goto label_226ddc;
    }
    ctx->pc = 0x226DD4u;
    {
        const bool branch_taken_0x226dd4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x226dd4) {
            ctx->pc = 0x226E18u;
            goto label_226e18;
        }
    }
    ctx->pc = 0x226DDCu;
label_226ddc:
    // 0x226ddc: 0x4bede37d
    ctx->pc = 0x226ddcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_226de0:
    // 0x226de0: 0x4bedeb7d
    ctx->pc = 0x226de0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_226de4:
    // 0x226de4: 0x4bedf37d
    ctx->pc = 0x226de4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_226de8:
    // 0x226de8: 0x4bedfb7d
    ctx->pc = 0x226de8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_226dec:
    // 0x226dec: 0x121080
    ctx->pc = 0x226decu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_226df0:
    // 0x226df0: 0x2021021
    ctx->pc = 0x226df0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_226df4:
    // 0x226df4: 0x8c460000
    ctx->pc = 0x226df4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_226df8:
    // 0x226df8: 0x72802628
    ctx->pc = 0x226df8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_226dfc:
    // 0x226dfc: 0x72602e28
    ctx->pc = 0x226dfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_226e00:
    // 0x226e00: 0xc089894
label_226e04:
    if (ctx->pc == 0x226E04u) {
        ctx->pc = 0x226E04u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x226E08u;
        goto label_226e08;
    }
    ctx->pc = 0x226E00u;
    SET_GPR_U32(ctx, 31, 0x226E08u);
    ctx->pc = 0x226E04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x226250u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutFont__11TrnMojiUchiFUiPcf_0x226250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226E08u; }
        else if (ctx->pc != 0x226E08u) { ctx->pc = 0x226E08u; }
    }
    if (ctx->pc != 0x226E08u) { return; }
    ctx->pc = 0x226E08u;
label_226e08:
    // 0x226e08: 0x4bff6b7e
    ctx->pc = 0x226e08u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_226e0c:
    // 0x226e0c: 0x4bfe6b7e
    ctx->pc = 0x226e0cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_226e10:
    // 0x226e10: 0x4bfd6b7e
    ctx->pc = 0x226e10u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_226e14:
    // 0x226e14: 0x4bfc6b7e
    ctx->pc = 0x226e14u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_226e18:
    // 0x226e18: 0x7bbf0060
    ctx->pc = 0x226e18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_226e1c:
    // 0x226e1c: 0x7bb40050
    ctx->pc = 0x226e1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_226e20:
    // 0x226e20: 0x7bb30040
    ctx->pc = 0x226e20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_226e24:
    // 0x226e24: 0x7bb20030
    ctx->pc = 0x226e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_226e28:
    // 0x226e28: 0x7bb10020
    ctx->pc = 0x226e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_226e2c:
    // 0x226e2c: 0x7bb00010
    ctx->pc = 0x226e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226e30:
    // 0x226e30: 0xc7b40000
    ctx->pc = 0x226e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_226e34:
    // 0x226e34: 0x3e00008
label_226e38:
    if (ctx->pc == 0x226E38u) {
        ctx->pc = 0x226E38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x226E3Cu;
        goto label_fallthrough_0x226e34;
    }
    ctx->pc = 0x226E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226E38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226CA0u: goto label_226ca0;
            case 0x226CA4u: goto label_226ca4;
            case 0x226CA8u: goto label_226ca8;
            case 0x226CACu: goto label_226cac;
            case 0x226CB0u: goto label_226cb0;
            case 0x226CB4u: goto label_226cb4;
            case 0x226CB8u: goto label_226cb8;
            case 0x226CBCu: goto label_226cbc;
            case 0x226CC0u: goto label_226cc0;
            case 0x226CC4u: goto label_226cc4;
            case 0x226CC8u: goto label_226cc8;
            case 0x226CCCu: goto label_226ccc;
            case 0x226CD0u: goto label_226cd0;
            case 0x226CD4u: goto label_226cd4;
            case 0x226CD8u: goto label_226cd8;
            case 0x226CDCu: goto label_226cdc;
            case 0x226CE0u: goto label_226ce0;
            case 0x226CE4u: goto label_226ce4;
            case 0x226CE8u: goto label_226ce8;
            case 0x226CECu: goto label_226cec;
            case 0x226CF0u: goto label_226cf0;
            case 0x226CF4u: goto label_226cf4;
            case 0x226CF8u: goto label_226cf8;
            case 0x226CFCu: goto label_226cfc;
            case 0x226D00u: goto label_226d00;
            case 0x226D04u: goto label_226d04;
            case 0x226D08u: goto label_226d08;
            case 0x226D0Cu: goto label_226d0c;
            case 0x226D10u: goto label_226d10;
            case 0x226D14u: goto label_226d14;
            case 0x226D18u: goto label_226d18;
            case 0x226D1Cu: goto label_226d1c;
            case 0x226D20u: goto label_226d20;
            case 0x226D24u: goto label_226d24;
            case 0x226D28u: goto label_226d28;
            case 0x226D2Cu: goto label_226d2c;
            case 0x226D30u: goto label_226d30;
            case 0x226D34u: goto label_226d34;
            case 0x226D38u: goto label_226d38;
            case 0x226D3Cu: goto label_226d3c;
            case 0x226D40u: goto label_226d40;
            case 0x226D44u: goto label_226d44;
            case 0x226D48u: goto label_226d48;
            case 0x226D4Cu: goto label_226d4c;
            case 0x226D50u: goto label_226d50;
            case 0x226D54u: goto label_226d54;
            case 0x226D58u: goto label_226d58;
            case 0x226D5Cu: goto label_226d5c;
            case 0x226D60u: goto label_226d60;
            case 0x226D64u: goto label_226d64;
            case 0x226D68u: goto label_226d68;
            case 0x226D6Cu: goto label_226d6c;
            case 0x226D70u: goto label_226d70;
            case 0x226D74u: goto label_226d74;
            case 0x226D78u: goto label_226d78;
            case 0x226D7Cu: goto label_226d7c;
            case 0x226D80u: goto label_226d80;
            case 0x226D84u: goto label_226d84;
            case 0x226D88u: goto label_226d88;
            case 0x226D8Cu: goto label_226d8c;
            case 0x226D90u: goto label_226d90;
            case 0x226D94u: goto label_226d94;
            case 0x226D98u: goto label_226d98;
            case 0x226D9Cu: goto label_226d9c;
            case 0x226DA0u: goto label_226da0;
            case 0x226DA4u: goto label_226da4;
            case 0x226DA8u: goto label_226da8;
            case 0x226DACu: goto label_226dac;
            case 0x226DB0u: goto label_226db0;
            case 0x226DB4u: goto label_226db4;
            case 0x226DB8u: goto label_226db8;
            case 0x226DBCu: goto label_226dbc;
            case 0x226DC0u: goto label_226dc0;
            case 0x226DC4u: goto label_226dc4;
            case 0x226DC8u: goto label_226dc8;
            case 0x226DCCu: goto label_226dcc;
            case 0x226DD0u: goto label_226dd0;
            case 0x226DD4u: goto label_226dd4;
            case 0x226DD8u: goto label_226dd8;
            case 0x226DDCu: goto label_226ddc;
            case 0x226DE0u: goto label_226de0;
            case 0x226DE4u: goto label_226de4;
            case 0x226DE8u: goto label_226de8;
            case 0x226DECu: goto label_226dec;
            case 0x226DF0u: goto label_226df0;
            case 0x226DF4u: goto label_226df4;
            case 0x226DF8u: goto label_226df8;
            case 0x226DFCu: goto label_226dfc;
            case 0x226E00u: goto label_226e00;
            case 0x226E04u: goto label_226e04;
            case 0x226E08u: goto label_226e08;
            case 0x226E0Cu: goto label_226e0c;
            case 0x226E10u: goto label_226e10;
            case 0x226E14u: goto label_226e14;
            case 0x226E18u: goto label_226e18;
            case 0x226E1Cu: goto label_226e1c;
            case 0x226E20u: goto label_226e20;
            case 0x226E24u: goto label_226e24;
            case 0x226E28u: goto label_226e28;
            case 0x226E2Cu: goto label_226e2c;
            case 0x226E30u: goto label_226e30;
            case 0x226E34u: goto label_226e34;
            case 0x226E38u: goto label_226e38;
            default: break;
        }
        return;
    }
label_fallthrough_0x226e34:
    ctx->pc = 0x226E3Cu;
}
