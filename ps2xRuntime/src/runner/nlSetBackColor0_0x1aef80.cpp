#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSetBackColor0
// Address: 0x1aef80 - 0x1af178
void nlSetBackColor0_0x1aef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSetBackColor0");


    ctx->pc = 0x1aef80u;

    // 0x1aef80: 0x27bdff60
    ctx->pc = 0x1aef80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1aef84: 0x7fbf0090
    ctx->pc = 0x1aef84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1aef88: 0x7fbe0080
    ctx->pc = 0x1aef88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1aef8c: 0x7fb70070
    ctx->pc = 0x1aef8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1aef90: 0x7fb60060
    ctx->pc = 0x1aef90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1aef94: 0x7fb50050
    ctx->pc = 0x1aef94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1aef98: 0x7fb40040
    ctx->pc = 0x1aef98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1aef9c: 0x7fb30030
    ctx->pc = 0x1aef9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1aefa0: 0x7fb20020
    ctx->pc = 0x1aefa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aefa4: 0x7fb10010
    ctx->pc = 0x1aefa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aefa8: 0x7fb00000
    ctx->pc = 0x1aefa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aefac: 0xc7838aa0
    ctx->pc = 0x1aefacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1aefb0: 0xc7818aa8
    ctx->pc = 0x1aefb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aefb4: 0x3c024180
    ctx->pc = 0x1aefb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16768 << 16));
    // 0x1aefb8: 0x44822800
    ctx->pc = 0x1aefb8u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 2);
    // 0x1aefbc: 0xc7848a9c
    ctx->pc = 0x1aefbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1aefc0: 0xc7808aa4
    ctx->pc = 0x1aefc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aefc4: 0x46032882
    ctx->pc = 0x1aefc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x1aefc8: 0x70809628
    ctx->pc = 0x1aefc8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1aefcc: 0x70a08e28
    ctx->pc = 0x1aefccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1aefd0: 0x70c08628
    ctx->pc = 0x1aefd0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1aefd4: 0x70e0be28
    ctx->pc = 0x1aefd4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1aefd8: 0x46011840
    ctx->pc = 0x1aefd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1aefdc: 0x7100f628
    ctx->pc = 0x1aefdcu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1aefe0: 0x46012842
    ctx->pc = 0x1aefe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1aefe4: 0x460010a4
    ctx->pc = 0x1aefe4u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[2]);
    // 0x1aefe8: 0x46000864
    ctx->pc = 0x1aefe8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1aefec: 0x44140800
    ctx->pc = 0x1aefecu;
    SET_GPR_U32(ctx, 20, *(uint32_t*)&ctx->f[1]);
    // 0x1aeff0: 0x46002000
    ctx->pc = 0x1aeff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1aeff4: 0x44131000
    ctx->pc = 0x1aeff4u;
    SET_GPR_U32(ctx, 19, *(uint32_t*)&ctx->f[2]);
    // 0x1aeff8: 0x46042842
    ctx->pc = 0x1aeff8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1aeffc: 0x46002882
    ctx->pc = 0x1aeffcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1af000: 0x46000824
    ctx->pc = 0x1af000u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1af004: 0x44150000
    ctx->pc = 0x1af004u;
    SET_GPR_U32(ctx, 21, *(uint32_t*)&ctx->f[0]);
    // 0x1af008: 0x46001024
    ctx->pc = 0x1af008u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[2]);
    // 0x1af00c: 0x44160000
    ctx->pc = 0x1af00cu;
    SET_GPR_U32(ctx, 22, *(uint32_t*)&ctx->f[0]);
