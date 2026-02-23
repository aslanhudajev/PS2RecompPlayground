#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: AdjustTime
// Address: 0x1a1890 - 0x1a195c
void AdjustTime_0x1a1890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("AdjustTime");


    ctx->pc = 0x1a1890u;

    // 0x1a1890: 0x27bdffd0
    ctx->pc = 0x1a1890u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1894: 0xffb10010
    ctx->pc = 0x1a1894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a1898: 0xffb00000
    ctx->pc = 0x1a1898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a189c: 0x80882d
    ctx->pc = 0x1a189cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18a0: 0xffbf0020
    ctx->pc = 0x1a18a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a18a4: 0x16200007
    ctx->pc = 0x1A18A4u;
    {
        const bool branch_taken_0x1a18a4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A18A8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a18a4) {
            ctx->pc = 0x1A18C4u;
            goto label_1a18c4;
        }
    }
    ctx->pc = 0x1A18ACu;
    // 0x1a18ac: 0x3c04002c
    ctx->pc = 0x1a18acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1a18b0: 0x3c06002c
    ctx->pc = 0x1a18b0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)44 << 16));
    // 0x1a18b4: 0x2484d820
    ctx->pc = 0x1a18b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957088));
    // 0x1a18b8: 0x24c6d848
    ctx->pc = 0x1a18b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957128));
    // 0x1a18bc: 0xc05003c
    ctx->pc = 0x1A18BCu;
    SET_GPR_U32(ctx, 31, 0x1A18C4u);
    ctx->pc = 0x1A18C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 416));
    ctx->pc = 0x1400F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___assert_0x1400f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18C4u; }
        else if (ctx->pc != 0x1A18C4u) { ctx->pc = 0x1A18C4u; }
    }
    if (ctx->pc != 0x1A18C4u) { return; }
    ctx->pc = 0x1A18C4u;
label_1a18c4:
    // 0x1a18c4: 0x260205a0
    ctx->pc = 0x1a18c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1440));
    // 0x1a18c8: 0x2c420b41
    ctx->pc = 0x1a18c8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2881));
    // 0x1a18cc: 0x14400006
    ctx->pc = 0x1A18CCu;
    {
        const bool branch_taken_0x1a18cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A18D0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x1a18cc) {
            ctx->pc = 0x1A18E8u;
            goto label_1a18e8;
        }
    }
    ctx->pc = 0x1A18D4u;
    // 0x1a18d4: 0x3c06002c
    ctx->pc = 0x1a18d4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)44 << 16));
    // 0x1a18d8: 0x2484d820
    ctx->pc = 0x1a18d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957088));
    // 0x1a18dc: 0x24c6d868
    ctx->pc = 0x1a18dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957160));
    // 0x1a18e0: 0xc05003c
    ctx->pc = 0x1A18E0u;
    SET_GPR_U32(ctx, 31, 0x1A18E8u);
    ctx->pc = 0x1A18E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 417));
    ctx->pc = 0x1400F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___assert_0x1400f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18E8u; }
        else if (ctx->pc != 0x1A18E8u) { ctx->pc = 0x1A18E8u; }
    }
    if (ctx->pc != 0x1A18E8u) { return; }
    ctx->pc = 0x1A18E8u;
label_1a18e8:
    // 0x1a18e8: 0xc06853a
    ctx->pc = 0x1A18E8u;
    SET_GPR_U32(ctx, 31, 0x1A18F0u);
    ctx->pc = 0x1A18ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A14E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        convertfrombcd_0x1a14e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18F0u; }
        else if (ctx->pc != 0x1A18F0u) { ctx->pc = 0x1A18F0u; }
    }
    if (ctx->pc != 0x1A18F0u) { return; }
    ctx->pc = 0x1A18F0u;
    // 0x1a18f0: 0x92220002
    ctx->pc = 0x1a18f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1a18f4: 0x508021
    ctx->pc = 0x1a18f4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a18f8: 0x602000d
    ctx->pc = 0x1A18F8u;
    {
        const bool branch_taken_0x1a18f8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1a18f8) {
            ctx->pc = 0x1A18FCu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 60));
            ctx->pc = 0x1A1930u;
            goto label_1a1930;
        }
    }
    ctx->pc = 0x1A1900u;
    // 0x1a1900: 0x2a02003d
    ctx->pc = 0x1a1900u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 61));
    // 0x1a1904: 0x5440000f
    ctx->pc = 0x1A1904u;
    {
        const bool branch_taken_0x1a1904 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a1904) {
            ctx->pc = 0x1A1908u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
            ctx->pc = 0x1A1944u;
            goto label_1a1944;
        }
    }
    ctx->pc = 0x1A190Cu;
    // 0x1a190c: 0x220202d
    ctx->pc = 0x1a190cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1910:
    // 0x1a1910: 0xc0685ee
    ctx->pc = 0x1A1910u;
    SET_GPR_U32(ctx, 31, 0x1A1918u);
    ctx->pc = 0x1A1914u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967236));
    ctx->pc = 0x1A17B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        addhour_0x1a17b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1918u; }
        else if (ctx->pc != 0x1A1918u) { ctx->pc = 0x1A1918u; }
    }
    if (ctx->pc != 0x1A1918u) { return; }
    ctx->pc = 0x1A1918u;
    // 0x1a1918: 0x2a02003d
    ctx->pc = 0x1a1918u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 61));
    // 0x1a191c: 0x1040fffc
    ctx->pc = 0x1A191Cu;
    {
        const bool branch_taken_0x1a191c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1920u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a191c) {
            ctx->pc = 0x1A1910u;
            goto label_1a1910;
        }
    }
    ctx->pc = 0x1A1924u;
    // 0x1a1924: 0x10000008
    ctx->pc = 0x1A1924u;
    {
        const bool branch_taken_0x1a1924 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1928u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
        if (branch_taken_0x1a1924) {
            ctx->pc = 0x1A1948u;
            goto label_1a1948;
        }
    }
    ctx->pc = 0x1A192Cu;
    // 0x1a192c: 0x0
    ctx->pc = 0x1a192cu;
    // NOP
label_1a1930:
    // 0x1a1930: 0xc06860a
    ctx->pc = 0x1A1930u;
    SET_GPR_U32(ctx, 31, 0x1A1938u);
    ctx->pc = 0x1A1934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A1828u;
    {
        const uint32_t __entryPc = ctx->pc;
        subhour_0x1a1828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1938u; }
        else if (ctx->pc != 0x1A1938u) { ctx->pc = 0x1A1938u; }
    }
    if (ctx->pc != 0x1A1938u) { return; }
    ctx->pc = 0x1A1938u;
    // 0x1a1938: 0x602fffd
    ctx->pc = 0x1A1938u;
    {
        const bool branch_taken_0x1a1938 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1a1938) {
            ctx->pc = 0x1A193Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 60));
            ctx->pc = 0x1A1930u;
            goto label_1a1930;
        }
    }
    ctx->pc = 0x1A1940u;
    // 0x1a1940: 0xa2300002
    ctx->pc = 0x1a1940u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
label_1a1944:
    // 0x1a1944: 0x220202d
    ctx->pc = 0x1a1944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1948:
    // 0x1a1948: 0xdfbf0020
    ctx->pc = 0x1a1948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a194c: 0xdfb10010
    ctx->pc = 0x1a194cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1950: 0xdfb00000
    ctx->pc = 0x1a1950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1954: 0x806855c
    ctx->pc = 0x1A1954u;
    ctx->pc = 0x1A1958u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1A1570u;
    converttobcd_0x1a1570(rdram, ctx, runtime); return;
    ctx->pc = 0x1A195Cu;
}
