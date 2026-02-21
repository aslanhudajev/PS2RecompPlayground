#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BossCamBossCalc
// Address: 0x2a0ff0 - 0x2a1d20
void BossCamBossCalc_0x2a0ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a0ff0u;

    // 0x2a0ff0: 0x27bdfed0
    ctx->pc = 0x2a0ff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2a0ff4: 0xffbf0100
    ctx->pc = 0x2a0ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x2a0ff8: 0xffb500f0
    ctx->pc = 0x2a0ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 21));
    // 0x2a0ffc: 0xffb400e0
    ctx->pc = 0x2a0ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x2a1000: 0xffb300d0
    ctx->pc = 0x2a1000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 19));
    // 0x2a1004: 0xffb200c0
    ctx->pc = 0x2a1004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x2a1008: 0xffb100b0
    ctx->pc = 0x2a1008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 17));
    // 0x2a100c: 0xffb000a0
    ctx->pc = 0x2a100cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x2a1010: 0xe7b60120
    ctx->pc = 0x2a1010u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2a1014: 0xe7b50118
    ctx->pc = 0x2a1014u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2a1018: 0xe7b40110
    ctx->pc = 0x2a1018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2a101c: 0x3c020036
    ctx->pc = 0x2a101cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1020: 0x8c42d930
    ctx->pc = 0x2a1020u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x2a1024: 0x24540420
    ctx->pc = 0x2a1024u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 1056));
    // 0x2a1028: 0x3c020032
    ctx->pc = 0x2a1028u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2a102c: 0xac40080c
    ctx->pc = 0x2a102cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2060), GPR_U32(ctx, 0));
    // 0x2a1030: 0x3c020036
    ctx->pc = 0x2a1030u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1034: 0x8c43dbc0
    ctx->pc = 0x2a1034u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1038: 0x3c020036
    ctx->pc = 0x2a1038u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a103c: 0x8c42dd80
    ctx->pc = 0x2a103cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a1040: 0xc4410014
    ctx->pc = 0x2a1040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1044: 0xe46100dc
    ctx->pc = 0x2a1044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
    // 0x2a1048: 0x3c020031
    ctx->pc = 0x2a1048u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a104c: 0x8c42f1a0
    ctx->pc = 0x2a104cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963616)));
    // 0x2a1050: 0x10400005
    ctx->pc = 0x2A1050u;
    {
        const bool branch_taken_0x2a1050 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1054u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a1050) {
            ctx->pc = 0x2A1068u;
            goto label_2a1068;
        }
    }
    ctx->pc = 0x2A1058u;
    // 0x2a1058: 0x3c020036
    ctx->pc = 0x2a1058u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a105c: 0xc440db64
    ctx->pc = 0x2a105cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1060: 0x46000802
    ctx->pc = 0x2a1060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a1064: 0xe46000dc
    ctx->pc = 0x2a1064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
label_2a1068:
    // 0x2a1068: 0x282d
    ctx->pc = 0x2a1068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a106c: 0x3c020036
    ctx->pc = 0x2a106cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1070: 0x8c42dd80
    ctx->pc = 0x2a1070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a1074: 0x24490030
    ctx->pc = 0x2a1074u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 48));
    // 0x2a1078: 0x24480024
    ctx->pc = 0x2a1078u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 36));
    // 0x2a107c: 0x27a70040
    ctx->pc = 0x2a107cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a1080: 0x3c020036
    ctx->pc = 0x2a1080u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1084: 0x8c46dbc0
    ctx->pc = 0x2a1084u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
label_2a1088:
    // 0x2a1088: 0x52080
    ctx->pc = 0x2a1088u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a108c: 0x1241021
    ctx->pc = 0x2a108cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2a1090: 0x1041821
    ctx->pc = 0x2a1090u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2a1094: 0xc4400000
    ctx->pc = 0x2a1094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1098: 0xc4610000
    ctx->pc = 0x2a1098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a109c: 0x46010081
    ctx->pc = 0x2a109cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a10a0: 0xe42021
    ctx->pc = 0x2a10a0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2a10a4: 0xc4c000fc
    ctx->pc = 0x2a10a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a10a8: 0x46001002
    ctx->pc = 0x2a10a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a10ac: 0x46010000
    ctx->pc = 0x2a10acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a10b0: 0x24a50001
    ctx->pc = 0x2a10b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a10b4: 0x28a20003
    ctx->pc = 0x2a10b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x2a10b8: 0x1440fff3
    ctx->pc = 0x2A10B8u;
    {
        const bool branch_taken_0x2a10b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A10BCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x2a10b8) {
            ctx->pc = 0x2A1088u;
            goto label_2a1088;
        }
    }
    ctx->pc = 0x2A10C0u;
    // 0x2a10c0: 0x3c020036
    ctx->pc = 0x2a10c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a10c4: 0x8c42db68
    ctx->pc = 0x2a10c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957928)));
    // 0x2a10c8: 0x104000bd
    ctx->pc = 0x2A10C8u;
    {
        const bool branch_taken_0x2a10c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A10CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2a10c8) {
            ctx->pc = 0x2A13C0u;
            goto label_2a13c0;
        }
    }
    ctx->pc = 0x2A10D0u;
    // 0x2a10d0: 0x8c42e8fc
    ctx->pc = 0x2a10d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961404)));
    // 0x2a10d4: 0x10400018
    ctx->pc = 0x2A10D4u;
    {
        const bool branch_taken_0x2a10d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A10D8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2a10d4) {
            ctx->pc = 0x2A1138u;
            goto label_2a1138;
        }
    }
    ctx->pc = 0x2A10DCu;
    // 0x2a10dc: 0x3c020034
    ctx->pc = 0x2a10dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2a10e0: 0x2443e950
    ctx->pc = 0x2a10e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294961488));
    // 0x2a10e4: 0x8c620060
    ctx->pc = 0x2a10e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2a10e8: 0x10400013
    ctx->pc = 0x2A10E8u;
    {
        const bool branch_taken_0x2a10e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A10ECu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x2a10e8) {
            ctx->pc = 0x2A1138u;
            goto label_2a1138;
        }
    }
    ctx->pc = 0x2A10F0u;
    // 0x2a10f0: 0x3c020036
    ctx->pc = 0x2a10f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a10f4: 0x8c42dd80
    ctx->pc = 0x2a10f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a10f8: 0xc4600040
    ctx->pc = 0x2a10f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a10fc: 0xc4410048
    ctx->pc = 0x2a10fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1100: 0x46010000
    ctx->pc = 0x2a1100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a1104: 0xe7a00030
    ctx->pc = 0x2a1104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a1108: 0xc6600004
    ctx->pc = 0x2a1108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a110c: 0xc441004c
    ctx->pc = 0x2a110cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1110: 0x46010000
    ctx->pc = 0x2a1110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a1114: 0xe7a00034
    ctx->pc = 0x2a1114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a1118: 0xc6600008
    ctx->pc = 0x2a1118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a111c: 0xc4410050
    ctx->pc = 0x2a111cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1120: 0x46010000
    ctx->pc = 0x2a1120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a1124: 0xe7a00038
    ctx->pc = 0x2a1124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a1128: 0x3c014080
    ctx->pc = 0x2a1128u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x2a112c: 0x4481b000
    ctx->pc = 0x2a112cu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x2a1130: 0x10000075
    ctx->pc = 0x2A1130u;
    {
        const bool branch_taken_0x2a1130 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1134u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2a1130) {
            ctx->pc = 0x2A1308u;
            goto label_2a1308;
        }
    }
    ctx->pc = 0x2A1138u;
label_2a1138:
    // 0x2a1138: 0x3c020036
    ctx->pc = 0x2a1138u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a113c: 0x8c44d94c
    ctx->pc = 0x2a113cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294957388)));
    // 0x2a1140: 0x480001a
    ctx->pc = 0x2A1140u;
    {
        const bool branch_taken_0x2a1140 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2A1144u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x2a1140) {
            ctx->pc = 0x2A11ACu;
            goto label_2a11ac;
        }
    }
    ctx->pc = 0x2A1148u;
    // 0x2a1148: 0x24630eb0
    ctx->pc = 0x2a1148u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x2a114c: 0x240200f0
    ctx->pc = 0x2a114cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x2a1150: 0x821018
    ctx->pc = 0x2a1150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2a1154: 0x431021
    ctx->pc = 0x2a1154u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1158: 0x8c430014
    ctx->pc = 0x2a1158u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a115c: 0x10600013
    ctx->pc = 0x2A115Cu;
    {
        const bool branch_taken_0x2a115c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1160u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 48));
        if (branch_taken_0x2a115c) {
            ctx->pc = 0x2A11ACu;
            goto label_2a11ac;
        }
    }
    ctx->pc = 0x2A1164u;
    // 0x2a1164: 0x3c020036
    ctx->pc = 0x2a1164u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1168: 0x8c42dd80
    ctx->pc = 0x2a1168u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a116c: 0xc4600030
    ctx->pc = 0x2a116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1170: 0xc441003c
    ctx->pc = 0x2a1170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1174: 0x46010000
    ctx->pc = 0x2a1174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a1178: 0xe7a00030
    ctx->pc = 0x2a1178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a117c: 0xc6600004
    ctx->pc = 0x2a117cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1180: 0xc4410040
    ctx->pc = 0x2a1180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1184: 0x46010000
    ctx->pc = 0x2a1184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a1188: 0xe7a00034
    ctx->pc = 0x2a1188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a118c: 0xc6600008
    ctx->pc = 0x2a118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1190: 0xc4410044
    ctx->pc = 0x2a1190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1194: 0x46010000
    ctx->pc = 0x2a1194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a1198: 0xe7a00038
    ctx->pc = 0x2a1198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a119c: 0x3c0140a0
    ctx->pc = 0x2a119cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x2a11a0: 0x4481b000
    ctx->pc = 0x2a11a0u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x2a11a4: 0x10000058
    ctx->pc = 0x2A11A4u;
    {
        const bool branch_taken_0x2a11a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A11A8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2a11a4) {
            ctx->pc = 0x2A1308u;
            goto label_2a1308;
        }
    }
    ctx->pc = 0x2A11ACu;
label_2a11ac:
    // 0x2a11ac: 0x3c020034
    ctx->pc = 0x2a11acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2a11b0: 0x8c42e8fc
    ctx->pc = 0x2a11b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961404)));
    // 0x2a11b4: 0x14400005
    ctx->pc = 0x2A11B4u;
    {
        const bool branch_taken_0x2a11b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A11B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a11b4) {
            ctx->pc = 0x2A11CCu;
            goto label_2a11cc;
        }
    }
    ctx->pc = 0x2A11BCu;
    // 0x2a11bc: 0x3c020036
    ctx->pc = 0x2a11bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a11c0: 0x8c42d808
    ctx->pc = 0x2a11c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957064)));
    // 0x2a11c4: 0x10400008
    ctx->pc = 0x2A11C4u;
    {
        const bool branch_taken_0x2a11c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A11C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a11c4) {
            ctx->pc = 0x2A11E8u;
            goto label_2a11e8;
        }
    }
    ctx->pc = 0x2A11CCu;
