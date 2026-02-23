#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _nextStartCode
// Address: 0x1618b8 - 0x161920
void _nextStartCode_0x1618b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_nextStartCode");


    ctx->pc = 0x1618b8u;

    // 0x1618b8: 0x27bdffe0
    ctx->pc = 0x1618b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1618bc: 0xffbf0010
    ctx->pc = 0x1618bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1618c0: 0xc05847c
    ctx->pc = 0x1618C0u;
    SET_GPR_U32(ctx, 31, 0x1618C8u);
    ctx->pc = 0x1618C4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x1611F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x1611f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618C8u; }
        else if (ctx->pc != 0x1618C8u) { ctx->pc = 0x1618C8u; }
    }
    if (ctx->pc != 0x1618C8u) { return; }
    ctx->pc = 0x1618C8u;
    // 0x1618c8: 0x3c021000
    ctx->pc = 0x1618c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1618cc: 0x34422020
    ctx->pc = 0x1618ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8224));
    // 0x1618d0: 0x8c430000
    ctx->pc = 0x1618d0u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1618d4: 0x30630007
    ctx->pc = 0x1618d4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 7));
    // 0x1618d8: 0x31823
    ctx->pc = 0x1618d8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1618dc: 0x30640007
    ctx->pc = 0x1618dcu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 7));
    // 0x1618e0: 0x10800007
    ctx->pc = 0x1618E0u;
    {
        const bool branch_taken_0x1618e0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1618E4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1618e0) {
            ctx->pc = 0x161900u;
            goto label_161900;
        }
    }
    ctx->pc = 0x1618E8u;
    // 0x1618e8: 0xc05858e
    ctx->pc = 0x1618E8u;
    SET_GPR_U32(ctx, 31, 0x1618F0u);
    ctx->pc = 0x161638u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x161638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618F0u; }
        else if (ctx->pc != 0x1618F0u) { ctx->pc = 0x1618F0u; }
    }
    if (ctx->pc != 0x1618F0u) { return; }
    ctx->pc = 0x1618F0u;
    // 0x1618f0: 0x10000003
    ctx->pc = 0x1618F0u;
    {
        const bool branch_taken_0x1618f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1618f0) {
            ctx->pc = 0x161900u;
            goto label_161900;
        }
    }
    ctx->pc = 0x1618F8u;
label_1618f8:
    // 0x1618f8: 0xc05858e
    ctx->pc = 0x1618F8u;
    SET_GPR_U32(ctx, 31, 0x161900u);
    ctx->pc = 0x161638u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x161638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161900u; }
        else if (ctx->pc != 0x161900u) { ctx->pc = 0x161900u; }
    }
    if (ctx->pc != 0x161900u) { return; }
    ctx->pc = 0x161900u;
label_161900:
    // 0x161900: 0xc058540
    ctx->pc = 0x161900u;
    SET_GPR_U32(ctx, 31, 0x161908u);
    ctx->pc = 0x161904u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x161500u;
    {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x161500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161908u; }
        else if (ctx->pc != 0x161908u) { ctx->pc = 0x161908u; }
    }
    if (ctx->pc != 0x161908u) { return; }
    ctx->pc = 0x161908u;
    // 0x161908: 0x1450fffb
    ctx->pc = 0x161908u;
    {
        const bool branch_taken_0x161908 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x16190Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x161908) {
            ctx->pc = 0x1618F8u;
            goto label_1618f8;
        }
    }
    ctx->pc = 0x161910u;
    // 0x161910: 0xdfbf0010
    ctx->pc = 0x161910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161914: 0xdfb00000
    ctx->pc = 0x161914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161918: 0x3e00008
    ctx->pc = 0x161918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16191Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1618F8u: goto label_1618f8;
            case 0x161900u: goto label_161900;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161920u;
}
