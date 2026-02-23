#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_InitSeek
// Address: 0x19c320 - 0x19c368
void SFD_InitSeek_0x19c320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_InitSeek");


    ctx->pc = 0x19c320u;

    // 0x19c320: 0x27bdffd0
    ctx->pc = 0x19c320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c324: 0xffbf0020
    ctx->pc = 0x19c324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19c328: 0xffb10010
    ctx->pc = 0x19c328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19c32c: 0x18a00009
    ctx->pc = 0x19C32Cu;
    {
        const bool branch_taken_0x19c32c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x19C330u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x19c32c) {
            ctx->pc = 0x19C354u;
            goto label_19c354;
        }
    }
    ctx->pc = 0x19C334u;
    // 0x19c334: 0x80882d
    ctx->pc = 0x19c334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c338: 0xa0802d
    ctx->pc = 0x19c338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c33c: 0x0
    ctx->pc = 0x19c33cu;
    // NOP
label_19c340:
    // 0x19c340: 0x220202d
    ctx->pc = 0x19c340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c344: 0xc0670da
    ctx->pc = 0x19C344u;
    SET_GPR_U32(ctx, 31, 0x19C34Cu);
    ctx->pc = 0x19C348u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x19C368u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_InitSeekInf_0x19c368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C34Cu; }
        else if (ctx->pc != 0x19C34Cu) { ctx->pc = 0x19C34Cu; }
    }
    if (ctx->pc != 0x19C34Cu) { return; }
    ctx->pc = 0x19C34Cu;
    // 0x19c34c: 0x1600fffc
    ctx->pc = 0x19C34Cu;
    {
        const bool branch_taken_0x19c34c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x19C350u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 3524));
        if (branch_taken_0x19c34c) {
            ctx->pc = 0x19C340u;
            goto label_19c340;
        }
    }
    ctx->pc = 0x19C354u;
label_19c354:
    // 0x19c354: 0xdfbf0020
    ctx->pc = 0x19c354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c358: 0xdfb10010
    ctx->pc = 0x19c358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c35c: 0xdfb00000
    ctx->pc = 0x19c35cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c360: 0x3e00008
    ctx->pc = 0x19C360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C364u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C340u: goto label_19c340;
            case 0x19C354u: goto label_19c354;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C368u;
}
