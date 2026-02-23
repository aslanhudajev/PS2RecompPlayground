#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_GetTimeNone
// Address: 0x19e080 - 0x19e0c8
void sftim_GetTimeNone_0x19e080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_GetTimeNone");


    ctx->pc = 0x19e080u;

    // 0x19e080: 0x27bdffd0
    ctx->pc = 0x19e080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e084: 0xffb10010
    ctx->pc = 0x19e084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19e088: 0xffb00000
    ctx->pc = 0x19e088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e08c: 0xc0882d
    ctx->pc = 0x19e08cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e090: 0xffbf0020
    ctx->pc = 0x19e090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19e094: 0xc067854
    ctx->pc = 0x19E094u;
    SET_GPR_U32(ctx, 31, 0x19E09Cu);
    ctx->pc = 0x19E098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19E150u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_ChkRegularTime_0x19e150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E09Cu; }
        else if (ctx->pc != 0x19E09Cu) { ctx->pc = 0x19E09Cu; }
    }
    if (ctx->pc != 0x19E09Cu) { return; }
    ctx->pc = 0x19E09Cu;
    // 0x19e09c: 0x10400004
    ctx->pc = 0x19E09Cu;
    {
        const bool branch_taken_0x19e09c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E0A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x19e09c) {
            ctx->pc = 0x19E0B0u;
            goto label_19e0b0;
        }
    }
    ctx->pc = 0x19E0A4u;
    // 0x19e0a4: 0x24030001
    ctx->pc = 0x19e0a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e0a8: 0xae020000
    ctx->pc = 0x19e0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19e0ac: 0xae230000
    ctx->pc = 0x19e0acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_19e0b0:
    // 0x19e0b0: 0x102d
    ctx->pc = 0x19e0b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e0b4: 0xdfbf0020
    ctx->pc = 0x19e0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e0b8: 0xdfb10010
    ctx->pc = 0x19e0b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e0bc: 0xdfb00000
    ctx->pc = 0x19e0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e0c0: 0x3e00008
    ctx->pc = 0x19E0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E0C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E0B0u: goto label_19e0b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E0C8u;
}
