#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SumnerDoSpeech
// Address: 0x274fb0 - 0x27561c
void SumnerDoSpeech_0x274fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x274fb0u;

    // 0x274fb0: 0x27bdfe40
    ctx->pc = 0x274fb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x274fb4: 0xffbf01b0
    ctx->pc = 0x274fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
    // 0x274fb8: 0xffbe01a0
    ctx->pc = 0x274fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 30));
    // 0x274fbc: 0xffb70190
    ctx->pc = 0x274fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 23));
    // 0x274fc0: 0xffb60180
    ctx->pc = 0x274fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x274fc4: 0xffb50170
    ctx->pc = 0x274fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 21));
    // 0x274fc8: 0xffb40160
    ctx->pc = 0x274fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
    // 0x274fcc: 0xffb30150
    ctx->pc = 0x274fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 19));
    // 0x274fd0: 0xffb20140
    ctx->pc = 0x274fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
    // 0x274fd4: 0xffb10130
    ctx->pc = 0x274fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 17));
    // 0x274fd8: 0xffb00120
    ctx->pc = 0x274fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x274fdc: 0x2414ffff
    ctx->pc = 0x274fdcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x274fe0: 0x882d
    ctx->pc = 0x274fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274fe4: 0x3c020034
    ctx->pc = 0x274fe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274fe8: 0xc441fbc0
    ctx->pc = 0x274fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274fec: 0x44800000
    ctx->pc = 0x274fecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x274ff0: 0x46000836
    ctx->pc = 0x274ff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274ff4: 0x0
    ctx->pc = 0x274ff4u;
    // NOP
    // 0x274ff8: 0x4501017c
    ctx->pc = 0x274FF8u;
    {
        const bool branch_taken_0x274ff8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x274FFCu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x274ff8) {
            ctx->pc = 0x2755ECu;
            goto label_2755ec;
        }
    }
    ctx->pc = 0x275000u;
    // 0x275000: 0x3c020032
    ctx->pc = 0x275000u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x275004: 0x8c420808
    ctx->pc = 0x275004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2056)));
    // 0x275008: 0x14400179
    ctx->pc = 0x275008u;
    {
        const bool branch_taken_0x275008 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27500Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
        if (branch_taken_0x275008) {
            ctx->pc = 0x2755F0u;
            goto label_2755f0;
        }
    }
    ctx->pc = 0x275010u;
    // 0x275010: 0x3c020032
    ctx->pc = 0x275010u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x275014: 0x8c42080c
    ctx->pc = 0x275014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x275018: 0x54400176
    ctx->pc = 0x275018u;
    {
        const bool branch_taken_0x275018 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x275018) {
            ctx->pc = 0x27501Cu;
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 416)));
            ctx->pc = 0x2755F4u;
            goto label_2755f4;
        }
    }
    ctx->pc = 0x275020u;
    // 0x275020: 0x3c040034
    ctx->pc = 0x275020u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x275024: 0x8c83fbd0
    ctx->pc = 0x275024u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294966224)));
    // 0x275028: 0x18600005
    ctx->pc = 0x275028u;
    {
        const bool branch_taken_0x275028 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27502Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x275028) {
            ctx->pc = 0x275040u;
            goto label_275040;
        }
    }
    ctx->pc = 0x275030u;
    // 0x275030: 0x8c42ffbc
    ctx->pc = 0x275030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x275034: 0x621023
    ctx->pc = 0x275034u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x275038: 0x1000016d
    ctx->pc = 0x275038u;
    {
        const bool branch_taken_0x275038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27503Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294966224), GPR_U32(ctx, 2));
        if (branch_taken_0x275038) {
            ctx->pc = 0x2755F0u;
            goto label_2755f0;
        }
    }
    ctx->pc = 0x275040u;
label_275040:
    // 0x275040: 0x3c020034
    ctx->pc = 0x275040u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x275044: 0x8c42fbd4
    ctx->pc = 0x275044u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966228)));
    // 0x275048: 0x440000d
    ctx->pc = 0x275048u;
    {
        const bool branch_taken_0x275048 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27504Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x275048) {
            ctx->pc = 0x275080u;
            goto label_275080;
        }
    }
    ctx->pc = 0x275050u;
    // 0x275050: 0x3c02003c
    ctx->pc = 0x275050u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x275054: 0x24453a60
    ctx->pc = 0x275054u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 14944));
    // 0x275058: 0x24030001
    ctx->pc = 0x275058u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27505c: 0x41080
    ctx->pc = 0x27505cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_275060:
    // 0x275060: 0x451021
    ctx->pc = 0x275060u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x275064: 0x8c420000
    ctx->pc = 0x275064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275068: 0x28420001
    ctx->pc = 0x275068u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1));
    // 0x27506c: 0x62980a
    ctx->pc = 0x27506cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
    // 0x275070: 0x24840001
    ctx->pc = 0x275070u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x275074: 0x28820004
    ctx->pc = 0x275074u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x275078: 0x1440fff9
    ctx->pc = 0x275078u;
    {
        const bool branch_taken_0x275078 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27507Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x275078) {
            ctx->pc = 0x275060u;
            goto label_275060;
        }
    }
    ctx->pc = 0x275080u;
