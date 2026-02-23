#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_mwidle_proc
// Address: 0x16cb20 - 0x16cbcc
void adxm_mwidle_proc_0x16cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_mwidle_proc");


    ctx->pc = 0x16cb20u;

    // 0x16cb20: 0x27bdffd0
    ctx->pc = 0x16cb20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16cb24: 0xdf8281b8
    ctx->pc = 0x16cb24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934968)));
    // 0x16cb28: 0xffbf0020
    ctx->pc = 0x16cb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16cb2c: 0xffb10010
    ctx->pc = 0x16cb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16cb30: 0x1440001f
    ctx->pc = 0x16CB30u;
    {
        const bool branch_taken_0x16cb30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16CB34u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x16cb30) {
            ctx->pc = 0x16CBB0u;
            goto label_16cbb0;
        }
    }
    ctx->pc = 0x16CB38u;
    // 0x16cb38: 0x24110001
    ctx->pc = 0x16cb38u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cb3c: 0x0
    ctx->pc = 0x16cb3cu;
    // NOP
label_16cb40:
    // 0x16cb40: 0xdf828158
    ctx->pc = 0x16cb40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934872)));
    // 0x16cb44: 0x64420001
    ctx->pc = 0x16cb44u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)1);
    // 0x16cb48: 0xff828158
    ctx->pc = 0x16cb48u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934872), GPR_U64(ctx, 2));
    // 0x16cb4c: 0xc05f904
    ctx->pc = 0x16CB4Cu;
    SET_GPR_U32(ctx, 31, 0x16CB54u);
    ctx->pc = 0x17E410u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrMwIdle_0x17e410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CB54u; }
        else if (ctx->pc != 0x16CB54u) { ctx->pc = 0x16CB54u; }
    }
    if (ctx->pc != 0x16CB54u) { return; }
    ctx->pc = 0x16CB54u;
    // 0x16cb54: 0x40802d
    ctx->pc = 0x16cb54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cb58: 0x8f828138
    ctx->pc = 0x16cb58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934840)));
    // 0x16cb5c: 0x14510004
    ctx->pc = 0x16CB5Cu;
    {
        const bool branch_taken_0x16cb5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x16cb5c) {
            ctx->pc = 0x16CB70u;
            goto label_16cb70;
        }
    }
    ctx->pc = 0x16CB64u;
    // 0x16cb64: 0xaf808138
    ctx->pc = 0x16cb64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934840), GPR_U32(ctx, 0));
    // 0x16cb68: 0xc05b33e
    ctx->pc = 0x16CB68u;
    SET_GPR_U32(ctx, 31, 0x16CB70u);
    ctx->pc = 0x16CCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SleepThread_0x16ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CB70u; }
        else if (ctx->pc != 0x16CB70u) { ctx->pc = 0x16CB70u; }
    }
    if (ctx->pc != 0x16CB70u) { return; }
    ctx->pc = 0x16CB70u;
label_16cb70:
    // 0x16cb70: 0x1600000c
    ctx->pc = 0x16CB70u;
    {
        const bool branch_taken_0x16cb70 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x16cb70) {
            ctx->pc = 0x16CBA4u;
            goto label_16cba4;
        }
    }
    ctx->pc = 0x16CB78u;
    // 0x16cb78: 0x8f848184
    ctx->pc = 0x16cb78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16cb7c: 0xc05b340
    ctx->pc = 0x16CB7Cu;
    SET_GPR_U32(ctx, 31, 0x16CB84u);
    ctx->pc = 0x16CD00u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_ResumeThread_0x16cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CB84u; }
        else if (ctx->pc != 0x16CB84u) { ctx->pc = 0x16CB84u; }
    }
    if (ctx->pc != 0x16CB84u) { return; }
    ctx->pc = 0x16CB84u;
    // 0x16cb84: 0x8f838184
    ctx->pc = 0x16cb84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16cb88: 0x14430004
    ctx->pc = 0x16CB88u;
    {
        const bool branch_taken_0x16cb88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x16cb88) {
            ctx->pc = 0x16CB9Cu;
            goto label_16cb9c;
        }
    }
    ctx->pc = 0x16CB90u;
    // 0x16cb90: 0x8f848184
    ctx->pc = 0x16cb90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16cb94: 0xc05b32a
    ctx->pc = 0x16CB94u;
    SET_GPR_U32(ctx, 31, 0x16CB9Cu);
    ctx->pc = 0x16CCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_WakeupThread_0x16cca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CB9Cu; }
        else if (ctx->pc != 0x16CB9Cu) { ctx->pc = 0x16CB9Cu; }
    }
    if (ctx->pc != 0x16CB9Cu) { return; }
    ctx->pc = 0x16CB9Cu;
label_16cb9c:
    // 0x16cb9c: 0xc05b33e
    ctx->pc = 0x16CB9Cu;
    SET_GPR_U32(ctx, 31, 0x16CBA4u);
    ctx->pc = 0x16CCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SleepThread_0x16ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CBA4u; }
        else if (ctx->pc != 0x16CBA4u) { ctx->pc = 0x16CBA4u; }
    }
    if (ctx->pc != 0x16CBA4u) { return; }
    ctx->pc = 0x16CBA4u;
label_16cba4:
    // 0x16cba4: 0xdf8281b8
    ctx->pc = 0x16cba4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934968)));
    // 0x16cba8: 0x1040ffe5
    ctx->pc = 0x16CBA8u;
    {
        const bool branch_taken_0x16cba8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16cba8) {
            ctx->pc = 0x16CB40u;
            goto label_16cb40;
        }
    }
    ctx->pc = 0x16CBB0u;
label_16cbb0:
    // 0x16cbb0: 0x24020001
    ctx->pc = 0x16cbb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cbb4: 0xdfbf0020
    ctx->pc = 0x16cbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16cbb8: 0xdfb10010
    ctx->pc = 0x16cbb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cbbc: 0xdfb00000
    ctx->pc = 0x16cbbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cbc0: 0xff8281c0
    ctx->pc = 0x16cbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934976), GPR_U64(ctx, 2));
    // 0x16cbc4: 0x80551c8
    ctx->pc = 0x16CBC4u;
    ctx->pc = 0x16CBC8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x154720u;
    ExitDeleteThread_0x154720(rdram, ctx, runtime); return;
    ctx->pc = 0x16CBCCu;
}
