#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_IsEffectiveEndcode
// Address: 0x194da0 - 0x194dec
void sfmps_IsEffectiveEndcode_0x194da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_IsEffectiveEndcode");


    ctx->pc = 0x194da0u;

    // 0x194da0: 0x27bdffe0
    ctx->pc = 0x194da0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194da4: 0x3c020008
    ctx->pc = 0x194da4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
    // 0x194da8: 0xffb00000
    ctx->pc = 0x194da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x194dac: 0xffbf0010
    ctx->pc = 0x194dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x194db0: 0x14a20009
    ctx->pc = 0x194DB0u;
    {
        const bool branch_taken_0x194db0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x194DB4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194db0) {
            ctx->pc = 0x194DD8u;
            goto label_194dd8;
        }
    }
    ctx->pc = 0x194DB8u;
    // 0x194db8: 0xc064a7c
    ctx->pc = 0x194DB8u;
    SET_GPR_U32(ctx, 31, 0x194DC0u);
    ctx->pc = 0x194DBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1929F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFCON_IsEndcodeSkip_0x1929f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194DC0u; }
        else if (ctx->pc != 0x194DC0u) { ctx->pc = 0x194DC0u; }
    }
    if (ctx->pc != 0x194DC0u) { return; }
    ctx->pc = 0x194DC0u;
    // 0x194dc0: 0x14400006
    ctx->pc = 0x194DC0u;
    {
        const bool branch_taken_0x194dc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x194DC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194dc0) {
            ctx->pc = 0x194DDCu;
            goto label_194ddc;
        }
    }
    ctx->pc = 0x194DC8u;
    // 0x194dc8: 0xc064a84
    ctx->pc = 0x194DC8u;
    SET_GPR_U32(ctx, 31, 0x194DD0u);
    ctx->pc = 0x194DCCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFCON_IsSystemEndcodeSkip_0x192a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194DD0u; }
        else if (ctx->pc != 0x194DD0u) { ctx->pc = 0x194DD0u; }
    }
    if (ctx->pc != 0x194DD0u) { return; }
    ctx->pc = 0x194DD0u;
    // 0x194dd0: 0x10400002
    ctx->pc = 0x194DD0u;
    {
        const bool branch_taken_0x194dd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x194DD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x194dd0) {
            ctx->pc = 0x194DDCu;
            goto label_194ddc;
        }
    }
    ctx->pc = 0x194DD8u;
label_194dd8:
    // 0x194dd8: 0x102d
    ctx->pc = 0x194dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194ddc:
    // 0x194ddc: 0xdfbf0010
    ctx->pc = 0x194ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194de0: 0xdfb00000
    ctx->pc = 0x194de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194de4: 0x3e00008
    ctx->pc = 0x194DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194DE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194DD8u: goto label_194dd8;
            case 0x194DDCu: goto label_194ddc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194DECu;
}