label_275080:
    // 0x275080: 0x3c020034
    ctx->pc = 0x275080u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x275084: 0x8c42fbcc
    ctx->pc = 0x275084u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966220)));
    // 0x275088: 0x1440002a
    ctx->pc = 0x275088u;
    {
        const bool branch_taken_0x275088 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27508Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x275088) {
            ctx->pc = 0x275134u;
            goto label_275134;
        }
    }
    ctx->pc = 0x275090u;
    // 0x275090: 0xc09d236
    ctx->pc = 0x275090u;
    SET_GPR_U32(ctx, 31, 0x275098u);
    ctx->pc = 0x2748D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerGhostStart_0x2748d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275098u; }
    }
    if (ctx->pc != 0x275098u) { return; }
    ctx->pc = 0x275098u;
    // 0x275098: 0x27b00100
    ctx->pc = 0x275098u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 256));
    // 0x27509c: 0x200202d
    ctx->pc = 0x27509cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2750a0: 0x282d
    ctx->pc = 0x2750a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2750a4: 0x302d
    ctx->pc = 0x2750a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2750a8: 0xc085298
    ctx->pc = 0x2750A8u;
    SET_GPR_U32(ctx, 31, 0x2750B0u);
    ctx->pc = 0x2750ACu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x214A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAvgPos_0x214a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2750B0u; }
    }
    if (ctx->pc != 0x2750B0u) { return; }
    ctx->pc = 0x2750B0u;
    // 0x2750b0: 0x200202d
    ctx->pc = 0x2750b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2750b4: 0x3c0147c3
    ctx->pc = 0x2750b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x2750b8: 0x34215000
    ctx->pc = 0x2750b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x2750bc: 0x44816000
    ctx->pc = 0x2750bcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2750c0: 0xc093f7c
    ctx->pc = 0x2750C0u;
    SET_GPR_U32(ctx, 31, 0x2750C8u);
    ctx->pc = 0x2750C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x24FDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindClosestWaypoint_0x24fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2750C8u; }
    }
    if (ctx->pc != 0x2750C8u) { return; }
    ctx->pc = 0x2750C8u;
    // 0x2750c8: 0x40802d
    ctx->pc = 0x2750c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2750cc: 0x12000015
    ctx->pc = 0x2750CCu;
    {
        const bool branch_taken_0x2750cc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2750D0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2750cc) {
            ctx->pc = 0x275124u;
            goto label_275124;
        }
    }
    ctx->pc = 0x2750D4u;
    // 0x2750d4: 0x3c020034
    ctx->pc = 0x2750d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2750d8: 0x200202d
    ctx->pc = 0x2750d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2750dc: 0xc0b5494
    ctx->pc = 0x2750DCu;
    SET_GPR_U32(ctx, 31, 0x2750E4u);
    ctx->pc = 0x2750E0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294966204)));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2750E4u; }
    }
    if (ctx->pc != 0x2750E4u) { return; }
    ctx->pc = 0x2750E4u;
    // 0x2750e4: 0x1660000d
    ctx->pc = 0x2750E4u;
    {
        const bool branch_taken_0x2750e4 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x2750E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2750e4) {
            ctx->pc = 0x27511Cu;
            goto label_27511c;
        }
    }
    ctx->pc = 0x2750ECu;
    // 0x2750ec: 0x3c020034
    ctx->pc = 0x2750ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2750f0: 0x8c42fbc4
    ctx->pc = 0x2750f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966212)));
    // 0x2750f4: 0x28420064
    ctx->pc = 0x2750f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 100));
    // 0x2750f8: 0x14400003
    ctx->pc = 0x2750F8u;
    {
        const bool branch_taken_0x2750f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2750FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2750f8) {
            ctx->pc = 0x275108u;
            goto label_275108;
        }
    }
    ctx->pc = 0x275100u;
    // 0x275100: 0x10000005
    ctx->pc = 0x275100u;
    {
        const bool branch_taken_0x275100 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275104u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x275100) {
            ctx->pc = 0x275118u;
            goto label_275118;
        }
    }
    ctx->pc = 0x275108u;
label_275108:
    // 0x275108: 0x8c42fbc4
    ctx->pc = 0x275108u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966212)));
    // 0x27510c: 0x24030001
    ctx->pc = 0x27510cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x275110: 0x28420000
    ctx->pc = 0x275110u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 0));
    // 0x275114: 0x62900a
    ctx->pc = 0x275114u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
label_275118:
    // 0x275118: 0x240202d
    ctx->pc = 0x275118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27511c:
    // 0x27511c: 0xc0941be
    ctx->pc = 0x27511Cu;
    SET_GPR_U32(ctx, 31, 0x275124u);
    ctx->pc = 0x275120u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 114)));
    ctx->pc = 0x2506F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerCamActivate_0x2506f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275124u; }
    }
    if (ctx->pc != 0x275124u) { return; }
    ctx->pc = 0x275124u;
label_275124:
    // 0x275124: 0x3c030034
    ctx->pc = 0x275124u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x275128: 0x24020001
    ctx->pc = 0x275128u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27512c: 0xac62fbcc
    ctx->pc = 0x27512cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966220), GPR_U32(ctx, 2));
    // 0x275130: 0x202d
    ctx->pc = 0x275130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275134:
    // 0x275134: 0x3c020032
    ctx->pc = 0x275134u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x275138: 0x24431bc0
    ctx->pc = 0x275138u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x27513c: 0x0
    ctx->pc = 0x27513cu;
    // NOP
label_275140:
    // 0x275140: 0xa46001d8
    ctx->pc = 0x275140u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 472), (uint16_t)GPR_U32(ctx, 0));
    // 0x275144: 0xa46001da
    ctx->pc = 0x275144u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 474), (uint16_t)GPR_U32(ctx, 0));
    // 0x275148: 0x24840001
    ctx->pc = 0x275148u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x27514c: 0x24632b00
    ctx->pc = 0x27514cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11008));
    // 0x275150: 0x28820004
    ctx->pc = 0x275150u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x275154: 0x1440fffa
    ctx->pc = 0x275154u;
    {
        const bool branch_taken_0x275154 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x275154) {
            ctx->pc = 0x275140u;
            goto label_275140;
        }
    }
    ctx->pc = 0x27515Cu;
    // 0x27515c: 0x3c040034
    ctx->pc = 0x27515cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x275160: 0x3c030031
    ctx->pc = 0x275160u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x275164: 0x8c82fbc8
    ctx->pc = 0x275164u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294966216)));
    // 0x275168: 0x8c63ffbc
    ctx->pc = 0x275168u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x27516c: 0x431021
    ctx->pc = 0x27516cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275170: 0xac82fbc8
    ctx->pc = 0x275170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966216), GPR_U32(ctx, 2));
    // 0x275174: 0x2455ff88
    ctx->pc = 0x275174u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294967176));
    // 0x275178: 0x6a0011c
    ctx->pc = 0x275178u;
    {
        const bool branch_taken_0x275178 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x27517Cu;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 312));
        if (branch_taken_0x275178) {
            ctx->pc = 0x2755ECu;
            goto label_2755ec;
        }
    }
    ctx->pc = 0x275180u;
    // 0x275180: 0x3c020034
    ctx->pc = 0x275180u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x275184: 0x8c42fbd4
    ctx->pc = 0x275184u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966228)));
    // 0x275188: 0x4400092
    ctx->pc = 0x275188u;
    {
        const bool branch_taken_0x275188 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27518Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
        if (branch_taken_0x275188) {
            ctx->pc = 0x2753D4u;
            goto label_2753d4;
        }
    }
    ctx->pc = 0x275190u;
    // 0x275190: 0x10400088
    ctx->pc = 0x275190u;
    {
        const bool branch_taken_0x275190 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275194u;
        SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
        if (branch_taken_0x275190) {
            ctx->pc = 0x2753B4u;
            goto label_2753b4;
        }
    }
    ctx->pc = 0x275198u;
    // 0x275198: 0x2417000a
    ctx->pc = 0x275198u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 10));
    // 0x27519c: 0x2416ffff
    ctx->pc = 0x27519cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2751a0: 0x8e83fbd4
    ctx->pc = 0x2751a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4294966228)));
    // 0x2751a4: 0x0
    ctx->pc = 0x2751a4u;
    // NOP