label_2a11cc:
    // 0x2a11cc: 0x8c42dbc0
    ctx->pc = 0x2a11ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a11d0: 0xc44000a4
    ctx->pc = 0x2a11d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a11d4: 0xe7a00030
    ctx->pc = 0x2a11d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a11d8: 0xc44000a8
    ctx->pc = 0x2a11d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a11dc: 0xe7a00034
    ctx->pc = 0x2a11dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a11e0: 0x10000045
    ctx->pc = 0x2A11E0u;
    {
        const bool branch_taken_0x2a11e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A11E4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2a11e0) {
            ctx->pc = 0x2A12F8u;
            goto label_2a12f8;
        }
    }
    ctx->pc = 0x2A11E8u;
label_2a11e8:
    // 0x2a11e8: 0x3c020036
    ctx->pc = 0x2a11e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a11ec: 0x8c42d930
    ctx->pc = 0x2a11ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x2a11f0: 0x50400035
    ctx->pc = 0x2A11F0u;
    {
        const bool branch_taken_0x2a11f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a11f0) {
            ctx->pc = 0x2A11F4u;
            SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
            ctx->pc = 0x2A12C8u;
            goto label_2a12c8;
        }
    }
    ctx->pc = 0x2A11F8u;
    // 0x2a11f8: 0x8c420004
    ctx->pc = 0x2a11f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a11fc: 0x10400031
    ctx->pc = 0x2A11FCu;
    {
        const bool branch_taken_0x2a11fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1200u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a11fc) {
            ctx->pc = 0x2A12C4u;
            goto label_2a12c4;
        }
    }
    ctx->pc = 0x2A1204u;
    // 0x2a1204: 0x8c42dd80
    ctx->pc = 0x2a1204u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a1208: 0x8c420000
    ctx->pc = 0x2a1208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a120c: 0x30420010
    ctx->pc = 0x2a120cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2a1210: 0x1040000f
    ctx->pc = 0x2A1210u;
    {
        const bool branch_taken_0x2a1210 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1214u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 80));
        if (branch_taken_0x2a1210) {
            ctx->pc = 0x2A1250u;
            goto label_2a1250;
        }
    }
    ctx->pc = 0x2A1218u;
    // 0x2a1218: 0x27b10060
    ctx->pc = 0x2a1218u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a121c: 0x3a0202d
    ctx->pc = 0x2a121cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1220: 0x200282d
    ctx->pc = 0x2a1220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1224: 0x220302d
    ctx->pc = 0x2a1224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1228: 0xc085298
    ctx->pc = 0x2A1228u;
    SET_GPR_U32(ctx, 31, 0x2A1230u);
    ctx->pc = 0x2A122Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x214A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAvgPos_0x214a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1230u; }
    }
    if (ctx->pc != 0x2A1230u) { return; }
    ctx->pc = 0x2A1230u;
    // 0x2a1230: 0x3a0202d
    ctx->pc = 0x2a1230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1234: 0x200282d
    ctx->pc = 0x2a1234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1238: 0x220302d
    ctx->pc = 0x2a1238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a123c: 0x46000306
    ctx->pc = 0x2a123cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2a1240: 0xc0a7f26
    ctx->pc = 0x2A1240u;
    SET_GPR_U32(ctx, 31, 0x2A1248u);
    ctx->pc = 0x2A1244u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x29FC98u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetBossAvgPos_0x29fc98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1248u; }
    }
    if (ctx->pc != 0x2A1248u) { return; }
    ctx->pc = 0x2A1248u;
    // 0x2a1248: 0x1000000c
    ctx->pc = 0x2A1248u;
    {
        const bool branch_taken_0x2a1248 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A124Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a1248) {
            ctx->pc = 0x2A127Cu;
            goto label_2a127c;
        }
    }
    ctx->pc = 0x2A1250u;
label_2a1250:
    // 0x2a1250: 0x3c020036
    ctx->pc = 0x2a1250u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1254: 0x8c42dd80
    ctx->pc = 0x2a1254u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a1258: 0x8c420000
    ctx->pc = 0x2a1258u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a125c: 0x30420001
    ctx->pc = 0x2a125cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a1260: 0x10400004
    ctx->pc = 0x2A1260u;
    {
        const bool branch_taken_0x2a1260 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1264u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1260) {
            ctx->pc = 0x2A1274u;
            goto label_2a1274;
        }
    }
    ctx->pc = 0x2A1268u;
    // 0x2a1268: 0x8c42d930
    ctx->pc = 0x2a1268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x2a126c: 0x10000003
    ctx->pc = 0x2A126Cu;
    {
        const bool branch_taken_0x2a126c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1270u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 80));
        if (branch_taken_0x2a126c) {
            ctx->pc = 0x2A127Cu;
            goto label_2a127c;
        }
    }
    ctx->pc = 0x2A1274u;
label_2a1274:
    // 0x2a1274: 0x8c42d930
    ctx->pc = 0x2a1274u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x2a1278: 0x24530460
    ctx->pc = 0x2a1278u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 1120));
label_2a127c:
    // 0x2a127c: 0xc6600000
    ctx->pc = 0x2a127cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1280: 0xc7a10040
    ctx->pc = 0x2a1280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1284: 0x46010000
    ctx->pc = 0x2a1284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a1288: 0xe7a00030
    ctx->pc = 0x2a1288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a128c: 0xc6600004
    ctx->pc = 0x2a128cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1290: 0xc7a10044
    ctx->pc = 0x2a1290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1294: 0x46010000
    ctx->pc = 0x2a1294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a1298: 0xe7a00034
    ctx->pc = 0x2a1298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a129c: 0xc6600008
    ctx->pc = 0x2a129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a12a0: 0xc7a10048
    ctx->pc = 0x2a12a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a12a4: 0x46010000
    ctx->pc = 0x2a12a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a12a8: 0xe7a00038
    ctx->pc = 0x2a12a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a12ac: 0x3c020036
    ctx->pc = 0x2a12acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a12b0: 0x8c42d930
    ctx->pc = 0x2a12b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x2a12b4: 0x24530050
    ctx->pc = 0x2a12b4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 80));
    // 0x2a12b8: 0x8c420004
    ctx->pc = 0x2a12b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a12bc: 0x10000012
    ctx->pc = 0x2A12BCu;
    {
        const bool branch_taken_0x2a12bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A12C0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        if (branch_taken_0x2a12bc) {
            ctx->pc = 0x2A1308u;
            goto label_2a1308;
        }
    }
    ctx->pc = 0x2A12C4u;
label_2a12c4:
    // 0x2a12c4: 0x3c020036
    ctx->pc = 0x2a12c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a12c8:
    // 0x2a12c8: 0x8c42d930
    ctx->pc = 0x2a12c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x2a12cc: 0xc4400460
    ctx->pc = 0x2a12ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a12d0: 0xc7a10040
    ctx->pc = 0x2a12d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a12d4: 0x46010000
    ctx->pc = 0x2a12d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a12d8: 0xe7a00030
    ctx->pc = 0x2a12d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a12dc: 0xc4400464
    ctx->pc = 0x2a12dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a12e0: 0xc7a10044
    ctx->pc = 0x2a12e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a12e4: 0x46010000
    ctx->pc = 0x2a12e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a12e8: 0xe7a00034
    ctx->pc = 0x2a12e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a12ec: 0xc4400468
    ctx->pc = 0x2a12ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a12f0: 0xc7a10048
    ctx->pc = 0x2a12f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a12f4: 0x46010000
    ctx->pc = 0x2a12f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a12f8:
    // 0x2a12f8: 0xe7a00038
    ctx->pc = 0x2a12f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a12fc: 0x27b30030
    ctx->pc = 0x2a12fcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a1300: 0x3c0140a0
    ctx->pc = 0x2a1300u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x2a1304: 0x4481b000
    ctx->pc = 0x2a1304u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
label_2a1308:
    // 0x2a1308: 0x3c020036
    ctx->pc = 0x2a1308u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a130c: 0x8c42dbc0
    ctx->pc = 0x2a130cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1310: 0xc44100a4
    ctx->pc = 0x2a1310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1314: 0xc7a00030
    ctx->pc = 0x2a1314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1318: 0x46000b01
    ctx->pc = 0x2a1318u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a131c: 0xe7ac0020
    ctx->pc = 0x2a131cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a1320: 0xc44200a8
    ctx->pc = 0x2a1320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a1324: 0xc7a00034
    ctx->pc = 0x2a1324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1328: 0x46001081
    ctx->pc = 0x2a1328u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a132c: 0xe7a20024
    ctx->pc = 0x2a132cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a1330: 0xc44100ac
    ctx->pc = 0x2a1330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1334: 0xc7a00038
    ctx->pc = 0x2a1334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1338: 0x46000841
    ctx->pc = 0x2a1338u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a133c: 0xe7a10028
    ctx->pc = 0x2a133cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a1340: 0x460c6002
    ctx->pc = 0x2a1340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2a1344: 0x46021082
    ctx->pc = 0x2a1344u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2a1348: 0x46020000
    ctx->pc = 0x2a1348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a134c: 0x46010842
    ctx->pc = 0x2a134cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2a1350: 0x46010000
    ctx->pc = 0x2a1350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a1354: 0x0
    ctx->pc = 0x2a1354u;
    // NOP
    // 0x2a1358: 0x0
    ctx->pc = 0x2a1358u;
    // NOP
    // 0x2a135c: 0x460000c4
    ctx->pc = 0x2a135cu;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x2a1360: 0x46031832
    ctx->pc = 0x2a1360u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1364: 0x0
    ctx->pc = 0x2a1364u;
    // NOP
    // 0x2a1368: 0x45010007
    ctx->pc = 0x2A1368u;
    {
        const bool branch_taken_0x2a1368 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A136Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2a1368) {
            ctx->pc = 0x2A1388u;
            goto label_2a1388;
        }
    }
    ctx->pc = 0x2A1370u;
    // 0x2a1370: 0x460c6302
    ctx->pc = 0x2a1370u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2a1374: 0x46026300
    ctx->pc = 0x2a1374u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2a1378: 0xc0ba284
    ctx->pc = 0x2A1378u;
    SET_GPR_U32(ctx, 31, 0x2A1380u);
    ctx->pc = 0x2A137Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1380u; }
    }
    if (ctx->pc != 0x2A1380u) { return; }
    ctx->pc = 0x2A1380u;
    // 0x2a1380: 0x460000c6
    ctx->pc = 0x2a1380u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2a1384: 0x3c020031
    ctx->pc = 0x2a1384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2a1388:
    // 0x2a1388: 0xc441ffa8
    ctx->pc = 0x2a1388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a138c: 0x44800000
    ctx->pc = 0x2a138cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2a1390: 0x46010034
    ctx->pc = 0x2a1390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1394: 0x0
    ctx->pc = 0x2a1394u;
    // NOP
    // 0x2a1398: 0x4500001a
    ctx->pc = 0x2A1398u;
    {
        const bool branch_taken_0x2a1398 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A139Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1398) {
            ctx->pc = 0x2A1404u;
            goto label_2a1404;
        }
    }
    ctx->pc = 0x2A13A0u;
    // 0x2a13a0: 0xc440db80
    ctx->pc = 0x2a13a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a13a4: 0x46010002
    ctx->pc = 0x2a13a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a13a8: 0x46030034
    ctx->pc = 0x2a13a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a13ac: 0x0
    ctx->pc = 0x2a13acu;
    // NOP
    // 0x2a13b0: 0x45030014
    ctx->pc = 0x2A13B0u;
    {
        const bool branch_taken_0x2a13b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a13b0) {
            ctx->pc = 0x2A13B4u;
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2A1404u;
            goto label_2a1404;
        }
    }
    ctx->pc = 0x2A13B8u;
    // 0x2a13b8: 0x10000013
    ctx->pc = 0x2A13B8u;
    {
        const bool branch_taken_0x2a13b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A13BCu;
        SET_GPR_U32(ctx, 18, ((uint32_t)54 << 16));
        if (branch_taken_0x2a13b8) {
            ctx->pc = 0x2A1408u;
            goto label_2a1408;
        }
    }
    ctx->pc = 0x2A13C0u;
