#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: motSupplementDivKeep__12BodyMgrClassFP10MotObjTaskiii
// Address: 0x1fac50 - 0x1fad94
void motSupplementDivKeep__12BodyMgrClassFP10MotObjTaskiii_0x1fac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("motSupplementDivKeep__12BodyMgrClassFP10MotObjTaskiii");


    ctx->pc = 0x1fac50u;

    // 0x1fac50: 0x81080
    ctx->pc = 0x1fac50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1fac54: 0x481821
    ctx->pc = 0x1fac54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1fac58: 0x44870000
    ctx->pc = 0x1fac58u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 7);
    // 0x1fac5c: 0x31080
    ctx->pc = 0x1fac5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fac60: 0x621021
    ctx->pc = 0x1fac60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fac64: 0x23840
    ctx->pc = 0x1fac64u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1fac68: 0x3c028888
    ctx->pc = 0x1fac68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
    // 0x1fac6c: 0x34428889
    ctx->pc = 0x1fac6cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
    // 0x1fac70: 0x470018
    ctx->pc = 0x1fac70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x1fac74: 0x27bdffd0
    ctx->pc = 0x1fac74u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fac78: 0x7fbf0020
    ctx->pc = 0x1fac78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1fac7c: 0x7fb10010
    ctx->pc = 0x1fac7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fac80: 0x7fb00000
    ctx->pc = 0x1fac80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fac84: 0x1810
    ctx->pc = 0x1fac84u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x1fac88: 0x70a08628
    ctx->pc = 0x1fac88u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fac8c: 0xac900004
    ctx->pc = 0x1fac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x1fac90: 0xaca60004
    ctx->pc = 0x1fac90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x1fac94: 0x46800020
    ctx->pc = 0x1fac94u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fac98: 0x671821
    ctx->pc = 0x1fac98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1fac9c: 0x737c2
    ctx->pc = 0x1fac9cu;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
    // 0x1faca0: 0x31943
    ctx->pc = 0x1faca0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1faca4: 0x664021
    ctx->pc = 0x1faca4u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1faca8: 0x25030001
    ctx->pc = 0x1faca8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1facac: 0xe4a0000c
    ctx->pc = 0x1facacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1facb0: 0xa4a0002e
    ctx->pc = 0x1facb0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x1facb4: 0xa4a30032
    ctx->pc = 0x1facb4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x1facb8: 0x80a3003a
    ctx->pc = 0x1facb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x1facbc: 0x2402fff7
    ctx->pc = 0x1facbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1facc0: 0x70808e28
    ctx->pc = 0x1facc0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1facc4: 0x34630001
    ctx->pc = 0x1facc4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1));
    // 0x1facc8: 0xa0a3003a
    ctx->pc = 0x1facc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x1faccc: 0x80a3003a
    ctx->pc = 0x1facccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x1facd0: 0x621024
    ctx->pc = 0x1facd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1facd4: 0xa0a2003a
    ctx->pc = 0x1facd4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x1facd8: 0xc07ec50
    ctx->pc = 0x1FACD8u;
    SET_GPR_U32(ctx, 31, 0x1FACE0u);
    ctx->pc = 0x1FACDCu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FB140u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrameNum__12BodyMgrClassFi_0x1fb140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FACE0u; }
        else if (ctx->pc != 0x1FACE0u) { ctx->pc = 0x1FACE0u; }
    }
    if (ctx->pc != 0x1FACE0u) { return; }
    ctx->pc = 0x1FACE0u;
    // 0x1face0: 0x72202628
    ctx->pc = 0x1face0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1face4: 0xc07e924
    ctx->pc = 0x1FACE4u;
    SET_GPR_U32(ctx, 31, 0x1FACECu);
    ctx->pc = 0x1FACE8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FA490u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMotPtr__12BodyMgrClassFi_0x1fa490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FACECu; }
        else if (ctx->pc != 0x1FACECu) { ctx->pc = 0x1FACECu; }
    }
    if (ctx->pc != 0x1FACECu) { return; }
    ctx->pc = 0x1FACECu;
    // 0x1facec: 0x8e260064
    ctx->pc = 0x1facecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1facf0: 0x86030032
    ctx->pc = 0x1facf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1facf4: 0xc6010040
    ctx->pc = 0x1facf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1facf8: 0x26020070
    ctx->pc = 0x1facf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1facfc: 0x72202628
    ctx->pc = 0x1facfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1fad00: 0x70002e28
    ctx->pc = 0x1fad00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fad04: 0xc4c20000
    ctx->pc = 0x1fad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fad08: 0x44830000
    ctx->pc = 0x1fad08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1fad0c: 0x0
    ctx->pc = 0x1fad0cu;
    // NOP
    // 0x1fad10: 0x46800020
    ctx->pc = 0x1fad10u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fad14: 0x70003628
    ctx->pc = 0x1fad14u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fad18: 0x46011041
    ctx->pc = 0x1fad18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1fad1c: 0x46000803
    ctx->pc = 0x1fad1cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1fad20: 0xe6000058
    ctx->pc = 0x1fad20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1fad24: 0x8e270064
    ctx->pc = 0x1fad24u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1fad28: 0x86030032
    ctx->pc = 0x1fad28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1fad2c: 0xc6010044
    ctx->pc = 0x1fad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fad30: 0xc4e20004
    ctx->pc = 0x1fad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fad34: 0x44830000
    ctx->pc = 0x1fad34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1fad38: 0x0
    ctx->pc = 0x1fad38u;
    // NOP
    // 0x1fad3c: 0x46800020
    ctx->pc = 0x1fad3cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fad40: 0x46011041
    ctx->pc = 0x1fad40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1fad44: 0x46000803
    ctx->pc = 0x1fad44u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1fad48: 0xe600005c
    ctx->pc = 0x1fad48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x1fad4c: 0x8e270064
    ctx->pc = 0x1fad4cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1fad50: 0x86030032
    ctx->pc = 0x1fad50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1fad54: 0xc6010048
    ctx->pc = 0x1fad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fad58: 0xc4e20008
    ctx->pc = 0x1fad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fad5c: 0x44830000
    ctx->pc = 0x1fad5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1fad60: 0x0
    ctx->pc = 0x1fad60u;
    // NOP
    // 0x1fad64: 0x46800020
    ctx->pc = 0x1fad64u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fad68: 0x46011041
    ctx->pc = 0x1fad68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1fad6c: 0x46000803
    ctx->pc = 0x1fad6cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1fad70: 0x0
    ctx->pc = 0x1fad70u;
    // NOP
    // 0x1fad74: 0xe6000060
    ctx->pc = 0x1fad74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x1fad78: 0xc07eb74
    ctx->pc = 0x1FAD78u;
    SET_GPR_U32(ctx, 31, 0x1FAD80u);
    ctx->pc = 0x1FAD7Cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1FADD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setSupplement__12BodyMgrClassFii_0x1fadd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAD80u; }
        else if (ctx->pc != 0x1FAD80u) { ctx->pc = 0x1FAD80u; }
    }
    if (ctx->pc != 0x1FAD80u) { return; }
    ctx->pc = 0x1FAD80u;
    // 0x1fad80: 0x7bbf0020
    ctx->pc = 0x1fad80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fad84: 0x7bb10010
    ctx->pc = 0x1fad84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fad88: 0x7bb00000
    ctx->pc = 0x1fad88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fad8c: 0x3e00008
    ctx->pc = 0x1FAD8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAD90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FAD94u;
}