label_2751a8:
    // 0x2751a8: 0x31080
    ctx->pc = 0x2751a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2751ac: 0x3c04003c
    ctx->pc = 0x2751acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2751b0: 0x24843a60
    ctx->pc = 0x2751b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14944));
    // 0x2751b4: 0x441021
    ctx->pc = 0x2751b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2751b8: 0x8c420000
    ctx->pc = 0x2751b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2751bc: 0x18400076
    ctx->pc = 0x2751BCu;
    {
        const bool branch_taken_0x2751bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2751C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x2751bc) {
            ctx->pc = 0x275398u;
            goto label_275398;
        }
    }
    ctx->pc = 0x2751C4u;
    // 0x2751c4: 0x3c040032
    ctx->pc = 0x2751c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x2751c8: 0x24841bc0
    ctx->pc = 0x2751c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7104));
    // 0x2751cc: 0x800013
    ctx->pc = 0x2751ccu;
    ctx->lo = GPR_U32(ctx, 4);
    // 0x2751d0: 0x70628000
    ctx->pc = 0x2751d0u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2751d4: 0x2404ffff
    ctx->pc = 0x2751d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2751d8: 0x24050018
    ctx->pc = 0x2751d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2751dc: 0x302d
    ctx->pc = 0x2751dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2751e0: 0xc08066c
    ctx->pc = 0x2751E0u;
    SET_GPR_U32(ctx, 31, 0x2751E8u);
    ctx->pc = 0x2751E4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 272));
    ctx->pc = 0x2019B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetScrollText_0x2019b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2751E8u; }
    }
    if (ctx->pc != 0x2751E8u) { return; }
    ctx->pc = 0x2751E8u;
    // 0x2751e8: 0x40982d
    ctx->pc = 0x2751e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2751ec: 0x24040016
    ctx->pc = 0x2751ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22));
    // 0x2751f0: 0x8e050004
    ctx->pc = 0x2751f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2751f4: 0xc08065e
    ctx->pc = 0x2751F4u;
    SET_GPR_U32(ctx, 31, 0x2751FCu);
    ctx->pc = 0x2751F8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201978u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringText_0x201978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2751FCu; }
    }
    if (ctx->pc != 0x2751FCu) { return; }
    ctx->pc = 0x2751FCu;
    // 0x2751fc: 0x40902d
    ctx->pc = 0x2751fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275200: 0x24040017
    ctx->pc = 0x275200u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 23));
    // 0x275204: 0x8e05000c
    ctx->pc = 0x275204u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x275208: 0xc08065e
    ctx->pc = 0x275208u;
    SET_GPR_U32(ctx, 31, 0x275210u);
    ctx->pc = 0x27520Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201978u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringText_0x201978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275210u; }
    }
    if (ctx->pc != 0x275210u) { return; }
    ctx->pc = 0x275210u;
    // 0x275210: 0x40882d
    ctx->pc = 0x275210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275214: 0x8e032ac0
    ctx->pc = 0x275214u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x275218: 0x77001a
    ctx->pc = 0x275218u;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x27521c: 0x1012
    ctx->pc = 0x27521cu;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x275220: 0x52e00001
    ctx->pc = 0x275220u;
    {
        const bool branch_taken_0x275220 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        if (branch_taken_0x275220) {
            ctx->pc = 0x275224u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x275228u;
            goto label_275228;
        }
    }
    ctx->pc = 0x275228u;
label_275228:
    // 0x275228: 0x40302d
    ctx->pc = 0x275228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27522c: 0x24020063
    ctx->pc = 0x27522cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x275230: 0x14620007
    ctx->pc = 0x275230u;
    {
        const bool branch_taken_0x275230 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x275234u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x275230) {
            ctx->pc = 0x275250u;
            goto label_275250;
        }
    }
    ctx->pc = 0x275238u;
    // 0x275238: 0x24040015
    ctx->pc = 0x275238u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21));
    // 0x27523c: 0x282d
    ctx->pc = 0x27523cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275240: 0xc08065e
    ctx->pc = 0x275240u;
    SET_GPR_U32(ctx, 31, 0x275248u);
    ctx->pc = 0x275244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201978u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringText_0x201978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275248u; }
    }
    if (ctx->pc != 0x275248u) { return; }
    ctx->pc = 0x275248u;
    // 0x275248: 0x10000006
    ctx->pc = 0x275248u;
    {
        const bool branch_taken_0x275248 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27524Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x275248) {
            ctx->pc = 0x275264u;
            goto label_275264;
        }
    }
    ctx->pc = 0x275250u;
