#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrlOsage__9CClothMgrFP6MOPRTS
// Address: 0x1ce5a0 - 0x1ce5f4
void ctrlOsage__9CClothMgrFP6MOPRTS_0x1ce5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrlOsage__9CClothMgrFP6MOPRTS");


    ctx->pc = 0x1ce5a0u;

    // 0x1ce5a0: 0x27bdffd0
    ctx->pc = 0x1ce5a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ce5a4: 0x7fbf0020
    ctx->pc = 0x1ce5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1ce5a8: 0x7fb10010
    ctx->pc = 0x1ce5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ce5ac: 0x7fb00000
    ctx->pc = 0x1ce5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ce5b0: 0x70808e28
    ctx->pc = 0x1ce5b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ce5b4: 0x8c840000
    ctx->pc = 0x1ce5b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ce5b8: 0x24030047
    ctx->pc = 0x1ce5b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 71));
    // 0x1ce5bc: 0x10830003
    ctx->pc = 0x1CE5BCu;
    {
        const bool branch_taken_0x1ce5bc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CE5C0u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ce5bc) {
            ctx->pc = 0x1CE5CCu;
            goto label_1ce5cc;
        }
    }
    ctx->pc = 0x1CE5C4u;
    // 0x1ce5c4: 0x10000007
    ctx->pc = 0x1CE5C4u;
    {
        const bool branch_taken_0x1ce5c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE5C8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1ce5c4) {
            ctx->pc = 0x1CE5E4u;
            goto label_1ce5e4;
        }
    }
    ctx->pc = 0x1CE5CCu;
label_1ce5cc:
    // 0x1ce5cc: 0xc08032c
    ctx->pc = 0x1CE5CCu;
    SET_GPR_U32(ctx, 31, 0x1CE5D4u);
    ctx->pc = 0x1CE5D0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 384)));
    ctx->pc = 0x200CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initPos__6COsageFP6MOPRTS_0x200cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5D4u; }
        else if (ctx->pc != 0x1CE5D4u) { ctx->pc = 0x1CE5D4u; }
    }
    if (ctx->pc != 0x1CE5D4u) { return; }
    ctx->pc = 0x1CE5D4u;
    // 0x1ce5d4: 0x8e240180
    ctx->pc = 0x1ce5d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1ce5d8: 0xc0803ac
    ctx->pc = 0x1CE5D8u;
    SET_GPR_U32(ctx, 31, 0x1CE5E0u);
    ctx->pc = 0x1CE5DCu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x200EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__6COsageFP6MOPRTS_0x200eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5E0u; }
        else if (ctx->pc != 0x1CE5E0u) { ctx->pc = 0x1CE5E0u; }
    }
    if (ctx->pc != 0x1CE5E0u) { return; }
    ctx->pc = 0x1CE5E0u;
    // 0x1ce5e0: 0x7bbf0020
    ctx->pc = 0x1ce5e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ce5e4:
    // 0x1ce5e4: 0x7bb10010
    ctx->pc = 0x1ce5e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce5e8: 0x7bb00000
    ctx->pc = 0x1ce5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce5ec: 0x3e00008
    ctx->pc = 0x1CE5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE5F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE5CCu: goto label_1ce5cc;
            case 0x1CE5E4u: goto label_1ce5e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE5F4u;
}
