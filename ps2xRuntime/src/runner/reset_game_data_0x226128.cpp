#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: reset_game_data
// Address: 0x226128 - 0x226228
void reset_game_data_0x226128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x226128u;

    // 0x226128: 0x27bdffc0
    ctx->pc = 0x226128u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22612c: 0xffbf0030
    ctx->pc = 0x22612cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x226130: 0xffb20020
    ctx->pc = 0x226130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x226134: 0xffb10010
    ctx->pc = 0x226134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x226138: 0xffb00000
    ctx->pc = 0x226138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22613c: 0x80802d
    ctx->pc = 0x22613cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226140: 0xc0b4fa0
    ctx->pc = 0x226140u;
    SET_GPR_U32(ctx, 31, 0x226148u);
    ctx->pc = 0x226144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226148u; }
    }
    if (ctx->pc != 0x226148u) { return; }
    ctx->pc = 0x226148u;
    // 0x226148: 0x3c030032
    ctx->pc = 0x226148u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22614c: 0xac6208b0
    ctx->pc = 0x22614cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2224), GPR_U32(ctx, 2));
    // 0x226150: 0x3c030034
    ctx->pc = 0x226150u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x226154: 0x2402ffff
    ctx->pc = 0x226154u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226158: 0xac62e7f0
    ctx->pc = 0x226158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961136), GPR_U32(ctx, 2));
    // 0x22615c: 0x3c020034
    ctx->pc = 0x22615cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x226160: 0x8c42e7d4
    ctx->pc = 0x226160u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961108)));
    // 0x226164: 0x16020006
    ctx->pc = 0x226164u;
    {
        const bool branch_taken_0x226164 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x226168u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x226164) {
            ctx->pc = 0x226180u;
            goto label_226180;
        }
    }
    ctx->pc = 0x22616Cu;
    // 0x22616c: 0x200202d
    ctx->pc = 0x22616cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226170: 0xc0987c4
    ctx->pc = 0x226170u;
    SET_GPR_U32(ctx, 31, 0x226178u);
    ctx->pc = 0x226174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x261F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadValidWave_0x261f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226178u; }
    }
    if (ctx->pc != 0x226178u) { return; }
    ctx->pc = 0x226178u;
    // 0x226178: 0x10000007
    ctx->pc = 0x226178u;
    {
        const bool branch_taken_0x226178 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x226178) {
            ctx->pc = 0x226198u;
            goto label_226198;
        }
    }
    ctx->pc = 0x226180u;
