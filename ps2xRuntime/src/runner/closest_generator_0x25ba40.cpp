#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: closest_generator
// Address: 0x25ba40 - 0x25bdec
void closest_generator_0x25ba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25ba40u;

    // 0x25ba40: 0x27bdfef0
    ctx->pc = 0x25ba40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x25ba44: 0xffbf00c0
    ctx->pc = 0x25ba44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x25ba48: 0xffbe00b0
    ctx->pc = 0x25ba48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x25ba4c: 0xffb700a0
    ctx->pc = 0x25ba4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x25ba50: 0xffb60090
    ctx->pc = 0x25ba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x25ba54: 0xffb50080
    ctx->pc = 0x25ba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x25ba58: 0xffb40070
    ctx->pc = 0x25ba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x25ba5c: 0xffb30060
    ctx->pc = 0x25ba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x25ba60: 0xffb20050
    ctx->pc = 0x25ba60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x25ba64: 0xffb10040
    ctx->pc = 0x25ba64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x25ba68: 0xffb00030
    ctx->pc = 0x25ba68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x25ba6c: 0xe7ba0100
    ctx->pc = 0x25ba6cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x25ba70: 0xe7b900f8
    ctx->pc = 0x25ba70u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x25ba74: 0xe7b800f0
    ctx->pc = 0x25ba74u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x25ba78: 0xe7b700e8
    ctx->pc = 0x25ba78u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x25ba7c: 0xe7b600e0
    ctx->pc = 0x25ba7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x25ba80: 0xe7b500d8
    ctx->pc = 0x25ba80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x25ba84: 0xe7b400d0
    ctx->pc = 0x25ba84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x25ba88: 0x80982d
    ctx->pc = 0x25ba88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ba8c: 0xa0a02d
    ctx->pc = 0x25ba8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ba90: 0x46006606
    ctx->pc = 0x25ba90u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x25ba94: 0x46006dc6
    ctx->pc = 0x25ba94u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x25ba98: 0xc0b02d
    ctx->pc = 0x25ba98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ba9c: 0xe0a82d
    ctx->pc = 0x25ba9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25baa0: 0x2402ffff
    ctx->pc = 0x25baa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25baa4: 0xafa20020
    ctx->pc = 0x25baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x25baa8: 0x3c013f80
    ctx->pc = 0x25baa8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x25baac: 0x44810000
    ctx->pc = 0x25baacu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x25bab0: 0x46180581
    ctx->pc = 0x25bab0u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x25bab4: 0x0
    ctx->pc = 0x25bab4u;
    // NOP
    // 0x25bab8: 0x0
    ctx->pc = 0x25bab8u;
    // NOP
    // 0x25babc: 0x4617b583
    ctx->pc = 0x25babcu;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[23];
    // 0x25bac0: 0x4600bd46
    ctx->pc = 0x25bac0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[23]);
    // 0x25bac4: 0xc0a0120
    ctx->pc = 0x25BAC4u;
    SET_GPR_U32(ctx, 31, 0x25BACCu);
    ctx->pc = 0x25BAC8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x280480u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartItemGrid_0x280480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BACCu; }
    }
    if (ctx->pc != 0x25BACCu) { return; }
    ctx->pc = 0x25BACCu;
    // 0x25bacc: 0x241e002c
    ctx->pc = 0x25baccu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 44));
    // 0x25bad0: 0x3c013f66
    ctx->pc = 0x25bad0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16230 << 16));
    // 0x25bad4: 0x34216666
    ctx->pc = 0x25bad4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x25bad8: 0x4481d000
    ctx->pc = 0x25bad8u;
    *(uint32_t*)&ctx->f[26] = GPR_U32(ctx, 1);
    // 0x25badc: 0x3c0140a0
    ctx->pc = 0x25badcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x25bae0: 0x4481c800
    ctx->pc = 0x25bae0u;
    *(uint32_t*)&ctx->f[25] = GPR_U32(ctx, 1);
    // 0x25bae4: 0x10000095
    ctx->pc = 0x25BAE4u;
    {
        const bool branch_taken_0x25bae4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25BAE8u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 45));
        if (branch_taken_0x25bae4) {
            ctx->pc = 0x25BD3Cu;
            goto label_25bd3c;
        }
    }
    ctx->pc = 0x25BAECu;
    // 0x25baec: 0x0
    ctx->pc = 0x25baecu;
    // NOP
