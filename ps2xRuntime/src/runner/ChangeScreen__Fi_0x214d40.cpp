#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ChangeScreen__Fi
// Address: 0x214d40 - 0x214e98
void ChangeScreen__Fi_0x214d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ChangeScreen__Fi");


    ctx->pc = 0x214d40u;

    // 0x214d40: 0x27bdffe0
    ctx->pc = 0x214d40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214d44: 0x7fbf0010
    ctx->pc = 0x214d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x214d48: 0x7fb00000
    ctx->pc = 0x214d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x214d4c: 0x70808628
    ctx->pc = 0x214d4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x214d50: 0xc069338
    ctx->pc = 0x214D50u;
    SET_GPR_U32(ctx, 31, 0x214D58u);
    ctx->pc = 0x214D54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1A4CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlMatrixMode_0x1a4ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D58u; }
        else if (ctx->pc != 0x214D58u) { ctx->pc = 0x214D58u; }
    }
    if (ctx->pc != 0x214D58u) { return; }
    ctx->pc = 0x214D58u;
    // 0x214d58: 0xc06c20d
    ctx->pc = 0x214D58u;
    SET_GPR_U32(ctx, 31, 0x214D60u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D60u; }
        else if (ctx->pc != 0x214D60u) { ctx->pc = 0x214D60u; }
    }
    if (ctx->pc != 0x214D60u) { return; }
    ctx->pc = 0x214D60u;
    // 0x214d60: 0x3c024780
    ctx->pc = 0x214d60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)18304 << 16));
    // 0x214d64: 0x44826800
    ctx->pc = 0x214d64u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x214d68: 0x3c023c23
    ctx->pc = 0x214d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15395 << 16));
    // 0x214d6c: 0x3442d70a
    ctx->pc = 0x214d6cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55050));
    // 0x214d70: 0x44826000
    ctx->pc = 0x214d70u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x214d74: 0xc06b21c
    ctx->pc = 0x214D74u;
    SET_GPR_U32(ctx, 31, 0x214D7Cu);
    ctx->pc = 0x1AC870u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetZBound_0x1ac870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D7Cu; }
        else if (ctx->pc != 0x214D7Cu) { ctx->pc = 0x214D7Cu; }
    }
    if (ctx->pc != 0x214D7Cu) { return; }
    ctx->pc = 0x214D7Cu;
    // 0x214d7c: 0x3c020050
    ctx->pc = 0x214d7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x214d80: 0x101880
    ctx->pc = 0x214d80u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x214d84: 0x2442fb00
    ctx->pc = 0x214d84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966016));
    // 0x214d88: 0x438021
    ctx->pc = 0x214d88u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214d8c: 0xc6000000
    ctx->pc = 0x214d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214d90: 0x3c024336
    ctx->pc = 0x214d90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17206 << 16));
    // 0x214d94: 0x34420b61
    ctx->pc = 0x214d94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2913));
    // 0x214d98: 0x44821000
    ctx->pc = 0x214d98u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x214d9c: 0x3c023f00
    ctx->pc = 0x214d9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x214da0: 0x46001002
    ctx->pc = 0x214da0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x214da4: 0x44820800
    ctx->pc = 0x214da4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x214da8: 0x0
    ctx->pc = 0x214da8u;
    // NOP
    // 0x214dac: 0x46000800
    ctx->pc = 0x214dacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x214db0: 0x3c023fb6
    ctx->pc = 0x214db0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16310 << 16));
    // 0x214db4: 0x3442db6e
    ctx->pc = 0x214db4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 56174));
    // 0x214db8: 0x46000024
    ctx->pc = 0x214db8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x214dbc: 0x44826000
    ctx->pc = 0x214dbcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x214dc0: 0x44040000
    ctx->pc = 0x214dc0u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x214dc4: 0x3c023cf5
    ctx->pc = 0x214dc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15605 << 16));
    // 0x214dc8: 0x3443c28f
    ctx->pc = 0x214dc8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 49807));
    // 0x214dcc: 0x3c02477d
    ctx->pc = 0x214dccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)18301 << 16));
    // 0x214dd0: 0x3442e800
    ctx->pc = 0x214dd0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 59392));
    // 0x214dd4: 0x44836800
    ctx->pc = 0x214dd4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 3);
    // 0x214dd8: 0x44827000
    ctx->pc = 0x214dd8u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x214ddc: 0xc06af68
    ctx->pc = 0x214DDCu;
    SET_GPR_U32(ctx, 31, 0x214DE4u);
    ctx->pc = 0x214DE0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    ctx->pc = 0x1ABDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPerspective_0x1abda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214DE4u; }
        else if (ctx->pc != 0x214DE4u) { ctx->pc = 0x214DE4u; }
    }
    if (ctx->pc != 0x214DE4u) { return; }
    ctx->pc = 0x214DE4u;
    // 0x214de4: 0xc069338
    ctx->pc = 0x214DE4u;
    SET_GPR_U32(ctx, 31, 0x214DECu);
    ctx->pc = 0x214DE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A4CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlMatrixMode_0x1a4ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214DECu; }
        else if (ctx->pc != 0x214DECu) { ctx->pc = 0x214DECu; }
    }
    if (ctx->pc != 0x214DECu) { return; }
    ctx->pc = 0x214DECu;
    // 0x214dec: 0xc06c20d
    ctx->pc = 0x214DECu;
    SET_GPR_U32(ctx, 31, 0x214DF4u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214DF4u; }
        else if (ctx->pc != 0x214DF4u) { ctx->pc = 0x214DF4u; }
    }
    if (ctx->pc != 0x214DF4u) { return; }
    ctx->pc = 0x214DF4u;
    // 0x214df4: 0xc6010000
    ctx->pc = 0x214df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214df8: 0x3c023f00
    ctx->pc = 0x214df8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x214dfc: 0x44821000
    ctx->pc = 0x214dfcu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x214e00: 0x3c024336
    ctx->pc = 0x214e00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17206 << 16));
    // 0x214e04: 0x34420b61
    ctx->pc = 0x214e04u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2913));
    // 0x214e08: 0x46011042
    ctx->pc = 0x214e08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x214e0c: 0x44820000
    ctx->pc = 0x214e0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x214e10: 0x0
    ctx->pc = 0x214e10u;
    // NOP
    // 0x214e14: 0x46010002
    ctx->pc = 0x214e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x214e18: 0x46000024
    ctx->pc = 0x214e18u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x214e1c: 0x44020000
    ctx->pc = 0x214e1cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x214e20: 0x0
    ctx->pc = 0x214e20u;
    // NOP
    // 0x214e24: 0x2243c
    ctx->pc = 0x214e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x214e28: 0xc06a030
    ctx->pc = 0x214E28u;
    SET_GPR_U32(ctx, 31, 0x214E30u);
    ctx->pc = 0x214E2Cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->pc = 0x1A80C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlTan_0x1a80c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E30u; }
        else if (ctx->pc != 0x214E30u) { ctx->pc = 0x214E30u; }
    }
    if (ctx->pc != 0x214E30u) { return; }
    ctx->pc = 0x214E30u;
    // 0x214e30: 0x3c024360
    ctx->pc = 0x214e30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17248 << 16));
    // 0x214e34: 0x44821000
    ctx->pc = 0x214e34u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x214e38: 0x0
    ctx->pc = 0x214e38u;
    // NOP
    // 0x214e3c: 0x46001003
    ctx->pc = 0x214e3cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x214e40: 0x3c023fb6
    ctx->pc = 0x214e40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16310 << 16));
    // 0x214e44: 0x3442db6e
    ctx->pc = 0x214e44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 56174));
    // 0x214e48: 0xe7808c50
    ctx->pc = 0x214e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937680), bits); }
    // 0x214e4c: 0xc7818c50
    ctx->pc = 0x214e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214e50: 0x44820000
    ctx->pc = 0x214e50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x214e54: 0x0
    ctx->pc = 0x214e54u;
    // NOP
    // 0x214e58: 0x46020843
    ctx->pc = 0x214e58u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x214e5c: 0x0
    ctx->pc = 0x214e5cu;
    // NOP
    // 0x214e60: 0x0
    ctx->pc = 0x214e60u;
    // NOP
    // 0x214e64: 0x46010303
    ctx->pc = 0x214e64u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x214e68: 0x0
    ctx->pc = 0x214e68u;
    // NOP
    // 0x214e6c: 0x0
    ctx->pc = 0x214e6cu;
    // NOP
    // 0x214e70: 0xc069e20
    ctx->pc = 0x214E70u;
    SET_GPR_U32(ctx, 31, 0x214E78u);
    ctx->pc = 0x1A7880u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan_0x1a7880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E78u; }
        else if (ctx->pc != 0x214E78u) { ctx->pc = 0x214E78u; }
    }
    if (ctx->pc != 0x214E78u) { return; }
    ctx->pc = 0x214E78u;
    // 0x214e78: 0xaf828c54
    ctx->pc = 0x214e78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937684), GPR_U32(ctx, 2));
    // 0x214e7c: 0xc06c24e
    ctx->pc = 0x214E7Cu;
    SET_GPR_U32(ctx, 31, 0x214E84u);
    ctx->pc = 0x214E80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E84u; }
        else if (ctx->pc != 0x214E84u) { ctx->pc = 0x214E84u; }
    }
    if (ctx->pc != 0x214E84u) { return; }
    ctx->pc = 0x214E84u;
    // 0x214e84: 0xe7808c58
    ctx->pc = 0x214e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937688), bits); }
    // 0x214e88: 0x7bbf0010
    ctx->pc = 0x214e88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214e8c: 0x7bb00000
    ctx->pc = 0x214e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214e90: 0x3e00008
    ctx->pc = 0x214E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214E94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x214E98u;
}
