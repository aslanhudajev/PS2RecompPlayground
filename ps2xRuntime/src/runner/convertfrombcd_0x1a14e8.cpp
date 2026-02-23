#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: convertfrombcd
// Address: 0x1a14e8 - 0x1a156c
void convertfrombcd_0x1a14e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("convertfrombcd");


    ctx->pc = 0x1a14e8u;

    // 0x1a14e8: 0x27bdffe0
    ctx->pc = 0x1a14e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a14ec: 0xffb00000
    ctx->pc = 0x1a14ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a14f0: 0x80802d
    ctx->pc = 0x1a14f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a14f4: 0x16000007
    ctx->pc = 0x1A14F4u;
    {
        const bool branch_taken_0x1a14f4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A14F8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x1a14f4) {
            ctx->pc = 0x1A1514u;
            goto label_1a1514;
        }
    }
    ctx->pc = 0x1A14FCu;
    // 0x1a14fc: 0x3c04002c
    ctx->pc = 0x1a14fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1a1500: 0x3c06002c
    ctx->pc = 0x1a1500u;
    SET_GPR_U32(ctx, 6, ((uint32_t)44 << 16));
    // 0x1a1504: 0x2484d820
    ctx->pc = 0x1a1504u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957088));
    // 0x1a1508: 0x24c6d848
    ctx->pc = 0x1a1508u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957128));
    // 0x1a150c: 0xc05003c
    ctx->pc = 0x1A150Cu;
    SET_GPR_U32(ctx, 31, 0x1A1514u);
    ctx->pc = 0x1A1510u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 306));
    ctx->pc = 0x1400F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___assert_0x1400f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1514u; }
        else if (ctx->pc != 0x1A1514u) { ctx->pc = 0x1A1514u; }
    }
    if (ctx->pc != 0x1A1514u) { return; }
    ctx->pc = 0x1A1514u;
label_1a1514:
    // 0x1a1514: 0xc068524
    ctx->pc = 0x1A1514u;
    SET_GPR_U32(ctx, 31, 0x1A151Cu);
    ctx->pc = 0x1A1518u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->pc = 0x1A1490u;
    {
        const uint32_t __entryPc = ctx->pc;
        frombcd_0x1a1490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A151Cu; }
        else if (ctx->pc != 0x1A151Cu) { ctx->pc = 0x1A151Cu; }
    }
    if (ctx->pc != 0x1A151Cu) { return; }
    ctx->pc = 0x1A151Cu;
    // 0x1a151c: 0x92040006
    ctx->pc = 0x1a151cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1a1520: 0xc068524
    ctx->pc = 0x1A1520u;
    SET_GPR_U32(ctx, 31, 0x1A1528u);
    ctx->pc = 0x1A1524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1A1490u;
    {
        const uint32_t __entryPc = ctx->pc;
        frombcd_0x1a1490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1528u; }
        else if (ctx->pc != 0x1A1528u) { ctx->pc = 0x1A1528u; }
    }
    if (ctx->pc != 0x1A1528u) { return; }
    ctx->pc = 0x1A1528u;
    // 0x1a1528: 0x92040005
    ctx->pc = 0x1a1528u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1a152c: 0xc068524
    ctx->pc = 0x1A152Cu;
    SET_GPR_U32(ctx, 31, 0x1A1534u);
    ctx->pc = 0x1A1530u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1A1490u;
    {
        const uint32_t __entryPc = ctx->pc;
        frombcd_0x1a1490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1534u; }
        else if (ctx->pc != 0x1A1534u) { ctx->pc = 0x1A1534u; }
    }
    if (ctx->pc != 0x1A1534u) { return; }
    ctx->pc = 0x1A1534u;
    // 0x1a1534: 0x92040003
    ctx->pc = 0x1a1534u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1a1538: 0xc068524
    ctx->pc = 0x1A1538u;
    SET_GPR_U32(ctx, 31, 0x1A1540u);
    ctx->pc = 0x1A153Cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1A1490u;
    {
        const uint32_t __entryPc = ctx->pc;
        frombcd_0x1a1490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1540u; }
        else if (ctx->pc != 0x1A1540u) { ctx->pc = 0x1A1540u; }
    }
    if (ctx->pc != 0x1A1540u) { return; }
    ctx->pc = 0x1A1540u;
    // 0x1a1540: 0x92040002
    ctx->pc = 0x1a1540u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1a1544: 0xc068524
    ctx->pc = 0x1A1544u;
    SET_GPR_U32(ctx, 31, 0x1A154Cu);
    ctx->pc = 0x1A1548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1A1490u;
    {
        const uint32_t __entryPc = ctx->pc;
        frombcd_0x1a1490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A154Cu; }
        else if (ctx->pc != 0x1A154Cu) { ctx->pc = 0x1A154Cu; }
    }
    if (ctx->pc != 0x1A154Cu) { return; }
    ctx->pc = 0x1A154Cu;
    // 0x1a154c: 0x92040001
    ctx->pc = 0x1a154cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1a1550: 0xc068524
    ctx->pc = 0x1A1550u;
    SET_GPR_U32(ctx, 31, 0x1A1558u);
    ctx->pc = 0x1A1554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1A1490u;
    {
        const uint32_t __entryPc = ctx->pc;
        frombcd_0x1a1490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1558u; }
        else if (ctx->pc != 0x1A1558u) { ctx->pc = 0x1A1558u; }
    }
    if (ctx->pc != 0x1A1558u) { return; }
    ctx->pc = 0x1A1558u;
    // 0x1a1558: 0xa2020001
    ctx->pc = 0x1a1558u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a155c: 0xdfbf0010
    ctx->pc = 0x1a155cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1560: 0xdfb00000
    ctx->pc = 0x1a1560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1564: 0x3e00008
    ctx->pc = 0x1A1564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1568u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1514u: goto label_1a1514;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A156Cu;
}
