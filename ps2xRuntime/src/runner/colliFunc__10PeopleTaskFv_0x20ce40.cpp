#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: colliFunc__10PeopleTaskFv
// Address: 0x20ce40 - 0x20d144
void colliFunc__10PeopleTaskFv_0x20ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("colliFunc__10PeopleTaskFv");


    ctx->pc = 0x20ce40u;

    // 0x20ce40: 0x27bdffa0
    ctx->pc = 0x20ce40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20ce44: 0x7fbf0010
    ctx->pc = 0x20ce44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20ce48: 0x7fb00000
    ctx->pc = 0x20ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20ce4c: 0xc083454
    ctx->pc = 0x20CE4Cu;
    SET_GPR_U32(ctx, 31, 0x20CE54u);
    ctx->pc = 0x20CE50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20D150u;
    {
        const uint32_t __entryPc = ctx->pc;
        colliFuncSub__10PeopleTaskFv_0x20d150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE54u; }
        else if (ctx->pc != 0x20CE54u) { ctx->pc = 0x20CE54u; }
    }
    if (ctx->pc != 0x20CE54u) { return; }
    ctx->pc = 0x20CE54u;
    // 0x20ce54: 0x8e03000c
    ctx->pc = 0x20ce54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20ce58: 0x30638000
    ctx->pc = 0x20ce58u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32768));
    // 0x20ce5c: 0x14600082
    ctx->pc = 0x20CE5Cu;
    {
        const bool branch_taken_0x20ce5c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20ce5c) {
            ctx->pc = 0x20D068u;
            goto label_20d068;
        }
    }
    ctx->pc = 0x20CE64u;
    // 0x20ce64: 0x8e021cf4
    ctx->pc = 0x20ce64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7412)));
    // 0x20ce68: 0x1040002c
    ctx->pc = 0x20CE68u;
    {
        const bool branch_taken_0x20ce68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20ce68) {
            ctx->pc = 0x20CF1Cu;
            goto label_20cf1c;
        }
    }
    ctx->pc = 0x20CE70u;
    // 0x20ce70: 0x8c44000c
    ctx->pc = 0x20ce70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x20ce74: 0xc6001cf8
    ctx->pc = 0x20ce74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ce78: 0x3c023dcc
    ctx->pc = 0x20ce78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15820 << 16));
    // 0x20ce7c: 0x3442cccd
    ctx->pc = 0x20ce7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x20ce80: 0x44820800
    ctx->pc = 0x20ce80u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x20ce84: 0x3c021000
    ctx->pc = 0x20ce84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x20ce88: 0x821824
    ctx->pc = 0x20ce88u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20ce8c: 0x24020001
    ctx->pc = 0x20ce8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ce90: 0x3100a
    ctx->pc = 0x20ce90u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x20ce94: 0x14400007
    ctx->pc = 0x20CE94u;
    {
        const bool branch_taken_0x20ce94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20CE98u;
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x20ce94) {
            ctx->pc = 0x20CEB4u;
            goto label_20ceb4;
        }
    }
    ctx->pc = 0x20CE9Cu;
    // 0x20ce9c: 0x3c020800
    ctx->pc = 0x20ce9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)2048 << 16));
    // 0x20cea0: 0x821824
    ctx->pc = 0x20cea0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20cea4: 0x24020001
    ctx->pc = 0x20cea4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cea8: 0x3100a
    ctx->pc = 0x20cea8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x20ceac: 0x10400006
    ctx->pc = 0x20CEACu;
    {
        const bool branch_taken_0x20ceac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20ceac) {
            ctx->pc = 0x20CEC8u;
            goto label_20cec8;
        }
    }
    ctx->pc = 0x20CEB4u;
