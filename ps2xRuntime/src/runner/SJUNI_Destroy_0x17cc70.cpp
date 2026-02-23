#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJUNI_Destroy
// Address: 0x17cc70 - 0x17cca4
void SJUNI_Destroy_0x17cc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJUNI_Destroy");


    ctx->pc = 0x17cc70u;

    // 0x17cc70: 0x27bdffe0
    ctx->pc = 0x17cc70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17cc74: 0xffb00000
    ctx->pc = 0x17cc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17cc78: 0x80802d
    ctx->pc = 0x17cc78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc7c: 0x12000005
    ctx->pc = 0x17CC7Cu;
    {
        const bool branch_taken_0x17cc7c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x17CC80u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x17cc7c) {
            ctx->pc = 0x17CC94u;
            goto label_17cc94;
        }
    }
    ctx->pc = 0x17CC84u;
    // 0x17cc84: 0x282d
    ctx->pc = 0x17cc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc88: 0xc050cfe
    ctx->pc = 0x17CC88u;
    SET_GPR_U32(ctx, 31, 0x17CC90u);
    ctx->pc = 0x17CC8Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC90u; }
        else if (ctx->pc != 0x17CC90u) { ctx->pc = 0x17CC90u; }
    }
    if (ctx->pc != 0x17CC90u) { return; }
    ctx->pc = 0x17CC90u;
    // 0x17cc90: 0xa2000004
    ctx->pc = 0x17cc90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_17cc94:
    // 0x17cc94: 0xdfbf0010
    ctx->pc = 0x17cc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cc98: 0xdfb00000
    ctx->pc = 0x17cc98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cc9c: 0x3e00008
    ctx->pc = 0x17CC9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CCA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17CC94u: goto label_17cc94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17CCA4u;
}
