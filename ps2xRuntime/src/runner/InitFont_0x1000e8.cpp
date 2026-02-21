#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitFont
// Address: 0x1000e8 - 0x1001a4
void InitFont_0x1000e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1000e8u;

    // 0x1000e8: 0x27bdffa0
    ctx->pc = 0x1000e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1000ec: 0x24060200
    ctx->pc = 0x1000ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1000f0: 0xffb30030
    ctx->pc = 0x1000f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1000f4: 0x382d
    ctx->pc = 0x1000f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1000f8: 0xffb20020
    ctx->pc = 0x1000f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1000fc: 0xa0982d
    ctx->pc = 0x1000fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100100: 0x80902d
    ctx->pc = 0x100100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100104: 0xe7b50058
    ctx->pc = 0x100104u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x100108: 0xe7b40050
    ctx->pc = 0x100108u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x10010c: 0x46006d46
    ctx->pc = 0x10010cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x100110: 0x46006506
    ctx->pc = 0x100110u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x100114: 0xffb10010
    ctx->pc = 0x100114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x100118: 0xffb00000
    ctx->pc = 0x100118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10011c: 0x24041400
    ctx->pc = 0x10011cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5120));
    // 0x100120: 0xffbf0040
    ctx->pc = 0x100120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x100124: 0xc0428ba
    ctx->pc = 0x100124u;
    SET_GPR_U32(ctx, 31, 0x10012Cu);
    ctx->pc = 0x100128u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 640));
    ctx->pc = 0x10A2E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontInit_0x10a2e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10012Cu; }
    }
    if (ctx->pc != 0x10012Cu) { return; }
    ctx->pc = 0x10012Cu;
    // 0x10012c: 0x3c100017
    ctx->pc = 0x10012cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x100130: 0x40882d
    ctx->pc = 0x100130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100134: 0x26102a00
    ctx->pc = 0x100134u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 10752));
    // 0x100138: 0x220282d
    ctx->pc = 0x100138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10013c: 0xc04ace4
    ctx->pc = 0x10013Cu;
    SET_GPR_U32(ctx, 31, 0x100144u);
    ctx->pc = 0x100140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100144u; }
    }
    if (ctx->pc != 0x100144u) { return; }
    ctx->pc = 0x100144u;
    // 0x100144: 0x3c040016
    ctx->pc = 0x100144u;
    SET_GPR_U32(ctx, 4, ((uint32_t)22 << 16));
    // 0x100148: 0x220382d
    ctx->pc = 0x100148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10014c: 0x24844f80
    ctx->pc = 0x10014cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20352));
    // 0x100150: 0x282d
    ctx->pc = 0x100150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100154: 0xc042564
    ctx->pc = 0x100154u;
    SET_GPR_U32(ctx, 31, 0x10015Cu);
    ctx->pc = 0x100158u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 182));
    ctx->pc = 0x109590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontLoadFont_0x109590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10015Cu; }
    }
    if (ctx->pc != 0x10015Cu) { return; }
    ctx->pc = 0x10015Cu;
    // 0x10015c: 0x200202d
    ctx->pc = 0x10015cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100160: 0xc04ace4
    ctx->pc = 0x100160u;
    SET_GPR_U32(ctx, 31, 0x100168u);
    ctx->pc = 0x100164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100168u; }
    }
    if (ctx->pc != 0x100168u) { return; }
    ctx->pc = 0x100168u;
    // 0x100168: 0xc042922
    ctx->pc = 0x100168u;
    SET_GPR_U32(ctx, 31, 0x100170u);
    ctx->pc = 0x10016Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A488u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontSetFont_0x10a488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100170u; }
    }
    if (ctx->pc != 0x100170u) { return; }
    ctx->pc = 0x100170u;
    // 0x100170: 0xc042924
    ctx->pc = 0x100170u;
    SET_GPR_U32(ctx, 31, 0x100178u);
    ctx->pc = 0x100174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontSetColour_0x10a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100178u; }
    }
    if (ctx->pc != 0x100178u) { return; }
    ctx->pc = 0x100178u;
    // 0x100178: 0x4600a306
    ctx->pc = 0x100178u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10017c: 0x4600ab46
    ctx->pc = 0x10017cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x100180: 0xdfbf0040
    ctx->pc = 0x100180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100184: 0xdfb30030
    ctx->pc = 0x100184u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100188: 0xdfb20020
    ctx->pc = 0x100188u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10018c: 0xdfb10010
    ctx->pc = 0x10018cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100190: 0xdfb00000
    ctx->pc = 0x100190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100194: 0xc7b50058
    ctx->pc = 0x100194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x100198: 0xc7b40050
    ctx->pc = 0x100198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10019c: 0x8042928
    ctx->pc = 0x10019Cu;
    ctx->pc = 0x1001A0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x10A4A0u;
    sceeFontSetScale_0x10a4a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1001A4u;
}
