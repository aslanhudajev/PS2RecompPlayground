#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _Error
// Address: 0x164448 - 0x1644a0
void ps2__Error_0x164448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2__Error");


    ctx->pc = 0x164448u;

    // 0x164448: 0x3c020023
    ctx->pc = 0x164448u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16444c: 0x80182d
    ctx->pc = 0x16444cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164450: 0x27bdffe0
    ctx->pc = 0x164450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x164454: 0x8c44a21c
    ctx->pc = 0x164454u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943260)));
    // 0x164458: 0x1080000c
    ctx->pc = 0x164458u;
    {
        const bool branch_taken_0x164458 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x16445Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x164458) {
            ctx->pc = 0x16448Cu;
            goto label_16448c;
        }
    }
    ctx->pc = 0x164460u;
    // 0x164460: 0x8c820040
    ctx->pc = 0x164460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x164464: 0x10400009
    ctx->pc = 0x164464u;
    {
        const bool branch_taken_0x164464 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x164464) {
            ctx->pc = 0x16448Cu;
            goto label_16448c;
        }
    }
    ctx->pc = 0x16446Cu;
    // 0x16446c: 0x8c42000c
    ctx->pc = 0x16446cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x164470: 0x10400006
    ctx->pc = 0x164470u;
    {
        const bool branch_taken_0x164470 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x164474u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x164470) {
            ctx->pc = 0x16448Cu;
            goto label_16448c;
        }
    }
    ctx->pc = 0x164478u;
    // 0x164478: 0xafa30004
    ctx->pc = 0x164478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x16447c: 0xc058eec
    ctx->pc = 0x16447Cu;
    SET_GPR_U32(ctx, 31, 0x164484u);
    ctx->pc = 0x164480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x163BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x163bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164484u; }
        else if (ctx->pc != 0x164484u) { ctx->pc = 0x164484u; }
    }
    if (ctx->pc != 0x164484u) { return; }
    ctx->pc = 0x164484u;
    // 0x164484: 0x10000004
    ctx->pc = 0x164484u;
    {
        const bool branch_taken_0x164484 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x164488u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x164484) {
            ctx->pc = 0x164498u;
            goto label_164498;
        }
    }
    ctx->pc = 0x16448Cu;
label_16448c:
    // 0x16448c: 0xc059102
    ctx->pc = 0x16448Cu;
    SET_GPR_U32(ctx, 31, 0x164494u);
    ctx->pc = 0x164490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x164408u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__ErrMessage_0x164408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164494u; }
        else if (ctx->pc != 0x164494u) { ctx->pc = 0x164494u; }
    }
    if (ctx->pc != 0x164494u) { return; }
    ctx->pc = 0x164494u;
    // 0x164494: 0xdfbf0010
    ctx->pc = 0x164494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_164498:
    // 0x164498: 0x3e00008
    ctx->pc = 0x164498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16449Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16448Cu: goto label_16448c;
            case 0x164498u: goto label_164498;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1644A0u;
}
