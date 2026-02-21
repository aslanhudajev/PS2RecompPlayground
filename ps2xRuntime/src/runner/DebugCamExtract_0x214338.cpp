#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DebugCamExtract
// Address: 0x214338 - 0x2143dc
void DebugCamExtract_0x214338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x214338u;

    // 0x214338: 0x27bdffd0
    ctx->pc = 0x214338u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21433c: 0xffbf0020
    ctx->pc = 0x21433cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x214340: 0xffb10010
    ctx->pc = 0x214340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x214344: 0xffb00000
    ctx->pc = 0x214344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214348: 0x3c020032
    ctx->pc = 0x214348u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21434c: 0x8c42f7cc
    ctx->pc = 0x21434cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965196)));
    // 0x214350: 0x14400003
    ctx->pc = 0x214350u;
    {
        const bool branch_taken_0x214350 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x214354u;
        SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
        if (branch_taken_0x214350) {
            ctx->pc = 0x214360u;
            goto label_214360;
        }
    }
    ctx->pc = 0x214358u;
    // 0x214358: 0xc084d2a
    ctx->pc = 0x214358u;
    SET_GPR_U32(ctx, 31, 0x214360u);
    ctx->pc = 0x2134A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DebugCamInit_0x2134a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214360u; }
    }
    if (ctx->pc != 0x214360u) { return; }
    ctx->pc = 0x214360u;
label_214360:
    // 0x214360: 0x8e241bd0
    ctx->pc = 0x214360u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7120)));
    // 0x214364: 0x3c10003c
    ctx->pc = 0x214364u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x214368: 0x24840070
    ctx->pc = 0x214368u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 112));
    // 0x21436c: 0xc0b549e
    ctx->pc = 0x21436Cu;
    SET_GPR_U32(ctx, 31, 0x214374u);
    ctx->pc = 0x214370u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294954288)));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214374u; }
    }
    if (ctx->pc != 0x214374u) { return; }
    ctx->pc = 0x214374u;
    // 0x214374: 0x8e06cd30
    ctx->pc = 0x214374u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294954288)));
    // 0x214378: 0x8e221bd0
    ctx->pc = 0x214378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7120)));
    // 0x21437c: 0xc44300a0
    ctx->pc = 0x21437cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214380: 0xe4c30030
    ctx->pc = 0x214380u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x214384: 0xc44200a4
    ctx->pc = 0x214384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214388: 0xe4c20034
    ctx->pc = 0x214388u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x21438c: 0xc44100a8
    ctx->pc = 0x21438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214390: 0xe4c10038
    ctx->pc = 0x214390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x214394: 0xc4c00020
    ctx->pc = 0x214394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214398: 0xe4c000e0
    ctx->pc = 0x214398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 224), bits); }
    // 0x21439c: 0xc4c00024
    ctx->pc = 0x21439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2143a0: 0xe4c000e4
    ctx->pc = 0x2143a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 228), bits); }
    // 0x2143a4: 0xc4c00028
    ctx->pc = 0x2143a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2143a8: 0xe4c000e8
    ctx->pc = 0x2143a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 232), bits); }
    // 0x2143ac: 0xe4c300a4
    ctx->pc = 0x2143acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 164), bits); }
    // 0x2143b0: 0xe4c200a8
    ctx->pc = 0x2143b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 168), bits); }
    // 0x2143b4: 0xe4c100ac
    ctx->pc = 0x2143b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 172), bits); }
    // 0x2143b8: 0xacc000f4
    ctx->pc = 0x2143b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 244), GPR_U32(ctx, 0));
    // 0x2143bc: 0x24c400e0
    ctx->pc = 0x2143bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 224));
    // 0x2143c0: 0x24c500ec
    ctx->pc = 0x2143c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 236));
    // 0x2143c4: 0x24c60104
    ctx->pc = 0x2143c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 260));
    // 0x2143c8: 0xdfbf0020
    ctx->pc = 0x2143c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2143cc: 0xdfb10010
    ctx->pc = 0x2143ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2143d0: 0xdfb00000
    ctx->pc = 0x2143d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2143d4: 0x80b59e6
    ctx->pc = 0x2143D4u;
    ctx->pc = 0x2143D8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2D6798u;
    GetYawPitch_0x2d6798(rdram, ctx, runtime); return;
    ctx->pc = 0x2143DCu;
}
