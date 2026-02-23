#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _decodeOrSkip
// Address: 0x164038 - 0x164074
void _decodeOrSkip_0x164038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_decodeOrSkip");


    ctx->pc = 0x164038u;

    // 0x164038: 0x3c020023
    ctx->pc = 0x164038u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16403c: 0x27bdfff0
    ctx->pc = 0x16403cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164040: 0x8c43a3ec
    ctx->pc = 0x164040u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943724)));
    // 0x164044: 0x24020003
    ctx->pc = 0x164044u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x164048: 0x10620005
    ctx->pc = 0x164048u;
    {
        const bool branch_taken_0x164048 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16404Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x164048) {
            ctx->pc = 0x164060u;
            goto label_164060;
        }
    }
    ctx->pc = 0x164050u;
    // 0x164050: 0xc05901e
    ctx->pc = 0x164050u;
    SET_GPR_U32(ctx, 31, 0x164058u);
    ctx->pc = 0x164078u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkipField_0x164078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164058u; }
        else if (ctx->pc != 0x164058u) { ctx->pc = 0x164058u; }
    }
    if (ctx->pc != 0x164058u) { return; }
    ctx->pc = 0x164058u;
    // 0x164058: 0x10000004
    ctx->pc = 0x164058u;
    {
        const bool branch_taken_0x164058 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16405Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x164058) {
            ctx->pc = 0x16406Cu;
            goto label_16406c;
        }
    }
    ctx->pc = 0x164060u;
label_164060:
    // 0x164060: 0xc058fc4
    ctx->pc = 0x164060u;
    SET_GPR_U32(ctx, 31, 0x164068u);
    ctx->pc = 0x163F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkipFrame_0x163f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164068u; }
        else if (ctx->pc != 0x164068u) { ctx->pc = 0x164068u; }
    }
    if (ctx->pc != 0x164068u) { return; }
    ctx->pc = 0x164068u;
    // 0x164068: 0xdfbf0000
    ctx->pc = 0x164068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16406c:
    // 0x16406c: 0x3e00008
    ctx->pc = 0x16406Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164070u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164060u: goto label_164060;
            case 0x16406Cu: goto label_16406c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164074u;
}
