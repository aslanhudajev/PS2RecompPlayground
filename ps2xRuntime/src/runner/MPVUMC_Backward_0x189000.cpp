#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVUMC_Backward
// Address: 0x189000 - 0x1890a4
void MPVUMC_Backward_0x189000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVUMC_Backward");


    ctx->pc = 0x189000u;

    // 0x189000: 0x27bdffc0
    ctx->pc = 0x189000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x189004: 0xffb00010
    ctx->pc = 0x189004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x189008: 0x3a0302d
    ctx->pc = 0x189008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18900c: 0x80802d
    ctx->pc = 0x18900cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189010: 0xffb10020
    ctx->pc = 0x189010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x189014: 0xffbf0030
    ctx->pc = 0x189014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x189018: 0x261100e8
    ctx->pc = 0x189018u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 232));
    // 0x18901c: 0x260701e0
    ctx->pc = 0x18901cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 480));
    // 0x189020: 0x26080278
    ctx->pc = 0x189020u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 632));
    // 0x189024: 0xc06245a
    ctx->pc = 0x189024u;
    SET_GPR_U32(ctx, 31, 0x18902Cu);
    ctx->pc = 0x189028u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x189168u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvumc_OneReadMb_0x189168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18902Cu; }
        else if (ctx->pc != 0x18902Cu) { ctx->pc = 0x18902Cu; }
    }
    if (ctx->pc != 0x18902Cu) { return; }
    ctx->pc = 0x18902Cu;
    // 0x18902c: 0x8fa30000
    ctx->pc = 0x18902cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189030: 0x26090200
    ctx->pc = 0x189030u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 512));
    // 0x189034: 0x8e020200
    ctx->pc = 0x189034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x189038: 0x260800fc
    ctx->pc = 0x189038u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 252));
    // 0x18903c: 0x8faa0004
    ctx->pc = 0x18903cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x189040: 0x220202d
    ctx->pc = 0x189040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189044: 0x431021
    ctx->pc = 0x189044u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189048: 0x8e0602a8
    ctx->pc = 0x189048u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x18904c: 0xae0200fc
    ctx->pc = 0x18904cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x189050: 0x260500f8
    ctx->pc = 0x189050u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 248));
    // 0x189054: 0x8d220004
    ctx->pc = 0x189054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x189058: 0x431021
    ctx->pc = 0x189058u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18905c: 0xad020008
    ctx->pc = 0x18905cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x189060: 0x8d230008
    ctx->pc = 0x189060u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x189064: 0x6a1821
    ctx->pc = 0x189064u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x189068: 0x24670008
    ctx->pc = 0x189068u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 8));
    // 0x18906c: 0xad030010
    ctx->pc = 0x18906cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x189070: 0xad070018
    ctx->pc = 0x189070u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 7));
    // 0x189074: 0x8522000e
    ctx->pc = 0x189074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 14)));
    // 0x189078: 0x210c0
    ctx->pc = 0x189078u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x18907c: 0x621821
    ctx->pc = 0x18907cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189080: 0x24670008
    ctx->pc = 0x189080u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 8));
    // 0x189084: 0xad030020
    ctx->pc = 0x189084u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 3));
    // 0x189088: 0xc0624f2
    ctx->pc = 0x189088u;
    SET_GPR_U32(ctx, 31, 0x189090u);
    ctx->pc = 0x18908Cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 7));
    ctx->pc = 0x1893C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvumc_OneMakeMb_0x1893c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189090u; }
        else if (ctx->pc != 0x189090u) { ctx->pc = 0x189090u; }
    }
    if (ctx->pc != 0x189090u) { return; }
    ctx->pc = 0x189090u;
    // 0x189090: 0xdfbf0030
    ctx->pc = 0x189090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189094: 0xdfb10020
    ctx->pc = 0x189094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189098: 0xdfb00010
    ctx->pc = 0x189098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18909c: 0x3e00008
    ctx->pc = 0x18909Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1890A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1890A4u;
}
