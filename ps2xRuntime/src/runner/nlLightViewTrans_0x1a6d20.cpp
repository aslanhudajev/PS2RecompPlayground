#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLightViewTrans
// Address: 0x1a6d20 - 0x1a70c4
void nlLightViewTrans_0x1a6d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLightViewTrans");


    ctx->pc = 0x1a6d20u;

    // 0x1a6d20: 0x27bdff80
    ctx->pc = 0x1a6d20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a6d24: 0x7fbf0070
    ctx->pc = 0x1a6d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1a6d28: 0x7fb60060
    ctx->pc = 0x1a6d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a6d2c: 0x7fb50050
    ctx->pc = 0x1a6d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a6d30: 0x7fb40040
    ctx->pc = 0x1a6d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a6d34: 0x7fb30030
    ctx->pc = 0x1a6d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a6d38: 0x7fb20020
    ctx->pc = 0x1a6d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a6d3c: 0x7fb10010
    ctx->pc = 0x1a6d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a6d40: 0x7fb00000
    ctx->pc = 0x1a6d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a6d44: 0x24120001
    ctx->pc = 0x1a6d44u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6d48: 0x3c020030
    ctx->pc = 0x1a6d48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a6d4c: 0x72409e28
    ctx->pc = 0x1a6d4cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a6d50: 0x7000a628
    ctx->pc = 0x1a6d50u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a6d54: 0x70008628
    ctx->pc = 0x1a6d54u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a6d58: 0x34168000
    ctx->pc = 0x1a6d58u;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1a6d5c: 0x70008e28
    ctx->pc = 0x1a6d5cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a6d60: 0x24553d30
    ctx->pc = 0x1a6d60u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 15664));
label_1a6d64:
    // 0x1a6d64: 0x86a20000
    ctx->pc = 0x1a6d64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1a6d68: 0x50400020
    ctx->pc = 0x1A6D68u;
    {
        const bool branch_taken_0x1a6d68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a6d68) {
            ctx->pc = 0x1A6D6Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x1A6DECu;
            goto label_1a6dec;
        }
    }
    ctx->pc = 0x1A6D70u;
    // 0x1a6d70: 0x86a30002
    ctx->pc = 0x1a6d70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x1a6d74: 0x24020004
    ctx->pc = 0x1a6d74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6d78: 0x10620011
    ctx->pc = 0x1A6D78u;
    {
        const bool branch_taken_0x1a6d78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A6D7Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 80));
        if (branch_taken_0x1a6d78) {
            ctx->pc = 0x1A6DC0u;
            goto label_1a6dc0;
        }
    }
    ctx->pc = 0x1A6D80u;
    // 0x1a6d80: 0x24020003
    ctx->pc = 0x1a6d80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a6d84: 0x10620008
    ctx->pc = 0x1A6D84u;
    {
        const bool branch_taken_0x1a6d84 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A6D88u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 64));
        if (branch_taken_0x1a6d84) {
            ctx->pc = 0x1A6DA8u;
            goto label_1a6da8;
        }
    }
    ctx->pc = 0x1A6D8Cu;
    // 0x1a6d8c: 0x24020002
    ctx->pc = 0x1a6d8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6d90: 0x26a40050
    ctx->pc = 0x1a6d90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 80));
    // 0x1a6d94: 0xc06bf2b
    ctx->pc = 0x1A6D94u;
    SET_GPR_U32(ctx, 31, 0x1A6D9Cu);
    ctx->pc = 0x1A6D98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 128));
    ctx->pc = 0x1AFCACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFCAC_0x1afcac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D9Cu; }
        else if (ctx->pc != 0x1A6D9Cu) { ctx->pc = 0x1A6D9Cu; }
    }
    if (ctx->pc != 0x1A6D9Cu) { return; }
    ctx->pc = 0x1A6D9Cu;
    // 0x1a6d9c: 0x10000011
    ctx->pc = 0x1A6D9Cu;
    {
        const bool branch_taken_0x1a6d9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A6DA0u;
        SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        if (branch_taken_0x1a6d9c) {
            ctx->pc = 0x1A6DE4u;
            goto label_1a6de4;
        }
    }
    ctx->pc = 0x1A6DA4u;
    // 0x1a6da4: 0x26a40040
    ctx->pc = 0x1a6da4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 64));
