#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySfdSetCond
// Address: 0x18f0f0 - 0x18f224
void mwPlySfdSetCond_0x18f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySfdSetCond");


    ctx->pc = 0x18f0f0u;

    // 0x18f0f0: 0x27bdffc0
    ctx->pc = 0x18f0f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18f0f4: 0x24050008
    ctx->pc = 0x18f0f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x18f0f8: 0xffb20020
    ctx->pc = 0x18f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18f0fc: 0xffb00000
    ctx->pc = 0x18f0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18f100: 0xe0902d
    ctx->pc = 0x18f100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f104: 0xffbf0030
    ctx->pc = 0x18f104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18f108: 0xc0802d
    ctx->pc = 0x18f108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f10c: 0xffb10010
    ctx->pc = 0x18f10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18f110: 0x302d
    ctx->pc = 0x18f110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f114: 0x8c910030
    ctx->pc = 0x18f114u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f118: 0xc06741e
    ctx->pc = 0x18F118u;
    SET_GPR_U32(ctx, 31, 0x18F120u);
    ctx->pc = 0x18F11Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D078u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetCond_0x19d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F120u; }
        else if (ctx->pc != 0x18F120u) { ctx->pc = 0x18F120u; }
    }
    if (ctx->pc != 0x18F120u) { return; }
    ctx->pc = 0x18F120u;
    // 0x18f120: 0x220202d
    ctx->pc = 0x18f120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f124: 0x24050001
    ctx->pc = 0x18f124u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f128: 0xc06741e
    ctx->pc = 0x18F128u;
    SET_GPR_U32(ctx, 31, 0x18F130u);
    ctx->pc = 0x18F12Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19D078u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetCond_0x19d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F130u; }
        else if (ctx->pc != 0x18F130u) { ctx->pc = 0x18F130u; }
    }
    if (ctx->pc != 0x18F130u) { return; }
    ctx->pc = 0x18F130u;
    // 0x18f130: 0x220202d
    ctx->pc = 0x18f130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f134: 0x282d
    ctx->pc = 0x18f134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f138: 0xc06741e
    ctx->pc = 0x18F138u;
    SET_GPR_U32(ctx, 31, 0x18F140u);
    ctx->pc = 0x18F13Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D078u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetCond_0x19d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F140u; }
        else if (ctx->pc != 0x18F140u) { ctx->pc = 0x18F140u; }
    }
    if (ctx->pc != 0x18F140u) { return; }
    ctx->pc = 0x18F140u;
    // 0x18f140: 0x220202d
    ctx->pc = 0x18f140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f144: 0x24050017
    ctx->pc = 0x18f144u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 23));
    // 0x18f148: 0xc06741e
    ctx->pc = 0x18F148u;
    SET_GPR_U32(ctx, 31, 0x18F150u);
    ctx->pc = 0x18F14Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x19D078u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetCond_0x19d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F150u; }
        else if (ctx->pc != 0x18F150u) { ctx->pc = 0x18F150u; }
    }
    if (ctx->pc != 0x18F150u) { return; }
    ctx->pc = 0x18F150u;
    // 0x18f150: 0x2128018
    ctx->pc = 0x18f150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x18f154: 0x240403e8
    ctx->pc = 0x18f154u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x18f158: 0xc052e16
    ctx->pc = 0x18F158u;
    SET_GPR_U32(ctx, 31, 0x18F160u);
    ctx->pc = 0x18F15Cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F160u; }
        else if (ctx->pc != 0x18F160u) { ctx->pc = 0x18F160u; }
    }
    if (ctx->pc != 0x18F160u) { return; }
    ctx->pc = 0x18F160u;
    // 0x18f160: 0x3405ff80
    ctx->pc = 0x18f160u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x18f164: 0x52bbc
    ctx->pc = 0x18f164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x18f168: 0xc052c88
    ctx->pc = 0x18F168u;
    SET_GPR_U32(ctx, 31, 0x18F170u);
    ctx->pc = 0x18F16Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F170u; }
        else if (ctx->pc != 0x18F170u) { ctx->pc = 0x18F170u; }
    }
    if (ctx->pc != 0x18F170u) { return; }
    ctx->pc = 0x18F170u;
    // 0x18f170: 0x40902d
    ctx->pc = 0x18f170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f174: 0xc052e44
    ctx->pc = 0x18F174u;
    SET_GPR_U32(ctx, 31, 0x18F17Cu);
    ctx->pc = 0x18F178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F17Cu; }
        else if (ctx->pc != 0x18F17Cu) { ctx->pc = 0x18F17Cu; }
    }
    if (ctx->pc != 0x18F17Cu) { return; }
    ctx->pc = 0x18F17Cu;
    // 0x18f17c: 0x40802d
    ctx->pc = 0x18f17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f180: 0xc052e16
    ctx->pc = 0x18F180u;
    SET_GPR_U32(ctx, 31, 0x18F188u);
    ctx->pc = 0x18F184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F188u; }
        else if (ctx->pc != 0x18F188u) { ctx->pc = 0x18F188u; }
    }
    if (ctx->pc != 0x18F188u) { return; }
    ctx->pc = 0x18F188u;
    // 0x18f188: 0x240282d
    ctx->pc = 0x18f188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f18c: 0xc052e02
    ctx->pc = 0x18F18Cu;
    SET_GPR_U32(ctx, 31, 0x18F194u);
    ctx->pc = 0x18F190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F194u; }
        else if (ctx->pc != 0x18F194u) { ctx->pc = 0x18F194u; }
    }
    if (ctx->pc != 0x18F194u) { return; }
    ctx->pc = 0x18F194u;
    // 0x18f194: 0x28420001
    ctx->pc = 0x18f194u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1));
    // 0x18f198: 0x2603ffff
    ctx->pc = 0x18f198u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x18f19c: 0x62800a
    ctx->pc = 0x18f19cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x18f1a0: 0x220202d
    ctx->pc = 0x18f1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1a4: 0x200302d
    ctx->pc = 0x18f1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1a8: 0xc06741e
    ctx->pc = 0x18F1A8u;
    SET_GPR_U32(ctx, 31, 0x18F1B0u);
    ctx->pc = 0x18F1ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 45));
    ctx->pc = 0x19D078u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetCond_0x19d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1B0u; }
        else if (ctx->pc != 0x18F1B0u) { ctx->pc = 0x18F1B0u; }
    }
    if (ctx->pc != 0x18F1B0u) { return; }
    ctx->pc = 0x18F1B0u;
    // 0x18f1b0: 0x220202d
    ctx->pc = 0x18f1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1b4: 0x200302d
    ctx->pc = 0x18f1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1b8: 0xc06741e
    ctx->pc = 0x18F1B8u;
    SET_GPR_U32(ctx, 31, 0x18F1C0u);
    ctx->pc = 0x18F1BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 44));
    ctx->pc = 0x19D078u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetCond_0x19d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1C0u; }
        else if (ctx->pc != 0x18F1C0u) { ctx->pc = 0x18F1C0u; }
    }
    if (ctx->pc != 0x18F1C0u) { return; }
    ctx->pc = 0x18F1C0u;
    // 0x18f1c0: 0x200302d
    ctx->pc = 0x18f1c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1c4: 0x220202d
    ctx->pc = 0x18f1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1c8: 0xc06741e
    ctx->pc = 0x18F1C8u;
    SET_GPR_U32(ctx, 31, 0x18F1D0u);
    ctx->pc = 0x18F1CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 42));
    ctx->pc = 0x19D078u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetCond_0x19d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1D0u; }
        else if (ctx->pc != 0x18F1D0u) { ctx->pc = 0x18F1D0u; }
    }
    if (ctx->pc != 0x18F1D0u) { return; }
    ctx->pc = 0x18F1D0u;
    // 0x18f1d0: 0x220202d
    ctx->pc = 0x18f1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1d4: 0x2405000f
    ctx->pc = 0x18f1d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18f1d8: 0xc06741e
    ctx->pc = 0x18F1D8u;
    SET_GPR_U32(ctx, 31, 0x18F1E0u);
    ctx->pc = 0x18F1DCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19D078u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetCond_0x19d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1E0u; }
        else if (ctx->pc != 0x18F1E0u) { ctx->pc = 0x18F1E0u; }
    }
    if (ctx->pc != 0x18F1E0u) { return; }
    ctx->pc = 0x18F1E0u;
    // 0x18f1e0: 0x220202d
    ctx->pc = 0x18f1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1e4: 0x2405000e
    ctx->pc = 0x18f1e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    // 0x18f1e8: 0xc06741e
    ctx->pc = 0x18F1E8u;
    SET_GPR_U32(ctx, 31, 0x18F1F0u);
    ctx->pc = 0x18F1ECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D078u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetCond_0x19d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1F0u; }
        else if (ctx->pc != 0x18F1F0u) { ctx->pc = 0x18F1F0u; }
    }
    if (ctx->pc != 0x18F1F0u) { return; }
    ctx->pc = 0x18F1F0u;
    // 0x18f1f0: 0x220202d
    ctx->pc = 0x18f1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1f4: 0x2405001c
    ctx->pc = 0x18f1f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 28));
    // 0x18f1f8: 0xc06741e
    ctx->pc = 0x18F1F8u;
    SET_GPR_U32(ctx, 31, 0x18F200u);
    ctx->pc = 0x18F1FCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D078u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetCond_0x19d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F200u; }
        else if (ctx->pc != 0x18F200u) { ctx->pc = 0x18F200u; }
    }
    if (ctx->pc != 0x18F200u) { return; }
    ctx->pc = 0x18F200u;
    // 0x18f200: 0x220202d
    ctx->pc = 0x18f200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f204: 0xdfbf0030
    ctx->pc = 0x18f204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f208: 0xdfb20020
    ctx->pc = 0x18f208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f20c: 0x24050005
    ctx->pc = 0x18f20cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x18f210: 0xdfb10010
    ctx->pc = 0x18f210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f214: 0x302d
    ctx->pc = 0x18f214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f218: 0xdfb00000
    ctx->pc = 0x18f218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f21c: 0x8065604
    ctx->pc = 0x18F21Cu;
    ctx->pc = 0x18F220u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x195810u;
    SFD_SetMpvCond_0x195810(rdram, ctx, runtime); return;
    ctx->pc = 0x18F224u;
}
