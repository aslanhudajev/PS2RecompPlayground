#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrl__18KomonoTrnRigidTaskFv
// Address: 0x21df50 - 0x21e618
void ctrl__18KomonoTrnRigidTaskFv_0x21df50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrl__18KomonoTrnRigidTaskFv");


    ctx->pc = 0x21df50u;

    // 0x21df50: 0x27bdff90
    ctx->pc = 0x21df50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21df54: 0x7fbf0030
    ctx->pc = 0x21df54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x21df58: 0x7fb20020
    ctx->pc = 0x21df58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21df5c: 0x7fb10010
    ctx->pc = 0x21df5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21df60: 0x7fb00000
    ctx->pc = 0x21df60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21df64: 0x70808628
    ctx->pc = 0x21df64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21df68: 0xc086d68
    ctx->pc = 0x21DF68u;
    SET_GPR_U32(ctx, 31, 0x21DF70u);
    ctx->pc = 0x21DF6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 320));
    ctx->pc = 0x21B5A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkEndCP__14CTrnKomonoBaseFv_0x21b5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DF70u; }
        else if (ctx->pc != 0x21DF70u) { ctx->pc = 0x21DF70u; }
    }
    if (ctx->pc != 0x21DF70u) { return; }
    ctx->pc = 0x21DF70u;
    // 0x21df70: 0x10400003
    ctx->pc = 0x21DF70u;
    {
        const bool branch_taken_0x21df70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21df70) {
            ctx->pc = 0x21DF80u;
            goto label_21df80;
        }
    }
    ctx->pc = 0x21DF78u;
    // 0x21df78: 0xc06898c
    ctx->pc = 0x21DF78u;
    SET_GPR_U32(ctx, 31, 0x21DF80u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DF80u; }
        else if (ctx->pc != 0x21DF80u) { ctx->pc = 0x21DF80u; }
    }
    if (ctx->pc != 0x21DF80u) { return; }
    ctx->pc = 0x21DF80u;
label_21df80:
    // 0x21df80: 0xc6000180
    ctx->pc = 0x21df80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21df84: 0x44800800
    ctx->pc = 0x21df84u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x21df88: 0x0
    ctx->pc = 0x21df88u;
    // NOP
    // 0x21df8c: 0x46010036
    ctx->pc = 0x21df8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21df90: 0x0
    ctx->pc = 0x21df90u;
    // NOP
    // 0x21df94: 0x45000003
    ctx->pc = 0x21DF94u;
    {
        const bool branch_taken_0x21df94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21df94) {
            ctx->pc = 0x21DFA4u;
            goto label_21dfa4;
        }
    }
    ctx->pc = 0x21DF9Cu;
    // 0x21df9c: 0xc06898c
    ctx->pc = 0x21DF9Cu;
    SET_GPR_U32(ctx, 31, 0x21DFA4u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DFA4u; }
        else if (ctx->pc != 0x21DFA4u) { ctx->pc = 0x21DFA4u; }
    }
    if (ctx->pc != 0x21DFA4u) { return; }
    ctx->pc = 0x21DFA4u;
