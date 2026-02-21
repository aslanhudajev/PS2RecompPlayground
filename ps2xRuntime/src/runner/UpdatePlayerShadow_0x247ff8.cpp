#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: UpdatePlayerShadow
// Address: 0x247ff8 - 0x2480fc
void UpdatePlayerShadow_0x247ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x247ff8u;

    // 0x247ff8: 0x27bdffe0
    ctx->pc = 0x247ff8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247ffc: 0xffbf0010
    ctx->pc = 0x247ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x248000: 0xffb00000
    ctx->pc = 0x248000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248004: 0x80802d
    ctx->pc = 0x248004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248008: 0xc60108a4
    ctx->pc = 0x248008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24800c: 0xc600088c
    ctx->pc = 0x24800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248010: 0x46010034
    ctx->pc = 0x248010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248014: 0x0
    ctx->pc = 0x248014u;
    // NOP
    // 0x248018: 0x4500001d
    ctx->pc = 0x248018u;
    {
        const bool branch_taken_0x248018 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24801Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
        if (branch_taken_0x248018) {
            ctx->pc = 0x248090u;
            goto label_248090;
        }
    }
    ctx->pc = 0x248020u;
    // 0x248020: 0xc4a00030
    ctx->pc = 0x248020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248024: 0xe4400030
    ctx->pc = 0x248024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x248028: 0x8e0206a0
    ctx->pc = 0x248028u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x24802c: 0xc4a00034
    ctx->pc = 0x24802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248030: 0xe4400034
    ctx->pc = 0x248030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x248034: 0x8e0206a0
    ctx->pc = 0x248034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x248038: 0xc4a00038
    ctx->pc = 0x248038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24803c: 0xe4400038
    ctx->pc = 0x24803cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x248040: 0x8e0206a0
    ctx->pc = 0x248040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x248044: 0xc60008a4
    ctx->pc = 0x248044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248048: 0x3c013dcc
    ctx->pc = 0x248048u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x24804c: 0x3421cccd
    ctx->pc = 0x24804cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x248050: 0x44810800
    ctx->pc = 0x248050u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x248054: 0x46010000
    ctx->pc = 0x248054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x248058: 0xe4400034
    ctx->pc = 0x248058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x24805c: 0x3c020034
    ctx->pc = 0x24805cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x248060: 0x8e0406a0
    ctx->pc = 0x248060u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x248064: 0x2405fffe
    ctx->pc = 0x248064u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x248068: 0x8c465518
    ctx->pc = 0x248068u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 21784)));
    // 0x24806c: 0xc0b4126
    ctx->pc = 0x24806Cu;
    SET_GPR_U32(ctx, 31, 0x248074u);
    ctx->pc = 0x248070u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248074u; }
    }
    if (ctx->pc != 0x248074u) { return; }
    ctx->pc = 0x248074u;
    // 0x248074: 0x8e0406a0
    ctx->pc = 0x248074u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x248078: 0x24050002
    ctx->pc = 0x248078u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x24807c: 0x302d
    ctx->pc = 0x24807cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248080: 0xdfbf0010
    ctx->pc = 0x248080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248084: 0xdfb00000
    ctx->pc = 0x248084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248088: 0x80b41e4
    ctx->pc = 0x248088u;
    ctx->pc = 0x24808Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D0790u;
    MBTreeClearFlags_0x2d0790(rdram, ctx, runtime); return;
    ctx->pc = 0x248090u;
label_248090:
    // 0x248090: 0xc4a00030
    ctx->pc = 0x248090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248094: 0xe4400030
    ctx->pc = 0x248094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x248098: 0x8e0206a0
    ctx->pc = 0x248098u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x24809c: 0xc4a00034
    ctx->pc = 0x24809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2480a0: 0xe4400034
    ctx->pc = 0x2480a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2480a4: 0x8e0206a0
    ctx->pc = 0x2480a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x2480a8: 0xc4a00038
    ctx->pc = 0x2480a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2480ac: 0xe4400038
    ctx->pc = 0x2480acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2480b0: 0x8e0206a0
    ctx->pc = 0x2480b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x2480b4: 0xc600088c
    ctx->pc = 0x2480b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2480b8: 0x3c013dcc
    ctx->pc = 0x2480b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2480bc: 0x3421cccd
    ctx->pc = 0x2480bcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2480c0: 0x44810800
    ctx->pc = 0x2480c0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2480c4: 0x46010000
    ctx->pc = 0x2480c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2480c8: 0xe4400034
    ctx->pc = 0x2480c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2480cc: 0x8e0406a0
    ctx->pc = 0x2480ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x2480d0: 0x2405ffff
    ctx->pc = 0x2480d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2480d4: 0x302d
    ctx->pc = 0x2480d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2480d8: 0xc0b4126
    ctx->pc = 0x2480D8u;
    SET_GPR_U32(ctx, 31, 0x2480E0u);
    ctx->pc = 0x2480DCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2480E0u; }
    }
    if (ctx->pc != 0x2480E0u) { return; }
    ctx->pc = 0x2480E0u;
    // 0x2480e0: 0x8e0406a0
    ctx->pc = 0x2480e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x2480e4: 0x24050002
    ctx->pc = 0x2480e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2480e8: 0x302d
    ctx->pc = 0x2480e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2480ec: 0xdfbf0010
    ctx->pc = 0x2480ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2480f0: 0xdfb00000
    ctx->pc = 0x2480f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2480f4: 0x80b41e4
    ctx->pc = 0x2480F4u;
    ctx->pc = 0x2480F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D0790u;
    MBTreeClearFlags_0x2d0790(rdram, ctx, runtime); return;
    ctx->pc = 0x2480FCu;
}
