#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddItemSub
// Address: 0x2538d0 - 0x253950
void AddItemSub_0x2538d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2538d0u;

    // 0x2538d0: 0x27bdffc0
    ctx->pc = 0x2538d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2538d4: 0xffbf0030
    ctx->pc = 0x2538d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2538d8: 0xffb20020
    ctx->pc = 0x2538d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2538dc: 0xffb10010
    ctx->pc = 0x2538dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2538e0: 0xffb00000
    ctx->pc = 0x2538e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2538e4: 0x80902d
    ctx->pc = 0x2538e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538e8: 0xc094baa
    ctx->pc = 0x2538E8u;
    SET_GPR_U32(ctx, 31, 0x2538F0u);
    ctx->pc = 0x2538ECu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x252EA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewItemPtr_0x252ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2538F0u; }
    }
    if (ctx->pc != 0x2538F0u) { return; }
    ctx->pc = 0x2538F0u;
    // 0x2538f0: 0x1220000a
    ctx->pc = 0x2538F0u;
    {
        const bool branch_taken_0x2538f0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2538F4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2538f0) {
            ctx->pc = 0x25391Cu;
            goto label_25391c;
        }
    }
    ctx->pc = 0x2538F8u;
    // 0x2538f8: 0x200202d
    ctx->pc = 0x2538f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538fc: 0x282d
    ctx->pc = 0x2538fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253900: 0x240302d
    ctx->pc = 0x253900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253904: 0xc094630
    ctx->pc = 0x253904u;
    SET_GPR_U32(ctx, 31, 0x25390Cu);
    ctx->pc = 0x253908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2518C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetItem_0x2518c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25390Cu; }
    }
    if (ctx->pc != 0x25390Cu) { return; }
    ctx->pc = 0x25390Cu;
    // 0x25390c: 0xc094c28
    ctx->pc = 0x25390Cu;
    SET_GPR_U32(ctx, 31, 0x253914u);
    ctx->pc = 0x253910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2530A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlaceItem_0x2530a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253914u; }
    }
    if (ctx->pc != 0x253914u) { return; }
    ctx->pc = 0x253914u;
    // 0x253914: 0x10000008
    ctx->pc = 0x253914u;
    {
        const bool branch_taken_0x253914 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x253918u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x253914) {
            ctx->pc = 0x253938u;
            goto label_253938;
        }
    }
    ctx->pc = 0x25391Cu;
label_25391c:
    // 0x25391c: 0x200202d
    ctx->pc = 0x25391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253920: 0x282d
    ctx->pc = 0x253920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253924: 0x240302d
    ctx->pc = 0x253924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253928: 0x3c07003a
    ctx->pc = 0x253928u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x25392c: 0xc094630
    ctx->pc = 0x25392Cu;
    SET_GPR_U32(ctx, 31, 0x253934u);
    ctx->pc = 0x253930u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 9552));
    ctx->pc = 0x2518C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetItem_0x2518c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253934u; }
    }
    if (ctx->pc != 0x253934u) { return; }
    ctx->pc = 0x253934u;
    // 0x253934: 0x200102d
    ctx->pc = 0x253934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_253938:
    // 0x253938: 0xdfbf0030
    ctx->pc = 0x253938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25393c: 0xdfb20020
    ctx->pc = 0x25393cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253940: 0xdfb10010
    ctx->pc = 0x253940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253944: 0xdfb00000
    ctx->pc = 0x253944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253948: 0x3e00008
    ctx->pc = 0x253948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25394Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25391Cu: goto label_25391c;
            case 0x253938u: goto label_253938;
            default: break;
        }
        return;
    }
    ctx->pc = 0x253950u;
}
