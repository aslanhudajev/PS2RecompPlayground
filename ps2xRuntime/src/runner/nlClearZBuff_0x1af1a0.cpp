#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlClearZBuff
// Address: 0x1af1a0 - 0x1af304
void nlClearZBuff_0x1af1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlClearZBuff");


    ctx->pc = 0x1af1a0u;

    // 0x1af1a0: 0x27bdffb0
    ctx->pc = 0x1af1a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1af1a4: 0x7fbf0040
    ctx->pc = 0x1af1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1af1a8: 0x7fb30030
    ctx->pc = 0x1af1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1af1ac: 0x7fb20020
    ctx->pc = 0x1af1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1af1b0: 0x7fb10010
    ctx->pc = 0x1af1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af1b4: 0x7fb00000
    ctx->pc = 0x1af1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1af1b8: 0xc7838aa0
    ctx->pc = 0x1af1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1af1bc: 0xc7818aa8
    ctx->pc = 0x1af1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af1c0: 0x3c024180
    ctx->pc = 0x1af1c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16768 << 16));
    // 0x1af1c4: 0x44822800
    ctx->pc = 0x1af1c4u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 2);
    // 0x1af1c8: 0xc7848a9c
    ctx->pc = 0x1af1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1af1cc: 0xc7808aa4
    ctx->pc = 0x1af1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af1d0: 0x46032882
    ctx->pc = 0x1af1d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x1af1d4: 0x46011840
    ctx->pc = 0x1af1d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1af1d8: 0x46012842
    ctx->pc = 0x1af1d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1af1dc: 0x460010a4
    ctx->pc = 0x1af1dcu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[2]);
    // 0x1af1e0: 0x46000864
    ctx->pc = 0x1af1e0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1af1e4: 0x44100800
    ctx->pc = 0x1af1e4u;
    SET_GPR_U32(ctx, 16, *(uint32_t*)&ctx->f[1]);
    // 0x1af1e8: 0x46002000
    ctx->pc = 0x1af1e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1af1ec: 0x44121000
    ctx->pc = 0x1af1ecu;
    SET_GPR_U32(ctx, 18, *(uint32_t*)&ctx->f[2]);
    // 0x1af1f0: 0x46042842
    ctx->pc = 0x1af1f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1af1f4: 0x46002882
    ctx->pc = 0x1af1f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1af1f8: 0x46000824
    ctx->pc = 0x1af1f8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1af1fc: 0x44130000
    ctx->pc = 0x1af1fcu;
    SET_GPR_U32(ctx, 19, *(uint32_t*)&ctx->f[0]);
    // 0x1af200: 0x46001024
    ctx->pc = 0x1af200u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[2]);
    // 0x1af204: 0x44110000
    ctx->pc = 0x1af204u;
    SET_GPR_U32(ctx, 17, *(uint32_t*)&ctx->f[0]);
