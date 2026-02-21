#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_player_pos
// Address: 0x24cf50 - 0x24d794
void get_player_pos_0x24cf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24cf50u;

    // 0x24cf50: 0x27bdfeb0
    ctx->pc = 0x24cf50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x24cf54: 0xffbf0120
    ctx->pc = 0x24cf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x24cf58: 0xffbe0110
    ctx->pc = 0x24cf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x24cf5c: 0xffb70100
    ctx->pc = 0x24cf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 23));
    // 0x24cf60: 0xffb600f0
    ctx->pc = 0x24cf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x24cf64: 0xffb500e0
    ctx->pc = 0x24cf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 21));
    // 0x24cf68: 0xffb400d0
    ctx->pc = 0x24cf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x24cf6c: 0xffb300c0
    ctx->pc = 0x24cf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 19));
    // 0x24cf70: 0xffb200b0
    ctx->pc = 0x24cf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x24cf74: 0xffb100a0
    ctx->pc = 0x24cf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
    // 0x24cf78: 0xffb00090
    ctx->pc = 0x24cf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x24cf7c: 0xe7b70148
    ctx->pc = 0x24cf7cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24cf80: 0xe7b60140
    ctx->pc = 0x24cf80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24cf84: 0xe7b50138
    ctx->pc = 0x24cf84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x24cf88: 0xe7b40130
    ctx->pc = 0x24cf88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x24cf8c: 0x80b82d
    ctx->pc = 0x24cf8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cf90: 0x2402ffff
    ctx->pc = 0x24cf90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24cf94: 0xafa20088
    ctx->pc = 0x24cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x24cf98: 0x2403ffff
    ctx->pc = 0x24cf98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24cf9c: 0xafa3008c
    ctx->pc = 0x24cf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x24cfa0: 0xafa20080
    ctx->pc = 0x24cfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x24cfa4: 0x3c020034
    ctx->pc = 0x24cfa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24cfa8: 0x8c42e7f0
    ctx->pc = 0x24cfa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x24cfac: 0x44001e9
    ctx->pc = 0x24CFACu;
    {
        const bool branch_taken_0x24cfac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24CFB0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24cfac) {
            ctx->pc = 0x24D754u;
            goto label_24d754;
        }
    }
    ctx->pc = 0x24CFB4u;
    // 0x24cfb4: 0x24032b00
    ctx->pc = 0x24cfb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x24cfb8: 0x2e31818
    ctx->pc = 0x24cfb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24cfbc: 0x3c020032
    ctx->pc = 0x24cfbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x24cfc0: 0x24421bc0
    ctx->pc = 0x24cfc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x24cfc4: 0x629821
    ctx->pc = 0x24cfc4u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24cfc8: 0xae60089c
    ctx->pc = 0x24cfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2204), GPR_U32(ctx, 0));
    // 0x24cfcc: 0x8e6300fc
    ctx->pc = 0x24cfccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
    // 0x24cfd0: 0x24020001
    ctx->pc = 0x24cfd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cfd4: 0x10620003
    ctx->pc = 0x24CFD4u;
    {
        const bool branch_taken_0x24cfd4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x24CFD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x24cfd4) {
            ctx->pc = 0x24CFE4u;
            goto label_24cfe4;
        }
    }
    ctx->pc = 0x24CFDCu;
    // 0x24cfdc: 0x146201de
    ctx->pc = 0x24CFDCu;
    {
        const bool branch_taken_0x24cfdc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x24CFE0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
        if (branch_taken_0x24cfdc) {
            ctx->pc = 0x24D758u;
            goto label_24d758;
        }
    }
    ctx->pc = 0x24CFE4u;
label_24cfe4:
    // 0x24cfe4: 0x26640020
    ctx->pc = 0x24cfe4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 32));
    // 0x24cfe8: 0x2665081c
    ctx->pc = 0x24cfe8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 2076));
    // 0x24cfec: 0xc080d02
    ctx->pc = 0x24CFECu;
    SET_GPR_U32(ctx, 31, 0x24CFF4u);
    ctx->pc = 0x24CFF0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 2064));
    ctx->pc = 0x203408u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetObjWorldMat_0x203408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CFF4u; }
    }
    if (ctx->pc != 0x24CFF4u) { return; }
    ctx->pc = 0x24CFF4u;
    // 0x24cff4: 0xc0b5c24
    ctx->pc = 0x24CFF4u;
    SET_GPR_U32(ctx, 31, 0x24CFFCu);
    ctx->pc = 0x24CFF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CFFCu; }
    }
    if (ctx->pc != 0x24CFFCu) { return; }
    ctx->pc = 0x24CFFCu;
    // 0x24cffc: 0xafa20084
    ctx->pc = 0x24cffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x24d000: 0x3c020031
    ctx->pc = 0x24d000u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x24d004: 0x8c430018
    ctx->pc = 0x24d004u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x24d008: 0x2402400c
    ctx->pc = 0x24d008u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16396));
    // 0x24d00c: 0x10620004
    ctx->pc = 0x24D00Cu;
    {
        const bool branch_taken_0x24d00c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x24D010u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x24d00c) {
            ctx->pc = 0x24D020u;
            goto label_24d020;
        }
    }
    ctx->pc = 0x24D014u;
    // 0x24d014: 0x8c42080c
    ctx->pc = 0x24d014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x24d018: 0x10400080
    ctx->pc = 0x24D018u;
    {
        const bool branch_taken_0x24d018 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D01Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x24d018) {
            ctx->pc = 0x24D21Cu;
            goto label_24d21c;
        }
    }
    ctx->pc = 0x24D020u;
label_24d020:
    // 0x24d020: 0x1ae00019
    ctx->pc = 0x24D020u;
    {
        const bool branch_taken_0x24d020 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x24D024u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24d020) {
            ctx->pc = 0x24D088u;
            goto label_24d088;
        }
    }
    ctx->pc = 0x24D028u;
    // 0x24d028: 0x3c020032
    ctx->pc = 0x24d028u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x24d02c: 0x24471bc0
    ctx->pc = 0x24d02cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x24d030: 0x24032b00
    ctx->pc = 0x24d030u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x24d034: 0x24050001
    ctx->pc = 0x24d034u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d038: 0x24040004
    ctx->pc = 0x24d038u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x24d03c: 0x2233018
    ctx->pc = 0x24d03cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_24d040:
    // 0x24d040: 0xc71021
    ctx->pc = 0x24d040u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x24d044: 0x8c4200fc
    ctx->pc = 0x24d044u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x24d048: 0x10450004
    ctx->pc = 0x24D048u;
    {
        const bool branch_taken_0x24d048 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x24D04Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x24d048) {
            ctx->pc = 0x24D05Cu;
            goto label_24d05c;
        }
    }
    ctx->pc = 0x24D050u;
    // 0x24d050: 0x54440008
    ctx->pc = 0x24D050u;
    {
        const bool branch_taken_0x24d050 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x24d050) {
            ctx->pc = 0x24D054u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24D058u;
    // 0x24d058: 0x2233018
    ctx->pc = 0x24d058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_24d05c:
    // 0x24d05c: 0xc71021
    ctx->pc = 0x24d05cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x24d060: 0x9442093c
    ctx->pc = 0x24d060u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2364)));
    // 0x24d064: 0x30420020
    ctx->pc = 0x24d064u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x24d068: 0x50400008
    ctx->pc = 0x24D068u;
    {
        const bool branch_taken_0x24d068 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24d068) {
            ctx->pc = 0x24D06Cu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
            ctx->pc = 0x24D08Cu;
            goto label_24d08c;
        }
    }
    ctx->pc = 0x24D070u;
    // 0x24d070: 0x26310001
    ctx->pc = 0x24d070u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_24d074:
    // 0x24d074: 0x2a220004
    ctx->pc = 0x24d074u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x24d078: 0x10400003
    ctx->pc = 0x24D078u;
    {
        const bool branch_taken_0x24d078 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D07Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 23)));
        if (branch_taken_0x24d078) {
            ctx->pc = 0x24D088u;
            goto label_24d088;
        }
    }
    ctx->pc = 0x24D080u;
    // 0x24d080: 0x5440ffef
    ctx->pc = 0x24D080u;
    {
        const bool branch_taken_0x24d080 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24d080) {
            ctx->pc = 0x24D084u;
            { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
            ctx->pc = 0x24D040u;
            goto label_24d040;
        }
    }
    ctx->pc = 0x24D088u;
