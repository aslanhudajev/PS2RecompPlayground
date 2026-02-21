#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BlitQuad
// Address: 0x2d2d00 - 0x2d2dbc
void BlitQuad_0x2d2d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d2d00u;

    // 0x2d2d00: 0x27bdff90
    ctx->pc = 0x2d2d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d2d04: 0xffbf0060
    ctx->pc = 0x2d2d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d2d08: 0xffb50050
    ctx->pc = 0x2d2d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2d2d0c: 0xffb40040
    ctx->pc = 0x2d2d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d2d10: 0xffb30030
    ctx->pc = 0x2d2d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d2d14: 0xffb20020
    ctx->pc = 0x2d2d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d2d18: 0xffb10010
    ctx->pc = 0x2d2d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d2d1c: 0xffb00000
    ctx->pc = 0x2d2d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d2d20: 0x80a82d
    ctx->pc = 0x2d2d20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d24: 0xa0902d
    ctx->pc = 0x2d2d24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d28: 0xc0982d
    ctx->pc = 0x2d2d28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d2c: 0xe0882d
    ctx->pc = 0x2d2d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d30: 0x1a200019
    ctx->pc = 0x2D2D30u;
    {
        const bool branch_taken_0x2d2d30 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2D2D34u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d2d30) {
            ctx->pc = 0x2D2D98u;
            goto label_2d2d98;
        }
    }
    ctx->pc = 0x2D2D38u;
    // 0x2d2d38: 0xc0b0c48
    ctx->pc = 0x2D2D38u;
    SET_GPR_U32(ctx, 31, 0x2D2D40u);
    ctx->pc = 0x2C3120u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempQuad_0x2c3120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2D40u; }
    }
    if (ctx->pc != 0x2D2D40u) { return; }
    ctx->pc = 0x2D2D40u;
    // 0x2d2d40: 0x40802d
    ctx->pc = 0x2d2d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d44: 0x200202d
    ctx->pc = 0x2d2d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d48: 0x240282d
    ctx->pc = 0x2d2d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d4c: 0x3c013f80
    ctx->pc = 0x2d2d4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d2d50: 0x44816000
    ctx->pc = 0x2d2d50u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2d2d54: 0xc0b0df2
    ctx->pc = 0x2D2D54u;
    SET_GPR_U32(ctx, 31, 0x2D2D5Cu);
    ctx->pc = 0x2D2D58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2D5Cu; }
    }
    if (ctx->pc != 0x2D2D5Cu) { return; }
    ctx->pc = 0x2D2D5Cu;
    // 0x2d2d5c: 0x200202d
    ctx->pc = 0x2d2d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d60: 0x220282d
    ctx->pc = 0x2d2d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d64: 0xc0b0cf6
    ctx->pc = 0x2D2D64u;
    SET_GPR_U32(ctx, 31, 0x2D2D6Cu);
    ctx->pc = 0x2D2D68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2D6Cu; }
    }
    if (ctx->pc != 0x2D2D6Cu) { return; }
    ctx->pc = 0x2D2D6Cu;
    // 0x2d2d6c: 0x200202d
    ctx->pc = 0x2d2d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d70: 0x2a0282d
    ctx->pc = 0x2d2d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d74: 0xdfbf0060
    ctx->pc = 0x2d2d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d2d78: 0xdfb50050
    ctx->pc = 0x2d2d78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2d7c: 0xdfb40040
    ctx->pc = 0x2d2d7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2d80: 0xdfb30030
    ctx->pc = 0x2d2d80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2d84: 0xdfb20020
    ctx->pc = 0x2d2d84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2d88: 0xdfb10010
    ctx->pc = 0x2d2d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2d8c: 0xdfb00000
    ctx->pc = 0x2d2d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2d90: 0x80b0f40
    ctx->pc = 0x2D2D90u;
    ctx->pc = 0x2D2D94u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x2C3D00u;
    MBBlitSetColor_0x2c3d00(rdram, ctx, runtime); return;
    ctx->pc = 0x2D2D98u;
label_2d2d98:
    // 0x2d2d98: 0xdfbf0060
    ctx->pc = 0x2d2d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d2d9c: 0xdfb50050
    ctx->pc = 0x2d2d9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2da0: 0xdfb40040
    ctx->pc = 0x2d2da0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2da4: 0xdfb30030
    ctx->pc = 0x2d2da4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2da8: 0xdfb20020
    ctx->pc = 0x2d2da8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2dac: 0xdfb10010
    ctx->pc = 0x2d2dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2db0: 0xdfb00000
    ctx->pc = 0x2d2db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2db4: 0x3e00008
    ctx->pc = 0x2D2DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2DB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D2D98u: goto label_2d2d98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D2DBCu;
}
