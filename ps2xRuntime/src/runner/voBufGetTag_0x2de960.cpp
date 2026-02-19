#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: voBufGetTag
// Address: 0x2de960 - 0x2de9c4
void voBufGetTag_0x2de960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de960u;

    // 0x2de960: 0x27bdffe0
    ctx->pc = 0x2de960u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2de964: 0xffbf0010
    ctx->pc = 0x2de964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2de968: 0xffb00000
    ctx->pc = 0x2de968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de96c: 0xc0b7a54
    ctx->pc = 0x2DE96Cu;
    SET_GPR_U32(ctx, 31, 0x2DE974u);
    ctx->pc = 0x2DE970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DE950u;
    {
        const uint32_t __entryPc = ctx->pc;
        voBufIsEmpty_0x2de950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE974u; }
    }
    if (ctx->pc != 0x2DE974u) { return; }
    ctx->pc = 0x2DE974u;
    // 0x2de974: 0x5440000f
    ctx->pc = 0x2DE974u;
    {
        const bool branch_taken_0x2de974 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2de974) {
            ctx->pc = 0x2DE978u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2DE9B4u;
            goto label_2de9b4;
        }
    }
    ctx->pc = 0x2DE97Cu;
    // 0x2de97c: 0x8e030008
    ctx->pc = 0x2de97cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2de980: 0x8e02000c
    ctx->pc = 0x2de980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2de984: 0x621823
    ctx->pc = 0x2de984u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2de988: 0x8e020010
    ctx->pc = 0x2de988u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2de98c: 0x621821
    ctx->pc = 0x2de98cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2de990: 0x62001a
    ctx->pc = 0x2de990u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2de994: 0x1810
    ctx->pc = 0x2de994u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x2de998: 0x50400001
    ctx->pc = 0x2DE998u;
    {
        const bool branch_taken_0x2de998 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2de998) {
            ctx->pc = 0x2DE99Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DE9A0u;
            goto label_2de9a0;
        }
    }
    ctx->pc = 0x2DE9A0u;
label_2de9a0:
    // 0x2de9a0: 0x3c020003
    ctx->pc = 0x2de9a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)3 << 16));
    // 0x2de9a4: 0x34429240
    ctx->pc = 0x2de9a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 37440));
    // 0x2de9a8: 0x621818
    ctx->pc = 0x2de9a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2de9ac: 0x8e020004
    ctx->pc = 0x2de9acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2de9b0: 0x621021
    ctx->pc = 0x2de9b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2de9b4:
    // 0x2de9b4: 0xdfbf0010
    ctx->pc = 0x2de9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de9b8: 0xdfb00000
    ctx->pc = 0x2de9b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de9bc: 0x3e00008
    ctx->pc = 0x2DE9BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE9C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE9A0u: goto label_2de9a0;
            case 0x2DE9B4u: goto label_2de9b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DE9C4u;
}
