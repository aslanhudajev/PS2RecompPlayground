#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: calc_shop_ypos
// Address: 0x289f38 - 0x28a0dc
void calc_shop_ypos_0x289f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x289f38u;

    // 0x289f38: 0x27bdff50
    ctx->pc = 0x289f38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x289f3c: 0xffbf0090
    ctx->pc = 0x289f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x289f40: 0xffbe0080
    ctx->pc = 0x289f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x289f44: 0xffb70070
    ctx->pc = 0x289f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x289f48: 0xffb60060
    ctx->pc = 0x289f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x289f4c: 0xffb50050
    ctx->pc = 0x289f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x289f50: 0xffb40040
    ctx->pc = 0x289f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x289f54: 0xffb30030
    ctx->pc = 0x289f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x289f58: 0xffb20020
    ctx->pc = 0x289f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x289f5c: 0xffb10010
    ctx->pc = 0x289f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x289f60: 0xffb00000
    ctx->pc = 0x289f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x289f64: 0xe7b400a0
    ctx->pc = 0x289f64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x289f68: 0x80982d
    ctx->pc = 0x289f68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f6c: 0x24032b00
    ctx->pc = 0x289f6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x289f70: 0x2631818
    ctx->pc = 0x289f70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x289f74: 0x3c020032
    ctx->pc = 0x289f74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x289f78: 0x24421bc0
    ctx->pc = 0x289f78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x289f7c: 0x62b821
    ctx->pc = 0x289f7cu;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x289f80: 0x902d
    ctx->pc = 0x289f80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f84: 0x3c020035
    ctx->pc = 0x289f84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x289f88: 0x8c42b52c
    ctx->pc = 0x289f88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948140)));
    // 0x289f8c: 0x18400027
    ctx->pc = 0x289F8Cu;
    {
        const bool branch_taken_0x289f8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x289F90u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x289f8c) {
            ctx->pc = 0x28A02Cu;
            goto label_28a02c;
        }
    }
    ctx->pc = 0x289F94u;
    // 0x289f94: 0x13a200
    ctx->pc = 0x289f94u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 19), 8));
    // 0x289f98: 0x3c1e0035
    ctx->pc = 0x289f98u;
    SET_GPR_U32(ctx, 30, ((uint32_t)53 << 16));
    // 0x289f9c: 0x24160050
    ctx->pc = 0x289f9cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 80));
    // 0x289fa0: 0x3c020035
    ctx->pc = 0x289fa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x289fa4: 0x2455b530
    ctx->pc = 0x289fa4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294948144));
    // 0x289fa8: 0x3c013f00
    ctx->pc = 0x289fa8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x289fac: 0x4481a000
    ctx->pc = 0x289facu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x289fb0: 0x111880
    ctx->pc = 0x289fb0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x289fb4: 0x0
    ctx->pc = 0x289fb4u;
    // NOP
label_289fb8:
    // 0x289fb8: 0x741821
    ctx->pc = 0x289fb8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x289fbc: 0x3c040035
    ctx->pc = 0x289fbcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x289fc0: 0x2484c130
    ctx->pc = 0x289fc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951216));
    // 0x289fc4: 0x641021
    ctx->pc = 0x289fc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x289fc8: 0xac520000
    ctx->pc = 0x289fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x289fcc: 0x2362018
    ctx->pc = 0x289fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x289fd0: 0x8fc2b528
    ctx->pc = 0x289fd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4294948136)));
    // 0x289fd4: 0x828021
    ctx->pc = 0x289fd4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x289fd8: 0x751821
    ctx->pc = 0x289fd8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x289fdc: 0xc0b0f3e
    ctx->pc = 0x289FDCu;
    SET_GPR_U32(ctx, 31, 0x289FE4u);
    ctx->pc = 0x289FE0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2C3CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitGetTex_0x2c3cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289FE4u; }
    }
    if (ctx->pc != 0x289FE4u) { return; }
    ctx->pc = 0x289FE4u;
    // 0x289fe4: 0x26430018
    ctx->pc = 0x289fe4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 24));
    // 0x289fe8: 0x28420001
    ctx->pc = 0x289fe8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1));
    // 0x289fec: 0x62900a
    ctx->pc = 0x289fecu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
    // 0x289ff0: 0x82020020
    ctx->pc = 0x289ff0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x289ff4: 0x10400007
    ctx->pc = 0x289FF4u;
    {
        const bool branch_taken_0x289ff4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x289FF8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x289ff4) {
            ctx->pc = 0x28A014u;
            goto label_28a014;
        }
    }
    ctx->pc = 0x289FFCu;
    // 0x289ffc: 0xc60c0040
    ctx->pc = 0x289ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28a000: 0x46146302
    ctx->pc = 0x28a000u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x28a004: 0xc08057e
    ctx->pc = 0x28A004u;
    SET_GPR_U32(ctx, 31, 0x28A00Cu);
    ctx->pc = 0x28A008u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x2015F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        TextHeightMLines_0x2015f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A00Cu; }
    }
    if (ctx->pc != 0x28A00Cu) { return; }
    ctx->pc = 0x28A00Cu;
    // 0x28a00c: 0x2429021
    ctx->pc = 0x28a00cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x28a010: 0x26520010
    ctx->pc = 0x28a010u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
