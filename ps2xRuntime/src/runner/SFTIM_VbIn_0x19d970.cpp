#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_VbIn
// Address: 0x19d970 - 0x19d9f4
void SFTIM_VbIn_0x19d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_VbIn");


    ctx->pc = 0x19d970u;

    // 0x19d970: 0x27bdffc0
    ctx->pc = 0x19d970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19d974: 0xffbf0030
    ctx->pc = 0x19d974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19d978: 0x3a0202d
    ctx->pc = 0x19d978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d97c: 0xffb10020
    ctx->pc = 0x19d97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19d980: 0xc064f3a
    ctx->pc = 0x19D980u;
    SET_GPR_U32(ctx, 31, 0x19D988u);
    ctx->pc = 0x19D984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D988u; }
        else if (ctx->pc != 0x19D988u) { ctx->pc = 0x19D988u; }
    }
    if (ctx->pc != 0x19D988u) { return; }
    ctx->pc = 0x19D988u;
    // 0x19d988: 0x3c040026
    ctx->pc = 0x19d988u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x19d98c: 0x2482dee8
    ctx->pc = 0x19d98cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294958824));
    // 0x19d990: 0x8c83dee8
    ctx->pc = 0x19d990u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294958824)));
    // 0x19d994: 0x2442fed8
    ctx->pc = 0x19d994u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967000));
    // 0x19d998: 0x8c450178
    ctx->pc = 0x19d998u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x19d99c: 0x24630001
    ctx->pc = 0x19d99cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x19d9a0: 0x8c420174
    ctx->pc = 0x19d9a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x19d9a4: 0xac83dee8
    ctx->pc = 0x19d9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294958824), GPR_U32(ctx, 3));
    // 0x19d9a8: 0x1840000b
    ctx->pc = 0x19D9A8u;
    {
        const bool branch_taken_0x19d9a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19D9ACu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d9a8) {
            ctx->pc = 0x19D9D8u;
            goto label_19d9d8;
        }
    }
    ctx->pc = 0x19D9B0u;
    // 0x19d9b0: 0x40882d
    ctx->pc = 0x19d9b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d9b4: 0x0
    ctx->pc = 0x19d9b4u;
    // NOP
label_19d9b8:
    // 0x19d9b8: 0x8e020040
    ctx->pc = 0x19d9b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19d9bc: 0x50400004
    ctx->pc = 0x19D9BCu;
    {
        const bool branch_taken_0x19d9bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19d9bc) {
            ctx->pc = 0x19D9C0u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x19D9D0u;
            goto label_19d9d0;
        }
    }
    ctx->pc = 0x19D9C4u;
    // 0x19d9c4: 0xc06767e
    ctx->pc = 0x19D9C4u;
    SET_GPR_U32(ctx, 31, 0x19D9CCu);
    ctx->pc = 0x19D9C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D9F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftim_HnVbIn_0x19d9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D9CCu; }
        else if (ctx->pc != 0x19D9CCu) { ctx->pc = 0x19D9CCu; }
    }
    if (ctx->pc != 0x19D9CCu) { return; }
    ctx->pc = 0x19D9CCu;
    // 0x19d9cc: 0x2631ffff
    ctx->pc = 0x19d9ccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_19d9d0:
    // 0x19d9d0: 0x1620fff9
    ctx->pc = 0x19D9D0u;
    {
        const bool branch_taken_0x19d9d0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D9D4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 26664));
        if (branch_taken_0x19d9d0) {
            ctx->pc = 0x19D9B8u;
            goto label_19d9b8;
        }
    }
    ctx->pc = 0x19D9D8u;
label_19d9d8:
    // 0x19d9d8: 0xc064f44
    ctx->pc = 0x19D9D8u;
    SET_GPR_U32(ctx, 31, 0x19D9E0u);
    ctx->pc = 0x19D9DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D9E0u; }
        else if (ctx->pc != 0x19D9E0u) { ctx->pc = 0x19D9E0u; }
    }
    if (ctx->pc != 0x19D9E0u) { return; }
    ctx->pc = 0x19D9E0u;
    // 0x19d9e0: 0xdfbf0030
    ctx->pc = 0x19d9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d9e4: 0xdfb10020
    ctx->pc = 0x19d9e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d9e8: 0xdfb00010
    ctx->pc = 0x19d9e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d9ec: 0x3e00008
    ctx->pc = 0x19D9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D9F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D9B8u: goto label_19d9b8;
            case 0x19D9D0u: goto label_19d9d0;
            case 0x19D9D8u: goto label_19d9d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D9F4u;
}
