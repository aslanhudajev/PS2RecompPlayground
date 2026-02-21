#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeHeaderFindSeq
// Address: 0x212f68 - 0x212ff8
void AtreeHeaderFindSeq_0x212f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212f68u;

    // 0x212f68: 0x27bdffa0
    ctx->pc = 0x212f68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x212f6c: 0xffbf0050
    ctx->pc = 0x212f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x212f70: 0xffb40040
    ctx->pc = 0x212f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x212f74: 0xffb30030
    ctx->pc = 0x212f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x212f78: 0xffb20020
    ctx->pc = 0x212f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x212f7c: 0xffb10010
    ctx->pc = 0x212f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x212f80: 0xffb00000
    ctx->pc = 0x212f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212f84: 0x80882d
    ctx->pc = 0x212f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f88: 0xa0982d
    ctx->pc = 0x212f88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f8c: 0x8e320000
    ctx->pc = 0x212f8cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x212f90: 0x8e220014
    ctx->pc = 0x212f90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x212f94: 0x1840000f
    ctx->pc = 0x212F94u;
    {
        const bool branch_taken_0x212f94 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x212F98u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212f94) {
            ctx->pc = 0x212FD4u;
            goto label_212fd4;
        }
    }
    ctx->pc = 0x212F9Cu;
    // 0x212f9c: 0x24140030
    ctx->pc = 0x212f9cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 48));
    // 0x212fa0: 0x2141018
    ctx->pc = 0x212fa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x212fa4: 0x0
    ctx->pc = 0x212fa4u;
    // NOP
label_212fa8:
    // 0x212fa8: 0x522021
    ctx->pc = 0x212fa8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x212fac: 0xc0bf270
    ctx->pc = 0x212FACu;
    SET_GPR_U32(ctx, 31, 0x212FB4u);
    ctx->pc = 0x212FB0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212FB4u; }
    }
    if (ctx->pc != 0x212FB4u) { return; }
    ctx->pc = 0x212FB4u;
    // 0x212fb4: 0x54400003
    ctx->pc = 0x212FB4u;
    {
        const bool branch_taken_0x212fb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x212fb4) {
            ctx->pc = 0x212FB8u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x212FC4u;
            goto label_212fc4;
        }
    }
    ctx->pc = 0x212FBCu;
    // 0x212fbc: 0x10000006
    ctx->pc = 0x212FBCu;
    {
        const bool branch_taken_0x212fbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x212FC0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212fbc) {
            ctx->pc = 0x212FD8u;
            goto label_212fd8;
        }
    }
    ctx->pc = 0x212FC4u;
label_212fc4:
    // 0x212fc4: 0x8e220014
    ctx->pc = 0x212fc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x212fc8: 0x202102a
    ctx->pc = 0x212fc8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x212fcc: 0x1440fff6
    ctx->pc = 0x212FCCu;
    {
        const bool branch_taken_0x212fcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x212FD0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x212fcc) {
            ctx->pc = 0x212FA8u;
            goto label_212fa8;
        }
    }
    ctx->pc = 0x212FD4u;
label_212fd4:
    // 0x212fd4: 0x2402ffff
    ctx->pc = 0x212fd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_212fd8:
    // 0x212fd8: 0xdfbf0050
    ctx->pc = 0x212fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x212fdc: 0xdfb40040
    ctx->pc = 0x212fdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212fe0: 0xdfb30030
    ctx->pc = 0x212fe0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212fe4: 0xdfb20020
    ctx->pc = 0x212fe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212fe8: 0xdfb10010
    ctx->pc = 0x212fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212fec: 0xdfb00000
    ctx->pc = 0x212fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212ff0: 0x3e00008
    ctx->pc = 0x212FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212FF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212FA8u: goto label_212fa8;
            case 0x212FC4u: goto label_212fc4;
            case 0x212FD4u: goto label_212fd4;
            case 0x212FD8u: goto label_212fd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212FF8u;
}
