#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initOndemPal__11PalMgrClassFv
// Address: 0x203ce0 - 0x203d2c
void initOndemPal__11PalMgrClassFv_0x203ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initOndemPal__11PalMgrClassFv");


    ctx->pc = 0x203ce0u;

    // 0x203ce0: 0x27bdffe0
    ctx->pc = 0x203ce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203ce4: 0x7fbf0010
    ctx->pc = 0x203ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x203ce8: 0x7fb00000
    ctx->pc = 0x203ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x203cec: 0x8c820010
    ctx->pc = 0x203cecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x203cf0: 0x10400003
    ctx->pc = 0x203CF0u;
    {
        const bool branch_taken_0x203cf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x203CF4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x203cf0) {
            ctx->pc = 0x203D00u;
            goto label_203d00;
        }
    }
    ctx->pc = 0x203CF8u;
    // 0x203cf8: 0x10000008
    ctx->pc = 0x203CF8u;
    {
        const bool branch_taken_0x203cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203CFCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x203cf8) {
            ctx->pc = 0x203D1Cu;
            goto label_203d1c;
        }
    }
    ctx->pc = 0x203D00u;
label_203d00:
    // 0x203d00: 0x24020400
    ctx->pc = 0x203d00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x203d04: 0xae020010
    ctx->pc = 0x203d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x203d08: 0xc080fb8
    ctx->pc = 0x203D08u;
    SET_GPR_U32(ctx, 31, 0x203D10u);
    ctx->pc = 0x203D0Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x203EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        alloc__11PalMgrClassFi_0x203ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203D10u; }
        else if (ctx->pc != 0x203D10u) { ctx->pc = 0x203D10u; }
    }
    if (ctx->pc != 0x203D10u) { return; }
    ctx->pc = 0x203D10u;
    // 0x203d10: 0xae02000c
    ctx->pc = 0x203d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x203d14: 0x8e02000c
    ctx->pc = 0x203d14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x203d18: 0x0
    ctx->pc = 0x203d18u;
    // NOP
label_203d1c:
    // 0x203d1c: 0x7bbf0010
    ctx->pc = 0x203d1cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203d20: 0x7bb00000
    ctx->pc = 0x203d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203d24: 0x3e00008
    ctx->pc = 0x203D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203D28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203D00u: goto label_203d00;
            case 0x203D1Cu: goto label_203d1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203D2Cu;
}
