#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiGetStat
// Address: 0x179170 - 0x1791a4
void htCiGetStat_0x179170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiGetStat");


    ctx->pc = 0x179170u;

    // 0x179170: 0x27bdfff0
    ctx->pc = 0x179170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x179174: 0x14800007
    ctx->pc = 0x179174u;
    {
        const bool branch_taken_0x179174 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x179178u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x179174) {
            ctx->pc = 0x179194u;
            goto label_179194;
        }
    }
    ctx->pc = 0x17917Cu;
    // 0x17917c: 0x3c05002c
    ctx->pc = 0x17917cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x179180: 0x202d
    ctx->pc = 0x179180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179184: 0xc05e1ca
    ctx->pc = 0x179184u;
    SET_GPR_U32(ctx, 31, 0x17918Cu);
    ctx->pc = 0x179188u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948912));
    ctx->pc = 0x178728u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_call_errfn_0x178728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17918Cu; }
        else if (ctx->pc != 0x17918Cu) { ctx->pc = 0x17918Cu; }
    }
    if (ctx->pc != 0x17918Cu) { return; }
    ctx->pc = 0x17918Cu;
    // 0x17918c: 0x10000002
    ctx->pc = 0x17918Cu;
    {
        const bool branch_taken_0x17918c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x179190u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17918c) {
            ctx->pc = 0x179198u;
            goto label_179198;
        }
    }
    ctx->pc = 0x179194u;
label_179194:
    // 0x179194: 0x80820002
    ctx->pc = 0x179194u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_179198:
    // 0x179198: 0xdfbf0000
    ctx->pc = 0x179198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17919c: 0x3e00008
    ctx->pc = 0x17919Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1791A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179194u: goto label_179194;
            case 0x179198u: goto label_179198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1791A4u;
}
