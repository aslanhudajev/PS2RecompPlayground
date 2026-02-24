#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _dtoa_r
// Address: 0x12df28 - 0x12f0f4
void _dtoa_r_0x12df28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12df28u;

label_12df28:
    // 0x12df28: 0x27bdff00
    ctx->pc = 0x12df28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
label_12df2c:
    // 0x12df2c: 0xffbe00e0
    ctx->pc = 0x12df2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
label_12df30:
    // 0x12df30: 0xffb600c0
    ctx->pc = 0x12df30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
label_12df34:
    // 0x12df34: 0x80f02d
    ctx->pc = 0x12df34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12df38:
    // 0x12df38: 0xffb00060
    ctx->pc = 0x12df38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_12df3c:
    // 0x12df3c: 0xa0b02d
    ctx->pc = 0x12df3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12df40:
    // 0x12df40: 0xffbf00f0
    ctx->pc = 0x12df40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_12df44:
    // 0x12df44: 0x120802d
    ctx->pc = 0x12df44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_12df48:
    // 0x12df48: 0xffb700d0
    ctx->pc = 0x12df48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
label_12df4c:
    // 0x12df4c: 0xffb500b0
    ctx->pc = 0x12df4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
label_12df50:
    // 0x12df50: 0xffb400a0
    ctx->pc = 0x12df50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_12df54:
    // 0x12df54: 0xffb30090
    ctx->pc = 0x12df54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
label_12df58:
    // 0x12df58: 0xffb20080
    ctx->pc = 0x12df58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_12df5c:
    // 0x12df5c: 0xffb10070
    ctx->pc = 0x12df5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
label_12df60:
    // 0x12df60: 0xafa60008
    ctx->pc = 0x12df60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_12df64:
    // 0x12df64: 0x8fcb0040
    ctx->pc = 0x12df64u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_12df68:
    // 0x12df68: 0xafa7000c
    ctx->pc = 0x12df68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
label_12df6c:
    // 0x12df6c: 0xafa80010
    ctx->pc = 0x12df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
label_12df70:
    // 0x12df70: 0x1160000a
label_12df74:
    if (ctx->pc == 0x12DF74u) {
        ctx->pc = 0x12DF74u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->pc = 0x12DF78u;
        goto label_12df78;
    }
    ctx->pc = 0x12DF70u;
    {
        const bool branch_taken_0x12df70 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        ctx->pc = 0x12DF74u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        if (branch_taken_0x12df70) {
            ctx->pc = 0x12DF9Cu;
            goto label_12df9c;
        }
    }
    ctx->pc = 0x12DF78u;
label_12df78:
    // 0x12df78: 0x8fc60044
    ctx->pc = 0x12df78u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_12df7c:
    // 0x12df7c: 0x24030001
    ctx->pc = 0x12df7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_12df80:
    // 0x12df80: 0x160282d
    ctx->pc = 0x12df80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_12df84:
    // 0x12df84: 0xad660004
    ctx->pc = 0x12df84u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
label_12df88:
    // 0x12df88: 0x8fc20044
    ctx->pc = 0x12df88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_12df8c:
    // 0x12df8c: 0x431804
    ctx->pc = 0x12df8cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_12df90:
    // 0x12df90: 0xc04bfb4
label_12df94:
    if (ctx->pc == 0x12DF94u) {
        ctx->pc = 0x12DF94u;
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x12DF98u;
        goto label_12df98;
    }
    ctx->pc = 0x12DF90u;
    SET_GPR_U32(ctx, 31, 0x12DF98u);
    ctx->pc = 0x12DF94u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x12FED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF98u; }
    }
    if (ctx->pc != 0x12DF98u) { return; }
    ctx->pc = 0x12DF98u;
label_12df98:
    // 0x12df98: 0xafc00040
    ctx->pc = 0x12df98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 0));
label_12df9c:
    // 0x12df9c: 0x16103e
    ctx->pc = 0x12df9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
label_12dfa0:
    // 0x12dfa0: 0x2203c
    ctx->pc = 0x12dfa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_12dfa4:
    // 0x12dfa4: 0x4203f
    ctx->pc = 0x12dfa4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_12dfa8:
    // 0x12dfa8: 0x483000c
label_12dfac:
    if (ctx->pc == 0x12DFACu) {
        ctx->pc = 0x12DFACu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x12DFB0u;
        goto label_12dfb0;
    }
    ctx->pc = 0x12DFA8u;
    {
        const bool branch_taken_0x12dfa8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x12dfa8) {
            ctx->pc = 0x12DFACu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x12DFDCu;
            goto label_12dfdc;
        }
    }
    ctx->pc = 0x12DFB0u;
label_12dfb0:
    // 0x12dfb0: 0x3c027fff
    ctx->pc = 0x12dfb0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)32767 << 16));
label_12dfb4:
    // 0x12dfb4: 0x3c03ffff
    ctx->pc = 0x12dfb4u;
    SET_GPR_S32(ctx, 3, ((uint32_t)65535 << 16));
label_12dfb8:
    // 0x12dfb8: 0x3183e
    ctx->pc = 0x12dfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_12dfbc:
    // 0x12dfbc: 0x3442ffff
    ctx->pc = 0x12dfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)65535);
label_12dfc0:
    // 0x12dfc0: 0x2c3b024
    ctx->pc = 0x12dfc0u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_12dfc4:
    // 0x12dfc4: 0x821024
    ctx->pc = 0x12dfc4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_12dfc8:
    // 0x12dfc8: 0x24030001
    ctx->pc = 0x12dfc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_12dfcc:
    // 0x12dfcc: 0x2103c
    ctx->pc = 0x12dfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_12dfd0:
    // 0x12dfd0: 0xae030000
    ctx->pc = 0x12dfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_12dfd4:
    // 0x12dfd4: 0x2c2b025
    ctx->pc = 0x12dfd4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
label_12dfd8:
    // 0x12dfd8: 0x16103e
    ctx->pc = 0x12dfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
label_12dfdc:
    // 0x12dfdc: 0x2803c
    ctx->pc = 0x12dfdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_12dfe0:
    // 0x12dfe0: 0x10803f
    ctx->pc = 0x12dfe0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_12dfe4:
    // 0x12dfe4: 0x3c037ff0
    ctx->pc = 0x12dfe4u;
    SET_GPR_S32(ctx, 3, ((uint32_t)32752 << 16));
label_12dfe8:
    // 0x12dfe8: 0x2031024
    ctx->pc = 0x12dfe8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_12dfec:
    // 0x12dfec: 0x14430016
label_12dff0:
    if (ctx->pc == 0x12DFF0u) {
        ctx->pc = 0x12DFF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12DFF4u;
        goto label_12dff4;
    }
    ctx->pc = 0x12DFECu;
    {
        const bool branch_taken_0x12dfec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x12DFF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12dfec) {
            ctx->pc = 0x12E048u;
            goto label_12e048;
        }
    }
    ctx->pc = 0x12DFF4u;
label_12dff4:
    // 0x12dff4: 0x8fa40010
    ctx->pc = 0x12dff4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_12dff8:
    // 0x12dff8: 0x2403270f
    ctx->pc = 0x12dff8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9999));
label_12dffc:
    // 0x12dffc: 0x2402ffff
    ctx->pc = 0x12dffcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_12e000:
    // 0x12e000: 0x2133a
    ctx->pc = 0x12e000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
label_12e004:
    // 0x12e004: 0x2c21024
    ctx->pc = 0x12e004u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_12e008:
    // 0x12e008: 0x14400004
label_12e00c:
    if (ctx->pc == 0x12E00Cu) {
        ctx->pc = 0x12E00Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x12E010u;
        goto label_12e010;
    }
    ctx->pc = 0x12E008u;
    {
        const bool branch_taken_0x12e008 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E00Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x12e008) {
            ctx->pc = 0x12E01Cu;
            goto label_12e01c;
        }
    }
    ctx->pc = 0x12E010u;
label_12e010:
    // 0x12e010: 0x3c020017
    ctx->pc = 0x12e010u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_12e014:
    // 0x12e014: 0x10000003
label_12e018:
    if (ctx->pc == 0x12E018u) {
        ctx->pc = 0x12E018u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 22768));
        ctx->pc = 0x12E01Cu;
        goto label_12e01c;
    }
    ctx->pc = 0x12E014u;
    {
        const bool branch_taken_0x12e014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E018u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 22768));
        if (branch_taken_0x12e014) {
            ctx->pc = 0x12E024u;
            goto label_12e024;
        }
    }
    ctx->pc = 0x12E01Cu;
label_12e01c:
    // 0x12e01c: 0x3c020017
    ctx->pc = 0x12e01cu;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_12e020:
    // 0x12e020: 0x24555900
    ctx->pc = 0x12e020u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 22784));
label_12e024:
    // 0x12e024: 0x8fa20014
    ctx->pc = 0x12e024u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12e028:
    // 0x12e028: 0x10400015
label_12e02c:
    if (ctx->pc == 0x12E02Cu) {
        ctx->pc = 0x12E02Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 8));
        ctx->pc = 0x12E030u;
        goto label_12e030;
    }
    ctx->pc = 0x12E028u;
    {
        const bool branch_taken_0x12e028 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E02Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 8));
        if (branch_taken_0x12e028) {
            ctx->pc = 0x12E080u;
            goto label_12e080;
        }
    }
    ctx->pc = 0x12E030u;
label_12e030:
    // 0x12e030: 0x82a20003
    ctx->pc = 0x12e030u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
label_12e034:
    // 0x12e034: 0x26a30003
    ctx->pc = 0x12e034u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 3));
label_12e038:
    // 0x12e038: 0x82180b
    ctx->pc = 0x12e038u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
label_12e03c:
    // 0x12e03c: 0x8fa40014
    ctx->pc = 0x12e03cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12e040:
    // 0x12e040: 0x1000000f
label_12e044:
    if (ctx->pc == 0x12E044u) {
        ctx->pc = 0x12E044u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x12E048u;
        goto label_12e048;
    }
    ctx->pc = 0x12E040u;
    {
        const bool branch_taken_0x12e040 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E044u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x12e040) {
            ctx->pc = 0x12E080u;
            goto label_12e080;
        }
    }
    ctx->pc = 0x12E048u;
label_12e048:
    // 0x12e048: 0xc04a482
label_12e04c:
    if (ctx->pc == 0x12E04Cu) {
        ctx->pc = 0x12E04Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E050u;
        goto label_12e050;
    }
    ctx->pc = 0x12E048u;
    SET_GPR_U32(ctx, 31, 0x12E050u);
    ctx->pc = 0x12E04Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E050u; }
    }
    if (ctx->pc != 0x12E050u) { return; }
    ctx->pc = 0x12E050u;
label_12e050:
    // 0x12e050: 0x1440000d
label_12e054:
    if (ctx->pc == 0x12E054u) {
        ctx->pc = 0x12E054u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E058u;
        goto label_12e058;
    }
    ctx->pc = 0x12E050u;
    {
        const bool branch_taken_0x12e050 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E054u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e050) {
            ctx->pc = 0x12E088u;
            goto label_12e088;
        }
    }
    ctx->pc = 0x12E058u;
label_12e058:
    // 0x12e058: 0x8fa40010
    ctx->pc = 0x12e058u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_12e05c:
    // 0x12e05c: 0x24020001
    ctx->pc = 0x12e05cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_12e060:
    // 0x12e060: 0x3c030017
    ctx->pc = 0x12e060u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_12e064:
    // 0x12e064: 0xac820000
    ctx->pc = 0x12e064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_12e068:
    // 0x12e068: 0x8fa20014
    ctx->pc = 0x12e068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12e06c:
    // 0x12e06c: 0x10400004
label_12e070:
    if (ctx->pc == 0x12E070u) {
        ctx->pc = 0x12E070u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 22792));
        ctx->pc = 0x12E074u;
        goto label_12e074;
    }
    ctx->pc = 0x12E06Cu;
    {
        const bool branch_taken_0x12e06c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E070u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 22792));
        if (branch_taken_0x12e06c) {
            ctx->pc = 0x12E080u;
            goto label_12e080;
        }
    }
    ctx->pc = 0x12E074u;
label_12e074:
    // 0x12e074: 0x8fa30014
    ctx->pc = 0x12e074u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12e078:
    // 0x12e078: 0x26a20001
    ctx->pc = 0x12e078u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 1));
label_12e07c:
    // 0x12e07c: 0xac620000
    ctx->pc = 0x12e07cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_12e080:
    // 0x12e080: 0x10000410
label_12e084:
    if (ctx->pc == 0x12E084u) {
        ctx->pc = 0x12E084u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E088u;
        goto label_12e088;
    }
    ctx->pc = 0x12E080u;
    {
        const bool branch_taken_0x12e080 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E084u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e080) {
            ctx->pc = 0x12F0C4u;
            goto label_12f0c4;
        }
    }
    ctx->pc = 0x12E088u;
label_12e088:
    // 0x12e088: 0x2c0282d
    ctx->pc = 0x12e088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12e08c:
    // 0x12e08c: 0x3a0302d
    ctx->pc = 0x12e08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12e090:
    // 0x12e090: 0xc04c2e6
label_12e094:
    if (ctx->pc == 0x12E094u) {
        ctx->pc = 0x12E094u;
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)4);
        ctx->pc = 0x12E098u;
        goto label_12e098;
    }
    ctx->pc = 0x12E090u;
    SET_GPR_U32(ctx, 31, 0x12E098u);
    ctx->pc = 0x12E094u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)4);
    ctx->pc = 0x130B98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _d2b_0x130b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E098u; }
    }
    if (ctx->pc != 0x12E098u) { return; }
    ctx->pc = 0x12E098u;
label_12e098:
    // 0x12e098: 0x101d02
    ctx->pc = 0x12e098u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 16), 20));
label_12e09c:
    // 0x12e09c: 0x307407ff
    ctx->pc = 0x12e09cu;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 3), 2047));
label_12e0a0:
    // 0x12e0a0: 0x12800015
label_12e0a4:
    if (ctx->pc == 0x12E0A4u) {
        ctx->pc = 0x12E0A4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x12E0A8u;
        goto label_12e0a8;
    }
    ctx->pc = 0x12E0A0u;
    {
        const bool branch_taken_0x12e0a0 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E0A4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x12e0a0) {
            ctx->pc = 0x12E0F8u;
            goto label_12e0f8;
        }
    }
    ctx->pc = 0x12E0A8u;
label_12e0a8:
    // 0x12e0a8: 0x2c0b82d
    ctx->pc = 0x12e0a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12e0ac:
    // 0x12e0ac: 0x3c02000f
    ctx->pc = 0x12e0acu;
    SET_GPR_S32(ctx, 2, ((uint32_t)15 << 16));
label_12e0b0:
    // 0x12e0b0: 0x17183f
    ctx->pc = 0x12e0b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
label_12e0b4:
    // 0x12e0b4: 0x3442ffff
    ctx->pc = 0x12e0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)65535);
label_12e0b8:
    // 0x12e0b8: 0x621824
    ctx->pc = 0x12e0b8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12e0bc:
    // 0x12e0bc: 0x3c05ffff
    ctx->pc = 0x12e0bcu;
    SET_GPR_S32(ctx, 5, ((uint32_t)65535 << 16));
label_12e0c0:
    // 0x12e0c0: 0x5283e
    ctx->pc = 0x12e0c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_12e0c4:
    // 0x12e0c4: 0x3183c
    ctx->pc = 0x12e0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_12e0c8:
    // 0x12e0c8: 0x2e5b824
    ctx->pc = 0x12e0c8u;
    SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
label_12e0cc:
    // 0x12e0cc: 0x2e3b825
    ctx->pc = 0x12e0ccu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
label_12e0d0:
    // 0x12e0d0: 0x3c043ff0
    ctx->pc = 0x12e0d0u;
    SET_GPR_S32(ctx, 4, ((uint32_t)16368 << 16));
label_12e0d4:
    // 0x12e0d4: 0x17103f
    ctx->pc = 0x12e0d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 23) >> (32 + 0));
label_12e0d8:
    // 0x12e0d8: 0x2694fc01
    ctx->pc = 0x12e0d8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294966273));
label_12e0dc:
    // 0x12e0dc: 0x441025
    ctx->pc = 0x12e0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_12e0e0:
    // 0x12e0e0: 0x2e5b824
    ctx->pc = 0x12e0e0u;
    SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
label_12e0e4:
    // 0x12e0e4: 0x2103c
    ctx->pc = 0x12e0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_12e0e8:
    // 0x12e0e8: 0xafa00044
    ctx->pc = 0x12e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_12e0ec:
    // 0x12e0ec: 0x2e2b825
    ctx->pc = 0x12e0ecu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
label_12e0f0:
    // 0x12e0f0: 0x10000027
label_12e0f4:
    if (ctx->pc == 0x12E0F4u) {
        ctx->pc = 0x12E0F4u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x12E0F8u;
        goto label_12e0f8;
    }
    ctx->pc = 0x12E0F0u;
    {
        const bool branch_taken_0x12e0f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E0F4u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x12e0f0) {
            ctx->pc = 0x12E190u;
            goto label_12e190;
        }
    }
    ctx->pc = 0x12E0F8u;
label_12e0f8:
    // 0x12e0f8: 0x8fa20000
    ctx->pc = 0x12e0f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e0fc:
    // 0x12e0fc: 0x8fb10004
    ctx->pc = 0x12e0fcu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12e100:
    // 0x12e100: 0x2222021
    ctx->pc = 0x12e100u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_12e104:
    // 0x12e104: 0x24940432
    ctx->pc = 0x12e104u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 4), 1074));
label_12e108:
    // 0x12e108: 0x2a820021
    ctx->pc = 0x12e108u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 33));
label_12e10c:
    // 0x12e10c: 0x14400009
label_12e110:
    if (ctx->pc == 0x12E110u) {
        ctx->pc = 0x12E110u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->pc = 0x12E114u;
        goto label_12e114;
    }
    ctx->pc = 0x12E10Cu;
    {
        const bool branch_taken_0x12e10c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E110u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        if (branch_taken_0x12e10c) {
            ctx->pc = 0x12E134u;
            goto label_12e134;
        }
    }
    ctx->pc = 0x12E114u;
label_12e114:
    // 0x12e114: 0x24840412
    ctx->pc = 0x12e114u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1042));
label_12e118:
    // 0x12e118: 0x141823
    ctx->pc = 0x12e118u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
label_12e11c:
    // 0x12e11c: 0x16103c
    ctx->pc = 0x12e11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_12e120:
    // 0x12e120: 0x2103f
    ctx->pc = 0x12e120u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_12e124:
    // 0x12e124: 0x701804
    ctx->pc = 0x12e124u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
label_12e128:
    // 0x12e128: 0x821006
    ctx->pc = 0x12e128u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_12e12c:
    // 0x12e12c: 0x10000004
label_12e130:
    if (ctx->pc == 0x12E130u) {
        ctx->pc = 0x12E130u;
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->pc = 0x12E134u;
        goto label_12e134;
    }
    ctx->pc = 0x12E12Cu;
    {
        const bool branch_taken_0x12e12c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E130u;
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        if (branch_taken_0x12e12c) {
            ctx->pc = 0x12E140u;
            goto label_12e140;
        }
    }
    ctx->pc = 0x12E134u;
label_12e134:
    // 0x12e134: 0x16183c
    ctx->pc = 0x12e134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
label_12e138:
    // 0x12e138: 0x3183f
    ctx->pc = 0x12e138u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_12e13c:
    // 0x12e13c: 0x438004
    ctx->pc = 0x12e13cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_12e140:
    // 0x12e140: 0xc04a496
label_12e144:
    if (ctx->pc == 0x12E144u) {
        ctx->pc = 0x12E144u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E148u;
        goto label_12e148;
    }
    ctx->pc = 0x12E140u;
    SET_GPR_U32(ctx, 31, 0x12E148u);
    ctx->pc = 0x12E144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129258u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x129258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E148u; }
    }
    if (ctx->pc != 0x12E148u) { return; }
    ctx->pc = 0x12E148u;
label_12e148:
    // 0x12e148: 0x6010006
label_12e14c:
    if (ctx->pc == 0x12E14Cu) {
        ctx->pc = 0x12E14Cu;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E150u;
        goto label_12e150;
    }
    ctx->pc = 0x12E148u;
    {
        const bool branch_taken_0x12e148 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x12E14Cu;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e148) {
            ctx->pc = 0x12E164u;
            goto label_12e164;
        }
    }
    ctx->pc = 0x12E150u;
label_12e150:
    // 0x12e150: 0x340583e0
    ctx->pc = 0x12e150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)33760);
label_12e154:
    // 0x12e154: 0x52bfc
    ctx->pc = 0x12e154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_12e158:
    // 0x12e158: 0xc04a308
label_12e15c:
    if (ctx->pc == 0x12E15Cu) {
        ctx->pc = 0x12E15Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E160u;
        goto label_12e160;
    }
    ctx->pc = 0x12E158u;
    SET_GPR_U32(ctx, 31, 0x12E160u);
    ctx->pc = 0x12E15Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x128c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E160u; }
    }
    if (ctx->pc != 0x12E160u) { return; }
    ctx->pc = 0x12E160u;
label_12e160:
    // 0x12e160: 0x40b82d
    ctx->pc = 0x12e160u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e164:
    // 0x12e164: 0x3c04ffff
    ctx->pc = 0x12e164u;
    SET_GPR_S32(ctx, 4, ((uint32_t)65535 << 16));
label_12e168:
    // 0x12e168: 0x4203e
    ctx->pc = 0x12e168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_12e16c:
    // 0x12e16c: 0x17183f
    ctx->pc = 0x12e16cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
label_12e170:
    // 0x12e170: 0x3c02fe10
    ctx->pc = 0x12e170u;
    SET_GPR_S32(ctx, 2, ((uint32_t)65040 << 16));
label_12e174:
    // 0x12e174: 0x2e4b824
    ctx->pc = 0x12e174u;
    SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_12e178:
    // 0x12e178: 0x621821
    ctx->pc = 0x12e178u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12e17c:
    // 0x12e17c: 0x24040001
    ctx->pc = 0x12e17cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_12e180:
    // 0x12e180: 0x3183c
    ctx->pc = 0x12e180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_12e184:
    // 0x12e184: 0xafa40044
    ctx->pc = 0x12e184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_12e188:
    // 0x12e188: 0x2694fbcd
    ctx->pc = 0x12e188u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294966221));
label_12e18c:
    // 0x12e18c: 0x2e3b825
    ctx->pc = 0x12e18cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
label_12e190:
    // 0x12e190: 0x3405ffe0
    ctx->pc = 0x12e190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)65504);
label_12e194:
    // 0x12e194: 0x52bbc
    ctx->pc = 0x12e194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_12e198:
    // 0x12e198: 0xc04a31e
label_12e19c:
    if (ctx->pc == 0x12E19Cu) {
        ctx->pc = 0x12E19Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E1A0u;
        goto label_12e1a0;
    }
    ctx->pc = 0x12E198u;
    SET_GPR_U32(ctx, 31, 0x12E1A0u);
    ctx->pc = 0x12E19Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1A0u; }
    }
    if (ctx->pc != 0x12E1A0u) { return; }
    ctx->pc = 0x12E1A0u;
label_12e1a0:
    // 0x12e1a0: 0x3c010017
    ctx->pc = 0x12e1a0u;
    SET_GPR_S32(ctx, 1, ((uint32_t)23 << 16));
label_12e1a4:
    // 0x12e1a4: 0xdc255910
    ctx->pc = 0x12e1a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22800)));
label_12e1a8:
    // 0x12e1a8: 0xc04a338
label_12e1ac:
    if (ctx->pc == 0x12E1ACu) {
        ctx->pc = 0x12E1ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E1B0u;
        goto label_12e1b0;
    }
    ctx->pc = 0x12E1A8u;
    SET_GPR_U32(ctx, 31, 0x12E1B0u);
    ctx->pc = 0x12E1ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1B0u; }
    }
    if (ctx->pc != 0x12E1B0u) { return; }
    ctx->pc = 0x12E1B0u;
label_12e1b0:
    // 0x12e1b0: 0x3c010017
    ctx->pc = 0x12e1b0u;
    SET_GPR_S32(ctx, 1, ((uint32_t)23 << 16));
label_12e1b4:
    // 0x12e1b4: 0xdc255918
    ctx->pc = 0x12e1b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22808)));
label_12e1b8:
    // 0x12e1b8: 0xc04a308
label_12e1bc:
    if (ctx->pc == 0x12E1BCu) {
        ctx->pc = 0x12E1BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E1C0u;
        goto label_12e1c0;
    }
    ctx->pc = 0x12E1B8u;
    SET_GPR_U32(ctx, 31, 0x12E1C0u);
    ctx->pc = 0x12E1BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x128c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1C0u; }
    }
    if (ctx->pc != 0x12E1C0u) { return; }
    ctx->pc = 0x12E1C0u;
label_12e1c0:
    // 0x12e1c0: 0x40802d
    ctx->pc = 0x12e1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e1c4:
    // 0x12e1c4: 0xc04a496
label_12e1c8:
    if (ctx->pc == 0x12E1C8u) {
        ctx->pc = 0x12E1C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E1CCu;
        goto label_12e1cc;
    }
    ctx->pc = 0x12E1C4u;
    SET_GPR_U32(ctx, 31, 0x12E1CCu);
    ctx->pc = 0x12E1C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129258u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x129258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1CCu; }
    }
    if (ctx->pc != 0x12E1CCu) { return; }
    ctx->pc = 0x12E1CCu;
label_12e1cc:
    // 0x12e1cc: 0x3c010017
    ctx->pc = 0x12e1ccu;
    SET_GPR_S32(ctx, 1, ((uint32_t)23 << 16));
label_12e1d0:
    // 0x12e1d0: 0xdc255920
    ctx->pc = 0x12e1d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22816)));
label_12e1d4:
    // 0x12e1d4: 0xc04a338
label_12e1d8:
    if (ctx->pc == 0x12E1D8u) {
        ctx->pc = 0x12E1D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E1DCu;
        goto label_12e1dc;
    }
    ctx->pc = 0x12E1D4u;
    SET_GPR_U32(ctx, 31, 0x12E1DCu);
    ctx->pc = 0x12E1D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1DCu; }
    }
    if (ctx->pc != 0x12E1DCu) { return; }
    ctx->pc = 0x12E1DCu;
label_12e1dc:
    // 0x12e1dc: 0x200202d
    ctx->pc = 0x12e1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e1e0:
    // 0x12e1e0: 0xc04a308
label_12e1e4:
    if (ctx->pc == 0x12E1E4u) {
        ctx->pc = 0x12E1E4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E1E8u;
        goto label_12e1e8;
    }
    ctx->pc = 0x12E1E0u;
    SET_GPR_U32(ctx, 31, 0x12E1E8u);
    ctx->pc = 0x12E1E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x128c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1E8u; }
    }
    if (ctx->pc != 0x12E1E8u) { return; }
    ctx->pc = 0x12E1E8u;
label_12e1e8:
    // 0x12e1e8: 0x40902d
    ctx->pc = 0x12e1e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e1ec:
    // 0x12e1ec: 0xc04a4c4
label_12e1f0:
    if (ctx->pc == 0x12E1F0u) {
        ctx->pc = 0x12E1F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E1F4u;
        goto label_12e1f4;
    }
    ctx->pc = 0x12E1ECu;
    SET_GPR_U32(ctx, 31, 0x12E1F4u);
    ctx->pc = 0x12E1F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129310u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x129310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1F4u; }
    }
    if (ctx->pc != 0x12E1F4u) { return; }
    ctx->pc = 0x12E1F4u;
label_12e1f4:
    // 0x12e1f4: 0x40982d
    ctx->pc = 0x12e1f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e1f8:
    // 0x12e1f8: 0x240202d
    ctx->pc = 0x12e1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12e1fc:
    // 0x12e1fc: 0xc04a482
label_12e200:
    if (ctx->pc == 0x12E200u) {
        ctx->pc = 0x12E200u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E204u;
        goto label_12e204;
    }
    ctx->pc = 0x12E1FCu;
    SET_GPR_U32(ctx, 31, 0x12E204u);
    ctx->pc = 0x12E200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E204u; }
    }
    if (ctx->pc != 0x12E204u) { return; }
    ctx->pc = 0x12E204u;
label_12e204:
    // 0x12e204: 0x4410009
label_12e208:
    if (ctx->pc == 0x12E208u) {
        ctx->pc = 0x12E208u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12E20Cu;
        goto label_12e20c;
    }
    ctx->pc = 0x12E204u;
    {
        const bool branch_taken_0x12e204 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12E208u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x12e204) {
            ctx->pc = 0x12E22Cu;
            goto label_12e22c;
        }
    }
    ctx->pc = 0x12E20Cu;
label_12e20c:
    // 0x12e20c: 0xc04a496
label_12e210:
    if (ctx->pc == 0x12E210u) {
        ctx->pc = 0x12E210u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E214u;
        goto label_12e214;
    }
    ctx->pc = 0x12E20Cu;
    SET_GPR_U32(ctx, 31, 0x12E214u);
    ctx->pc = 0x12E210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129258u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x129258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E214u; }
    }
    if (ctx->pc != 0x12E214u) { return; }
    ctx->pc = 0x12E214u;
label_12e214:
    // 0x12e214: 0x240202d
    ctx->pc = 0x12e214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12e218:
    // 0x12e218: 0xc04a482
label_12e21c:
    if (ctx->pc == 0x12E21Cu) {
        ctx->pc = 0x12E21Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E220u;
        goto label_12e220;
    }
    ctx->pc = 0x12E218u;
    SET_GPR_U32(ctx, 31, 0x12E220u);
    ctx->pc = 0x12E21Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E220u; }
    }
    if (ctx->pc != 0x12E220u) { return; }
    ctx->pc = 0x12E220u;
label_12e220:
    // 0x12e220: 0x2663ffff
    ctx->pc = 0x12e220u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 4294967295));
label_12e224:
    // 0x12e224: 0x62980b
    ctx->pc = 0x12e224u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
label_12e228:
    // 0x12e228: 0x24020001
    ctx->pc = 0x12e228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_12e22c:
    // 0x12e22c: 0xafa20030
    ctx->pc = 0x12e22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_12e230:
    // 0x12e230: 0x2e620017
    ctx->pc = 0x12e230u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 23));
label_12e234:
    // 0x12e234: 0x1040000c
label_12e238:
    if (ctx->pc == 0x12E238u) {
        ctx->pc = 0x12E238u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        ctx->pc = 0x12E23Cu;
        goto label_12e23c;
    }
    ctx->pc = 0x12E234u;
    {
        const bool branch_taken_0x12e234 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E238u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x12e234) {
            ctx->pc = 0x12E268u;
            goto label_12e268;
        }
    }
    ctx->pc = 0x12E23Cu;
label_12e23c:
    // 0x12e23c: 0x1318c0
    ctx->pc = 0x12e23cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 3));
label_12e240:
    // 0x12e240: 0x244259a0
    ctx->pc = 0x12e240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22944));
label_12e244:
    // 0x12e244: 0x2c0202d
    ctx->pc = 0x12e244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12e248:
    // 0x12e248: 0x621821
    ctx->pc = 0x12e248u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12e24c:
    // 0x12e24c: 0xafa00030
    ctx->pc = 0x12e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_12e250:
    // 0x12e250: 0xc04a482
label_12e254:
    if (ctx->pc == 0x12E254u) {
        ctx->pc = 0x12E254u;
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x12E258u;
        goto label_12e258;
    }
    ctx->pc = 0x12E250u;
    SET_GPR_U32(ctx, 31, 0x12E258u);
    ctx->pc = 0x12E254u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E258u; }
    }
    if (ctx->pc != 0x12E258u) { return; }
    ctx->pc = 0x12E258u;
label_12e258:
    // 0x12e258: 0x2403ffff
    ctx->pc = 0x12e258u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_12e25c:
    // 0x12e25c: 0x2664ffff
    ctx->pc = 0x12e25cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294967295));
label_12e260:
    // 0x12e260: 0x62182a
    ctx->pc = 0x12e260u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_12e264:
    // 0x12e264: 0x83980a
    ctx->pc = 0x12e264u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 4));
label_12e268:
    // 0x12e268: 0x2341023
    ctx->pc = 0x12e268u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_12e26c:
    // 0x12e26c: 0x2450ffff
    ctx->pc = 0x12e26cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967295));
label_12e270:
    // 0x12e270: 0x6020004
label_12e274:
    if (ctx->pc == 0x12E274u) {
        ctx->pc = 0x12E274u;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->pc = 0x12E278u;
        goto label_12e278;
    }
    ctx->pc = 0x12E270u;
    {
        const bool branch_taken_0x12e270 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x12e270) {
            ctx->pc = 0x12E274u;
            SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
            ctx->pc = 0x12E284u;
            goto label_12e284;
        }
    }
    ctx->pc = 0x12E278u;
label_12e278:
    // 0x12e278: 0xafb00038
    ctx->pc = 0x12e278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
label_12e27c:
    // 0x12e27c: 0x10000003
label_12e280:
    if (ctx->pc == 0x12E280u) {
        ctx->pc = 0x12E280u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x12E284u;
        goto label_12e284;
    }
    ctx->pc = 0x12E27Cu;
    {
        const bool branch_taken_0x12e27c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E280u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        if (branch_taken_0x12e27c) {
            ctx->pc = 0x12E28Cu;
            goto label_12e28c;
        }
    }
    ctx->pc = 0x12E284u;
label_12e284:
    // 0x12e284: 0xafa00038
    ctx->pc = 0x12e284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_12e288:
    // 0x12e288: 0xafb00018
    ctx->pc = 0x12e288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_12e28c:
    // 0x12e28c: 0x6600006
label_12e290:
    if (ctx->pc == 0x12E290u) {
        ctx->pc = 0x12E290u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->pc = 0x12E294u;
        goto label_12e294;
    }
    ctx->pc = 0x12E28Cu;
    {
        const bool branch_taken_0x12e28c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x12E290u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        if (branch_taken_0x12e28c) {
            ctx->pc = 0x12E2A8u;
            goto label_12e2a8;
        }
    }
    ctx->pc = 0x12E294u;
label_12e294:
    // 0x12e294: 0xafa0001c
    ctx->pc = 0x12e294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_12e298:
    // 0x12e298: 0x731821
    ctx->pc = 0x12e298u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_12e29c:
    // 0x12e29c: 0xafb3003c
    ctx->pc = 0x12e29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 19));
label_12e2a0:
    // 0x12e2a0: 0x10000007
label_12e2a4:
    if (ctx->pc == 0x12E2A4u) {
        ctx->pc = 0x12E2A4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x12E2A8u;
        goto label_12e2a8;
    }
    ctx->pc = 0x12E2A0u;
    {
        const bool branch_taken_0x12e2a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E2A4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        if (branch_taken_0x12e2a0) {
            ctx->pc = 0x12E2C0u;
            goto label_12e2c0;
        }
    }
    ctx->pc = 0x12E2A8u;
label_12e2a8:
    // 0x12e2a8: 0x8fa40018
    ctx->pc = 0x12e2a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12e2ac:
    // 0x12e2ac: 0x131023
    ctx->pc = 0x12e2acu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_12e2b0:
    // 0x12e2b0: 0xafa2001c
    ctx->pc = 0x12e2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_12e2b4:
    // 0x12e2b4: 0x932023
    ctx->pc = 0x12e2b4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_12e2b8:
    // 0x12e2b8: 0xafa0003c
    ctx->pc = 0x12e2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_12e2bc:
    // 0x12e2bc: 0xafa40018
    ctx->pc = 0x12e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_12e2c0:
    // 0x12e2c0: 0x8fa40008
    ctx->pc = 0x12e2c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_12e2c4:
    // 0x12e2c4: 0x24120001
    ctx->pc = 0x12e2c4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_12e2c8:
    // 0x12e2c8: 0x2c83000a
    ctx->pc = 0x12e2c8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), 10));
label_12e2cc:
    // 0x12e2cc: 0x3200a
    ctx->pc = 0x12e2ccu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
label_12e2d0:
    // 0x12e2d0: 0x28820006
    ctx->pc = 0x12e2d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 6));
label_12e2d4:
    // 0x12e2d4: 0x14400004
label_12e2d8:
    if (ctx->pc == 0x12E2D8u) {
        ctx->pc = 0x12E2D8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->pc = 0x12E2DCu;
        goto label_12e2dc;
    }
    ctx->pc = 0x12E2D4u;
    {
        const bool branch_taken_0x12e2d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E2D8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        if (branch_taken_0x12e2d4) {
            ctx->pc = 0x12E2E8u;
            goto label_12e2e8;
        }
    }
    ctx->pc = 0x12E2DCu;
label_12e2dc:
    // 0x12e2dc: 0x2484fffc
    ctx->pc = 0x12e2dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
label_12e2e0:
    // 0x12e2e0: 0x902d
    ctx->pc = 0x12e2e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e2e4:
    // 0x12e2e4: 0xafa40008
    ctx->pc = 0x12e2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_12e2e8:
    // 0x12e2e8: 0x24020001
    ctx->pc = 0x12e2e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_12e2ec:
    // 0x12e2ec: 0x8fa30008
    ctx->pc = 0x12e2ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_12e2f0:
    // 0x12e2f0: 0xafa20034
    ctx->pc = 0x12e2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_12e2f4:
    // 0x12e2f4: 0x2c620006
    ctx->pc = 0x12e2f4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 6));
label_12e2f8:
    // 0x12e2f8: 0x10400020
label_12e2fc:
    if (ctx->pc == 0x12E2FCu) {
        ctx->pc = 0x12E2FCu;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        ctx->pc = 0x12E300u;
        goto label_12e300;
    }
    ctx->pc = 0x12E2F8u;
    {
        const bool branch_taken_0x12e2f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E2FCu;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x12e2f8) {
            ctx->pc = 0x12E37Cu;
            goto label_12e37c;
        }
    }
    ctx->pc = 0x12E300u;
label_12e300:
    // 0x12e300: 0x31880
    ctx->pc = 0x12e300u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_12e304:
    // 0x12e304: 0x24425930
    ctx->pc = 0x12e304u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22832));
label_12e308:
    // 0x12e308: 0x621821
    ctx->pc = 0x12e308u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12e30c:
    // 0x12e30c: 0x8c640000
    ctx->pc = 0x12e30cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12e310:
    // 0x12e310: 0x800008
