#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartDeathFX
// Address: 0x27f620 - 0x27f6b0
void StartDeathFX_0x27f620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27f620u;

    // 0x27f620: 0x27bdffd0
    ctx->pc = 0x27f620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27f624: 0xffbf0020
    ctx->pc = 0x27f624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27f628: 0xffb10010
    ctx->pc = 0x27f628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27f62c: 0xffb00000
    ctx->pc = 0x27f62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27f630: 0x80882d
    ctx->pc = 0x27f630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f634: 0x2402005f
    ctx->pc = 0x27f634u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 95));
    // 0x27f638: 0x24040060
    ctx->pc = 0x27f638u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x27f63c: 0x38a50002
    ctx->pc = 0x27f63cu;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 2));
    // 0x27f640: 0x34c70800
    ctx->pc = 0x27f640u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 6), 2048));
    // 0x27f644: 0x45200b
    ctx->pc = 0x27f644u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    // 0x27f648: 0x282d
    ctx->pc = 0x27f648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f64c: 0x3c014120
    ctx->pc = 0x27f64cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x27f650: 0x44816000
    ctx->pc = 0x27f650u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27f654: 0xc09f5fa
    ctx->pc = 0x27F654u;
    SET_GPR_U32(ctx, 31, 0x27F65Cu);
    ctx->pc = 0x27F658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F65Cu; }
    }
    if (ctx->pc != 0x27F65Cu) { return; }
    ctx->pc = 0x27F65Cu;
    // 0x27f65c: 0x40802d
    ctx->pc = 0x27f65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f660: 0x200202d
    ctx->pc = 0x27f660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f664: 0xc09f732
    ctx->pc = 0x27F664u;
    SET_GPR_U32(ctx, 31, 0x27F66Cu);
    ctx->pc = 0x27F668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DCC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetParent_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F66Cu; }
    }
    if (ctx->pc != 0x27F66Cu) { return; }
    ctx->pc = 0x27F66Cu;
    // 0x27f66c: 0x3c020034
    ctx->pc = 0x27f66cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27f670: 0x24420eb0
    ctx->pc = 0x27f670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27f674: 0x240300f0
    ctx->pc = 0x27f674u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27f678: 0x2031818
    ctx->pc = 0x27f678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27f67c: 0x621821
    ctx->pc = 0x27f67cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27f680: 0x3c020031
    ctx->pc = 0x27f680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x27f684: 0xc440ffb4
    ctx->pc = 0x27f684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f688: 0x3c013f00
    ctx->pc = 0x27f688u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x27f68c: 0x44810800
    ctx->pc = 0x27f68cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27f690: 0x46010000
    ctx->pc = 0x27f690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27f694: 0xe4600070
    ctx->pc = 0x27f694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x27f698: 0x200102d
    ctx->pc = 0x27f698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f69c: 0xdfbf0020
    ctx->pc = 0x27f69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f6a0: 0xdfb10010
    ctx->pc = 0x27f6a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f6a4: 0xdfb00000
    ctx->pc = 0x27f6a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f6a8: 0x3e00008
    ctx->pc = 0x27F6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F6ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27F6B0u;
}