label_21dfa4:
    // 0x21dfa4: 0x8e030178
    ctx->pc = 0x21dfa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x21dfa8: 0x24020010
    ctx->pc = 0x21dfa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x21dfac: 0x1462006e
    ctx->pc = 0x21DFACu;
    {
        const bool branch_taken_0x21dfac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x21dfac) {
            ctx->pc = 0x21E168u;
            goto label_21e168;
        }
    }
    ctx->pc = 0x21DFB4u;
    // 0x21dfb4: 0xc6030c38
    ctx->pc = 0x21dfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21dfb8: 0xc6020e88
    ctx->pc = 0x21dfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21dfbc: 0xc60102f8
    ctx->pc = 0x21dfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dfc0: 0xc6000548
    ctx->pc = 0x21dfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dfc4: 0x3c024000
    ctx->pc = 0x21dfc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x21dfc8: 0x44822000
    ctx->pc = 0x21dfc8u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x21dfcc: 0x27a40040
    ctx->pc = 0x21dfccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x21dfd0: 0x46021881
    ctx->pc = 0x21dfd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21dfd4: 0x46000801
    ctx->pc = 0x21dfd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21dfd8: 0x46001000
    ctx->pc = 0x21dfd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21dfdc: 0x46040003
    ctx->pc = 0x21dfdcu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21dfe0: 0xe7a00040
    ctx->pc = 0x21dfe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x21dfe4: 0xc6030c3c
    ctx->pc = 0x21dfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21dfe8: 0xc6020e8c
    ctx->pc = 0x21dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21dfec: 0xc60102fc
    ctx->pc = 0x21dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dff0: 0xc600054c
    ctx->pc = 0x21dff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dff4: 0x46021881
    ctx->pc = 0x21dff4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21dff8: 0x46000801
    ctx->pc = 0x21dff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21dffc: 0x46001000
    ctx->pc = 0x21dffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e000: 0x46040003
    ctx->pc = 0x21e000u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21e004: 0xe7a00044
    ctx->pc = 0x21e004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x21e008: 0xc6030c40
    ctx->pc = 0x21e008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e00c: 0xc6020e90
    ctx->pc = 0x21e00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e010: 0xc6010300
    ctx->pc = 0x21e010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e014: 0xc6000550
    ctx->pc = 0x21e014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e018: 0x46021881
    ctx->pc = 0x21e018u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21e01c: 0x46000801
    ctx->pc = 0x21e01cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e020: 0x46001000
    ctx->pc = 0x21e020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e024: 0x46040003
    ctx->pc = 0x21e024u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21e028: 0x0
    ctx->pc = 0x21e028u;
    // NOP
    // 0x21e02c: 0x0
    ctx->pc = 0x21e02cu;
    // NOP
    // 0x21e030: 0xc06be7f
    ctx->pc = 0x21E030u;
    SET_GPR_U32(ctx, 31, 0x21E038u);
    ctx->pc = 0x21E034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->pc = 0x1AF9FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9FC_0x1af9fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E038u; }
        else if (ctx->pc != 0x21E038u) { ctx->pc = 0x21E038u; }
    }
    if (ctx->pc != 0x21E038u) { return; }
    ctx->pc = 0x21E038u;
    // 0x21e038: 0xc6030548
    ctx->pc = 0x21e038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e03c: 0xc6020e88
    ctx->pc = 0x21e03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e040: 0xc60102f8
    ctx->pc = 0x21e040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e044: 0xc6000c38
    ctx->pc = 0x21e044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e048: 0x3c024000
    ctx->pc = 0x21e048u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x21e04c: 0x44822000
    ctx->pc = 0x21e04cu;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x21e050: 0x27a40050
    ctx->pc = 0x21e050u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x21e054: 0x46021881
    ctx->pc = 0x21e054u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21e058: 0x46000801
    ctx->pc = 0x21e058u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e05c: 0x46001000
    ctx->pc = 0x21e05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e060: 0x46040003
    ctx->pc = 0x21e060u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21e064: 0xe7a00050
    ctx->pc = 0x21e064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x21e068: 0xc603054c
    ctx->pc = 0x21e068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e06c: 0xc6020e8c
    ctx->pc = 0x21e06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e070: 0xc60102fc
    ctx->pc = 0x21e070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e074: 0xc6000c3c
    ctx->pc = 0x21e074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e078: 0x46021881
    ctx->pc = 0x21e078u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21e07c: 0x46000801
    ctx->pc = 0x21e07cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e080: 0x46001000
    ctx->pc = 0x21e080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e084: 0x46040003
    ctx->pc = 0x21e084u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21e088: 0xe7a00054
    ctx->pc = 0x21e088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x21e08c: 0xc6030550
    ctx->pc = 0x21e08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e090: 0xc6020e90
    ctx->pc = 0x21e090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e094: 0xc6010300
    ctx->pc = 0x21e094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e098: 0xc6000c40
    ctx->pc = 0x21e098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e09c: 0x46021881
    ctx->pc = 0x21e09cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21e0a0: 0x46000801
    ctx->pc = 0x21e0a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e0a4: 0x46001000
    ctx->pc = 0x21e0a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e0a8: 0x46040003
    ctx->pc = 0x21e0a8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21e0ac: 0x0
    ctx->pc = 0x21e0acu;
    // NOP
    // 0x21e0b0: 0x0
    ctx->pc = 0x21e0b0u;
    // NOP
    // 0x21e0b4: 0xc06be7f
    ctx->pc = 0x21E0B4u;
    SET_GPR_U32(ctx, 31, 0x21E0BCu);
    ctx->pc = 0x21E0B8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->pc = 0x1AF9FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9FC_0x1af9fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E0BCu; }
        else if (ctx->pc != 0x21E0BCu) { ctx->pc = 0x21E0BCu; }
    }
    if (ctx->pc != 0x21E0BCu) { return; }
    ctx->pc = 0x21E0BCu;
    // 0x21e0bc: 0xc60310d8
    ctx->pc = 0x21e0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e0c0: 0xc6020e88
    ctx->pc = 0x21e0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e0c4: 0xc6011328
    ctx->pc = 0x21e0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e0c8: 0xc6000c38
    ctx->pc = 0x21e0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e0cc: 0x3c024000
    ctx->pc = 0x21e0ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x21e0d0: 0x44822000
    ctx->pc = 0x21e0d0u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x21e0d4: 0x27a40060
    ctx->pc = 0x21e0d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x21e0d8: 0x46021881
    ctx->pc = 0x21e0d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21e0dc: 0x46000801
    ctx->pc = 0x21e0dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e0e0: 0x46001000
    ctx->pc = 0x21e0e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e0e4: 0x46040003
    ctx->pc = 0x21e0e4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21e0e8: 0xe7a00060
    ctx->pc = 0x21e0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x21e0ec: 0xc60310dc
    ctx->pc = 0x21e0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e0f0: 0xc6020e8c
    ctx->pc = 0x21e0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e0f4: 0xc601132c
    ctx->pc = 0x21e0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e0f8: 0xc6000c3c
    ctx->pc = 0x21e0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e0fc: 0x46021881
    ctx->pc = 0x21e0fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21e100: 0x46000801
    ctx->pc = 0x21e100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e104: 0x46001000
    ctx->pc = 0x21e104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e108: 0x46040003
    ctx->pc = 0x21e108u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21e10c: 0xe7a00064
    ctx->pc = 0x21e10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x21e110: 0xc60310e0
    ctx->pc = 0x21e110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e114: 0xc6020e90
    ctx->pc = 0x21e114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e118: 0xc6011330
    ctx->pc = 0x21e118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e11c: 0xc6000c40
    ctx->pc = 0x21e11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e120: 0x46021881
    ctx->pc = 0x21e120u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21e124: 0x46000801
    ctx->pc = 0x21e124u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e128: 0x46001000
    ctx->pc = 0x21e128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e12c: 0x46040003
    ctx->pc = 0x21e12cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21e130: 0x0
    ctx->pc = 0x21e130u;
    // NOP
    // 0x21e134: 0x0
    ctx->pc = 0x21e134u;
    // NOP
    // 0x21e138: 0xc06be7f
    ctx->pc = 0x21E138u;
    SET_GPR_U32(ctx, 31, 0x21E140u);
    ctx->pc = 0x21E13Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->pc = 0x1AF9FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9FC_0x1af9fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E140u; }
        else if (ctx->pc != 0x21E140u) { ctx->pc = 0x21E140u; }
    }
    if (ctx->pc != 0x21E140u) { return; }
    ctx->pc = 0x21E140u;
    // 0x21e140: 0x27a40040
    ctx->pc = 0x21e140u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x21e144: 0x27a50050
    ctx->pc = 0x21e144u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x21e148: 0xc06be5a
    ctx->pc = 0x21E148u;
    SET_GPR_U32(ctx, 31, 0x21E150u);
    ctx->pc = 0x21E14Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1AF968u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF968_0x1af968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E150u; }
        else if (ctx->pc != 0x21E150u) { ctx->pc = 0x21E150u; }
    }
    if (ctx->pc != 0x21E150u) { return; }
    ctx->pc = 0x21E150u;
    // 0x21e150: 0x27a40050
    ctx->pc = 0x21e150u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x21e154: 0x27a50060
    ctx->pc = 0x21e154u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    // 0x21e158: 0xc06be5a
    ctx->pc = 0x21E158u;
    SET_GPR_U32(ctx, 31, 0x21E160u);
    ctx->pc = 0x21E15Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1AF968u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF968_0x1af968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E160u; }
        else if (ctx->pc != 0x21E160u) { ctx->pc = 0x21E160u; }
    }
    if (ctx->pc != 0x21E160u) { return; }
    ctx->pc = 0x21E160u;
    // 0x21e160: 0x1000006d
    ctx->pc = 0x21E160u;
    {
        const bool branch_taken_0x21e160 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E164u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21e160) {
            ctx->pc = 0x21E318u;
            goto label_21e318;
        }
    }
    ctx->pc = 0x21E168u;
