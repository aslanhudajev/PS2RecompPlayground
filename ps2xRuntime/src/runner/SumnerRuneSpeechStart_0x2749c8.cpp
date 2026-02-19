#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SumnerRuneSpeechStart
// Address: 0x2749c8 - 0x274a44
void SumnerRuneSpeechStart_0x2749c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2749c8u;

    // 0x2749c8: 0x27bdffe0
    ctx->pc = 0x2749c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2749cc: 0xffbf0010
    ctx->pc = 0x2749ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2749d0: 0xffb00000
    ctx->pc = 0x2749d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2749d4: 0xc09d236
    ctx->pc = 0x2749D4u;
    SET_GPR_U32(ctx, 31, 0x2749DCu);
    ctx->pc = 0x2749D8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2748D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerGhostStart_0x2748d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2749DCu; }
    }
    if (ctx->pc != 0x2749DCu) { return; }
    ctx->pc = 0x2749DCu;
    // 0x2749dc: 0x2a02000e
    ctx->pc = 0x2749dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 14));
    // 0x2749e0: 0x1040000a
    ctx->pc = 0x2749E0u;
    {
        const bool branch_taken_0x2749e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2749E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2749e0) {
            ctx->pc = 0x274A0Cu;
            goto label_274a0c;
        }
    }
    ctx->pc = 0x2749E8u;
    // 0x2749e8: 0x3c014040
    ctx->pc = 0x2749e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x2749ec: 0x44810000
    ctx->pc = 0x2749ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2749f0: 0xe440fbc0
    ctx->pc = 0x2749f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966208), bits); }
    // 0x2749f4: 0x3c030034
    ctx->pc = 0x2749f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2749f8: 0x26020064
    ctx->pc = 0x2749f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 100));
    // 0x2749fc: 0xac62fbc4
    ctx->pc = 0x2749fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966212), GPR_U32(ctx, 2));
    // 0x274a00: 0x3c020034
    ctx->pc = 0x274a00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274a04: 0x10000007
    ctx->pc = 0x274A04u;
    {
        const bool branch_taken_0x274a04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274A08u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966216), GPR_U32(ctx, 0));
        if (branch_taken_0x274a04) {
            ctx->pc = 0x274A24u;
            goto label_274a24;
        }
    }
    ctx->pc = 0x274A0Cu;
label_274a0c:
    // 0x274a0c: 0x3c020034
    ctx->pc = 0x274a0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274a10: 0x26030064
    ctx->pc = 0x274a10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 100));
    // 0x274a14: 0xac43fbc4
    ctx->pc = 0x274a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966212), GPR_U32(ctx, 3));
    // 0x274a18: 0x3c020034
    ctx->pc = 0x274a18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274a1c: 0xc09d302
    ctx->pc = 0x274A1Cu;
    SET_GPR_U32(ctx, 31, 0x274A24u);
    ctx->pc = 0x274A20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966208), GPR_U32(ctx, 0));
    ctx->pc = 0x274C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerSpeechEnd_0x274c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A24u; }
    }
    if (ctx->pc != 0x274A24u) { return; }
    ctx->pc = 0x274A24u;
label_274a24:
    // 0x274a24: 0xc081776
    ctx->pc = 0x274A24u;
    SET_GPR_U32(ctx, 31, 0x274A2Cu);
    ctx->pc = 0x205DD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DisablePlayerControls_0x205dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A2Cu; }
    }
    if (ctx->pc != 0x274A2Cu) { return; }
    ctx->pc = 0x274A2Cu;
    // 0x274a2c: 0x3c020034
    ctx->pc = 0x274a2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274a30: 0xac40fcd8
    ctx->pc = 0x274a30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966488), GPR_U32(ctx, 0));
    // 0x274a34: 0xdfbf0010
    ctx->pc = 0x274a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274a38: 0xdfb00000
    ctx->pc = 0x274a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274a3c: 0x8099576
    ctx->pc = 0x274A3Cu;
    ctx->pc = 0x274A40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2655D8u;
    CaptionTextReset_0x2655d8(rdram, ctx, runtime); return;
    ctx->pc = 0x274A44u;
}
