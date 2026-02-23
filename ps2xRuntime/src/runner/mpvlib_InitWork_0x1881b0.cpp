#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvlib_InitWork
// Address: 0x1881b0 - 0x188254
void mpvlib_InitWork_0x1881b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvlib_InitWork");


    ctx->pc = 0x1881b0u;

    // 0x1881b0: 0x27bdffa0
    ctx->pc = 0x1881b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1881b4: 0xffb10010
    ctx->pc = 0x1881b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1881b8: 0xffb30030
    ctx->pc = 0x1881b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1881bc: 0x24b11fff
    ctx->pc = 0x1881bcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 5), 8191));
    // 0x1881c0: 0x80982d
    ctx->pc = 0x1881c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1881c4: 0x118b42
    ctx->pc = 0x1881c4u;
    SET_GPR_U32(ctx, 17, SRL32(GPR_U32(ctx, 17), 13));
    // 0x1881c8: 0x118b40
    ctx->pc = 0x1881c8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 13));
    // 0x1881cc: 0x1332c0
    ctx->pc = 0x1881ccu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 19), 11));
    // 0x1881d0: 0xffb40040
    ctx->pc = 0x1881d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1881d4: 0x220202d
    ctx->pc = 0x1881d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1881d8: 0xffb20020
    ctx->pc = 0x1881d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1881dc: 0x24c60800
    ctx->pc = 0x1881dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2048));
    // 0x1881e0: 0xffb00000
    ctx->pc = 0x1881e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1881e4: 0xffbf0050
    ctx->pc = 0x1881e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1881e8: 0xc0601e6
    ctx->pc = 0x1881E8u;
    SET_GPR_U32(ctx, 31, 0x1881F0u);
    ctx->pc = 0x1881ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x180798u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemsetDword_0x180798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881F0u; }
        else if (ctx->pc != 0x1881F0u) { ctx->pc = 0x1881F0u; }
    }
    if (ctx->pc != 0x1881F0u) { return; }
    ctx->pc = 0x1881F0u;
    // 0x1881f0: 0x139340
    ctx->pc = 0x1881f0u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 19), 13));
    // 0x1881f4: 0x24050aa0
    ctx->pc = 0x1881f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2720));
    // 0x1881f8: 0x2329021
    ctx->pc = 0x1881f8u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1881fc: 0x26541560
    ctx->pc = 0x1881fcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 18), 5472));
    // 0x188200: 0xc062106
    ctx->pc = 0x188200u;
    SET_GPR_U32(ctx, 31, 0x188208u);
    ctx->pc = 0x188204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188418u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvlib_AllocLc_0x188418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188208u; }
        else if (ctx->pc != 0x188208u) { ctx->pc = 0x188208u; }
    }
    if (ctx->pc != 0x188208u) { return; }
    ctx->pc = 0x188208u;
    // 0x188208: 0x3c10002e
    ctx->pc = 0x188208u;
    SET_GPR_U32(ctx, 16, ((uint32_t)46 << 16));
    // 0x18820c: 0x3c05002c
    ctx->pc = 0x18820cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x188210: 0x26104290
    ctx->pc = 0x188210u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 17040));
    // 0x188214: 0x24a5c9c8
    ctx->pc = 0x188214u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953416));
    // 0x188218: 0x200202d
    ctx->pc = 0x188218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18821c: 0xc0601b2
    ctx->pc = 0x18821Cu;
    SET_GPR_U32(ctx, 31, 0x188224u);
    ctx->pc = 0x188220u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1806C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188224u; }
        else if (ctx->pc != 0x188224u) { ctx->pc = 0x188224u; }
    }
    if (ctx->pc != 0x188224u) { return; }
    ctx->pc = 0x188224u;
    // 0x188224: 0xae110038
    ctx->pc = 0x188224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
    // 0x188228: 0xae12002c
    ctx->pc = 0x188228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
    // 0x18822c: 0xae140030
    ctx->pc = 0x18822cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 20));
    // 0x188230: 0xae130034
    ctx->pc = 0x188230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 19));
    // 0x188234: 0xdfbf0050
    ctx->pc = 0x188234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188238: 0xdfb40040
    ctx->pc = 0x188238u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18823c: 0xdfb30030
    ctx->pc = 0x18823cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188240: 0xdfb20020
    ctx->pc = 0x188240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188244: 0xdfb10010
    ctx->pc = 0x188244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188248: 0xdfb00000
    ctx->pc = 0x188248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18824c: 0x3e00008
    ctx->pc = 0x18824Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188250u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188254u;
}