label_25baf0:
    // 0x25baf0: 0x2421018
    ctx->pc = 0x25baf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25baf4: 0x3c040034
    ctx->pc = 0x25baf4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x25baf8: 0x8c83cd94
    ctx->pc = 0x25baf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294954388)));
    // 0x25bafc: 0x438021
    ctx->pc = 0x25bafcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25bb00: 0x860200d8
    ctx->pc = 0x25bb00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x25bb04: 0x2404ffff
    ctx->pc = 0x25bb04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25bb08: 0x1044008c
    ctx->pc = 0x25BB08u;
    {
        const bool branch_taken_0x25bb08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x25BB0Cu;
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
        if (branch_taken_0x25bb08) {
            ctx->pc = 0x25BD3Cu;
            goto label_25bd3c;
        }
    }
    ctx->pc = 0x25BB10u;
    // 0x25bb10: 0x30428100
    ctx->pc = 0x25bb10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 33024));
    // 0x25bb14: 0x14400089
    ctx->pc = 0x25BB14u;
    {
        const bool branch_taken_0x25bb14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25bb14) {
            ctx->pc = 0x25BD3Cu;
            goto label_25bd3c;
        }
    }
    ctx->pc = 0x25BB1Cu;
    // 0x25bb1c: 0x820200e3
    ctx->pc = 0x25bb1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 227)));
    // 0x25bb20: 0x10440086
    ctx->pc = 0x25BB20u;
    {
        const bool branch_taken_0x25bb20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x25bb20) {
            ctx->pc = 0x25BD3Cu;
            goto label_25bd3c;
        }
    }
    ctx->pc = 0x25BB28u;
    // 0x25bb28: 0x8e030000
    ctx->pc = 0x25bb28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25bb2c: 0x8c650000
    ctx->pc = 0x25bb2cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25bb30: 0x10a40082
    ctx->pc = 0x25BB30u;
    {
        const bool branch_taken_0x25bb30 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 4));
        if (branch_taken_0x25bb30) {
            ctx->pc = 0x25BD3Cu;
            goto label_25bd3c;
        }
    }
    ctx->pc = 0x25BB38u;
    // 0x25bb38: 0x820200e1
    ctx->pc = 0x25bb38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 225)));
    // 0x25bb3c: 0x1440007f
    ctx->pc = 0x25BB3Cu;
    {
        const bool branch_taken_0x25bb3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25BB40u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 16384));
        if (branch_taken_0x25bb3c) {
            ctx->pc = 0x25BD3Cu;
            goto label_25bd3c;
        }
    }
    ctx->pc = 0x25BB44u;
    // 0x25bb44: 0x1040007d
    ctx->pc = 0x25BB44u;
    {
        const bool branch_taken_0x25bb44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25BB48u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x25bb44) {
            ctx->pc = 0x25BD3Cu;
            goto label_25bd3c;
        }
    }
    ctx->pc = 0x25BB4Cu;
    // 0x25bb4c: 0xa0182d
    ctx->pc = 0x25bb4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bb50: 0x24020003
    ctx->pc = 0x25bb50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x25bb54: 0x10620033
    ctx->pc = 0x25BB54u;
    {
        const bool branch_taken_0x25bb54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25BB58u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
        if (branch_taken_0x25bb54) {
            ctx->pc = 0x25BC24u;
            goto label_25bc24;
        }
    }
    ctx->pc = 0x25BB5Cu;
    // 0x25bb5c: 0x10400005
    ctx->pc = 0x25BB5Cu;
    {
        const bool branch_taken_0x25bb5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25BB60u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x25bb5c) {
            ctx->pc = 0x25BB74u;
            goto label_25bb74;
        }
    }
    ctx->pc = 0x25BB64u;
    // 0x25bb64: 0x50640009
    ctx->pc = 0x25BB64u;
    {
        const bool branch_taken_0x25bb64 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x25bb64) {
            ctx->pc = 0x25BB68u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x25BB8Cu;
            goto label_25bb8c;
        }
    }
    ctx->pc = 0x25BB6Cu;
    // 0x25bb6c: 0x10000073
    ctx->pc = 0x25BB6Cu;
    {
        const bool branch_taken_0x25bb6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25bb6c) {
            ctx->pc = 0x25BD3Cu;
            goto label_25bd3c;
        }
    }
    ctx->pc = 0x25BB74u;
