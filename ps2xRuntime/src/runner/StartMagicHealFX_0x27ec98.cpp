#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartMagicHealFX
// Address: 0x27ec98 - 0x27ed14
void StartMagicHealFX_0x27ec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27ec98u;

    // 0x27ec98: 0x27bdffd0
    ctx->pc = 0x27ec98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27ec9c: 0xffbf0010
    ctx->pc = 0x27ec9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27eca0: 0xffb00000
    ctx->pc = 0x27eca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27eca4: 0xe7b40020
    ctx->pc = 0x27eca4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27eca8: 0x80282d
    ctx->pc = 0x27eca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ecac: 0x3c013d00
    ctx->pc = 0x27ecacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15616 << 16));
    // 0x27ecb0: 0x44810000
    ctx->pc = 0x27ecb0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27ecb4: 0x46006502
    ctx->pc = 0x27ecb4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x27ecb8: 0x24040033
    ctx->pc = 0x27ecb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 51));
    // 0x27ecbc: 0x44806000
    ctx->pc = 0x27ecbcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27ecc0: 0x302d
    ctx->pc = 0x27ecc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ecc4: 0xc09f5fa
    ctx->pc = 0x27ECC4u;
    SET_GPR_U32(ctx, 31, 0x27ECCCu);
    ctx->pc = 0x27ECC8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2176));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ECCCu; }
    }
    if (ctx->pc != 0x27ECCCu) { return; }
    ctx->pc = 0x27ECCCu;
    // 0x27eccc: 0x3c013f80
    ctx->pc = 0x27ecccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27ecd0: 0x44810000
    ctx->pc = 0x27ecd0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27ecd4: 0x46140034
    ctx->pc = 0x27ecd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ecd8: 0x0
    ctx->pc = 0x27ecd8u;
    // NOP
    // 0x27ecdc: 0x45000002
    ctx->pc = 0x27ECDCu;
    {
        const bool branch_taken_0x27ecdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27ECE0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27ecdc) {
            ctx->pc = 0x27ECE8u;
            goto label_27ece8;
        }
    }
    ctx->pc = 0x27ECE4u;
    // 0x27ece4: 0x46000506
    ctx->pc = 0x27ece4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_27ece8:
    // 0x27ece8: 0x200202d
    ctx->pc = 0x27ece8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ecec: 0x4600a306
    ctx->pc = 0x27ececu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27ecf0: 0x4600a346
    ctx->pc = 0x27ecf0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x27ecf4: 0xc09f63e
    ctx->pc = 0x27ECF4u;
    SET_GPR_U32(ctx, 31, 0x27ECFCu);
    ctx->pc = 0x27ECF8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x27D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScaleFX_0x27d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ECFCu; }
    }
    if (ctx->pc != 0x27ECFCu) { return; }
    ctx->pc = 0x27ECFCu;
    // 0x27ecfc: 0x200102d
    ctx->pc = 0x27ecfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed00: 0xdfbf0010
    ctx->pc = 0x27ed00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ed04: 0xdfb00000
    ctx->pc = 0x27ed04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ed08: 0xc7b40020
    ctx->pc = 0x27ed08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27ed0c: 0x3e00008
    ctx->pc = 0x27ED0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27ED10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27ECE8u: goto label_27ece8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27ED14u;
}