label_1a6da8:
    // 0x1a6da8: 0xc06bf00
    ctx->pc = 0x1A6DA8u;
    SET_GPR_U32(ctx, 31, 0x1A6DB0u);
    ctx->pc = 0x1A6DACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 112));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6DB0u; }
        else if (ctx->pc != 0x1A6DB0u) { ctx->pc = 0x1A6DB0u; }
    }
    if (ctx->pc != 0x1A6DB0u) { return; }
    ctx->pc = 0x1A6DB0u;
    // 0x1a6db0: 0x70009628
    ctx->pc = 0x1a6db0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a6db4: 0x1000000a
    ctx->pc = 0x1A6DB4u;
    {
        const bool branch_taken_0x1a6db4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A6DB8u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a6db4) {
            ctx->pc = 0x1A6DE0u;
            goto label_1a6de0;
        }
    }
    ctx->pc = 0x1A6DBCu;
    // 0x1a6dbc: 0x26a40050
    ctx->pc = 0x1a6dbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 80));
label_1a6dc0:
    // 0x1a6dc0: 0xc06bf2b
    ctx->pc = 0x1A6DC0u;
    SET_GPR_U32(ctx, 31, 0x1A6DC8u);
    ctx->pc = 0x1A6DC4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 128));
    ctx->pc = 0x1AFCACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFCAC_0x1afcac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6DC8u; }
        else if (ctx->pc != 0x1A6DC8u) { ctx->pc = 0x1A6DC8u; }
    }
    if (ctx->pc != 0x1A6DC8u) { return; }
    ctx->pc = 0x1A6DC8u;
    // 0x1a6dc8: 0x26a40040
    ctx->pc = 0x1a6dc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 64));
    // 0x1a6dcc: 0xc06bf00
    ctx->pc = 0x1A6DCCu;
    SET_GPR_U32(ctx, 31, 0x1A6DD4u);
    ctx->pc = 0x1A6DD0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 112));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6DD4u; }
        else if (ctx->pc != 0x1A6DD4u) { ctx->pc = 0x1A6DD4u; }
    }
    if (ctx->pc != 0x1A6DD4u) { return; }
    ctx->pc = 0x1A6DD4u;
    // 0x1a6dd4: 0x70009628
    ctx->pc = 0x1a6dd4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a6dd8: 0x70009e28
    ctx->pc = 0x1a6dd8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a6ddc: 0x0
    ctx->pc = 0x1a6ddcu;
    // NOP
label_1a6de0:
    // 0x1a6de0: 0x296a025
    ctx->pc = 0x1a6de0u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_1a6de4:
    // 0x1a6de4: 0x16b043
    ctx->pc = 0x1a6de4u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 22), 1));
    // 0x1a6de8: 0x26310001
    ctx->pc = 0x1a6de8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1a6dec:
    // 0x1a6dec: 0x2a220004
    ctx->pc = 0x1a6decu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x1a6df0: 0x1440ffdc
    ctx->pc = 0x1A6DF0u;
    {
        const bool branch_taken_0x1a6df0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A6DF4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 208));
        if (branch_taken_0x1a6df0) {
            ctx->pc = 0x1A6D64u;
            goto label_1a6d64;
        }
    }
    ctx->pc = 0x1A6DF8u;
    // 0x1a6df8: 0x12400005
    ctx->pc = 0x1A6DF8u;
    {
        const bool branch_taken_0x1a6df8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a6df8) {
            ctx->pc = 0x1A6E10u;
            goto label_1a6e10;
        }
    }
    ctx->pc = 0x1A6E00u;
    // 0x1a6e00: 0x34028000
    ctx->pc = 0x1a6e00u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1a6e04: 0x12820002
    ctx->pc = 0x1A6E04u;
    {
        const bool branch_taken_0x1a6e04 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a6e04) {
            ctx->pc = 0x1A6E10u;
            goto label_1a6e10;
        }
    }
    ctx->pc = 0x1A6E0Cu;
    // 0x1a6e0c: 0x70009628
    ctx->pc = 0x1a6e0cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a6e10:
    // 0x1a6e10: 0x3c020030
    ctx->pc = 0x1a6e10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a6e14: 0x24513ab0
    ctx->pc = 0x1a6e14u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 15024));
    // 0x1a6e18: 0xae340000
    ctx->pc = 0x1a6e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x1a6e1c: 0x12400002
    ctx->pc = 0x1A6E1Cu;
    {
        const bool branch_taken_0x1a6e1c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A6E20u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a6e1c) {
            ctx->pc = 0x1A6E28u;
            goto label_1a6e28;
        }
    }
    ctx->pc = 0x1A6E24u;
    // 0x1a6e24: 0x34420001
    ctx->pc = 0x1a6e24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_1a6e28:
    // 0x1a6e28: 0x12600002
    ctx->pc = 0x1A6E28u;
    {
        const bool branch_taken_0x1a6e28 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a6e28) {
            ctx->pc = 0x1A6E34u;
            goto label_1a6e34;
        }
    }
    ctx->pc = 0x1A6E30u;
    // 0x1a6e30: 0x34420002
    ctx->pc = 0x1a6e30u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
