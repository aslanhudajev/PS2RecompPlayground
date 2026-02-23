#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlCallBackPutEntry
// Address: 0x1a8d80 - 0x1a8eb4
void nlCallBackPutEntry_0x1a8d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlCallBackPutEntry");


    ctx->pc = 0x1a8d80u;

label_1a8d80:
    // 0x1a8d80: 0x27bdfff0
    ctx->pc = 0x1a8d80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a8d84:
    // 0x1a8d84: 0x7fbf0000
    ctx->pc = 0x1a8d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1a8d88:
    // 0x1a8d88: 0x70803e28
    ctx->pc = 0x1a8d88u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1a8d8c:
    // 0x1a8d8c: 0x8f848a44
    ctx->pc = 0x1a8d8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937156)));
label_1a8d90:
    // 0x1a8d90: 0x8f838a28
    ctx->pc = 0x1a8d90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937128)));
label_1a8d94:
    // 0x1a8d94: 0x5483000f
label_1a8d98:
    if (ctx->pc == 0x1A8D98u) {
        ctx->pc = 0x1A8D98u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x1A8D9Cu;
        goto label_1a8d9c;
    }
    ctx->pc = 0x1A8D94u;
    {
        const bool branch_taken_0x1a8d94 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1a8d94) {
            ctx->pc = 0x1A8D98u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x1A8DD4u;
            goto label_1a8dd4;
        }
    }
    ctx->pc = 0x1A8D9Cu;
label_1a8d9c:
    // 0x1a8d9c: 0x8f828a30
    ctx->pc = 0x1a8d9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
label_1a8da0:
    // 0x1a8da0: 0x14400008
label_1a8da4:
    if (ctx->pc == 0x1A8DA4u) {
        ctx->pc = 0x1A8DA4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A8DA8u;
        goto label_1a8da8;
    }
    ctx->pc = 0x1A8DA0u;
    {
        const bool branch_taken_0x1a8da0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8DA4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a8da0) {
            ctx->pc = 0x1A8DC4u;
            goto label_1a8dc4;
        }
    }
    ctx->pc = 0x1A8DA8u;
label_1a8da8:
    // 0x1a8da8: 0x3c020026
    ctx->pc = 0x1a8da8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_1a8dac:
    // 0x1a8dac: 0x70602e28
    ctx->pc = 0x1a8dacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1a8db0:
    // 0x1a8db0: 0xc05114a
label_1a8db4:
    if (ctx->pc == 0x1A8DB4u) {
        ctx->pc = 0x1A8DB4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964320));
        ctx->pc = 0x1A8DB8u;
        goto label_1a8db8;
    }
    ctx->pc = 0x1A8DB0u;
    SET_GPR_U32(ctx, 31, 0x1A8DB8u);
    ctx->pc = 0x1A8DB4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964320));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DB8u; }
        else if (ctx->pc != 0x1A8DB8u) { ctx->pc = 0x1A8DB8u; }
    }
    if (ctx->pc != 0x1A8DB8u) { return; }
    ctx->pc = 0x1A8DB8u;
label_1a8db8:
    // 0x1a8db8: 0x1000ffff
label_1a8dbc:
    if (ctx->pc == 0x1A8DBCu) {
        ctx->pc = 0x1A8DC0u;
        goto label_1a8dc0;
    }
    ctx->pc = 0x1A8DB8u;
    {
        const bool branch_taken_0x1a8db8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a8db8) {
            ctx->pc = 0x1A8DB8u;
            goto label_1a8db8;
        }
    }
    ctx->pc = 0x1A8DC0u;
label_1a8dc0:
    // 0x1a8dc0: 0x70a02628
    ctx->pc = 0x1a8dc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1a8dc4:
    // 0x1a8dc4: 0xe0f809
