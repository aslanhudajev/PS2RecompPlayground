#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: writePol__6CClothFv
// Address: 0x1d2870 - 0x1d2918
void writePol__6CClothFv_0x1d2870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("writePol__6CClothFv");


    ctx->pc = 0x1d2870u;

    // 0x1d2870: 0x70004628
    ctx->pc = 0x1d2870u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d2874: 0x70005628
    ctx->pc = 0x1d2874u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d2878: 0x70005e28
    ctx->pc = 0x1d2878u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d287c: 0x10000020
    ctx->pc = 0x1D287Cu;
    {
        const bool branch_taken_0x1d287c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2880u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x1d287c) {
            ctx->pc = 0x1D2900u;
            goto label_1d2900;
        }
    }
    ctx->pc = 0x1D2884u;
label_1d2884:
    // 0x1d2884: 0x8c870014
    ctx->pc = 0x1d2884u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1d2888: 0x8c830024
    ctx->pc = 0x1d2888u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d288c: 0x8c850000
    ctx->pc = 0x1d288cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d2890: 0xea3821
    ctx->pc = 0x1d2890u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1d2894: 0x6b1821
    ctx->pc = 0x1d2894u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1d2898: 0x84e70000
    ctx->pc = 0x1d2898u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d289c: 0x8c690000
    ctx->pc = 0x1d289cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d28a0: 0x71880
    ctx->pc = 0x1d28a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1d28a4: 0x671821
    ctx->pc = 0x1d28a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d28a8: 0x31900
    ctx->pc = 0x1d28a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d28ac: 0xa31821
    ctx->pc = 0x1d28acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d28b0: 0xc461001c
    ctx->pc = 0x1d28b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d28b4: 0xc4620020
    ctx->pc = 0x1d28b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d28b8: 0xc4600018
    ctx->pc = 0x1d28b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d28bc: 0xe5200000
    ctx->pc = 0x1d28bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1d28c0: 0xe5210004
    ctx->pc = 0x1d28c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x1d28c4: 0xe5220008
    ctx->pc = 0x1d28c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x1d28c8: 0x8483001c
    ctx->pc = 0x1d28c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1d28cc: 0x54660009
    ctx->pc = 0x1D28CCu;
    {
        const bool branch_taken_0x1d28cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        if (branch_taken_0x1d28cc) {
            ctx->pc = 0x1D28D0u;
            SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 2));
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D28D4u;
    // 0x1d28d4: 0x8c850030
    ctx->pc = 0x1d28d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1d28d8: 0x8c830034
    ctx->pc = 0x1d28d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1d28dc: 0xab2821
    ctx->pc = 0x1d28dcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1d28e0: 0x6b1821
    ctx->pc = 0x1d28e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1d28e4: 0x8ca50000
    ctx->pc = 0x1d28e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d28e8: 0x8c630000
    ctx->pc = 0x1d28e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d28ec: 0xac650000
    ctx->pc = 0x1d28ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1d28f0: 0x254a0002
    ctx->pc = 0x1d28f0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 2));
label_1d28f4:
    // 0x1d28f4: 0x256b0004
    ctx->pc = 0x1d28f4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
    // 0x1d28f8: 0x25080001
    ctx->pc = 0x1d28f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d28fc: 0x0
    ctx->pc = 0x1d28fcu;
    // NOP
label_1d2900:
    // 0x1d2900: 0x8483000c
    ctx->pc = 0x1d2900u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d2904: 0x103182a
    ctx->pc = 0x1d2904u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 3)));
    // 0x1d2908: 0x1460ffde
    ctx->pc = 0x1D2908u;
    {
        const bool branch_taken_0x1d2908 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d2908) {
            ctx->pc = 0x1D2884u;
            goto label_1d2884;
        }
    }
    ctx->pc = 0x1D2910u;
    // 0x1d2910: 0x3e00008
    ctx->pc = 0x1D2910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2884u: goto label_1d2884;
            case 0x1D28F4u: goto label_1d28f4;
            case 0x1D2900u: goto label_1d2900;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2918u;
}
