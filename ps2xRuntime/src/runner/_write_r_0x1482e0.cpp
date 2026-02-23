#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _write_r
// Address: 0x1482e0 - 0x148340
void _write_r_0x1482e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_write_r");


    ctx->pc = 0x1482e0u;

    // 0x1482e0: 0x27bdffd0
    ctx->pc = 0x1482e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1482e4: 0xffb00000
    ctx->pc = 0x1482e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1482e8: 0x80802d
    ctx->pc = 0x1482e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1482ec: 0xffb10010
    ctx->pc = 0x1482ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1482f0: 0xa0202d
    ctx->pc = 0x1482f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1482f4: 0x3c110093
    ctx->pc = 0x1482f4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)147 << 16));
    // 0x1482f8: 0xc0282d
    ctx->pc = 0x1482f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1482fc: 0xffbf0020
    ctx->pc = 0x1482fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x148300: 0xae208084
    ctx->pc = 0x148300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294934660), GPR_U32(ctx, 0));
    // 0x148304: 0xc055380
    ctx->pc = 0x148304u;
    SET_GPR_U32(ctx, 31, 0x14830Cu);
    ctx->pc = 0x148308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154E00u;
    {
        const uint32_t __entryPc = ctx->pc;
        write_0x154e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14830Cu; }
        else if (ctx->pc != 0x14830Cu) { ctx->pc = 0x14830Cu; }
    }
    if (ctx->pc != 0x14830Cu) { return; }
    ctx->pc = 0x14830Cu;
    // 0x14830c: 0x40182d
    ctx->pc = 0x14830cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148310: 0x2402ffff
    ctx->pc = 0x148310u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x148314: 0x14620005
    ctx->pc = 0x148314u;
    {
        const bool branch_taken_0x148314 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x148318u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x148314) {
            ctx->pc = 0x14832Cu;
            goto label_14832c;
        }
    }
    ctx->pc = 0x14831Cu;
    // 0x14831c: 0x8e228084
    ctx->pc = 0x14831cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294934660)));
    // 0x148320: 0x54400002
    ctx->pc = 0x148320u;
    {
        const bool branch_taken_0x148320 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x148320) {
            ctx->pc = 0x148324u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x14832Cu;
            goto label_14832c;
        }
    }
    ctx->pc = 0x148328u;
    // 0x148328: 0xdfbf0020
    ctx->pc = 0x148328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14832c:
    // 0x14832c: 0x60102d
    ctx->pc = 0x14832cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148330: 0xdfb10010
    ctx->pc = 0x148330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148334: 0xdfb00000
    ctx->pc = 0x148334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148338: 0x3e00008
    ctx->pc = 0x148338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14833Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14832Cu: goto label_14832c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x148340u;
}
