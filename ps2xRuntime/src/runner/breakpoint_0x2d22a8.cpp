#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: breakpoint
// Address: 0x2d22a8 - 0x2d2318
void breakpoint_0x2d22a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d22a8u;

    // 0x2d22a8: 0x27bdffe0
    ctx->pc = 0x2d22a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d22ac: 0xffbf0010
    ctx->pc = 0x2d22acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d22b0: 0xffb00000
    ctx->pc = 0x2d22b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d22b4: 0x3c10003a
    ctx->pc = 0x2d22b4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2d22b8: 0x24020001
    ctx->pc = 0x2d22b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d22bc: 0xae021d0c
    ctx->pc = 0x2d22bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7436), GPR_U32(ctx, 2));
    // 0x2d22c0: 0x3c04003b
    ctx->pc = 0x2d22c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d22c4: 0xc0b4a34
    ctx->pc = 0x2D22C4u;
    SET_GPR_U32(ctx, 31, 0x2D22CCu);
    ctx->pc = 0x2D22C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30600));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D22CCu; }
    }
    if (ctx->pc != 0x2D22CCu) { return; }
    ctx->pc = 0x2D22CCu;
    // 0x2d22cc: 0x8e021d0c
    ctx->pc = 0x2d22ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7436)));
    // 0x2d22d0: 0x1040000d
    ctx->pc = 0x2D22D0u;
    {
        const bool branch_taken_0x2d22d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D22D4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x2d22d0) {
            ctx->pc = 0x2D2308u;
            goto label_2d2308;
        }
    }
    ctx->pc = 0x2D22D8u;
    // 0x2d22d8: 0x200102d
    ctx->pc = 0x2d22d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d22dc: 0x8c431d0c
    ctx->pc = 0x2d22dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 7436)));
    // 0x2d22e0: 0x8c821bf4
    ctx->pc = 0x2d22e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 7156)));
    // 0x2d22e4: 0x0
    ctx->pc = 0x2d22e4u;
    // NOP
label_2d22e8:
    // 0x2d22e8: 0x24420001
    ctx->pc = 0x2d22e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d22ec: 0x0
    ctx->pc = 0x2d22ecu;
    // NOP
    // 0x2d22f0: 0x0
    ctx->pc = 0x2d22f0u;
    // NOP
    // 0x2d22f4: 0x0
    ctx->pc = 0x2d22f4u;
    // NOP
    // 0x2d22f8: 0x0
    ctx->pc = 0x2d22f8u;
    // NOP
    // 0x2d22fc: 0x1460fffa
    ctx->pc = 0x2D22FCu;
    {
        const bool branch_taken_0x2d22fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d22fc) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D2304u;
    // 0x2d2304: 0xac821bf4
    ctx->pc = 0x2d2304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7156), GPR_U32(ctx, 2));
label_2d2308:
    // 0x2d2308: 0xdfbf0010
    ctx->pc = 0x2d2308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d230c: 0xdfb00000
    ctx->pc = 0x2d230cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2310: 0x3e00008
    ctx->pc = 0x2D2310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2314u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D22E8u: goto label_2d22e8;
            case 0x2D2308u: goto label_2d2308;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D2318u;
}