label_1af010:
    // 0x1af010: 0x3c011001
    ctx->pc = 0x1af010u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1af014: 0x8c22d000
    ctx->pc = 0x1af014u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1af018: 0x30420100
    ctx->pc = 0x1af018u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1af01c: 0x0
    ctx->pc = 0x1af01cu;
    // NOP
    // 0x1af020: 0x0
    ctx->pc = 0x1af020u;
    // NOP
    // 0x1af024: 0x1440fffa
    ctx->pc = 0x1AF024u;
    {
        const bool branch_taken_0x1af024 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1af024) {
            ctx->pc = 0x1AF010u;
            goto label_1af010;
        }
    }
    ctx->pc = 0x1AF02Cu;
    // 0x1af02c: 0xc069528
    ctx->pc = 0x1AF02Cu;
    SET_GPR_U32(ctx, 31, 0x1AF034u);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF034u; }
        else if (ctx->pc != 0x1AF034u) { ctx->pc = 0x1AF034u; }
    }
    if (ctx->pc != 0x1AF034u) { return; }
    ctx->pc = 0x1AF034u;
    // 0x1af034: 0x17203c
    ctx->pc = 0x1af034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1af038: 0x4203f
    ctx->pc = 0x1af038u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1af03c: 0x4283c
    ctx->pc = 0x1af03cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1af040: 0x16203c
    ctx->pc = 0x1af040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1af044: 0x4203f
    ctx->pc = 0x1af044u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1af048: 0x43c38
    ctx->pc = 0x1af048u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << 16);
    // 0x1af04c: 0x3c041000
    ctx->pc = 0x1af04cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x1af050: 0x348a000b
    ctx->pc = 0x1af050u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 4), 11));
    // 0x1af054: 0xac4a0000
    ctx->pc = 0x1af054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x1af058: 0xac400004
    ctx->pc = 0x1af058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1af05c: 0xac440008
    ctx->pc = 0x1af05cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1af060: 0x4503c
    ctx->pc = 0x1af060u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1af064: 0x3c045100
    ctx->pc = 0x1af064u;
    SET_GPR_U32(ctx, 4, ((uint32_t)20736 << 16));
    // 0x1af068: 0x3484000b
    ctx->pc = 0x1af068u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 11));
    // 0x1af06c: 0xac44000c
    ctx->pc = 0x1af06cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1af070: 0x3404800a
    ctx->pc = 0x1af070u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32778));
    // 0x1af074: 0x8a2025
    ctx->pc = 0x1af074u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1af078: 0xfc440010
    ctx->pc = 0x1af078u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x1af07c: 0x2404000e
    ctx->pc = 0x1af07cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1af080: 0xfc440018
    ctx->pc = 0x1af080u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 4));
    // 0x1af084: 0xfc5e0020
    ctx->pc = 0x1af084u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 30));
    // 0x1af088: 0x24040047
    ctx->pc = 0x1af088u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 71));
    // 0x1af08c: 0xfc440028
    ctx->pc = 0x1af08cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 4));
    // 0x1af090: 0x2404000c
    ctx->pc = 0x1af090u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af094: 0x12483c
    ctx->pc = 0x1af094u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1af098: 0x15183c
    ctx->pc = 0x1af098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1af09c: 0xfc440030
    ctx->pc = 0x1af09cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 4));
    // 0x1af0a0: 0x13303c
    ctx->pc = 0x1af0a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1af0a4: 0x3183f
    ctx->pc = 0x1af0a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1af0a8: 0x14403c
    ctx->pc = 0x1af0a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1af0ac: 0x9483e
    ctx->pc = 0x1af0acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x1af0b0: 0xfc400038
    ctx->pc = 0x1af0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 0));
    // 0x1af0b4: 0x6303f
    ctx->pc = 0x1af0b4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1af0b8: 0x31c38
    ctx->pc = 0x1af0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1af0bc: 0xfc490040
    ctx->pc = 0x1af0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 9));
    // 0x1af0c0: 0xc34825
    ctx->pc = 0x1af0c0u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1af0c4: 0x240a0001
    ctx->pc = 0x1af0c4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af0c8: 0x8403f
    ctx->pc = 0x1af0c8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x1af0cc: 0xc73025
    ctx->pc = 0x1af0ccu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1af0d0: 0xfc4a0048
    ctx->pc = 0x1af0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 10));
    // 0x1af0d4: 0xa94825
    ctx->pc = 0x1af0d4u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1af0d8: 0xfc490050
    ctx->pc = 0x1af0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 9));
    // 0x1af0dc: 0x1031825
    ctx->pc = 0x1af0dcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1af0e0: 0xa34825
    ctx->pc = 0x1af0e0u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1af0e4: 0x1071825
    ctx->pc = 0x1af0e4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1af0e8: 0x24080005
    ctx->pc = 0x1af0e8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1af0ec: 0x10383c
    ctx->pc = 0x1af0ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1af0f0: 0xa63025
    ctx->pc = 0x1af0f0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1af0f4: 0xa31825
    ctx->pc = 0x1af0f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1af0f8: 0x11283c
    ctx->pc = 0x1af0f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1af0fc: 0xfc480058
    ctx->pc = 0x1af0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 8));
    // 0x1af100: 0x5283e
    ctx->pc = 0x1af100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1af104: 0xfc450060
    ctx->pc = 0x1af104u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 5));
    // 0x1af108: 0xfc4a0068
    ctx->pc = 0x1af108u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 10));
    // 0x1af10c: 0xfc490070
    ctx->pc = 0x1af10cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 112), GPR_U64(ctx, 9));
    // 0x1af110: 0x2302825
    ctx->pc = 0x1af110u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1af114: 0x5283c
    ctx->pc = 0x1af114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1af118: 0x7383e
    ctx->pc = 0x1af118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1af11c: 0xfc480078
    ctx->pc = 0x1af11cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 120), GPR_U64(ctx, 8));
    // 0x1af120: 0xfc470080
    ctx->pc = 0x1af120u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 128), GPR_U64(ctx, 7));
    // 0x1af124: 0xfc4a0088
    ctx->pc = 0x1af124u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 136), GPR_U64(ctx, 10));
    // 0x1af128: 0xfc460090
    ctx->pc = 0x1af128u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 144), GPR_U64(ctx, 6));
    // 0x1af12c: 0x5283e
    ctx->pc = 0x1af12cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1af130: 0xfc480098
    ctx->pc = 0x1af130u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 152), GPR_U64(ctx, 8));
    // 0x1af134: 0xfc4500a0
    ctx->pc = 0x1af134u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 160), GPR_U64(ctx, 5));
    // 0x1af138: 0xfc4a00a8
    ctx->pc = 0x1af138u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 168), GPR_U64(ctx, 10));
    // 0x1af13c: 0xfc4300b0
    ctx->pc = 0x1af13cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 176), GPR_U64(ctx, 3));
    // 0x1af140: 0xc06952c
    ctx->pc = 0x1AF140u;
    SET_GPR_U32(ctx, 31, 0x1AF148u);
    ctx->pc = 0x1AF144u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 184), GPR_U64(ctx, 8));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF148u; }
        else if (ctx->pc != 0x1AF148u) { ctx->pc = 0x1AF148u; }
    }
    if (ctx->pc != 0x1AF148u) { return; }
    ctx->pc = 0x1AF148u;
    // 0x1af148: 0x7bbf0090
    ctx->pc = 0x1af148u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1af14c: 0x7bbe0080
    ctx->pc = 0x1af14cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1af150: 0x7bb70070
    ctx->pc = 0x1af150u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1af154: 0x7bb60060
    ctx->pc = 0x1af154u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1af158: 0x7bb50050
    ctx->pc = 0x1af158u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1af15c: 0x7bb40040
    ctx->pc = 0x1af15cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1af160: 0x7bb30030
    ctx->pc = 0x1af160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af164: 0x7bb20020
    ctx->pc = 0x1af164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af168: 0x7bb10010
    ctx->pc = 0x1af168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af16c: 0x7bb00000
    ctx->pc = 0x1af16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af170: 0x3e00008
    ctx->pc = 0x1AF170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF174u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF010u: goto label_1af010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF178u;
}
