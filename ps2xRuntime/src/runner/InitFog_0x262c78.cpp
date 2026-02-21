#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitFog
// Address: 0x262c78 - 0x262d18
void InitFog_0x262c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x262c78u;

    // 0x262c78: 0x27bdfff0
    ctx->pc = 0x262c78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x262c7c: 0xffbf0000
    ctx->pc = 0x262c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x262c80: 0x3c020034
    ctx->pc = 0x262c80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262c84: 0x8c42e7c8
    ctx->pc = 0x262c84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x262c88: 0x24430070
    ctx->pc = 0x262c88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 112));
    // 0x262c8c: 0xc4610010
    ctx->pc = 0x262c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262c90: 0x44800000
    ctx->pc = 0x262c90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x262c94: 0x46010034
    ctx->pc = 0x262c94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262c98: 0x0
    ctx->pc = 0x262c98u;
    // NOP
    // 0x262c9c: 0x45000008
    ctx->pc = 0x262C9Cu;
    {
        const bool branch_taken_0x262c9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x262CA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x262c9c) {
            ctx->pc = 0x262CC0u;
            goto label_262cc0;
        }
    }
    ctx->pc = 0x262CA4u;
    // 0x262ca4: 0x90640001
    ctx->pc = 0x262ca4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x262ca8: 0x42400
    ctx->pc = 0x262ca8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x262cac: 0x90620002
    ctx->pc = 0x262cacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x262cb0: 0x21200
    ctx->pc = 0x262cb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x262cb4: 0x822025
    ctx->pc = 0x262cb4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x262cb8: 0x90620003
    ctx->pc = 0x262cb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x262cbc: 0x822025
    ctx->pc = 0x262cbcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_262cc0:
    // 0x262cc0: 0xc46e0014
    ctx->pc = 0x262cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x262cc4: 0x3c013dcc
    ctx->pc = 0x262cc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x262cc8: 0x3421cccd
    ctx->pc = 0x262cc8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x262ccc: 0x44810000
    ctx->pc = 0x262cccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x262cd0: 0xc46f0018
    ctx->pc = 0x262cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x262cd4: 0xc4610008
    ctx->pc = 0x262cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262cd8: 0x3c013c23
    ctx->pc = 0x262cd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x262cdc: 0x3421d70a
    ctx->pc = 0x262cdcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x262ce0: 0x44818000
    ctx->pc = 0x262ce0u;
    *(uint32_t*)&ctx->f[16] = GPR_U32(ctx, 1);
    // 0x262ce4: 0x90650000
    ctx->pc = 0x262ce4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x262ce8: 0xc46c000c
    ctx->pc = 0x262ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262cec: 0xc46d0010
    ctx->pc = 0x262cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x262cf0: 0x46007382
    ctx->pc = 0x262cf0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x262cf4: 0x46007bc2
    ctx->pc = 0x262cf4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x262cf8: 0xc0b3fe0
    ctx->pc = 0x262CF8u;
    SET_GPR_U32(ctx, 31, 0x262D00u);
    ctx->pc = 0x262CFCu;
    ctx->f[16] = FPU_MUL_S(ctx->f[1], ctx->f[16]);
    ctx->pc = 0x2CFF80u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFogInit_0x2cff80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262D00u; }
    }
    if (ctx->pc != 0x262D00u) { return; }
    ctx->pc = 0x262D00u;
    // 0x262d00: 0x3c030034
    ctx->pc = 0x262d00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x262d04: 0x24020001
    ctx->pc = 0x262d04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x262d08: 0xac62e7e4
    ctx->pc = 0x262d08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961124), GPR_U32(ctx, 2));
    // 0x262d0c: 0xdfbf0000
    ctx->pc = 0x262d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262d10: 0x3e00008
    ctx->pc = 0x262D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262D14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262CC0u: goto label_262cc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262D18u;
}
