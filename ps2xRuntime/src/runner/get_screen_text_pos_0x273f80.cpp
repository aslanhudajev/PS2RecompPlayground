#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_screen_text_pos
// Address: 0x273f80 - 0x273fd0
void get_screen_text_pos_0x273f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x273f80u;

    // 0x273f80: 0x27bdffc0
    ctx->pc = 0x273f80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x273f84: 0xffbf0030
    ctx->pc = 0x273f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x273f88: 0xffb10020
    ctx->pc = 0x273f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x273f8c: 0xffb00010
    ctx->pc = 0x273f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x273f90: 0xa0802d
    ctx->pc = 0x273f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f94: 0xc0882d
    ctx->pc = 0x273f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f98: 0x3a0202d
    ctx->pc = 0x273f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f9c: 0xc0b109a
    ctx->pc = 0x273F9Cu;
    SET_GPR_U32(ctx, 31, 0x273FA4u);
    ctx->pc = 0x273FA0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C4268u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWorldToScreen_0x2c4268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273FA4u; }
    }
    if (ctx->pc != 0x273FA4u) { return; }
    ctx->pc = 0x273FA4u;
    // 0x273fa4: 0xc7a00000
    ctx->pc = 0x273fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273fa8: 0x46000064
    ctx->pc = 0x273fa8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x273fac: 0xe6010000
    ctx->pc = 0x273facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x273fb0: 0xc7a00004
    ctx->pc = 0x273fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273fb4: 0x46000064
    ctx->pc = 0x273fb4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x273fb8: 0xe6210000
    ctx->pc = 0x273fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x273fbc: 0xdfbf0030
    ctx->pc = 0x273fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273fc0: 0xdfb10020
    ctx->pc = 0x273fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273fc4: 0xdfb00010
    ctx->pc = 0x273fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273fc8: 0x3e00008
    ctx->pc = 0x273FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273FCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273FD0u;
}
