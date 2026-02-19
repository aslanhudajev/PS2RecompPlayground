#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: blit_bar
// Address: 0x2d2dc0 - 0x2d2e70
void blit_bar_0x2d2dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d2dc0u;

    // 0x2d2dc0: 0x27bdffa0
    ctx->pc = 0x2d2dc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d2dc4: 0xffbf0050
    ctx->pc = 0x2d2dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d2dc8: 0xffb40040
    ctx->pc = 0x2d2dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d2dcc: 0xffb30030
    ctx->pc = 0x2d2dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d2dd0: 0xffb20020
    ctx->pc = 0x2d2dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d2dd4: 0xffb10010
    ctx->pc = 0x2d2dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d2dd8: 0xffb00000
    ctx->pc = 0x2d2dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d2ddc: 0x80a02d
    ctx->pc = 0x2d2ddcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2de0: 0xa0882d
    ctx->pc = 0x2d2de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2de4: 0xe0982d
    ctx->pc = 0x2d2de4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2de8: 0x1a600019
    ctx->pc = 0x2D2DE8u;
    {
        const bool branch_taken_0x2d2de8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2D2DECu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d2de8) {
            ctx->pc = 0x2D2E50u;
            goto label_2d2e50;
        }
    }
    ctx->pc = 0x2D2DF0u;
    // 0x2d2df0: 0xc0b0c48
    ctx->pc = 0x2D2DF0u;
    SET_GPR_U32(ctx, 31, 0x2D2DF8u);
    ctx->pc = 0x2C3120u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempQuad_0x2c3120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2DF8u; }
    }
    if (ctx->pc != 0x2D2DF8u) { return; }
    ctx->pc = 0x2D2DF8u;
    // 0x2d2df8: 0x40802d
    ctx->pc = 0x2d2df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2dfc: 0x200202d
    ctx->pc = 0x2d2dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e00: 0x1128c0
    ctx->pc = 0x2d2e00u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d2e04: 0x3c013c23
    ctx->pc = 0x2d2e04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x2d2e08: 0x3421d70a
    ctx->pc = 0x2d2e08u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x2d2e0c: 0x44816000
    ctx->pc = 0x2d2e0cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2d2e10: 0xc0b0df2
    ctx->pc = 0x2D2E10u;
    SET_GPR_U32(ctx, 31, 0x2D2E18u);
    ctx->pc = 0x2D2E14u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 18), 3));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2E18u; }
    }
    if (ctx->pc != 0x2D2E18u) { return; }
    ctx->pc = 0x2D2E18u;
    // 0x2d2e18: 0x200202d
    ctx->pc = 0x2d2e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e1c: 0x260282d
    ctx->pc = 0x2d2e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e20: 0xc0b0cf6
    ctx->pc = 0x2D2E20u;
    SET_GPR_U32(ctx, 31, 0x2D2E28u);
    ctx->pc = 0x2D2E24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2E28u; }
    }
    if (ctx->pc != 0x2D2E28u) { return; }
    ctx->pc = 0x2D2E28u;
    // 0x2d2e28: 0x200202d
    ctx->pc = 0x2d2e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e2c: 0x280282d
    ctx->pc = 0x2d2e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e30: 0xdfbf0050
    ctx->pc = 0x2d2e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2e34: 0xdfb40040
    ctx->pc = 0x2d2e34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2e38: 0xdfb30030
    ctx->pc = 0x2d2e38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2e3c: 0xdfb20020
    ctx->pc = 0x2d2e3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2e40: 0xdfb10010
    ctx->pc = 0x2d2e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2e44: 0xdfb00000
    ctx->pc = 0x2d2e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2e48: 0x80b0f40
    ctx->pc = 0x2D2E48u;
    ctx->pc = 0x2D2E4Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2C3D00u;
    MBBlitSetColor_0x2c3d00(rdram, ctx, runtime); return;
    ctx->pc = 0x2D2E50u;
label_2d2e50:
    // 0x2d2e50: 0xdfbf0050
    ctx->pc = 0x2d2e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2e54: 0xdfb40040
    ctx->pc = 0x2d2e54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2e58: 0xdfb30030
    ctx->pc = 0x2d2e58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2e5c: 0xdfb20020
    ctx->pc = 0x2d2e5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2e60: 0xdfb10010
    ctx->pc = 0x2d2e60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2e64: 0xdfb00000
    ctx->pc = 0x2d2e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2e68: 0x3e00008
    ctx->pc = 0x2D2E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2E6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D2E50u: goto label_2d2e50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D2E70u;
}
