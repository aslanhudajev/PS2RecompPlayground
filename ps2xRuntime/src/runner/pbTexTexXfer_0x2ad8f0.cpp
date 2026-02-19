#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbTexTexXfer
// Address: 0x2ad8f0 - 0x2adb28
void pbTexTexXfer_0x2ad8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad8f0u;

    // 0x2ad8f0: 0x27bdfff0
    ctx->pc = 0x2ad8f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ad8f4: 0x80582d
    ctx->pc = 0x2ad8f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad8f8: 0xc0702d
    ctx->pc = 0x2ad8f8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad8fc: 0xe0782d
    ctx->pc = 0x2ad8fcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad900: 0x3c0a0037
    ctx->pc = 0x2ad900u;
    SET_GPR_U32(ctx, 10, ((uint32_t)55 << 16));
    // 0x2ad904: 0x25468ab0
    ctx->pc = 0x2ad904u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 10), 4294937264));
    // 0x2ad908: 0x956c0016
    ctx->pc = 0x2ad908u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 22)));
    // 0x2ad90c: 0x956d0018
    ctx->pc = 0x2ad90cu;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x2ad910: 0x9567003c
    ctx->pc = 0x2ad910u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 60)));
    // 0x2ad914: 0x94943
    ctx->pc = 0x2ad914u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 5));
    // 0x2ad918: 0x312901ff
    ctx->pc = 0x2ad918u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 9), 511));
    // 0x2ad91c: 0xdcc20010
    ctx->pc = 0x2ad91cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2ad920: 0x2403fe00
    ctx->pc = 0x2ad920u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x2ad924: 0x431024
    ctx->pc = 0x2ad924u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad928: 0x491025
    ctx->pc = 0x2ad928u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2ad92c: 0x3108003f
    ctx->pc = 0x2ad92cu;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 8), 63));
    // 0x2ad930: 0x84438
    ctx->pc = 0x2ad930u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2ad934: 0x3c03ffc0
    ctx->pc = 0x2ad934u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65472 << 16));
    // 0x2ad938: 0x3463ffff
    ctx->pc = 0x2ad938u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ad93c: 0x431024
    ctx->pc = 0x2ad93cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad940: 0x481025
    ctx->pc = 0x2ad940u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ad944: 0xfcc20010
    ctx->pc = 0x2ad944u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x2ad948: 0x31c407ff
    ctx->pc = 0x2ad948u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 14), 2047));
    // 0x2ad94c: 0x42438
    ctx->pc = 0x2ad94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ad950: 0xdcc20030
    ctx->pc = 0x2ad950u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2ad954: 0x3c03f800
    ctx->pc = 0x2ad954u;
    SET_GPR_U32(ctx, 3, ((uint32_t)63488 << 16));
    // 0x2ad958: 0x3463ffff
    ctx->pc = 0x2ad958u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ad95c: 0x431024
    ctx->pc = 0x2ad95cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad960: 0x441025
    ctx->pc = 0x2ad960u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ad964: 0x31e307ff
    ctx->pc = 0x2ad964u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 15), 2047));
    // 0x2ad968: 0x31c3c
    ctx->pc = 0x2ad968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2ad96c: 0x3c04f800
    ctx->pc = 0x2ad96cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)63488 << 16));
    // 0x2ad970: 0x3484ffff
    ctx->pc = 0x2ad970u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2ad974: 0x42438
    ctx->pc = 0x2ad974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ad978: 0x3484ffff
    ctx->pc = 0x2ad978u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2ad97c: 0x42438
    ctx->pc = 0x2ad97cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ad980: 0x3484ffff
    ctx->pc = 0x2ad980u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2ad984: 0x441024
    ctx->pc = 0x2ad984u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ad988: 0x431025
    ctx->pc = 0x2ad988u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad98c: 0xfcc20030
    ctx->pc = 0x2ad98cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 2));
    // 0x2ad990: 0xafa50000
    ctx->pc = 0x2ad990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2ad994: 0x73940
    ctx->pc = 0x2ad994u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 5));
    // 0x2ad998: 0xafa70004
    ctx->pc = 0x2ad998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x2ad99c: 0xdfa20000
    ctx->pc = 0x2ad99cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad9a0: 0xdd630028
    ctx->pc = 0x2ad9a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x2ad9a4: 0x43102d
    ctx->pc = 0x2ad9a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2ad9a8: 0x2403ffe7
    ctx->pc = 0x2ad9a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x2ad9ac: 0x31c38
    ctx->pc = 0x2ad9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ad9b0: 0x3463ffff
    ctx->pc = 0x2ad9b0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ad9b4: 0x31c38
    ctx->pc = 0x2ad9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ad9b8: 0x3463ffff
    ctx->pc = 0x2ad9b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ad9bc: 0x431024
    ctx->pc = 0x2ad9bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad9c0: 0x34038000
    ctx->pc = 0x2ad9c0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x2ad9c4: 0x31d38
    ctx->pc = 0x2ad9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x2ad9c8: 0x431025
    ctx->pc = 0x2ad9c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad9cc: 0xfcc20050
    ctx->pc = 0x2ad9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 2));
    // 0x2ad9d0: 0x3c020037
    ctx->pc = 0x2ad9d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad9d4: 0x8c45295c
    ctx->pc = 0x2ad9d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 10588)));
    // 0x2ad9d8: 0x3c021000
    ctx->pc = 0x2ad9d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2ad9dc: 0x3442000e
    ctx->pc = 0x2ad9dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 14));
    // 0x2ad9e0: 0xaca20000
    ctx->pc = 0x2ad9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2ad9e4: 0xaca00004
    ctx->pc = 0x2ad9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2ad9e8: 0xaca00008
    ctx->pc = 0x2ad9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2ad9ec: 0xaca0000c
    ctx->pc = 0x2ad9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x2ad9f0: 0x24a50010
    ctx->pc = 0x2ad9f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x2ad9f4: 0xdd428ab0
    ctx->pc = 0x2ad9f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 4294937264)));
    // 0x2ad9f8: 0x3c03ffff
    ctx->pc = 0x2ad9f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2ad9fc: 0x34637fff
    ctx->pc = 0x2ad9fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32767));
    // 0x2ada00: 0x431024
    ctx->pc = 0x2ada00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ada04: 0xfd428ab0
    ctx->pc = 0x2ada04u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 4294937264), GPR_U64(ctx, 2));
    // 0x2ada08: 0x202d
    ctx->pc = 0x2ada08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada0c: 0x410c0
    ctx->pc = 0x2ada0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
