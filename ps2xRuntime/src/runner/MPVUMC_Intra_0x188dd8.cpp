#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVUMC_Intra
// Address: 0x188dd8 - 0x188e74
void MPVUMC_Intra_0x188dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVUMC_Intra");


    ctx->pc = 0x188dd8u;

    // 0x188dd8: 0x27bdffc0
    ctx->pc = 0x188dd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x188ddc: 0xffb10020
    ctx->pc = 0x188ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x188de0: 0x3a0302d
    ctx->pc = 0x188de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188de4: 0xffb00010
    ctx->pc = 0x188de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x188de8: 0xffbf0030
    ctx->pc = 0x188de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x188dec: 0x80802d
    ctx->pc = 0x188decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188df0: 0x26110200
    ctx->pc = 0x188df0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 512));
    // 0x188df4: 0x8e05029c
    ctx->pc = 0x188df4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x188df8: 0xc0626fa
    ctx->pc = 0x188DF8u;
    SET_GPR_U32(ctx, 31, 0x188E00u);
    ctx->pc = 0x188DFCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x189BE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvumc_CalcOfs_0x189be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188E00u; }
        else if (ctx->pc != 0x188E00u) { ctx->pc = 0x188E00u; }
    }
    if (ctx->pc != 0x188E00u) { return; }
    ctx->pc = 0x188E00u;
    // 0x188e00: 0x8fa30000
    ctx->pc = 0x188e00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188e04: 0x260800fc
    ctx->pc = 0x188e04u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 252));
    // 0x188e08: 0x8e020200
    ctx->pc = 0x188e08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x188e0c: 0x260500f8
    ctx->pc = 0x188e0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 248));
    // 0x188e10: 0x8627000e
    ctx->pc = 0x188e10u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x188e14: 0x260402e0
    ctx->pc = 0x188e14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 736));
    // 0x188e18: 0x8fa60004
    ctx->pc = 0x188e18u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x188e1c: 0x431021
    ctx->pc = 0x188e1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188e20: 0xae0200fc
    ctx->pc = 0x188e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x188e24: 0x738c0
    ctx->pc = 0x188e24u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 3));
    // 0x188e28: 0x8e220004
    ctx->pc = 0x188e28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x188e2c: 0x431021
    ctx->pc = 0x188e2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188e30: 0xad020008
    ctx->pc = 0x188e30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x188e34: 0x8e230008
    ctx->pc = 0x188e34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x188e38: 0x661821
    ctx->pc = 0x188e38u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x188e3c: 0x673821
    ctx->pc = 0x188e3cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x188e40: 0x24620008
    ctx->pc = 0x188e40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 8));
    // 0x188e44: 0x24e60008
    ctx->pc = 0x188e44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 8));
    // 0x188e48: 0xad020018
    ctx->pc = 0x188e48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 2));
    // 0x188e4c: 0xad060028
    ctx->pc = 0x188e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 6));
    // 0x188e50: 0xad030010
    ctx->pc = 0x188e50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x188e54: 0xad070020
    ctx->pc = 0x188e54u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 7));
    // 0x188e58: 0xc06239e
    ctx->pc = 0x188E58u;
    SET_GPR_U32(ctx, 31, 0x188E60u);
    ctx->pc = 0x188E5Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->pc = 0x188E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvumc_OutputIntra6blk_0x188e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188E60u; }
        else if (ctx->pc != 0x188E60u) { ctx->pc = 0x188E60u; }
    }
    if (ctx->pc != 0x188E60u) { return; }
    ctx->pc = 0x188E60u;
    // 0x188e60: 0xdfbf0030
    ctx->pc = 0x188e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188e64: 0xdfb10020
    ctx->pc = 0x188e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188e68: 0xdfb00010
    ctx->pc = 0x188e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188e6c: 0x3e00008
    ctx->pc = 0x188E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188E70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188E74u;
}
