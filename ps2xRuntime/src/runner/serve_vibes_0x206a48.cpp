#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: serve_vibes
// Address: 0x206a48 - 0x206ac8
void serve_vibes_0x206a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x206a48u;

    // 0x206a48: 0x27bdffc0
    ctx->pc = 0x206a48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x206a4c: 0xffbf0030
    ctx->pc = 0x206a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x206a50: 0xffb20020
    ctx->pc = 0x206a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x206a54: 0xffb10010
    ctx->pc = 0x206a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x206a58: 0xffb00000
    ctx->pc = 0x206a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206a5c: 0x802d
    ctx->pc = 0x206a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a60: 0x3c020031
    ctx->pc = 0x206a60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x206a64: 0x24521d68
    ctx->pc = 0x206a64u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 7528));
    // 0x206a68: 0x3c020031
    ctx->pc = 0x206a68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x206a6c: 0x24511d6c
    ctx->pc = 0x206a6cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7532));
    // 0x206a70: 0x1018c0
    ctx->pc = 0x206a70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 3));
    // 0x206a74: 0x0
    ctx->pc = 0x206a74u;
    // NOP
label_206a78:
    // 0x206a78: 0x721021
    ctx->pc = 0x206a78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x206a7c: 0x8c420000
    ctx->pc = 0x206a7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206a80: 0x10400007
    ctx->pc = 0x206A80u;
    {
        const bool branch_taken_0x206a80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x206A84u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        if (branch_taken_0x206a80) {
            ctx->pc = 0x206AA0u;
            goto label_206aa0;
        }
    }
    ctx->pc = 0x206A88u;
    // 0x206a88: 0x8c620000
    ctx->pc = 0x206a88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206a8c: 0x2442ffff
    ctx->pc = 0x206a8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x206a90: 0x4410003
    ctx->pc = 0x206A90u;
    {
        const bool branch_taken_0x206a90 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x206A94u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x206a90) {
            ctx->pc = 0x206AA0u;
            goto label_206aa0;
        }
    }
    ctx->pc = 0x206A98u;
    // 0x206a98: 0xc081a84
    ctx->pc = 0x206A98u;
    SET_GPR_U32(ctx, 31, 0x206AA0u);
    ctx->pc = 0x206A9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x206A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        vibe_off_0x206a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206AA0u; }
    }
    if (ctx->pc != 0x206AA0u) { return; }
    ctx->pc = 0x206AA0u;
label_206aa0:
    // 0x206aa0: 0x26100001
    ctx->pc = 0x206aa0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x206aa4: 0x2a020004
    ctx->pc = 0x206aa4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x206aa8: 0x1440fff3
    ctx->pc = 0x206AA8u;
    {
        const bool branch_taken_0x206aa8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x206AACu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 3));
        if (branch_taken_0x206aa8) {
            ctx->pc = 0x206A78u;
            goto label_206a78;
        }
    }
    ctx->pc = 0x206AB0u;
    // 0x206ab0: 0xdfbf0030
    ctx->pc = 0x206ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206ab4: 0xdfb20020
    ctx->pc = 0x206ab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206ab8: 0xdfb10010
    ctx->pc = 0x206ab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206abc: 0xdfb00000
    ctx->pc = 0x206abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206ac0: 0x3e00008
    ctx->pc = 0x206AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206AC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206A78u: goto label_206a78;
            case 0x206AA0u: goto label_206aa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206AC8u;
}
