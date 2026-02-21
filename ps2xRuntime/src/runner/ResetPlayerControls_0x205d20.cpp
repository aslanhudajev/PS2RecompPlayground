#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ResetPlayerControls
// Address: 0x205d20 - 0x205dd8
void ResetPlayerControls_0x205d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x205d20u;

    // 0x205d20: 0x27bdffa0
    ctx->pc = 0x205d20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x205d24: 0xffbf0050
    ctx->pc = 0x205d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x205d28: 0xffb40040
    ctx->pc = 0x205d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x205d2c: 0xffb30030
    ctx->pc = 0x205d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x205d30: 0xffb20020
    ctx->pc = 0x205d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x205d34: 0xffb10010
    ctx->pc = 0x205d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x205d38: 0xffb00000
    ctx->pc = 0x205d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205d3c: 0x3c020031
    ctx->pc = 0x205d3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205d40: 0xac401b04
    ctx->pc = 0x205d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6916), GPR_U32(ctx, 0));
    // 0x205d44: 0x802d
    ctx->pc = 0x205d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205d48: 0x3c02003c
    ctx->pc = 0x205d48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x205d4c: 0x2452b460
    ctx->pc = 0x205d4cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294947936));
    // 0x205d50: 0x24140030
    ctx->pc = 0x205d50u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 48));
    // 0x205d54: 0x3c02003c
    ctx->pc = 0x205d54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x205d58: 0x2451b3a0
    ctx->pc = 0x205d58u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294947744));
    // 0x205d5c: 0x3c020031
    ctx->pc = 0x205d5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205d60: 0x24531c90
    ctx->pc = 0x205d60u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 7312));
    // 0x205d64: 0x200202d
    ctx->pc = 0x205d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205d68:
    // 0x205d68: 0xc0816b8
    ctx->pc = 0x205D68u;
    SET_GPR_U32(ctx, 31, 0x205D70u);
    ctx->pc = 0x205D6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x205AE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearPlayerControl_0x205ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205D70u; }
    }
    if (ctx->pc != 0x205D70u) { return; }
    ctx->pc = 0x205D70u;
    // 0x205d70: 0x202d
    ctx->pc = 0x205d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205d74: 0x2142818
    ctx->pc = 0x205d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_205d78:
    // 0x205d78: 0x41080
    ctx->pc = 0x205d78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x205d7c: 0x451021
    ctx->pc = 0x205d7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x205d80: 0x521821
    ctx->pc = 0x205d80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x205d84: 0x511021
    ctx->pc = 0x205d84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x205d88: 0xac400000
    ctx->pc = 0x205d88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x205d8c: 0x24840001
    ctx->pc = 0x205d8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x205d90: 0x2882000c
    ctx->pc = 0x205d90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 12));
    // 0x205d94: 0x1440fff8
    ctx->pc = 0x205D94u;
    {
        const bool branch_taken_0x205d94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x205D98u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x205d94) {
            ctx->pc = 0x205D78u;
            goto label_205d78;
        }
    }
    ctx->pc = 0x205D9Cu;
    // 0x205d9c: 0x101080
    ctx->pc = 0x205d9cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x205da0: 0x531021
    ctx->pc = 0x205da0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x205da4: 0xac400000
    ctx->pc = 0x205da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x205da8: 0x26100001
    ctx->pc = 0x205da8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x205dac: 0x2a020004
    ctx->pc = 0x205dacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x205db0: 0x5440ffed
    ctx->pc = 0x205DB0u;
    {
        const bool branch_taken_0x205db0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x205db0) {
            ctx->pc = 0x205DB4u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x205D68u;
            goto label_205d68;
        }
    }
    ctx->pc = 0x205DB8u;
    // 0x205db8: 0xdfbf0050
    ctx->pc = 0x205db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x205dbc: 0xdfb40040
    ctx->pc = 0x205dbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x205dc0: 0xdfb30030
    ctx->pc = 0x205dc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x205dc4: 0xdfb20020
    ctx->pc = 0x205dc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205dc8: 0xdfb10010
    ctx->pc = 0x205dc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205dcc: 0xdfb00000
    ctx->pc = 0x205dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205dd0: 0x3e00008
    ctx->pc = 0x205DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205DD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205D68u: goto label_205d68;
            case 0x205D78u: goto label_205d78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x205DD8u;
}
