#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFAOAP_Stop
// Address: 0x1913d0 - 0x19141c
void SFAOAP_Stop_0x1913d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFAOAP_Stop");


    ctx->pc = 0x1913d0u;

    // 0x1913d0: 0x27bdffe0
    ctx->pc = 0x1913d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1913d4: 0x24050006
    ctx->pc = 0x1913d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1913d8: 0xffb00000
    ctx->pc = 0x1913d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1913dc: 0xffbf0010
    ctx->pc = 0x1913dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1913e0: 0xc0674c2
    ctx->pc = 0x1913E0u;
    SET_GPR_U32(ctx, 31, 0x1913E8u);
    ctx->pc = 0x1913E4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913E8u; }
        else if (ctx->pc != 0x1913E8u) { ctx->pc = 0x1913E8u; }
    }
    if (ctx->pc != 0x1913E8u) { return; }
    ctx->pc = 0x1913E8u;
    // 0x1913e8: 0x14400003
    ctx->pc = 0x1913E8u;
    {
        const bool branch_taken_0x1913e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1913ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1913e8) {
            ctx->pc = 0x1913F8u;
            goto label_1913f8;
        }
    }
    ctx->pc = 0x1913F0u;
    // 0x1913f0: 0x10000006
    ctx->pc = 0x1913F0u;
    {
        const bool branch_taken_0x1913f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1913F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1913f0) {
            ctx->pc = 0x19140Cu;
            goto label_19140c;
        }
    }
    ctx->pc = 0x1913F8u;
label_1913f8:
    // 0x1913f8: 0x24050003
    ctx->pc = 0x1913f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1913fc: 0x24060007
    ctx->pc = 0x1913fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x191400: 0x382d
    ctx->pc = 0x191400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191404: 0xc067cca
    ctx->pc = 0x191404u;
    SET_GPR_U32(ctx, 31, 0x19140Cu);
    ctx->pc = 0x191408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_CallTrtTrif_0x19f328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19140Cu; }
        else if (ctx->pc != 0x19140Cu) { ctx->pc = 0x19140Cu; }
    }
    if (ctx->pc != 0x19140Cu) { return; }
    ctx->pc = 0x19140Cu;
label_19140c:
    // 0x19140c: 0xdfbf0010
    ctx->pc = 0x19140cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191410: 0xdfb00000
    ctx->pc = 0x191410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191414: 0x3e00008
    ctx->pc = 0x191414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191418u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1913F8u: goto label_1913f8;
            case 0x19140Cu: goto label_19140c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19141Cu;
}
