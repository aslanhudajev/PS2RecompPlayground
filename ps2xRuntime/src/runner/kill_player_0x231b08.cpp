#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: kill_player
// Address: 0x231b08 - 0x231bf8
void kill_player_0x231b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x231b08u;

    // 0x231b08: 0x27bdffd0
    ctx->pc = 0x231b08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231b0c: 0xffbf0020
    ctx->pc = 0x231b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x231b10: 0xffb10010
    ctx->pc = 0x231b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x231b14: 0xffb00000
    ctx->pc = 0x231b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231b18: 0x80882d
    ctx->pc = 0x231b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b1c: 0x24032b00
    ctx->pc = 0x231b1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x231b20: 0x2231818
    ctx->pc = 0x231b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x231b24: 0x3c020032
    ctx->pc = 0x231b24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x231b28: 0x24421bc0
    ctx->pc = 0x231b28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x231b2c: 0x628021
    ctx->pc = 0x231b2cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231b30: 0x3c020034
    ctx->pc = 0x231b30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x231b34: 0x8c43e7f0
    ctx->pc = 0x231b34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x231b38: 0x2402000d
    ctx->pc = 0x231b38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x231b3c: 0x14620008
    ctx->pc = 0x231B3Cu;
    {
        const bool branch_taken_0x231b3c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x231B40u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x231b3c) {
            ctx->pc = 0x231B60u;
            goto label_231b60;
        }
    }
    ctx->pc = 0x231B44u;
    // 0x231b44: 0x24020001
    ctx->pc = 0x231b44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x231b48: 0xae0200fc
    ctx->pc = 0x231b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x231b4c: 0xdfbf0020
    ctx->pc = 0x231b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231b50: 0xdfb10010
    ctx->pc = 0x231b50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231b54: 0xdfb00000
    ctx->pc = 0x231b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231b58: 0x808c274
    ctx->pc = 0x231B58u;
    ctx->pc = 0x231B5Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2309D0u;
    PlayerRestoreState_0x2309d0(rdram, ctx, runtime); return;
    ctx->pc = 0x231B60u;
label_231b60:
    // 0x231b60: 0x3c030034
    ctx->pc = 0x231b60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x231b64: 0x220202d
    ctx->pc = 0x231b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b68: 0x8c45e7f0
    ctx->pc = 0x231b68u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x231b6c: 0xc09dc9a
    ctx->pc = 0x231B6Cu;
    SET_GPR_U32(ctx, 31, 0x231B74u);
    ctx->pc = 0x231B70u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294961140)));
    ctx->pc = 0x277268u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayersSetWaveDied_0x277268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231B74u; }
    }
    if (ctx->pc != 0x231B74u) { return; }
    ctx->pc = 0x231B74u;
    // 0x231b74: 0xc08c6c0
    ctx->pc = 0x231B74u;
    SET_GPR_U32(ctx, 31, 0x231B7Cu);
    ctx->pc = 0x231B78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_set_continue_0x231b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231B7Cu; }
    }
    if (ctx->pc != 0x231B7Cu) { return; }
    ctx->pc = 0x231B7Cu;
    // 0x231b7c: 0xae001a10
    ctx->pc = 0x231b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6672), GPR_U32(ctx, 0));
    // 0x231b80: 0x8e020080
    ctx->pc = 0x231b80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x231b84: 0x10400016
    ctx->pc = 0x231B84u;
    {
        const bool branch_taken_0x231b84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x231B88u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x231b84) {
            ctx->pc = 0x231BE0u;
            goto label_231be0;
        }
    }
    ctx->pc = 0x231B8Cu;
    // 0x231b8c: 0x2443c7c8
    ctx->pc = 0x231b8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294952904));
    // 0x231b90: 0xc6000050
    ctx->pc = 0x231b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231b94: 0xe440c7c8
    ctx->pc = 0x231b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294952904), bits); }
    // 0x231b98: 0xc6000054
    ctx->pc = 0x231b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231b9c: 0xe4600004
    ctx->pc = 0x231b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x231ba0: 0xc6000058
    ctx->pc = 0x231ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231ba4: 0xe4600008
    ctx->pc = 0x231ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x231ba8: 0xc09a3ae
    ctx->pc = 0x231BA8u;
    SET_GPR_U32(ctx, 31, 0x231BB0u);
    ctx->pc = 0x231BACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x268EB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        del_target_0x268eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231BB0u; }
    }
    if (ctx->pc != 0x231BB0u) { return; }
    ctx->pc = 0x231BB0u;
    // 0x231bb0: 0xc08b1bc
    ctx->pc = 0x231BB0u;
    SET_GPR_U32(ctx, 31, 0x231BB8u);
    ctx->pc = 0x231BB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22C6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_see_thru_0x22c6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231BB8u; }
    }
    if (ctx->pc != 0x231BB8u) { return; }
    ctx->pc = 0x231BB8u;
    // 0x231bb8: 0xc08ac94
    ctx->pc = 0x231BB8u;
    SET_GPR_U32(ctx, 31, 0x231BC0u);
    ctx->pc = 0x231BBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22B250u;
    {
        const uint32_t __entryPc = ctx->pc;
        kill_got_it_0x22b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231BC0u; }
    }
    if (ctx->pc != 0x231BC0u) { return; }
    ctx->pc = 0x231BC0u;
    // 0x231bc0: 0xc08c650
    ctx->pc = 0x231BC0u;
    SET_GPR_U32(ctx, 31, 0x231BC8u);
    ctx->pc = 0x231BC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231940u;
    {
        const uint32_t __entryPc = ctx->pc;
        drop_keys_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231BC8u; }
    }
    if (ctx->pc != 0x231BC8u) { return; }
    ctx->pc = 0x231BC8u;
    // 0x231bc8: 0xc08c588
    ctx->pc = 0x231BC8u;
    SET_GPR_U32(ctx, 31, 0x231BD0u);
    ctx->pc = 0x231BCCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231620u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_player_geo_0x231620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231BD0u; }
    }
    if (ctx->pc != 0x231BD0u) { return; }
    ctx->pc = 0x231BD0u;
    // 0x231bd0: 0xc097484
    ctx->pc = 0x231BD0u;
    SET_GPR_U32(ctx, 31, 0x231BD8u);
    ctx->pc = 0x25D210u;
    {
        const uint32_t __entryPc = ctx->pc;
        kill_death_sound_0x25d210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231BD8u; }
    }
    if (ctx->pc != 0x231BD8u) { return; }
    ctx->pc = 0x231BD8u;
    // 0x231bd8: 0xc08b068
    ctx->pc = 0x231BD8u;
    SET_GPR_U32(ctx, 31, 0x231BE0u);
    ctx->pc = 0x231BDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22C1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_player_powerups_0x22c1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231BE0u; }
    }
    if (ctx->pc != 0x231BE0u) { return; }
    ctx->pc = 0x231BE0u;
label_231be0:
    // 0x231be0: 0x220202d
    ctx->pc = 0x231be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231be4: 0xdfbf0020
    ctx->pc = 0x231be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231be8: 0xdfb10010
    ctx->pc = 0x231be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231bec: 0xdfb00000
    ctx->pc = 0x231becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231bf0: 0x808d382
    ctx->pc = 0x231BF0u;
    ctx->pc = 0x231BF4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x234E08u;
    setup_player_display_0x234e08(rdram, ctx, runtime); return;
    ctx->pc = 0x231BF8u;
}
