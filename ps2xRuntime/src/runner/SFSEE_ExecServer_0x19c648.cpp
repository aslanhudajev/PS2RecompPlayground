#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFSEE_ExecServer
// Address: 0x19c648 - 0x19c68c
void SFSEE_ExecServer_0x19c648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFSEE_ExecServer");


    ctx->pc = 0x19c648u;

    // 0x19c648: 0x27bdffe0
    ctx->pc = 0x19c648u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c64c: 0xffb00000
    ctx->pc = 0x19c64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c650: 0xffbf0010
    ctx->pc = 0x19c650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c654: 0x80802d
    ctx->pc = 0x19c654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c658: 0x8e026758
    ctx->pc = 0x19c658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 26456)));
    // 0x19c65c: 0x10400008
    ctx->pc = 0x19C65Cu;
    {
        const bool branch_taken_0x19c65c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C660u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19c65c) {
            ctx->pc = 0x19C680u;
            goto label_19c680;
        }
    }
    ctx->pc = 0x19C664u;
    // 0x19c664: 0xc0671a4
    ctx->pc = 0x19C664u;
    SET_GPR_U32(ctx, 31, 0x19C66Cu);
    ctx->pc = 0x19C690u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_ExecHeadAnaly_0x19c690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C66Cu; }
        else if (ctx->pc != 0x19C66Cu) { ctx->pc = 0x19C66Cu; }
    }
    if (ctx->pc != 0x19C66Cu) { return; }
    ctx->pc = 0x19C66Cu;
    // 0x19c66c: 0x200202d
    ctx->pc = 0x19c66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c670: 0xdfbf0010
    ctx->pc = 0x19c670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c674: 0xdfb00000
    ctx->pc = 0x19c674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c678: 0x806739a
    ctx->pc = 0x19C678u;
    ctx->pc = 0x19C67Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x19CE68u;
    sfsee_ExecFinAnaly_0x19ce68(rdram, ctx, runtime); return;
    ctx->pc = 0x19C680u;
label_19c680:
    // 0x19c680: 0xdfb00000
    ctx->pc = 0x19c680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c684: 0x3e00008
    ctx->pc = 0x19C684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C688u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C680u: goto label_19c680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C68Cu;
}
