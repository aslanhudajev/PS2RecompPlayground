#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxt_stat_decend
// Address: 0x173a20 - 0x173a74
void adxt_stat_decend_0x173a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxt_stat_decend");


    ctx->pc = 0x173a20u;

    // 0x173a20: 0x27bdffe0
    ctx->pc = 0x173a20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173a24: 0xffb00000
    ctx->pc = 0x173a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173a28: 0xffbf0010
    ctx->pc = 0x173a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173a2c: 0x80802d
    ctx->pc = 0x173a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a30: 0xc05b696
    ctx->pc = 0x173A30u;
    SET_GPR_U32(ctx, 31, 0x173A38u);
    ctx->pc = 0x173A34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x16DA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_GetNumData_0x16da58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A38u; }
        else if (ctx->pc != 0x173A38u) { ctx->pc = 0x173A38u; }
    }
    if (ctx->pc != 0x173A38u) { return; }
    ctx->pc = 0x173A38u;
    // 0x173a38: 0x8e04000c
    ctx->pc = 0x173a38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x173a3c: 0xc05b696
    ctx->pc = 0x173A3Cu;
    SET_GPR_U32(ctx, 31, 0x173A44u);
    ctx->pc = 0x173A40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935148), GPR_U32(ctx, 2));
    ctx->pc = 0x16DA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_GetNumData_0x16da58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A44u; }
        else if (ctx->pc != 0x173A44u) { ctx->pc = 0x173A44u; }
    }
    if (ctx->pc != 0x173A44u) { return; }
    ctx->pc = 0x173A44u;
    // 0x173a44: 0x28420201
    ctx->pc = 0x173a44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 513));
    // 0x173a48: 0x10400007
    ctx->pc = 0x173A48u;
    {
        const bool branch_taken_0x173a48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173A4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x173a48) {
            ctx->pc = 0x173A68u;
            goto label_173a68;
        }
    }
    ctx->pc = 0x173A50u;
    // 0x173a50: 0x8e04000c
    ctx->pc = 0x173a50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x173a54: 0xc05b692
    ctx->pc = 0x173A54u;
    SET_GPR_U32(ctx, 31, 0x173A5Cu);
    ctx->pc = 0x173A58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetPlaySw_0x16da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A5Cu; }
        else if (ctx->pc != 0x173A5Cu) { ctx->pc = 0x173A5Cu; }
    }
    if (ctx->pc != 0x173A5Cu) { return; }
    ctx->pc = 0x173A5Cu;
    // 0x173a5c: 0x24020005
    ctx->pc = 0x173a5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x173a60: 0xa2020001
    ctx->pc = 0x173a60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x173a64: 0xdfbf0010
    ctx->pc = 0x173a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_173a68:
    // 0x173a68: 0xdfb00000
    ctx->pc = 0x173a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173a6c: 0x3e00008
    ctx->pc = 0x173A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173A70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173A68u: goto label_173a68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173A74u;
}
