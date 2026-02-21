#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetPlayerLevel
// Address: 0x234c68 - 0x234cfc
void SetPlayerLevel_0x234c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x234c68u;

    // 0x234c68: 0x27bdffc0
    ctx->pc = 0x234c68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x234c6c: 0xffbf0030
    ctx->pc = 0x234c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x234c70: 0xffb20020
    ctx->pc = 0x234c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x234c74: 0xffb10010
    ctx->pc = 0x234c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x234c78: 0xffb00000
    ctx->pc = 0x234c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234c7c: 0xa0882d
    ctx->pc = 0x234c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c80: 0x24022b00
    ctx->pc = 0x234c80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x234c84: 0x828018
    ctx->pc = 0x234c84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x234c88: 0x3c020032
    ctx->pc = 0x234c88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x234c8c: 0x24421bc0
    ctx->pc = 0x234c8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x234c90: 0x2028021
    ctx->pc = 0x234c90u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x234c94: 0x2632ffff
    ctx->pc = 0x234c94u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x234c98: 0xc08d1fc
    ctx->pc = 0x234C98u;
    SET_GPR_U32(ctx, 31, 0x234CA0u);
    ctx->pc = 0x234C9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2347F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelToExp_0x2347f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234CA0u; }
    }
    if (ctx->pc != 0x234CA0u) { return; }
    ctx->pc = 0x234CA0u;
    // 0x234ca0: 0xae021a1c
    ctx->pc = 0x234ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6684), GPR_U32(ctx, 2));
    // 0x234ca4: 0xae112ac0
    ctx->pc = 0x234ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10944), GPR_U32(ctx, 17));
    // 0x234ca8: 0xc08bfe0
    ctx->pc = 0x234CA8u;
    SET_GPR_U32(ctx, 31, 0x234CB0u);
    ctx->pc = 0x234CACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22FF80u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_player_default_atts_0x22ff80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234CB0u; }
    }
    if (ctx->pc != 0x234CB0u) { return; }
    ctx->pc = 0x234CB0u;
    // 0x234cb0: 0x200202d
    ctx->pc = 0x234cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234cb4: 0x8e05000c
    ctx->pc = 0x234cb4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x234cb8: 0xc08af08
    ctx->pc = 0x234CB8u;
    SET_GPR_U32(ctx, 31, 0x234CC0u);
    ctx->pc = 0x234CBCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22BC20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerUpdateAtts_0x22bc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234CC0u; }
    }
    if (ctx->pc != 0x234CC0u) { return; }
    ctx->pc = 0x234CC0u;
    // 0x234cc0: 0x44920000
    ctx->pc = 0x234cc0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 18);
    // 0x234cc4: 0x46800020
    ctx->pc = 0x234cc4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x234cc8: 0x3c0142c8
    ctx->pc = 0x234cc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x234ccc: 0x44810800
    ctx->pc = 0x234cccu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x234cd0: 0x46010002
    ctx->pc = 0x234cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x234cd4: 0x3c0143fa
    ctx->pc = 0x234cd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17402 << 16));
    // 0x234cd8: 0x44810800
    ctx->pc = 0x234cd8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x234cdc: 0x46010000
    ctx->pc = 0x234cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x234ce0: 0xe6001a10
    ctx->pc = 0x234ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6672), bits); }
    // 0x234ce4: 0xdfbf0030
    ctx->pc = 0x234ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234ce8: 0xdfb20020
    ctx->pc = 0x234ce8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234cec: 0xdfb10010
    ctx->pc = 0x234cecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234cf0: 0xdfb00000
    ctx->pc = 0x234cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234cf4: 0x3e00008
    ctx->pc = 0x234CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234CF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234CFCu;
}
