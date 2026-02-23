#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_IsStagnant
// Address: 0x19dc08 - 0x19dc4c
void SFTIM_IsStagnant_0x19dc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_IsStagnant");


    ctx->pc = 0x19dc08u;

    // 0x19dc08: 0x27bdffe0
    ctx->pc = 0x19dc08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19dc0c: 0xffb00000
    ctx->pc = 0x19dc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19dc10: 0xffbf0010
    ctx->pc = 0x19dc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19dc14: 0xc067714
    ctx->pc = 0x19DC14u;
    SET_GPR_U32(ctx, 31, 0x19DC1Cu);
    ctx->pc = 0x19DC18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19DC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftim_IsAudioStagnant_0x19dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC1Cu; }
        else if (ctx->pc != 0x19DC1Cu) { ctx->pc = 0x19DC1Cu; }
    }
    if (ctx->pc != 0x19DC1Cu) { return; }
    ctx->pc = 0x19DC1Cu;
    // 0x19dc1c: 0x10400006
    ctx->pc = 0x19DC1Cu;
    {
        const bool branch_taken_0x19dc1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DC20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19dc1c) {
            ctx->pc = 0x19DC38u;
            goto label_19dc38;
        }
    }
    ctx->pc = 0x19DC24u;
    // 0x19dc24: 0x3c05ff00
    ctx->pc = 0x19dc24u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19dc28: 0xc064ea0
    ctx->pc = 0x19DC28u;
    SET_GPR_U32(ctx, 31, 0x19DC30u);
    ctx->pc = 0x19DC2Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 546));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC30u; }
        else if (ctx->pc != 0x19DC30u) { ctx->pc = 0x19DC30u; }
    }
    if (ctx->pc != 0x19DC30u) { return; }
    ctx->pc = 0x19DC30u;
    // 0x19dc30: 0x10000002
    ctx->pc = 0x19DC30u;
    {
        const bool branch_taken_0x19dc30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DC34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19dc30) {
            ctx->pc = 0x19DC3Cu;
            goto label_19dc3c;
        }
    }
    ctx->pc = 0x19DC38u;
label_19dc38:
    // 0x19dc38: 0x102d
    ctx->pc = 0x19dc38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19dc3c:
    // 0x19dc3c: 0xdfbf0010
    ctx->pc = 0x19dc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dc40: 0xdfb00000
    ctx->pc = 0x19dc40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dc44: 0x3e00008
    ctx->pc = 0x19DC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DC48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DC38u: goto label_19dc38;
            case 0x19DC3Cu: goto label_19dc3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DC4Cu;
}