label_12e314:
    if (ctx->pc == 0x12E314u) {
        ctx->pc = 0x12E318u;
        goto label_12e318;
    }
    ctx->pc = 0x12E310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DF28u: goto label_12df28;
            case 0x12DF2Cu: goto label_12df2c;
            case 0x12DF30u: goto label_12df30;
            case 0x12DF34u: goto label_12df34;
            case 0x12DF38u: goto label_12df38;
            case 0x12DF3Cu: goto label_12df3c;
            case 0x12DF40u: goto label_12df40;
            case 0x12DF44u: goto label_12df44;
            case 0x12DF48u: goto label_12df48;
            case 0x12DF4Cu: goto label_12df4c;
            case 0x12DF50u: goto label_12df50;
            case 0x12DF54u: goto label_12df54;
            case 0x12DF58u: goto label_12df58;
            case 0x12DF5Cu: goto label_12df5c;
            case 0x12DF60u: goto label_12df60;
            case 0x12DF64u: goto label_12df64;
            case 0x12DF68u: goto label_12df68;
            case 0x12DF6Cu: goto label_12df6c;
            case 0x12DF70u: goto label_12df70;
            case 0x12DF74u: goto label_12df74;
            case 0x12DF78u: goto label_12df78;
            case 0x12DF7Cu: goto label_12df7c;
            case 0x12DF80u: goto label_12df80;
            case 0x12DF84u: goto label_12df84;
            case 0x12DF88u: goto label_12df88;
            case 0x12DF8Cu: goto label_12df8c;
            case 0x12DF90u: goto label_12df90;
            case 0x12DF94u: goto label_12df94;
            case 0x12DF98u: goto label_12df98;
            case 0x12DF9Cu: goto label_12df9c;
            case 0x12DFA0u: goto label_12dfa0;
            case 0x12DFA4u: goto label_12dfa4;
            case 0x12DFA8u: goto label_12dfa8;
            case 0x12DFACu: goto label_12dfac;
            case 0x12DFB0u: goto label_12dfb0;
            case 0x12DFB4u: goto label_12dfb4;
            case 0x12DFB8u: goto label_12dfb8;
            case 0x12DFBCu: goto label_12dfbc;
            case 0x12DFC0u: goto label_12dfc0;
            case 0x12DFC4u: goto label_12dfc4;
            case 0x12DFC8u: goto label_12dfc8;
            case 0x12DFCCu: goto label_12dfcc;
            case 0x12DFD0u: goto label_12dfd0;
            case 0x12DFD4u: goto label_12dfd4;
            case 0x12DFD8u: goto label_12dfd8;
            case 0x12DFDCu: goto label_12dfdc;
            case 0x12DFE0u: goto label_12dfe0;
            case 0x12DFE4u: goto label_12dfe4;
            case 0x12DFE8u: goto label_12dfe8;
            case 0x12DFECu: goto label_12dfec;
            case 0x12DFF0u: goto label_12dff0;
            case 0x12DFF4u: goto label_12dff4;
            case 0x12DFF8u: goto label_12dff8;
            case 0x12DFFCu: goto label_12dffc;
            case 0x12E000u: goto label_12e000;
            case 0x12E004u: goto label_12e004;
            case 0x12E008u: goto label_12e008;
            case 0x12E00Cu: goto label_12e00c;
            case 0x12E010u: goto label_12e010;
            case 0x12E014u: goto label_12e014;
            case 0x12E018u: goto label_12e018;
            case 0x12E01Cu: goto label_12e01c;
            case 0x12E020u: goto label_12e020;
            case 0x12E024u: goto label_12e024;
            case 0x12E028u: goto label_12e028;
            case 0x12E02Cu: goto label_12e02c;
            case 0x12E030u: goto label_12e030;
            case 0x12E034u: goto label_12e034;
            case 0x12E038u: goto label_12e038;
            case 0x12E03Cu: goto label_12e03c;
            case 0x12E040u: goto label_12e040;
            case 0x12E044u: goto label_12e044;
            case 0x12E048u: goto label_12e048;
            case 0x12E04Cu: goto label_12e04c;
            case 0x12E050u: goto label_12e050;
            case 0x12E054u: goto label_12e054;
            case 0x12E058u: goto label_12e058;
            case 0x12E05Cu: goto label_12e05c;
            case 0x12E060u: goto label_12e060;
            case 0x12E064u: goto label_12e064;
            case 0x12E068u: goto label_12e068;
            case 0x12E06Cu: goto label_12e06c;
            case 0x12E070u: goto label_12e070;
            case 0x12E074u: goto label_12e074;
            case 0x12E078u: goto label_12e078;
            case 0x12E07Cu: goto label_12e07c;
            case 0x12E080u: goto label_12e080;
            case 0x12E084u: goto label_12e084;
            case 0x12E088u: goto label_12e088;
            case 0x12E08Cu: goto label_12e08c;
            case 0x12E090u: goto label_12e090;
            case 0x12E094u: goto label_12e094;
            case 0x12E098u: goto label_12e098;
            case 0x12E09Cu: goto label_12e09c;
            case 0x12E0A0u: goto label_12e0a0;
            case 0x12E0A4u: goto label_12e0a4;
            case 0x12E0A8u: goto label_12e0a8;
            case 0x12E0ACu: goto label_12e0ac;
            case 0x12E0B0u: goto label_12e0b0;
            case 0x12E0B4u: goto label_12e0b4;
            case 0x12E0B8u: goto label_12e0b8;
            case 0x12E0BCu: goto label_12e0bc;
            case 0x12E0C0u: goto label_12e0c0;
            case 0x12E0C4u: goto label_12e0c4;
            case 0x12E0C8u: goto label_12e0c8;
            case 0x12E0CCu: goto label_12e0cc;
            case 0x12E0D0u: goto label_12e0d0;
            case 0x12E0D4u: goto label_12e0d4;
            case 0x12E0D8u: goto label_12e0d8;
            case 0x12E0DCu: goto label_12e0dc;
            case 0x12E0E0u: goto label_12e0e0;
            case 0x12E0E4u: goto label_12e0e4;
            case 0x12E0E8u: goto label_12e0e8;
            case 0x12E0ECu: goto label_12e0ec;
            case 0x12E0F0u: goto label_12e0f0;
            case 0x12E0F4u: goto label_12e0f4;
            case 0x12E0F8u: goto label_12e0f8;
            case 0x12E0FCu: goto label_12e0fc;
            case 0x12E100u: goto label_12e100;
            case 0x12E104u: goto label_12e104;
            case 0x12E108u: goto label_12e108;
            case 0x12E10Cu: goto label_12e10c;
            case 0x12E110u: goto label_12e110;
            case 0x12E114u: goto label_12e114;
            case 0x12E118u: goto label_12e118;
            case 0x12E11Cu: goto label_12e11c;
            case 0x12E120u: goto label_12e120;
            case 0x12E124u: goto label_12e124;
            case 0x12E128u: goto label_12e128;
            case 0x12E12Cu: goto label_12e12c;
            case 0x12E130u: goto label_12e130;
            case 0x12E134u: goto label_12e134;
            case 0x12E138u: goto label_12e138;
            case 0x12E13Cu: goto label_12e13c;
            case 0x12E140u: goto label_12e140;
            case 0x12E144u: goto label_12e144;
            case 0x12E148u: goto label_12e148;
            case 0x12E14Cu: goto label_12e14c;
            case 0x12E150u: goto label_12e150;
            case 0x12E154u: goto label_12e154;
            case 0x12E158u: goto label_12e158;
            case 0x12E15Cu: goto label_12e15c;
            case 0x12E160u: goto label_12e160;
            case 0x12E164u: goto label_12e164;
            case 0x12E168u: goto label_12e168;
            case 0x12E16Cu: goto label_12e16c;
            case 0x12E170u: goto label_12e170;
            case 0x12E174u: goto label_12e174;
            case 0x12E178u: goto label_12e178;
            case 0x12E17Cu: goto label_12e17c;
            case 0x12E180u: goto label_12e180;
            case 0x12E184u: goto label_12e184;
            case 0x12E188u: goto label_12e188;
            case 0x12E18Cu: goto label_12e18c;
            case 0x12E190u: goto label_12e190;
            case 0x12E194u: goto label_12e194;
            case 0x12E198u: goto label_12e198;
            case 0x12E19Cu: goto label_12e19c;
            case 0x12E1A0u: goto label_12e1a0;
            case 0x12E1A4u: goto label_12e1a4;
            case 0x12E1A8u: goto label_12e1a8;
            case 0x12E1ACu: goto label_12e1ac;
            case 0x12E1B0u: goto label_12e1b0;
            case 0x12E1B4u: goto label_12e1b4;
            case 0x12E1B8u: goto label_12e1b8;
            case 0x12E1BCu: goto label_12e1bc;
            case 0x12E1C0u: goto label_12e1c0;
            case 0x12E1C4u: goto label_12e1c4;
            case 0x12E1C8u: goto label_12e1c8;
            case 0x12E1CCu: goto label_12e1cc;
            case 0x12E1D0u: goto label_12e1d0;
            case 0x12E1D4u: goto label_12e1d4;
            case 0x12E1D8u: goto label_12e1d8;
            case 0x12E1DCu: goto label_12e1dc;
            case 0x12E1E0u: goto label_12e1e0;
            case 0x12E1E4u: goto label_12e1e4;
            case 0x12E1E8u: goto label_12e1e8;
            case 0x12E1ECu: goto label_12e1ec;
            case 0x12E1F0u: goto label_12e1f0;
            case 0x12E1F4u: goto label_12e1f4;
            case 0x12E1F8u: goto label_12e1f8;
            case 0x12E1FCu: goto label_12e1fc;
            case 0x12E200u: goto label_12e200;
            case 0x12E204u: goto label_12e204;
            case 0x12E208u: goto label_12e208;
            case 0x12E20Cu: goto label_12e20c;
            case 0x12E210u: goto label_12e210;
            case 0x12E214u: goto label_12e214;
            case 0x12E218u: goto label_12e218;
            case 0x12E21Cu: goto label_12e21c;
            case 0x12E220u: goto label_12e220;
            case 0x12E224u: goto label_12e224;
            case 0x12E228u: goto label_12e228;
            case 0x12E22Cu: goto label_12e22c;
            case 0x12E230u: goto label_12e230;
            case 0x12E234u: goto label_12e234;
            case 0x12E238u: goto label_12e238;
            case 0x12E23Cu: goto label_12e23c;
            case 0x12E240u: goto label_12e240;
            case 0x12E244u: goto label_12e244;
            case 0x12E248u: goto label_12e248;
            case 0x12E24Cu: goto label_12e24c;
            case 0x12E250u: goto label_12e250;
            case 0x12E254u: goto label_12e254;
            case 0x12E258u: goto label_12e258;
            case 0x12E25Cu: goto label_12e25c;
            case 0x12E260u: goto label_12e260;
            case 0x12E264u: goto label_12e264;
            case 0x12E268u: goto label_12e268;
            case 0x12E26Cu: goto label_12e26c;
            case 0x12E270u: goto label_12e270;
            case 0x12E274u: goto label_12e274;
            case 0x12E278u: goto label_12e278;
            case 0x12E27Cu: goto label_12e27c;
            case 0x12E280u: goto label_12e280;
            case 0x12E284u: goto label_12e284;
            case 0x12E288u: goto label_12e288;
            case 0x12E28Cu: goto label_12e28c;
            case 0x12E290u: goto label_12e290;
            case 0x12E294u: goto label_12e294;
            case 0x12E298u: goto label_12e298;
            case 0x12E29Cu: goto label_12e29c;
            case 0x12E2A0u: goto label_12e2a0;
            case 0x12E2A4u: goto label_12e2a4;
            case 0x12E2A8u: goto label_12e2a8;
            case 0x12E2ACu: goto label_12e2ac;
            case 0x12E2B0u: goto label_12e2b0;
            case 0x12E2B4u: goto label_12e2b4;
            case 0x12E2B8u: goto label_12e2b8;
            case 0x12E2BCu: goto label_12e2bc;
            case 0x12E2C0u: goto label_12e2c0;
            case 0x12E2C4u: goto label_12e2c4;
            case 0x12E2C8u: goto label_12e2c8;
            case 0x12E2CCu: goto label_12e2cc;
            case 0x12E2D0u: goto label_12e2d0;
            case 0x12E2D4u: goto label_12e2d4;
            case 0x12E2D8u: goto label_12e2d8;
            case 0x12E2DCu: goto label_12e2dc;
            case 0x12E2E0u: goto label_12e2e0;
            case 0x12E2E4u: goto label_12e2e4;
            case 0x12E2E8u: goto label_12e2e8;
            case 0x12E2ECu: goto label_12e2ec;
            case 0x12E2F0u: goto label_12e2f0;
            case 0x12E2F4u: goto label_12e2f4;
            case 0x12E2F8u: goto label_12e2f8;
            case 0x12E2FCu: goto label_12e2fc;
            case 0x12E300u: goto label_12e300;
            case 0x12E304u: goto label_12e304;
            case 0x12E308u: goto label_12e308;
            case 0x12E30Cu: goto label_12e30c;
            case 0x12E310u: goto label_12e310;
            case 0x12E314u: goto label_12e314;
            case 0x12E318u: goto label_12e318;
            case 0x12E31Cu: goto label_12e31c;
            case 0x12E320u: goto label_12e320;
            case 0x12E324u: goto label_12e324;
            case 0x12E328u: goto label_12e328;
            case 0x12E32Cu: goto label_12e32c;
            case 0x12E330u: goto label_12e330;
            case 0x12E334u: goto label_12e334;
            case 0x12E338u: goto label_12e338;
            case 0x12E33Cu: goto label_12e33c;
            case 0x12E340u: goto label_12e340;
            case 0x12E344u: goto label_12e344;
            case 0x12E348u: goto label_12e348;
            case 0x12E34Cu: goto label_12e34c;
            case 0x12E350u: goto label_12e350;
            case 0x12E354u: goto label_12e354;
            case 0x12E358u: goto label_12e358;
            case 0x12E35Cu: goto label_12e35c;
            case 0x12E360u: goto label_12e360;
            case 0x12E364u: goto label_12e364;
            case 0x12E368u: goto label_12e368;
            case 0x12E36Cu: goto label_12e36c;
            case 0x12E370u: goto label_12e370;
            case 0x12E374u: goto label_12e374;
            case 0x12E378u: goto label_12e378;
            case 0x12E37Cu: goto label_12e37c;
            case 0x12E380u: goto label_12e380;
            case 0x12E384u: goto label_12e384;
            case 0x12E388u: goto label_12e388;
            case 0x12E38Cu: goto label_12e38c;
            case 0x12E390u: goto label_12e390;
            case 0x12E394u: goto label_12e394;
            case 0x12E398u: goto label_12e398;
            case 0x12E39Cu: goto label_12e39c;
            case 0x12E3A0u: goto label_12e3a0;
            case 0x12E3A4u: goto label_12e3a4;
            case 0x12E3A8u: goto label_12e3a8;
            case 0x12E3ACu: goto label_12e3ac;
            case 0x12E3B0u: goto label_12e3b0;
            case 0x12E3B4u: goto label_12e3b4;
            case 0x12E3B8u: goto label_12e3b8;
            case 0x12E3BCu: goto label_12e3bc;
            case 0x12E3C0u: goto label_12e3c0;
            case 0x12E3C4u: goto label_12e3c4;
            case 0x12E3C8u: goto label_12e3c8;
            case 0x12E3CCu: goto label_12e3cc;
            case 0x12E3D0u: goto label_12e3d0;
            case 0x12E3D4u: goto label_12e3d4;
            case 0x12E3D8u: goto label_12e3d8;
            case 0x12E3DCu: goto label_12e3dc;
            case 0x12E3E0u: goto label_12e3e0;
            case 0x12E3E4u: goto label_12e3e4;
            case 0x12E3E8u: goto label_12e3e8;
            case 0x12E3ECu: goto label_12e3ec;
            case 0x12E3F0u: goto label_12e3f0;
            case 0x12E3F4u: goto label_12e3f4;
            case 0x12E3F8u: goto label_12e3f8;
            case 0x12E3FCu: goto label_12e3fc;
            case 0x12E400u: goto label_12e400;
            case 0x12E404u: goto label_12e404;
            case 0x12E408u: goto label_12e408;
            case 0x12E40Cu: goto label_12e40c;
            case 0x12E410u: goto label_12e410;
            case 0x12E414u: goto label_12e414;
            case 0x12E418u: goto label_12e418;
            case 0x12E41Cu: goto label_12e41c;
            case 0x12E420u: goto label_12e420;
            case 0x12E424u: goto label_12e424;
            case 0x12E428u: goto label_12e428;
            case 0x12E42Cu: goto label_12e42c;
            case 0x12E430u: goto label_12e430;
            case 0x12E434u: goto label_12e434;
            case 0x12E438u: goto label_12e438;
            case 0x12E43Cu: goto label_12e43c;
            case 0x12E440u: goto label_12e440;
            case 0x12E444u: goto label_12e444;
            case 0x12E448u: goto label_12e448;
            case 0x12E44Cu: goto label_12e44c;
            case 0x12E450u: goto label_12e450;
            case 0x12E454u: goto label_12e454;
            case 0x12E458u: goto label_12e458;
            case 0x12E45Cu: goto label_12e45c;
            case 0x12E460u: goto label_12e460;
            case 0x12E464u: goto label_12e464;
            case 0x12E468u: goto label_12e468;
            case 0x12E46Cu: goto label_12e46c;
            case 0x12E470u: goto label_12e470;
            case 0x12E474u: goto label_12e474;
            case 0x12E478u: goto label_12e478;
            case 0x12E47Cu: goto label_12e47c;
            case 0x12E480u: goto label_12e480;
            case 0x12E484u: goto label_12e484;
            case 0x12E488u: goto label_12e488;
            case 0x12E48Cu: goto label_12e48c;
            case 0x12E490u: goto label_12e490;
            case 0x12E494u: goto label_12e494;
            case 0x12E498u: goto label_12e498;
            case 0x12E49Cu: goto label_12e49c;
            case 0x12E4A0u: goto label_12e4a0;
            case 0x12E4A4u: goto label_12e4a4;
            case 0x12E4A8u: goto label_12e4a8;
            case 0x12E4ACu: goto label_12e4ac;
            case 0x12E4B0u: goto label_12e4b0;
            case 0x12E4B4u: goto label_12e4b4;
            case 0x12E4B8u: goto label_12e4b8;
            case 0x12E4BCu: goto label_12e4bc;
            case 0x12E4C0u: goto label_12e4c0;
            case 0x12E4C4u: goto label_12e4c4;
            case 0x12E4C8u: goto label_12e4c8;
            case 0x12E4CCu: goto label_12e4cc;
            case 0x12E4D0u: goto label_12e4d0;
            case 0x12E4D4u: goto label_12e4d4;
            case 0x12E4D8u: goto label_12e4d8;
            case 0x12E4DCu: goto label_12e4dc;
            case 0x12E4E0u: goto label_12e4e0;
            case 0x12E4E4u: goto label_12e4e4;
            case 0x12E4E8u: goto label_12e4e8;
            case 0x12E4ECu: goto label_12e4ec;
            case 0x12E4F0u: goto label_12e4f0;
            case 0x12E4F4u: goto label_12e4f4;
            case 0x12E4F8u: goto label_12e4f8;
            case 0x12E4FCu: goto label_12e4fc;
            case 0x12E500u: goto label_12e500;
            case 0x12E504u: goto label_12e504;
            case 0x12E508u: goto label_12e508;
            case 0x12E50Cu: goto label_12e50c;
            case 0x12E510u: goto label_12e510;
            case 0x12E514u: goto label_12e514;
            case 0x12E518u: goto label_12e518;
            case 0x12E51Cu: goto label_12e51c;
            case 0x12E520u: goto label_12e520;
            case 0x12E524u: goto label_12e524;
            case 0x12E528u: goto label_12e528;
            case 0x12E52Cu: goto label_12e52c;
            case 0x12E530u: goto label_12e530;
            case 0x12E534u: goto label_12e534;
            case 0x12E538u: goto label_12e538;
            case 0x12E53Cu: goto label_12e53c;
            case 0x12E540u: goto label_12e540;
            case 0x12E544u: goto label_12e544;
            case 0x12E548u: goto label_12e548;
            case 0x12E54Cu: goto label_12e54c;
            case 0x12E550u: goto label_12e550;
            case 0x12E554u: goto label_12e554;
            case 0x12E558u: goto label_12e558;
            case 0x12E55Cu: goto label_12e55c;
            case 0x12E560u: goto label_12e560;
            case 0x12E564u: goto label_12e564;
            case 0x12E568u: goto label_12e568;
            case 0x12E56Cu: goto label_12e56c;
            case 0x12E570u: goto label_12e570;
            case 0x12E574u: goto label_12e574;
            case 0x12E578u: goto label_12e578;
            case 0x12E57Cu: goto label_12e57c;
            case 0x12E580u: goto label_12e580;
            case 0x12E584u: goto label_12e584;
            case 0x12E588u: goto label_12e588;
            case 0x12E58Cu: goto label_12e58c;
            case 0x12E590u: goto label_12e590;
            case 0x12E594u: goto label_12e594;
            case 0x12E598u: goto label_12e598;
            case 0x12E59Cu: goto label_12e59c;
            case 0x12E5A0u: goto label_12e5a0;
            case 0x12E5A4u: goto label_12e5a4;
            case 0x12E5A8u: goto label_12e5a8;
            case 0x12E5ACu: goto label_12e5ac;
            case 0x12E5B0u: goto label_12e5b0;
            case 0x12E5B4u: goto label_12e5b4;
            case 0x12E5B8u: goto label_12e5b8;
            case 0x12E5BCu: goto label_12e5bc;
            case 0x12E5C0u: goto label_12e5c0;
            case 0x12E5C4u: goto label_12e5c4;
            case 0x12E5C8u: goto label_12e5c8;
            case 0x12E5CCu: goto label_12e5cc;
            case 0x12E5D0u: goto label_12e5d0;
            case 0x12E5D4u: goto label_12e5d4;
            case 0x12E5D8u: goto label_12e5d8;
            case 0x12E5DCu: goto label_12e5dc;
            case 0x12E5E0u: goto label_12e5e0;
            case 0x12E5E4u: goto label_12e5e4;
            case 0x12E5E8u: goto label_12e5e8;
            case 0x12E5ECu: goto label_12e5ec;
            case 0x12E5F0u: goto label_12e5f0;
            case 0x12E5F4u: goto label_12e5f4;
            case 0x12E5F8u: goto label_12e5f8;
            case 0x12E5FCu: goto label_12e5fc;
            case 0x12E600u: goto label_12e600;
            case 0x12E604u: goto label_12e604;
            case 0x12E608u: goto label_12e608;
            case 0x12E60Cu: goto label_12e60c;
            case 0x12E610u: goto label_12e610;
            case 0x12E614u: goto label_12e614;
            case 0x12E618u: goto label_12e618;
            case 0x12E61Cu: goto label_12e61c;
            case 0x12E620u: goto label_12e620;
            case 0x12E624u: goto label_12e624;
            case 0x12E628u: goto label_12e628;
            case 0x12E62Cu: goto label_12e62c;
            case 0x12E630u: goto label_12e630;
            case 0x12E634u: goto label_12e634;
            case 0x12E638u: goto label_12e638;
            case 0x12E63Cu: goto label_12e63c;
            case 0x12E640u: goto label_12e640;
            case 0x12E644u: goto label_12e644;
            case 0x12E648u: goto label_12e648;
            case 0x12E64Cu: goto label_12e64c;
            case 0x12E650u: goto label_12e650;
            case 0x12E654u: goto label_12e654;
            case 0x12E658u: goto label_12e658;
            case 0x12E65Cu: goto label_12e65c;
            case 0x12E660u: goto label_12e660;
            case 0x12E664u: goto label_12e664;
            case 0x12E668u: goto label_12e668;
            case 0x12E66Cu: goto label_12e66c;
            case 0x12E670u: goto label_12e670;
            case 0x12E674u: goto label_12e674;
            case 0x12E678u: goto label_12e678;
            case 0x12E67Cu: goto label_12e67c;
            case 0x12E680u: goto label_12e680;
            case 0x12E684u: goto label_12e684;
            case 0x12E688u: goto label_12e688;
            case 0x12E68Cu: goto label_12e68c;
            case 0x12E690u: goto label_12e690;
            case 0x12E694u: goto label_12e694;
            case 0x12E698u: goto label_12e698;
            case 0x12E69Cu: goto label_12e69c;
            case 0x12E6A0u: goto label_12e6a0;
            case 0x12E6A4u: goto label_12e6a4;
            case 0x12E6A8u: goto label_12e6a8;
            case 0x12E6ACu: goto label_12e6ac;
            case 0x12E6B0u: goto label_12e6b0;
            case 0x12E6B4u: goto label_12e6b4;
            case 0x12E6B8u: goto label_12e6b8;
            case 0x12E6BCu: goto label_12e6bc;
            case 0x12E6C0u: goto label_12e6c0;
            case 0x12E6C4u: goto label_12e6c4;
            case 0x12E6C8u: goto label_12e6c8;
            case 0x12E6CCu: goto label_12e6cc;
            case 0x12E6D0u: goto label_12e6d0;
            case 0x12E6D4u: goto label_12e6d4;
            case 0x12E6D8u: goto label_12e6d8;
            case 0x12E6DCu: goto label_12e6dc;
            case 0x12E6E0u: goto label_12e6e0;
            case 0x12E6E4u: goto label_12e6e4;
            case 0x12E6E8u: goto label_12e6e8;
            case 0x12E6ECu: goto label_12e6ec;
            case 0x12E6F0u: goto label_12e6f0;
            case 0x12E6F4u: goto label_12e6f4;
            case 0x12E6F8u: goto label_12e6f8;
            case 0x12E6FCu: goto label_12e6fc;
            case 0x12E700u: goto label_12e700;
            case 0x12E704u: goto label_12e704;
            case 0x12E708u: goto label_12e708;
            case 0x12E70Cu: goto label_12e70c;
            case 0x12E710u: goto label_12e710;
            case 0x12E714u: goto label_12e714;
            case 0x12E718u: goto label_12e718;
            case 0x12E71Cu: goto label_12e71c;
            case 0x12E720u: goto label_12e720;
            case 0x12E724u: goto label_12e724;
            case 0x12E728u: goto label_12e728;
            case 0x12E72Cu: goto label_12e72c;
            case 0x12E730u: goto label_12e730;
            case 0x12E734u: goto label_12e734;
            case 0x12E738u: goto label_12e738;
            case 0x12E73Cu: goto label_12e73c;
            case 0x12E740u: goto label_12e740;
            case 0x12E744u: goto label_12e744;
            case 0x12E748u: goto label_12e748;
            case 0x12E74Cu: goto label_12e74c;
            case 0x12E750u: goto label_12e750;
            case 0x12E754u: goto label_12e754;
            case 0x12E758u: goto label_12e758;
            case 0x12E75Cu: goto label_12e75c;
            case 0x12E760u: goto label_12e760;
            case 0x12E764u: goto label_12e764;
            case 0x12E768u: goto label_12e768;
            case 0x12E76Cu: goto label_12e76c;
            case 0x12E770u: goto label_12e770;
            case 0x12E774u: goto label_12e774;
            case 0x12E778u: goto label_12e778;
            case 0x12E77Cu: goto label_12e77c;
            case 0x12E780u: goto label_12e780;
            case 0x12E784u: goto label_12e784;
            case 0x12E788u: goto label_12e788;
            case 0x12E78Cu: goto label_12e78c;
            case 0x12E790u: goto label_12e790;
            case 0x12E794u: goto label_12e794;
            case 0x12E798u: goto label_12e798;
            case 0x12E79Cu: goto label_12e79c;
            case 0x12E7A0u: goto label_12e7a0;
            case 0x12E7A4u: goto label_12e7a4;
            case 0x12E7A8u: goto label_12e7a8;
            case 0x12E7ACu: goto label_12e7ac;
            case 0x12E7B0u: goto label_12e7b0;
            case 0x12E7B4u: goto label_12e7b4;
            case 0x12E7B8u: goto label_12e7b8;
            case 0x12E7BCu: goto label_12e7bc;
            case 0x12E7C0u: goto label_12e7c0;
            case 0x12E7C4u: goto label_12e7c4;
            case 0x12E7C8u: goto label_12e7c8;
            case 0x12E7CCu: goto label_12e7cc;
            case 0x12E7D0u: goto label_12e7d0;
            case 0x12E7D4u: goto label_12e7d4;
            case 0x12E7D8u: goto label_12e7d8;
            case 0x12E7DCu: goto label_12e7dc;
            case 0x12E7E0u: goto label_12e7e0;
            case 0x12E7E4u: goto label_12e7e4;
            case 0x12E7E8u: goto label_12e7e8;
            case 0x12E7ECu: goto label_12e7ec;
            case 0x12E7F0u: goto label_12e7f0;
            case 0x12E7F4u: goto label_12e7f4;
            case 0x12E7F8u: goto label_12e7f8;
            case 0x12E7FCu: goto label_12e7fc;
            case 0x12E800u: goto label_12e800;
            case 0x12E804u: goto label_12e804;
            case 0x12E808u: goto label_12e808;
            case 0x12E80Cu: goto label_12e80c;
            case 0x12E810u: goto label_12e810;
            case 0x12E814u: goto label_12e814;
            case 0x12E818u: goto label_12e818;
            case 0x12E81Cu: goto label_12e81c;
            case 0x12E820u: goto label_12e820;
            case 0x12E824u: goto label_12e824;
            case 0x12E828u: goto label_12e828;
            case 0x12E82Cu: goto label_12e82c;
            case 0x12E830u: goto label_12e830;
            case 0x12E834u: goto label_12e834;
            case 0x12E838u: goto label_12e838;
            case 0x12E83Cu: goto label_12e83c;
            case 0x12E840u: goto label_12e840;
            case 0x12E844u: goto label_12e844;
            case 0x12E848u: goto label_12e848;
            case 0x12E84Cu: goto label_12e84c;
            case 0x12E850u: goto label_12e850;
            case 0x12E854u: goto label_12e854;
            case 0x12E858u: goto label_12e858;
            case 0x12E85Cu: goto label_12e85c;
            case 0x12E860u: goto label_12e860;
            case 0x12E864u: goto label_12e864;
            case 0x12E868u: goto label_12e868;
            case 0x12E86Cu: goto label_12e86c;
            case 0x12E870u: goto label_12e870;
            case 0x12E874u: goto label_12e874;
            case 0x12E878u: goto label_12e878;
            case 0x12E87Cu: goto label_12e87c;
            case 0x12E880u: goto label_12e880;
            case 0x12E884u: goto label_12e884;
            case 0x12E888u: goto label_12e888;
            case 0x12E88Cu: goto label_12e88c;
            case 0x12E890u: goto label_12e890;
            case 0x12E894u: goto label_12e894;
            case 0x12E898u: goto label_12e898;
            case 0x12E89Cu: goto label_12e89c;
            case 0x12E8A0u: goto label_12e8a0;
            case 0x12E8A4u: goto label_12e8a4;
            case 0x12E8A8u: goto label_12e8a8;
            case 0x12E8ACu: goto label_12e8ac;
            case 0x12E8B0u: goto label_12e8b0;
            case 0x12E8B4u: goto label_12e8b4;
            case 0x12E8B8u: goto label_12e8b8;
            case 0x12E8BCu: goto label_12e8bc;
            case 0x12E8C0u: goto label_12e8c0;
            case 0x12E8C4u: goto label_12e8c4;
            case 0x12E8C8u: goto label_12e8c8;
            case 0x12E8CCu: goto label_12e8cc;
            case 0x12E8D0u: goto label_12e8d0;
            case 0x12E8D4u: goto label_12e8d4;
            case 0x12E8D8u: goto label_12e8d8;
            case 0x12E8DCu: goto label_12e8dc;
            case 0x12E8E0u: goto label_12e8e0;
            case 0x12E8E4u: goto label_12e8e4;
            case 0x12E8E8u: goto label_12e8e8;
            case 0x12E8ECu: goto label_12e8ec;
            case 0x12E8F0u: goto label_12e8f0;
            case 0x12E8F4u: goto label_12e8f4;
            case 0x12E8F8u: goto label_12e8f8;
            case 0x12E8FCu: goto label_12e8fc;
            case 0x12E900u: goto label_12e900;
            case 0x12E904u: goto label_12e904;
            case 0x12E908u: goto label_12e908;
            case 0x12E90Cu: goto label_12e90c;
            case 0x12E910u: goto label_12e910;
            case 0x12E914u: goto label_12e914;
            case 0x12E918u: goto label_12e918;
            case 0x12E91Cu: goto label_12e91c;
            case 0x12E920u: goto label_12e920;
            case 0x12E924u: goto label_12e924;
            case 0x12E928u: goto label_12e928;
            case 0x12E92Cu: goto label_12e92c;
            case 0x12E930u: goto label_12e930;
            case 0x12E934u: goto label_12e934;
            case 0x12E938u: goto label_12e938;
            case 0x12E93Cu: goto label_12e93c;
            case 0x12E940u: goto label_12e940;
            case 0x12E944u: goto label_12e944;
            case 0x12E948u: goto label_12e948;
            case 0x12E94Cu: goto label_12e94c;
            case 0x12E950u: goto label_12e950;
            case 0x12E954u: goto label_12e954;
            case 0x12E958u: goto label_12e958;
            case 0x12E95Cu: goto label_12e95c;
            case 0x12E960u: goto label_12e960;
            case 0x12E964u: goto label_12e964;
            case 0x12E968u: goto label_12e968;
            case 0x12E96Cu: goto label_12e96c;
            case 0x12E970u: goto label_12e970;
            case 0x12E974u: goto label_12e974;
            case 0x12E978u: goto label_12e978;
            case 0x12E97Cu: goto label_12e97c;
            case 0x12E980u: goto label_12e980;
            case 0x12E984u: goto label_12e984;
            case 0x12E988u: goto label_12e988;
            case 0x12E98Cu: goto label_12e98c;
            case 0x12E990u: goto label_12e990;
            case 0x12E994u: goto label_12e994;
            case 0x12E998u: goto label_12e998;
            case 0x12E99Cu: goto label_12e99c;
            case 0x12E9A0u: goto label_12e9a0;
            case 0x12E9A4u: goto label_12e9a4;
            case 0x12E9A8u: goto label_12e9a8;
            case 0x12E9ACu: goto label_12e9ac;
            case 0x12E9B0u: goto label_12e9b0;
            case 0x12E9B4u: goto label_12e9b4;
            case 0x12E9B8u: goto label_12e9b8;
            case 0x12E9BCu: goto label_12e9bc;
            case 0x12E9C0u: goto label_12e9c0;
            case 0x12E9C4u: goto label_12e9c4;
            case 0x12E9C8u: goto label_12e9c8;
            case 0x12E9CCu: goto label_12e9cc;
            case 0x12E9D0u: goto label_12e9d0;
            case 0x12E9D4u: goto label_12e9d4;
            case 0x12E9D8u: goto label_12e9d8;
            case 0x12E9DCu: goto label_12e9dc;
            case 0x12E9E0u: goto label_12e9e0;
            case 0x12E9E4u: goto label_12e9e4;
            case 0x12E9E8u: goto label_12e9e8;
            case 0x12E9ECu: goto label_12e9ec;
            case 0x12E9F0u: goto label_12e9f0;
            case 0x12E9F4u: goto label_12e9f4;
            case 0x12E9F8u: goto label_12e9f8;
            case 0x12E9FCu: goto label_12e9fc;
            case 0x12EA00u: goto label_12ea00;
            case 0x12EA04u: goto label_12ea04;
            case 0x12EA08u: goto label_12ea08;
            case 0x12EA0Cu: goto label_12ea0c;
            case 0x12EA10u: goto label_12ea10;
            case 0x12EA14u: goto label_12ea14;
            case 0x12EA18u: goto label_12ea18;
            case 0x12EA1Cu: goto label_12ea1c;
            case 0x12EA20u: goto label_12ea20;
            case 0x12EA24u: goto label_12ea24;
            case 0x12EA28u: goto label_12ea28;
            case 0x12EA2Cu: goto label_12ea2c;
            case 0x12EA30u: goto label_12ea30;
            case 0x12EA34u: goto label_12ea34;
            case 0x12EA38u: goto label_12ea38;
            case 0x12EA3Cu: goto label_12ea3c;
            case 0x12EA40u: goto label_12ea40;
            case 0x12EA44u: goto label_12ea44;
            case 0x12EA48u: goto label_12ea48;
            case 0x12EA4Cu: goto label_12ea4c;
            case 0x12EA50u: goto label_12ea50;
            case 0x12EA54u: goto label_12ea54;
            case 0x12EA58u: goto label_12ea58;
            case 0x12EA5Cu: goto label_12ea5c;
            case 0x12EA60u: goto label_12ea60;
            case 0x12EA64u: goto label_12ea64;
            case 0x12EA68u: goto label_12ea68;
            case 0x12EA6Cu: goto label_12ea6c;
            case 0x12EA70u: goto label_12ea70;
            case 0x12EA74u: goto label_12ea74;
            case 0x12EA78u: goto label_12ea78;
            case 0x12EA7Cu: goto label_12ea7c;
            case 0x12EA80u: goto label_12ea80;
            case 0x12EA84u: goto label_12ea84;
            case 0x12EA88u: goto label_12ea88;
            case 0x12EA8Cu: goto label_12ea8c;
            case 0x12EA90u: goto label_12ea90;
            case 0x12EA94u: goto label_12ea94;
            case 0x12EA98u: goto label_12ea98;
            case 0x12EA9Cu: goto label_12ea9c;
            case 0x12EAA0u: goto label_12eaa0;
            case 0x12EAA4u: goto label_12eaa4;
            case 0x12EAA8u: goto label_12eaa8;
            case 0x12EAACu: goto label_12eaac;
            case 0x12EAB0u: goto label_12eab0;
            case 0x12EAB4u: goto label_12eab4;
            case 0x12EAB8u: goto label_12eab8;
            case 0x12EABCu: goto label_12eabc;
            case 0x12EAC0u: goto label_12eac0;
            case 0x12EAC4u: goto label_12eac4;
            case 0x12EAC8u: goto label_12eac8;
            case 0x12EACCu: goto label_12eacc;
            case 0x12EAD0u: goto label_12ead0;
            case 0x12EAD4u: goto label_12ead4;
            case 0x12EAD8u: goto label_12ead8;
            case 0x12EADCu: goto label_12eadc;
            case 0x12EAE0u: goto label_12eae0;
            case 0x12EAE4u: goto label_12eae4;
            case 0x12EAE8u: goto label_12eae8;
            case 0x12EAECu: goto label_12eaec;
            case 0x12EAF0u: goto label_12eaf0;
            case 0x12EAF4u: goto label_12eaf4;
            case 0x12EAF8u: goto label_12eaf8;
            case 0x12EAFCu: goto label_12eafc;
            case 0x12EB00u: goto label_12eb00;
            case 0x12EB04u: goto label_12eb04;
            case 0x12EB08u: goto label_12eb08;
            case 0x12EB0Cu: goto label_12eb0c;
            case 0x12EB10u: goto label_12eb10;
            case 0x12EB14u: goto label_12eb14;
            case 0x12EB18u: goto label_12eb18;
            case 0x12EB1Cu: goto label_12eb1c;
            case 0x12EB20u: goto label_12eb20;
            case 0x12EB24u: goto label_12eb24;
            case 0x12EB28u: goto label_12eb28;
            case 0x12EB2Cu: goto label_12eb2c;
            case 0x12EB30u: goto label_12eb30;
            case 0x12EB34u: goto label_12eb34;
            case 0x12EB38u: goto label_12eb38;
            case 0x12EB3Cu: goto label_12eb3c;
            case 0x12EB40u: goto label_12eb40;
            case 0x12EB44u: goto label_12eb44;
            case 0x12EB48u: goto label_12eb48;
            case 0x12EB4Cu: goto label_12eb4c;
            case 0x12EB50u: goto label_12eb50;
            case 0x12EB54u: goto label_12eb54;
            case 0x12EB58u: goto label_12eb58;
            case 0x12EB5Cu: goto label_12eb5c;
            case 0x12EB60u: goto label_12eb60;
            case 0x12EB64u: goto label_12eb64;
            case 0x12EB68u: goto label_12eb68;
            case 0x12EB6Cu: goto label_12eb6c;
            case 0x12EB70u: goto label_12eb70;
            case 0x12EB74u: goto label_12eb74;
            case 0x12EB78u: goto label_12eb78;
            case 0x12EB7Cu: goto label_12eb7c;
            case 0x12EB80u: goto label_12eb80;
            case 0x12EB84u: goto label_12eb84;
            case 0x12EB88u: goto label_12eb88;
            case 0x12EB8Cu: goto label_12eb8c;
            case 0x12EB90u: goto label_12eb90;
            case 0x12EB94u: goto label_12eb94;
            case 0x12EB98u: goto label_12eb98;
            case 0x12EB9Cu: goto label_12eb9c;
            case 0x12EBA0u: goto label_12eba0;
            case 0x12EBA4u: goto label_12eba4;
            case 0x12EBA8u: goto label_12eba8;
            case 0x12EBACu: goto label_12ebac;
            case 0x12EBB0u: goto label_12ebb0;
            case 0x12EBB4u: goto label_12ebb4;
            case 0x12EBB8u: goto label_12ebb8;
            case 0x12EBBCu: goto label_12ebbc;
            case 0x12EBC0u: goto label_12ebc0;
            case 0x12EBC4u: goto label_12ebc4;
            case 0x12EBC8u: goto label_12ebc8;
            case 0x12EBCCu: goto label_12ebcc;
            case 0x12EBD0u: goto label_12ebd0;
            case 0x12EBD4u: goto label_12ebd4;
            case 0x12EBD8u: goto label_12ebd8;
            case 0x12EBDCu: goto label_12ebdc;
            case 0x12EBE0u: goto label_12ebe0;
            case 0x12EBE4u: goto label_12ebe4;
            case 0x12EBE8u: goto label_12ebe8;
            case 0x12EBECu: goto label_12ebec;
            case 0x12EBF0u: goto label_12ebf0;
            case 0x12EBF4u: goto label_12ebf4;
            case 0x12EBF8u: goto label_12ebf8;
            case 0x12EBFCu: goto label_12ebfc;
            case 0x12EC00u: goto label_12ec00;
            case 0x12EC04u: goto label_12ec04;
            case 0x12EC08u: goto label_12ec08;
            case 0x12EC0Cu: goto label_12ec0c;
            case 0x12EC10u: goto label_12ec10;
            case 0x12EC14u: goto label_12ec14;
            case 0x12EC18u: goto label_12ec18;
            case 0x12EC1Cu: goto label_12ec1c;
            case 0x12EC20u: goto label_12ec20;
            case 0x12EC24u: goto label_12ec24;
            case 0x12EC28u: goto label_12ec28;
            case 0x12EC2Cu: goto label_12ec2c;
            case 0x12EC30u: goto label_12ec30;
            case 0x12EC34u: goto label_12ec34;
            case 0x12EC38u: goto label_12ec38;
            case 0x12EC3Cu: goto label_12ec3c;
            case 0x12EC40u: goto label_12ec40;
            case 0x12EC44u: goto label_12ec44;
            case 0x12EC48u: goto label_12ec48;
            case 0x12EC4Cu: goto label_12ec4c;
            case 0x12EC50u: goto label_12ec50;
            case 0x12EC54u: goto label_12ec54;
            case 0x12EC58u: goto label_12ec58;
            case 0x12EC5Cu: goto label_12ec5c;
            case 0x12EC60u: goto label_12ec60;
            case 0x12EC64u: goto label_12ec64;
            case 0x12EC68u: goto label_12ec68;
            case 0x12EC6Cu: goto label_12ec6c;
            case 0x12EC70u: goto label_12ec70;
            case 0x12EC74u: goto label_12ec74;
            case 0x12EC78u: goto label_12ec78;
            case 0x12EC7Cu: goto label_12ec7c;
            case 0x12EC80u: goto label_12ec80;
            case 0x12EC84u: goto label_12ec84;
            case 0x12EC88u: goto label_12ec88;
            case 0x12EC8Cu: goto label_12ec8c;
            case 0x12EC90u: goto label_12ec90;
            case 0x12EC94u: goto label_12ec94;
            case 0x12EC98u: goto label_12ec98;
            case 0x12EC9Cu: goto label_12ec9c;
            case 0x12ECA0u: goto label_12eca0;
            case 0x12ECA4u: goto label_12eca4;
            case 0x12ECA8u: goto label_12eca8;
            case 0x12ECACu: goto label_12ecac;
            case 0x12ECB0u: goto label_12ecb0;
            case 0x12ECB4u: goto label_12ecb4;
            case 0x12ECB8u: goto label_12ecb8;
            case 0x12ECBCu: goto label_12ecbc;
            case 0x12ECC0u: goto label_12ecc0;
            case 0x12ECC4u: goto label_12ecc4;
            case 0x12ECC8u: goto label_12ecc8;
            case 0x12ECCCu: goto label_12eccc;
            case 0x12ECD0u: goto label_12ecd0;
            case 0x12ECD4u: goto label_12ecd4;
            case 0x12ECD8u: goto label_12ecd8;
            case 0x12ECDCu: goto label_12ecdc;
            case 0x12ECE0u: goto label_12ece0;
            case 0x12ECE4u: goto label_12ece4;
            case 0x12ECE8u: goto label_12ece8;
            case 0x12ECECu: goto label_12ecec;
            case 0x12ECF0u: goto label_12ecf0;
            case 0x12ECF4u: goto label_12ecf4;
            case 0x12ECF8u: goto label_12ecf8;
            case 0x12ECFCu: goto label_12ecfc;
            case 0x12ED00u: goto label_12ed00;
            case 0x12ED04u: goto label_12ed04;
            case 0x12ED08u: goto label_12ed08;
            case 0x12ED0Cu: goto label_12ed0c;
            case 0x12ED10u: goto label_12ed10;
            case 0x12ED14u: goto label_12ed14;
            case 0x12ED18u: goto label_12ed18;
            case 0x12ED1Cu: goto label_12ed1c;
            case 0x12ED20u: goto label_12ed20;
            case 0x12ED24u: goto label_12ed24;
            case 0x12ED28u: goto label_12ed28;
            case 0x12ED2Cu: goto label_12ed2c;
            case 0x12ED30u: goto label_12ed30;
            case 0x12ED34u: goto label_12ed34;
            case 0x12ED38u: goto label_12ed38;
            case 0x12ED3Cu: goto label_12ed3c;
            case 0x12ED40u: goto label_12ed40;
            case 0x12ED44u: goto label_12ed44;
            case 0x12ED48u: goto label_12ed48;
            case 0x12ED4Cu: goto label_12ed4c;
            case 0x12ED50u: goto label_12ed50;
            case 0x12ED54u: goto label_12ed54;
            case 0x12ED58u: goto label_12ed58;
            case 0x12ED5Cu: goto label_12ed5c;
            case 0x12ED60u: goto label_12ed60;
            case 0x12ED64u: goto label_12ed64;
            case 0x12ED68u: goto label_12ed68;
            case 0x12ED6Cu: goto label_12ed6c;
            case 0x12ED70u: goto label_12ed70;
            case 0x12ED74u: goto label_12ed74;
            case 0x12ED78u: goto label_12ed78;
            case 0x12ED7Cu: goto label_12ed7c;
            case 0x12ED80u: goto label_12ed80;
            case 0x12ED84u: goto label_12ed84;
            case 0x12ED88u: goto label_12ed88;
            case 0x12ED8Cu: goto label_12ed8c;
            case 0x12ED90u: goto label_12ed90;
            case 0x12ED94u: goto label_12ed94;
            case 0x12ED98u: goto label_12ed98;
            case 0x12ED9Cu: goto label_12ed9c;
            case 0x12EDA0u: goto label_12eda0;
            case 0x12EDA4u: goto label_12eda4;
            case 0x12EDA8u: goto label_12eda8;
            case 0x12EDACu: goto label_12edac;
            case 0x12EDB0u: goto label_12edb0;
            case 0x12EDB4u: goto label_12edb4;
            case 0x12EDB8u: goto label_12edb8;
            case 0x12EDBCu: goto label_12edbc;
            case 0x12EDC0u: goto label_12edc0;
            case 0x12EDC4u: goto label_12edc4;
            case 0x12EDC8u: goto label_12edc8;
            case 0x12EDCCu: goto label_12edcc;
            case 0x12EDD0u: goto label_12edd0;
            case 0x12EDD4u: goto label_12edd4;
            case 0x12EDD8u: goto label_12edd8;
            case 0x12EDDCu: goto label_12eddc;
            case 0x12EDE0u: goto label_12ede0;
            case 0x12EDE4u: goto label_12ede4;
            case 0x12EDE8u: goto label_12ede8;
            case 0x12EDECu: goto label_12edec;
            case 0x12EDF0u: goto label_12edf0;
            case 0x12EDF4u: goto label_12edf4;
            case 0x12EDF8u: goto label_12edf8;
            case 0x12EDFCu: goto label_12edfc;
            case 0x12EE00u: goto label_12ee00;
            case 0x12EE04u: goto label_12ee04;
            case 0x12EE08u: goto label_12ee08;
            case 0x12EE0Cu: goto label_12ee0c;
            case 0x12EE10u: goto label_12ee10;
            case 0x12EE14u: goto label_12ee14;
            case 0x12EE18u: goto label_12ee18;
            case 0x12EE1Cu: goto label_12ee1c;
            case 0x12EE20u: goto label_12ee20;
            case 0x12EE24u: goto label_12ee24;
            case 0x12EE28u: goto label_12ee28;
            case 0x12EE2Cu: goto label_12ee2c;
            case 0x12EE30u: goto label_12ee30;
            case 0x12EE34u: goto label_12ee34;
            case 0x12EE38u: goto label_12ee38;
            case 0x12EE3Cu: goto label_12ee3c;
            case 0x12EE40u: goto label_12ee40;
            case 0x12EE44u: goto label_12ee44;
            case 0x12EE48u: goto label_12ee48;
            case 0x12EE4Cu: goto label_12ee4c;
            case 0x12EE50u: goto label_12ee50;
            case 0x12EE54u: goto label_12ee54;
            case 0x12EE58u: goto label_12ee58;
            case 0x12EE5Cu: goto label_12ee5c;
            case 0x12EE60u: goto label_12ee60;
            case 0x12EE64u: goto label_12ee64;
            case 0x12EE68u: goto label_12ee68;
            case 0x12EE6Cu: goto label_12ee6c;
            case 0x12EE70u: goto label_12ee70;
            case 0x12EE74u: goto label_12ee74;
            case 0x12EE78u: goto label_12ee78;
            case 0x12EE7Cu: goto label_12ee7c;
            case 0x12EE80u: goto label_12ee80;
            case 0x12EE84u: goto label_12ee84;
            case 0x12EE88u: goto label_12ee88;
            case 0x12EE8Cu: goto label_12ee8c;
            case 0x12EE90u: goto label_12ee90;
            case 0x12EE94u: goto label_12ee94;
            case 0x12EE98u: goto label_12ee98;
            case 0x12EE9Cu: goto label_12ee9c;
            case 0x12EEA0u: goto label_12eea0;
            case 0x12EEA4u: goto label_12eea4;
            case 0x12EEA8u: goto label_12eea8;
            case 0x12EEACu: goto label_12eeac;
            case 0x12EEB0u: goto label_12eeb0;
            case 0x12EEB4u: goto label_12eeb4;
            case 0x12EEB8u: goto label_12eeb8;
            case 0x12EEBCu: goto label_12eebc;
            case 0x12EEC0u: goto label_12eec0;
            case 0x12EEC4u: goto label_12eec4;
            case 0x12EEC8u: goto label_12eec8;
            case 0x12EECCu: goto label_12eecc;
            case 0x12EED0u: goto label_12eed0;
            case 0x12EED4u: goto label_12eed4;
            case 0x12EED8u: goto label_12eed8;
            case 0x12EEDCu: goto label_12eedc;
            case 0x12EEE0u: goto label_12eee0;
            case 0x12EEE4u: goto label_12eee4;
            case 0x12EEE8u: goto label_12eee8;
            case 0x12EEECu: goto label_12eeec;
            case 0x12EEF0u: goto label_12eef0;
            case 0x12EEF4u: goto label_12eef4;
            case 0x12EEF8u: goto label_12eef8;
            case 0x12EEFCu: goto label_12eefc;
            case 0x12EF00u: goto label_12ef00;
            case 0x12EF04u: goto label_12ef04;
            case 0x12EF08u: goto label_12ef08;
            case 0x12EF0Cu: goto label_12ef0c;
            case 0x12EF10u: goto label_12ef10;
            case 0x12EF14u: goto label_12ef14;
            case 0x12EF18u: goto label_12ef18;
            case 0x12EF1Cu: goto label_12ef1c;
            case 0x12EF20u: goto label_12ef20;
            case 0x12EF24u: goto label_12ef24;
            case 0x12EF28u: goto label_12ef28;
            case 0x12EF2Cu: goto label_12ef2c;
            case 0x12EF30u: goto label_12ef30;
            case 0x12EF34u: goto label_12ef34;
            case 0x12EF38u: goto label_12ef38;
            case 0x12EF3Cu: goto label_12ef3c;
            case 0x12EF40u: goto label_12ef40;
            case 0x12EF44u: goto label_12ef44;
            case 0x12EF48u: goto label_12ef48;
            case 0x12EF4Cu: goto label_12ef4c;
            case 0x12EF50u: goto label_12ef50;
            case 0x12EF54u: goto label_12ef54;
            case 0x12EF58u: goto label_12ef58;
            case 0x12EF5Cu: goto label_12ef5c;
            case 0x12EF60u: goto label_12ef60;
            case 0x12EF64u: goto label_12ef64;
            case 0x12EF68u: goto label_12ef68;
            case 0x12EF6Cu: goto label_12ef6c;
            case 0x12EF70u: goto label_12ef70;
            case 0x12EF74u: goto label_12ef74;
            case 0x12EF78u: goto label_12ef78;
            case 0x12EF7Cu: goto label_12ef7c;
            case 0x12EF80u: goto label_12ef80;
            case 0x12EF84u: goto label_12ef84;
            case 0x12EF88u: goto label_12ef88;
            case 0x12EF8Cu: goto label_12ef8c;
            case 0x12EF90u: goto label_12ef90;
            case 0x12EF94u: goto label_12ef94;
            case 0x12EF98u: goto label_12ef98;
            case 0x12EF9Cu: goto label_12ef9c;
            case 0x12EFA0u: goto label_12efa0;
            case 0x12EFA4u: goto label_12efa4;
            case 0x12EFA8u: goto label_12efa8;
            case 0x12EFACu: goto label_12efac;
            case 0x12EFB0u: goto label_12efb0;
            case 0x12EFB4u: goto label_12efb4;
            case 0x12EFB8u: goto label_12efb8;
            case 0x12EFBCu: goto label_12efbc;
            case 0x12EFC0u: goto label_12efc0;
            case 0x12EFC4u: goto label_12efc4;
            case 0x12EFC8u: goto label_12efc8;
            case 0x12EFCCu: goto label_12efcc;
            case 0x12EFD0u: goto label_12efd0;
            case 0x12EFD4u: goto label_12efd4;
            case 0x12EFD8u: goto label_12efd8;
            case 0x12EFDCu: goto label_12efdc;
            case 0x12EFE0u: goto label_12efe0;
            case 0x12EFE4u: goto label_12efe4;
            case 0x12EFE8u: goto label_12efe8;
            case 0x12EFECu: goto label_12efec;
            case 0x12EFF0u: goto label_12eff0;
            case 0x12EFF4u: goto label_12eff4;
            case 0x12EFF8u: goto label_12eff8;
            case 0x12EFFCu: goto label_12effc;
            case 0x12F000u: goto label_12f000;
            case 0x12F004u: goto label_12f004;
            case 0x12F008u: goto label_12f008;
            case 0x12F00Cu: goto label_12f00c;
            case 0x12F010u: goto label_12f010;
            case 0x12F014u: goto label_12f014;
            case 0x12F018u: goto label_12f018;
            case 0x12F01Cu: goto label_12f01c;
            case 0x12F020u: goto label_12f020;
            case 0x12F024u: goto label_12f024;
            case 0x12F028u: goto label_12f028;
            case 0x12F02Cu: goto label_12f02c;
            case 0x12F030u: goto label_12f030;
            case 0x12F034u: goto label_12f034;
            case 0x12F038u: goto label_12f038;
            case 0x12F03Cu: goto label_12f03c;
            case 0x12F040u: goto label_12f040;
            case 0x12F044u: goto label_12f044;
            case 0x12F048u: goto label_12f048;
            case 0x12F04Cu: goto label_12f04c;
            case 0x12F050u: goto label_12f050;
            case 0x12F054u: goto label_12f054;
            case 0x12F058u: goto label_12f058;
            case 0x12F05Cu: goto label_12f05c;
            case 0x12F060u: goto label_12f060;
            case 0x12F064u: goto label_12f064;
            case 0x12F068u: goto label_12f068;
            case 0x12F06Cu: goto label_12f06c;
            case 0x12F070u: goto label_12f070;
            case 0x12F074u: goto label_12f074;
            case 0x12F078u: goto label_12f078;
            case 0x12F07Cu: goto label_12f07c;
            case 0x12F080u: goto label_12f080;
            case 0x12F084u: goto label_12f084;
            case 0x12F088u: goto label_12f088;
            case 0x12F08Cu: goto label_12f08c;
            case 0x12F090u: goto label_12f090;
            case 0x12F094u: goto label_12f094;
            case 0x12F098u: goto label_12f098;
            case 0x12F09Cu: goto label_12f09c;
            case 0x12F0A0u: goto label_12f0a0;
            case 0x12F0A4u: goto label_12f0a4;
            case 0x12F0A8u: goto label_12f0a8;
            case 0x12F0ACu: goto label_12f0ac;
            case 0x12F0B0u: goto label_12f0b0;
            case 0x12F0B4u: goto label_12f0b4;
            case 0x12F0B8u: goto label_12f0b8;
            case 0x12F0BCu: goto label_12f0bc;
            case 0x12F0C0u: goto label_12f0c0;
            case 0x12F0C4u: goto label_12f0c4;
            case 0x12F0C8u: goto label_12f0c8;
            case 0x12F0CCu: goto label_12f0cc;
            case 0x12F0D0u: goto label_12f0d0;
            case 0x12F0D4u: goto label_12f0d4;
            case 0x12F0D8u: goto label_12f0d8;
            case 0x12F0DCu: goto label_12f0dc;
            case 0x12F0E0u: goto label_12f0e0;
            case 0x12F0E4u: goto label_12f0e4;
            case 0x12F0E8u: goto label_12f0e8;
            case 0x12F0ECu: goto label_12f0ec;
            case 0x12F0F0u: goto label_12f0f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E318u;