label_2a13c0:
    // 0x2a13c0: 0x3c020036
    ctx->pc = 0x2a13c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a13c4: 0x8c42d930
    ctx->pc = 0x2a13c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x2a13c8: 0xc4400460
    ctx->pc = 0x2a13c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a13cc: 0xc7a10040
    ctx->pc = 0x2a13ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a13d0: 0x46010000
    ctx->pc = 0x2a13d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a13d4: 0xe7a00030
    ctx->pc = 0x2a13d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a13d8: 0xc4400464
    ctx->pc = 0x2a13d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a13dc: 0xc7a10044
    ctx->pc = 0x2a13dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a13e0: 0x46010000
    ctx->pc = 0x2a13e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a13e4: 0xe7a00034
    ctx->pc = 0x2a13e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a13e8: 0xc4400468
    ctx->pc = 0x2a13e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a13ec: 0xc7a10048
    ctx->pc = 0x2a13ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a13f0: 0x46010000
    ctx->pc = 0x2a13f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a13f4: 0xe7a00038
    ctx->pc = 0x2a13f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a13f8: 0x27b30030
    ctx->pc = 0x2a13f8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a13fc: 0x8c420004
    ctx->pc = 0x2a13fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a1400: 0xc4560078
    ctx->pc = 0x2a1400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2a1404:
    // 0x2a1404: 0x3c120036
    ctx->pc = 0x2a1404u;
    SET_GPR_U32(ctx, 18, ((uint32_t)54 << 16));
label_2a1408:
    // 0x2a1408: 0x8e42dd80
    ctx->pc = 0x2a1408u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294958464)));
    // 0x2a140c: 0x8c420000
    ctx->pc = 0x2a140cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1410: 0x30420020
    ctx->pc = 0x2a1410u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x2a1414: 0x1040002a
    ctx->pc = 0x2A1414u;
    {
        const bool branch_taken_0x2a1414 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1418u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 112));
        if (branch_taken_0x2a1414) {
            ctx->pc = 0x2A14C0u;
            goto label_2a14c0;
        }
    }
    ctx->pc = 0x2A141Cu;
    // 0x2a141c: 0x27b10080
    ctx->pc = 0x2a141cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a1420: 0x3a0202d
    ctx->pc = 0x2a1420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1424: 0x200282d
    ctx->pc = 0x2a1424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1428: 0x220302d
    ctx->pc = 0x2a1428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a142c: 0xc085298
    ctx->pc = 0x2A142Cu;
    SET_GPR_U32(ctx, 31, 0x2A1434u);
    ctx->pc = 0x2A1430u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x214A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAvgPos_0x214a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1434u; }
    }
    if (ctx->pc != 0x2A1434u) { return; }
    ctx->pc = 0x2A1434u;
    // 0x2a1434: 0x8e42dd80
    ctx->pc = 0x2a1434u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294958464)));
    // 0x2a1438: 0x8c420000
    ctx->pc = 0x2a1438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a143c: 0x30420008
    ctx->pc = 0x2a143cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x2a1440: 0x10400007
    ctx->pc = 0x2A1440u;
    {
        const bool branch_taken_0x2a1440 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1444u;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2a1440) {
            ctx->pc = 0x2A1460u;
            goto label_2a1460;
        }
    }
    ctx->pc = 0x2A1448u;
    // 0x2a1448: 0x3a0202d
    ctx->pc = 0x2a1448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a144c: 0x200282d
    ctx->pc = 0x2a144cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1450: 0x220302d
    ctx->pc = 0x2a1450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1454: 0x4600a306
    ctx->pc = 0x2a1454u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a1458: 0xc0a7f26
    ctx->pc = 0x2A1458u;
    SET_GPR_U32(ctx, 31, 0x2A1460u);
    ctx->pc = 0x2A145Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x29FC98u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetBossAvgPos_0x29fc98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1460u; }
    }
    if (ctx->pc != 0x2A1460u) { return; }
    ctx->pc = 0x2A1460u;
label_2a1460:
    // 0x2a1460: 0x3c020036
    ctx->pc = 0x2a1460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1464: 0x8c42dbc0
    ctx->pc = 0x2a1464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1468: 0xc44000a4
    ctx->pc = 0x2a1468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a146c: 0xc7a10000
    ctx->pc = 0x2a146cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1470: 0x46010001
    ctx->pc = 0x2a1470u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a1474: 0xe7a00000
    ctx->pc = 0x2a1474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a1478: 0xc44000a8
    ctx->pc = 0x2a1478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a147c: 0xc7a10004
    ctx->pc = 0x2a147cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1480: 0x46010001
    ctx->pc = 0x2a1480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a1484: 0xe7a00004
    ctx->pc = 0x2a1484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a1488: 0xc44000ac
    ctx->pc = 0x2a1488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a148c: 0xc7a10008
    ctx->pc = 0x2a148cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1490: 0x46010001
    ctx->pc = 0x2a1490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a1494: 0xe7a00008
    ctx->pc = 0x2a1494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a1498: 0xc0b58fc
    ctx->pc = 0x2A1498u;
    SET_GPR_U32(ctx, 31, 0x2A14A0u);
    ctx->pc = 0x2A149Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A14A0u; }
    }
    if (ctx->pc != 0x2A14A0u) { return; }
    ctx->pc = 0x2A14A0u;
    // 0x2a14a0: 0x3c013f80
    ctx->pc = 0x2a14a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2a14a4: 0x44810800
    ctx->pc = 0x2a14a4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2a14a8: 0x46010034
    ctx->pc = 0x2a14a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a14ac: 0x4500000e
    ctx->pc = 0x2A14ACu;
    {
        const bool branch_taken_0x2a14ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a14ac) {
            ctx->pc = 0x2A14E8u;
            goto label_2a14e8;
        }
    }
    ctx->pc = 0x2A14B4u;
    // 0x2a14b4: 0x4480a000
    ctx->pc = 0x2a14b4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x2a14b8: 0x1000000b
    ctx->pc = 0x2A14B8u;
    {
        const bool branch_taken_0x2a14b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a14b8) {
            ctx->pc = 0x2A14E8u;
            goto label_2a14e8;
        }
    }
    ctx->pc = 0x2A14C0u;
label_2a14c0:
    // 0x2a14c0: 0x3c020036
    ctx->pc = 0x2a14c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a14c4: 0x8c45dbc0
    ctx->pc = 0x2a14c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a14c8: 0x3c020036
    ctx->pc = 0x2a14c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a14cc: 0x8c42dd80
    ctx->pc = 0x2a14ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a14d0: 0x8c460000
    ctx->pc = 0x2a14d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a14d4: 0x3a0202d
    ctx->pc = 0x2a14d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a14d8: 0x24a500a4
    ctx->pc = 0x2a14d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 164));
    // 0x2a14dc: 0xc0a7d7c
    ctx->pc = 0x2A14DCu;
    SET_GPR_U32(ctx, 31, 0x2A14E4u);
    ctx->pc = 0x2A14E0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 8));
    ctx->pc = 0x29F5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetActualAvgVec_0x29f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A14E4u; }
    }
    if (ctx->pc != 0x2A14E4u) { return; }
    ctx->pc = 0x2A14E4u;
    // 0x2a14e4: 0x46000506
    ctx->pc = 0x2a14e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2a14e8:
    // 0x2a14e8: 0x44800000
    ctx->pc = 0x2a14e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2a14ec: 0x4600a032
    ctx->pc = 0x2a14ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a14f0: 0x0
    ctx->pc = 0x2a14f0u;
    // NOP
    // 0x2a14f4: 0x45000004
    ctx->pc = 0x2A14F4u;
    {
        const bool branch_taken_0x2a14f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A14F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a14f4) {
            ctx->pc = 0x2A1508u;
            goto label_2a1508;
        }
    }
    ctx->pc = 0x2A14FCu;
    // 0x2a14fc: 0x8c42dbc0
    ctx->pc = 0x2a14fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1500: 0x100000ac
    ctx->pc = 0x2A1500u;
    {
        const bool branch_taken_0x2a1500 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1504u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2a1500) {
            ctx->pc = 0x2A17B4u;
            goto label_2a17b4;
        }
    }
    ctx->pc = 0x2A1508u;
