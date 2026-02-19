#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeNodeSetParent
// Address: 0x212500 - 0x2125ac
void AtreeNodeSetParent_0x212500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212500u;

    // 0x212500: 0x27bdffc0
    ctx->pc = 0x212500u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x212504: 0xffbf0030
    ctx->pc = 0x212504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x212508: 0xffb20020
    ctx->pc = 0x212508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21250c: 0xffb10010
    ctx->pc = 0x21250cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x212510: 0xffb00000
    ctx->pc = 0x212510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212514: 0x80802d
    ctx->pc = 0x212514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212518: 0xa0882d
    ctx->pc = 0x212518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21251c: 0xc0282d
    ctx->pc = 0x21251cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212520: 0x8e030004
    ctx->pc = 0x212520u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x212524: 0x1060000b
    ctx->pc = 0x212524u;
    {
        const bool branch_taken_0x212524 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x212528u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212524) {
            ctx->pc = 0x212554u;
            goto label_212554;
        }
    }
    ctx->pc = 0x21252Cu;
    // 0x21252c: 0x1071001a
    ctx->pc = 0x21252Cu;
    {
        const bool branch_taken_0x21252c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 17));
        ctx->pc = 0x212530u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x21252c) {
            ctx->pc = 0x212598u;
            goto label_212598;
        }
    }
    ctx->pc = 0x212534u;
    // 0x212534: 0x10600007
    ctx->pc = 0x212534u;
    {
        const bool branch_taken_0x212534 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x212534) {
            ctx->pc = 0x212554u;
            goto label_212554;
        }
    }
    ctx->pc = 0x21253Cu;
    // 0x21253c: 0x8c620008
    ctx->pc = 0x21253cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x212540: 0x14500004
    ctx->pc = 0x212540u;
    {
        const bool branch_taken_0x212540 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x212540) {
            ctx->pc = 0x212554u;
            goto label_212554;
        }
    }
    ctx->pc = 0x212548u;
    // 0x212548: 0x8e02000c
    ctx->pc = 0x212548u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21254c: 0x10000005
    ctx->pc = 0x21254Cu;
    {
        const bool branch_taken_0x21254c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x212550u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x21254c) {
            ctx->pc = 0x212564u;
            goto label_212564;
        }
    }
    ctx->pc = 0x212554u;
label_212554:
    // 0x212554: 0xc08463e
    ctx->pc = 0x212554u;
    SET_GPR_U32(ctx, 31, 0x21255Cu);
    ctx->pc = 0x212558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2118F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeNodePrevNode_0x2118f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21255Cu; }
    }
    if (ctx->pc != 0x21255Cu) { return; }
    ctx->pc = 0x21255Cu;
    // 0x21255c: 0x8e03000c
    ctx->pc = 0x21255cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x212560: 0xac43000c
    ctx->pc = 0x212560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_212564:
    // 0x212564: 0xae00000c
    ctx->pc = 0x212564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x212568: 0x200202d
    ctx->pc = 0x212568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21256c: 0x220282d
    ctx->pc = 0x21256cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212570: 0xc08466e
    ctx->pc = 0x212570u;
    SET_GPR_U32(ctx, 31, 0x212578u);
    ctx->pc = 0x212574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2119B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeNodeInsert_0x2119b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212578u; }
    }
    if (ctx->pc != 0x212578u) { return; }
    ctx->pc = 0x212578u;
    // 0x212578: 0x12400007
    ctx->pc = 0x212578u;
    {
        const bool branch_taken_0x212578 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x21257Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x212578) {
            ctx->pc = 0x212598u;
            goto label_212598;
        }
    }
    ctx->pc = 0x212580u;
    // 0x212580: 0x8e040000
    ctx->pc = 0x212580u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212584: 0x10800005
    ctx->pc = 0x212584u;
    {
        const bool branch_taken_0x212584 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x212588u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x212584) {
            ctx->pc = 0x21259Cu;
            goto label_21259c;
        }
    }
    ctx->pc = 0x21258Cu;
    // 0x21258c: 0xc0b3f94
    ctx->pc = 0x21258Cu;
    SET_GPR_U32(ctx, 31, 0x212594u);
    ctx->pc = 0x212590u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212594u; }
    }
    if (ctx->pc != 0x212594u) { return; }
    ctx->pc = 0x212594u;
    // 0x212594: 0xdfbf0030
    ctx->pc = 0x212594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_212598:
    // 0x212598: 0xdfb20020
    ctx->pc = 0x212598u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21259c:
    // 0x21259c: 0xdfb10010
    ctx->pc = 0x21259cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2125a0: 0xdfb00000
    ctx->pc = 0x2125a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2125a4: 0x3e00008
    ctx->pc = 0x2125A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2125A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212554u: goto label_212554;
            case 0x212564u: goto label_212564;
            case 0x212598u: goto label_212598;
            case 0x21259Cu: goto label_21259c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2125ACu;
}
