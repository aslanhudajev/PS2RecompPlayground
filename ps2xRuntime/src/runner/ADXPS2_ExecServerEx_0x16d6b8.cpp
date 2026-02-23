#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPS2_ExecServerEx
// Address: 0x16d6b8 - 0x16d6f4
void ADXPS2_ExecServerEx_0x16d6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPS2_ExecServerEx");


    ctx->pc = 0x16d6b8u;

    // 0x16d6b8: 0x27bdfff0
    ctx->pc = 0x16d6b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d6bc: 0x8f8281dc
    ctx->pc = 0x16d6bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935004)));
    // 0x16d6c0: 0x14400008
    ctx->pc = 0x16D6C0u;
    {
        const bool branch_taken_0x16d6c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16D6C4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x16d6c0) {
            ctx->pc = 0x16D6E4u;
            goto label_16d6e4;
        }
    }
    ctx->pc = 0x16D6C8u;
    // 0x16d6c8: 0x24020001
    ctx->pc = 0x16d6c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d6cc: 0xaf8281dc
    ctx->pc = 0x16d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935004), GPR_U32(ctx, 2));
    // 0x16d6d0: 0xc05c958
    ctx->pc = 0x16D6D0u;
    SET_GPR_U32(ctx, 31, 0x16D6D8u);
    ctx->pc = 0x172560u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_ExecServer_0x172560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6D8u; }
        else if (ctx->pc != 0x16D6D8u) { ctx->pc = 0x16D6D8u; }
    }
    if (ctx->pc != 0x16D6D8u) { return; }
    ctx->pc = 0x16D6D8u;
    // 0x16d6d8: 0xc05b116
    ctx->pc = 0x16D6D8u;
    SET_GPR_U32(ctx, 31, 0x16D6E0u);
    ctx->pc = 0x16C458u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_ExecFsSvr_0x16c458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6E0u; }
        else if (ctx->pc != 0x16D6E0u) { ctx->pc = 0x16D6E0u; }
    }
    if (ctx->pc != 0x16D6E0u) { return; }
    ctx->pc = 0x16D6E0u;
    // 0x16d6e0: 0xaf8081dc
    ctx->pc = 0x16d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935004), GPR_U32(ctx, 0));
label_16d6e4:
    // 0x16d6e4: 0xdfbf0000
    ctx->pc = 0x16d6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d6e8: 0x102d
    ctx->pc = 0x16d6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d6ec: 0x3e00008
    ctx->pc = 0x16D6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D6F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D6E4u: goto label_16d6e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D6F4u;
}
