#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_reset
// Address: 0x223a38 - 0x223a90
void aud_reset_0x223a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223a38u;

    // 0x223a38: 0x27bdffe0
    ctx->pc = 0x223a38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223a3c: 0xffbf0010
    ctx->pc = 0x223a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223a40: 0xffb00000
    ctx->pc = 0x223a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223a44: 0x2404001e
    ctx->pc = 0x223a44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
    // 0x223a48: 0x3c05ffff
    ctx->pc = 0x223a48u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x223a4c: 0xc0c14cc
    ctx->pc = 0x223A4Cu;
    SET_GPR_U32(ctx, 31, 0x223A54u);
    ctx->pc = 0x223A50u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65534));
    ctx->pc = 0x305330u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetSreg_0x305330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A54u; }
    }
    if (ctx->pc != 0x223A54u) { return; }
    ctx->pc = 0x223A54u;
    // 0x223a54: 0xc088cb6
    ctx->pc = 0x223A54u;
    SET_GPR_U32(ctx, 31, 0x223A5Cu);
    ctx->pc = 0x2232D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        wipe_tx_buf_0x2232d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A5Cu; }
    }
    if (ctx->pc != 0x223A5Cu) { return; }
    ctx->pc = 0x223A5Cu;
    // 0x223a5c: 0x3c02003c
    ctx->pc = 0x223a5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x223a60: 0x24030001
    ctx->pc = 0x223a60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x223a64: 0xac430ac0
    ctx->pc = 0x223a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2752), GPR_U32(ctx, 3));
    // 0x223a68: 0x24040001
    ctx->pc = 0x223a68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x223a6c: 0xc088ce8
    ctx->pc = 0x223A6Cu;
    SET_GPR_U32(ctx, 31, 0x223A74u);
    ctx->pc = 0x223A70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A74u; }
    }
    if (ctx->pc != 0x223A74u) { return; }
    ctx->pc = 0x223A74u;
    // 0x223a74: 0xc088d32
    ctx->pc = 0x223A74u;
    SET_GPR_U32(ctx, 31, 0x223A7Cu);
    ctx->pc = 0x223A78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2234C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mput_reset_0x2234c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A7Cu; }
    }
    if (ctx->pc != 0x223A7Cu) { return; }
    ctx->pc = 0x223A7Cu;
    // 0x223a7c: 0x200102d
    ctx->pc = 0x223a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a80: 0xdfbf0010
    ctx->pc = 0x223a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223a84: 0xdfb00000
    ctx->pc = 0x223a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223a88: 0x3e00008
    ctx->pc = 0x223A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223A8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223A90u;
}