label_24d088:
    // 0x24d088: 0x2403fffe
    ctx->pc = 0x24d088u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
label_24d08c:
    // 0x24d08c: 0x3a420001
    ctx->pc = 0x24d08cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 18), 1));
    // 0x24d090: 0x8fa4008c
    ctx->pc = 0x24d090u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x24d094: 0x62200a
    ctx->pc = 0x24d094u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x24d098: 0x1237005f
    ctx->pc = 0x24D098u;
    {
        const bool branch_taken_0x24d098 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 23));
        ctx->pc = 0x24D09Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 4));
        if (branch_taken_0x24d098) {
            ctx->pc = 0x24D218u;
            goto label_24d218;
        }
    }
    ctx->pc = 0x24D0A0u;
    // 0x24d0a0: 0x2a220004
    ctx->pc = 0x24d0a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x24d0a4: 0x1040005c
    ctx->pc = 0x24D0A4u;
    {
        const bool branch_taken_0x24d0a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D0A8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x24d0a4) {
            ctx->pc = 0x24D218u;
            goto label_24d218;
        }
    }
    ctx->pc = 0x24D0ACu;
    // 0x24d0ac: 0x2231818
    ctx->pc = 0x24d0acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24d0b0: 0x3c020032
    ctx->pc = 0x24d0b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x24d0b4: 0x24421bc0
    ctx->pc = 0x24d0b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x24d0b8: 0x628021
    ctx->pc = 0x24d0b8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d0bc: 0xc6000054
    ctx->pc = 0x24d0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d0c0: 0xe600088c
    ctx->pc = 0x24d0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2188), bits); }
    // 0x24d0c4: 0x26040020
    ctx->pc = 0x24d0c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    // 0x24d0c8: 0xc0b5494
    ctx->pc = 0x24D0C8u;
    SET_GPR_U32(ctx, 31, 0x24D0D0u);
    ctx->pc = 0x24D0CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 32));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D0D0u; }
    }
    if (ctx->pc != 0x24D0D0u) { return; }
    ctx->pc = 0x24D0D0u;
    // 0x24d0d0: 0xc60000d8
    ctx->pc = 0x24d0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d0d4: 0xe66000d8
    ctx->pc = 0x24d0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 216), bits); }
    // 0x24d0d8: 0xc60000dc
    ctx->pc = 0x24d0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d0dc: 0xe66000dc
    ctx->pc = 0x24d0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 220), bits); }
    // 0x24d0e0: 0xc60000e0
    ctx->pc = 0x24d0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d0e4: 0xe66000e0
    ctx->pc = 0x24d0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 224), bits); }
    // 0x24d0e8: 0xc6010828
    ctx->pc = 0x24d0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d0ec: 0x3c013f00
    ctx->pc = 0x24d0ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x24d0f0: 0x44810000
    ctx->pc = 0x24d0f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24d0f4: 0x46000d00
    ctx->pc = 0x24d0f4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d0f8: 0xc6000070
    ctx->pc = 0x24d0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d0fc: 0xe7a00010
    ctx->pc = 0x24d0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24d100: 0xc6000074
    ctx->pc = 0x24d100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d104: 0xe7a00014
    ctx->pc = 0x24d104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24d108: 0xc6000078
    ctx->pc = 0x24d108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d10c: 0xe7a00018
    ctx->pc = 0x24d10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x24d110: 0x3c020033
    ctx->pc = 0x24d110u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24d114: 0x24424770
    ctx->pc = 0x24d114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18288));
    // 0x24d118: 0x1728c0
    ctx->pc = 0x24d118u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 23), 3));
    // 0x24d11c: 0xa23021
    ctx->pc = 0x24d11cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24d120: 0x1118c0
    ctx->pc = 0x24d120u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 3));
    // 0x24d124: 0x622021
    ctx->pc = 0x24d124u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d128: 0xc4c10000
    ctx->pc = 0x24d128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d12c: 0xc4800000
    ctx->pc = 0x24d12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d130: 0x46000d81
    ctx->pc = 0x24d130u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24d134: 0x4614b582
    ctx->pc = 0x24d134u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x24d138: 0x24420004
    ctx->pc = 0x24d138u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x24d13c: 0xa22821
    ctx->pc = 0x24d13cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24d140: 0x621821
    ctx->pc = 0x24d140u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d144: 0xc4a10000
    ctx->pc = 0x24d144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d148: 0xc4600000
    ctx->pc = 0x24d148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d14c: 0x46000dc1
    ctx->pc = 0x24d14cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24d150: 0x3c020034
    ctx->pc = 0x24d150u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24d154: 0x8c428b74
    ctx->pc = 0x24d154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937460)));
    // 0x24d158: 0x4480a800
    ctx->pc = 0x24d158u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 0);
    // 0x24d15c: 0x10400002
    ctx->pc = 0x24D15Cu;
    {
        const bool branch_taken_0x24d15c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D160u;
        ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
        if (branch_taken_0x24d15c) {
            ctx->pc = 0x24D168u;
            goto label_24d168;
        }
    }
    ctx->pc = 0x24D164u;
    // 0x24d164: 0xc4550024
    ctx->pc = 0x24d164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_24d168:
    // 0x24d168: 0xc0b9dce
    ctx->pc = 0x24D168u;
    SET_GPR_U32(ctx, 31, 0x24D170u);
    ctx->pc = 0x24D16Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D170u; }
    }
    if (ctx->pc != 0x24D170u) { return; }
    ctx->pc = 0x24D170u;
    // 0x24d170: 0x4600b502
    ctx->pc = 0x24d170u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x24d174: 0xc0b9e4a
    ctx->pc = 0x24D174u;
    SET_GPR_U32(ctx, 31, 0x24D17Cu);
    ctx->pc = 0x24D178u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D17Cu; }
    }
    if (ctx->pc != 0x24D17Cu) { return; }
    ctx->pc = 0x24D17Cu;
    // 0x24d17c: 0x4600b802
    ctx->pc = 0x24d17cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x24d180: 0x4600a500
    ctx->pc = 0x24d180u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x24d184: 0xc7a00010
    ctx->pc = 0x24d184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d188: 0x4600a500
    ctx->pc = 0x24d188u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x24d18c: 0xe7b40010
    ctx->pc = 0x24d18cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24d190: 0x4600b507
    ctx->pc = 0x24d190u;
    ctx->f[20] = FPU_NEG_S(ctx->f[22]);
    // 0x24d194: 0xc0b9e4a
    ctx->pc = 0x24D194u;
    SET_GPR_U32(ctx, 31, 0x24D19Cu);
    ctx->pc = 0x24D198u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D19Cu; }
    }
    if (ctx->pc != 0x24D19Cu) { return; }
    ctx->pc = 0x24D19Cu;
    // 0x24d19c: 0x4600a502
    ctx->pc = 0x24d19cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x24d1a0: 0xc0b9dce
    ctx->pc = 0x24D1A0u;
    SET_GPR_U32(ctx, 31, 0x24D1A8u);
    ctx->pc = 0x24D1A4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D1A8u; }
    }
    if (ctx->pc != 0x24D1A8u) { return; }
    ctx->pc = 0x24D1A8u;
    // 0x24d1a8: 0x4600b802
    ctx->pc = 0x24d1a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x24d1ac: 0x4600a500
    ctx->pc = 0x24d1acu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x24d1b0: 0xc7a00018
    ctx->pc = 0x24d1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d1b4: 0x4600a500
    ctx->pc = 0x24d1b4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x24d1b8: 0xe7b40018
    ctx->pc = 0x24d1b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x24d1bc: 0x200202d
    ctx->pc = 0x24d1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d1c0: 0x260282d
    ctx->pc = 0x24d1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d1c4: 0x27a60010
    ctx->pc = 0x24d1c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x24d1c8: 0x27a70020
    ctx->pc = 0x24d1c8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d1cc: 0x27a80080
    ctx->pc = 0x24d1ccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 128));
    // 0x24d1d0: 0xc09330c
    ctx->pc = 0x24D1D0u;
    SET_GPR_U32(ctx, 31, 0x24D1D8u);
    ctx->pc = 0x24D1D4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x24CC30u;
    {
        const uint32_t __entryPc = ctx->pc;
        try_location_0x24cc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D1D8u; }
    }
    if (ctx->pc != 0x24D1D8u) { return; }
    ctx->pc = 0x24D1D8u;
    // 0x24d1d8: 0x10400009
    ctx->pc = 0x24D1D8u;
    {
        const bool branch_taken_0x24d1d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D1DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x24d1d8) {
            ctx->pc = 0x24D200u;
            goto label_24d200;
        }
    }
    ctx->pc = 0x24D1E0u;
    // 0x24d1e0: 0x1000000d
    ctx->pc = 0x24D1E0u;
    {
        const bool branch_taken_0x24d1e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D1E4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 17));
        if (branch_taken_0x24d1e0) {
            ctx->pc = 0x24D218u;
            goto label_24d218;
        }
    }
    ctx->pc = 0x24D1E8u;
