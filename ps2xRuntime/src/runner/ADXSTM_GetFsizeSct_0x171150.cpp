#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_GetFsizeSct
// Address: 0x171150 - 0x171198
void ADXSTM_GetFsizeSct_0x171150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_GetFsizeSct");


    ctx->pc = 0x171150u;

    // 0x171150: 0x27bdffe0
    ctx->pc = 0x171150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171154: 0xffb00000
    ctx->pc = 0x171154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171158: 0xffbf0010
    ctx->pc = 0x171158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17115c: 0xc05d3d2
    ctx->pc = 0x17115Cu;
    SET_GPR_U32(ctx, 31, 0x171164u);
    ctx->pc = 0x171160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsGetFileSize_0x174f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171164u; }
        else if (ctx->pc != 0x171164u) { ctx->pc = 0x171164u; }
    }
    if (ctx->pc != 0x171164u) { return; }
    ctx->pc = 0x171164u;
    // 0x171164: 0x40182d
    ctx->pc = 0x171164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171168: 0x2404ffff
    ctx->pc = 0x171168u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17116c: 0x246507ff
    ctx->pc = 0x17116cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x171170: 0xdfbf0010
    ctx->pc = 0x171170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171174: 0x85202a
    ctx->pc = 0x171174u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
    // 0x171178: 0x24630ffe
    ctx->pc = 0x171178u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4094));
    // 0x17117c: 0xa4180b
    ctx->pc = 0x17117cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 5));
    // 0x171180: 0x24020001
    ctx->pc = 0x171180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x171184: 0x31ac3
    ctx->pc = 0x171184u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x171188: 0xae030000
    ctx->pc = 0x171188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x17118c: 0xdfb00000
    ctx->pc = 0x17118cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171190: 0x3e00008
    ctx->pc = 0x171190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171194u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171198u;
}
