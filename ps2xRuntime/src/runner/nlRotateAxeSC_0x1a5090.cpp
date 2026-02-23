#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlRotateAxeSC
// Address: 0x1a5090 - 0x1a5174
void nlRotateAxeSC_0x1a5090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlRotateAxeSC");


    ctx->pc = 0x1a5090u;

    // 0x1a5090: 0x27bdffb0
    ctx->pc = 0x1a5090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a5094: 0x7fbf0000
    ctx->pc = 0x1a5094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a5098: 0xc4820000
    ctx->pc = 0x1a5098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a509c: 0xc4830004
    ctx->pc = 0x1a509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a50a0: 0xc4840008
    ctx->pc = 0x1a50a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a50a4: 0x3c023f80
    ctx->pc = 0x1a50a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1a50a8: 0x44825800
    ctx->pc = 0x1a50a8u;
    *(uint32_t*)&ctx->f[11] = GPR_U32(ctx, 2);
    // 0x1a50ac: 0x0
    ctx->pc = 0x1a50acu;
    // NOP
    // 0x1a50b0: 0x460d5841
    ctx->pc = 0x1a50b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[11], ctx->f[13]);
    // 0x1a50b4: 0x27a40010
    ctx->pc = 0x1a50b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a50b8: 0x46031002
    ctx->pc = 0x1a50b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1a50bc: 0x46000a02
    ctx->pc = 0x1a50bcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a50c0: 0x46041802
    ctx->pc = 0x1a50c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a50c4: 0x46000a42
    ctx->pc = 0x1a50c4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a50c8: 0x46022002
    ctx->pc = 0x1a50c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1a50cc: 0x460c1142
    ctx->pc = 0x1a50ccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x1a50d0: 0x46000a82
    ctx->pc = 0x1a50d0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a50d4: 0x460c21c2
    ctx->pc = 0x1a50d4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x1a50d8: 0x46021082
    ctx->pc = 0x1a50d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1a50dc: 0x46025801
    ctx->pc = 0x1a50dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[2]);
    // 0x1a50e0: 0x460d0002
    ctx->pc = 0x1a50e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1a50e4: 0x46001000
    ctx->pc = 0x1a50e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1a50e8: 0x460c1982
    ctx->pc = 0x1a50e8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x1a50ec: 0xe7a00010
    ctx->pc = 0x1a50ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a50f0: 0x46074040
    ctx->pc = 0x1a50f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x1a50f4: 0xe7a10014
    ctx->pc = 0x1a50f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a50f8: 0x46065041
    ctx->pc = 0x1a50f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[6]);
    // 0x1a50fc: 0xe7a10018
    ctx->pc = 0x1a50fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a5100: 0x46074001
    ctx->pc = 0x1a5100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x1a5104: 0x460318c2
    ctx->pc = 0x1a5104u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1a5108: 0xe7a00020
    ctx->pc = 0x1a5108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a510c: 0x46035801
    ctx->pc = 0x1a510cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[3]);
    // 0x1a5110: 0x460d0002
    ctx->pc = 0x1a5110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1a5114: 0x46001800
    ctx->pc = 0x1a5114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1a5118: 0x46042102
    ctx->pc = 0x1a5118u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1a511c: 0xe7a00024
    ctx->pc = 0x1a511cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1a5120: 0x46045801
    ctx->pc = 0x1a5120u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[4]);
    // 0x1a5124: 0x460d0002
    ctx->pc = 0x1a5124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1a5128: 0x460548c0
    ctx->pc = 0x1a5128u;
    ctx->f[3] = FPU_ADD_S(ctx->f[9], ctx->f[5]);
    // 0x1a512c: 0x46065080
    ctx->pc = 0x1a512cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
    // 0x1a5130: 0xe7a30028
    ctx->pc = 0x1a5130u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1a5134: 0x46054841
    ctx->pc = 0x1a5134u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[5]);
    // 0x1a5138: 0xe7a20030
    ctx->pc = 0x1a5138u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a513c: 0x46002000
    ctx->pc = 0x1a513cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1a5140: 0xe7a10034
    ctx->pc = 0x1a5140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a5144: 0xe7a00038
    ctx->pc = 0x1a5144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1a5148: 0xafa00048
    ctx->pc = 0x1a5148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1a514c: 0xafa00044
    ctx->pc = 0x1a514cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1a5150: 0xafa00040
    ctx->pc = 0x1a5150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1a5154: 0xafa0003c
    ctx->pc = 0x1a5154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1a5158: 0xafa0002c
    ctx->pc = 0x1a5158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x1a515c: 0xafa0001c
    ctx->pc = 0x1a515cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1a5160: 0xc06c04e
    ctx->pc = 0x1A5160u;
    SET_GPR_U32(ctx, 31, 0x1A5168u);
    ctx->pc = 0x1A5164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5168u; }
        else if (ctx->pc != 0x1A5168u) { ctx->pc = 0x1A5168u; }
    }
    if (ctx->pc != 0x1A5168u) { return; }
    ctx->pc = 0x1A5168u;
    // 0x1a5168: 0x7bbf0000
    ctx->pc = 0x1a5168u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a516c: 0x3e00008
    ctx->pc = 0x1A516Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5170u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5174u;
}