label_24d1e8:
    // 0x24d1e8: 0x8e640080
    ctx->pc = 0x24d1e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x24d1ec: 0xc0b3f94
    ctx->pc = 0x24D1ECu;
    SET_GPR_U32(ctx, 31, 0x24D1F4u);
    ctx->pc = 0x24D1F0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 116)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D1F4u; }
    }
    if (ctx->pc != 0x24D1F4u) { return; }
    ctx->pc = 0x24D1F4u;
    // 0x24d1f4: 0x8e02089c
    ctx->pc = 0x24d1f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2204)));
    // 0x24d1f8: 0x10000089
    ctx->pc = 0x24D1F8u;
    {
        const bool branch_taken_0x24d1f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D1FCu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 2204), GPR_U32(ctx, 2));
        if (branch_taken_0x24d1f8) {
            ctx->pc = 0x24D420u;
            goto label_24d420;
        }
    }
    ctx->pc = 0x24D200u;
label_24d200:
    // 0x24d200: 0x16420006
    ctx->pc = 0x24D200u;
    {
        const bool branch_taken_0x24d200 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x24D204u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x24d200) {
            ctx->pc = 0x24D21Cu;
            goto label_24d21c;
        }
    }
    ctx->pc = 0x24D208u;
    // 0x24d208: 0x26040020
    ctx->pc = 0x24d208u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    // 0x24d20c: 0xc0b5494
    ctx->pc = 0x24D20Cu;
    SET_GPR_U32(ctx, 31, 0x24D214u);
    ctx->pc = 0x24D210u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 32));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D214u; }
    }
    if (ctx->pc != 0x24D214u) { return; }
    ctx->pc = 0x24D214u;
    // 0x24d214: 0xafb1008c
    ctx->pc = 0x24d214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 17));
label_24d218:
    // 0x24d218: 0x2402ffff
    ctx->pc = 0x24d218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_24d21c:
    // 0x24d21c: 0x8fa6008c
    ctx->pc = 0x24d21cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x24d220: 0x14c20080
    ctx->pc = 0x24D220u;
    {
        const bool branch_taken_0x24d220 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x24D224u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x24d220) {
            ctx->pc = 0x24D424u;
            goto label_24d424;
        }
    }
    ctx->pc = 0x24D228u;
    // 0x24d228: 0xb02d
    ctx->pc = 0x24d228u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d22c: 0x245e4810
    ctx->pc = 0x24d22cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 18448));
    // 0x24d230: 0x8fa20084
    ctx->pc = 0x24d230u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x24d234: 0x0
    ctx->pc = 0x24d234u;
    // NOP
label_24d238:
    // 0x24d238: 0x562021
    ctx->pc = 0x24d238u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x24d23c: 0x24830003
    ctx->pc = 0x24d23cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 3));
    // 0x24d240: 0x2402ffff
    ctx->pc = 0x24d240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24d244: 0x44102a
    ctx->pc = 0x24d244u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x24d248: 0x82180b
    ctx->pc = 0x24d248u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x24d24c: 0x38883
    ctx->pc = 0x24d24cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x24d250: 0x111080
    ctx->pc = 0x24d250u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x24d254: 0x828823
    ctx->pc = 0x24d254u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24d258: 0x1237006d
    ctx->pc = 0x24D258u;
    {
        const bool branch_taken_0x24d258 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 23));
        ctx->pc = 0x24D25Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x24d258) {
            ctx->pc = 0x24D410u;
            goto label_24d410;
        }
    }
    ctx->pc = 0x24D260u;
    // 0x24d260: 0x3c030032
    ctx->pc = 0x24d260u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x24d264: 0x24631bc0
    ctx->pc = 0x24d264u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x24d268: 0x600013
    ctx->pc = 0x24d268u;
    ctx->lo = GPR_U32(ctx, 3);
    // 0x24d26c: 0x72228000
    ctx->pc = 0x24d26cu;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24d270: 0x8e0300fc
    ctx->pc = 0x24d270u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x24d274: 0x24020001
    ctx->pc = 0x24d274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d278: 0x10620005
    ctx->pc = 0x24D278u;
    {
        const bool branch_taken_0x24d278 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x24D27Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x24d278) {
            ctx->pc = 0x24D290u;
            goto label_24d290;
        }
    }
    ctx->pc = 0x24D280u;
    // 0x24d280: 0x10620003
    ctx->pc = 0x24D280u;
    {
        const bool branch_taken_0x24d280 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x24D284u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x24d280) {
            ctx->pc = 0x24D290u;
            goto label_24d290;
        }
    }
    ctx->pc = 0x24D288u;
    // 0x24d288: 0x54620062
    ctx->pc = 0x24D288u;
    {
        const bool branch_taken_0x24d288 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x24d288) {
            ctx->pc = 0x24D28Cu;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
            ctx->pc = 0x24D414u;
            goto label_24d414;
        }
    }
    ctx->pc = 0x24D290u;
