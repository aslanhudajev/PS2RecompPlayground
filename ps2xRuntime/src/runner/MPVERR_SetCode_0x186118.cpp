#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVERR_SetCode
// Address: 0x186118 - 0x186160
void MPVERR_SetCode_0x186118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVERR_SetCode");


    ctx->pc = 0x186118u;

    // 0x186118: 0x27bdffe0
    ctx->pc = 0x186118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18611c: 0xffb00000
    ctx->pc = 0x18611cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186120: 0xffbf0010
    ctx->pc = 0x186120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186124: 0x14800006
    ctx->pc = 0x186124u;
    {
        const bool branch_taken_0x186124 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x186128u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x186124) {
            ctx->pc = 0x186140u;
            goto label_186140;
        }
    }
    ctx->pc = 0x18612Cu;
    // 0x18612c: 0x3c040024
    ctx->pc = 0x18612cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x186130: 0xc061858
    ctx->pc = 0x186130u;
    SET_GPR_U32(ctx, 31, 0x186138u);
    ctx->pc = 0x186134u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6672));
    ctx->pc = 0x186160u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpverr_SetCodeSub_0x186160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186138u; }
        else if (ctx->pc != 0x186138u) { ctx->pc = 0x186138u; }
    }
    if (ctx->pc != 0x186138u) { return; }
    ctx->pc = 0x186138u;
    // 0x186138: 0x10000005
    ctx->pc = 0x186138u;
    {
        const bool branch_taken_0x186138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18613Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x186138) {
            ctx->pc = 0x186150u;
            goto label_186150;
        }
    }
    ctx->pc = 0x186140u;
label_186140:
    // 0x186140: 0x248401bc
    ctx->pc = 0x186140u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 444));
    // 0x186144: 0xc061858
    ctx->pc = 0x186144u;
    SET_GPR_U32(ctx, 31, 0x18614Cu);
    ctx->pc = 0x186148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186160u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpverr_SetCodeSub_0x186160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18614Cu; }
        else if (ctx->pc != 0x18614Cu) { ctx->pc = 0x18614Cu; }
    }
    if (ctx->pc != 0x18614Cu) { return; }
    ctx->pc = 0x18614Cu;
    // 0x18614c: 0x200102d
    ctx->pc = 0x18614cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186150:
    // 0x186150: 0xdfbf0010
    ctx->pc = 0x186150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186154: 0xdfb00000
    ctx->pc = 0x186154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186158: 0x3e00008
    ctx->pc = 0x186158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18615Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186140u: goto label_186140;
            case 0x186150u: goto label_186150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186160u;
}
