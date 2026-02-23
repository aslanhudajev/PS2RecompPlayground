#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPV_AddRead
// Address: 0x198ab8 - 0x198b08
void SFMPV_AddRead_0x198ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPV_AddRead");


    ctx->pc = 0x198ab8u;

    // 0x198ab8: 0x27bdffc0
    ctx->pc = 0x198ab8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x198abc: 0xffb00010
    ctx->pc = 0x198abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x198ac0: 0x80802d
    ctx->pc = 0x198ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ac4: 0xffb10020
    ctx->pc = 0x198ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x198ac8: 0xa0882d
    ctx->pc = 0x198ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198acc: 0xffbf0030
    ctx->pc = 0x198accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x198ad0: 0xc064f3a
    ctx->pc = 0x198AD0u;
    SET_GPR_U32(ctx, 31, 0x198AD8u);
    ctx->pc = 0x198AD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AD8u; }
        else if (ctx->pc != 0x198AD8u) { ctx->pc = 0x198AD8u; }
    }
    if (ctx->pc != 0x198AD8u) { return; }
    ctx->pc = 0x198AD8u;
    // 0x198ad8: 0x220282d
    ctx->pc = 0x198ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198adc: 0xc0662c2
    ctx->pc = 0x198ADCu;
    SET_GPR_U32(ctx, 31, 0x198AE4u);
    ctx->pc = 0x198AE0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198B08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_AddReadSub_0x198b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AE4u; }
        else if (ctx->pc != 0x198AE4u) { ctx->pc = 0x198AE4u; }
    }
    if (ctx->pc != 0x198AE4u) { return; }
    ctx->pc = 0x198AE4u;
    // 0x198ae4: 0x40802d
    ctx->pc = 0x198ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ae8: 0xc064f44
    ctx->pc = 0x198AE8u;
    SET_GPR_U32(ctx, 31, 0x198AF0u);
    ctx->pc = 0x198AECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AF0u; }
        else if (ctx->pc != 0x198AF0u) { ctx->pc = 0x198AF0u; }
    }
    if (ctx->pc != 0x198AF0u) { return; }
    ctx->pc = 0x198AF0u;
    // 0x198af0: 0x200102d
    ctx->pc = 0x198af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198af4: 0xdfbf0030
    ctx->pc = 0x198af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198af8: 0xdfb10020
    ctx->pc = 0x198af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198afc: 0xdfb00010
    ctx->pc = 0x198afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198b00: 0x3e00008
    ctx->pc = 0x198B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198B04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198B08u;
}