label_1a8dc8:
    if (ctx->pc == 0x1A8DC8u) {
        ctx->pc = 0x1A8DCCu;
        goto label_1a8dcc;
    }
    ctx->pc = 0x1A8DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1A8DCCu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8D80u: goto label_1a8d80;
            case 0x1A8D84u: goto label_1a8d84;
            case 0x1A8D88u: goto label_1a8d88;
            case 0x1A8D8Cu: goto label_1a8d8c;
            case 0x1A8D90u: goto label_1a8d90;
            case 0x1A8D94u: goto label_1a8d94;
            case 0x1A8D98u: goto label_1a8d98;
            case 0x1A8D9Cu: goto label_1a8d9c;
            case 0x1A8DA0u: goto label_1a8da0;
            case 0x1A8DA4u: goto label_1a8da4;
            case 0x1A8DA8u: goto label_1a8da8;
            case 0x1A8DACu: goto label_1a8dac;
            case 0x1A8DB0u: goto label_1a8db0;
            case 0x1A8DB4u: goto label_1a8db4;
            case 0x1A8DB8u: goto label_1a8db8;
            case 0x1A8DBCu: goto label_1a8dbc;
            case 0x1A8DC0u: goto label_1a8dc0;
            case 0x1A8DC4u: goto label_1a8dc4;
            case 0x1A8DC8u: goto label_1a8dc8;
            case 0x1A8DCCu: goto label_1a8dcc;
            case 0x1A8DD0u: goto label_1a8dd0;
            case 0x1A8DD4u: goto label_1a8dd4;
            case 0x1A8DD8u: goto label_1a8dd8;
            case 0x1A8DDCu: goto label_1a8ddc;
            case 0x1A8DE0u: goto label_1a8de0;
            case 0x1A8DE4u: goto label_1a8de4;
            case 0x1A8DE8u: goto label_1a8de8;
            case 0x1A8DECu: goto label_1a8dec;
            case 0x1A8DF0u: goto label_1a8df0;
            case 0x1A8DF4u: goto label_1a8df4;
            case 0x1A8DF8u: goto label_1a8df8;
            case 0x1A8DFCu: goto label_1a8dfc;
            case 0x1A8E00u: goto label_1a8e00;
            case 0x1A8E04u: goto label_1a8e04;
            case 0x1A8E08u: goto label_1a8e08;
            case 0x1A8E0Cu: goto label_1a8e0c;
            case 0x1A8E10u: goto label_1a8e10;
            case 0x1A8E14u: goto label_1a8e14;
            case 0x1A8E18u: goto label_1a8e18;
            case 0x1A8E1Cu: goto label_1a8e1c;
            case 0x1A8E20u: goto label_1a8e20;
            case 0x1A8E24u: goto label_1a8e24;
            case 0x1A8E28u: goto label_1a8e28;
            case 0x1A8E2Cu: goto label_1a8e2c;
            case 0x1A8E30u: goto label_1a8e30;
            case 0x1A8E34u: goto label_1a8e34;
            case 0x1A8E38u: goto label_1a8e38;
            case 0x1A8E3Cu: goto label_1a8e3c;
            case 0x1A8E40u: goto label_1a8e40;
            case 0x1A8E44u: goto label_1a8e44;
            case 0x1A8E48u: goto label_1a8e48;
            case 0x1A8E4Cu: goto label_1a8e4c;
            case 0x1A8E50u: goto label_1a8e50;
            case 0x1A8E54u: goto label_1a8e54;
            case 0x1A8E58u: goto label_1a8e58;
            case 0x1A8E5Cu: goto label_1a8e5c;
            case 0x1A8E60u: goto label_1a8e60;
            case 0x1A8E64u: goto label_1a8e64;
            case 0x1A8E68u: goto label_1a8e68;
            case 0x1A8E6Cu: goto label_1a8e6c;
            case 0x1A8E70u: goto label_1a8e70;
            case 0x1A8E74u: goto label_1a8e74;
            case 0x1A8E78u: goto label_1a8e78;
            case 0x1A8E7Cu: goto label_1a8e7c;
            case 0x1A8E80u: goto label_1a8e80;
            case 0x1A8E84u: goto label_1a8e84;
            case 0x1A8E88u: goto label_1a8e88;
            case 0x1A8E8Cu: goto label_1a8e8c;
            case 0x1A8E90u: goto label_1a8e90;
            case 0x1A8E94u: goto label_1a8e94;
            case 0x1A8E98u: goto label_1a8e98;
            case 0x1A8E9Cu: goto label_1a8e9c;
            case 0x1A8EA0u: goto label_1a8ea0;
            case 0x1A8EA4u: goto label_1a8ea4;
            case 0x1A8EA8u: goto label_1a8ea8;
            case 0x1A8EACu: goto label_1a8eac;
            case 0x1A8EB0u: goto label_1a8eb0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DCCu; }
            if (ctx->pc != 0x1A8DCCu) { return; }
        }
    }
    ctx->pc = 0x1A8DCCu;
