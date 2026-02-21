#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetPitchValue
// Address: 0x10bf78 - 0x10bfec
void GetPitchValue_0x10bf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10bf78u;

    // 0x10bf78: 0x27bdffe0
    ctx->pc = 0x10bf78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10bf7c: 0x3c050017
    ctx->pc = 0x10bf7cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x10bf80: 0xffb00000
    ctx->pc = 0x10bf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10bf84: 0x24a55e88
    ctx->pc = 0x10bf84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24200));
    // 0x10bf88: 0x80802d
    ctx->pc = 0x10bf88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf8c: 0xffbf0010
    ctx->pc = 0x10bf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10bf90: 0xc04aefa
    ctx->pc = 0x10BF90u;
    SET_GPR_U32(ctx, 31, 0x10BF98u);
    ctx->pc = 0x10BF94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x12BBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x12bbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BF98u; }
    }
    if (ctx->pc != 0x10BF98u) { return; }
    ctx->pc = 0x10BF98u;
    // 0x10bf98: 0x5440000a
    ctx->pc = 0x10BF98u;
    {
        const bool branch_taken_0x10bf98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10bf98) {
            ctx->pc = 0x10BF9Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x10BFC4u;
            goto label_10bfc4;
        }
    }
    ctx->pc = 0x10BFA0u;
    // 0x10bfa0: 0xc042ffc
    ctx->pc = 0x10BFA0u;
    SET_GPR_U32(ctx, 31, 0x10BFA8u);
    ctx->pc = 0x10BFA4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x10BFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        convertEnd_0x10bff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BFA8u; }
    }
    if (ctx->pc != 0x10BFA8u) { return; }
    ctx->pc = 0x10BFA8u;
    // 0x10bfa8: 0x21300
    ctx->pc = 0x10bfa8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 12));
    // 0x10bfac: 0x3403bb80
    ctx->pc = 0x10bfacu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 48000));
    // 0x10bfb0: 0x43001a
    ctx->pc = 0x10bfb0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x10bfb4: 0x50600001
    ctx->pc = 0x10BFB4u;
    {
        const bool branch_taken_0x10bfb4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x10bfb4) {
            ctx->pc = 0x10BFB8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x10BFBCu;
            goto label_10bfbc;
        }
    }
    ctx->pc = 0x10BFBCu;
label_10bfbc:
    // 0x10bfbc: 0x10000006
    ctx->pc = 0x10BFBCu;
    {
        const bool branch_taken_0x10bfbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x10bfbc) {
            ctx->pc = 0x10BFD8u;
            goto label_10bfd8;
        }
    }
    ctx->pc = 0x10BFC4u;
label_10bfc4:
    // 0x10bfc4: 0x3403bb80
    ctx->pc = 0x10bfc4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 48000));
    // 0x10bfc8: 0x50600001
    ctx->pc = 0x10BFC8u;
    {
        const bool branch_taken_0x10bfc8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x10bfc8) {
            ctx->pc = 0x10BFCCu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x10BFD0u;
            goto label_10bfd0;
        }
    }
    ctx->pc = 0x10BFD0u;
label_10bfd0:
    // 0x10bfd0: 0x21300
    ctx->pc = 0x10bfd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 12));
    // 0x10bfd4: 0x43001a
    ctx->pc = 0x10bfd4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_10bfd8:
    // 0x10bfd8: 0x1012
    ctx->pc = 0x10bfd8u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x10bfdc: 0xdfbf0010
    ctx->pc = 0x10bfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bfe0: 0xdfb00000
    ctx->pc = 0x10bfe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bfe4: 0x3e00008
    ctx->pc = 0x10BFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BFE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10BFBCu: goto label_10bfbc;
            case 0x10BFC4u: goto label_10bfc4;
            case 0x10BFD0u: goto label_10bfd0;
            case 0x10BFD8u: goto label_10bfd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10BFECu;
}
