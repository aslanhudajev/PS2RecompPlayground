#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_usridle_proc
// Address: 0x16cbd0 - 0x16cc58
void adxm_usridle_proc_0x16cbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_usridle_proc");


    ctx->pc = 0x16cbd0u;

    // 0x16cbd0: 0x27bdffd0
    ctx->pc = 0x16cbd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16cbd4: 0xdf8281c8
    ctx->pc = 0x16cbd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934984)));
    // 0x16cbd8: 0xffbf0020
    ctx->pc = 0x16cbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16cbdc: 0xffb10010
    ctx->pc = 0x16cbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16cbe0: 0x14400016
    ctx->pc = 0x16CBE0u;
    {
        const bool branch_taken_0x16cbe0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16CBE4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x16cbe0) {
            ctx->pc = 0x16CC3Cu;
            goto label_16cc3c;
        }
    }
    ctx->pc = 0x16CBE8u;
    // 0x16cbe8: 0x24110001
    ctx->pc = 0x16cbe8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cbec: 0x0
    ctx->pc = 0x16cbecu;
    // NOP
label_16cbf0:
    // 0x16cbf0: 0xdf828160
    ctx->pc = 0x16cbf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934880)));
    // 0x16cbf4: 0x64420001
    ctx->pc = 0x16cbf4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)1);
    // 0x16cbf8: 0xff828160
    ctx->pc = 0x16cbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934880), GPR_U64(ctx, 2));
    // 0x16cbfc: 0xc05f90c
    ctx->pc = 0x16CBFCu;
    SET_GPR_U32(ctx, 31, 0x16CC04u);
    ctx->pc = 0x17E430u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrUsrIdle_0x17e430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC04u; }
        else if (ctx->pc != 0x16CC04u) { ctx->pc = 0x16CC04u; }
    }
    if (ctx->pc != 0x16CC04u) { return; }
    ctx->pc = 0x16CC04u;
    // 0x16cc04: 0x40802d
    ctx->pc = 0x16cc04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc08: 0x8f828138
    ctx->pc = 0x16cc08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934840)));
    // 0x16cc0c: 0x14510004
    ctx->pc = 0x16CC0Cu;
    {
        const bool branch_taken_0x16cc0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x16cc0c) {
            ctx->pc = 0x16CC20u;
            goto label_16cc20;
        }
    }
    ctx->pc = 0x16CC14u;
    // 0x16cc14: 0xaf808138
    ctx->pc = 0x16cc14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934840), GPR_U32(ctx, 0));
    // 0x16cc18: 0xc05b33e
    ctx->pc = 0x16CC18u;
    SET_GPR_U32(ctx, 31, 0x16CC20u);
    ctx->pc = 0x16CCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SleepThread_0x16ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC20u; }
        else if (ctx->pc != 0x16CC20u) { ctx->pc = 0x16CC20u; }
    }
    if (ctx->pc != 0x16CC20u) { return; }
    ctx->pc = 0x16CC20u;
label_16cc20:
    // 0x16cc20: 0x16000003
    ctx->pc = 0x16CC20u;
    {
        const bool branch_taken_0x16cc20 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x16cc20) {
            ctx->pc = 0x16CC30u;
            goto label_16cc30;
        }
    }
    ctx->pc = 0x16CC28u;
    // 0x16cc28: 0xc05b33e
    ctx->pc = 0x16CC28u;
    SET_GPR_U32(ctx, 31, 0x16CC30u);
    ctx->pc = 0x16CCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SleepThread_0x16ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC30u; }
        else if (ctx->pc != 0x16CC30u) { ctx->pc = 0x16CC30u; }
    }
    if (ctx->pc != 0x16CC30u) { return; }
    ctx->pc = 0x16CC30u;
label_16cc30:
    // 0x16cc30: 0xdf8281c8
    ctx->pc = 0x16cc30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934984)));
    // 0x16cc34: 0x1040ffee
    ctx->pc = 0x16CC34u;
    {
        const bool branch_taken_0x16cc34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16cc34) {
            ctx->pc = 0x16CBF0u;
            goto label_16cbf0;
        }
    }
    ctx->pc = 0x16CC3Cu;
label_16cc3c:
    // 0x16cc3c: 0x24020001
    ctx->pc = 0x16cc3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cc40: 0xdfbf0020
    ctx->pc = 0x16cc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16cc44: 0xdfb10010
    ctx->pc = 0x16cc44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cc48: 0xdfb00000
    ctx->pc = 0x16cc48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cc4c: 0xff8281d0
    ctx->pc = 0x16cc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934992), GPR_U64(ctx, 2));
    // 0x16cc50: 0x80551c8
    ctx->pc = 0x16CC50u;
    ctx->pc = 0x16CC54u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x154720u;
    ExitDeleteThread_0x154720(rdram, ctx, runtime); return;
    ctx->pc = 0x16CC58u;
}
