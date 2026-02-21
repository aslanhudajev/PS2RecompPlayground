#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetYawPitch
// Address: 0x2d6798 - 0x2d67fc
void GetYawPitch_0x2d6798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d6798u;

    // 0x2d6798: 0x27bdffc0
    ctx->pc = 0x2d6798u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d679c: 0xffbf0030
    ctx->pc = 0x2d679cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d67a0: 0xffb20020
    ctx->pc = 0x2d67a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d67a4: 0xffb10010
    ctx->pc = 0x2d67a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d67a8: 0xffb00000
    ctx->pc = 0x2d67a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d67ac: 0x80802d
    ctx->pc = 0x2d67acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d67b0: 0xa0882d
    ctx->pc = 0x2d67b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d67b4: 0xc0902d
    ctx->pc = 0x2d67b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d67b8: 0xc60c0000
    ctx->pc = 0x2d67b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d67bc: 0xc0ba04a
    ctx->pc = 0x2D67BCu;
    SET_GPR_U32(ctx, 31, 0x2D67C4u);
    ctx->pc = 0x2D67C0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D67C4u; }
    }
    if (ctx->pc != 0x2D67C4u) { return; }
    ctx->pc = 0x2D67C4u;
    // 0x2d67c4: 0xe6200000
    ctx->pc = 0x2d67c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d67c8: 0xc60c0000
    ctx->pc = 0x2d67c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d67cc: 0xc0b5c34
    ctx->pc = 0x2D67CCu;
    SET_GPR_U32(ctx, 31, 0x2D67D4u);
    ctx->pc = 0x2D67D0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D67D4u; }
    }
    if (ctx->pc != 0x2D67D4u) { return; }
    ctx->pc = 0x2D67D4u;
    // 0x2d67d4: 0xc60c0004
    ctx->pc = 0x2d67d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d67d8: 0xc0ba04a
    ctx->pc = 0x2D67D8u;
    SET_GPR_U32(ctx, 31, 0x2D67E0u);
    ctx->pc = 0x2D67DCu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D67E0u; }
    }
    if (ctx->pc != 0x2D67E0u) { return; }
    ctx->pc = 0x2D67E0u;
    // 0x2d67e0: 0xe6400000
    ctx->pc = 0x2d67e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2d67e4: 0xdfbf0030
    ctx->pc = 0x2d67e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d67e8: 0xdfb20020
    ctx->pc = 0x2d67e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d67ec: 0xdfb10010
    ctx->pc = 0x2d67ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d67f0: 0xdfb00000
    ctx->pc = 0x2d67f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d67f4: 0x3e00008
    ctx->pc = 0x2D67F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D67F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D67FCu;
}
