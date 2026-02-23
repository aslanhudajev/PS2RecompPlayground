#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_IsTimeIncre
// Address: 0x19dae8 - 0x19db24
void sftim_IsTimeIncre_0x19dae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_IsTimeIncre");


    ctx->pc = 0x19dae8u;

    // 0x19dae8: 0x27bdfff0
    ctx->pc = 0x19dae8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19daec: 0x24030004
    ctx->pc = 0x19daecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19daf0: 0xffbf0000
    ctx->pc = 0x19daf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19daf4: 0x8c820040
    ctx->pc = 0x19daf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x19daf8: 0x14430007
    ctx->pc = 0x19DAF8u;
    {
        const bool branch_taken_0x19daf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x19DAFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19daf8) {
            ctx->pc = 0x19DB18u;
            goto label_19db18;
        }
    }
    ctx->pc = 0x19DB00u;
    // 0x19db00: 0x8c820048
    ctx->pc = 0x19db00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19db04: 0x14400004
    ctx->pc = 0x19DB04u;
    {
        const bool branch_taken_0x19db04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19DB08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19db04) {
            ctx->pc = 0x19DB18u;
            goto label_19db18;
        }
    }
    ctx->pc = 0x19DB0Cu;
    // 0x19db0c: 0xc0676ca
    ctx->pc = 0x19DB0Cu;
    SET_GPR_U32(ctx, 31, 0x19DB14u);
    ctx->pc = 0x19DB28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftim_IsShortSupply_0x19db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB14u; }
        else if (ctx->pc != 0x19DB14u) { ctx->pc = 0x19DB14u; }
    }
    if (ctx->pc != 0x19DB14u) { return; }
    ctx->pc = 0x19DB14u;
    // 0x19db14: 0x2c420001
    ctx->pc = 0x19db14u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_19db18:
    // 0x19db18: 0xdfbf0000
    ctx->pc = 0x19db18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19db1c: 0x3e00008
    ctx->pc = 0x19DB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DB20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DB18u: goto label_19db18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DB24u;
}
