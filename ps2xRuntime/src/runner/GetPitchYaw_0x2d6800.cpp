#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetPitchYaw
// Address: 0x2d6800 - 0x2d6864
void GetPitchYaw_0x2d6800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d6800u;

    // 0x2d6800: 0x27bdffc0
    ctx->pc = 0x2d6800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d6804: 0xffbf0030
    ctx->pc = 0x2d6804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d6808: 0xffb20020
    ctx->pc = 0x2d6808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d680c: 0xffb10010
    ctx->pc = 0x2d680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d6810: 0xffb00000
    ctx->pc = 0x2d6810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6814: 0x80802d
    ctx->pc = 0x2d6814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6818: 0xa0882d
    ctx->pc = 0x2d6818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d681c: 0xc0902d
    ctx->pc = 0x2d681cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6820: 0xc60c0004
    ctx->pc = 0x2d6820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6824: 0xc0ba04a
    ctx->pc = 0x2D6824u;
    SET_GPR_U32(ctx, 31, 0x2D682Cu);
    ctx->pc = 0x2D6828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D682Cu; }
    }
    if (ctx->pc != 0x2D682Cu) { return; }
    ctx->pc = 0x2D682Cu;
    // 0x2d682c: 0xe6200000
    ctx->pc = 0x2d682cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d6830: 0xc60c0004
    ctx->pc = 0x2d6830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6834: 0xc0b5c34
    ctx->pc = 0x2D6834u;
    SET_GPR_U32(ctx, 31, 0x2D683Cu);
    ctx->pc = 0x2D6838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D683Cu; }
    }
    if (ctx->pc != 0x2D683Cu) { return; }
    ctx->pc = 0x2D683Cu;
    // 0x2d683c: 0xc60c0000
    ctx->pc = 0x2d683cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6840: 0xc0ba04a
    ctx->pc = 0x2D6840u;
    SET_GPR_U32(ctx, 31, 0x2D6848u);
    ctx->pc = 0x2D6844u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6848u; }
    }
    if (ctx->pc != 0x2D6848u) { return; }
    ctx->pc = 0x2D6848u;
    // 0x2d6848: 0xe6400000
    ctx->pc = 0x2d6848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2d684c: 0xdfbf0030
    ctx->pc = 0x2d684cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6850: 0xdfb20020
    ctx->pc = 0x2d6850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6854: 0xdfb10010
    ctx->pc = 0x2d6854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6858: 0xdfb00000
    ctx->pc = 0x2d6858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d685c: 0x3e00008
    ctx->pc = 0x2D685Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6860u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D6864u;
}
