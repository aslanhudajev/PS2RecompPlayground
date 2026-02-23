#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: motionSelect__10PeopleTaskFPi
// Address: 0x20a6b0 - 0x20a6f8
void motionSelect__10PeopleTaskFPi_0x20a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("motionSelect__10PeopleTaskFPi");


    ctx->pc = 0x20a6b0u;

    // 0x20a6b0: 0x27bdffe0
    ctx->pc = 0x20a6b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a6b4: 0x7fbf0010
    ctx->pc = 0x20a6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20a6b8: 0x7fb00000
    ctx->pc = 0x20a6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20a6bc: 0xc069fb8
    ctx->pc = 0x20A6BCu;
    SET_GPR_U32(ctx, 31, 0x20A6C4u);
    ctx->pc = 0x20A6C0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A6C4u; }
        else if (ctx->pc != 0x20A6C4u) { ctx->pc = 0x20A6C4u; }
    }
    if (ctx->pc != 0x20A6C4u) { return; }
    ctx->pc = 0x20A6C4u;
    // 0x20a6c4: 0x8e030004
    ctx->pc = 0x20a6c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20a6c8: 0x14600002
    ctx->pc = 0x20A6C8u;
    {
        const bool branch_taken_0x20a6c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x20A6CCu;
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x20a6c8) {
            ctx->pc = 0x20A6D4u;
            goto label_20a6d4;
        }
    }
    ctx->pc = 0x20A6D0u;
    // 0x20a6d0: 0x1cd
    ctx->pc = 0x20a6d0u;
    runtime->handleBreak(rdram, ctx);
label_20a6d4:
    // 0x20a6d4: 0x8e030000
    ctx->pc = 0x20a6d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20a6d8: 0x1010
    ctx->pc = 0x20a6d8u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x20a6dc: 0x7bbf0010
    ctx->pc = 0x20a6dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a6e0: 0x21040
    ctx->pc = 0x20a6e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x20a6e4: 0x621021
    ctx->pc = 0x20a6e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a6e8: 0x7bb00000
    ctx->pc = 0x20a6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a6ec: 0x84420000
    ctx->pc = 0x20a6ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20a6f0: 0x3e00008
    ctx->pc = 0x20A6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A6F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A6D4u: goto label_20a6d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A6F8u;
}
