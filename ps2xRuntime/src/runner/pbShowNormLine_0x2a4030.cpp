#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbShowNormLine
// Address: 0x2a4030 - 0x2a4130
void pbShowNormLine_0x2a4030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a4030u;

    // 0x2a4030: 0x27bdff00
    ctx->pc = 0x2a4030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2a4034: 0xffbf00f0
    ctx->pc = 0x2a4034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2a4038: 0xffb300e0
    ctx->pc = 0x2a4038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x2a403c: 0xffb200d0
    ctx->pc = 0x2a403cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x2a4040: 0xffb100c0
    ctx->pc = 0x2a4040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x2a4044: 0xffb000b0
    ctx->pc = 0x2a4044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x2a4048: 0xa0902d
    ctx->pc = 0x2a4048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a404c: 0x3c020036
    ctx->pc = 0x2a404cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a4050: 0x8c53dee0
    ctx->pc = 0x2a4050u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a4054: 0x8c820070
    ctx->pc = 0x2a4054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2a4058: 0x3a0202d
    ctx->pc = 0x2a4058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a405c: 0x8c45001c
    ctx->pc = 0x2a405cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2a4060: 0x2406ffff
    ctx->pc = 0x2a4060u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a4064: 0x2407ffff
    ctx->pc = 0x2a4064u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a4068: 0x402d
    ctx->pc = 0x2a4068u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a406c: 0xc0aebee
    ctx->pc = 0x2A406Cu;
    SET_GPR_U32(ctx, 31, 0x2A4074u);
    ctx->pc = 0x2A4070u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BAFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuGetVertData_0x2bafb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4074u; }
    }
    if (ctx->pc != 0x2A4074u) { return; }
    ctx->pc = 0x2A4074u;
    // 0x2a4074: 0x14400028
    ctx->pc = 0x2A4074u;
    {
        const bool branch_taken_0x2a4074 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A4078u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        if (branch_taken_0x2a4074) {
            ctx->pc = 0x2A4118u;
            goto label_2a4118;
        }
    }
    ctx->pc = 0x2A407Cu;
    // 0x2a407c: 0x27b00090
    ctx->pc = 0x2a407cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a4080: 0x200202d
    ctx->pc = 0x2a4080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4084: 0xc0b9514
    ctx->pc = 0x2A4084u;
    SET_GPR_U32(ctx, 31, 0x2A408Cu);
    ctx->pc = 0x2A4088u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2E5450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x2e5450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A408Cu; }
    }
    if (ctx->pc != 0x2A408Cu) { return; }
    ctx->pc = 0x2A408Cu;
    // 0x2a408c: 0x200202d
    ctx->pc = 0x2a408cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4090: 0x3c014000
    ctx->pc = 0x2a4090u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x2a4094: 0x44816000
    ctx->pc = 0x2a4094u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2a4098: 0xc0b957c
    ctx->pc = 0x2A4098u;
    SET_GPR_U32(ctx, 31, 0x2A40A0u);
    ctx->pc = 0x2A409Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E55F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x2e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A40A0u; }
    }
    if (ctx->pc != 0x2A40A0u) { return; }
    ctx->pc = 0x2A40A0u;
    // 0x2a40a0: 0x200202d
    ctx->pc = 0x2a40a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40a4: 0x200282d
    ctx->pc = 0x2a40a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40a8: 0xc0b956a
    ctx->pc = 0x2A40A8u;
    SET_GPR_U32(ctx, 31, 0x2A40B0u);
    ctx->pc = 0x2A40ACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E55A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x2e55a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A40B0u; }
    }
    if (ctx->pc != 0x2A40B0u) { return; }
    ctx->pc = 0x2A40B0u;
    // 0x2a40b0: 0x200202d
    ctx->pc = 0x2a40b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40b4: 0x200282d
    ctx->pc = 0x2a40b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40b8: 0xc0b626d
    ctx->pc = 0x2A40B8u;
    SET_GPR_U32(ctx, 31, 0x2A40C0u);
    ctx->pc = 0x2A40BCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D89B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89B4_0x2d89b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A40C0u; }
    }
    if (ctx->pc != 0x2A40C0u) { return; }
    ctx->pc = 0x2A40C0u;
    // 0x2a40c0: 0x8e660004
    ctx->pc = 0x2a40c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a40c4: 0x200202d
    ctx->pc = 0x2a40c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40c8: 0x200282d
    ctx->pc = 0x2a40c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40cc: 0xc0b626d
    ctx->pc = 0x2A40CCu;
    SET_GPR_U32(ctx, 31, 0x2A40D4u);
    ctx->pc = 0x2A40D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 720));
    ctx->pc = 0x2D89B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89B4_0x2d89b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A40D4u; }
    }
    if (ctx->pc != 0x2A40D4u) { return; }
    ctx->pc = 0x2A40D4u;
    // 0x2a40d4: 0x27b100a0
    ctx->pc = 0x2a40d4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a40d8: 0x220202d
    ctx->pc = 0x2a40d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40dc: 0x3a0282d
    ctx->pc = 0x2a40dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40e0: 0xc0b626d
    ctx->pc = 0x2A40E0u;
    SET_GPR_U32(ctx, 31, 0x2A40E8u);
    ctx->pc = 0x2A40E4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D89B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89B4_0x2d89b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A40E8u; }
    }
    if (ctx->pc != 0x2A40E8u) { return; }
    ctx->pc = 0x2A40E8u;
    // 0x2a40e8: 0x8e660004
    ctx->pc = 0x2a40e8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a40ec: 0x220202d
    ctx->pc = 0x2a40ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40f0: 0x220282d
    ctx->pc = 0x2a40f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40f4: 0xc0b626d
    ctx->pc = 0x2A40F4u;
    SET_GPR_U32(ctx, 31, 0x2A40FCu);
    ctx->pc = 0x2A40F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 720));
    ctx->pc = 0x2D89B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89B4_0x2d89b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A40FCu; }
    }
    if (ctx->pc != 0x2A40FCu) { return; }
    ctx->pc = 0x2A40FCu;
    // 0x2a40fc: 0x220202d
    ctx->pc = 0x2a40fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4100: 0x200282d
    ctx->pc = 0x2a4100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4104: 0x3c0600ff
    ctx->pc = 0x2a4104u;
    SET_GPR_U32(ctx, 6, ((uint32_t)255 << 16));
    // 0x2a4108: 0x3c0700ff
    ctx->pc = 0x2a4108u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x2a410c: 0xc0a8ec4
    ctx->pc = 0x2A410Cu;
    SET_GPR_U32(ctx, 31, 0x2A4114u);
    ctx->pc = 0x2A4110u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    ctx->pc = 0x2A3B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLineDraw_0x2a3b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4114u; }
    }
    if (ctx->pc != 0x2A4114u) { return; }
    ctx->pc = 0x2A4114u;
    // 0x2a4114: 0xdfbf00f0
    ctx->pc = 0x2a4114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_2a4118:
    // 0x2a4118: 0xdfb300e0
    ctx->pc = 0x2a4118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a411c: 0xdfb200d0
    ctx->pc = 0x2a411cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a4120: 0xdfb100c0
    ctx->pc = 0x2a4120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a4124: 0xdfb000b0
    ctx->pc = 0x2a4124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a4128: 0x3e00008
    ctx->pc = 0x2A4128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A412Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A4118u: goto label_2a4118;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A4130u;
}
