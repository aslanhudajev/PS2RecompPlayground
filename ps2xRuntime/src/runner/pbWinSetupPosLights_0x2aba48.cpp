#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbWinSetupPosLights
// Address: 0x2aba48 - 0x2abc88
void pbWinSetupPosLights_0x2aba48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aba48u;

    // 0x2aba48: 0x27bdff90
    ctx->pc = 0x2aba48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2aba4c: 0xffbf0040
    ctx->pc = 0x2aba4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2aba50: 0xffb30030
    ctx->pc = 0x2aba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2aba54: 0xffb20020
    ctx->pc = 0x2aba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2aba58: 0xffb10010
    ctx->pc = 0x2aba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2aba5c: 0xffb00000
    ctx->pc = 0x2aba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aba60: 0xe7b60060
    ctx->pc = 0x2aba60u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2aba64: 0xe7b50058
    ctx->pc = 0x2aba64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2aba68: 0xe7b40050
    ctx->pc = 0x2aba68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2aba6c: 0x3c020036
    ctx->pc = 0x2aba6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aba70: 0x8c52dee0
    ctx->pc = 0x2aba70u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aba74: 0x8e42001c
    ctx->pc = 0x2aba74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2aba78: 0x8c5100e0
    ctx->pc = 0x2aba78u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x2aba7c: 0x1220002a
    ctx->pc = 0x2ABA7Cu;
    {
        const bool branch_taken_0x2aba7c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ABA80u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2aba7c) {
            ctx->pc = 0x2ABB28u;
            goto label_2abb28;
        }
    }
    ctx->pc = 0x2ABA84u;
    // 0x2aba84: 0x3c014280
    ctx->pc = 0x2aba84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17024 << 16));
    // 0x2aba88: 0x4481b000
    ctx->pc = 0x2aba88u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x2aba8c: 0x3c013f80
    ctx->pc = 0x2aba8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2aba90: 0x4481a800
    ctx->pc = 0x2aba90u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x2aba94: 0x3c014100
    ctx->pc = 0x2aba94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16640 << 16));
    // 0x2aba98: 0x4481a000
    ctx->pc = 0x2aba98u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2aba9c: 0x0
    ctx->pc = 0x2aba9cu;
    // NOP
