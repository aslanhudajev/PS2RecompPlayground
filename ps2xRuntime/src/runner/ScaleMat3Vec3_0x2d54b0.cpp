#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScaleMat3Vec3
// Address: 0x2d54b0 - 0x2d5514
void ScaleMat3Vec3_0x2d54b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d54b0u;

    // 0x2d54b0: 0x80582d
    ctx->pc = 0x2d54b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d54b4: 0x502d
    ctx->pc = 0x2d54b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d54b8: 0x382d
    ctx->pc = 0x2d54b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d54bc: 0x0
    ctx->pc = 0x2d54bcu;
    // NOP
label_2d54c0:
    // 0x2d54c0: 0xa1100
    ctx->pc = 0x2d54c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 4));
    // 0x2d54c4: 0x454821
    ctx->pc = 0x2d54c4u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d54c8: 0x4b4021
    ctx->pc = 0x2d54c8u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2d54cc: 0x0
    ctx->pc = 0x2d54ccu;
    // NOP
label_2d54d0:
    // 0x2d54d0: 0x71080
    ctx->pc = 0x2d54d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d54d4: 0x492021
    ctx->pc = 0x2d54d4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2d54d8: 0x481821
    ctx->pc = 0x2d54d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2d54dc: 0x461021
    ctx->pc = 0x2d54dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d54e0: 0xc4600000
    ctx->pc = 0x2d54e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d54e4: 0xc4410000
    ctx->pc = 0x2d54e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d54e8: 0x46010002
    ctx->pc = 0x2d54e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d54ec: 0x24e70001
    ctx->pc = 0x2d54ecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d54f0: 0x28e20003
    ctx->pc = 0x2d54f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 3));
    // 0x2d54f4: 0x1440fff6
    ctx->pc = 0x2D54F4u;
    {
        const bool branch_taken_0x2d54f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D54F8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x2d54f4) {
            ctx->pc = 0x2D54D0u;
            goto label_2d54d0;
        }
    }
    ctx->pc = 0x2D54FCu;
    // 0x2d54fc: 0x254a0001
    ctx->pc = 0x2d54fcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x2d5500: 0x29420003
    ctx->pc = 0x2d5500u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 3));
    // 0x2d5504: 0x1440ffee
    ctx->pc = 0x2D5504u;
    {
        const bool branch_taken_0x2d5504 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D5508u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d5504) {
            ctx->pc = 0x2D54C0u;
            goto label_2d54c0;
        }
    }
    ctx->pc = 0x2D550Cu;
    // 0x2d550c: 0x3e00008
    ctx->pc = 0x2D550Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D54C0u: goto label_2d54c0;
            case 0x2D54D0u: goto label_2d54d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D5514u;
}