label_12e318:
    // 0x12e318: 0x2404ffff
    ctx->pc = 0x12e318u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_12e31c:
    // 0x12e31c: 0x2402ffff
    ctx->pc = 0x12e31cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_12e320:
    // 0x12e320: 0xafa40028
    ctx->pc = 0x12e320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_12e324:
    // 0x12e324: 0x24140012
    ctx->pc = 0x12e324u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 18));
label_12e328:
    // 0x12e328: 0xafa20020
    ctx->pc = 0x12e328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_12e32c:
    // 0x12e32c: 0x10000013
label_12e330:
    if (ctx->pc == 0x12E330u) {
        ctx->pc = 0x12E330u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x12E334u;
        goto label_12e334;
    }
    ctx->pc = 0x12E32Cu;
    {
        const bool branch_taken_0x12e32c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E330u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x12e32c) {
            ctx->pc = 0x12E37Cu;
            goto label_12e37c;
        }
    }
    ctx->pc = 0x12E334u;
label_12e334:
    // 0x12e334: 0xafa00034
    ctx->pc = 0x12e334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_12e338:
    // 0x12e338: 0x8fa3000c
    ctx->pc = 0x12e338u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_12e33c:
    // 0x12e33c: 0x24140001
    ctx->pc = 0x12e33cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_12e340:
    // 0x12e340: 0x3102a
    ctx->pc = 0x12e340u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 3)));
label_12e344:
    // 0x12e344: 0x62a00b
    ctx->pc = 0x12e344u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 3));
label_12e348:
    // 0x12e348: 0xafb4000c
    ctx->pc = 0x12e348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 20));
label_12e34c:
    // 0x12e34c: 0xafb40028
    ctx->pc = 0x12e34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
label_12e350:
    // 0x12e350: 0x1000000a
label_12e354:
    if (ctx->pc == 0x12E354u) {
        ctx->pc = 0x12E354u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->pc = 0x12E358u;
        goto label_12e358;
    }
    ctx->pc = 0x12E350u;
    {
        const bool branch_taken_0x12e350 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E354u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        if (branch_taken_0x12e350) {
            ctx->pc = 0x12E37Cu;
            goto label_12e37c;
        }
    }
    ctx->pc = 0x12E358u;
label_12e358:
    // 0x12e358: 0xafa00034
    ctx->pc = 0x12e358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_12e35c:
    // 0x12e35c: 0x8fa4000c
    ctx->pc = 0x12e35cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_12e360:
    // 0x12e360: 0x24030001
    ctx->pc = 0x12e360u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_12e364:
    // 0x12e364: 0x931021
    ctx->pc = 0x12e364u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_12e368:
    // 0x12e368: 0x24540001
    ctx->pc = 0x12e368u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 1));
label_12e36c:
    // 0x12e36c: 0xafa20028
    ctx->pc = 0x12e36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_12e370:
    // 0x12e370: 0xafb40020
    ctx->pc = 0x12e370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
label_12e374:
    // 0x12e374: 0x14102a
    ctx->pc = 0x12e374u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 20)));
label_12e378:
    // 0x12e378: 0x62a00a
    ctx->pc = 0x12e378u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 3));
label_12e37c:
    // 0x12e37c: 0x24100004
    ctx->pc = 0x12e37cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4));
label_12e380:
    // 0x12e380: 0x2e820018
    ctx->pc = 0x12e380u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), 24));
label_12e384:
    // 0x12e384: 0x1440000e
label_12e388:
    if (ctx->pc == 0x12E388u) {
        ctx->pc = 0x12E388u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 0));
        ctx->pc = 0x12E38Cu;
        goto label_12e38c;
    }
    ctx->pc = 0x12E384u;
    {
        const bool branch_taken_0x12e384 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E388u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 0));
        if (branch_taken_0x12e384) {
            ctx->pc = 0x12E3C0u;
            goto label_12e3c0;
        }
    }
    ctx->pc = 0x12E38Cu;
label_12e38c:
    // 0x12e38c: 0x8fa20020
    ctx->pc = 0x12e38cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12e390:
    // 0x12e390: 0x2c51000f
    ctx->pc = 0x12e390u;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 2), 15));
label_12e394:
    // 0x12e394: 0x0
    ctx->pc = 0x12e394u;
    // NOP
label_12e398:
    // 0x12e398: 0x8fc30044
    ctx->pc = 0x12e398u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_12e39c:
    // 0x12e39c: 0x108040
    ctx->pc = 0x12e39cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 1));
label_12e3a0:
    // 0x12e3a0: 0x26020014
    ctx->pc = 0x12e3a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 20));
label_12e3a4:
    // 0x12e3a4: 0x24630001
    ctx->pc = 0x12e3a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_12e3a8:
    // 0x12e3a8: 0x282102b
    ctx->pc = 0x12e3a8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_12e3ac:
    // 0x12e3ac: 0xafc30044
    ctx->pc = 0x12e3acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 3));
label_12e3b0:
    // 0x12e3b0: 0x1040fff9
label_12e3b4:
    if (ctx->pc == 0x12E3B4u) {
        ctx->pc = 0x12E3B8u;
        goto label_12e3b8;
    }
    ctx->pc = 0x12E3B0u;
    {
        const bool branch_taken_0x12e3b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12e3b0) {
            ctx->pc = 0x12E398u;
            goto label_12e398;
        }
    }
    ctx->pc = 0x12E3B8u;
label_12e3b8:
    // 0x12e3b8: 0x10000004
label_12e3bc:
    if (ctx->pc == 0x12E3BCu) {
        ctx->pc = 0x12E3BCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 68)));
        ctx->pc = 0x12E3C0u;
        goto label_12e3c0;
    }
    ctx->pc = 0x12E3B8u;
    {
        const bool branch_taken_0x12e3b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E3BCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 68)));
        if (branch_taken_0x12e3b8) {
            ctx->pc = 0x12E3CCu;
            goto label_12e3cc;
        }
    }
    ctx->pc = 0x12E3C0u;
label_12e3c0:
    // 0x12e3c0: 0x8fa30020
    ctx->pc = 0x12e3c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12e3c4:
    // 0x12e3c4: 0x2c71000f
    ctx->pc = 0x12e3c4u;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 3), 15));
label_12e3c8:
    // 0x12e3c8: 0x8fc50044
    ctx->pc = 0x12e3c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_12e3cc:
    // 0x12e3cc: 0xc04bf8a
label_12e3d0:
    if (ctx->pc == 0x12E3D0u) {
        ctx->pc = 0x12E3D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E3D4u;
        goto label_12e3d4;
    }
    ctx->pc = 0x12E3CCu;
    SET_GPR_U32(ctx, 31, 0x12E3D4u);
    ctx->pc = 0x12E3D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FE28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x12fe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E3D4u; }
    }
    if (ctx->pc != 0x12E3D4u) { return; }
    ctx->pc = 0x12E3D4u;
label_12e3d4:
    // 0x12e3d4: 0xafa20058
    ctx->pc = 0x12e3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_12e3d8:
    // 0x12e3d8: 0xafc20040
    ctx->pc = 0x12e3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
label_12e3dc:
    // 0x12e3dc: 0x12200102
label_12e3e0:
    if (ctx->pc == 0x12E3E0u) {
        ctx->pc = 0x12E3E0u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->pc = 0x12E3E4u;
        goto label_12e3e4;
    }
    ctx->pc = 0x12E3DCu;
    {
        const bool branch_taken_0x12e3dc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E3E0u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        if (branch_taken_0x12e3dc) {
            ctx->pc = 0x12E7E8u;
            goto label_12e7e8;
        }
    }
    ctx->pc = 0x12E3E4u;
label_12e3e4:
    // 0x12e3e4: 0x12400100
label_12e3e8:
    if (ctx->pc == 0x12E3E8u) {
        ctx->pc = 0x12E3E8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x12E3ECu;
        goto label_12e3ec;
    }
    ctx->pc = 0x12E3E4u;
    {
        const bool branch_taken_0x12e3e4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E3E8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x12e3e4) {
            ctx->pc = 0x12E7E8u;
            goto label_12e7e8;
        }
    }
    ctx->pc = 0x12E3ECu;
label_12e3ec:
    // 0x12e3ec: 0x2c0b82d
    ctx->pc = 0x12e3ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12e3f0:
    // 0x12e3f0: 0xafb3002c
    ctx->pc = 0x12e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
label_12e3f4:
    // 0x12e3f4: 0x24140002
    ctx->pc = 0x12e3f4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
label_12e3f8:
    // 0x12e3f8: 0x1a600024
label_12e3fc:
    if (ctx->pc == 0x12E3FCu) {
        ctx->pc = 0x12E3FCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->pc = 0x12E400u;
        goto label_12e400;
    }
    ctx->pc = 0x12E3F8u;
    {
        const bool branch_taken_0x12e3f8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x12E3FCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        if (branch_taken_0x12e3f8) {
            ctx->pc = 0x12E48Cu;
            goto label_12e48c;
        }
    }
    ctx->pc = 0x12E400u;
label_12e400:
    // 0x12e400: 0x3c020017
    ctx->pc = 0x12e400u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_12e404:
    // 0x12e404: 0x3263000f
    ctx->pc = 0x12e404u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 15));
label_12e408:
    // 0x12e408: 0x244259a0
    ctx->pc = 0x12e408u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22944));
label_12e40c:
    // 0x12e40c: 0x318c0
    ctx->pc = 0x12e40cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
label_12e410:
    // 0x12e410: 0x621821
    ctx->pc = 0x12e410u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12e414:
    // 0x12e414: 0x138103
    ctx->pc = 0x12e414u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 19), 4));
label_12e418:
    // 0x12e418: 0x32020010
    ctx->pc = 0x12e418u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 16));
label_12e41c:
    // 0x12e41c: 0x10400008
label_12e420:
    if (ctx->pc == 0x12E420u) {
        ctx->pc = 0x12E420u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x12E424u;
        goto label_12e424;
    }
    ctx->pc = 0x12E41Cu;
    {
        const bool branch_taken_0x12e41c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E420u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x12e41c) {
            ctx->pc = 0x12E440u;
            goto label_12e440;
        }
    }
    ctx->pc = 0x12E424u;
label_12e424:
    // 0x12e424: 0x3c020017
    ctx->pc = 0x12e424u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_12e428:
    // 0x12e428: 0x2c0202d
    ctx->pc = 0x12e428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12e42c:
    // 0x12e42c: 0xdc455a88
    ctx->pc = 0x12e42cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 23176)));
label_12e430:
    // 0x12e430: 0x3210000f
    ctx->pc = 0x12e430u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 15));
label_12e434:
    // 0x12e434: 0xc04a3e2
label_12e438:
    if (ctx->pc == 0x12E438u) {
        ctx->pc = 0x12E438u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x12E43Cu;
        goto label_12e43c;
    }
    ctx->pc = 0x12E434u;
    SET_GPR_U32(ctx, 31, 0x12E43Cu);
    ctx->pc = 0x12E438u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x128F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x128f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E43Cu; }
    }
    if (ctx->pc != 0x12E43Cu) { return; }
    ctx->pc = 0x12E43Cu;
label_12e43c:
    // 0x12e43c: 0x40b02d
    ctx->pc = 0x12e43cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e440:
    // 0x12e440: 0x1200000d
label_12e444:
    if (ctx->pc == 0x12E444u) {
        ctx->pc = 0x12E444u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        ctx->pc = 0x12E448u;
        goto label_12e448;
    }
    ctx->pc = 0x12E440u;
    {
        const bool branch_taken_0x12e440 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E444u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x12e440) {
            ctx->pc = 0x12E478u;
            goto label_12e478;
        }
    }
    ctx->pc = 0x12E448u;
label_12e448:
    // 0x12e448: 0x24515a68
    ctx->pc = 0x12e448u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 23144));
label_12e44c:
    // 0x12e44c: 0x0
    ctx->pc = 0x12e44cu;
    // NOP
label_12e450:
    // 0x12e450: 0x32020001
    ctx->pc = 0x12e450u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
label_12e454:
    // 0x12e454: 0x10400005
label_12e458:
    if (ctx->pc == 0x12E458u) {
        ctx->pc = 0x12E458u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E45Cu;
        goto label_12e45c;
    }
    ctx->pc = 0x12E454u;
    {
        const bool branch_taken_0x12e454 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E458u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e454) {
            ctx->pc = 0x12E46Cu;
            goto label_12e46c;
        }
    }
    ctx->pc = 0x12E45Cu;
label_12e45c:
    // 0x12e45c: 0xde250000
    ctx->pc = 0x12e45cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_12e460:
    // 0x12e460: 0xc04a338
label_12e464:
    if (ctx->pc == 0x12E464u) {
        ctx->pc = 0x12E464u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x12E468u;
        goto label_12e468;
    }
    ctx->pc = 0x12E460u;
    SET_GPR_U32(ctx, 31, 0x12E468u);
    ctx->pc = 0x12E464u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x128CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E468u; }
    }
    if (ctx->pc != 0x12E468u) { return; }
    ctx->pc = 0x12E468u;
label_12e468:
    // 0x12e468: 0x40902d
    ctx->pc = 0x12e468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e46c:
    // 0x12e46c: 0x108043
    ctx->pc = 0x12e46cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_12e470:
    // 0x12e470: 0x1600fff7
label_12e474:
    if (ctx->pc == 0x12E474u) {
        ctx->pc = 0x12E474u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x12E478u;
        goto label_12e478;
    }
    ctx->pc = 0x12E470u;
    {
        const bool branch_taken_0x12e470 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E474u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x12e470) {
            ctx->pc = 0x12E450u;
            goto label_12e450;
        }
    }
    ctx->pc = 0x12E478u;
label_12e478:
    // 0x12e478: 0x2c0202d
    ctx->pc = 0x12e478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12e47c:
    // 0x12e47c: 0xc04a3e2
label_12e480:
    if (ctx->pc == 0x12E480u) {
        ctx->pc = 0x12E480u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E484u;
        goto label_12e484;
    }
    ctx->pc = 0x12E47Cu;
    SET_GPR_U32(ctx, 31, 0x12E484u);
    ctx->pc = 0x12E480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x128f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E484u; }
    }
    if (ctx->pc != 0x12E484u) { return; }
    ctx->pc = 0x12E484u;
label_12e484:
    // 0x12e484: 0x1000001a
label_12e488:
    if (ctx->pc == 0x12E488u) {
        ctx->pc = 0x12E488u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E48Cu;
        goto label_12e48c;
    }
    ctx->pc = 0x12E484u;
    {
        const bool branch_taken_0x12e484 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E488u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e484) {
            ctx->pc = 0x12E4F0u;
            goto label_12e4f0;
        }
    }
    ctx->pc = 0x12E48Cu;
label_12e48c:
    // 0x12e48c: 0x138823
    ctx->pc = 0x12e48cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_12e490:
    // 0x12e490: 0x12200017
label_12e494:
    if (ctx->pc == 0x12E494u) {
        ctx->pc = 0x12E494u;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        ctx->pc = 0x12E498u;
        goto label_12e498;
    }
    ctx->pc = 0x12E490u;
    {
        const bool branch_taken_0x12e490 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E494u;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x12e490) {
            ctx->pc = 0x12E4F0u;
            goto label_12e4f0;
        }
    }
    ctx->pc = 0x12E498u;
label_12e498:
    // 0x12e498: 0x3222000f
    ctx->pc = 0x12e498u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 15));
label_12e49c:
    // 0x12e49c: 0x246359a0
    ctx->pc = 0x12e49cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 22944));
label_12e4a0:
    // 0x12e4a0: 0x210c0
    ctx->pc = 0x12e4a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_12e4a4:
    // 0x12e4a4: 0x431021
    ctx->pc = 0x12e4a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12e4a8:
    // 0x12e4a8: 0x2c0282d
    ctx->pc = 0x12e4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12e4ac:
    // 0x12e4ac: 0xdc440000
    ctx->pc = 0x12e4acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_12e4b0:
    // 0x12e4b0: 0xc04a338
label_12e4b4:
    if (ctx->pc == 0x12E4B4u) {
        ctx->pc = 0x12E4B4u;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
        ctx->pc = 0x12E4B8u;
        goto label_12e4b8;
    }
    ctx->pc = 0x12E4B0u;
    SET_GPR_U32(ctx, 31, 0x12E4B8u);
    ctx->pc = 0x12E4B4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->pc = 0x128CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E4B8u; }
    }
    if (ctx->pc != 0x12E4B8u) { return; }
    ctx->pc = 0x12E4B8u;
label_12e4b8:
    // 0x12e4b8: 0x1200000d
label_12e4bc:
    if (ctx->pc == 0x12E4BCu) {
        ctx->pc = 0x12E4BCu;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E4C0u;
        goto label_12e4c0;
    }
    ctx->pc = 0x12E4B8u;
    {
        const bool branch_taken_0x12e4b8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E4BCu;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e4b8) {
            ctx->pc = 0x12E4F0u;
            goto label_12e4f0;
        }
    }
    ctx->pc = 0x12E4C0u;
label_12e4c0:
    // 0x12e4c0: 0x3c020017
    ctx->pc = 0x12e4c0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_12e4c4:
    // 0x12e4c4: 0x24515a68
    ctx->pc = 0x12e4c4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 23144));
label_12e4c8:
    // 0x12e4c8: 0x32020001
    ctx->pc = 0x12e4c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
label_12e4cc:
    // 0x12e4cc: 0x10400005
label_12e4d0:
    if (ctx->pc == 0x12E4D0u) {
        ctx->pc = 0x12E4D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E4D4u;
        goto label_12e4d4;
    }
    ctx->pc = 0x12E4CCu;
    {
        const bool branch_taken_0x12e4cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E4D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e4cc) {
            ctx->pc = 0x12E4E4u;
            goto label_12e4e4;
        }
    }
    ctx->pc = 0x12E4D4u;
label_12e4d4:
    // 0x12e4d4: 0xde240000
    ctx->pc = 0x12e4d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_12e4d8:
    // 0x12e4d8: 0xc04a338
label_12e4dc:
    if (ctx->pc == 0x12E4DCu) {
        ctx->pc = 0x12E4DCu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x12E4E0u;
        goto label_12e4e0;
    }
    ctx->pc = 0x12E4D8u;
    SET_GPR_U32(ctx, 31, 0x12E4E0u);
    ctx->pc = 0x12E4DCu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x128CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E4E0u; }
    }
    if (ctx->pc != 0x12E4E0u) { return; }
    ctx->pc = 0x12E4E0u;
label_12e4e0:
    // 0x12e4e0: 0x40b02d
    ctx->pc = 0x12e4e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e4e4:
    // 0x12e4e4: 0x108043
    ctx->pc = 0x12e4e4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_12e4e8:
    // 0x12e4e8: 0x1600fff7
label_12e4ec:
    if (ctx->pc == 0x12E4ECu) {
        ctx->pc = 0x12E4ECu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x12E4F0u;
        goto label_12e4f0;
    }
    ctx->pc = 0x12E4E8u;
    {
        const bool branch_taken_0x12e4e8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E4ECu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x12e4e8) {
            ctx->pc = 0x12E4C8u;
            goto label_12e4c8;
        }
    }
    ctx->pc = 0x12E4F0u;
label_12e4f0:
    // 0x12e4f0: 0x8fa20030
    ctx->pc = 0x12e4f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_12e4f4:
    // 0x12e4f4: 0x10400014
label_12e4f8:
    if (ctx->pc == 0x12E4F8u) {
        ctx->pc = 0x12E4FCu;
        goto label_12e4fc;
    }
    ctx->pc = 0x12E4F4u;
    {
        const bool branch_taken_0x12e4f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12e4f4) {
            ctx->pc = 0x12E548u;
            goto label_12e548;
        }
    }
    ctx->pc = 0x12E4FCu;
label_12e4fc:
    // 0x12e4fc: 0x3405ffc0
    ctx->pc = 0x12e4fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)65472);
label_12e500:
    // 0x12e500: 0x52bbc
    ctx->pc = 0x12e500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_12e504:
    // 0x12e504: 0xc04a482
label_12e508:
    if (ctx->pc == 0x12E508u) {
        ctx->pc = 0x12E508u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E50Cu;
        goto label_12e50c;
    }
    ctx->pc = 0x12E504u;
    SET_GPR_U32(ctx, 31, 0x12E50Cu);
    ctx->pc = 0x12E508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E50Cu; }
    }
    if (ctx->pc != 0x12E50Cu) { return; }
    ctx->pc = 0x12E50Cu;
