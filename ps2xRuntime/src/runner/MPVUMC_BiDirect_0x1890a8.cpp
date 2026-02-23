#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVUMC_BiDirect
// Address: 0x1890a8 - 0x189164
void MPVUMC_BiDirect_0x1890a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVUMC_BiDirect");


    ctx->pc = 0x1890a8u;

    // 0x1890a8: 0x27bdffc0
    ctx->pc = 0x1890a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1890ac: 0xffb00010
    ctx->pc = 0x1890acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1890b0: 0x3a0302d
    ctx->pc = 0x1890b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1890b4: 0x80802d
    ctx->pc = 0x1890b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1890b8: 0xffb10020
    ctx->pc = 0x1890b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1890bc: 0xffbf0030
    ctx->pc = 0x1890bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1890c0: 0x261100e8
    ctx->pc = 0x1890c0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 232));
    // 0x1890c4: 0x260701d0
    ctx->pc = 0x1890c4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 464));
    // 0x1890c8: 0x8e250008
    ctx->pc = 0x1890c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1890cc: 0xc06245a
    ctx->pc = 0x1890CCu;
    SET_GPR_U32(ctx, 31, 0x1890D4u);
    ctx->pc = 0x1890D0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 596));
    ctx->pc = 0x189168u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvumc_OneReadMb_0x189168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1890D4u; }
        else if (ctx->pc != 0x1890D4u) { ctx->pc = 0x1890D4u; }
    }
    if (ctx->pc != 0x1890D4u) { return; }
    ctx->pc = 0x1890D4u;
    // 0x1890d4: 0x8e25000c
    ctx->pc = 0x1890d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1890d8: 0x200202d
    ctx->pc = 0x1890d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1890dc: 0x260701e0
    ctx->pc = 0x1890dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 480));
    // 0x1890e0: 0x26080278
    ctx->pc = 0x1890e0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 632));
    // 0x1890e4: 0xc06245a
    ctx->pc = 0x1890E4u;
    SET_GPR_U32(ctx, 31, 0x1890ECu);
    ctx->pc = 0x1890E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x189168u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvumc_OneReadMb_0x189168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1890ECu; }
        else if (ctx->pc != 0x1890ECu) { ctx->pc = 0x1890ECu; }
    }
    if (ctx->pc != 0x1890ECu) { return; }
    ctx->pc = 0x1890ECu;
    // 0x1890ec: 0x8fa30000
    ctx->pc = 0x1890ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1890f0: 0x26090200
    ctx->pc = 0x1890f0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 512));
    // 0x1890f4: 0x8e020200
    ctx->pc = 0x1890f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1890f8: 0x260800fc
    ctx->pc = 0x1890f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 252));
    // 0x1890fc: 0x8faa0004
    ctx->pc = 0x1890fcu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x189100: 0x220202d
    ctx->pc = 0x189100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189104: 0x431021
    ctx->pc = 0x189104u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189108: 0x8e0602a8
    ctx->pc = 0x189108u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x18910c: 0xae0200fc
    ctx->pc = 0x18910cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x189110: 0x260500f8
    ctx->pc = 0x189110u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 248));
    // 0x189114: 0x8d220004
    ctx->pc = 0x189114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x189118: 0x431021
    ctx->pc = 0x189118u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18911c: 0xad020008
    ctx->pc = 0x18911cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x189120: 0x8d230008
    ctx->pc = 0x189120u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x189124: 0x6a1821
    ctx->pc = 0x189124u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x189128: 0x24670008
    ctx->pc = 0x189128u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 8));
    // 0x18912c: 0xad030010
    ctx->pc = 0x18912cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x189130: 0xad070018
    ctx->pc = 0x189130u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 7));
    // 0x189134: 0x8522000e
    ctx->pc = 0x189134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 14)));
    // 0x189138: 0x210c0
    ctx->pc = 0x189138u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x18913c: 0x621821
    ctx->pc = 0x18913cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189140: 0x24670008
    ctx->pc = 0x189140u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 8));
    // 0x189144: 0xad030020
    ctx->pc = 0x189144u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 3));
    // 0x189148: 0xc06255e
    ctx->pc = 0x189148u;
    SET_GPR_U32(ctx, 31, 0x189150u);
    ctx->pc = 0x18914Cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 7));
    ctx->pc = 0x189578u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvumc_BiMakeMb_0x189578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189150u; }
        else if (ctx->pc != 0x189150u) { ctx->pc = 0x189150u; }
    }
    if (ctx->pc != 0x189150u) { return; }
    ctx->pc = 0x189150u;
    // 0x189150: 0xdfbf0030
    ctx->pc = 0x189150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189154: 0xdfb10020
    ctx->pc = 0x189154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189158: 0xdfb00010
    ctx->pc = 0x189158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18915c: 0x3e00008
    ctx->pc = 0x18915Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189160u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189164u;
}
