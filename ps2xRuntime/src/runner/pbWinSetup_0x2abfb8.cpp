#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbWinSetup
// Address: 0x2abfb8 - 0x2ac2cc
void pbWinSetup_0x2abfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2abfb8u;

    // 0x2abfb8: 0x27bdffc0
    ctx->pc = 0x2abfb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2abfbc: 0xffbf0030
    ctx->pc = 0x2abfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2abfc0: 0xffb20020
    ctx->pc = 0x2abfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2abfc4: 0xffb10010
    ctx->pc = 0x2abfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2abfc8: 0xffb00000
    ctx->pc = 0x2abfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2abfcc: 0x3c020036
    ctx->pc = 0x2abfccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2abfd0: 0x8c50dee0
    ctx->pc = 0x2abfd0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2abfd4: 0x8e110008
    ctx->pc = 0x2abfd4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2abfd8: 0x3c020037
    ctx->pc = 0x2abfd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2abfdc: 0x24041145
    ctx->pc = 0x2abfdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4421));
    // 0x2abfe0: 0x8c451f78
    ctx->pc = 0x2abfe0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8056)));
    // 0x2abfe4: 0xc0a9a32
    ctx->pc = 0x2ABFE4u;
    SET_GPR_U32(ctx, 31, 0x2ABFECu);
    ctx->pc = 0x2ABFE8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A68C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaScheduleWait_0x2a68c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABFECu; }
    }
    if (ctx->pc != 0x2ABFECu) { return; }
    ctx->pc = 0x2ABFECu;
    // 0x2abfec: 0xc0aff06
    ctx->pc = 0x2ABFECu;
    SET_GPR_U32(ctx, 31, 0x2ABFF4u);
    ctx->pc = 0x2BFC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetDORegs_0x2bfc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABFF4u; }
    }
    if (ctx->pc != 0x2ABFF4u) { return; }
    ctx->pc = 0x2ABFF4u;
    // 0x2abff4: 0x3c020037
    ctx->pc = 0x2abff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2abff8: 0x8c422658
    ctx->pc = 0x2abff8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 9816)));
    // 0x2abffc: 0x10400005
    ctx->pc = 0x2ABFFCu;
    {
        const bool branch_taken_0x2abffc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AC000u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2abffc) {
            ctx->pc = 0x2AC014u;
            goto label_2ac014;
        }
    }
    ctx->pc = 0x2AC004u;
    // 0x2ac004: 0xc0a94f8
    ctx->pc = 0x2AC004u;
    SET_GPR_U32(ctx, 31, 0x2AC00Cu);
    ctx->pc = 0x2A53E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSPBufMalloc_0x2a53e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC00Cu; }
    }
    if (ctx->pc != 0x2AC00Cu) { return; }
    ctx->pc = 0x2AC00Cu;
    // 0x2ac00c: 0x10000002
    ctx->pc = 0x2AC00Cu;
    {
        const bool branch_taken_0x2ac00c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AC010u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ac00c) {
            ctx->pc = 0x2AC018u;
            goto label_2ac018;
        }
    }
    ctx->pc = 0x2AC014u;
label_2ac014:
    // 0x2ac014: 0x245252e0
    ctx->pc = 0x2ac014u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 21216));
