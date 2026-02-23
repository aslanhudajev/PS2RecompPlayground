#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _extrainfo
// Address: 0x161e68 - 0x161e9c
void _extrainfo_0x161e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_extrainfo");


    ctx->pc = 0x161e68u;

    // 0x161e68: 0x27bdfff0
    ctx->pc = 0x161e68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161e6c: 0x10000004
    ctx->pc = 0x161E6Cu;
    {
        const bool branch_taken_0x161e6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161E70u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x161e6c) {
            ctx->pc = 0x161E80u;
            goto label_161e80;
        }
    }
    ctx->pc = 0x161E74u;
    // 0x161e74: 0x0
    ctx->pc = 0x161e74u;
    // NOP
label_161e78:
    // 0x161e78: 0xc05858e
    ctx->pc = 0x161E78u;
    SET_GPR_U32(ctx, 31, 0x161E80u);
    ctx->pc = 0x161638u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x161638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E80u; }
        else if (ctx->pc != 0x161E80u) { ctx->pc = 0x161E80u; }
    }
    if (ctx->pc != 0x161E80u) { return; }
    ctx->pc = 0x161E80u;
label_161e80:
    // 0x161e80: 0xc0585d4
    ctx->pc = 0x161E80u;
    SET_GPR_U32(ctx, 31, 0x161E88u);
    ctx->pc = 0x161E84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E88u; }
        else if (ctx->pc != 0x161E88u) { ctx->pc = 0x161E88u; }
    }
    if (ctx->pc != 0x161E88u) { return; }
    ctx->pc = 0x161E88u;
    // 0x161e88: 0x1440fffb
    ctx->pc = 0x161E88u;
    {
        const bool branch_taken_0x161e88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161E8Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x161e88) {
            ctx->pc = 0x161E78u;
            goto label_161e78;
        }
    }
    ctx->pc = 0x161E90u;
    // 0x161e90: 0xdfbf0000
    ctx->pc = 0x161e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161e94: 0x3e00008
    ctx->pc = 0x161E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161E98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161E78u: goto label_161e78;
            case 0x161E80u: goto label_161e80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161E9Cu;
}