label_21e168:
    // 0x21e168: 0xc60308c0
    ctx->pc = 0x21e168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e16c: 0xc60209e8
    ctx->pc = 0x21e16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e170: 0xc6010420
    ctx->pc = 0x21e170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e174: 0xc6000548
    ctx->pc = 0x21e174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e178: 0x3c024000
    ctx->pc = 0x21e178u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x21e17c: 0x44822000
    ctx->pc = 0x21e17cu;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x21e180: 0x27a40040
    ctx->pc = 0x21e180u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x21e184: 0x46021881
    ctx->pc = 0x21e184u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21e188: 0x46000801
    ctx->pc = 0x21e188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e18c: 0x46001000
    ctx->pc = 0x21e18cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e190: 0x46040003
    ctx->pc = 0x21e190u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21e194: 0xe7a00040
    ctx->pc = 0x21e194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x21e198: 0xc60308c4
    ctx->pc = 0x21e198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e19c: 0xc60209ec
    ctx->pc = 0x21e19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e1a0: 0xc6010424
    ctx->pc = 0x21e1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e1a4: 0xc600054c
    ctx->pc = 0x21e1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e1a8: 0x46021881
    ctx->pc = 0x21e1a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21e1ac: 0x46000801
    ctx->pc = 0x21e1acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e1b0: 0x46001000
    ctx->pc = 0x21e1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e1b4: 0x46040003
    ctx->pc = 0x21e1b4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21e1b8: 0xe7a00044
    ctx->pc = 0x21e1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x21e1bc: 0xc60308c8
    ctx->pc = 0x21e1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e1c0: 0xc60209f0
    ctx->pc = 0x21e1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e1c4: 0xc6010428
    ctx->pc = 0x21e1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e1c8: 0xc6000550
    ctx->pc = 0x21e1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e1cc: 0x46021881
    ctx->pc = 0x21e1ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21e1d0: 0x46000801
    ctx->pc = 0x21e1d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e1d4: 0x46001000
    ctx->pc = 0x21e1d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e1d8: 0x46040003
    ctx->pc = 0x21e1d8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21e1dc: 0x0
    ctx->pc = 0x21e1dcu;
    // NOP
    // 0x21e1e0: 0x0
    ctx->pc = 0x21e1e0u;
    // NOP
    // 0x21e1e4: 0xc06be7f
    ctx->pc = 0x21E1E4u;
    SET_GPR_U32(ctx, 31, 0x21E1ECu);
    ctx->pc = 0x21E1E8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->pc = 0x1AF9FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9FC_0x1af9fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E1ECu; }
        else if (ctx->pc != 0x21E1ECu) { ctx->pc = 0x21E1ECu; }
    }
    if (ctx->pc != 0x21E1ECu) { return; }
    ctx->pc = 0x21E1ECu;
    // 0x21e1ec: 0xc6030548
    ctx->pc = 0x21e1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e1f0: 0xc60209e8
    ctx->pc = 0x21e1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e1f4: 0xc6010420
    ctx->pc = 0x21e1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e1f8: 0xc60008c0
    ctx->pc = 0x21e1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e1fc: 0x3c024000
    ctx->pc = 0x21e1fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x21e200: 0x44822000
    ctx->pc = 0x21e200u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x21e204: 0x27a40050
    ctx->pc = 0x21e204u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x21e208: 0x46021881
    ctx->pc = 0x21e208u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21e20c: 0x46000801
    ctx->pc = 0x21e20cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e210: 0x46001000
    ctx->pc = 0x21e210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e214: 0x46040003
    ctx->pc = 0x21e214u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21e218: 0xe7a00050
    ctx->pc = 0x21e218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x21e21c: 0xc603054c
    ctx->pc = 0x21e21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e220: 0xc60209ec
    ctx->pc = 0x21e220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e224: 0xc6010424
    ctx->pc = 0x21e224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e228: 0xc60008c4
    ctx->pc = 0x21e228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e22c: 0x46021881
    ctx->pc = 0x21e22cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21e230: 0x46000801
    ctx->pc = 0x21e230u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e234: 0x46001000
    ctx->pc = 0x21e234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e238: 0x46040003
    ctx->pc = 0x21e238u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21e23c: 0xe7a00054
    ctx->pc = 0x21e23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x21e240: 0xc6030550
    ctx->pc = 0x21e240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e244: 0xc60209f0
    ctx->pc = 0x21e244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e248: 0xc6010428
    ctx->pc = 0x21e248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e24c: 0xc60008c8
    ctx->pc = 0x21e24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e250: 0x46021881
    ctx->pc = 0x21e250u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21e254: 0x46000801
    ctx->pc = 0x21e254u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e258: 0x46001000
    ctx->pc = 0x21e258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e25c: 0x46040003
    ctx->pc = 0x21e25cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21e260: 0x0
    ctx->pc = 0x21e260u;
    // NOP
    // 0x21e264: 0x0
    ctx->pc = 0x21e264u;
    // NOP
    // 0x21e268: 0xc06be7f
    ctx->pc = 0x21E268u;
    SET_GPR_U32(ctx, 31, 0x21E270u);
    ctx->pc = 0x21E26Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->pc = 0x1AF9FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9FC_0x1af9fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E270u; }
        else if (ctx->pc != 0x21E270u) { ctx->pc = 0x21E270u; }
    }
    if (ctx->pc != 0x21E270u) { return; }
    ctx->pc = 0x21E270u;
    // 0x21e270: 0xc6030670
    ctx->pc = 0x21e270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e274: 0xc60209e8
    ctx->pc = 0x21e274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e278: 0xc6010798
    ctx->pc = 0x21e278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e27c: 0xc60008c0
    ctx->pc = 0x21e27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e280: 0x3c024000
    ctx->pc = 0x21e280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x21e284: 0x44822000
    ctx->pc = 0x21e284u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x21e288: 0x27a40060
    ctx->pc = 0x21e288u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x21e28c: 0x46021881
    ctx->pc = 0x21e28cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21e290: 0x46000801
    ctx->pc = 0x21e290u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e294: 0x46001000
    ctx->pc = 0x21e294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e298: 0x46040003
    ctx->pc = 0x21e298u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21e29c: 0xe7a00060
    ctx->pc = 0x21e29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x21e2a0: 0xc6030674
    ctx->pc = 0x21e2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e2a4: 0xc60209ec
    ctx->pc = 0x21e2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e2a8: 0xc601079c
    ctx->pc = 0x21e2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e2ac: 0xc60008c4
    ctx->pc = 0x21e2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e2b0: 0x46021881
    ctx->pc = 0x21e2b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21e2b4: 0x46000801
    ctx->pc = 0x21e2b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e2b8: 0x46001000
    ctx->pc = 0x21e2b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e2bc: 0x46040003
    ctx->pc = 0x21e2bcu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21e2c0: 0xe7a00064
    ctx->pc = 0x21e2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x21e2c4: 0xc6030678
    ctx->pc = 0x21e2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e2c8: 0xc60209f0
    ctx->pc = 0x21e2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e2cc: 0xc60107a0
    ctx->pc = 0x21e2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e2d0: 0xc60008c8
    ctx->pc = 0x21e2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e2d4: 0x46021881
    ctx->pc = 0x21e2d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21e2d8: 0x46000801
    ctx->pc = 0x21e2d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e2dc: 0x46001000
    ctx->pc = 0x21e2dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e2e0: 0x46040003
    ctx->pc = 0x21e2e0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21e2e4: 0x0
    ctx->pc = 0x21e2e4u;
    // NOP
    // 0x21e2e8: 0x0
    ctx->pc = 0x21e2e8u;
    // NOP
    // 0x21e2ec: 0xc06be7f
    ctx->pc = 0x21E2ECu;
    SET_GPR_U32(ctx, 31, 0x21E2F4u);
    ctx->pc = 0x21E2F0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->pc = 0x1AF9FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9FC_0x1af9fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E2F4u; }
        else if (ctx->pc != 0x21E2F4u) { ctx->pc = 0x21E2F4u; }
    }
    if (ctx->pc != 0x21E2F4u) { return; }
    ctx->pc = 0x21E2F4u;
    // 0x21e2f4: 0x27a40040
    ctx->pc = 0x21e2f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x21e2f8: 0x27a50050
    ctx->pc = 0x21e2f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x21e2fc: 0xc06be5a
    ctx->pc = 0x21E2FCu;
    SET_GPR_U32(ctx, 31, 0x21E304u);
    ctx->pc = 0x21E300u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1AF968u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF968_0x1af968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E304u; }
        else if (ctx->pc != 0x21E304u) { ctx->pc = 0x21E304u; }
    }
    if (ctx->pc != 0x21E304u) { return; }
    ctx->pc = 0x21E304u;
    // 0x21e304: 0x27a40050
    ctx->pc = 0x21e304u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x21e308: 0x27a50060
    ctx->pc = 0x21e308u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    // 0x21e30c: 0xc06be5a
    ctx->pc = 0x21E30Cu;
    SET_GPR_U32(ctx, 31, 0x21E314u);
    ctx->pc = 0x21E310u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1AF968u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF968_0x1af968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E314u; }
        else if (ctx->pc != 0x21E314u) { ctx->pc = 0x21E314u; }
    }
    if (ctx->pc != 0x21E314u) { return; }
    ctx->pc = 0x21E314u;
    // 0x21e314: 0xc7a00040
    ctx->pc = 0x21e314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21e318:
    // 0x21e318: 0x3c033f80
    ctx->pc = 0x21e318u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x21e31c: 0x24020010
    ctx->pc = 0x21e31cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x21e320: 0xe6000190
    ctx->pc = 0x21e320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
    // 0x21e324: 0xc7a00044
    ctx->pc = 0x21e324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e328: 0xe6000194
    ctx->pc = 0x21e328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
    // 0x21e32c: 0xc7a00048
    ctx->pc = 0x21e32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e330: 0xe6000198
    ctx->pc = 0x21e330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 408), bits); }
    // 0x21e334: 0xae00019c
    ctx->pc = 0x21e334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
    // 0x21e338: 0xc7a00050
    ctx->pc = 0x21e338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e33c: 0xe60001a0
    ctx->pc = 0x21e33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x21e340: 0xc7a00054
    ctx->pc = 0x21e340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e344: 0xe60001a4
    ctx->pc = 0x21e344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x21e348: 0xc7a00058
    ctx->pc = 0x21e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e34c: 0xe60001a8
    ctx->pc = 0x21e34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x21e350: 0xae0001ac
    ctx->pc = 0x21e350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
    // 0x21e354: 0xc7a00060
    ctx->pc = 0x21e354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e358: 0xe60001b0
    ctx->pc = 0x21e358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x21e35c: 0xc7a00064
    ctx->pc = 0x21e35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e360: 0xe60001b4
    ctx->pc = 0x21e360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
    // 0x21e364: 0xc7a00068
    ctx->pc = 0x21e364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e368: 0xe60001b8
    ctx->pc = 0x21e368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x21e36c: 0xae0001bc
    ctx->pc = 0x21e36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 0));
    // 0x21e370: 0xae0001c0
    ctx->pc = 0x21e370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    // 0x21e374: 0xae0001c4
    ctx->pc = 0x21e374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
    // 0x21e378: 0xae0001c8
    ctx->pc = 0x21e378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
    // 0x21e37c: 0xae0301cc
    ctx->pc = 0x21e37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 3));
    // 0x21e380: 0x8e030178
    ctx->pc = 0x21e380u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x21e384: 0x14620006
    ctx->pc = 0x21E384u;
    {
        const bool branch_taken_0x21e384 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x21E388u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x21e384) {
            ctx->pc = 0x21E3A0u;
            goto label_21e3a0;
        }
    }
    ctx->pc = 0x21E38Cu;
    // 0x21e38c: 0x24040009
    ctx->pc = 0x21e38cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    // 0x21e390: 0x2405000b
    ctx->pc = 0x21e390u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11));
    // 0x21e394: 0x2406000d
    ctx->pc = 0x21e394u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    // 0x21e398: 0x10000004
    ctx->pc = 0x21E398u;
    {
        const bool branch_taken_0x21e398 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E39Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x21e398) {
            ctx->pc = 0x21E3ACu;
            goto label_21e3ac;
        }
    }
    ctx->pc = 0x21E3A0u;
