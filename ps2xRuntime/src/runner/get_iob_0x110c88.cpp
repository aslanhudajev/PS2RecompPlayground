#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_iob
// Address: 0x110c88 - 0x110cf4
void get_iob_0x110c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x110c88u;

    // 0x110c88: 0x27bdffd0
    ctx->pc = 0x110c88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110c8c: 0xffb00000
    ctx->pc = 0x110c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110c90: 0xffb10010
    ctx->pc = 0x110c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x110c94: 0x80802d
    ctx->pc = 0x110c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c98: 0xffbf0020
    ctx->pc = 0x110c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110c9c: 0xc0442e8
    ctx->pc = 0x110C9Cu;
    SET_GPR_U32(ctx, 31, 0x110CA4u);
    ctx->pc = 0x110CA0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
    ctx->pc = 0x110BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceFsIobSemaMK_0x110ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110CA4u; }
    }
    if (ctx->pc != 0x110CA4u) { return; }
    ctx->pc = 0x110CA4u;
    // 0x110ca4: 0xc0438b8
    ctx->pc = 0x110CA4u;
    SET_GPR_U32(ctx, 31, 0x110CACu);
    ctx->pc = 0x110CA8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294966208)));
    ctx->pc = 0x10E2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110CACu; }
    }
    if (ctx->pc != 0x110CACu) { return; }
    ctx->pc = 0x110CACu;
    // 0x110cac: 0x2e030020
    ctx->pc = 0x110cacu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 16), 32));
    // 0x110cb0: 0x14600005
    ctx->pc = 0x110CB0u;
    {
        const bool branch_taken_0x110cb0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x110CB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)24 << 16));
        if (branch_taken_0x110cb0) {
            ctx->pc = 0x110CC8u;
            goto label_110cc8;
        }
    }
    ctx->pc = 0x110CB8u;
    // 0x110cb8: 0xc0438b0
    ctx->pc = 0x110CB8u;
    SET_GPR_U32(ctx, 31, 0x110CC0u);
    ctx->pc = 0x110CBCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294966208)));
    ctx->pc = 0x10E2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110CC0u; }
    }
    if (ctx->pc != 0x110CC0u) { return; }
    ctx->pc = 0x110CC0u;
    // 0x110cc0: 0x10000007
    ctx->pc = 0x110CC0u;
    {
        const bool branch_taken_0x110cc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x110CC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x110cc0) {
            ctx->pc = 0x110CE0u;
            goto label_110ce0;
        }
    }
    ctx->pc = 0x110CC8u;
label_110cc8:
    // 0x110cc8: 0x108100
    ctx->pc = 0x110cc8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 4));
    // 0x110ccc: 0x244297c0
    ctx->pc = 0x110cccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940608));
    // 0x110cd0: 0x8e24fbc0
    ctx->pc = 0x110cd0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294966208)));
    // 0x110cd4: 0xc0438b0
    ctx->pc = 0x110CD4u;
    SET_GPR_U32(ctx, 31, 0x110CDCu);
    ctx->pc = 0x110CD8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x10E2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110CDCu; }
    }
    if (ctx->pc != 0x110CDCu) { return; }
    ctx->pc = 0x110CDCu;
    // 0x110cdc: 0x200102d
    ctx->pc = 0x110cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_110ce0:
    // 0x110ce0: 0xdfbf0020
    ctx->pc = 0x110ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110ce4: 0xdfb10010
    ctx->pc = 0x110ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110ce8: 0xdfb00000
    ctx->pc = 0x110ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110cec: 0x3e00008
    ctx->pc = 0x110CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110CF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x110CC8u: goto label_110cc8;
            case 0x110CE0u: goto label_110ce0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x110CF4u;
}
