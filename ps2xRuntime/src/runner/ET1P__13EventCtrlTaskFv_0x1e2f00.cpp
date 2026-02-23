#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ET1P__13EventCtrlTaskFv
// Address: 0x1e2f00 - 0x1e2f54
void ET1P__13EventCtrlTaskFv_0x1e2f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ET1P__13EventCtrlTaskFv");


    ctx->pc = 0x1e2f00u;

    // 0x1e2f00: 0x27bdffe0
    ctx->pc = 0x1e2f00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2f04: 0x7fbf0010
    ctx->pc = 0x1e2f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e2f08: 0x7fb00000
    ctx->pc = 0x1e2f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2f0c: 0x3c010050
    ctx->pc = 0x1e2f0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e2f10: 0x8423e3ec
    ctx->pc = 0x1e2f10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960108)));
    // 0x1e2f14: 0x24020001
    ctx->pc = 0x1e2f14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2f18: 0x10620006
    ctx->pc = 0x1E2F18u;
    {
        const bool branch_taken_0x1e2f18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1E2F1Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e2f18) {
            ctx->pc = 0x1E2F34u;
            goto label_1e2f34;
        }
    }
    ctx->pc = 0x1E2F20u;
    // 0x1e2f20: 0x8e05000c
    ctx->pc = 0x1e2f20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2f24: 0xc24cbb0
    ctx->pc = 0x1E2F24u;
    SET_GPR_U32(ctx, 31, 0x1E2F2Cu);
    ctx->pc = 0x1E2F28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937608));
    ctx->pc = 0x932EC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        skipEvent__13EnemyMgrClassFPUi_0x932ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2F2Cu; }
        else if (ctx->pc != 0x1E2F2Cu) { ctx->pc = 0x1E2F2Cu; }
    }
    if (ctx->pc != 0x1E2F2Cu) { return; }
    ctx->pc = 0x1E2F2Cu;
    // 0x1e2f2c: 0x10000005
    ctx->pc = 0x1E2F2Cu;
    {
        const bool branch_taken_0x1e2f2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E2F30u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1e2f2c) {
            ctx->pc = 0x1E2F44u;
            goto label_1e2f44;
        }
    }
    ctx->pc = 0x1E2F34u;
label_1e2f34:
    // 0x1e2f34: 0x8e05000c
    ctx->pc = 0x1e2f34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2f38: 0xc24cae0
    ctx->pc = 0x1E2F38u;
    SET_GPR_U32(ctx, 31, 0x1E2F40u);
    ctx->pc = 0x1E2F3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937608));
    ctx->pc = 0x932B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryEvent__13EnemyMgrClassFPUi_0x932b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2F40u; }
        else if (ctx->pc != 0x1E2F40u) { ctx->pc = 0x1E2F40u; }
    }
    if (ctx->pc != 0x1E2F40u) { return; }
    ctx->pc = 0x1E2F40u;
    // 0x1e2f40: 0xae02000c
    ctx->pc = 0x1e2f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1e2f44:
    // 0x1e2f44: 0x7bbf0010
    ctx->pc = 0x1e2f44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2f48: 0x7bb00000
    ctx->pc = 0x1e2f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2f4c: 0x3e00008
    ctx->pc = 0x1E2F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2F50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2F34u: goto label_1e2f34;
            case 0x1E2F44u: goto label_1e2f44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2F54u;
}