label_1a8dcc:
    // 0x1a8dcc: 0x10000037
label_1a8dd0:
    if (ctx->pc == 0x1A8DD0u) {
        ctx->pc = 0x1A8DD0u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A8DD4u;
        goto label_1a8dd4;
    }
    ctx->pc = 0x1A8DCCu;
    {
        const bool branch_taken_0x1a8dcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8DD0u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1a8dcc) {
            ctx->pc = 0x1A8EACu;
            goto label_1a8eac;
        }
    }
    ctx->pc = 0x1A8DD4u;
label_1a8dd4:
    // 0x1a8dd4: 0x43200
    ctx->pc = 0x1a8dd4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 4), 8));
label_1a8dd8:
    // 0x1a8dd8: 0x8f848a2c
    ctx->pc = 0x1a8dd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
label_1a8ddc:
    // 0x1a8ddc: 0xaf838a44
    ctx->pc = 0x1a8ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937156), GPR_U32(ctx, 3));
label_1a8de0:
    // 0x1a8de0: 0x44801000
    ctx->pc = 0x1a8de0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
label_1a8de4:
    // 0x1a8de4: 0x24030003
    ctx->pc = 0x1a8de4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_1a8de8:
    // 0x1a8de8: 0x46026036
    ctx->pc = 0x1a8de8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a8dec:
    // 0x1a8dec: 0x863021
    ctx->pc = 0x1a8decu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1a8df0:
    // 0x1a8df0: 0xacc30004
    ctx->pc = 0x1a8df0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_1a8df4:
    // 0x1a8df4: 0xa4c000f4
    ctx->pc = 0x1a8df4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 244), (uint16_t)GPR_U32(ctx, 0));
label_1a8df8:
    // 0x1a8df8: 0xacc70010
    ctx->pc = 0x1a8df8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 7));
label_1a8dfc:
    // 0x1a8dfc: 0x45000004
label_1a8e00:
    if (ctx->pc == 0x1A8E00u) {
        ctx->pc = 0x1A8E00u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->pc = 0x1A8E04u;
        goto label_1a8e04;
    }
    ctx->pc = 0x1A8DFCu;
    {
        const bool branch_taken_0x1a8dfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8E00u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        if (branch_taken_0x1a8dfc) {
            ctx->pc = 0x1A8E10u;
            goto label_1a8e10;
        }
    }
    ctx->pc = 0x1A8E04u;
label_1a8e04:
    // 0x1a8e04: 0x2403ffff
    ctx->pc = 0x1a8e04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a8e08:
    // 0x1a8e08: 0x10000019
label_1a8e0c:
    if (ctx->pc == 0x1A8E0Cu) {
        ctx->pc = 0x1A8E0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1A8E10u;
        goto label_1a8e10;
    }
    ctx->pc = 0x1A8E08u;
    {
        const bool branch_taken_0x1a8e08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8E0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1a8e08) {
            ctx->pc = 0x1A8E70u;
            goto label_1a8e70;
        }
    }
    ctx->pc = 0x1A8E10u;