label_21e3a0:
    // 0x21e3a0: 0x24050005
    ctx->pc = 0x21e3a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x21e3a4: 0x24060006
    ctx->pc = 0x21e3a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x21e3a8: 0x24020007
    ctx->pc = 0x21e3a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_21e3ac:
    // 0x21e3ac: 0x418c0
    ctx->pc = 0x21e3acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x21e3b0: 0x641821
    ctx->pc = 0x21e3b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21e3b4: 0x31880
    ctx->pc = 0x21e3b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21e3b8: 0x641821
    ctx->pc = 0x21e3b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21e3bc: 0x318c0
    ctx->pc = 0x21e3bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x21e3c0: 0x701821
    ctx->pc = 0x21e3c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x21e3c4: 0xc46101d0
    ctx->pc = 0x21e3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e3c8: 0xc46001d4
    ctx->pc = 0x21e3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e3cc: 0xc46301d8
    ctx->pc = 0x21e3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e3d0: 0x44807000
    ctx->pc = 0x21e3d0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
    // 0x21e3d4: 0x0
    ctx->pc = 0x21e3d4u;
    // NOP
    // 0x21e3d8: 0x46017300
    ctx->pc = 0x21e3d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[14], ctx->f[1]);
    // 0x21e3dc: 0x518c0
    ctx->pc = 0x21e3dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x21e3e0: 0x651821
    ctx->pc = 0x21e3e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21e3e4: 0x31880
    ctx->pc = 0x21e3e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21e3e8: 0x46007340
    ctx->pc = 0x21e3e8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x21e3ec: 0x651821
    ctx->pc = 0x21e3ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21e3f0: 0x318c0
    ctx->pc = 0x21e3f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x21e3f4: 0x701821
    ctx->pc = 0x21e3f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x21e3f8: 0xc46101d0
    ctx->pc = 0x21e3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e3fc: 0xc46001d4
    ctx->pc = 0x21e3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e400: 0xc46201d8
    ctx->pc = 0x21e400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e404: 0x46037380
    ctx->pc = 0x21e404u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[3]);
    // 0x21e408: 0x46016300
    ctx->pc = 0x21e408u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x21e40c: 0x618c0
    ctx->pc = 0x21e40cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 3));
    // 0x21e410: 0x661821
    ctx->pc = 0x21e410u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21e414: 0x31880
    ctx->pc = 0x21e414u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21e418: 0x661821
    ctx->pc = 0x21e418u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21e41c: 0x318c0
    ctx->pc = 0x21e41cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x21e420: 0x701821
    ctx->pc = 0x21e420u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x21e424: 0x46006b40
    ctx->pc = 0x21e424u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x21e428: 0xc46101d0
    ctx->pc = 0x21e428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e42c: 0xc46301d8
    ctx->pc = 0x21e42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e430: 0xc46001d4
    ctx->pc = 0x21e430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e434: 0x46027380
    ctx->pc = 0x21e434u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[2]);
    // 0x21e438: 0x46016300
    ctx->pc = 0x21e438u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x21e43c: 0x218c0
    ctx->pc = 0x21e43cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
    // 0x21e440: 0x621821
    ctx->pc = 0x21e440u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e444: 0x31880
    ctx->pc = 0x21e444u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21e448: 0x621021
    ctx->pc = 0x21e448u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e44c: 0x210c0
    ctx->pc = 0x21e44cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x21e450: 0x501021
    ctx->pc = 0x21e450u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21e454: 0x46006b40
    ctx->pc = 0x21e454u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x21e458: 0xc44201d0
    ctx->pc = 0x21e458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e45c: 0xc44101d4
    ctx->pc = 0x21e45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e460: 0x3c034080
    ctx->pc = 0x21e460u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16512 << 16));
    // 0x21e464: 0xc44001d8
    ctx->pc = 0x21e464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e468: 0x46037380
    ctx->pc = 0x21e468u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[3]);
    // 0x21e46c: 0x46026300
    ctx->pc = 0x21e46cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x21e470: 0x3c02003e
    ctx->pc = 0x21e470u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x21e474: 0x34420001
    ctx->pc = 0x21e474u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x21e478: 0x46007380
    ctx->pc = 0x21e478u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x21e47c: 0x44830000
    ctx->pc = 0x21e47cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x21e480: 0x0
    ctx->pc = 0x21e480u;
    // NOP
    // 0x21e484: 0x46016b40
    ctx->pc = 0x21e484u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x21e488: 0x46006303
    ctx->pc = 0x21e488u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x21e48c: 0x46006b43
    ctx->pc = 0x21e48cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
    // 0x21e490: 0xe60c1450
    ctx->pc = 0x21e490u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5200), bits); }
    // 0x21e494: 0x46007383
    ctx->pc = 0x21e494u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[0];
    // 0x21e498: 0xe60d1454
    ctx->pc = 0x21e498u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5204), bits); }
    // 0x21e49c: 0xe60e1458
    ctx->pc = 0x21e49cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5208), bits); }
    // 0x21e4a0: 0x8e03016c
    ctx->pc = 0x21e4a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x21e4a4: 0x10620003
    ctx->pc = 0x21E4A4u;
    {
        const bool branch_taken_0x21e4a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x21e4a4) {
            ctx->pc = 0x21E4B4u;
            goto label_21e4b4;
        }
    }
    ctx->pc = 0x21E4ACu;
    // 0x21e4ac: 0x1000002b
    ctx->pc = 0x21E4ACu;
    {
        const bool branch_taken_0x21e4ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E4B0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 388)));
        if (branch_taken_0x21e4ac) {
            ctx->pc = 0x21E55Cu;
            goto label_21e55c;
        }
    }
    ctx->pc = 0x21E4B4u;