label_24d290:
    // 0x24d290: 0x8e020080
    ctx->pc = 0x24d290u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x24d294: 0x5040005f
    ctx->pc = 0x24D294u;
    {
        const bool branch_taken_0x24d294 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24d294) {
            ctx->pc = 0x24D298u;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
            ctx->pc = 0x24D414u;
            goto label_24d414;
        }
    }
    ctx->pc = 0x24D29Cu;
    // 0x24d29c: 0xafb10088
    ctx->pc = 0x24d29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 17));
    // 0x24d2a0: 0x9602093c
    ctx->pc = 0x24d2a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2364)));
    // 0x24d2a4: 0x30420020
    ctx->pc = 0x24d2a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x24d2a8: 0x50400009
    ctx->pc = 0x24D2A8u;
    {
        const bool branch_taken_0x24d2a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24d2a8) {
            ctx->pc = 0x24D2ACu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x24D2D0u;
            goto label_24d2d0;
        }
    }
    ctx->pc = 0x24D2B0u;
    // 0x24d2b0: 0xc60000f0
    ctx->pc = 0x24d2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d2b4: 0xe7a00000
    ctx->pc = 0x24d2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24d2b8: 0xc60000f4
    ctx->pc = 0x24d2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d2bc: 0xe7a00004
    ctx->pc = 0x24d2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24d2c0: 0x10000007
    ctx->pc = 0x24D2C0u;
    {
        const bool branch_taken_0x24d2c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D2C4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x24d2c0) {
            ctx->pc = 0x24D2E0u;
            goto label_24d2e0;
        }
    }
    ctx->pc = 0x24D2C8u;
label_24d2c8:
    // 0x24d2c8: 0x1000004e
    ctx->pc = 0x24D2C8u;
    {
        const bool branch_taken_0x24d2c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D2CCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 17));
        if (branch_taken_0x24d2c8) {
            ctx->pc = 0x24D404u;
            goto label_24d404;
        }
    }
    ctx->pc = 0x24D2D0u;
label_24d2d0:
    // 0x24d2d0: 0xe7a00000
    ctx->pc = 0x24d2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24d2d4: 0xc6000054
    ctx->pc = 0x24d2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d2d8: 0xe7a00004
    ctx->pc = 0x24d2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24d2dc: 0xc6000058
    ctx->pc = 0x24d2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24d2e0:
    // 0x24d2e0: 0xe7a00008
    ctx->pc = 0x24d2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24d2e4: 0x3a0202d
    ctx->pc = 0x24d2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2e8: 0x3c0282d
    ctx->pc = 0x24d2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2ec: 0x3c013f00
    ctx->pc = 0x24d2ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x24d2f0: 0x44816000
    ctx->pc = 0x24d2f0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x24d2f4: 0x3c014080
    ctx->pc = 0x24d2f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x24d2f8: 0x44816800
    ctx->pc = 0x24d2f8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x24d2fc: 0x3c01c120
    ctx->pc = 0x24d2fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49440 << 16));
    // 0x24d300: 0x44817000
    ctx->pc = 0x24d300u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x24d304: 0x24060001
    ctx->pc = 0x24d304u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d308: 0xc087b24
    ctx->pc = 0x24D308u;
    SET_GPR_U32(ctx, 31, 0x24D310u);
    ctx->pc = 0x24D30Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D310u; }
    }
    if (ctx->pc != 0x24D310u) { return; }
    ctx->pc = 0x24D310u;
    // 0x24d310: 0xae02089c
    ctx->pc = 0x24d310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2204), GPR_U32(ctx, 2));
    // 0x24d314: 0x8fc30044
    ctx->pc = 0x24d314u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x24d318: 0x10600002
    ctx->pc = 0x24D318u;
    {
        const bool branch_taken_0x24d318 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D31Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24d318) {
            ctx->pc = 0x24D324u;
            goto label_24d324;
        }
    }
    ctx->pc = 0x24D320u;
    // 0x24d320: 0x8c620010
    ctx->pc = 0x24d320u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_24d324:
    // 0x24d324: 0xae020898
    ctx->pc = 0x24d324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2200), GPR_U32(ctx, 2));
    // 0x24d328: 0xc7c00034
    ctx->pc = 0x24d328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d32c: 0xe600088c
    ctx->pc = 0x24d32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2188), bits); }
    // 0x24d330: 0x26040020
    ctx->pc = 0x24d330u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    // 0x24d334: 0xc0b549e
    ctx->pc = 0x24D334u;
    SET_GPR_U32(ctx, 31, 0x24D33Cu);
    ctx->pc = 0x24D338u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 32));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D33Cu; }
    }
    if (ctx->pc != 0x24D33Cu) { return; }
    ctx->pc = 0x24D33Cu;
    // 0x24d33c: 0xc7a00000
    ctx->pc = 0x24d33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d340: 0xe6600050
    ctx->pc = 0x24d340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x24d344: 0xc7a00004
    ctx->pc = 0x24d344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d348: 0xe6600054
    ctx->pc = 0x24d348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x24d34c: 0xc7a00008
    ctx->pc = 0x24d34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d350: 0xe6600058
    ctx->pc = 0x24d350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x24d354: 0xc60000d8
    ctx->pc = 0x24d354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d358: 0xe66000d8
    ctx->pc = 0x24d358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 216), bits); }
    // 0x24d35c: 0xc60000dc
    ctx->pc = 0x24d35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d360: 0xe66000dc
    ctx->pc = 0x24d360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 220), bits); }
    // 0x24d364: 0xc60000e0
    ctx->pc = 0x24d364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d368: 0xe66000e0
    ctx->pc = 0x24d368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 224), bits); }
    // 0x24d36c: 0xc6010828
    ctx->pc = 0x24d36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d370: 0x3c013f00
    ctx->pc = 0x24d370u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x24d374: 0x44810000
    ctx->pc = 0x24d374u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24d378: 0x46000d00
    ctx->pc = 0x24d378u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d37c: 0x902d
    ctx->pc = 0x24d37cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d380: 0x3c020033
    ctx->pc = 0x24d380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24d384: 0x24554790
    ctx->pc = 0x24d384u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 18320));
    // 0x24d388: 0x3c020033
    ctx->pc = 0x24d388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24d38c: 0x24544794
    ctx->pc = 0x24d38cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 18324));
    // 0x24d390: 0xc6010070
    ctx->pc = 0x24d390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d394: 0x0
    ctx->pc = 0x24d394u;
    // NOP
