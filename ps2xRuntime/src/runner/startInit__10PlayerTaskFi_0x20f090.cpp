#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: startInit__10PlayerTaskFi
// Address: 0x20f090 - 0x20f2d4
void startInit__10PlayerTaskFi_0x20f090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("startInit__10PlayerTaskFi");


    ctx->pc = 0x20f090u;

    // 0x20f090: 0x27bdffd0
    ctx->pc = 0x20f090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20f094: 0x7fbf0020
    ctx->pc = 0x20f094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x20f098: 0x7fb10010
    ctx->pc = 0x20f098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20f09c: 0x7fb00000
    ctx->pc = 0x20f09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20f0a0: 0x70a08628
    ctx->pc = 0x20f0a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x20f0a4: 0xc083d44
    ctx->pc = 0x20F0A4u;
    SET_GPR_U32(ctx, 31, 0x20F0ACu);
    ctx->pc = 0x20F0A8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20F510u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMaxLife__10PlayerTaskFv_0x20f510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F0ACu; }
        else if (ctx->pc != 0x20F0ACu) { ctx->pc = 0x20F0ACu; }
    }
    if (ctx->pc != 0x20F0ACu) { return; }
    ctx->pc = 0x20F0ACu;
    // 0x20f0ac: 0xc083d64
    ctx->pc = 0x20F0ACu;
    SET_GPR_U32(ctx, 31, 0x20F0B4u);
    ctx->pc = 0x20F0B0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20F590u;
    {
        const uint32_t __entryPc = ctx->pc;
        setInitLife__10PlayerTaskFv_0x20f590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F0B4u; }
        else if (ctx->pc != 0x20F0B4u) { ctx->pc = 0x20F0B4u; }
    }
    if (ctx->pc != 0x20F0B4u) { return; }
    ctx->pc = 0x20F0B4u;
    // 0x20f0b4: 0xc083dcc
    ctx->pc = 0x20F0B4u;
    SET_GPR_U32(ctx, 31, 0x20F0BCu);
    ctx->pc = 0x20F0B8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20F730u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMaxBullet__10PlayerTaskFv_0x20f730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F0BCu; }
        else if (ctx->pc != 0x20F0BCu) { ctx->pc = 0x20F0BCu; }
    }
    if (ctx->pc != 0x20F0BCu) { return; }
    ctx->pc = 0x20F0BCu;
    // 0x20f0bc: 0x101040
    ctx->pc = 0x20f0bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
    // 0x20f0c0: 0x501021
    ctx->pc = 0x20f0c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f0c4: 0x28080
    ctx->pc = 0x20f0c4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f0c8: 0x3c020027
    ctx->pc = 0x20f0c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20f0cc: 0x24423220
    ctx->pc = 0x20f0ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12832));
    // 0x20f0d0: 0x502021
    ctx->pc = 0x20f0d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f0d4: 0x8c820000
    ctx->pc = 0x20f0d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f0d8: 0x30420001
    ctx->pc = 0x20f0d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x20f0dc: 0x10400006
    ctx->pc = 0x20F0DCu;
    {
        const bool branch_taken_0x20f0dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20f0dc) {
            ctx->pc = 0x20F0F8u;
            goto label_20f0f8;
        }
    }
    ctx->pc = 0x20F0E4u;
    // 0x20f0e4: 0x8e221cbc
    ctx->pc = 0x20f0e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f0e8: 0x8c430044
    ctx->pc = 0x20f0e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x20f0ec: 0xac430010
    ctx->pc = 0x20f0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x20f0f0: 0x8e221cbc
    ctx->pc = 0x20f0f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f0f4: 0xac430014
    ctx->pc = 0x20f0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_20f0f8:
    // 0x20f0f8: 0x8c820000
    ctx->pc = 0x20f0f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f0fc: 0x30420004
    ctx->pc = 0x20f0fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x20f100: 0x10400003
    ctx->pc = 0x20F100u;
    {
        const bool branch_taken_0x20f100 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20f100) {
            ctx->pc = 0x20F110u;
            goto label_20f110;
        }
    }
    ctx->pc = 0x20F108u;
    // 0x20f108: 0x8e221cbc
    ctx->pc = 0x20f108u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f10c: 0xac40000c
    ctx->pc = 0x20f10cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_20f110:
    // 0x20f110: 0x8c830000
    ctx->pc = 0x20f110u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f114: 0x30620010
    ctx->pc = 0x20f114u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
    // 0x20f118: 0x10400007
    ctx->pc = 0x20F118u;
    {
        const bool branch_taken_0x20f118 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F11Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32));
        if (branch_taken_0x20f118) {
            ctx->pc = 0x20F138u;
            goto label_20f138;
        }
    }
    ctx->pc = 0x20F120u;
    // 0x20f120: 0x3c010050
    ctx->pc = 0x20f120u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20f124: 0x8422e3e8
    ctx->pc = 0x20f124u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960104)));
    // 0x20f128: 0x24420001
    ctx->pc = 0x20f128u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20f12c: 0x3c010050
    ctx->pc = 0x20f12cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20f130: 0xa422e3e8
    ctx->pc = 0x20f130u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294960104), (uint16_t)GPR_U32(ctx, 2));
    // 0x20f134: 0x30620020
    ctx->pc = 0x20f134u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32));