label_275250:
    // 0x275250: 0x8e05000c
    ctx->pc = 0x275250u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x275254: 0x63043
    ctx->pc = 0x275254u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x275258: 0xc0806a8
    ctx->pc = 0x275258u;
    SET_GPR_U32(ctx, 31, 0x275260u);
    ctx->pc = 0x27525Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringListText_0x201aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275260u; }
    }
    if (ctx->pc != 0x275260u) { return; }
    ctx->pc = 0x275260u;
    // 0x275260: 0x3a0202d
    ctx->pc = 0x275260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_275264:
    // 0x275264: 0x260282d
    ctx->pc = 0x275264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275268: 0x240302d
    ctx->pc = 0x275268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27526c: 0x220382d
    ctx->pc = 0x27526cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275270: 0x8e082ac0
    ctx->pc = 0x275270u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x275274: 0xc0b6252
    ctx->pc = 0x275274u;
    SET_GPR_U32(ctx, 31, 0x27527Cu);
    ctx->pc = 0x275278u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27527Cu; }
    }
    if (ctx->pc != 0x27527Cu) { return; }
    ctx->pc = 0x27527Cu;
    // 0x27527c: 0x3a0202d
    ctx->pc = 0x27527cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275280: 0x24050006
    ctx->pc = 0x275280u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x275284: 0x3c013f2a
    ctx->pc = 0x275284u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16170 << 16));
    // 0x275288: 0x3421c083
    ctx->pc = 0x275288u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49283));
    // 0x27528c: 0x44816000
    ctx->pc = 0x27528cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x275290: 0x153043
    ctx->pc = 0x275290u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 21), 1));
    // 0x275294: 0xc099472
    ctx->pc = 0x275294u;
    SET_GPR_U32(ctx, 31, 0x27529Cu);
    ctx->pc = 0x275298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2651C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CaptionTextSub_0x2651c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27529Cu; }
    }
    if (ctx->pc != 0x27529Cu) { return; }
    ctx->pc = 0x27529Cu;
    // 0x27529c: 0x40902d
    ctx->pc = 0x27529cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2752a0: 0x3c110034
    ctx->pc = 0x2752a0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
    // 0x2752a4: 0x8e22fbe0
    ctx->pc = 0x2752a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294966240)));
    // 0x2752a8: 0x4430007
    ctx->pc = 0x2752A8u;
    {
        const bool branch_taken_0x2752a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2752a8) {
            ctx->pc = 0x2752ACu;
            SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
            ctx->pc = 0x2752C8u;
            goto label_2752c8;
        }
    }
    ctx->pc = 0x2752B0u;
    // 0x2752b0: 0x8e84fbd4
    ctx->pc = 0x2752b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 4294966228)));
    // 0x2752b4: 0x8e05000c
    ctx->pc = 0x2752b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2752b8: 0xc0982d2
    ctx->pc = 0x2752B8u;
    SET_GPR_U32(ctx, 31, 0x2752C0u);
    ctx->pc = 0x2752BCu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    ctx->pc = 0x260B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioExp_0x260b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2752C0u; }
    }
    if (ctx->pc != 0x2752C0u) { return; }
    ctx->pc = 0x2752C0u;
    // 0x2752c0: 0xae22fbe0
    ctx->pc = 0x2752c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294966240), GPR_U32(ctx, 2));
    // 0x2752c4: 0x3c110034
    ctx->pc = 0x2752c4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
label_2752c8:
    // 0x2752c8: 0x8e22fbd8
    ctx->pc = 0x2752c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294966232)));
    // 0x2752cc: 0x443000c
    ctx->pc = 0x2752CCu;
    {
        const bool branch_taken_0x2752cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2752cc) {
            ctx->pc = 0x2752D0u;
            SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
            ctx->pc = 0x275300u;
            goto label_275300;
        }
    }
    ctx->pc = 0x2752D4u;
    // 0x2752d4: 0x2aa200f0
    ctx->pc = 0x2752d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 240));
    // 0x2752d8: 0x54400009
    ctx->pc = 0x2752D8u;
    {
        const bool branch_taken_0x2752d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2752d8) {
            ctx->pc = 0x2752DCu;
            SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
            ctx->pc = 0x275300u;
            goto label_275300;
        }
    }
    ctx->pc = 0x2752E0u;
    // 0x2752e0: 0x202d
    ctx->pc = 0x2752e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2752e4: 0xc09fbae
    ctx->pc = 0x2752E4u;
    SET_GPR_U32(ctx, 31, 0x2752ECu);
    ctx->pc = 0x2752E8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x27EEB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartLevelUpFX_0x27eeb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2752ECu; }
    }
    if (ctx->pc != 0x2752ECu) { return; }
    ctx->pc = 0x2752ECu;
    // 0x2752ec: 0xae22fbd8
    ctx->pc = 0x2752ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294966232), GPR_U32(ctx, 2));
    // 0x2752f0: 0x40202d
    ctx->pc = 0x2752f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2752f4: 0xc09f732
    ctx->pc = 0x2752F4u;
    SET_GPR_U32(ctx, 31, 0x2752FCu);
    ctx->pc = 0x2752F8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    ctx->pc = 0x27DCC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetParent_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2752FCu; }
    }
    if (ctx->pc != 0x2752FCu) { return; }
    ctx->pc = 0x2752FCu;
    // 0x2752fc: 0x3c110034
    ctx->pc = 0x2752fcu;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
label_275300:
    // 0x275300: 0x8e22fbdc
    ctx->pc = 0x275300u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294966236)));
    // 0x275304: 0x441000e
    ctx->pc = 0x275304u;
    {
        const bool branch_taken_0x275304 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x275308u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 270));
        if (branch_taken_0x275304) {
            ctx->pc = 0x275340u;
            goto label_275340;
        }
    }
    ctx->pc = 0x27530Cu;
    // 0x27530c: 0x1440000c
    ctx->pc = 0x27530Cu;
    {
        const bool branch_taken_0x27530c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x275310u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x27530c) {
            ctx->pc = 0x275340u;
            goto label_275340;
        }
    }
    ctx->pc = 0x275314u;
    // 0x275314: 0x8e020004
    ctx->pc = 0x275314u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x275318: 0x21080
    ctx->pc = 0x275318u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x27531c: 0x2463fbf8
    ctx->pc = 0x27531cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966264));
    // 0x275320: 0x431021
    ctx->pc = 0x275320u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275324: 0x202d
    ctx->pc = 0x275324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275328: 0xc09fcda
    ctx->pc = 0x275328u;
    SET_GPR_U32(ctx, 31, 0x275330u);
    ctx->pc = 0x27532Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x27F368u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartGemFX_0x27f368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275330u; }
    }
    if (ctx->pc != 0x275330u) { return; }
    ctx->pc = 0x275330u;
    // 0x275330: 0xae22fbdc
    ctx->pc = 0x275330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294966236), GPR_U32(ctx, 2));
    // 0x275334: 0x40202d
    ctx->pc = 0x275334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275338: 0xc09f732
    ctx->pc = 0x275338u;
    SET_GPR_U32(ctx, 31, 0x275340u);
    ctx->pc = 0x27533Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    ctx->pc = 0x27DCC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetParent_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275340u; }
    }
    if (ctx->pc != 0x275340u) { return; }
    ctx->pc = 0x275340u;
