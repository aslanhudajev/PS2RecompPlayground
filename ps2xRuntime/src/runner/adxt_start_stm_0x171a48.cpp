#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxt_start_stm
// Address: 0x171a48 - 0x171aa4
void adxt_start_stm_0x171a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxt_start_stm");


    ctx->pc = 0x171a48u;

    // 0x171a48: 0x27bdffe0
    ctx->pc = 0x171a48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171a4c: 0xffb00000
    ctx->pc = 0x171a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171a50: 0xffbf0010
    ctx->pc = 0x171a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171a54: 0x80802d
    ctx->pc = 0x171a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a58: 0x8605003e
    ctx->pc = 0x171a58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x171a5c: 0x8606003c
    ctx->pc = 0x171a5cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x171a60: 0x8e040008
    ctx->pc = 0x171a60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x171a64: 0x52ac0
    ctx->pc = 0x171a64u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 11));
    // 0x171a68: 0xc05c438
    ctx->pc = 0x171A68u;
    SET_GPR_U32(ctx, 31, 0x171A70u);
    ctx->pc = 0x171A6Cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 11));
    ctx->pc = 0x1710E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_SetBufSize_0x1710e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A70u; }
        else if (ctx->pc != 0x171A70u) { ctx->pc = 0x171A70u; }
    }
    if (ctx->pc != 0x171A70u) { return; }
    ctx->pc = 0x171A70u;
    // 0x171a70: 0x8e040008
    ctx->pc = 0x171a70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x171a74: 0xc05c338
    ctx->pc = 0x171A74u;
    SET_GPR_U32(ctx, 31, 0x171A7Cu);
    ctx->pc = 0x171A78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x170CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_SetEos_0x170ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A7Cu; }
        else if (ctx->pc != 0x171A7Cu) { ctx->pc = 0x171A7Cu; }
    }
    if (ctx->pc != 0x171A7Cu) { return; }
    ctx->pc = 0x171A7Cu;
    // 0x171a7c: 0xc05c304
    ctx->pc = 0x171A7Cu;
    SET_GPR_U32(ctx, 31, 0x171A84u);
    ctx->pc = 0x171A80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x170C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Start_0x170c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A84u; }
        else if (ctx->pc != 0x171A84u) { ctx->pc = 0x171A84u; }
    }
    if (ctx->pc != 0x171A84u) { return; }
    ctx->pc = 0x171A84u;
    // 0x171a84: 0x8e050010
    ctx->pc = 0x171a84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x171a88: 0xc05c660
    ctx->pc = 0x171A88u;
    SET_GPR_U32(ctx, 31, 0x171A90u);
    ctx->pc = 0x171A8Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171980u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxt_start_sj_0x171980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A90u; }
        else if (ctx->pc != 0x171A90u) { ctx->pc = 0x171A90u; }
    }
    if (ctx->pc != 0x171A90u) { return; }
    ctx->pc = 0x171A90u;
    // 0x171a90: 0xa2000002
    ctx->pc = 0x171a90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x171a94: 0xdfbf0010
    ctx->pc = 0x171a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171a98: 0xdfb00000
    ctx->pc = 0x171a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171a9c: 0x3e00008
    ctx->pc = 0x171A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171AA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171AA4u;
}
