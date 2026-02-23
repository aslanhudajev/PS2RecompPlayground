#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: get_iob
// Address: 0x1581d0 - 0x15823c
void get_iob_0x1581d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("get_iob");


    ctx->pc = 0x1581d0u;

    // 0x1581d0: 0x27bdffd0
    ctx->pc = 0x1581d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1581d4: 0xffb00000
    ctx->pc = 0x1581d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1581d8: 0xffb10010
    ctx->pc = 0x1581d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1581dc: 0x80802d
    ctx->pc = 0x1581dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1581e0: 0xffbf0020
    ctx->pc = 0x1581e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1581e4: 0xc05603a
    ctx->pc = 0x1581E4u;
    SET_GPR_U32(ctx, 31, 0x1581ECu);
    ctx->pc = 0x1581E8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    ctx->pc = 0x1580E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceFsIobSemaMK_0x1580e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1581ECu; }
        else if (ctx->pc != 0x1581ECu) { ctx->pc = 0x1581ECu; }
    }
    if (ctx->pc != 0x1581ECu) { return; }
    ctx->pc = 0x1581ECu;
    // 0x1581ec: 0xc055248
    ctx->pc = 0x1581ECu;
    SET_GPR_U32(ctx, 31, 0x1581F4u);
    ctx->pc = 0x1581F0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294942920)));
    ctx->pc = 0x154920u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x154920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1581F4u; }
        else if (ctx->pc != 0x1581F4u) { ctx->pc = 0x1581F4u; }
    }
    if (ctx->pc != 0x1581F4u) { return; }
    ctx->pc = 0x1581F4u;
    // 0x1581f4: 0x2e030020
    ctx->pc = 0x1581f4u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 16), 32));
    // 0x1581f8: 0x14600005
    ctx->pc = 0x1581F8u;
    {
        const bool branch_taken_0x1581f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1581FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
        if (branch_taken_0x1581f8) {
            ctx->pc = 0x158210u;
            goto label_158210;
        }
    }
    ctx->pc = 0x158200u;
    // 0x158200: 0xc055240
    ctx->pc = 0x158200u;
    SET_GPR_U32(ctx, 31, 0x158208u);
    ctx->pc = 0x158204u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294942920)));
    ctx->pc = 0x154900u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x154900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158208u; }
        else if (ctx->pc != 0x158208u) { ctx->pc = 0x158208u; }
    }
    if (ctx->pc != 0x158208u) { return; }
    ctx->pc = 0x158208u;
    // 0x158208: 0x10000007
    ctx->pc = 0x158208u;
    {
        const bool branch_taken_0x158208 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15820Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x158208) {
            ctx->pc = 0x158228u;
            goto label_158228;
        }
    }
    ctx->pc = 0x158210u;
label_158210:
    // 0x158210: 0x108100
    ctx->pc = 0x158210u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 4));
    // 0x158214: 0x2442a440
    ctx->pc = 0x158214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294943808));
    // 0x158218: 0x8e24a0c8
    ctx->pc = 0x158218u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294942920)));
    // 0x15821c: 0xc055240
    ctx->pc = 0x15821Cu;
    SET_GPR_U32(ctx, 31, 0x158224u);
    ctx->pc = 0x158220u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x154900u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x154900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158224u; }
        else if (ctx->pc != 0x158224u) { ctx->pc = 0x158224u; }
    }
    if (ctx->pc != 0x158224u) { return; }
    ctx->pc = 0x158224u;
    // 0x158224: 0x200102d
    ctx->pc = 0x158224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158228:
    // 0x158228: 0xdfbf0020
    ctx->pc = 0x158228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15822c: 0xdfb10010
    ctx->pc = 0x15822cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158230: 0xdfb00000
    ctx->pc = 0x158230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158234: 0x3e00008
    ctx->pc = 0x158234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158238u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158210u: goto label_158210;
            case 0x158228u: goto label_158228;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15823Cu;
}
