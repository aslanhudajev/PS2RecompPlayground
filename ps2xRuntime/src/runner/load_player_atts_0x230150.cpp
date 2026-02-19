#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: load_player_atts
// Address: 0x230150 - 0x2301a8
void load_player_atts_0x230150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x230150u;

    // 0x230150: 0x27bdffd0
    ctx->pc = 0x230150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x230154: 0xffbf0020
    ctx->pc = 0x230154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x230158: 0xffb10010
    ctx->pc = 0x230158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23015c: 0xffb00000
    ctx->pc = 0x23015cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230160: 0x80802d
    ctx->pc = 0x230160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230164: 0xc08c014
    ctx->pc = 0x230164u;
    SET_GPR_U32(ctx, 31, 0x23016Cu);
    ctx->pc = 0x230168u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x230050u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_player_atts_0x230050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23016Cu; }
    }
    if (ctx->pc != 0x23016Cu) { return; }
    ctx->pc = 0x23016Cu;
    // 0x23016c: 0x24020018
    ctx->pc = 0x23016cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x230170: 0x2228818
    ctx->pc = 0x230170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x230174: 0x2111021
    ctx->pc = 0x230174u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x230178: 0x8c4409ac
    ctx->pc = 0x230178u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2476)));
    // 0x23017c: 0xc08d20c
    ctx->pc = 0x23017Cu;
    SET_GPR_U32(ctx, 31, 0x230184u);
    ctx->pc = 0x230180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6684), GPR_U32(ctx, 4));
    ctx->pc = 0x234830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExpToLevel_0x234830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230184u; }
    }
    if (ctx->pc != 0x230184u) { return; }
    ctx->pc = 0x230184u;
    // 0x230184: 0xae022ac0
    ctx->pc = 0x230184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10944), GPR_U32(ctx, 2));
    // 0x230188: 0x2118821
    ctx->pc = 0x230188u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x23018c: 0xc62009b0
    ctx->pc = 0x23018cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230190: 0xe6001a10
    ctx->pc = 0x230190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6672), bits); }
    // 0x230194: 0xdfbf0020
    ctx->pc = 0x230194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230198: 0xdfb10010
    ctx->pc = 0x230198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23019c: 0xdfb00000
    ctx->pc = 0x23019cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2301a0: 0x3e00008
    ctx->pc = 0x2301A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2301A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2301A8u;
}
