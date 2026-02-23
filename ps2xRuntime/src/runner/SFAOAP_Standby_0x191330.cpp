#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFAOAP_Standby
// Address: 0x191330 - 0x19137c
void SFAOAP_Standby_0x191330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFAOAP_Standby");


    ctx->pc = 0x191330u;

    // 0x191330: 0x27bdffe0
    ctx->pc = 0x191330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191334: 0x24050006
    ctx->pc = 0x191334u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x191338: 0xffb00000
    ctx->pc = 0x191338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19133c: 0xffbf0010
    ctx->pc = 0x19133cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x191340: 0xc0674c2
    ctx->pc = 0x191340u;
    SET_GPR_U32(ctx, 31, 0x191348u);
    ctx->pc = 0x191344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191348u; }
        else if (ctx->pc != 0x191348u) { ctx->pc = 0x191348u; }
    }
    if (ctx->pc != 0x191348u) { return; }
    ctx->pc = 0x191348u;
    // 0x191348: 0x14400003
    ctx->pc = 0x191348u;
    {
        const bool branch_taken_0x191348 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19134Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191348) {
            ctx->pc = 0x191358u;
            goto label_191358;
        }
    }
    ctx->pc = 0x191350u;
    // 0x191350: 0x10000006
    ctx->pc = 0x191350u;
    {
        const bool branch_taken_0x191350 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x191354u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191350) {
            ctx->pc = 0x19136Cu;
            goto label_19136c;
        }
    }
    ctx->pc = 0x191358u;
label_191358:
    // 0x191358: 0x24050003
    ctx->pc = 0x191358u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x19135c: 0x24060005
    ctx->pc = 0x19135cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    // 0x191360: 0x382d
    ctx->pc = 0x191360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191364: 0xc067cca
    ctx->pc = 0x191364u;
    SET_GPR_U32(ctx, 31, 0x19136Cu);
    ctx->pc = 0x191368u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_CallTrtTrif_0x19f328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19136Cu; }
        else if (ctx->pc != 0x19136Cu) { ctx->pc = 0x19136Cu; }
    }
    if (ctx->pc != 0x19136Cu) { return; }
    ctx->pc = 0x19136Cu;
label_19136c:
    // 0x19136c: 0xdfbf0010
    ctx->pc = 0x19136cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191370: 0xdfb00000
    ctx->pc = 0x191370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191374: 0x3e00008
    ctx->pc = 0x191374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191378u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191358u: goto label_191358;
            case 0x19136Cu: goto label_19136c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19137Cu;
}