label_24d398:
    // 0x24d398: 0xe7a10010
    ctx->pc = 0x24d398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24d39c: 0xc6000074
    ctx->pc = 0x24d39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d3a0: 0xe7a00014
    ctx->pc = 0x24d3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24d3a4: 0xc6020078
    ctx->pc = 0x24d3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d3a8: 0x1218c0
    ctx->pc = 0x24d3a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 3));
    // 0x24d3ac: 0x751021
    ctx->pc = 0x24d3acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x24d3b0: 0xc4400000
    ctx->pc = 0x24d3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d3b4: 0x4600a002
    ctx->pc = 0x24d3b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x24d3b8: 0x46010000
    ctx->pc = 0x24d3b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24d3bc: 0xe7a00010
    ctx->pc = 0x24d3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24d3c0: 0x741821
    ctx->pc = 0x24d3c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x24d3c4: 0xc4600000
    ctx->pc = 0x24d3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d3c8: 0x4600a002
    ctx->pc = 0x24d3c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x24d3cc: 0x46020000
    ctx->pc = 0x24d3ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24d3d0: 0xe7a00018
    ctx->pc = 0x24d3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x24d3d4: 0x200202d
    ctx->pc = 0x24d3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d3d8: 0x260282d
    ctx->pc = 0x24d3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d3dc: 0x27a60010
    ctx->pc = 0x24d3dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x24d3e0: 0x27a70020
    ctx->pc = 0x24d3e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d3e4: 0x27a80080
    ctx->pc = 0x24d3e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 128));
    // 0x24d3e8: 0xc09330c
    ctx->pc = 0x24D3E8u;
    SET_GPR_U32(ctx, 31, 0x24D3F0u);
    ctx->pc = 0x24D3ECu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x24CC30u;
    {
        const uint32_t __entryPc = ctx->pc;
        try_location_0x24cc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D3F0u; }
    }
    if (ctx->pc != 0x24D3F0u) { return; }
    ctx->pc = 0x24D3F0u;
    // 0x24d3f0: 0x1440ffb5
    ctx->pc = 0x24D3F0u;
    {
        const bool branch_taken_0x24d3f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24D3F4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x24d3f0) {
            ctx->pc = 0x24D2C8u;
            goto label_24d2c8;
        }
    }
    ctx->pc = 0x24D3F8u;
    // 0x24d3f8: 0x2a420010
    ctx->pc = 0x24d3f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 16));
    // 0x24d3fc: 0x5440ffe6
    ctx->pc = 0x24D3FCu;
    {
        const bool branch_taken_0x24d3fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24d3fc) {
            ctx->pc = 0x24D400u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x24D398u;
            goto label_24d398;
        }
    }
    ctx->pc = 0x24D404u;
label_24d404:
    // 0x24d404: 0x8fa4008c
    ctx->pc = 0x24d404u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x24d408: 0x483ff77
    ctx->pc = 0x24D408u;
    {
        const bool branch_taken_0x24d408 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x24d408) {
            ctx->pc = 0x24D40Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->pc = 0x24D1E8u;
            goto label_24d1e8;
        }
    }
    ctx->pc = 0x24D410u;
label_24d410:
    // 0x24d410: 0x26d60001
    ctx->pc = 0x24d410u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
label_24d414:
    // 0x24d414: 0x2ac20004
    ctx->pc = 0x24d414u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 4));
    // 0x24d418: 0x1440ff87
    ctx->pc = 0x24D418u;
    {
        const bool branch_taken_0x24d418 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24D41Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 132)));
        if (branch_taken_0x24d418) {
            ctx->pc = 0x24D238u;
            goto label_24d238;
        }
    }
    ctx->pc = 0x24D420u;
label_24d420:
    // 0x24d420: 0x8fa6008c
    ctx->pc = 0x24d420u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_24d424:
    // 0x24d424: 0x4c100b3
    ctx->pc = 0x24D424u;
    {
        const bool branch_taken_0x24d424 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x24D428u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x24d424) {
            ctx->pc = 0x24D6F4u;
            goto label_24d6f4;
        }
    }
    ctx->pc = 0x24D42Cu;
    // 0x24d42c: 0x8fa20088
    ctx->pc = 0x24d42cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24d430: 0x4400056
    ctx->pc = 0x24D430u;
    {
        const bool branch_taken_0x24d430 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24D434u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x24d430) {
            ctx->pc = 0x24D58Cu;
            goto label_24d58c;
        }
    }
    ctx->pc = 0x24D438u;
    // 0x24d438: 0x518818
    ctx->pc = 0x24d438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24d43c: 0x3c100032
    ctx->pc = 0x24d43cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x24d440: 0x26101be0
    ctx->pc = 0x24d440u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 7136));
    // 0x24d444: 0x2302021
    ctx->pc = 0x24d444u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x24d448: 0xc0b5494
    ctx->pc = 0x24D448u;
    SET_GPR_U32(ctx, 31, 0x24D450u);
    ctx->pc = 0x24D44Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 32));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D450u; }
    }
    if (ctx->pc != 0x24D450u) { return; }
    ctx->pc = 0x24D450u;
    // 0x24d450: 0x2610ffe0
    ctx->pc = 0x24d450u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x24d454: 0x2308821
    ctx->pc = 0x24d454u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x24d458: 0xc62000d8
    ctx->pc = 0x24d458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d45c: 0xe66000d8
    ctx->pc = 0x24d45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 216), bits); }
    // 0x24d460: 0xc62000dc
    ctx->pc = 0x24d460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d464: 0xe66000dc
    ctx->pc = 0x24d464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 220), bits); }
    // 0x24d468: 0xc62000e0
    ctx->pc = 0x24d468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d46c: 0xe66000e0
    ctx->pc = 0x24d46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 224), bits); }
    // 0x24d470: 0x8fa20080
    ctx->pc = 0x24d470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24d474: 0x440002c
    ctx->pc = 0x24D474u;
    {
        const bool branch_taken_0x24d474 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24D478u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x24d474) {
            ctx->pc = 0x24D528u;
            goto label_24d528;
        }
    }
    ctx->pc = 0x24D47Cu;
    // 0x24d47c: 0xe6600050
    ctx->pc = 0x24d47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x24d480: 0xc7a00024
    ctx->pc = 0x24d480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d484: 0xe6600054
    ctx->pc = 0x24d484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x24d488: 0xc7a00028
    ctx->pc = 0x24d488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d48c: 0xe6600058
    ctx->pc = 0x24d48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x24d490: 0x8fa30080
    ctx->pc = 0x24d490u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24d494: 0x3402ffff
    ctx->pc = 0x24d494u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x24d498: 0x43102a
    ctx->pc = 0x24d498u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x24d49c: 0x10400011
    ctx->pc = 0x24D49Cu;
    {
        const bool branch_taken_0x24d49c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D4A0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
        if (branch_taken_0x24d49c) {
            ctx->pc = 0x24D4E4u;
            goto label_24d4e4;
        }
    }
    ctx->pc = 0x24D4A4u;
    // 0x24d4a4: 0x24020b70
    ctx->pc = 0x24d4a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2928));
    // 0x24d4a8: 0x621818
    ctx->pc = 0x24d4a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24d4ac: 0x3c040035
    ctx->pc = 0x24d4acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x24d4b0: 0x24841dc0
    ctx->pc = 0x24d4b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7616));
    // 0x24d4b4: 0x642021
    ctx->pc = 0x24d4b4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24d4b8: 0x3c0147c3
    ctx->pc = 0x24d4b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x24d4bc: 0x34214f80
    ctx->pc = 0x24d4bcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20352));
    // 0x24d4c0: 0x44816000
    ctx->pc = 0x24d4c0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x24d4c4: 0x2405fffe
    ctx->pc = 0x24d4c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x24d4c8: 0x302d
    ctx->pc = 0x24d4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d4cc: 0x382d
    ctx->pc = 0x24d4ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d4d0: 0x402d
    ctx->pc = 0x24d4d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d4d4: 0xc0a6498
    ctx->pc = 0x24D4D4u;
    SET_GPR_U32(ctx, 31, 0x24D4DCu);
    ctx->pc = 0x24D4D8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x299260u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDamage_0x299260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D4DCu; }
    }
    if (ctx->pc != 0x24D4DCu) { return; }
    ctx->pc = 0x24D4DCu;
    // 0x24d4dc: 0x1000009a
    ctx->pc = 0x24D4DCu;
    {
        const bool branch_taken_0x24d4dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D4E0u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 476), GPR_U32(ctx, 0));
        if (branch_taken_0x24d4dc) {
            ctx->pc = 0x24D748u;
            goto label_24d748;
        }
    }
    ctx->pc = 0x24D4E4u;
