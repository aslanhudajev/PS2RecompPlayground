#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterInitSfx
// Address: 0x291d30 - 0x291e7c
void CritterInitSfx_0x291d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x291d30u;

label_291d30:
    // 0x291d30: 0x27bdff90
    ctx->pc = 0x291d30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x291d34: 0xffbf0060
    ctx->pc = 0x291d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x291d38: 0xffb30050
    ctx->pc = 0x291d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x291d3c: 0xffb20040
    ctx->pc = 0x291d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x291d40: 0xffb10030
    ctx->pc = 0x291d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x291d44: 0xffb00020
    ctx->pc = 0x291d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x291d48: 0x80982d
    ctx->pc = 0x291d48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d4c: 0x4a00044
    ctx->pc = 0x291D4Cu;
    {
        const bool branch_taken_0x291d4c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x291D50u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x291d4c) {
            ctx->pc = 0x291E60u;
            goto label_291e60;
        }
    }
    ctx->pc = 0x291D54u;
    // 0x291d54: 0x24020050
    ctx->pc = 0x291d54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x291d58: 0xa21018
    ctx->pc = 0x291d58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x291d5c: 0x8e63004c
    ctx->pc = 0x291d5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x291d60: 0x438021
    ctx->pc = 0x291d60u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291d64: 0x8e020008
    ctx->pc = 0x291d64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x291d68: 0x4430027
    ctx->pc = 0x291D68u;
    {
        const bool branch_taken_0x291d68 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x291d68) {
            ctx->pc = 0x291D6Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x291E08u;
            goto label_291e08;
        }
    }
    ctx->pc = 0x291D70u;
    // 0x291d70: 0x8e020000
    ctx->pc = 0x291d70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x291d74: 0x3c030f00
    ctx->pc = 0x291d74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)3840 << 16));
    // 0x291d78: 0x34630100
    ctx->pc = 0x291d78u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 256));
    // 0x291d7c: 0x431024
    ctx->pc = 0x291d7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291d80: 0x1040001b
    ctx->pc = 0x291D80u;
    {
        const bool branch_taken_0x291d80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x291D84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x291d80) {
            ctx->pc = 0x291DF0u;
            goto label_291df0;
        }
    }
    ctx->pc = 0x291D88u;
    // 0x291d88: 0x82020010
    ctx->pc = 0x291d88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x291d8c: 0x10400016
    ctx->pc = 0x291D8Cu;
    {
        const bool branch_taken_0x291d8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x291D90u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x291d8c) {
            ctx->pc = 0x291DE8u;
            goto label_291de8;
        }
    }
    ctx->pc = 0x291D94u;
    // 0x291d94: 0x240202d
    ctx->pc = 0x291d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d98: 0x220282d
    ctx->pc = 0x291d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d9c: 0xc084c62
    ctx->pc = 0x291D9Cu;
    SET_GPR_U32(ctx, 31, 0x291DA4u);
    ctx->pc = 0x291DA0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213188u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindTexMod_0x213188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291DA4u; }
    }
    if (ctx->pc != 0x291DA4u) { return; }
    ctx->pc = 0x291DA4u;
    // 0x291da4: 0x1c400017
    ctx->pc = 0x291DA4u;
    {
        const bool branch_taken_0x291da4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x291DA8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x291da4) {
            ctx->pc = 0x291E04u;
            goto label_291e04;
        }
    }
    ctx->pc = 0x291DACu;
    // 0x291dac: 0xc084876
    ctx->pc = 0x291DACu;
    SET_GPR_U32(ctx, 31, 0x291DB4u);
    ctx->pc = 0x291DB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2121D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeModel_0x2121d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291DB4u; }
    }
    if (ctx->pc != 0x291DB4u) { return; }
    ctx->pc = 0x291DB4u;
    // 0x291db4: 0x220202d
    ctx->pc = 0x291db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291db8: 0x282d
    ctx->pc = 0x291db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291dbc: 0x40302d
    ctx->pc = 0x291dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291dc0: 0x40382d
    ctx->pc = 0x291dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291dc4: 0xc0b1b56
    ctx->pc = 0x291DC4u;
    SET_GPR_U32(ctx, 31, 0x291DCCu);
    ctx->pc = 0x291DC8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C6D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Sub_0x2c6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291DCCu; }
    }
    if (ctx->pc != 0x291DCCu) { return; }
    ctx->pc = 0x291DCCu;
    // 0x291dcc: 0x1c40000d
    ctx->pc = 0x291DCCu;
    {
        const bool branch_taken_0x291dcc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x291DD0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x291dcc) {
            ctx->pc = 0x291E04u;
            goto label_291e04;
        }
    }
    ctx->pc = 0x291DD4u;
    // 0x291dd4: 0x220202d
    ctx->pc = 0x291dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291dd8: 0xc0b1bb4
    ctx->pc = 0x291DD8u;
    SET_GPR_U32(ctx, 31, 0x291DE0u);
    ctx->pc = 0x291DDCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291DE0u; }
    }
    if (ctx->pc != 0x291DE0u) { return; }
    ctx->pc = 0x291DE0u;
    // 0x291de0: 0x10000008
    ctx->pc = 0x291DE0u;
    {
        const bool branch_taken_0x291de0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x291DE4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x291de0) {
            ctx->pc = 0x291E04u;
            goto label_291e04;
        }
    }
    ctx->pc = 0x291DE8u;
