#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScaleMat3
// Address: 0x2d5458 - 0x2d54ac
void ScaleMat3_0x2d5458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d5458u;

    // 0x2d5458: 0x482d
    ctx->pc = 0x2d5458u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d545c: 0x302d
    ctx->pc = 0x2d545cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5460:
    // 0x2d5460: 0x91100
    ctx->pc = 0x2d5460u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 4));
    // 0x2d5464: 0x454021
    ctx->pc = 0x2d5464u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d5468: 0x443821
    ctx->pc = 0x2d5468u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d546c: 0x0
    ctx->pc = 0x2d546cu;
    // NOP
label_2d5470:
    // 0x2d5470: 0x61080
    ctx->pc = 0x2d5470u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d5474: 0x481821
    ctx->pc = 0x2d5474u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2d5478: 0x471021
    ctx->pc = 0x2d5478u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d547c: 0xc4400000
    ctx->pc = 0x2d547cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5480: 0x46006002
    ctx->pc = 0x2d5480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2d5484: 0x24c60001
    ctx->pc = 0x2d5484u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d5488: 0x28c20003
    ctx->pc = 0x2d5488u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 3));
    // 0x2d548c: 0x1440fff8
    ctx->pc = 0x2D548Cu;
    {
        const bool branch_taken_0x2d548c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D5490u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        if (branch_taken_0x2d548c) {
            ctx->pc = 0x2D5470u;
            goto label_2d5470;
        }
    }
    ctx->pc = 0x2D5494u;
    // 0x2d5494: 0x25290001
    ctx->pc = 0x2d5494u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x2d5498: 0x29220003
    ctx->pc = 0x2d5498u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 3));
    // 0x2d549c: 0x1440fff0
    ctx->pc = 0x2D549Cu;
    {
        const bool branch_taken_0x2d549c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D54A0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d549c) {
            ctx->pc = 0x2D5460u;
            goto label_2d5460;
        }
    }
    ctx->pc = 0x2D54A4u;
    // 0x2d54a4: 0x3e00008
    ctx->pc = 0x2D54A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D5460u: goto label_2d5460;
            case 0x2D5470u: goto label_2d5470;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D54ACu;
}
