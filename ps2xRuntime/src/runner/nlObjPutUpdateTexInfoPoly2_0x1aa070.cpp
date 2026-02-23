#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutUpdateTexInfoPoly2
// Address: 0x1aa070 - 0x1aa5ec
void nlObjPutUpdateTexInfoPoly2_0x1aa070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutUpdateTexInfoPoly2");


    ctx->pc = 0x1aa070u;

    // 0x1aa070: 0x27bdfee0
    ctx->pc = 0x1aa070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1aa074: 0x7fbf0090
    ctx->pc = 0x1aa074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1aa078: 0x7fbe0080
    ctx->pc = 0x1aa078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1aa07c: 0x7fb70070
    ctx->pc = 0x1aa07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1aa080: 0x7fb60060
    ctx->pc = 0x1aa080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1aa084: 0x7fb50050
    ctx->pc = 0x1aa084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1aa088: 0x7fb40040
    ctx->pc = 0x1aa088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1aa08c: 0x7fb30030
    ctx->pc = 0x1aa08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1aa090: 0x7fb20020
    ctx->pc = 0x1aa090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aa094: 0x7fb10010
    ctx->pc = 0x1aa094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aa098: 0x7fb00000
    ctx->pc = 0x1aa098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aa09c: 0xafa600ec
    ctx->pc = 0x1aa09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 6));
    // 0x1aa0a0: 0xafa000a0
    ctx->pc = 0x1aa0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1aa0a4: 0x8c860000
    ctx->pc = 0x1aa0a4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aa0a8: 0x24031000
    ctx->pc = 0x1aa0a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1aa0ac: 0x7100a628
    ctx->pc = 0x1aa0acu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1aa0b0: 0x7080f628
    ctx->pc = 0x1aa0b0u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1aa0b4: 0x7000b628
    ctx->pc = 0x1aa0b4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aa0b8: 0x70008e28
    ctx->pc = 0x1aa0b8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aa0bc: 0x14c3013f
    ctx->pc = 0x1AA0BCu;
    {
        const bool branch_taken_0x1aa0bc = (GPR_U32(ctx, 6) != GPR_U32(ctx, 3));
        ctx->pc = 0x1AA0C0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1aa0bc) {
            ctx->pc = 0x1AA5BCu;
            goto label_1aa5bc;
        }
    }
    ctx->pc = 0x1AA0C4u;
    // 0x1aa0c4: 0x8fc3001c
    ctx->pc = 0x1aa0c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1aa0c8: 0x30620001
    ctx->pc = 0x1aa0c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x1aa0cc: 0x10400002
    ctx->pc = 0x1AA0CCu;
    {
        const bool branch_taken_0x1aa0cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA0D0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x1aa0cc) {
            ctx->pc = 0x1AA0D8u;
            goto label_1aa0d8;
        }
    }
    ctx->pc = 0x1AA0D4u;
    // 0x1aa0d4: 0x24160001
    ctx->pc = 0x1aa0d4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
label_1aa0d8:
    // 0x1aa0d8: 0x10400004
    ctx->pc = 0x1AA0D8u;
    {
        const bool branch_taken_0x1aa0d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA0DCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
        if (branch_taken_0x1aa0d8) {
            ctx->pc = 0x1AA0ECu;
            goto label_1aa0ec;
        }
    }
    ctx->pc = 0x1AA0E0u;
    // 0x1aa0e0: 0x24020001
    ctx->pc = 0x1aa0e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa0e4: 0xafa200a0
    ctx->pc = 0x1aa0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1aa0e8: 0x30620008
    ctx->pc = 0x1aa0e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
label_1aa0ec:
    // 0x1aa0ec: 0x10400002
    ctx->pc = 0x1AA0ECu;
    {
        const bool branch_taken_0x1aa0ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA0F0u;
        SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 5), 8));
        if (branch_taken_0x1aa0ec) {
            ctx->pc = 0x1AA0F8u;
            goto label_1aa0f8;
        }
    }
    ctx->pc = 0x1AA0F4u;
    // 0x1aa0f4: 0x24110001
    ctx->pc = 0x1aa0f4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_1aa0f8:
    // 0x1aa0f8: 0x4a10002
    ctx->pc = 0x1AA0F8u;
    {
        const bool branch_taken_0x1aa0f8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1AA0FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 255));
        if (branch_taken_0x1aa0f8) {
            ctx->pc = 0x1AA104u;
            goto label_1aa104;
        }
    }
    ctx->pc = 0x1AA100u;
    // 0x1aa100: 0x2ba03
    ctx->pc = 0x1aa100u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 8));
