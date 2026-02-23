#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: StartOverLap__15OverLapCtrlTaskFi
// Address: 0x2017e0 - 0x201850
void StartOverLap__15OverLapCtrlTaskFi_0x2017e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("StartOverLap__15OverLapCtrlTaskFi");


    ctx->pc = 0x2017e0u;

    // 0x2017e0: 0x27bdffc0
    ctx->pc = 0x2017e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2017e4: 0x7fbf0010
    ctx->pc = 0x2017e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2017e8: 0x7fb00000
    ctx->pc = 0x2017e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2017ec: 0x70808628
    ctx->pc = 0x2017ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2017f0: 0x26020010
    ctx->pc = 0x2017f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 16));
    // 0x2017f4: 0xafa20020
    ctx->pc = 0x2017f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2017f8: 0x2402000a
    ctx->pc = 0x2017f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2017fc: 0xa7a20024
    ctx->pc = 0x2017fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x201800: 0x24020280
    ctx->pc = 0x201800u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 640));
    // 0x201804: 0xa7a20026
    ctx->pc = 0x201804u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x201808: 0x24020100
    ctx->pc = 0x201808u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x20180c: 0xa7a20028
    ctx->pc = 0x20180cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x201810: 0x24020002
    ctx->pc = 0x201810u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x201814: 0xa7a2002a
    ctx->pc = 0x201814u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x201818: 0x24020030
    ctx->pc = 0x201818u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x20181c: 0xa7a2002c
    ctx->pc = 0x20181cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x201820: 0xafa50030
    ctx->pc = 0x201820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x201824: 0x2402ffff
    ctx->pc = 0x201824u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201828: 0xafa20034
    ctx->pc = 0x201828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x20182c: 0x27a40020
    ctx->pc = 0x20182cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x201830: 0xc06c44c
    ctx->pc = 0x201830u;
    SET_GPR_U32(ctx, 31, 0x201838u);
    ctx->pc = 0x201834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    ctx->pc = 0x1B1130u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRendtxCreateEnv_0x1b1130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201838u; }
        else if (ctx->pc != 0x201838u) { ctx->pc = 0x201838u; }
    }
    if (ctx->pc != 0x201838u) { return; }
    ctx->pc = 0x201838u;
    // 0x201838: 0x24030001
    ctx->pc = 0x201838u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20183c: 0xae030004
    ctx->pc = 0x20183cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x201840: 0x7bbf0010
    ctx->pc = 0x201840u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201844: 0x7bb00000
    ctx->pc = 0x201844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201848: 0x3e00008
    ctx->pc = 0x201848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20184Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201850u;
}
