#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_Reset
// Address: 0x168190 - 0x1681d0
void ADXB_Reset_0x168190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_Reset");


    ctx->pc = 0x168190u;

    // 0x168190: 0x27bdffe0
    ctx->pc = 0x168190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168194: 0x24030003
    ctx->pc = 0x168194u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x168198: 0xffb00000
    ctx->pc = 0x168198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16819c: 0xffbf0010
    ctx->pc = 0x16819cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1681a0: 0x80802d
    ctx->pc = 0x1681a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681a4: 0x8e020004
    ctx->pc = 0x1681a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1681a8: 0x14430006
    ctx->pc = 0x1681A8u;
    {
        const bool branch_taken_0x1681a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1681ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1681a8) {
            ctx->pc = 0x1681C4u;
            goto label_1681c4;
        }
    }
    ctx->pc = 0x1681B0u;
    // 0x1681b0: 0xc05d014
    ctx->pc = 0x1681B0u;
    SET_GPR_U32(ctx, 31, 0x1681B8u);
    ctx->pc = 0x1681B4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x174050u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_Reset_0x174050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1681B8u; }
        else if (ctx->pc != 0x1681B8u) { ctx->pc = 0x1681B8u; }
    }
    if (ctx->pc != 0x1681B8u) { return; }
    ctx->pc = 0x1681B8u;
    // 0x1681b8: 0xae000004
    ctx->pc = 0x1681b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1681bc: 0xae00009c
    ctx->pc = 0x1681bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x1681c0: 0xdfbf0010
    ctx->pc = 0x1681c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1681c4:
    // 0x1681c4: 0xdfb00000
    ctx->pc = 0x1681c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1681c8: 0x3e00008
    ctx->pc = 0x1681C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1681CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1681C4u: goto label_1681c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1681D0u;
}
