#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: BeginScreen__Fi
// Address: 0x214b90 - 0x214d3c
void BeginScreen__Fi_0x214b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BeginScreen__Fi");


    ctx->pc = 0x214b90u;

    // 0x214b90: 0x27bdffe0
    ctx->pc = 0x214b90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214b94: 0x7fbf0010
    ctx->pc = 0x214b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x214b98: 0x7fb00000
    ctx->pc = 0x214b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x214b9c: 0x3c010050
    ctx->pc = 0x214b9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x214ba0: 0x8423e504
    ctx->pc = 0x214ba0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x214ba4: 0x24020014
    ctx->pc = 0x214ba4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x214ba8: 0x10620004
    ctx->pc = 0x214BA8u;
    {
        const bool branch_taken_0x214ba8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x214BACu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x214ba8) {
            ctx->pc = 0x214BBCu;
            goto label_214bbc;
        }
    }
    ctx->pc = 0x214BB0u;
    // 0x214bb0: 0x87828b58
    ctx->pc = 0x214bb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937432)));
    // 0x214bb4: 0x10400006
    ctx->pc = 0x214BB4u;
    {
        const bool branch_taken_0x214bb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x214BB8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x214bb4) {
            ctx->pc = 0x214BD0u;
            goto label_214bd0;
        }
    }
    ctx->pc = 0x214BBCu;
label_214bbc:
    // 0x214bbc: 0x70002628
    ctx->pc = 0x214bbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x214bc0: 0xc06bb90
    ctx->pc = 0x214BC0u;
    SET_GPR_U32(ctx, 31, 0x214BC8u);
    ctx->pc = 0x214BC4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AEE40u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetDisplayOffset_0x1aee40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214BC8u; }
        else if (ctx->pc != 0x214BC8u) { ctx->pc = 0x214BC8u; }
    }
    if (ctx->pc != 0x214BC8u) { return; }
    ctx->pc = 0x214BC8u;
    // 0x214bc8: 0x10000007
    ctx->pc = 0x214BC8u;
    {
        const bool branch_taken_0x214bc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x214bc8) {
            ctx->pc = 0x214BE8u;
            goto label_214be8;
        }
    }
    ctx->pc = 0x214BD0u;
label_214bd0:
    // 0x214bd0: 0x8423fee4
    ctx->pc = 0x214bd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967012)));
    // 0x214bd4: 0x3c010050
    ctx->pc = 0x214bd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x214bd8: 0x8422fee6
    ctx->pc = 0x214bd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967014)));
    // 0x214bdc: 0x32040
    ctx->pc = 0x214bdcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 1));
    // 0x214be0: 0xc06bb90
    ctx->pc = 0x214BE0u;
    SET_GPR_U32(ctx, 31, 0x214BE8u);
    ctx->pc = 0x214BE4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1AEE40u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetDisplayOffset_0x1aee40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214BE8u; }
        else if (ctx->pc != 0x214BE8u) { ctx->pc = 0x214BE8u; }
    }
    if (ctx->pc != 0x214BE8u) { return; }
    ctx->pc = 0x214BE8u;