label_275340:
    // 0x275340: 0x1240001c
    ctx->pc = 0x275340u;
    {
        const bool branch_taken_0x275340 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x275344u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 360));
        if (branch_taken_0x275340) {
            ctx->pc = 0x2753B4u;
            goto label_2753b4;
        }
    }
    ctx->pc = 0x275348u;
    // 0x275348: 0x1440001a
    ctx->pc = 0x275348u;
    {
        const bool branch_taken_0x275348 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27534Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
        if (branch_taken_0x275348) {
            ctx->pc = 0x2753B4u;
            goto label_2753b4;
        }
    }
    ctx->pc = 0x275350u;
    // 0x275350: 0xc0887b8
    ctx->pc = 0x275350u;
    SET_GPR_U32(ctx, 31, 0x275358u);
    ctx->pc = 0x275354u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294966240)));
    ctx->pc = 0x221EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundPlaying_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275358u; }
    }
    if (ctx->pc != 0x275358u) { return; }
    ctx->pc = 0x275358u;
    // 0x275358: 0x14400017
    ctx->pc = 0x275358u;
    {
        const bool branch_taken_0x275358 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27535Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x275358) {
            ctx->pc = 0x2753B8u;
            goto label_2753b8;
        }
    }
    ctx->pc = 0x275360u;
    // 0x275360: 0xc099576
    ctx->pc = 0x275360u;
    SET_GPR_U32(ctx, 31, 0x275368u);
    ctx->pc = 0x275364u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2655D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CaptionTextReset_0x2655d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275368u; }
    }
    if (ctx->pc != 0x275368u) { return; }
    ctx->pc = 0x275368u;
    // 0x275368: 0x8e82fbd4
    ctx->pc = 0x275368u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294966228)));
    // 0x27536c: 0x24420001
    ctx->pc = 0x27536cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x275370: 0xae82fbd4
    ctx->pc = 0x275370u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294966228), GPR_U32(ctx, 2));
    // 0x275374: 0x3c030034
    ctx->pc = 0x275374u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x275378: 0x24020078
    ctx->pc = 0x275378u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 120));
    // 0x27537c: 0xac62fbc8
    ctx->pc = 0x27537cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966216), GPR_U32(ctx, 2));
    // 0x275380: 0x3c020034
    ctx->pc = 0x275380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x275384: 0xac56fbd8
    ctx->pc = 0x275384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966232), GPR_U32(ctx, 22));
    // 0x275388: 0x3c020034
    ctx->pc = 0x275388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27538c: 0xac56fbdc
    ctx->pc = 0x27538cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966236), GPR_U32(ctx, 22));
    // 0x275390: 0x10000004
    ctx->pc = 0x275390u;
    {
        const bool branch_taken_0x275390 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275394u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294966240), GPR_U32(ctx, 22));
        if (branch_taken_0x275390) {
            ctx->pc = 0x2753A4u;
            goto label_2753a4;
        }
    }
    ctx->pc = 0x275398u;
label_275398:
    // 0x275398: 0x8e82fbd4
    ctx->pc = 0x275398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294966228)));
    // 0x27539c: 0x24420001
    ctx->pc = 0x27539cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2753a0: 0xae82fbd4
    ctx->pc = 0x2753a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294966228), GPR_U32(ctx, 2));
label_2753a4:
    // 0x2753a4: 0x8e82fbd4
    ctx->pc = 0x2753a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294966228)));
    // 0x2753a8: 0x28420004
    ctx->pc = 0x2753a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x2753ac: 0x1440ff7e
    ctx->pc = 0x2753ACu;
    {
        const bool branch_taken_0x2753ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2753B0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4294966228)));
        if (branch_taken_0x2753ac) {
            ctx->pc = 0x2751A8u;
            goto label_2751a8;
        }
    }
    ctx->pc = 0x2753B4u;
label_2753b4:
    // 0x2753b4: 0x3c040034
    ctx->pc = 0x2753b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
label_2753b8:
    // 0x2753b8: 0x8c83fbd4
    ctx->pc = 0x2753b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294966228)));
    // 0x2753bc: 0x24020004
    ctx->pc = 0x2753bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2753c0: 0x1462008b
    ctx->pc = 0x2753C0u;
    {
        const bool branch_taken_0x2753c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2753C4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
        if (branch_taken_0x2753c0) {
            ctx->pc = 0x2755F0u;
            goto label_2755f0;
        }
    }
    ctx->pc = 0x2753C8u;
    // 0x2753c8: 0x2402ffff
    ctx->pc = 0x2753c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2753cc: 0x10000088
    ctx->pc = 0x2753CCu;
    {
        const bool branch_taken_0x2753cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2753D0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294966228), GPR_U32(ctx, 2));
        if (branch_taken_0x2753cc) {
            ctx->pc = 0x2755F0u;
            goto label_2755f0;
        }
    }
    ctx->pc = 0x2753D4u;
