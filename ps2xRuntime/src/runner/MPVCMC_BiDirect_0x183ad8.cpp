#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVCMC_BiDirect
// Address: 0x183ad8 - 0x183b3c
void MPVCMC_BiDirect_0x183ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVCMC_BiDirect");


    ctx->pc = 0x183ad8u;

    // 0x183ad8: 0x27bdffc0
    ctx->pc = 0x183ad8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x183adc: 0xffb00010
    ctx->pc = 0x183adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x183ae0: 0x3a0302d
    ctx->pc = 0x183ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ae4: 0x80802d
    ctx->pc = 0x183ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ae8: 0xffb10020
    ctx->pc = 0x183ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x183aec: 0xffbf0030
    ctx->pc = 0x183aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x183af0: 0x261100e8
    ctx->pc = 0x183af0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 232));
    // 0x183af4: 0x260701d0
    ctx->pc = 0x183af4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 464));
    // 0x183af8: 0x8e250008
    ctx->pc = 0x183af8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x183afc: 0xc060ed0
    ctx->pc = 0x183AFCu;
    SET_GPR_U32(ctx, 31, 0x183B04u);
    ctx->pc = 0x183B00u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 596));
    ctx->pc = 0x183B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_OneReadMb_0x183b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B04u; }
        else if (ctx->pc != 0x183B04u) { ctx->pc = 0x183B04u; }
    }
    if (ctx->pc != 0x183B04u) { return; }
    ctx->pc = 0x183B04u;
    // 0x183b04: 0x8e25000c
    ctx->pc = 0x183b04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x183b08: 0x200202d
    ctx->pc = 0x183b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b0c: 0x260701e0
    ctx->pc = 0x183b0cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 480));
    // 0x183b10: 0x26080278
    ctx->pc = 0x183b10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 632));
    // 0x183b14: 0xc060ed0
    ctx->pc = 0x183B14u;
    SET_GPR_U32(ctx, 31, 0x183B1Cu);
    ctx->pc = 0x183B18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x183B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_OneReadMb_0x183b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B1Cu; }
        else if (ctx->pc != 0x183B1Cu) { ctx->pc = 0x183B1Cu; }
    }
    if (ctx->pc != 0x183B1Cu) { return; }
    ctx->pc = 0x183B1Cu;
    // 0x183b1c: 0x200202d
    ctx->pc = 0x183b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b20: 0xc060fe8
    ctx->pc = 0x183B20u;
    SET_GPR_U32(ctx, 31, 0x183B28u);
    ctx->pc = 0x183B24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x183FA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_BiMakeMbTa_0x183fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B28u; }
        else if (ctx->pc != 0x183B28u) { ctx->pc = 0x183B28u; }
    }
    if (ctx->pc != 0x183B28u) { return; }
    ctx->pc = 0x183B28u;
    // 0x183b28: 0xdfbf0030
    ctx->pc = 0x183b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183b2c: 0xdfb10020
    ctx->pc = 0x183b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183b30: 0xdfb00010
    ctx->pc = 0x183b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183b34: 0x3e00008
    ctx->pc = 0x183B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183B38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183B3Cu;
}
