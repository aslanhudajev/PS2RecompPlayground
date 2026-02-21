#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_stream_set_buffer
// Address: 0x2240b8 - 0x224118
void aud_stream_set_buffer_0x2240b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2240b8u;

    // 0x2240b8: 0x27bdffd0
    ctx->pc = 0x2240b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2240bc: 0xffbf0020
    ctx->pc = 0x2240bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2240c0: 0xffb10010
    ctx->pc = 0x2240c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2240c4: 0xffb00000
    ctx->pc = 0x2240c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2240c8: 0x80802d
    ctx->pc = 0x2240c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2240cc: 0xc088cb6
    ctx->pc = 0x2240CCu;
    SET_GPR_U32(ctx, 31, 0x2240D4u);
    ctx->pc = 0x2240D0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->pc = 0x2232D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        wipe_tx_buf_0x2232d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2240D4u; }
    }
    if (ctx->pc != 0x2240D4u) { return; }
    ctx->pc = 0x2240D4u;
    // 0x2240d4: 0x1e000003
    ctx->pc = 0x2240D4u;
    {
        const bool branch_taken_0x2240d4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2240D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2240d4) {
            ctx->pc = 0x2240E4u;
            goto label_2240e4;
        }
    }
    ctx->pc = 0x2240DCu;
    // 0x2240dc: 0x10000008
    ctx->pc = 0x2240DCu;
    {
        const bool branch_taken_0x2240dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2240E0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2240dc) {
            ctx->pc = 0x224100u;
            goto label_224100;
        }
    }
    ctx->pc = 0x2240E4u;
label_2240e4:
    // 0x2240e4: 0xac500ac0
    ctx->pc = 0x2240e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2752), GPR_U32(ctx, 16));
    // 0x2240e8: 0x24040016
    ctx->pc = 0x2240e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22));
    // 0x2240ec: 0xc088ce8
    ctx->pc = 0x2240ECu;
    SET_GPR_U32(ctx, 31, 0x2240F4u);
    ctx->pc = 0x2240F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2240F4u; }
    }
    if (ctx->pc != 0x2240F4u) { return; }
    ctx->pc = 0x2240F4u;
    // 0x2240f4: 0x4400002
    ctx->pc = 0x2240F4u;
    {
        const bool branch_taken_0x2240f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2240F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2240f4) {
            ctx->pc = 0x224100u;
            goto label_224100;
        }
    }
    ctx->pc = 0x2240FCu;
    // 0x2240fc: 0x8c510b00
    ctx->pc = 0x2240fcu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 2816)));
label_224100:
    // 0x224100: 0x220102d
    ctx->pc = 0x224100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224104: 0xdfbf0020
    ctx->pc = 0x224104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224108: 0xdfb10010
    ctx->pc = 0x224108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22410c: 0xdfb00000
    ctx->pc = 0x22410cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224110: 0x3e00008
    ctx->pc = 0x224110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224114u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2240E4u: goto label_2240e4;
            case 0x224100u: goto label_224100;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224118u;
}
