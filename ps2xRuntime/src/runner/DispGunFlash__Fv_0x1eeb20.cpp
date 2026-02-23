#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DispGunFlash__Fv
// Address: 0x1eeb20 - 0x1eec50
void DispGunFlash__Fv_0x1eeb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DispGunFlash__Fv");


    ctx->pc = 0x1eeb20u;

    // 0x1eeb20: 0x27bdff80
    ctx->pc = 0x1eeb20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1eeb24: 0x7fbf0010
    ctx->pc = 0x1eeb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1eeb28: 0x7fb00000
    ctx->pc = 0x1eeb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eeb2c: 0xafa00060
    ctx->pc = 0x1eeb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1eeb30: 0xafa00064
    ctx->pc = 0x1eeb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1eeb34: 0x3c024420
    ctx->pc = 0x1eeb34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17440 << 16));
    // 0x1eeb38: 0xafa20068
    ctx->pc = 0x1eeb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1eeb3c: 0x3c024400
    ctx->pc = 0x1eeb3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17408 << 16));
    // 0x1eeb40: 0xafa2006c
    ctx->pc = 0x1eeb40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1eeb44: 0x70002628
    ctx->pc = 0x1eeb44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eeb48: 0x27a80060
    ctx->pc = 0x1eeb48u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1eeb4c: 0x27a90020
    ctx->pc = 0x1eeb4cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eeb50: 0x3c024180
    ctx->pc = 0x1eeb50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16768 << 16));
    // 0x1eeb54: 0x44820800
    ctx->pc = 0x1eeb54u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_1eeb58:
    // 0x1eeb58: 0xc5020000
    ctx->pc = 0x1eeb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eeb5c: 0xc7808a94
    ctx->pc = 0x1eeb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eeb60: 0x70002e28
    ctx->pc = 0x1eeb60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eeb64: 0x71003628
    ctx->pc = 0x1eeb64u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1eeb68: 0x71203e28
    ctx->pc = 0x1eeb68u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1eeb6c: 0x46001000
    ctx->pc = 0x1eeb6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1eeb70: 0xe5000000
    ctx->pc = 0x1eeb70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1eeb74: 0xc5020004
    ctx->pc = 0x1eeb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eeb78: 0xc7808a98
    ctx->pc = 0x1eeb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eeb7c: 0x46001000
    ctx->pc = 0x1eeb7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1eeb80: 0xe5000004
    ctx->pc = 0x1eeb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x1eeb84: 0x0
    ctx->pc = 0x1eeb84u;
    // NOP
label_1eeb88:
    // 0x1eeb88: 0xc4c00000
    ctx->pc = 0x1eeb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eeb8c: 0x24a50001
    ctx->pc = 0x1eeb8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1eeb90: 0x28a20002
    ctx->pc = 0x1eeb90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 2));
    // 0x1eeb94: 0x46000802
    ctx->pc = 0x1eeb94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1eeb98: 0x24c60004
    ctx->pc = 0x1eeb98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x1eeb9c: 0x46000024
    ctx->pc = 0x1eeb9cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1eeba0: 0x44030000
    ctx->pc = 0x1eeba0u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1eeba4: 0x0
    ctx->pc = 0x1eeba4u;
    // NOP
    // 0x1eeba8: 0x2463ffff
    ctx->pc = 0x1eeba8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1eebac: 0xace30000
    ctx->pc = 0x1eebacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1eebb0: 0x1440fff5
    ctx->pc = 0x1EEBB0u;
    {
        const bool branch_taken_0x1eebb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EEBB4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x1eebb0) {
            ctx->pc = 0x1EEB88u;
            goto label_1eeb88;
        }
    }
    ctx->pc = 0x1EEBB8u;
    // 0x1eebb8: 0xad200008
    ctx->pc = 0x1eebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x1eebbc: 0x24840001
    ctx->pc = 0x1eebbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1eebc0: 0xad20000c
    ctx->pc = 0x1eebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x1eebc4: 0x28820002
    ctx->pc = 0x1eebc4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
    // 0x1eebc8: 0x25080008
    ctx->pc = 0x1eebc8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 8));
    // 0x1eebcc: 0x1440ffe2
    ctx->pc = 0x1EEBCCu;
    {
        const bool branch_taken_0x1eebcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EEBD0u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 16));
        if (branch_taken_0x1eebcc) {
            ctx->pc = 0x1EEB58u;
            goto label_1eeb58;
        }
    }
    ctx->pc = 0x1EEBD4u;
    // 0x1eebd4: 0x3c020027
    ctx->pc = 0x1eebd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1eebd8: 0x2450c590
    ctx->pc = 0x1eebd8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294952336));
    // 0x1eebdc: 0x27a20020
    ctx->pc = 0x1eebdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eebe0: 0x78430000
    ctx->pc = 0x1eebe0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eebe4: 0x27a20030
    ctx->pc = 0x1eebe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1eebe8: 0x7e030060
    ctx->pc = 0x1eebe8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 3));
    // 0x1eebec: 0x78420000
    ctx->pc = 0x1eebecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eebf0: 0x7e020070
    ctx->pc = 0x1eebf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
