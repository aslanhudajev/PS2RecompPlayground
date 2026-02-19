#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_set_output_mode
// Address: 0x223918 - 0x223950
void aud_set_output_mode_0x223918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223918u;

    // 0x223918: 0x27bdffe0
    ctx->pc = 0x223918u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22391c: 0xffbf0010
    ctx->pc = 0x22391cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223920: 0xffb00000
    ctx->pc = 0x223920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223924: 0xc088cb6
    ctx->pc = 0x223924u;
    SET_GPR_U32(ctx, 31, 0x22392Cu);
    ctx->pc = 0x223928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2232D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        wipe_tx_buf_0x2232d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22392Cu; }
    }
    if (ctx->pc != 0x22392Cu) { return; }
    ctx->pc = 0x22392Cu;
    // 0x22392c: 0x3c02003c
    ctx->pc = 0x22392cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x223930: 0xac500ac0
    ctx->pc = 0x223930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2752), GPR_U32(ctx, 16));
    // 0x223934: 0x24040003
    ctx->pc = 0x223934u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x223938: 0xc088ce8
    ctx->pc = 0x223938u;
    SET_GPR_U32(ctx, 31, 0x223940u);
    ctx->pc = 0x22393Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223940u; }
    }
    if (ctx->pc != 0x223940u) { return; }
    ctx->pc = 0x223940u;
    // 0x223940: 0xdfbf0010
    ctx->pc = 0x223940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223944: 0xdfb00000
    ctx->pc = 0x223944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223948: 0x3e00008
    ctx->pc = 0x223948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22394Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223950u;
}
