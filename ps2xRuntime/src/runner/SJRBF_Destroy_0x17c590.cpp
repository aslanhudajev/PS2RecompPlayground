#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRBF_Destroy
// Address: 0x17c590 - 0x17c5cc
void SJRBF_Destroy_0x17c590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRBF_Destroy");


    ctx->pc = 0x17c590u;

    // 0x17c590: 0x27bdffe0
    ctx->pc = 0x17c590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c594: 0xffb00000
    ctx->pc = 0x17c594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c598: 0xffbf0010
    ctx->pc = 0x17c598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c59c: 0xc05efbc
    ctx->pc = 0x17C59Cu;
    SET_GPR_U32(ctx, 31, 0x17C5A4u);
    ctx->pc = 0x17C5A0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5A4u; }
        else if (ctx->pc != 0x17C5A4u) { ctx->pc = 0x17C5A4u; }
    }
    if (ctx->pc != 0x17C5A4u) { return; }
    ctx->pc = 0x17C5A4u;
    // 0x17c5a4: 0x12000005
    ctx->pc = 0x17C5A4u;
    {
        const bool branch_taken_0x17c5a4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C5A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c5a4) {
            ctx->pc = 0x17C5BCu;
            goto label_17c5bc;
        }
    }
    ctx->pc = 0x17C5ACu;
    // 0x17c5ac: 0x282d
    ctx->pc = 0x17c5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c5b0: 0xc050cfe
    ctx->pc = 0x17C5B0u;
    SET_GPR_U32(ctx, 31, 0x17C5B8u);
    ctx->pc = 0x17C5B4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5B8u; }
        else if (ctx->pc != 0x17C5B8u) { ctx->pc = 0x17C5B8u; }
    }
    if (ctx->pc != 0x17C5B8u) { return; }
    ctx->pc = 0x17C5B8u;
    // 0x17c5b8: 0xae000004
    ctx->pc = 0x17c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_17c5bc:
    // 0x17c5bc: 0xdfbf0010
    ctx->pc = 0x17c5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c5c0: 0xdfb00000
    ctx->pc = 0x17c5c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c5c4: 0x805efc2
    ctx->pc = 0x17C5C4u;
    ctx->pc = 0x17C5C8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17BF08u;
    SJCRS_Unlock_0x17bf08(rdram, ctx, runtime); return;
    ctx->pc = 0x17C5CCu;
}