label_25bb74:
    // 0x25bb74: 0x24020005
    ctx->pc = 0x25bb74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x25bb78: 0x10620021
    ctx->pc = 0x25BB78u;
    {
        const bool branch_taken_0x25bb78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25BB7Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x25bb78) {
            ctx->pc = 0x25BC00u;
            goto label_25bc00;
        }
    }
    ctx->pc = 0x25BB80u;
    // 0x25bb80: 0x1464006e
    ctx->pc = 0x25BB80u;
    {
        const bool branch_taken_0x25bb80 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x25bb80) {
            ctx->pc = 0x25BD3Cu;
            goto label_25bd3c;
        }
    }
    ctx->pc = 0x25BB88u;
    // 0x25bb88: 0x8e020000
    ctx->pc = 0x25bb88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25bb8c:
    // 0x25bb8c: 0x8c420000
    ctx->pc = 0x25bb8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25bb90: 0x24030002
    ctx->pc = 0x25bb90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25bb94: 0x5443000a
    ctx->pc = 0x25BB94u;
    {
        const bool branch_taken_0x25bb94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x25bb94) {
            ctx->pc = 0x25BB98u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x25BBC0u;
            goto label_25bbc0;
        }
    }
    ctx->pc = 0x25BB9Cu;
    // 0x25bb9c: 0x8e230000
    ctx->pc = 0x25bb9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25bba0: 0x2402002b
    ctx->pc = 0x25bba0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
    // 0x25bba4: 0x50620006
    ctx->pc = 0x25BBA4u;
    {
        const bool branch_taken_0x25bba4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x25bba4) {
            ctx->pc = 0x25BBA8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x25BBC0u;
            goto label_25bbc0;
        }
    }
    ctx->pc = 0x25BBACu;
    // 0x25bbac: 0x507e0004
    ctx->pc = 0x25BBACu;
    {
        const bool branch_taken_0x25bbac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 30));
        if (branch_taken_0x25bbac) {
            ctx->pc = 0x25BBB0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x25BBC0u;
            goto label_25bbc0;
        }
    }
    ctx->pc = 0x25BBB4u;
    // 0x25bbb4: 0x14770061
    ctx->pc = 0x25BBB4u;
    {
        const bool branch_taken_0x25bbb4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 23));
        if (branch_taken_0x25bbb4) {
            ctx->pc = 0x25BD3Cu;
            goto label_25bd3c;
        }
    }
    ctx->pc = 0x25BBBCu;
    // 0x25bbbc: 0x8e020000
    ctx->pc = 0x25bbbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25bbc0:
    // 0x25bbc0: 0x8c420000
    ctx->pc = 0x25bbc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25bbc4: 0x2404000a
    ctx->pc = 0x25bbc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x25bbc8: 0x54440006
    ctx->pc = 0x25BBC8u;
    {
        const bool branch_taken_0x25bbc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x25bbc8) {
            ctx->pc = 0x25BBCCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x25BBE4u;
            goto label_25bbe4;
        }
    }
    ctx->pc = 0x25BBD0u;
    // 0x25bbd0: 0x8e230000
    ctx->pc = 0x25bbd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25bbd4: 0x24020029
    ctx->pc = 0x25bbd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 41));
    // 0x25bbd8: 0x10620058
    ctx->pc = 0x25BBD8u;
    {
        const bool branch_taken_0x25bbd8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x25bbd8) {
            ctx->pc = 0x25BD3Cu;
            goto label_25bd3c;
        }
    }
    ctx->pc = 0x25BBE0u;
    // 0x25bbe0: 0x8e220000
    ctx->pc = 0x25bbe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25bbe4:
    // 0x25bbe4: 0x2442ffd5
    ctx->pc = 0x25bbe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967253));
    // 0x25bbe8: 0x2c420003
    ctx->pc = 0x25bbe8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x25bbec: 0x50400005
    ctx->pc = 0x25BBECu;
    {
        const bool branch_taken_0x25bbec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25bbec) {
            ctx->pc = 0x25BBF0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x25BC04u;
            goto label_25bc04;
        }
    }
    ctx->pc = 0x25BBF4u;
    // 0x25bbf4: 0x820200dc
    ctx->pc = 0x25bbf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x25bbf8: 0x1c400050
    ctx->pc = 0x25BBF8u;
    {
        const bool branch_taken_0x25bbf8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x25bbf8) {
            ctx->pc = 0x25BD3Cu;
            goto label_25bd3c;
        }
    }
    ctx->pc = 0x25BC00u;
