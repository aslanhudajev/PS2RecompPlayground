#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiTell
// Address: 0x178f70 - 0x178fa4
void htCiTell_0x178f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiTell");


    ctx->pc = 0x178f70u;

    // 0x178f70: 0x27bdfff0
    ctx->pc = 0x178f70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178f74: 0x14800007
    ctx->pc = 0x178F74u;
    {
        const bool branch_taken_0x178f74 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x178F78u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x178f74) {
            ctx->pc = 0x178F94u;
            goto label_178f94;
        }
    }
    ctx->pc = 0x178F7Cu;
    // 0x178f7c: 0x3c05002c
    ctx->pc = 0x178f7cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x178f80: 0x202d
    ctx->pc = 0x178f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f84: 0xc05e1ca
    ctx->pc = 0x178F84u;
    SET_GPR_U32(ctx, 31, 0x178F8Cu);
    ctx->pc = 0x178F88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948912));
    ctx->pc = 0x178728u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_call_errfn_0x178728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178F8Cu; }
        else if (ctx->pc != 0x178F8Cu) { ctx->pc = 0x178F8Cu; }
    }
    if (ctx->pc != 0x178F8Cu) { return; }
    ctx->pc = 0x178F8Cu;
    // 0x178f8c: 0x10000002
    ctx->pc = 0x178F8Cu;
    {
        const bool branch_taken_0x178f8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178F90u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178f8c) {
            ctx->pc = 0x178F98u;
            goto label_178f98;
        }
    }
    ctx->pc = 0x178F94u;
label_178f94:
    // 0x178f94: 0x8c820018
    ctx->pc = 0x178f94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_178f98:
    // 0x178f98: 0xdfbf0000
    ctx->pc = 0x178f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178f9c: 0x3e00008
    ctx->pc = 0x178F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178FA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178F94u: goto label_178f94;
            case 0x178F98u: goto label_178f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178FA4u;
}