label_1aa104:
    // 0x1aa104: 0x30620002
    ctx->pc = 0x1aa104u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
    // 0x1aa108: 0x1440000f
    ctx->pc = 0x1AA108u;
    {
        const bool branch_taken_0x1aa108 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AA10Cu;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 30), 44)));
        if (branch_taken_0x1aa108) {
            ctx->pc = 0x1AA148u;
            goto label_1aa148;
        }
    }
    ctx->pc = 0x1AA110u;
    // 0x1aa110: 0x8fc2001c
    ctx->pc = 0x1aa110u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1aa114: 0x8082a
    ctx->pc = 0x1aa114u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 8)));
    // 0x1aa118: 0x27c50034
    ctx->pc = 0x1aa118u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 52));
    // 0x1aa11c: 0x70003628
    ctx->pc = 0x1aa11cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aa120: 0x34420002
    ctx->pc = 0x1aa120u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x1aa124: 0x10200008
    ctx->pc = 0x1AA124u;
    {
        const bool branch_taken_0x1aa124 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA128u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x1aa124) {
            ctx->pc = 0x1AA148u;
            goto label_1aa148;
        }
    }
    ctx->pc = 0x1AA12Cu;
label_1aa12c:
    // 0x1aa12c: 0x8ca30000
    ctx->pc = 0x1aa12cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1aa130: 0x24c60001
    ctx->pc = 0x1aa130u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1aa134: 0xc8102a
    ctx->pc = 0x1aa134u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 8)));
    // 0x1aa138: 0x641821
    ctx->pc = 0x1aa138u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1aa13c: 0xaca30000
    ctx->pc = 0x1aa13cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1aa140: 0x1440fffa
    ctx->pc = 0x1AA140u;
    {
        const bool branch_taken_0x1aa140 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AA144u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x1aa140) {
            ctx->pc = 0x1AA12Cu;
            goto label_1aa12c;
        }
    }
    ctx->pc = 0x1AA148u;
label_1aa148:
    // 0x1aa148: 0x8fa200ec
    ctx->pc = 0x1aa148u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1aa14c: 0x14400005
    ctx->pc = 0x1AA14Cu;
    {
        const bool branch_taken_0x1aa14c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AA150u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 16));
        if (branch_taken_0x1aa14c) {
            ctx->pc = 0x1AA164u;
            goto label_1aa164;
        }
    }
    ctx->pc = 0x1AA154u;
    // 0x1aa154: 0xc0552d8
    ctx->pc = 0x1AA154u;
    SET_GPR_U32(ctx, 31, 0x1AA15Cu);
    ctx->pc = 0x1AA158u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA15Cu; }
        else if (ctx->pc != 0x1AA15Cu) { ctx->pc = 0x1AA15Cu; }
    }
    if (ctx->pc != 0x1AA15Cu) { return; }
    ctx->pc = 0x1AA15Cu;
    // 0x1aa15c: 0x10000118
    ctx->pc = 0x1AA15Cu;
    {
        const bool branch_taken_0x1aa15c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA160u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x1aa15c) {
            ctx->pc = 0x1AA5C0u;
            goto label_1aa5c0;
        }
    }
    ctx->pc = 0x1AA164u;
label_1aa164:
    // 0x1aa164: 0xafa200c0
    ctx->pc = 0x1aa164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1aa168: 0x8c83002c
    ctx->pc = 0x1aa168u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1aa16c: 0x141040
    ctx->pc = 0x1aa16cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 1));
    // 0x1aa170: 0xafa200b0
    ctx->pc = 0x1aa170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1aa174: 0x3c020026
    ctx->pc = 0x1aa174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1aa178: 0x2442f440
    ctx->pc = 0x1aa178u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964288));
    // 0x1aa17c: 0xafa200d0
    ctx->pc = 0x1aa17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1aa180: 0x31080
    ctx->pc = 0x1aa180u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aa184: 0x2442000c
    ctx->pc = 0x1aa184u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1aa188: 0x21080
    ctx->pc = 0x1aa188u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1aa18c: 0x821021
    ctx->pc = 0x1aa18cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1aa190: 0x10000105
    ctx->pc = 0x1AA190u;
    {
        const bool branch_taken_0x1aa190 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA194u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 48));
        if (branch_taken_0x1aa190) {
            ctx->pc = 0x1AA5A8u;
            goto label_1aa5a8;
        }
    }
    ctx->pc = 0x1AA198u;
label_1aa198:
    // 0x1aa198: 0x8e020010
    ctx->pc = 0x1aa198u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1aa19c: 0x44000dc
    ctx->pc = 0x1AA19Cu;
    {
        const bool branch_taken_0x1aa19c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AA1A0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 5));
        if (branch_taken_0x1aa19c) {
            ctx->pc = 0x1AA510u;
            goto label_1aa510;
        }
    }
    ctx->pc = 0x1AA1A4u;
    // 0x1aa1a4: 0x8fa200ec
    ctx->pc = 0x1aa1a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1aa1a8: 0x6800010
    ctx->pc = 0x1AA1A8u;
    {
        const bool branch_taken_0x1aa1a8 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1AA1ACu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x1aa1a8) {
            ctx->pc = 0x1AA1ECu;
            goto label_1aa1ec;
        }
    }
    ctx->pc = 0x1AA1B0u;
    // 0x1aa1b0: 0x84440002
    ctx->pc = 0x1aa1b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1aa1b4: 0x24030013
    ctx->pc = 0x1aa1b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1aa1b8: 0x10830003
    ctx->pc = 0x1AA1B8u;
    {
        const bool branch_taken_0x1aa1b8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AA1BCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x1aa1b8) {
            ctx->pc = 0x1AA1C8u;
            goto label_1aa1c8;
        }
    }
    ctx->pc = 0x1AA1C0u;
    // 0x1aa1c0: 0x14830008
    ctx->pc = 0x1AA1C0u;
    {
        const bool branch_taken_0x1aa1c0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1AA1C4u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1aa1c0) {
            ctx->pc = 0x1AA1E4u;
            goto label_1aa1e4;
        }
    }
    ctx->pc = 0x1AA1C8u;
