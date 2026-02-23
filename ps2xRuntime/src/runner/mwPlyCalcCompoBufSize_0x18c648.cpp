#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyCalcCompoBufSize
// Address: 0x18c648 - 0x18c6a4
void mwPlyCalcCompoBufSize_0x18c648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyCalcCompoBufSize");


    ctx->pc = 0x18c648u;

    // 0x18c648: 0xa4102a
    ctx->pc = 0x18c648u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
    // 0x18c64c: 0x82280b
    ctx->pc = 0x18c64cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 4));
    // 0x18c650: 0x14a00003
    ctx->pc = 0x18C650u;
    {
        const bool branch_taken_0x18c650 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x18C654u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18c650) {
            ctx->pc = 0x18C660u;
            goto label_18c660;
        }
    }
    ctx->pc = 0x18C658u;
    // 0x18c658: 0x3e00008
    ctx->pc = 0x18C658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C65Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C660u: goto label_18c660;
            case 0x18C670u: goto label_18c670;
            case 0x18C68Cu: goto label_18c68c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C660u;
label_18c660:
    // 0x18c660: 0x28a20002
    ctx->pc = 0x18c660u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 2));
    // 0x18c664: 0x14400009
    ctx->pc = 0x18C664u;
    {
        const bool branch_taken_0x18c664 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18C668u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x18c664) {
            ctx->pc = 0x18C68Cu;
            goto label_18c68c;
        }
    }
    ctx->pc = 0x18C66Cu;
    // 0x18c66c: 0x0
    ctx->pc = 0x18c66cu;
    // NOP
label_18c670:
    // 0x18c670: 0x31843
    ctx->pc = 0x18c670u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x18c674: 0x42040
    ctx->pc = 0x18c674u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x18c678: 0x28620002
    ctx->pc = 0x18c678u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x18c67c: 0x0
    ctx->pc = 0x18c67cu;
    // NOP
    // 0x18c680: 0x0
    ctx->pc = 0x18c680u;
    // NOP
    // 0x18c684: 0x1040fffa
    ctx->pc = 0x18C684u;
    {
        const bool branch_taken_0x18c684 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c684) {
            ctx->pc = 0x18C670u;
            goto label_18c670;
        }
    }
    ctx->pc = 0x18C68Cu;
label_18c68c:
    // 0x18c68c: 0x851023
    ctx->pc = 0x18c68cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18c690: 0x2102a
    ctx->pc = 0x18c690u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    // 0x18c694: 0x442004
    ctx->pc = 0x18c694u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c698: 0x841018
    ctx->pc = 0x18c698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x18c69c: 0x3e00008
    ctx->pc = 0x18C69Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C6A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C660u: goto label_18c660;
            case 0x18C670u: goto label_18c670;
            case 0x18C68Cu: goto label_18c68c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C6A4u;
}
