#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: subhour
// Address: 0x1a1828 - 0x1a1890
void subhour_0x1a1828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("subhour");


    ctx->pc = 0x1a1828u;

    // 0x1a1828: 0x27bdffe0
    ctx->pc = 0x1a1828u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a182c: 0xffb00000
    ctx->pc = 0x1a182cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1830: 0x80802d
    ctx->pc = 0x1a1830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1834: 0x16000007
    ctx->pc = 0x1A1834u;
    {
        const bool branch_taken_0x1a1834 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A1838u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x1a1834) {
            ctx->pc = 0x1A1854u;
            goto label_1a1854;
        }
    }
    ctx->pc = 0x1A183Cu;
    // 0x1a183c: 0x3c04002c
    ctx->pc = 0x1a183cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1a1840: 0x3c06002c
    ctx->pc = 0x1a1840u;
    SET_GPR_U32(ctx, 6, ((uint32_t)44 << 16));
    // 0x1a1844: 0x2484d820
    ctx->pc = 0x1a1844u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957088));
    // 0x1a1848: 0x24c6d848
    ctx->pc = 0x1a1848u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957128));
    // 0x1a184c: 0xc05003c
    ctx->pc = 0x1A184Cu;
    SET_GPR_U32(ctx, 31, 0x1A1854u);
    ctx->pc = 0x1A1850u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 398));
    ctx->pc = 0x1400F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___assert_0x1400f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1854u; }
        else if (ctx->pc != 0x1A1854u) { ctx->pc = 0x1A1854u; }
    }
    if (ctx->pc != 0x1A1854u) { return; }
    ctx->pc = 0x1A1854u;
label_1a1854:
    // 0x1a1854: 0x92020003
    ctx->pc = 0x1a1854u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1a1858: 0x14400008
    ctx->pc = 0x1A1858u;
    {
        const bool branch_taken_0x1a1858 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A185Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x1a1858) {
            ctx->pc = 0x1A187Cu;
            goto label_1a187c;
        }
    }
    ctx->pc = 0x1A1860u;
    // 0x1a1860: 0x24020017
    ctx->pc = 0x1a1860u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
    // 0x1a1864: 0x200202d
    ctx->pc = 0x1a1864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1868: 0xa2020003
    ctx->pc = 0x1a1868u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a186c: 0xdfbf0010
    ctx->pc = 0x1a186cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1870: 0xdfb00000
    ctx->pc = 0x1a1870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1874: 0x80685b8
    ctx->pc = 0x1A1874u;
    ctx->pc = 0x1A1878u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1A16E0u;
    subdate_0x1a16e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A187Cu;
label_1a187c:
    // 0x1a187c: 0xdfbf0010
    ctx->pc = 0x1a187cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1880: 0xa2020003
    ctx->pc = 0x1a1880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a1884: 0xdfb00000
    ctx->pc = 0x1a1884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1888: 0x3e00008
    ctx->pc = 0x1A1888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A188Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1854u: goto label_1a1854;
            case 0x1A187Cu: goto label_1a187c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1890u;
}