label_20ceb4:
    // 0x20ceb4: 0x3c023fd9
    ctx->pc = 0x20ceb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16345 << 16));
    // 0x20ceb8: 0x3442999a
    ctx->pc = 0x20ceb8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x20cebc: 0x44820000
    ctx->pc = 0x20cebcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x20cec0: 0x0
    ctx->pc = 0x20cec0u;
    // NOP
    // 0x20cec4: 0x46001082
    ctx->pc = 0x20cec4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_20cec8:
    // 0x20cec8: 0xc6001cfc
    ctx->pc = 0x20cec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cecc: 0x8e020030
    ctx->pc = 0x20ceccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20ced0: 0x72002628
    ctx->pc = 0x20ced0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20ced4: 0x46020042
    ctx->pc = 0x20ced4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20ced8: 0xc4400000
    ctx->pc = 0x20ced8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cedc: 0x46010000
    ctx->pc = 0x20cedcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20cee0: 0xe4400000
    ctx->pc = 0x20cee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20cee4: 0xc6001d00
    ctx->pc = 0x20cee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cee8: 0x8e020030
    ctx->pc = 0x20cee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20ceec: 0x46020042
    ctx->pc = 0x20ceecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20cef0: 0xc4400004
    ctx->pc = 0x20cef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cef4: 0x46010000
    ctx->pc = 0x20cef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20cef8: 0xe4400004
    ctx->pc = 0x20cef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x20cefc: 0xc6001d04
    ctx->pc = 0x20cefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cf00: 0x8e020030
    ctx->pc = 0x20cf00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20cf04: 0x46020042
    ctx->pc = 0x20cf04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20cf08: 0xc4400008
    ctx->pc = 0x20cf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cf0c: 0x46010000
    ctx->pc = 0x20cf0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20cf10: 0xc083454
    ctx->pc = 0x20CF10u;
    SET_GPR_U32(ctx, 31, 0x20CF18u);
    ctx->pc = 0x20CF14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->pc = 0x20D150u;
    {
        const uint32_t __entryPc = ctx->pc;
        colliFuncSub__10PeopleTaskFv_0x20d150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CF18u; }
        else if (ctx->pc != 0x20CF18u) { ctx->pc = 0x20CF18u; }
    }
    if (ctx->pc != 0x20CF18u) { return; }
    ctx->pc = 0x20CF18u;
    // 0x20cf18: 0xae001cf4
    ctx->pc = 0x20cf18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7412), GPR_U32(ctx, 0));
label_20cf1c:
    // 0x20cf1c: 0xc6001ce8
    ctx->pc = 0x20cf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cf20: 0x72002628
    ctx->pc = 0x20cf20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20cf24: 0x27a50030
    ctx->pc = 0x20cf24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x20cf28: 0xe7a00030
    ctx->pc = 0x20cf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x20cf2c: 0xc6001cec
    ctx->pc = 0x20cf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cf30: 0xe7a00034
    ctx->pc = 0x20cf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x20cf34: 0xc6001cf0
    ctx->pc = 0x20cf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cf38: 0xe7a00038
    ctx->pc = 0x20cf38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x20cf3c: 0xc6001ce4
    ctx->pc = 0x20cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cf40: 0xc24aca4
    ctx->pc = 0x20CF40u;
    SET_GPR_U32(ctx, 31, 0x20CF48u);
    ctx->pc = 0x20CF44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x92B290u;
    {
        const uint32_t __entryPc = ctx->pc;
        Colli_Ball_VS_Balls__FP9EnemyTaskP9COLI_BALL_0x92b290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CF48u; }
        else if (ctx->pc != 0x20CF48u) { ctx->pc = 0x20CF48u; }
    }
    if (ctx->pc != 0x20CF48u) { return; }
    ctx->pc = 0x20CF48u;
    // 0x20cf48: 0x18400025
    ctx->pc = 0x20CF48u;
    {
        const bool branch_taken_0x20cf48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20cf48) {
            ctx->pc = 0x20CFE0u;
            goto label_20cfe0;
        }
    }
    ctx->pc = 0x20CF50u;
    // 0x20cf50: 0xc780898c
    ctx->pc = 0x20cf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cf54: 0x3c023dcc
    ctx->pc = 0x20cf54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15820 << 16));
    // 0x20cf58: 0x8e04000c
    ctx->pc = 0x20cf58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20cf5c: 0x3442cccd
    ctx->pc = 0x20cf5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x20cf60: 0x44820800
    ctx->pc = 0x20cf60u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x20cf64: 0x24030001
    ctx->pc = 0x20cf64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cf68: 0x3c021000
    ctx->pc = 0x20cf68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x20cf6c: 0x821024
    ctx->pc = 0x20cf6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20cf70: 0x2180a
    ctx->pc = 0x20cf70u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x20cf74: 0x14600007
    ctx->pc = 0x20CF74u;
    {
        const bool branch_taken_0x20cf74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x20CF78u;
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x20cf74) {
            ctx->pc = 0x20CF94u;
            goto label_20cf94;
        }
    }
    ctx->pc = 0x20CF7Cu;
    // 0x20cf7c: 0x3c020800
    ctx->pc = 0x20cf7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)2048 << 16));
    // 0x20cf80: 0x821824
    ctx->pc = 0x20cf80u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20cf84: 0x24020001
    ctx->pc = 0x20cf84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cf88: 0x3100a
    ctx->pc = 0x20cf88u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x20cf8c: 0x10400006
    ctx->pc = 0x20CF8Cu;
    {
        const bool branch_taken_0x20cf8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20cf8c) {
            ctx->pc = 0x20CFA8u;
            goto label_20cfa8;
        }
    }
    ctx->pc = 0x20CF94u;