label_20f138:
    // 0x20f138: 0x10400006
    ctx->pc = 0x20F138u;
    {
        const bool branch_taken_0x20f138 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20f138) {
            ctx->pc = 0x20F154u;
            goto label_20f154;
        }
    }
    ctx->pc = 0x20F140u;
    // 0x20f140: 0x3c010050
    ctx->pc = 0x20f140u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20f144: 0x8422e3ec
    ctx->pc = 0x20f144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960108)));
    // 0x20f148: 0x24420001
    ctx->pc = 0x20f148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20f14c: 0x3c010050
    ctx->pc = 0x20f14cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20f150: 0xa422e3ec
    ctx->pc = 0x20f150u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294960108), (uint16_t)GPR_U32(ctx, 2));
label_20f154:
    // 0x20f154: 0x3c020050
    ctx->pc = 0x20f154u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20f158: 0x2443e3b0
    ctx->pc = 0x20f158u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294960048));
    // 0x20f15c: 0x3c020050
    ctx->pc = 0x20f15cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20f160: 0x2446e3b4
    ctx->pc = 0x20f160u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294960052));
    // 0x20f164: 0x3c020050
    ctx->pc = 0x20f164u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20f168: 0x8e241cb8
    ctx->pc = 0x20f168u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7352)));
    // 0x20f16c: 0x2445e3bc
    ctx->pc = 0x20f16cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294960060));
    // 0x20f170: 0x410c0
    ctx->pc = 0x20f170u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
    // 0x20f174: 0x441023
    ctx->pc = 0x20f174u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20f178: 0x21080
    ctx->pc = 0x20f178u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f17c: 0x621021
    ctx->pc = 0x20f17cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f180: 0xac400000
    ctx->pc = 0x20f180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20f184: 0x8e281cb8
    ctx->pc = 0x20f184u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 7352)));
    // 0x20f188: 0x3c020027
    ctx->pc = 0x20f188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20f18c: 0x24423228
    ctx->pc = 0x20f18cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12840));
    // 0x20f190: 0x502021
    ctx->pc = 0x20f190u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f194: 0x27838b70
    ctx->pc = 0x20f194u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 28), 4294937456));
    // 0x20f198: 0x24020001
    ctx->pc = 0x20f198u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f19c: 0x838c0
    ctx->pc = 0x20f19cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 8), 3));
    // 0x20f1a0: 0xe83823
    ctx->pc = 0x20f1a0u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20f1a4: 0x73880
    ctx->pc = 0x20f1a4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x20f1a8: 0xc73021
    ctx->pc = 0x20f1a8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20f1ac: 0xacc00000
    ctx->pc = 0x20f1acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x20f1b0: 0x8e271cb8
    ctx->pc = 0x20f1b0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 7352)));
    // 0x20f1b4: 0x730c0
    ctx->pc = 0x20f1b4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 3));
    // 0x20f1b8: 0xc73023
    ctx->pc = 0x20f1b8u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20f1bc: 0x63080
    ctx->pc = 0x20f1bcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x20f1c0: 0xa62821
    ctx->pc = 0x20f1c0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20f1c4: 0xaca00000
    ctx->pc = 0x20f1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x20f1c8: 0x8c850000
    ctx->pc = 0x20f1c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f1cc: 0x8e241cb8
    ctx->pc = 0x20f1ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7352)));
    // 0x20f1d0: 0x42080
    ctx->pc = 0x20f1d0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20f1d4: 0x641821
    ctx->pc = 0x20f1d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20f1d8: 0xac650000
    ctx->pc = 0x20f1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x20f1dc: 0x8e231cbc
    ctx->pc = 0x20f1dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f1e0: 0xac6000b4
    ctx->pc = 0x20f1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 0));
    // 0x20f1e4: 0x8e231cbc
    ctx->pc = 0x20f1e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f1e8: 0xac600020
    ctx->pc = 0x20f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x20f1ec: 0x8e231cbc
    ctx->pc = 0x20f1ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f1f0: 0xac60001c
    ctx->pc = 0x20f1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x20f1f4: 0x8e241cbc
    ctx->pc = 0x20f1f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f1f8: 0x8c830048
    ctx->pc = 0x20f1f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x20f1fc: 0xac83004c
    ctx->pc = 0x20f1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
    // 0x20f200: 0x8e231cbc
    ctx->pc = 0x20f200u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f204: 0xac600050
    ctx->pc = 0x20f204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x20f208: 0x8e231cbc
    ctx->pc = 0x20f208u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f20c: 0xac60005c
    ctx->pc = 0x20f20cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
    // 0x20f210: 0x8f838bcc
    ctx->pc = 0x20f210u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x20f214: 0x1462000f
    ctx->pc = 0x20F214u;
    {
        const bool branch_taken_0x20f214 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20f214) {
            ctx->pc = 0x20F254u;
            goto label_20f254;
        }
    }
    ctx->pc = 0x20F21Cu;
    // 0x20f21c: 0x8e221cbc
    ctx->pc = 0x20f21cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f220: 0xa0400340
    ctx->pc = 0x20f220u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 832), (uint8_t)GPR_U32(ctx, 0));
    // 0x20f224: 0x8e221cbc
    ctx->pc = 0x20f224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f228: 0xa0400341
    ctx->pc = 0x20f228u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 833), (uint8_t)GPR_U32(ctx, 0));
    // 0x20f22c: 0x8e221cbc
    ctx->pc = 0x20f22cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f230: 0xa0400342
    ctx->pc = 0x20f230u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 0));
    // 0x20f234: 0x8e221cbc
    ctx->pc = 0x20f234u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f238: 0xa0400343
    ctx->pc = 0x20f238u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 835), (uint8_t)GPR_U32(ctx, 0));
    // 0x20f23c: 0x8e221cbc
    ctx->pc = 0x20f23cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f240: 0xa0400344
    ctx->pc = 0x20f240u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 0));
    // 0x20f244: 0x8e221cbc
    ctx->pc = 0x20f244u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f248: 0xa0400345
    ctx->pc = 0x20f248u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 837), (uint8_t)GPR_U32(ctx, 0));
    // 0x20f24c: 0x8e221cbc
    ctx->pc = 0x20f24cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f250: 0xa0400346
    ctx->pc = 0x20f250u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 838), (uint8_t)GPR_U32(ctx, 0));