label_1a8e10:
    // 0x1a8e10: 0xc7808a14
    ctx->pc = 0x1a8e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8e14:
    // 0x1a8e14: 0xc7818a18
    ctx->pc = 0x1a8e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8e18:
    // 0x1a8e18: 0x460c0003
    ctx->pc = 0x1a8e18u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[12];
label_1a8e1c:
    // 0x1a8e1c: 0x46000847
    ctx->pc = 0x1a8e1cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1a8e20:
    // 0x1a8e20: 0x0
    ctx->pc = 0x1a8e20u;
    // NOP
label_1a8e24:
    // 0x1a8e24: 0x46000840
    ctx->pc = 0x1a8e24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a8e28:
    // 0x1a8e28: 0x46020834
    ctx->pc = 0x1a8e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a8e2c:
    // 0x1a8e2c: 0x0
    ctx->pc = 0x1a8e2cu;
    // NOP
label_1a8e30:
    // 0x1a8e30: 0x45000003
label_1a8e34:
    if (ctx->pc == 0x1A8E34u) {
        ctx->pc = 0x1A8E34u;
        SET_GPR_U32(ctx, 3, ((uint32_t)20352 << 16));
        ctx->pc = 0x1A8E38u;
        goto label_1a8e38;
    }
    ctx->pc = 0x1A8E30u;
    {
        const bool branch_taken_0x1a8e30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8E34u;
        SET_GPR_U32(ctx, 3, ((uint32_t)20352 << 16));
        if (branch_taken_0x1a8e30) {
            ctx->pc = 0x1A8E40u;
            goto label_1a8e40;
        }
    }
    ctx->pc = 0x1A8E38u;
label_1a8e38:
    // 0x1a8e38: 0x1000000d
label_1a8e3c:
    if (ctx->pc == 0x1A8E3Cu) {
        ctx->pc = 0x1A8E3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1A8E40u;
        goto label_1a8e40;
    }
    ctx->pc = 0x1A8E38u;
    {
        const bool branch_taken_0x1a8e38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8E3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1a8e38) {
            ctx->pc = 0x1A8E70u;
            goto label_1a8e70;
        }
    }
    ctx->pc = 0x1A8E40u;
label_1a8e40:
    // 0x1a8e40: 0x44830000
    ctx->pc = 0x1a8e40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1a8e44:
    // 0x1a8e44: 0x0
    ctx->pc = 0x1a8e44u;
    // NOP
label_1a8e48:
    // 0x1a8e48: 0x46000834
    ctx->pc = 0x1a8e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a8e4c:
    // 0x1a8e4c: 0x0
    ctx->pc = 0x1a8e4cu;
    // NOP
label_1a8e50:
    // 0x1a8e50: 0x45010004
label_1a8e54:
    if (ctx->pc == 0x1A8E54u) {
        ctx->pc = 0x1A8E54u;
        *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
        ctx->pc = 0x1A8E58u;
        goto label_1a8e58;
    }
    ctx->pc = 0x1A8E50u;
    {
        const bool branch_taken_0x1a8e50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8E54u;
        *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
        if (branch_taken_0x1a8e50) {
            ctx->pc = 0x1A8E64u;
            goto label_1a8e64;
        }
    }
    ctx->pc = 0x1A8E58u;
label_1a8e58:
    // 0x1a8e58: 0x2403ffff
    ctx->pc = 0x1a8e58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a8e5c:
    // 0x1a8e5c: 0x10000004
label_1a8e60:
    if (ctx->pc == 0x1A8E60u) {
        ctx->pc = 0x1A8E60u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1A8E64u;
        goto label_1a8e64;
    }
    ctx->pc = 0x1A8E5Cu;
    {
        const bool branch_taken_0x1a8e5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8E60u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1a8e5c) {
            ctx->pc = 0x1A8E70u;
            goto label_1a8e70;
        }
    }
    ctx->pc = 0x1A8E64u;
