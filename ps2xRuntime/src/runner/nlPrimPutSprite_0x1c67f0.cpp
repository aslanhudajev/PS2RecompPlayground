#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPrimPutSprite
// Address: 0x1c67f0 - 0x1c69ec
void nlPrimPutSprite_0x1c67f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPrimPutSprite");


    ctx->pc = 0x1c67f0u;

    // 0x1c67f0: 0x27bdff80
    ctx->pc = 0x1c67f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c67f4: 0x7fbf0070
    ctx->pc = 0x1c67f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1c67f8: 0x7fb60060
    ctx->pc = 0x1c67f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c67fc: 0x7fb50050
    ctx->pc = 0x1c67fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c6800: 0x7fb40040
    ctx->pc = 0x1c6800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c6804: 0x7fb30030
    ctx->pc = 0x1c6804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c6808: 0x7fb20020
    ctx->pc = 0x1c6808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c680c: 0x7fb10010
    ctx->pc = 0x1c680cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c6810: 0x7fb00000
    ctx->pc = 0x1c6810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c6814: 0xc7868a94
    ctx->pc = 0x1c6814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c6818: 0xc4810018
    ctx->pc = 0x1c6818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c681c: 0x3c024180
    ctx->pc = 0x1c681cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16768 << 16));
    // 0x1c6820: 0x44824000
    ctx->pc = 0x1c6820u;
    *(uint32_t*)&ctx->f[8] = GPR_U32(ctx, 2);
    // 0x1c6824: 0xc7828a14
    ctx->pc = 0x1c6824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6828: 0xc4800020
    ctx->pc = 0x1c6828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c682c: 0xc7878a98
    ctx->pc = 0x1c682cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1c6830: 0x46013140
    ctx->pc = 0x1c6830u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x1c6834: 0xc484001c
    ctx->pc = 0x1c6834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c6838: 0xc4830024
    ctx->pc = 0x1c6838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c683c: 0x8c830000
    ctx->pc = 0x1c683cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c6840: 0xc4810028
    ctx->pc = 0x1c6840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6844: 0x46003180
    ctx->pc = 0x1c6844u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x1c6848: 0x2402fef8
    ctx->pc = 0x1c6848u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967032));
    // 0x1c684c: 0x70808628
    ctx->pc = 0x1c684cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c6850: 0xc7808a18
    ctx->pc = 0x1c6850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6854: 0x46011043
    ctx->pc = 0x1c6854u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1c6858: 0x621024
    ctx->pc = 0x1c6858u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c685c: 0x34520006
    ctx->pc = 0x1c685cu;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 2), 6));
    // 0x1c6860: 0x46054142
    ctx->pc = 0x1c6860u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x1c6864: 0x460028a4
    ctx->pc = 0x1c6864u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[5]);
    // 0x1c6868: 0x44131000
    ctx->pc = 0x1c6868u;
    SET_GPR_U32(ctx, 19, *(uint32_t*)&ctx->f[2]);
    // 0x1c686c: 0x46000007
    ctx->pc = 0x1c686cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c6870: 0x46064082
    ctx->pc = 0x1c6870u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x1c6874: 0x460010a4
    ctx->pc = 0x1c6874u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[2]);
    // 0x1c6878: 0x44141000
    ctx->pc = 0x1c6878u;
    SET_GPR_U32(ctx, 20, *(uint32_t*)&ctx->f[2]);
    // 0x1c687c: 0x46043900
    ctx->pc = 0x1c687cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x1c6880: 0x46033880
    ctx->pc = 0x1c6880u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x1c6884: 0x460440c2
    ctx->pc = 0x1c6884u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x1c6888: 0x46024102
    ctx->pc = 0x1c6888u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x1c688c: 0x460018a4
    ctx->pc = 0x1c688cu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[3]);
    // 0x1c6890: 0x46010000
    ctx->pc = 0x1c6890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c6894: 0x44151000
    ctx->pc = 0x1c6894u;
    SET_GPR_U32(ctx, 21, *(uint32_t*)&ctx->f[2]);
    // 0x1c6898: 0x46000024
    ctx->pc = 0x1c6898u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1c689c: 0x460020a4
    ctx->pc = 0x1c689cu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[4]);
    // 0x1c68a0: 0x44020000
    ctx->pc = 0x1c68a0u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1c68a4: 0x44161000
    ctx->pc = 0x1c68a4u;
    SET_GPR_U32(ctx, 22, *(uint32_t*)&ctx->f[2]);
    // 0x1c68a8: 0xc069528
    ctx->pc = 0x1C68A8u;
    SET_GPR_U32(ctx, 31, 0x1C68B0u);
    ctx->pc = 0x1C68ACu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C68B0u; }
        else if (ctx->pc != 0x1C68B0u) { ctx->pc = 0x1C68B0u; }
    }
    if (ctx->pc != 0x1C68B0u) { return; }
    ctx->pc = 0x1C68B0u;
