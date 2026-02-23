#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_EvokeExpandMono
// Address: 0x1681e8 - 0x168230
void ADXB_EvokeExpandMono_0x1681e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_EvokeExpandMono");


    ctx->pc = 0x1681e8u;

    // 0x1681e8: 0x27bdffe0
    ctx->pc = 0x1681e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1681ec: 0x24830050
    ctx->pc = 0x1681ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 80));
    // 0x1681f0: 0xffbf0010
    ctx->pc = 0x1681f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1681f4: 0xa0302d
    ctx->pc = 0x1681f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681f8: 0xffb00000
    ctx->pc = 0x1681f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1681fc: 0x8c900008
    ctx->pc = 0x1681fcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x168200: 0x8c670020
    ctx->pc = 0x168200u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x168204: 0x8c620014
    ctx->pc = 0x168204u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x168208: 0x8c850050
    ctx->pc = 0x168208u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x16820c: 0x73840
    ctx->pc = 0x16820cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
    // 0x168210: 0x200202d
    ctx->pc = 0x168210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168214: 0xc05cfee
    ctx->pc = 0x168214u;
    SET_GPR_U32(ctx, 31, 0x16821Cu);
    ctx->pc = 0x168218u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->pc = 0x173FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_EntryMono_0x173fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16821Cu; }
        else if (ctx->pc != 0x16821Cu) { ctx->pc = 0x16821Cu; }
    }
    if (ctx->pc != 0x16821Cu) { return; }
    ctx->pc = 0x16821Cu;
    // 0x16821c: 0x200202d
    ctx->pc = 0x16821cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168220: 0xdfbf0010
    ctx->pc = 0x168220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168224: 0xdfb00000
    ctx->pc = 0x168224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168228: 0x805d006
    ctx->pc = 0x168228u;
    ctx->pc = 0x16822Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x174018u;
    ADXPD_Start_0x174018(rdram, ctx, runtime); return;
    ctx->pc = 0x168230u;
}