label_2753d4:
    // 0x2753d4: 0x3c020034
    ctx->pc = 0x2753d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2753d8: 0x8c43fbc4
    ctx->pc = 0x2753d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966212)));
    // 0x2753dc: 0x28620064
    ctx->pc = 0x2753dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 100));
    // 0x2753e0: 0x14400039
    ctx->pc = 0x2753E0u;
    {
        const bool branch_taken_0x2753e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2753E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2753e0) {
            ctx->pc = 0x2754C8u;
            goto label_2754c8;
        }
    }
    ctx->pc = 0x2753E8u;
    // 0x2753e8: 0x2471ff9c
    ctx->pc = 0x2753e8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x2753ec: 0x2a22000d
    ctx->pc = 0x2753ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 13));
    // 0x2753f0: 0x1040000f
    ctx->pc = 0x2753F0u;
    {
        const bool branch_taken_0x2753f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2753F4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2753f0) {
            ctx->pc = 0x275430u;
            goto label_275430;
        }
    }
    ctx->pc = 0x2753F8u;
    // 0x2753f8: 0x202d
    ctx->pc = 0x2753f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753fc: 0x3c05003b
    ctx->pc = 0x2753fcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x275400: 0xc080726
    ctx->pc = 0x275400u;
    SET_GPR_U32(ctx, 31, 0x275408u);
    ctx->pc = 0x275404u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294944928));
    ctx->pc = 0x201C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindScrollMessage_0x201c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275408u; }
    }
    if (ctx->pc != 0x275408u) { return; }
    ctx->pc = 0x275408u;
    // 0x275408: 0x40a02d
    ctx->pc = 0x275408u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27540c: 0x3c100034
    ctx->pc = 0x27540cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x275410: 0x8e02fbe0
    ctx->pc = 0x275410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294966240)));
    // 0x275414: 0x1c400020
    ctx->pc = 0x275414u;
    {
        const bool branch_taken_0x275414 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x275418u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x275414) {
            ctx->pc = 0x275498u;
            goto label_275498;
        }
    }
    ctx->pc = 0x27541Cu;
    // 0x27541c: 0xc0984a4
    ctx->pc = 0x27541Cu;
    SET_GPR_U32(ctx, 31, 0x275424u);
    ctx->pc = 0x275420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x261290u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioRuneSpeech_0x261290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275424u; }
    }
    if (ctx->pc != 0x275424u) { return; }
    ctx->pc = 0x275424u;
    // 0x275424: 0x24020001
    ctx->pc = 0x275424u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x275428: 0x1000001b
    ctx->pc = 0x275428u;
    {
        const bool branch_taken_0x275428 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27542Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294966240), GPR_U32(ctx, 2));
        if (branch_taken_0x275428) {
            ctx->pc = 0x275498u;
            goto label_275498;
        }
    }
    ctx->pc = 0x275430u;
label_275430:
    // 0x275430: 0x2402000d
    ctx->pc = 0x275430u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x275434: 0x16220005
    ctx->pc = 0x275434u;
    {
        const bool branch_taken_0x275434 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x275438u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25));
        if (branch_taken_0x275434) {
            ctx->pc = 0x27544Cu;
            goto label_27544c;
        }
    }
    ctx->pc = 0x27543Cu;
    // 0x27543c: 0x202d
    ctx->pc = 0x27543cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275440: 0x3c05003b
    ctx->pc = 0x275440u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x275444: 0x10000011
    ctx->pc = 0x275444u;
    {
        const bool branch_taken_0x275444 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275448u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294944944));
        if (branch_taken_0x275444) {
            ctx->pc = 0x27548Cu;
            goto label_27548c;
        }
    }
    ctx->pc = 0x27544Cu;
label_27544c:
    // 0x27544c: 0x16220005
    ctx->pc = 0x27544Cu;
    {
        const bool branch_taken_0x27544c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x275450u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 26));
        if (branch_taken_0x27544c) {
            ctx->pc = 0x275464u;
            goto label_275464;
        }
    }
    ctx->pc = 0x275454u;
    // 0x275454: 0x202d
    ctx->pc = 0x275454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275458: 0x3c05003b
    ctx->pc = 0x275458u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x27545c: 0x1000000b
    ctx->pc = 0x27545Cu;
    {
        const bool branch_taken_0x27545c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275460u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294944960));
        if (branch_taken_0x27545c) {
            ctx->pc = 0x27548Cu;
            goto label_27548c;
        }
    }
    ctx->pc = 0x275464u;
label_275464:
    // 0x275464: 0x16220005
    ctx->pc = 0x275464u;
    {
        const bool branch_taken_0x275464 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x275468u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
        if (branch_taken_0x275464) {
            ctx->pc = 0x27547Cu;
            goto label_27547c;
        }
    }
    ctx->pc = 0x27546Cu;
    // 0x27546c: 0x202d
    ctx->pc = 0x27546cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275470: 0x3c05003b
    ctx->pc = 0x275470u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x275474: 0x10000005
    ctx->pc = 0x275474u;
    {
        const bool branch_taken_0x275474 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275478u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294944976));
        if (branch_taken_0x275474) {
            ctx->pc = 0x27548Cu;
            goto label_27548c;
        }
    }
    ctx->pc = 0x27547Cu;
label_27547c:
    // 0x27547c: 0x16220006
    ctx->pc = 0x27547Cu;
    {
        const bool branch_taken_0x27547c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x275480u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27547c) {
            ctx->pc = 0x275498u;
            goto label_275498;
        }
    }
    ctx->pc = 0x275484u;
    // 0x275484: 0x3c05003b
    ctx->pc = 0x275484u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x275488: 0x24a5a8e0
    ctx->pc = 0x275488u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294944992));
label_27548c:
    // 0x27548c: 0xc080726
    ctx->pc = 0x27548Cu;
    SET_GPR_U32(ctx, 31, 0x275494u);
    ctx->pc = 0x275490u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x201C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindScrollMessage_0x201c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275494u; }
    }
    if (ctx->pc != 0x275494u) { return; }
    ctx->pc = 0x275494u;
    // 0x275494: 0x40a02d
    ctx->pc = 0x275494u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_275498:
    // 0x275498: 0x6800043
    ctx->pc = 0x275498u;
    {
        const bool branch_taken_0x275498 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x27549Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x275498) {
            ctx->pc = 0x2755A8u;
            goto label_2755a8;
        }
    }
    ctx->pc = 0x2754A0u;
    // 0x2754a0: 0x16220038
    ctx->pc = 0x2754A0u;
    {
        const bool branch_taken_0x2754a0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2754A4u;
        SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
        if (branch_taken_0x2754a0) {
            ctx->pc = 0x275584u;
            goto label_275584;
        }
    }
    ctx->pc = 0x2754A8u;
    // 0x2754a8: 0x8e02fbe0
    ctx->pc = 0x2754a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294966240)));
    // 0x2754ac: 0x28420002
    ctx->pc = 0x2754acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x2754b0: 0x10400034
    ctx->pc = 0x2754B0u;
    {
        const bool branch_taken_0x2754b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2754b0) {
            ctx->pc = 0x275584u;
            goto label_275584;
        }
    }
    ctx->pc = 0x2754B8u;
    // 0x2754b8: 0xc0984a4
    ctx->pc = 0x2754B8u;
    SET_GPR_U32(ctx, 31, 0x2754C0u);
    ctx->pc = 0x2754BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x261290u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioRuneSpeech_0x261290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2754C0u; }
    }
    if (ctx->pc != 0x2754C0u) { return; }
    ctx->pc = 0x2754C0u;
    // 0x2754c0: 0x1000002f
    ctx->pc = 0x2754C0u;
    {
        const bool branch_taken_0x2754c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2754C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2754c0) {
            ctx->pc = 0x275580u;
            goto label_275580;
        }
    }
    ctx->pc = 0x2754C8u;
