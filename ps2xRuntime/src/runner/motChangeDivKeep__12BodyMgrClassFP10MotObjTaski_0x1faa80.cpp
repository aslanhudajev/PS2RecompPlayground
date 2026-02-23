#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: motChangeDivKeep__12BodyMgrClassFP10MotObjTaski
// Address: 0x1faa80 - 0x1faaec
void motChangeDivKeep__12BodyMgrClassFP10MotObjTaski_0x1faa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("motChangeDivKeep__12BodyMgrClassFP10MotObjTaski");


    ctx->pc = 0x1faa80u;

    // 0x1faa80: 0x27bdffe0
    ctx->pc = 0x1faa80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1faa84: 0x7fbf0010
    ctx->pc = 0x1faa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1faa88: 0x7fb00000
    ctx->pc = 0x1faa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1faa8c: 0xaca60004
    ctx->pc = 0x1faa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x1faa90: 0xaca0000c
    ctx->pc = 0x1faa90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1faa94: 0xaca0001c
    ctx->pc = 0x1faa94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x1faa98: 0xaca00014
    ctx->pc = 0x1faa98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x1faa9c: 0xaca00024
    ctx->pc = 0x1faa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x1faaa0: 0x70a08628
    ctx->pc = 0x1faaa0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1faaa4: 0xa0a0003a
    ctx->pc = 0x1faaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 58), (uint8_t)GPR_U32(ctx, 0));
    // 0x1faaa8: 0xac900004
    ctx->pc = 0x1faaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x1faaac: 0x26020070
    ctx->pc = 0x1faaacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1faab0: 0xac820000
    ctx->pc = 0x1faab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1faab4: 0x84a5002c
    ctx->pc = 0x1faab4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1faab8: 0x27848d4c
    ctx->pc = 0x1faab8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1faabc: 0xc07f1d8
    ctx->pc = 0x1FAABCu;
    SET_GPR_U32(ctx, 31, 0x1FAAC4u);
    ctx->pc = 0x1FAAC0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FC760u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdr__11MotMgrClassFiii_0x1fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAAC4u; }
        else if (ctx->pc != 0x1FAAC4u) { ctx->pc = 0x1FAAC4u; }
    }
    if (ctx->pc != 0x1FAAC4u) { return; }
    ctx->pc = 0x1FAAC4u;
    // 0x1faac4: 0xc4400000
    ctx->pc = 0x1faac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1faac8: 0xe600004c
    ctx->pc = 0x1faac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1faacc: 0xc4400004
    ctx->pc = 0x1faaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1faad0: 0xe6000050
    ctx->pc = 0x1faad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1faad4: 0xc4400008
    ctx->pc = 0x1faad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1faad8: 0xe6000054
    ctx->pc = 0x1faad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1faadc: 0x7bbf0010
    ctx->pc = 0x1faadcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1faae0: 0x7bb00000
    ctx->pc = 0x1faae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1faae4: 0x3e00008
    ctx->pc = 0x1FAAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAAE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FAAECu;
}