label_2abaa0:
    // 0x2abaa0: 0x138140
    ctx->pc = 0x2abaa0u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 19), 5));
    // 0x2abaa4: 0x26100110
    ctx->pc = 0x2abaa4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 272));
    // 0x2abaa8: 0x8e42001c
    ctx->pc = 0x2abaa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2abaac: 0x2028021
    ctx->pc = 0x2abaacu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2abab0: 0x200202d
    ctx->pc = 0x2abab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abab4: 0xc0b97b4
    ctx->pc = 0x2ABAB4u;
    SET_GPR_U32(ctx, 31, 0x2ABABCu);
    ctx->pc = 0x2ABAB8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x2E5ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVectorXYZ_0x2e5ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABABCu; }
    }
    if (ctx->pc != 0x2ABABCu) { return; }
    ctx->pc = 0x2ABABCu;
    // 0x2ababc: 0x26040010
    ctx->pc = 0x2ababcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
    // 0x2abac0: 0x3c014300
    ctx->pc = 0x2abac0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17152 << 16));
    // 0x2abac4: 0x44816000
    ctx->pc = 0x2abac4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2abac8: 0xc0b97c8
    ctx->pc = 0x2ABAC8u;
    SET_GPR_U32(ctx, 31, 0x2ABAD0u);
    ctx->pc = 0x2ABACCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x2e5f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABAD0u; }
    }
    if (ctx->pc != 0x2ABAD0u) { return; }
    ctx->pc = 0x2ABAD0u;
    // 0x2abad0: 0xc6200020
    ctx->pc = 0x2abad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abad4: 0x46000002
    ctx->pc = 0x2abad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2abad8: 0x46160002
    ctx->pc = 0x2abad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2abadc: 0x0
    ctx->pc = 0x2abadcu;
    // NOP
    // 0x2abae0: 0x0
    ctx->pc = 0x2abae0u;
    // NOP
    // 0x2abae4: 0x4600a803
    ctx->pc = 0x2abae4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[0];
    // 0x2abae8: 0xe600000c
    ctx->pc = 0x2abae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2abaec: 0x8e42001c
    ctx->pc = 0x2abaecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2abaf0: 0xc6200024
    ctx->pc = 0x2abaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abaf4: 0xc44100c0
    ctx->pc = 0x2abaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2abaf8: 0x46010002
    ctx->pc = 0x2abaf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2abafc: 0x46140002
    ctx->pc = 0x2abafcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2abb00: 0xe600001c
    ctx->pc = 0x2abb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2abb04: 0x8e43001c
    ctx->pc = 0x2abb04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2abb08: 0x131080
    ctx->pc = 0x2abb08u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x2abb0c: 0x621821
    ctx->pc = 0x2abb0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2abb10: 0xc6200020
    ctx->pc = 0x2abb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abb14: 0xe4600290
    ctx->pc = 0x2abb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 656), bits); }
    // 0x2abb18: 0x8e310028
    ctx->pc = 0x2abb18u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2abb1c: 0x1620ffe0
    ctx->pc = 0x2ABB1Cu;
    {
        const bool branch_taken_0x2abb1c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2ABB20u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x2abb1c) {
            ctx->pc = 0x2ABAA0u;
            goto label_2abaa0;
        }
    }
    ctx->pc = 0x2ABB24u;
    // 0x2abb24: 0x8e42001c
    ctx->pc = 0x2abb24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2abb28:
    // 0x2abb28: 0xac5300c8
    ctx->pc = 0x2abb28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 19));
    // 0x2abb2c: 0x8e420004
    ctx->pc = 0x2abb2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2abb30: 0xc44c0030
    ctx->pc = 0x2abb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2abb34: 0x460c6042
    ctx->pc = 0x2abb34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2abb38: 0xc4400038
    ctx->pc = 0x2abb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abb3c: 0x46000082
    ctx->pc = 0x2abb3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2abb40: 0x46020840
    ctx->pc = 0x2abb40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2abb44: 0x0
    ctx->pc = 0x2abb44u;
    // NOP
    // 0x2abb48: 0x0
    ctx->pc = 0x2abb48u;
    // NOP
    // 0x2abb4c: 0x46010004
    ctx->pc = 0x2abb4cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2abb50: 0x46000032
    ctx->pc = 0x2abb50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2abb54: 0x0
    ctx->pc = 0x2abb54u;
    // NOP
    // 0x2abb58: 0x45030006
    ctx->pc = 0x2ABB58u;
    {
        const bool branch_taken_0x2abb58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2abb58) {
            ctx->pc = 0x2ABB5Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x2ABB74u;
            goto label_2abb74;
        }
    }
    ctx->pc = 0x2ABB60u;
    // 0x2abb60: 0x460c6302
    ctx->pc = 0x2abb60u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2abb64: 0xc0ba284
    ctx->pc = 0x2ABB64u;
    SET_GPR_U32(ctx, 31, 0x2ABB6Cu);
    ctx->pc = 0x2ABB68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB6Cu; }
    }
    if (ctx->pc != 0x2ABB6Cu) { return; }
    ctx->pc = 0x2ABB6Cu;
    // 0x2abb6c: 0x8e420004
    ctx->pc = 0x2abb6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2abb70: 0xc44c0034
    ctx->pc = 0x2abb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2abb74:
    // 0x2abb74: 0x0
    ctx->pc = 0x2abb74u;
    // NOP
    // 0x2abb78: 0x0
    ctx->pc = 0x2abb78u;
    // NOP
    // 0x2abb7c: 0x46006303
    ctx->pc = 0x2abb7cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2abb80: 0xc0b9d24
    ctx->pc = 0x2ABB80u;
    SET_GPR_U32(ctx, 31, 0x2ABB88u);
    ctx->pc = 0x2E7490u;
    {
        const uint32_t __entryPc = ctx->pc;
        atanf_0x2e7490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB88u; }
    }
    if (ctx->pc != 0x2ABB88u) { return; }
    ctx->pc = 0x2ABB88u;
    // 0x2abb88: 0x8e420004
    ctx->pc = 0x2abb88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2abb8c: 0xe4400050
    ctx->pc = 0x2abb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2abb90: 0x8e420004
    ctx->pc = 0x2abb90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2abb94: 0xc44c0030
    ctx->pc = 0x2abb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2abb98: 0xc0ba04a
    ctx->pc = 0x2ABB98u;
    SET_GPR_U32(ctx, 31, 0x2ABBA0u);
    ctx->pc = 0x2ABB9Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABBA0u; }
    }
    if (ctx->pc != 0x2ABBA0u) { return; }
    ctx->pc = 0x2ABBA0u;
    // 0x2abba0: 0x8e420004
    ctx->pc = 0x2abba0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2abba4: 0xe4400054
    ctx->pc = 0x2abba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2abba8: 0x8e420004
    ctx->pc = 0x2abba8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2abbac: 0xc4400050
    ctx->pc = 0x2abbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abbb0: 0x3c013ea2
    ctx->pc = 0x2abbb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
    // 0x2abbb4: 0x3421f983
    ctx->pc = 0x2abbb4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x2abbb8: 0x44810800
    ctx->pc = 0x2abbb8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2abbbc: 0x46010002
    ctx->pc = 0x2abbbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2abbc0: 0xe4400050
    ctx->pc = 0x2abbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2abbc4: 0x8e420004
    ctx->pc = 0x2abbc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2abbc8: 0xc4400054
    ctx->pc = 0x2abbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abbcc: 0x3c013e22
    ctx->pc = 0x2abbccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15906 << 16));
    // 0x2abbd0: 0x3421f983
    ctx->pc = 0x2abbd0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x2abbd4: 0x44810800
    ctx->pc = 0x2abbd4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2abbd8: 0x46010002
    ctx->pc = 0x2abbd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2abbdc: 0xe4400054
    ctx->pc = 0x2abbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2abbe0: 0x3c020037
    ctx->pc = 0x2abbe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2abbe4: 0x8c428408
    ctx->pc = 0x2abbe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935560)));
    // 0x2abbe8: 0x1040001d
    ctx->pc = 0x2ABBE8u;
    {
        const bool branch_taken_0x2abbe8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ABBECu;
        SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
        if (branch_taken_0x2abbe8) {
            ctx->pc = 0x2ABC60u;
            goto label_2abc60;
        }
    }
    ctx->pc = 0x2ABBF0u;
    // 0x2abbf0: 0x8c62840c
    ctx->pc = 0x2abbf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294935564)));
    // 0x2abbf4: 0x24420001
    ctx->pc = 0x2abbf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2abbf8: 0xac62840c
    ctx->pc = 0x2abbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935564), GPR_U32(ctx, 2));
    // 0x2abbfc: 0x28420015
    ctx->pc = 0x2abbfcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 21));
    // 0x2abc00: 0x14400018
    ctx->pc = 0x2ABC00u;
    {
        const bool branch_taken_0x2abc00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2ABC04u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2abc00) {
            ctx->pc = 0x2ABC64u;
            goto label_2abc64;
        }
    }
    ctx->pc = 0x2ABC08u;
    // 0x2abc08: 0xac60840c
    ctx->pc = 0x2abc08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935564), GPR_U32(ctx, 0));
    // 0x2abc0c: 0x8e420004
    ctx->pc = 0x2abc0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2abc10: 0xc0be862
    ctx->pc = 0x2ABC10u;
    SET_GPR_U32(ctx, 31, 0x2ABC18u);
    ctx->pc = 0x2ABC14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC18u; }
    }
    if (ctx->pc != 0x2ABC18u) { return; }
    ctx->pc = 0x2ABC18u;
    // 0x2abc18: 0x40802d
    ctx->pc = 0x2abc18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abc1c: 0x8e420004
    ctx->pc = 0x2abc1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2abc20: 0xc0be862
    ctx->pc = 0x2ABC20u;
    SET_GPR_U32(ctx, 31, 0x2ABC28u);
    ctx->pc = 0x2ABC24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC28u; }
    }
    if (ctx->pc != 0x2ABC28u) { return; }
    ctx->pc = 0x2ABC28u;
    // 0x2abc28: 0x3c04003b
    ctx->pc = 0x2abc28u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2abc2c: 0x2484f510
    ctx->pc = 0x2abc2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964496));
    // 0x2abc30: 0x200282d
    ctx->pc = 0x2abc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abc34: 0x40302d
    ctx->pc = 0x2abc34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abc38: 0xdfbf0040
    ctx->pc = 0x2abc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2abc3c: 0xdfb30030
    ctx->pc = 0x2abc3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2abc40: 0xdfb20020
    ctx->pc = 0x2abc40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2abc44: 0xdfb10010
    ctx->pc = 0x2abc44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abc48: 0xdfb00000
    ctx->pc = 0x2abc48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abc4c: 0xc7b60060
    ctx->pc = 0x2abc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2abc50: 0xc7b50058
    ctx->pc = 0x2abc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2abc54: 0xc7b40050
    ctx->pc = 0x2abc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2abc58: 0x80b4a34
    ctx->pc = 0x2ABC58u;
    ctx->pc = 0x2ABC5Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x2D28D0u;
    LogfilePrintf_0x2d28d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2ABC60u;
label_2abc60:
    // 0x2abc60: 0xdfbf0040
    ctx->pc = 0x2abc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2abc64:
    // 0x2abc64: 0xdfb30030
    ctx->pc = 0x2abc64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2abc68: 0xdfb20020
    ctx->pc = 0x2abc68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2abc6c: 0xdfb10010
    ctx->pc = 0x2abc6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abc70: 0xdfb00000
    ctx->pc = 0x2abc70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abc74: 0xc7b60060
    ctx->pc = 0x2abc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2abc78: 0xc7b50058
    ctx->pc = 0x2abc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2abc7c: 0xc7b40050
    ctx->pc = 0x2abc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2abc80: 0x3e00008
    ctx->pc = 0x2ABC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABC84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ABAA0u: goto label_2abaa0;
            case 0x2ABB28u: goto label_2abb28;
            case 0x2ABB74u: goto label_2abb74;
            case 0x2ABC60u: goto label_2abc60;
            case 0x2ABC64u: goto label_2abc64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2ABC88u;
}