label_20cf94:
    // 0x20cf94: 0x3c023fd9
    ctx->pc = 0x20cf94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16345 << 16));
    // 0x20cf98: 0x3442999a
    ctx->pc = 0x20cf98u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x20cf9c: 0x44820000
    ctx->pc = 0x20cf9cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x20cfa0: 0x0
    ctx->pc = 0x20cfa0u;
    // NOP
    // 0x20cfa4: 0x46001082
    ctx->pc = 0x20cfa4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_20cfa8:
    // 0x20cfa8: 0x8e020030
    ctx->pc = 0x20cfa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20cfac: 0xc780896c
    ctx->pc = 0x20cfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cfb0: 0x72002628
    ctx->pc = 0x20cfb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20cfb4: 0xc4410000
    ctx->pc = 0x20cfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cfb8: 0x46020002
    ctx->pc = 0x20cfb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20cfbc: 0x46000800
    ctx->pc = 0x20cfbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20cfc0: 0xe4400000
    ctx->pc = 0x20cfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20cfc4: 0x8e020030
    ctx->pc = 0x20cfc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20cfc8: 0xc7808964
    ctx->pc = 0x20cfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cfcc: 0xc4410008
    ctx->pc = 0x20cfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cfd0: 0x46020002
    ctx->pc = 0x20cfd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20cfd4: 0x46000800
    ctx->pc = 0x20cfd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20cfd8: 0xc083454
    ctx->pc = 0x20CFD8u;
    SET_GPR_U32(ctx, 31, 0x20CFE0u);
    ctx->pc = 0x20CFDCu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->pc = 0x20D150u;
    {
        const uint32_t __entryPc = ctx->pc;
        colliFuncSub__10PeopleTaskFv_0x20d150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CFE0u; }
        else if (ctx->pc != 0x20CFE0u) { ctx->pc = 0x20CFE0u; }
    }
    if (ctx->pc != 0x20CFE0u) { return; }
    ctx->pc = 0x20CFE0u;
