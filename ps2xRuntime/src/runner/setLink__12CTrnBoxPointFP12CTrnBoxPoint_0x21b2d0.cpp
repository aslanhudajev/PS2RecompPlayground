#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setLink__12CTrnBoxPointFP12CTrnBoxPoint
// Address: 0x21b2d0 - 0x21b38c
void setLink__12CTrnBoxPointFP12CTrnBoxPoint_0x21b2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setLink__12CTrnBoxPointFP12CTrnBoxPoint");


    ctx->pc = 0x21b2d0u;

    // 0x21b2d0: 0x27bdffd0
    ctx->pc = 0x21b2d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21b2d4: 0x7fbf0020
    ctx->pc = 0x21b2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x21b2d8: 0x7fb10010
    ctx->pc = 0x21b2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21b2dc: 0x7fb00000
    ctx->pc = 0x21b2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21b2e0: 0xc4830004
    ctx->pc = 0x21b2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21b2e4: 0xc4a20004
    ctx->pc = 0x21b2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21b2e8: 0xc4850000
    ctx->pc = 0x21b2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21b2ec: 0xc4a40000
    ctx->pc = 0x21b2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21b2f0: 0xc4810008
    ctx->pc = 0x21b2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b2f4: 0xc4a00008
    ctx->pc = 0x21b2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b2f8: 0x70808e28
    ctx->pc = 0x21b2f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21b2fc: 0x46021881
    ctx->pc = 0x21b2fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21b300: 0x70a08628
    ctx->pc = 0x21b300u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x21b304: 0x460008c1
    ctx->pc = 0x21b304u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21b308: 0x46042901
    ctx->pc = 0x21b308u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x21b30c: 0x46042042
    ctx->pc = 0x21b30cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x21b310: 0x46021002
    ctx->pc = 0x21b310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x21b314: 0x46000818
    ctx->pc = 0x21b314u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21b318: 0xc06c2a8
    ctx->pc = 0x21B318u;
    SET_GPR_U32(ctx, 31, 0x21B320u);
    ctx->pc = 0x21B31Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B320u; }
        else if (ctx->pc != 0x21B320u) { ctx->pc = 0x21B320u; }
    }
    if (ctx->pc != 0x21B320u) { return; }
    ctx->pc = 0x21B320u;
    // 0x21b320: 0x8e230124
    ctx->pc = 0x21b320u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x21b324: 0x31880
    ctx->pc = 0x21b324u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b328: 0x711821
    ctx->pc = 0x21b328u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x21b32c: 0xac7000a4
    ctx->pc = 0x21b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 16));
    // 0x21b330: 0x8e230124
    ctx->pc = 0x21b330u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x21b334: 0x31880
    ctx->pc = 0x21b334u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b338: 0x711821
    ctx->pc = 0x21b338u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x21b33c: 0xe4600024
    ctx->pc = 0x21b33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x21b340: 0x8e230124
    ctx->pc = 0x21b340u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x21b344: 0x24630001
    ctx->pc = 0x21b344u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x21b348: 0xae230124
    ctx->pc = 0x21b348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 3));
    // 0x21b34c: 0x8e030124
    ctx->pc = 0x21b34cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x21b350: 0x31880
    ctx->pc = 0x21b350u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b354: 0x701821
    ctx->pc = 0x21b354u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x21b358: 0xac7100a4
    ctx->pc = 0x21b358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 17));
    // 0x21b35c: 0x8e030124
    ctx->pc = 0x21b35cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x21b360: 0x31880
    ctx->pc = 0x21b360u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b364: 0x701821
    ctx->pc = 0x21b364u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x21b368: 0xe4600024
    ctx->pc = 0x21b368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x21b36c: 0x8e030124
    ctx->pc = 0x21b36cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x21b370: 0x24630001
    ctx->pc = 0x21b370u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x21b374: 0xae030124
    ctx->pc = 0x21b374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
    // 0x21b378: 0x7bbf0020
    ctx->pc = 0x21b378u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b37c: 0x7bb10010
    ctx->pc = 0x21b37cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b380: 0x7bb00000
    ctx->pc = 0x21b380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b384: 0x3e00008
    ctx->pc = 0x21B384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B388u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B38Cu;
}