label_20f254:
    // 0x20f254: 0x8e221cbc
    ctx->pc = 0x20f254u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f258: 0x72202628
    ctx->pc = 0x20f258u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x20f25c: 0xc084444
    ctx->pc = 0x20F25Cu;
    SET_GPR_U32(ctx, 31, 0x20F264u);
    ctx->pc = 0x20F260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    ctx->pc = 0x211110u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispBulletInit__10PlayerTaskFv_0x211110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F264u; }
        else if (ctx->pc != 0x20F264u) { ctx->pc = 0x20F264u; }
    }
    if (ctx->pc != 0x20F264u) { return; }
    ctx->pc = 0x20F264u;
    // 0x20f264: 0x8e231cbc
    ctx->pc = 0x20f264u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f268: 0x3c020027
    ctx->pc = 0x20f268u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20f26c: 0x24423224
    ctx->pc = 0x20f26cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12836));
    // 0x20f270: 0x501021
    ctx->pc = 0x20f270u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f274: 0x72202628
    ctx->pc = 0x20f274u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x20f278: 0xac600054
    ctx->pc = 0x20f278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x20f27c: 0x8e231cbc
    ctx->pc = 0x20f27cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f280: 0xa46000d0
    ctx->pc = 0x20f280u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 208), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f284: 0xa4600208
    ctx->pc = 0x20f284u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 520), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f288: 0xa4600104
    ctx->pc = 0x20f288u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 260), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f28c: 0xa460023c
    ctx->pc = 0x20f28cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 572), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f290: 0xa4600138
    ctx->pc = 0x20f290u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 312), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f294: 0xa4600270
    ctx->pc = 0x20f294u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 624), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f298: 0xa460016c
    ctx->pc = 0x20f298u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 364), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f29c: 0xa46002a4
    ctx->pc = 0x20f29cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 676), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f2a0: 0xa46001a0
    ctx->pc = 0x20f2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 416), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f2a4: 0xa46002d8
    ctx->pc = 0x20f2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f2a8: 0xa46001d4
    ctx->pc = 0x20f2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 468), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f2ac: 0xa460030c
    ctx->pc = 0x20f2acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 780), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f2b0: 0xa6201cc0
    ctx->pc = 0x20f2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 7360), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f2b4: 0x8c450000
    ctx->pc = 0x20f2b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f2b8: 0xc083d34
    ctx->pc = 0x20F2B8u;
    SET_GPR_U32(ctx, 31, 0x20F2C0u);
    ctx->pc = 0x20F2BCu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20F4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        changePlayerMode__10PlayerTaskFii_0x20f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2C0u; }
        else if (ctx->pc != 0x20F2C0u) { ctx->pc = 0x20F2C0u; }
    }
    if (ctx->pc != 0x20F2C0u) { return; }
    ctx->pc = 0x20F2C0u;
    // 0x20f2c0: 0x7bbf0020
    ctx->pc = 0x20f2c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f2c4: 0x7bb10010
    ctx->pc = 0x20f2c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f2c8: 0x7bb00000
    ctx->pc = 0x20f2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f2cc: 0x3e00008
    ctx->pc = 0x20F2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F2D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F0F8u: goto label_20f0f8;
            case 0x20F110u: goto label_20f110;
            case 0x20F138u: goto label_20f138;
            case 0x20F154u: goto label_20f154;
            case 0x20F254u: goto label_20f254;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F2D4u;
}