label_21e4b4:
    // 0x21e4b4: 0x4bede37d
    ctx->pc = 0x21e4b4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21e4b8: 0x4bedeb7d
    ctx->pc = 0x21e4b8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21e4bc: 0x4bedf37d
    ctx->pc = 0x21e4bcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21e4c0: 0xc06c202
    ctx->pc = 0x21E4C0u;
    SET_GPR_U32(ctx, 31, 0x21E4C8u);
    ctx->pc = 0x21E4C4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E4C8u; }
        else if (ctx->pc != 0x21E4C8u) { ctx->pc = 0x21E4C8u; }
    }
    if (ctx->pc != 0x21E4C8u) { return; }
    ctx->pc = 0x21E4C8u;
    // 0x21e4c8: 0xc06c04e
    ctx->pc = 0x21E4C8u;
    SET_GPR_U32(ctx, 31, 0x21E4D0u);
    ctx->pc = 0x21E4CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 400));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E4D0u; }
        else if (ctx->pc != 0x21E4D0u) { ctx->pc = 0x21E4D0u; }
    }
    if (ctx->pc != 0x21E4D0u) { return; }
    ctx->pc = 0x21E4D0u;
    // 0x21e4d0: 0xc0853ac
    ctx->pc = 0x21E4D0u;
    SET_GPR_U32(ctx, 31, 0x21E4D8u);
    ctx->pc = 0x21E4D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 364)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E4D8u; }
        else if (ctx->pc != 0x21E4D8u) { ctx->pc = 0x21E4D8u; }
    }
    if (ctx->pc != 0x21E4D8u) { return; }
    ctx->pc = 0x21E4D8u;
    // 0x21e4d8: 0x8e030184
    ctx->pc = 0x21e4d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x21e4dc: 0x1460001a
    ctx->pc = 0x21E4DCu;
    {
        const bool branch_taken_0x21e4dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21e4dc) {
            ctx->pc = 0x21E548u;
            goto label_21e548;
        }
    }
    ctx->pc = 0x21E4E4u;
    // 0x21e4e4: 0x3c02002c
    ctx->pc = 0x21e4e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x21e4e8: 0x245107d0
    ctx->pc = 0x21e4e8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 2000));
    // 0x21e4ec: 0x3c02002c
    ctx->pc = 0x21e4ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x21e4f0: 0x70008628
    ctx->pc = 0x21e4f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e4f4: 0x24520800
    ctx->pc = 0x21e4f4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 2048));