label_1aa1c8:
    // 0x1aa1c8: 0x8fb300b0
    ctx->pc = 0x1aa1c8u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1aa1cc: 0x26940001
    ctx->pc = 0x1aa1ccu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x1aa1d0: 0x72601e28
    ctx->pc = 0x1aa1d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1aa1d4: 0x24630002
    ctx->pc = 0x1aa1d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x1aa1d8: 0x10000007
    ctx->pc = 0x1AA1D8u;
    {
        const bool branch_taken_0x1aa1d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA1DCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        if (branch_taken_0x1aa1d8) {
            ctx->pc = 0x1AA1F8u;
            goto label_1aa1f8;
        }
    }
    ctx->pc = 0x1AA1E0u;
    // 0x1aa1e0: 0x72809e28
    ctx->pc = 0x1aa1e0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_1aa1e4:
    // 0x1aa1e4: 0x10000004
    ctx->pc = 0x1AA1E4u;
    {
        const bool branch_taken_0x1aa1e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa1e4) {
            ctx->pc = 0x1AA1F8u;
            goto label_1aa1f8;
        }
    }
    ctx->pc = 0x1AA1ECu;
label_1aa1ec:
    // 0x1aa1ec: 0x84530000
    ctx->pc = 0x1aa1ecu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aa1f0: 0x0
    ctx->pc = 0x1aa1f0u;
    // NOP
    // 0x1aa1f4: 0x0
    ctx->pc = 0x1aa1f4u;
    // NOP
label_1aa1f8:
    // 0x1aa1f8: 0x12c00003
    ctx->pc = 0x1AA1F8u;
    {
        const bool branch_taken_0x1aa1f8 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA1FCu;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1aa1f8) {
            ctx->pc = 0x1AA208u;
            goto label_1aa208;
        }
    }
    ctx->pc = 0x1AA200u;
    // 0x1aa200: 0x10000004
    ctx->pc = 0x1AA200u;
    {
        const bool branch_taken_0x1aa200 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA204u;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
        if (branch_taken_0x1aa200) {
            ctx->pc = 0x1AA214u;
            goto label_1aa214;
        }
    }
    ctx->pc = 0x1AA208u;
label_1aa208:
    // 0x1aa208: 0x8c430010
    ctx->pc = 0x1aa208u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1aa20c: 0x2e31821
    ctx->pc = 0x1aa20cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1aa210: 0x8445000a
    ctx->pc = 0x1aa210u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1aa214:
    // 0x1aa214: 0x8e040064
    ctx->pc = 0x1aa214u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1aa218: 0x13ab80
    ctx->pc = 0x1aa218u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 19), 14));
    // 0x1aa21c: 0x52883
    ctx->pc = 0x1aa21cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1aa220: 0x852025
    ctx->pc = 0x1aa220u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1aa224: 0xae040064
    ctx->pc = 0x1aa224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x1aa228: 0x8447000a
    ctx->pc = 0x1aa228u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1aa22c: 0x84460008
    ctx->pc = 0x1aa22cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1aa230: 0x84450002
    ctx->pc = 0x1aa230u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1aa234: 0x8e040060
    ctx->pc = 0x1aa234u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1aa238: 0x30e70003
    ctx->pc = 0x1aa238u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 3));
    // 0x1aa23c: 0x73f80
    ctx->pc = 0x1aa23cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 30));
    // 0x1aa240: 0x63680
    ctx->pc = 0x1aa240u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 26));
    // 0x1aa244: 0xe63025
    ctx->pc = 0x1aa244u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1aa248: 0x52d00
    ctx->pc = 0x1aa248u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 20));
    // 0x1aa24c: 0xa62825
    ctx->pc = 0x1aa24cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1aa250: 0x2a52825
    ctx->pc = 0x1aa250u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x1aa254: 0x652825
    ctx->pc = 0x1aa254u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1aa258: 0x852025
    ctx->pc = 0x1aa258u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1aa25c: 0xae040060
    ctx->pc = 0x1aa25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x1aa260: 0x8e05000c
    ctx->pc = 0x1aa260u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1aa264: 0x4a0000c
    ctx->pc = 0x1AA264u;
    {
        const bool branch_taken_0x1aa264 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1aa264) {
            ctx->pc = 0x1AA298u;
            goto label_1aa298;
        }
    }
    ctx->pc = 0x1AA26Cu;
    // 0x1aa26c: 0x8f868a50
    ctx->pc = 0x1aa26cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937168)));
    // 0x1aa270: 0x52040
    ctx->pc = 0x1aa270u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1aa274: 0x852021
    ctx->pc = 0x1aa274u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1aa278: 0x43880
    ctx->pc = 0x1aa278u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1aa27c: 0x8e040064
    ctx->pc = 0x1aa27cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1aa280: 0x2405ffe0
    ctx->pc = 0x1aa280u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1aa284: 0xc73021
    ctx->pc = 0x1aa284u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1aa288: 0x8cc60000
    ctx->pc = 0x1aa288u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1aa28c: 0xc52824
    ctx->pc = 0x1aa28cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1aa290: 0x852025
    ctx->pc = 0x1aa290u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1aa294: 0xae040064
    ctx->pc = 0x1aa294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
