#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: motChange__12BodyMgrClassFP10MotObjTaski
// Address: 0x1fa9f0 - 0x1faa7c
void motChange__12BodyMgrClassFP10MotObjTaski_0x1fa9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("motChange__12BodyMgrClassFP10MotObjTaski");


    ctx->pc = 0x1fa9f0u;

    // 0x1fa9f0: 0x27bdffd0
    ctx->pc = 0x1fa9f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fa9f4: 0x7fbf0020
    ctx->pc = 0x1fa9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1fa9f8: 0x7fb10010
    ctx->pc = 0x1fa9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fa9fc: 0x7fb00000
    ctx->pc = 0x1fa9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1faa00: 0x70c08628
    ctx->pc = 0x1faa00u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1faa04: 0xacb00004
    ctx->pc = 0x1faa04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
    // 0x1faa08: 0xaca0000c
    ctx->pc = 0x1faa08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1faa0c: 0xaca0001c
    ctx->pc = 0x1faa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x1faa10: 0xaca00014
    ctx->pc = 0x1faa10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x1faa14: 0xaca00024
    ctx->pc = 0x1faa14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x1faa18: 0xa0a0003a
    ctx->pc = 0x1faa18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 58), (uint8_t)GPR_U32(ctx, 0));
    // 0x1faa1c: 0x70a08e28
    ctx->pc = 0x1faa1cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1faa20: 0xa0a0003c
    ctx->pc = 0x1faa20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x1faa24: 0xac910004
    ctx->pc = 0x1faa24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x1faa28: 0x26220070
    ctx->pc = 0x1faa28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 112));
    // 0x1faa2c: 0xac820000
    ctx->pc = 0x1faa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1faa30: 0x70002e28
    ctx->pc = 0x1faa30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1faa34: 0xc07ec0c
    ctx->pc = 0x1FAA34u;
    SET_GPR_U32(ctx, 31, 0x1FAA3Cu);
    ctx->pc = 0x1FAA38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FB030u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDivNum__12BodyMgrClassFii_0x1fb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAA3Cu; }
        else if (ctx->pc != 0x1FAA3Cu) { ctx->pc = 0x1FAA3Cu; }
    }
    if (ctx->pc != 0x1FAA3Cu) { return; }
    ctx->pc = 0x1FAA3Cu;
    // 0x1faa3c: 0x8625002c
    ctx->pc = 0x1faa3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1faa40: 0x72003628
    ctx->pc = 0x1faa40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1faa44: 0x27848d4c
    ctx->pc = 0x1faa44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1faa48: 0xc07f1d8
    ctx->pc = 0x1FAA48u;
    SET_GPR_U32(ctx, 31, 0x1FAA50u);
    ctx->pc = 0x1FAA4Cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FC760u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdr__11MotMgrClassFiii_0x1fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAA50u; }
        else if (ctx->pc != 0x1FAA50u) { ctx->pc = 0x1FAA50u; }
    }
    if (ctx->pc != 0x1FAA50u) { return; }
    ctx->pc = 0x1FAA50u;
    // 0x1faa50: 0xc4400000
    ctx->pc = 0x1faa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1faa54: 0xe620004c
    ctx->pc = 0x1faa54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x1faa58: 0xc4400004
    ctx->pc = 0x1faa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1faa5c: 0xe6200050
    ctx->pc = 0x1faa5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x1faa60: 0xc4400008
    ctx->pc = 0x1faa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1faa64: 0xe6200054
    ctx->pc = 0x1faa64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x1faa68: 0x7bbf0020
    ctx->pc = 0x1faa68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1faa6c: 0x7bb10010
    ctx->pc = 0x1faa6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1faa70: 0x7bb00000
    ctx->pc = 0x1faa70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1faa74: 0x3e00008
    ctx->pc = 0x1FAA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAA78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FAA7Cu;
}