label_2754c8:
    // 0x2754c8: 0x8c42fbc4
    ctx->pc = 0x2754c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966212)));
    // 0x2754cc: 0x440002d
    ctx->pc = 0x2754CCu;
    {
        const bool branch_taken_0x2754cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2754cc) {
            ctx->pc = 0x275584u;
            goto label_275584;
        }
    }
    ctx->pc = 0x2754D4u;
    // 0x2754d4: 0x40882d
    ctx->pc = 0x2754d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2754d8: 0x2a220009
    ctx->pc = 0x2754d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 9));
    // 0x2754dc: 0x1040000f
    ctx->pc = 0x2754DCu;
    {
        const bool branch_taken_0x2754dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2754E0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2754dc) {
            ctx->pc = 0x27551Cu;
            goto label_27551c;
        }
    }
    ctx->pc = 0x2754E4u;
    // 0x2754e4: 0x202d
    ctx->pc = 0x2754e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2754e8: 0x3c05003b
    ctx->pc = 0x2754e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2754ec: 0xc080726
    ctx->pc = 0x2754ECu;
    SET_GPR_U32(ctx, 31, 0x2754F4u);
    ctx->pc = 0x2754F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294945008));
    ctx->pc = 0x201C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindScrollMessage_0x201c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2754F4u; }
    }
    if (ctx->pc != 0x2754F4u) { return; }
    ctx->pc = 0x2754F4u;
    // 0x2754f4: 0x40a02d
    ctx->pc = 0x2754f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2754f8: 0x3c100034
    ctx->pc = 0x2754f8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x2754fc: 0x8e02fbe0
    ctx->pc = 0x2754fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294966240)));
    // 0x275500: 0x1c400014
    ctx->pc = 0x275500u;
    {
        const bool branch_taken_0x275500 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x275500) {
            ctx->pc = 0x275554u;
            goto label_275554;
        }
    }
    ctx->pc = 0x275508u;
    // 0x275508: 0xc098456
    ctx->pc = 0x275508u;
    SET_GPR_U32(ctx, 31, 0x275510u);
    ctx->pc = 0x27550Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x261158u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioShardSpeech_0x261158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275510u; }
    }
    if (ctx->pc != 0x275510u) { return; }
    ctx->pc = 0x275510u;
    // 0x275510: 0x24020001
    ctx->pc = 0x275510u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x275514: 0x1000000f
    ctx->pc = 0x275514u;
    {
        const bool branch_taken_0x275514 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275518u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294966240), GPR_U32(ctx, 2));
        if (branch_taken_0x275514) {
            ctx->pc = 0x275554u;
            goto label_275554;
        }
    }
    ctx->pc = 0x27551Cu;
label_27551c:
    // 0x27551c: 0x2402000f
    ctx->pc = 0x27551cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x275520: 0x16220005
    ctx->pc = 0x275520u;
    {
        const bool branch_taken_0x275520 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x275524u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x275520) {
            ctx->pc = 0x275538u;
            goto label_275538;
        }
    }
    ctx->pc = 0x275528u;
    // 0x275528: 0x202d
    ctx->pc = 0x275528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27552c: 0x3c05003b
    ctx->pc = 0x27552cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x275530: 0x10000005
    ctx->pc = 0x275530u;
    {
        const bool branch_taken_0x275530 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275534u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294945024));
        if (branch_taken_0x275530) {
            ctx->pc = 0x275548u;
            goto label_275548;
        }
    }
    ctx->pc = 0x275538u;
label_275538:
    // 0x275538: 0x16220006
    ctx->pc = 0x275538u;
    {
        const bool branch_taken_0x275538 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x27553Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x275538) {
            ctx->pc = 0x275554u;
            goto label_275554;
        }
    }
    ctx->pc = 0x275540u;
    // 0x275540: 0x3c05003b
    ctx->pc = 0x275540u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x275544: 0x24a5a910
    ctx->pc = 0x275544u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294945040));
label_275548:
    // 0x275548: 0xc080726
    ctx->pc = 0x275548u;
    SET_GPR_U32(ctx, 31, 0x275550u);
    ctx->pc = 0x27554Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x201C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindScrollMessage_0x201c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275550u; }
    }
    if (ctx->pc != 0x275550u) { return; }
    ctx->pc = 0x275550u;
    // 0x275550: 0x40a02d
    ctx->pc = 0x275550u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_275554:
    // 0x275554: 0x6800014
    ctx->pc = 0x275554u;
    {
        const bool branch_taken_0x275554 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x275558u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x275554) {
            ctx->pc = 0x2755A8u;
            goto label_2755a8;
        }
    }
    ctx->pc = 0x27555Cu;
    // 0x27555c: 0x16220009
    ctx->pc = 0x27555Cu;
    {
        const bool branch_taken_0x27555c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x275560u;
        SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
        if (branch_taken_0x27555c) {
            ctx->pc = 0x275584u;
            goto label_275584;
        }
    }
    ctx->pc = 0x275564u;
    // 0x275564: 0x8e02fbe0
    ctx->pc = 0x275564u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294966240)));
    // 0x275568: 0x28420002
    ctx->pc = 0x275568u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x27556c: 0x10400005
    ctx->pc = 0x27556Cu;
    {
        const bool branch_taken_0x27556c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x27556c) {
            ctx->pc = 0x275584u;
            goto label_275584;
        }
    }
    ctx->pc = 0x275574u;
    // 0x275574: 0xc098456
    ctx->pc = 0x275574u;
    SET_GPR_U32(ctx, 31, 0x27557Cu);
    ctx->pc = 0x275578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x261158u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioShardSpeech_0x261158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27557Cu; }
    }
    if (ctx->pc != 0x27557Cu) { return; }
    ctx->pc = 0x27557Cu;
    // 0x27557c: 0x24020002
    ctx->pc = 0x27557cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_275580:
    // 0x275580: 0xae02fbe0
    ctx->pc = 0x275580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966240), GPR_U32(ctx, 2));