label_1aa298:
    // 0x1aa298: 0x8c450018
    ctx->pc = 0x1aa298u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1aa29c: 0x24040001
    ctx->pc = 0x1aa29cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa2a0: 0x14a40019
    ctx->pc = 0x1AA2A0u;
    {
        const bool branch_taken_0x1aa2a0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        if (branch_taken_0x1aa2a0) {
            ctx->pc = 0x1AA308u;
            goto label_1aa308;
        }
    }
    ctx->pc = 0x1AA2A8u;
    // 0x1aa2a8: 0x12c0000c
    ctx->pc = 0x1AA2A8u;
    {
        const bool branch_taken_0x1aa2a8 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa2a8) {
            ctx->pc = 0x1AA2DCu;
            goto label_1aa2dc;
        }
    }
    ctx->pc = 0x1AA2B0u;
    // 0x1aa2b0: 0x8c470030
    ctx->pc = 0x1aa2b0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1aa2b4: 0x84460022
    ctx->pc = 0x1aa2b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x1aa2b8: 0x8e040064
    ctx->pc = 0x1aa2b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1aa2bc: 0x3c052000
    ctx->pc = 0x1aa2bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)8192 << 16));
    // 0x1aa2c0: 0x73940
    ctx->pc = 0x1aa2c0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 5));
    // 0x1aa2c4: 0x634c0
    ctx->pc = 0x1aa2c4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 19));
    // 0x1aa2c8: 0xe63025
    ctx->pc = 0x1aa2c8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1aa2cc: 0xc52825
    ctx->pc = 0x1aa2ccu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1aa2d0: 0x852025
    ctx->pc = 0x1aa2d0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1aa2d4: 0x1000000c
    ctx->pc = 0x1AA2D4u;
    {
        const bool branch_taken_0x1aa2d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA2D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
        if (branch_taken_0x1aa2d4) {
            ctx->pc = 0x1AA308u;
            goto label_1aa308;
        }
    }
    ctx->pc = 0x1AA2DCu;
label_1aa2dc:
    // 0x1aa2dc: 0x8c460030
    ctx->pc = 0x1aa2dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1aa2e0: 0x84470022
    ctx->pc = 0x1aa2e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x1aa2e4: 0x8e040064
    ctx->pc = 0x1aa2e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1aa2e8: 0x3c052000
    ctx->pc = 0x1aa2e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)8192 << 16));
    // 0x1aa2ec: 0x2e63021
    ctx->pc = 0x1aa2ecu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x1aa2f0: 0x73cc0
    ctx->pc = 0x1aa2f0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 19));
    // 0x1aa2f4: 0x63140
    ctx->pc = 0x1aa2f4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 5));
    // 0x1aa2f8: 0xe63025
    ctx->pc = 0x1aa2f8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1aa2fc: 0xc52825
    ctx->pc = 0x1aa2fcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1aa300: 0x852025
    ctx->pc = 0x1aa300u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1aa304: 0xae040064
    ctx->pc = 0x1aa304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
