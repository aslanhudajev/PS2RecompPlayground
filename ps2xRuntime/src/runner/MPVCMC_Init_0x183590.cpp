#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVCMC_Init
// Address: 0x183590 - 0x1835d8
void MPVCMC_Init_0x183590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVCMC_Init");


    ctx->pc = 0x183590u;

    // 0x183590: 0x27bdffe0
    ctx->pc = 0x183590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183594: 0xffb00000
    ctx->pc = 0x183594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183598: 0xffbf0010
    ctx->pc = 0x183598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18359c: 0xc060d76
    ctx->pc = 0x18359Cu;
    SET_GPR_U32(ctx, 31, 0x1835A4u);
    ctx->pc = 0x1835A0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1835D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_InitClip0255_0x1835d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1835A4u; }
        else if (ctx->pc != 0x1835A4u) { ctx->pc = 0x1835A4u; }
    }
    if (ctx->pc != 0x1835A4u) { return; }
    ctx->pc = 0x1835A4u;
    // 0x1835a4: 0x12000008
    ctx->pc = 0x1835A4u;
    {
        const bool branch_taken_0x1835a4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1835A8u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x1835a4) {
            ctx->pc = 0x1835C8u;
            goto label_1835c8;
        }
    }
    ctx->pc = 0x1835ACu;
    // 0x1835ac: 0x200202d
    ctx->pc = 0x1835acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835b0: 0x24a515c8
    ctx->pc = 0x1835b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5576));
    // 0x1835b4: 0xc0601b2
    ctx->pc = 0x1835B4u;
    SET_GPR_U32(ctx, 31, 0x1835BCu);
    ctx->pc = 0x1835B8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x1806C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1835BCu; }
        else if (ctx->pc != 0x1835BCu) { ctx->pc = 0x1835BCu; }
    }
    if (ctx->pc != 0x1835BCu) { return; }
    ctx->pc = 0x1835BCu;
    // 0x1835bc: 0x26030180
    ctx->pc = 0x1835bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 384));
    // 0x1835c0: 0x3c020024
    ctx->pc = 0x1835c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1835c4: 0xac4315c0
    ctx->pc = 0x1835c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5568), GPR_U32(ctx, 3));
label_1835c8:
    // 0x1835c8: 0xdfbf0010
    ctx->pc = 0x1835c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1835cc: 0xdfb00000
    ctx->pc = 0x1835ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1835d0: 0x3e00008
    ctx->pc = 0x1835D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1835D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1835C8u: goto label_1835c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1835D8u;
}
