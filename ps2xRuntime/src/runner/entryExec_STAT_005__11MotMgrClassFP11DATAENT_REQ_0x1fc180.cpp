#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_STAT_005__11MotMgrClassFP11DATAENT_REQ
// Address: 0x1fc180 - 0x1fc1d4
void entryExec_STAT_005__11MotMgrClassFP11DATAENT_REQ_0x1fc180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_STAT_005__11MotMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fc180u;

    // 0x1fc180: 0x27bdffe0
    ctx->pc = 0x1fc180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc184: 0x7fbf0010
    ctx->pc = 0x1fc184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fc188: 0x7fb00000
    ctx->pc = 0x1fc188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fc18c: 0x3c010052
    ctx->pc = 0x1fc18cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc190: 0x8c229434
    ctx->pc = 0x1fc190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939700)));
    // 0x1fc194: 0x14400008
    ctx->pc = 0x1FC194u;
    {
        const bool branch_taken_0x1fc194 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FC198u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fc194) {
            ctx->pc = 0x1FC1B8u;
            goto label_1fc1b8;
        }
    }
    ctx->pc = 0x1FC19Cu;
    // 0x1fc19c: 0x3c010052
    ctx->pc = 0x1fc19cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc1a0: 0x8c269420
    ctx->pc = 0x1fc1a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294939680)));
    // 0x1fc1a4: 0x3c010050
    ctx->pc = 0x1fc1a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fc1a8: 0x8c240c70
    ctx->pc = 0x1fc1a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3184)));
    // 0x1fc1ac: 0x3c010052
    ctx->pc = 0x1fc1acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc1b0: 0xc05aeba
    ctx->pc = 0x1FC1B0u;
    SET_GPR_U32(ctx, 31, 0x1FC1B8u);
    ctx->pc = 0x1FC1B4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294939696)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC1B8u; }
        else if (ctx->pc != 0x1FC1B8u) { ctx->pc = 0x1FC1B8u; }
    }
    if (ctx->pc != 0x1FC1B8u) { return; }
    ctx->pc = 0x1FC1B8u;
label_1fc1b8:
    // 0x1fc1b8: 0x24020002
    ctx->pc = 0x1fc1b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc1bc: 0xae02000c
    ctx->pc = 0x1fc1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1fc1c0: 0x7bbf0010
    ctx->pc = 0x1fc1c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc1c4: 0x7bb00000
    ctx->pc = 0x1fc1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc1c8: 0x24020001
    ctx->pc = 0x1fc1c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc1cc: 0x3e00008
    ctx->pc = 0x1FC1CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC1D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FC1B8u: goto label_1fc1b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FC1D4u;
}
