#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_screen_pos
// Address: 0x273de0 - 0x273e50
void get_screen_pos_0x273de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x273de0u;

    // 0x273de0: 0x27bdffc0
    ctx->pc = 0x273de0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x273de4: 0xffbf0030
    ctx->pc = 0x273de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x273de8: 0xffb10020
    ctx->pc = 0x273de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x273dec: 0xffb00010
    ctx->pc = 0x273decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x273df0: 0xa0802d
    ctx->pc = 0x273df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273df4: 0xc0882d
    ctx->pc = 0x273df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273df8: 0x240201a0
    ctx->pc = 0x273df8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x273dfc: 0x821018
    ctx->pc = 0x273dfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x273e00: 0x3c050034
    ctx->pc = 0x273e00u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x273e04: 0x24a5eb70
    ctx->pc = 0x273e04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294962032));
    // 0x273e08: 0xe0202d
    ctx->pc = 0x273e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273e0c: 0x452821
    ctx->pc = 0x273e0cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x273e10: 0x302d
    ctx->pc = 0x273e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273e14: 0xc0b45e8
    ctx->pc = 0x273E14u;
    SET_GPR_U32(ctx, 31, 0x273E1Cu);
    ctx->pc = 0x273E18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D17A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowProject_0x2d17a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273E1Cu; }
    }
    if (ctx->pc != 0x273E1Cu) { return; }
    ctx->pc = 0x273E1Cu;
    // 0x273e1c: 0x87a20000
    ctx->pc = 0x273e1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273e20: 0x44820000
    ctx->pc = 0x273e20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x273e24: 0x46800020
    ctx->pc = 0x273e24u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x273e28: 0xe6000000
    ctx->pc = 0x273e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x273e2c: 0x87a20002
    ctx->pc = 0x273e2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x273e30: 0x44820000
    ctx->pc = 0x273e30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x273e34: 0x46800020
    ctx->pc = 0x273e34u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x273e38: 0xe6200000
    ctx->pc = 0x273e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x273e3c: 0xdfbf0030
    ctx->pc = 0x273e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273e40: 0xdfb10020
    ctx->pc = 0x273e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273e44: 0xdfb00010
    ctx->pc = 0x273e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273e48: 0x3e00008
    ctx->pc = 0x273E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273E4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273E50u;
}
