#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ET2P__13EventCtrlTaskFv
// Address: 0x1e2f60 - 0x1e2fb4
void ET2P__13EventCtrlTaskFv_0x1e2f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ET2P__13EventCtrlTaskFv");


    ctx->pc = 0x1e2f60u;

    // 0x1e2f60: 0x27bdffe0
    ctx->pc = 0x1e2f60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2f64: 0x7fbf0010
    ctx->pc = 0x1e2f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e2f68: 0x7fb00000
    ctx->pc = 0x1e2f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2f6c: 0x3c010050
    ctx->pc = 0x1e2f6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e2f70: 0x8423e3ec
    ctx->pc = 0x1e2f70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960108)));
    // 0x1e2f74: 0x24020002
    ctx->pc = 0x1e2f74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2f78: 0x10620006
    ctx->pc = 0x1E2F78u;
    {
        const bool branch_taken_0x1e2f78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1E2F7Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e2f78) {
            ctx->pc = 0x1E2F94u;
            goto label_1e2f94;
        }
    }
    ctx->pc = 0x1E2F80u;
    // 0x1e2f80: 0x8e05000c
    ctx->pc = 0x1e2f80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2f84: 0xc24cbb0
    ctx->pc = 0x1E2F84u;
    SET_GPR_U32(ctx, 31, 0x1E2F8Cu);
    ctx->pc = 0x1E2F88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937608));
    ctx->pc = 0x932EC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        skipEvent__13EnemyMgrClassFPUi_0x932ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2F8Cu; }
        else if (ctx->pc != 0x1E2F8Cu) { ctx->pc = 0x1E2F8Cu; }
    }
    if (ctx->pc != 0x1E2F8Cu) { return; }
    ctx->pc = 0x1E2F8Cu;
    // 0x1e2f8c: 0x10000005
    ctx->pc = 0x1E2F8Cu;
    {
        const bool branch_taken_0x1e2f8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E2F90u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1e2f8c) {
            ctx->pc = 0x1E2FA4u;
            goto label_1e2fa4;
        }
    }
    ctx->pc = 0x1E2F94u;
label_1e2f94:
    // 0x1e2f94: 0x8e05000c
    ctx->pc = 0x1e2f94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2f98: 0xc24cae0
    ctx->pc = 0x1E2F98u;
    SET_GPR_U32(ctx, 31, 0x1E2FA0u);
    ctx->pc = 0x1E2F9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937608));
    ctx->pc = 0x932B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryEvent__13EnemyMgrClassFPUi_0x932b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2FA0u; }
        else if (ctx->pc != 0x1E2FA0u) { ctx->pc = 0x1E2FA0u; }
    }
    if (ctx->pc != 0x1E2FA0u) { return; }
    ctx->pc = 0x1E2FA0u;
    // 0x1e2fa0: 0xae02000c
    ctx->pc = 0x1e2fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1e2fa4:
    // 0x1e2fa4: 0x7bbf0010
    ctx->pc = 0x1e2fa4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2fa8: 0x7bb00000
    ctx->pc = 0x1e2fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2fac: 0x3e00008
    ctx->pc = 0x1E2FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2FB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2F94u: goto label_1e2f94;
            case 0x1E2FA4u: goto label_1e2fa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2FB4u;
}
