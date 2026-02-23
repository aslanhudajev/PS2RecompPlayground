#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_Stop
// Address: 0x168160 - 0x16818c
void ADXB_Stop_0x168160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_Stop");


    ctx->pc = 0x168160u;

    // 0x168160: 0x27bdffe0
    ctx->pc = 0x168160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168164: 0xffb00000
    ctx->pc = 0x168164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168168: 0xffbf0010
    ctx->pc = 0x168168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16816c: 0x80802d
    ctx->pc = 0x16816cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168170: 0xc05d00e
    ctx->pc = 0x168170u;
    SET_GPR_U32(ctx, 31, 0x168178u);
    ctx->pc = 0x168174u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x174038u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_Stop_0x174038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168178u; }
        else if (ctx->pc != 0x168178u) { ctx->pc = 0x168178u; }
    }
    if (ctx->pc != 0x168178u) { return; }
    ctx->pc = 0x168178u;
    // 0x168178: 0xae000004
    ctx->pc = 0x168178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x16817c: 0xdfbf0010
    ctx->pc = 0x16817cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168180: 0xdfb00000
    ctx->pc = 0x168180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168184: 0x3e00008
    ctx->pc = 0x168184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168188u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16818Cu;
}
