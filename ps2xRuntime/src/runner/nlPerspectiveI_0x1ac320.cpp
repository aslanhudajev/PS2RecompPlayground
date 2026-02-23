#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPerspectiveI
// Address: 0x1ac320 - 0x1ac39c
void nlPerspectiveI_0x1ac320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPerspectiveI");


    ctx->pc = 0x1ac320u;

    // 0x1ac320: 0x27bdffc0
    ctx->pc = 0x1ac320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ac324: 0x7fbf0030
    ctx->pc = 0x1ac324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1ac328: 0x7fb10020
    ctx->pc = 0x1ac328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ac32c: 0x7fb00010
    ctx->pc = 0x1ac32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ac330: 0xe7b60008
    ctx->pc = 0x1ac330u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ac334: 0xe7b50004
    ctx->pc = 0x1ac334u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ac338: 0xe7b40000
    ctx->pc = 0x1ac338u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ac33c: 0x70808e28
    ctx->pc = 0x1ac33cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ac340: 0x46006586
    ctx->pc = 0x1ac340u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1ac344: 0x46006d46
    ctx->pc = 0x1ac344u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1ac348: 0x46007506
    ctx->pc = 0x1ac348u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x1ac34c: 0x70a08628
    ctx->pc = 0x1ac34cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ac350: 0xc069338
    ctx->pc = 0x1AC350u;
    SET_GPR_U32(ctx, 31, 0x1AC358u);
    ctx->pc = 0x1AC354u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1A4CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlMatrixMode_0x1a4ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC358u; }
        else if (ctx->pc != 0x1AC358u) { ctx->pc = 0x1AC358u; }
    }
    if (ctx->pc != 0x1AC358u) { return; }
    ctx->pc = 0x1AC358u;
    // 0x1ac358: 0xc06c20d
    ctx->pc = 0x1AC358u;
    SET_GPR_U32(ctx, 31, 0x1AC360u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC360u; }
        else if (ctx->pc != 0x1AC360u) { ctx->pc = 0x1AC360u; }
    }
    if (ctx->pc != 0x1AC360u) { return; }
    ctx->pc = 0x1AC360u;
    // 0x1ac360: 0x72202628
    ctx->pc = 0x1ac360u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ac364: 0x4600b306
    ctx->pc = 0x1ac364u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1ac368: 0x4600ab46
    ctx->pc = 0x1ac368u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1ac36c: 0xc06af68
    ctx->pc = 0x1AC36Cu;
    SET_GPR_U32(ctx, 31, 0x1AC374u);
    ctx->pc = 0x1AC370u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1ABDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPerspective_0x1abda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC374u; }
        else if (ctx->pc != 0x1AC374u) { ctx->pc = 0x1AC374u; }
    }
    if (ctx->pc != 0x1AC374u) { return; }
    ctx->pc = 0x1AC374u;
    // 0x1ac374: 0xc069338
    ctx->pc = 0x1AC374u;
    SET_GPR_U32(ctx, 31, 0x1AC37Cu);
    ctx->pc = 0x1AC378u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlMatrixMode_0x1a4ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC37Cu; }
        else if (ctx->pc != 0x1AC37Cu) { ctx->pc = 0x1AC37Cu; }
    }
    if (ctx->pc != 0x1AC37Cu) { return; }
    ctx->pc = 0x1AC37Cu;
    // 0x1ac37c: 0x7bbf0030
    ctx->pc = 0x1ac37cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac380: 0x7bb10020
    ctx->pc = 0x1ac380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac384: 0x7bb00010
    ctx->pc = 0x1ac384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac388: 0xc7b60008
    ctx->pc = 0x1ac388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ac38c: 0xc7b50004
    ctx->pc = 0x1ac38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ac390: 0xc7b40000
    ctx->pc = 0x1ac390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ac394: 0x3e00008
    ctx->pc = 0x1AC394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC398u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC39Cu;
}