label_2a1508:
    // 0x2a1508: 0x3c020036
    ctx->pc = 0x2a1508u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a150c: 0x8c42db68
    ctx->pc = 0x2a150cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957928)));
    // 0x2a1510: 0x10400052
    ctx->pc = 0x2A1510u;
    {
        const bool branch_taken_0x2a1510 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1514u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1510) {
            ctx->pc = 0x2A165Cu;
            goto label_2a165c;
        }
    }
    ctx->pc = 0x2A1518u;
    // 0x2a1518: 0x8c42dbc0
    ctx->pc = 0x2a1518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a151c: 0xc4400030
    ctx->pc = 0x2a151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1520: 0xc44100a4
    ctx->pc = 0x2a1520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1524: 0x46010001
    ctx->pc = 0x2a1524u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a1528: 0xe7a00020
    ctx->pc = 0x2a1528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a152c: 0xafa00024
    ctx->pc = 0x2a152cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2a1530: 0xc4400038
    ctx->pc = 0x2a1530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1534: 0xc44100ac
    ctx->pc = 0x2a1534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1538: 0x46010001
    ctx->pc = 0x2a1538u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a153c: 0xe7a00028
    ctx->pc = 0x2a153cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a1540: 0xc0b591e
    ctx->pc = 0x2A1540u;
    SET_GPR_U32(ctx, 31, 0x2A1548u);
    ctx->pc = 0x2A1544u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D6478u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlowNormalVector2D_0x2d6478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1548u; }
    }
    if (ctx->pc != 0x2A1548u) { return; }
    ctx->pc = 0x2A1548u;
    // 0x2a1548: 0x3c020036
    ctx->pc = 0x2a1548u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a154c: 0x8c43dd80
    ctx->pc = 0x2a154cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a1550: 0x8c620000
    ctx->pc = 0x2a1550u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a1554: 0x30420004
    ctx->pc = 0x2a1554u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x2a1558: 0x14400011
    ctx->pc = 0x2A1558u;
    {
        const bool branch_taken_0x2a1558 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A155Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x2a1558) {
            ctx->pc = 0x2A15A0u;
            goto label_2a15a0;
        }
    }
    ctx->pc = 0x2A1560u;
    // 0x2a1560: 0xc6800020
    ctx->pc = 0x2a1560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1564: 0x460010c2
    ctx->pc = 0x2a1564u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a1568: 0xc7a10008
    ctx->pc = 0x2a1568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a156c: 0xc6800028
    ctx->pc = 0x2a156cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1570: 0x46000802
    ctx->pc = 0x2a1570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a1574: 0x460018c0
    ctx->pc = 0x2a1574u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a1578: 0xc4600008
    ctx->pc = 0x2a1578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a157c: 0x46030036
    ctx->pc = 0x2a157cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1580: 0x0
    ctx->pc = 0x2a1580u;
    // NOP
    // 0x2a1584: 0x45000008
    ctx->pc = 0x2A1584u;
    {
        const bool branch_taken_0x2a1584 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1588u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2a1584) {
            ctx->pc = 0x2A15A8u;
            goto label_2a15a8;
        }
    }
    ctx->pc = 0x2A158Cu;
    // 0x2a158c: 0x46020142
    ctx->pc = 0x2a158cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a1590: 0xc7a00028
    ctx->pc = 0x2a1590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1594: 0x46010002
    ctx->pc = 0x2a1594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a1598: 0x10000005
    ctx->pc = 0x2A1598u;
    {
        const bool branch_taken_0x2a1598 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A159Cu;
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        if (branch_taken_0x2a1598) {
            ctx->pc = 0x2A15B0u;
            goto label_2a15b0;
        }
    }
    ctx->pc = 0x2A15A0u;
label_2a15a0:
    // 0x2a15a0: 0x3c01bf80
    ctx->pc = 0x2a15a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2a15a4: 0x44811800
    ctx->pc = 0x2a15a4u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
label_2a15a8:
    // 0x2a15a8: 0x3c01bf80
    ctx->pc = 0x2a15a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2a15ac: 0x44812800
    ctx->pc = 0x2a15acu;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 1);
label_2a15b0:
    // 0x2a15b0: 0x3c020036
    ctx->pc = 0x2a15b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a15b4: 0x8c43dd80
    ctx->pc = 0x2a15b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a15b8: 0x8c620000
    ctx->pc = 0x2a15b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a15bc: 0x30420002
    ctx->pc = 0x2a15bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2a15c0: 0x1440002e
    ctx->pc = 0x2A15C0u;
    {
        const bool branch_taken_0x2a15c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A15C4u;
        SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
        if (branch_taken_0x2a15c0) {
            ctx->pc = 0x2A167Cu;
            goto label_2a167c;
        }
    }
    ctx->pc = 0x2A15C8u;
    // 0x2a15c8: 0xc7a00000
    ctx->pc = 0x2a15c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a15cc: 0x46000047
    ctx->pc = 0x2a15ccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a15d0: 0xe7a10010
    ctx->pc = 0x2a15d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a15d4: 0xc7a00004
    ctx->pc = 0x2a15d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a15d8: 0x46000007
    ctx->pc = 0x2a15d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2a15dc: 0xe7a00014
    ctx->pc = 0x2a15dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a15e0: 0xc7a00008
    ctx->pc = 0x2a15e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a15e4: 0x46000087
    ctx->pc = 0x2a15e4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x2a15e8: 0xe7a20018
    ctx->pc = 0x2a15e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a15ec: 0xc6800020
    ctx->pc = 0x2a15ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a15f0: 0x46000902
    ctx->pc = 0x2a15f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a15f4: 0xc6800028
    ctx->pc = 0x2a15f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a15f8: 0x46001002
    ctx->pc = 0x2a15f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a15fc: 0x46002100
    ctx->pc = 0x2a15fcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2a1600: 0xc4600008
    ctx->pc = 0x2a1600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1604: 0x46040036
    ctx->pc = 0x2a1604u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1608: 0x0
    ctx->pc = 0x2a1608u;
    // NOP
    // 0x2a160c: 0x45000006
    ctx->pc = 0x2A160Cu;
    {
        const bool branch_taken_0x2a160c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1610u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2a160c) {
            ctx->pc = 0x2A1628u;
            goto label_2a1628;
        }
    }
    ctx->pc = 0x2A1614u;
    // 0x2a1614: 0x46010042
    ctx->pc = 0x2a1614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a1618: 0xc7a00028
    ctx->pc = 0x2a1618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a161c: 0x46020002
    ctx->pc = 0x2a161cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a1620: 0x10000003
    ctx->pc = 0x2A1620u;
    {
        const bool branch_taken_0x2a1620 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1624u;
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2a1620) {
            ctx->pc = 0x2A1630u;
            goto label_2a1630;
        }
    }
    ctx->pc = 0x2A1628u;
label_2a1628:
    // 0x2a1628: 0x3c01bf80
    ctx->pc = 0x2a1628u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2a162c: 0x44810800
    ctx->pc = 0x2a162cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2a1630:
    // 0x2a1630: 0x46012834
    ctx->pc = 0x2a1630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1634: 0x0
    ctx->pc = 0x2a1634u;
    // NOP
    // 0x2a1638: 0x4500000f
    ctx->pc = 0x2A1638u;
    {
        const bool branch_taken_0x2a1638 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A163Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2a1638) {
            ctx->pc = 0x2A1678u;
            goto label_2a1678;
        }
    }
    ctx->pc = 0x2A1640u;
    // 0x2a1640: 0xe7a00000
    ctx->pc = 0x2a1640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a1644: 0xc7a00014
    ctx->pc = 0x2a1644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1648: 0xe7a00004
    ctx->pc = 0x2a1648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a164c: 0xc7a00018
    ctx->pc = 0x2a164cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1650: 0xe7a00008
    ctx->pc = 0x2a1650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a1654: 0x10000008
    ctx->pc = 0x2A1654u;
    {
        const bool branch_taken_0x2a1654 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1658u;
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        if (branch_taken_0x2a1654) {
            ctx->pc = 0x2A1678u;
            goto label_2a1678;
        }
    }
    ctx->pc = 0x2A165Cu;
label_2a165c:
    // 0x2a165c: 0xc7a10000
    ctx->pc = 0x2a165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1660: 0xc6800020
    ctx->pc = 0x2a1660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1664: 0x460008c2
    ctx->pc = 0x2a1664u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a1668: 0xc7a00008
    ctx->pc = 0x2a1668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a166c: 0xc6810028
    ctx->pc = 0x2a166cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1670: 0x46010002
    ctx->pc = 0x2a1670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a1674: 0x460018c0
    ctx->pc = 0x2a1674u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2a1678:
    // 0x2a1678: 0x3c100036
    ctx->pc = 0x2a1678u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
label_2a167c:
    // 0x2a167c: 0x8e02dd80
    ctx->pc = 0x2a167cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294958464)));
    // 0x2a1680: 0xc4400008
    ctx->pc = 0x2a1680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1684: 0x46001834
    ctx->pc = 0x2a1684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1688: 0x0
    ctx->pc = 0x2a1688u;
    // NOP
    // 0x2a168c: 0x4500002c
    ctx->pc = 0x2A168Cu;
    {
        const bool branch_taken_0x2a168c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1690u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x2a168c) {
            ctx->pc = 0x2A1740u;
            goto label_2a1740;
        }
    }
    ctx->pc = 0x2A1694u;
    // 0x2a1694: 0xc68c0020
    ctx->pc = 0x2a1694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1698: 0xc0ba04a
    ctx->pc = 0x2A1698u;
    SET_GPR_U32(ctx, 31, 0x2A16A0u);
    ctx->pc = 0x2A169Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A16A0u; }
    }
    if (ctx->pc != 0x2A16A0u) { return; }
    ctx->pc = 0x2A16A0u;
    // 0x2a16a0: 0x460000c6
    ctx->pc = 0x2a16a0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2a16a4: 0xc7a20008
    ctx->pc = 0x2a16a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a16a8: 0xc6800020
    ctx->pc = 0x2a16a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a16ac: 0x46001082
    ctx->pc = 0x2a16acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a16b0: 0xc7a00000
    ctx->pc = 0x2a16b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a16b4: 0xc6810028
    ctx->pc = 0x2a16b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a16b8: 0x46010002
    ctx->pc = 0x2a16b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a16bc: 0x46001081
    ctx->pc = 0x2a16bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a16c0: 0x44800000
    ctx->pc = 0x2a16c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2a16c4: 0x46020036
    ctx->pc = 0x2a16c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a16c8: 0x0
    ctx->pc = 0x2a16c8u;
    // NOP
    // 0x2a16cc: 0x45000004
    ctx->pc = 0x2A16CCu;
    {
        const bool branch_taken_0x2a16cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A16D0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294958464)));
        if (branch_taken_0x2a16cc) {
            ctx->pc = 0x2A16E0u;
            goto label_2a16e0;
        }
    }
    ctx->pc = 0x2A16D4u;
    // 0x2a16d4: 0xc4400004
    ctx->pc = 0x2a16d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a16d8: 0x10000005
    ctx->pc = 0x2A16D8u;
    {
        const bool branch_taken_0x2a16d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A16DCu;
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        if (branch_taken_0x2a16d8) {
            ctx->pc = 0x2A16F0u;
            goto label_2a16f0;
        }
    }
    ctx->pc = 0x2A16E0u;