label_12e50c:
    // 0x12e50c: 0x441000e
label_12e510:
    if (ctx->pc == 0x12E510u) {
        ctx->pc = 0x12E510u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x12E514u;
        goto label_12e514;
    }
    ctx->pc = 0x12E50Cu;
    {
        const bool branch_taken_0x12e50c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12E510u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x12e50c) {
            ctx->pc = 0x12E548u;
            goto label_12e548;
        }
    }
    ctx->pc = 0x12E514u;
label_12e514:
    // 0x12e514: 0x1860000c
label_12e518:
    if (ctx->pc == 0x12E518u) {
        ctx->pc = 0x12E51Cu;
        goto label_12e51c;
    }
    ctx->pc = 0x12E514u;
    {
        const bool branch_taken_0x12e514 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x12e514) {
            ctx->pc = 0x12E548u;
            goto label_12e548;
        }
    }
    ctx->pc = 0x12E51Cu;
label_12e51c:
    // 0x12e51c: 0x8fa40028
    ctx->pc = 0x12e51cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_12e520:
    // 0x12e520: 0x188000ac
label_12e524:
    if (ctx->pc == 0x12E524u) {
        ctx->pc = 0x12E524u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->pc = 0x12E528u;
        goto label_12e528;
    }
    ctx->pc = 0x12E520u;
    {
        const bool branch_taken_0x12e520 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x12E524u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        if (branch_taken_0x12e520) {
            ctx->pc = 0x12E7D4u;
            goto label_12e7d4;
        }
    }
    ctx->pc = 0x12E528u;
label_12e528:
    // 0x12e528: 0x2c0282d
    ctx->pc = 0x12e528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12e52c:
    // 0x12e52c: 0x34048048
    ctx->pc = 0x12e52cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)32840);
label_12e530:
    // 0x12e530: 0x423fc
    ctx->pc = 0x12e530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_12e534:
    // 0x12e534: 0x2673ffff
    ctx->pc = 0x12e534u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_12e538:
    // 0x12e538: 0xafa20020
    ctx->pc = 0x12e538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_12e53c:
    // 0x12e53c: 0xc04a338
label_12e540:
    if (ctx->pc == 0x12E540u) {
        ctx->pc = 0x12E540u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x12E544u;
        goto label_12e544;
    }
    ctx->pc = 0x12E53Cu;
    SET_GPR_U32(ctx, 31, 0x12E544u);
    ctx->pc = 0x12E540u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x128CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E544u; }
    }
    if (ctx->pc != 0x12E544u) { return; }
    ctx->pc = 0x12E544u;
label_12e544:
    // 0x12e544: 0x40b02d
    ctx->pc = 0x12e544u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e548:
    // 0x12e548: 0xc04a496
label_12e54c:
    if (ctx->pc == 0x12E54Cu) {
        ctx->pc = 0x12E54Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E550u;
        goto label_12e550;
    }
    ctx->pc = 0x12E548u;
    SET_GPR_U32(ctx, 31, 0x12E550u);
    ctx->pc = 0x12E54Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129258u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x129258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E550u; }
    }
    if (ctx->pc != 0x12E550u) { return; }
    ctx->pc = 0x12E550u;
label_12e550:
    // 0x12e550: 0x40202d
    ctx->pc = 0x12e550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e554:
    // 0x12e554: 0xc04a338
label_12e558:
    if (ctx->pc == 0x12E558u) {
        ctx->pc = 0x12E558u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E55Cu;
        goto label_12e55c;
    }
    ctx->pc = 0x12E554u;
    SET_GPR_U32(ctx, 31, 0x12E55Cu);
    ctx->pc = 0x12E558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E55Cu; }
    }
    if (ctx->pc != 0x12E55Cu) { return; }
    ctx->pc = 0x12E55Cu;
label_12e55c:
    // 0x12e55c: 0x34058038
    ctx->pc = 0x12e55cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32824);
label_12e560:
    // 0x12e560: 0x52bfc
    ctx->pc = 0x12e560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_12e564:
    // 0x12e564: 0xc04a308
label_12e568:
    if (ctx->pc == 0x12E568u) {
        ctx->pc = 0x12E568u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E56Cu;
        goto label_12e56c;
    }
    ctx->pc = 0x12E564u;
    SET_GPR_U32(ctx, 31, 0x12E56Cu);
    ctx->pc = 0x12E568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x128c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E56Cu; }
    }
    if (ctx->pc != 0x12E56Cu) { return; }
    ctx->pc = 0x12E56Cu;
label_12e56c:
    // 0x12e56c: 0x40902d
    ctx->pc = 0x12e56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e570:
    // 0x12e570: 0x3c04ffff
    ctx->pc = 0x12e570u;
    SET_GPR_S32(ctx, 4, ((uint32_t)65535 << 16));
label_12e574:
    // 0x12e574: 0x4203e
    ctx->pc = 0x12e574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_12e578:
    // 0x12e578: 0x12183f
    ctx->pc = 0x12e578u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
label_12e57c:
    // 0x12e57c: 0x3c02fcc0
    ctx->pc = 0x12e57cu;
    SET_GPR_S32(ctx, 2, ((uint32_t)64704 << 16));
label_12e580:
    // 0x12e580: 0x621821
    ctx->pc = 0x12e580u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12e584:
    // 0x12e584: 0x2449024
    ctx->pc = 0x12e584u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_12e588:
    // 0x12e588: 0x3183c
    ctx->pc = 0x12e588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_12e58c:
    // 0x12e58c: 0x2439025
    ctx->pc = 0x12e58cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
label_12e590:
    // 0x12e590: 0x8fa30020
    ctx->pc = 0x12e590u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12e594:
    // 0x12e594: 0x54600017
label_12e598:
    if (ctx->pc == 0x12E598u) {
        ctx->pc = 0x12E598u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x12E59Cu;
        goto label_12e59c;
    }
    ctx->pc = 0x12E594u;
    {
        const bool branch_taken_0x12e594 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x12e594) {
            ctx->pc = 0x12E598u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->pc = 0x12E5F4u;
            goto label_12e5f4;
        }
    }
    ctx->pc = 0x12E59Cu;
label_12e59c:
    // 0x12e59c: 0x34058028
    ctx->pc = 0x12e59cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32808);
label_12e5a0:
    // 0x12e5a0: 0x52bfc
    ctx->pc = 0x12e5a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_12e5a4:
    // 0x12e5a4: 0x2c0202d
    ctx->pc = 0x12e5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12e5a8:
    // 0x12e5a8: 0xafa00050
    ctx->pc = 0x12e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_12e5ac:
    // 0x12e5ac: 0xc04a31e
label_12e5b0:
    if (ctx->pc == 0x12E5B0u) {
        ctx->pc = 0x12E5B0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x12E5B4u;
        goto label_12e5b4;
    }
    ctx->pc = 0x12E5ACu;
    SET_GPR_U32(ctx, 31, 0x12E5B4u);
    ctx->pc = 0x12E5B0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->pc = 0x128C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5B4u; }
    }
    if (ctx->pc != 0x12E5B4u) { return; }
    ctx->pc = 0x12E5B4u;
label_12e5b4:
    // 0x12e5b4: 0x40802d
    ctx->pc = 0x12e5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e5b8:
    // 0x12e5b8: 0x240282d
    ctx->pc = 0x12e5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12e5bc:
    // 0x12e5bc: 0xc04a482
label_12e5c0:
    if (ctx->pc == 0x12E5C0u) {
        ctx->pc = 0x12E5C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E5C4u;
        goto label_12e5c4;
    }
    ctx->pc = 0x12E5BCu;
    SET_GPR_U32(ctx, 31, 0x12E5C4u);
    ctx->pc = 0x12E5C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5C4u; }
    }
    if (ctx->pc != 0x12E5C4u) { return; }
    ctx->pc = 0x12E5C4u;
label_12e5c4:
    // 0x12e5c4: 0x1c4001ca
label_12e5c8:
    if (ctx->pc == 0x12E5C8u) {
        ctx->pc = 0x12E5C8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->pc = 0x12E5CCu;
        goto label_12e5cc;
    }
    ctx->pc = 0x12E5C4u;
    {
        const bool branch_taken_0x12e5c4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12E5C8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        if (branch_taken_0x12e5c4) {
            ctx->pc = 0x12ECF0u;
            goto label_12ecf0;
        }
    }
    ctx->pc = 0x12E5CCu;
label_12e5cc:
    // 0x12e5cc: 0x240282d
    ctx->pc = 0x12e5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12e5d0:
    // 0x12e5d0: 0xc04a31e
label_12e5d4:
    if (ctx->pc == 0x12E5D4u) {
        ctx->pc = 0x12E5D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E5D8u;
        goto label_12e5d8;
    }
    ctx->pc = 0x12E5D0u;
    SET_GPR_U32(ctx, 31, 0x12E5D8u);
    ctx->pc = 0x12E5D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5D8u; }
    }
    if (ctx->pc != 0x12E5D8u) { return; }
    ctx->pc = 0x12E5D8u;
label_12e5d8:
    // 0x12e5d8: 0x200202d
    ctx->pc = 0x12e5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e5dc:
    // 0x12e5dc: 0xc04a482
label_12e5e0:
    if (ctx->pc == 0x12E5E0u) {
        ctx->pc = 0x12E5E0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E5E4u;
        goto label_12e5e4;
    }
    ctx->pc = 0x12E5DCu;
    SET_GPR_U32(ctx, 31, 0x12E5E4u);
    ctx->pc = 0x12E5E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5E4u; }
    }
    if (ctx->pc != 0x12E5E4u) { return; }
    ctx->pc = 0x12E5E4u;
label_12e5e4:
    // 0x12e5e4: 0x44001be
label_12e5e8:
    if (ctx->pc == 0x12E5E8u) {
        ctx->pc = 0x12E5E8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x12E5ECu;
        goto label_12e5ec;
    }
    ctx->pc = 0x12E5E4u;
    {
        const bool branch_taken_0x12e5e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12E5E8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x12e5e4) {
            ctx->pc = 0x12ECE0u;
            goto label_12ece0;
        }
    }
    ctx->pc = 0x12E5ECu;
label_12e5ec:
    // 0x12e5ec: 0x1000007b
label_12e5f0:
    if (ctx->pc == 0x12E5F0u) {
        ctx->pc = 0x12E5F0u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E5F4u;
        goto label_12e5f4;
    }
    ctx->pc = 0x12E5ECu;
    {
        const bool branch_taken_0x12e5ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E5F0u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e5ec) {
            ctx->pc = 0x12E7DCu;
            goto label_12e7dc;
        }
    }
    ctx->pc = 0x12E5F4u;
label_12e5f4:
    // 0x12e5f4: 0x1080003a
label_12e5f8:
    if (ctx->pc == 0x12E5F8u) {
        ctx->pc = 0x12E5F8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x12E5FCu;
        goto label_12e5fc;
    }
    ctx->pc = 0x12E5F4u;
    {
        const bool branch_taken_0x12e5f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E5F8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x12e5f4) {
            ctx->pc = 0x12E6E0u;
            goto label_12e6e0;
        }
    }
    ctx->pc = 0x12E5FCu;
label_12e5fc:
    // 0x12e5fc: 0x3c030017
    ctx->pc = 0x12e5fcu;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_12e600:
    // 0x12e600: 0x246359a0
    ctx->pc = 0x12e600u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 22944));
label_12e604:
    // 0x12e604: 0xa02d
    ctx->pc = 0x12e604u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e608:
    // 0x12e608: 0x2482ffff
    ctx->pc = 0x12e608u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
label_12e60c:
    // 0x12e60c: 0x210c0
    ctx->pc = 0x12e60cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_12e610:
    // 0x12e610: 0x3404ff80
    ctx->pc = 0x12e610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)65408);
label_12e614:
    // 0x12e614: 0x423bc
    ctx->pc = 0x12e614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_12e618:
    // 0x12e618: 0x431021
    ctx->pc = 0x12e618u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12e61c:
    // 0x12e61c: 0xc04a3e2
label_12e620:
    if (ctx->pc == 0x12E620u) {
        ctx->pc = 0x12E620u;
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x12E624u;
        goto label_12e624;
    }
    ctx->pc = 0x12E61Cu;
    SET_GPR_U32(ctx, 31, 0x12E624u);
    ctx->pc = 0x12E620u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x128F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x128f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E624u; }
    }
    if (ctx->pc != 0x12E624u) { return; }
    ctx->pc = 0x12E624u;
label_12e624:
    // 0x12e624: 0x240282d
    ctx->pc = 0x12e624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12e628:
    // 0x12e628: 0xc04a31e
label_12e62c:
    if (ctx->pc == 0x12E62Cu) {
        ctx->pc = 0x12E62Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E630u;
        goto label_12e630;
    }
    ctx->pc = 0x12E628u;
    SET_GPR_U32(ctx, 31, 0x12E630u);
    ctx->pc = 0x12E62Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E630u; }
    }
    if (ctx->pc != 0x12E630u) { return; }
    ctx->pc = 0x12E630u;
label_12e630:
    // 0x12e630: 0x1000000b
label_12e634:
    if (ctx->pc == 0x12E634u) {
        ctx->pc = 0x12E634u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E638u;
        goto label_12e638;
    }
    ctx->pc = 0x12E630u;
    {
        const bool branch_taken_0x12e630 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E634u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e630) {
            ctx->pc = 0x12E660u;
            goto label_12e660;
        }
    }
    ctx->pc = 0x12E638u;
label_12e638:
    // 0x12e638: 0x34048048
    ctx->pc = 0x12e638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)32840);
label_12e63c:
    // 0x12e63c: 0x423fc
    ctx->pc = 0x12e63cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_12e640:
    // 0x12e640: 0xc04a338
label_12e644:
    if (ctx->pc == 0x12E644u) {
        ctx->pc = 0x12E644u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E648u;
        goto label_12e648;
    }
    ctx->pc = 0x12E640u;
    SET_GPR_U32(ctx, 31, 0x12E648u);
    ctx->pc = 0x12E644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E648u; }
    }
    if (ctx->pc != 0x12E648u) { return; }
    ctx->pc = 0x12E648u;
label_12e648:
    // 0x12e648: 0x34048048
    ctx->pc = 0x12e648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)32840);
label_12e64c:
    // 0x12e64c: 0x423fc
    ctx->pc = 0x12e64cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_12e650:
    // 0x12e650: 0x40902d
    ctx->pc = 0x12e650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e654:
    // 0x12e654: 0xc04a338
label_12e658:
    if (ctx->pc == 0x12E658u) {
        ctx->pc = 0x12E658u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E65Cu;
        goto label_12e65c;
    }
    ctx->pc = 0x12E654u;
    SET_GPR_U32(ctx, 31, 0x12E65Cu);
    ctx->pc = 0x12E658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E65Cu; }
    }
    if (ctx->pc != 0x12E65Cu) { return; }
    ctx->pc = 0x12E65Cu;
label_12e65c:
    // 0x12e65c: 0x40b02d
    ctx->pc = 0x12e65cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e660:
    // 0x12e660: 0xc04a4c4
label_12e664:
    if (ctx->pc == 0x12E664u) {
        ctx->pc = 0x12E664u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E668u;
        goto label_12e668;
    }
    ctx->pc = 0x12E660u;
    SET_GPR_U32(ctx, 31, 0x12E668u);
    ctx->pc = 0x12E664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129310u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x129310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E668u; }
    }
    if (ctx->pc != 0x12E668u) { return; }
    ctx->pc = 0x12E668u;
label_12e668:
    // 0x12e668: 0x40882d
    ctx->pc = 0x12e668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e66c:
    // 0x12e66c: 0xc04a496
label_12e670:
    if (ctx->pc == 0x12E670u) {
        ctx->pc = 0x12E670u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E674u;
        goto label_12e674;
    }
    ctx->pc = 0x12E66Cu;
    SET_GPR_U32(ctx, 31, 0x12E674u);
    ctx->pc = 0x12E670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129258u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x129258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E674u; }
    }
    if (ctx->pc != 0x12E674u) { return; }
    ctx->pc = 0x12E674u;
label_12e674:
    // 0x12e674: 0x2c0202d
    ctx->pc = 0x12e674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12e678:
    // 0x12e678: 0xc04a31e
label_12e67c:
    if (ctx->pc == 0x12E67Cu) {
        ctx->pc = 0x12E67Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E680u;
        goto label_12e680;
    }
    ctx->pc = 0x12E678u;
    SET_GPR_U32(ctx, 31, 0x12E680u);
    ctx->pc = 0x12E67Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E680u; }
    }
    if (ctx->pc != 0x12E680u) { return; }
    ctx->pc = 0x12E680u;
label_12e680:
    // 0x12e680: 0x40802d
    ctx->pc = 0x12e680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e684:
    // 0x12e684: 0x240282d
    ctx->pc = 0x12e684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12e688:
    // 0x12e688: 0x26220030
    ctx->pc = 0x12e688u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 48));
label_12e68c:
    // 0x12e68c: 0x200202d
    ctx->pc = 0x12e68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e690:
    // 0x12e690: 0xa2a20000
    ctx->pc = 0x12e690u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_12e694:
    // 0x12e694: 0xc04a482
label_12e698:
    if (ctx->pc == 0x12E698u) {
        ctx->pc = 0x12E698u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x12E69Cu;
        goto label_12e69c;
    }
    ctx->pc = 0x12E694u;
    SET_GPR_U32(ctx, 31, 0x12E69Cu);
    ctx->pc = 0x12E698u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E69Cu; }
    }
    if (ctx->pc != 0x12E69Cu) { return; }
    ctx->pc = 0x12E69Cu;
label_12e69c:
    // 0x12e69c: 0x442027f
label_12e6a0:
    if (ctx->pc == 0x12E6A0u) {
        ctx->pc = 0x12E6A0u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x12E6A4u;
        goto label_12e6a4;
    }
    ctx->pc = 0x12E69Cu;
    {
        const bool branch_taken_0x12e69c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x12e69c) {
            ctx->pc = 0x12E6A0u;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x12F09Cu;
            goto label_12f09c;
        }
    }
    ctx->pc = 0x12E6A4u;
label_12e6a4:
    // 0x12e6a4: 0x3404ffc0
    ctx->pc = 0x12e6a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)65472);
label_12e6a8:
    // 0x12e6a8: 0x423bc
    ctx->pc = 0x12e6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_12e6ac:
    // 0x12e6ac: 0xc04a31e
label_12e6b0:
    if (ctx->pc == 0x12E6B0u) {
        ctx->pc = 0x12E6B0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E6B4u;
        goto label_12e6b4;
    }
    ctx->pc = 0x12E6ACu;
    SET_GPR_U32(ctx, 31, 0x12E6B4u);
    ctx->pc = 0x12E6B0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E6B4u; }
    }
    if (ctx->pc != 0x12E6B4u) { return; }
    ctx->pc = 0x12E6B4u;
label_12e6b4:
    // 0x12e6b4: 0x40202d
    ctx->pc = 0x12e6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e6b8:
    // 0x12e6b8: 0xc04a482
label_12e6bc:
    if (ctx->pc == 0x12E6BCu) {
        ctx->pc = 0x12E6BCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E6C0u;
        goto label_12e6c0;
    }
    ctx->pc = 0x12E6B8u;
    SET_GPR_U32(ctx, 31, 0x12E6C0u);
    ctx->pc = 0x12E6BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E6C0u; }
    }
    if (ctx->pc != 0x12E6C0u) { return; }
    ctx->pc = 0x12E6C0u;
label_12e6c0:
    // 0x12e6c0: 0x4400098
label_12e6c4:
    if (ctx->pc == 0x12E6C4u) {
        ctx->pc = 0x12E6C4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x12E6C8u;
        goto label_12e6c8;
    }
    ctx->pc = 0x12E6C0u;
    {
        const bool branch_taken_0x12e6c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12E6C4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x12e6c0) {
            ctx->pc = 0x12E924u;
            goto label_12e924;
        }
    }
    ctx->pc = 0x12E6C8u;
label_12e6c8:
    // 0x12e6c8: 0x26940001
    ctx->pc = 0x12e6c8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_12e6cc:
    // 0x12e6cc: 0x283102a
    ctx->pc = 0x12e6ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_12e6d0:
    // 0x12e6d0: 0x1440ffd9
label_12e6d4:
    if (ctx->pc == 0x12E6D4u) {
        ctx->pc = 0x12E6D8u;
        goto label_12e6d8;
    }
    ctx->pc = 0x12E6D0u;
    {
        const bool branch_taken_0x12e6d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12e6d0) {
            ctx->pc = 0x12E638u;
            goto label_12e638;
        }
    }
    ctx->pc = 0x12E6D8u;
label_12e6d8:
    // 0x12e6d8: 0x1000003f
label_12e6dc:
    if (ctx->pc == 0x12E6DCu) {
        ctx->pc = 0x12E6DCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x12E6E0u;
        goto label_12e6e0;
    }
    ctx->pc = 0x12E6D8u;
    {
        const bool branch_taken_0x12e6d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E6DCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x12e6d8) {
            ctx->pc = 0x12E7D8u;
            goto label_12e7d8;
        }
    }
    ctx->pc = 0x12E6E0u;
label_12e6e0:
    // 0x12e6e0: 0x3c030017
    ctx->pc = 0x12e6e0u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_12e6e4:
    // 0x12e6e4: 0x246359a0
    ctx->pc = 0x12e6e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 22944));
label_12e6e8:
    // 0x12e6e8: 0x240282d
    ctx->pc = 0x12e6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12e6ec:
    // 0x12e6ec: 0x2482ffff
    ctx->pc = 0x12e6ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
label_12e6f0:
    // 0x12e6f0: 0x24140001
    ctx->pc = 0x12e6f0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_12e6f4:
    // 0x12e6f4: 0x210c0
    ctx->pc = 0x12e6f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_12e6f8:
    // 0x12e6f8: 0x431021
    ctx->pc = 0x12e6f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12e6fc:
    // 0x12e6fc: 0xc04a338
label_12e700:
    if (ctx->pc == 0x12E700u) {
        ctx->pc = 0x12E700u;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x12E704u;
        goto label_12e704;
    }
    ctx->pc = 0x12E6FCu;
    SET_GPR_U32(ctx, 31, 0x12E704u);
    ctx->pc = 0x12E700u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x128CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E704u; }
    }
    if (ctx->pc != 0x12E704u) { return; }
    ctx->pc = 0x12E704u;
label_12e704:
    // 0x12e704: 0x10000008
label_12e708:
    if (ctx->pc == 0x12E708u) {
        ctx->pc = 0x12E708u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E70Cu;
        goto label_12e70c;
    }
    ctx->pc = 0x12E704u;
    {
        const bool branch_taken_0x12e704 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E708u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e704) {
            ctx->pc = 0x12E728u;
            goto label_12e728;
        }
    }
    ctx->pc = 0x12E70Cu;
label_12e70c:
    // 0x12e70c: 0x0
    ctx->pc = 0x12e70cu;
    // NOP
label_12e710:
    // 0x12e710: 0x34048048
    ctx->pc = 0x12e710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)32840);
label_12e714:
    // 0x12e714: 0x423fc
    ctx->pc = 0x12e714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_12e718:
    // 0x12e718: 0x200282d
    ctx->pc = 0x12e718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e71c:
    // 0x12e71c: 0xc04a338
label_12e720:
    if (ctx->pc == 0x12E720u) {
        ctx->pc = 0x12E720u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x12E724u;
        goto label_12e724;
    }
    ctx->pc = 0x12E71Cu;
    SET_GPR_U32(ctx, 31, 0x12E724u);
    ctx->pc = 0x12E720u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x128CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E724u; }
    }
    if (ctx->pc != 0x12E724u) { return; }
    ctx->pc = 0x12E724u;
label_12e724:
    // 0x12e724: 0x40b02d
    ctx->pc = 0x12e724u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e728:
    // 0x12e728: 0xc04a4c4
label_12e72c:
    if (ctx->pc == 0x12E72Cu) {
        ctx->pc = 0x12E72Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E730u;
        goto label_12e730;
    }
    ctx->pc = 0x12E728u;
    SET_GPR_U32(ctx, 31, 0x12E730u);
    ctx->pc = 0x12E72Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129310u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x129310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E730u; }
    }
    if (ctx->pc != 0x12E730u) { return; }
    ctx->pc = 0x12E730u;
label_12e730:
    // 0x12e730: 0x40882d
    ctx->pc = 0x12e730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e734:
    // 0x12e734: 0xc04a496
label_12e738:
    if (ctx->pc == 0x12E738u) {
        ctx->pc = 0x12E738u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E73Cu;
        goto label_12e73c;
    }
    ctx->pc = 0x12E734u;
    SET_GPR_U32(ctx, 31, 0x12E73Cu);
    ctx->pc = 0x12E738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129258u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x129258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E73Cu; }
    }
    if (ctx->pc != 0x12E73Cu) { return; }
    ctx->pc = 0x12E73Cu;
label_12e73c:
    // 0x12e73c: 0x2c0202d
    ctx->pc = 0x12e73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12e740:
    // 0x12e740: 0xc04a31e
label_12e744:
    if (ctx->pc == 0x12E744u) {
        ctx->pc = 0x12E744u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E748u;
        goto label_12e748;
    }
    ctx->pc = 0x12E740u;
    SET_GPR_U32(ctx, 31, 0x12E748u);
    ctx->pc = 0x12E744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E748u; }
    }
    if (ctx->pc != 0x12E748u) { return; }
    ctx->pc = 0x12E748u;
label_12e748:
    // 0x12e748: 0x40802d
    ctx->pc = 0x12e748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e74c:
    // 0x12e74c: 0x26220030
    ctx->pc = 0x12e74cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 48));
label_12e750:
    // 0x12e750: 0xa2a20000
    ctx->pc = 0x12e750u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_12e754:
    // 0x12e754: 0x8fa20020
    ctx->pc = 0x12e754u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12e758:
    // 0x12e758: 0x1682ffed
label_12e75c:
    if (ctx->pc == 0x12E75Cu) {
        ctx->pc = 0x12E75Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x12E760u;
        goto label_12e760;
    }
    ctx->pc = 0x12E758u;
    {
        const bool branch_taken_0x12e758 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x12E75Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x12e758) {
            ctx->pc = 0x12E710u;
            goto label_12e710;
        }
    }
    ctx->pc = 0x12E760u;
label_12e760:
    // 0x12e760: 0x3404ff80
    ctx->pc = 0x12e760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)65408);
label_12e764:
    // 0x12e764: 0x423bc
    ctx->pc = 0x12e764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_12e768:
    // 0x12e768: 0xc04a308
label_12e76c:
    if (ctx->pc == 0x12E76Cu) {
        ctx->pc = 0x12E76Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E770u;
        goto label_12e770;
    }
    ctx->pc = 0x12E768u;
    SET_GPR_U32(ctx, 31, 0x12E770u);
    ctx->pc = 0x12E76Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x128c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E770u; }
    }
    if (ctx->pc != 0x12E770u) { return; }
    ctx->pc = 0x12E770u;
label_12e770:
    // 0x12e770: 0x40282d
    ctx->pc = 0x12e770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e774:
    // 0x12e774: 0xc04a482
label_12e778:
    if (ctx->pc == 0x12E778u) {
        ctx->pc = 0x12E778u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E77Cu;
        goto label_12e77c;
    }
    ctx->pc = 0x12E774u;
    SET_GPR_U32(ctx, 31, 0x12E77Cu);
    ctx->pc = 0x12E778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E77Cu; }
    }
    if (ctx->pc != 0x12E77Cu) { return; }
    ctx->pc = 0x12E77Cu;
label_12e77c:
    // 0x12e77c: 0x5c40006a
label_12e780:
    if (ctx->pc == 0x12E780u) {
        ctx->pc = 0x12E780u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x12E784u;
        goto label_12e784;
    }
    ctx->pc = 0x12E77Cu;
    {
        const bool branch_taken_0x12e77c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x12e77c) {
            ctx->pc = 0x12E780u;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x12E928u;
            goto label_12e928;
        }
    }
    ctx->pc = 0x12E784u;
label_12e784:
    // 0x12e784: 0x3404ff80
    ctx->pc = 0x12e784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)65408);
label_12e788:
    // 0x12e788: 0x423bc
    ctx->pc = 0x12e788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_12e78c:
    // 0x12e78c: 0xc04a31e
label_12e790:
    if (ctx->pc == 0x12E790u) {
        ctx->pc = 0x12E790u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E794u;
        goto label_12e794;
    }
    ctx->pc = 0x12E78Cu;
    SET_GPR_U32(ctx, 31, 0x12E794u);
    ctx->pc = 0x12E790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E794u; }
    }
    if (ctx->pc != 0x12E794u) { return; }
    ctx->pc = 0x12E794u;
label_12e794:
    // 0x12e794: 0x200202d
    ctx->pc = 0x12e794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e798:
    // 0x12e798: 0xc04a482
label_12e79c:
    if (ctx->pc == 0x12E79Cu) {
        ctx->pc = 0x12E79Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E7A0u;
        goto label_12e7a0;
    }
    ctx->pc = 0x12E798u;
    SET_GPR_U32(ctx, 31, 0x12E7A0u);
    ctx->pc = 0x12E79Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E7A0u; }
    }
    if (ctx->pc != 0x12E7A0u) { return; }
    ctx->pc = 0x12E7A0u;
label_12e7a0:
    // 0x12e7a0: 0x441000d
label_12e7a4:
    if (ctx->pc == 0x12E7A4u) {
        ctx->pc = 0x12E7A4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x12E7A8u;
        goto label_12e7a8;
    }
    ctx->pc = 0x12E7A0u;
    {
        const bool branch_taken_0x12e7a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12E7A4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x12e7a0) {
            ctx->pc = 0x12E7D8u;
            goto label_12e7d8;
        }
    }
    ctx->pc = 0x12E7A8u;
label_12e7a8:
    // 0x12e7a8: 0x26770001
    ctx->pc = 0x12e7a8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
label_12e7ac:
    // 0x12e7ac: 0x0
    ctx->pc = 0x12e7acu;
    // NOP
label_12e7b0:
    // 0x12e7b0: 0x26b5ffff
    ctx->pc = 0x12e7b0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_12e7b4:
    // 0x12e7b4: 0x24030030
    ctx->pc = 0x12e7b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
label_12e7b8:
    // 0x12e7b8: 0x82a20000
    ctx->pc = 0x12e7b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_12e7bc:
    // 0x12e7bc: 0x0
    ctx->pc = 0x12e7bcu;
    // NOP
label_12e7c0:
    // 0x12e7c0: 0x0
    ctx->pc = 0x12e7c0u;
    // NOP
label_12e7c4:
    // 0x12e7c4: 0x1043fffa
label_12e7c8:
    if (ctx->pc == 0x12E7C8u) {
        ctx->pc = 0x12E7CCu;
        goto label_12e7cc;
    }
    ctx->pc = 0x12E7C4u;
    {
        const bool branch_taken_0x12e7c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x12e7c4) {
            ctx->pc = 0x12E7B0u;
            goto label_12e7b0;
        }
    }
    ctx->pc = 0x12E7CCu;
label_12e7cc:
    // 0x12e7cc: 0x10000233
label_12e7d0:
    if (ctx->pc == 0x12E7D0u) {
        ctx->pc = 0x12E7D0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x12E7D4u;
        goto label_12e7d4;
    }
    ctx->pc = 0x12E7CCu;
    {
        const bool branch_taken_0x12e7cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E7D0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x12e7cc) {
            ctx->pc = 0x12F09Cu;
            goto label_12f09c;
        }
    }
    ctx->pc = 0x12E7D4u;
label_12e7d4:
    // 0x12e7d4: 0x8fa40024
    ctx->pc = 0x12e7d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_12e7d8:
    // 0x12e7d8: 0x2e0b02d
    ctx->pc = 0x12e7d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12e7dc:
    // 0x12e7dc: 0x8fb3002c
    ctx->pc = 0x12e7dcu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_12e7e0:
    // 0x12e7e0: 0xafa40020
    ctx->pc = 0x12e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_12e7e4:
    // 0x12e7e4: 0x8fb50058
    ctx->pc = 0x12e7e4u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_12e7e8:
    // 0x12e7e8: 0x8fa30000
    ctx->pc = 0x12e7e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e7ec:
    // 0x12e7ec: 0x460005e
label_12e7f0:
    if (ctx->pc == 0x12E7F0u) {
        ctx->pc = 0x12E7F0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 15));
        ctx->pc = 0x12E7F4u;
        goto label_12e7f4;
    }
    ctx->pc = 0x12E7ECu;
    {
        const bool branch_taken_0x12e7ec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x12E7F0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 15));
        if (branch_taken_0x12e7ec) {
            ctx->pc = 0x12E968u;
            goto label_12e968;
        }
    }
    ctx->pc = 0x12E7F4u;
label_12e7f4:
    // 0x12e7f4: 0x1040005c
label_12e7f8:
    if (ctx->pc == 0x12E7F8u) {
        ctx->pc = 0x12E7F8u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        ctx->pc = 0x12E7FCu;
        goto label_12e7fc;
    }
    ctx->pc = 0x12E7F4u;
    {
        const bool branch_taken_0x12e7f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E7F8u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x12e7f4) {
            ctx->pc = 0x12E968u;
            goto label_12e968;
        }
    }
    ctx->pc = 0x12E7FCu;
label_12e7fc:
    // 0x12e7fc: 0x1318c0
    ctx->pc = 0x12e7fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 3));
label_12e800:
    // 0x12e800: 0x244259a0
    ctx->pc = 0x12e800u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22944));
label_12e804:
    // 0x12e804: 0x621821
    ctx->pc = 0x12e804u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12e808:
    // 0x12e808: 0x8fa2000c
    ctx->pc = 0x12e808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_12e80c:
    // 0x12e80c: 0x4410012
label_12e810:
    if (ctx->pc == 0x12E810u) {
        ctx->pc = 0x12E810u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x12E814u;
        goto label_12e814;
    }
    ctx->pc = 0x12E80Cu;
    {
        const bool branch_taken_0x12e80c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12E810u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x12e80c) {
            ctx->pc = 0x12E858u;
            goto label_12e858;
        }
    }
    ctx->pc = 0x12E814u;
label_12e814:
    // 0x12e814: 0x8fa30020
    ctx->pc = 0x12e814u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12e818:
    // 0x12e818: 0x1c600011
label_12e81c:
    if (ctx->pc == 0x12E81Cu) {
        ctx->pc = 0x12E81Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12E820u;
        goto label_12e820;
    }
    ctx->pc = 0x12E818u;
    {
        const bool branch_taken_0x12e818 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x12E81Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x12e818) {
            ctx->pc = 0x12E860u;
            goto label_12e860;
        }
    }
    ctx->pc = 0x12E820u;
label_12e820:
    // 0x12e820: 0xafa00050
    ctx->pc = 0x12e820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_12e824:
    // 0x12e824: 0x460012e
label_12e828:
    if (ctx->pc == 0x12E828u) {
        ctx->pc = 0x12E828u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x12E82Cu;
        goto label_12e82c;
    }
    ctx->pc = 0x12E824u;
    {
        const bool branch_taken_0x12e824 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x12E828u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        if (branch_taken_0x12e824) {
            ctx->pc = 0x12ECE0u;
            goto label_12ece0;
        }
    }
    ctx->pc = 0x12E82Cu;
label_12e82c:
    // 0x12e82c: 0x34058028
    ctx->pc = 0x12e82cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32808);
label_12e830:
    // 0x12e830: 0x52bfc
    ctx->pc = 0x12e830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_12e834:
    // 0x12e834: 0xc04a338
label_12e838:
    if (ctx->pc == 0x12E838u) {
        ctx->pc = 0x12E838u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E83Cu;
        goto label_12e83c;
    }
    ctx->pc = 0x12E834u;
    SET_GPR_U32(ctx, 31, 0x12E83Cu);
    ctx->pc = 0x12E838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E83Cu; }
    }
    if (ctx->pc != 0x12E83Cu) { return; }
    ctx->pc = 0x12E83Cu;
label_12e83c:
    // 0x12e83c: 0x2c0202d
    ctx->pc = 0x12e83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12e840:
    // 0x12e840: 0xc04a482
label_12e844:
    if (ctx->pc == 0x12E844u) {
        ctx->pc = 0x12E844u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E848u;
        goto label_12e848;
    }
    ctx->pc = 0x12E840u;
    SET_GPR_U32(ctx, 31, 0x12E848u);
    ctx->pc = 0x12E844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E848u; }
    }
    if (ctx->pc != 0x12E848u) { return; }
    ctx->pc = 0x12E848u;
label_12e848:
    // 0x12e848: 0x18400125
label_12e84c:
    if (ctx->pc == 0x12E84Cu) {
        ctx->pc = 0x12E84Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->pc = 0x12E850u;
        goto label_12e850;
    }
    ctx->pc = 0x12E848u;
    {
        const bool branch_taken_0x12e848 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12E84Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        if (branch_taken_0x12e848) {
            ctx->pc = 0x12ECE0u;
            goto label_12ece0;
        }
    }
    ctx->pc = 0x12E850u;
label_12e850:
    // 0x12e850: 0x10000128
label_12e854:
    if (ctx->pc == 0x12E854u) {
        ctx->pc = 0x12E854u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
        ctx->pc = 0x12E858u;
        goto label_12e858;
    }
    ctx->pc = 0x12E850u;
    {
        const bool branch_taken_0x12e850 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E854u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
        if (branch_taken_0x12e850) {
            ctx->pc = 0x12ECF4u;
            goto label_12ecf4;
        }
    }
    ctx->pc = 0x12E858u;
label_12e858:
    // 0x12e858: 0x24140001
    ctx->pc = 0x12e858u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_12e85c:
    // 0x12e85c: 0x0
    ctx->pc = 0x12e85cu;
    // NOP
label_12e860:
    // 0x12e860: 0x1000000b
label_12e864:
    if (ctx->pc == 0x12E864u) {
        ctx->pc = 0x12E864u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x12E868u;
        goto label_12e868;
    }
    ctx->pc = 0x12E860u;
    {
        const bool branch_taken_0x12e860 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E864u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x12e860) {
            ctx->pc = 0x12E890u;
            goto label_12e890;
        }
    }
    ctx->pc = 0x12E868u;
label_12e868:
    // 0x12e868: 0x34048048
    ctx->pc = 0x12e868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)32840);
label_12e86c:
    // 0x12e86c: 0x423fc
    ctx->pc = 0x12e86cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_12e870:
    // 0x12e870: 0xc04a338
label_12e874:
    if (ctx->pc == 0x12E874u) {
        ctx->pc = 0x12E878u;
        goto label_12e878;
    }
    ctx->pc = 0x12E870u;
    SET_GPR_U32(ctx, 31, 0x12E878u);
    ctx->pc = 0x128CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E878u; }
    }
    if (ctx->pc != 0x12E878u) { return; }
    ctx->pc = 0x12E878u;
label_12e878:
    // 0x12e878: 0x282d
    ctx->pc = 0x12e878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e87c:
    // 0x12e87c: 0x40202d
    ctx->pc = 0x12e87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e880:
    // 0x12e880: 0xc04a482
