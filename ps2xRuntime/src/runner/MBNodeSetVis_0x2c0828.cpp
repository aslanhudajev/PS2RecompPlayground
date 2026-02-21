#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNodeSetVis
// Address: 0x2c0828 - 0x2c0880
void MBNodeSetVis_0x2c0828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c0828u;

    // 0x2c0828: 0x3083001f
    ctx->pc = 0x2c0828u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 31));
    // 0x2c082c: 0x42143
    ctx->pc = 0x2c082cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x2c0830: 0x24020001
    ctx->pc = 0x2c0830u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0834: 0x10a00009
    ctx->pc = 0x2C0834u;
    {
        const bool branch_taken_0x2c0834 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0838u;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
        if (branch_taken_0x2c0834) {
            ctx->pc = 0x2C085Cu;
            goto label_2c085c;
        }
    }
    ctx->pc = 0x2C083Cu;
    // 0x2c083c: 0x3c02003d
    ctx->pc = 0x2c083cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c0840: 0x2442b200
    ctx->pc = 0x2c0840u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947328));
    // 0x2c0844: 0x41880
    ctx->pc = 0x2c0844u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c0848: 0x621821
    ctx->pc = 0x2c0848u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c084c: 0x8c620000
    ctx->pc = 0x2c084cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0850: 0xc21025
    ctx->pc = 0x2c0850u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c0854: 0x3e00008
    ctx->pc = 0x2C0854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0858u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C085Cu: goto label_2c085c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C085Cu;
label_2c085c:
    // 0x2c085c: 0x3c02003d
    ctx->pc = 0x2c085cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c0860: 0x2442b200
    ctx->pc = 0x2c0860u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947328));
    // 0x2c0864: 0x41880
    ctx->pc = 0x2c0864u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c0868: 0x621821
    ctx->pc = 0x2c0868u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c086c: 0x61027
    ctx->pc = 0x2c086cu;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x2c0870: 0x8c640000
    ctx->pc = 0x2c0870u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0874: 0x441024
    ctx->pc = 0x2c0874u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0878: 0x3e00008
    ctx->pc = 0x2C0878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C087Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C085Cu: goto label_2c085c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C0880u;
}
