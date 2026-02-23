#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJMEM_Destroy
// Address: 0x17c070 - 0x17c0a4
void SJMEM_Destroy_0x17c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJMEM_Destroy");


    ctx->pc = 0x17c070u;

    // 0x17c070: 0x27bdffe0
    ctx->pc = 0x17c070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c074: 0xffb00000
    ctx->pc = 0x17c074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c078: 0x80802d
    ctx->pc = 0x17c078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c07c: 0x12000005
    ctx->pc = 0x17C07Cu;
    {
        const bool branch_taken_0x17c07c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C080u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x17c07c) {
            ctx->pc = 0x17C094u;
            goto label_17c094;
        }
    }
    ctx->pc = 0x17C084u;
    // 0x17c084: 0x282d
    ctx->pc = 0x17c084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c088: 0xc050cfe
    ctx->pc = 0x17C088u;
    SET_GPR_U32(ctx, 31, 0x17C090u);
    ctx->pc = 0x17C08Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 36));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C090u; }
        else if (ctx->pc != 0x17C090u) { ctx->pc = 0x17C090u; }
    }
    if (ctx->pc != 0x17C090u) { return; }
    ctx->pc = 0x17C090u;
    // 0x17c090: 0xae000004
    ctx->pc = 0x17c090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_17c094:
    // 0x17c094: 0xdfbf0010
    ctx->pc = 0x17c094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c098: 0xdfb00000
    ctx->pc = 0x17c098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c09c: 0x3e00008
    ctx->pc = 0x17C09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C0A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C094u: goto label_17c094;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C0A4u;
}
