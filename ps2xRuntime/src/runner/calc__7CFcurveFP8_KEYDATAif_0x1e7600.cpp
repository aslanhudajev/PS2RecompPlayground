#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: calc__7CFcurveFP8_KEYDATAif
// Address: 0x1e7600 - 0x1e76b8
void calc__7CFcurveFP8_KEYDATAif_0x1e7600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calc__7CFcurveFP8_KEYDATAif");


    ctx->pc = 0x1e7600u;

    // 0x1e7600: 0x61080
    ctx->pc = 0x1e7600u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e7604: 0x461021
    ctx->pc = 0x1e7604u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e7608: 0x21080
    ctx->pc = 0x1e7608u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e760c: 0x452021
    ctx->pc = 0x1e760cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e7610: 0xc4810004
    ctx->pc = 0x1e7610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7614: 0xc4800018
    ctx->pc = 0x1e7614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7618: 0x3c024000
    ctx->pc = 0x1e7618u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1e761c: 0x44827000
    ctx->pc = 0x1e761cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x1e7620: 0x3c033f80
    ctx->pc = 0x1e7620u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1e7624: 0x3c024040
    ctx->pc = 0x1e7624u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16448 << 16));
    // 0x1e7628: 0x460161c1
    ctx->pc = 0x1e7628u;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1e762c: 0xc4840010
    ctx->pc = 0x1e762cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e7630: 0xc482000c
    ctx->pc = 0x1e7630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7634: 0x46073a02
    ctx->pc = 0x1e7634u;
    ctx->f[8] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x1e7638: 0x46010281
    ctx->pc = 0x1e7638u;
    ctx->f[10] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e763c: 0x44823000
    ctx->pc = 0x1e763cu;
    *(uint32_t*)&ctx->f[6] = GPR_U32(ctx, 2);
    // 0x1e7640: 0x460a52c2
    ctx->pc = 0x1e7640u;
    ctx->f[11] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x1e7644: 0x3c02c000
    ctx->pc = 0x1e7644u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49152 << 16));
    // 0x1e7648: 0xc4810024
    ctx->pc = 0x1e7648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e764c: 0xc480001c
    ctx->pc = 0x1e764cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7650: 0x46083182
    ctx->pc = 0x1e7650u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x1e7654: 0x460b3343
    ctx->pc = 0x1e7654u;
    if (ctx->f[11] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[13] = ctx->f[6] / ctx->f[11];
    // 0x1e7658: 0x46074242
    ctx->pc = 0x1e7658u;
    ctx->f[9] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x1e765c: 0x460a5b02
    ctx->pc = 0x1e765cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x1e7660: 0x46097182
    ctx->pc = 0x1e7660u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[9]);
    // 0x1e7664: 0x44821800
    ctx->pc = 0x1e7664u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x1e7668: 0x460c3183
    ctx->pc = 0x1e7668u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[6] = ctx->f[6] / ctx->f[12];
    // 0x1e766c: 0x460918c2
    ctx->pc = 0x1e766cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x1e7670: 0x460c18c3
    ctx->pc = 0x1e7670u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[12];
    // 0x1e7674: 0x460d3181
    ctx->pc = 0x1e7674u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[13]);
    // 0x1e7678: 0x44832800
    ctx->pc = 0x1e7678u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 3);
    // 0x1e767c: 0x460d18c0
    ctx->pc = 0x1e767cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
    // 0x1e7680: 0x46062940
    ctx->pc = 0x1e7680u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x1e7684: 0x4604281a
    ctx->pc = 0x1e7684u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1e7688: 0x4601191c
    ctx->pc = 0x1e7688u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x1e768c: 0x46087042
    ctx->pc = 0x1e768cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x1e7690: 0x460a08c3
    ctx->pc = 0x1e7690u;
    if (ctx->f[10] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[10];
    // 0x1e7694: 0x460b4ac3
    ctx->pc = 0x1e7694u;
    if (ctx->f[11] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[11] = copysignf(INFINITY, ctx->f[9] * 0.0f); } else ctx->f[11] = ctx->f[9] / ctx->f[11];
    // 0x1e7698: 0x460a4043
    ctx->pc = 0x1e7698u;
    if (ctx->f[10] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[1] = ctx->f[8] / ctx->f[10];
    // 0x1e769c: 0x460358c1
    ctx->pc = 0x1e769cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[11], ctx->f[3]);
    // 0x1e76a0: 0x460338c0
    ctx->pc = 0x1e76a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x1e76a4: 0x46021882
    ctx->pc = 0x1e76a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e76a8: 0x46015841
    ctx->pc = 0x1e76a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[11], ctx->f[1]);
    // 0x1e76ac: 0x46041018
    ctx->pc = 0x1e76acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1e76b0: 0x3e00008
    ctx->pc = 0x1E76B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E76B4u;
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E76B8u;
}
