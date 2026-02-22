#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: voBufIncCount
// Address: 0x11a948 - 0x11a9b8
void voBufIncCount_0x11a948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a948u;

    // 0x11a948: 0x27bdffe0
    ctx->pc = 0x11a948u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a94c: 0xffb00000
    ctx->pc = 0x11a94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a950: 0xffbf0010
    ctx->pc = 0x11a950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a954: 0xc0453ee
    ctx->pc = 0x11A954u;
    SET_GPR_U32(ctx, 31, 0x11A95Cu);
    ctx->pc = 0x11A958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A95Cu; }
    }
    if (ctx->pc != 0x11A95Cu) { return; }
    ctx->pc = 0x11A95Cu;
    // 0x11a95c: 0x8e030008
    ctx->pc = 0x11a95cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11a960: 0x3c02000a
    ctx->pc = 0x11a960u;
    SET_GPR_S32(ctx, 2, ((uint32_t)10 << 16));
    // 0x11a964: 0x3442af40
    ctx->pc = 0x11a964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)44864);
    // 0x11a968: 0x8e050004
    ctx->pc = 0x11a968u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11a96c: 0x621818
    ctx->pc = 0x11a96cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x11a970: 0x24040002
    ctx->pc = 0x11a970u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x11a974: 0x651821
    ctx->pc = 0x11a974u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11a978: 0xac640000
    ctx->pc = 0x11a978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x11a97c: 0x8e02000c
    ctx->pc = 0x11a97cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11a980: 0x8e040010
    ctx->pc = 0x11a980u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11a984: 0x24420001
    ctx->pc = 0x11a984u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x11a988: 0xae02000c
    ctx->pc = 0x11a988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x11a98c: 0x50800001
    ctx->pc = 0x11A98Cu;
    {
        const bool branch_taken_0x11a98c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x11a98c) {
            ctx->pc = 0x11A990u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11A994u;
            goto label_11a994;
        }
    }
    ctx->pc = 0x11A994u;
label_11a994:
    // 0x11a994: 0x8e020008
    ctx->pc = 0x11a994u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11a998: 0xdfbf0010
    ctx->pc = 0x11a998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a99c: 0x24420001
    ctx->pc = 0x11a99cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x11a9a0: 0x44001a
    ctx->pc = 0x11a9a0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11a9a4: 0x1810
    ctx->pc = 0x11a9a4u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x11a9a8: 0xae030008
    ctx->pc = 0x11a9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x11a9ac: 0xdfb00000
    ctx->pc = 0x11a9acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a9b0: 0x8045400
    ctx->pc = 0x11A9B0u;
    ctx->pc = 0x11A9B4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x115000u;
    EIntr_0x115000(rdram, ctx, runtime); return;
    ctx->pc = 0x11A9B8u;
}