label_24d4e4:
    // 0x24d4e4: 0x8fa30080
    ctx->pc = 0x24d4e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24d4e8: 0x240203b0
    ctx->pc = 0x24d4e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
    // 0x24d4ec: 0x621818
    ctx->pc = 0x24d4ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24d4f0: 0x3c040033
    ctx->pc = 0x24d4f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x24d4f4: 0x2484dfd0
    ctx->pc = 0x24d4f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959056));
    // 0x24d4f8: 0x642021
    ctx->pc = 0x24d4f8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24d4fc: 0x3c01461c
    ctx->pc = 0x24d4fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17948 << 16));
    // 0x24d500: 0x34213c00
    ctx->pc = 0x24d500u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 15360));
    // 0x24d504: 0x44816000
    ctx->pc = 0x24d504u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x24d508: 0x2405fffe
    ctx->pc = 0x24d508u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x24d50c: 0x302d
    ctx->pc = 0x24d50cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d510: 0x382d
    ctx->pc = 0x24d510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d514: 0x402d
    ctx->pc = 0x24d514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d518: 0xc08e7bc
    ctx->pc = 0x24D518u;
    SET_GPR_U32(ctx, 31, 0x24D520u);
    ctx->pc = 0x24D51Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x239EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_enemy_0x239ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D520u; }
    }
    if (ctx->pc != 0x24D520u) { return; }
    ctx->pc = 0x24D520u;
    // 0x24d520: 0x10000089
    ctx->pc = 0x24D520u;
    {
        const bool branch_taken_0x24d520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D524u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 476), GPR_U32(ctx, 0));
        if (branch_taken_0x24d520) {
            ctx->pc = 0x24D748u;
            goto label_24d748;
        }
    }
    ctx->pc = 0x24D528u;
label_24d528:
    // 0x24d528: 0x26640050
    ctx->pc = 0x24d528u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 80));
    // 0x24d52c: 0xc66c0054
    ctx->pc = 0x24d52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24d530: 0x3c013f00
    ctx->pc = 0x24d530u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x24d534: 0x44816800
    ctx->pc = 0x24d534u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x24d538: 0xc087b5c
    ctx->pc = 0x24D538u;
    SET_GPR_U32(ctx, 31, 0x24D540u);
    ctx->pc = 0x24D53Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21ED70u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorPos_0x21ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D540u; }
    }
    if (ctx->pc != 0x24D540u) { return; }
    ctx->pc = 0x24D540u;
    // 0x24d540: 0xe660088c
    ctx->pc = 0x24d540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2188), bits); }
    // 0x24d544: 0xe6600054
    ctx->pc = 0x24d544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x24d548: 0x3c020032
    ctx->pc = 0x24d548u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x24d54c: 0x24421bc0
    ctx->pc = 0x24d54cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x24d550: 0x24102b00
    ctx->pc = 0x24d550u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x24d554: 0x8fa30088
    ctx->pc = 0x24d554u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24d558: 0x708018
    ctx->pc = 0x24d558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24d55c: 0x2028021
    ctx->pc = 0x24d55cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24d560: 0x8e020080
    ctx->pc = 0x24d560u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x24d564: 0x8e640080
    ctx->pc = 0x24d564u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x24d568: 0xc0b3f94
    ctx->pc = 0x24D568u;
    SET_GPR_U32(ctx, 31, 0x24D570u);
    ctx->pc = 0x24D56Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 116)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D570u; }
    }
    if (ctx->pc != 0x24D570u) { return; }
    ctx->pc = 0x24D570u;
    // 0x24d570: 0x8e02089c
    ctx->pc = 0x24d570u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2204)));
    // 0x24d574: 0xae62089c
    ctx->pc = 0x24d574u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2204), GPR_U32(ctx, 2));
    // 0x24d578: 0x3c04003b
    ctx->pc = 0x24d578u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x24d57c: 0xc0b492e
    ctx->pc = 0x24D57Cu;
    SET_GPR_U32(ctx, 31, 0x24D584u);
    ctx->pc = 0x24D580u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935416));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D584u; }
    }
    if (ctx->pc != 0x24D584u) { return; }
    ctx->pc = 0x24D584u;
    // 0x24d584: 0x10000070
    ctx->pc = 0x24D584u;
    {
        const bool branch_taken_0x24d584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D588u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 476), GPR_U32(ctx, 0));
        if (branch_taken_0x24d584) {
            ctx->pc = 0x24D748u;
            goto label_24d748;
        }
    }
    ctx->pc = 0x24D58Cu;
