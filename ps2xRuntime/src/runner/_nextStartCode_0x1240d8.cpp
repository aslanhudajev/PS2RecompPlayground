#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _nextStartCode
// Address: 0x1240d8 - 0x124140
void _nextStartCode_0x1240d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1240d8u;

    // 0x1240d8: 0x27bdffe0
    ctx->pc = 0x1240d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1240dc: 0xffbf0010
    ctx->pc = 0x1240dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1240e0: 0xc048e84
    ctx->pc = 0x1240E0u;
    SET_GPR_U32(ctx, 31, 0x1240E8u);
    ctx->pc = 0x1240E4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x123A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1240E8u; }
    }
    if (ctx->pc != 0x1240E8u) { return; }
    ctx->pc = 0x1240E8u;
    // 0x1240e8: 0x3c021000
    ctx->pc = 0x1240e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1240ec: 0x34422020
    ctx->pc = 0x1240ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8224));
    // 0x1240f0: 0x8c430000
    ctx->pc = 0x1240f0u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1240f4: 0x30630007
    ctx->pc = 0x1240f4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 7));
    // 0x1240f8: 0x31823
    ctx->pc = 0x1240f8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1240fc: 0x30640007
    ctx->pc = 0x1240fcu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 7));
    // 0x124100: 0x10800007
    ctx->pc = 0x124100u;
    {
        const bool branch_taken_0x124100 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x124104u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x124100) {
            ctx->pc = 0x124120u;
            goto label_124120;
        }
    }
    ctx->pc = 0x124108u;
    // 0x124108: 0xc048f96
    ctx->pc = 0x124108u;
    SET_GPR_U32(ctx, 31, 0x124110u);
    ctx->pc = 0x123E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x123e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124110u; }
    }
    if (ctx->pc != 0x124110u) { return; }
    ctx->pc = 0x124110u;
    // 0x124110: 0x10000003
    ctx->pc = 0x124110u;
    {
        const bool branch_taken_0x124110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x124110) {
            ctx->pc = 0x124120u;
            goto label_124120;
        }
    }
    ctx->pc = 0x124118u;
label_124118:
    // 0x124118: 0xc048f96
    ctx->pc = 0x124118u;
    SET_GPR_U32(ctx, 31, 0x124120u);
    ctx->pc = 0x123E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x123e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124120u; }
    }
    if (ctx->pc != 0x124120u) { return; }
    ctx->pc = 0x124120u;
label_124120:
    // 0x124120: 0xc048f48
    ctx->pc = 0x124120u;
    SET_GPR_U32(ctx, 31, 0x124128u);
    ctx->pc = 0x124124u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x123D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x123d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124128u; }
    }
    if (ctx->pc != 0x124128u) { return; }
    ctx->pc = 0x124128u;
    // 0x124128: 0x1450fffb
    ctx->pc = 0x124128u;
    {
        const bool branch_taken_0x124128 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x12412Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x124128) {
            ctx->pc = 0x124118u;
            goto label_124118;
        }
    }
    ctx->pc = 0x124130u;
    // 0x124130: 0xdfbf0010
    ctx->pc = 0x124130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124134: 0xdfb00000
    ctx->pc = 0x124134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124138: 0x3e00008
    ctx->pc = 0x124138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12413Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124118u: goto label_124118;
            case 0x124120u: goto label_124120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124140u;
}
