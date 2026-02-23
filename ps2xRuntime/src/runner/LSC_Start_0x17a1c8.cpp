#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_Start
// Address: 0x17a1c8 - 0x17a238
void LSC_Start_0x17a1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_Start");


    ctx->pc = 0x17a1c8u;

    // 0x17a1c8: 0x27bdffd0
    ctx->pc = 0x17a1c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a1cc: 0xffb00010
    ctx->pc = 0x17a1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17a1d0: 0x80802d
    ctx->pc = 0x17a1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a1d4: 0x16000006
    ctx->pc = 0x17A1D4u;
    {
        const bool branch_taken_0x17a1d4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A1D8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x17a1d4) {
            ctx->pc = 0x17A1F0u;
            goto label_17a1f0;
        }
    }
    ctx->pc = 0x17A1DCu;
    // 0x17a1dc: 0x3c04002c
    ctx->pc = 0x17a1dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a1e0: 0xc05e9c6
    ctx->pc = 0x17A1E0u;
    SET_GPR_U32(ctx, 31, 0x17A1E8u);
    ctx->pc = 0x17A1E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949480));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A1E8u; }
        else if (ctx->pc != 0x17A1E8u) { ctx->pc = 0x17A1E8u; }
    }
    if (ctx->pc != 0x17A1E8u) { return; }
    ctx->pc = 0x17A1E8u;
    // 0x17a1e8: 0x10000010
    ctx->pc = 0x17A1E8u;
    {
        const bool branch_taken_0x17a1e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A1ECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x17a1e8) {
            ctx->pc = 0x17A22Cu;
            goto label_17a22c;
        }
    }
    ctx->pc = 0x17A1F0u;
label_17a1f0:
    // 0x17a1f0: 0xc05e9b4
    ctx->pc = 0x17A1F0u;
    SET_GPR_U32(ctx, 31, 0x17A1F8u);
    ctx->pc = 0x17A1F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A6D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_LockCrs_0x17a6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A1F8u; }
        else if (ctx->pc != 0x17A1F8u) { ctx->pc = 0x17A1F8u; }
    }
    if (ctx->pc != 0x17A1F8u) { return; }
    ctx->pc = 0x17A1F8u;
    // 0x17a1f8: 0x82020001
    ctx->pc = 0x17a1f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x17a1fc: 0x50400004
    ctx->pc = 0x17A1FCu;
    {
        const bool branch_taken_0x17a1fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17a1fc) {
            ctx->pc = 0x17A200u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x17A210u;
            goto label_17a210;
        }
    }
    ctx->pc = 0x17A204u;
    // 0x17a204: 0xc05e88e
    ctx->pc = 0x17A204u;
    SET_GPR_U32(ctx, 31, 0x17A20Cu);
    ctx->pc = 0x17A208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A238u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_Stop_0x17a238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A20Cu; }
        else if (ctx->pc != 0x17A20Cu) { ctx->pc = 0x17A20Cu; }
    }
    if (ctx->pc != 0x17A20Cu) { return; }
    ctx->pc = 0x17A20Cu;
    // 0x17a20c: 0x8e020024
    ctx->pc = 0x17a20cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_17a210:
    // 0x17a210: 0x1c400002
    ctx->pc = 0x17A210u;
    {
        const bool branch_taken_0x17a210 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x17A214u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x17a210) {
            ctx->pc = 0x17A21Cu;
            goto label_17a21c;
        }
    }
    ctx->pc = 0x17A218u;
    // 0x17a218: 0x24020001
    ctx->pc = 0x17a218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_17a21c:
    // 0x17a21c: 0xa2020001
    ctx->pc = 0x17a21cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a220: 0xc05e9bc
    ctx->pc = 0x17A220u;
    SET_GPR_U32(ctx, 31, 0x17A228u);
    ctx->pc = 0x17A224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_UnlockCrs_0x17a6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A228u; }
        else if (ctx->pc != 0x17A228u) { ctx->pc = 0x17A228u; }
    }
    if (ctx->pc != 0x17A228u) { return; }
    ctx->pc = 0x17A228u;
    // 0x17a228: 0xdfbf0020
    ctx->pc = 0x17a228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17a22c:
    // 0x17a22c: 0xdfb00010
    ctx->pc = 0x17a22cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a230: 0x3e00008
    ctx->pc = 0x17A230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A234u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A1F0u: goto label_17a1f0;
            case 0x17A210u: goto label_17a210;
            case 0x17A21Cu: goto label_17a21c;
            case 0x17A22Cu: goto label_17a22c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A238u;
}
