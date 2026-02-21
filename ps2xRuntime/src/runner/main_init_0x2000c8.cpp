#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: main_init
// Address: 0x2000c8 - 0x2001e4
void main_init_0x2000c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2000c8u;

    // 0x2000c8: 0x27bdffd0
    ctx->pc = 0x2000c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2000cc: 0xffbf0020
    ctx->pc = 0x2000ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2000d0: 0xc0802f0
    ctx->pc = 0x2000D0u;
    SET_GPR_U32(ctx, 31, 0x2000D8u);
    ctx->pc = 0x2000D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x200BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_psx2_0x200bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2000D8u; }
    }
    if (ctx->pc != 0x2000D8u) { return; }
    ctx->pc = 0x2000D8u;
    // 0x2000d8: 0xc080d72
    ctx->pc = 0x2000D8u;
    SET_GPR_U32(ctx, 31, 0x2000E0u);
    ctx->pc = 0x2035C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        default_options_0x2035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2000E0u; }
    }
    if (ctx->pc != 0x2000E0u) { return; }
    ctx->pc = 0x2000E0u;
    // 0x2000e0: 0xc080c6c
    ctx->pc = 0x2000E0u;
    SET_GPR_U32(ctx, 31, 0x2000E8u);
    ctx->pc = 0x2031B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitializeClockIRQ_0x2031b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2000E8u; }
    }
    if (ctx->pc != 0x2000E8u) { return; }
    ctx->pc = 0x2000E8u;
    // 0x2000e8: 0x3c04003a
    ctx->pc = 0x2000e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2000ec: 0xc0b4a34
    ctx->pc = 0x2000ECu;
    SET_GPR_U32(ctx, 31, 0x2000F4u);
    ctx->pc = 0x2000F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17152));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2000F4u; }
    }
    if (ctx->pc != 0x2000F4u) { return; }
    ctx->pc = 0x2000F4u;
    // 0x2000f4: 0xc0b5000
    ctx->pc = 0x2000F4u;
    SET_GPR_U32(ctx, 31, 0x2000FCu);
    ctx->pc = 0x2D4000u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitMemHandler_0x2d4000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2000FCu; }
    }
    if (ctx->pc != 0x2000FCu) { return; }
    ctx->pc = 0x2000FCu;
    // 0x2000fc: 0x3c02003a
    ctx->pc = 0x2000fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x200100: 0x8c442310
    ctx->pc = 0x200100u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8976)));
    // 0x200104: 0x248303ff
    ctx->pc = 0x200104u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1023));
    // 0x200108: 0x2402ffff
    ctx->pc = 0x200108u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20010c: 0x44102a
    ctx->pc = 0x20010cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x200110: 0x82180b
    ctx->pc = 0x200110u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x200114: 0x80382d
    ctx->pc = 0x200114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200118: 0x4e10004
    ctx->pc = 0x200118u;
    {
        const bool branch_taken_0x200118 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x20011Cu;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 10));
        if (branch_taken_0x200118) {
            ctx->pc = 0x20012Cu;
            goto label_20012c;
        }
    }
    ctx->pc = 0x200120u;
    // 0x200120: 0x3c02000f
    ctx->pc = 0x200120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
    // 0x200124: 0x3442ffff
    ctx->pc = 0x200124u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x200128: 0xe23821
    ctx->pc = 0x200128u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_20012c:
    // 0x20012c: 0x3a0202d
    ctx->pc = 0x20012cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200130: 0x3c05003a
    ctx->pc = 0x200130u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x200134: 0x24a54318
    ctx->pc = 0x200134u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17176));
    // 0x200138: 0xc0b6252
    ctx->pc = 0x200138u;
    SET_GPR_U32(ctx, 31, 0x200140u);
    ctx->pc = 0x20013Cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 20));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200140u; }
    }
    if (ctx->pc != 0x200140u) { return; }
    ctx->pc = 0x200140u;
    // 0x200140: 0xc0b4a34
    ctx->pc = 0x200140u;
    SET_GPR_U32(ctx, 31, 0x200148u);
    ctx->pc = 0x200144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200148u; }
    }
    if (ctx->pc != 0x200148u) { return; }
    ctx->pc = 0x200148u;
    // 0x200148: 0x24040002
    ctx->pc = 0x200148u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20014c: 0xc0b49cc
    ctx->pc = 0x20014Cu;
    SET_GPR_U32(ctx, 31, 0x200154u);
    ctx->pc = 0x200150u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2D2730u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitErrors_0x2d2730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200154u; }
    }
    if (ctx->pc != 0x200154u) { return; }
    ctx->pc = 0x200154u;
    // 0x200154: 0xc0b4868
    ctx->pc = 0x200154u;
    SET_GPR_U32(ctx, 31, 0x20015Cu);
    ctx->pc = 0x2D21A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_init_0x2d21a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20015Cu; }
    }
    if (ctx->pc != 0x20015Cu) { return; }
    ctx->pc = 0x20015Cu;
    // 0x20015c: 0x3c04003a
    ctx->pc = 0x20015cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x200160: 0xc0b4a34
    ctx->pc = 0x200160u;
    SET_GPR_U32(ctx, 31, 0x200168u);
    ctx->pc = 0x200164u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17208));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200168u; }
    }
    if (ctx->pc != 0x200168u) { return; }
    ctx->pc = 0x200168u;
    // 0x200168: 0xc088586
    ctx->pc = 0x200168u;
    SET_GPR_U32(ctx, 31, 0x200170u);
    ctx->pc = 0x221618u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadAudioData_0x221618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200170u; }
    }
    if (ctx->pc != 0x200170u) { return; }
    ctx->pc = 0x200170u;
    // 0x200170: 0x3c04003a
    ctx->pc = 0x200170u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x200174: 0xc0b4a34
    ctx->pc = 0x200174u;
    SET_GPR_U32(ctx, 31, 0x20017Cu);
    ctx->pc = 0x200178u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17232));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20017Cu; }
    }
    if (ctx->pc != 0x20017Cu) { return; }
    ctx->pc = 0x20017Cu;
    // 0x20017c: 0xc0b1764
    ctx->pc = 0x20017Cu;
    SET_GPR_U32(ctx, 31, 0x200184u);
    ctx->pc = 0x2C5D90u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBInit_0x2c5d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200184u; }
    }
    if (ctx->pc != 0x200184u) { return; }
    ctx->pc = 0x200184u;
    // 0x200184: 0x3c013f86
    ctx->pc = 0x200184u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16262 << 16));
    // 0x200188: 0x34210a92
    ctx->pc = 0x200188u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
    // 0x20018c: 0x44816000
    ctx->pc = 0x20018cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x200190: 0xc0b4502
    ctx->pc = 0x200190u;
    SET_GPR_U32(ctx, 31, 0x200198u);
    ctx->pc = 0x2D1408u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowSetHang_0x2d1408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200198u; }
    }
    if (ctx->pc != 0x200198u) { return; }
    ctx->pc = 0x200198u;
    // 0x200198: 0xc0898b8
    ctx->pc = 0x200198u;
    SET_GPR_U32(ctx, 31, 0x2001A0u);
    ctx->pc = 0x20019Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2262E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LockModels_0x2262e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001A0u; }
    }
    if (ctx->pc != 0x2001A0u) { return; }
    ctx->pc = 0x2001A0u;
    // 0x2001a0: 0x3c04003a
    ctx->pc = 0x2001a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2001a4: 0xc0b4a34
    ctx->pc = 0x2001A4u;
    SET_GPR_U32(ctx, 31, 0x2001ACu);
    ctx->pc = 0x2001A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17240));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001ACu; }
    }
    if (ctx->pc != 0x2001ACu) { return; }
    ctx->pc = 0x2001ACu;
    // 0x2001ac: 0x24040145
    ctx->pc = 0x2001acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 325));
    // 0x2001b0: 0x3c050031
    ctx->pc = 0x2001b0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x2001b4: 0x24a5b750
    ctx->pc = 0x2001b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948688));
    // 0x2001b8: 0xc0a9a32
    ctx->pc = 0x2001B8u;
    SET_GPR_U32(ctx, 31, 0x2001C0u);
    ctx->pc = 0x2001BCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A68C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaScheduleWait_0x2a68c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001C0u; }
    }
    if (ctx->pc != 0x2001C0u) { return; }
    ctx->pc = 0x2001C0u;
    // 0x2001c0: 0xc0b4fa0
    ctx->pc = 0x2001C0u;
    SET_GPR_U32(ctx, 31, 0x2001C8u);
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001C8u; }
    }
    if (ctx->pc != 0x2001C8u) { return; }
    ctx->pc = 0x2001C8u;
    // 0x2001c8: 0x3c04003a
    ctx->pc = 0x2001c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2001cc: 0x24844368
    ctx->pc = 0x2001ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17256));
    // 0x2001d0: 0xc0b4a34
    ctx->pc = 0x2001D0u;
    SET_GPR_U32(ctx, 31, 0x2001D8u);
    ctx->pc = 0x2001D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001D8u; }
    }
    if (ctx->pc != 0x2001D8u) { return; }
    ctx->pc = 0x2001D8u;
    // 0x2001d8: 0xdfbf0020
    ctx->pc = 0x2001d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2001dc: 0x3e00008
    ctx->pc = 0x2001DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2001E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20012Cu: goto label_20012c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2001E4u;
}
