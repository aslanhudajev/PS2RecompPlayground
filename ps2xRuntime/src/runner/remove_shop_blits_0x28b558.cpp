#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: remove_shop_blits
// Address: 0x28b558 - 0x28b600
void remove_shop_blits_0x28b558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28b558u;

    // 0x28b558: 0x27bdff90
    ctx->pc = 0x28b558u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28b55c: 0xffbf0060
    ctx->pc = 0x28b55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28b560: 0xffb50050
    ctx->pc = 0x28b560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x28b564: 0xffb40040
    ctx->pc = 0x28b564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28b568: 0xffb30030
    ctx->pc = 0x28b568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28b56c: 0xffb20020
    ctx->pc = 0x28b56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28b570: 0xffb10010
    ctx->pc = 0x28b570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28b574: 0xffb00000
    ctx->pc = 0x28b574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28b578: 0x982d
    ctx->pc = 0x28b578u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b57c: 0x3c020035
    ctx->pc = 0x28b57cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28b580: 0x2454b468
    ctx->pc = 0x28b580u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294947944));
    // 0x28b584: 0x24150014
    ctx->pc = 0x28b584u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 20));
label_28b588:
    // 0x28b588: 0xc0a2d20
    ctx->pc = 0x28B588u;
    SET_GPR_U32(ctx, 31, 0x28B590u);
    ctx->pc = 0x28B58Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28B480u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_shop_player_blits_0x28b480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B590u; }
    }
    if (ctx->pc != 0x28B590u) { return; }
    ctx->pc = 0x28B590u;
    // 0x28b590: 0x882d
    ctx->pc = 0x28b590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b594: 0x2759018
    ctx->pc = 0x28b594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28b598: 0x111080
    ctx->pc = 0x28b598u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x28b59c: 0x0
    ctx->pc = 0x28b59cu;
    // NOP
label_28b5a0:
    // 0x28b5a0: 0x521021
    ctx->pc = 0x28b5a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28b5a4: 0x548021
    ctx->pc = 0x28b5a4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x28b5a8: 0x8e040000
    ctx->pc = 0x28b5a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28b5ac: 0x10800004
    ctx->pc = 0x28B5ACu;
    {
        const bool branch_taken_0x28b5ac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B5B0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x28b5ac) {
            ctx->pc = 0x28B5C0u;
            goto label_28b5c0;
        }
    }
    ctx->pc = 0x28B5B4u;
    // 0x28b5b4: 0xc0b0b38
    ctx->pc = 0x28B5B4u;
    SET_GPR_U32(ctx, 31, 0x28B5BCu);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B5BCu; }
    }
    if (ctx->pc != 0x28B5BCu) { return; }
    ctx->pc = 0x28B5BCu;
    // 0x28b5bc: 0xae020000
    ctx->pc = 0x28b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28b5c0:
    // 0x28b5c0: 0x2a220005
    ctx->pc = 0x28b5c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 5));
    // 0x28b5c4: 0x1440fff6
    ctx->pc = 0x28B5C4u;
    {
        const bool branch_taken_0x28b5c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28B5C8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x28b5c4) {
            ctx->pc = 0x28B5A0u;
            goto label_28b5a0;
        }
    }
    ctx->pc = 0x28B5CCu;
    // 0x28b5cc: 0x26730001
    ctx->pc = 0x28b5ccu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x28b5d0: 0x2a620004
    ctx->pc = 0x28b5d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
    // 0x28b5d4: 0x1440ffec
    ctx->pc = 0x28B5D4u;
    {
        const bool branch_taken_0x28b5d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28B5D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28b5d4) {
            ctx->pc = 0x28B588u;
            goto label_28b588;
        }
    }
    ctx->pc = 0x28B5DCu;
    // 0x28b5dc: 0xdfbf0060
    ctx->pc = 0x28b5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28b5e0: 0xdfb50050
    ctx->pc = 0x28b5e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28b5e4: 0xdfb40040
    ctx->pc = 0x28b5e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b5e8: 0xdfb30030
    ctx->pc = 0x28b5e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b5ec: 0xdfb20020
    ctx->pc = 0x28b5ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b5f0: 0xdfb10010
    ctx->pc = 0x28b5f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b5f4: 0xdfb00000
    ctx->pc = 0x28b5f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b5f8: 0x8089a32
    ctx->pc = 0x28B5F8u;
    ctx->pc = 0x28B5FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x2268C8u;
    TransitionBlitShow_0x2268c8(rdram, ctx, runtime); return;
    ctx->pc = 0x28B600u;
}
