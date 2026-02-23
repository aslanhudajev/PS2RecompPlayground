#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJE_SetConfigSfa
// Address: 0x1703f8 - 0x170454
void ADXSJE_SetConfigSfa_0x1703f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJE_SetConfigSfa");


    ctx->pc = 0x1703f8u;

    // 0x1703f8: 0x27bdffc0
    ctx->pc = 0x1703f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1703fc: 0xffb00000
    ctx->pc = 0x1703fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170400: 0x80802d
    ctx->pc = 0x170400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170404: 0xffb20020
    ctx->pc = 0x170404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x170408: 0xffb10010
    ctx->pc = 0x170408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17040c: 0xe0902d
    ctx->pc = 0x17040cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170410: 0xffbf0030
    ctx->pc = 0x170410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x170414: 0xc05c0ce
    ctx->pc = 0x170414u;
    SET_GPR_U32(ctx, 31, 0x17041Cu);
    ctx->pc = 0x170418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170338u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJE_SetNumChan_0x170338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17041Cu; }
        else if (ctx->pc != 0x17041Cu) { ctx->pc = 0x17041Cu; }
    }
    if (ctx->pc != 0x17041Cu) { return; }
    ctx->pc = 0x17041Cu;
    // 0x17041c: 0x220282d
    ctx->pc = 0x17041cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170420: 0xc05c0ca
    ctx->pc = 0x170420u;
    SET_GPR_U32(ctx, 31, 0x170428u);
    ctx->pc = 0x170424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170328u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJE_SetSfreq_0x170328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170428u; }
        else if (ctx->pc != 0x170428u) { ctx->pc = 0x170428u; }
    }
    if (ctx->pc != 0x170428u) { return; }
    ctx->pc = 0x170428u;
    // 0x170428: 0x240282d
    ctx->pc = 0x170428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17042c: 0xc05c0ec
    ctx->pc = 0x17042Cu;
    SET_GPR_U32(ctx, 31, 0x170434u);
    ctx->pc = 0x170430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1703B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJE_SetTotalNumSmpl_0x1703b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170434u; }
        else if (ctx->pc != 0x170434u) { ctx->pc = 0x170434u; }
    }
    if (ctx->pc != 0x170434u) { return; }
    ctx->pc = 0x170434u;
    // 0x170434: 0x200202d
    ctx->pc = 0x170434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170438: 0xdfbf0030
    ctx->pc = 0x170438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17043c: 0xdfb20020
    ctx->pc = 0x17043cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170440: 0x2405011c
    ctx->pc = 0x170440u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 284));
    // 0x170444: 0xdfb10010
    ctx->pc = 0x170444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170448: 0xdfb00000
    ctx->pc = 0x170448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17044c: 0x805c0cc
    ctx->pc = 0x17044Cu;
    ctx->pc = 0x170450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x170330u;
    ADXSJE_SetHdInfoSize_0x170330(rdram, ctx, runtime); return;
    ctx->pc = 0x170454u;
}