label_2a16e0:
    // 0x2a16e0: 0x3c020036
    ctx->pc = 0x2a16e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a16e4: 0x8c42dd80
    ctx->pc = 0x2a16e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a16e8: 0xc4400004
    ctx->pc = 0x2a16e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a16ec: 0x46001800
    ctx->pc = 0x2a16ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2a16f0:
    // 0x2a16f0: 0xe7a00090
    ctx->pc = 0x2a16f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a16f4: 0x3c014049
    ctx->pc = 0x2a16f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2a16f8: 0x34210fdb
    ctx->pc = 0x2a16f8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a16fc: 0x44810800
    ctx->pc = 0x2a16fcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2a1700: 0xc7a00090
    ctx->pc = 0x2a1700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1704: 0x46010000
    ctx->pc = 0x2a1704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a1708: 0x46000086
    ctx->pc = 0x2a1708u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2a170c: 0x46020834
    ctx->pc = 0x2a170cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1710: 0x0
    ctx->pc = 0x2a1710u;
    // NOP
    // 0x2a1714: 0x45010016
    ctx->pc = 0x2A1714u;
    {
        const bool branch_taken_0x2a1714 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1718u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        if (branch_taken_0x2a1714) {
            ctx->pc = 0x2A1770u;
            goto label_2a1770;
        }
    }
    ctx->pc = 0x2A171Cu;
    // 0x2a171c: 0x3c01c049
    ctx->pc = 0x2a171cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2a1720: 0x34210fdb
    ctx->pc = 0x2a1720u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a1724: 0x44810000
    ctx->pc = 0x2a1724u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a1728: 0xc7a10090
    ctx->pc = 0x2a1728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a172c: 0x46000836
    ctx->pc = 0x2a172cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1730: 0x4501001c
    ctx->pc = 0x2A1730u;
    {
        const bool branch_taken_0x2a1730 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a1730) {
            ctx->pc = 0x2A17A4u;
            goto label_2a17a4;
        }
    }
    ctx->pc = 0x2A1738u;
    // 0x2a1738: 0x1000001e
    ctx->pc = 0x2A1738u;
    {
        const bool branch_taken_0x2a1738 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A173Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2a1738) {
            ctx->pc = 0x2A17B4u;
            goto label_2a17b4;
        }
    }
    ctx->pc = 0x2A1740u;
label_2a1740:
    // 0x2a1740: 0xc0ba04a
    ctx->pc = 0x2A1740u;
    SET_GPR_U32(ctx, 31, 0x2A1748u);
    ctx->pc = 0x2A1744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1748u; }
    }
    if (ctx->pc != 0x2A1748u) { return; }
    ctx->pc = 0x2A1748u;
    // 0x2a1748: 0xe7a00090
    ctx->pc = 0x2a1748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a174c: 0x3c014049
    ctx->pc = 0x2a174cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2a1750: 0x34210fdb
    ctx->pc = 0x2a1750u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a1754: 0x44810800
    ctx->pc = 0x2a1754u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2a1758: 0x46010000
    ctx->pc = 0x2a1758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a175c: 0x46000086
    ctx->pc = 0x2a175cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2a1760: 0x46020834
    ctx->pc = 0x2a1760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1764: 0x0
    ctx->pc = 0x2a1764u;
    // NOP
    // 0x2a1768: 0x45000006
    ctx->pc = 0x2A1768u;
    {
        const bool branch_taken_0x2a1768 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A176Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        if (branch_taken_0x2a1768) {
            ctx->pc = 0x2A1784u;
            goto label_2a1784;
        }
    }
    ctx->pc = 0x2A1770u;
label_2a1770:
    // 0x2a1770: 0x3c0140c9
    ctx->pc = 0x2a1770u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2a1774: 0x34210fdb
    ctx->pc = 0x2a1774u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a1778: 0x44810000
    ctx->pc = 0x2a1778u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a177c: 0x1000000d
    ctx->pc = 0x2A177Cu;
    {
        const bool branch_taken_0x2a177c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1780u;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x2a177c) {
            ctx->pc = 0x2A17B4u;
            goto label_2a17b4;
        }
    }
    ctx->pc = 0x2A1784u;
label_2a1784:
    // 0x2a1784: 0x3c01c049
    ctx->pc = 0x2a1784u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2a1788: 0x34210fdb
    ctx->pc = 0x2a1788u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a178c: 0x44810000
    ctx->pc = 0x2a178cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a1790: 0xc7a10090
    ctx->pc = 0x2a1790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1794: 0x46000836
    ctx->pc = 0x2a1794u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1798: 0x0
    ctx->pc = 0x2a1798u;
    // NOP
    // 0x2a179c: 0x45020005
    ctx->pc = 0x2A179Cu;
    {
        const bool branch_taken_0x2a179c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a179c) {
            ctx->pc = 0x2A17A0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2A17B4u;
            goto label_2a17b4;
        }
    }
    ctx->pc = 0x2A17A4u;
label_2a17a4:
    // 0x2a17a4: 0x3c0140c9
    ctx->pc = 0x2a17a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2a17a8: 0x34210fdb
    ctx->pc = 0x2a17a8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a17ac: 0x44810000
    ctx->pc = 0x2a17acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a17b0: 0x46000800
    ctx->pc = 0x2a17b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a17b4:
    // 0x2a17b4: 0xe7a00090
    ctx->pc = 0x2a17b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a17b8: 0x3c020036
    ctx->pc = 0x2a17b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a17bc: 0x8c42db68
    ctx->pc = 0x2a17bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957928)));
    // 0x2a17c0: 0x14400026
    ctx->pc = 0x2A17C0u;
    {
        const bool branch_taken_0x2a17c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A17C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a17c0) {
            ctx->pc = 0x2A185Cu;
            goto label_2a185c;
        }
    }
    ctx->pc = 0x2A17C8u;
    // 0x2a17c8: 0x3c020036
    ctx->pc = 0x2a17c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a17cc: 0x8c43dbc0
    ctx->pc = 0x2a17ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a17d0: 0x3c02003a
    ctx->pc = 0x2a17d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2a17d4: 0x8c421bd0
    ctx->pc = 0x2a17d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2a17d8: 0xc46100a4
    ctx->pc = 0x2a17d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a17dc: 0xc44000a0
    ctx->pc = 0x2a17dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a17e0: 0x46000b01
    ctx->pc = 0x2a17e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a17e4: 0xe7ac0020
    ctx->pc = 0x2a17e4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a17e8: 0xc46200a8
    ctx->pc = 0x2a17e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a17ec: 0xc44000a4
    ctx->pc = 0x2a17ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a17f0: 0x46001081
    ctx->pc = 0x2a17f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a17f4: 0xe7a20024
    ctx->pc = 0x2a17f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a17f8: 0xc46100ac
    ctx->pc = 0x2a17f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a17fc: 0xc44000a8
    ctx->pc = 0x2a17fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1800: 0x46000841
    ctx->pc = 0x2a1800u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a1804: 0xe7a10028
    ctx->pc = 0x2a1804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a1808: 0x460c6002
    ctx->pc = 0x2a1808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2a180c: 0x46021082
    ctx->pc = 0x2a180cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2a1810: 0x46020000
    ctx->pc = 0x2a1810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a1814: 0x46010842
    ctx->pc = 0x2a1814u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2a1818: 0x46010000
    ctx->pc = 0x2a1818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a181c: 0x0
    ctx->pc = 0x2a181cu;
    // NOP
    // 0x2a1820: 0x0
    ctx->pc = 0x2a1820u;
    // NOP
    // 0x2a1824: 0x46000004
    ctx->pc = 0x2a1824u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2a1828: 0x46000032
    ctx->pc = 0x2a1828u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a182c: 0x0
    ctx->pc = 0x2a182cu;
    // NOP
    // 0x2a1830: 0x45010006
    ctx->pc = 0x2A1830u;
    {
        const bool branch_taken_0x2a1830 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1834u;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2a1830) {
            ctx->pc = 0x2A184Cu;
            goto label_2a184c;
        }
    }
    ctx->pc = 0x2A1838u;
    // 0x2a1838: 0x460c6302
    ctx->pc = 0x2a1838u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2a183c: 0x46026300
    ctx->pc = 0x2a183cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2a1840: 0xc0ba284
    ctx->pc = 0x2A1840u;
    SET_GPR_U32(ctx, 31, 0x2A1848u);
    ctx->pc = 0x2A1844u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1848u; }
    }
    if (ctx->pc != 0x2A1848u) { return; }
    ctx->pc = 0x2A1848u;
    // 0x2a1848: 0x46000506
    ctx->pc = 0x2a1848u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2a184c:
    // 0x2a184c: 0x3c020036
    ctx->pc = 0x2a184cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1850: 0x8c42dbc0
    ctx->pc = 0x2a1850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1854: 0x10000071
    ctx->pc = 0x2A1854u;
    {
        const bool branch_taken_0x2a1854 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1858u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
        if (branch_taken_0x2a1854) {
            ctx->pc = 0x2A1A1Cu;
            goto label_2a1a1c;
        }
    }
    ctx->pc = 0x2A185Cu;
label_2a185c:
    // 0x2a185c: 0x8c42dd80
    ctx->pc = 0x2a185cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a1860: 0xc4550014
    ctx->pc = 0x2a1860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a1864: 0x8c430000
    ctx->pc = 0x2a1864u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1868: 0x2402fcff
    ctx->pc = 0x2a1868u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294966527));
    // 0x2a186c: 0x628824
    ctx->pc = 0x2a186cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a1870: 0x3c100036
    ctx->pc = 0x2a1870u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a1874: 0x8e04dbc0
    ctx->pc = 0x2a1874u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
    // 0x2a1878: 0x260282d
    ctx->pc = 0x2a1878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a187c: 0xc0a7fd6
    ctx->pc = 0x2A187Cu;
    SET_GPR_U32(ctx, 31, 0x2A1884u);
    ctx->pc = 0x2A1880u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x29FF58u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetBossCamViewDist_0x29ff58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1884u; }
    }
    if (ctx->pc != 0x2A1884u) { return; }
    ctx->pc = 0x2A1884u;
    // 0x2a1884: 0x8e02dbc0
    ctx->pc = 0x2a1884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
    // 0x2a1888: 0xe4400100
    ctx->pc = 0x2a1888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x2a188c: 0x3c020034
    ctx->pc = 0x2a188cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2a1890: 0x8c42e8fc
    ctx->pc = 0x2a1890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961404)));
    // 0x2a1894: 0x54400001
    ctx->pc = 0x2A1894u;
    {
        const bool branch_taken_0x2a1894 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a1894) {
            ctx->pc = 0x2A1898u;
            ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
            ctx->pc = 0x2A189Cu;
            goto label_2a189c;
        }
    }
    ctx->pc = 0x2A189Cu;
label_2a189c:
    // 0x2a189c: 0x3c020036
    ctx->pc = 0x2a189cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a18a0: 0x8c42dbc0
    ctx->pc = 0x2a18a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a18a4: 0xc4410100
    ctx->pc = 0x2a18a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a18a8: 0x44800000
    ctx->pc = 0x2a18a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2a18ac: 0x46000834
    ctx->pc = 0x2a18acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a18b0: 0x0
    ctx->pc = 0x2a18b0u;
    // NOP
    // 0x2a18b4: 0x45000006
    ctx->pc = 0x2A18B4u;
    {
        const bool branch_taken_0x2a18b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A18B8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x2a18b4) {
            ctx->pc = 0x2A18D0u;
            goto label_2a18d0;
        }
    }
    ctx->pc = 0x2A18BCu;
    // 0x2a18bc: 0x36310200
    ctx->pc = 0x2a18bcu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 512));
    // 0x2a18c0: 0x3c014120
    ctx->pc = 0x2a18c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2a18c4: 0x44810000
    ctx->pc = 0x2a18c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a18c8: 0x10000045
    ctx->pc = 0x2A18C8u;
    {
        const bool branch_taken_0x2a18c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A18CCu;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x2a18c8) {
            ctx->pc = 0x2A19E0u;
            goto label_2a19e0;
        }
    }
    ctx->pc = 0x2A18D0u;