label_1a6e34:
    // 0x1a6e34: 0xae220004
    ctx->pc = 0x1a6e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1a6e38: 0x3c010030
    ctx->pc = 0x1a6e38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6e3c: 0xc4203d24
    ctx->pc = 0x1a6e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6e40: 0x3c020030
    ctx->pc = 0x1a6e40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a6e44: 0x70009e28
    ctx->pc = 0x1a6e44u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a6e48: 0x24523d30
    ctx->pc = 0x1a6e48u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 15664));
    // 0x1a6e4c: 0xe6200010
    ctx->pc = 0x1a6e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1a6e50: 0x3c010030
    ctx->pc = 0x1a6e50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6e54: 0xc4203d28
    ctx->pc = 0x1a6e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6e58: 0xe6200014
    ctx->pc = 0x1a6e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1a6e5c: 0x3c010030
    ctx->pc = 0x1a6e5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6e60: 0xc4203d2c
    ctx->pc = 0x1a6e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6e64: 0xe6200018
    ctx->pc = 0x1a6e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1a6e68: 0x3c010030
    ctx->pc = 0x1a6e68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6e6c: 0xc4203d20
    ctx->pc = 0x1a6e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6e70: 0xe620001c
    ctx->pc = 0x1a6e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x1a6e74: 0x26310020
    ctx->pc = 0x1a6e74u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 32));
