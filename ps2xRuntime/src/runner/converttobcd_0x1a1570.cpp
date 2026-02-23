#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: converttobcd
// Address: 0x1a1570 - 0x1a15f4
void converttobcd_0x1a1570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("converttobcd");


    ctx->pc = 0x1a1570u;

    // 0x1a1570: 0x27bdffe0
    ctx->pc = 0x1a1570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1574: 0xffb00000
    ctx->pc = 0x1a1574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1578: 0x80802d
    ctx->pc = 0x1a1578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a157c: 0x16000007
    ctx->pc = 0x1A157Cu;
    {
        const bool branch_taken_0x1a157c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A1580u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x1a157c) {
            ctx->pc = 0x1A159Cu;
            goto label_1a159c;
        }
    }
    ctx->pc = 0x1A1584u;
    // 0x1a1584: 0x3c04002c
    ctx->pc = 0x1a1584u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1a1588: 0x3c06002c
    ctx->pc = 0x1a1588u;
    SET_GPR_U32(ctx, 6, ((uint32_t)44 << 16));
    // 0x1a158c: 0x2484d820
    ctx->pc = 0x1a158cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957088));
    // 0x1a1590: 0x24c6d848
    ctx->pc = 0x1a1590u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957128));
    // 0x1a1594: 0xc05003c
    ctx->pc = 0x1A1594u;
    SET_GPR_U32(ctx, 31, 0x1A159Cu);
    ctx->pc = 0x1A1598u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 321));
    ctx->pc = 0x1400F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___assert_0x1400f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A159Cu; }
        else if (ctx->pc != 0x1A159Cu) { ctx->pc = 0x1A159Cu; }
    }
    if (ctx->pc != 0x1A159Cu) { return; }
    ctx->pc = 0x1A159Cu;
label_1a159c:
    // 0x1a159c: 0xc06850a
    ctx->pc = 0x1A159Cu;
    SET_GPR_U32(ctx, 31, 0x1A15A4u);
    ctx->pc = 0x1A15A0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->pc = 0x1A1428u;
    {
        const uint32_t __entryPc = ctx->pc;
        tobcd_0x1a1428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15A4u; }
        else if (ctx->pc != 0x1A15A4u) { ctx->pc = 0x1A15A4u; }
    }
    if (ctx->pc != 0x1A15A4u) { return; }
    ctx->pc = 0x1A15A4u;
    // 0x1a15a4: 0x92040006
    ctx->pc = 0x1a15a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1a15a8: 0xc06850a
    ctx->pc = 0x1A15A8u;
    SET_GPR_U32(ctx, 31, 0x1A15B0u);
    ctx->pc = 0x1A15ACu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1A1428u;
    {
        const uint32_t __entryPc = ctx->pc;
        tobcd_0x1a1428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15B0u; }
        else if (ctx->pc != 0x1A15B0u) { ctx->pc = 0x1A15B0u; }
    }
    if (ctx->pc != 0x1A15B0u) { return; }
    ctx->pc = 0x1A15B0u;
    // 0x1a15b0: 0x92040005
    ctx->pc = 0x1a15b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1a15b4: 0xc06850a
    ctx->pc = 0x1A15B4u;
    SET_GPR_U32(ctx, 31, 0x1A15BCu);
    ctx->pc = 0x1A15B8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1A1428u;
    {
        const uint32_t __entryPc = ctx->pc;
        tobcd_0x1a1428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15BCu; }
        else if (ctx->pc != 0x1A15BCu) { ctx->pc = 0x1A15BCu; }
    }
    if (ctx->pc != 0x1A15BCu) { return; }
    ctx->pc = 0x1A15BCu;
    // 0x1a15bc: 0x92040003
    ctx->pc = 0x1a15bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1a15c0: 0xc06850a
    ctx->pc = 0x1A15C0u;
    SET_GPR_U32(ctx, 31, 0x1A15C8u);
    ctx->pc = 0x1A15C4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1A1428u;
    {
        const uint32_t __entryPc = ctx->pc;
        tobcd_0x1a1428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15C8u; }
        else if (ctx->pc != 0x1A15C8u) { ctx->pc = 0x1A15C8u; }
    }
    if (ctx->pc != 0x1A15C8u) { return; }
    ctx->pc = 0x1A15C8u;
    // 0x1a15c8: 0x92040002
    ctx->pc = 0x1a15c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1a15cc: 0xc06850a
    ctx->pc = 0x1A15CCu;
    SET_GPR_U32(ctx, 31, 0x1A15D4u);
    ctx->pc = 0x1A15D0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1A1428u;
    {
        const uint32_t __entryPc = ctx->pc;
        tobcd_0x1a1428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15D4u; }
        else if (ctx->pc != 0x1A15D4u) { ctx->pc = 0x1A15D4u; }
    }
    if (ctx->pc != 0x1A15D4u) { return; }
    ctx->pc = 0x1A15D4u;
    // 0x1a15d4: 0x92040001
    ctx->pc = 0x1a15d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1a15d8: 0xc06850a
    ctx->pc = 0x1A15D8u;
    SET_GPR_U32(ctx, 31, 0x1A15E0u);
    ctx->pc = 0x1A15DCu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1A1428u;
    {
        const uint32_t __entryPc = ctx->pc;
        tobcd_0x1a1428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15E0u; }
        else if (ctx->pc != 0x1A15E0u) { ctx->pc = 0x1A15E0u; }
    }
    if (ctx->pc != 0x1A15E0u) { return; }
    ctx->pc = 0x1A15E0u;
    // 0x1a15e0: 0xa2020001
    ctx->pc = 0x1a15e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a15e4: 0xdfbf0010
    ctx->pc = 0x1a15e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a15e8: 0xdfb00000
    ctx->pc = 0x1a15e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a15ec: 0x3e00008
    ctx->pc = 0x1A15ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A15F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A159Cu: goto label_1a159c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A15F4u;
}
