#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: game_init_once
// Address: 0x226fc0 - 0x2270d4
void game_init_once_0x226fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x226fc0u;

    // 0x226fc0: 0x27bdfff0
    ctx->pc = 0x226fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226fc4: 0xffbf0000
    ctx->pc = 0x226fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226fc8: 0xc081700
    ctx->pc = 0x226FC8u;
    SET_GPR_U32(ctx, 31, 0x226FD0u);
    ctx->pc = 0x205C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitPlayerControls_0x205c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226FD0u; }
    }
    if (ctx->pc != 0x226FD0u) { return; }
    ctx->pc = 0x226FD0u;
    // 0x226fd0: 0xc0812c6
    ctx->pc = 0x226FD0u;
    SET_GPR_U32(ctx, 31, 0x226FD8u);
    ctx->pc = 0x204B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReadControls_0x204b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226FD8u; }
    }
    if (ctx->pc != 0x226FD8u) { return; }
    ctx->pc = 0x226FD8u;
    // 0x226fd8: 0xc0841fe
    ctx->pc = 0x226FD8u;
    SET_GPR_U32(ctx, 31, 0x226FE0u);
    ctx->pc = 0x2107F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimInit_0x2107f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226FE0u; }
    }
    if (ctx->pc != 0x226FE0u) { return; }
    ctx->pc = 0x226FE0u;
    // 0x226fe0: 0xc084b9e
    ctx->pc = 0x226FE0u;
    SET_GPR_U32(ctx, 31, 0x226FE8u);
    ctx->pc = 0x226FE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInitLists_0x212e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226FE8u; }
    }
    if (ctx->pc != 0x226FE8u) { return; }
    ctx->pc = 0x226FE8u;
    // 0x226fe8: 0xc080db2
    ctx->pc = 0x226FE8u;
    SET_GPR_U32(ctx, 31, 0x226FF0u);
    ctx->pc = 0x2036C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitGameTimers_0x2036c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226FF0u; }
    }
    if (ctx->pc != 0x226FF0u) { return; }
    ctx->pc = 0x226FF0u;
    // 0x226ff0: 0xc09cff4
    ctx->pc = 0x226FF0u;
    SET_GPR_U32(ctx, 31, 0x226FF8u);
    ctx->pc = 0x273FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StatInitFlags_0x273fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226FF8u; }
    }
    if (ctx->pc != 0x226FF8u) { return; }
    ctx->pc = 0x226FF8u;
    // 0x226ff8: 0xc080db2
    ctx->pc = 0x226FF8u;
    SET_GPR_U32(ctx, 31, 0x227000u);
    ctx->pc = 0x2036C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitGameTimers_0x2036c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227000u; }
    }
    if (ctx->pc != 0x227000u) { return; }
    ctx->pc = 0x227000u;
    // 0x227000: 0x3c020032
    ctx->pc = 0x227000u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x227004: 0xac400868
    ctx->pc = 0x227004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2152), GPR_U32(ctx, 0));
    // 0x227008: 0x3c020031
    ctx->pc = 0x227008u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22700c: 0xac40f2a4
    ctx->pc = 0x22700cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963876), GPR_U32(ctx, 0));
    // 0x227010: 0x3c030032
    ctx->pc = 0x227010u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x227014: 0x3c020001
    ctx->pc = 0x227014u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x227018: 0x3442869f
    ctx->pc = 0x227018u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34463));
    // 0x22701c: 0xac620804
    ctx->pc = 0x22701cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2052), GPR_U32(ctx, 2));
    // 0x227020: 0x3c020032
    ctx->pc = 0x227020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x227024: 0xac400818
    ctx->pc = 0x227024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2072), GPR_U32(ctx, 0));
    // 0x227028: 0x3c030032
    ctx->pc = 0x227028u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22702c: 0x24020001
    ctx->pc = 0x22702cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x227030: 0xc0812c6
    ctx->pc = 0x227030u;
    SET_GPR_U32(ctx, 31, 0x227038u);
    ctx->pc = 0x227034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2076), GPR_U32(ctx, 2));
    ctx->pc = 0x204B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReadControls_0x204b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227038u; }
    }
    if (ctx->pc != 0x227038u) { return; }
    ctx->pc = 0x227038u;
    // 0x227038: 0xc0a0220
    ctx->pc = 0x227038u;
    SET_GPR_U32(ctx, 31, 0x227040u);
    ctx->pc = 0x22703Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x280880u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitLighting_0x280880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227040u; }
    }
    if (ctx->pc != 0x227040u) { return; }
    ctx->pc = 0x227040u;
    // 0x227040: 0x3c030031
    ctx->pc = 0x227040u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x227044: 0x34028002
    ctx->pc = 0x227044u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32770));
    // 0x227048: 0xac620018
    ctx->pc = 0x227048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x22704c: 0x3c020035
    ctx->pc = 0x22704cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x227050: 0xac409b8c
    ctx->pc = 0x227050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941580), GPR_U32(ctx, 0));
    // 0x227054: 0x3c020031
    ctx->pc = 0x227054u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x227058: 0xac40ffd0
    ctx->pc = 0x227058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967248), GPR_U32(ctx, 0));
    // 0x22705c: 0x3c030035
    ctx->pc = 0x22705cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x227060: 0x2402ffff
    ctx->pc = 0x227060u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227064: 0xc0a4484
    ctx->pc = 0x227064u;
    SET_GPR_U32(ctx, 31, 0x22706Cu);
    ctx->pc = 0x227068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965300), GPR_U32(ctx, 2));
    ctx->pc = 0x291210u;
    {
        const uint32_t __entryPc = ctx->pc;
        CountNumDemos_0x291210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22706Cu; }
    }
    if (ctx->pc != 0x22706Cu) { return; }
    ctx->pc = 0x22706Cu;
    // 0x22706c: 0x3c020032
    ctx->pc = 0x22706cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x227070: 0xc0a090e
    ctx->pc = 0x227070u;
    SET_GPR_U32(ctx, 31, 0x227078u);
    ctx->pc = 0x227074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5084), GPR_U32(ctx, 0));
    ctx->pc = 0x282438u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_attract_mode_0x282438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227078u; }
    }
    if (ctx->pc != 0x227078u) { return; }
    ctx->pc = 0x227078u;
    // 0x227078: 0xc0812c6
    ctx->pc = 0x227078u;
    SET_GPR_U32(ctx, 31, 0x227080u);
    ctx->pc = 0x204B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReadControls_0x204b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227080u; }
    }
    if (ctx->pc != 0x227080u) { return; }
    ctx->pc = 0x227080u;
    // 0x227080: 0x3c04003a
    ctx->pc = 0x227080u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x227084: 0xc0b4a34
    ctx->pc = 0x227084u;
    SET_GPR_U32(ctx, 31, 0x22708Cu);
    ctx->pc = 0x227088u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27824));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22708Cu; }
    }
    if (ctx->pc != 0x22708Cu) { return; }
    ctx->pc = 0x22708Cu;
    // 0x22708c: 0xc097102
    ctx->pc = 0x22708Cu;
    SET_GPR_U32(ctx, 31, 0x227094u);
    ctx->pc = 0x25C408u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_audio_0x25c408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227094u; }
    }
    if (ctx->pc != 0x227094u) { return; }
    ctx->pc = 0x227094u;
    // 0x227094: 0x3c04003a
    ctx->pc = 0x227094u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x227098: 0xc0b4a34
    ctx->pc = 0x227098u;
    SET_GPR_U32(ctx, 31, 0x2270A0u);
    ctx->pc = 0x22709Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27848));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2270A0u; }
    }
    if (ctx->pc != 0x2270A0u) { return; }
    ctx->pc = 0x2270A0u;
