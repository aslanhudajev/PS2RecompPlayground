#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: IncLevel
// Address: 0x234be8 - 0x234c68
void IncLevel_0x234be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x234be8u;

    // 0x234be8: 0x27bdffd0
    ctx->pc = 0x234be8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234bec: 0xffbf0020
    ctx->pc = 0x234becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x234bf0: 0xffb10010
    ctx->pc = 0x234bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x234bf4: 0xffb00000
    ctx->pc = 0x234bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234bf8: 0xa0882d
    ctx->pc = 0x234bf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234bfc: 0x24022b00
    ctx->pc = 0x234bfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x234c00: 0x828018
    ctx->pc = 0x234c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x234c04: 0x3c020032
    ctx->pc = 0x234c04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x234c08: 0x24421bc0
    ctx->pc = 0x234c08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x234c0c: 0x2028021
    ctx->pc = 0x234c0cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x234c10: 0x8e042ac0
    ctx->pc = 0x234c10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x234c14: 0xc08d1fc
    ctx->pc = 0x234C14u;
    SET_GPR_U32(ctx, 31, 0x234C1Cu);
    ctx->pc = 0x234C18u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->pc = 0x2347F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelToExp_0x2347f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234C1Cu; }
    }
    if (ctx->pc != 0x234C1Cu) { return; }
    ctx->pc = 0x234C1Cu;
    // 0x234c1c: 0x8e031a1c
    ctx->pc = 0x234c1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 6684)));
    // 0x234c20: 0x431023
    ctx->pc = 0x234c20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x234c24: 0x200202d
    ctx->pc = 0x234c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c28: 0xc08d220
    ctx->pc = 0x234C28u;
    SET_GPR_U32(ctx, 31, 0x234C30u);
    ctx->pc = 0x234C2Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x234880u;
    {
        const uint32_t __entryPc = ctx->pc;
        ModifyExp_0x234880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234C30u; }
    }
    if (ctx->pc != 0x234C30u) { return; }
    ctx->pc = 0x234C30u;
    // 0x234c30: 0x44910000
    ctx->pc = 0x234c30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x234c34: 0x46800020
    ctx->pc = 0x234c34u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x234c38: 0x3c0142c8
    ctx->pc = 0x234c38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x234c3c: 0x44810800
    ctx->pc = 0x234c3cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x234c40: 0x46010002
    ctx->pc = 0x234c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x234c44: 0xc6011a10
    ctx->pc = 0x234c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234c48: 0x46010000
    ctx->pc = 0x234c48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x234c4c: 0xe6001a10
    ctx->pc = 0x234c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6672), bits); }
    // 0x234c50: 0x8e022ac0
    ctx->pc = 0x234c50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x234c54: 0xdfbf0020
    ctx->pc = 0x234c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234c58: 0xdfb10010
    ctx->pc = 0x234c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234c5c: 0xdfb00000
    ctx->pc = 0x234c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234c60: 0x3e00008
    ctx->pc = 0x234C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234C64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234C68u;
}
