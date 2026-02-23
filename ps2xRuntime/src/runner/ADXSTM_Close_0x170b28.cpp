#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_Close
// Address: 0x170b28 - 0x170b7c
void ADXSTM_Close_0x170b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_Close");


    ctx->pc = 0x170b28u;

    // 0x170b28: 0x27bdffe0
    ctx->pc = 0x170b28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170b2c: 0xffb00000
    ctx->pc = 0x170b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170b30: 0x80802d
    ctx->pc = 0x170b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b34: 0x1200000d
    ctx->pc = 0x170B34u;
    {
        const bool branch_taken_0x170b34 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x170B38u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x170b34) {
            ctx->pc = 0x170B6Cu;
            goto label_170b6c;
        }
    }
    ctx->pc = 0x170B3Cu;
    // 0x170b3c: 0xc05c31c
    ctx->pc = 0x170B3Cu;
    SET_GPR_U32(ctx, 31, 0x170B44u);
    ctx->pc = 0x170C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Stop_0x170c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B44u; }
        else if (ctx->pc != 0x170B44u) { ctx->pc = 0x170B44u; }
    }
    if (ctx->pc != 0x170B44u) { return; }
    ctx->pc = 0x170B44u;
    // 0x170b44: 0x8e040008
    ctx->pc = 0x170b44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x170b48: 0x50800004
    ctx->pc = 0x170B48u;
    {
        const bool branch_taken_0x170b48 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x170b48) {
            ctx->pc = 0x170B4Cu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x170B5Cu;
            goto label_170b5c;
        }
    }
    ctx->pc = 0x170B50u;
    // 0x170b50: 0xc05d306
    ctx->pc = 0x170B50u;
    SET_GPR_U32(ctx, 31, 0x170B58u);
    ctx->pc = 0x174C18u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsClose_0x174c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B58u; }
        else if (ctx->pc != 0x170B58u) { ctx->pc = 0x170B58u; }
    }
    if (ctx->pc != 0x170B58u) { return; }
    ctx->pc = 0x170B58u;
    // 0x170b58: 0x200202d
    ctx->pc = 0x170b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170b5c:
    // 0x170b5c: 0xdfbf0010
    ctx->pc = 0x170b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170b60: 0xdfb00000
    ctx->pc = 0x170b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170b64: 0x805c218
    ctx->pc = 0x170B64u;
    ctx->pc = 0x170B68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x170860u;
    ADXSTMF_Destroy_0x170860(rdram, ctx, runtime); return;
    ctx->pc = 0x170B6Cu;
label_170b6c:
    // 0x170b6c: 0xdfbf0010
    ctx->pc = 0x170b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170b70: 0xdfb00000
    ctx->pc = 0x170b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170b74: 0x3e00008
    ctx->pc = 0x170B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170B78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170B5Cu: goto label_170b5c;
            case 0x170B6Cu: goto label_170b6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170B7Cu;
}
