#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVVLC_Init
// Address: 0x189c38 - 0x189ca0
void MPVVLC_Init_0x189c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVVLC_Init");


    ctx->pc = 0x189c38u;

    // 0x189c38: 0x27bdffe0
    ctx->pc = 0x189c38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189c3c: 0xffb00000
    ctx->pc = 0x189c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x189c40: 0xffbf0010
    ctx->pc = 0x189c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x189c44: 0xc062728
    ctx->pc = 0x189C44u;
    SET_GPR_U32(ctx, 31, 0x189C4Cu);
    ctx->pc = 0x189C48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x189CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvvlc_InitMbai_0x189ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C4Cu; }
        else if (ctx->pc != 0x189C4Cu) { ctx->pc = 0x189C4Cu; }
    }
    if (ctx->pc != 0x189C4Cu) { return; }
    ctx->pc = 0x189C4Cu;
    // 0x189c4c: 0xc062a2e
    ctx->pc = 0x189C4Cu;
    SET_GPR_U32(ctx, 31, 0x189C54u);
    ctx->pc = 0x18A8B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvvlc_InitMbType_0x18a8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C54u; }
        else if (ctx->pc != 0x189C54u) { ctx->pc = 0x189C54u; }
    }
    if (ctx->pc != 0x189C54u) { return; }
    ctx->pc = 0x189C54u;
    // 0x189c54: 0xc062afc
    ctx->pc = 0x189C54u;
    SET_GPR_U32(ctx, 31, 0x189C5Cu);
    ctx->pc = 0x18ABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvvlc_InitMotion_0x18abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C5Cu; }
        else if (ctx->pc != 0x189C5Cu) { ctx->pc = 0x189C5Cu; }
    }
    if (ctx->pc != 0x189C5Cu) { return; }
    ctx->pc = 0x189C5Cu;
    // 0x189c5c: 0xc062be8
    ctx->pc = 0x189C5Cu;
    SET_GPR_U32(ctx, 31, 0x189C64u);
    ctx->pc = 0x18AFA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvvlc_InitCbp_0x18afa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C64u; }
        else if (ctx->pc != 0x189C64u) { ctx->pc = 0x189C64u; }
    }
    if (ctx->pc != 0x189C64u) { return; }
    ctx->pc = 0x189C64u;
    // 0x189c64: 0xc062e7a
    ctx->pc = 0x189C64u;
    SET_GPR_U32(ctx, 31, 0x189C6Cu);
    ctx->pc = 0x18B9E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvvlc_InitDcSiz_0x18b9e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C6Cu; }
        else if (ctx->pc != 0x189C6Cu) { ctx->pc = 0x189C6Cu; }
    }
    if (ctx->pc != 0x189C6Cu) { return; }
    ctx->pc = 0x189C6Cu;
    // 0x189c6c: 0xc063032
    ctx->pc = 0x189C6Cu;
    SET_GPR_U32(ctx, 31, 0x189C74u);
    ctx->pc = 0x18C0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvvlc_InitRunLevel_0x18c0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C74u; }
        else if (ctx->pc != 0x189C74u) { ctx->pc = 0x189C74u; }
    }
    if (ctx->pc != 0x189C74u) { return; }
    ctx->pc = 0x189C74u;
    // 0x189c74: 0xc063034
    ctx->pc = 0x189C74u;
    SET_GPR_U32(ctx, 31, 0x189C7Cu);
    ctx->pc = 0x18C0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvvlc_SetDflPtr_0x18c0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C7Cu; }
        else if (ctx->pc != 0x189C7Cu) { ctx->pc = 0x189C7Cu; }
    }
    if (ctx->pc != 0x189C7Cu) { return; }
    ctx->pc = 0x189C7Cu;
    // 0x189c7c: 0x12000005
    ctx->pc = 0x189C7Cu;
    {
        const bool branch_taken_0x189c7c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x189C80u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x189c7c) {
            ctx->pc = 0x189C94u;
            goto label_189c94;
        }
    }
    ctx->pc = 0x189C84u;
    // 0x189c84: 0x200202d
    ctx->pc = 0x189c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c88: 0xdfb00000
    ctx->pc = 0x189c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189c8c: 0x806309e
    ctx->pc = 0x189C8Cu;
    ctx->pc = 0x189C90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x18C278u;
    mpvvlc_SetupVlc_0x18c278(rdram, ctx, runtime); return;
    ctx->pc = 0x189C94u;
label_189c94:
    // 0x189c94: 0xdfb00000
    ctx->pc = 0x189c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189c98: 0x3e00008
    ctx->pc = 0x189C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189C9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189C94u: goto label_189c94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189CA0u;
}
