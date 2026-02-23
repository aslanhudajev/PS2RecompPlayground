#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVUMC_Forward
// Address: 0x188f58 - 0x188ffc
void MPVUMC_Forward_0x188f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVUMC_Forward");


    ctx->pc = 0x188f58u;

    // 0x188f58: 0x27bdffc0
    ctx->pc = 0x188f58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x188f5c: 0xffb00010
    ctx->pc = 0x188f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x188f60: 0x3a0302d
    ctx->pc = 0x188f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f64: 0x80802d
    ctx->pc = 0x188f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f68: 0xffb10020
    ctx->pc = 0x188f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x188f6c: 0xffbf0030
    ctx->pc = 0x188f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x188f70: 0x261100e8
    ctx->pc = 0x188f70u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 232));
    // 0x188f74: 0x260701d0
    ctx->pc = 0x188f74u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 464));
    // 0x188f78: 0x26080254
    ctx->pc = 0x188f78u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 596));
    // 0x188f7c: 0xc06245a
    ctx->pc = 0x188F7Cu;
    SET_GPR_U32(ctx, 31, 0x188F84u);
    ctx->pc = 0x188F80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x189168u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvumc_OneReadMb_0x189168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F84u; }
        else if (ctx->pc != 0x188F84u) { ctx->pc = 0x188F84u; }
    }
    if (ctx->pc != 0x188F84u) { return; }
    ctx->pc = 0x188F84u;
    // 0x188f84: 0x8fa30000
    ctx->pc = 0x188f84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188f88: 0x26090200
    ctx->pc = 0x188f88u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 512));
    // 0x188f8c: 0x8e020200
    ctx->pc = 0x188f8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x188f90: 0x260800fc
    ctx->pc = 0x188f90u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 252));
    // 0x188f94: 0x8faa0004
    ctx->pc = 0x188f94u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x188f98: 0x220202d
    ctx->pc = 0x188f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f9c: 0x431021
    ctx->pc = 0x188f9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188fa0: 0x8e0602a8
    ctx->pc = 0x188fa0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x188fa4: 0xae0200fc
    ctx->pc = 0x188fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x188fa8: 0x260500f8
    ctx->pc = 0x188fa8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 248));
    // 0x188fac: 0x8d220004
    ctx->pc = 0x188facu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x188fb0: 0x431021
    ctx->pc = 0x188fb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188fb4: 0xad020008
    ctx->pc = 0x188fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x188fb8: 0x8d230008
    ctx->pc = 0x188fb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x188fbc: 0x6a1821
    ctx->pc = 0x188fbcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x188fc0: 0x24670008
    ctx->pc = 0x188fc0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 8));
    // 0x188fc4: 0xad030010
    ctx->pc = 0x188fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x188fc8: 0xad070018
    ctx->pc = 0x188fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 7));
    // 0x188fcc: 0x8522000e
    ctx->pc = 0x188fccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 14)));
    // 0x188fd0: 0x210c0
    ctx->pc = 0x188fd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x188fd4: 0x621821
    ctx->pc = 0x188fd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x188fd8: 0x24670008
    ctx->pc = 0x188fd8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 8));
    // 0x188fdc: 0xad030020
    ctx->pc = 0x188fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 3));
    // 0x188fe0: 0xc0624f2
    ctx->pc = 0x188FE0u;
    SET_GPR_U32(ctx, 31, 0x188FE8u);
    ctx->pc = 0x188FE4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 7));
    ctx->pc = 0x1893C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvumc_OneMakeMb_0x1893c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188FE8u; }
        else if (ctx->pc != 0x188FE8u) { ctx->pc = 0x188FE8u; }
    }
    if (ctx->pc != 0x188FE8u) { return; }
    ctx->pc = 0x188FE8u;
    // 0x188fe8: 0xdfbf0030
    ctx->pc = 0x188fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188fec: 0xdfb10020
    ctx->pc = 0x188fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188ff0: 0xdfb00010
    ctx->pc = 0x188ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188ff4: 0x3e00008
    ctx->pc = 0x188FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188FF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188FFCu;
}