label_1a6e78:
    // 0x1a6e78: 0x86430000
    ctx->pc = 0x1a6e78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a6e7c: 0x5060004f
    ctx->pc = 0x1A6E7Cu;
    {
        const bool branch_taken_0x1a6e7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a6e7c) {
            ctx->pc = 0x1A6E80u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x1A6FBCu;
            goto label_1a6fbc;
        }
    }
    ctx->pc = 0x1A6E84u;
    // 0x1a6e84: 0x24020001
    ctx->pc = 0x1a6e84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6e88: 0xc6400024
    ctx->pc = 0x1a6e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6e8c: 0x24020004
    ctx->pc = 0x1a6e8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6e90: 0xe6200000
    ctx->pc = 0x1a6e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1a6e94: 0xc6400028
    ctx->pc = 0x1a6e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6e98: 0xe6200004
    ctx->pc = 0x1a6e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1a6e9c: 0xc640002c
    ctx->pc = 0x1a6e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6ea0: 0xe6200008
    ctx->pc = 0x1a6ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1a6ea4: 0x86430002
    ctx->pc = 0x1a6ea4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1a6ea8: 0xae23000c
    ctx->pc = 0x1a6ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1a6eac: 0xc6400034
    ctx->pc = 0x1a6eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6eb0: 0xe6200010
    ctx->pc = 0x1a6eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1a6eb4: 0xc6400038
    ctx->pc = 0x1a6eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6eb8: 0xe6200014
    ctx->pc = 0x1a6eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1a6ebc: 0xc640003c
    ctx->pc = 0x1a6ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6ec0: 0xe6200018
    ctx->pc = 0x1a6ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1a6ec4: 0xc6400030
    ctx->pc = 0x1a6ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6ec8: 0xe620001c
    ctx->pc = 0x1a6ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x1a6ecc: 0x86430002
    ctx->pc = 0x1a6eccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1a6ed0: 0x1062001c
    ctx->pc = 0x1A6ED0u;
    {
        const bool branch_taken_0x1a6ed0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A6ED4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 80));
        if (branch_taken_0x1a6ed0) {
            ctx->pc = 0x1A6F44u;
            goto label_1a6f44;
        }
    }
    ctx->pc = 0x1A6ED8u;
    // 0x1a6ed8: 0x24020003
    ctx->pc = 0x1a6ed8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a6edc: 0x10620008
    ctx->pc = 0x1A6EDCu;
    {
        const bool branch_taken_0x1a6edc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A6EE0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1a6edc) {
            ctx->pc = 0x1A6F00u;
            goto label_1a6f00;
        }
    }
    ctx->pc = 0x1A6EE4u;
    // 0x1a6ee4: 0x24020002
    ctx->pc = 0x1a6ee4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6ee8: 0x26440050
    ctx->pc = 0x1a6ee8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 80));
    // 0x1a6eec: 0xc06bf2b
    ctx->pc = 0x1A6EECu;
    SET_GPR_U32(ctx, 31, 0x1A6EF4u);
    ctx->pc = 0x1A6EF0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 32));
    ctx->pc = 0x1AFCACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFCAC_0x1afcac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6EF4u; }
        else if (ctx->pc != 0x1A6EF4u) { ctx->pc = 0x1A6EF4u; }
    }
    if (ctx->pc != 0x1A6EF4u) { return; }
    ctx->pc = 0x1A6EF4u;
    // 0x1a6ef4: 0x1000002e
    ctx->pc = 0x1A6EF4u;
    {
        const bool branch_taken_0x1a6ef4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A6EF8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 80));
        if (branch_taken_0x1a6ef4) {
            ctx->pc = 0x1A6FB0u;
            goto label_1a6fb0;
        }
    }
    ctx->pc = 0x1A6EFCu;
    // 0x1a6efc: 0x3c02bf80
    ctx->pc = 0x1a6efcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_1a6f00:
    // 0x1a6f00: 0xae22002c
    ctx->pc = 0x1a6f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x1a6f04: 0x26440040
    ctx->pc = 0x1a6f04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a6f08: 0xc06bf00
    ctx->pc = 0x1A6F08u;
    SET_GPR_U32(ctx, 31, 0x1A6F10u);
    ctx->pc = 0x1A6F0Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 48));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F10u; }
        else if (ctx->pc != 0x1A6F10u) { ctx->pc = 0x1A6F10u; }
    }
    if (ctx->pc != 0x1A6F10u) { return; }
    ctx->pc = 0x1A6F10u;
    // 0x1a6f10: 0x3c023f80
    ctx->pc = 0x1a6f10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1a6f14: 0xae22003c
    ctx->pc = 0x1a6f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x1a6f18: 0xc640005c
    ctx->pc = 0x1a6f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6f1c: 0xe6200040
    ctx->pc = 0x1a6f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x1a6f20: 0xc6400060
    ctx->pc = 0x1a6f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6f24: 0xe6200044
    ctx->pc = 0x1a6f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x1a6f28: 0xc6400064
    ctx->pc = 0x1a6f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6f2c: 0xe6200048
    ctx->pc = 0x1a6f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x1a6f30: 0xc64000bc
    ctx->pc = 0x1a6f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6f34: 0xe620004c
    ctx->pc = 0x1a6f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x1a6f38: 0x1000001d
    ctx->pc = 0x1A6F38u;
    {
        const bool branch_taken_0x1a6f38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A6F3Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 80));
        if (branch_taken_0x1a6f38) {
            ctx->pc = 0x1A6FB0u;
            goto label_1a6fb0;
        }
    }
    ctx->pc = 0x1A6F40u;
    // 0x1a6f40: 0x26440050
    ctx->pc = 0x1a6f40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 80));