label_12e884:
    if (ctx->pc == 0x12E884u) {
        ctx->pc = 0x12E884u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E888u;
        goto label_12e888;
    }
    ctx->pc = 0x12E880u;
    SET_GPR_U32(ctx, 31, 0x12E888u);
    ctx->pc = 0x12E884u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E888u; }
    }
    if (ctx->pc != 0x12E888u) { return; }
    ctx->pc = 0x12E888u;
label_12e888:
    // 0x12e888: 0x10400204
label_12e88c:
    if (ctx->pc == 0x12E88Cu) {
        ctx->pc = 0x12E88Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x12E890u;
        goto label_12e890;
    }
    ctx->pc = 0x12E888u;
    {
        const bool branch_taken_0x12e888 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E88Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x12e888) {
            ctx->pc = 0x12F09Cu;
            goto label_12f09c;
        }
    }
    ctx->pc = 0x12E890u;
label_12e890:
    // 0x12e890: 0x2c0202d
    ctx->pc = 0x12e890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12e894:
    // 0x12e894: 0xc04a3e2
label_12e898:
    if (ctx->pc == 0x12E898u) {
        ctx->pc = 0x12E898u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E89Cu;
        goto label_12e89c;
    }
    ctx->pc = 0x12E894u;
    SET_GPR_U32(ctx, 31, 0x12E89Cu);
    ctx->pc = 0x12E898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x128f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E89Cu; }
    }
    if (ctx->pc != 0x12E89Cu) { return; }
    ctx->pc = 0x12E89Cu;
label_12e89c:
    // 0x12e89c: 0xc04a4c4
label_12e8a0:
    if (ctx->pc == 0x12E8A0u) {
        ctx->pc = 0x12E8A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E8A4u;
        goto label_12e8a4;
    }
    ctx->pc = 0x12E89Cu;
    SET_GPR_U32(ctx, 31, 0x12E8A4u);
    ctx->pc = 0x12E8A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129310u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x129310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8A4u; }
    }
    if (ctx->pc != 0x12E8A4u) { return; }
    ctx->pc = 0x12E8A4u;
label_12e8a4:
    // 0x12e8a4: 0x40882d
    ctx->pc = 0x12e8a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e8a8:
    // 0x12e8a8: 0xc04a496
label_12e8ac:
    if (ctx->pc == 0x12E8ACu) {
        ctx->pc = 0x12E8ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E8B0u;
        goto label_12e8b0;
    }
    ctx->pc = 0x12E8A8u;
    SET_GPR_U32(ctx, 31, 0x12E8B0u);
    ctx->pc = 0x12E8ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129258u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x129258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8B0u; }
    }
    if (ctx->pc != 0x12E8B0u) { return; }
    ctx->pc = 0x12E8B0u;
label_12e8b0:
    // 0x12e8b0: 0x40202d
    ctx->pc = 0x12e8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e8b4:
    // 0x12e8b4: 0xc04a338
label_12e8b8:
    if (ctx->pc == 0x12E8B8u) {
        ctx->pc = 0x12E8B8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E8BCu;
        goto label_12e8bc;
    }
    ctx->pc = 0x12E8B4u;
    SET_GPR_U32(ctx, 31, 0x12E8BCu);
    ctx->pc = 0x12E8B8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8BCu; }
    }
    if (ctx->pc != 0x12E8BCu) { return; }
    ctx->pc = 0x12E8BCu;
label_12e8bc:
    // 0x12e8bc: 0x2c0202d
    ctx->pc = 0x12e8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12e8c0:
    // 0x12e8c0: 0xc04a31e
label_12e8c4:
    if (ctx->pc == 0x12E8C4u) {
        ctx->pc = 0x12E8C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E8C8u;
        goto label_12e8c8;
    }
    ctx->pc = 0x12E8C0u;
    SET_GPR_U32(ctx, 31, 0x12E8C8u);
    ctx->pc = 0x12E8C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8C8u; }
    }
    if (ctx->pc != 0x12E8C8u) { return; }
    ctx->pc = 0x12E8C8u;
label_12e8c8:
    // 0x12e8c8: 0x40282d
    ctx->pc = 0x12e8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e8cc:
    // 0x12e8cc: 0x26220030
    ctx->pc = 0x12e8ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 48));
label_12e8d0:
    // 0x12e8d0: 0xa2a20000
    ctx->pc = 0x12e8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_12e8d4:
    // 0x12e8d4: 0x8fa40020
    ctx->pc = 0x12e8d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12e8d8:
    // 0x12e8d8: 0x1684ffe3
label_12e8dc:
    if (ctx->pc == 0x12E8DCu) {
        ctx->pc = 0x12E8DCu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x12E8E0u;
        goto label_12e8e0;
    }
    ctx->pc = 0x12E8D8u;
    {
        const bool branch_taken_0x12e8d8 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 4));
        ctx->pc = 0x12E8DCu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x12e8d8) {
            ctx->pc = 0x12E868u;
            goto label_12e868;
        }
    }
    ctx->pc = 0x12E8E0u;
label_12e8e0:
    // 0x12e8e0: 0xc04a308
label_12e8e4:
    if (ctx->pc == 0x12E8E4u) {
        ctx->pc = 0x12E8E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E8E8u;
        goto label_12e8e8;
    }
    ctx->pc = 0x12E8E0u;
    SET_GPR_U32(ctx, 31, 0x12E8E8u);
    ctx->pc = 0x12E8E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x128c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8E8u; }
    }
    if (ctx->pc != 0x12E8E8u) { return; }
    ctx->pc = 0x12E8E8u;
label_12e8e8:
    // 0x12e8e8: 0x40802d
    ctx->pc = 0x12e8e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e8ec:
    // 0x12e8ec: 0x240282d
    ctx->pc = 0x12e8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12e8f0:
    // 0x12e8f0: 0xc04a482
label_12e8f4:
    if (ctx->pc == 0x12E8F4u) {
        ctx->pc = 0x12E8F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E8F8u;
        goto label_12e8f8;
    }
    ctx->pc = 0x12E8F0u;
    SET_GPR_U32(ctx, 31, 0x12E8F8u);
    ctx->pc = 0x12E8F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8F8u; }
    }
    if (ctx->pc != 0x12E8F8u) { return; }
    ctx->pc = 0x12E8F8u;
label_12e8f8:
    // 0x12e8f8: 0x1c40000c
label_12e8fc:
    if (ctx->pc == 0x12E8FCu) {
        ctx->pc = 0x12E8FCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x12E900u;
        goto label_12e900;
    }
    ctx->pc = 0x12E8F8u;
    {
        const bool branch_taken_0x12e8f8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12E8FCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x12e8f8) {
            ctx->pc = 0x12E92Cu;
            goto label_12e92c;
        }
    }
    ctx->pc = 0x12E900u;
label_12e900:
    // 0x12e900: 0x200202d
    ctx->pc = 0x12e900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e904:
    // 0x12e904: 0xc04a482
label_12e908:
    if (ctx->pc == 0x12E908u) {
        ctx->pc = 0x12E908u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E90Cu;
        goto label_12e90c;
    }
    ctx->pc = 0x12E904u;
    SET_GPR_U32(ctx, 31, 0x12E90Cu);
    ctx->pc = 0x12E908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E90Cu; }
    }
    if (ctx->pc != 0x12E90Cu) { return; }
    ctx->pc = 0x12E90Cu;
label_12e90c:
    // 0x12e90c: 0x144001e3
label_12e910:
    if (ctx->pc == 0x12E910u) {
        ctx->pc = 0x12E910u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x12E914u;
        goto label_12e914;
    }
    ctx->pc = 0x12E90Cu;
    {
        const bool branch_taken_0x12e90c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E910u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x12e90c) {
            ctx->pc = 0x12F09Cu;
            goto label_12f09c;
        }
    }
    ctx->pc = 0x12E914u;
label_12e914:
    // 0x12e914: 0x104001e1
label_12e918:
    if (ctx->pc == 0x12E918u) {
        ctx->pc = 0x12E918u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x12E91Cu;
        goto label_12e91c;
    }
    ctx->pc = 0x12E914u;
    {
        const bool branch_taken_0x12e914 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E918u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x12e914) {
            ctx->pc = 0x12F09Cu;
            goto label_12f09c;
        }
    }
    ctx->pc = 0x12E91Cu;
label_12e91c:
    // 0x12e91c: 0x10000004
label_12e920:
    if (ctx->pc == 0x12E920u) {
        ctx->pc = 0x12E920u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x12E924u;
        goto label_12e924;
    }
    ctx->pc = 0x12E91Cu;
    {
        const bool branch_taken_0x12e91c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E920u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x12e91c) {
            ctx->pc = 0x12E930u;
            goto label_12e930;
        }
    }
    ctx->pc = 0x12E924u;
label_12e924:
    // 0x12e924: 0x26770001
    ctx->pc = 0x12e924u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
label_12e928:
    // 0x12e928: 0x24050039
    ctx->pc = 0x12e928u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
label_12e92c:
    // 0x12e92c: 0x24030030
    ctx->pc = 0x12e92cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
label_12e930:
    // 0x12e930: 0x26b5ffff
    ctx->pc = 0x12e930u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_12e934:
    // 0x12e934: 0x82a20000
    ctx->pc = 0x12e934u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_12e938:
    // 0x12e938: 0x14450007
label_12e93c:
    if (ctx->pc == 0x12E93Cu) {
        ctx->pc = 0x12E93Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x12E940u;
        goto label_12e940;
    }
    ctx->pc = 0x12E938u;
    {
        const bool branch_taken_0x12e938 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x12E93Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        if (branch_taken_0x12e938) {
            ctx->pc = 0x12E958u;
            goto label_12e958;
        }
    }
    ctx->pc = 0x12E940u;
label_12e940:
    // 0x12e940: 0x8fa20058
    ctx->pc = 0x12e940u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_12e944:
    // 0x12e944: 0x56a2fffb
label_12e948:
    if (ctx->pc == 0x12E948u) {
        ctx->pc = 0x12E948u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x12E94Cu;
        goto label_12e94c;
    }
    ctx->pc = 0x12E944u;
    {
        const bool branch_taken_0x12e944 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        if (branch_taken_0x12e944) {
            ctx->pc = 0x12E948u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->pc = 0x12E934u;
            goto label_12e934;
        }
    }
    ctx->pc = 0x12E94Cu;
label_12e94c:
    // 0x12e94c: 0xa0430000
    ctx->pc = 0x12e94cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_12e950:
    // 0x12e950: 0x60202d
    ctx->pc = 0x12e950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12e954:
    // 0x12e954: 0x26f70001
    ctx->pc = 0x12e954u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
label_12e958:
    // 0x12e958: 0x24820001
    ctx->pc = 0x12e958u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_12e95c:
    // 0x12e95c: 0xa2a20000
    ctx->pc = 0x12e95cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_12e960:
    // 0x12e960: 0x100001ce
label_12e964:
    if (ctx->pc == 0x12E964u) {
        ctx->pc = 0x12E964u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x12E968u;
        goto label_12e968;
    }
    ctx->pc = 0x12E960u;
    {
        const bool branch_taken_0x12e960 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E964u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x12e960) {
            ctx->pc = 0x12F09Cu;
            goto label_12f09c;
        }
    }
    ctx->pc = 0x12E968u;
label_12e968:
    // 0x12e968: 0x8fa40034
    ctx->pc = 0x12e968u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_12e96c:
    // 0x12e96c: 0x8fb10018
    ctx->pc = 0x12e96cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12e970:
    // 0x12e970: 0x8fb2001c
    ctx->pc = 0x12e970u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_12e974:
    // 0x12e974: 0xafa0004c
    ctx->pc = 0x12e974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_12e978:
    // 0x12e978: 0x1080002b
label_12e97c:
    if (ctx->pc == 0x12E97Cu) {
        ctx->pc = 0x12E97Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x12E980u;
        goto label_12e980;
    }
    ctx->pc = 0x12E978u;
    {
        const bool branch_taken_0x12e978 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E97Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        if (branch_taken_0x12e978) {
            ctx->pc = 0x12EA28u;
            goto label_12ea28;
        }
    }
    ctx->pc = 0x12E980u;
label_12e980:
    // 0x12e980: 0x8fa20008
    ctx->pc = 0x12e980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_12e984:
    // 0x12e984: 0x28570002
    ctx->pc = 0x12e984u;
    SET_GPR_U32(ctx, 23, SLT32(GPR_S32(ctx, 2), 2));
label_12e988:
    // 0x12e988: 0x12e00007
label_12e98c:
    if (ctx->pc == 0x12E98Cu) {
        ctx->pc = 0x12E98Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->pc = 0x12E990u;
        goto label_12e990;
    }
    ctx->pc = 0x12E988u;
    {
        const bool branch_taken_0x12e988 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E98Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        if (branch_taken_0x12e988) {
            ctx->pc = 0x12E9A8u;
            goto label_12e9a8;
        }
    }
    ctx->pc = 0x12E990u;
label_12e990:
    // 0x12e990: 0x1480001a
label_12e994:
    if (ctx->pc == 0x12E994u) {
        ctx->pc = 0x12E994u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 3), 1075));
        ctx->pc = 0x12E998u;
        goto label_12e998;
    }
    ctx->pc = 0x12E990u;
    {
        const bool branch_taken_0x12e990 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E994u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 3), 1075));
        if (branch_taken_0x12e990) {
            ctx->pc = 0x12E9FCu;
            goto label_12e9fc;
        }
    }
    ctx->pc = 0x12E998u;
label_12e998:
    // 0x12e998: 0x8fa30004
    ctx->pc = 0x12e998u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12e99c:
    // 0x12e99c: 0x24020036
    ctx->pc = 0x12e99cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 54));
label_12e9a0:
    // 0x12e9a0: 0x10000016
label_12e9a4:
    if (ctx->pc == 0x12E9A4u) {
        ctx->pc = 0x12E9A4u;
        SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x12E9A8u;
        goto label_12e9a8;
    }
    ctx->pc = 0x12E9A0u;
    {
        const bool branch_taken_0x12e9a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E9A4u;
        SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x12e9a0) {
            ctx->pc = 0x12E9FCu;
            goto label_12e9fc;
        }
    }
    ctx->pc = 0x12E9A8u;
label_12e9a8:
    // 0x12e9a8: 0x8fa20020
    ctx->pc = 0x12e9a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12e9ac:
    // 0x12e9ac: 0x8fa3001c
    ctx->pc = 0x12e9acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_12e9b0:
    // 0x12e9b0: 0x2450ffff
    ctx->pc = 0x12e9b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967295));
label_12e9b4:
    // 0x12e9b4: 0x70102a
    ctx->pc = 0x12e9b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
label_12e9b8:
    // 0x12e9b8: 0x14400003
label_12e9bc:
    if (ctx->pc == 0x12E9BCu) {
        ctx->pc = 0x12E9BCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->pc = 0x12E9C0u;
        goto label_12e9c0;
    }
    ctx->pc = 0x12E9B8u;
    {
        const bool branch_taken_0x12e9b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E9BCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 28)));
        if (branch_taken_0x12e9b8) {
            ctx->pc = 0x12E9C8u;
            goto label_12e9c8;
        }
    }
    ctx->pc = 0x12E9C0u;
label_12e9c0:
    // 0x12e9c0: 0x10000008
label_12e9c4:
    if (ctx->pc == 0x12E9C4u) {
        ctx->pc = 0x12E9C4u;
        SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->pc = 0x12E9C8u;
        goto label_12e9c8;
    }
    ctx->pc = 0x12E9C0u;
    {
        const bool branch_taken_0x12e9c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E9C4u;
        SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        if (branch_taken_0x12e9c0) {
            ctx->pc = 0x12E9E4u;
            goto label_12e9e4;
        }
    }
    ctx->pc = 0x12E9C8u;
label_12e9c8:
    // 0x12e9c8: 0x902d
    ctx->pc = 0x12e9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e9cc:
    // 0x12e9cc: 0x8fa2003c
    ctx->pc = 0x12e9ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_12e9d0:
    // 0x12e9d0: 0x2048023
    ctx->pc = 0x12e9d0u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_12e9d4:
    // 0x12e9d4: 0x902021
    ctx->pc = 0x12e9d4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_12e9d8:
    // 0x12e9d8: 0x501021
    ctx->pc = 0x12e9d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_12e9dc:
    // 0x12e9dc: 0xafa4001c
    ctx->pc = 0x12e9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_12e9e0:
    // 0x12e9e0: 0xafa2003c
    ctx->pc = 0x12e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_12e9e4:
    // 0x12e9e4: 0x8fb40020
    ctx->pc = 0x12e9e4u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12e9e8:
    // 0x12e9e8: 0x6810005
label_12e9ec:
    if (ctx->pc == 0x12E9ECu) {
        ctx->pc = 0x12E9ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E9F0u;
        goto label_12e9f0;
    }
    ctx->pc = 0x12E9E8u;
    {
        const bool branch_taken_0x12e9e8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x12E9ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e9e8) {
            ctx->pc = 0x12EA00u;
            goto label_12ea00;
        }
    }
    ctx->pc = 0x12E9F0u;
label_12e9f0:
    // 0x12e9f0: 0x8fa30018
    ctx->pc = 0x12e9f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12e9f4:
    // 0x12e9f4: 0x748823
    ctx->pc = 0x12e9f4u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_12e9f8:
    // 0x12e9f8: 0xa02d
    ctx->pc = 0x12e9f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e9fc:
    // 0x12e9fc: 0x3c0202d
    ctx->pc = 0x12e9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12ea00:
    // 0x12ea00: 0xc04c0aa
label_12ea04:
    if (ctx->pc == 0x12EA04u) {
        ctx->pc = 0x12EA04u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12EA08u;
        goto label_12ea08;
    }
    ctx->pc = 0x12EA00u;
    SET_GPR_U32(ctx, 31, 0x12EA08u);
    ctx->pc = 0x12EA04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1302A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x1302a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EA08u; }
    }
    if (ctx->pc != 0x12EA08u) { return; }
    ctx->pc = 0x12EA08u;
label_12ea08:
    // 0x12ea08: 0xafa20050
    ctx->pc = 0x12ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_12ea0c:
    // 0x12ea0c: 0x8fa40038
    ctx->pc = 0x12ea0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_12ea10:
    // 0x12ea10: 0x8fa20018
    ctx->pc = 0x12ea10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12ea14:
    // 0x12ea14: 0x942021
    ctx->pc = 0x12ea14u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_12ea18:
    // 0x12ea18: 0x541021
    ctx->pc = 0x12ea18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_12ea1c:
    // 0x12ea1c: 0xafa40038
    ctx->pc = 0x12ea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_12ea20:
    // 0x12ea20: 0x10000003
label_12ea24:
    if (ctx->pc == 0x12EA24u) {
        ctx->pc = 0x12EA24u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x12EA28u;
        goto label_12ea28;
    }
    ctx->pc = 0x12EA20u;
    {
        const bool branch_taken_0x12ea20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EA24u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x12ea20) {
            ctx->pc = 0x12EA30u;
            goto label_12ea30;
        }
    }
    ctx->pc = 0x12EA28u;
label_12ea28:
    // 0x12ea28: 0x8fa30008
    ctx->pc = 0x12ea28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_12ea2c:
    // 0x12ea2c: 0x28770002
    ctx->pc = 0x12ea2cu;
    SET_GPR_U32(ctx, 23, SLT32(GPR_S32(ctx, 3), 2));
label_12ea30:
    // 0x12ea30: 0x1a20000b
label_12ea34:
    if (ctx->pc == 0x12EA34u) {
        ctx->pc = 0x12EA34u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->pc = 0x12EA38u;
        goto label_12ea38;
    }
    ctx->pc = 0x12EA30u;
    {
        const bool branch_taken_0x12ea30 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x12EA34u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        if (branch_taken_0x12ea30) {
            ctx->pc = 0x12EA60u;
            goto label_12ea60;
        }
    }
    ctx->pc = 0x12EA38u;
label_12ea38:
    // 0x12ea38: 0x18800009
label_12ea3c:
    if (ctx->pc == 0x12EA3Cu) {
        ctx->pc = 0x12EA3Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EA40u;
        goto label_12ea40;
    }
    ctx->pc = 0x12EA38u;
    {
        const bool branch_taken_0x12ea38 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x12EA3Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12ea38) {
            ctx->pc = 0x12EA60u;
            goto label_12ea60;
        }
    }
    ctx->pc = 0x12EA40u;
label_12ea40:
    // 0x12ea40: 0x234102a
    ctx->pc = 0x12ea40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 20)));
label_12ea44:
    // 0x12ea44: 0x222a00b
    ctx->pc = 0x12ea44u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 17));
label_12ea48:
    // 0x12ea48: 0x8fa20018
    ctx->pc = 0x12ea48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12ea4c:
    // 0x12ea4c: 0x942023
    ctx->pc = 0x12ea4cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_12ea50:
    // 0x12ea50: 0xafa40038
    ctx->pc = 0x12ea50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_12ea54:
    // 0x12ea54: 0x2348823
    ctx->pc = 0x12ea54u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_12ea58:
    // 0x12ea58: 0x541023
    ctx->pc = 0x12ea58u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_12ea5c:
    // 0x12ea5c: 0xafa20018
    ctx->pc = 0x12ea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_12ea60:
    // 0x12ea60: 0x8fa3001c
    ctx->pc = 0x12ea60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_12ea64:
    // 0x12ea64: 0x1860001e
label_12ea68:
    if (ctx->pc == 0x12EA68u) {
        ctx->pc = 0x12EA68u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x12EA6Cu;
        goto label_12ea6c;
    }
    ctx->pc = 0x12EA64u;
    {
        const bool branch_taken_0x12ea64 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12EA68u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        if (branch_taken_0x12ea64) {
            ctx->pc = 0x12EAE0u;
            goto label_12eae0;
        }
    }
    ctx->pc = 0x12EA6Cu;
label_12ea6c:
    // 0x12ea6c: 0x10800018
label_12ea70:
    if (ctx->pc == 0x12EA70u) {
        ctx->pc = 0x12EA70u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x12EA74u;
        goto label_12ea74;
    }
    ctx->pc = 0x12EA6Cu;
    {
        const bool branch_taken_0x12ea6c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EA70u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x12ea6c) {
            ctx->pc = 0x12EAD0u;
            goto label_12ead0;
        }
    }
    ctx->pc = 0x12EA74u;
label_12ea74:
    // 0x12ea74: 0x1a40000d
label_12ea78:
    if (ctx->pc == 0x12EA78u) {
        ctx->pc = 0x12EA78u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x12EA7Cu;
        goto label_12ea7c;
    }
    ctx->pc = 0x12EA74u;
    {
        const bool branch_taken_0x12ea74 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x12EA78u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x12ea74) {
            ctx->pc = 0x12EAACu;
            goto label_12eaac;
        }
    }
    ctx->pc = 0x12EA7Cu;
label_12ea7c:
    // 0x12ea7c: 0x3c0202d
    ctx->pc = 0x12ea7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12ea80:
    // 0x12ea80: 0xc04c144
label_12ea84:
    if (ctx->pc == 0x12EA84u) {
        ctx->pc = 0x12EA84u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EA88u;
        goto label_12ea88;
    }
    ctx->pc = 0x12EA80u;
    SET_GPR_U32(ctx, 31, 0x12EA88u);
    ctx->pc = 0x12EA84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130510u;
    {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x130510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EA88u; }
    }
    if (ctx->pc != 0x12EA88u) { return; }
    ctx->pc = 0x12EA88u;
label_12ea88:
    // 0x12ea88: 0xafa20050
    ctx->pc = 0x12ea88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_12ea8c:
    // 0x12ea8c: 0x3c0202d
    ctx->pc = 0x12ea8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12ea90:
    // 0x12ea90: 0x8fa60048
    ctx->pc = 0x12ea90u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12ea94:
    // 0x12ea94: 0xc04c0b8
label_12ea98:
    if (ctx->pc == 0x12EA98u) {
        ctx->pc = 0x12EA98u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EA9Cu;
        goto label_12ea9c;
    }
    ctx->pc = 0x12EA94u;
    SET_GPR_U32(ctx, 31, 0x12EA9Cu);
    ctx->pc = 0x12EA98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1302E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multiply_0x1302e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EA9Cu; }
    }
    if (ctx->pc != 0x12EA9Cu) { return; }
    ctx->pc = 0x12EA9Cu;
label_12ea9c:
    // 0x12ea9c: 0x8fa50048
    ctx->pc = 0x12ea9cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12eaa0:
    // 0x12eaa0: 0x3c0202d
    ctx->pc = 0x12eaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12eaa4:
    // 0x12eaa4: 0xc04bfb4
label_12eaa8:
    if (ctx->pc == 0x12EAA8u) {
        ctx->pc = 0x12EAA8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x12EAACu;
        goto label_12eaac;
    }
    ctx->pc = 0x12EAA4u;
    SET_GPR_U32(ctx, 31, 0x12EAACu);
    ctx->pc = 0x12EAA8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x12FED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EAACu; }
    }
    if (ctx->pc != 0x12EAACu) { return; }
    ctx->pc = 0x12EAACu;
label_12eaac:
    // 0x12eaac: 0x8fa2001c
    ctx->pc = 0x12eaacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_12eab0:
    // 0x12eab0: 0x528023
    ctx->pc = 0x12eab0u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_12eab4:
    // 0x12eab4: 0x1200000a
label_12eab8:
    if (ctx->pc == 0x12EAB8u) {
        ctx->pc = 0x12EAB8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x12EABCu;
        goto label_12eabc;
    }
    ctx->pc = 0x12EAB4u;
    {
        const bool branch_taken_0x12eab4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EAB8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x12eab4) {
            ctx->pc = 0x12EAE0u;
            goto label_12eae0;
        }
    }
    ctx->pc = 0x12EABCu;
label_12eabc:
    // 0x12eabc: 0x200302d
    ctx->pc = 0x12eabcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12eac0:
    // 0x12eac0: 0xc04c144
label_12eac4:
    if (ctx->pc == 0x12EAC4u) {
        ctx->pc = 0x12EAC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EAC8u;
        goto label_12eac8;
    }
    ctx->pc = 0x12EAC0u;
    SET_GPR_U32(ctx, 31, 0x12EAC8u);
    ctx->pc = 0x12EAC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130510u;
    {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x130510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EAC8u; }
    }
    if (ctx->pc != 0x12EAC8u) { return; }
    ctx->pc = 0x12EAC8u;
label_12eac8:
    // 0x12eac8: 0x10000005
label_12eacc:
    if (ctx->pc == 0x12EACCu) {
        ctx->pc = 0x12EACCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x12EAD0u;
        goto label_12ead0;
    }
    ctx->pc = 0x12EAC8u;
    {
        const bool branch_taken_0x12eac8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EACCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x12eac8) {
            ctx->pc = 0x12EAE0u;
            goto label_12eae0;
        }
    }
    ctx->pc = 0x12EAD0u;
label_12ead0:
    // 0x12ead0: 0x3c0202d
    ctx->pc = 0x12ead0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12ead4:
    // 0x12ead4: 0xc04c144
label_12ead8:
    if (ctx->pc == 0x12EAD8u) {
        ctx->pc = 0x12EAD8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->pc = 0x12EADCu;
        goto label_12eadc;
    }
    ctx->pc = 0x12EAD4u;
    SET_GPR_U32(ctx, 31, 0x12EADCu);
    ctx->pc = 0x12EAD8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->pc = 0x130510u;
    {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x130510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EADCu; }
    }
    if (ctx->pc != 0x12EADCu) { return; }
    ctx->pc = 0x12EADCu;
label_12eadc:
    // 0x12eadc: 0xafa20048
    ctx->pc = 0x12eadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_12eae0:
    // 0x12eae0: 0x3c0202d
    ctx->pc = 0x12eae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12eae4:
    // 0x12eae4: 0xc04c0aa
label_12eae8:
    if (ctx->pc == 0x12EAE8u) {
        ctx->pc = 0x12EAE8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12EAECu;
        goto label_12eaec;
    }
    ctx->pc = 0x12EAE4u;
    SET_GPR_U32(ctx, 31, 0x12EAECu);
    ctx->pc = 0x12EAE8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1302A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x1302a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EAECu; }
    }
    if (ctx->pc != 0x12EAECu) { return; }
    ctx->pc = 0x12EAECu;
label_12eaec:
    // 0x12eaec: 0x8fa3003c
    ctx->pc = 0x12eaecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_12eaf0:
    // 0x12eaf0: 0x18600006
label_12eaf4:
    if (ctx->pc == 0x12EAF4u) {
        ctx->pc = 0x12EAF4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x12EAF8u;
        goto label_12eaf8;
    }
    ctx->pc = 0x12EAF0u;
    {
        const bool branch_taken_0x12eaf0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12EAF4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x12eaf0) {
            ctx->pc = 0x12EB0Cu;
            goto label_12eb0c;
        }
    }
    ctx->pc = 0x12EAF8u;
label_12eaf8:
    // 0x12eaf8: 0x40282d
    ctx->pc = 0x12eaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12eafc:
    // 0x12eafc: 0x3c0202d
    ctx->pc = 0x12eafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12eb00:
    // 0x12eb00: 0xc04c144
label_12eb04:
    if (ctx->pc == 0x12EB04u) {
        ctx->pc = 0x12EB04u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EB08u;
        goto label_12eb08;
    }
    ctx->pc = 0x12EB00u;
    SET_GPR_U32(ctx, 31, 0x12EB08u);
    ctx->pc = 0x12EB04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130510u;
    {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x130510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EB08u; }
    }
    if (ctx->pc != 0x12EB08u) { return; }
    ctx->pc = 0x12EB08u;
label_12eb08:
    // 0x12eb08: 0xafa20054
    ctx->pc = 0x12eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_12eb0c:
    // 0x12eb0c: 0x12e00015
label_12eb10:
    if (ctx->pc == 0x12EB10u) {
        ctx->pc = 0x12EB10u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x12EB14u;
        goto label_12eb14;
    }
    ctx->pc = 0x12EB0Cu;
    {
        const bool branch_taken_0x12eb0c = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EB10u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        if (branch_taken_0x12eb0c) {
            ctx->pc = 0x12EB64u;
            goto label_12eb64;
        }
    }
    ctx->pc = 0x12EB14u;
label_12eb14:
    // 0x12eb14: 0x2402ffff
    ctx->pc = 0x12eb14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_12eb18:
    // 0x12eb18: 0x2133a
    ctx->pc = 0x12eb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
label_12eb1c:
    // 0x12eb1c: 0x2c21024
    ctx->pc = 0x12eb1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_12eb20:
    // 0x12eb20: 0x5440000f
label_12eb24:
    if (ctx->pc == 0x12EB24u) {
        ctx->pc = 0x12EB24u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x12EB28u;
        goto label_12eb28;
    }
    ctx->pc = 0x12EB20u;
    {
        const bool branch_taken_0x12eb20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12eb20) {
            ctx->pc = 0x12EB24u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
            ctx->pc = 0x12EB60u;
            goto label_12eb60;
        }
    }
    ctx->pc = 0x12EB28u;
label_12eb28:
    // 0x12eb28: 0x16103f
    ctx->pc = 0x12eb28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
label_12eb2c:
    // 0x12eb2c: 0x3c037ff0
    ctx->pc = 0x12eb2cu;
    SET_GPR_S32(ctx, 3, ((uint32_t)32752 << 16));
label_12eb30:
    // 0x12eb30: 0x431024
    ctx->pc = 0x12eb30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12eb34:
    // 0x12eb34: 0x10400009
label_12eb38:
    if (ctx->pc == 0x12EB38u) {
        ctx->pc = 0x12EB38u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x12EB3Cu;
        goto label_12eb3c;
    }
    ctx->pc = 0x12EB34u;
    {
        const bool branch_taken_0x12eb34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EB38u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        if (branch_taken_0x12eb34) {
            ctx->pc = 0x12EB5Cu;
            goto label_12eb5c;
        }
    }
    ctx->pc = 0x12EB3Cu;
label_12eb3c:
    // 0x12eb3c: 0x24030001
    ctx->pc = 0x12eb3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_12eb40:
    // 0x12eb40: 0x8fa20038
    ctx->pc = 0x12eb40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_12eb44:
    // 0x12eb44: 0x24840001
    ctx->pc = 0x12eb44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_12eb48:
    // 0x12eb48: 0xafa30040
    ctx->pc = 0x12eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_12eb4c:
    // 0x12eb4c: 0x24420001
    ctx->pc = 0x12eb4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12eb50:
    // 0x12eb50: 0xafa40018
    ctx->pc = 0x12eb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_12eb54:
    // 0x12eb54: 0x10000002
label_12eb58:
    if (ctx->pc == 0x12EB58u) {
        ctx->pc = 0x12EB58u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x12EB5Cu;
        goto label_12eb5c;
    }
    ctx->pc = 0x12EB54u;
    {
        const bool branch_taken_0x12eb54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EB58u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x12eb54) {
            ctx->pc = 0x12EB60u;
            goto label_12eb60;
        }
    }
    ctx->pc = 0x12EB5Cu;
label_12eb5c:
    // 0x12eb5c: 0xafa00040
    ctx->pc = 0x12eb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_12eb60:
    // 0x12eb60: 0x8fa4003c
    ctx->pc = 0x12eb60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_12eb64:
    // 0x12eb64: 0x1080000a
label_12eb68:
    if (ctx->pc == 0x12EB68u) {
        ctx->pc = 0x12EB68u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x12EB6Cu;
        goto label_12eb6c;
    }
    ctx->pc = 0x12EB64u;
    {
        const bool branch_taken_0x12eb64 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EB68u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        if (branch_taken_0x12eb64) {
            ctx->pc = 0x12EB90u;
            goto label_12eb90;
        }
    }
    ctx->pc = 0x12EB6Cu;
label_12eb6c:
    // 0x12eb6c: 0x8c620010
    ctx->pc = 0x12eb6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_12eb70:
    // 0x12eb70: 0x2442ffff
    ctx->pc = 0x12eb70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_12eb74:
    // 0x12eb74: 0x21080
    ctx->pc = 0x12eb74u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_12eb78:
    // 0x12eb78: 0x621021
    ctx->pc = 0x12eb78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12eb7c:
    // 0x12eb7c: 0xc04c058
label_12eb80:
    if (ctx->pc == 0x12EB80u) {
        ctx->pc = 0x12EB80u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->pc = 0x12EB84u;
        goto label_12eb84;
    }
    ctx->pc = 0x12EB7Cu;
    SET_GPR_U32(ctx, 31, 0x12EB84u);
    ctx->pc = 0x12EB80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->pc = 0x130160u;
    {
        const uint32_t __entryPc = ctx->pc;
        _hi0bits_0x130160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EB84u; }
    }
    if (ctx->pc != 0x12EB84u) { return; }
    ctx->pc = 0x12EB84u;
label_12eb84:
    // 0x12eb84: 0x8fa40038
    ctx->pc = 0x12eb84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_12eb88:
    // 0x12eb88: 0x10000003
label_12eb8c:
    if (ctx->pc == 0x12EB8Cu) {
        ctx->pc = 0x12EB8Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x12EB90u;
        goto label_12eb90;
    }
    ctx->pc = 0x12EB88u;
    {
        const bool branch_taken_0x12eb88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EB8Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x12eb88) {
            ctx->pc = 0x12EB98u;
            goto label_12eb98;
        }
    }
    ctx->pc = 0x12EB90u;
label_12eb90:
    // 0x12eb90: 0x8fa30038
    ctx->pc = 0x12eb90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_12eb94:
    // 0x12eb94: 0x24620001
    ctx->pc = 0x12eb94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
label_12eb98:
    // 0x12eb98: 0x3054001f
    ctx->pc = 0x12eb98u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 2), 31));
label_12eb9c:
    // 0x12eb9c: 0x12800002
label_12eba0:
    if (ctx->pc == 0x12EBA0u) {
        ctx->pc = 0x12EBA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x12EBA4u;
        goto label_12eba4;
    }
    ctx->pc = 0x12EB9Cu;
    {
        const bool branch_taken_0x12eb9c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EBA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x12eb9c) {
            ctx->pc = 0x12EBA8u;
            goto label_12eba8;
        }
    }
    ctx->pc = 0x12EBA4u;
label_12eba4:
    // 0x12eba4: 0x54a023
    ctx->pc = 0x12eba4u;
    SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_12eba8:
    // 0x12eba8: 0x2a820005
    ctx->pc = 0x12eba8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 5));
label_12ebac:
    // 0x12ebac: 0x1440000a
label_12ebb0:
    if (ctx->pc == 0x12EBB0u) {
        ctx->pc = 0x12EBB0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
        ctx->pc = 0x12EBB4u;
        goto label_12ebb4;
    }
    ctx->pc = 0x12EBACu;
    {
        const bool branch_taken_0x12ebac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12EBB0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
        if (branch_taken_0x12ebac) {
            ctx->pc = 0x12EBD8u;
            goto label_12ebd8;
        }
    }
    ctx->pc = 0x12EBB4u;
label_12ebb4:
    // 0x12ebb4: 0x8fa40038
    ctx->pc = 0x12ebb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_12ebb8:
    // 0x12ebb8: 0x2694fffc
    ctx->pc = 0x12ebb8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967292));
label_12ebbc:
    // 0x12ebbc: 0x8fa20018
    ctx->pc = 0x12ebbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12ebc0:
    // 0x12ebc0: 0x2348821
    ctx->pc = 0x12ebc0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_12ebc4:
    // 0x12ebc4: 0x942021
    ctx->pc = 0x12ebc4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_12ebc8:
    // 0x12ebc8: 0x541021
    ctx->pc = 0x12ebc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_12ebcc:
    // 0x12ebcc: 0xafa40038
    ctx->pc = 0x12ebccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_12ebd0:
    // 0x12ebd0: 0x1000000a
label_12ebd4:
    if (ctx->pc == 0x12EBD4u) {
        ctx->pc = 0x12EBD4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x12EBD8u;
        goto label_12ebd8;
    }
    ctx->pc = 0x12EBD0u;
    {
        const bool branch_taken_0x12ebd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EBD4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x12ebd0) {
            ctx->pc = 0x12EBFCu;
            goto label_12ebfc;
        }
    }
    ctx->pc = 0x12EBD8u;
label_12ebd8:
    // 0x12ebd8: 0x10400008
label_12ebdc:
    if (ctx->pc == 0x12EBDCu) {
        ctx->pc = 0x12EBDCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->pc = 0x12EBE0u;
        goto label_12ebe0;
    }
    ctx->pc = 0x12EBD8u;
    {
        const bool branch_taken_0x12ebd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EBDCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        if (branch_taken_0x12ebd8) {
            ctx->pc = 0x12EBFCu;
            goto label_12ebfc;
        }
    }
    ctx->pc = 0x12EBE0u;
label_12ebe0:
    // 0x12ebe0: 0x2694001c
    ctx->pc = 0x12ebe0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 28));
label_12ebe4:
    // 0x12ebe4: 0x8fa40018
    ctx->pc = 0x12ebe4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12ebe8:
    // 0x12ebe8: 0x2348821
    ctx->pc = 0x12ebe8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_12ebec:
    // 0x12ebec: 0x741821
    ctx->pc = 0x12ebecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_12ebf0:
    // 0x12ebf0: 0x942021
    ctx->pc = 0x12ebf0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_12ebf4:
    // 0x12ebf4: 0xafa30038
    ctx->pc = 0x12ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_12ebf8:
    // 0x12ebf8: 0xafa40018
    ctx->pc = 0x12ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_12ebfc:
    // 0x12ebfc: 0x8fa20018
    ctx->pc = 0x12ebfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12ec00:
    // 0x12ec00: 0x18400005