label_1eebf4:
    // 0x1eebf4: 0x3c011001
    ctx->pc = 0x1eebf4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1eebf8: 0x8c22d000
    ctx->pc = 0x1eebf8u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1eebfc: 0x30420100
    ctx->pc = 0x1eebfcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1eec00: 0x0
    ctx->pc = 0x1eec00u;
    // NOP
    // 0x1eec04: 0x0
    ctx->pc = 0x1eec04u;
    // NOP
    // 0x1eec08: 0x1440fffa
    ctx->pc = 0x1EEC08u;
    {
        const bool branch_taken_0x1eec08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eec08) {
            ctx->pc = 0x1EEBF4u;
            goto label_1eebf4;
        }
    }
    ctx->pc = 0x1EEC10u;
    // 0x1eec10: 0xc069528
    ctx->pc = 0x1EEC10u;
    SET_GPR_U32(ctx, 31, 0x1EEC18u);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEC18u; }
        else if (ctx->pc != 0x1EEC18u) { ctx->pc = 0x1EEC18u; }
    }
    if (ctx->pc != 0x1EEC18u) { return; }
    ctx->pc = 0x1EEC18u;
    // 0x1eec18: 0x7c400000
    ctx->pc = 0x1eec18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x1eec1c: 0x3c031000
    ctx->pc = 0x1eec1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1eec20: 0xac430000
    ctx->pc = 0x1eec20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1eec24: 0x72002e28
    ctx->pc = 0x1eec24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eec28: 0xac43000c
    ctx->pc = 0x1eec28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1eec2c: 0x24440010
    ctx->pc = 0x1eec2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16));
    // 0x1eec30: 0xc06ac36
    ctx->pc = 0x1EEC30u;
    SET_GPR_U32(ctx, 31, 0x1EEC38u);
    ctx->pc = 0x1EEC34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEC38u; }
        else if (ctx->pc != 0x1EEC38u) { ctx->pc = 0x1EEC38u; }
    }
    if (ctx->pc != 0x1EEC38u) { return; }
    ctx->pc = 0x1EEC38u;
    // 0x1eec38: 0xc06952c
    ctx->pc = 0x1EEC38u;
    SET_GPR_U32(ctx, 31, 0x1EEC40u);
    ctx->pc = 0x1EEC3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEC40u; }
        else if (ctx->pc != 0x1EEC40u) { ctx->pc = 0x1EEC40u; }
    }
    if (ctx->pc != 0x1EEC40u) { return; }
    ctx->pc = 0x1EEC40u;
    // 0x1eec40: 0x7bbf0010
    ctx->pc = 0x1eec40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eec44: 0x7bb00000
    ctx->pc = 0x1eec44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eec48: 0x3e00008
    ctx->pc = 0x1EEC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEC4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EEB58u: goto label_1eeb58;
            case 0x1EEB88u: goto label_1eeb88;
            case 0x1EEBF4u: goto label_1eebf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EEC50u;
}