label_24d58c:
    // 0x24d58c: 0x27b00040
    ctx->pc = 0x24d58cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 64));
    // 0x24d590: 0x3c04003a
    ctx->pc = 0x24d590u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x24d594: 0x24842550
    ctx->pc = 0x24d594u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x24d598: 0xc0b5494
    ctx->pc = 0x24D598u;
    SET_GPR_U32(ctx, 31, 0x24D5A0u);
    ctx->pc = 0x24D59Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D5A0u; }
    }
    if (ctx->pc != 0x24D5A0u) { return; }
    ctx->pc = 0x24D5A0u;
    // 0x24d5a0: 0x3c020033
    ctx->pc = 0x24d5a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24d5a4: 0xc44cc7d4
    ctx->pc = 0x24d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24d5a8: 0xc0b5632
    ctx->pc = 0x24D5A8u;
    SET_GPR_U32(ctx, 31, 0x24D5B0u);
    ctx->pc = 0x24D5ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D58C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawMat3_0x2d58c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D5B0u; }
    }
    if (ctx->pc != 0x24D5B0u) { return; }
    ctx->pc = 0x24D5B0u;
    // 0x24d5b0: 0xc6610828
    ctx->pc = 0x24d5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d5b4: 0x3c013f00
    ctx->pc = 0x24d5b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x24d5b8: 0x44810000
    ctx->pc = 0x24d5b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24d5bc: 0x46000d00
    ctx->pc = 0x24d5bcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d5c0: 0x3c020033
    ctx->pc = 0x24d5c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24d5c4: 0x2443c7c8
    ctx->pc = 0x24d5c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294952904));
    // 0x24d5c8: 0xc440c7c8
    ctx->pc = 0x24d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d5cc: 0xe7a00010
    ctx->pc = 0x24d5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24d5d0: 0xc4600004
    ctx->pc = 0x24d5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d5d4: 0xe7a00014
    ctx->pc = 0x24d5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24d5d8: 0xc4600008
    ctx->pc = 0x24d5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d5dc: 0xe7a00018
    ctx->pc = 0x24d5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x24d5e0: 0x27a40010
    ctx->pc = 0x24d5e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x24d5e4: 0xc0932ec
    ctx->pc = 0x24D5E4u;
    SET_GPR_U32(ctx, 31, 0x24D5ECu);
    ctx->pc = 0x24D5E8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x24CBB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        test_location_0x24cbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D5ECu; }
    }
    if (ctx->pc != 0x24D5ECu) { return; }
    ctx->pc = 0x24D5ECu;
    // 0x24d5ec: 0x1440002c
    ctx->pc = 0x24D5ECu;
    {
        const bool branch_taken_0x24d5ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24D5F0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24d5ec) {
            ctx->pc = 0x24D6A0u;
            goto label_24d6a0;
        }
    }
    ctx->pc = 0x24D5F4u;
    // 0x24d5f4: 0x3c150033
    ctx->pc = 0x24d5f4u;
    SET_GPR_U32(ctx, 21, ((uint32_t)51 << 16));
    // 0x24d5f8: 0x2a0102d
    ctx->pc = 0x24d5f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d5fc: 0x2450c7c8
    ctx->pc = 0x24d5fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294952904));
    // 0x24d600: 0x3c020033
    ctx->pc = 0x24d600u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24d604: 0x24544790
    ctx->pc = 0x24d604u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 18320));
    // 0x24d608: 0x3c020033
    ctx->pc = 0x24d608u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24d60c: 0x24514794
    ctx->pc = 0x24d60cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 18324));
    // 0x24d610: 0xc6a1c7c8
    ctx->pc = 0x24d610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294952904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d614: 0x0
    ctx->pc = 0x24d614u;
    // NOP
label_24d618:
    // 0x24d618: 0xc6000004
    ctx->pc = 0x24d618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d61c: 0xe7a00014
    ctx->pc = 0x24d61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24d620: 0xc6020008
    ctx->pc = 0x24d620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d624: 0x1218c0
    ctx->pc = 0x24d624u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 3));
    // 0x24d628: 0x741021
    ctx->pc = 0x24d628u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x24d62c: 0xc4400000
    ctx->pc = 0x24d62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d630: 0x4600a002
    ctx->pc = 0x24d630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x24d634: 0x46010000
    ctx->pc = 0x24d634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24d638: 0xe7a00010
    ctx->pc = 0x24d638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24d63c: 0x711821
    ctx->pc = 0x24d63cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x24d640: 0xc4600000
    ctx->pc = 0x24d640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d644: 0x4600a002
    ctx->pc = 0x24d644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x24d648: 0x46020000
    ctx->pc = 0x24d648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24d64c: 0xe7a00018
    ctx->pc = 0x24d64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x24d650: 0x27a40010
    ctx->pc = 0x24d650u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x24d654: 0xc0932ec
    ctx->pc = 0x24D654u;
    SET_GPR_U32(ctx, 31, 0x24D65Cu);
    ctx->pc = 0x24D658u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x24CBB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        test_location_0x24cbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D65Cu; }
    }
    if (ctx->pc != 0x24D65Cu) { return; }
    ctx->pc = 0x24D65Cu;
    // 0x24d65c: 0x40182d
    ctx->pc = 0x24d65cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d660: 0x26520001
    ctx->pc = 0x24d660u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x24d664: 0x2a420010
    ctx->pc = 0x24d664u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 16));
    // 0x24d668: 0x10400003
    ctx->pc = 0x24D668u;
    {
        const bool branch_taken_0x24d668 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24d668) {
            ctx->pc = 0x24D678u;
            goto label_24d678;
        }
    }
    ctx->pc = 0x24D670u;
    // 0x24d670: 0x1060ffe9
    ctx->pc = 0x24D670u;
    {
        const bool branch_taken_0x24d670 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D674u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294952904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x24d670) {
            ctx->pc = 0x24D618u;
            goto label_24d618;
        }
    }
    ctx->pc = 0x24D678u;
label_24d678:
    // 0x24d678: 0x5460000a
    ctx->pc = 0x24D678u;
    {
        const bool branch_taken_0x24d678 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x24d678) {
            ctx->pc = 0x24D67Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x24D6A4u;
            goto label_24d6a4;
        }
    }
    ctx->pc = 0x24D680u;
    // 0x24d680: 0x3c020033
    ctx->pc = 0x24d680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24d684: 0x24434ac0
    ctx->pc = 0x24d684u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 19136));
    // 0x24d688: 0xc4404ac0
    ctx->pc = 0x24d688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d68c: 0xe7a00010
    ctx->pc = 0x24d68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24d690: 0xc4600004
    ctx->pc = 0x24d690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d694: 0xe7a00014
    ctx->pc = 0x24d694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24d698: 0xc4600008
    ctx->pc = 0x24d698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d69c: 0xe7a00018
    ctx->pc = 0x24d69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_24d6a0:
    // 0x24d6a0: 0xc7a00010
    ctx->pc = 0x24d6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24d6a4:
    // 0x24d6a4: 0xe7a00070
    ctx->pc = 0x24d6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x24d6a8: 0xc7ac0014
    ctx->pc = 0x24d6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24d6ac: 0xe7ac0074
    ctx->pc = 0x24d6acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x24d6b0: 0xc7a00018
    ctx->pc = 0x24d6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d6b4: 0xe7a00078
    ctx->pc = 0x24d6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x24d6b8: 0x27b00040
    ctx->pc = 0x24d6b8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 64));
    // 0x24d6bc: 0x27a40070
    ctx->pc = 0x24d6bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x24d6c0: 0x3c013f00
    ctx->pc = 0x24d6c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x24d6c4: 0x44816800
    ctx->pc = 0x24d6c4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x24d6c8: 0xc087b5c
    ctx->pc = 0x24D6C8u;
    SET_GPR_U32(ctx, 31, 0x24D6D0u);
    ctx->pc = 0x24D6CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21ED70u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorPos_0x21ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D6D0u; }
    }
    if (ctx->pc != 0x24D6D0u) { return; }
    ctx->pc = 0x24D6D0u;
    // 0x24d6d0: 0xe7a00074
    ctx->pc = 0x24d6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x24d6d4: 0xe660088c
    ctx->pc = 0x24d6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2188), bits); }
    // 0x24d6d8: 0x200202d
    ctx->pc = 0x24d6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d6dc: 0xc0b5494
    ctx->pc = 0x24D6DCu;
    SET_GPR_U32(ctx, 31, 0x24D6E4u);
    ctx->pc = 0x24D6E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 32));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D6E4u; }
    }
    if (ctx->pc != 0x24D6E4u) { return; }
    ctx->pc = 0x24D6E4u;
    // 0x24d6e4: 0xae6000d8
    ctx->pc = 0x24d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 0));
    // 0x24d6e8: 0x3c020033
    ctx->pc = 0x24d6e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24d6ec: 0x10000013
    ctx->pc = 0x24D6ECu;
    {
        const bool branch_taken_0x24d6ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D6F0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x24d6ec) {
            ctx->pc = 0x24D73Cu;
            goto label_24d73c;
        }
    }
    ctx->pc = 0x24D6F4u;
