#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpegNodata
// Address: 0x19a1a0 - 0x19a218
void mpegNodata_0x19a1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpegNodata");


    ctx->pc = 0x19a1a0u;

    // 0x19a1a0: 0x27bdffd0
    ctx->pc = 0x19a1a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19a1a4: 0xffb00000
    ctx->pc = 0x19a1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a1a8: 0xffb10010
    ctx->pc = 0x19a1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19a1ac: 0x24d03d78
    ctx->pc = 0x19a1acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 6), 15736));
    // 0x19a1b0: 0x24d13d10
    ctx->pc = 0x19a1b0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 6), 15632));
    // 0x19a1b4: 0xffbf0020
    ctx->pc = 0x19a1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19a1b8: 0xc0665c6
    ctx->pc = 0x19A1B8u;
    SET_GPR_U32(ctx, 31, 0x19A1C0u);
    ctx->pc = 0x19A1BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199718u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufAddDMA_0x199718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A1C0u; }
        else if (ctx->pc != 0x19A1C0u) { ctx->pc = 0x19A1C0u; }
    }
    if (ctx->pc != 0x19A1C0u) { return; }
    ctx->pc = 0x19A1C0u;
    // 0x19a1c0: 0x8e230014
    ctx->pc = 0x19a1c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x19a1c4: 0x1060000f
    ctx->pc = 0x19A1C4u;
    {
        const bool branch_taken_0x19a1c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A1C8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19a1c4) {
            ctx->pc = 0x19A204u;
            goto label_19a204;
        }
    }
    ctx->pc = 0x19A1CCu;
    // 0x19a1cc: 0x8e020010
    ctx->pc = 0x19a1ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19a1d0: 0x1440000d
    ctx->pc = 0x19A1D0u;
    {
        const bool branch_taken_0x19a1d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19A1D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19a1d0) {
            ctx->pc = 0x19A208u;
            goto label_19a208;
        }
    }
    ctx->pc = 0x19A1D8u;
    // 0x19a1d8: 0x3c05002c
    ctx->pc = 0x19a1d8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x19a1dc: 0x24a5d4a8
    ctx->pc = 0x19a1dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294956200));
    // 0x19a1e0: 0xae220018
    ctx->pc = 0x19a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x19a1e4: 0x200202d
    ctx->pc = 0x19a1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a1e8: 0xc066840
    ctx->pc = 0x19A1E8u;
    SET_GPR_U32(ctx, 31, 0x19A1F0u);
    ctx->pc = 0x19A1ECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x19A100u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpvp_PutVibuf_0x19a100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A1F0u; }
        else if (ctx->pc != 0x19A1F0u) { ctx->pc = 0x19A1F0u; }
    }
    if (ctx->pc != 0x19A1F0u) { return; }
    ctx->pc = 0x19A1F0u;
    // 0x19a1f0: 0x8e030018
    ctx->pc = 0x19a1f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19a1f4: 0x200202d
    ctx->pc = 0x19a1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a1f8: 0xc0665c6
    ctx->pc = 0x19A1F8u;
    SET_GPR_U32(ctx, 31, 0x19A200u);
    ctx->pc = 0x19A1FCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x199718u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufAddDMA_0x199718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A200u; }
        else if (ctx->pc != 0x19A200u) { ctx->pc = 0x19A200u; }
    }
    if (ctx->pc != 0x19A200u) { return; }
    ctx->pc = 0x19A200u;
    // 0x19a200: 0xdfbf0020
    ctx->pc = 0x19a200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19a204:
    // 0x19a204: 0x24020001
    ctx->pc = 0x19a204u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_19a208:
    // 0x19a208: 0xdfb10010
    ctx->pc = 0x19a208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a20c: 0xdfb00000
    ctx->pc = 0x19a20cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a210: 0x3e00008
    ctx->pc = 0x19A210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A214u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A204u: goto label_19a204;
            case 0x19A208u: goto label_19a208;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19A218u;
}
