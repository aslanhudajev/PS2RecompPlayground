#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CalcLookdir
// Address: 0x213c50 - 0x213c9c
void CalcLookdir_0x213c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x213c50u;

    // 0x213c50: 0x27bdffd0
    ctx->pc = 0x213c50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213c54: 0xffbf0010
    ctx->pc = 0x213c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x213c58: 0xffb00000
    ctx->pc = 0x213c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213c5c: 0xe7b40020
    ctx->pc = 0x213c5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x213c60: 0x80802d
    ctx->pc = 0x213c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c64: 0x46006d06
    ctx->pc = 0x213c64u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x213c68: 0x3c04003a
    ctx->pc = 0x213c68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x213c6c: 0x24842520
    ctx->pc = 0x213c6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9504));
    // 0x213c70: 0x200282d
    ctx->pc = 0x213c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c74: 0xc0b57e6
    ctx->pc = 0x213C74u;
    SET_GPR_U32(ctx, 31, 0x213C7Cu);
    ctx->pc = 0x213C78u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213C7Cu; }
    }
    if (ctx->pc != 0x213C7Cu) { return; }
    ctx->pc = 0x213C7Cu;
    // 0x213c7c: 0x200202d
    ctx->pc = 0x213c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c80: 0x200282d
    ctx->pc = 0x213c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c84: 0x4600a307
    ctx->pc = 0x213c84u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x213c88: 0xdfbf0010
    ctx->pc = 0x213c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213c8c: 0xdfb00000
    ctx->pc = 0x213c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213c90: 0xc7b40020
    ctx->pc = 0x213c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x213c94: 0x80b580a
    ctx->pc = 0x213C94u;
    ctx->pc = 0x213C98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2D6028u;
    PitchVec3_0x2d6028(rdram, ctx, runtime); return;
    ctx->pc = 0x213C9Cu;
}