label_12ec04:
    if (ctx->pc == 0x12EC04u) {
        ctx->pc = 0x12EC04u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x12EC08u;
        goto label_12ec08;
    }
    ctx->pc = 0x12EC00u;
    {
        const bool branch_taken_0x12ec00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12EC04u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x12ec00) {
            ctx->pc = 0x12EC18u;
            goto label_12ec18;
        }
    }
    ctx->pc = 0x12EC08u;
label_12ec08:
    // 0x12ec08: 0x40302d
    ctx->pc = 0x12ec08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12ec0c:
    // 0x12ec0c: 0xc04c184
label_12ec10:
    if (ctx->pc == 0x12EC10u) {
        ctx->pc = 0x12EC10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EC14u;
        goto label_12ec14;
    }
    ctx->pc = 0x12EC0Cu;
    SET_GPR_U32(ctx, 31, 0x12EC14u);
    ctx->pc = 0x12EC10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130610u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x130610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC14u; }
    }
    if (ctx->pc != 0x12EC14u) { return; }
    ctx->pc = 0x12EC14u;
label_12ec14:
    // 0x12ec14: 0xafa20048
    ctx->pc = 0x12ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_12ec18:
    // 0x12ec18: 0x8fa30038
    ctx->pc = 0x12ec18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_12ec1c:
    // 0x12ec1c: 0x18600005
label_12ec20:
    if (ctx->pc == 0x12EC20u) {
        ctx->pc = 0x12EC20u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x12EC24u;
        goto label_12ec24;
    }
    ctx->pc = 0x12EC1Cu;
    {
        const bool branch_taken_0x12ec1c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12EC20u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        if (branch_taken_0x12ec1c) {
            ctx->pc = 0x12EC34u;
            goto label_12ec34;
        }
    }
    ctx->pc = 0x12EC24u;
label_12ec24:
    // 0x12ec24: 0x60302d
    ctx->pc = 0x12ec24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12ec28:
    // 0x12ec28: 0xc04c184
label_12ec2c:
    if (ctx->pc == 0x12EC2Cu) {
        ctx->pc = 0x12EC2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EC30u;
        goto label_12ec30;
    }
    ctx->pc = 0x12EC28u;
    SET_GPR_U32(ctx, 31, 0x12EC30u);
    ctx->pc = 0x12EC2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130610u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x130610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC30u; }
    }
    if (ctx->pc != 0x12EC30u) { return; }
    ctx->pc = 0x12EC30u;
label_12ec30:
    // 0x12ec30: 0xafa20054
    ctx->pc = 0x12ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_12ec34:
    // 0x12ec34: 0x8fa40030
    ctx->pc = 0x12ec34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_12ec38:
    // 0x12ec38: 0x10800016
label_12ec3c:
    if (ctx->pc == 0x12EC3Cu) {
        ctx->pc = 0x12EC3Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x12EC40u;
        goto label_12ec40;
    }
    ctx->pc = 0x12EC38u;
    {
        const bool branch_taken_0x12ec38 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EC3Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x12ec38) {
            ctx->pc = 0x12EC94u;
            goto label_12ec94;
        }
    }
    ctx->pc = 0x12EC40u;
label_12ec40:
    // 0x12ec40: 0xc04c1e2
label_12ec44:
    if (ctx->pc == 0x12EC44u) {
        ctx->pc = 0x12EC44u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x12EC48u;
        goto label_12ec48;
    }
    ctx->pc = 0x12EC40u;
    SET_GPR_U32(ctx, 31, 0x12EC48u);
    ctx->pc = 0x12EC44u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->pc = 0x130788u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x130788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC48u; }
    }
    if (ctx->pc != 0x12EC48u) { return; }
    ctx->pc = 0x12EC48u;
label_12ec48:
    // 0x12ec48: 0x4410013
label_12ec4c:
    if (ctx->pc == 0x12EC4Cu) {
        ctx->pc = 0x12EC4Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x12EC50u;
        goto label_12ec50;
    }
    ctx->pc = 0x12EC48u;
    {
        const bool branch_taken_0x12ec48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12EC4Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x12ec48) {
            ctx->pc = 0x12EC98u;
            goto label_12ec98;
        }
    }
    ctx->pc = 0x12EC50u;
label_12ec50:
    // 0x12ec50: 0x8fa50048
    ctx->pc = 0x12ec50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12ec54:
    // 0x12ec54: 0x3c0202d
    ctx->pc = 0x12ec54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12ec58:
    // 0x12ec58: 0x2406000a
    ctx->pc = 0x12ec58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_12ec5c:
    // 0x12ec5c: 0xc04bfc0
label_12ec60:
    if (ctx->pc == 0x12EC60u) {
        ctx->pc = 0x12EC60u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EC64u;
        goto label_12ec64;
    }
    ctx->pc = 0x12EC5Cu;
    SET_GPR_U32(ctx, 31, 0x12EC64u);
    ctx->pc = 0x12EC60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC64u; }
    }
    if (ctx->pc != 0x12EC64u) { return; }
    ctx->pc = 0x12EC64u;
label_12ec64:
    // 0x12ec64: 0xafa20048
    ctx->pc = 0x12ec64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_12ec68:
    // 0x12ec68: 0x8fa20034
    ctx->pc = 0x12ec68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_12ec6c:
    // 0x12ec6c: 0x10400007
label_12ec70:
    if (ctx->pc == 0x12EC70u) {
        ctx->pc = 0x12EC70u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x12EC74u;
        goto label_12ec74;
    }
    ctx->pc = 0x12EC6Cu;
    {
        const bool branch_taken_0x12ec6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EC70u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
        if (branch_taken_0x12ec6c) {
            ctx->pc = 0x12EC8Cu;
            goto label_12ec8c;
        }
    }
    ctx->pc = 0x12EC74u;
label_12ec74:
    // 0x12ec74: 0x8fa50050
    ctx->pc = 0x12ec74u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_12ec78:
    // 0x12ec78: 0x3c0202d
    ctx->pc = 0x12ec78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12ec7c:
    // 0x12ec7c: 0x2406000a
    ctx->pc = 0x12ec7cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_12ec80:
    // 0x12ec80: 0xc04bfc0
label_12ec84:
    if (ctx->pc == 0x12EC84u) {
        ctx->pc = 0x12EC84u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EC88u;
        goto label_12ec88;
    }
    ctx->pc = 0x12EC80u;
    SET_GPR_U32(ctx, 31, 0x12EC88u);
    ctx->pc = 0x12EC84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC88u; }
    }
    if (ctx->pc != 0x12EC88u) { return; }
    ctx->pc = 0x12EC88u;
label_12ec88:
    // 0x12ec88: 0xafa20050
    ctx->pc = 0x12ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_12ec8c:
    // 0x12ec8c: 0x8fa30028
    ctx->pc = 0x12ec8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_12ec90:
    // 0x12ec90: 0xafa30020
    ctx->pc = 0x12ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_12ec94:
    // 0x12ec94: 0x8fa40020
    ctx->pc = 0x12ec94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12ec98:
    // 0x12ec98: 0x5c80001a
label_12ec9c:
    if (ctx->pc == 0x12EC9Cu) {
        ctx->pc = 0x12EC9Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x12ECA0u;
        goto label_12eca0;
    }
    ctx->pc = 0x12EC98u;
    {
        const bool branch_taken_0x12ec98 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x12ec98) {
            ctx->pc = 0x12EC9Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->pc = 0x12ED04u;
            goto label_12ed04;
        }
    }
    ctx->pc = 0x12ECA0u;
label_12eca0:
    // 0x12eca0: 0x8fa30008
    ctx->pc = 0x12eca0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_12eca4:
    // 0x12eca4: 0x28620003
    ctx->pc = 0x12eca4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
label_12eca8:
    // 0x12eca8: 0x54400016
label_12ecac:
    if (ctx->pc == 0x12ECACu) {
        ctx->pc = 0x12ECACu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x12ECB0u;
        goto label_12ecb0;
    }
    ctx->pc = 0x12ECA8u;
    {
        const bool branch_taken_0x12eca8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12eca8) {
            ctx->pc = 0x12ECACu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->pc = 0x12ED04u;
            goto label_12ed04;
        }
    }
    ctx->pc = 0x12ECB0u;
label_12ecb0:
    // 0x12ecb0: 0x480000b
label_12ecb4:
    if (ctx->pc == 0x12ECB4u) {
        ctx->pc = 0x12ECB4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x12ECB8u;
        goto label_12ecb8;
    }
    ctx->pc = 0x12ECB0u;
    {
        const bool branch_taken_0x12ecb0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x12ECB4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        if (branch_taken_0x12ecb0) {
            ctx->pc = 0x12ECE0u;
            goto label_12ece0;
        }
    }
    ctx->pc = 0x12ECB8u;
label_12ecb8:
    // 0x12ecb8: 0x3c0202d
    ctx->pc = 0x12ecb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12ecbc:
    // 0x12ecbc: 0x24060005
    ctx->pc = 0x12ecbcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
label_12ecc0:
    // 0x12ecc0: 0xc04bfc0
label_12ecc4:
    if (ctx->pc == 0x12ECC4u) {
        ctx->pc = 0x12ECC4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12ECC8u;
        goto label_12ecc8;
    }
    ctx->pc = 0x12ECC0u;
    SET_GPR_U32(ctx, 31, 0x12ECC8u);
    ctx->pc = 0x12ECC4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECC8u; }
    }
    if (ctx->pc != 0x12ECC8u) { return; }
    ctx->pc = 0x12ECC8u;
label_12ecc8:
    // 0x12ecc8: 0xafa20054
    ctx->pc = 0x12ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_12eccc:
    // 0x12eccc: 0x8fa40048
    ctx->pc = 0x12ecccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12ecd0:
    // 0x12ecd0: 0xc04c1e2
label_12ecd4:
    if (ctx->pc == 0x12ECD4u) {
        ctx->pc = 0x12ECD4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12ECD8u;
        goto label_12ecd8;
    }
    ctx->pc = 0x12ECD0u;
    SET_GPR_U32(ctx, 31, 0x12ECD8u);
    ctx->pc = 0x12ECD4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130788u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x130788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECD8u; }
    }
    if (ctx->pc != 0x12ECD8u) { return; }
    ctx->pc = 0x12ECD8u;
label_12ecd8:
    // 0x12ecd8: 0x1c400005
label_12ecdc:
    if (ctx->pc == 0x12ECDCu) {
        ctx->pc = 0x12ECDCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->pc = 0x12ECE0u;
        goto label_12ece0;
    }
    ctx->pc = 0x12ECD8u;
    {
        const bool branch_taken_0x12ecd8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12ECDCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        if (branch_taken_0x12ecd8) {
            ctx->pc = 0x12ECF0u;
            goto label_12ecf0;
        }
    }
    ctx->pc = 0x12ECE0u;
label_12ece0:
    // 0x12ece0: 0x8fa4000c
    ctx->pc = 0x12ece0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_12ece4:
    // 0x12ece4: 0x49827
    ctx->pc = 0x12ece4u;
    SET_GPR_U32(ctx, 19, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_12ece8:
    // 0x12ece8: 0x100000db
label_12ecec:
    if (ctx->pc == 0x12ECECu) {
        ctx->pc = 0x12ECECu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x12ECF0u;
        goto label_12ecf0;
    }
    ctx->pc = 0x12ECE8u;
    {
        const bool branch_taken_0x12ece8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12ECECu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x12ece8) {
            ctx->pc = 0x12F058u;
            goto label_12f058;
        }
    }
    ctx->pc = 0x12ECF0u;
label_12ecf0:
    // 0x12ecf0: 0x24020031
    ctx->pc = 0x12ecf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
label_12ecf4:
    // 0x12ecf4: 0x26770002
    ctx->pc = 0x12ecf4u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 2));
label_12ecf8:
    // 0x12ecf8: 0xa0620000
    ctx->pc = 0x12ecf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_12ecfc:
    // 0x12ecfc: 0x100000d6
label_12ed00:
    if (ctx->pc == 0x12ED00u) {
        ctx->pc = 0x12ED00u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x12ED04u;
        goto label_12ed04;
    }
    ctx->pc = 0x12ECFCu;
    {
        const bool branch_taken_0x12ecfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12ED00u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x12ecfc) {
            ctx->pc = 0x12F058u;
            goto label_12f058;
        }
    }
    ctx->pc = 0x12ED04u;
label_12ed04:
    // 0x12ed04: 0x10800095
label_12ed08:
    if (ctx->pc == 0x12ED08u) {
        ctx->pc = 0x12ED08u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12ED0Cu;
        goto label_12ed0c;
    }
    ctx->pc = 0x12ED04u;
    {
        const bool branch_taken_0x12ed04 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x12ED08u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x12ed04) {
            ctx->pc = 0x12EF5Cu;
            goto label_12ef5c;
        }
    }
    ctx->pc = 0x12ED0Cu;
label_12ed0c:
    // 0x12ed0c: 0x1a200005
label_12ed10:
    if (ctx->pc == 0x12ED10u) {
        ctx->pc = 0x12ED10u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x12ED14u;
        goto label_12ed14;
    }
    ctx->pc = 0x12ED0Cu;
    {
        const bool branch_taken_0x12ed0c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x12ED10u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x12ed0c) {
            ctx->pc = 0x12ED24u;
            goto label_12ed24;
        }
    }
    ctx->pc = 0x12ED14u;
label_12ed14:
    // 0x12ed14: 0x220302d
    ctx->pc = 0x12ed14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12ed18:
    // 0x12ed18: 0xc04c184
label_12ed1c:
    if (ctx->pc == 0x12ED1Cu) {
        ctx->pc = 0x12ED1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12ED20u;
        goto label_12ed20;
    }
    ctx->pc = 0x12ED18u;
    SET_GPR_U32(ctx, 31, 0x12ED20u);
    ctx->pc = 0x12ED1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130610u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x130610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED20u; }
    }
    if (ctx->pc != 0x12ED20u) { return; }
    ctx->pc = 0x12ED20u;
label_12ed20:
    // 0x12ed20: 0xafa20050
    ctx->pc = 0x12ed20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_12ed24:
    // 0x12ed24: 0x8fa20050
    ctx->pc = 0x12ed24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_12ed28:
    // 0x12ed28: 0x8fa30040
    ctx->pc = 0x12ed28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_12ed2c:
    // 0x12ed2c: 0x10600012
label_12ed30:
    if (ctx->pc == 0x12ED30u) {
        ctx->pc = 0x12ED30u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x12ED34u;
        goto label_12ed34;
    }
    ctx->pc = 0x12ED2Cu;
    {
        const bool branch_taken_0x12ed2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12ED30u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        if (branch_taken_0x12ed2c) {
            ctx->pc = 0x12ED78u;
            goto label_12ed78;
        }
    }
    ctx->pc = 0x12ED34u;
label_12ed34:
    // 0x12ed34: 0x8c450004
    ctx->pc = 0x12ed34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12ed38:
    // 0x12ed38: 0xc04bf8a
label_12ed3c:
    if (ctx->pc == 0x12ED3Cu) {
        ctx->pc = 0x12ED3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12ED40u;
        goto label_12ed40;
    }
    ctx->pc = 0x12ED38u;
    SET_GPR_U32(ctx, 31, 0x12ED40u);
    ctx->pc = 0x12ED3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FE28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x12fe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED40u; }
    }
    if (ctx->pc != 0x12ED40u) { return; }
    ctx->pc = 0x12ED40u;
label_12ed40:
    // 0x12ed40: 0x8fa4004c
    ctx->pc = 0x12ed40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_12ed44:
    // 0x12ed44: 0x8c860010
    ctx->pc = 0x12ed44u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_12ed48:
    // 0x12ed48: 0xafa20050
    ctx->pc = 0x12ed48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_12ed4c:
    // 0x12ed4c: 0x63080
    ctx->pc = 0x12ed4cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
label_12ed50:
    // 0x12ed50: 0x2444000c
    ctx->pc = 0x12ed50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 12));
label_12ed54:
    // 0x12ed54: 0x24c60008
    ctx->pc = 0x12ed54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
label_12ed58:
    // 0x12ed58: 0x8fa2004c
    ctx->pc = 0x12ed58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_12ed5c:
    // 0x12ed5c: 0xc04ac33
label_12ed60:
    if (ctx->pc == 0x12ED60u) {
        ctx->pc = 0x12ED60u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x12ED64u;
        goto label_12ed64;
    }
    ctx->pc = 0x12ED5Cu;
    SET_GPR_U32(ctx, 31, 0x12ED64u);
    ctx->pc = 0x12ED60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 12));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED64u; }
    }
    if (ctx->pc != 0x12ED64u) { return; }
    ctx->pc = 0x12ED64u;
label_12ed64:
    // 0x12ed64: 0x8fa50050
    ctx->pc = 0x12ed64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_12ed68:
    // 0x12ed68: 0x3c0202d
    ctx->pc = 0x12ed68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12ed6c:
    // 0x12ed6c: 0xc04c184
label_12ed70:
    if (ctx->pc == 0x12ED70u) {
        ctx->pc = 0x12ED70u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12ED74u;
        goto label_12ed74;
    }
    ctx->pc = 0x12ED6Cu;
    SET_GPR_U32(ctx, 31, 0x12ED74u);
    ctx->pc = 0x12ED70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x130610u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x130610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED74u; }
    }
    if (ctx->pc != 0x12ED74u) { return; }
    ctx->pc = 0x12ED74u;
label_12ed74:
    // 0x12ed74: 0xafa20050
    ctx->pc = 0x12ed74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_12ed78:
    // 0x12ed78: 0x24140001
    ctx->pc = 0x12ed78u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_12ed7c:
    // 0x12ed7c: 0x10000020
label_12ed80:
    if (ctx->pc == 0x12ED80u) {
        ctx->pc = 0x12ED80u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x12ED84u;
        goto label_12ed84;
    }
    ctx->pc = 0x12ED7Cu;
    {
        const bool branch_taken_0x12ed7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12ED80u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x12ed7c) {
            ctx->pc = 0x12EE00u;
            goto label_12ee00;
        }
    }
    ctx->pc = 0x12ED84u;
label_12ed84:
    // 0x12ed84: 0x0
    ctx->pc = 0x12ed84u;
    // NOP
label_12ed88:
    // 0x12ed88: 0x8fa50048
    ctx->pc = 0x12ed88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12ed8c:
    // 0x12ed8c: 0x3c0202d
    ctx->pc = 0x12ed8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12ed90:
    // 0x12ed90: 0x2406000a
    ctx->pc = 0x12ed90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_12ed94:
    // 0x12ed94: 0xc04bfc0
label_12ed98:
    if (ctx->pc == 0x12ED98u) {
        ctx->pc = 0x12ED98u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12ED9Cu;
        goto label_12ed9c;
    }
    ctx->pc = 0x12ED94u;
    SET_GPR_U32(ctx, 31, 0x12ED9Cu);
    ctx->pc = 0x12ED98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED9Cu; }
    }
    if (ctx->pc != 0x12ED9Cu) { return; }
    ctx->pc = 0x12ED9Cu;
label_12ed9c:
    // 0x12ed9c: 0x8fa3004c
    ctx->pc = 0x12ed9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_12eda0:
    // 0x12eda0: 0x8fa40050
    ctx->pc = 0x12eda0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_12eda4:
    // 0x12eda4: 0x14640009
label_12eda8:
    if (ctx->pc == 0x12EDA8u) {
        ctx->pc = 0x12EDA8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x12EDACu;
        goto label_12edac;
    }
    ctx->pc = 0x12EDA4u;
    {
        const bool branch_taken_0x12eda4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x12EDA8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x12eda4) {
            ctx->pc = 0x12EDCCu;
            goto label_12edcc;
        }
    }
    ctx->pc = 0x12EDACu;
label_12edac:
    // 0x12edac: 0x80282d
    ctx->pc = 0x12edacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12edb0:
    // 0x12edb0: 0x2406000a
    ctx->pc = 0x12edb0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_12edb4:
    // 0x12edb4: 0x3c0202d
    ctx->pc = 0x12edb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12edb8:
    // 0x12edb8: 0xc04bfc0
label_12edbc:
    if (ctx->pc == 0x12EDBCu) {
        ctx->pc = 0x12EDBCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EDC0u;
        goto label_12edc0;
    }
    ctx->pc = 0x12EDB8u;
    SET_GPR_U32(ctx, 31, 0x12EDC0u);
    ctx->pc = 0x12EDBCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EDC0u; }
    }
    if (ctx->pc != 0x12EDC0u) { return; }
    ctx->pc = 0x12EDC0u;
label_12edc0:
    // 0x12edc0: 0xafa20050
    ctx->pc = 0x12edc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_12edc4:
    // 0x12edc4: 0x1000000d
label_12edc8:
    if (ctx->pc == 0x12EDC8u) {
        ctx->pc = 0x12EDC8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x12EDCCu;
        goto label_12edcc;
    }
    ctx->pc = 0x12EDC4u;
    {
        const bool branch_taken_0x12edc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EDC8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        if (branch_taken_0x12edc4) {
            ctx->pc = 0x12EDFCu;
            goto label_12edfc;
        }
    }
    ctx->pc = 0x12EDCCu;
label_12edcc:
    // 0x12edcc: 0x8fa5004c
    ctx->pc = 0x12edccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_12edd0:
    // 0x12edd0: 0x3c0202d
    ctx->pc = 0x12edd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12edd4:
    // 0x12edd4: 0x2406000a
    ctx->pc = 0x12edd4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_12edd8:
    // 0x12edd8: 0xc04bfc0
label_12eddc:
    if (ctx->pc == 0x12EDDCu) {
        ctx->pc = 0x12EDDCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EDE0u;
        goto label_12ede0;
    }
    ctx->pc = 0x12EDD8u;
    SET_GPR_U32(ctx, 31, 0x12EDE0u);
    ctx->pc = 0x12EDDCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EDE0u; }
    }
    if (ctx->pc != 0x12EDE0u) { return; }
    ctx->pc = 0x12EDE0u;
label_12ede0:
    // 0x12ede0: 0x8fa50050
    ctx->pc = 0x12ede0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_12ede4:
    // 0x12ede4: 0x3c0202d
    ctx->pc = 0x12ede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12ede8:
    // 0x12ede8: 0xafa2004c
    ctx->pc = 0x12ede8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_12edec:
    // 0x12edec: 0x2406000a
    ctx->pc = 0x12edecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_12edf0:
    // 0x12edf0: 0xc04bfc0
label_12edf4:
    if (ctx->pc == 0x12EDF4u) {
        ctx->pc = 0x12EDF4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EDF8u;
        goto label_12edf8;
    }
    ctx->pc = 0x12EDF0u;
    SET_GPR_U32(ctx, 31, 0x12EDF8u);
    ctx->pc = 0x12EDF4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EDF8u; }
    }
    if (ctx->pc != 0x12EDF8u) { return; }
    ctx->pc = 0x12EDF8u;
label_12edf8:
    // 0x12edf8: 0xafa20050
    ctx->pc = 0x12edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_12edfc:
    // 0x12edfc: 0x26940001
    ctx->pc = 0x12edfcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_12ee00:
    // 0x12ee00: 0x8fa40048
    ctx->pc = 0x12ee00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12ee04:
    // 0x12ee04: 0xc04b744
label_12ee08:
    if (ctx->pc == 0x12EE08u) {
        ctx->pc = 0x12EE08u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x12EE0Cu;
        goto label_12ee0c;
    }
    ctx->pc = 0x12EE04u;
    SET_GPR_U32(ctx, 31, 0x12EE0Cu);
    ctx->pc = 0x12EE08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->pc = 0x12DD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        quorem_0x12dd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE0Cu; }
    }
    if (ctx->pc != 0x12EE0Cu) { return; }
    ctx->pc = 0x12EE0Cu;
label_12ee0c:
    // 0x12ee0c: 0x8fa40048
    ctx->pc = 0x12ee0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12ee10:
    // 0x12ee10: 0x24530030
    ctx->pc = 0x12ee10u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 48));
label_12ee14:
    // 0x12ee14: 0xc04c1e2
label_12ee18:
    if (ctx->pc == 0x12EE18u) {
        ctx->pc = 0x12EE18u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x12EE1Cu;
        goto label_12ee1c;
    }
    ctx->pc = 0x12EE14u;
    SET_GPR_U32(ctx, 31, 0x12EE1Cu);
    ctx->pc = 0x12EE18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->pc = 0x130788u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x130788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE1Cu; }
    }
    if (ctx->pc != 0x12EE1Cu) { return; }
    ctx->pc = 0x12EE1Cu;
label_12ee1c:
    // 0x12ee1c: 0x8fa50054
    ctx->pc = 0x12ee1cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_12ee20:
    // 0x12ee20: 0x40802d
    ctx->pc = 0x12ee20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12ee24:
    // 0x12ee24: 0x8fa60050
    ctx->pc = 0x12ee24u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_12ee28:
    // 0x12ee28: 0xc04c1fc
label_12ee2c:
    if (ctx->pc == 0x12EE2Cu) {
        ctx->pc = 0x12EE2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EE30u;
        goto label_12ee30;
    }
    ctx->pc = 0x12EE28u;
    SET_GPR_U32(ctx, 31, 0x12EE30u);
    ctx->pc = 0x12EE2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1307F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mdiff_0x1307f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE30u; }
    }
    if (ctx->pc != 0x12EE30u) { return; }
    ctx->pc = 0x12EE30u;
label_12ee30:
    // 0x12ee30: 0x40902d
    ctx->pc = 0x12ee30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12ee34:
    // 0x12ee34: 0x8e42000c
    ctx->pc = 0x12ee34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_12ee38:
    // 0x12ee38: 0x14400005
label_12ee3c:
    if (ctx->pc == 0x12EE3Cu) {
        ctx->pc = 0x12EE3Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12EE40u;
        goto label_12ee40;
    }
    ctx->pc = 0x12EE38u;
    {
        const bool branch_taken_0x12ee38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12EE3Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x12ee38) {
            ctx->pc = 0x12EE50u;
            goto label_12ee50;
        }
    }
    ctx->pc = 0x12EE40u;
label_12ee40:
    // 0x12ee40: 0x8fa40048
    ctx->pc = 0x12ee40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12ee44:
    // 0x12ee44: 0xc04c1e2
label_12ee48:
    if (ctx->pc == 0x12EE48u) {
        ctx->pc = 0x12EE48u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EE4Cu;
        goto label_12ee4c;
    }
    ctx->pc = 0x12EE44u;
    SET_GPR_U32(ctx, 31, 0x12EE4Cu);
    ctx->pc = 0x12EE48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130788u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x130788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE4Cu; }
    }
    if (ctx->pc != 0x12EE4Cu) { return; }
    ctx->pc = 0x12EE4Cu;
label_12ee4c:
    // 0x12ee4c: 0x40882d
    ctx->pc = 0x12ee4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12ee50:
    // 0x12ee50: 0x240282d
    ctx->pc = 0x12ee50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12ee54:
    // 0x12ee54: 0xc04bfb4
label_12ee58:
    if (ctx->pc == 0x12EE58u) {
        ctx->pc = 0x12EE58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EE5Cu;
        goto label_12ee5c;
    }
    ctx->pc = 0x12EE54u;
    SET_GPR_U32(ctx, 31, 0x12EE5Cu);
    ctx->pc = 0x12EE58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE5Cu; }
    }
    if (ctx->pc != 0x12EE5Cu) { return; }
    ctx->pc = 0x12EE5Cu;
label_12ee5c:
    // 0x12ee5c: 0x1620000d
label_12ee60:
    if (ctx->pc == 0x12EE60u) {
        ctx->pc = 0x12EE60u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x12EE64u;
        goto label_12ee64;
    }
    ctx->pc = 0x12EE5Cu;
    {
        const bool branch_taken_0x12ee5c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x12EE60u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x12ee5c) {
            ctx->pc = 0x12EE94u;
            goto label_12ee94;
        }
    }
    ctx->pc = 0x12EE64u;
label_12ee64:
    // 0x12ee64: 0x1440000b
label_12ee68:
    if (ctx->pc == 0x12EE68u) {
        ctx->pc = 0x12EE6Cu;
        goto label_12ee6c;
    }
    ctx->pc = 0x12EE64u;
    {
        const bool branch_taken_0x12ee64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12ee64) {
            ctx->pc = 0x12EE94u;
            goto label_12ee94;
        }
    }
    ctx->pc = 0x12EE6Cu;
label_12ee6c:
    // 0x12ee6c: 0x16103c
    ctx->pc = 0x12ee6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_12ee70:
    // 0x12ee70: 0x2103f
    ctx->pc = 0x12ee70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_12ee74:
    // 0x12ee74: 0x30420001
    ctx->pc = 0x12ee74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_12ee78:
    // 0x12ee78: 0x14400006
label_12ee7c:
    if (ctx->pc == 0x12EE7Cu) {
        ctx->pc = 0x12EE7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x12EE80u;
        goto label_12ee80;
    }
    ctx->pc = 0x12EE78u;
    {
        const bool branch_taken_0x12ee78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12EE7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x12ee78) {
            ctx->pc = 0x12EE94u;
            goto label_12ee94;
        }
    }
    ctx->pc = 0x12EE80u;
label_12ee80:
    // 0x12ee80: 0x1262002a
label_12ee84:
    if (ctx->pc == 0x12EE84u) {
        ctx->pc = 0x12EE84u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
        ctx->pc = 0x12EE88u;
        goto label_12ee88;
    }
    ctx->pc = 0x12EE80u;
    {
        const bool branch_taken_0x12ee80 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x12EE84u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
        if (branch_taken_0x12ee80) {
            ctx->pc = 0x12EF2Cu;
            goto label_12ef2c;
        }
    }
    ctx->pc = 0x12EE88u;
label_12ee88:
    // 0x12ee88: 0x539821
    ctx->pc = 0x12ee88u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_12ee8c:
    // 0x12ee8c: 0x10000071
label_12ee90:
    if (ctx->pc == 0x12EE90u) {
        ctx->pc = 0x12EE90u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x12EE94u;
        goto label_12ee94;
    }
    ctx->pc = 0x12EE8Cu;
    {
        const bool branch_taken_0x12ee8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EE90u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        if (branch_taken_0x12ee8c) {
            ctx->pc = 0x12F054u;
            goto label_12f054;
        }
    }
    ctx->pc = 0x12EE94u;
label_12ee94:
    // 0x12ee94: 0x600000a
label_12ee98:
    if (ctx->pc == 0x12EE98u) {
        ctx->pc = 0x12EE9Cu;
        goto label_12ee9c;
    }
    ctx->pc = 0x12EE94u;
    {
        const bool branch_taken_0x12ee94 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x12ee94) {
            ctx->pc = 0x12EEC0u;
            goto label_12eec0;
        }
    }
    ctx->pc = 0x12EE9Cu;
label_12ee9c:
    // 0x12ee9c: 0x1600001f
label_12eea0:
    if (ctx->pc == 0x12EEA0u) {
        ctx->pc = 0x12EEA0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x12EEA4u;
        goto label_12eea4;
    }
    ctx->pc = 0x12EE9Cu;
    {
        const bool branch_taken_0x12ee9c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x12EEA0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x12ee9c) {
            ctx->pc = 0x12EF1Cu;
            goto label_12ef1c;
        }
    }
    ctx->pc = 0x12EEA4u;
label_12eea4:
    // 0x12eea4: 0x1460001d
label_12eea8:
    if (ctx->pc == 0x12EEA8u) {
        ctx->pc = 0x12EEACu;
        goto label_12eeac;
    }
    ctx->pc = 0x12EEA4u;
    {
        const bool branch_taken_0x12eea4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x12eea4) {
            ctx->pc = 0x12EF1Cu;
            goto label_12ef1c;
        }
    }
    ctx->pc = 0x12EEACu;
label_12eeac:
    // 0x12eeac: 0x16103c
    ctx->pc = 0x12eeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_12eeb0:
    // 0x12eeb0: 0x2103f
    ctx->pc = 0x12eeb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_12eeb4:
    // 0x12eeb4: 0x30420001
    ctx->pc = 0x12eeb4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_12eeb8:
    // 0x12eeb8: 0x14400018
label_12eebc:
    if (ctx->pc == 0x12EEBCu) {
        ctx->pc = 0x12EEC0u;
        goto label_12eec0;
    }
    ctx->pc = 0x12EEB8u;
    {
        const bool branch_taken_0x12eeb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12eeb8) {
            ctx->pc = 0x12EF1Cu;
            goto label_12ef1c;
        }
    }
    ctx->pc = 0x12EEC0u;
label_12eec0:
    // 0x12eec0: 0x1a200014
label_12eec4:
    if (ctx->pc == 0x12EEC4u) {
        ctx->pc = 0x12EEC4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x12EEC8u;
        goto label_12eec8;
    }
    ctx->pc = 0x12EEC0u;
    {
        const bool branch_taken_0x12eec0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x12EEC4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x12eec0) {
            ctx->pc = 0x12EF14u;
            goto label_12ef14;
        }
    }
    ctx->pc = 0x12EEC8u;
label_12eec8:
    // 0x12eec8: 0x3c0202d
    ctx->pc = 0x12eec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12eecc:
    // 0x12eecc: 0xc04c184
label_12eed0:
    if (ctx->pc == 0x12EED0u) {
        ctx->pc = 0x12EED0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12EED4u;
        goto label_12eed4;
    }
    ctx->pc = 0x12EECCu;
    SET_GPR_U32(ctx, 31, 0x12EED4u);
    ctx->pc = 0x12EED0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x130610u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x130610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EED4u; }
    }
    if (ctx->pc != 0x12EED4u) { return; }
    ctx->pc = 0x12EED4u;
label_12eed4:
    // 0x12eed4: 0xafa20048
    ctx->pc = 0x12eed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_12eed8:
    // 0x12eed8: 0x8fa50054
    ctx->pc = 0x12eed8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_12eedc:
    // 0x12eedc: 0xc04c1e2
label_12eee0:
    if (ctx->pc == 0x12EEE0u) {
        ctx->pc = 0x12EEE0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EEE4u;
        goto label_12eee4;
    }
    ctx->pc = 0x12EEDCu;
    SET_GPR_U32(ctx, 31, 0x12EEE4u);
    ctx->pc = 0x12EEE0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130788u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x130788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EEE4u; }
    }
    if (ctx->pc != 0x12EEE4u) { return; }
    ctx->pc = 0x12EEE4u;
label_12eee4:
    // 0x12eee4: 0x40882d
    ctx->pc = 0x12eee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12eee8:
    // 0x12eee8: 0x5e200007
label_12eeec:
    if (ctx->pc == 0x12EEECu) {
        ctx->pc = 0x12EEECu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x12EEF0u;
        goto label_12eef0;
    }
    ctx->pc = 0x12EEE8u;
    {
        const bool branch_taken_0x12eee8 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x12eee8) {
            ctx->pc = 0x12EEECu;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x12EF08u;
            goto label_12ef08;
        }
    }
    ctx->pc = 0x12EEF0u;
label_12eef0:
    // 0x12eef0: 0x56200058
label_12eef4:
    if (ctx->pc == 0x12EEF4u) {
        ctx->pc = 0x12EEF4u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x12EEF8u;
        goto label_12eef8;
    }
    ctx->pc = 0x12EEF0u;
    {
        const bool branch_taken_0x12eef0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x12eef0) {
            ctx->pc = 0x12EEF4u;
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->pc = 0x12F054u;
            goto label_12f054;
        }
    }
    ctx->pc = 0x12EEF8u;
label_12eef8:
    // 0x12eef8: 0x32620001
    ctx->pc = 0x12eef8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 1));
label_12eefc:
    // 0x12eefc: 0x50400055
label_12ef00:
    if (ctx->pc == 0x12EF00u) {
        ctx->pc = 0x12EF00u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x12EF04u;
        goto label_12ef04;
    }
    ctx->pc = 0x12EEFCu;
    {
        const bool branch_taken_0x12eefc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12eefc) {
            ctx->pc = 0x12EF00u;
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->pc = 0x12F054u;
            goto label_12f054;
        }
    }
    ctx->pc = 0x12EF04u;
label_12ef04:
    // 0x12ef04: 0x26730001
    ctx->pc = 0x12ef04u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_12ef08:
    // 0x12ef08: 0x2402003a
    ctx->pc = 0x12ef08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 58));
label_12ef0c:
    // 0x12ef0c: 0x12620008
label_12ef10:
    if (ctx->pc == 0x12EF10u) {
        ctx->pc = 0x12EF10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x12EF14u;
        goto label_12ef14;
    }
    ctx->pc = 0x12EF0Cu;
    {
        const bool branch_taken_0x12ef0c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x12EF10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x12ef0c) {
            ctx->pc = 0x12EF30u;
            goto label_12ef30;
        }
    }
    ctx->pc = 0x12EF14u;
label_12ef14:
    // 0x12ef14: 0x1000004f
label_12ef18:
    if (ctx->pc == 0x12EF18u) {
        ctx->pc = 0x12EF18u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x12EF1Cu;
        goto label_12ef1c;
    }
    ctx->pc = 0x12EF14u;
    {
        const bool branch_taken_0x12ef14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EF18u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        if (branch_taken_0x12ef14) {
            ctx->pc = 0x12F054u;
            goto label_12f054;
        }
    }
    ctx->pc = 0x12EF1Cu;
label_12ef1c:
    // 0x12ef1c: 0x1a200009
label_12ef20:
    if (ctx->pc == 0x12EF20u) {
        ctx->pc = 0x12EF20u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x12EF24u;
        goto label_12ef24;
    }
    ctx->pc = 0x12EF1Cu;
    {
        const bool branch_taken_0x12ef1c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x12EF20u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x12ef1c) {
            ctx->pc = 0x12EF44u;
            goto label_12ef44;
        }
    }
    ctx->pc = 0x12EF24u;
label_12ef24:
    // 0x12ef24: 0x16620005
label_12ef28:
    if (ctx->pc == 0x12EF28u) {
        ctx->pc = 0x12EF28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x12EF2Cu;
        goto label_12ef2c;
    }
    ctx->pc = 0x12EF24u;
    {
        const bool branch_taken_0x12ef24 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x12EF28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x12ef24) {
            ctx->pc = 0x12EF3Cu;
            goto label_12ef3c;
        }
    }
    ctx->pc = 0x12EF2Cu;
label_12ef2c:
    // 0x12ef2c: 0x24020039
    ctx->pc = 0x12ef2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
label_12ef30:
    // 0x12ef30: 0xa2a20000
    ctx->pc = 0x12ef30u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_12ef34:
    // 0x12ef34: 0x1000002c
label_12ef38:
    if (ctx->pc == 0x12EF38u) {
        ctx->pc = 0x12EF38u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x12EF3Cu;
        goto label_12ef3c;
    }
    ctx->pc = 0x12EF34u;
    {
        const bool branch_taken_0x12ef34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EF38u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x12ef34) {
            ctx->pc = 0x12EFE8u;
            goto label_12efe8;
        }
    }
    ctx->pc = 0x12EF3Cu;
