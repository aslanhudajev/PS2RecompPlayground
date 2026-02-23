#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SNDONMSK__13EventCtrlTaskFv
// Address: 0x1e3590 - 0x1e35e4
void SNDONMSK__13EventCtrlTaskFv_0x1e3590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SNDONMSK__13EventCtrlTaskFv");


    ctx->pc = 0x1e3590u;

    // 0x1e3590: 0x27bdffe0
    ctx->pc = 0x1e3590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3594: 0x7fbf0010
    ctx->pc = 0x1e3594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3598: 0x7fb00000
    ctx->pc = 0x1e3598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e359c: 0x8f838ce8
    ctx->pc = 0x1e359cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
    // 0x1e35a0: 0x14600009
    ctx->pc = 0x1E35A0u;
    {
        const bool branch_taken_0x1e35a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E35A4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e35a0) {
            ctx->pc = 0x1E35C8u;
            goto label_1e35c8;
        }
    }
    ctx->pc = 0x1E35A8u;
    // 0x1e35a8: 0x8e02000c
    ctx->pc = 0x1e35a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e35ac: 0x8c450008
    ctx->pc = 0x1e35acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e35b0: 0x8c46000c
    ctx->pc = 0x1e35b0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e35b4: 0x8c470010
    ctx->pc = 0x1e35b4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e35b8: 0x8c480014
    ctx->pc = 0x1e35b8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e35bc: 0x8c490018
    ctx->pc = 0x1e35bcu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1e35c0: 0xc250390
    ctx->pc = 0x1E35C0u;
    SET_GPR_U32(ctx, 31, 0x1E35C8u);
    ctx->pc = 0x1E35C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x940E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_ManySe__Fiiiiii_0x940e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E35C8u; }
        else if (ctx->pc != 0x1E35C8u) { ctx->pc = 0x1E35C8u; }
    }
    if (ctx->pc != 0x1E35C8u) { return; }
    ctx->pc = 0x1E35C8u;
label_1e35c8:
    // 0x1e35c8: 0x8e03000c
    ctx->pc = 0x1e35c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e35cc: 0x2463001c
    ctx->pc = 0x1e35ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 28));
    // 0x1e35d0: 0xae03000c
    ctx->pc = 0x1e35d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e35d4: 0x7bbf0010
    ctx->pc = 0x1e35d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e35d8: 0x7bb00000
    ctx->pc = 0x1e35d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e35dc: 0x3e00008
    ctx->pc = 0x1E35DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E35E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E35C8u: goto label_1e35c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E35E4u;
}