label_1aa308:
    // 0x1aa308: 0x8e040004
    ctx->pc = 0x1aa308u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1aa30c: 0x30840004
    ctx->pc = 0x1aa30cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 4));
    // 0x1aa310: 0x10800033
    ctx->pc = 0x1AA310u;
    {
        const bool branch_taken_0x1aa310 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa310) {
            ctx->pc = 0x1AA3E0u;
            goto label_1aa3e0;
        }
    }
    ctx->pc = 0x1AA318u;
    // 0x1aa318: 0xafa300f0
    ctx->pc = 0x1aa318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x1aa31c: 0x84440008
    ctx->pc = 0x1aa31cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1aa320: 0x8445000a
    ctx->pc = 0x1aa320u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1aa324: 0x84460002
    ctx->pc = 0x1aa324u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1aa328: 0x8e080068
    ctx->pc = 0x1aa328u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1aa32c: 0x72603e28
    ctx->pc = 0x1aa32cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1aa330: 0xc06a794
    ctx->pc = 0x1AA330u;
    SET_GPR_U32(ctx, 31, 0x1AA338u);
    ctx->pc = 0x1AA334u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 240));
    ctx->pc = 0x1A9E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_miptbp_0x1a9e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA338u; }
        else if (ctx->pc != 0x1AA338u) { ctx->pc = 0x1AA338u; }
    }
    if (ctx->pc != 0x1AA338u) { return; }
    ctx->pc = 0x1AA338u;
    // 0x1aa338: 0x27a900f8
    ctx->pc = 0x1aa338u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 248));
    // 0x1aa33c: 0x8d280000
    ctx->pc = 0x1aa33cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1aa340: 0x8fa700f4
    ctx->pc = 0x1aa340u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x1aa344: 0x22880
    ctx->pc = 0x1aa344u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1aa348: 0x131080
    ctx->pc = 0x1aa348u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x1aa34c: 0x132580
    ctx->pc = 0x1aa34cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 19), 22));
    // 0x1aa350: 0x27a30104
    ctx->pc = 0x1aa350u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 260));
    // 0x1aa354: 0x31080fff
    ctx->pc = 0x1aa354u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 8), 4095));
    // 0x1aa358: 0x84500
    ctx->pc = 0x1aa358u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 20));
    // 0x1aa35c: 0xf53825
    ctx->pc = 0x1aa35cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
    // 0x1aa360: 0x1073825
    ctx->pc = 0x1aa360u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1aa364: 0xae070088
    ctx->pc = 0x1aa364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 7));
    // 0x1aa368: 0x8d280000
    ctx->pc = 0x1aa368u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1aa36c: 0x8fa700fc
    ctx->pc = 0x1aa36cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1aa370: 0x2406fff3
    ctx->pc = 0x1aa370u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1aa374: 0x84303
    ctx->pc = 0x1aa374u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 12));
    // 0x1aa378: 0x1024025
    ctx->pc = 0x1aa378u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1aa37c: 0x73a00
    ctx->pc = 0x1aa37cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x1aa380: 0xe83825
    ctx->pc = 0x1aa380u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1aa384: 0x873825
    ctx->pc = 0x1aa384u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1aa388: 0xae07008c
    ctx->pc = 0x1aa388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 7));
    // 0x1aa38c: 0x8c680000
    ctx->pc = 0x1aa38cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aa390: 0x8fa70100
    ctx->pc = 0x1aa390u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1aa394: 0x31080fff
    ctx->pc = 0x1aa394u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 8), 4095));
    // 0x1aa398: 0xf53825
    ctx->pc = 0x1aa398u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
    // 0x1aa39c: 0x84500
    ctx->pc = 0x1aa39cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 20));
    // 0x1aa3a0: 0x1073825
    ctx->pc = 0x1aa3a0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1aa3a4: 0xae070090
    ctx->pc = 0x1aa3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 7));
    // 0x1aa3a8: 0x8c670000
    ctx->pc = 0x1aa3a8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aa3ac: 0x8fa30108
    ctx->pc = 0x1aa3acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1aa3b0: 0x73b03
    ctx->pc = 0x1aa3b0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x1aa3b4: 0xe23825
    ctx->pc = 0x1aa3b4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1aa3b8: 0x31200
    ctx->pc = 0x1aa3b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1aa3bc: 0x471025
    ctx->pc = 0x1aa3bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1aa3c0: 0x821025
    ctx->pc = 0x1aa3c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1aa3c4: 0xae020094
    ctx->pc = 0x1aa3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x1aa3c8: 0x8e020068
    ctx->pc = 0x1aa3c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1aa3cc: 0x461024
    ctx->pc = 0x1aa3ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1aa3d0: 0xae020068
    ctx->pc = 0x1aa3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x1aa3d4: 0x8e020068
    ctx->pc = 0x1aa3d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1aa3d8: 0x451025
    ctx->pc = 0x1aa3d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1aa3dc: 0xae020068
    ctx->pc = 0x1aa3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_1aa3e0:
    // 0x1aa3e0: 0x12c0004b
    ctx->pc = 0x1AA3E0u;
    {
        const bool branch_taken_0x1aa3e0 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa3e0) {
            ctx->pc = 0x1AA510u;
            goto label_1aa510;
        }
    }
    ctx->pc = 0x1AA3E8u;
    // 0x1aa3e8: 0x8e020004
    ctx->pc = 0x1aa3e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1aa3ec: 0x30420002
    ctx->pc = 0x1aa3ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x1aa3f0: 0x10400047
    ctx->pc = 0x1AA3F0u;
    {
        const bool branch_taken_0x1aa3f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa3f0) {
            ctx->pc = 0x1AA510u;
            goto label_1aa510;
        }
    }
    ctx->pc = 0x1AA3F8u;
    // 0x1aa3f8: 0x8e040010
    ctx->pc = 0x1aa3f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1aa3fc: 0x121100
    ctx->pc = 0x1aa3fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
    // 0x1aa400: 0x3c21821
    ctx->pc = 0x1aa400u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1aa404: 0x3c02ffff
    ctx->pc = 0x1aa404u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x1aa408: 0x3408ffff
    ctx->pc = 0x1aa408u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1aa40c: 0x24730030
    ctx->pc = 0x1aa40cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 48));
    // 0x1aa410: 0x431c0
    ctx->pc = 0x1aa410u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 4), 7));
    // 0x1aa414: 0x8fa400c0
    ctx->pc = 0x1aa414u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1aa418: 0x2405fffe
    ctx->pc = 0x1aa418u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1aa41c: 0x863821
    ctx->pc = 0x1aa41cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1aa420: 0x8ce60070
    ctx->pc = 0x1aa420u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x1aa424: 0x24e40010
    ctx->pc = 0x1aa424u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 16));
    // 0x1aa428: 0xac640034
    ctx->pc = 0x1aa428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 4));
    // 0x1aa42c: 0x8c640040
    ctx->pc = 0x1aa42cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1aa430: 0xc83024
    ctx->pc = 0x1aa430u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1aa434: 0x822024
    ctx->pc = 0x1aa434u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1aa438: 0xac640040
    ctx->pc = 0x1aa438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
    // 0x1aa43c: 0x8c640040
    ctx->pc = 0x1aa43cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1aa440: 0x862025
    ctx->pc = 0x1aa440u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1aa444: 0xac640040
    ctx->pc = 0x1aa444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
    // 0x1aa448: 0x8ce40074
    ctx->pc = 0x1aa448u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 116)));
    // 0x1aa44c: 0xac640044
    ctx->pc = 0x1aa44cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
    // 0x1aa450: 0x8c64004c
    ctx->pc = 0x1aa450u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1aa454: 0x862025
    ctx->pc = 0x1aa454u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1aa458: 0xac64004c
    ctx->pc = 0x1aa458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 4));
    // 0x1aa45c: 0x8e03000c
    ctx->pc = 0x1aa45cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1aa460: 0x14650028
    ctx->pc = 0x1AA460u;
    {
        const bool branch_taken_0x1aa460 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x1AA464u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 3));
        if (branch_taken_0x1aa460) {
            ctx->pc = 0x1AA504u;
            goto label_1aa504;
        }
    }
    ctx->pc = 0x1AA468u;
    // 0x1aa468: 0x8e050010
    ctx->pc = 0x1aa468u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1aa46c: 0x2643fffc
    ctx->pc = 0x1aa46cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x1aa470: 0x31900
    ctx->pc = 0x1aa470u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1aa474: 0x3c31821
    ctx->pc = 0x1aa474u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1aa478: 0x24750030
    ctx->pc = 0x1aa478u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 48));
    // 0x1aa47c: 0x27a40110
    ctx->pc = 0x1aa47cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 272));
    // 0x1aa480: 0x24a30001
    ctx->pc = 0x1aa480u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1aa484: 0x329c0
    ctx->pc = 0x1aa484u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 7));
    // 0x1aa488: 0x8fa300c0
    ctx->pc = 0x1aa488u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1aa48c: 0x24060001
    ctx->pc = 0x1aa48cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa490: 0x654021
    ctx->pc = 0x1aa490u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1aa494: 0x95070070
    ctx->pc = 0x1aa494u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 112)));
    // 0x1aa498: 0x25030010
    ctx->pc = 0x1aa498u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 16));
    // 0x1aa49c: 0x72a02e28
    ctx->pc = 0x1aa49cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1aa4a0: 0xae630024
    ctx->pc = 0x1aa4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
    // 0x1aa4a4: 0x8e630030
    ctx->pc = 0x1aa4a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1aa4a8: 0x621024
    ctx->pc = 0x1aa4a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aa4ac: 0xae620030
    ctx->pc = 0x1aa4acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    // 0x1aa4b0: 0x8e620030
    ctx->pc = 0x1aa4b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1aa4b4: 0x471025
    ctx->pc = 0x1aa4b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1aa4b8: 0xae620030
    ctx->pc = 0x1aa4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    // 0x1aa4bc: 0x8d020074
    ctx->pc = 0x1aa4bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 116)));
    // 0x1aa4c0: 0xae620034
    ctx->pc = 0x1aa4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
    // 0x1aa4c4: 0x8e62003c
    ctx->pc = 0x1aa4c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x1aa4c8: 0x471025
    ctx->pc = 0x1aa4c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1aa4cc: 0xae62003c
    ctx->pc = 0x1aa4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x1aa4d0: 0x8fa200d0
    ctx->pc = 0x1aa4d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1aa4d4: 0xc06ac36
    ctx->pc = 0x1AA4D4u;
    SET_GPR_U32(ctx, 31, 0x1AA4DCu);
    ctx->pc = 0x1AA4D8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4DCu; }
        else if (ctx->pc != 0x1AA4DCu) { ctx->pc = 0x1AA4DCu; }
    }
    if (ctx->pc != 0x1AA4DCu) { return; }
    ctx->pc = 0x1AA4DCu;
    // 0x1aa4dc: 0x72a02628
    ctx->pc = 0x1aa4dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1aa4e0: 0x72602e28
    ctx->pc = 0x1aa4e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1aa4e4: 0xc06ac36
    ctx->pc = 0x1AA4E4u;
    SET_GPR_U32(ctx, 31, 0x1AA4ECu);
    ctx->pc = 0x1AA4E8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4ECu; }
        else if (ctx->pc != 0x1AA4ECu) { ctx->pc = 0x1AA4ECu; }
    }
    if (ctx->pc != 0x1AA4ECu) { return; }
    ctx->pc = 0x1AA4ECu;
    // 0x1aa4ec: 0x26640040
    ctx->pc = 0x1aa4ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 64));
    // 0x1aa4f0: 0x27a50110
    ctx->pc = 0x1aa4f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 272));
    // 0x1aa4f4: 0xc06ac36
    ctx->pc = 0x1AA4F4u;
    SET_GPR_U32(ctx, 31, 0x1AA4FCu);
    ctx->pc = 0x1AA4F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4FCu; }
        else if (ctx->pc != 0x1AA4FCu) { ctx->pc = 0x1AA4FCu; }
    }
    if (ctx->pc != 0x1AA4FCu) { return; }
    ctx->pc = 0x1AA4FCu;
    // 0x1aa4fc: 0x10000004
    ctx->pc = 0x1AA4FCu;
    {
        const bool branch_taken_0x1aa4fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA500u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x1aa4fc) {
            ctx->pc = 0x1AA510u;
            goto label_1aa510;
        }
    }
    ctx->pc = 0x1AA504u;
