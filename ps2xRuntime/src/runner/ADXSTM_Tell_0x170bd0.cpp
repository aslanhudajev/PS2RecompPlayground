#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_Tell
// Address: 0x170bd0 - 0x170c0c
void ADXSTM_Tell_0x170bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_Tell");


    ctx->pc = 0x170bd0u;

    // 0x170bd0: 0x27bdffe0
    ctx->pc = 0x170bd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170bd4: 0xffb00000
    ctx->pc = 0x170bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170bd8: 0xffbf0010
    ctx->pc = 0x170bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170bdc: 0x80802d
    ctx->pc = 0x170bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170be0: 0x8e040008
    ctx->pc = 0x170be0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x170be4: 0x50800005
    ctx->pc = 0x170BE4u;
    {
        const bool branch_taken_0x170be4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x170be4) {
            ctx->pc = 0x170BE8u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x170BFCu;
            goto label_170bfc;
        }
    }
    ctx->pc = 0x170BECu;
    // 0x170bec: 0xc05d322
    ctx->pc = 0x170BECu;
    SET_GPR_U32(ctx, 31, 0x170BF4u);
    ctx->pc = 0x174C88u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsTell_0x174c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170BF4u; }
        else if (ctx->pc != 0x170BF4u) { ctx->pc = 0x170BF4u; }
    }
    if (ctx->pc != 0x170BF4u) { return; }
    ctx->pc = 0x170BF4u;
    // 0x170bf4: 0x8e030010
    ctx->pc = 0x170bf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x170bf8: 0x431023
    ctx->pc = 0x170bf8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_170bfc:
    // 0x170bfc: 0xdfbf0010
    ctx->pc = 0x170bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170c00: 0xdfb00000
    ctx->pc = 0x170c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170c04: 0x3e00008
    ctx->pc = 0x170C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170C08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170BFCu: goto label_170bfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170C0Cu;
}
