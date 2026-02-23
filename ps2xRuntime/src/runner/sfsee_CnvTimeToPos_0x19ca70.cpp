#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfsee_CnvTimeToPos
// Address: 0x19ca70 - 0x19cab8
void sfsee_CnvTimeToPos_0x19ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfsee_CnvTimeToPos");


    ctx->pc = 0x19ca70u;

    // 0x19ca70: 0x27bdffe0
    ctx->pc = 0x19ca70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ca74: 0x80102d
    ctx->pc = 0x19ca74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca78: 0xffb00000
    ctx->pc = 0x19ca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ca7c: 0xffbf0010
    ctx->pc = 0x19ca7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ca80: 0x8c440dac
    ctx->pc = 0x19ca80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 3500)));
    // 0x19ca84: 0x10800005
    ctx->pc = 0x19CA84u;
    {
        const bool branch_taken_0x19ca84 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CA88u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ca84) {
            ctx->pc = 0x19CA9Cu;
            goto label_19ca9c;
        }
    }
    ctx->pc = 0x19CA8Cu;
    // 0x19ca8c: 0xdfbf0010
    ctx->pc = 0x19ca8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ca90: 0xdfb00000
    ctx->pc = 0x19ca90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ca94: 0x80672ae
    ctx->pc = 0x19CA94u;
    ctx->pc = 0x19CA98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x19CAB8u;
    sfsee_SearchTimeToPos_0x19cab8(rdram, ctx, runtime); return;
    ctx->pc = 0x19CA9Cu;
label_19ca9c:
    // 0x19ca9c: 0xc063132
    ctx->pc = 0x19CA9Cu;
    SET_GPR_U32(ctx, 31, 0x19CAA4u);
    ctx->pc = 0x19CAA0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 3476)));
    ctx->pc = 0x18C4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MulAbDivC_0x18c4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAA4u; }
        else if (ctx->pc != 0x19CAA4u) { ctx->pc = 0x19CAA4u; }
    }
    if (ctx->pc != 0x19CAA4u) { return; }
    ctx->pc = 0x19CAA4u;
    // 0x19caa4: 0xae020000
    ctx->pc = 0x19caa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19caa8: 0xdfbf0010
    ctx->pc = 0x19caa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19caac: 0xdfb00000
    ctx->pc = 0x19caacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cab0: 0x3e00008
    ctx->pc = 0x19CAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CAB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CA9Cu: goto label_19ca9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19CAB8u;
}