label_28a014:
    // 0x28a014: 0x26310001
    ctx->pc = 0x28a014u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x28a018: 0x3c020035
    ctx->pc = 0x28a018u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28a01c: 0x8c42b52c
    ctx->pc = 0x28a01cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948140)));
    // 0x28a020: 0x222102a
    ctx->pc = 0x28a020u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x28a024: 0x1440ffe4
    ctx->pc = 0x28A024u;
    {
        const bool branch_taken_0x28a024 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28A028u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x28a024) {
            ctx->pc = 0x289FB8u;
            goto label_289fb8;
        }
    }
    ctx->pc = 0x28A02Cu;
label_28a02c:
    // 0x28a02c: 0x3c040035
    ctx->pc = 0x28a02cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28a030: 0x2484c130
    ctx->pc = 0x28a030u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951216));
    // 0x28a034: 0x8ee20984
    ctx->pc = 0x28a034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 2436)));
    // 0x28a038: 0x21080
    ctx->pc = 0x28a038u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x28a03c: 0x131a00
    ctx->pc = 0x28a03cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 8));
    // 0x28a040: 0x431021
    ctx->pc = 0x28a040u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a044: 0x441021
    ctx->pc = 0x28a044u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28a048: 0x8c440000
    ctx->pc = 0x28a048u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a04c: 0x3c020035
    ctx->pc = 0x28a04cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28a050: 0x8c42b52c
    ctx->pc = 0x28a050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948140)));
    // 0x28a054: 0x18400014
    ctx->pc = 0x28A054u;
    {
        const bool branch_taken_0x28a054 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28A058u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28a054) {
            ctx->pc = 0x28A0A8u;
            goto label_28a0a8;
        }
    }
    ctx->pc = 0x28A05Cu;
    // 0x28a05c: 0x3c020035
    ctx->pc = 0x28a05cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28a060: 0x2448c130
    ctx->pc = 0x28a060u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294951216));
    // 0x28a064: 0x24070400
    ctx->pc = 0x28a064u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x28a068: 0x3c020035
    ctx->pc = 0x28a068u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28a06c: 0x8c46b52c
    ctx->pc = 0x28a06cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294948140)));
    // 0x28a070: 0x111080
    ctx->pc = 0x28a070u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x28a074: 0x0
    ctx->pc = 0x28a074u;
    // NOP
label_28a078:
    // 0x28a078: 0x431021
    ctx->pc = 0x28a078u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a07c: 0x482821
    ctx->pc = 0x28a07cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x28a080: 0x8ca20000
    ctx->pc = 0x28a080u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28a084: 0x441023
    ctx->pc = 0x28a084u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28a088: 0xaca20000
    ctx->pc = 0x28a088u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x28a08c: 0x28420401
    ctx->pc = 0x28a08cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1025));
    // 0x28a090: 0x50400001
    ctx->pc = 0x28A090u;
    {
        const bool branch_taken_0x28a090 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28a090) {
            ctx->pc = 0x28A094u;
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
            ctx->pc = 0x28A098u;
            goto label_28a098;
        }
    }
    ctx->pc = 0x28A098u;
label_28a098:
    // 0x28a098: 0x26310001
    ctx->pc = 0x28a098u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x28a09c: 0x226102a
    ctx->pc = 0x28a09cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 6)));
    // 0x28a0a0: 0x1440fff5
    ctx->pc = 0x28A0A0u;
    {
        const bool branch_taken_0x28a0a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28A0A4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x28a0a0) {
            ctx->pc = 0x28A078u;
            goto label_28a078;
        }
    }
    ctx->pc = 0x28A0A8u;
label_28a0a8:
    // 0x28a0a8: 0xdfbf0090
    ctx->pc = 0x28a0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28a0ac: 0xdfbe0080
    ctx->pc = 0x28a0acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28a0b0: 0xdfb70070
    ctx->pc = 0x28a0b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a0b4: 0xdfb60060
    ctx->pc = 0x28a0b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a0b8: 0xdfb50050
    ctx->pc = 0x28a0b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a0bc: 0xdfb40040
    ctx->pc = 0x28a0bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a0c0: 0xdfb30030
    ctx->pc = 0x28a0c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a0c4: 0xdfb20020
    ctx->pc = 0x28a0c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a0c8: 0xdfb10010
    ctx->pc = 0x28a0c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a0cc: 0xdfb00000
    ctx->pc = 0x28a0ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a0d0: 0xc7b400a0
    ctx->pc = 0x28a0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28a0d4: 0x3e00008
    ctx->pc = 0x28A0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A0D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289FB8u: goto label_289fb8;
            case 0x28A014u: goto label_28a014;
            case 0x28A02Cu: goto label_28a02c;
            case 0x28A078u: goto label_28a078;
            case 0x28A098u: goto label_28a098;
            case 0x28A0A8u: goto label_28a0a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28A0DCu;
}
