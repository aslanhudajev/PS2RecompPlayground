#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXM_ExecSvrAll
// Address: 0x16d100 - 0x16d140
void ADXM_ExecSvrAll_0x16d100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXM_ExecSvrAll");


    ctx->pc = 0x16d100u;

    // 0x16d100: 0x27bdfff0
    ctx->pc = 0x16d100u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d104: 0xffbf0000
    ctx->pc = 0x16d104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d108: 0xc05f8d4
    ctx->pc = 0x16D108u;
    SET_GPR_U32(ctx, 31, 0x16D110u);
    ctx->pc = 0x17E350u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrUsrVsync_0x17e350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D110u; }
        else if (ctx->pc != 0x16D110u) { ctx->pc = 0x16D110u; }
    }
    if (ctx->pc != 0x16D110u) { return; }
    ctx->pc = 0x16D110u;
    // 0x16d110: 0xc05f8dc
    ctx->pc = 0x16D110u;
    SET_GPR_U32(ctx, 31, 0x16D118u);
    ctx->pc = 0x17E370u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrVsync_0x17e370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D118u; }
        else if (ctx->pc != 0x16D118u) { ctx->pc = 0x16D118u; }
    }
    if (ctx->pc != 0x16D118u) { return; }
    ctx->pc = 0x16D118u;
    // 0x16d118: 0xc05f8fc
    ctx->pc = 0x16D118u;
    SET_GPR_U32(ctx, 31, 0x16D120u);
    ctx->pc = 0x17E3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrMain_0x17e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D120u; }
        else if (ctx->pc != 0x16D120u) { ctx->pc = 0x16D120u; }
    }
    if (ctx->pc != 0x16D120u) { return; }
    ctx->pc = 0x16D120u;
    // 0x16d120: 0xc05f904
    ctx->pc = 0x16D120u;
    SET_GPR_U32(ctx, 31, 0x16D128u);
    ctx->pc = 0x17E410u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrMwIdle_0x17e410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D128u; }
        else if (ctx->pc != 0x16D128u) { ctx->pc = 0x16D128u; }
    }
    if (ctx->pc != 0x16D128u) { return; }
    ctx->pc = 0x16D128u;
    // 0x16d128: 0xc05f90c
    ctx->pc = 0x16D128u;
    SET_GPR_U32(ctx, 31, 0x16D130u);
    ctx->pc = 0x17E430u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrUsrIdle_0x17e430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D130u; }
        else if (ctx->pc != 0x16D130u) { ctx->pc = 0x16D130u; }
    }
    if (ctx->pc != 0x16D130u) { return; }
    ctx->pc = 0x16D130u;
    // 0x16d130: 0xdfbf0000
    ctx->pc = 0x16d130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d134: 0x102d
    ctx->pc = 0x16d134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d138: 0x3e00008
    ctx->pc = 0x16D138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D13Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D140u;
}