label_25bc00:
    // 0x25bc00: 0x8e020000
    ctx->pc = 0x25bc00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25bc04:
    // 0x25bc04: 0x8c420000
    ctx->pc = 0x25bc04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25bc08: 0x24030005
    ctx->pc = 0x25bc08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x25bc0c: 0x54430006
    ctx->pc = 0x25BC0Cu;
    {
        const bool branch_taken_0x25bc0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x25bc0c) {
            ctx->pc = 0x25BC10u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x25BC28u;
            goto label_25bc28;
        }
    }
    ctx->pc = 0x25BC14u;
    // 0x25bc14: 0x8e230000
    ctx->pc = 0x25bc14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25bc18: 0x2402001f
    ctx->pc = 0x25bc18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x25bc1c: 0x14620047
    ctx->pc = 0x25BC1Cu;
    {
        const bool branch_taken_0x25bc1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25bc1c) {
            ctx->pc = 0x25BD3Cu;
            goto label_25bd3c;
        }
    }
    ctx->pc = 0x25BC24u;
label_25bc24:
    // 0x25bc24: 0xc6000060
    ctx->pc = 0x25bc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bc28:
    // 0x25bc28: 0xc6610000
    ctx->pc = 0x25bc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25bc2c: 0x46010001
    ctx->pc = 0x25bc2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25bc30: 0xe7a00000
    ctx->pc = 0x25bc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25bc34: 0xc6020064
    ctx->pc = 0x25bc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25bc38: 0xc6600004
    ctx->pc = 0x25bc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bc3c: 0x46001081
    ctx->pc = 0x25bc3cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x25bc40: 0xe7a20004
    ctx->pc = 0x25bc40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25bc44: 0xc6000068
    ctx->pc = 0x25bc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bc48: 0xc6610008
    ctx->pc = 0x25bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25bc4c: 0x46010001
    ctx->pc = 0x25bc4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25bc50: 0xe7a00008
    ctx->pc = 0x25bc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25bc54: 0x46001085
    ctx->pc = 0x25bc54u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x25bc58: 0xc620000c
    ctx->pc = 0x25bc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bc5c: 0x46000000
    ctx->pc = 0x25bc5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x25bc60: 0x46020034
    ctx->pc = 0x25bc60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bc64: 0x45010035
    ctx->pc = 0x25BC64u;
    {
        const bool branch_taken_0x25bc64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bc64) {
            ctx->pc = 0x25BD3Cu;
            goto label_25bd3c;
        }
    }
    ctx->pc = 0x25BC6Cu;
    // 0x25bc6c: 0xc0b58a4
    ctx->pc = 0x25BC6Cu;
    SET_GPR_U32(ctx, 31, 0x25BC74u);
    ctx->pc = 0x25BC70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BC74u; }
    }
    if (ctx->pc != 0x25BC74u) { return; }
    ctx->pc = 0x25BC74u;
    // 0x25bc74: 0x8e020000
    ctx->pc = 0x25bc74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25bc78: 0x8c420000
    ctx->pc = 0x25bc78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25bc7c: 0x24040003
    ctx->pc = 0x25bc7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x25bc80: 0x1044000c
    ctx->pc = 0x25BC80u;
    {
        const bool branch_taken_0x25bc80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x25BC84u;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x25bc80) {
            ctx->pc = 0x25BCB4u;
            goto label_25bcb4;
        }
    }
    ctx->pc = 0x25BC88u;
    // 0x25bc88: 0x8e220000
    ctx->pc = 0x25bc88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25bc8c: 0x505e0009
    ctx->pc = 0x25BC8Cu;
    {
        const bool branch_taken_0x25bc8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 30));
        if (branch_taken_0x25bc8c) {
            ctx->pc = 0x25BC90u;
            ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[26]);
            ctx->pc = 0x25BCB4u;
            goto label_25bcb4;
        }
    }
    ctx->pc = 0x25BC94u;
    // 0x25bc94: 0x14570003
    ctx->pc = 0x25BC94u;
    {
        const bool branch_taken_0x25bc94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 23));
        if (branch_taken_0x25bc94) {
            ctx->pc = 0x25BCA4u;
            goto label_25bca4;
        }
    }
    ctx->pc = 0x25BC9Cu;
    // 0x25bc9c: 0x10000005
    ctx->pc = 0x25BC9Cu;
    {
        const bool branch_taken_0x25bc9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25BCA0u;
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[26]);
        if (branch_taken_0x25bc9c) {
            ctx->pc = 0x25BCB4u;
            goto label_25bcb4;
        }
    }
    ctx->pc = 0x25BCA4u;