label_1a8e64:
    // 0x1a8e64: 0x44030000
    ctx->pc = 0x1a8e64u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
label_1a8e68:
    // 0x1a8e68: 0x0
    ctx->pc = 0x1a8e68u;
    // NOP
label_1a8e6c:
    // 0x1a8e6c: 0xacc30000
    ctx->pc = 0x1a8e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1a8e70:
    // 0x1a8e70: 0x90c40000
    ctx->pc = 0x1a8e70u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1a8e74:
    // 0x1a8e74: 0x3c030030
    ctx->pc = 0x1a8e74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
label_1a8e78:
    // 0x1a8e78: 0x24634090
    ctx->pc = 0x1a8e78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16528));
label_1a8e7c:
    // 0x1a8e7c: 0x420c0
    ctx->pc = 0x1a8e7cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
label_1a8e80:
    // 0x1a8e80: 0x641821
    ctx->pc = 0x1a8e80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8e84:
    // 0x1a8e84: 0x8c640004
    ctx->pc = 0x1a8e84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a8e88:
    // 0x1a8e88: 0x14800004
label_1a8e8c:
    if (ctx->pc == 0x1A8E8Cu) {
        ctx->pc = 0x1A8E90u;
        goto label_1a8e90;
    }
    ctx->pc = 0x1A8E88u;
    {
        const bool branch_taken_0x1a8e88 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a8e88) {
            ctx->pc = 0x1A8E9Cu;
            goto label_1a8e9c;
        }
    }
    ctx->pc = 0x1A8E90u;
label_1a8e90:
    // 0x1a8e90: 0xac660004
    ctx->pc = 0x1a8e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_1a8e94:
    // 0x1a8e94: 0x10000003
label_1a8e98:
    if (ctx->pc == 0x1A8E98u) {
        ctx->pc = 0x1A8E98u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->pc = 0x1A8E9Cu;
        goto label_1a8e9c;
    }
    ctx->pc = 0x1A8E94u;
    {
        const bool branch_taken_0x1a8e94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8E98u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        if (branch_taken_0x1a8e94) {
            ctx->pc = 0x1A8EA4u;
            goto label_1a8ea4;
        }
    }
    ctx->pc = 0x1A8E9Cu;
label_1a8e9c:
    // 0x1a8e9c: 0xac8600f0
    ctx->pc = 0x1a8e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 6));
label_1a8ea0:
    // 0x1a8ea0: 0xac660004
    ctx->pc = 0x1a8ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_1a8ea4:
    // 0x1a8ea4: 0xacc000f0
    ctx->pc = 0x1a8ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 240), GPR_U32(ctx, 0));
label_1a8ea8:
    // 0x1a8ea8: 0x7bbf0000
    ctx->pc = 0x1a8ea8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8eac:
    // 0x1a8eac: 0x3e00008
