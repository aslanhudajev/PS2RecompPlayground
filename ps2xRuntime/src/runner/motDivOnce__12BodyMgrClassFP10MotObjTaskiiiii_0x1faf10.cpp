#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: motDivOnce__12BodyMgrClassFP10MotObjTaskiiiii
// Address: 0x1faf10 - 0x1fb030
void motDivOnce__12BodyMgrClassFP10MotObjTaskiiiii_0x1faf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("motDivOnce__12BodyMgrClassFP10MotObjTaskiiiii");


    ctx->pc = 0x1faf10u;

    // 0x1faf10: 0x91080
    ctx->pc = 0x1faf10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 2));
    // 0x1faf14: 0x491821
    ctx->pc = 0x1faf14u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1faf18: 0x44880000
    ctx->pc = 0x1faf18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 8);
    // 0x1faf1c: 0x31080
    ctx->pc = 0x1faf1cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1faf20: 0x621021
    ctx->pc = 0x1faf20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1faf24: 0x24040
    ctx->pc = 0x1faf24u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1faf28: 0x27bdffc0
    ctx->pc = 0x1faf28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1faf2c: 0x3c028888
    ctx->pc = 0x1faf2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
    // 0x1faf30: 0x344b8889
    ctx->pc = 0x1faf30u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 2), 34953));
    // 0x1faf34: 0x7fbf0030
    ctx->pc = 0x1faf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1faf38: 0x7fb20020
    ctx->pc = 0x1faf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1faf3c: 0x7fb10010
    ctx->pc = 0x1faf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1faf40: 0x7fb00000
    ctx->pc = 0x1faf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1faf44: 0xa1080
    ctx->pc = 0x1faf44u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 2));
    // 0x1faf48: 0x70a08e28
    ctx->pc = 0x1faf48u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1faf4c: 0x4a1821
    ctx->pc = 0x1faf4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1faf50: 0xac910004
    ctx->pc = 0x1faf50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x1faf54: 0x31080
    ctx->pc = 0x1faf54u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1faf58: 0xaca70008
    ctx->pc = 0x1faf58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x1faf5c: 0x46800020
    ctx->pc = 0x1faf5cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1faf60: 0x1680018
    ctx->pc = 0x1faf60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x1faf64: 0x70c08628
    ctx->pc = 0x1faf64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1faf68: 0x621021
    ctx->pc = 0x1faf68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1faf6c: 0x83fc2
    ctx->pc = 0x1faf6cu;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 8), 31));
    // 0x1faf70: 0x3010
    ctx->pc = 0x1faf70u;
    SET_GPR_U32(ctx, 6, ctx->hi);
    // 0x1faf74: 0xe4a00010
    ctx->pc = 0x1faf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x1faf78: 0xa4a00030
    ctx->pc = 0x1faf78u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x1faf7c: 0xc81821
    ctx->pc = 0x1faf7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1faf80: 0x24040
    ctx->pc = 0x1faf80u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1faf84: 0x1680018
    ctx->pc = 0x1faf84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x1faf88: 0x31943
    ctx->pc = 0x1faf88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1faf8c: 0x674821
    ctx->pc = 0x1faf8cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1faf90: 0x25220001
    ctx->pc = 0x1faf90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1faf94: 0x3010
    ctx->pc = 0x1faf94u;
    SET_GPR_U32(ctx, 6, ctx->hi);
    // 0x1faf98: 0xa4a20034
    ctx->pc = 0x1faf98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x1faf9c: 0x83fc2
    ctx->pc = 0x1faf9cu;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 8), 31));
    // 0x1fafa0: 0xc83021
    ctx->pc = 0x1fafa0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1fafa4: 0x63143
    ctx->pc = 0x1fafa4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
    // 0x1fafa8: 0xc75021
    ctx->pc = 0x1fafa8u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1fafac: 0x25460001
    ctx->pc = 0x1fafacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 10), 1));
    // 0x1fafb0: 0xa4a60038
    ctx->pc = 0x1fafb0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 56), (uint16_t)GPR_U32(ctx, 6));
    // 0x1fafb4: 0x80a6003b
    ctx->pc = 0x1fafb4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 59)));
    // 0x1fafb8: 0x2403fff9
    ctx->pc = 0x1fafb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x1fafbc: 0x24020001
    ctx->pc = 0x1fafbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fafc0: 0x70809628
    ctx->pc = 0x1fafc0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1fafc4: 0x34c60001
    ctx->pc = 0x1fafc4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 1));
    // 0x1fafc8: 0xa0a6003b
    ctx->pc = 0x1fafc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 59), (uint8_t)GPR_U32(ctx, 6));
    // 0x1fafcc: 0x80a6003b
    ctx->pc = 0x1fafccu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 59)));
    // 0x1fafd0: 0xc31824
    ctx->pc = 0x1fafd0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1fafd4: 0xa0a3003b
    ctx->pc = 0x1fafd4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 59), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fafd8: 0xa0a2003c
    ctx->pc = 0x1fafd8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 60), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fafdc: 0xc07ec50
    ctx->pc = 0x1FAFDCu;
    SET_GPR_U32(ctx, 31, 0x1FAFE4u);
    ctx->pc = 0x1FAFE0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FB140u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrameNum__12BodyMgrClassFi_0x1fb140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAFE4u; }
        else if (ctx->pc != 0x1FAFE4u) { ctx->pc = 0x1FAFE4u; }
    }
    if (ctx->pc != 0x1FAFE4u) { return; }
    ctx->pc = 0x1FAFE4u;
    // 0x1fafe4: 0x72402628
    ctx->pc = 0x1fafe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1fafe8: 0xc07e924
    ctx->pc = 0x1FAFE8u;
    SET_GPR_U32(ctx, 31, 0x1FAFF0u);
    ctx->pc = 0x1FAFECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1FA490u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMotPtr__12BodyMgrClassFi_0x1fa490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAFF0u; }
        else if (ctx->pc != 0x1FAFF0u) { ctx->pc = 0x1FAFF0u; }
    }
    if (ctx->pc != 0x1FAFF0u) { return; }
    ctx->pc = 0x1FAFF0u;
    // 0x1faff0: 0x26220070
    ctx->pc = 0x1faff0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 112));
    // 0x1faff4: 0xae420000
    ctx->pc = 0x1faff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1faff8: 0x72002e28
    ctx->pc = 0x1faff8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1faffc: 0x72402628
    ctx->pc = 0x1faffcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1fb000: 0xc07ec0c
    ctx->pc = 0x1FB000u;
    SET_GPR_U32(ctx, 31, 0x1FB008u);
    ctx->pc = 0x1FB004u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1FB030u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDivNum__12BodyMgrClassFii_0x1fb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB008u; }
        else if (ctx->pc != 0x1FB008u) { ctx->pc = 0x1FB008u; }
    }
    if (ctx->pc != 0x1FB008u) { return; }
    ctx->pc = 0x1FB008u;
    // 0x1fb008: 0x24050001
    ctx->pc = 0x1fb008u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb00c: 0x72402628
    ctx->pc = 0x1fb00cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1fb010: 0xc07eb74
    ctx->pc = 0x1FB010u;
    SET_GPR_U32(ctx, 31, 0x1FB018u);
    ctx->pc = 0x1FB014u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FADD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setSupplement__12BodyMgrClassFii_0x1fadd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB018u; }
        else if (ctx->pc != 0x1FB018u) { ctx->pc = 0x1FB018u; }
    }
    if (ctx->pc != 0x1FB018u) { return; }
    ctx->pc = 0x1FB018u;
    // 0x1fb018: 0x7bbf0030
    ctx->pc = 0x1fb018u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fb01c: 0x7bb20020
    ctx->pc = 0x1fb01cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fb020: 0x7bb10010
    ctx->pc = 0x1fb020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb024: 0x7bb00000
    ctx->pc = 0x1fb024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb028: 0x3e00008
    ctx->pc = 0x1FB028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB02Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB030u;
}