label_214be8:
    // 0x214be8: 0xc078a48
    ctx->pc = 0x214BE8u;
    SET_GPR_U32(ctx, 31, 0x214BF0u);
    ctx->pc = 0x1E2920u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitMatrixBuf__Fv_0x1e2920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214BF0u; }
        else if (ctx->pc != 0x214BF0u) { ctx->pc = 0x214BF0u; }
    }
    if (ctx->pc != 0x214BF0u) { return; }
    ctx->pc = 0x214BF0u;
    // 0x214bf0: 0xc069338
    ctx->pc = 0x214BF0u;
    SET_GPR_U32(ctx, 31, 0x214BF8u);
    ctx->pc = 0x214BF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1A4CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlMatrixMode_0x1a4ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214BF8u; }
        else if (ctx->pc != 0x214BF8u) { ctx->pc = 0x214BF8u; }
    }
    if (ctx->pc != 0x214BF8u) { return; }
    ctx->pc = 0x214BF8u;
    // 0x214bf8: 0xc06c20d
    ctx->pc = 0x214BF8u;
    SET_GPR_U32(ctx, 31, 0x214C00u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214C00u; }
        else if (ctx->pc != 0x214C00u) { ctx->pc = 0x214C00u; }
    }
    if (ctx->pc != 0x214C00u) { return; }
    ctx->pc = 0x214C00u;
    // 0x214c00: 0x3c023c23
    ctx->pc = 0x214c00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15395 << 16));
    // 0x214c04: 0x3442d70a
    ctx->pc = 0x214c04u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55050));
    // 0x214c08: 0x44826000
    ctx->pc = 0x214c08u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x214c0c: 0x3c024780
    ctx->pc = 0x214c0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)18304 << 16));
    // 0x214c10: 0x44826800
    ctx->pc = 0x214c10u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x214c14: 0xc06b21c
    ctx->pc = 0x214C14u;
    SET_GPR_U32(ctx, 31, 0x214C1Cu);
    ctx->pc = 0x1AC870u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetZBound_0x1ac870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214C1Cu; }
        else if (ctx->pc != 0x214C1Cu) { ctx->pc = 0x214C1Cu; }
    }
    if (ctx->pc != 0x214C1Cu) { return; }
    ctx->pc = 0x214C1Cu;
    // 0x214c1c: 0x3c020050
    ctx->pc = 0x214c1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x214c20: 0x101880
    ctx->pc = 0x214c20u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x214c24: 0x2442fb00
    ctx->pc = 0x214c24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966016));
    // 0x214c28: 0x438021
    ctx->pc = 0x214c28u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214c2c: 0xc6000000
    ctx->pc = 0x214c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214c30: 0x3c024336
    ctx->pc = 0x214c30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17206 << 16));
    // 0x214c34: 0x34420b61
    ctx->pc = 0x214c34u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2913));
    // 0x214c38: 0x44821000
    ctx->pc = 0x214c38u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x214c3c: 0x3c023f00
    ctx->pc = 0x214c3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x214c40: 0x46001002
    ctx->pc = 0x214c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x214c44: 0x44820800
    ctx->pc = 0x214c44u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x214c48: 0x0
    ctx->pc = 0x214c48u;
    // NOP
    // 0x214c4c: 0x46000800
    ctx->pc = 0x214c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x214c50: 0x3c023fb6
    ctx->pc = 0x214c50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16310 << 16));
    // 0x214c54: 0x3442db6e
    ctx->pc = 0x214c54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 56174));
    // 0x214c58: 0x46000024
    ctx->pc = 0x214c58u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x214c5c: 0x44826000
    ctx->pc = 0x214c5cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x214c60: 0x44040000
    ctx->pc = 0x214c60u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x214c64: 0x3c023cf5
    ctx->pc = 0x214c64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15605 << 16));
    // 0x214c68: 0x3443c28f
    ctx->pc = 0x214c68u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 49807));
    // 0x214c6c: 0x3c02477d
    ctx->pc = 0x214c6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)18301 << 16));
    // 0x214c70: 0x3442e800
    ctx->pc = 0x214c70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 59392));
    // 0x214c74: 0x44836800
    ctx->pc = 0x214c74u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 3);
    // 0x214c78: 0x44827000
    ctx->pc = 0x214c78u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x214c7c: 0xc06af68
    ctx->pc = 0x214C7Cu;
    SET_GPR_U32(ctx, 31, 0x214C84u);
    ctx->pc = 0x214C80u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    ctx->pc = 0x1ABDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPerspective_0x1abda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214C84u; }
        else if (ctx->pc != 0x214C84u) { ctx->pc = 0x214C84u; }
    }
    if (ctx->pc != 0x214C84u) { return; }
    ctx->pc = 0x214C84u;
    // 0x214c84: 0xc069338
    ctx->pc = 0x214C84u;
    SET_GPR_U32(ctx, 31, 0x214C8Cu);
    ctx->pc = 0x214C88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A4CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlMatrixMode_0x1a4ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214C8Cu; }
        else if (ctx->pc != 0x214C8Cu) { ctx->pc = 0x214C8Cu; }
    }
    if (ctx->pc != 0x214C8Cu) { return; }
    ctx->pc = 0x214C8Cu;
    // 0x214c8c: 0xc06c20d
    ctx->pc = 0x214C8Cu;
    SET_GPR_U32(ctx, 31, 0x214C94u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214C94u; }
        else if (ctx->pc != 0x214C94u) { ctx->pc = 0x214C94u; }
    }
    if (ctx->pc != 0x214C94u) { return; }
    ctx->pc = 0x214C94u;
    // 0x214c94: 0xc6010000
    ctx->pc = 0x214c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214c98: 0x3c023f00
    ctx->pc = 0x214c98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x214c9c: 0x44821000
    ctx->pc = 0x214c9cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x214ca0: 0x3c024336
    ctx->pc = 0x214ca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17206 << 16));
    // 0x214ca4: 0x34420b61
    ctx->pc = 0x214ca4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2913));
    // 0x214ca8: 0x46011042
    ctx->pc = 0x214ca8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x214cac: 0x44820000
    ctx->pc = 0x214cacu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x214cb0: 0x0
    ctx->pc = 0x214cb0u;
    // NOP
    // 0x214cb4: 0x46010002
    ctx->pc = 0x214cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x214cb8: 0x46000024
    ctx->pc = 0x214cb8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x214cbc: 0x44020000
    ctx->pc = 0x214cbcu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x214cc0: 0x0
    ctx->pc = 0x214cc0u;
    // NOP
    // 0x214cc4: 0x2243c
    ctx->pc = 0x214cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x214cc8: 0xc06a030
    ctx->pc = 0x214CC8u;
    SET_GPR_U32(ctx, 31, 0x214CD0u);
    ctx->pc = 0x214CCCu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->pc = 0x1A80C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlTan_0x1a80c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CD0u; }
        else if (ctx->pc != 0x214CD0u) { ctx->pc = 0x214CD0u; }
    }
    if (ctx->pc != 0x214CD0u) { return; }
    ctx->pc = 0x214CD0u;
    // 0x214cd0: 0x3c024360
    ctx->pc = 0x214cd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17248 << 16));
    // 0x214cd4: 0x44821000
    ctx->pc = 0x214cd4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x214cd8: 0x0
    ctx->pc = 0x214cd8u;
    // NOP
    // 0x214cdc: 0x46001003
    ctx->pc = 0x214cdcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x214ce0: 0x3c023fb6
    ctx->pc = 0x214ce0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16310 << 16));
    // 0x214ce4: 0x3442db6e
    ctx->pc = 0x214ce4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 56174));
    // 0x214ce8: 0xe7808c50
    ctx->pc = 0x214ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937680), bits); }
    // 0x214cec: 0xc7818c50
    ctx->pc = 0x214cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214cf0: 0x44820000
    ctx->pc = 0x214cf0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x214cf4: 0x0
    ctx->pc = 0x214cf4u;
    // NOP
    // 0x214cf8: 0x46020843
    ctx->pc = 0x214cf8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x214cfc: 0x0
    ctx->pc = 0x214cfcu;
    // NOP
    // 0x214d00: 0x0
    ctx->pc = 0x214d00u;
    // NOP
    // 0x214d04: 0x46010303
    ctx->pc = 0x214d04u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x214d08: 0x0
    ctx->pc = 0x214d08u;
    // NOP
    // 0x214d0c: 0x0
    ctx->pc = 0x214d0cu;
    // NOP
    // 0x214d10: 0xc069e20
    ctx->pc = 0x214D10u;
    SET_GPR_U32(ctx, 31, 0x214D18u);
    ctx->pc = 0x1A7880u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan_0x1a7880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D18u; }
        else if (ctx->pc != 0x214D18u) { ctx->pc = 0x214D18u; }
    }
    if (ctx->pc != 0x214D18u) { return; }
    ctx->pc = 0x214D18u;
    // 0x214d18: 0xaf828c54
    ctx->pc = 0x214d18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937684), GPR_U32(ctx, 2));
    // 0x214d1c: 0xc06c24e
    ctx->pc = 0x214D1Cu;
    SET_GPR_U32(ctx, 31, 0x214D24u);
    ctx->pc = 0x214D20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D24u; }
        else if (ctx->pc != 0x214D24u) { ctx->pc = 0x214D24u; }
    }
    if (ctx->pc != 0x214D24u) { return; }
    ctx->pc = 0x214D24u;
    // 0x214d24: 0xc06c518
    ctx->pc = 0x214D24u;
    SET_GPR_U32(ctx, 31, 0x214D2Cu);
    ctx->pc = 0x214D28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937688), bits); }
    ctx->pc = 0x1B1460u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphResetLabelID_0x1b1460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D2Cu; }
        else if (ctx->pc != 0x214D2Cu) { ctx->pc = 0x214D2Cu; }
    }
    if (ctx->pc != 0x214D2Cu) { return; }
    ctx->pc = 0x214D2Cu;
    // 0x214d2c: 0x7bbf0010
    ctx->pc = 0x214d2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214d30: 0x7bb00000
    ctx->pc = 0x214d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214d34: 0x3e00008
    ctx->pc = 0x214D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214D38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214BBCu: goto label_214bbc;
            case 0x214BD0u: goto label_214bd0;
            case 0x214BE8u: goto label_214be8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214D3Cu;
}
