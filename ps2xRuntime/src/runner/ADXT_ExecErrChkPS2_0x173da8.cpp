#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_ExecErrChkPS2
// Address: 0x173da8 - 0x173dec
void ADXT_ExecErrChkPS2_0x173da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_ExecErrChkPS2");


    ctx->pc = 0x173da8u;

    // 0x173da8: 0x27bdffe0
    ctx->pc = 0x173da8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173dac: 0xffb00000
    ctx->pc = 0x173dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173db0: 0xffbf0010
    ctx->pc = 0x173db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173db4: 0x80802d
    ctx->pc = 0x173db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173db8: 0x8e040008
    ctx->pc = 0x173db8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x173dbc: 0x10800008
    ctx->pc = 0x173DBCu;
    {
        const bool branch_taken_0x173dbc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x173DC0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x173dbc) {
            ctx->pc = 0x173DE0u;
            goto label_173de0;
        }
    }
    ctx->pc = 0x173DC4u;
    // 0x173dc4: 0xc05c2e0
    ctx->pc = 0x173DC4u;
    SET_GPR_U32(ctx, 31, 0x173DCCu);
    ctx->pc = 0x170B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_GetStat_0x170b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DCCu; }
        else if (ctx->pc != 0x173DCCu) { ctx->pc = 0x173DCCu; }
    }
    if (ctx->pc != 0x173DCCu) { return; }
    ctx->pc = 0x173DCCu;
    // 0x173dcc: 0x24030004
    ctx->pc = 0x173dccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x173dd0: 0x14430003
    ctx->pc = 0x173DD0u;
    {
        const bool branch_taken_0x173dd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x173DD4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x173dd0) {
            ctx->pc = 0x173DE0u;
            goto label_173de0;
        }
    }
    ctx->pc = 0x173DD8u;
    // 0x173dd8: 0x2402ffff
    ctx->pc = 0x173dd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x173ddc: 0xa6020060
    ctx->pc = 0x173ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_173de0:
    // 0x173de0: 0xdfb00000
    ctx->pc = 0x173de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173de4: 0x3e00008
    ctx->pc = 0x173DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173DE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173DE0u: goto label_173de0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173DECu;
}
