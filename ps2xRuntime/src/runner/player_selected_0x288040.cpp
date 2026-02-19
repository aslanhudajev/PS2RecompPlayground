#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: player_selected
// Address: 0x288040 - 0x2880f0
void player_selected_0x288040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x288040u;

    // 0x288040: 0x27bdffb0
    ctx->pc = 0x288040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x288044: 0xffbf0040
    ctx->pc = 0x288044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x288048: 0xffb30030
    ctx->pc = 0x288048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28804c: 0xffb20020
    ctx->pc = 0x28804cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x288050: 0xffb10010
    ctx->pc = 0x288050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x288054: 0xffb00000
    ctx->pc = 0x288054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x288058: 0x80982d
    ctx->pc = 0x288058u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28805c: 0xa0902d
    ctx->pc = 0x28805cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288060: 0x24102b00
    ctx->pc = 0x288060u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x288064: 0x2708018
    ctx->pc = 0x288064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x288068: 0x3c020032
    ctx->pc = 0x288068u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28806c: 0x24421bc0
    ctx->pc = 0x28806cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x288070: 0x2028021
    ctx->pc = 0x288070u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x288074: 0x24020003
    ctx->pc = 0x288074u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x288078: 0xc0a17da
    ctx->pc = 0x288078u;
    SET_GPR_U32(ctx, 31, 0x288080u);
    ctx->pc = 0x28807Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    ctx->pc = 0x285F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        other_players_next_level_0x285f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288080u; }
    }
    if (ctx->pc != 0x288080u) { return; }
    ctx->pc = 0x288080u;
    // 0x288080: 0xae020808
    ctx->pc = 0x288080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 2));
    // 0x288084: 0x8e110104
    ctx->pc = 0x288084u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x288088: 0x260202d
    ctx->pc = 0x288088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28808c: 0xc08c544
    ctx->pc = 0x28808Cu;
    SET_GPR_U32(ctx, 31, 0x288094u);
    ctx->pc = 0x288090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231510u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_player_0x231510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288094u; }
    }
    if (ctx->pc != 0x288094u) { return; }
    ctx->pc = 0x288094u;
    // 0x288094: 0xae110104
    ctx->pc = 0x288094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 17));
    // 0x288098: 0x260202d
    ctx->pc = 0x288098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28809c: 0xc0a155a
    ctx->pc = 0x28809Cu;
    SET_GPR_U32(ctx, 31, 0x2880A4u);
    ctx->pc = 0x2880A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x285568u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_selected_blit_0x285568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2880A4u; }
    }
    if (ctx->pc != 0x2880A4u) { return; }
    ctx->pc = 0x2880A4u;
    // 0x2880a4: 0x8e020104
    ctx->pc = 0x2880a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2880a8: 0x2c450001
    ctx->pc = 0x2880a8u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x2880ac: 0x8e021a1c
    ctx->pc = 0x2880acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6684)));
    // 0x2880b0: 0x14400008
    ctx->pc = 0x2880B0u;
    {
        const bool branch_taken_0x2880b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2880B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2880b0) {
            ctx->pc = 0x2880D4u;
            goto label_2880d4;
        }
    }
    ctx->pc = 0x2880B8u;
    // 0x2880b8: 0xdfbf0040
    ctx->pc = 0x2880b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2880bc: 0xdfb30030
    ctx->pc = 0x2880bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2880c0: 0xdfb20020
    ctx->pc = 0x2880c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2880c4: 0xdfb10010
    ctx->pc = 0x2880c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2880c8: 0xdfb00000
    ctx->pc = 0x2880c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2880cc: 0x8097724
    ctx->pc = 0x2880CCu;
    ctx->pc = 0x2880D0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x25DC90u;
    AudioWelcome_0x25dc90(rdram, ctx, runtime); return;
    ctx->pc = 0x2880D4u;
label_2880d4:
    // 0x2880d4: 0xdfbf0040
    ctx->pc = 0x2880d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2880d8: 0xdfb30030
    ctx->pc = 0x2880d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2880dc: 0xdfb20020
    ctx->pc = 0x2880dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2880e0: 0xdfb10010
    ctx->pc = 0x2880e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2880e4: 0xdfb00000
    ctx->pc = 0x2880e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2880e8: 0x809773c
    ctx->pc = 0x2880E8u;
    ctx->pc = 0x2880ECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x25DCF0u;
    AudioWelcomeBack_0x25dcf0(rdram, ctx, runtime); return;
    ctx->pc = 0x2880F0u;
}