label_1aa504:
    // 0x1aa504: 0x8fa200d0
    ctx->pc = 0x1aa504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1aa508: 0xae620024
    ctx->pc = 0x1aa508u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
    // 0x1aa50c: 0x0
    ctx->pc = 0x1aa50cu;
    // NOP
label_1aa510:
    // 0x1aa510: 0x8fa200a0
    ctx->pc = 0x1aa510u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1aa514: 0x5040001f
    ctx->pc = 0x1AA514u;
    {
        const bool branch_taken_0x1aa514 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa514) {
            ctx->pc = 0x1AA518u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
            ctx->pc = 0x1AA594u;
            goto label_1aa594;
        }
    }
    ctx->pc = 0x1AA51Cu;
    // 0x1aa51c: 0x8e0300d8
    ctx->pc = 0x1aa51cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1aa520: 0x260200e0
    ctx->pc = 0x1aa520u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 224));
    // 0x1aa524: 0x10000014
    ctx->pc = 0x1AA524u;
    {
        const bool branch_taken_0x1aa524 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA528u;
        SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x1aa524) {
            ctx->pc = 0x1AA578u;
            goto label_1aa578;
        }
    }
    ctx->pc = 0x1AA52Cu;
label_1aa52c:
    // 0x1aa52c: 0x12200004
    ctx->pc = 0x1AA52Cu;
    {
        const bool branch_taken_0x1aa52c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA530u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1aa52c) {
            ctx->pc = 0x1AA540u;
            goto label_1aa540;
        }
    }
    ctx->pc = 0x1AA534u;
    // 0x1aa534: 0x10000002
    ctx->pc = 0x1AA534u;
    {
        const bool branch_taken_0x1aa534 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA538u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1aa534) {
            ctx->pc = 0x1AA540u;
            goto label_1aa540;
        }
    }
    ctx->pc = 0x1AA53Cu;
    // 0x1aa53c: 0x24030001
    ctx->pc = 0x1aa53cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1aa540:
    // 0x1aa540: 0x8c470008
    ctx->pc = 0x1aa540u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1aa544: 0x2439021
    ctx->pc = 0x1aa544u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1aa548: 0x8c440004
    ctx->pc = 0x1aa548u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1aa54c: 0x24060009
    ctx->pc = 0x1aa54cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1aa550: 0x24050007
    ctx->pc = 0x1aa550u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1aa554: 0x2403fffc
    ctx->pc = 0x1aa554u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1aa558: 0x739c2
    ctx->pc = 0x1aa558u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 7), 7));
    // 0x1aa55c: 0x30e70001
    ctx->pc = 0x1aa55cu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 1));
    // 0x1aa560: 0xa7300a
    ctx->pc = 0x1aa560u;
    if (GPR_U32(ctx, 7) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 5));
    // 0x1aa564: 0x862018
    ctx->pc = 0x1aa564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1aa568: 0x24840014
    ctx->pc = 0x1aa568u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20));
    // 0x1aa56c: 0x831824
    ctx->pc = 0x1aa56cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1aa570: 0x31880
    ctx->pc = 0x1aa570u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aa574: 0x431021
    ctx->pc = 0x1aa574u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa578:
    // 0x1aa578: 0x1021823
    ctx->pc = 0x1aa578u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1aa57c: 0x28610011
    ctx->pc = 0x1aa57cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 17));
    // 0x1aa580: 0x1020ffea
    ctx->pc = 0x1AA580u;
    {
        const bool branch_taken_0x1aa580 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa580) {
            ctx->pc = 0x1AA52Cu;
            goto label_1aa52c;
        }
    }
    ctx->pc = 0x1AA588u;
    // 0x1aa588: 0x10000003
    ctx->pc = 0x1AA588u;
    {
        const bool branch_taken_0x1aa588 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA58Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x1aa588) {
            ctx->pc = 0x1AA598u;
            goto label_1aa598;
        }
    }
    ctx->pc = 0x1AA590u;
    // 0x1aa590: 0x26520002
    ctx->pc = 0x1aa590u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