label_1c68b0:
    // 0x1c68b0: 0x3c011001
    ctx->pc = 0x1c68b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1c68b4: 0x8c23d000
    ctx->pc = 0x1c68b4u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1c68b8: 0x30630100
    ctx->pc = 0x1c68b8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1c68bc: 0x0
    ctx->pc = 0x1c68bcu;
    // NOP
    // 0x1c68c0: 0x0
    ctx->pc = 0x1c68c0u;
    // NOP
    // 0x1c68c4: 0x1460fffa
    ctx->pc = 0x1C68C4u;
    {
        const bool branch_taken_0x1c68c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c68c4) {
            ctx->pc = 0x1C68B0u;
            goto label_1c68b0;
        }
    }
    ctx->pc = 0x1C68CCu;
    // 0x1c68cc: 0x11183c
    ctx->pc = 0x1c68ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1c68d0: 0x3183f
    ctx->pc = 0x1c68d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c68d4: 0x3283c
    ctx->pc = 0x1c68d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c68d8: 0x15183c
    ctx->pc = 0x1c68d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1c68dc: 0x13203c
    ctx->pc = 0x1c68dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1c68e0: 0x3183f
    ctx->pc = 0x1c68e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c68e4: 0x4203f
    ctx->pc = 0x1c68e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1c68e8: 0x31c38
    ctx->pc = 0x1c68e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c68ec: 0x831825
    ctx->pc = 0x1c68ecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c68f0: 0xa34825
    ctx->pc = 0x1c68f0u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c68f4: 0x16183c
    ctx->pc = 0x1c68f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1c68f8: 0x14203c
    ctx->pc = 0x1c68f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1c68fc: 0x3183f
    ctx->pc = 0x1c68fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c6900: 0x4203f
    ctx->pc = 0x1c6900u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1c6904: 0x31c38
    ctx->pc = 0x1c6904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c6908: 0x831825
    ctx->pc = 0x1c6908u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c690c: 0xa34025
    ctx->pc = 0x1c690cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c6910: 0x12183c
    ctx->pc = 0x1c6910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1c6914: 0x3183f
    ctx->pc = 0x1c6914u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c6918: 0x32bfc
    ctx->pc = 0x1c6918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 15));
    // 0x1c691c: 0x3c033f80
    ctx->pc = 0x1c691cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1c6920: 0x3203c
    ctx->pc = 0x1c6920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c6924: 0x9e060014
    ctx->pc = 0x1c6924u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c6928: 0x24030001
    ctx->pc = 0x1c6928u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c692c: 0x240c0002
    ctx->pc = 0x1c692cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6930: 0x240b0005
    ctx->pc = 0x1c6930u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c6934: 0xc42025
    ctx->pc = 0x1c6934u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1c6938: 0xfc440020
    ctx->pc = 0x1c6938u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 4));
    // 0x1c693c: 0xfc430028
    ctx->pc = 0x1c693cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x1c6940: 0x8e060008
    ctx->pc = 0x1c6940u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c6944: 0x8e0a0004
    ctx->pc = 0x1c6944u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c6948: 0x3c031000
    ctx->pc = 0x1c6948u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1c694c: 0x34670006
    ctx->pc = 0x1c694cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 3), 6));
    // 0x1c6950: 0x34634000
    ctx->pc = 0x1c6950u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16384));
    // 0x1c6954: 0x3203c
    ctx->pc = 0x1c6954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c6958: 0x6303c
    ctx->pc = 0x1c6958u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c695c: 0x1463025
    ctx->pc = 0x1c695cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1c6960: 0xfc460030
    ctx->pc = 0x1c6960u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 6));
    // 0x1c6964: 0xfc4c0038
    ctx->pc = 0x1c6964u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 12));
    // 0x1c6968: 0xfc490040
    ctx->pc = 0x1c6968u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 9));
    // 0x1c696c: 0xfc4b0048
    ctx->pc = 0x1c696cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 11));
    // 0x1c6970: 0x8e090010
    ctx->pc = 0x1c6970u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c6974: 0x3c035100
    ctx->pc = 0x1c6974u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20736 << 16));
    // 0x1c6978: 0x34630006
    ctx->pc = 0x1c6978u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 6));
    // 0x1c697c: 0x3303c
    ctx->pc = 0x1c697cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c6980: 0x34038005
    ctx->pc = 0x1c6980u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32773));
    // 0x1c6984: 0x641825
    ctx->pc = 0x1c6984u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c6988: 0xa32825
    ctx->pc = 0x1c6988u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c698c: 0x8e0a000c
    ctx->pc = 0x1c698cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6990: 0x9483c
    ctx->pc = 0x1c6990u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1c6994: 0x2403000e
    ctx->pc = 0x1c6994u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c6998: 0x24040007
    ctx->pc = 0x1c6998u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c699c: 0x1494825
    ctx->pc = 0x1c699cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1c69a0: 0xfc490050
    ctx->pc = 0x1c69a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 9));
    // 0x1c69a4: 0xfc4c0058
    ctx->pc = 0x1c69a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 12));
    // 0x1c69a8: 0xfc480060
    ctx->pc = 0x1c69a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 8));
    // 0x1c69ac: 0xfc4b0068
    ctx->pc = 0x1c69acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 11));
    // 0x1c69b0: 0xfc470000
    ctx->pc = 0x1c69b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x1c69b4: 0xfc460008
    ctx->pc = 0x1c69b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x1c69b8: 0xfc450010
    ctx->pc = 0x1c69b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x1c69bc: 0xc06952c
    ctx->pc = 0x1C69BCu;
    SET_GPR_U32(ctx, 31, 0x1C69C4u);
    ctx->pc = 0x1C69C0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C69C4u; }
        else if (ctx->pc != 0x1C69C4u) { ctx->pc = 0x1C69C4u; }
    }
    if (ctx->pc != 0x1C69C4u) { return; }
    ctx->pc = 0x1C69C4u;
    // 0x1c69c4: 0x7bbf0070
    ctx->pc = 0x1c69c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c69c8: 0x7bb60060
    ctx->pc = 0x1c69c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c69cc: 0x7bb50050
    ctx->pc = 0x1c69ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c69d0: 0x7bb40040
    ctx->pc = 0x1c69d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c69d4: 0x7bb30030
    ctx->pc = 0x1c69d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c69d8: 0x7bb20020
    ctx->pc = 0x1c69d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c69dc: 0x7bb10010
    ctx->pc = 0x1c69dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c69e0: 0x7bb00000
    ctx->pc = 0x1c69e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c69e4: 0x3e00008
    ctx->pc = 0x1C69E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C69E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C68B0u: goto label_1c68b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C69ECu;
}
