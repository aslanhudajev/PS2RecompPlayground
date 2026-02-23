#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_OpenFileRange
// Address: 0x170af8 - 0x170b24
void ADXSTM_OpenFileRange_0x170af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_OpenFileRange");


    ctx->pc = 0x170af8u;

    // 0x170af8: 0xc0102d
    ctx->pc = 0x170af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170afc: 0x27bdfff0
    ctx->pc = 0x170afcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170b00: 0xe0402d
    ctx->pc = 0x170b00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b04: 0xa0302d
    ctx->pc = 0x170b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b08: 0xffbf0000
    ctx->pc = 0x170b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170b0c: 0x40382d
    ctx->pc = 0x170b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b10: 0xc05c242
    ctx->pc = 0x170B10u;
    SET_GPR_U32(ctx, 31, 0x170B18u);
    ctx->pc = 0x170B14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170908u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_OpenFileRangeExRt_0x170908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B18u; }
        else if (ctx->pc != 0x170B18u) { ctx->pc = 0x170B18u; }
    }
    if (ctx->pc != 0x170B18u) { return; }
    ctx->pc = 0x170B18u;
    // 0x170b18: 0xdfbf0000
    ctx->pc = 0x170b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170b1c: 0x3e00008
    ctx->pc = 0x170B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170B20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170B24u;
}
