#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_STAT_005__15CamPathMgrClassFv
// Address: 0x1cc160 - 0x1cc1b8
void entryExec_STAT_005__15CamPathMgrClassFv_0x1cc160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_STAT_005__15CamPathMgrClassFv");


    ctx->pc = 0x1cc160u;

    // 0x1cc160: 0x27bdffe0
    ctx->pc = 0x1cc160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc164: 0x7fbf0010
    ctx->pc = 0x1cc164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1cc168: 0x7fb00000
    ctx->pc = 0x1cc168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc16c: 0x3c010030
    ctx->pc = 0x1cc16cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc170: 0x8c227c70
    ctx->pc = 0x1cc170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 31856)));
    // 0x1cc174: 0x14400008
    ctx->pc = 0x1CC174u;
    {
        const bool branch_taken_0x1cc174 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CC178u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cc174) {
            ctx->pc = 0x1CC198u;
            goto label_1cc198;
        }
    }
    ctx->pc = 0x1CC17Cu;
    // 0x1cc17c: 0x3c010030
    ctx->pc = 0x1cc17cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc180: 0x8c267c60
    ctx->pc = 0x1cc180u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 31840)));
    // 0x1cc184: 0x3c010050
    ctx->pc = 0x1cc184u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1cc188: 0x8c240c74
    ctx->pc = 0x1cc188u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3188)));
    // 0x1cc18c: 0x3c010030
    ctx->pc = 0x1cc18cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc190: 0xc05aeba
    ctx->pc = 0x1CC190u;
    SET_GPR_U32(ctx, 31, 0x1CC198u);
    ctx->pc = 0x1CC194u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 31852)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC198u; }
        else if (ctx->pc != 0x1CC198u) { ctx->pc = 0x1CC198u; }
    }
    if (ctx->pc != 0x1CC198u) { return; }
    ctx->pc = 0x1CC198u;
label_1cc198:
    // 0x1cc198: 0x8e030000
    ctx->pc = 0x1cc198u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cc19c: 0x24040002
    ctx->pc = 0x1cc19cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc1a0: 0x24020001
    ctx->pc = 0x1cc1a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc1a4: 0xac64000c
    ctx->pc = 0x1cc1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x1cc1a8: 0x7bbf0010
    ctx->pc = 0x1cc1a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc1ac: 0x7bb00000
    ctx->pc = 0x1cc1acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc1b0: 0x3e00008
    ctx->pc = 0x1CC1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC1B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC198u: goto label_1cc198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC1B8u;
}
