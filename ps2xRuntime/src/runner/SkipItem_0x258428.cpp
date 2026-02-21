#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SkipItem
// Address: 0x258428 - 0x2584b0
void SkipItem_0x258428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x258428u;

    // 0x258428: 0x8c820000
    ctx->pc = 0x258428u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25842c: 0x8c450000
    ctx->pc = 0x25842cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258430: 0x24020008
    ctx->pc = 0x258430u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x258434: 0x10a20010
    ctx->pc = 0x258434u;
    {
        const bool branch_taken_0x258434 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x258438u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x258434) {
            ctx->pc = 0x258478u;
            goto label_258478;
        }
    }
    ctx->pc = 0x25843Cu;
    // 0x25843c: 0x28a20009
    ctx->pc = 0x25843cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 9));
    // 0x258440: 0x10400005
    ctx->pc = 0x258440u;
    {
        const bool branch_taken_0x258440 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x258444u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x258440) {
            ctx->pc = 0x258458u;
            goto label_258458;
        }
    }
    ctx->pc = 0x258448u;
    // 0x258448: 0x10a20007
    ctx->pc = 0x258448u;
    {
        const bool branch_taken_0x258448 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x25844Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x258448) {
            ctx->pc = 0x258468u;
            goto label_258468;
        }
    }
    ctx->pc = 0x258450u;
    // 0x258450: 0x10000015
    ctx->pc = 0x258450u;
    {
        const bool branch_taken_0x258450 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x258450) {
            ctx->pc = 0x2584A8u;
            goto label_2584a8;
        }
    }
    ctx->pc = 0x258458u;
label_258458:
    // 0x258458: 0x24030001
    ctx->pc = 0x258458u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25845c: 0x38a2000d
    ctx->pc = 0x25845cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 13));
    // 0x258460: 0x10000010
    ctx->pc = 0x258460u;
    {
        const bool branch_taken_0x258460 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258464u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
        if (branch_taken_0x258460) {
            ctx->pc = 0x2584A4u;
            goto label_2584a4;
        }
    }
    ctx->pc = 0x258468u;
label_258468:
    // 0x258468: 0x8c8300fc
    ctx->pc = 0x258468u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x25846c: 0x24020001
    ctx->pc = 0x25846cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x258470: 0x1000000c
    ctx->pc = 0x258470u;
    {
        const bool branch_taken_0x258470 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258474u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
        if (branch_taken_0x258470) {
            ctx->pc = 0x2584A4u;
            goto label_2584a4;
        }
    }
    ctx->pc = 0x258478u;
label_258478:
    // 0x258478: 0x808300dc
    ctx->pc = 0x258478u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x25847c: 0x24020002
    ctx->pc = 0x25847cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x258480: 0x10620003
    ctx->pc = 0x258480u;
    {
        const bool branch_taken_0x258480 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x258484u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x258480) {
            ctx->pc = 0x258490u;
            goto label_258490;
        }
    }
    ctx->pc = 0x258488u;
    // 0x258488: 0x54620006
    ctx->pc = 0x258488u;
    {
        const bool branch_taken_0x258488 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x258488) {
            ctx->pc = 0x25848Cu;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x2584A4u;
            goto label_2584a4;
        }
    }
    ctx->pc = 0x258490u;
label_258490:
    // 0x258490: 0x948200d8
    ctx->pc = 0x258490u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x258494: 0x30420001
    ctx->pc = 0x258494u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x258498: 0x14400003
    ctx->pc = 0x258498u;
    {
        const bool branch_taken_0x258498 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25849Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x258498) {
            ctx->pc = 0x2584A8u;
            goto label_2584a8;
        }
    }
    ctx->pc = 0x2584A0u;
    // 0x2584a0: 0x24060001
    ctx->pc = 0x2584a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_2584a4:
    // 0x2584a4: 0xc0102d
    ctx->pc = 0x2584a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2584a8:
    // 0x2584a8: 0x3e00008
    ctx->pc = 0x2584A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x258458u: goto label_258458;
            case 0x258468u: goto label_258468;
            case 0x258478u: goto label_258478;
            case 0x258490u: goto label_258490;
            case 0x2584A4u: goto label_2584a4;
            case 0x2584A8u: goto label_2584a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2584B0u;
}