label_226180:
    // 0x226180: 0x6000005
    ctx->pc = 0x226180u;
    {
        const bool branch_taken_0x226180 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x226180) {
            ctx->pc = 0x226198u;
            goto label_226198;
        }
    }
    ctx->pc = 0x226188u;
    // 0x226188: 0x200202d
    ctx->pc = 0x226188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22618c: 0xc098f40
    ctx->pc = 0x22618Cu;
    SET_GPR_U32(ctx, 31, 0x226194u);
    ctx->pc = 0x226190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x263D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        GauntLoadWorld_0x263d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226194u; }
    }
    if (ctx->pc != 0x226194u) { return; }
    ctx->pc = 0x226194u;
    // 0x226194: 0x40902d
    ctx->pc = 0x226194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226198:
    // 0x226198: 0xc0b4fa0
    ctx->pc = 0x226198u;
    SET_GPR_U32(ctx, 31, 0x2261A0u);
    ctx->pc = 0x22619Cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261A0u; }
    }
    if (ctx->pc != 0x2261A0u) { return; }
    ctx->pc = 0x2261A0u;
    // 0x2261a0: 0x8e0308b0
    ctx->pc = 0x2261a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2224)));
    // 0x2261a4: 0x621823
    ctx->pc = 0x2261a4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2261a8: 0xae0308b0
    ctx->pc = 0x2261a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2224), GPR_U32(ctx, 3));
    // 0x2261ac: 0x3c050032
    ctx->pc = 0x2261acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x2261b0: 0x3c040032
    ctx->pc = 0x2261b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x2261b4: 0x3c030032
    ctx->pc = 0x2261b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2261b8: 0x3c020032
    ctx->pc = 0x2261b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2261bc: 0xac4007f0
    ctx->pc = 0x2261bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2032), GPR_U32(ctx, 0));
    // 0x2261c0: 0xac6007e8
    ctx->pc = 0x2261c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2024), GPR_U32(ctx, 0));
    // 0x2261c4: 0xac8007e4
    ctx->pc = 0x2261c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2020), GPR_U32(ctx, 0));
    // 0x2261c8: 0xaca007e0
    ctx->pc = 0x2261c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 0));
    // 0x2261cc: 0xc08732c
    ctx->pc = 0x2261CCu;
    SET_GPR_U32(ctx, 31, 0x2261D4u);
    ctx->pc = 0x2261D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21CCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetWorlds_0x21ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261D4u; }
    }
    if (ctx->pc != 0x2261D4u) { return; }
    ctx->pc = 0x2261D4u;
    // 0x2261d4: 0xc08bbb4
    ctx->pc = 0x2261D4u;
    SET_GPR_U32(ctx, 31, 0x2261DCu);
    ctx->pc = 0x22EED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_players_0x22eed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261DCu; }
    }
    if (ctx->pc != 0x2261DCu) { return; }
    ctx->pc = 0x2261DCu;
    // 0x2261dc: 0xc08df92
    ctx->pc = 0x2261DCu;
    SET_GPR_U32(ctx, 31, 0x2261E4u);
    ctx->pc = 0x237E48u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetEnemies_0x237e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261E4u; }
    }
    if (ctx->pc != 0x2261E4u) { return; }
    ctx->pc = 0x2261E4u;
    // 0x2261e4: 0xc093dd6
    ctx->pc = 0x2261E4u;
    SET_GPR_U32(ctx, 31, 0x2261ECu);
    ctx->pc = 0x24F758u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetItems_0x24f758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261ECu; }
    }
    if (ctx->pc != 0x2261ECu) { return; }
    ctx->pc = 0x2261ECu;
    // 0x2261ec: 0xc081748
    ctx->pc = 0x2261ECu;
    SET_GPR_U32(ctx, 31, 0x2261F4u);
    ctx->pc = 0x205D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetPlayerControls_0x205d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261F4u; }
    }
    if (ctx->pc != 0x2261F4u) { return; }
    ctx->pc = 0x2261F4u;
    // 0x2261f4: 0xc0a76d4
    ctx->pc = 0x2261F4u;
    SET_GPR_U32(ctx, 31, 0x2261FCu);
    ctx->pc = 0x29DB50u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossInit_0x29db50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261FCu; }
    }
    if (ctx->pc != 0x2261FCu) { return; }
    ctx->pc = 0x2261FCu;
    // 0x2261fc: 0xc0a7cf4
    ctx->pc = 0x2261FCu;
    SET_GPR_U32(ctx, 31, 0x226204u);
    ctx->pc = 0x29F3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossCameraInit_0x29f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226204u; }
    }
    if (ctx->pc != 0x226204u) { return; }
    ctx->pc = 0x226204u;
    // 0x226204: 0xc0a8842
    ctx->pc = 0x226204u;
    SET_GPR_U32(ctx, 31, 0x22620Cu);
    ctx->pc = 0x2A2108u;
    {
        const uint32_t __entryPc = ctx->pc;
        GameCameraInit_0x2a2108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22620Cu; }
    }
    if (ctx->pc != 0x22620Cu) { return; }
    ctx->pc = 0x22620Cu;
    // 0x22620c: 0x240102d
    ctx->pc = 0x22620cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226210: 0xdfbf0030
    ctx->pc = 0x226210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226214: 0xdfb20020
    ctx->pc = 0x226214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226218: 0xdfb10010
    ctx->pc = 0x226218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22621c: 0xdfb00000
    ctx->pc = 0x22621cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226220: 0x3e00008
    ctx->pc = 0x226220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226224u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226180u: goto label_226180;
            case 0x226198u: goto label_226198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226228u;
}