label_1a8eb0:
    if (ctx->pc == 0x1A8EB0u) {
        ctx->pc = 0x1A8EB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A8EB4u;
        goto label_fallthrough_0x1a8eac;
    }
    ctx->pc = 0x1A8EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8EB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8D80u: goto label_1a8d80;
            case 0x1A8D84u: goto label_1a8d84;
            case 0x1A8D88u: goto label_1a8d88;
            case 0x1A8D8Cu: goto label_1a8d8c;
            case 0x1A8D90u: goto label_1a8d90;
            case 0x1A8D94u: goto label_1a8d94;
            case 0x1A8D98u: goto label_1a8d98;
            case 0x1A8D9Cu: goto label_1a8d9c;
            case 0x1A8DA0u: goto label_1a8da0;
            case 0x1A8DA4u: goto label_1a8da4;
            case 0x1A8DA8u: goto label_1a8da8;
            case 0x1A8DACu: goto label_1a8dac;
            case 0x1A8DB0u: goto label_1a8db0;
            case 0x1A8DB4u: goto label_1a8db4;
            case 0x1A8DB8u: goto label_1a8db8;
            case 0x1A8DBCu: goto label_1a8dbc;
            case 0x1A8DC0u: goto label_1a8dc0;
            case 0x1A8DC4u: goto label_1a8dc4;
            case 0x1A8DC8u: goto label_1a8dc8;
            case 0x1A8DCCu: goto label_1a8dcc;
            case 0x1A8DD0u: goto label_1a8dd0;
            case 0x1A8DD4u: goto label_1a8dd4;
            case 0x1A8DD8u: goto label_1a8dd8;
            case 0x1A8DDCu: goto label_1a8ddc;
            case 0x1A8DE0u: goto label_1a8de0;
            case 0x1A8DE4u: goto label_1a8de4;
            case 0x1A8DE8u: goto label_1a8de8;
            case 0x1A8DECu: goto label_1a8dec;
            case 0x1A8DF0u: goto label_1a8df0;
            case 0x1A8DF4u: goto label_1a8df4;
            case 0x1A8DF8u: goto label_1a8df8;
            case 0x1A8DFCu: goto label_1a8dfc;
            case 0x1A8E00u: goto label_1a8e00;
            case 0x1A8E04u: goto label_1a8e04;
            case 0x1A8E08u: goto label_1a8e08;
            case 0x1A8E0Cu: goto label_1a8e0c;
            case 0x1A8E10u: goto label_1a8e10;
            case 0x1A8E14u: goto label_1a8e14;
            case 0x1A8E18u: goto label_1a8e18;
            case 0x1A8E1Cu: goto label_1a8e1c;
            case 0x1A8E20u: goto label_1a8e20;
            case 0x1A8E24u: goto label_1a8e24;
            case 0x1A8E28u: goto label_1a8e28;
            case 0x1A8E2Cu: goto label_1a8e2c;
            case 0x1A8E30u: goto label_1a8e30;
            case 0x1A8E34u: goto label_1a8e34;
            case 0x1A8E38u: goto label_1a8e38;
            case 0x1A8E3Cu: goto label_1a8e3c;
            case 0x1A8E40u: goto label_1a8e40;
            case 0x1A8E44u: goto label_1a8e44;
            case 0x1A8E48u: goto label_1a8e48;
            case 0x1A8E4Cu: goto label_1a8e4c;
            case 0x1A8E50u: goto label_1a8e50;
            case 0x1A8E54u: goto label_1a8e54;
            case 0x1A8E58u: goto label_1a8e58;
            case 0x1A8E5Cu: goto label_1a8e5c;
            case 0x1A8E60u: goto label_1a8e60;
            case 0x1A8E64u: goto label_1a8e64;
            case 0x1A8E68u: goto label_1a8e68;
            case 0x1A8E6Cu: goto label_1a8e6c;
            case 0x1A8E70u: goto label_1a8e70;
            case 0x1A8E74u: goto label_1a8e74;
            case 0x1A8E78u: goto label_1a8e78;
            case 0x1A8E7Cu: goto label_1a8e7c;
            case 0x1A8E80u: goto label_1a8e80;
            case 0x1A8E84u: goto label_1a8e84;
            case 0x1A8E88u: goto label_1a8e88;
            case 0x1A8E8Cu: goto label_1a8e8c;
            case 0x1A8E90u: goto label_1a8e90;
            case 0x1A8E94u: goto label_1a8e94;
            case 0x1A8E98u: goto label_1a8e98;
            case 0x1A8E9Cu: goto label_1a8e9c;
            case 0x1A8EA0u: goto label_1a8ea0;
            case 0x1A8EA4u: goto label_1a8ea4;
            case 0x1A8EA8u: goto label_1a8ea8;
            case 0x1A8EACu: goto label_1a8eac;
            case 0x1A8EB0u: goto label_1a8eb0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a8eac:
    ctx->pc = 0x1A8EB4u;
}
