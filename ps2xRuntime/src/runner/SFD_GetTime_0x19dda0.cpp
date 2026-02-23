#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetTime
// Address: 0x19dda0 - 0x19de08
void SFD_GetTime_0x19dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetTime");


    ctx->pc = 0x19dda0u;

    // 0x19dda0: 0x27bdffc0
    ctx->pc = 0x19dda0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19dda4: 0xffb00000
    ctx->pc = 0x19dda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19dda8: 0xffb20020
    ctx->pc = 0x19dda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19ddac: 0x80802d
    ctx->pc = 0x19ddacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ddb0: 0xffb10010
    ctx->pc = 0x19ddb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19ddb4: 0xc0902d
    ctx->pc = 0x19ddb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ddb8: 0xffbf0030
    ctx->pc = 0x19ddb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19ddbc: 0xc064f1e
    ctx->pc = 0x19DDBCu;
    SET_GPR_U32(ctx, 31, 0x19DDC4u);
    ctx->pc = 0x19DDC0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DDC4u; }
        else if (ctx->pc != 0x19DDC4u) { ctx->pc = 0x19DDC4u; }
    }
    if (ctx->pc != 0x19DDC4u) { return; }
    ctx->pc = 0x19DDC4u;
    // 0x19ddc4: 0x10400006
    ctx->pc = 0x19DDC4u;
    {
        const bool branch_taken_0x19ddc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DDC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ddc4) {
            ctx->pc = 0x19DDE0u;
            goto label_19dde0;
        }
    }
    ctx->pc = 0x19DDCCu;
    // 0x19ddcc: 0x3c05ff00
    ctx->pc = 0x19ddccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19ddd0: 0xc064ea0
    ctx->pc = 0x19DDD0u;
    SET_GPR_U32(ctx, 31, 0x19DDD8u);
    ctx->pc = 0x19DDD4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 289));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DDD8u; }
        else if (ctx->pc != 0x19DDD8u) { ctx->pc = 0x19DDD8u; }
    }
    if (ctx->pc != 0x19DDD8u) { return; }
    ctx->pc = 0x19DDD8u;
    // 0x19ddd8: 0x10000006
    ctx->pc = 0x19DDD8u;
    {
        const bool branch_taken_0x19ddd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DDDCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19ddd8) {
            ctx->pc = 0x19DDF4u;
            goto label_19ddf4;
        }
    }
    ctx->pc = 0x19DDE0u;
label_19dde0:
    // 0x19dde0: 0x200202d
    ctx->pc = 0x19dde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dde4: 0x220282d
    ctx->pc = 0x19dde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dde8: 0xc067782
    ctx->pc = 0x19DDE8u;
    SET_GPR_U32(ctx, 31, 0x19DDF0u);
    ctx->pc = 0x19DDECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19DE08u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_GetTimeSub_0x19de08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DDF0u; }
        else if (ctx->pc != 0x19DDF0u) { ctx->pc = 0x19DDF0u; }
    }
    if (ctx->pc != 0x19DDF0u) { return; }
    ctx->pc = 0x19DDF0u;
    // 0x19ddf0: 0xdfbf0030
    ctx->pc = 0x19ddf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19ddf4:
    // 0x19ddf4: 0xdfb20020
    ctx->pc = 0x19ddf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ddf8: 0xdfb10010
    ctx->pc = 0x19ddf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ddfc: 0xdfb00000
    ctx->pc = 0x19ddfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19de00: 0x3e00008
    ctx->pc = 0x19DE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DE04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DDE0u: goto label_19dde0;
            case 0x19DDF4u: goto label_19ddf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DE08u;
}