label_2ac018:
    // 0x2ac018: 0x3c027000
    ctx->pc = 0x2ac018u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x2ac01c: 0x3442001d
    ctx->pc = 0x2ac01cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 29));
    // 0x2ac020: 0xae420000
    ctx->pc = 0x2ac020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2ac024: 0xae400004
    ctx->pc = 0x2ac024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2ac028: 0x3c021100
    ctx->pc = 0x2ac028u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4352 << 16));
    // 0x2ac02c: 0xae420008
    ctx->pc = 0x2ac02cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2ac030: 0x3c020300
    ctx->pc = 0x2ac030u;
    SET_GPR_U32(ctx, 2, ((uint32_t)768 << 16));
    // 0x2ac034: 0x34420040
    ctx->pc = 0x2ac034u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64));
    // 0x2ac038: 0xae42000c
    ctx->pc = 0x2ac038u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2ac03c: 0x3c020200
    ctx->pc = 0x2ac03cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
    // 0x2ac040: 0x344201e0
    ctx->pc = 0x2ac040u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 480));
    // 0x2ac044: 0xae420010
    ctx->pc = 0x2ac044u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x2ac048: 0x3c020100
    ctx->pc = 0x2ac048u;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x2ac04c: 0x34420404
    ctx->pc = 0x2ac04cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1028));
    // 0x2ac050: 0xae420014
    ctx->pc = 0x2ac050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x2ac054: 0xae400018
    ctx->pc = 0x2ac054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x2ac058: 0x3c026c11
    ctx->pc = 0x2ac058u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27665 << 16));
    // 0x2ac05c: 0x34420015
    ctx->pc = 0x2ac05cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 21));
    // 0x2ac060: 0xae42001c
    ctx->pc = 0x2ac060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x2ac064: 0x3c026401
    ctx->pc = 0x2ac064u;
    SET_GPR_U32(ctx, 2, ((uint32_t)25601 << 16));
    // 0x2ac068: 0x3442000b
    ctx->pc = 0x2ac068u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 11));
    // 0x2ac06c: 0xae420130
    ctx->pc = 0x2ac06cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 2));
    // 0x2ac070: 0x8e220020
    ctx->pc = 0x2ac070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ac074: 0xae420134
    ctx->pc = 0x2ac074u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 2));
    // 0x2ac078: 0x3c020000
    ctx->pc = 0x2ac078u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2ac07c: 0x24422e60
    ctx->pc = 0x2ac07cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11872));
    // 0x2ac080: 0x3c030000
    ctx->pc = 0x2ac080u;
    SET_GPR_U32(ctx, 3, ((uint32_t)0 << 16));
    // 0x2ac084: 0x24630000
    ctx->pc = 0x2ac084u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 0));
    // 0x2ac088: 0x431023
    ctx->pc = 0x2ac088u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ac08c: 0x210c3
    ctx->pc = 0x2ac08cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2ac090: 0xae420138
    ctx->pc = 0x2ac090u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 312), GPR_U32(ctx, 2));
    // 0x2ac094: 0x3c021700
    ctx->pc = 0x2ac094u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5888 << 16));
    // 0x2ac098: 0xae42013c
    ctx->pc = 0x2ac098u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 2));
    // 0x2ac09c: 0xae400140
    ctx->pc = 0x2ac09cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
    // 0x2ac0a0: 0xae400144
    ctx->pc = 0x2ac0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 324), GPR_U32(ctx, 0));
    // 0x2ac0a4: 0xae400148
    ctx->pc = 0x2ac0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 0));
    // 0x2ac0a8: 0x3c025000
    ctx->pc = 0x2ac0a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20480 << 16));
    // 0x2ac0ac: 0x34420009
    ctx->pc = 0x2ac0acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 9));
    // 0x2ac0b0: 0xae42014c
    ctx->pc = 0x2ac0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x2ac0b4: 0x34028008
    ctx->pc = 0x2ac0b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
    // 0x2ac0b8: 0xae420150
    ctx->pc = 0x2ac0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    // 0x2ac0bc: 0x3c021000
    ctx->pc = 0x2ac0bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2ac0c0: 0xae420154
    ctx->pc = 0x2ac0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 2));
    // 0x2ac0c4: 0x2402000e
    ctx->pc = 0x2ac0c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ac0c8: 0xfe420158
    ctx->pc = 0x2ac0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 344), GPR_U64(ctx, 2));
    // 0x2ac0cc: 0xfe400160
    ctx->pc = 0x2ac0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 352), GPR_U64(ctx, 0));
    // 0x2ac0d0: 0x3c0200ff
    ctx->pc = 0x2ac0d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
    // 0x2ac0d4: 0x3442ffff
    ctx->pc = 0x2ac0d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ac0d8: 0xfe420170
    ctx->pc = 0x2ac0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 368), GPR_U64(ctx, 2));
    // 0x2ac0dc: 0x3c027160
    ctx->pc = 0x2ac0dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)29024 << 16));
    // 0x2ac0e0: 0x34423524
    ctx->pc = 0x2ac0e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13604));
    // 0x2ac0e4: 0xae420180
    ctx->pc = 0x2ac0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 2));
    // 0x2ac0e8: 0x3c026071
    ctx->pc = 0x2ac0e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)24689 << 16));
    // 0x2ac0ec: 0x34422435
    ctx->pc = 0x2ac0ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 9269));
    // 0x2ac0f0: 0xae420184
    ctx->pc = 0x2ac0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 2));
    // 0x2ac0f4: 0xfe400190
    ctx->pc = 0x2ac0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 400), GPR_U64(ctx, 0));
    // 0x2ac0f8: 0xfe4001a0
    ctx->pc = 0x2ac0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 416), GPR_U64(ctx, 0));
    // 0x2ac0fc: 0xfe4001b0
    ctx->pc = 0x2ac0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 432), GPR_U64(ctx, 0));
    // 0x2ac100: 0x24020022
    ctx->pc = 0x2ac100u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
    // 0x2ac104: 0xfe420168
    ctx->pc = 0x2ac104u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 360), GPR_U64(ctx, 2));
    // 0x2ac108: 0x2402003d
    ctx->pc = 0x2ac108u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 61));
    // 0x2ac10c: 0xfe420178
    ctx->pc = 0x2ac10cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 376), GPR_U64(ctx, 2));
    // 0x2ac110: 0x24020044
    ctx->pc = 0x2ac110u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 68));
    // 0x2ac114: 0xfe420188
    ctx->pc = 0x2ac114u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 392), GPR_U64(ctx, 2));
    // 0x2ac118: 0x24020049
    ctx->pc = 0x2ac118u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 73));
    // 0x2ac11c: 0xfe420198
    ctx->pc = 0x2ac11cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 408), GPR_U64(ctx, 2));
    // 0x2ac120: 0x2402004a
    ctx->pc = 0x2ac120u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 74));
    // 0x2ac124: 0xfe4201a8
    ctx->pc = 0x2ac124u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 424), GPR_U64(ctx, 2));
    // 0x2ac128: 0x2402004b
    ctx->pc = 0x2ac128u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 75));
    // 0x2ac12c: 0xfe4201b8
    ctx->pc = 0x2ac12cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 440), GPR_U64(ctx, 2));
    // 0x2ac130: 0x24020040
    ctx->pc = 0x2ac130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ac134: 0xfe4201c8
    ctx->pc = 0x2ac134u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 456), GPR_U64(ctx, 2));
    // 0x2ac138: 0x24020041
    ctx->pc = 0x2ac138u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
    // 0x2ac13c: 0xfe4201d8
    ctx->pc = 0x2ac13cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 472), GPR_U64(ctx, 2));
    // 0x2ac140: 0x8e020004
    ctx->pc = 0x2ac140u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ac144: 0xc4400078
    ctx->pc = 0x2ac144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac148: 0x46000064
    ctx->pc = 0x2ac148u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2ac14c: 0x44050800
    ctx->pc = 0x2ac14cu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
    // 0x2ac150: 0x8e030010
    ctx->pc = 0x2ac150u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ac154: 0xc4600020
    ctx->pc = 0x2ac154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac158: 0x46800020
    ctx->pc = 0x2ac158u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ac15c: 0xc441007c
    ctx->pc = 0x2ac15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac160: 0x46010001
    ctx->pc = 0x2ac160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ac164: 0x46000064
    ctx->pc = 0x2ac164u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2ac168: 0x44070800
    ctx->pc = 0x2ac168u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[1]);
    // 0x2ac16c: 0xc4400080
    ctx->pc = 0x2ac16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac170: 0x46000064
    ctx->pc = 0x2ac170u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2ac174: 0x44040800
    ctx->pc = 0x2ac174u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[1]);
    // 0x2ac178: 0xc4600024
    ctx->pc = 0x2ac178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac17c: 0x46800020
    ctx->pc = 0x2ac17cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ac180: 0xc4410084
    ctx->pc = 0x2ac180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac184: 0x46010001
    ctx->pc = 0x2ac184u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ac188: 0x46000064
    ctx->pc = 0x2ac188u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2ac18c: 0x44060800
    ctx->pc = 0x2ac18cu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x2ac190: 0x2402ffff
    ctx->pc = 0x2ac190u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ac194: 0x45102a
    ctx->pc = 0x2ac194u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x2ac198: 0x2280a
    ctx->pc = 0x2ac198u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
    // 0x2ac19c: 0x8c630020
    ctx->pc = 0x2ac19cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2ac1a0: 0x65102a
    ctx->pc = 0x2ac1a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x2ac1a4: 0x54400001
    ctx->pc = 0x2AC1A4u;
    {
        const bool branch_taken_0x2ac1a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ac1a4) {
            ctx->pc = 0x2AC1A8u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2AC1ACu;
            goto label_2ac1ac;
        }
    }
    ctx->pc = 0x2AC1ACu;