label_20cfe0:
    // 0x20cfe0: 0xc6001ce8
    ctx->pc = 0x20cfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cfe4: 0x72002628
    ctx->pc = 0x20cfe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20cfe8: 0x27a50020
    ctx->pc = 0x20cfe8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x20cfec: 0xe7a00020
    ctx->pc = 0x20cfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x20cff0: 0xc6001cec
    ctx->pc = 0x20cff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cff4: 0xe7a00024
    ctx->pc = 0x20cff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x20cff8: 0xc6001cf0
    ctx->pc = 0x20cff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cffc: 0xe7a00028
    ctx->pc = 0x20cffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x20d000: 0xc6001ce4
    ctx->pc = 0x20d000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d004: 0xc24ad64
    ctx->pc = 0x20D004u;
    SET_GPR_U32(ctx, 31, 0x20D00Cu);
    ctx->pc = 0x20D008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x92B590u;
    {
        const uint32_t __entryPc = ctx->pc;
        Colli_Ball_VS_Models__FP9EnemyTaskP9COLI_BALL_0x92b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D00Cu; }
        else if (ctx->pc != 0x20D00Cu) { ctx->pc = 0x20D00Cu; }
    }
    if (ctx->pc != 0x20D00Cu) { return; }
    ctx->pc = 0x20D00Cu;
    // 0x20d00c: 0x18400016
    ctx->pc = 0x20D00Cu;
    {
        const bool branch_taken_0x20d00c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20d00c) {
            ctx->pc = 0x20D068u;
            goto label_20d068;
        }
    }
    ctx->pc = 0x20D014u;
    // 0x20d014: 0x8e020030
    ctx->pc = 0x20d014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20d018: 0xc782898c
    ctx->pc = 0x20d018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20d01c: 0xc780896c
    ctx->pc = 0x20d01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d020: 0x72002628
    ctx->pc = 0x20d020u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20d024: 0xc4410000
    ctx->pc = 0x20d024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d028: 0x46020002
    ctx->pc = 0x20d028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20d02c: 0x46000800
    ctx->pc = 0x20d02cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20d030: 0xe4400000
    ctx->pc = 0x20d030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20d034: 0x8e020030
    ctx->pc = 0x20d034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20d038: 0xc7808968
    ctx->pc = 0x20d038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d03c: 0xc4410004
    ctx->pc = 0x20d03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d040: 0x46020002
    ctx->pc = 0x20d040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20d044: 0x46000800
    ctx->pc = 0x20d044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20d048: 0xe4400004
    ctx->pc = 0x20d048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x20d04c: 0x8e020030
    ctx->pc = 0x20d04cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20d050: 0xc7808964
    ctx->pc = 0x20d050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d054: 0xc4410008
    ctx->pc = 0x20d054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d058: 0x46020002
    ctx->pc = 0x20d058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20d05c: 0x46000800
    ctx->pc = 0x20d05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20d060: 0xc083454
    ctx->pc = 0x20D060u;
    SET_GPR_U32(ctx, 31, 0x20D068u);
    ctx->pc = 0x20D064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->pc = 0x20D150u;
    {
        const uint32_t __entryPc = ctx->pc;
        colliFuncSub__10PeopleTaskFv_0x20d150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D068u; }
        else if (ctx->pc != 0x20D068u) { ctx->pc = 0x20D068u; }
    }
    if (ctx->pc != 0x20D068u) { return; }
    ctx->pc = 0x20D068u;