label_1a6f44:
    // 0x1a6f44: 0xc06bf2b
    ctx->pc = 0x1A6F44u;
    SET_GPR_U32(ctx, 31, 0x1A6F4Cu);
    ctx->pc = 0x1A6F48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 32));
    ctx->pc = 0x1AFCACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFCAC_0x1afcac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F4Cu; }
        else if (ctx->pc != 0x1A6F4Cu) { ctx->pc = 0x1A6F4Cu; }
    }
    if (ctx->pc != 0x1A6F4Cu) { return; }
    ctx->pc = 0x1A6F4Cu;
    // 0x1a6f4c: 0xc6200020
    ctx->pc = 0x1a6f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6f50: 0x26440040
    ctx->pc = 0x1a6f50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a6f54: 0x26250030
    ctx->pc = 0x1a6f54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 48));
    // 0x1a6f58: 0x46000007
    ctx->pc = 0x1a6f58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a6f5c: 0xe6200020
    ctx->pc = 0x1a6f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1a6f60: 0xc6200024
    ctx->pc = 0x1a6f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6f64: 0x46000007
    ctx->pc = 0x1a6f64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a6f68: 0xe6200024
    ctx->pc = 0x1a6f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x1a6f6c: 0xc6200028
    ctx->pc = 0x1a6f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6f70: 0x46000007
    ctx->pc = 0x1a6f70u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a6f74: 0xe6200028
    ctx->pc = 0x1a6f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x1a6f78: 0xc6400068
    ctx->pc = 0x1a6f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6f7c: 0xc06bf00
    ctx->pc = 0x1A6F7Cu;
    SET_GPR_U32(ctx, 31, 0x1A6F84u);
    ctx->pc = 0x1A6F80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F84u; }
        else if (ctx->pc != 0x1A6F84u) { ctx->pc = 0x1A6F84u; }
    }
    if (ctx->pc != 0x1A6F84u) { return; }
    ctx->pc = 0x1A6F84u;
    // 0x1a6f84: 0xc640006c
    ctx->pc = 0x1a6f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6f88: 0xe620003c
    ctx->pc = 0x1a6f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x1a6f8c: 0xc640005c
    ctx->pc = 0x1a6f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6f90: 0xe6200040
    ctx->pc = 0x1a6f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x1a6f94: 0xc6400060
    ctx->pc = 0x1a6f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6f98: 0xe6200044
    ctx->pc = 0x1a6f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x1a6f9c: 0xc6400064
    ctx->pc = 0x1a6f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6fa0: 0xe6200048
    ctx->pc = 0x1a6fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x1a6fa4: 0xc64000bc
    ctx->pc = 0x1a6fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6fa8: 0xe620004c
    ctx->pc = 0x1a6fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x1a6fac: 0x26310050
    ctx->pc = 0x1a6facu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 80));
label_1a6fb0:
    // 0x1a6fb0: 0x26100001
    ctx->pc = 0x1a6fb0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a6fb4: 0x0
    ctx->pc = 0x1a6fb4u;
    // NOP
    // 0x1a6fb8: 0x26730001
    ctx->pc = 0x1a6fb8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1a6fbc:
    // 0x1a6fbc: 0x2a620004
    ctx->pc = 0x1a6fbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
    // 0x1a6fc0: 0x1440ffad
    ctx->pc = 0x1A6FC0u;
    {
        const bool branch_taken_0x1a6fc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A6FC4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 208));
        if (branch_taken_0x1a6fc0) {
            ctx->pc = 0x1A6E78u;
            goto label_1a6e78;
        }
    }
    ctx->pc = 0x1A6FC8u;
    // 0x1a6fc8: 0x2a010003
    ctx->pc = 0x1a6fc8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 3));
    // 0x1a6fcc: 0x1020000e
    ctx->pc = 0x1A6FCCu;
    {
        const bool branch_taken_0x1a6fcc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a6fcc) {
            ctx->pc = 0x1A7008u;
            goto label_1a7008;
        }
    }
    ctx->pc = 0x1A6FD4u;
