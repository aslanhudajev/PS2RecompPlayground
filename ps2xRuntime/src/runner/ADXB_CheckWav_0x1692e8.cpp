#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_CheckWav
// Address: 0x1692e8 - 0x169344
void ADXB_CheckWav_0x1692e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_CheckWav");


    ctx->pc = 0x1692e8u;

    // 0x1692e8: 0x27bdffe0
    ctx->pc = 0x1692e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1692ec: 0x3c05002d
    ctx->pc = 0x1692ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)45 << 16));
    // 0x1692f0: 0xffb00000
    ctx->pc = 0x1692f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1692f4: 0x24a55758
    ctx->pc = 0x1692f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 22360));
    // 0x1692f8: 0x80802d
    ctx->pc = 0x1692f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1692fc: 0xffbf0010
    ctx->pc = 0x1692fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169300: 0xc050c6a
    ctx->pc = 0x169300u;
    SET_GPR_U32(ctx, 31, 0x169308u);
    ctx->pc = 0x169304u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169308u; }
        else if (ctx->pc != 0x169308u) { ctx->pc = 0x169308u; }
    }
    if (ctx->pc != 0x169308u) { return; }
    ctx->pc = 0x169308u;
    // 0x169308: 0x5440000a
    ctx->pc = 0x169308u;
    {
        const bool branch_taken_0x169308 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x169308) {
            ctx->pc = 0x16930Cu;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x169334u;
            goto label_169334;
        }
    }
    ctx->pc = 0x169310u;
    // 0x169310: 0x3c05002d
    ctx->pc = 0x169310u;
    SET_GPR_U32(ctx, 5, ((uint32_t)45 << 16));
    // 0x169314: 0x26040008
    ctx->pc = 0x169314u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 8));
    // 0x169318: 0x24a55760
    ctx->pc = 0x169318u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 22368));
    // 0x16931c: 0xc050c6a
    ctx->pc = 0x16931Cu;
    SET_GPR_U32(ctx, 31, 0x169324u);
    ctx->pc = 0x169320u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169324u; }
        else if (ctx->pc != 0x169324u) { ctx->pc = 0x169324u; }
    }
    if (ctx->pc != 0x169324u) { return; }
    ctx->pc = 0x169324u;
    // 0x169324: 0x40182d
    ctx->pc = 0x169324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169328: 0x10600002
    ctx->pc = 0x169328u;
    {
        const bool branch_taken_0x169328 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16932Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x169328) {
            ctx->pc = 0x169334u;
            goto label_169334;
        }
    }
    ctx->pc = 0x169330u;
    // 0x169330: 0x102d
    ctx->pc = 0x169330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169334:
    // 0x169334: 0xdfbf0010
    ctx->pc = 0x169334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169338: 0xdfb00000
    ctx->pc = 0x169338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16933c: 0x3e00008
    ctx->pc = 0x16933Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169340u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169334u: goto label_169334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169344u;
}
