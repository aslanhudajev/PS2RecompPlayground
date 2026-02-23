#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_GetFsizeByte
// Address: 0x171198 - 0x1711c4
void ADXSTM_GetFsizeByte_0x171198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_GetFsizeByte");


    ctx->pc = 0x171198u;

    // 0x171198: 0x27bdffe0
    ctx->pc = 0x171198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17119c: 0xffb00000
    ctx->pc = 0x17119cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1711a0: 0xffbf0010
    ctx->pc = 0x1711a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1711a4: 0xc05d3d2
    ctx->pc = 0x1711A4u;
    SET_GPR_U32(ctx, 31, 0x1711ACu);
    ctx->pc = 0x1711A8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsGetFileSize_0x174f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1711ACu; }
        else if (ctx->pc != 0x1711ACu) { ctx->pc = 0x1711ACu; }
    }
    if (ctx->pc != 0x1711ACu) { return; }
    ctx->pc = 0x1711ACu;
    // 0x1711ac: 0xae020000
    ctx->pc = 0x1711acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1711b0: 0xdfbf0010
    ctx->pc = 0x1711b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1711b4: 0x24020001
    ctx->pc = 0x1711b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1711b8: 0xdfb00000
    ctx->pc = 0x1711b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1711bc: 0x3e00008
    ctx->pc = 0x1711BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1711C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1711C4u;
}