label_2a18d0:
    // 0x2a18d0: 0x3c020036
    ctx->pc = 0x2a18d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a18d4: 0x8c42dbc0
    ctx->pc = 0x2a18d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a18d8: 0xc4410100
    ctx->pc = 0x2a18d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a18dc: 0x3c014000
    ctx->pc = 0x2a18dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x2a18e0: 0x44810000
    ctx->pc = 0x2a18e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a18e4: 0x46000834
    ctx->pc = 0x2a18e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a18e8: 0x0
    ctx->pc = 0x2a18e8u;
    // NOP
    // 0x2a18ec: 0x45000006
    ctx->pc = 0x2A18ECu;
    {
        const bool branch_taken_0x2a18ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A18F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a18ec) {
            ctx->pc = 0x2A1908u;
            goto label_2a1908;
        }
    }
    ctx->pc = 0x2A18F4u;
    // 0x2a18f4: 0x4615a034
    ctx->pc = 0x2a18f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a18f8: 0x0
    ctx->pc = 0x2a18f8u;
    // NOP
    // 0x2a18fc: 0x45030014
    ctx->pc = 0x2A18FCu;
    {
        const bool branch_taken_0x2a18fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a18fc) {
            ctx->pc = 0x2A1900u;
            SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 512));
            ctx->pc = 0x2A1950u;
            goto label_2a1950;
        }
    }
    ctx->pc = 0x2A1904u;
    // 0x2a1904: 0x3c020036
    ctx->pc = 0x2a1904u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a1908:
    // 0x2a1908: 0x8c42dbc0
    ctx->pc = 0x2a1908u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a190c: 0xc4410100
    ctx->pc = 0x2a190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1910: 0x3c014010
    ctx->pc = 0x2a1910u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16400 << 16));
    // 0x2a1914: 0x44810000
    ctx->pc = 0x2a1914u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a1918: 0x46000834
    ctx->pc = 0x2a1918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a191c: 0x0
    ctx->pc = 0x2a191cu;
    // NOP
    // 0x2a1920: 0x45000012
    ctx->pc = 0x2A1920u;
    {
        const bool branch_taken_0x2a1920 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1924u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1920) {
            ctx->pc = 0x2A196Cu;
            goto label_2a196c;
        }
    }
    ctx->pc = 0x2A1928u;
    // 0x2a1928: 0x4615a034
    ctx->pc = 0x2a1928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a192c: 0x0
    ctx->pc = 0x2a192cu;
    // NOP
    // 0x2a1930: 0x4500000d
    ctx->pc = 0x2A1930u;
    {
        const bool branch_taken_0x2a1930 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1934u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1930) {
            ctx->pc = 0x2A1968u;
            goto label_2a1968;
        }
    }
    ctx->pc = 0x2A1938u;
    // 0x2a1938: 0x8c42dd80
    ctx->pc = 0x2a1938u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a193c: 0x8c420000
    ctx->pc = 0x2a193cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1940: 0x30420200
    ctx->pc = 0x2a1940u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x2a1944: 0x10400009
    ctx->pc = 0x2A1944u;
    {
        const bool branch_taken_0x2a1944 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1948u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1944) {
            ctx->pc = 0x2A196Cu;
            goto label_2a196c;
        }
    }
    ctx->pc = 0x2A194Cu;
    // 0x2a194c: 0x36310200
    ctx->pc = 0x2a194cu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 512));
label_2a1950:
    // 0x2a1950: 0x3c014020
    ctx->pc = 0x2a1950u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16416 << 16));
    // 0x2a1954: 0x44810000
    ctx->pc = 0x2a1954u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a1958: 0x46010001
    ctx->pc = 0x2a1958u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a195c: 0x46000000
    ctx->pc = 0x2a195cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a1960: 0x1000001f
    ctx->pc = 0x2A1960u;
    {
        const bool branch_taken_0x2a1960 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1964u;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x2a1960) {
            ctx->pc = 0x2A19E0u;
            goto label_2a19e0;
        }
    }
    ctx->pc = 0x2A1968u;
label_2a1968:
    // 0x2a1968: 0x3c020036
    ctx->pc = 0x2a1968u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a196c:
    // 0x2a196c: 0x8c42dbc0
    ctx->pc = 0x2a196cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1970: 0xc4410100
    ctx->pc = 0x2a1970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1974: 0x3c014080
    ctx->pc = 0x2a1974u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x2a1978: 0x44810000
    ctx->pc = 0x2a1978u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a197c: 0x46010034
    ctx->pc = 0x2a197cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1980: 0x0
    ctx->pc = 0x2a1980u;
    // NOP
    // 0x2a1984: 0x45000006
    ctx->pc = 0x2A1984u;
    {
        const bool branch_taken_0x2a1984 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1988u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1984) {
            ctx->pc = 0x2A19A0u;
            goto label_2a19a0;
        }
    }
    ctx->pc = 0x2A198Cu;
    // 0x2a198c: 0x36310100
    ctx->pc = 0x2a198cu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 256));
    // 0x2a1990: 0x3c014020
    ctx->pc = 0x2a1990u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16416 << 16));
    // 0x2a1994: 0x44810000
    ctx->pc = 0x2a1994u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a1998: 0x10000010
    ctx->pc = 0x2A1998u;
    {
        const bool branch_taken_0x2a1998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A199Cu;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2a1998) {
            ctx->pc = 0x2A19DCu;
            goto label_2a19dc;
        }
    }
    ctx->pc = 0x2A19A0u;
label_2a19a0:
    // 0x2a19a0: 0x8c42dbc0
    ctx->pc = 0x2a19a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a19a4: 0xc4400100
    ctx->pc = 0x2a19a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a19a8: 0x3c014020
    ctx->pc = 0x2a19a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16416 << 16));
    // 0x2a19ac: 0x44810800
    ctx->pc = 0x2a19acu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2a19b0: 0x46000834
    ctx->pc = 0x2a19b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a19b4: 0x0
    ctx->pc = 0x2a19b4u;
    // NOP
    // 0x2a19b8: 0x45000009
    ctx->pc = 0x2A19B8u;
    {
        const bool branch_taken_0x2a19b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A19BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a19b8) {
            ctx->pc = 0x2A19E0u;
            goto label_2a19e0;
        }
    }
    ctx->pc = 0x2A19C0u;
    // 0x2a19c0: 0x8c42dd80
    ctx->pc = 0x2a19c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a19c4: 0x8c420000
    ctx->pc = 0x2a19c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a19c8: 0x30420100
    ctx->pc = 0x2a19c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x2a19cc: 0x10400005
    ctx->pc = 0x2A19CCu;
    {
        const bool branch_taken_0x2a19cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A19D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a19cc) {
            ctx->pc = 0x2A19E4u;
            goto label_2a19e4;
        }
    }
    ctx->pc = 0x2A19D4u;
    // 0x2a19d4: 0x36310100
    ctx->pc = 0x2a19d4u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 256));
    // 0x2a19d8: 0x46010001
    ctx->pc = 0x2a19d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a19dc:
    // 0x2a19dc: 0x4600a501
    ctx->pc = 0x2a19dcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2a19e0:
    // 0x2a19e0: 0x3c020036
    ctx->pc = 0x2a19e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a19e4:
    // 0x2a19e4: 0x8c42dd80
    ctx->pc = 0x2a19e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a19e8: 0xac510000
    ctx->pc = 0x2a19e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2a19ec: 0xc440000c
    ctx->pc = 0x2a19ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a19f0: 0x4600a034
    ctx->pc = 0x2a19f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a19f4: 0x0
    ctx->pc = 0x2a19f4u;
    // NOP
    // 0x2a19f8: 0x45030008
    ctx->pc = 0x2A19F8u;
    {
        const bool branch_taken_0x2a19f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a19f8) {
            ctx->pc = 0x2A19FCu;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2A1A1Cu;
            goto label_2a1a1c;
        }
    }
    ctx->pc = 0x2A1A00u;
    // 0x2a1a00: 0x4615a840
    ctx->pc = 0x2a1a00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x2a1a04: 0x46140834
    ctx->pc = 0x2a1a04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1a08: 0x0
    ctx->pc = 0x2a1a08u;
    // NOP
    // 0x2a1a0c: 0x45000002
    ctx->pc = 0x2A1A0Cu;
    {
        const bool branch_taken_0x2a1a0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1A10u;
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x2a1a0c) {
            ctx->pc = 0x2A1A18u;
            goto label_2a1a18;
        }
    }
    ctx->pc = 0x2A1A14u;
    // 0x2a1a14: 0x46000806
    ctx->pc = 0x2a1a14u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2a1a18:
    // 0x2a1a18: 0x46000506
    ctx->pc = 0x2a1a18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2a1a1c:
    // 0x2a1a1c: 0x3c020036
    ctx->pc = 0x2a1a1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1a20: 0x8c43dbc0
    ctx->pc = 0x2a1a20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1a24: 0xc46400f4
    ctx->pc = 0x2a1a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a1a28: 0x3c020036
    ctx->pc = 0x2a1a28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1a2c: 0x8c42dd80
    ctx->pc = 0x2a1a2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a1a30: 0xc4400014
    ctx->pc = 0x2a1a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1a34: 0xc443000c
    ctx->pc = 0x2a1a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a1a38: 0x46030081
    ctx->pc = 0x2a1a38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2a1a3c: 0x3c013c23
    ctx->pc = 0x2a1a3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x2a1a40: 0x3421d70a
    ctx->pc = 0x2a1a40u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x2a1a44: 0x44810000
    ctx->pc = 0x2a1a44u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a1a48: 0x46020034
    ctx->pc = 0x2a1a48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1a4c: 0x0
    ctx->pc = 0x2a1a4cu;
    // NOP
    // 0x2a1a50: 0x45000007
    ctx->pc = 0x2A1A50u;
    {
        const bool branch_taken_0x2a1a50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1A54u;
        ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[20]);
        if (branch_taken_0x2a1a50) {
            ctx->pc = 0x2A1A70u;
            goto label_2a1a70;
        }
    }
    ctx->pc = 0x2A1A58u;
    // 0x2a1a58: 0x46032001
    ctx->pc = 0x2a1a58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2a1a5c: 0x0
    ctx->pc = 0x2a1a5cu;
    // NOP
    // 0x2a1a60: 0x0
    ctx->pc = 0x2a1a60u;
    // NOP
    // 0x2a1a64: 0x46020003
    ctx->pc = 0x2a1a64u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2a1a68: 0x10000006
    ctx->pc = 0x2A1A68u;
    {
        const bool branch_taken_0x2a1a68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1A6Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 252), bits); }
        if (branch_taken_0x2a1a68) {
            ctx->pc = 0x2A1A84u;
            goto label_2a1a84;
        }
    }
    ctx->pc = 0x2A1A70u;
