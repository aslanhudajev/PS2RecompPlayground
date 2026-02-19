#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audio_init
// Address: 0x2206e0 - 0x2207d0
void audio_init_0x2206e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2206e0u;

    // 0x2206e0: 0x27bdfff0
    ctx->pc = 0x2206e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2206e4: 0xffbf0000
    ctx->pc = 0x2206e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2206e8: 0x3c020032
    ctx->pc = 0x2206e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2206ec: 0x24030001
    ctx->pc = 0x2206ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2206f0: 0xac43fe30
    ctx->pc = 0x2206f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966832), GPR_U32(ctx, 3));
    // 0x2206f4: 0x3c020031
    ctx->pc = 0x2206f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2206f8: 0xdc420e28
    ctx->pc = 0x2206f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x2206fc: 0x30420020
    ctx->pc = 0x2206fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x220700: 0x10400006
    ctx->pc = 0x220700u;
    {
        const bool branch_taken_0x220700 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x220704u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x220700) {
            ctx->pc = 0x22071Cu;
            goto label_22071c;
        }
    }
    ctx->pc = 0x220708u;
    // 0x220708: 0xac43fd58
    ctx->pc = 0x220708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966616), GPR_U32(ctx, 3));
    // 0x22070c: 0x3c020032
    ctx->pc = 0x22070cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220710: 0xac43fd5c
    ctx->pc = 0x220710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966620), GPR_U32(ctx, 3));
    // 0x220714: 0x3c020031
    ctx->pc = 0x220714u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x220718: 0xac43f190
    ctx->pc = 0x220718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963600), GPR_U32(ctx, 3));
label_22071c:
    // 0x22071c: 0x3c020032
    ctx->pc = 0x22071cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220720: 0x8c42fd58
    ctx->pc = 0x220720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x220724: 0x14400004
    ctx->pc = 0x220724u;
    {
        const bool branch_taken_0x220724 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x220728u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x220724) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x22072Cu;
    // 0x22072c: 0xc088dfe
    ctx->pc = 0x22072Cu;
    SET_GPR_U32(ctx, 31, 0x220734u);
    ctx->pc = 0x220730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2237F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_init_0x2237f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220734u; }
    }
    if (ctx->pc != 0x220734u) { return; }
    ctx->pc = 0x220734u;
    // 0x220734: 0x3c020032
    ctx->pc = 0x220734u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_220738:
    // 0x220738: 0xac40fe2c
    ctx->pc = 0x220738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966828), GPR_U32(ctx, 0));
    // 0x22073c: 0xc0889f2
    ctx->pc = 0x22073Cu;
    SET_GPR_U32(ctx, 31, 0x220744u);
    ctx->pc = 0x2227C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrackInit_0x2227c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220744u; }
    }
    if (ctx->pc != 0x220744u) { return; }
    ctx->pc = 0x220744u;
    // 0x220744: 0xc088bc0
    ctx->pc = 0x220744u;
    SET_GPR_U32(ctx, 31, 0x22074Cu);
    ctx->pc = 0x222F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueEmpty_0x222f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22074Cu; }
    }
    if (ctx->pc != 0x22074Cu) { return; }
    ctx->pc = 0x22074Cu;
    // 0x22074c: 0x3c04003a
    ctx->pc = 0x22074cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x220750: 0xc0885ea
    ctx->pc = 0x220750u;
    SET_GPR_U32(ctx, 31, 0x220758u);
    ctx->pc = 0x220754u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26280));
    ctx->pc = 0x2217A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSetMode_0x2217a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220758u; }
    }
    if (ctx->pc != 0x220758u) { return; }
    ctx->pc = 0x220758u;
    // 0x220758: 0x3c020032
    ctx->pc = 0x220758u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22075c: 0xac40fd7c
    ctx->pc = 0x22075cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966652), GPR_U32(ctx, 0));
    // 0x220760: 0x3c020032
    ctx->pc = 0x220760u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220764: 0xac40fd84
    ctx->pc = 0x220764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966660), GPR_U32(ctx, 0));
    // 0x220768: 0x3c020032
    ctx->pc = 0x220768u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22076c: 0xac40fd88
    ctx->pc = 0x22076cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966664), GPR_U32(ctx, 0));
    // 0x220770: 0x3c020032
    ctx->pc = 0x220770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220774: 0xac40fd8c
    ctx->pc = 0x220774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966668), GPR_U32(ctx, 0));
    // 0x220778: 0x3c02003c
    ctx->pc = 0x220778u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x22077c: 0xac40d608
    ctx->pc = 0x22077cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956552), GPR_U32(ctx, 0));
    // 0x220780: 0x3c020032
    ctx->pc = 0x220780u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220784: 0x8c42fd58
    ctx->pc = 0x220784u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x220788: 0x1440000d
    ctx->pc = 0x220788u;
    {
        const bool branch_taken_0x220788 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22078Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x220788) {
            ctx->pc = 0x2207C0u;
            goto label_2207c0;
        }
    }
    ctx->pc = 0x220790u;
    // 0x220790: 0xc089066
    ctx->pc = 0x220790u;
    SET_GPR_U32(ctx, 31, 0x220798u);
    ctx->pc = 0x220794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x224198u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_stream_playing_0x224198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220798u; }
    }
    if (ctx->pc != 0x220798u) { return; }
    ctx->pc = 0x220798u;
    // 0x220798: 0xc089074
    ctx->pc = 0x220798u;
    SET_GPR_U32(ctx, 31, 0x2207A0u);
    ctx->pc = 0x22079Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2241D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_stream_looping_0x2241d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2207A0u; }
    }
    if (ctx->pc != 0x2207A0u) { return; }
    ctx->pc = 0x2207A0u;
    // 0x2207a0: 0x3c02003c
    ctx->pc = 0x2207a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2207a4: 0x2442d610
    ctx->pc = 0x2207a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956560));
    // 0x2207a8: 0xac400008
    ctx->pc = 0x2207a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2207ac: 0x3c020032
    ctx->pc = 0x2207acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2207b0: 0x8c44fd94
    ctx->pc = 0x2207b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966676)));
    // 0x2207b4: 0xc088e46
    ctx->pc = 0x2207B4u;
    SET_GPR_U32(ctx, 31, 0x2207BCu);
    ctx->pc = 0x2207B8u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x223918u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_set_output_mode_0x223918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2207BCu; }
    }
    if (ctx->pc != 0x2207BCu) { return; }
    ctx->pc = 0x2207BCu;
    // 0x2207bc: 0x3c020032
    ctx->pc = 0x2207bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2207c0:
    // 0x2207c0: 0xac40fe30
    ctx->pc = 0x2207c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966832), GPR_U32(ctx, 0));
    // 0x2207c4: 0xdfbf0000
    ctx->pc = 0x2207c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2207c8: 0x3e00008
    ctx->pc = 0x2207C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2207CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22071Cu: goto label_22071c;
            case 0x220738u: goto label_220738;
            case 0x2207C0u: goto label_2207c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2207D0u;
}