label_21e4f8:
    // 0x21e4f8: 0x4bede37d
    ctx->pc = 0x21e4f8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21e4fc: 0x4bedeb7d
    ctx->pc = 0x21e4fcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21e500: 0x4bedf37d
    ctx->pc = 0x21e500u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21e504: 0x4bedfb7d
    ctx->pc = 0x21e504u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x21e508: 0xc62d0004
    ctx->pc = 0x21e508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21e50c: 0xc62e0008
    ctx->pc = 0x21e50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21e510: 0xc06c202
    ctx->pc = 0x21E510u;
    SET_GPR_U32(ctx, 31, 0x21E518u);
    ctx->pc = 0x21E514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E518u; }
        else if (ctx->pc != 0x21E518u) { ctx->pc = 0x21E518u; }
    }
    if (ctx->pc != 0x21E518u) { return; }
    ctx->pc = 0x21E518u;
    // 0x21e518: 0xc0853ac
    ctx->pc = 0x21E518u;
    SET_GPR_U32(ctx, 31, 0x21E520u);
    ctx->pc = 0x21E51Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E520u; }
        else if (ctx->pc != 0x21E520u) { ctx->pc = 0x21E520u; }
    }
    if (ctx->pc != 0x21E520u) { return; }
    ctx->pc = 0x21E520u;
    // 0x21e520: 0x4bff6b7e
    ctx->pc = 0x21e520u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x21e524: 0x4bfe6b7e
    ctx->pc = 0x21e524u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21e528: 0x4bfd6b7e
    ctx->pc = 0x21e528u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21e52c: 0x4bfc6b7e
    ctx->pc = 0x21e52cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x21e530: 0x26100001
    ctx->pc = 0x21e530u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x21e534: 0x2a030004
    ctx->pc = 0x21e534u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 4));
    // 0x21e538: 0x2631000c
    ctx->pc = 0x21e538u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 12));
    // 0x21e53c: 0x1460ffee
    ctx->pc = 0x21E53Cu;
    {
        const bool branch_taken_0x21e53c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21E540u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x21e53c) {
            ctx->pc = 0x21E4F8u;
            goto label_21e4f8;
        }
    }
    ctx->pc = 0x21E544u;
    // 0x21e544: 0x0
    ctx->pc = 0x21e544u;
    // NOP
