#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IsT10K
// Address: 0x1a1100 - 0x1a1140
void IsT10K_0x1a1100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IsT10K");


    ctx->pc = 0x1a1100u;

    // 0x1a1100: 0x27bdffe0
    ctx->pc = 0x1a1100u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1104: 0x3c030026
    ctx->pc = 0x1a1104u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1a1108: 0xffb00000
    ctx->pc = 0x1a1108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a110c: 0x8062df88
    ctx->pc = 0x1a110cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958984)));
    // 0x1a1110: 0x2470df88
    ctx->pc = 0x1a1110u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294958984));
    // 0x1a1114: 0x14400003
    ctx->pc = 0x1A1114u;
    {
        const bool branch_taken_0x1a1114 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A1118u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x1a1114) {
            ctx->pc = 0x1A1124u;
            goto label_1a1124;
        }
    }
    ctx->pc = 0x1A111Cu;
    // 0x1a111c: 0xc068418
    ctx->pc = 0x1A111Cu;
    SET_GPR_U32(ctx, 31, 0x1A1124u);
    ctx->pc = 0x1A1060u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetRomName_0x1a1060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1124u; }
        else if (ctx->pc != 0x1A1124u) { ctx->pc = 0x1A1124u; }
    }
    if (ctx->pc != 0x1A1124u) { return; }
    ctx->pc = 0x1A1124u;
label_1a1124:
    // 0x1a1124: 0x82020004
    ctx->pc = 0x1a1124u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a1128: 0xdfbf0010
    ctx->pc = 0x1a1128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a112c: 0x38420054
    ctx->pc = 0x1a112cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 84));
    // 0x1a1130: 0xdfb00000
    ctx->pc = 0x1a1130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1134: 0x2c420001
    ctx->pc = 0x1a1134u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x1a1138: 0x3e00008
    ctx->pc = 0x1A1138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A113Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1124u: goto label_1a1124;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1140u;
}
