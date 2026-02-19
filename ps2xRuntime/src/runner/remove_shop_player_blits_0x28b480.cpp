#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: remove_shop_player_blits
// Address: 0x28b480 - 0x28b558
void remove_shop_player_blits_0x28b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28b480u;

    // 0x28b480: 0x27bdffa0
    ctx->pc = 0x28b480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28b484: 0xffbf0050
    ctx->pc = 0x28b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28b488: 0xffb40040
    ctx->pc = 0x28b488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28b48c: 0xffb30030
    ctx->pc = 0x28b48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28b490: 0xffb20020
    ctx->pc = 0x28b490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28b494: 0xffb10010
    ctx->pc = 0x28b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28b498: 0xffb00000
    ctx->pc = 0x28b498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28b49c: 0x80982d
    ctx->pc = 0x28b49cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b4a0: 0x882d
    ctx->pc = 0x28b4a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b4a4: 0x3c020035
    ctx->pc = 0x28b4a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28b4a8: 0x2454b4c8
    ctx->pc = 0x28b4a8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294948040));
    // 0x28b4ac: 0x24020018
    ctx->pc = 0x28b4acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28b4b0: 0x2629018
    ctx->pc = 0x28b4b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28b4b4: 0x111080
    ctx->pc = 0x28b4b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_28b4b8:
    // 0x28b4b8: 0x521021
    ctx->pc = 0x28b4b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28b4bc: 0x548021
    ctx->pc = 0x28b4bcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x28b4c0: 0x8e040000
    ctx->pc = 0x28b4c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28b4c4: 0x10800004
    ctx->pc = 0x28B4C4u;
    {
        const bool branch_taken_0x28b4c4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B4C8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x28b4c4) {
            ctx->pc = 0x28B4D8u;
            goto label_28b4d8;
        }
    }
    ctx->pc = 0x28B4CCu;
    // 0x28b4cc: 0xc0b0b38
    ctx->pc = 0x28B4CCu;
    SET_GPR_U32(ctx, 31, 0x28B4D4u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B4D4u; }
    }
    if (ctx->pc != 0x28B4D4u) { return; }
    ctx->pc = 0x28B4D4u;
    // 0x28b4d4: 0xae000000
    ctx->pc = 0x28b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_28b4d8:
    // 0x28b4d8: 0x2e220006
    ctx->pc = 0x28b4d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 6));
    // 0x28b4dc: 0x1440fff6
    ctx->pc = 0x28B4DCu;
    {
        const bool branch_taken_0x28b4dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28B4E0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x28b4dc) {
            ctx->pc = 0x28B4B8u;
            goto label_28b4b8;
        }
    }
    ctx->pc = 0x28B4E4u;
    // 0x28b4e4: 0x3c020035
    ctx->pc = 0x28b4e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28b4e8: 0x8c42b52c
    ctx->pc = 0x28b4e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948140)));
    // 0x28b4ec: 0x18400012
    ctx->pc = 0x28B4ECu;
    {
        const bool branch_taken_0x28b4ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28B4F0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28b4ec) {
            ctx->pc = 0x28B538u;
            goto label_28b538;
        }
    }
    ctx->pc = 0x28B4F4u;
    // 0x28b4f4: 0x3c020035
    ctx->pc = 0x28b4f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28b4f8: 0x2454b530
    ctx->pc = 0x28b4f8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294948144));
    // 0x28b4fc: 0x139200
    ctx->pc = 0x28b4fcu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 19), 8));
    // 0x28b500: 0x3c130035
    ctx->pc = 0x28b500u;
    SET_GPR_U32(ctx, 19, ((uint32_t)53 << 16));
    // 0x28b504: 0x111080
    ctx->pc = 0x28b504u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_28b508:
    // 0x28b508: 0x521021
    ctx->pc = 0x28b508u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28b50c: 0x548021
    ctx->pc = 0x28b50cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x28b510: 0x8e040000
    ctx->pc = 0x28b510u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28b514: 0x10800004
    ctx->pc = 0x28B514u;
    {
        const bool branch_taken_0x28b514 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B518u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x28b514) {
            ctx->pc = 0x28B528u;
            goto label_28b528;
        }
    }
    ctx->pc = 0x28B51Cu;
    // 0x28b51c: 0xc0b0b38
    ctx->pc = 0x28B51Cu;
    SET_GPR_U32(ctx, 31, 0x28B524u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B524u; }
    }
    if (ctx->pc != 0x28B524u) { return; }
    ctx->pc = 0x28B524u;
    // 0x28b524: 0xae000000
    ctx->pc = 0x28b524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_28b528:
    // 0x28b528: 0x8e62b52c
    ctx->pc = 0x28b528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294948140)));
    // 0x28b52c: 0x222102a
    ctx->pc = 0x28b52cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x28b530: 0x1440fff5
    ctx->pc = 0x28B530u;
    {
        const bool branch_taken_0x28b530 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28B534u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x28b530) {
            ctx->pc = 0x28B508u;
            goto label_28b508;
        }
    }
    ctx->pc = 0x28B538u;
label_28b538:
    // 0x28b538: 0xdfbf0050
    ctx->pc = 0x28b538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28b53c: 0xdfb40040
    ctx->pc = 0x28b53cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b540: 0xdfb30030
    ctx->pc = 0x28b540u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b544: 0xdfb20020
    ctx->pc = 0x28b544u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b548: 0xdfb10010
    ctx->pc = 0x28b548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b54c: 0xdfb00000
    ctx->pc = 0x28b54cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b550: 0x3e00008
    ctx->pc = 0x28B550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B554u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B4B8u: goto label_28b4b8;
            case 0x28B4D8u: goto label_28b4d8;
            case 0x28B508u: goto label_28b508;
            case 0x28B528u: goto label_28b528;
            case 0x28B538u: goto label_28b538;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28B558u;
}