label_2a1a70:
    // 0x2a1a70: 0x3c020036
    ctx->pc = 0x2a1a70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1a74: 0x8c42dbc0
    ctx->pc = 0x2a1a74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1a78: 0x3c013f80
    ctx->pc = 0x2a1a78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2a1a7c: 0x44810000
    ctx->pc = 0x2a1a7cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a1a80: 0xe44000fc
    ctx->pc = 0x2a1a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 252), bits); }
label_2a1a84:
    // 0x2a1a84: 0x3c020036
    ctx->pc = 0x2a1a84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1a88: 0x8c43dbc0
    ctx->pc = 0x2a1a88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1a8c: 0xc46000fc
    ctx->pc = 0x2a1a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1a90: 0x44801000
    ctx->pc = 0x2a1a90u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x2a1a94: 0x46020034
    ctx->pc = 0x2a1a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1a98: 0x0
    ctx->pc = 0x2a1a98u;
    // NOP
    // 0x2a1a9c: 0x4501000d
    ctx->pc = 0x2A1A9Cu;
    {
        const bool branch_taken_0x2a1a9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1AA0u;
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        if (branch_taken_0x2a1a9c) {
            ctx->pc = 0x2A1AD4u;
            goto label_2a1ad4;
        }
    }
    ctx->pc = 0x2A1AA4u;
    // 0x2a1aa4: 0x3c020036
    ctx->pc = 0x2a1aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1aa8: 0x8c42dbc0
    ctx->pc = 0x2a1aa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1aac: 0xc44000fc
    ctx->pc = 0x2a1aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1ab0: 0x3c013f80
    ctx->pc = 0x2a1ab0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2a1ab4: 0x44811000
    ctx->pc = 0x2a1ab4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2a1ab8: 0x46001034
    ctx->pc = 0x2a1ab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1abc: 0x0
    ctx->pc = 0x2a1abcu;
    // NOP
    // 0x2a1ac0: 0x45010004
    ctx->pc = 0x2A1AC0u;
    {
        const bool branch_taken_0x2a1ac0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1AC4u;
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        if (branch_taken_0x2a1ac0) {
            ctx->pc = 0x2A1AD4u;
            goto label_2a1ad4;
        }
    }
    ctx->pc = 0x2A1AC8u;
    // 0x2a1ac8: 0x3c020036
    ctx->pc = 0x2a1ac8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1acc: 0x8c42dbc0
    ctx->pc = 0x2a1accu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1ad0: 0xc44000fc
    ctx->pc = 0x2a1ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1ad4:
    // 0x2a1ad4: 0xe46000fc
    ctx->pc = 0x2a1ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 252), bits); }
    // 0x2a1ad8: 0x46000845
    ctx->pc = 0x2a1ad8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2a1adc: 0x3c014120
    ctx->pc = 0x2a1adcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2a1ae0: 0x44810000
    ctx->pc = 0x2a1ae0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a1ae4: 0x46000834
    ctx->pc = 0x2a1ae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1ae8: 0x0
    ctx->pc = 0x2a1ae8u;
    // NOP
    // 0x2a1aec: 0x4500000d
    ctx->pc = 0x2A1AECu;
    {
        const bool branch_taken_0x2a1aec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1AF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1aec) {
            ctx->pc = 0x2A1B24u;
            goto label_2a1b24;
        }
    }
    ctx->pc = 0x2A1AF4u;
    // 0x2a1af4: 0x8c42dd80
    ctx->pc = 0x2a1af4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a1af8: 0xc4400020
    ctx->pc = 0x2a1af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1afc: 0xc442001c
    ctx->pc = 0x2a1afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a1b00: 0x46020001
    ctx->pc = 0x2a1b00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a1b04: 0x3c020036
    ctx->pc = 0x2a1b04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1b08: 0x8c42dbc0
    ctx->pc = 0x2a1b08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1b0c: 0xc44100fc
    ctx->pc = 0x2a1b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1b10: 0x46010002
    ctx->pc = 0x2a1b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a1b14: 0x46020000
    ctx->pc = 0x2a1b14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a1b18: 0xe7a00094
    ctx->pc = 0x2a1b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2a1b1c: 0x10000004
    ctx->pc = 0x2A1B1Cu;
    {
        const bool branch_taken_0x2a1b1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1B20u;
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        if (branch_taken_0x2a1b1c) {
            ctx->pc = 0x2A1B30u;
            goto label_2a1b30;
        }
    }
    ctx->pc = 0x2A1B24u;
label_2a1b24:
    // 0x2a1b24: 0x3c020036
    ctx->pc = 0x2a1b24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1b28: 0x8c42dbc0
    ctx->pc = 0x2a1b28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1b2c: 0xc4400104
    ctx->pc = 0x2a1b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1b30:
    // 0x2a1b30: 0xe7a00094
    ctx->pc = 0x2a1b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2a1b34: 0x3c020036
    ctx->pc = 0x2a1b34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1b38: 0x8c42db68
    ctx->pc = 0x2a1b38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957928)));
    // 0x2a1b3c: 0x14400011
    ctx->pc = 0x2A1B3Cu;
    {
        const bool branch_taken_0x2a1b3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A1B40u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1b3c) {
            ctx->pc = 0x2A1B84u;
            goto label_2a1b84;
        }
    }
    ctx->pc = 0x2A1B44u;
    // 0x2a1b44: 0x8c42dbc0
    ctx->pc = 0x2a1b44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1b48: 0xc7a00030
    ctx->pc = 0x2a1b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1b4c: 0xe44000a4
    ctx->pc = 0x2a1b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2a1b50: 0xc7a00034
    ctx->pc = 0x2a1b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1b54: 0xe44000a8
    ctx->pc = 0x2a1b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2a1b58: 0xc7a00038
    ctx->pc = 0x2a1b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1b5c: 0xe44000ac
    ctx->pc = 0x2a1b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2a1b60: 0xc7a00030
    ctx->pc = 0x2a1b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1b64: 0xe44000b0
    ctx->pc = 0x2a1b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2a1b68: 0xc7a00034
    ctx->pc = 0x2a1b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1b6c: 0xe44000b4
    ctx->pc = 0x2a1b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x2a1b70: 0xc7a00038
    ctx->pc = 0x2a1b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1b74: 0xc0a8142
    ctx->pc = 0x2A1B74u;
    SET_GPR_U32(ctx, 31, 0x2A1B7Cu);
    ctx->pc = 0x2A1B78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    ctx->pc = 0x2A0508u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossCamGetCurrent_0x2a0508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1B7Cu; }
    }
    if (ctx->pc != 0x2A1B7Cu) { return; }
    ctx->pc = 0x2A1B7Cu;
    // 0x2a1b7c: 0x1000005d
    ctx->pc = 0x2A1B7Cu;
    {
        const bool branch_taken_0x2a1b7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1B80u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        if (branch_taken_0x2a1b7c) {
            ctx->pc = 0x2A1CF4u;
            goto label_2a1cf4;
        }
    }
    ctx->pc = 0x2A1B84u;
