#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: motSupplement__12BodyMgrClassFP10MotObjTaskiii
// Address: 0x1faaf0 - 0x1fac48
void motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("motSupplement__12BodyMgrClassFP10MotObjTaskiii");


    ctx->pc = 0x1faaf0u;

    // 0x1faaf0: 0x81080
    ctx->pc = 0x1faaf0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1faaf4: 0x481821
    ctx->pc = 0x1faaf4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1faaf8: 0x44870000
    ctx->pc = 0x1faaf8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 7);
    // 0x1faafc: 0x31080
    ctx->pc = 0x1faafcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fab00: 0x621021
    ctx->pc = 0x1fab00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fab04: 0x23840
    ctx->pc = 0x1fab04u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1fab08: 0x3c028888
    ctx->pc = 0x1fab08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
    // 0x1fab0c: 0x34428889
    ctx->pc = 0x1fab0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
    // 0x1fab10: 0x470018
    ctx->pc = 0x1fab10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x1fab14: 0x27bdffd0
    ctx->pc = 0x1fab14u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fab18: 0x7fbf0020
    ctx->pc = 0x1fab18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1fab1c: 0x7fb10010
    ctx->pc = 0x1fab1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fab20: 0x7fb00000
    ctx->pc = 0x1fab20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fab24: 0x1810
    ctx->pc = 0x1fab24u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x1fab28: 0x70a08628
    ctx->pc = 0x1fab28u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fab2c: 0xac900004
    ctx->pc = 0x1fab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x1fab30: 0xaca60004
    ctx->pc = 0x1fab30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x1fab34: 0x46800020
    ctx->pc = 0x1fab34u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fab38: 0x671821
    ctx->pc = 0x1fab38u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1fab3c: 0x737c2
    ctx->pc = 0x1fab3cu;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
    // 0x1fab40: 0x31943
    ctx->pc = 0x1fab40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1fab44: 0x664021
    ctx->pc = 0x1fab44u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1fab48: 0x25030001
    ctx->pc = 0x1fab48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fab4c: 0xe4a0000c
    ctx->pc = 0x1fab4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1fab50: 0xa4a0002e
    ctx->pc = 0x1fab50u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fab54: 0xa4a30032
    ctx->pc = 0x1fab54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fab58: 0x80a3003a
    ctx->pc = 0x1fab58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x1fab5c: 0x2402fff7
    ctx->pc = 0x1fab5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1fab60: 0x70808e28
    ctx->pc = 0x1fab60u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1fab64: 0x34630001
    ctx->pc = 0x1fab64u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1));
    // 0x1fab68: 0xa0a3003a
    ctx->pc = 0x1fab68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fab6c: 0x80a3003a
    ctx->pc = 0x1fab6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x1fab70: 0x621024
    ctx->pc = 0x1fab70u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fab74: 0xa0a2003a
    ctx->pc = 0x1fab74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fab78: 0xa0a0003c
    ctx->pc = 0x1fab78u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fab7c: 0xc07ec50
    ctx->pc = 0x1FAB7Cu;
    SET_GPR_U32(ctx, 31, 0x1FAB84u);
    ctx->pc = 0x1FAB80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FB140u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrameNum__12BodyMgrClassFi_0x1fb140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAB84u; }
        else if (ctx->pc != 0x1FAB84u) { ctx->pc = 0x1FAB84u; }
    }
    if (ctx->pc != 0x1FAB84u) { return; }
    ctx->pc = 0x1FAB84u;
    // 0x1fab84: 0x72202628
    ctx->pc = 0x1fab84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1fab88: 0xc07e924
    ctx->pc = 0x1FAB88u;
    SET_GPR_U32(ctx, 31, 0x1FAB90u);
    ctx->pc = 0x1FAB8Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FA490u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMotPtr__12BodyMgrClassFi_0x1fa490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAB90u; }
        else if (ctx->pc != 0x1FAB90u) { ctx->pc = 0x1FAB90u; }
    }
    if (ctx->pc != 0x1FAB90u) { return; }
    ctx->pc = 0x1FAB90u;
    // 0x1fab90: 0x8e260064
    ctx->pc = 0x1fab90u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1fab94: 0x86030032
    ctx->pc = 0x1fab94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1fab98: 0xc6010040
    ctx->pc = 0x1fab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fab9c: 0x26020070
    ctx->pc = 0x1fab9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1faba0: 0x72202628
    ctx->pc = 0x1faba0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1faba4: 0x70002e28
    ctx->pc = 0x1faba4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1faba8: 0xc4c20000
    ctx->pc = 0x1faba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fabac: 0x44830000
    ctx->pc = 0x1fabacu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1fabb0: 0x0
    ctx->pc = 0x1fabb0u;
    // NOP
    // 0x1fabb4: 0x46800020
    ctx->pc = 0x1fabb4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fabb8: 0x70003628
    ctx->pc = 0x1fabb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fabbc: 0x46011041
    ctx->pc = 0x1fabbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1fabc0: 0x46000803
    ctx->pc = 0x1fabc0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1fabc4: 0xe6000058
    ctx->pc = 0x1fabc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1fabc8: 0x8e270064
    ctx->pc = 0x1fabc8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1fabcc: 0x86030032
    ctx->pc = 0x1fabccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1fabd0: 0xc6010044
    ctx->pc = 0x1fabd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fabd4: 0xc4e20004
    ctx->pc = 0x1fabd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fabd8: 0x44830000
    ctx->pc = 0x1fabd8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1fabdc: 0x0
    ctx->pc = 0x1fabdcu;
    // NOP
    // 0x1fabe0: 0x46800020
    ctx->pc = 0x1fabe0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fabe4: 0x46011041
    ctx->pc = 0x1fabe4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1fabe8: 0x46000803
    ctx->pc = 0x1fabe8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1fabec: 0xe600005c
    ctx->pc = 0x1fabecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x1fabf0: 0x8e270064
    ctx->pc = 0x1fabf0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1fabf4: 0x86030032
    ctx->pc = 0x1fabf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1fabf8: 0xc6010048
    ctx->pc = 0x1fabf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fabfc: 0xc4e20008
    ctx->pc = 0x1fabfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fac00: 0x44830000
    ctx->pc = 0x1fac00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1fac04: 0x0
    ctx->pc = 0x1fac04u;
    // NOP
    // 0x1fac08: 0x46800020
    ctx->pc = 0x1fac08u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fac0c: 0x46011041
    ctx->pc = 0x1fac0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1fac10: 0x46000803
    ctx->pc = 0x1fac10u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1fac14: 0x0
    ctx->pc = 0x1fac14u;
    // NOP
    // 0x1fac18: 0xe6000060
    ctx->pc = 0x1fac18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x1fac1c: 0xc07ec0c
    ctx->pc = 0x1FAC1Cu;
    SET_GPR_U32(ctx, 31, 0x1FAC24u);
    ctx->pc = 0x1FAC20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1FB030u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDivNum__12BodyMgrClassFii_0x1fb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAC24u; }
        else if (ctx->pc != 0x1FAC24u) { ctx->pc = 0x1FAC24u; }
    }
    if (ctx->pc != 0x1FAC24u) { return; }
    ctx->pc = 0x1FAC24u;
    // 0x1fac24: 0x72202628
    ctx->pc = 0x1fac24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1fac28: 0x70002e28
    ctx->pc = 0x1fac28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fac2c: 0xc07eb74
    ctx->pc = 0x1FAC2Cu;
    SET_GPR_U32(ctx, 31, 0x1FAC34u);
    ctx->pc = 0x1FAC30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FADD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setSupplement__12BodyMgrClassFii_0x1fadd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAC34u; }
        else if (ctx->pc != 0x1FAC34u) { ctx->pc = 0x1FAC34u; }
    }
    if (ctx->pc != 0x1FAC34u) { return; }
    ctx->pc = 0x1FAC34u;
    // 0x1fac34: 0x7bbf0020
    ctx->pc = 0x1fac34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fac38: 0x7bb10010
    ctx->pc = 0x1fac38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fac3c: 0x7bb00000
    ctx->pc = 0x1fac3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fac40: 0x3e00008
    ctx->pc = 0x1FAC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAC44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FAC48u;
}