label_2270a0:
    // 0x2270a0: 0xc088290
    ctx->pc = 0x2270A0u;
    SET_GPR_U32(ctx, 31, 0x2270A8u);
    ctx->pc = 0x2270A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStillLoading_0x220a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2270A8u; }
    }
    if (ctx->pc != 0x2270A8u) { return; }
    ctx->pc = 0x2270A8u;
    // 0x2270a8: 0x1440fffd
    ctx->pc = 0x2270A8u;
    {
        const bool branch_taken_0x2270a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2270ACu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x2270a8) {
            ctx->pc = 0x2270A0u;
            goto label_2270a0;
        }
    }
    ctx->pc = 0x2270B0u;
    // 0x2270b0: 0xc0b4a34
    ctx->pc = 0x2270B0u;
    SET_GPR_U32(ctx, 31, 0x2270B8u);
    ctx->pc = 0x2270B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27872));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2270B8u; }
    }
    if (ctx->pc != 0x2270B8u) { return; }
    ctx->pc = 0x2270B8u;
    // 0x2270b8: 0xc0812c6
    ctx->pc = 0x2270B8u;
    SET_GPR_U32(ctx, 31, 0x2270C0u);
    ctx->pc = 0x204B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReadControls_0x204b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2270C0u; }
    }
    if (ctx->pc != 0x2270C0u) { return; }
    ctx->pc = 0x2270C0u;
    // 0x2270c0: 0x3c02003c
    ctx->pc = 0x2270c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2270c4: 0xac401804
    ctx->pc = 0x2270c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6148), GPR_U32(ctx, 0));
    // 0x2270c8: 0xdfbf0000
    ctx->pc = 0x2270c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2270cc: 0x3e00008
    ctx->pc = 0x2270CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2270D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2270A0u: goto label_2270a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2270D4u;
}
