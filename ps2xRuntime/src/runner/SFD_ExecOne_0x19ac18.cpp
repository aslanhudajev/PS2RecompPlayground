#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_ExecOne
// Address: 0x19ac18 - 0x19ac6c
void SFD_ExecOne_0x19ac18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_ExecOne");


    ctx->pc = 0x19ac18u;

    // 0x19ac18: 0x27bdffe0
    ctx->pc = 0x19ac18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ac1c: 0xffb00000
    ctx->pc = 0x19ac1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ac20: 0xffbf0010
    ctx->pc = 0x19ac20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ac24: 0xc064f1e
    ctx->pc = 0x19AC24u;
    SET_GPR_U32(ctx, 31, 0x19AC2Cu);
    ctx->pc = 0x19AC28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC2Cu; }
        else if (ctx->pc != 0x19AC2Cu) { ctx->pc = 0x19AC2Cu; }
    }
    if (ctx->pc != 0x19AC2Cu) { return; }
    ctx->pc = 0x19AC2Cu;
    // 0x19ac2c: 0x10400006
    ctx->pc = 0x19AC2Cu;
    {
        const bool branch_taken_0x19ac2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AC30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ac2c) {
            ctx->pc = 0x19AC48u;
            goto label_19ac48;
        }
    }
    ctx->pc = 0x19AC34u;
    // 0x19ac34: 0x3c05ff00
    ctx->pc = 0x19ac34u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19ac38: 0xc064ea0
    ctx->pc = 0x19AC38u;
    SET_GPR_U32(ctx, 31, 0x19AC40u);
    ctx->pc = 0x19AC3Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 312));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC40u; }
        else if (ctx->pc != 0x19AC40u) { ctx->pc = 0x19AC40u; }
    }
    if (ctx->pc != 0x19AC40u) { return; }
    ctx->pc = 0x19AC40u;
    // 0x19ac40: 0x10000007
    ctx->pc = 0x19AC40u;
    {
        const bool branch_taken_0x19ac40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AC44u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19ac40) {
            ctx->pc = 0x19AC60u;
            goto label_19ac60;
        }
    }
    ctx->pc = 0x19AC48u;
label_19ac48:
    // 0x19ac48: 0x24020001
    ctx->pc = 0x19ac48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ac4c: 0x200202d
    ctx->pc = 0x19ac4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac50: 0xc066b34
    ctx->pc = 0x19AC50u;
    SET_GPR_U32(ctx, 31, 0x19AC58u);
    ctx->pc = 0x19AC54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->pc = 0x19ACD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_ExecOne_0x19acd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC58u; }
        else if (ctx->pc != 0x19AC58u) { ctx->pc = 0x19AC58u; }
    }
    if (ctx->pc != 0x19AC58u) { return; }
    ctx->pc = 0x19AC58u;
    // 0x19ac58: 0x102d
    ctx->pc = 0x19ac58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac5c: 0xdfbf0010
    ctx->pc = 0x19ac5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ac60:
    // 0x19ac60: 0xdfb00000
    ctx->pc = 0x19ac60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ac64: 0x3e00008
    ctx->pc = 0x19AC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AC68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC60u: goto label_19ac60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19AC6Cu;
}