label_21e548:
    // 0x21e548: 0x4bff6b7e
    ctx->pc = 0x21e548u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x21e54c: 0x4bfe6b7e
    ctx->pc = 0x21e54cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21e550: 0x4bfd6b7e
    ctx->pc = 0x21e550u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21e554: 0x1000002a
    ctx->pc = 0x21E554u;
    {
        const bool branch_taken_0x21e554 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E558u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x21e554) {
            ctx->pc = 0x21E600u;
            goto label_21e600;
        }
    }
    ctx->pc = 0x21E55Cu;
label_21e55c:
    // 0x21e55c: 0x1040001b
    ctx->pc = 0x21E55Cu;
    {
        const bool branch_taken_0x21e55c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21e55c) {
            ctx->pc = 0x21E5CCu;
            goto label_21e5cc;
        }
    }
    ctx->pc = 0x21E564u;
    // 0x21e564: 0x8e020174
    ctx->pc = 0x21e564u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x21e568: 0x28410078
    ctx->pc = 0x21e568u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 120));
    // 0x21e56c: 0x10200017
    ctx->pc = 0x21E56Cu;
    {
        const bool branch_taken_0x21e56c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x21e56c) {
            ctx->pc = 0x21E5CCu;
            goto label_21e5cc;
        }
    }
    ctx->pc = 0x21E574u;
    // 0x21e574: 0x4bede37d
    ctx->pc = 0x21e574u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21e578: 0x4bedeb7d
    ctx->pc = 0x21e578u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21e57c: 0x4bedf37d
    ctx->pc = 0x21e57cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21e580: 0xc06c202
    ctx->pc = 0x21E580u;
    SET_GPR_U32(ctx, 31, 0x21E588u);
    ctx->pc = 0x21E584u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E588u; }
        else if (ctx->pc != 0x21E588u) { ctx->pc = 0x21E588u; }
    }
    if (ctx->pc != 0x21E588u) { return; }
    ctx->pc = 0x21E588u;
    // 0x21e588: 0xc06c04e
    ctx->pc = 0x21E588u;
    SET_GPR_U32(ctx, 31, 0x21E590u);
    ctx->pc = 0x21E58Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 400));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E590u; }
        else if (ctx->pc != 0x21E590u) { ctx->pc = 0x21E590u; }
    }
    if (ctx->pc != 0x21E590u) { return; }
    ctx->pc = 0x21E590u;
    // 0x21e590: 0xc60c0180
    ctx->pc = 0x21e590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21e594: 0xc0853e4
    ctx->pc = 0x21E594u;
    SET_GPR_U32(ctx, 31, 0x21E59Cu);
    ctx->pc = 0x21E598u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 364)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E59Cu; }
        else if (ctx->pc != 0x21E59Cu) { ctx->pc = 0x21E59Cu; }
    }
    if (ctx->pc != 0x21E59Cu) { return; }
    ctx->pc = 0x21E59Cu;
    // 0x21e59c: 0x4bff6b7e
    ctx->pc = 0x21e59cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x21e5a0: 0x4bfe6b7e
    ctx->pc = 0x21e5a0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21e5a4: 0x4bfd6b7e
    ctx->pc = 0x21e5a4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21e5a8: 0x4bfc6b7e
    ctx->pc = 0x21e5a8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x21e5ac: 0x3c033c88
    ctx->pc = 0x21e5acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15496 << 16));
    // 0x21e5b0: 0x34638889
    ctx->pc = 0x21e5b0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
    // 0x21e5b4: 0xc6010180
    ctx->pc = 0x21e5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e5b8: 0x44830000
    ctx->pc = 0x21e5b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x21e5bc: 0x0
    ctx->pc = 0x21e5bcu;
    // NOP
    // 0x21e5c0: 0x46000801
    ctx->pc = 0x21e5c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e5c4: 0x1000000e
    ctx->pc = 0x21E5C4u;
    {
        const bool branch_taken_0x21e5c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E5C8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 384), bits); }
        if (branch_taken_0x21e5c4) {
            ctx->pc = 0x21E600u;
            goto label_21e600;
        }
    }
    ctx->pc = 0x21E5CCu;