label_1aa594:
    // 0x1aa594: 0x0
    ctx->pc = 0x1aa594u;
    // NOP
label_1aa598:
    // 0x1aa598: 0x8e0200d8
    ctx->pc = 0x1aa598u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1aa59c: 0x260300e0
    ctx->pc = 0x1aa59cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 224));
    // 0x1aa5a0: 0x628021
    ctx->pc = 0x1aa5a0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aa5a4: 0x0
    ctx->pc = 0x1aa5a4u;
    // NOP
label_1aa5a8:
    // 0x1aa5a8: 0x8e020000
    ctx->pc = 0x1aa5a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa5ac: 0x1440fefa
    ctx->pc = 0x1AA5ACu;
    {
        const bool branch_taken_0x1aa5ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AA5B0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1aa5ac) {
            ctx->pc = 0x1AA198u;
            goto label_1aa198;
        }
    }
    ctx->pc = 0x1AA5B4u;
    // 0x1aa5b4: 0xc0552d8
    ctx->pc = 0x1AA5B4u;
    SET_GPR_U32(ctx, 31, 0x1AA5BCu);
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5BCu; }
        else if (ctx->pc != 0x1AA5BCu) { ctx->pc = 0x1AA5BCu; }
    }
    if (ctx->pc != 0x1AA5BCu) { return; }
    ctx->pc = 0x1AA5BCu;
