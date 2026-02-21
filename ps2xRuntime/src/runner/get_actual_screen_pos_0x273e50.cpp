#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_actual_screen_pos
// Address: 0x273e50 - 0x273eb8
void get_actual_screen_pos_0x273e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x273e50u;

    // 0x273e50: 0x27bdffc0
    ctx->pc = 0x273e50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x273e54: 0xffbf0030
    ctx->pc = 0x273e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x273e58: 0xffb10020
    ctx->pc = 0x273e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x273e5c: 0xffb00010
    ctx->pc = 0x273e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x273e60: 0xa0802d
    ctx->pc = 0x273e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273e64: 0xc0882d
    ctx->pc = 0x273e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273e68: 0x3c02003a
    ctx->pc = 0x273e68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x273e6c: 0x8c451bd0
    ctx->pc = 0x273e6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x273e70: 0xe0202d
    ctx->pc = 0x273e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273e74: 0x24a50070
    ctx->pc = 0x273e74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 112));
    // 0x273e78: 0x302d
    ctx->pc = 0x273e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273e7c: 0xc0b45e8
    ctx->pc = 0x273E7Cu;
    SET_GPR_U32(ctx, 31, 0x273E84u);
    ctx->pc = 0x273E80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D17A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowProject_0x2d17a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273E84u; }
    }
    if (ctx->pc != 0x273E84u) { return; }
    ctx->pc = 0x273E84u;
    // 0x273e84: 0x87a20000
    ctx->pc = 0x273e84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273e88: 0x44820000
    ctx->pc = 0x273e88u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x273e8c: 0x46800020
    ctx->pc = 0x273e8cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x273e90: 0xe6000000
    ctx->pc = 0x273e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x273e94: 0x87a20002
    ctx->pc = 0x273e94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x273e98: 0x44820000
    ctx->pc = 0x273e98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x273e9c: 0x46800020
    ctx->pc = 0x273e9cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x273ea0: 0xe6200000
    ctx->pc = 0x273ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x273ea4: 0xdfbf0030
    ctx->pc = 0x273ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273ea8: 0xdfb10020
    ctx->pc = 0x273ea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273eac: 0xdfb00010
    ctx->pc = 0x273eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273eb0: 0x3e00008
    ctx->pc = 0x273EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273EB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273EB8u;
}
