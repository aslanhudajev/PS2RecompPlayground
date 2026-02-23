#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: isEnableVidFtr
// Address: 0x1a0ee0 - 0x1a0f20
void isEnableVidFtr_0x1a0ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("isEnableVidFtr");


    ctx->pc = 0x1a0ee0u;

    // 0x1a0ee0: 0x27bdffe0
    ctx->pc = 0x1a0ee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0ee4: 0xffb00000
    ctx->pc = 0x1a0ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0ee8: 0xffbf0010
    ctx->pc = 0x1a0ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0eec: 0xc0683c8
    ctx->pc = 0x1A0EECu;
    SET_GPR_U32(ctx, 31, 0x1A0EF4u);
    ctx->pc = 0x1A0EF0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkStmId_0x1a0f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EF4u; }
        else if (ctx->pc != 0x1A0EF4u) { ctx->pc = 0x1A0EF4u; }
    }
    if (ctx->pc != 0x1A0EF4u) { return; }
    ctx->pc = 0x1A0EF4u;
    // 0x1a0ef4: 0x240300e0
    ctx->pc = 0x1a0ef4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1a0ef8: 0x14430005
    ctx->pc = 0x1A0EF8u;
    {
        const bool branch_taken_0x1a0ef8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A0EFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ef8) {
            ctx->pc = 0x1A0F10u;
            goto label_1a0f10;
        }
    }
    ctx->pc = 0x1A0F00u;
    // 0x1a0f00: 0x92050020
    ctx->pc = 0x1a0f00u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a0f04: 0x2ca30002
    ctx->pc = 0x1a0f04u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 5), 2));
    // 0x1a0f08: 0x54600001
    ctx->pc = 0x1A0F08u;
    {
        const bool branch_taken_0x1a0f08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a0f08) {
            ctx->pc = 0x1A0F0Cu;
            SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
            ctx->pc = 0x1A0F10u;
            goto label_1a0f10;
        }
    }
    ctx->pc = 0x1A0F10u;
label_1a0f10:
    // 0x1a0f10: 0xdfbf0010
    ctx->pc = 0x1a0f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0f14: 0xdfb00000
    ctx->pc = 0x1a0f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0f18: 0x3e00008
    ctx->pc = 0x1A0F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0F1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0F10u: goto label_1a0f10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0F20u;
}
