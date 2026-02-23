#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: turnTargetSub__10PeopleTaskFP11tagNLpoint3i
// Address: 0x209d10 - 0x209e40
void turnTargetSub__10PeopleTaskFP11tagNLpoint3i_0x209d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("turnTargetSub__10PeopleTaskFP11tagNLpoint3i");


    ctx->pc = 0x209d10u;

    // 0x209d10: 0x27bdffa0
    ctx->pc = 0x209d10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x209d14: 0x7fbf0030
    ctx->pc = 0x209d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x209d18: 0x7fb20020
    ctx->pc = 0x209d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x209d1c: 0x7fb10010
    ctx->pc = 0x209d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x209d20: 0x7fb00000
    ctx->pc = 0x209d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x209d24: 0x70809628
    ctx->pc = 0x209d24u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x209d28: 0x70a08e28
    ctx->pc = 0x209d28u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x209d2c: 0xc06c20d
    ctx->pc = 0x209D2Cu;
    SET_GPR_U32(ctx, 31, 0x209D34u);
    ctx->pc = 0x209D30u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D34u; }
        else if (ctx->pc != 0x209D34u) { ctx->pc = 0x209D34u; }
    }
    if (ctx->pc != 0x209D34u) { return; }
    ctx->pc = 0x209D34u;
    // 0x209d34: 0x8e420030
    ctx->pc = 0x209d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x209d38: 0x8c420028
    ctx->pc = 0x209d38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x209d3c: 0xc06c0fb
    ctx->pc = 0x209D3Cu;
    SET_GPR_U32(ctx, 31, 0x209D44u);
    ctx->pc = 0x209D40u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D44u; }
        else if (ctx->pc != 0x209D44u) { ctx->pc = 0x209D44u; }
    }
    if (ctx->pc != 0x209D44u) { return; }
    ctx->pc = 0x209D44u;
    // 0x209d44: 0x8e420030
    ctx->pc = 0x209d44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x209d48: 0x8c42002c
    ctx->pc = 0x209d48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x209d4c: 0xc06c157
    ctx->pc = 0x209D4Cu;
    SET_GPR_U32(ctx, 31, 0x209D54u);
    ctx->pc = 0x209D50u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D54u; }
        else if (ctx->pc != 0x209D54u) { ctx->pc = 0x209D54u; }
    }
    if (ctx->pc != 0x209D54u) { return; }
    ctx->pc = 0x209D54u;
    // 0x209d54: 0x8e420030
    ctx->pc = 0x209d54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x209d58: 0x8c420024
    ctx->pc = 0x209d58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x209d5c: 0xc06c09f
    ctx->pc = 0x209D5Cu;
    SET_GPR_U32(ctx, 31, 0x209D64u);
    ctx->pc = 0x209D60u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D64u; }
        else if (ctx->pc != 0x209D64u) { ctx->pc = 0x209D64u; }
    }
    if (ctx->pc != 0x209D64u) { return; }
    ctx->pc = 0x209D64u;
    // 0x209d64: 0x8e420030
    ctx->pc = 0x209d64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x209d68: 0xc6200000
    ctx->pc = 0x209d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209d6c: 0x27a40040
    ctx->pc = 0x209d6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x209d70: 0x27a50050
    ctx->pc = 0x209d70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x209d74: 0xc4410000
    ctx->pc = 0x209d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209d78: 0x46010001
    ctx->pc = 0x209d78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x209d7c: 0xe7a00040
    ctx->pc = 0x209d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x209d80: 0x8e420030
    ctx->pc = 0x209d80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x209d84: 0xc6200004
    ctx->pc = 0x209d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209d88: 0xc4410004
    ctx->pc = 0x209d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209d8c: 0x46010001
    ctx->pc = 0x209d8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x209d90: 0xe7a00044
    ctx->pc = 0x209d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x209d94: 0x8e420030
    ctx->pc = 0x209d94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x209d98: 0xc6200008
    ctx->pc = 0x209d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209d9c: 0xc4410008
    ctx->pc = 0x209d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209da0: 0x46010001
    ctx->pc = 0x209da0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x209da4: 0xc06bf00
    ctx->pc = 0x209DA4u;
    SET_GPR_U32(ctx, 31, 0x209DACu);
    ctx->pc = 0x209DA8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209DACu; }
        else if (ctx->pc != 0x209DACu) { ctx->pc = 0x209DACu; }
    }
    if (ctx->pc != 0x209DACu) { return; }
    ctx->pc = 0x209DACu;
    // 0x209dac: 0xc7a00050
    ctx->pc = 0x209dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209db0: 0xe6200000
    ctx->pc = 0x209db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x209db4: 0xc7a00054
    ctx->pc = 0x209db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209db8: 0xe6200004
    ctx->pc = 0x209db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x209dbc: 0xc7a00058
    ctx->pc = 0x209dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209dc0: 0xe6200008
    ctx->pc = 0x209dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x209dc4: 0xc62d0008
    ctx->pc = 0x209dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x209dc8: 0xc069e68
    ctx->pc = 0x209DC8u;
    SET_GPR_U32(ctx, 31, 0x209DD0u);
    ctx->pc = 0x209DCCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209DD0u; }
        else if (ctx->pc != 0x209DD0u) { ctx->pc = 0x209DD0u; }
    }
    if (ctx->pc != 0x209DD0u) { return; }
    ctx->pc = 0x209DD0u;
    // 0x209dd0: 0x22c3c
    ctx->pc = 0x209dd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x209dd4: 0x52c3f
    ctx->pc = 0x209dd4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x209dd8: 0x205082a
    ctx->pc = 0x209dd8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 5)));
    // 0x209ddc: 0x10200006
    ctx->pc = 0x209DDCu;
    {
        const bool branch_taken_0x209ddc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x209DE0u;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        if (branch_taken_0x209ddc) {
            ctx->pc = 0x209DF8u;
            goto label_209df8;
        }
    }
    ctx->pc = 0x209DE4u;
    // 0x209de4: 0x8e440030
    ctx->pc = 0x209de4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x209de8: 0x8c830028
    ctx->pc = 0x209de8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x209dec: 0x701821
    ctx->pc = 0x209decu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x209df0: 0x1000000d
    ctx->pc = 0x209DF0u;
    {
        const bool branch_taken_0x209df0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209DF4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
        if (branch_taken_0x209df0) {
            ctx->pc = 0x209E28u;
            goto label_209e28;
        }
    }
    ctx->pc = 0x209DF8u;
