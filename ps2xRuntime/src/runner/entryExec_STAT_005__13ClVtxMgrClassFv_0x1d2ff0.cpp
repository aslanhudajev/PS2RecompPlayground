#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_STAT_005__13ClVtxMgrClassFv
// Address: 0x1d2ff0 - 0x1d303c
void entryExec_STAT_005__13ClVtxMgrClassFv_0x1d2ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_STAT_005__13ClVtxMgrClassFv");


    ctx->pc = 0x1d2ff0u;

    // 0x1d2ff0: 0x27bdffe0
    ctx->pc = 0x1d2ff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d2ff4: 0x7fbf0010
    ctx->pc = 0x1d2ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d2ff8: 0x7fb00000
    ctx->pc = 0x1d2ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2ffc: 0x3c010030
    ctx->pc = 0x1d2ffcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1d3000: 0x8c267c78
    ctx->pc = 0x1d3000u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 31864)));
    // 0x1d3004: 0x70808628
    ctx->pc = 0x1d3004u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d3008: 0x3c010050
    ctx->pc = 0x1d3008u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d300c: 0x8c240c88
    ctx->pc = 0x1d300cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3208)));
    // 0x1d3010: 0x3c010030
    ctx->pc = 0x1d3010u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1d3014: 0xc05aeba
    ctx->pc = 0x1D3014u;
    SET_GPR_U32(ctx, 31, 0x1D301Cu);
    ctx->pc = 0x1D3018u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 31872)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D301Cu; }
        else if (ctx->pc != 0x1D301Cu) { ctx->pc = 0x1D301Cu; }
    }
    if (ctx->pc != 0x1D301Cu) { return; }
    ctx->pc = 0x1D301Cu;
    // 0x1d301c: 0x8e030000
    ctx->pc = 0x1d301cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3020: 0x24040002
    ctx->pc = 0x1d3020u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3024: 0x24020001
    ctx->pc = 0x1d3024u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3028: 0xac64000c
    ctx->pc = 0x1d3028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x1d302c: 0x7bbf0010
    ctx->pc = 0x1d302cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3030: 0x7bb00000
    ctx->pc = 0x1d3030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3034: 0x3e00008
    ctx->pc = 0x1D3034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3038u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D303Cu;
}
