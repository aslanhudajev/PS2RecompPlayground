#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlInitMatrix
// Address: 0x1a4660 - 0x1a4708
void nlInitMatrix_0x1a4660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlInitMatrix");


    ctx->pc = 0x1a4660u;

    // 0x1a4660: 0x27bdffe0
    ctx->pc = 0x1a4660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4664: 0x7fbf0010
    ctx->pc = 0x1a4664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a4668: 0x7fb00000
    ctx->pc = 0x1a4668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a466c: 0x70a08628
    ctx->pc = 0x1a466cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a4670: 0x3c020030
    ctx->pc = 0x1a4670u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a4674: 0x24442180
    ctx->pc = 0x1a4674u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8576));
    // 0x1a4678: 0x70002e28
    ctx->pc = 0x1a4678u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a467c: 0xc06917c
    ctx->pc = 0x1A467Cu;
    SET_GPR_U32(ctx, 31, 0x1A4684u);
    ctx->pc = 0x1A4680u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1A45F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlInitMatrixSub_0x1a45f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4684u; }
        else if (ctx->pc != 0x1A4684u) { ctx->pc = 0x1A4684u; }
    }
    if (ctx->pc != 0x1A4684u) { return; }
    ctx->pc = 0x1A4684u;
    // 0x1a4684: 0x3c020030
    ctx->pc = 0x1a4684u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a4688: 0x24050002
    ctx->pc = 0x1a4688u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a468c: 0x24442190
    ctx->pc = 0x1a468cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8592));
    // 0x1a4690: 0xc06917c
    ctx->pc = 0x1A4690u;
    SET_GPR_U32(ctx, 31, 0x1A4698u);
    ctx->pc = 0x1A4694u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A45F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlInitMatrixSub_0x1a45f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4698u; }
        else if (ctx->pc != 0x1A4698u) { ctx->pc = 0x1A4698u; }
    }
    if (ctx->pc != 0x1A4698u) { return; }
    ctx->pc = 0x1A4698u;
    // 0x1a4698: 0x3c020030
    ctx->pc = 0x1a4698u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a469c: 0x72003628
    ctx->pc = 0x1a469cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a46a0: 0x24442170
    ctx->pc = 0x1a46a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8560));
    // 0x1a46a4: 0xc06917c
    ctx->pc = 0x1A46A4u;
    SET_GPR_U32(ctx, 31, 0x1A46ACu);
    ctx->pc = 0x1A46A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1A45F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlInitMatrixSub_0x1a45f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46ACu; }
        else if (ctx->pc != 0x1A46ACu) { ctx->pc = 0x1A46ACu; }
    }
    if (ctx->pc != 0x1A46ACu) { return; }
    ctx->pc = 0x1A46ACu;
    // 0x1a46ac: 0x70408628
    ctx->pc = 0x1a46acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a46b0: 0x24020001
    ctx->pc = 0x1a46b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a46b4: 0xa38289ac
    ctx->pc = 0x1a46b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937004), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a46b8: 0x3c020030
    ctx->pc = 0x1a46b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a46bc: 0x24432170
    ctx->pc = 0x1a46bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8560));
    // 0x1a46c0: 0xc4630000
    ctx->pc = 0x1a46c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a46c4: 0xc4620004
    ctx->pc = 0x1a46c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a46c8: 0xc4610008
    ctx->pc = 0x1a46c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a46cc: 0xc460000c
    ctx->pc = 0x1a46ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a46d0: 0x3c020030
    ctx->pc = 0x1a46d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a46d4: 0x24422160
    ctx->pc = 0x1a46d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8544));
    // 0x1a46d8: 0x3c010030
    ctx->pc = 0x1a46d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a46dc: 0xe4430000
    ctx->pc = 0x1a46dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1a46e0: 0xe4420004
    ctx->pc = 0x1a46e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a46e4: 0xe4410008
    ctx->pc = 0x1a46e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1a46e8: 0xe440000c
    ctx->pc = 0x1a46e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1a46ec: 0xc06c229
    ctx->pc = 0x1A46ECu;
    SET_GPR_U32(ctx, 31, 0x1A46F4u);
    ctx->pc = 0x1A46F0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 8556)));
    ctx->pc = 0x1B08A4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B08A4_0x1b08a4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46F4u; }
        else if (ctx->pc != 0x1A46F4u) { ctx->pc = 0x1A46F4u; }
    }
    if (ctx->pc != 0x1A46F4u) { return; }
    ctx->pc = 0x1A46F4u;
    // 0x1a46f4: 0x72001628
    ctx->pc = 0x1a46f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a46f8: 0x7bbf0010
    ctx->pc = 0x1a46f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a46fc: 0x7bb00000
    ctx->pc = 0x1a46fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4700: 0x3e00008
    ctx->pc = 0x1A4700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4704u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4708u;
}
