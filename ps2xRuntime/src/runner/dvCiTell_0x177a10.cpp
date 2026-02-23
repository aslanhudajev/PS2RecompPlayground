#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiTell
// Address: 0x177a10 - 0x177a44
void dvCiTell_0x177a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiTell");


    ctx->pc = 0x177a10u;

    // 0x177a10: 0x27bdfff0
    ctx->pc = 0x177a10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177a14: 0x14800007
    ctx->pc = 0x177A14u;
    {
        const bool branch_taken_0x177a14 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x177A18u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x177a14) {
            ctx->pc = 0x177A34u;
            goto label_177a34;
        }
    }
    ctx->pc = 0x177A1Cu;
    // 0x177a1c: 0x3c05002c
    ctx->pc = 0x177a1cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x177a20: 0x202d
    ctx->pc = 0x177a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a24: 0xc05dd3c
    ctx->pc = 0x177A24u;
    SET_GPR_U32(ctx, 31, 0x177A2Cu);
    ctx->pc = 0x177A28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947840));
    ctx->pc = 0x1774F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_call_errfn_0x1774f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A2Cu; }
        else if (ctx->pc != 0x177A2Cu) { ctx->pc = 0x177A2Cu; }
    }
    if (ctx->pc != 0x177A2Cu) { return; }
    ctx->pc = 0x177A2Cu;
    // 0x177a2c: 0x10000002
    ctx->pc = 0x177A2Cu;
    {
        const bool branch_taken_0x177a2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x177A30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177a2c) {
            ctx->pc = 0x177A38u;
            goto label_177a38;
        }
    }
    ctx->pc = 0x177A34u;
label_177a34:
    // 0x177a34: 0x8c82000c
    ctx->pc = 0x177a34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_177a38:
    // 0x177a38: 0xdfbf0000
    ctx->pc = 0x177a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177a3c: 0x3e00008
    ctx->pc = 0x177A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177A40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177A34u: goto label_177a34;
            case 0x177A38u: goto label_177a38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177A44u;
}