label_2ada10:
    // 0x2ada10: 0x451821
    ctx->pc = 0x2ada10u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ada14: 0x461021
    ctx->pc = 0x2ada14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ada18: 0xdc420000
    ctx->pc = 0x2ada18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ada1c: 0xfc620000
    ctx->pc = 0x2ada1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2ada20: 0x24840001
    ctx->pc = 0x2ada20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ada24: 0x2c820012
    ctx->pc = 0x2ada24u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 18));
    // 0x2ada28: 0x1440fff9
    ctx->pc = 0x2ADA28u;
    {
        const bool branch_taken_0x2ada28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2ADA2Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x2ada28) {
            ctx->pc = 0x2ADA10u;
            goto label_2ada10;
        }
    }
    ctx->pc = 0x2ADA30u;
    // 0x2ada30: 0x24a50090
    ctx->pc = 0x2ada30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 144));
    // 0x2ada34: 0x3c02218b
    ctx->pc = 0x2ada34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8587 << 16));
    // 0x2ada38: 0x34424000
    ctx->pc = 0x2ada38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
    // 0x2ada3c: 0x2103c
    ctx->pc = 0x2ada3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ada40: 0x34428002
    ctx->pc = 0x2ada40u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
    // 0x2ada44: 0xfca20000
    ctx->pc = 0x2ada44u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2ada48: 0x24020053
    ctx->pc = 0x2ada48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 83));
    // 0x2ada4c: 0xfca20008
    ctx->pc = 0x2ada4cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x2ada50: 0x24a50010
    ctx->pc = 0x2ada50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x2ada54: 0xa0382d
    ctx->pc = 0x2ada54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada58: 0x482d
    ctx->pc = 0x2ada58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada5c: 0x402d
    ctx->pc = 0x2ada5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada60: 0xc3100
    ctx->pc = 0x2ada60u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 12), 4));
    // 0x2ada64: 0x95620008
    ctx->pc = 0x2ada64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2ada68: 0x30420040
    ctx->pc = 0x2ada68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x2ada6c: 0x1040001a
    ctx->pc = 0x2ADA6Cu;
    {
        const bool branch_taken_0x2ada6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADA70u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 13), 4));
        if (branch_taken_0x2ada6c) {
            ctx->pc = 0x2ADAD8u;
            goto label_2adad8;
        }
    }
    ctx->pc = 0x2ADA74u;
    // 0x2ada74: 0x95630012
    ctx->pc = 0x2ada74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 18)));
    // 0x2ada78: 0x31900
    ctx->pc = 0x2ada78u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ada7c: 0x3c02003a
    ctx->pc = 0x2ada7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ada80: 0x24420cb0
    ctx->pc = 0x2ada80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3248));
    // 0x2ada84: 0x621821
    ctx->pc = 0x2ada84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ada88: 0x44880800
    ctx->pc = 0x2ada88u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 8);
    // 0x2ada8c: 0x46800860
    ctx->pc = 0x2ada8cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2ada90: 0xc4620004
    ctx->pc = 0x2ada90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ada94: 0x46011000
    ctx->pc = 0x2ada94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ada98: 0x460000e4
    ctx->pc = 0x2ada98u;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2ada9c: 0x44091800
    ctx->pc = 0x2ada9cu;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[3]);
    // 0x2adaa0: 0x44860000
    ctx->pc = 0x2adaa0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x2adaa4: 0x46800020
    ctx->pc = 0x2adaa4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2adaa8: 0x46020000
    ctx->pc = 0x2adaa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2adaac: 0x460000a4
    ctx->pc = 0x2adaacu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2adab0: 0x44061000
    ctx->pc = 0x2adab0u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[2]);
    // 0x2adab4: 0xc462000c
    ctx->pc = 0x2adab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2adab8: 0x46011040
    ctx->pc = 0x2adab8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2adabc: 0x46000824
    ctx->pc = 0x2adabcu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x2adac0: 0x44080000
    ctx->pc = 0x2adac0u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[0]);
    // 0x2adac4: 0x44840000
    ctx->pc = 0x2adac4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x2adac8: 0x46800020
    ctx->pc = 0x2adac8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2adacc: 0x46020000
    ctx->pc = 0x2adaccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2adad0: 0x46000064
    ctx->pc = 0x2adad0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2adad4: 0x44040800
    ctx->pc = 0x2adad4u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[1]);
