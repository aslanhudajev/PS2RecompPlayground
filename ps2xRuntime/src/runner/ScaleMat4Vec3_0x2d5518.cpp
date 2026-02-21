#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScaleMat4Vec3
// Address: 0x2d5518 - 0x2d557c
void ScaleMat4Vec3_0x2d5518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d5518u;

    // 0x2d5518: 0x80582d
    ctx->pc = 0x2d5518u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d551c: 0x502d
    ctx->pc = 0x2d551cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5520: 0x382d
    ctx->pc = 0x2d5520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5524: 0x0
    ctx->pc = 0x2d5524u;
    // NOP
label_2d5528:
    // 0x2d5528: 0xa1100
    ctx->pc = 0x2d5528u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 4));
    // 0x2d552c: 0x454821
    ctx->pc = 0x2d552cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d5530: 0x4b4021
    ctx->pc = 0x2d5530u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2d5534: 0x0
    ctx->pc = 0x2d5534u;
    // NOP
label_2d5538:
    // 0x2d5538: 0x71080
    ctx->pc = 0x2d5538u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d553c: 0x492021
    ctx->pc = 0x2d553cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2d5540: 0x481821
    ctx->pc = 0x2d5540u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2d5544: 0x461021
    ctx->pc = 0x2d5544u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d5548: 0xc4600000
    ctx->pc = 0x2d5548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d554c: 0xc4410000
    ctx->pc = 0x2d554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5550: 0x46010002
    ctx->pc = 0x2d5550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d5554: 0x24e70001
    ctx->pc = 0x2d5554u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d5558: 0x28e20003
    ctx->pc = 0x2d5558u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 3));
    // 0x2d555c: 0x1440fff6
    ctx->pc = 0x2D555Cu;
    {
        const bool branch_taken_0x2d555c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D5560u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x2d555c) {
            ctx->pc = 0x2D5538u;
            goto label_2d5538;
        }
    }
    ctx->pc = 0x2D5564u;
    // 0x2d5564: 0x254a0001
    ctx->pc = 0x2d5564u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x2d5568: 0x29420004
    ctx->pc = 0x2d5568u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 4));
    // 0x2d556c: 0x1440ffee
    ctx->pc = 0x2D556Cu;
    {
        const bool branch_taken_0x2d556c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D5570u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d556c) {
            ctx->pc = 0x2D5528u;
            goto label_2d5528;
        }
    }
    ctx->pc = 0x2D5574u;
    // 0x2d5574: 0x3e00008
    ctx->pc = 0x2D5574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D5528u: goto label_2d5528;
            case 0x2D5538u: goto label_2d5538;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D557Cu;
}
