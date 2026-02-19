#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _nextStartCode
// Address: 0x2f2a30 - 0x2f2a98
void _nextStartCode_0x2f2a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f2a30u;

    // 0x2f2a30: 0x27bdffe0
    ctx->pc = 0x2f2a30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f2a34: 0xffbf0010
    ctx->pc = 0x2f2a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f2a38: 0xc0bc8da
    ctx->pc = 0x2F2A38u;
    SET_GPR_U32(ctx, 31, 0x2F2A40u);
    ctx->pc = 0x2F2A3Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x2F2368u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x2f2368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2A40u; }
    }
    if (ctx->pc != 0x2F2A40u) { return; }
    ctx->pc = 0x2F2A40u;
    // 0x2f2a40: 0x3c021000
    ctx->pc = 0x2f2a40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f2a44: 0x34422020
    ctx->pc = 0x2f2a44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8224));
    // 0x2f2a48: 0x8c430000
    ctx->pc = 0x2f2a48u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2f2a4c: 0x30630007
    ctx->pc = 0x2f2a4cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 7));
    // 0x2f2a50: 0x31823
    ctx->pc = 0x2f2a50u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2f2a54: 0x30640007
    ctx->pc = 0x2f2a54u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 7));
    // 0x2f2a58: 0x10800007
    ctx->pc = 0x2F2A58u;
    {
        const bool branch_taken_0x2f2a58 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F2A5Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f2a58) {
            ctx->pc = 0x2F2A78u;
            goto label_2f2a78;
        }
    }
    ctx->pc = 0x2F2A60u;
    // 0x2f2a60: 0xc0bc9ec
    ctx->pc = 0x2F2A60u;
    SET_GPR_U32(ctx, 31, 0x2F2A68u);
    ctx->pc = 0x2F27B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x2f27b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2A68u; }
    }
    if (ctx->pc != 0x2F2A68u) { return; }
    ctx->pc = 0x2F2A68u;
    // 0x2f2a68: 0x10000003
    ctx->pc = 0x2F2A68u;
    {
        const bool branch_taken_0x2f2a68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f2a68) {
            ctx->pc = 0x2F2A78u;
            goto label_2f2a78;
        }
    }
    ctx->pc = 0x2F2A70u;
label_2f2a70:
    // 0x2f2a70: 0xc0bc9ec
    ctx->pc = 0x2F2A70u;
    SET_GPR_U32(ctx, 31, 0x2F2A78u);
    ctx->pc = 0x2F27B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x2f27b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2A78u; }
    }
    if (ctx->pc != 0x2F2A78u) { return; }
    ctx->pc = 0x2F2A78u;
label_2f2a78:
    // 0x2f2a78: 0xc0bc99e
    ctx->pc = 0x2F2A78u;
    SET_GPR_U32(ctx, 31, 0x2F2A80u);
    ctx->pc = 0x2F2A7Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x2F2678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x2f2678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2A80u; }
    }
    if (ctx->pc != 0x2F2A80u) { return; }
    ctx->pc = 0x2F2A80u;
    // 0x2f2a80: 0x1450fffb
    ctx->pc = 0x2F2A80u;
    {
        const bool branch_taken_0x2f2a80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x2F2A84u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x2f2a80) {
            ctx->pc = 0x2F2A70u;
            goto label_2f2a70;
        }
    }
    ctx->pc = 0x2F2A88u;
    // 0x2f2a88: 0xdfbf0010
    ctx->pc = 0x2f2a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2a8c: 0xdfb00000
    ctx->pc = 0x2f2a8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2a90: 0x3e00008
    ctx->pc = 0x2F2A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2A94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F2A70u: goto label_2f2a70;
            case 0x2F2A78u: goto label_2f2a78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F2A98u;
}