label_2a1b84:
    // 0x2a1b84: 0x12a00054
    ctx->pc = 0x2A1B84u;
    {
        const bool branch_taken_0x2a1b84 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a1b84) {
            ctx->pc = 0x2A1CD8u;
            goto label_2a1cd8;
        }
    }
    ctx->pc = 0x2A1B8Cu;
    // 0x2a1b8c: 0xc0a8170
    ctx->pc = 0x2A1B8Cu;
    SET_GPR_U32(ctx, 31, 0x2A1B94u);
    ctx->pc = 0x2A1B90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2A05C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossCamLimitAttn_0x2a05c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1B94u; }
    }
    if (ctx->pc != 0x2A1B94u) { return; }
    ctx->pc = 0x2A1B94u;
    // 0x2a1b94: 0x3c020036
    ctx->pc = 0x2a1b94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1b98: 0x8c42dbc0
    ctx->pc = 0x2a1b98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1b9c: 0xc44100a4
    ctx->pc = 0x2a1b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1ba0: 0xc4400030
    ctx->pc = 0x2a1ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1ba4: 0x46000b01
    ctx->pc = 0x2a1ba4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a1ba8: 0xe7ac0020
    ctx->pc = 0x2a1ba8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a1bac: 0xc44200a8
    ctx->pc = 0x2a1bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a1bb0: 0xc4400034
    ctx->pc = 0x2a1bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1bb4: 0x46001081
    ctx->pc = 0x2a1bb4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a1bb8: 0xe7a20024
    ctx->pc = 0x2a1bb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a1bbc: 0xc44100ac
    ctx->pc = 0x2a1bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1bc0: 0xc4400038
    ctx->pc = 0x2a1bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1bc4: 0x46000841
    ctx->pc = 0x2a1bc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a1bc8: 0xe7a10028
    ctx->pc = 0x2a1bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a1bcc: 0x460c6002
    ctx->pc = 0x2a1bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2a1bd0: 0x46021082
    ctx->pc = 0x2a1bd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2a1bd4: 0x46020000
    ctx->pc = 0x2a1bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a1bd8: 0x46010842
    ctx->pc = 0x2a1bd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2a1bdc: 0x46010000
    ctx->pc = 0x2a1bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a1be0: 0x0
    ctx->pc = 0x2a1be0u;
    // NOP
    // 0x2a1be4: 0x0
    ctx->pc = 0x2a1be4u;
    // NOP
    // 0x2a1be8: 0x46000004
    ctx->pc = 0x2a1be8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2a1bec: 0x46000032
    ctx->pc = 0x2a1becu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1bf0: 0x0
    ctx->pc = 0x2a1bf0u;
    // NOP
    // 0x2a1bf4: 0x45010006
    ctx->pc = 0x2A1BF4u;
    {
        const bool branch_taken_0x2a1bf4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1BF8u;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2a1bf4) {
            ctx->pc = 0x2A1C10u;
            goto label_2a1c10;
        }
    }
    ctx->pc = 0x2A1BFCu;
    // 0x2a1bfc: 0x460c6302
    ctx->pc = 0x2a1bfcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2a1c00: 0x46026300
    ctx->pc = 0x2a1c00u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2a1c04: 0xc0ba284
    ctx->pc = 0x2A1C04u;
    SET_GPR_U32(ctx, 31, 0x2A1C0Cu);
    ctx->pc = 0x2A1C08u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C0Cu; }
    }
    if (ctx->pc != 0x2A1C0Cu) { return; }
    ctx->pc = 0x2A1C0Cu;
    // 0x2a1c0c: 0x46000506
    ctx->pc = 0x2a1c0cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2a1c10:
    // 0x2a1c10: 0x27a40020
    ctx->pc = 0x2a1c10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a1c14: 0x27a50090
    ctx->pc = 0x2a1c14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a1c18: 0xc0b59e6
    ctx->pc = 0x2A1C18u;
    SET_GPR_U32(ctx, 31, 0x2A1C20u);
    ctx->pc = 0x2A1C1Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 148));
    ctx->pc = 0x2D6798u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetYawPitch_0x2d6798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C20u; }
    }
    if (ctx->pc != 0x2A1C20u) { return; }
    ctx->pc = 0x2A1C20u;
    // 0x2a1c20: 0x3c020036
    ctx->pc = 0x2a1c20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1c24: 0x8c42dbc0
    ctx->pc = 0x2a1c24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1c28: 0xc7a00090
    ctx->pc = 0x2a1c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1c2c: 0xe44000ec
    ctx->pc = 0x2a1c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
    // 0x2a1c30: 0xc7a00094
    ctx->pc = 0x2a1c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1c34: 0xe4400104
    ctx->pc = 0x2a1c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2a1c38: 0xc44000f4
    ctx->pc = 0x2a1c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1c3c: 0x46140034
    ctx->pc = 0x2a1c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1c40: 0x0
    ctx->pc = 0x2a1c40u;
    // NOP
    // 0x2a1c44: 0x45010005
    ctx->pc = 0x2A1C44u;
    {
        const bool branch_taken_0x2a1c44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1C48u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1c44) {
            ctx->pc = 0x2A1C5Cu;
            goto label_2a1c5c;
        }
    }
    ctx->pc = 0x2A1C4Cu;
    // 0x2a1c4c: 0x2aa20002
    ctx->pc = 0x2a1c4cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 2));
    // 0x2a1c50: 0x14400005
    ctx->pc = 0x2A1C50u;
    {
        const bool branch_taken_0x2a1c50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A1C54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2a1c50) {
            ctx->pc = 0x2A1C68u;
            goto label_2a1c68;
        }
    }
    ctx->pc = 0x2A1C58u;
    // 0x2a1c58: 0x3c020036
    ctx->pc = 0x2a1c58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a1c5c:
    // 0x2a1c5c: 0x8c42dbc0
    ctx->pc = 0x2a1c5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1c60: 0xe45400f4
    ctx->pc = 0x2a1c60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x2a1c64: 0x3c020031
    ctx->pc = 0x2a1c64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2a1c68:
    // 0x2a1c68: 0xdc430e28
    ctx->pc = 0x2a1c68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x2a1c6c: 0x30620001
    ctx->pc = 0x2a1c6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2a1c70: 0x2103c
    ctx->pc = 0x2a1c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a1c74: 0x2103f
    ctx->pc = 0x2a1c74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a1c78: 0x1040001d
    ctx->pc = 0x2A1C78u;
    {
        const bool branch_taken_0x2a1c78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1C7Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x2a1c78) {
            ctx->pc = 0x2A1CF0u;
            goto label_2a1cf0;
        }
    }
    ctx->pc = 0x2A1C80u;
    // 0x2a1c80: 0x1040001b
    ctx->pc = 0x2A1C80u;
    {
        const bool branch_taken_0x2a1c80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1C84u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x2a1c80) {
            ctx->pc = 0x2A1CF0u;
            goto label_2a1cf0;
        }
    }
    ctx->pc = 0x2A1C88u;
    // 0x2a1c88: 0x3c014334
    ctx->pc = 0x2a1c88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
    // 0x2a1c8c: 0x44810000
    ctx->pc = 0x2a1c8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a1c90: 0x46006302
    ctx->pc = 0x2a1c90u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2a1c94: 0x3c013ea2
    ctx->pc = 0x2a1c94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
    // 0x2a1c98: 0x3421f983
    ctx->pc = 0x2a1c98u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x2a1c9c: 0x44810800
    ctx->pc = 0x2a1c9cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2a1ca0: 0xc7ae0094
    ctx->pc = 0x2a1ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a1ca4: 0x46007382
    ctx->pc = 0x2a1ca4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x2a1ca8: 0x3c0400ff
    ctx->pc = 0x2a1ca8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x2a1cac: 0x3484ff00
    ctx->pc = 0x2a1cacu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
    // 0x2a1cb0: 0x24050001
    ctx->pc = 0x2a1cb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1cb4: 0x24060021
    ctx->pc = 0x2a1cb4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 33));
    // 0x2a1cb8: 0x3c07003b
    ctx->pc = 0x2a1cb8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
    // 0x2a1cbc: 0x24e7e590
    ctx->pc = 0x2a1cbcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294960528));
    // 0x2a1cc0: 0x46016302
    ctx->pc = 0x2a1cc0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2a1cc4: 0x4600a346
    ctx->pc = 0x2a1cc4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2a1cc8: 0xc0b4822
    ctx->pc = 0x2A1CC8u;
    SET_GPR_U32(ctx, 31, 0x2A1CD0u);
    ctx->pc = 0x2A1CCCu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    ctx->pc = 0x2D2088u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintfc_0x2d2088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CD0u; }
    }
    if (ctx->pc != 0x2A1CD0u) { return; }
    ctx->pc = 0x2A1CD0u;
    // 0x2a1cd0: 0x10000008
    ctx->pc = 0x2A1CD0u;
    {
        const bool branch_taken_0x2a1cd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1CD4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        if (branch_taken_0x2a1cd0) {
            ctx->pc = 0x2A1CF4u;
            goto label_2a1cf4;
        }
    }
    ctx->pc = 0x2A1CD8u;
label_2a1cd8:
    // 0x2a1cd8: 0xc0a8170
    ctx->pc = 0x2A1CD8u;
    SET_GPR_U32(ctx, 31, 0x2A1CE0u);
    ctx->pc = 0x2A1CDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2A05C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossCamLimitAttn_0x2a05c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CE0u; }
    }
    if (ctx->pc != 0x2A1CE0u) { return; }
    ctx->pc = 0x2A1CE0u;
    // 0x2a1ce0: 0xc7ac0090
    ctx->pc = 0x2a1ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1ce4: 0x4600a346
    ctx->pc = 0x2a1ce4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2a1ce8: 0xc0a825e
    ctx->pc = 0x2A1CE8u;
    SET_GPR_U32(ctx, 31, 0x2A1CF0u);
    ctx->pc = 0x2A1CECu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->pc = 0x2A0978u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossCamLimit_0x2a0978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CF0u; }
    }
    if (ctx->pc != 0x2A1CF0u) { return; }
    ctx->pc = 0x2A1CF0u;
label_2a1cf0:
    // 0x2a1cf0: 0xdfbf0100
    ctx->pc = 0x2a1cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2a1cf4:
    // 0x2a1cf4: 0xdfb500f0
    ctx->pc = 0x2a1cf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a1cf8: 0xdfb400e0
    ctx->pc = 0x2a1cf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a1cfc: 0xdfb300d0
    ctx->pc = 0x2a1cfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a1d00: 0xdfb200c0
    ctx->pc = 0x2a1d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a1d04: 0xdfb100b0
    ctx->pc = 0x2a1d04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a1d08: 0xdfb000a0
    ctx->pc = 0x2a1d08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a1d0c: 0xc7b60120
    ctx->pc = 0x2a1d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a1d10: 0xc7b50118
    ctx->pc = 0x2a1d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a1d14: 0xc7b40110
    ctx->pc = 0x2a1d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a1d18: 0x3e00008
    ctx->pc = 0x2A1D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1D1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A1068u: goto label_2a1068;
            case 0x2A1088u: goto label_2a1088;
            case 0x2A1138u: goto label_2a1138;
            case 0x2A11ACu: goto label_2a11ac;
            case 0x2A11CCu: goto label_2a11cc;
            case 0x2A11E8u: goto label_2a11e8;
            case 0x2A1250u: goto label_2a1250;
            case 0x2A1274u: goto label_2a1274;
            case 0x2A127Cu: goto label_2a127c;
            case 0x2A12C4u: goto label_2a12c4;
            case 0x2A12C8u: goto label_2a12c8;
            case 0x2A12F8u: goto label_2a12f8;
            case 0x2A1308u: goto label_2a1308;
            case 0x2A1388u: goto label_2a1388;
            case 0x2A13C0u: goto label_2a13c0;
            case 0x2A1404u: goto label_2a1404;
            case 0x2A1408u: goto label_2a1408;
            case 0x2A1460u: goto label_2a1460;
            case 0x2A14C0u: goto label_2a14c0;
            case 0x2A14E8u: goto label_2a14e8;
            case 0x2A1508u: goto label_2a1508;
            case 0x2A15A0u: goto label_2a15a0;
            case 0x2A15A8u: goto label_2a15a8;
            case 0x2A15B0u: goto label_2a15b0;
            case 0x2A1628u: goto label_2a1628;
            case 0x2A1630u: goto label_2a1630;
            case 0x2A165Cu: goto label_2a165c;
            case 0x2A1678u: goto label_2a1678;
            case 0x2A167Cu: goto label_2a167c;
            case 0x2A16E0u: goto label_2a16e0;
            case 0x2A16F0u: goto label_2a16f0;
            case 0x2A1740u: goto label_2a1740;
            case 0x2A1770u: goto label_2a1770;
            case 0x2A1784u: goto label_2a1784;
            case 0x2A17A4u: goto label_2a17a4;
            case 0x2A17B4u: goto label_2a17b4;
            case 0x2A184Cu: goto label_2a184c;
            case 0x2A185Cu: goto label_2a185c;
            case 0x2A189Cu: goto label_2a189c;
            case 0x2A18D0u: goto label_2a18d0;
            case 0x2A1908u: goto label_2a1908;
            case 0x2A1950u: goto label_2a1950;
            case 0x2A1968u: goto label_2a1968;
            case 0x2A196Cu: goto label_2a196c;
            case 0x2A19A0u: goto label_2a19a0;
            case 0x2A19DCu: goto label_2a19dc;
            case 0x2A19E0u: goto label_2a19e0;
            case 0x2A19E4u: goto label_2a19e4;
            case 0x2A1A18u: goto label_2a1a18;
            case 0x2A1A1Cu: goto label_2a1a1c;
            case 0x2A1A70u: goto label_2a1a70;
            case 0x2A1A84u: goto label_2a1a84;
            case 0x2A1AD4u: goto label_2a1ad4;
            case 0x2A1B24u: goto label_2a1b24;
            case 0x2A1B30u: goto label_2a1b30;
            case 0x2A1B84u: goto label_2a1b84;
            case 0x2A1C10u: goto label_2a1c10;
            case 0x2A1C5Cu: goto label_2a1c5c;
            case 0x2A1C68u: goto label_2a1c68;
            case 0x2A1CD8u: goto label_2a1cd8;
            case 0x2A1CF0u: goto label_2a1cf0;
            case 0x2A1CF4u: goto label_2a1cf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A1D20u;
}
