#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFCON_UpdateConcatTime
// Address: 0x192aa0 - 0x192b28
void SFCON_UpdateConcatTime_0x192aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFCON_UpdateConcatTime");


    ctx->pc = 0x192aa0u;

    // 0x192aa0: 0x27bdffb0
    ctx->pc = 0x192aa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x192aa4: 0xffb10020
    ctx->pc = 0x192aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x192aa8: 0x80882d
    ctx->pc = 0x192aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192aac: 0xffb20030
    ctx->pc = 0x192aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x192ab0: 0xa0902d
    ctx->pc = 0x192ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ab4: 0xffb00010
    ctx->pc = 0x192ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x192ab8: 0xffbf0040
    ctx->pc = 0x192ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x192abc: 0xc064f3a
    ctx->pc = 0x192ABCu;
    SET_GPR_U32(ctx, 31, 0x192AC4u);
    ctx->pc = 0x192AC0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192AC4u; }
        else if (ctx->pc != 0x192AC4u) { ctx->pc = 0x192AC4u; }
    }
    if (ctx->pc != 0x192AC4u) { return; }
    ctx->pc = 0x192AC4u;
    // 0x192ac4: 0x26300a94
    ctx->pc = 0x192ac4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 2708));
    // 0x192ac8: 0x8e03011c
    ctx->pc = 0x192ac8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x192acc: 0x2405ffff
    ctx->pc = 0x192accu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192ad0: 0x8e060118
    ctx->pc = 0x192ad0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x192ad4: 0x3a0202d
    ctx->pc = 0x192ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ad8: 0x24630001
    ctx->pc = 0x192ad8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x192adc: 0xa3282a
    ctx->pc = 0x192adcu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x192ae0: 0x2462001f
    ctx->pc = 0x192ae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 31));
    // 0x192ae4: 0x65100b
    ctx->pc = 0x192ae4u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x192ae8: 0xd23021
    ctx->pc = 0x192ae8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x192aec: 0x21143
    ctx->pc = 0x192aecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x192af0: 0xae060118
    ctx->pc = 0x192af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 6));
    // 0x192af4: 0x21140
    ctx->pc = 0x192af4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x192af8: 0x621023
    ctx->pc = 0x192af8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x192afc: 0x21080
    ctx->pc = 0x192afcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x192b00: 0x2228821
    ctx->pc = 0x192b00u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192b04: 0xae260bb4
    ctx->pc = 0x192b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2996), GPR_U32(ctx, 6));
    // 0x192b08: 0xc064f44
    ctx->pc = 0x192B08u;
    SET_GPR_U32(ctx, 31, 0x192B10u);
    ctx->pc = 0x192B0Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B10u; }
        else if (ctx->pc != 0x192B10u) { ctx->pc = 0x192B10u; }
    }
    if (ctx->pc != 0x192B10u) { return; }
    ctx->pc = 0x192B10u;
    // 0x192b10: 0xdfbf0040
    ctx->pc = 0x192b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192b14: 0xdfb20030
    ctx->pc = 0x192b14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192b18: 0xdfb10020
    ctx->pc = 0x192b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192b1c: 0xdfb00010
    ctx->pc = 0x192b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192b20: 0x3e00008
    ctx->pc = 0x192B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192B24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192B28u;
}
