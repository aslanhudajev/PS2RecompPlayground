#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_vsync_proc
// Address: 0x16ca98 - 0x16cb1c
void adxm_vsync_proc_0x16ca98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_vsync_proc");


    ctx->pc = 0x16ca98u;

    // 0x16ca98: 0x27bdffe0
    ctx->pc = 0x16ca98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ca9c: 0xdf8281a8
    ctx->pc = 0x16ca9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934952)));
    // 0x16caa0: 0xffbf0010
    ctx->pc = 0x16caa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16caa4: 0x14400017
    ctx->pc = 0x16CAA4u;
    {
        const bool branch_taken_0x16caa4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16CAA8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x16caa4) {
            ctx->pc = 0x16CB04u;
            goto label_16cb04;
        }
    }
    ctx->pc = 0x16CAACu;
    // 0x16caac: 0x24100001
    ctx->pc = 0x16caacu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_16cab0:
    // 0x16cab0: 0xdf828150
    ctx->pc = 0x16cab0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934864)));
    // 0x16cab4: 0x64420001
    ctx->pc = 0x16cab4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)1);
    // 0x16cab8: 0xff828150
    ctx->pc = 0x16cab8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934864), GPR_U64(ctx, 2));
    // 0x16cabc: 0x8f838180
    ctx->pc = 0x16cabcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934912)));
    // 0x16cac0: 0x10600004
    ctx->pc = 0x16CAC0u;
    {
        const bool branch_taken_0x16cac0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x16cac0) {
            ctx->pc = 0x16CAD4u;
            goto label_16cad4;
        }
    }
    ctx->pc = 0x16CAC8u;
    // 0x16cac8: 0x8f848180
    ctx->pc = 0x16cac8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934912)));
    // 0x16cacc: 0xc05b358
    ctx->pc = 0x16CACCu;
    SET_GPR_U32(ctx, 31, 0x16CAD4u);
    ctx->pc = 0x16CD60u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SuspendThread_0x16cd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CAD4u; }
        else if (ctx->pc != 0x16CAD4u) { ctx->pc = 0x16CAD4u; }
    }
    if (ctx->pc != 0x16CAD4u) { return; }
    ctx->pc = 0x16CAD4u;
label_16cad4:
    // 0x16cad4: 0xaf90813c
    ctx->pc = 0x16cad4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934844), GPR_U32(ctx, 16));
    // 0x16cad8: 0xc05f8dc
    ctx->pc = 0x16CAD8u;
    SET_GPR_U32(ctx, 31, 0x16CAE0u);
    ctx->pc = 0x17E370u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrVsync_0x17e370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CAE0u; }
        else if (ctx->pc != 0x16CAE0u) { ctx->pc = 0x16CAE0u; }
    }
    if (ctx->pc != 0x16CAE0u) { return; }
    ctx->pc = 0x16CAE0u;
    // 0x16cae0: 0xaf80813c
    ctx->pc = 0x16cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934844), GPR_U32(ctx, 0));
    // 0x16cae4: 0x8f84817c
    ctx->pc = 0x16cae4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x16cae8: 0xc05b32a
    ctx->pc = 0x16CAE8u;
    SET_GPR_U32(ctx, 31, 0x16CAF0u);
    ctx->pc = 0x16CCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_WakeupThread_0x16cca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CAF0u; }
        else if (ctx->pc != 0x16CAF0u) { ctx->pc = 0x16CAF0u; }
    }
    if (ctx->pc != 0x16CAF0u) { return; }
    ctx->pc = 0x16CAF0u;
    // 0x16caf0: 0xc05b33e
    ctx->pc = 0x16CAF0u;
    SET_GPR_U32(ctx, 31, 0x16CAF8u);
    ctx->pc = 0x16CCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SleepThread_0x16ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CAF8u; }
        else if (ctx->pc != 0x16CAF8u) { ctx->pc = 0x16CAF8u; }
    }
    if (ctx->pc != 0x16CAF8u) { return; }
    ctx->pc = 0x16CAF8u;
    // 0x16caf8: 0xdf8281a8
    ctx->pc = 0x16caf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934952)));
    // 0x16cafc: 0x1040ffec
    ctx->pc = 0x16CAFCu;
    {
        const bool branch_taken_0x16cafc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16cafc) {
            ctx->pc = 0x16CAB0u;
            goto label_16cab0;
        }
    }
    ctx->pc = 0x16CB04u;
label_16cb04:
    // 0x16cb04: 0x24020001
    ctx->pc = 0x16cb04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cb08: 0xdfbf0010
    ctx->pc = 0x16cb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cb0c: 0xdfb00000
    ctx->pc = 0x16cb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cb10: 0xff8281b0
    ctx->pc = 0x16cb10u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934960), GPR_U64(ctx, 2));
    // 0x16cb14: 0x80551c8
    ctx->pc = 0x16CB14u;
    ctx->pc = 0x16CB18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x154720u;
    ExitDeleteThread_0x154720(rdram, ctx, runtime); return;
    ctx->pc = 0x16CB1Cu;
}