label_20d068:
    // 0x20d068: 0x8e04000c
    ctx->pc = 0x20d068u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20d06c: 0x3c030004
    ctx->pc = 0x20d06cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
    // 0x20d070: 0x831824
    ctx->pc = 0x20d070u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20d074: 0x1460002b
    ctx->pc = 0x20D074u;
    {
        const bool branch_taken_0x20d074 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20d074) {
            ctx->pc = 0x20D124u;
            goto label_20d124;
        }
    }
    ctx->pc = 0x20D07Cu;
    // 0x20d07c: 0x8e030030
    ctx->pc = 0x20d07cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20d080: 0x3c02447a
    ctx->pc = 0x20d080u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17530 << 16));
    // 0x20d084: 0x44820800
    ctx->pc = 0x20d084u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x20d088: 0x72002628
    ctx->pc = 0x20d088u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20d08c: 0x27a50040
    ctx->pc = 0x20d08cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x20d090: 0xc4600000
    ctx->pc = 0x20d090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d094: 0xe7a0004c
    ctx->pc = 0x20d094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x20d098: 0xe7a00040
    ctx->pc = 0x20d098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x20d09c: 0x8e020030
    ctx->pc = 0x20d09cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20d0a0: 0xc4400008
    ctx->pc = 0x20d0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d0a4: 0xe7a00054
    ctx->pc = 0x20d0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x20d0a8: 0xe7a00048
    ctx->pc = 0x20d0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x20d0ac: 0x8e020030
    ctx->pc = 0x20d0acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20d0b0: 0xc4400004
    ctx->pc = 0x20d0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d0b4: 0x46010001
    ctx->pc = 0x20d0b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20d0b8: 0xe7a00044
    ctx->pc = 0x20d0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x20d0bc: 0x8e020030
    ctx->pc = 0x20d0bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20d0c0: 0xc4400004
    ctx->pc = 0x20d0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d0c4: 0x46000800
    ctx->pc = 0x20d0c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20d0c8: 0xc24ae40
    ctx->pc = 0x20D0C8u;
    SET_GPR_U32(ctx, 31, 0x20D0D0u);
    ctx->pc = 0x20D0CCu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->pc = 0x92B900u;
    {
        const uint32_t __entryPc = ctx->pc;
        Colli_Vector_VS_Models__FP9EnemyTaskP8COLI_VEC_0x92b900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0D0u; }
        else if (ctx->pc != 0x20D0D0u) { ctx->pc = 0x20D0D0u; }
    }
    if (ctx->pc != 0x20D0D0u) { return; }
    ctx->pc = 0x20D0D0u;
    // 0x20d0d0: 0x1040000c
    ctx->pc = 0x20D0D0u;
    {
        const bool branch_taken_0x20d0d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20d0d0) {
            ctx->pc = 0x20D104u;
            goto label_20d104;
        }
    }
    ctx->pc = 0x20D0D8u;
    // 0x20d0d8: 0x8e041d74
    ctx->pc = 0x20d0d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7540)));
    // 0x20d0dc: 0x3c033e4c
    ctx->pc = 0x20d0dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15948 << 16));
    // 0x20d0e0: 0x3463cccd
    ctx->pc = 0x20d0e0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x20d0e4: 0x44830800
    ctx->pc = 0x20d0e4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x20d0e8: 0x34830040
    ctx->pc = 0x20d0e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 64));
    // 0x20d0ec: 0xae031d74
    ctx->pc = 0x20d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7540), GPR_U32(ctx, 3));
    // 0x20d0f0: 0xc7808974
    ctx->pc = 0x20d0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d0f4: 0x8e030030
    ctx->pc = 0x20d0f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20d0f8: 0x46000800
    ctx->pc = 0x20d0f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20d0fc: 0x1000000d
    ctx->pc = 0x20D0FCu;
    {
        const bool branch_taken_0x20d0fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D100u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        if (branch_taken_0x20d0fc) {
            ctx->pc = 0x20D134u;
            goto label_20d134;
        }
    }
    ctx->pc = 0x20D104u;
label_20d104:
    // 0x20d104: 0x8e041d74
    ctx->pc = 0x20d104u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7540)));
    // 0x20d108: 0x2403ffbf
    ctx->pc = 0x20d108u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x20d10c: 0x831824
    ctx->pc = 0x20d10cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20d110: 0xae031d74
    ctx->pc = 0x20d110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7540), GPR_U32(ctx, 3));
    // 0x20d114: 0x8e030030
    ctx->pc = 0x20d114u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20d118: 0xc7808bd8
    ctx->pc = 0x20d118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d11c: 0x10000005
    ctx->pc = 0x20D11Cu;
    {
        const bool branch_taken_0x20d11c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D120u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        if (branch_taken_0x20d11c) {
            ctx->pc = 0x20D134u;
            goto label_20d134;
        }
    }
    ctx->pc = 0x20D124u;
label_20d124:
    // 0x20d124: 0x8e041d74
    ctx->pc = 0x20d124u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7540)));
    // 0x20d128: 0x2403ffbf
    ctx->pc = 0x20d128u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x20d12c: 0x831824
    ctx->pc = 0x20d12cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20d130: 0xae031d74
    ctx->pc = 0x20d130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7540), GPR_U32(ctx, 3));
label_20d134:
    // 0x20d134: 0x7bbf0010
    ctx->pc = 0x20d134u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d138: 0x7bb00000
    ctx->pc = 0x20d138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d13c: 0x3e00008
    ctx->pc = 0x20D13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D140u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20CEB4u: goto label_20ceb4;
            case 0x20CEC8u: goto label_20cec8;
            case 0x20CF1Cu: goto label_20cf1c;
            case 0x20CF94u: goto label_20cf94;
            case 0x20CFA8u: goto label_20cfa8;
            case 0x20CFE0u: goto label_20cfe0;
            case 0x20D068u: goto label_20d068;
            case 0x20D104u: goto label_20d104;
            case 0x20D124u: goto label_20d124;
            case 0x20D134u: goto label_20d134;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20D144u;
}
