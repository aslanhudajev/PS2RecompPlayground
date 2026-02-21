#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBSetupWad
// Address: 0x2d4458 - 0x2d44d0
void MBSetupWad_0x2d4458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d4458u;

    // 0x2d4458: 0x1080001b
    ctx->pc = 0x2D4458u;
    {
        const bool branch_taken_0x2d4458 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D445Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2d4458) {
            ctx->pc = 0x2D44C8u;
            goto label_2d44c8;
        }
    }
    ctx->pc = 0x2D4460u;
    // 0x2d4460: 0xac850000
    ctx->pc = 0x2d4460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2d4464: 0x8ca60000
    ctx->pc = 0x2d4464u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4468: 0xac860008
    ctx->pc = 0x2d4468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2d446c: 0x8ca20004
    ctx->pc = 0x2d446cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d4470: 0xac820004
    ctx->pc = 0x2d4470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2d4474: 0x8ca20000
    ctx->pc = 0x2d4474u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4478: 0x8c632354
    ctx->pc = 0x2d4478u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 9044)));
    // 0x2d447c: 0x43102b
    ctx->pc = 0x2d447cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d4480: 0x10400011
    ctx->pc = 0x2D4480u;
    {
        const bool branch_taken_0x2d4480 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D4484u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        if (branch_taken_0x2d4480) {
            ctx->pc = 0x2D44C8u;
            goto label_2d44c8;
        }
    }
    ctx->pc = 0x2D4488u;
    // 0x2d4488: 0xac820008
    ctx->pc = 0x2d4488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2d448c: 0xaca20000
    ctx->pc = 0x2d448cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2d4490: 0x8c820004
    ctx->pc = 0x2d4490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d4494: 0x1040000c
    ctx->pc = 0x2D4494u;
    {
        const bool branch_taken_0x2d4494 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D4498u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d4494) {
            ctx->pc = 0x2D44C8u;
            goto label_2d44c8;
        }
    }
    ctx->pc = 0x2D449Cu;
    // 0x2d449c: 0x61900
    ctx->pc = 0x2d449cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 4));
label_2d44a0:
    // 0x2d44a0: 0x8c820008
    ctx->pc = 0x2d44a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d44a4: 0x621821
    ctx->pc = 0x2d44a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d44a8: 0x8c620004
    ctx->pc = 0x2d44a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d44ac: 0xa21021
    ctx->pc = 0x2d44acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d44b0: 0xac620004
    ctx->pc = 0x2d44b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2d44b4: 0x24c60001
    ctx->pc = 0x2d44b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d44b8: 0x8c820004
    ctx->pc = 0x2d44b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d44bc: 0xc2102b
    ctx->pc = 0x2d44bcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d44c0: 0x1440fff7
    ctx->pc = 0x2D44C0u;
    {
        const bool branch_taken_0x2d44c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D44C4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x2d44c0) {
            ctx->pc = 0x2D44A0u;
            goto label_2d44a0;
        }
    }
    ctx->pc = 0x2D44C8u;
label_2d44c8:
    // 0x2d44c8: 0x3e00008
    ctx->pc = 0x2D44C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D44A0u: goto label_2d44a0;
            case 0x2D44C8u: goto label_2d44c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D44D0u;
}