label_2adad8:
    // 0x2adad8: 0xfca90000
    ctx->pc = 0x2adad8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x2adadc: 0xfca80008
    ctx->pc = 0x2adadcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x2adae0: 0xfca00010
    ctx->pc = 0x2adae0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 0));
    // 0x2adae4: 0xfca00018
    ctx->pc = 0x2adae4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 0));
    // 0x2adae8: 0xace60020
    ctx->pc = 0x2adae8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 6));
    // 0x2adaec: 0xace40024
    ctx->pc = 0x2adaecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 4));
    // 0x2adaf0: 0xfca00028
    ctx->pc = 0x2adaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 0));
    // 0x2adaf4: 0xe1100
    ctx->pc = 0x2adaf4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 14), 4));
    // 0x2adaf8: 0xace20030
    ctx->pc = 0x2adaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 2));
    // 0x2adafc: 0xf1100
    ctx->pc = 0x2adafcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 15), 4));
    // 0x2adb00: 0xace20034
    ctx->pc = 0x2adb00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 2));
    // 0x2adb04: 0xfca00038
    ctx->pc = 0x2adb04u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 0));
    // 0x2adb08: 0x3c040037
    ctx->pc = 0x2adb08u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2adb0c: 0x2402000f
    ctx->pc = 0x2adb0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x2adb10: 0x21100
    ctx->pc = 0x2adb10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2adb14: 0x8c83295c
    ctx->pc = 0x2adb14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 10588)));
    // 0x2adb18: 0x431021
    ctx->pc = 0x2adb18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2adb1c: 0xac82295c
    ctx->pc = 0x2adb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10588), GPR_U32(ctx, 2));
    // 0x2adb20: 0x3e00008
    ctx->pc = 0x2ADB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADB24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ADA10u: goto label_2ada10;
            case 0x2ADAD8u: goto label_2adad8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2ADB28u;
}