label_2ac1ac:
    // 0x2ac1ac: 0xe5102a
    ctx->pc = 0x2ac1acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 5)));
    // 0x2ac1b0: 0xa2380b
    ctx->pc = 0x2ac1b0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
    // 0x2ac1b4: 0x8e020010
    ctx->pc = 0x2ac1b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ac1b8: 0x8c430020
    ctx->pc = 0x2ac1b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ac1bc: 0x67102a
    ctx->pc = 0x2ac1bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 7)));
    // 0x2ac1c0: 0x54400001
    ctx->pc = 0x2AC1C0u;
    {
        const bool branch_taken_0x2ac1c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ac1c0) {
            ctx->pc = 0x2AC1C4u;
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2AC1C8u;
            goto label_2ac1c8;
        }
    }
    ctx->pc = 0x2AC1C8u;
label_2ac1c8:
    // 0x2ac1c8: 0x2402ffff
    ctx->pc = 0x2ac1c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ac1cc: 0x44102a
    ctx->pc = 0x2ac1ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2ac1d0: 0x2200a
    ctx->pc = 0x2ac1d0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
    // 0x2ac1d4: 0x8e020010
    ctx->pc = 0x2ac1d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ac1d8: 0x8c430024
    ctx->pc = 0x2ac1d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2ac1dc: 0x64102a
    ctx->pc = 0x2ac1dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x2ac1e0: 0x54400001
    ctx->pc = 0x2AC1E0u;
    {
        const bool branch_taken_0x2ac1e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ac1e0) {
            ctx->pc = 0x2AC1E4u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2AC1E8u;
            goto label_2ac1e8;
        }
    }
    ctx->pc = 0x2AC1E8u;