label_291de8:
    // 0x291de8: 0x10000005
    ctx->pc = 0x291DE8u;
    {
        const bool branch_taken_0x291de8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x291DECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x291de8) {
            ctx->pc = 0x291E00u;
            goto label_291e00;
        }
    }
    ctx->pc = 0x291DF0u;
label_291df0:
    // 0x291df0: 0x26050010
    ctx->pc = 0x291df0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 16));
    // 0x291df4: 0x86060044
    ctx->pc = 0x291df4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x291df8: 0xc09e6d2
    ctx->pc = 0x291DF8u;
    SET_GPR_U32(ctx, 31, 0x291E00u);
    ctx->pc = 0x291DFCu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    ctx->pc = 0x279B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCustomEffect_0x279b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E00u; }
    }
    if (ctx->pc != 0x291E00u) { return; }
    ctx->pc = 0x291E00u;
label_291e00:
    // 0x291e00: 0xae020008
    ctx->pc = 0x291e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_291e04:
    // 0x291e04: 0x8e02000c
    ctx->pc = 0x291e04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_291e08:
    // 0x291e08: 0x4410012
    ctx->pc = 0x291E08u;
    {
        const bool branch_taken_0x291e08 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x291E0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x291e08) {
            ctx->pc = 0x291E54u;
            goto label_291e54;
        }
    }
    ctx->pc = 0x291E10u;
    // 0x291e10: 0x82020020
    ctx->pc = 0x291e10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x291e14: 0x1040000c
    ctx->pc = 0x291E14u;
    {
        const bool branch_taken_0x291e14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x291E18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x291e14) {
            ctx->pc = 0x291E48u;
            goto label_291e48;
        }
    }
    ctx->pc = 0x291E1Cu;
    // 0x291e1c: 0x8c42e7c8
    ctx->pc = 0x291e1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x291e20: 0x3a0202d
    ctx->pc = 0x291e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e24: 0x26050020
    ctx->pc = 0x291e24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 32));
    // 0x291e28: 0xc0b6252
    ctx->pc = 0x291E28u;
    SET_GPR_U32(ctx, 31, 0x291E30u);
    ctx->pc = 0x291E2Cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E30u; }
    }
    if (ctx->pc != 0x291E30u) { return; }
    ctx->pc = 0x291E30u;
    // 0x291e30: 0x3a0202d
    ctx->pc = 0x291e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e34: 0x282d
    ctx->pc = 0x291e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e38: 0xc088108
    ctx->pc = 0x291E38u;
    SET_GPR_U32(ctx, 31, 0x291E40u);
    ctx->pc = 0x291E3Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E40u; }
    }
    if (ctx->pc != 0x291E40u) { return; }
    ctx->pc = 0x291E40u;
    // 0x291e40: 0x10000003
    ctx->pc = 0x291E40u;
    {
        const bool branch_taken_0x291e40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x291E44u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x291e40) {
            ctx->pc = 0x291E50u;
            goto label_291e50;
        }
    }
    ctx->pc = 0x291E48u;
label_291e48:
    // 0x291e48: 0x2402ffff
    ctx->pc = 0x291e48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291e4c: 0xae02000c
    ctx->pc = 0x291e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_291e50:
    // 0x291e50: 0x260202d
    ctx->pc = 0x291e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_291e54:
    // 0x291e54: 0x8e050004
    ctx->pc = 0x291e54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x291e58: 0xc0a474c
    ctx->pc = 0x291E58u;
    SET_GPR_U32(ctx, 31, 0x291E60u);
    ctx->pc = 0x291E5Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x291D30u;
    goto label_291d30;
    ctx->pc = 0x291E60u;
label_291e60:
    // 0x291e60: 0xdfbf0060
    ctx->pc = 0x291e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x291e64: 0xdfb30050
    ctx->pc = 0x291e64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x291e68: 0xdfb20040
    ctx->pc = 0x291e68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x291e6c: 0xdfb10030
    ctx->pc = 0x291e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291e70: 0xdfb00020
    ctx->pc = 0x291e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291e74: 0x3e00008
    ctx->pc = 0x291E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291E78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x291D30u: goto label_291d30;
            case 0x291DE8u: goto label_291de8;
            case 0x291DF0u: goto label_291df0;
            case 0x291E00u: goto label_291e00;
            case 0x291E04u: goto label_291e04;
            case 0x291E08u: goto label_291e08;
            case 0x291E48u: goto label_291e48;
            case 0x291E50u: goto label_291e50;
            case 0x291E54u: goto label_291e54;
            case 0x291E60u: goto label_291e60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x291E7Cu;
}
