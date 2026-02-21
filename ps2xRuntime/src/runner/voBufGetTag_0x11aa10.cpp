#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: voBufGetTag
// Address: 0x11aa10 - 0x11aa74
void voBufGetTag_0x11aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11aa10u;

    // 0x11aa10: 0x27bdffe0
    ctx->pc = 0x11aa10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11aa14: 0xffb00000
    ctx->pc = 0x11aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11aa18: 0xffbf0010
    ctx->pc = 0x11aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11aa1c: 0xc046a80
    ctx->pc = 0x11AA1Cu;
    SET_GPR_U32(ctx, 31, 0x11AA24u);
    ctx->pc = 0x11AA20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11AA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        voBufIsEmpty_0x11aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AA24u; }
    }
    if (ctx->pc != 0x11AA24u) { return; }
    ctx->pc = 0x11AA24u;
    // 0x11aa24: 0x5440000f
    ctx->pc = 0x11AA24u;
    {
        const bool branch_taken_0x11aa24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11aa24) {
            ctx->pc = 0x11AA28u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x11AA64u;
            goto label_11aa64;
        }
    }
    ctx->pc = 0x11AA2Cu;
    // 0x11aa2c: 0x8e040008
    ctx->pc = 0x11aa2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11aa30: 0x3c06000a
    ctx->pc = 0x11aa30u;
    SET_GPR_U32(ctx, 6, ((uint32_t)10 << 16));
    // 0x11aa34: 0x8e02000c
    ctx->pc = 0x11aa34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11aa38: 0x34c6af40
    ctx->pc = 0x11aa38u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 44864));
    // 0x11aa3c: 0x8e030010
    ctx->pc = 0x11aa3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11aa40: 0x822023
    ctx->pc = 0x11aa40u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11aa44: 0x832021
    ctx->pc = 0x11aa44u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11aa48: 0x50600001
    ctx->pc = 0x11AA48u;
    {
        const bool branch_taken_0x11aa48 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x11aa48) {
            ctx->pc = 0x11AA4Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11AA50u;
            goto label_11aa50;
        }
    }
    ctx->pc = 0x11AA50u;
label_11aa50:
    // 0x11aa50: 0x83001a
    ctx->pc = 0x11aa50u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11aa54: 0x8e050004
    ctx->pc = 0x11aa54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11aa58: 0x1010
    ctx->pc = 0x11aa58u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x11aa5c: 0x461018
    ctx->pc = 0x11aa5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x11aa60: 0xa21021
    ctx->pc = 0x11aa60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_11aa64:
    // 0x11aa64: 0xdfbf0010
    ctx->pc = 0x11aa64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11aa68: 0xdfb00000
    ctx->pc = 0x11aa68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aa6c: 0x3e00008
    ctx->pc = 0x11AA6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AA70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AA50u: goto label_11aa50;
            case 0x11AA64u: goto label_11aa64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11AA74u;
}