label_12ef3c:
    // 0x12ef3c: 0x10000045
label_12ef40:
    if (ctx->pc == 0x12EF40u) {
        ctx->pc = 0x12EF40u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12EF44u;
        goto label_12ef44;
    }
    ctx->pc = 0x12EF3Cu;
    {
        const bool branch_taken_0x12ef3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EF40u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x12ef3c) {
            ctx->pc = 0x12F054u;
            goto label_12f054;
        }
    }
    ctx->pc = 0x12EF44u;
label_12ef44:
    // 0x12ef44: 0xa2b30000
    ctx->pc = 0x12ef44u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
label_12ef48:
    // 0x12ef48: 0x8fa40020
    ctx->pc = 0x12ef48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12ef4c:
    // 0x12ef4c: 0x1684ff8e
label_12ef50:
    if (ctx->pc == 0x12EF50u) {
        ctx->pc = 0x12EF50u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x12EF54u;
        goto label_12ef54;
    }
    ctx->pc = 0x12EF4Cu;
    {
        const bool branch_taken_0x12ef4c = (GPR_U32(ctx, 20) != GPR_U32(ctx, 4));
        ctx->pc = 0x12EF50u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x12ef4c) {
            ctx->pc = 0x12ED88u;
            goto label_12ed88;
        }
    }
    ctx->pc = 0x12EF54u;
label_12ef54:
    // 0x12ef54: 0x10000015
label_12ef58:
    if (ctx->pc == 0x12EF58u) {
        ctx->pc = 0x12EF58u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x12EF5Cu;
        goto label_12ef5c;
    }
    ctx->pc = 0x12EF54u;
    {
        const bool branch_taken_0x12ef54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EF58u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x12ef54) {
            ctx->pc = 0x12EFACu;
            goto label_12efac;
        }
    }
    ctx->pc = 0x12EF5Cu;
label_12ef5c:
    // 0x12ef5c: 0x10000009
label_12ef60:
    if (ctx->pc == 0x12EF60u) {
        ctx->pc = 0x12EF60u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x12EF64u;
        goto label_12ef64;
    }
    ctx->pc = 0x12EF5Cu;
    {
        const bool branch_taken_0x12ef5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EF60u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x12ef5c) {
            ctx->pc = 0x12EF84u;
            goto label_12ef84;
        }
    }
    ctx->pc = 0x12EF64u;
label_12ef64:
    // 0x12ef64: 0x0
    ctx->pc = 0x12ef64u;
    // NOP
label_12ef68:
    // 0x12ef68: 0x8fa50048
    ctx->pc = 0x12ef68u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12ef6c:
    // 0x12ef6c: 0x3c0202d
    ctx->pc = 0x12ef6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12ef70:
    // 0x12ef70: 0x2406000a
    ctx->pc = 0x12ef70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_12ef74:
    // 0x12ef74: 0xc04bfc0
label_12ef78:
    if (ctx->pc == 0x12EF78u) {
        ctx->pc = 0x12EF78u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EF7Cu;
        goto label_12ef7c;
    }
    ctx->pc = 0x12EF74u;
    SET_GPR_U32(ctx, 31, 0x12EF7Cu);
    ctx->pc = 0x12EF78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EF7Cu; }
    }
    if (ctx->pc != 0x12EF7Cu) { return; }
    ctx->pc = 0x12EF7Cu;
label_12ef7c:
    // 0x12ef7c: 0x26940001
    ctx->pc = 0x12ef7cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_12ef80:
    // 0x12ef80: 0xafa20048
    ctx->pc = 0x12ef80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_12ef84:
    // 0x12ef84: 0x8fa40048
    ctx->pc = 0x12ef84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12ef88:
    // 0x12ef88: 0xc04b744
label_12ef8c:
    if (ctx->pc == 0x12EF8Cu) {
        ctx->pc = 0x12EF8Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x12EF90u;
        goto label_12ef90;
    }
    ctx->pc = 0x12EF88u;
    SET_GPR_U32(ctx, 31, 0x12EF90u);
    ctx->pc = 0x12EF8Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->pc = 0x12DD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        quorem_0x12dd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EF90u; }
    }
    if (ctx->pc != 0x12EF90u) { return; }
    ctx->pc = 0x12EF90u;
label_12ef90:
    // 0x12ef90: 0x24530030
    ctx->pc = 0x12ef90u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 48));
label_12ef94:
    // 0x12ef94: 0x8fa30020
    ctx->pc = 0x12ef94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12ef98:
    // 0x12ef98: 0xa2b30000
    ctx->pc = 0x12ef98u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
label_12ef9c:
    // 0x12ef9c: 0x283102a
    ctx->pc = 0x12ef9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_12efa0:
    // 0x12efa0: 0x1440fff1
label_12efa4:
    if (ctx->pc == 0x12EFA4u) {
        ctx->pc = 0x12EFA4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x12EFA8u;
        goto label_12efa8;
    }
    ctx->pc = 0x12EFA0u;
    {
        const bool branch_taken_0x12efa0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12EFA4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x12efa0) {
            ctx->pc = 0x12EF68u;
            goto label_12ef68;
        }
    }
    ctx->pc = 0x12EFA8u;
label_12efa8:
    // 0x12efa8: 0x8fa50048
    ctx->pc = 0x12efa8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12efac:
    // 0x12efac: 0x3c0202d
    ctx->pc = 0x12efacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12efb0:
    // 0x12efb0: 0xc04c184
label_12efb4:
    if (ctx->pc == 0x12EFB4u) {
        ctx->pc = 0x12EFB4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12EFB8u;
        goto label_12efb8;
    }
    ctx->pc = 0x12EFB0u;
    SET_GPR_U32(ctx, 31, 0x12EFB8u);
    ctx->pc = 0x12EFB4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x130610u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x130610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EFB8u; }
    }
    if (ctx->pc != 0x12EFB8u) { return; }
    ctx->pc = 0x12EFB8u;
label_12efb8:
    // 0x12efb8: 0xafa20048
    ctx->pc = 0x12efb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_12efbc:
    // 0x12efbc: 0x8fa50054
    ctx->pc = 0x12efbcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_12efc0:
    // 0x12efc0: 0xc04c1e2
label_12efc4:
    if (ctx->pc == 0x12EFC4u) {
        ctx->pc = 0x12EFC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EFC8u;
        goto label_12efc8;
    }
    ctx->pc = 0x12EFC0u;
    SET_GPR_U32(ctx, 31, 0x12EFC8u);
    ctx->pc = 0x12EFC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130788u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x130788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EFC8u; }
    }
    if (ctx->pc != 0x12EFC8u) { return; }
    ctx->pc = 0x12EFC8u;
label_12efc8:
    // 0x12efc8: 0x40802d
    ctx->pc = 0x12efc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12efcc:
    // 0x12efcc: 0x5e000007
label_12efd0:
    if (ctx->pc == 0x12EFD0u) {
        ctx->pc = 0x12EFD0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x12EFD4u;
        goto label_12efd4;
    }
    ctx->pc = 0x12EFCCu;
    {
        const bool branch_taken_0x12efcc = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x12efcc) {
            ctx->pc = 0x12EFD0u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->pc = 0x12EFECu;
            goto label_12efec;
        }
    }
    ctx->pc = 0x12EFD4u;
label_12efd4:
    // 0x12efd4: 0x16000018
label_12efd8:
    if (ctx->pc == 0x12EFD8u) {
        ctx->pc = 0x12EFD8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x12EFDCu;
        goto label_12efdc;
    }
    ctx->pc = 0x12EFD4u;
    {
        const bool branch_taken_0x12efd4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x12EFD8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x12efd4) {
            ctx->pc = 0x12F038u;
            goto label_12f038;
        }
    }
    ctx->pc = 0x12EFDCu;
label_12efdc:
    // 0x12efdc: 0x32620001
    ctx->pc = 0x12efdcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 1));
label_12efe0:
    // 0x12efe0: 0x50400016
label_12efe4:
    if (ctx->pc == 0x12EFE4u) {
        ctx->pc = 0x12EFE4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x12EFE8u;
        goto label_12efe8;
    }
    ctx->pc = 0x12EFE0u;
    {
        const bool branch_taken_0x12efe0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12efe0) {
            ctx->pc = 0x12EFE4u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->pc = 0x12F03Cu;
            goto label_12f03c;
        }
    }
    ctx->pc = 0x12EFE8u;
label_12efe8:
    // 0x12efe8: 0x26b5ffff
    ctx->pc = 0x12efe8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_12efec:
    // 0x12efec: 0x10000005
label_12eff0:
    if (ctx->pc == 0x12EFF0u) {
        ctx->pc = 0x12EFF0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x12EFF4u;
        goto label_12eff4;
    }
    ctx->pc = 0x12EFECu;
    {
        const bool branch_taken_0x12efec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EFF0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x12efec) {
            ctx->pc = 0x12F004u;
            goto label_12f004;
        }
    }
    ctx->pc = 0x12EFF4u;
label_12eff4:
    // 0x12eff4: 0x0
    ctx->pc = 0x12eff4u;
    // NOP
label_12eff8:
    // 0x12eff8: 0x8fa40058
    ctx->pc = 0x12eff8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_12effc:
    // 0x12effc: 0x12a40007
label_12f000:
    if (ctx->pc == 0x12F000u) {
        ctx->pc = 0x12F000u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x12F004u;
        goto label_12f004;
    }
    ctx->pc = 0x12EFFCu;
    {
        const bool branch_taken_0x12effc = (GPR_U32(ctx, 21) == GPR_U32(ctx, 4));
        ctx->pc = 0x12F000u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        if (branch_taken_0x12effc) {
            ctx->pc = 0x12F01Cu;
            goto label_12f01c;
        }
    }
    ctx->pc = 0x12F004u;
label_12f004:
    // 0x12f004: 0x82a20000
    ctx->pc = 0x12f004u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_12f008:
    // 0x12f008: 0x1043fffb
label_12f00c:
    if (ctx->pc == 0x12F00Cu) {
        ctx->pc = 0x12F00Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x12F010u;
        goto label_12f010;
    }
    ctx->pc = 0x12F008u;
    {
        const bool branch_taken_0x12f008 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x12F00Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        if (branch_taken_0x12f008) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12F010u;
label_12f010:
    // 0x12f010: 0x24820001
    ctx->pc = 0x12f010u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_12f014:
    // 0x12f014: 0x1000000f
label_12f018:
    if (ctx->pc == 0x12F018u) {
        ctx->pc = 0x12F018u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F01Cu;
        goto label_12f01c;
    }
    ctx->pc = 0x12F014u;
    {
        const bool branch_taken_0x12f014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12F018u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x12f014) {
            ctx->pc = 0x12F054u;
            goto label_12f054;
        }
    }
    ctx->pc = 0x12F01Cu;
label_12f01c:
    // 0x12f01c: 0x8fa30058
    ctx->pc = 0x12f01cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_12f020:
    // 0x12f020: 0x24020031
    ctx->pc = 0x12f020u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
label_12f024:
    // 0x12f024: 0x26f70001
    ctx->pc = 0x12f024u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
label_12f028:
    // 0x12f028: 0x24750001
    ctx->pc = 0x12f028u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
label_12f02c:
    // 0x12f02c: 0x1000000a
label_12f030:
    if (ctx->pc == 0x12F030u) {
        ctx->pc = 0x12F030u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F034u;
        goto label_12f034;
    }
    ctx->pc = 0x12F02Cu;
    {
        const bool branch_taken_0x12f02c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12F030u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x12f02c) {
            ctx->pc = 0x12F058u;
            goto label_12f058;
        }
    }
    ctx->pc = 0x12F034u;
label_12f034:
    // 0x12f034: 0x0
    ctx->pc = 0x12f034u;
    // NOP
label_12f038:
    // 0x12f038: 0x26b5ffff
    ctx->pc = 0x12f038u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_12f03c:
    // 0x12f03c: 0x82a20000
    ctx->pc = 0x12f03cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_12f040:
    // 0x12f040: 0x0
    ctx->pc = 0x12f040u;
    // NOP
label_12f044:
    // 0x12f044: 0x0
    ctx->pc = 0x12f044u;
    // NOP
label_12f048:
    // 0x12f048: 0x0
    ctx->pc = 0x12f048u;
    // NOP
label_12f04c:
    // 0x12f04c: 0x1043fffa
label_12f050:
    if (ctx->pc == 0x12F050u) {
        ctx->pc = 0x12F054u;
        goto label_12f054;
    }
    ctx->pc = 0x12F04Cu;
    {
        const bool branch_taken_0x12f04c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x12f04c) {
            ctx->pc = 0x12F038u;
            goto label_12f038;
        }
    }
    ctx->pc = 0x12F054u;
label_12f054:
    // 0x12f054: 0x26b50001
    ctx->pc = 0x12f054u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_12f058:
    // 0x12f058: 0x8fa50054
    ctx->pc = 0x12f058u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_12f05c:
    // 0x12f05c: 0xc04bfb4
label_12f060:
    if (ctx->pc == 0x12F060u) {
        ctx->pc = 0x12F060u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F064u;
        goto label_12f064;
    }
    ctx->pc = 0x12F05Cu;
    SET_GPR_U32(ctx, 31, 0x12F064u);
    ctx->pc = 0x12F060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F064u; }
    }
    if (ctx->pc != 0x12F064u) { return; }
    ctx->pc = 0x12F064u;
label_12f064:
    // 0x12f064: 0x8fa40050
    ctx->pc = 0x12f064u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_12f068:
    // 0x12f068: 0x1080000c
label_12f06c:
    if (ctx->pc == 0x12F06Cu) {
        ctx->pc = 0x12F06Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x12F070u;
        goto label_12f070;
    }
    ctx->pc = 0x12F068u;
    {
        const bool branch_taken_0x12f068 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x12F06Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
        if (branch_taken_0x12f068) {
            ctx->pc = 0x12F09Cu;
            goto label_12f09c;
        }
    }
    ctx->pc = 0x12F070u;
label_12f070:
    // 0x12f070: 0x10400006
label_12f074:
    if (ctx->pc == 0x12F074u) {
        ctx->pc = 0x12F074u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x12F078u;
        goto label_12f078;
    }
    ctx->pc = 0x12F070u;
    {
        const bool branch_taken_0x12f070 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12F074u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x12f070) {
            ctx->pc = 0x12F08Cu;
            goto label_12f08c;
        }
    }
    ctx->pc = 0x12F078u;
label_12f078:
    // 0x12f078: 0x10440003
label_12f07c:
    if (ctx->pc == 0x12F07Cu) {
        ctx->pc = 0x12F07Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F080u;
        goto label_12f080;
    }
    ctx->pc = 0x12F078u;
    {
        const bool branch_taken_0x12f078 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x12F07Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f078) {
            ctx->pc = 0x12F088u;
            goto label_12f088;
        }
    }
    ctx->pc = 0x12F080u;
label_12f080:
    // 0x12f080: 0xc04bfb4
label_12f084:
    if (ctx->pc == 0x12F084u) {
        ctx->pc = 0x12F084u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F088u;
        goto label_12f088;
    }
    ctx->pc = 0x12F080u;
    SET_GPR_U32(ctx, 31, 0x12F088u);
    ctx->pc = 0x12F084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F088u; }
    }
    if (ctx->pc != 0x12F088u) { return; }
    ctx->pc = 0x12F088u;
label_12f088:
    // 0x12f088: 0x8fa50050
    ctx->pc = 0x12f088u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_12f08c:
    // 0x12f08c: 0xc04bfb4
label_12f090:
    if (ctx->pc == 0x12F090u) {
        ctx->pc = 0x12F090u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F094u;
        goto label_12f094;
    }
    ctx->pc = 0x12F08Cu;
    SET_GPR_U32(ctx, 31, 0x12F094u);
    ctx->pc = 0x12F090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F094u; }
    }
    if (ctx->pc != 0x12F094u) { return; }
    ctx->pc = 0x12F094u;
label_12f094:
    // 0x12f094: 0x10000002
label_12f098:
    if (ctx->pc == 0x12F098u) {
        ctx->pc = 0x12F098u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x12F09Cu;
        goto label_12f09c;
    }
    ctx->pc = 0x12F094u;
    {
        const bool branch_taken_0x12f094 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12F098u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x12f094) {
            ctx->pc = 0x12F0A0u;
            goto label_12f0a0;
        }
    }
    ctx->pc = 0x12F09Cu;
label_12f09c:
    // 0x12f09c: 0x8fa50048
    ctx->pc = 0x12f09cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12f0a0:
    // 0x12f0a0: 0xc04bfb4
label_12f0a4:
    if (ctx->pc == 0x12F0A4u) {
        ctx->pc = 0x12F0A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F0A8u;
        goto label_12f0a8;
    }
    ctx->pc = 0x12F0A0u;
    SET_GPR_U32(ctx, 31, 0x12F0A8u);
    ctx->pc = 0x12F0A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F0A8u; }
    }
    if (ctx->pc != 0x12F0A8u) { return; }
    ctx->pc = 0x12F0A8u;
label_12f0a8:
    // 0x12f0a8: 0xa2a00000
    ctx->pc = 0x12f0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
label_12f0ac:
    // 0x12f0ac: 0x8fa30010
    ctx->pc = 0x12f0acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_12f0b0:
    // 0x12f0b0: 0xac770000
    ctx->pc = 0x12f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
label_12f0b4:
    // 0x12f0b4: 0x8fa40014
    ctx->pc = 0x12f0b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12f0b8:
    // 0x12f0b8: 0x54800001
label_12f0bc:
    if (ctx->pc == 0x12F0BCu) {
        ctx->pc = 0x12F0BCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
        ctx->pc = 0x12F0C0u;
        goto label_12f0c0;
    }
    ctx->pc = 0x12F0B8u;
    {
        const bool branch_taken_0x12f0b8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x12f0b8) {
            ctx->pc = 0x12F0BCu;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->pc = 0x12F0C0u;
            goto label_12f0c0;
        }
    }
    ctx->pc = 0x12F0C0u;
label_12f0c0:
    // 0x12f0c0: 0x8fa20058
    ctx->pc = 0x12f0c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_12f0c4:
    // 0x12f0c4: 0xdfbf00f0
    ctx->pc = 0x12f0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_12f0c8:
    // 0x12f0c8: 0xdfbe00e0
    ctx->pc = 0x12f0c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_12f0cc:
    // 0x12f0cc: 0xdfb700d0
    ctx->pc = 0x12f0ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_12f0d0:
    // 0x12f0d0: 0xdfb600c0
    ctx->pc = 0x12f0d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_12f0d4:
    // 0x12f0d4: 0xdfb500b0
    ctx->pc = 0x12f0d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_12f0d8:
    // 0x12f0d8: 0xdfb400a0
    ctx->pc = 0x12f0d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_12f0dc:
    // 0x12f0dc: 0xdfb30090
    ctx->pc = 0x12f0dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_12f0e0:
    // 0x12f0e0: 0xdfb20080
    ctx->pc = 0x12f0e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_12f0e4:
    // 0x12f0e4: 0xdfb10070
    ctx->pc = 0x12f0e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_12f0e8:
    // 0x12f0e8: 0xdfb00060
    ctx->pc = 0x12f0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_12f0ec:
    // 0x12f0ec: 0x3e00008
