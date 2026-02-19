#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MoveCam_hstable
// Address: 0x26dff8 - 0x26e0bc
void MoveCam_hstable_0x26dff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26dff8u;

    // 0x26dff8: 0x27bdffd0
    ctx->pc = 0x26dff8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26dffc: 0xffbf0020
    ctx->pc = 0x26dffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26e000: 0xffb00010
    ctx->pc = 0x26e000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26e004: 0x240301a0
    ctx->pc = 0x26e004u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26e008: 0x831818
    ctx->pc = 0x26e008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26e00c: 0x3c020034
    ctx->pc = 0x26e00cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26e010: 0x2442eb60
    ctx->pc = 0x26e010u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26e014: 0x14800025
    ctx->pc = 0x26E014u;
    {
        const bool branch_taken_0x26e014 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x26E018u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x26e014) {
            ctx->pc = 0x26E0ACu;
            goto label_26e0ac;
        }
    }
    ctx->pc = 0x26E01Cu;
    // 0x26e01c: 0xc6010070
    ctx->pc = 0x26e01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e020: 0xc6000140
    ctx->pc = 0x26e020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e024: 0x46000b01
    ctx->pc = 0x26e024u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26e028: 0xe7ac0000
    ctx->pc = 0x26e028u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26e02c: 0xc6020074
    ctx->pc = 0x26e02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26e030: 0xc6000144
    ctx->pc = 0x26e030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e034: 0x46001081
    ctx->pc = 0x26e034u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26e038: 0xe7a20004
    ctx->pc = 0x26e038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26e03c: 0xc6010078
    ctx->pc = 0x26e03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e040: 0xc6000148
    ctx->pc = 0x26e040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e044: 0x46000841
    ctx->pc = 0x26e044u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26e048: 0xe7a10008
    ctx->pc = 0x26e048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26e04c: 0x460c6002
    ctx->pc = 0x26e04cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26e050: 0x46021082
    ctx->pc = 0x26e050u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26e054: 0x46020000
    ctx->pc = 0x26e054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26e058: 0x46010842
    ctx->pc = 0x26e058u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26e05c: 0x46010000
    ctx->pc = 0x26e05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26e060: 0x0
    ctx->pc = 0x26e060u;
    // NOP
    // 0x26e064: 0x0
    ctx->pc = 0x26e064u;
    // NOP
    // 0x26e068: 0x46000004
    ctx->pc = 0x26e068u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x26e06c: 0x46000032
    ctx->pc = 0x26e06cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e070: 0x0
    ctx->pc = 0x26e070u;
    // NOP
    // 0x26e074: 0x45010006
    ctx->pc = 0x26E074u;
    {
        const bool branch_taken_0x26e074 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E078u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26e074) {
            ctx->pc = 0x26E090u;
            goto label_26e090;
        }
    }
    ctx->pc = 0x26E07Cu;
    // 0x26e07c: 0x460c6302
    ctx->pc = 0x26e07cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26e080: 0x46026300
    ctx->pc = 0x26e080u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x26e084: 0xc0ba284
    ctx->pc = 0x26E084u;
    SET_GPR_U32(ctx, 31, 0x26E08Cu);
    ctx->pc = 0x26E088u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E08Cu; }
    }
    if (ctx->pc != 0x26E08Cu) { return; }
    ctx->pc = 0x26E08Cu;
    // 0x26e08c: 0x3c020031
    ctx->pc = 0x26e08cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_26e090:
    // 0x26e090: 0xc44cffa8
    ctx->pc = 0x26e090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e094: 0x460c6300
    ctx->pc = 0x26e094u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x26e098: 0x460c0300
    ctx->pc = 0x26e098u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x26e09c: 0xe60c00d0
    ctx->pc = 0x26e09cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x26e0a0: 0x26040140
    ctx->pc = 0x26e0a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 320));
    // 0x26e0a4: 0xc099c08
    ctx->pc = 0x26E0A4u;
    SET_GPR_U32(ctx, 31, 0x26E0ACu);
    ctx->pc = 0x26E0A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    ctx->pc = 0x267020u;
    {
        const uint32_t __entryPc = ctx->pc;
        fix_radius_0x267020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E0ACu; }
    }
    if (ctx->pc != 0x26E0ACu) { return; }
    ctx->pc = 0x26E0ACu;
label_26e0ac:
    // 0x26e0ac: 0xdfbf0020
    ctx->pc = 0x26e0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e0b0: 0xdfb00010
    ctx->pc = 0x26e0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e0b4: 0x3e00008
    ctx->pc = 0x26E0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E0B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E090u: goto label_26e090;
            case 0x26E0ACu: goto label_26e0ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E0BCu;
}
