#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_Stop
// Address: 0x170c70 - 0x170ccc
void ADXSTM_Stop_0x170c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_Stop");


    ctx->pc = 0x170c70u;

    // 0x170c70: 0x27bdffe0
    ctx->pc = 0x170c70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170c74: 0xffb00000
    ctx->pc = 0x170c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170c78: 0xffbf0010
    ctx->pc = 0x170c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170c7c: 0xc05a4e4
    ctx->pc = 0x170C7Cu;
    SET_GPR_U32(ctx, 31, 0x170C84u);
    ctx->pc = 0x170C80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C84u; }
        else if (ctx->pc != 0x170C84u) { ctx->pc = 0x170C84u; }
    }
    if (ctx->pc != 0x170C84u) { return; }
    ctx->pc = 0x170C84u;
    // 0x170c84: 0x82030002
    ctx->pc = 0x170c84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x170c88: 0x24020001
    ctx->pc = 0x170c88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x170c8c: 0x14620007
    ctx->pc = 0x170C8Cu;
    {
        const bool branch_taken_0x170c8c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x170c8c) {
            ctx->pc = 0x170CACu;
            goto label_170cac;
        }
    }
    ctx->pc = 0x170C94u;
    // 0x170c94: 0x8e040008
    ctx->pc = 0x170c94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x170c98: 0x10800004
    ctx->pc = 0x170C98u;
    {
        const bool branch_taken_0x170c98 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x170c98) {
            ctx->pc = 0x170CACu;
            goto label_170cac;
        }
    }
    ctx->pc = 0x170CA0u;
    // 0x170ca0: 0xc05d38a
    ctx->pc = 0x170CA0u;
    SET_GPR_U32(ctx, 31, 0x170CA8u);
    ctx->pc = 0x174E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsStopTr_0x174e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CA8u; }
        else if (ctx->pc != 0x170CA8u) { ctx->pc = 0x170CA8u; }
    }
    if (ctx->pc != 0x170CA8u) { return; }
    ctx->pc = 0x170CA8u;
    // 0x170ca8: 0xa2000002
    ctx->pc = 0x170ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_170cac:
    // 0x170cac: 0xc05a4f0
    ctx->pc = 0x170CACu;
    SET_GPR_U32(ctx, 31, 0x170CB4u);
    ctx->pc = 0x1693C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CB4u; }
        else if (ctx->pc != 0x170CB4u) { ctx->pc = 0x170CB4u; }
    }
    if (ctx->pc != 0x170CB4u) { return; }
    ctx->pc = 0x170CB4u;
    // 0x170cb4: 0x24020001
    ctx->pc = 0x170cb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x170cb8: 0xdfbf0010
    ctx->pc = 0x170cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170cbc: 0xa2020001
    ctx->pc = 0x170cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x170cc0: 0xdfb00000
    ctx->pc = 0x170cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170cc4: 0x3e00008
    ctx->pc = 0x170CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170CC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170CACu: goto label_170cac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170CCCu;
}
