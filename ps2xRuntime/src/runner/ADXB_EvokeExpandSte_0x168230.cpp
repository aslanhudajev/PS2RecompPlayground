#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_EvokeExpandSte
// Address: 0x168230 - 0x168284
void ADXB_EvokeExpandSte_0x168230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_EvokeExpandSte");


    ctx->pc = 0x168230u;

    // 0x168230: 0x27bdffe0
    ctx->pc = 0x168230u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168234: 0x24830050
    ctx->pc = 0x168234u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 80));
    // 0x168238: 0xffbf0010
    ctx->pc = 0x168238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16823c: 0x53040
    ctx->pc = 0x16823cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 5), 1));
    // 0x168240: 0xffb00000
    ctx->pc = 0x168240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168244: 0x8c900008
    ctx->pc = 0x168244u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x168248: 0x8c620020
    ctx->pc = 0x168248u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16824c: 0x8c670014
    ctx->pc = 0x16824cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x168250: 0x8c68001c
    ctx->pc = 0x168250u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x168254: 0x21040
    ctx->pc = 0x168254u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x168258: 0x8c850050
    ctx->pc = 0x168258u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x16825c: 0xe23821
    ctx->pc = 0x16825cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x168260: 0x84040
    ctx->pc = 0x168260u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
    // 0x168264: 0x200202d
    ctx->pc = 0x168264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168268: 0xc05cffa
    ctx->pc = 0x168268u;
    SET_GPR_U32(ctx, 31, 0x168270u);
    ctx->pc = 0x16826Cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    ctx->pc = 0x173FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_EntrySte_0x173fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168270u; }
        else if (ctx->pc != 0x168270u) { ctx->pc = 0x168270u; }
    }
    if (ctx->pc != 0x168270u) { return; }
    ctx->pc = 0x168270u;
    // 0x168270: 0x200202d
    ctx->pc = 0x168270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168274: 0xdfbf0010
    ctx->pc = 0x168274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168278: 0xdfb00000
    ctx->pc = 0x168278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16827c: 0x805d006
    ctx->pc = 0x16827Cu;
    ctx->pc = 0x168280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x174018u;
    ADXPD_Start_0x174018(rdram, ctx, runtime); return;
    ctx->pc = 0x168284u;
}