label_275584:
    // 0x275584: 0x6800008
    ctx->pc = 0x275584u;
    {
        const bool branch_taken_0x275584 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x275588u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x275584) {
            ctx->pc = 0x2755A8u;
            goto label_2755a8;
        }
    }
    ctx->pc = 0x27558Cu;
    // 0x27558c: 0x280282d
    ctx->pc = 0x27558cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275590: 0x220302d
    ctx->pc = 0x275590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275594: 0x153843
    ctx->pc = 0x275594u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 21), 1));
    // 0x275598: 0xc099528
    ctx->pc = 0x275598u;
    SET_GPR_U32(ctx, 31, 0x2755A0u);
    ctx->pc = 0x27559Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2654A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CaptionText_0x2654a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2755A0u; }
    }
    if (ctx->pc != 0x2755A0u) { return; }
    ctx->pc = 0x2755A0u;
    // 0x2755a0: 0x10000002
    ctx->pc = 0x2755A0u;
    {
        const bool branch_taken_0x2755a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2755A4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2755a0) {
            ctx->pc = 0x2755ACu;
            goto label_2755ac;
        }
    }
    ctx->pc = 0x2755A8u;
label_2755a8:
    // 0x2755a8: 0x24120001
    ctx->pc = 0x2755a8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_2755ac:
    // 0x2755ac: 0x12400006
    ctx->pc = 0x2755ACu;
    {
        const bool branch_taken_0x2755ac = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2755B0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x2755ac) {
            ctx->pc = 0x2755C8u;
            goto label_2755c8;
        }
    }
    ctx->pc = 0x2755B4u;
    // 0x2755b4: 0x3c020031
    ctx->pc = 0x2755b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2755b8: 0xc460fbc0
    ctx->pc = 0x2755b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2755bc: 0xc441ffa8
    ctx->pc = 0x2755bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2755c0: 0x46010001
    ctx->pc = 0x2755c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2755c4: 0xe460fbc0
    ctx->pc = 0x2755c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294966208), bits); }
label_2755c8:
    // 0x2755c8: 0x3c020034
    ctx->pc = 0x2755c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2755cc: 0xc441fbc0
    ctx->pc = 0x2755ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2755d0: 0x44800000
    ctx->pc = 0x2755d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2755d4: 0x46000836
    ctx->pc = 0x2755d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2755d8: 0x0
    ctx->pc = 0x2755d8u;
    // NOP
    // 0x2755dc: 0x45000004
    ctx->pc = 0x2755DCu;
    {
        const bool branch_taken_0x2755dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2755E0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
        if (branch_taken_0x2755dc) {
            ctx->pc = 0x2755F0u;
            goto label_2755f0;
        }
    }
    ctx->pc = 0x2755E4u;
    // 0x2755e4: 0xc09d302
    ctx->pc = 0x2755E4u;
    SET_GPR_U32(ctx, 31, 0x2755ECu);
    ctx->pc = 0x274C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerSpeechEnd_0x274c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2755ECu; }
    }
    if (ctx->pc != 0x2755ECu) { return; }
    ctx->pc = 0x2755ECu;
label_2755ec:
    // 0x2755ec: 0xdfbf01b0
    ctx->pc = 0x2755ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_2755f0:
    // 0x2755f0: 0xdfbe01a0
    ctx->pc = 0x2755f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_2755f4:
    // 0x2755f4: 0xdfb70190
    ctx->pc = 0x2755f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2755f8: 0xdfb60180
    ctx->pc = 0x2755f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2755fc: 0xdfb50170
    ctx->pc = 0x2755fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x275600: 0xdfb40160
    ctx->pc = 0x275600u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x275604: 0xdfb30150
    ctx->pc = 0x275604u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x275608: 0xdfb20140
    ctx->pc = 0x275608u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x27560c: 0xdfb10130
    ctx->pc = 0x27560cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x275610: 0xdfb00120
    ctx->pc = 0x275610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x275614: 0x3e00008
    ctx->pc = 0x275614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275618u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x275040u: goto label_275040;
            case 0x275060u: goto label_275060;
            case 0x275080u: goto label_275080;
            case 0x275108u: goto label_275108;
            case 0x275118u: goto label_275118;
            case 0x27511Cu: goto label_27511c;
            case 0x275124u: goto label_275124;
            case 0x275134u: goto label_275134;
            case 0x275140u: goto label_275140;
            case 0x2751A8u: goto label_2751a8;
            case 0x275228u: goto label_275228;
            case 0x275250u: goto label_275250;
            case 0x275264u: goto label_275264;
            case 0x2752C8u: goto label_2752c8;
            case 0x275300u: goto label_275300;
            case 0x275340u: goto label_275340;
            case 0x275398u: goto label_275398;
            case 0x2753A4u: goto label_2753a4;
            case 0x2753B4u: goto label_2753b4;
            case 0x2753B8u: goto label_2753b8;
            case 0x2753D4u: goto label_2753d4;
            case 0x275430u: goto label_275430;
            case 0x27544Cu: goto label_27544c;
            case 0x275464u: goto label_275464;
            case 0x27547Cu: goto label_27547c;
            case 0x27548Cu: goto label_27548c;
            case 0x275498u: goto label_275498;
            case 0x2754C8u: goto label_2754c8;
            case 0x27551Cu: goto label_27551c;
            case 0x275538u: goto label_275538;
            case 0x275548u: goto label_275548;
            case 0x275554u: goto label_275554;
            case 0x275580u: goto label_275580;
            case 0x275584u: goto label_275584;
            case 0x2755A8u: goto label_2755a8;
            case 0x2755ACu: goto label_2755ac;
            case 0x2755C8u: goto label_2755c8;
            case 0x2755ECu: goto label_2755ec;
            case 0x2755F0u: goto label_2755f0;
            case 0x2755F4u: goto label_2755f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27561Cu;
}