label_25bca4:
    // 0x25bca4: 0x3c013f99
    ctx->pc = 0x25bca4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16281 << 16));
    // 0x25bca8: 0x3421999a
    ctx->pc = 0x25bca8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x25bcac: 0x44810000
    ctx->pc = 0x25bcacu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x25bcb0: 0x4600a502
    ctx->pc = 0x25bcb0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_25bcb4:
    // 0x25bcb4: 0xc6200008
    ctx->pc = 0x25bcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bcb8: 0x46190034
    ctx->pc = 0x25bcb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bcbc: 0x0
    ctx->pc = 0x25bcbcu;
    // NOP
    // 0x25bcc0: 0x45020002
    ctx->pc = 0x25BCC0u;
    {
        const bool branch_taken_0x25bcc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bcc0) {
            ctx->pc = 0x25BCC4u;
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[25]);
            ctx->pc = 0x25BCCCu;
            goto label_25bccc;
        }
    }
    ctx->pc = 0x25BCC8u;
    // 0x25bcc8: 0x4600a501
    ctx->pc = 0x25bcc8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_25bccc:
    // 0x25bccc: 0x4614b834
    ctx->pc = 0x25bcccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bcd0: 0x0
    ctx->pc = 0x25bcd0u;
    // NOP
    // 0x25bcd4: 0x45010019
    ctx->pc = 0x25BCD4u;
    {
        const bool branch_taken_0x25bcd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BCD8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x25bcd4) {
            ctx->pc = 0x25BD3Cu;
            goto label_25bd3c;
        }
    }
    ctx->pc = 0x25BCDCu;
    // 0x25bcdc: 0xc0b5c34
    ctx->pc = 0x25BCDCu;
    SET_GPR_U32(ctx, 31, 0x25BCE4u);
    ctx->pc = 0x25BCE0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BCE4u; }
    }
    if (ctx->pc != 0x25BCE4u) { return; }
    ctx->pc = 0x25BCE4u;
    // 0x25bce4: 0xc7a30000
    ctx->pc = 0x25bce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25bce8: 0xc6810000
    ctx->pc = 0x25bce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25bcec: 0x46011842
    ctx->pc = 0x25bcecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x25bcf0: 0xc7a40008
    ctx->pc = 0x25bcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25bcf4: 0xc6820008
    ctx->pc = 0x25bcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25bcf8: 0x46022082
    ctx->pc = 0x25bcf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x25bcfc: 0x46020840
    ctx->pc = 0x25bcfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x25bd00: 0x4616a082
    ctx->pc = 0x25bd00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x25bd04: 0x4602c080
    ctx->pc = 0x25bd04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
    // 0x25bd08: 0x46001082
    ctx->pc = 0x25bd08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x25bd0c: 0x46020834
    ctx->pc = 0x25bd0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bd10: 0x4501000a
    ctx->pc = 0x25BD10u;
    {
        const bool branch_taken_0x25bd10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bd10) {
            ctx->pc = 0x25BD3Cu;
            goto label_25bd3c;
        }
    }
    ctx->pc = 0x25BD18u;
    // 0x25bd18: 0x4615a034
    ctx->pc = 0x25bd18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bd1c: 0x45000007
    ctx->pc = 0x25BD1Cu;
    {
        const bool branch_taken_0x25bd1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bd1c) {
            ctx->pc = 0x25BD3Cu;
            goto label_25bd3c;
        }
    }
    ctx->pc = 0x25BD24u;
    // 0x25bd24: 0xafb20020
    ctx->pc = 0x25bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x25bd28: 0x4600a546
    ctx->pc = 0x25bd28u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x25bd2c: 0xe7a30010
    ctx->pc = 0x25bd2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25bd30: 0xc7a00004
    ctx->pc = 0x25bd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bd34: 0xe7a00014
    ctx->pc = 0x25bd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x25bd38: 0xe7a40018
    ctx->pc = 0x25bd38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_25bd3c:
    // 0x25bd3c: 0xc0a015a
    ctx->pc = 0x25BD3Cu;
    SET_GPR_U32(ctx, 31, 0x25BD44u);
    ctx->pc = 0x280568u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridItem_0x280568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BD44u; }
    }
    if (ctx->pc != 0x25BD44u) { return; }
    ctx->pc = 0x25BD44u;
    // 0x25bd44: 0x40902d
    ctx->pc = 0x25bd44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bd48: 0x641ff69
    ctx->pc = 0x25BD48u;
    {
        const bool branch_taken_0x25bd48 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x25BD4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
        if (branch_taken_0x25bd48) {
            ctx->pc = 0x25BAF0u;
            goto label_25baf0;
        }
    }
    ctx->pc = 0x25BD50u;
    // 0x25bd50: 0x8fa20020
    ctx->pc = 0x25bd50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25bd54: 0x440000f
    ctx->pc = 0x25BD54u;
    {
        const bool branch_taken_0x25bd54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25BD58u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x25bd54) {
            ctx->pc = 0x25BD94u;
            goto label_25bd94;
        }
    }
    ctx->pc = 0x25BD5Cu;
    // 0x25bd5c: 0xe6c00000
    ctx->pc = 0x25bd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x25bd60: 0xc7a00014
    ctx->pc = 0x25bd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bd64: 0xe6c00004
    ctx->pc = 0x25bd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x25bd68: 0xc7a00018
    ctx->pc = 0x25bd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bd6c: 0x12a0000b
    ctx->pc = 0x25BD6Cu;
    {
        const bool branch_taken_0x25bd6c = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x25BD70u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
        if (branch_taken_0x25bd6c) {
            ctx->pc = 0x25BD9Cu;
            goto label_25bd9c;
        }
    }
    ctx->pc = 0x25BD74u;
    // 0x25bd74: 0x3c030034
    ctx->pc = 0x25bd74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25bd78: 0x24020110
    ctx->pc = 0x25bd78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
    // 0x25bd7c: 0x8fa40020
    ctx->pc = 0x25bd7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25bd80: 0x821018
    ctx->pc = 0x25bd80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25bd84: 0x8c63cd94
    ctx->pc = 0x25bd84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294954388)));
    // 0x25bd88: 0x431021
    ctx->pc = 0x25bd88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25bd8c: 0x10000003
    ctx->pc = 0x25BD8Cu;
    {
        const bool branch_taken_0x25bd8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25BD90u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x25bd8c) {
            ctx->pc = 0x25BD9Cu;
            goto label_25bd9c;
        }
    }
    ctx->pc = 0x25BD94u;
