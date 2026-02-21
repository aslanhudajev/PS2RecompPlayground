#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerGiveRune
// Address: 0x2768a0 - 0x276914
void PlayerGiveRune_0x2768a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2768a0u;

    // 0x2768a0: 0x4810003
    ctx->pc = 0x2768A0u;
    {
        const bool branch_taken_0x2768a0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2768A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2768a0) {
            ctx->pc = 0x2768B0u;
            goto label_2768b0;
        }
    }
    ctx->pc = 0x2768A8u;
    // 0x2768a8: 0x102d
    ctx->pc = 0x2768a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2768ac: 0x24040003
    ctx->pc = 0x2768acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_2768b0:
    // 0x2768b0: 0x40302d
    ctx->pc = 0x2768b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2768b4: 0x86102a
    ctx->pc = 0x2768b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 6)));
    // 0x2768b8: 0x14400014
    ctx->pc = 0x2768B8u;
    {
        const bool branch_taken_0x2768b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2768BCu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x2768b8) {
            ctx->pc = 0x27690Cu;
            goto label_27690c;
        }
    }
    ctx->pc = 0x2768C0u;
    // 0x2768c0: 0x3c020032
    ctx->pc = 0x2768c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2768c4: 0x244a1bc0
    ctx->pc = 0x2768c4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2768c8: 0x24070001
    ctx->pc = 0x2768c8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2768cc: 0x24080004
    ctx->pc = 0x2768ccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2768d0: 0xa72804
    ctx->pc = 0x2768d0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x2768d4: 0xc91018
    ctx->pc = 0x2768d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2768d8:
    // 0x2768d8: 0x4a1821
    ctx->pc = 0x2768d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2768dc: 0x8c6200fc
    ctx->pc = 0x2768dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x2768e0: 0x50470004
    ctx->pc = 0x2768E0u;
    {
        const bool branch_taken_0x2768e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 7));
        if (branch_taken_0x2768e0) {
            ctx->pc = 0x2768E4u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6694)));
            ctx->pc = 0x2768F4u;
            goto label_2768f4;
        }
    }
    ctx->pc = 0x2768E8u;
    // 0x2768e8: 0x54480005
    ctx->pc = 0x2768E8u;
    {
        const bool branch_taken_0x2768e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 8));
        if (branch_taken_0x2768e8) {
            ctx->pc = 0x2768ECu;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x276900u;
            goto label_276900;
        }
    }
    ctx->pc = 0x2768F0u;
    // 0x2768f0: 0x94621a26
    ctx->pc = 0x2768f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6694)));
label_2768f4:
    // 0x2768f4: 0x451025
    ctx->pc = 0x2768f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2768f8: 0xa4621a26
    ctx->pc = 0x2768f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6694), (uint16_t)GPR_U32(ctx, 2));
    // 0x2768fc: 0x24c60001
    ctx->pc = 0x2768fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_276900:
    // 0x276900: 0x86102a
    ctx->pc = 0x276900u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 6)));
    // 0x276904: 0x1040fff4
    ctx->pc = 0x276904u;
    {
        const bool branch_taken_0x276904 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x276908u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x276904) {
            ctx->pc = 0x2768D8u;
            goto label_2768d8;
        }
    }
    ctx->pc = 0x27690Cu;
label_27690c:
    // 0x27690c: 0x3e00008
    ctx->pc = 0x27690Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2768B0u: goto label_2768b0;
            case 0x2768D8u: goto label_2768d8;
            case 0x2768F4u: goto label_2768f4;
            case 0x276900u: goto label_276900;
            case 0x27690Cu: goto label_27690c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276914u;
}