label_24d6f4:
    // 0x24d6f4: 0x8c430018
    ctx->pc = 0x24d6f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x24d6f8: 0x2402400c
    ctx->pc = 0x24d6f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16396));
    // 0x24d6fc: 0x54620012
    ctx->pc = 0x24D6FCu;
    {
        const bool branch_taken_0x24d6fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x24d6fc) {
            ctx->pc = 0x24D700u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 476), GPR_U32(ctx, 0));
            ctx->pc = 0x24D748u;
            goto label_24d748;
        }
    }
    ctx->pc = 0x24D704u;
    // 0x24d704: 0x27b00040
    ctx->pc = 0x24d704u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 64));
    // 0x24d708: 0x3c04003a
    ctx->pc = 0x24d708u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x24d70c: 0x24842550
    ctx->pc = 0x24d70cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x24d710: 0xc0b5494
    ctx->pc = 0x24D710u;
    SET_GPR_U32(ctx, 31, 0x24D718u);
    ctx->pc = 0x24D714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D718u; }
    }
    if (ctx->pc != 0x24D718u) { return; }
    ctx->pc = 0x24D718u;
    // 0x24d718: 0x3c110033
    ctx->pc = 0x24d718u;
    SET_GPR_U32(ctx, 17, ((uint32_t)51 << 16));
    // 0x24d71c: 0xc62cc7d4
    ctx->pc = 0x24d71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294952916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24d720: 0xc0b5632
    ctx->pc = 0x24D720u;
    SET_GPR_U32(ctx, 31, 0x24D728u);
    ctx->pc = 0x24D724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D58C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawMat3_0x2d58c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D728u; }
    }
    if (ctx->pc != 0x24D728u) { return; }
    ctx->pc = 0x24D728u;
    // 0x24d728: 0x200202d
    ctx->pc = 0x24d728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d72c: 0xc0b549e
    ctx->pc = 0x24D72Cu;
    SET_GPR_U32(ctx, 31, 0x24D734u);
    ctx->pc = 0x24D730u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 32));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D734u; }
    }
    if (ctx->pc != 0x24D734u) { return; }
    ctx->pc = 0x24D734u;
    // 0x24d734: 0xae6000d8
    ctx->pc = 0x24d734u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 0));
    // 0x24d738: 0xc620c7d4
    ctx->pc = 0x24d738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294952916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24d73c:
    // 0x24d73c: 0xe66000dc
    ctx->pc = 0x24d73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 220), bits); }
    // 0x24d740: 0xae6000e0
    ctx->pc = 0x24d740u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 0));
    // 0x24d744: 0xae6001dc
    ctx->pc = 0x24d744u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 476), GPR_U32(ctx, 0));
label_24d748:
    // 0x24d748: 0x260202d
    ctx->pc = 0x24d748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d74c: 0xc08ac14
    ctx->pc = 0x24D74Cu;
    SET_GPR_U32(ctx, 31, 0x24D754u);
    ctx->pc = 0x24D750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22B050u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdatePlayerWorldMat_0x22b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D754u; }
    }
    if (ctx->pc != 0x24D754u) { return; }
    ctx->pc = 0x24D754u;
label_24d754:
    // 0x24d754: 0xdfbf0120
    ctx->pc = 0x24d754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_24d758:
    // 0x24d758: 0xdfbe0110
    ctx->pc = 0x24d758u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24d75c: 0xdfb70100
    ctx->pc = 0x24d75cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x24d760: 0xdfb600f0
    ctx->pc = 0x24d760u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24d764: 0xdfb500e0
    ctx->pc = 0x24d764u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24d768: 0xdfb400d0
    ctx->pc = 0x24d768u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24d76c: 0xdfb300c0
    ctx->pc = 0x24d76cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24d770: 0xdfb200b0
    ctx->pc = 0x24d770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24d774: 0xdfb100a0
    ctx->pc = 0x24d774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24d778: 0xdfb00090
    ctx->pc = 0x24d778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24d77c: 0xc7b70148
    ctx->pc = 0x24d77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x24d780: 0xc7b60140
    ctx->pc = 0x24d780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24d784: 0xc7b50138
    ctx->pc = 0x24d784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24d788: 0xc7b40130
    ctx->pc = 0x24d788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24d78c: 0x3e00008
    ctx->pc = 0x24D78Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D790u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24CFE4u: goto label_24cfe4;
            case 0x24D020u: goto label_24d020;
            case 0x24D040u: goto label_24d040;
            case 0x24D05Cu: goto label_24d05c;
            case 0x24D074u: goto label_24d074;
            case 0x24D088u: goto label_24d088;
            case 0x24D08Cu: goto label_24d08c;
            case 0x24D168u: goto label_24d168;
            case 0x24D1E8u: goto label_24d1e8;
            case 0x24D200u: goto label_24d200;
            case 0x24D218u: goto label_24d218;
            case 0x24D21Cu: goto label_24d21c;
            case 0x24D238u: goto label_24d238;
            case 0x24D290u: goto label_24d290;
            case 0x24D2C8u: goto label_24d2c8;
            case 0x24D2D0u: goto label_24d2d0;
            case 0x24D2E0u: goto label_24d2e0;
            case 0x24D324u: goto label_24d324;
            case 0x24D398u: goto label_24d398;
            case 0x24D404u: goto label_24d404;
            case 0x24D410u: goto label_24d410;
            case 0x24D414u: goto label_24d414;
            case 0x24D420u: goto label_24d420;
            case 0x24D424u: goto label_24d424;
            case 0x24D4E4u: goto label_24d4e4;
            case 0x24D528u: goto label_24d528;
            case 0x24D58Cu: goto label_24d58c;
            case 0x24D618u: goto label_24d618;
            case 0x24D678u: goto label_24d678;
            case 0x24D6A0u: goto label_24d6a0;
            case 0x24D6A4u: goto label_24d6a4;
            case 0x24D6F4u: goto label_24d6f4;
            case 0x24D73Cu: goto label_24d73c;
            case 0x24D748u: goto label_24d748;
            case 0x24D754u: goto label_24d754;
            case 0x24D758u: goto label_24d758;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24D794u;
}
