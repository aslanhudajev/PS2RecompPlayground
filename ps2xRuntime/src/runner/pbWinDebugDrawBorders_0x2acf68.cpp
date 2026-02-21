#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbWinDebugDrawBorders
// Address: 0x2acf68 - 0x2ad0c4
void pbWinDebugDrawBorders_0x2acf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2acf68u;

    // 0x2acf68: 0x27bdffb0
    ctx->pc = 0x2acf68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2acf6c: 0xffbf0020
    ctx->pc = 0x2acf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2acf70: 0xffb10010
    ctx->pc = 0x2acf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2acf74: 0xffb00000
    ctx->pc = 0x2acf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2acf78: 0xe7b60040
    ctx->pc = 0x2acf78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2acf7c: 0xe7b50038
    ctx->pc = 0x2acf7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2acf80: 0xe7b40030
    ctx->pc = 0x2acf80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2acf84: 0x3c020036
    ctx->pc = 0x2acf84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2acf88: 0x8c50dee0
    ctx->pc = 0x2acf88u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2acf8c: 0x3c110037
    ctx->pc = 0x2acf8cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)55 << 16));
    // 0x2acf90: 0x8e248400
    ctx->pc = 0x2acf90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294935552)));
    // 0x2acf94: 0x8c830000
    ctx->pc = 0x2acf94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2acf98: 0x24020001
    ctx->pc = 0x2acf98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acf9c: 0x14620042
    ctx->pc = 0x2ACF9Cu;
    {
        const bool branch_taken_0x2acf9c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2ACFA0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2acf9c) {
            ctx->pc = 0x2AD0A8u;
            goto label_2ad0a8;
        }
    }
    ctx->pc = 0x2ACFA4u;
    // 0x2acfa4: 0x8c82001c
    ctx->pc = 0x2acfa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2acfa8: 0x50400040
    ctx->pc = 0x2ACFA8u;
    {
        const bool branch_taken_0x2acfa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2acfa8) {
            ctx->pc = 0x2ACFACu;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x2AD0ACu;
            goto label_2ad0ac;
        }
    }
    ctx->pc = 0x2ACFB0u;
    // 0x2acfb0: 0x3c01bf80
    ctx->pc = 0x2acfb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2acfb4: 0x4481b000
    ctx->pc = 0x2acfb4u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x2acfb8: 0x8e020010
    ctx->pc = 0x2acfb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2acfbc: 0xc44c0020
    ctx->pc = 0x2acfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2acfc0: 0x46806320
    ctx->pc = 0x2acfc0u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2acfc4: 0x3c013f80
    ctx->pc = 0x2acfc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2acfc8: 0x4481a000
    ctx->pc = 0x2acfc8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2acfcc: 0xc48f000c
    ctx->pc = 0x2acfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2acfd0: 0x460fa3c1
    ctx->pc = 0x2acfd0u;
    ctx->f[15] = FPU_SUB_S(ctx->f[20], ctx->f[15]);
    // 0x2acfd4: 0x460f6302
    ctx->pc = 0x2acfd4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[15]);
    // 0x2acfd8: 0x3c013f00
    ctx->pc = 0x2acfd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2acfdc: 0x4481a800
    ctx->pc = 0x2acfdcu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x2acfe0: 0xc4410020
    ctx->pc = 0x2acfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2acfe4: 0x46800860
    ctx->pc = 0x2acfe4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2acfe8: 0x460f0b42
    ctx->pc = 0x2acfe8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x2acfec: 0x46156b42
    ctx->pc = 0x2acfecu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[21]);
    // 0x2acff0: 0xc44e0024
    ctx->pc = 0x2acff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2acff4: 0x468073a0
    ctx->pc = 0x2acff4u;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2acff8: 0x460f7382
    ctx->pc = 0x2acff8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[15]);
    // 0x2acffc: 0xc4400024
    ctx->pc = 0x2acffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad000: 0x46800020
    ctx->pc = 0x2ad000u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ad004: 0x460f03c2
    ctx->pc = 0x2ad004u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x2ad008: 0x46157bc2
    ctx->pc = 0x2ad008u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[21]);
    // 0x2ad00c: 0x46156302
    ctx->pc = 0x2ad00cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x2ad010: 0x460d0b41
    ctx->pc = 0x2ad010u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x2ad014: 0x46157382
    ctx->pc = 0x2ad014u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[21]);
    // 0x2ad018: 0x460f03c1
    ctx->pc = 0x2ad018u;
    ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[15]);
    // 0x2ad01c: 0x4600b406
    ctx->pc = 0x2ad01cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x2ad020: 0xc0a8f4a
    ctx->pc = 0x2AD020u;
    SET_GPR_U32(ctx, 31, 0x2AD028u);
    ctx->pc = 0x2AD024u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->pc = 0x2A3D28u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbBoxDraw_0x2a3d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD028u; }
    }
    if (ctx->pc != 0x2AD028u) { return; }
    ctx->pc = 0x2AD028u;
    // 0x2ad028: 0x8e020010
    ctx->pc = 0x2ad028u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ad02c: 0xc44c0020
    ctx->pc = 0x2ad02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ad030: 0x46806320
    ctx->pc = 0x2ad030u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2ad034: 0x8e238400
    ctx->pc = 0x2ad034u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294935552)));
    // 0x2ad038: 0xc4600010
    ctx->pc = 0x2ad038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad03c: 0x4600a501
    ctx->pc = 0x2ad03cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2ad040: 0x46146302
    ctx->pc = 0x2ad040u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x2ad044: 0xc4410020
    ctx->pc = 0x2ad044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad048: 0x46800860
    ctx->pc = 0x2ad048u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2ad04c: 0x46140b42
    ctx->pc = 0x2ad04cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2ad050: 0x46156b42
    ctx->pc = 0x2ad050u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[21]);
    // 0x2ad054: 0xc44e0024
    ctx->pc = 0x2ad054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ad058: 0x468073a0
    ctx->pc = 0x2ad058u;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2ad05c: 0x46147382
    ctx->pc = 0x2ad05cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x2ad060: 0xc4400024
    ctx->pc = 0x2ad060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad064: 0x46800020
    ctx->pc = 0x2ad064u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ad068: 0x46140502
    ctx->pc = 0x2ad068u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2ad06c: 0x4615a502
    ctx->pc = 0x2ad06cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x2ad070: 0x46156302
    ctx->pc = 0x2ad070u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x2ad074: 0x460d0b41
    ctx->pc = 0x2ad074u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x2ad078: 0x46157382
    ctx->pc = 0x2ad078u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[21]);
    // 0x2ad07c: 0x461403c1
    ctx->pc = 0x2ad07cu;
    ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2ad080: 0x4600b406
    ctx->pc = 0x2ad080u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x2ad084: 0x8c640018
    ctx->pc = 0x2ad084u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2ad088: 0xdfbf0020
    ctx->pc = 0x2ad088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad08c: 0xdfb10010
    ctx->pc = 0x2ad08cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad090: 0xdfb00000
    ctx->pc = 0x2ad090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad094: 0xc7b60040
    ctx->pc = 0x2ad094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ad098: 0xc7b50038
    ctx->pc = 0x2ad098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ad09c: 0xc7b40030
    ctx->pc = 0x2ad09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ad0a0: 0x80a8f4a
    ctx->pc = 0x2AD0A0u;
    ctx->pc = 0x2AD0A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x2A3D28u;
    pbBoxDraw_0x2a3d28(rdram, ctx, runtime); return;
    ctx->pc = 0x2AD0A8u;
label_2ad0a8:
    // 0x2ad0a8: 0xdfb10010
    ctx->pc = 0x2ad0a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ad0ac:
    // 0x2ad0ac: 0xdfb00000
    ctx->pc = 0x2ad0acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad0b0: 0xc7b60040
    ctx->pc = 0x2ad0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ad0b4: 0xc7b50038
    ctx->pc = 0x2ad0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ad0b8: 0xc7b40030
    ctx->pc = 0x2ad0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ad0bc: 0x3e00008
    ctx->pc = 0x2AD0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD0C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AD0A8u: goto label_2ad0a8;
            case 0x2AD0ACu: goto label_2ad0ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AD0C4u;
}
