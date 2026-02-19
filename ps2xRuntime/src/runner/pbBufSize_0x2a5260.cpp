#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbBufSize
// Address: 0x2a5260 - 0x2a529c
void pbBufSize_0x2a5260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5260u;

    // 0x2a5260: 0x27bdffe0
    ctx->pc = 0x2a5260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5264: 0xffbf0010
    ctx->pc = 0x2a5264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a5268: 0xffb00000
    ctx->pc = 0x2a5268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a526c: 0xc0befb8
    ctx->pc = 0x2A526Cu;
    SET_GPR_U32(ctx, 31, 0x2A5274u);
    ctx->pc = 0x2A5270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FBEE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        realloc_0x2fbee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5274u; }
    }
    if (ctx->pc != 0x2A5274u) { return; }
    ctx->pc = 0x2A5274u;
    // 0x2a5274: 0x10500006
    ctx->pc = 0x2A5274u;
    {
        const bool branch_taken_0x2a5274 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x2A5278u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2a5274) {
            ctx->pc = 0x2A5290u;
            goto label_2a5290;
        }
    }
    ctx->pc = 0x2A527Cu;
    // 0x2a527c: 0x3c04003b
    ctx->pc = 0x2a527cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a5280: 0x2484eaa0
    ctx->pc = 0x2a5280u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961824));
    // 0x2a5284: 0xdfb00000
    ctx->pc = 0x2a5284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5288: 0x80a958a
    ctx->pc = 0x2A5288u;
    ctx->pc = 0x2A528Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2A5628u;
    pbFatalErrorf_0x2a5628(rdram, ctx, runtime); return;
    ctx->pc = 0x2A5290u;
label_2a5290:
    // 0x2a5290: 0xdfb00000
    ctx->pc = 0x2a5290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5294: 0x3e00008
    ctx->pc = 0x2A5294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5298u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A5290u: goto label_2a5290;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A529Cu;
}
