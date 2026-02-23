#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFAOAP_Start
// Address: 0x191380 - 0x1913cc
void SFAOAP_Start_0x191380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFAOAP_Start");


    ctx->pc = 0x191380u;

    // 0x191380: 0x27bdffe0
    ctx->pc = 0x191380u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191384: 0x24050006
    ctx->pc = 0x191384u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x191388: 0xffb00000
    ctx->pc = 0x191388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19138c: 0xffbf0010
    ctx->pc = 0x19138cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x191390: 0xc0674c2
    ctx->pc = 0x191390u;
    SET_GPR_U32(ctx, 31, 0x191398u);
    ctx->pc = 0x191394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191398u; }
        else if (ctx->pc != 0x191398u) { ctx->pc = 0x191398u; }
    }
    if (ctx->pc != 0x191398u) { return; }
    ctx->pc = 0x191398u;
    // 0x191398: 0x14400003
    ctx->pc = 0x191398u;
    {
        const bool branch_taken_0x191398 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19139Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191398) {
            ctx->pc = 0x1913A8u;
            goto label_1913a8;
        }
    }
    ctx->pc = 0x1913A0u;
    // 0x1913a0: 0x10000006
    ctx->pc = 0x1913A0u;
    {
        const bool branch_taken_0x1913a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1913A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1913a0) {
            ctx->pc = 0x1913BCu;
            goto label_1913bc;
        }
    }
    ctx->pc = 0x1913A8u;
label_1913a8:
    // 0x1913a8: 0x24050003
    ctx->pc = 0x1913a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1913ac: 0x24060006
    ctx->pc = 0x1913acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1913b0: 0x382d
    ctx->pc = 0x1913b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1913b4: 0xc067cca
    ctx->pc = 0x1913B4u;
    SET_GPR_U32(ctx, 31, 0x1913BCu);
    ctx->pc = 0x1913B8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_CallTrtTrif_0x19f328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913BCu; }
        else if (ctx->pc != 0x1913BCu) { ctx->pc = 0x1913BCu; }
    }
    if (ctx->pc != 0x1913BCu) { return; }
    ctx->pc = 0x1913BCu;
label_1913bc:
    // 0x1913bc: 0xdfbf0010
    ctx->pc = 0x1913bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1913c0: 0xdfb00000
    ctx->pc = 0x1913c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1913c4: 0x3e00008
    ctx->pc = 0x1913C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1913C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1913A8u: goto label_1913a8;
            case 0x1913BCu: goto label_1913bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1913CCu;
}
