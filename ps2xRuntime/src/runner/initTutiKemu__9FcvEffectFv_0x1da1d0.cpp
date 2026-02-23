#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initTutiKemu__9FcvEffectFv
// Address: 0x1da1d0 - 0x1da2c4
void initTutiKemu__9FcvEffectFv_0x1da1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initTutiKemu__9FcvEffectFv");


    ctx->pc = 0x1da1d0u;

    // 0x1da1d0: 0x27bdffb0
    ctx->pc = 0x1da1d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1da1d4: 0x7fbf0040
    ctx->pc = 0x1da1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1da1d8: 0x7fb30030
    ctx->pc = 0x1da1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1da1dc: 0x7fb20020
    ctx->pc = 0x1da1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1da1e0: 0x7fb10010
    ctx->pc = 0x1da1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da1e4: 0x70809e28
    ctx->pc = 0x1da1e4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1da1e8: 0x24050010
    ctx->pc = 0x1da1e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1da1ec: 0xc0761c4
    ctx->pc = 0x1DA1ECu;
    SET_GPR_U32(ctx, 31, 0x1DA1F4u);
    ctx->pc = 0x1DA1F0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1F4u; }
        else if (ctx->pc != 0x1DA1F4u) { ctx->pc = 0x1DA1F4u; }
    }
    if (ctx->pc != 0x1DA1F4u) { return; }
    ctx->pc = 0x1DA1F4u;
    // 0x1da1f4: 0xae620054
    ctx->pc = 0x1da1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1da1f8: 0x3c0242a0
    ctx->pc = 0x1da1f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17056 << 16));
    // 0x1da1fc: 0xae620028
    ctx->pc = 0x1da1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x1da200: 0x27848d4c
    ctx->pc = 0x1da200u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1da204: 0xc07f208
    ctx->pc = 0x1DA204u;
    SET_GPR_U32(ctx, 31, 0x1DA20Cu);
    ctx->pc = 0x1DA208u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8555));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA20Cu; }
        else if (ctx->pc != 0x1DA20Cu) { ctx->pc = 0x1DA20Cu; }
    }
    if (ctx->pc != 0x1DA20Cu) { return; }
    ctx->pc = 0x1DA20Cu;
    // 0x1da20c: 0x70408628
    ctx->pc = 0x1da20cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da210: 0x70008e28
    ctx->pc = 0x1da210u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1da214: 0x10000018
    ctx->pc = 0x1DA214u;
    {
        const bool branch_taken_0x1da214 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA218u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1da214) {
            ctx->pc = 0x1DA278u;
            goto label_1da278;
        }
    }
    ctx->pc = 0x1DA21Cu;
label_1da21c:
    // 0x1da21c: 0xc07f208
    ctx->pc = 0x1DA21Cu;
    SET_GPR_U32(ctx, 31, 0x1DA224u);
    ctx->pc = 0x1DA220u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA224u; }
        else if (ctx->pc != 0x1DA224u) { ctx->pc = 0x1DA224u; }
    }
    if (ctx->pc != 0x1DA224u) { return; }
    ctx->pc = 0x1DA224u;
    // 0x1da224: 0x8e640054
    ctx->pc = 0x1da224u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da228: 0x3c03001b
    ctx->pc = 0x1da228u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1da22c: 0x346500b3
    ctx->pc = 0x1da22cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 179));
    // 0x1da230: 0x70403628
    ctx->pc = 0x1da230u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da234: 0x72003e28
    ctx->pc = 0x1da234u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1da238: 0xc079e80
    ctx->pc = 0x1DA238u;
    SET_GPR_U32(ctx, 31, 0x1DA240u);
    ctx->pc = 0x1DA23Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA240u; }
        else if (ctx->pc != 0x1DA240u) { ctx->pc = 0x1DA240u; }
    }
    if (ctx->pc != 0x1DA240u) { return; }
    ctx->pc = 0x1DA240u;
    // 0x1da240: 0xc66c002c
    ctx->pc = 0x1da240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da244: 0x3c033f80
    ctx->pc = 0x1da244u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1da248: 0x44830000
    ctx->pc = 0x1da248u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1da24c: 0x0
    ctx->pc = 0x1da24cu;
    // NOP
    // 0x1da250: 0x460c0032
    ctx->pc = 0x1da250u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da254: 0x0
    ctx->pc = 0x1da254u;
    // NOP
    // 0x1da258: 0x45030006
    ctx->pc = 0x1DA258u;
    {
        const bool branch_taken_0x1da258 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da258) {
            ctx->pc = 0x1DA25Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
            ctx->pc = 0x1DA274u;
            goto label_1da274;
        }
    }
    ctx->pc = 0x1DA260u;
    // 0x1da260: 0x8e620054
    ctx->pc = 0x1da260u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da264: 0xc079ecc
    ctx->pc = 0x1DA264u;
    SET_GPR_U32(ctx, 31, 0x1DA26Cu);
    ctx->pc = 0x1DA268u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA26Cu; }
        else if (ctx->pc != 0x1DA26Cu) { ctx->pc = 0x1DA26Cu; }
    }
    if (ctx->pc != 0x1DA26Cu) { return; }
    ctx->pc = 0x1DA26Cu;
    // 0x1da26c: 0x0
    ctx->pc = 0x1da26cu;
    // NOP
    // 0x1da270: 0x265200f0
    ctx->pc = 0x1da270u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1da274:
    // 0x1da274: 0x26310001
    ctx->pc = 0x1da274u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1da278:
    // 0x1da278: 0x8e630000
    ctx->pc = 0x1da278u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1da27c: 0x223182a
    ctx->pc = 0x1da27cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1da280: 0x1460ffe6
    ctx->pc = 0x1DA280u;
    {
        const bool branch_taken_0x1da280 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DA284u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8539));
        if (branch_taken_0x1da280) {
            ctx->pc = 0x1DA21Cu;
            goto label_1da21c;
        }
    }
    ctx->pc = 0x1DA288u;
    // 0x1da288: 0x3c030027
    ctx->pc = 0x1da288u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1da28c: 0x24638b58
    ctx->pc = 0x1da28cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937432));
    // 0x1da290: 0xc4620000
    ctx->pc = 0x1da290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da294: 0xc4610004
    ctx->pc = 0x1da294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da298: 0xc4600008
    ctx->pc = 0x1da298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da29c: 0xe6620114
    ctx->pc = 0x1da29cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1da2a0: 0xe6610118
    ctx->pc = 0x1da2a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1da2a4: 0xe660011c
    ctx->pc = 0x1da2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1da2a8: 0x7bbf0040
    ctx->pc = 0x1da2a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da2ac: 0x7bb30030
    ctx->pc = 0x1da2acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da2b0: 0x7bb20020
    ctx->pc = 0x1da2b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da2b4: 0x7bb10010
    ctx->pc = 0x1da2b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da2b8: 0x7bb00000
    ctx->pc = 0x1da2b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da2bc: 0x3e00008
    ctx->pc = 0x1DA2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA2C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA21Cu: goto label_1da21c;
            case 0x1DA274u: goto label_1da274;
            case 0x1DA278u: goto label_1da278;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA2C4u;
}
