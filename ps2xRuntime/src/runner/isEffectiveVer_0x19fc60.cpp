#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: isEffectiveVer
// Address: 0x19fc60 - 0x19fca8
void isEffectiveVer_0x19fc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("isEffectiveVer");


    ctx->pc = 0x19fc60u;

    // 0x19fc60: 0x27bdffe0
    ctx->pc = 0x19fc60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19fc64: 0xffb00000
    ctx->pc = 0x19fc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19fc68: 0xffbf0010
    ctx->pc = 0x19fc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19fc6c: 0xc067f2a
    ctx->pc = 0x19FC6Cu;
    SET_GPR_U32(ctx, 31, 0x19FC74u);
    ctx->pc = 0x19FC70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19FCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEffectiveObj_0x19fca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC74u; }
        else if (ctx->pc != 0x19FC74u) { ctx->pc = 0x19FC74u; }
    }
    if (ctx->pc != 0x19FC74u) { return; }
    ctx->pc = 0x19FC74u;
    // 0x19fc74: 0x54400003
    ctx->pc = 0x19FC74u;
    {
        const bool branch_taken_0x19fc74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19fc74) {
            ctx->pc = 0x19FC78u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x19FC84u;
            goto label_19fc84;
        }
    }
    ctx->pc = 0x19FC7Cu;
    // 0x19fc7c: 0x10000006
    ctx->pc = 0x19FC7Cu;
    {
        const bool branch_taken_0x19fc7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FC80u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19fc7c) {
            ctx->pc = 0x19FC98u;
            goto label_19fc98;
        }
    }
    ctx->pc = 0x19FC84u;
label_19fc84:
    // 0x19fc84: 0x2403006b
    ctx->pc = 0x19fc84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 107));
    // 0x19fc88: 0x10830003
    ctx->pc = 0x19FC88u;
    {
        const bool branch_taken_0x19fc88 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x19FC8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19fc88) {
            ctx->pc = 0x19FC98u;
            goto label_19fc98;
        }
    }
    ctx->pc = 0x19FC90u;
    // 0x19fc90: 0x2402006d
    ctx->pc = 0x19fc90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 109));
    // 0x19fc94: 0x44102a
    ctx->pc = 0x19fc94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
label_19fc98:
    // 0x19fc98: 0xdfbf0010
    ctx->pc = 0x19fc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fc9c: 0xdfb00000
    ctx->pc = 0x19fc9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fca0: 0x3e00008
    ctx->pc = 0x19FCA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FCA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FC84u: goto label_19fc84;
            case 0x19FC98u: goto label_19fc98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19FCA8u;
}