label_2ac1e8:
    // 0x2ac1e8: 0xc4102a
    ctx->pc = 0x2ac1e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 4)));
    // 0x2ac1ec: 0x82300b
    ctx->pc = 0x2ac1ecu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 4));
    // 0x2ac1f0: 0x8e020010
    ctx->pc = 0x2ac1f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ac1f4: 0x8c430024
    ctx->pc = 0x2ac1f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2ac1f8: 0x66102a
    ctx->pc = 0x2ac1f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 6)));
    // 0x2ac1fc: 0x54400001
    ctx->pc = 0x2AC1FCu;
    {
        const bool branch_taken_0x2ac1fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ac1fc) {
            ctx->pc = 0x2AC200u;
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2AC204u;
            goto label_2ac204;
        }
    }
    ctx->pc = 0x2AC204u;
label_2ac204:
    // 0x2ac204: 0x71c00
    ctx->pc = 0x2ac204u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 16));
    // 0x2ac208: 0xa31825
    ctx->pc = 0x2ac208u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ac20c: 0xae4301c0
    ctx->pc = 0x2ac20cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 3));
    // 0x2ac210: 0x61400
    ctx->pc = 0x2ac210u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 16));
    // 0x2ac214: 0x821025
    ctx->pc = 0x2ac214u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ac218: 0xae4201c4
    ctx->pc = 0x2ac218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 2));
    // 0x2ac21c: 0xae4301d0
    ctx->pc = 0x2ac21cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 464), GPR_U32(ctx, 3));
    // 0x2ac220: 0xae4201d4
    ctx->pc = 0x2ac220u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 2));
    // 0x2ac224: 0x3c020037
    ctx->pc = 0x2ac224u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ac228: 0x8c428400
    ctx->pc = 0x2ac228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935552)));
    // 0x2ac22c: 0x8c420000
    ctx->pc = 0x2ac22cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac230: 0x10400003
    ctx->pc = 0x2AC230u;
    {
        const bool branch_taken_0x2ac230 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ac230) {
            ctx->pc = 0x2AC240u;
            goto label_2ac240;
        }
    }
    ctx->pc = 0x2AC238u;
    // 0x2ac238: 0xc0ab3a0
    ctx->pc = 0x2AC238u;
    SET_GPR_U32(ctx, 31, 0x2AC240u);
    ctx->pc = 0x2AC23Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2ACE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        debugScissor_0x2ace80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC240u; }
    }
    if (ctx->pc != 0x2AC240u) { return; }
    ctx->pc = 0x2AC240u;