label_1a6fd4:
    // 0x1a6fd4: 0xae200000
    ctx->pc = 0x1a6fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1a6fd8: 0xae200004
    ctx->pc = 0x1a6fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1a6fdc: 0xae200008
    ctx->pc = 0x1a6fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1a6fe0: 0xae20000c
    ctx->pc = 0x1a6fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1a6fe4: 0xae200010
    ctx->pc = 0x1a6fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1a6fe8: 0xae200014
    ctx->pc = 0x1a6fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1a6fec: 0xae200018
    ctx->pc = 0x1a6fecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1a6ff0: 0x26100001
    ctx->pc = 0x1a6ff0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a6ff4: 0xae20001c
    ctx->pc = 0x1a6ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1a6ff8: 0x2a020003
    ctx->pc = 0x1a6ff8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 3));
    // 0x1a6ffc: 0x1440fff5
    ctx->pc = 0x1A6FFCu;
    {
        const bool branch_taken_0x1a6ffc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A7000u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 80));
        if (branch_taken_0x1a6ffc) {
            ctx->pc = 0x1A6FD4u;
            goto label_1a6fd4;
        }
    }
    ctx->pc = 0x1A7004u;
    // 0x1a7004: 0x0
    ctx->pc = 0x1a7004u;
    // NOP
label_1a7008:
    // 0x1a7008: 0xc069558
    ctx->pc = 0x1A7008u;
    SET_GPR_U32(ctx, 31, 0x1A7010u);
    ctx->pc = 0x1A5560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoStat_0x1a5560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7010u; }
        else if (ctx->pc != 0x1A7010u) { ctx->pc = 0x1A7010u; }
    }
    if (ctx->pc != 0x1A7010u) { return; }
    ctx->pc = 0x1A7010u;
    // 0x1a7010: 0x70408628
    ctx->pc = 0x1a7010u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7014: 0x16000004
    ctx->pc = 0x1A7014u;
    {
        const bool branch_taken_0x1a7014 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A7018u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x1a7014) {
            ctx->pc = 0x1A7028u;
            goto label_1a7028;
        }
    }
    ctx->pc = 0x1A701Cu;
    // 0x1a701c: 0xc0694bc
    ctx->pc = 0x1A701Cu;
    SET_GPR_U32(ctx, 31, 0x1A7024u);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7024u; }
        else if (ctx->pc != 0x1A7024u) { ctx->pc = 0x1A7024u; }
    }
    if (ctx->pc != 0x1A7024u) { return; }
    ctx->pc = 0x1A7024u;
    // 0x1a7024: 0x3c021000
    ctx->pc = 0x1a7024u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_1a7028:
    // 0x1a7028: 0x34420018
    ctx->pc = 0x1a7028u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 24));
    // 0x1a702c: 0x3c010030
    ctx->pc = 0x1a702cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a7030: 0xac223a90
    ctx->pc = 0x1a7030u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14992), GPR_U32(ctx, 2));
    // 0x1a7034: 0x3c010030
    ctx->pc = 0x1a7034u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a7038: 0xac203a94
    ctx->pc = 0x1a7038u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14996), GPR_U32(ctx, 0));
    // 0x1a703c: 0x3c010030
    ctx->pc = 0x1a703cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a7040: 0xac203a98
    ctx->pc = 0x1a7040u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15000), GPR_U32(ctx, 0));
    // 0x1a7044: 0x3c010030
    ctx->pc = 0x1a7044u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a7048: 0xc069528
    ctx->pc = 0x1A7048u;
    SET_GPR_U32(ctx, 31, 0x1A7050u);
    ctx->pc = 0x1A704Cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15004), GPR_U32(ctx, 0));
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7050u; }
        else if (ctx->pc != 0x1A7050u) { ctx->pc = 0x1A7050u; }
    }
    if (ctx->pc != 0x1A7050u) { return; }
    ctx->pc = 0x1A7050u;
