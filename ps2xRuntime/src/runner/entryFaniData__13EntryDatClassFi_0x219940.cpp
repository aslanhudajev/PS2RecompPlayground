#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryFaniData__13EntryDatClassFi
// Address: 0x219940 - 0x219974
void entryFaniData__13EntryDatClassFi_0x219940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryFaniData__13EntryDatClassFi");


    ctx->pc = 0x219940u;

    // 0x219940: 0x27bdfff0
    ctx->pc = 0x219940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219944: 0x7fbf0000
    ctx->pc = 0x219944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x219948: 0x84831002
    ctx->pc = 0x219948u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x21994c: 0x24020015
    ctx->pc = 0x21994cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
    // 0x219950: 0x31900
    ctx->pc = 0x219950u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x219954: 0x831821
    ctx->pc = 0x219954u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x219958: 0xac620000
    ctx->pc = 0x219958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x21995c: 0xac650008
    ctx->pc = 0x21995cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x219960: 0xc0864f0
    ctx->pc = 0x219960u;
    SET_GPR_U32(ctx, 31, 0x219968u);
    ctx->pc = 0x219964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x2193C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        incReqWrPtr__13EntryDatClassFv_0x2193c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219968u; }
        else if (ctx->pc != 0x219968u) { ctx->pc = 0x219968u; }
    }
    if (ctx->pc != 0x219968u) { return; }
    ctx->pc = 0x219968u;
    // 0x219968: 0x7bbf0000
    ctx->pc = 0x219968u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21996c: 0x3e00008
    ctx->pc = 0x21996Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219970u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219974u;
}
