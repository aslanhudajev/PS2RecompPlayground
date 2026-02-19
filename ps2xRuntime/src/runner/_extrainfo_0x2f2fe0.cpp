#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _extrainfo
// Address: 0x2f2fe0 - 0x2f3014
void _extrainfo_0x2f2fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f2fe0u;

    // 0x2f2fe0: 0x27bdfff0
    ctx->pc = 0x2f2fe0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f2fe4: 0x10000004
    ctx->pc = 0x2F2FE4u;
    {
        const bool branch_taken_0x2f2fe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F2FE8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x2f2fe4) {
            ctx->pc = 0x2F2FF8u;
            goto label_2f2ff8;
        }
    }
    ctx->pc = 0x2F2FECu;
    // 0x2f2fec: 0x0
    ctx->pc = 0x2f2fecu;
    // NOP
label_2f2ff0:
    // 0x2f2ff0: 0xc0bc9ec
    ctx->pc = 0x2F2FF0u;
    SET_GPR_U32(ctx, 31, 0x2F2FF8u);
    ctx->pc = 0x2F27B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x2f27b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2FF8u; }
    }
    if (ctx->pc != 0x2F2FF8u) { return; }
    ctx->pc = 0x2F2FF8u;
label_2f2ff8:
    // 0x2f2ff8: 0xc0bca32
    ctx->pc = 0x2F2FF8u;
    SET_GPR_U32(ctx, 31, 0x2F3000u);
    ctx->pc = 0x2F2FFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3000u; }
    }
    if (ctx->pc != 0x2F3000u) { return; }
    ctx->pc = 0x2F3000u;
    // 0x2f3000: 0x1440fffb
    ctx->pc = 0x2F3000u;
    {
        const bool branch_taken_0x2f3000 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F3004u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x2f3000) {
            ctx->pc = 0x2F2FF0u;
            goto label_2f2ff0;
        }
    }
    ctx->pc = 0x2F3008u;
    // 0x2f3008: 0xdfbf0000
    ctx->pc = 0x2f3008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f300c: 0x3e00008
    ctx->pc = 0x2F300Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3010u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F2FF0u: goto label_2f2ff0;
            case 0x2F2FF8u: goto label_2f2ff8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F3014u;
}