label_1af208:
    // 0x1af208: 0x3c011001
    ctx->pc = 0x1af208u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1af20c: 0x8c22d000
    ctx->pc = 0x1af20cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1af210: 0x30420100
    ctx->pc = 0x1af210u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1af214: 0x0
    ctx->pc = 0x1af214u;
    // NOP
    // 0x1af218: 0x0
    ctx->pc = 0x1af218u;
    // NOP
    // 0x1af21c: 0x1440fffa
    ctx->pc = 0x1AF21Cu;
    {
        const bool branch_taken_0x1af21c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1af21c) {
            ctx->pc = 0x1AF208u;
            goto label_1af208;
        }
    }
    ctx->pc = 0x1AF224u;
    // 0x1af224: 0xc069528
    ctx->pc = 0x1AF224u;
    SET_GPR_U32(ctx, 31, 0x1AF22Cu);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF22Cu; }
        else if (ctx->pc != 0x1AF22Cu) { ctx->pc = 0x1AF22Cu; }
    }
    if (ctx->pc != 0x1AF22Cu) { return; }
    ctx->pc = 0x1AF22Cu;
    // 0x1af22c: 0x13183c
    ctx->pc = 0x1af22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1af230: 0x12203c
    ctx->pc = 0x1af230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1af234: 0x3183f
    ctx->pc = 0x1af234u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1af238: 0x4203f
    ctx->pc = 0x1af238u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1af23c: 0x31c38
    ctx->pc = 0x1af23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1af240: 0x832825
    ctx->pc = 0x1af240u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1af244: 0x11183c
    ctx->pc = 0x1af244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1af248: 0x10203c
    ctx->pc = 0x1af248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1af24c: 0x3183f
    ctx->pc = 0x1af24cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1af250: 0x4203f
    ctx->pc = 0x1af250u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1af254: 0x31c38
    ctx->pc = 0x1af254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1af258: 0x831825
    ctx->pc = 0x1af258u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1af25c: 0x3c041000
    ctx->pc = 0x1af25cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x1af260: 0x34860007
    ctx->pc = 0x1af260u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 4), 7));
    // 0x1af264: 0xac460000
    ctx->pc = 0x1af264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1af268: 0xac400004
    ctx->pc = 0x1af268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1af26c: 0xac440008
    ctx->pc = 0x1af26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1af270: 0x4303c
    ctx->pc = 0x1af270u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1af274: 0x3c045100
    ctx->pc = 0x1af274u;
    SET_GPR_U32(ctx, 4, ((uint32_t)20736 << 16));
    // 0x1af278: 0x34840007
    ctx->pc = 0x1af278u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 7));
    // 0x1af27c: 0xac44000c
    ctx->pc = 0x1af27cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1af280: 0x34048006
    ctx->pc = 0x1af280u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32774));
    // 0x1af284: 0x862025
    ctx->pc = 0x1af284u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1af288: 0xfc440010
    ctx->pc = 0x1af288u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x1af28c: 0x2404000e
    ctx->pc = 0x1af28cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1af290: 0xfc440018
    ctx->pc = 0x1af290u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 4));
    // 0x1af294: 0x2404006a
    ctx->pc = 0x1af294u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 106));
    // 0x1af298: 0xfc440020
    ctx->pc = 0x1af298u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 4));
    // 0x1af29c: 0x24040042
    ctx->pc = 0x1af29cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 66));
    // 0x1af2a0: 0xfc440028
    ctx->pc = 0x1af2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 4));
    // 0x1af2a4: 0x3c040003
    ctx->pc = 0x1af2a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)3 << 16));
    // 0x1af2a8: 0xfc440030
    ctx->pc = 0x1af2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 4));
    // 0x1af2ac: 0x24040047
    ctx->pc = 0x1af2acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 71));
    // 0x1af2b0: 0xfc440038
    ctx->pc = 0x1af2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 4));
    // 0x1af2b4: 0x24040046
    ctx->pc = 0x1af2b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 70));
    // 0x1af2b8: 0xfc440040
    ctx->pc = 0x1af2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 4));
    // 0x1af2bc: 0xfc400048
    ctx->pc = 0x1af2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 0));
    // 0x1af2c0: 0xfc400050
    ctx->pc = 0x1af2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 0));
    // 0x1af2c4: 0x24040001
    ctx->pc = 0x1af2c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af2c8: 0xfc440058
    ctx->pc = 0x1af2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 4));
    // 0x1af2cc: 0xfc450060
    ctx->pc = 0x1af2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 5));
    // 0x1af2d0: 0x24040005
    ctx->pc = 0x1af2d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1af2d4: 0xfc440068
    ctx->pc = 0x1af2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 4));
    // 0x1af2d8: 0xfc430070
    ctx->pc = 0x1af2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 112), GPR_U64(ctx, 3));
    // 0x1af2dc: 0xfc440078
    ctx->pc = 0x1af2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 120), GPR_U64(ctx, 4));
    // 0x1af2e0: 0xc06952c
    ctx->pc = 0x1AF2E0u;
    SET_GPR_U32(ctx, 31, 0x1AF2E8u);
    ctx->pc = 0x1AF2E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2E8u; }
        else if (ctx->pc != 0x1AF2E8u) { ctx->pc = 0x1AF2E8u; }
    }
    if (ctx->pc != 0x1AF2E8u) { return; }
    ctx->pc = 0x1AF2E8u;
    // 0x1af2e8: 0x7bbf0040
    ctx->pc = 0x1af2e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1af2ec: 0x7bb30030
    ctx->pc = 0x1af2ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af2f0: 0x7bb20020
    ctx->pc = 0x1af2f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af2f4: 0x7bb10010
    ctx->pc = 0x1af2f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af2f8: 0x7bb00000
    ctx->pc = 0x1af2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af2fc: 0x3e00008
    ctx->pc = 0x1AF2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF300u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF208u: goto label_1af208;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF304u;
}