label_25bd94:
    // 0x25bd94: 0x56a00001
    ctx->pc = 0x25BD94u;
    {
        const bool branch_taken_0x25bd94 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x25bd94) {
            ctx->pc = 0x25BD98u;
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x25BD9Cu;
            goto label_25bd9c;
        }
    }
    ctx->pc = 0x25BD9Cu;
label_25bd9c:
    // 0x25bd9c: 0x4600a806
    ctx->pc = 0x25bd9cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x25bda0: 0xdfbf00c0
    ctx->pc = 0x25bda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25bda4: 0xdfbe00b0
    ctx->pc = 0x25bda4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25bda8: 0xdfb700a0
    ctx->pc = 0x25bda8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25bdac: 0xdfb60090
    ctx->pc = 0x25bdacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25bdb0: 0xdfb50080
    ctx->pc = 0x25bdb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25bdb4: 0xdfb40070
    ctx->pc = 0x25bdb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25bdb8: 0xdfb30060
    ctx->pc = 0x25bdb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25bdbc: 0xdfb20050
    ctx->pc = 0x25bdbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25bdc0: 0xdfb10040
    ctx->pc = 0x25bdc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25bdc4: 0xdfb00030
    ctx->pc = 0x25bdc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25bdc8: 0xc7ba0100
    ctx->pc = 0x25bdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x25bdcc: 0xc7b900f8
    ctx->pc = 0x25bdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x25bdd0: 0xc7b800f0
    ctx->pc = 0x25bdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x25bdd4: 0xc7b700e8
    ctx->pc = 0x25bdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25bdd8: 0xc7b600e0
    ctx->pc = 0x25bdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25bddc: 0xc7b500d8
    ctx->pc = 0x25bddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25bde0: 0xc7b400d0
    ctx->pc = 0x25bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25bde4: 0x3e00008
    ctx->pc = 0x25BDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BDE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25BAF0u: goto label_25baf0;
            case 0x25BB74u: goto label_25bb74;
            case 0x25BB8Cu: goto label_25bb8c;
            case 0x25BBC0u: goto label_25bbc0;
            case 0x25BBE4u: goto label_25bbe4;
            case 0x25BC00u: goto label_25bc00;
            case 0x25BC04u: goto label_25bc04;
            case 0x25BC24u: goto label_25bc24;
            case 0x25BC28u: goto label_25bc28;
            case 0x25BCA4u: goto label_25bca4;
            case 0x25BCB4u: goto label_25bcb4;
            case 0x25BCCCu: goto label_25bccc;
            case 0x25BD3Cu: goto label_25bd3c;
            case 0x25BD94u: goto label_25bd94;
            case 0x25BD9Cu: goto label_25bd9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25BDECu;
}