label_1a7050:
    // 0x1a7050: 0x3c011001
    ctx->pc = 0x1a7050u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a7054: 0x8c23d000
    ctx->pc = 0x1a7054u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1a7058: 0x30630100
    ctx->pc = 0x1a7058u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1a705c: 0x0
    ctx->pc = 0x1a705cu;
    // NOP
    // 0x1a7060: 0x0
    ctx->pc = 0x1a7060u;
    // NOP
    // 0x1a7064: 0x1460fffa
    ctx->pc = 0x1A7064u;
    {
        const bool branch_taken_0x1a7064 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a7064) {
            ctx->pc = 0x1A7050u;
            goto label_1a7050;
        }
    }
    ctx->pc = 0x1A706Cu;
    // 0x1a706c: 0x70402628
    ctx->pc = 0x1a706cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7070: 0x3c020030
    ctx->pc = 0x1a7070u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a7074: 0x24453a90
    ctx->pc = 0x1a7074u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 14992));
    // 0x1a7078: 0xc06ac36
    ctx->pc = 0x1A7078u;
    SET_GPR_U32(ctx, 31, 0x1A7080u);
    ctx->pc = 0x1A707Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7080u; }
        else if (ctx->pc != 0x1A7080u) { ctx->pc = 0x1A7080u; }
    }
    if (ctx->pc != 0x1A7080u) { return; }
    ctx->pc = 0x1A7080u;
    // 0x1a7080: 0xc06952c
    ctx->pc = 0x1A7080u;
    SET_GPR_U32(ctx, 31, 0x1A7088u);
    ctx->pc = 0x1A7084u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7088u; }
        else if (ctx->pc != 0x1A7088u) { ctx->pc = 0x1A7088u; }
    }
    if (ctx->pc != 0x1A7088u) { return; }
    ctx->pc = 0x1A7088u;
    // 0x1a7088: 0x16000004
    ctx->pc = 0x1A7088u;
    {
        const bool branch_taken_0x1a7088 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a7088) {
            ctx->pc = 0x1A709Cu;
            goto label_1a709c;
        }
    }
    ctx->pc = 0x1A7090u;
    // 0x1a7090: 0x70002628
    ctx->pc = 0x1a7090u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a7094: 0xc0694e8
    ctx->pc = 0x1A7094u;
    SET_GPR_U32(ctx, 31, 0x1A709Cu);
    ctx->pc = 0x1A7098u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A709Cu; }
        else if (ctx->pc != 0x1A709Cu) { ctx->pc = 0x1A709Cu; }
    }
    if (ctx->pc != 0x1A709Cu) { return; }
    ctx->pc = 0x1A709Cu;
label_1a709c:
    // 0x1a709c: 0x7bbf0070
    ctx->pc = 0x1a709cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a70a0: 0x7bb60060
    ctx->pc = 0x1a70a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a70a4: 0x7bb50050
    ctx->pc = 0x1a70a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a70a8: 0x7bb40040
    ctx->pc = 0x1a70a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a70ac: 0x7bb30030
    ctx->pc = 0x1a70acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a70b0: 0x7bb20020
    ctx->pc = 0x1a70b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a70b4: 0x7bb10010
    ctx->pc = 0x1a70b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a70b8: 0x7bb00000
    ctx->pc = 0x1a70b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a70bc: 0x3e00008
    ctx->pc = 0x1A70BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A70C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6D64u: goto label_1a6d64;
            case 0x1A6DA8u: goto label_1a6da8;
            case 0x1A6DC0u: goto label_1a6dc0;
            case 0x1A6DE0u: goto label_1a6de0;
            case 0x1A6DE4u: goto label_1a6de4;
            case 0x1A6DECu: goto label_1a6dec;
            case 0x1A6E10u: goto label_1a6e10;
            case 0x1A6E28u: goto label_1a6e28;
            case 0x1A6E34u: goto label_1a6e34;
            case 0x1A6E78u: goto label_1a6e78;
            case 0x1A6F00u: goto label_1a6f00;
            case 0x1A6F44u: goto label_1a6f44;
            case 0x1A6FB0u: goto label_1a6fb0;
            case 0x1A6FBCu: goto label_1a6fbc;
            case 0x1A6FD4u: goto label_1a6fd4;
            case 0x1A7008u: goto label_1a7008;
            case 0x1A7028u: goto label_1a7028;
            case 0x1A7050u: goto label_1a7050;
            case 0x1A709Cu: goto label_1a709c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A70C4u;
}
