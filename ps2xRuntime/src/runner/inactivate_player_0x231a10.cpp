#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inactivate_player
// Address: 0x231a10 - 0x231ad8
void inactivate_player_0x231a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x231a10u;

    // 0x231a10: 0x27bdffd0
    ctx->pc = 0x231a10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231a14: 0xffbf0020
    ctx->pc = 0x231a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x231a18: 0xffb10010
    ctx->pc = 0x231a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x231a1c: 0xffb00000
    ctx->pc = 0x231a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231a20: 0x80882d
    ctx->pc = 0x231a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a24: 0x24032b00
    ctx->pc = 0x231a24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x231a28: 0x2231818
    ctx->pc = 0x231a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x231a2c: 0x3c020032
    ctx->pc = 0x231a2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x231a30: 0x24421bc0
    ctx->pc = 0x231a30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x231a34: 0x628021
    ctx->pc = 0x231a34u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231a38: 0xae002ac4
    ctx->pc = 0x231a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10948), GPR_U32(ctx, 0));
    // 0x231a3c: 0xae0000fc
    ctx->pc = 0x231a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x231a40: 0xae002ad4
    ctx->pc = 0x231a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10964), GPR_U32(ctx, 0));
    // 0x231a44: 0xc081c88
    ctx->pc = 0x231A44u;
    SET_GPR_U32(ctx, 31, 0x231A4Cu);
    ctx->pc = 0x231A48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10968), GPR_U32(ctx, 0));
    ctx->pc = 0x207220u;
    {
        const uint32_t __entryPc = ctx->pc;
        controls_remove_active_player_0x207220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231A4Cu; }
    }
    if (ctx->pc != 0x231A4Cu) { return; }
    ctx->pc = 0x231A4Cu;
    // 0x231a4c: 0x240200b4
    ctx->pc = 0x231a4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
    // 0x231a50: 0xa60201cc
    ctx->pc = 0x231a50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 460), (uint16_t)GPR_U32(ctx, 2));
    // 0x231a54: 0x8e020080
    ctx->pc = 0x231a54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x231a58: 0x10400010
    ctx->pc = 0x231A58u;
    {
        const bool branch_taken_0x231a58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x231A5Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x231a58) {
            ctx->pc = 0x231A9Cu;
            goto label_231a9c;
        }
    }
    ctx->pc = 0x231A60u;
    // 0x231a60: 0xc09a3ae
    ctx->pc = 0x231A60u;
    SET_GPR_U32(ctx, 31, 0x231A68u);
    ctx->pc = 0x231A64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x268EB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        del_target_0x268eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231A68u; }
    }
    if (ctx->pc != 0x231A68u) { return; }
    ctx->pc = 0x231A68u;
    // 0x231a68: 0xc08b1bc
    ctx->pc = 0x231A68u;
    SET_GPR_U32(ctx, 31, 0x231A70u);
    ctx->pc = 0x231A6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22C6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_see_thru_0x22c6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231A70u; }
    }
    if (ctx->pc != 0x231A70u) { return; }
    ctx->pc = 0x231A70u;
    // 0x231a70: 0xc08ac94
    ctx->pc = 0x231A70u;
    SET_GPR_U32(ctx, 31, 0x231A78u);
    ctx->pc = 0x231A74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22B250u;
    {
        const uint32_t __entryPc = ctx->pc;
        kill_got_it_0x22b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231A78u; }
    }
    if (ctx->pc != 0x231A78u) { return; }
    ctx->pc = 0x231A78u;
    // 0x231a78: 0xc08c650
    ctx->pc = 0x231A78u;
    SET_GPR_U32(ctx, 31, 0x231A80u);
    ctx->pc = 0x231A7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231940u;
    {
        const uint32_t __entryPc = ctx->pc;
        drop_keys_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231A80u; }
    }
    if (ctx->pc != 0x231A80u) { return; }
    ctx->pc = 0x231A80u;
    // 0x231a80: 0xc08c588
    ctx->pc = 0x231A80u;
    SET_GPR_U32(ctx, 31, 0x231A88u);
    ctx->pc = 0x231A84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231620u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_player_geo_0x231620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231A88u; }
    }
    if (ctx->pc != 0x231A88u) { return; }
    ctx->pc = 0x231A88u;
    // 0x231a88: 0xc097484
    ctx->pc = 0x231A88u;
    SET_GPR_U32(ctx, 31, 0x231A90u);
    ctx->pc = 0x25D210u;
    {
        const uint32_t __entryPc = ctx->pc;
        kill_death_sound_0x25d210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231A90u; }
    }
    if (ctx->pc != 0x231A90u) { return; }
    ctx->pc = 0x231A90u;
    // 0x231a90: 0xc08b068
    ctx->pc = 0x231A90u;
    SET_GPR_U32(ctx, 31, 0x231A98u);
    ctx->pc = 0x231A94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22C1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_player_powerups_0x22c1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231A98u; }
    }
    if (ctx->pc != 0x231A98u) { return; }
    ctx->pc = 0x231A98u;
    // 0x231a98: 0x3c020031
    ctx->pc = 0x231a98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_231a9c:
    // 0x231a9c: 0x8c420018
    ctx->pc = 0x231a9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x231aa0: 0x30424000
    ctx->pc = 0x231aa0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x231aa4: 0x10400006
    ctx->pc = 0x231AA4u;
    {
        const bool branch_taken_0x231aa4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x231AA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x231aa4) {
            ctx->pc = 0x231AC0u;
            goto label_231ac0;
        }
    }
    ctx->pc = 0x231AACu;
    // 0x231aac: 0xc08d382
    ctx->pc = 0x231AACu;
    SET_GPR_U32(ctx, 31, 0x231AB4u);
    ctx->pc = 0x231AB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_player_display_0x234e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231AB4u; }
    }
    if (ctx->pc != 0x231AB4u) { return; }
    ctx->pc = 0x231AB4u;
    // 0x231ab4: 0xc08d4e6
    ctx->pc = 0x231AB4u;
    SET_GPR_U32(ctx, 31, 0x231ABCu);
    ctx->pc = 0x231AB8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x235398u;
    {
        const uint32_t __entryPc = ctx->pc;
        hide_power_meter_0x235398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231ABCu; }
    }
    if (ctx->pc != 0x231ABCu) { return; }
    ctx->pc = 0x231ABCu;
    // 0x231abc: 0x220202d
    ctx->pc = 0x231abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_231ac0:
    // 0x231ac0: 0x24050001
    ctx->pc = 0x231ac0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x231ac4: 0xdfbf0020
    ctx->pc = 0x231ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231ac8: 0xdfb10010
    ctx->pc = 0x231ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231acc: 0xdfb00000
    ctx->pc = 0x231accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231ad0: 0x808c4cc
    ctx->pc = 0x231AD0u;
    ctx->pc = 0x231AD4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x231330u;
    clear_player_0x231330(rdram, ctx, runtime); return;
    ctx->pc = 0x231AD8u;
}
