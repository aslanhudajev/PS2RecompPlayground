#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetAngleZY__FfffPiPi
// Address: 0x1c8f90 - 0x1c905c
void GetAngleZY__FfffPiPi_0x1c8f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetAngleZY__FfffPiPi");


    ctx->pc = 0x1c8f90u;

    // 0x1c8f90: 0x27bdffc0
    ctx->pc = 0x1c8f90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c8f94: 0x7fbf0030
    ctx->pc = 0x1c8f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1c8f98: 0x7fb10020
    ctx->pc = 0x1c8f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c8f9c: 0x7fb00010
    ctx->pc = 0x1c8f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c8fa0: 0xe7b60008
    ctx->pc = 0x1c8fa0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c8fa4: 0xe7b50004
    ctx->pc = 0x1c8fa4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c8fa8: 0xe7b40000
    ctx->pc = 0x1c8fa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c8fac: 0x46006586
    ctx->pc = 0x1c8facu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1c8fb0: 0x46006d46
    ctx->pc = 0x1c8fb0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1c8fb4: 0x46007506
    ctx->pc = 0x1c8fb4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x1c8fb8: 0x70808e28
    ctx->pc = 0x1c8fb8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c8fbc: 0x70a08628
    ctx->pc = 0x1c8fbcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c8fc0: 0x4600ab06
    ctx->pc = 0x1c8fc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1c8fc4: 0xc069e68
    ctx->pc = 0x1C8FC4u;
    SET_GPR_U32(ctx, 31, 0x1C8FCCu);
    ctx->pc = 0x1C8FC8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8FCCu; }
        else if (ctx->pc != 0x1C8FCCu) { ctx->pc = 0x1C8FCCu; }
    }
    if (ctx->pc != 0x1C8FCCu) { return; }
    ctx->pc = 0x1C8FCCu;
    // 0x1c8fcc: 0x2143c
    ctx->pc = 0x1c8fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c8fd0: 0x2143f
    ctx->pc = 0x1c8fd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c8fd4: 0xae020000
    ctx->pc = 0x1c8fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c8fd8: 0x8e040000
    ctx->pc = 0x1c8fd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8fdc: 0x24822000
    ctx->pc = 0x1c8fdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 8192));
    // 0x1c8fe0: 0x30424000
    ctx->pc = 0x1c8fe0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x1c8fe4: 0x1440000a
    ctx->pc = 0x1C8FE4u;
    {
        const bool branch_taken_0x1c8fe4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c8fe4) {
            ctx->pc = 0x1C9010u;
            goto label_1c9010;
        }
    }
    ctx->pc = 0x1C8FECu;
    // 0x1c8fec: 0xc06c26d
    ctx->pc = 0x1C8FECu;
    SET_GPR_U32(ctx, 31, 0x1C8FF4u);
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8FF4u; }
        else if (ctx->pc != 0x1C8FF4u) { ctx->pc = 0x1C8FF4u; }
    }
    if (ctx->pc != 0x1C8FF4u) { return; }
    ctx->pc = 0x1C8FF4u;
    // 0x1c8ff4: 0x0
    ctx->pc = 0x1c8ff4u;
    // NOP
    // 0x1c8ff8: 0x0
    ctx->pc = 0x1c8ff8u;
    // NOP
    // 0x1c8ffc: 0x4600b343
    ctx->pc = 0x1c8ffcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[13] = ctx->f[22] / ctx->f[0];
    // 0x1c9000: 0x0
    ctx->pc = 0x1c9000u;
    // NOP
    // 0x1c9004: 0x0
    ctx->pc = 0x1c9004u;
    // NOP
    // 0x1c9008: 0x10000006
    ctx->pc = 0x1C9008u;
    {
        const bool branch_taken_0x1c9008 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c9008) {
            ctx->pc = 0x1C9024u;
            goto label_1c9024;
        }
    }
    ctx->pc = 0x1C9010u;
label_1c9010:
    // 0x1c9010: 0xc06c24e
    ctx->pc = 0x1C9010u;
    SET_GPR_U32(ctx, 31, 0x1C9018u);
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9018u; }
        else if (ctx->pc != 0x1C9018u) { ctx->pc = 0x1C9018u; }
    }
    if (ctx->pc != 0x1C9018u) { return; }
    ctx->pc = 0x1C9018u;
    // 0x1c9018: 0x0
    ctx->pc = 0x1c9018u;
    // NOP
    // 0x1c901c: 0x0
    ctx->pc = 0x1c901cu;
    // NOP
    // 0x1c9020: 0x4600ab43
    ctx->pc = 0x1c9020u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[13] = ctx->f[21] / ctx->f[0];
label_1c9024:
    // 0x1c9024: 0xc069e68
    ctx->pc = 0x1C9024u;
    SET_GPR_U32(ctx, 31, 0x1C902Cu);
    ctx->pc = 0x1C9028u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C902Cu; }
        else if (ctx->pc != 0x1C902Cu) { ctx->pc = 0x1C902Cu; }
    }
    if (ctx->pc != 0x1C902Cu) { return; }
    ctx->pc = 0x1C902Cu;
    // 0x1c902c: 0x21c3c
    ctx->pc = 0x1c902cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c9030: 0x31c3f
    ctx->pc = 0x1c9030u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1c9034: 0x31823
    ctx->pc = 0x1c9034u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1c9038: 0xae230000
    ctx->pc = 0x1c9038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1c903c: 0x7bbf0030
    ctx->pc = 0x1c903cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9040: 0x7bb10020
    ctx->pc = 0x1c9040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9044: 0x7bb00010
    ctx->pc = 0x1c9044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9048: 0xc7b60008
    ctx->pc = 0x1c9048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c904c: 0xc7b50004
    ctx->pc = 0x1c904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c9050: 0xc7b40000
    ctx->pc = 0x1c9050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c9054: 0x3e00008
    ctx->pc = 0x1C9054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9058u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9010u: goto label_1c9010;
            case 0x1C9024u: goto label_1c9024;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C905Cu;
}
