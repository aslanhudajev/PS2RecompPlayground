#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getVTexBuf__11TexMgrClassFi
// Address: 0x21a870 - 0x21a8b4
void getVTexBuf__11TexMgrClassFi_0x21a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getVTexBuf__11TexMgrClassFi");


    ctx->pc = 0x21a870u;

    // 0x21a870: 0x510c0
    ctx->pc = 0x21a870u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x21a874: 0x451023
    ctx->pc = 0x21a874u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21a878: 0x21880
    ctx->pc = 0x21a878u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x21a87c: 0x3c020092
    ctx->pc = 0x21a87cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)146 << 16));
    // 0x21a880: 0x24424d00
    ctx->pc = 0x21a880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19712));
    // 0x21a884: 0x431021
    ctx->pc = 0x21a884u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a888: 0x8c420000
    ctx->pc = 0x21a888u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a88c: 0x14400003
    ctx->pc = 0x21A88Cu;
    {
        const bool branch_taken_0x21a88c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21A890u;
        SET_GPR_U32(ctx, 2, ((uint32_t)146 << 16));
        if (branch_taken_0x21a88c) {
            ctx->pc = 0x21A89Cu;
            goto label_21a89c;
        }
    }
    ctx->pc = 0x21A894u;
    // 0x21a894: 0x10000005
    ctx->pc = 0x21A894u;
    {
        const bool branch_taken_0x21a894 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A898u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21a894) {
            ctx->pc = 0x21A8ACu;
            goto label_21a8ac;
        }
    }
    ctx->pc = 0x21A89Cu;
label_21a89c:
    // 0x21a89c: 0x24424d04
    ctx->pc = 0x21a89cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19716));
    // 0x21a8a0: 0x431021
    ctx->pc = 0x21a8a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a8a4: 0x8c420000
    ctx->pc = 0x21a8a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a8a8: 0x0
    ctx->pc = 0x21a8a8u;
    // NOP
label_21a8ac:
    // 0x21a8ac: 0x3e00008
    ctx->pc = 0x21A8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A89Cu: goto label_21a89c;
            case 0x21A8ACu: goto label_21a8ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A8B4u;
}
