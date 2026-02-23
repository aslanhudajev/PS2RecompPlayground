#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVCMC_ForwardRt
// Address: 0x1839d8 - 0x183a34
void MPVCMC_ForwardRt_0x1839d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVCMC_ForwardRt");


    ctx->pc = 0x1839d8u;

    // 0x1839d8: 0x27bdffc0
    ctx->pc = 0x1839d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1839dc: 0xffb00010
    ctx->pc = 0x1839dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1839e0: 0x3a0302d
    ctx->pc = 0x1839e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839e4: 0x80802d
    ctx->pc = 0x1839e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839e8: 0xffb10020
    ctx->pc = 0x1839e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1839ec: 0xffbf0030
    ctx->pc = 0x1839ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1839f0: 0x261100e8
    ctx->pc = 0x1839f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 232));
    // 0x1839f4: 0x260701d0
    ctx->pc = 0x1839f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 464));
    // 0x1839f8: 0x26080254
    ctx->pc = 0x1839f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 596));
    // 0x1839fc: 0xc060ed0
    ctx->pc = 0x1839FCu;
    SET_GPR_U32(ctx, 31, 0x183A04u);
    ctx->pc = 0x183A00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x183B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_OneReadMb_0x183b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A04u; }
        else if (ctx->pc != 0x183A04u) { ctx->pc = 0x183A04u; }
    }
    if (ctx->pc != 0x183A04u) { return; }
    ctx->pc = 0x183A04u;
    // 0x183a04: 0x200202d
    ctx->pc = 0x183a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a08: 0xc060f6e
    ctx->pc = 0x183A08u;
    SET_GPR_U32(ctx, 31, 0x183A10u);
    ctx->pc = 0x183A0Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x183DB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_OneMakeMbTa_0x183db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A10u; }
        else if (ctx->pc != 0x183A10u) { ctx->pc = 0x183A10u; }
    }
    if (ctx->pc != 0x183A10u) { return; }
    ctx->pc = 0x183A10u;
    // 0x183a10: 0x8e240008
    ctx->pc = 0x183a10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x183a14: 0x260601e0
    ctx->pc = 0x183a14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 480));
    // 0x183a18: 0xc0610ca
    ctx->pc = 0x183A18u;
    SET_GPR_U32(ctx, 31, 0x183A20u);
    ctx->pc = 0x183A1Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x184328u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_OutputMbRfb_0x184328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A20u; }
        else if (ctx->pc != 0x183A20u) { ctx->pc = 0x183A20u; }
    }
    if (ctx->pc != 0x183A20u) { return; }
    ctx->pc = 0x183A20u;
    // 0x183a20: 0xdfbf0030
    ctx->pc = 0x183a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183a24: 0xdfb10020
    ctx->pc = 0x183a24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183a28: 0xdfb00010
    ctx->pc = 0x183a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183a2c: 0x3e00008
    ctx->pc = 0x183A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183A30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183A34u;
}
