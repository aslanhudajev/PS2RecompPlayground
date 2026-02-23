#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: checkEndCP__14CTrnKomonoBaseFv
// Address: 0x21b5a0 - 0x21b61c
void checkEndCP__14CTrnKomonoBaseFv_0x21b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("checkEndCP__14CTrnKomonoBaseFv");


    ctx->pc = 0x21b5a0u;

    // 0x21b5a0: 0x8f878c48
    ctx->pc = 0x21b5a0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x21b5a4: 0x8c880000
    ctx->pc = 0x21b5a4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b5a8: 0x10000017
    ctx->pc = 0x21B5A8u;
    {
        const bool branch_taken_0x21b5a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B5ACu;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21b5a8) {
            ctx->pc = 0x21B608u;
            goto label_21b608;
        }
    }
    ctx->pc = 0x21B5B0u;
label_21b5b0:
    // 0x21b5b0: 0x8ce50004
    ctx->pc = 0x21b5b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21b5b4: 0x8c820004
    ctx->pc = 0x21b5b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21b5b8: 0x51840
    ctx->pc = 0x21b5b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x21b5bc: 0x651821
    ctx->pc = 0x21b5bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21b5c0: 0x31880
    ctx->pc = 0x21b5c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b5c4: 0x651821
    ctx->pc = 0x21b5c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21b5c8: 0x31900
    ctx->pc = 0x21b5c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x21b5cc: 0xe32821
    ctx->pc = 0x21b5ccu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21b5d0: 0x84a300d0
    ctx->pc = 0x21b5d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x21b5d4: 0x5462000a
    ctx->pc = 0x21B5D4u;
    {
        const bool branch_taken_0x21b5d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x21b5d4) {
            ctx->pc = 0x21B5D8u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
            ctx->pc = 0x21B600u;
            goto label_21b600;
        }
    }
    ctx->pc = 0x21B5DCu;
    // 0x21b5dc: 0xc4a100c0
    ctx->pc = 0x21b5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b5e0: 0xc4800018
    ctx->pc = 0x21b5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b5e4: 0x46000834
    ctx->pc = 0x21b5e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b5e8: 0x0
    ctx->pc = 0x21b5e8u;
    // NOP
    // 0x21b5ec: 0x45010003
    ctx->pc = 0x21B5ECu;
    {
        const bool branch_taken_0x21b5ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B5F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21b5ec) {
            ctx->pc = 0x21B5FCu;
            goto label_21b5fc;
        }
    }
    ctx->pc = 0x21B5F4u;
    // 0x21b5f4: 0x10000007
    ctx->pc = 0x21B5F4u;
    {
        const bool branch_taken_0x21b5f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21b5f4) {
            ctx->pc = 0x21B614u;
            goto label_21b614;
        }
    }
    ctx->pc = 0x21B5FCu;
label_21b5fc:
    // 0x21b5fc: 0x24840004
    ctx->pc = 0x21b5fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
label_21b600:
    // 0x21b600: 0x24c60001
    ctx->pc = 0x21b600u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x21b604: 0x0
    ctx->pc = 0x21b604u;
    // NOP
label_21b608:
    // 0x21b608: 0xc8102a
    ctx->pc = 0x21b608u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 8)));
    // 0x21b60c: 0x1440ffe8
    ctx->pc = 0x21B60Cu;
    {
        const bool branch_taken_0x21b60c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21B610u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21b60c) {
            ctx->pc = 0x21B5B0u;
            goto label_21b5b0;
        }
    }
    ctx->pc = 0x21B614u;
label_21b614:
    // 0x21b614: 0x3e00008
    ctx->pc = 0x21B614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21B5B0u: goto label_21b5b0;
            case 0x21B5FCu: goto label_21b5fc;
            case 0x21B600u: goto label_21b600;
            case 0x21B608u: goto label_21b608;
            case 0x21B614u: goto label_21b614;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21B61Cu;
}
