#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BossCameraStart
// Address: 0x29ffc8 - 0x2a00ec
void BossCameraStart_0x29ffc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29ffc8u;

    // 0x29ffc8: 0x27bdffd0
    ctx->pc = 0x29ffc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29ffcc: 0xffbf0020
    ctx->pc = 0x29ffccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29ffd0: 0xffb10010
    ctx->pc = 0x29ffd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29ffd4: 0xffb00000
    ctx->pc = 0x29ffd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ffd8: 0x3c110036
    ctx->pc = 0x29ffd8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)54 << 16));
    // 0x29ffdc: 0x3c020034
    ctx->pc = 0x29ffdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x29ffe0: 0x8c42e7c8
    ctx->pc = 0x29ffe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x29ffe4: 0x8c50006c
    ctx->pc = 0x29ffe4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x29ffe8: 0x1200002d
    ctx->pc = 0x29FFE8u;
    {
        const bool branch_taken_0x29ffe8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x29FFECu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294958464), GPR_U32(ctx, 16));
        if (branch_taken_0x29ffe8) {
            ctx->pc = 0x2A00A0u;
            goto label_2a00a0;
        }
    }
    ctx->pc = 0x29FFF0u;
    // 0x29fff0: 0xc0b9dce
    ctx->pc = 0x29FFF0u;
    SET_GPR_U32(ctx, 31, 0x29FFF8u);
    ctx->pc = 0x29FFF4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFF8u; }
    }
    if (ctx->pc != 0x29FFF8u) { return; }
    ctx->pc = 0x29FFF8u;
    // 0x29fff8: 0xe6000008
    ctx->pc = 0x29fff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x29fffc: 0x8e22dd80
    ctx->pc = 0x29fffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294958464)));
    // 0x2a0000: 0xc4410018
    ctx->pc = 0x2a0000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0004: 0x44800000
    ctx->pc = 0x2a0004u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2a0008: 0x46000832
    ctx->pc = 0x2a0008u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a000c: 0x0
    ctx->pc = 0x2a000cu;
    // NOP
    // 0x2a0010: 0x45020004
    ctx->pc = 0x2A0010u;
    {
        const bool branch_taken_0x2a0010 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0010) {
            ctx->pc = 0x2A0014u;
            SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
            ctx->pc = 0x2A0024u;
            goto label_2a0024;
        }
    }
    ctx->pc = 0x2A0018u;
    // 0x2a0018: 0xc4400014
    ctx->pc = 0x2a0018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a001c: 0xe4400018
    ctx->pc = 0x2a001cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2a0020: 0x3c020036
    ctx->pc = 0x2a0020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a0024:
    // 0x2a0024: 0x8c42dd80
    ctx->pc = 0x2a0024u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a0028: 0xc4410034
    ctx->pc = 0x2a0028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a002c: 0x3c014974
    ctx->pc = 0x2a002cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)18804 << 16));
    // 0x2a0030: 0x342123e0
    ctx->pc = 0x2a0030u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 9184));
    // 0x2a0034: 0x44810000
    ctx->pc = 0x2a0034u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a0038: 0x46010036
    ctx->pc = 0x2a0038u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a003c: 0x0
    ctx->pc = 0x2a003cu;
    // NOP
    // 0x2a0040: 0x45020008
    ctx->pc = 0x2A0040u;
    {
        const bool branch_taken_0x2a0040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0040) {
            ctx->pc = 0x2A0044u;
            SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
            ctx->pc = 0x2A0064u;
            goto label_2a0064;
        }
    }
    ctx->pc = 0x2A0048u;
    // 0x2a0048: 0xc4400024
    ctx->pc = 0x2a0048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a004c: 0xe4400030
    ctx->pc = 0x2a004cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2a0050: 0xc4400028
    ctx->pc = 0x2a0050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0054: 0xe4400034
    ctx->pc = 0x2a0054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2a0058: 0xc440002c
    ctx->pc = 0x2a0058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a005c: 0xe4400038
    ctx->pc = 0x2a005cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2a0060: 0x3c020036
    ctx->pc = 0x2a0060u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a0064:
    // 0x2a0064: 0x8c43dbc0
    ctx->pc = 0x2a0064u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a0068: 0x3c020036
    ctx->pc = 0x2a0068u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a006c: 0x8c42dd80
    ctx->pc = 0x2a006cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a0070: 0xc4410018
    ctx->pc = 0x2a0070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0074: 0x3c013fc0
    ctx->pc = 0x2a0074u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x2a0078: 0x44810000
    ctx->pc = 0x2a0078u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a007c: 0x46000842
    ctx->pc = 0x2a007cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0080: 0xe46100dc
    ctx->pc = 0x2a0080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
    // 0x2a0084: 0x3c020031
    ctx->pc = 0x2a0084u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a0088: 0x8c42f1a0
    ctx->pc = 0x2a0088u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963616)));
    // 0x2a008c: 0x10400004
    ctx->pc = 0x2A008Cu;
    {
        const bool branch_taken_0x2a008c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0090u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a008c) {
            ctx->pc = 0x2A00A0u;
            goto label_2a00a0;
        }
    }
    ctx->pc = 0x2A0094u;
    // 0x2a0094: 0xc440db64
    ctx->pc = 0x2a0094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0098: 0x46000802
    ctx->pc = 0x2a0098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a009c: 0xe46000dc
    ctx->pc = 0x2a009cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
label_2a00a0:
    // 0x2a00a0: 0x3c020036
    ctx->pc = 0x2a00a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a00a4: 0x8c42dbc0
    ctx->pc = 0x2a00a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a00a8: 0xac4000f0
    ctx->pc = 0x2a00a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
    // 0x2a00ac: 0xac4000f8
    ctx->pc = 0x2a00acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 0));
    // 0x2a00b0: 0xac400108
    ctx->pc = 0x2a00b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
    // 0x2a00b4: 0xac4000bc
    ctx->pc = 0x2a00b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 0));
    // 0x2a00b8: 0xac4000c0
    ctx->pc = 0x2a00b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
    // 0x2a00bc: 0xac4000c4
    ctx->pc = 0x2a00bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 0));
    // 0x2a00c0: 0xac4000c8
    ctx->pc = 0x2a00c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 0));
    // 0x2a00c4: 0xac4000cc
    ctx->pc = 0x2a00c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
    // 0x2a00c8: 0xac4000d0
    ctx->pc = 0x2a00c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 0));
    // 0x2a00cc: 0xac4000d4
    ctx->pc = 0x2a00ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
    // 0x2a00d0: 0xac4000d8
    ctx->pc = 0x2a00d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
    // 0x2a00d4: 0xac400100
    ctx->pc = 0x2a00d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x2a00d8: 0xdfbf0020
    ctx->pc = 0x2a00d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a00dc: 0xdfb10010
    ctx->pc = 0x2a00dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a00e0: 0xdfb00000
    ctx->pc = 0x2a00e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a00e4: 0x3e00008
    ctx->pc = 0x2A00E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A00E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A0024u: goto label_2a0024;
            case 0x2A0064u: goto label_2a0064;
            case 0x2A00A0u: goto label_2a00a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A00ECu;
}