label_12f0f0:
    if (ctx->pc == 0x12F0F0u) {
        ctx->pc = 0x12F0F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x12F0F4u;
        goto label_fallthrough_0x12f0ec;
    }
    ctx->pc = 0x12F0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F0F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DF28u: goto label_12df28;
            case 0x12DF2Cu: goto label_12df2c;
            case 0x12DF30u: goto label_12df30;
            case 0x12DF34u: goto label_12df34;
            case 0x12DF38u: goto label_12df38;
            case 0x12DF3Cu: goto label_12df3c;
            case 0x12DF40u: goto label_12df40;
            case 0x12DF44u: goto label_12df44;
            case 0x12DF48u: goto label_12df48;
            case 0x12DF4Cu: goto label_12df4c;
            case 0x12DF50u: goto label_12df50;
            case 0x12DF54u: goto label_12df54;
            case 0x12DF58u: goto label_12df58;
            case 0x12DF5Cu: goto label_12df5c;
            case 0x12DF60u: goto label_12df60;
            case 0x12DF64u: goto label_12df64;
            case 0x12DF68u: goto label_12df68;
            case 0x12DF6Cu: goto label_12df6c;
            case 0x12DF70u: goto label_12df70;
            case 0x12DF74u: goto label_12df74;
            case 0x12DF78u: goto label_12df78;
            case 0x12DF7Cu: goto label_12df7c;
            case 0x12DF80u: goto label_12df80;
            case 0x12DF84u: goto label_12df84;
            case 0x12DF88u: goto label_12df88;
            case 0x12DF8Cu: goto label_12df8c;
            case 0x12DF90u: goto label_12df90;
            case 0x12DF94u: goto label_12df94;
            case 0x12DF98u: goto label_12df98;
            case 0x12DF9Cu: goto label_12df9c;
            case 0x12DFA0u: goto label_12dfa0;
            case 0x12DFA4u: goto label_12dfa4;
            case 0x12DFA8u: goto label_12dfa8;
            case 0x12DFACu: goto label_12dfac;
            case 0x12DFB0u: goto label_12dfb0;
            case 0x12DFB4u: goto label_12dfb4;
            case 0x12DFB8u: goto label_12dfb8;
            case 0x12DFBCu: goto label_12dfbc;
            case 0x12DFC0u: goto label_12dfc0;
            case 0x12DFC4u: goto label_12dfc4;
            case 0x12DFC8u: goto label_12dfc8;
            case 0x12DFCCu: goto label_12dfcc;
            case 0x12DFD0u: goto label_12dfd0;
            case 0x12DFD4u: goto label_12dfd4;
            case 0x12DFD8u: goto label_12dfd8;
            case 0x12DFDCu: goto label_12dfdc;
            case 0x12DFE0u: goto label_12dfe0;
            case 0x12DFE4u: goto label_12dfe4;
            case 0x12DFE8u: goto label_12dfe8;
            case 0x12DFECu: goto label_12dfec;
            case 0x12DFF0u: goto label_12dff0;
            case 0x12DFF4u: goto label_12dff4;
            case 0x12DFF8u: goto label_12dff8;
            case 0x12DFFCu: goto label_12dffc;
            case 0x12E000u: goto label_12e000;
            case 0x12E004u: goto label_12e004;
            case 0x12E008u: goto label_12e008;
            case 0x12E00Cu: goto label_12e00c;
            case 0x12E010u: goto label_12e010;
            case 0x12E014u: goto label_12e014;
            case 0x12E018u: goto label_12e018;
            case 0x12E01Cu: goto label_12e01c;
            case 0x12E020u: goto label_12e020;
            case 0x12E024u: goto label_12e024;
            case 0x12E028u: goto label_12e028;
            case 0x12E02Cu: goto label_12e02c;
            case 0x12E030u: goto label_12e030;
            case 0x12E034u: goto label_12e034;
            case 0x12E038u: goto label_12e038;
            case 0x12E03Cu: goto label_12e03c;
            case 0x12E040u: goto label_12e040;
            case 0x12E044u: goto label_12e044;
            case 0x12E048u: goto label_12e048;
            case 0x12E04Cu: goto label_12e04c;
            case 0x12E050u: goto label_12e050;
            case 0x12E054u: goto label_12e054;
            case 0x12E058u: goto label_12e058;
            case 0x12E05Cu: goto label_12e05c;
            case 0x12E060u: goto label_12e060;
            case 0x12E064u: goto label_12e064;
            case 0x12E068u: goto label_12e068;
            case 0x12E06Cu: goto label_12e06c;
            case 0x12E070u: goto label_12e070;
            case 0x12E074u: goto label_12e074;
            case 0x12E078u: goto label_12e078;
            case 0x12E07Cu: goto label_12e07c;
            case 0x12E080u: goto label_12e080;
            case 0x12E084u: goto label_12e084;
            case 0x12E088u: goto label_12e088;
            case 0x12E08Cu: goto label_12e08c;
            case 0x12E090u: goto label_12e090;
            case 0x12E094u: goto label_12e094;
            case 0x12E098u: goto label_12e098;
            case 0x12E09Cu: goto label_12e09c;
            case 0x12E0A0u: goto label_12e0a0;
            case 0x12E0A4u: goto label_12e0a4;
            case 0x12E0A8u: goto label_12e0a8;
            case 0x12E0ACu: goto label_12e0ac;
            case 0x12E0B0u: goto label_12e0b0;
            case 0x12E0B4u: goto label_12e0b4;
            case 0x12E0B8u: goto label_12e0b8;
            case 0x12E0BCu: goto label_12e0bc;
            case 0x12E0C0u: goto label_12e0c0;
            case 0x12E0C4u: goto label_12e0c4;
            case 0x12E0C8u: goto label_12e0c8;
            case 0x12E0CCu: goto label_12e0cc;
            case 0x12E0D0u: goto label_12e0d0;
            case 0x12E0D4u: goto label_12e0d4;
            case 0x12E0D8u: goto label_12e0d8;
            case 0x12E0DCu: goto label_12e0dc;
            case 0x12E0E0u: goto label_12e0e0;
            case 0x12E0E4u: goto label_12e0e4;
            case 0x12E0E8u: goto label_12e0e8;
            case 0x12E0ECu: goto label_12e0ec;
            case 0x12E0F0u: goto label_12e0f0;
            case 0x12E0F4u: goto label_12e0f4;
            case 0x12E0F8u: goto label_12e0f8;
            case 0x12E0FCu: goto label_12e0fc;
            case 0x12E100u: goto label_12e100;
            case 0x12E104u: goto label_12e104;
            case 0x12E108u: goto label_12e108;
            case 0x12E10Cu: goto label_12e10c;
            case 0x12E110u: goto label_12e110;
            case 0x12E114u: goto label_12e114;
            case 0x12E118u: goto label_12e118;
            case 0x12E11Cu: goto label_12e11c;
            case 0x12E120u: goto label_12e120;
            case 0x12E124u: goto label_12e124;
            case 0x12E128u: goto label_12e128;
            case 0x12E12Cu: goto label_12e12c;
            case 0x12E130u: goto label_12e130;
            case 0x12E134u: goto label_12e134;
            case 0x12E138u: goto label_12e138;
            case 0x12E13Cu: goto label_12e13c;
            case 0x12E140u: goto label_12e140;
            case 0x12E144u: goto label_12e144;
            case 0x12E148u: goto label_12e148;
            case 0x12E14Cu: goto label_12e14c;
            case 0x12E150u: goto label_12e150;
            case 0x12E154u: goto label_12e154;
            case 0x12E158u: goto label_12e158;
            case 0x12E15Cu: goto label_12e15c;
            case 0x12E160u: goto label_12e160;
            case 0x12E164u: goto label_12e164;
            case 0x12E168u: goto label_12e168;
            case 0x12E16Cu: goto label_12e16c;
            case 0x12E170u: goto label_12e170;
            case 0x12E174u: goto label_12e174;
            case 0x12E178u: goto label_12e178;
            case 0x12E17Cu: goto label_12e17c;
            case 0x12E180u: goto label_12e180;
            case 0x12E184u: goto label_12e184;
            case 0x12E188u: goto label_12e188;
            case 0x12E18Cu: goto label_12e18c;
            case 0x12E190u: goto label_12e190;
            case 0x12E194u: goto label_12e194;
            case 0x12E198u: goto label_12e198;
            case 0x12E19Cu: goto label_12e19c;
            case 0x12E1A0u: goto label_12e1a0;
            case 0x12E1A4u: goto label_12e1a4;
            case 0x12E1A8u: goto label_12e1a8;
            case 0x12E1ACu: goto label_12e1ac;
            case 0x12E1B0u: goto label_12e1b0;
            case 0x12E1B4u: goto label_12e1b4;
            case 0x12E1B8u: goto label_12e1b8;
            case 0x12E1BCu: goto label_12e1bc;
            case 0x12E1C0u: goto label_12e1c0;
            case 0x12E1C4u: goto label_12e1c4;
            case 0x12E1C8u: goto label_12e1c8;
            case 0x12E1CCu: goto label_12e1cc;
            case 0x12E1D0u: goto label_12e1d0;
            case 0x12E1D4u: goto label_12e1d4;
            case 0x12E1D8u: goto label_12e1d8;
            case 0x12E1DCu: goto label_12e1dc;
            case 0x12E1E0u: goto label_12e1e0;
            case 0x12E1E4u: goto label_12e1e4;
            case 0x12E1E8u: goto label_12e1e8;
            case 0x12E1ECu: goto label_12e1ec;
            case 0x12E1F0u: goto label_12e1f0;
            case 0x12E1F4u: goto label_12e1f4;
            case 0x12E1F8u: goto label_12e1f8;
            case 0x12E1FCu: goto label_12e1fc;
            case 0x12E200u: goto label_12e200;
            case 0x12E204u: goto label_12e204;
            case 0x12E208u: goto label_12e208;
            case 0x12E20Cu: goto label_12e20c;
            case 0x12E210u: goto label_12e210;
            case 0x12E214u: goto label_12e214;
            case 0x12E218u: goto label_12e218;
            case 0x12E21Cu: goto label_12e21c;
            case 0x12E220u: goto label_12e220;
            case 0x12E224u: goto label_12e224;
            case 0x12E228u: goto label_12e228;
            case 0x12E22Cu: goto label_12e22c;
            case 0x12E230u: goto label_12e230;
            case 0x12E234u: goto label_12e234;
            case 0x12E238u: goto label_12e238;
            case 0x12E23Cu: goto label_12e23c;
            case 0x12E240u: goto label_12e240;
            case 0x12E244u: goto label_12e244;
            case 0x12E248u: goto label_12e248;
            case 0x12E24Cu: goto label_12e24c;
            case 0x12E250u: goto label_12e250;
            case 0x12E254u: goto label_12e254;
            case 0x12E258u: goto label_12e258;
            case 0x12E25Cu: goto label_12e25c;
            case 0x12E260u: goto label_12e260;
            case 0x12E264u: goto label_12e264;
            case 0x12E268u: goto label_12e268;
            case 0x12E26Cu: goto label_12e26c;
            case 0x12E270u: goto label_12e270;
            case 0x12E274u: goto label_12e274;
            case 0x12E278u: goto label_12e278;
            case 0x12E27Cu: goto label_12e27c;
            case 0x12E280u: goto label_12e280;
            case 0x12E284u: goto label_12e284;
            case 0x12E288u: goto label_12e288;
            case 0x12E28Cu: goto label_12e28c;
            case 0x12E290u: goto label_12e290;
            case 0x12E294u: goto label_12e294;
            case 0x12E298u: goto label_12e298;
            case 0x12E29Cu: goto label_12e29c;
            case 0x12E2A0u: goto label_12e2a0;
            case 0x12E2A4u: goto label_12e2a4;
            case 0x12E2A8u: goto label_12e2a8;
            case 0x12E2ACu: goto label_12e2ac;
            case 0x12E2B0u: goto label_12e2b0;
            case 0x12E2B4u: goto label_12e2b4;
            case 0x12E2B8u: goto label_12e2b8;
            case 0x12E2BCu: goto label_12e2bc;
            case 0x12E2C0u: goto label_12e2c0;
            case 0x12E2C4u: goto label_12e2c4;
            case 0x12E2C8u: goto label_12e2c8;
            case 0x12E2CCu: goto label_12e2cc;
            case 0x12E2D0u: goto label_12e2d0;
            case 0x12E2D4u: goto label_12e2d4;
            case 0x12E2D8u: goto label_12e2d8;
            case 0x12E2DCu: goto label_12e2dc;
            case 0x12E2E0u: goto label_12e2e0;
            case 0x12E2E4u: goto label_12e2e4;
            case 0x12E2E8u: goto label_12e2e8;
            case 0x12E2ECu: goto label_12e2ec;
            case 0x12E2F0u: goto label_12e2f0;
            case 0x12E2F4u: goto label_12e2f4;
            case 0x12E2F8u: goto label_12e2f8;
            case 0x12E2FCu: goto label_12e2fc;
            case 0x12E300u: goto label_12e300;
            case 0x12E304u: goto label_12e304;
            case 0x12E308u: goto label_12e308;
            case 0x12E30Cu: goto label_12e30c;
            case 0x12E310u: goto label_12e310;
            case 0x12E314u: goto label_12e314;
            case 0x12E318u: goto label_12e318;
            case 0x12E31Cu: goto label_12e31c;
            case 0x12E320u: goto label_12e320;
            case 0x12E324u: goto label_12e324;
            case 0x12E328u: goto label_12e328;
            case 0x12E32Cu: goto label_12e32c;
            case 0x12E330u: goto label_12e330;
            case 0x12E334u: goto label_12e334;
            case 0x12E338u: goto label_12e338;
            case 0x12E33Cu: goto label_12e33c;
            case 0x12E340u: goto label_12e340;
            case 0x12E344u: goto label_12e344;
            case 0x12E348u: goto label_12e348;
            case 0x12E34Cu: goto label_12e34c;
            case 0x12E350u: goto label_12e350;
            case 0x12E354u: goto label_12e354;
            case 0x12E358u: goto label_12e358;
            case 0x12E35Cu: goto label_12e35c;
            case 0x12E360u: goto label_12e360;
            case 0x12E364u: goto label_12e364;
            case 0x12E368u: goto label_12e368;
            case 0x12E36Cu: goto label_12e36c;
            case 0x12E370u: goto label_12e370;
            case 0x12E374u: goto label_12e374;
            case 0x12E378u: goto label_12e378;
            case 0x12E37Cu: goto label_12e37c;
            case 0x12E380u: goto label_12e380;
            case 0x12E384u: goto label_12e384;
            case 0x12E388u: goto label_12e388;
            case 0x12E38Cu: goto label_12e38c;
            case 0x12E390u: goto label_12e390;
            case 0x12E394u: goto label_12e394;
            case 0x12E398u: goto label_12e398;
            case 0x12E39Cu: goto label_12e39c;
            case 0x12E3A0u: goto label_12e3a0;
            case 0x12E3A4u: goto label_12e3a4;
            case 0x12E3A8u: goto label_12e3a8;
            case 0x12E3ACu: goto label_12e3ac;
            case 0x12E3B0u: goto label_12e3b0;
            case 0x12E3B4u: goto label_12e3b4;
            case 0x12E3B8u: goto label_12e3b8;
            case 0x12E3BCu: goto label_12e3bc;
            case 0x12E3C0u: goto label_12e3c0;
            case 0x12E3C4u: goto label_12e3c4;
            case 0x12E3C8u: goto label_12e3c8;
            case 0x12E3CCu: goto label_12e3cc;
            case 0x12E3D0u: goto label_12e3d0;
            case 0x12E3D4u: goto label_12e3d4;
            case 0x12E3D8u: goto label_12e3d8;
            case 0x12E3DCu: goto label_12e3dc;
            case 0x12E3E0u: goto label_12e3e0;
            case 0x12E3E4u: goto label_12e3e4;
            case 0x12E3E8u: goto label_12e3e8;
            case 0x12E3ECu: goto label_12e3ec;
            case 0x12E3F0u: goto label_12e3f0;
            case 0x12E3F4u: goto label_12e3f4;
            case 0x12E3F8u: goto label_12e3f8;
            case 0x12E3FCu: goto label_12e3fc;
            case 0x12E400u: goto label_12e400;
            case 0x12E404u: goto label_12e404;
            case 0x12E408u: goto label_12e408;
            case 0x12E40Cu: goto label_12e40c;
            case 0x12E410u: goto label_12e410;
            case 0x12E414u: goto label_12e414;
            case 0x12E418u: goto label_12e418;
            case 0x12E41Cu: goto label_12e41c;
            case 0x12E420u: goto label_12e420;
            case 0x12E424u: goto label_12e424;
            case 0x12E428u: goto label_12e428;
            case 0x12E42Cu: goto label_12e42c;
            case 0x12E430u: goto label_12e430;
            case 0x12E434u: goto label_12e434;
            case 0x12E438u: goto label_12e438;
            case 0x12E43Cu: goto label_12e43c;
            case 0x12E440u: goto label_12e440;
            case 0x12E444u: goto label_12e444;
            case 0x12E448u: goto label_12e448;
            case 0x12E44Cu: goto label_12e44c;
            case 0x12E450u: goto label_12e450;
            case 0x12E454u: goto label_12e454;
            case 0x12E458u: goto label_12e458;
            case 0x12E45Cu: goto label_12e45c;
            case 0x12E460u: goto label_12e460;
            case 0x12E464u: goto label_12e464;
            case 0x12E468u: goto label_12e468;
            case 0x12E46Cu: goto label_12e46c;
            case 0x12E470u: goto label_12e470;
            case 0x12E474u: goto label_12e474;
            case 0x12E478u: goto label_12e478;
            case 0x12E47Cu: goto label_12e47c;
            case 0x12E480u: goto label_12e480;
            case 0x12E484u: goto label_12e484;
            case 0x12E488u: goto label_12e488;
            case 0x12E48Cu: goto label_12e48c;
            case 0x12E490u: goto label_12e490;
            case 0x12E494u: goto label_12e494;
            case 0x12E498u: goto label_12e498;
            case 0x12E49Cu: goto label_12e49c;
            case 0x12E4A0u: goto label_12e4a0;
            case 0x12E4A4u: goto label_12e4a4;
            case 0x12E4A8u: goto label_12e4a8;
            case 0x12E4ACu: goto label_12e4ac;
            case 0x12E4B0u: goto label_12e4b0;
            case 0x12E4B4u: goto label_12e4b4;
            case 0x12E4B8u: goto label_12e4b8;
            case 0x12E4BCu: goto label_12e4bc;
            case 0x12E4C0u: goto label_12e4c0;
            case 0x12E4C4u: goto label_12e4c4;
            case 0x12E4C8u: goto label_12e4c8;
            case 0x12E4CCu: goto label_12e4cc;
            case 0x12E4D0u: goto label_12e4d0;
            case 0x12E4D4u: goto label_12e4d4;
            case 0x12E4D8u: goto label_12e4d8;
            case 0x12E4DCu: goto label_12e4dc;
            case 0x12E4E0u: goto label_12e4e0;
            case 0x12E4E4u: goto label_12e4e4;
            case 0x12E4E8u: goto label_12e4e8;
            case 0x12E4ECu: goto label_12e4ec;
            case 0x12E4F0u: goto label_12e4f0;
            case 0x12E4F4u: goto label_12e4f4;
            case 0x12E4F8u: goto label_12e4f8;
            case 0x12E4FCu: goto label_12e4fc;
            case 0x12E500u: goto label_12e500;
            case 0x12E504u: goto label_12e504;
            case 0x12E508u: goto label_12e508;
            case 0x12E50Cu: goto label_12e50c;
            case 0x12E510u: goto label_12e510;
            case 0x12E514u: goto label_12e514;
            case 0x12E518u: goto label_12e518;
            case 0x12E51Cu: goto label_12e51c;
            case 0x12E520u: goto label_12e520;
            case 0x12E524u: goto label_12e524;
            case 0x12E528u: goto label_12e528;
            case 0x12E52Cu: goto label_12e52c;
            case 0x12E530u: goto label_12e530;
            case 0x12E534u: goto label_12e534;
            case 0x12E538u: goto label_12e538;
            case 0x12E53Cu: goto label_12e53c;
            case 0x12E540u: goto label_12e540;
            case 0x12E544u: goto label_12e544;
            case 0x12E548u: goto label_12e548;
            case 0x12E54Cu: goto label_12e54c;
            case 0x12E550u: goto label_12e550;
            case 0x12E554u: goto label_12e554;
            case 0x12E558u: goto label_12e558;
            case 0x12E55Cu: goto label_12e55c;
            case 0x12E560u: goto label_12e560;
            case 0x12E564u: goto label_12e564;
            case 0x12E568u: goto label_12e568;
            case 0x12E56Cu: goto label_12e56c;
            case 0x12E570u: goto label_12e570;
            case 0x12E574u: goto label_12e574;
            case 0x12E578u: goto label_12e578;
            case 0x12E57Cu: goto label_12e57c;
            case 0x12E580u: goto label_12e580;
            case 0x12E584u: goto label_12e584;
            case 0x12E588u: goto label_12e588;
            case 0x12E58Cu: goto label_12e58c;
            case 0x12E590u: goto label_12e590;
            case 0x12E594u: goto label_12e594;
            case 0x12E598u: goto label_12e598;
            case 0x12E59Cu: goto label_12e59c;
            case 0x12E5A0u: goto label_12e5a0;
            case 0x12E5A4u: goto label_12e5a4;
            case 0x12E5A8u: goto label_12e5a8;
            case 0x12E5ACu: goto label_12e5ac;
            case 0x12E5B0u: goto label_12e5b0;
            case 0x12E5B4u: goto label_12e5b4;
            case 0x12E5B8u: goto label_12e5b8;
            case 0x12E5BCu: goto label_12e5bc;
            case 0x12E5C0u: goto label_12e5c0;
            case 0x12E5C4u: goto label_12e5c4;
            case 0x12E5C8u: goto label_12e5c8;
            case 0x12E5CCu: goto label_12e5cc;
            case 0x12E5D0u: goto label_12e5d0;
            case 0x12E5D4u: goto label_12e5d4;
            case 0x12E5D8u: goto label_12e5d8;
            case 0x12E5DCu: goto label_12e5dc;
            case 0x12E5E0u: goto label_12e5e0;
            case 0x12E5E4u: goto label_12e5e4;
            case 0x12E5E8u: goto label_12e5e8;
            case 0x12E5ECu: goto label_12e5ec;
            case 0x12E5F0u: goto label_12e5f0;
            case 0x12E5F4u: goto label_12e5f4;
            case 0x12E5F8u: goto label_12e5f8;
            case 0x12E5FCu: goto label_12e5fc;
            case 0x12E600u: goto label_12e600;
            case 0x12E604u: goto label_12e604;
            case 0x12E608u: goto label_12e608;
            case 0x12E60Cu: goto label_12e60c;
            case 0x12E610u: goto label_12e610;
            case 0x12E614u: goto label_12e614;
            case 0x12E618u: goto label_12e618;
            case 0x12E61Cu: goto label_12e61c;
            case 0x12E620u: goto label_12e620;
            case 0x12E624u: goto label_12e624;
            case 0x12E628u: goto label_12e628;
            case 0x12E62Cu: goto label_12e62c;
            case 0x12E630u: goto label_12e630;
            case 0x12E634u: goto label_12e634;
            case 0x12E638u: goto label_12e638;
            case 0x12E63Cu: goto label_12e63c;
            case 0x12E640u: goto label_12e640;
            case 0x12E644u: goto label_12e644;
            case 0x12E648u: goto label_12e648;
            case 0x12E64Cu: goto label_12e64c;
            case 0x12E650u: goto label_12e650;
            case 0x12E654u: goto label_12e654;
            case 0x12E658u: goto label_12e658;
            case 0x12E65Cu: goto label_12e65c;
            case 0x12E660u: goto label_12e660;
            case 0x12E664u: goto label_12e664;
            case 0x12E668u: goto label_12e668;
            case 0x12E66Cu: goto label_12e66c;
            case 0x12E670u: goto label_12e670;
            case 0x12E674u: goto label_12e674;
            case 0x12E678u: goto label_12e678;
            case 0x12E67Cu: goto label_12e67c;
            case 0x12E680u: goto label_12e680;
            case 0x12E684u: goto label_12e684;
            case 0x12E688u: goto label_12e688;
            case 0x12E68Cu: goto label_12e68c;
            case 0x12E690u: goto label_12e690;
            case 0x12E694u: goto label_12e694;
            case 0x12E698u: goto label_12e698;
            case 0x12E69Cu: goto label_12e69c;
            case 0x12E6A0u: goto label_12e6a0;
            case 0x12E6A4u: goto label_12e6a4;
            case 0x12E6A8u: goto label_12e6a8;
            case 0x12E6ACu: goto label_12e6ac;
            case 0x12E6B0u: goto label_12e6b0;
            case 0x12E6B4u: goto label_12e6b4;
            case 0x12E6B8u: goto label_12e6b8;
            case 0x12E6BCu: goto label_12e6bc;
            case 0x12E6C0u: goto label_12e6c0;
            case 0x12E6C4u: goto label_12e6c4;
            case 0x12E6C8u: goto label_12e6c8;
            case 0x12E6CCu: goto label_12e6cc;
            case 0x12E6D0u: goto label_12e6d0;
            case 0x12E6D4u: goto label_12e6d4;
            case 0x12E6D8u: goto label_12e6d8;
            case 0x12E6DCu: goto label_12e6dc;
            case 0x12E6E0u: goto label_12e6e0;
            case 0x12E6E4u: goto label_12e6e4;
            case 0x12E6E8u: goto label_12e6e8;
            case 0x12E6ECu: goto label_12e6ec;
            case 0x12E6F0u: goto label_12e6f0;
            case 0x12E6F4u: goto label_12e6f4;
            case 0x12E6F8u: goto label_12e6f8;
            case 0x12E6FCu: goto label_12e6fc;
            case 0x12E700u: goto label_12e700;
            case 0x12E704u: goto label_12e704;
            case 0x12E708u: goto label_12e708;
            case 0x12E70Cu: goto label_12e70c;
            case 0x12E710u: goto label_12e710;
            case 0x12E714u: goto label_12e714;
            case 0x12E718u: goto label_12e718;
            case 0x12E71Cu: goto label_12e71c;
            case 0x12E720u: goto label_12e720;
            case 0x12E724u: goto label_12e724;
            case 0x12E728u: goto label_12e728;
            case 0x12E72Cu: goto label_12e72c;
            case 0x12E730u: goto label_12e730;
            case 0x12E734u: goto label_12e734;
            case 0x12E738u: goto label_12e738;
            case 0x12E73Cu: goto label_12e73c;
            case 0x12E740u: goto label_12e740;
            case 0x12E744u: goto label_12e744;
            case 0x12E748u: goto label_12e748;
            case 0x12E74Cu: goto label_12e74c;
            case 0x12E750u: goto label_12e750;
            case 0x12E754u: goto label_12e754;
            case 0x12E758u: goto label_12e758;
            case 0x12E75Cu: goto label_12e75c;
            case 0x12E760u: goto label_12e760;
            case 0x12E764u: goto label_12e764;
            case 0x12E768u: goto label_12e768;
            case 0x12E76Cu: goto label_12e76c;
            case 0x12E770u: goto label_12e770;
            case 0x12E774u: goto label_12e774;
            case 0x12E778u: goto label_12e778;
            case 0x12E77Cu: goto label_12e77c;
            case 0x12E780u: goto label_12e780;
            case 0x12E784u: goto label_12e784;
            case 0x12E788u: goto label_12e788;
            case 0x12E78Cu: goto label_12e78c;
            case 0x12E790u: goto label_12e790;
            case 0x12E794u: goto label_12e794;
            case 0x12E798u: goto label_12e798;
            case 0x12E79Cu: goto label_12e79c;
            case 0x12E7A0u: goto label_12e7a0;
            case 0x12E7A4u: goto label_12e7a4;
            case 0x12E7A8u: goto label_12e7a8;
            case 0x12E7ACu: goto label_12e7ac;
            case 0x12E7B0u: goto label_12e7b0;
            case 0x12E7B4u: goto label_12e7b4;
            case 0x12E7B8u: goto label_12e7b8;
            case 0x12E7BCu: goto label_12e7bc;
            case 0x12E7C0u: goto label_12e7c0;
            case 0x12E7C4u: goto label_12e7c4;
            case 0x12E7C8u: goto label_12e7c8;
            case 0x12E7CCu: goto label_12e7cc;
            case 0x12E7D0u: goto label_12e7d0;
            case 0x12E7D4u: goto label_12e7d4;
            case 0x12E7D8u: goto label_12e7d8;
            case 0x12E7DCu: goto label_12e7dc;
            case 0x12E7E0u: goto label_12e7e0;
            case 0x12E7E4u: goto label_12e7e4;
            case 0x12E7E8u: goto label_12e7e8;
            case 0x12E7ECu: goto label_12e7ec;
            case 0x12E7F0u: goto label_12e7f0;
            case 0x12E7F4u: goto label_12e7f4;
            case 0x12E7F8u: goto label_12e7f8;
            case 0x12E7FCu: goto label_12e7fc;
            case 0x12E800u: goto label_12e800;
            case 0x12E804u: goto label_12e804;
            case 0x12E808u: goto label_12e808;
            case 0x12E80Cu: goto label_12e80c;
            case 0x12E810u: goto label_12e810;
            case 0x12E814u: goto label_12e814;
            case 0x12E818u: goto label_12e818;
            case 0x12E81Cu: goto label_12e81c;
            case 0x12E820u: goto label_12e820;
            case 0x12E824u: goto label_12e824;
            case 0x12E828u: goto label_12e828;
            case 0x12E82Cu: goto label_12e82c;
            case 0x12E830u: goto label_12e830;
            case 0x12E834u: goto label_12e834;
            case 0x12E838u: goto label_12e838;
            case 0x12E83Cu: goto label_12e83c;
            case 0x12E840u: goto label_12e840;
            case 0x12E844u: goto label_12e844;
            case 0x12E848u: goto label_12e848;
            case 0x12E84Cu: goto label_12e84c;
            case 0x12E850u: goto label_12e850;
            case 0x12E854u: goto label_12e854;
            case 0x12E858u: goto label_12e858;
            case 0x12E85Cu: goto label_12e85c;
            case 0x12E860u: goto label_12e860;
            case 0x12E864u: goto label_12e864;
            case 0x12E868u: goto label_12e868;
            case 0x12E86Cu: goto label_12e86c;
            case 0x12E870u: goto label_12e870;
            case 0x12E874u: goto label_12e874;
            case 0x12E878u: goto label_12e878;
            case 0x12E87Cu: goto label_12e87c;
            case 0x12E880u: goto label_12e880;
            case 0x12E884u: goto label_12e884;
            case 0x12E888u: goto label_12e888;
            case 0x12E88Cu: goto label_12e88c;
            case 0x12E890u: goto label_12e890;
            case 0x12E894u: goto label_12e894;
            case 0x12E898u: goto label_12e898;
            case 0x12E89Cu: goto label_12e89c;
            case 0x12E8A0u: goto label_12e8a0;
            case 0x12E8A4u: goto label_12e8a4;
            case 0x12E8A8u: goto label_12e8a8;
            case 0x12E8ACu: goto label_12e8ac;
            case 0x12E8B0u: goto label_12e8b0;
            case 0x12E8B4u: goto label_12e8b4;
            case 0x12E8B8u: goto label_12e8b8;
            case 0x12E8BCu: goto label_12e8bc;
            case 0x12E8C0u: goto label_12e8c0;
            case 0x12E8C4u: goto label_12e8c4;
            case 0x12E8C8u: goto label_12e8c8;
            case 0x12E8CCu: goto label_12e8cc;
            case 0x12E8D0u: goto label_12e8d0;
            case 0x12E8D4u: goto label_12e8d4;
            case 0x12E8D8u: goto label_12e8d8;
            case 0x12E8DCu: goto label_12e8dc;
            case 0x12E8E0u: goto label_12e8e0;
            case 0x12E8E4u: goto label_12e8e4;
            case 0x12E8E8u: goto label_12e8e8;
            case 0x12E8ECu: goto label_12e8ec;
            case 0x12E8F0u: goto label_12e8f0;
            case 0x12E8F4u: goto label_12e8f4;
            case 0x12E8F8u: goto label_12e8f8;
            case 0x12E8FCu: goto label_12e8fc;
            case 0x12E900u: goto label_12e900;
            case 0x12E904u: goto label_12e904;
            case 0x12E908u: goto label_12e908;
            case 0x12E90Cu: goto label_12e90c;
            case 0x12E910u: goto label_12e910;
            case 0x12E914u: goto label_12e914;
            case 0x12E918u: goto label_12e918;
            case 0x12E91Cu: goto label_12e91c;
            case 0x12E920u: goto label_12e920;
            case 0x12E924u: goto label_12e924;
            case 0x12E928u: goto label_12e928;
            case 0x12E92Cu: goto label_12e92c;
            case 0x12E930u: goto label_12e930;
            case 0x12E934u: goto label_12e934;
            case 0x12E938u: goto label_12e938;
            case 0x12E93Cu: goto label_12e93c;
            case 0x12E940u: goto label_12e940;
            case 0x12E944u: goto label_12e944;
            case 0x12E948u: goto label_12e948;
            case 0x12E94Cu: goto label_12e94c;
            case 0x12E950u: goto label_12e950;
            case 0x12E954u: goto label_12e954;
            case 0x12E958u: goto label_12e958;
            case 0x12E95Cu: goto label_12e95c;
            case 0x12E960u: goto label_12e960;
            case 0x12E964u: goto label_12e964;
            case 0x12E968u: goto label_12e968;
            case 0x12E96Cu: goto label_12e96c;
            case 0x12E970u: goto label_12e970;
            case 0x12E974u: goto label_12e974;
            case 0x12E978u: goto label_12e978;
            case 0x12E97Cu: goto label_12e97c;
            case 0x12E980u: goto label_12e980;
            case 0x12E984u: goto label_12e984;
            case 0x12E988u: goto label_12e988;
            case 0x12E98Cu: goto label_12e98c;
            case 0x12E990u: goto label_12e990;
            case 0x12E994u: goto label_12e994;
            case 0x12E998u: goto label_12e998;
            case 0x12E99Cu: goto label_12e99c;
            case 0x12E9A0u: goto label_12e9a0;
            case 0x12E9A4u: goto label_12e9a4;
            case 0x12E9A8u: goto label_12e9a8;
            case 0x12E9ACu: goto label_12e9ac;
            case 0x12E9B0u: goto label_12e9b0;
            case 0x12E9B4u: goto label_12e9b4;
            case 0x12E9B8u: goto label_12e9b8;
            case 0x12E9BCu: goto label_12e9bc;
            case 0x12E9C0u: goto label_12e9c0;
            case 0x12E9C4u: goto label_12e9c4;
            case 0x12E9C8u: goto label_12e9c8;
            case 0x12E9CCu: goto label_12e9cc;
            case 0x12E9D0u: goto label_12e9d0;
            case 0x12E9D4u: goto label_12e9d4;
            case 0x12E9D8u: goto label_12e9d8;
            case 0x12E9DCu: goto label_12e9dc;
            case 0x12E9E0u: goto label_12e9e0;
            case 0x12E9E4u: goto label_12e9e4;
            case 0x12E9E8u: goto label_12e9e8;
            case 0x12E9ECu: goto label_12e9ec;
            case 0x12E9F0u: goto label_12e9f0;
            case 0x12E9F4u: goto label_12e9f4;
            case 0x12E9F8u: goto label_12e9f8;
            case 0x12E9FCu: goto label_12e9fc;
            case 0x12EA00u: goto label_12ea00;
            case 0x12EA04u: goto label_12ea04;
            case 0x12EA08u: goto label_12ea08;
            case 0x12EA0Cu: goto label_12ea0c;
            case 0x12EA10u: goto label_12ea10;
            case 0x12EA14u: goto label_12ea14;
            case 0x12EA18u: goto label_12ea18;
            case 0x12EA1Cu: goto label_12ea1c;
            case 0x12EA20u: goto label_12ea20;
            case 0x12EA24u: goto label_12ea24;
            case 0x12EA28u: goto label_12ea28;
            case 0x12EA2Cu: goto label_12ea2c;
            case 0x12EA30u: goto label_12ea30;
            case 0x12EA34u: goto label_12ea34;
            case 0x12EA38u: goto label_12ea38;
            case 0x12EA3Cu: goto label_12ea3c;
            case 0x12EA40u: goto label_12ea40;
            case 0x12EA44u: goto label_12ea44;
            case 0x12EA48u: goto label_12ea48;
            case 0x12EA4Cu: goto label_12ea4c;
            case 0x12EA50u: goto label_12ea50;
            case 0x12EA54u: goto label_12ea54;
            case 0x12EA58u: goto label_12ea58;
            case 0x12EA5Cu: goto label_12ea5c;
            case 0x12EA60u: goto label_12ea60;
            case 0x12EA64u: goto label_12ea64;
            case 0x12EA68u: goto label_12ea68;
            case 0x12EA6Cu: goto label_12ea6c;
            case 0x12EA70u: goto label_12ea70;
            case 0x12EA74u: goto label_12ea74;
            case 0x12EA78u: goto label_12ea78;
            case 0x12EA7Cu: goto label_12ea7c;
            case 0x12EA80u: goto label_12ea80;
            case 0x12EA84u: goto label_12ea84;
            case 0x12EA88u: goto label_12ea88;
            case 0x12EA8Cu: goto label_12ea8c;
            case 0x12EA90u: goto label_12ea90;
            case 0x12EA94u: goto label_12ea94;
            case 0x12EA98u: goto label_12ea98;
            case 0x12EA9Cu: goto label_12ea9c;
            case 0x12EAA0u: goto label_12eaa0;
            case 0x12EAA4u: goto label_12eaa4;
            case 0x12EAA8u: goto label_12eaa8;
            case 0x12EAACu: goto label_12eaac;
            case 0x12EAB0u: goto label_12eab0;
            case 0x12EAB4u: goto label_12eab4;
            case 0x12EAB8u: goto label_12eab8;
            case 0x12EABCu: goto label_12eabc;
            case 0x12EAC0u: goto label_12eac0;
            case 0x12EAC4u: goto label_12eac4;
            case 0x12EAC8u: goto label_12eac8;
            case 0x12EACCu: goto label_12eacc;
            case 0x12EAD0u: goto label_12ead0;
            case 0x12EAD4u: goto label_12ead4;
            case 0x12EAD8u: goto label_12ead8;
            case 0x12EADCu: goto label_12eadc;
            case 0x12EAE0u: goto label_12eae0;
            case 0x12EAE4u: goto label_12eae4;
            case 0x12EAE8u: goto label_12eae8;
            case 0x12EAECu: goto label_12eaec;
            case 0x12EAF0u: goto label_12eaf0;
            case 0x12EAF4u: goto label_12eaf4;
            case 0x12EAF8u: goto label_12eaf8;
            case 0x12EAFCu: goto label_12eafc;
            case 0x12EB00u: goto label_12eb00;
            case 0x12EB04u: goto label_12eb04;
            case 0x12EB08u: goto label_12eb08;
            case 0x12EB0Cu: goto label_12eb0c;
            case 0x12EB10u: goto label_12eb10;
            case 0x12EB14u: goto label_12eb14;
            case 0x12EB18u: goto label_12eb18;
            case 0x12EB1Cu: goto label_12eb1c;
            case 0x12EB20u: goto label_12eb20;
            case 0x12EB24u: goto label_12eb24;
            case 0x12EB28u: goto label_12eb28;
            case 0x12EB2Cu: goto label_12eb2c;
            case 0x12EB30u: goto label_12eb30;
            case 0x12EB34u: goto label_12eb34;
            case 0x12EB38u: goto label_12eb38;
            case 0x12EB3Cu: goto label_12eb3c;
            case 0x12EB40u: goto label_12eb40;
            case 0x12EB44u: goto label_12eb44;
            case 0x12EB48u: goto label_12eb48;
            case 0x12EB4Cu: goto label_12eb4c;
            case 0x12EB50u: goto label_12eb50;
            case 0x12EB54u: goto label_12eb54;
            case 0x12EB58u: goto label_12eb58;
            case 0x12EB5Cu: goto label_12eb5c;
            case 0x12EB60u: goto label_12eb60;
            case 0x12EB64u: goto label_12eb64;
            case 0x12EB68u: goto label_12eb68;
            case 0x12EB6Cu: goto label_12eb6c;
            case 0x12EB70u: goto label_12eb70;
            case 0x12EB74u: goto label_12eb74;
            case 0x12EB78u: goto label_12eb78;
            case 0x12EB7Cu: goto label_12eb7c;
            case 0x12EB80u: goto label_12eb80;
            case 0x12EB84u: goto label_12eb84;
            case 0x12EB88u: goto label_12eb88;
            case 0x12EB8Cu: goto label_12eb8c;
            case 0x12EB90u: goto label_12eb90;
            case 0x12EB94u: goto label_12eb94;
            case 0x12EB98u: goto label_12eb98;
            case 0x12EB9Cu: goto label_12eb9c;
            case 0x12EBA0u: goto label_12eba0;
            case 0x12EBA4u: goto label_12eba4;
            case 0x12EBA8u: goto label_12eba8;
            case 0x12EBACu: goto label_12ebac;
            case 0x12EBB0u: goto label_12ebb0;
            case 0x12EBB4u: goto label_12ebb4;
            case 0x12EBB8u: goto label_12ebb8;
            case 0x12EBBCu: goto label_12ebbc;
            case 0x12EBC0u: goto label_12ebc0;
            case 0x12EBC4u: goto label_12ebc4;
            case 0x12EBC8u: goto label_12ebc8;
            case 0x12EBCCu: goto label_12ebcc;
            case 0x12EBD0u: goto label_12ebd0;
            case 0x12EBD4u: goto label_12ebd4;
            case 0x12EBD8u: goto label_12ebd8;
            case 0x12EBDCu: goto label_12ebdc;
            case 0x12EBE0u: goto label_12ebe0;
            case 0x12EBE4u: goto label_12ebe4;
            case 0x12EBE8u: goto label_12ebe8;
            case 0x12EBECu: goto label_12ebec;
            case 0x12EBF0u: goto label_12ebf0;
            case 0x12EBF4u: goto label_12ebf4;
            case 0x12EBF8u: goto label_12ebf8;
            case 0x12EBFCu: goto label_12ebfc;
            case 0x12EC00u: goto label_12ec00;
            case 0x12EC04u: goto label_12ec04;
            case 0x12EC08u: goto label_12ec08;
            case 0x12EC0Cu: goto label_12ec0c;
            case 0x12EC10u: goto label_12ec10;
            case 0x12EC14u: goto label_12ec14;
            case 0x12EC18u: goto label_12ec18;
            case 0x12EC1Cu: goto label_12ec1c;
            case 0x12EC20u: goto label_12ec20;
            case 0x12EC24u: goto label_12ec24;
            case 0x12EC28u: goto label_12ec28;
            case 0x12EC2Cu: goto label_12ec2c;
            case 0x12EC30u: goto label_12ec30;
            case 0x12EC34u: goto label_12ec34;
            case 0x12EC38u: goto label_12ec38;
            case 0x12EC3Cu: goto label_12ec3c;
            case 0x12EC40u: goto label_12ec40;
            case 0x12EC44u: goto label_12ec44;
            case 0x12EC48u: goto label_12ec48;
            case 0x12EC4Cu: goto label_12ec4c;
            case 0x12EC50u: goto label_12ec50;
            case 0x12EC54u: goto label_12ec54;
            case 0x12EC58u: goto label_12ec58;
            case 0x12EC5Cu: goto label_12ec5c;
            case 0x12EC60u: goto label_12ec60;
            case 0x12EC64u: goto label_12ec64;
            case 0x12EC68u: goto label_12ec68;
            case 0x12EC6Cu: goto label_12ec6c;
            case 0x12EC70u: goto label_12ec70;
            case 0x12EC74u: goto label_12ec74;
            case 0x12EC78u: goto label_12ec78;
            case 0x12EC7Cu: goto label_12ec7c;
            case 0x12EC80u: goto label_12ec80;
            case 0x12EC84u: goto label_12ec84;
            case 0x12EC88u: goto label_12ec88;
            case 0x12EC8Cu: goto label_12ec8c;
            case 0x12EC90u: goto label_12ec90;
            case 0x12EC94u: goto label_12ec94;
            case 0x12EC98u: goto label_12ec98;
            case 0x12EC9Cu: goto label_12ec9c;
            case 0x12ECA0u: goto label_12eca0;
            case 0x12ECA4u: goto label_12eca4;
            case 0x12ECA8u: goto label_12eca8;
            case 0x12ECACu: goto label_12ecac;
            case 0x12ECB0u: goto label_12ecb0;
            case 0x12ECB4u: goto label_12ecb4;
            case 0x12ECB8u: goto label_12ecb8;
            case 0x12ECBCu: goto label_12ecbc;
            case 0x12ECC0u: goto label_12ecc0;
            case 0x12ECC4u: goto label_12ecc4;
            case 0x12ECC8u: goto label_12ecc8;
            case 0x12ECCCu: goto label_12eccc;
            case 0x12ECD0u: goto label_12ecd0;
            case 0x12ECD4u: goto label_12ecd4;
            case 0x12ECD8u: goto label_12ecd8;
            case 0x12ECDCu: goto label_12ecdc;
            case 0x12ECE0u: goto label_12ece0;
            case 0x12ECE4u: goto label_12ece4;
            case 0x12ECE8u: goto label_12ece8;
            case 0x12ECECu: goto label_12ecec;
            case 0x12ECF0u: goto label_12ecf0;
            case 0x12ECF4u: goto label_12ecf4;
            case 0x12ECF8u: goto label_12ecf8;
            case 0x12ECFCu: goto label_12ecfc;
            case 0x12ED00u: goto label_12ed00;
            case 0x12ED04u: goto label_12ed04;
            case 0x12ED08u: goto label_12ed08;
            case 0x12ED0Cu: goto label_12ed0c;
            case 0x12ED10u: goto label_12ed10;
            case 0x12ED14u: goto label_12ed14;
            case 0x12ED18u: goto label_12ed18;
            case 0x12ED1Cu: goto label_12ed1c;
            case 0x12ED20u: goto label_12ed20;
            case 0x12ED24u: goto label_12ed24;
            case 0x12ED28u: goto label_12ed28;
            case 0x12ED2Cu: goto label_12ed2c;
            case 0x12ED30u: goto label_12ed30;
            case 0x12ED34u: goto label_12ed34;
            case 0x12ED38u: goto label_12ed38;
            case 0x12ED3Cu: goto label_12ed3c;
            case 0x12ED40u: goto label_12ed40;
            case 0x12ED44u: goto label_12ed44;
            case 0x12ED48u: goto label_12ed48;
            case 0x12ED4Cu: goto label_12ed4c;
            case 0x12ED50u: goto label_12ed50;
            case 0x12ED54u: goto label_12ed54;
            case 0x12ED58u: goto label_12ed58;
            case 0x12ED5Cu: goto label_12ed5c;
            case 0x12ED60u: goto label_12ed60;
            case 0x12ED64u: goto label_12ed64;
            case 0x12ED68u: goto label_12ed68;
            case 0x12ED6Cu: goto label_12ed6c;
            case 0x12ED70u: goto label_12ed70;
            case 0x12ED74u: goto label_12ed74;
            case 0x12ED78u: goto label_12ed78;
            case 0x12ED7Cu: goto label_12ed7c;
            case 0x12ED80u: goto label_12ed80;
            case 0x12ED84u: goto label_12ed84;
            case 0x12ED88u: goto label_12ed88;
            case 0x12ED8Cu: goto label_12ed8c;
            case 0x12ED90u: goto label_12ed90;
            case 0x12ED94u: goto label_12ed94;
            case 0x12ED98u: goto label_12ed98;
            case 0x12ED9Cu: goto label_12ed9c;
            case 0x12EDA0u: goto label_12eda0;
            case 0x12EDA4u: goto label_12eda4;
            case 0x12EDA8u: goto label_12eda8;
            case 0x12EDACu: goto label_12edac;
            case 0x12EDB0u: goto label_12edb0;
            case 0x12EDB4u: goto label_12edb4;
            case 0x12EDB8u: goto label_12edb8;
            case 0x12EDBCu: goto label_12edbc;
            case 0x12EDC0u: goto label_12edc0;
            case 0x12EDC4u: goto label_12edc4;
            case 0x12EDC8u: goto label_12edc8;
            case 0x12EDCCu: goto label_12edcc;
            case 0x12EDD0u: goto label_12edd0;
            case 0x12EDD4u: goto label_12edd4;
            case 0x12EDD8u: goto label_12edd8;
            case 0x12EDDCu: goto label_12eddc;
            case 0x12EDE0u: goto label_12ede0;
            case 0x12EDE4u: goto label_12ede4;
            case 0x12EDE8u: goto label_12ede8;
            case 0x12EDECu: goto label_12edec;
            case 0x12EDF0u: goto label_12edf0;
            case 0x12EDF4u: goto label_12edf4;
            case 0x12EDF8u: goto label_12edf8;
            case 0x12EDFCu: goto label_12edfc;
            case 0x12EE00u: goto label_12ee00;
            case 0x12EE04u: goto label_12ee04;
            case 0x12EE08u: goto label_12ee08;
            case 0x12EE0Cu: goto label_12ee0c;
            case 0x12EE10u: goto label_12ee10;
            case 0x12EE14u: goto label_12ee14;
            case 0x12EE18u: goto label_12ee18;
            case 0x12EE1Cu: goto label_12ee1c;
            case 0x12EE20u: goto label_12ee20;
            case 0x12EE24u: goto label_12ee24;
            case 0x12EE28u: goto label_12ee28;
            case 0x12EE2Cu: goto label_12ee2c;
            case 0x12EE30u: goto label_12ee30;
            case 0x12EE34u: goto label_12ee34;
            case 0x12EE38u: goto label_12ee38;
            case 0x12EE3Cu: goto label_12ee3c;
            case 0x12EE40u: goto label_12ee40;
            case 0x12EE44u: goto label_12ee44;
            case 0x12EE48u: goto label_12ee48;
            case 0x12EE4Cu: goto label_12ee4c;
            case 0x12EE50u: goto label_12ee50;
            case 0x12EE54u: goto label_12ee54;
            case 0x12EE58u: goto label_12ee58;
            case 0x12EE5Cu: goto label_12ee5c;
            case 0x12EE60u: goto label_12ee60;
            case 0x12EE64u: goto label_12ee64;
            case 0x12EE68u: goto label_12ee68;
            case 0x12EE6Cu: goto label_12ee6c;
            case 0x12EE70u: goto label_12ee70;
            case 0x12EE74u: goto label_12ee74;
            case 0x12EE78u: goto label_12ee78;
            case 0x12EE7Cu: goto label_12ee7c;
            case 0x12EE80u: goto label_12ee80;
            case 0x12EE84u: goto label_12ee84;
            case 0x12EE88u: goto label_12ee88;
            case 0x12EE8Cu: goto label_12ee8c;
            case 0x12EE90u: goto label_12ee90;
            case 0x12EE94u: goto label_12ee94;
            case 0x12EE98u: goto label_12ee98;
            case 0x12EE9Cu: goto label_12ee9c;
            case 0x12EEA0u: goto label_12eea0;
            case 0x12EEA4u: goto label_12eea4;
            case 0x12EEA8u: goto label_12eea8;
            case 0x12EEACu: goto label_12eeac;
            case 0x12EEB0u: goto label_12eeb0;
            case 0x12EEB4u: goto label_12eeb4;
            case 0x12EEB8u: goto label_12eeb8;
            case 0x12EEBCu: goto label_12eebc;
            case 0x12EEC0u: goto label_12eec0;
            case 0x12EEC4u: goto label_12eec4;
            case 0x12EEC8u: goto label_12eec8;
            case 0x12EECCu: goto label_12eecc;
            case 0x12EED0u: goto label_12eed0;
            case 0x12EED4u: goto label_12eed4;
            case 0x12EED8u: goto label_12eed8;
            case 0x12EEDCu: goto label_12eedc;
            case 0x12EEE0u: goto label_12eee0;
            case 0x12EEE4u: goto label_12eee4;
            case 0x12EEE8u: goto label_12eee8;
            case 0x12EEECu: goto label_12eeec;
            case 0x12EEF0u: goto label_12eef0;
            case 0x12EEF4u: goto label_12eef4;
            case 0x12EEF8u: goto label_12eef8;
            case 0x12EEFCu: goto label_12eefc;
            case 0x12EF00u: goto label_12ef00;
            case 0x12EF04u: goto label_12ef04;
            case 0x12EF08u: goto label_12ef08;
            case 0x12EF0Cu: goto label_12ef0c;
            case 0x12EF10u: goto label_12ef10;
            case 0x12EF14u: goto label_12ef14;
            case 0x12EF18u: goto label_12ef18;
            case 0x12EF1Cu: goto label_12ef1c;
            case 0x12EF20u: goto label_12ef20;
            case 0x12EF24u: goto label_12ef24;
            case 0x12EF28u: goto label_12ef28;
            case 0x12EF2Cu: goto label_12ef2c;
            case 0x12EF30u: goto label_12ef30;
            case 0x12EF34u: goto label_12ef34;
            case 0x12EF38u: goto label_12ef38;
            case 0x12EF3Cu: goto label_12ef3c;
            case 0x12EF40u: goto label_12ef40;
            case 0x12EF44u: goto label_12ef44;
            case 0x12EF48u: goto label_12ef48;
            case 0x12EF4Cu: goto label_12ef4c;
            case 0x12EF50u: goto label_12ef50;
            case 0x12EF54u: goto label_12ef54;
            case 0x12EF58u: goto label_12ef58;
            case 0x12EF5Cu: goto label_12ef5c;
            case 0x12EF60u: goto label_12ef60;
            case 0x12EF64u: goto label_12ef64;
            case 0x12EF68u: goto label_12ef68;
            case 0x12EF6Cu: goto label_12ef6c;
            case 0x12EF70u: goto label_12ef70;
            case 0x12EF74u: goto label_12ef74;
            case 0x12EF78u: goto label_12ef78;
            case 0x12EF7Cu: goto label_12ef7c;
            case 0x12EF80u: goto label_12ef80;
            case 0x12EF84u: goto label_12ef84;
            case 0x12EF88u: goto label_12ef88;
            case 0x12EF8Cu: goto label_12ef8c;
            case 0x12EF90u: goto label_12ef90;
            case 0x12EF94u: goto label_12ef94;
            case 0x12EF98u: goto label_12ef98;
            case 0x12EF9Cu: goto label_12ef9c;
            case 0x12EFA0u: goto label_12efa0;
            case 0x12EFA4u: goto label_12efa4;
            case 0x12EFA8u: goto label_12efa8;
            case 0x12EFACu: goto label_12efac;
            case 0x12EFB0u: goto label_12efb0;
            case 0x12EFB4u: goto label_12efb4;
            case 0x12EFB8u: goto label_12efb8;
            case 0x12EFBCu: goto label_12efbc;
            case 0x12EFC0u: goto label_12efc0;
            case 0x12EFC4u: goto label_12efc4;
            case 0x12EFC8u: goto label_12efc8;
            case 0x12EFCCu: goto label_12efcc;
            case 0x12EFD0u: goto label_12efd0;
            case 0x12EFD4u: goto label_12efd4;
            case 0x12EFD8u: goto label_12efd8;
            case 0x12EFDCu: goto label_12efdc;
            case 0x12EFE0u: goto label_12efe0;
            case 0x12EFE4u: goto label_12efe4;
            case 0x12EFE8u: goto label_12efe8;
            case 0x12EFECu: goto label_12efec;
            case 0x12EFF0u: goto label_12eff0;
            case 0x12EFF4u: goto label_12eff4;
            case 0x12EFF8u: goto label_12eff8;
            case 0x12EFFCu: goto label_12effc;
            case 0x12F000u: goto label_12f000;
            case 0x12F004u: goto label_12f004;
            case 0x12F008u: goto label_12f008;
            case 0x12F00Cu: goto label_12f00c;
            case 0x12F010u: goto label_12f010;
            case 0x12F014u: goto label_12f014;
            case 0x12F018u: goto label_12f018;
            case 0x12F01Cu: goto label_12f01c;
            case 0x12F020u: goto label_12f020;
            case 0x12F024u: goto label_12f024;
            case 0x12F028u: goto label_12f028;
            case 0x12F02Cu: goto label_12f02c;
            case 0x12F030u: goto label_12f030;
            case 0x12F034u: goto label_12f034;
            case 0x12F038u: goto label_12f038;
            case 0x12F03Cu: goto label_12f03c;
            case 0x12F040u: goto label_12f040;
            case 0x12F044u: goto label_12f044;
            case 0x12F048u: goto label_12f048;
            case 0x12F04Cu: goto label_12f04c;
            case 0x12F050u: goto label_12f050;
            case 0x12F054u: goto label_12f054;
            case 0x12F058u: goto label_12f058;
            case 0x12F05Cu: goto label_12f05c;
            case 0x12F060u: goto label_12f060;
            case 0x12F064u: goto label_12f064;
            case 0x12F068u: goto label_12f068;
            case 0x12F06Cu: goto label_12f06c;
            case 0x12F070u: goto label_12f070;
            case 0x12F074u: goto label_12f074;
            case 0x12F078u: goto label_12f078;
            case 0x12F07Cu: goto label_12f07c;
            case 0x12F080u: goto label_12f080;
            case 0x12F084u: goto label_12f084;
            case 0x12F088u: goto label_12f088;
            case 0x12F08Cu: goto label_12f08c;
            case 0x12F090u: goto label_12f090;
            case 0x12F094u: goto label_12f094;
            case 0x12F098u: goto label_12f098;
            case 0x12F09Cu: goto label_12f09c;
            case 0x12F0A0u: goto label_12f0a0;
            case 0x12F0A4u: goto label_12f0a4;
            case 0x12F0A8u: goto label_12f0a8;
            case 0x12F0ACu: goto label_12f0ac;
            case 0x12F0B0u: goto label_12f0b0;
            case 0x12F0B4u: goto label_12f0b4;
            case 0x12F0B8u: goto label_12f0b8;
            case 0x12F0BCu: goto label_12f0bc;
            case 0x12F0C0u: goto label_12f0c0;
            case 0x12F0C4u: goto label_12f0c4;
            case 0x12F0C8u: goto label_12f0c8;
            case 0x12F0CCu: goto label_12f0cc;
            case 0x12F0D0u: goto label_12f0d0;
            case 0x12F0D4u: goto label_12f0d4;
            case 0x12F0D8u: goto label_12f0d8;
            case 0x12F0DCu: goto label_12f0dc;
            case 0x12F0E0u: goto label_12f0e0;
            case 0x12F0E4u: goto label_12f0e4;
            case 0x12F0E8u: goto label_12f0e8;
            case 0x12F0ECu: goto label_12f0ec;
            case 0x12F0F0u: goto label_12f0f0;
            default: break;
        }
        return;
    }
label_fallthrough_0x12f0ec:
    ctx->pc = 0x12F0F4u;
}