label_21e5cc:
    // 0x21e5cc: 0x4bede37d
    ctx->pc = 0x21e5ccu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21e5d0: 0x4bedeb7d
    ctx->pc = 0x21e5d0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21e5d4: 0x4bedf37d
    ctx->pc = 0x21e5d4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21e5d8: 0xc06c202
    ctx->pc = 0x21E5D8u;
    SET_GPR_U32(ctx, 31, 0x21E5E0u);
    ctx->pc = 0x21E5DCu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E5E0u; }
        else if (ctx->pc != 0x21E5E0u) { ctx->pc = 0x21E5E0u; }
    }
    if (ctx->pc != 0x21E5E0u) { return; }
    ctx->pc = 0x21E5E0u;
    // 0x21e5e0: 0xc06c04e
    ctx->pc = 0x21E5E0u;
    SET_GPR_U32(ctx, 31, 0x21E5E8u);
    ctx->pc = 0x21E5E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 400));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E5E8u; }
        else if (ctx->pc != 0x21E5E8u) { ctx->pc = 0x21E5E8u; }
    }
    if (ctx->pc != 0x21E5E8u) { return; }
    ctx->pc = 0x21E5E8u;
    // 0x21e5e8: 0xc0853ac
    ctx->pc = 0x21E5E8u;
    SET_GPR_U32(ctx, 31, 0x21E5F0u);
    ctx->pc = 0x21E5ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 364)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E5F0u; }
        else if (ctx->pc != 0x21E5F0u) { ctx->pc = 0x21E5F0u; }
    }
    if (ctx->pc != 0x21E5F0u) { return; }
    ctx->pc = 0x21E5F0u;
    // 0x21e5f0: 0x4bff6b7e
    ctx->pc = 0x21e5f0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x21e5f4: 0x4bfe6b7e
    ctx->pc = 0x21e5f4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21e5f8: 0x4bfd6b7e
    ctx->pc = 0x21e5f8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21e5fc: 0x4bfc6b7e
    ctx->pc = 0x21e5fcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_21e600:
    // 0x21e600: 0x7bbf0030
    ctx->pc = 0x21e600u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e604: 0x7bb20020
    ctx->pc = 0x21e604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e608: 0x7bb10010
    ctx->pc = 0x21e608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e60c: 0x7bb00000
    ctx->pc = 0x21e60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e610: 0x3e00008
    ctx->pc = 0x21E610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E614u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21DF80u: goto label_21df80;
            case 0x21DFA4u: goto label_21dfa4;
            case 0x21E168u: goto label_21e168;
            case 0x21E318u: goto label_21e318;
            case 0x21E3A0u: goto label_21e3a0;
            case 0x21E3ACu: goto label_21e3ac;
            case 0x21E4B4u: goto label_21e4b4;
            case 0x21E4F8u: goto label_21e4f8;
            case 0x21E548u: goto label_21e548;
            case 0x21E55Cu: goto label_21e55c;
            case 0x21E5CCu: goto label_21e5cc;
            case 0x21E600u: goto label_21e600;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21E618u;
}