label_2ac240:
    // 0x2ac240: 0xc0ab0b4
    ctx->pc = 0x2AC240u;
    SET_GPR_U32(ctx, 31, 0x2AC248u);
    ctx->pc = 0x2AC244u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    ctx->pc = 0x2AC2D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbProjCalc_0x2ac2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC248u; }
    }
    if (ctx->pc != 0x2AC248u) { return; }
    ctx->pc = 0x2AC248u;
    // 0x2ac248: 0xc0aaf22
    ctx->pc = 0x2AC248u;
    SET_GPR_U32(ctx, 31, 0x2AC250u);
    ctx->pc = 0x2AC24Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2ABC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbWinSetupDirLights_0x2abc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC250u; }
    }
    if (ctx->pc != 0x2AC250u) { return; }
    ctx->pc = 0x2AC250u;
    // 0x2ac250: 0xc0aae92
    ctx->pc = 0x2AC250u;
    SET_GPR_U32(ctx, 31, 0x2AC258u);
    ctx->pc = 0x2AC254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2ABA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbWinSetupPosLights_0x2aba48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC258u; }
    }
    if (ctx->pc != 0x2AC258u) { return; }
    ctx->pc = 0x2AC258u;
    // 0x2ac258: 0xc0aae72
    ctx->pc = 0x2AC258u;
    SET_GPR_U32(ctx, 31, 0x2AC260u);
    ctx->pc = 0x2AC25Cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    ctx->pc = 0x2AB9C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCameraCalc_0x2ab9c8(rdram, ctx, runtime);
        
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC260u; }
    }
    if (ctx->pc != 0x2AC260u) { return; }
    ctx->pc = 0x2AC260u;
    // 0x2ac260: 0x3c04003c
    ctx->pc = 0x2ac260u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2ac264: 0x24845890
    ctx->pc = 0x2ac264u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22672));
    // 0x2ac268: 0xc0aafd0
    ctx->pc = 0x2AC268u;
    SET_GPR_U32(ctx, 31, 0x2AC270u);
    ctx->pc = 0x2AC26Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 22704));
    ctx->pc = 0x2ABF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        setupClipMtxPkt_0x2abf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC270u; }
    }
    if (ctx->pc != 0x2AC270u) { return; }
    ctx->pc = 0x2AC270u;
    // 0x2ac270: 0x3c04003c
    ctx->pc = 0x2ac270u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2ac274: 0x248458a0
    ctx->pc = 0x2ac274u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22688));
    // 0x2ac278: 0xc0aafd0
    ctx->pc = 0x2AC278u;
    SET_GPR_U32(ctx, 31, 0x2AC280u);
    ctx->pc = 0x2AC27Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 22864));
    ctx->pc = 0x2ABF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        setupClipMtxPkt_0x2abf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC280u; }
    }
    if (ctx->pc != 0x2AC280u) { return; }
    ctx->pc = 0x2AC280u;
    // 0x2ac280: 0x240202d
    ctx->pc = 0x2ac280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac284: 0x262558b0
    ctx->pc = 0x2ac284u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 22704));
    // 0x2ac288: 0xc0aaf76
    ctx->pc = 0x2AC288u;
    SET_GPR_U32(ctx, 31, 0x2AC290u);
    ctx->pc = 0x2AC28Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 22864));
    ctx->pc = 0x2ABDD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setupMatrices_0x2abdd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC290u; }
    }
    if (ctx->pc != 0x2AC290u) { return; }
    ctx->pc = 0x2AC290u;
    // 0x2ac290: 0xc0c0e18
    ctx->pc = 0x2AC290u;
    SET_GPR_U32(ctx, 31, 0x2AC298u);
    ctx->pc = 0x2AC294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC298u; }
    }
    if (ctx->pc != 0x2AC298u) { return; }
    ctx->pc = 0x2AC298u;
    // 0x2ac298: 0x240202d
    ctx->pc = 0x2ac298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac29c: 0x3c050037
    ctx->pc = 0x2ac29cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)55 << 16));
    // 0x2ac2a0: 0x24a51f40
    ctx->pc = 0x2ac2a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8000));
    // 0x2ac2a4: 0xc0acbee
    ctx->pc = 0x2AC2A4u;
    SET_GPR_U32(ctx, 31, 0x2AC2ACu);
    ctx->pc = 0x2AC2A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B2FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVu1Task_0x2b2fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC2ACu; }
    }
    if (ctx->pc != 0x2AC2ACu) { return; }
    ctx->pc = 0x2AC2ACu;
    // 0x2ac2ac: 0x3c020037
    ctx->pc = 0x2ac2acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ac2b0: 0xac402650
    ctx->pc = 0x2ac2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9808), GPR_U32(ctx, 0));
    // 0x2ac2b4: 0xdfbf0030
    ctx->pc = 0x2ac2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac2b8: 0xdfb20020
    ctx->pc = 0x2ac2b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac2bc: 0xdfb10010
    ctx->pc = 0x2ac2bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac2c0: 0xdfb00000
    ctx->pc = 0x2ac2c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac2c4: 0x3e00008
    ctx->pc = 0x2AC2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC2C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AC014u: goto label_2ac014;
            case 0x2AC018u: goto label_2ac018;
            case 0x2AC1ACu: goto label_2ac1ac;
            case 0x2AC1C8u: goto label_2ac1c8;
            case 0x2AC1E8u: goto label_2ac1e8;
            case 0x2AC204u: goto label_2ac204;
            case 0x2AC240u: goto label_2ac240;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AC2CCu;
}
