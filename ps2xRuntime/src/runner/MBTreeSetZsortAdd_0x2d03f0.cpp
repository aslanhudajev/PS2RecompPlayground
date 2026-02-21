#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBTreeSetZsortAdd
// Address: 0x2d03f0 - 0x2d0498
void MBTreeSetZsortAdd_0x2d03f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d03f0u;

label_2d03f0:
    // 0x2d03f0: 0x27bdffb0
    ctx->pc = 0x2d03f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d03f4: 0xffbf0030
    ctx->pc = 0x2d03f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d03f8: 0xffb20020
    ctx->pc = 0x2d03f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d03fc: 0xffb10010
    ctx->pc = 0x2d03fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d0400: 0xffb00000
    ctx->pc = 0x2d0400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0404: 0xe7b40040
    ctx->pc = 0x2d0404u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d0408: 0x80802d
    ctx->pc = 0x2d0408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d040c: 0x46006506
    ctx->pc = 0x2d040cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2d0410: 0xa0882d
    ctx->pc = 0x2d0410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0414: 0x1000000b
    ctx->pc = 0x2D0414u;
    {
        const bool branch_taken_0x2d0414 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0418u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2d0414) {
            ctx->pc = 0x2D0444u;
            goto label_2d0444;
        }
    }
    ctx->pc = 0x2D041Cu;
    // 0x2d041c: 0x0
    ctx->pc = 0x2d041cu;
    // NOP
label_2d0420:
    // 0x2d0420: 0x12000017
    ctx->pc = 0x2D0420u;
    {
        const bool branch_taken_0x2d0420 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0424u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2d0420) {
            ctx->pc = 0x2D0480u;
            goto label_2d0480;
        }
    }
    ctx->pc = 0x2D0428u;
    // 0x2d0428: 0x8e10007c
    ctx->pc = 0x2d0428u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2d042c: 0x52000015
    ctx->pc = 0x2D042Cu;
    {
        const bool branch_taken_0x2d042c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d042c) {
            ctx->pc = 0x2D0430u;
            SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x2D0484u;
            goto label_2d0484;
        }
    }
    ctx->pc = 0x2D0434u;
    // 0x2d0434: 0x8e020060
    ctx->pc = 0x2d0434u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d0438: 0x30420010
    ctx->pc = 0x2d0438u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d043c: 0x1440fff8
    ctx->pc = 0x2D043Cu;
    {
        const bool branch_taken_0x2d043c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d043c) {
            ctx->pc = 0x2D0420u;
            goto label_2d0420;
        }
    }
    ctx->pc = 0x2D0444u;
label_2d0444:
    // 0x2d0444: 0x5200000e
    ctx->pc = 0x2D0444u;
    {
        const bool branch_taken_0x2d0444 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d0444) {
            ctx->pc = 0x2D0448u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->pc = 0x2D0480u;
            goto label_2d0480;
        }
    }
    ctx->pc = 0x2D044Cu;
    // 0x2d044c: 0x1220000a
    ctx->pc = 0x2D044Cu;
    {
        const bool branch_taken_0x2d044c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0450u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        if (branch_taken_0x2d044c) {
            ctx->pc = 0x2D0478u;
            goto label_2d0478;
        }
    }
    ctx->pc = 0x2D0454u;
    // 0x2d0454: 0x8e040078
    ctx->pc = 0x2d0454u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2d0458: 0x10800007
    ctx->pc = 0x2D0458u;
    {
        const bool branch_taken_0x2d0458 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d0458) {
            ctx->pc = 0x2D0478u;
            goto label_2d0478;
        }
    }
    ctx->pc = 0x2D0460u;
    // 0x2d0460: 0x8c820060
    ctx->pc = 0x2d0460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2d0464: 0x30420010
    ctx->pc = 0x2d0464u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d0468: 0x14400003
    ctx->pc = 0x2D0468u;
    {
        const bool branch_taken_0x2d0468 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D046Cu;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x2d0468) {
            ctx->pc = 0x2D0478u;
            goto label_2d0478;
        }
    }
    ctx->pc = 0x2D0470u;
    // 0x2d0470: 0xc0b40fc
    ctx->pc = 0x2D0470u;
    SET_GPR_U32(ctx, 31, 0x2D0478u);
    ctx->pc = 0x2D0474u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D03F0u;
    goto label_2d03f0;
    ctx->pc = 0x2D0478u;
label_2d0478:
    // 0x2d0478: 0x1232ffe9
    ctx->pc = 0x2D0478u;
    {
        const bool branch_taken_0x2d0478 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 18));
        ctx->pc = 0x2D047Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2d0478) {
            ctx->pc = 0x2D0420u;
            goto label_2d0420;
        }
    }
    ctx->pc = 0x2D0480u;
label_2d0480:
    // 0x2d0480: 0xdfb20020
    ctx->pc = 0x2d0480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d0484:
    // 0x2d0484: 0xdfb10010
    ctx->pc = 0x2d0484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0488: 0xdfb00000
    ctx->pc = 0x2d0488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d048c: 0xc7b40040
    ctx->pc = 0x2d048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d0490: 0x3e00008
    ctx->pc = 0x2D0490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0494u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D03F0u: goto label_2d03f0;
            case 0x2D0420u: goto label_2d0420;
            case 0x2D0444u: goto label_2d0444;
            case 0x2D0478u: goto label_2d0478;
            case 0x2D0480u: goto label_2d0480;
            case 0x2D0484u: goto label_2d0484;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D0498u;
}