label_209df8:
    // 0x209df8: 0xa3082a
    ctx->pc = 0x209df8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x209dfc: 0x10200006
    ctx->pc = 0x209DFCu;
    {
        const bool branch_taken_0x209dfc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x209dfc) {
            ctx->pc = 0x209E18u;
            goto label_209e18;
        }
    }
    ctx->pc = 0x209E04u;
    // 0x209e04: 0x8e440030
    ctx->pc = 0x209e04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x209e08: 0x8c830028
    ctx->pc = 0x209e08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x209e0c: 0x701823
    ctx->pc = 0x209e0cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x209e10: 0x10000005
    ctx->pc = 0x209E10u;
    {
        const bool branch_taken_0x209e10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209E14u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
        if (branch_taken_0x209e10) {
            ctx->pc = 0x209E28u;
            goto label_209e28;
        }
    }
    ctx->pc = 0x209E18u;
label_209e18:
    // 0x209e18: 0x8e440030
    ctx->pc = 0x209e18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x209e1c: 0x8c830028
    ctx->pc = 0x209e1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x209e20: 0x651821
    ctx->pc = 0x209e20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x209e24: 0xac830028
    ctx->pc = 0x209e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
label_209e28:
    // 0x209e28: 0x7bbf0030
    ctx->pc = 0x209e28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209e2c: 0x7bb20020
    ctx->pc = 0x209e2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209e30: 0x7bb10010
    ctx->pc = 0x209e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209e34: 0x7bb00000
    ctx->pc = 0x209e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209e38: 0x3e00008
    ctx->pc = 0x209E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209E3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209DF8u: goto label_209df8;
            case 0x209E18u: goto label_209e18;
            case 0x209E28u: goto label_209e28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x209E40u;
}
