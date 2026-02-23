#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_IsPrepEnd
// Address: 0x195c18 - 0x195c6c
void sfmpv_IsPrepEnd_0x195c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_IsPrepEnd");


    ctx->pc = 0x195c18u;

    // 0x195c18: 0x27bdffe0
    ctx->pc = 0x195c18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x195c1c: 0xffb00000
    ctx->pc = 0x195c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195c20: 0xffbf0010
    ctx->pc = 0x195c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x195c24: 0xc066396
    ctx->pc = 0x195C24u;
    SET_GPR_U32(ctx, 31, 0x195C2Cu);
    ctx->pc = 0x195C28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_IsTermDec_0x198e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195C2Cu; }
        else if (ctx->pc != 0x195C2Cu) { ctx->pc = 0x195C2Cu; }
    }
    if (ctx->pc != 0x195C2Cu) { return; }
    ctx->pc = 0x195C2Cu;
    // 0x195c2c: 0x1440000b
    ctx->pc = 0x195C2Cu;
    {
        const bool branch_taken_0x195c2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x195C30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x195c2c) {
            ctx->pc = 0x195C5Cu;
            goto label_195c5c;
        }
    }
    ctx->pc = 0x195C34u;
    // 0x195c34: 0xc06571c
    ctx->pc = 0x195C34u;
    SET_GPR_U32(ctx, 31, 0x195C3Cu);
    ctx->pc = 0x195C38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_IsPrepFrmEnough_0x195c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195C3Cu; }
        else if (ctx->pc != 0x195C3Cu) { ctx->pc = 0x195C3Cu; }
    }
    if (ctx->pc != 0x195C3Cu) { return; }
    ctx->pc = 0x195C3Cu;
    // 0x195c3c: 0x50400007
    ctx->pc = 0x195C3Cu;
    {
        const bool branch_taken_0x195c3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x195c3c) {
            ctx->pc = 0x195C40u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x195C5Cu;
            goto label_195c5c;
        }
    }
    ctx->pc = 0x195C44u;
    // 0x195c44: 0xc06572e
    ctx->pc = 0x195C44u;
    SET_GPR_U32(ctx, 31, 0x195C4Cu);
    ctx->pc = 0x195C48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195CB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_IsVbvEnough_0x195cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195C4Cu; }
        else if (ctx->pc != 0x195C4Cu) { ctx->pc = 0x195C4Cu; }
    }
    if (ctx->pc != 0x195C4Cu) { return; }
    ctx->pc = 0x195C4Cu;
    // 0x195c4c: 0x40182d
    ctx->pc = 0x195c4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195c50: 0x14600002
    ctx->pc = 0x195C50u;
    {
        const bool branch_taken_0x195c50 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x195C54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x195c50) {
            ctx->pc = 0x195C5Cu;
            goto label_195c5c;
        }
    }
    ctx->pc = 0x195C58u;
    // 0x195c58: 0x102d
    ctx->pc = 0x195c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195c5c:
    // 0x195c5c: 0xdfbf0010
    ctx->pc = 0x195c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195c60: 0xdfb00000
    ctx->pc = 0x195c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195c64: 0x3e00008
    ctx->pc = 0x195C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195C68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195C5Cu: goto label_195c5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195C6Cu;
}