label_1aa5bc:
    // 0x1aa5bc: 0x7bbf0090
    ctx->pc = 0x1aa5bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1aa5c0:
    // 0x1aa5c0: 0x7bbe0080
    ctx->pc = 0x1aa5c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1aa5c4: 0x7bb70070
    ctx->pc = 0x1aa5c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1aa5c8: 0x7bb60060
    ctx->pc = 0x1aa5c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1aa5cc: 0x7bb50050
    ctx->pc = 0x1aa5ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aa5d0: 0x7bb40040
    ctx->pc = 0x1aa5d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aa5d4: 0x7bb30030
    ctx->pc = 0x1aa5d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aa5d8: 0x7bb20020
    ctx->pc = 0x1aa5d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa5dc: 0x7bb10010
    ctx->pc = 0x1aa5dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa5e0: 0x7bb00000
    ctx->pc = 0x1aa5e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa5e4: 0x3e00008
    ctx->pc = 0x1AA5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA5E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA0D8u: goto label_1aa0d8;
            case 0x1AA0ECu: goto label_1aa0ec;
            case 0x1AA0F8u: goto label_1aa0f8;
            case 0x1AA104u: goto label_1aa104;
            case 0x1AA12Cu: goto label_1aa12c;
            case 0x1AA148u: goto label_1aa148;
            case 0x1AA164u: goto label_1aa164;
            case 0x1AA198u: goto label_1aa198;
            case 0x1AA1C8u: goto label_1aa1c8;
            case 0x1AA1E4u: goto label_1aa1e4;
            case 0x1AA1ECu: goto label_1aa1ec;
            case 0x1AA1F8u: goto label_1aa1f8;
            case 0x1AA208u: goto label_1aa208;
            case 0x1AA214u: goto label_1aa214;
            case 0x1AA298u: goto label_1aa298;
            case 0x1AA2DCu: goto label_1aa2dc;
            case 0x1AA308u: goto label_1aa308;
            case 0x1AA3E0u: goto label_1aa3e0;
            case 0x1AA504u: goto label_1aa504;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA52Cu: goto label_1aa52c;
            case 0x1AA540u: goto label_1aa540;
            case 0x1AA578u: goto label_1aa578;
            case 0x1AA594u: goto label_1aa594;
            case 0x1AA598u: goto label_1aa598;
            case 0x1AA5A8u: goto label_1aa5a8;
            case 0x1AA5BCu: goto label_1aa5bc;
            case 0x1AA5C0u: goto label_1aa5c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA5ECu;
}
