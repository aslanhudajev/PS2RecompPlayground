#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entrySndPack_STAT00__13SoundMgrClassFv
// Address: 0x218440 - 0x2185bc
void entrySndPack_STAT00__13SoundMgrClassFv_0x218440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entrySndPack_STAT00__13SoundMgrClassFv");


    ctx->pc = 0x218440u;

    // 0x218440: 0x27bdffb0
    ctx->pc = 0x218440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x218444: 0x7fbf0040
    ctx->pc = 0x218444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x218448: 0x7fb30030
    ctx->pc = 0x218448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21844c: 0x7fb20020
    ctx->pc = 0x21844cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x218450: 0x7fb10010
    ctx->pc = 0x218450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x218454: 0x7fb00000
    ctx->pc = 0x218454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x218458: 0x8c860208
    ctx->pc = 0x218458u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 520)));
    // 0x21845c: 0x3c020029
    ctx->pc = 0x21845cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x218460: 0x2445af40
    ctx->pc = 0x218460u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294946624));
    // 0x218464: 0x3c020029
    ctx->pc = 0x218464u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x218468: 0x2443af42
    ctx->pc = 0x218468u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294946626));
    // 0x21846c: 0x3c020029
    ctx->pc = 0x21846cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x218470: 0x8cc60008
    ctx->pc = 0x218470u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x218474: 0x2442af44
    ctx->pc = 0x218474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946628));
    // 0x218478: 0x630c0
    ctx->pc = 0x218478u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 3));
    // 0x21847c: 0xa62821
    ctx->pc = 0x21847cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x218480: 0x461021
    ctx->pc = 0x218480u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x218484: 0x84b00000
    ctx->pc = 0x218484u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218488: 0x8c520000
    ctx->pc = 0x218488u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21848c: 0x661821
    ctx->pc = 0x21848cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x218490: 0x84710000
    ctx->pc = 0x218490u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218494: 0x1010c0
    ctx->pc = 0x218494u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
    // 0x218498: 0x441021
    ctx->pc = 0x218498u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21849c: 0x8c420004
    ctx->pc = 0x21849cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2184a0: 0x10400003
    ctx->pc = 0x2184A0u;
    {
        const bool branch_taken_0x2184a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2184A4u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2184a0) {
            ctx->pc = 0x2184B0u;
            goto label_2184b0;
        }
    }
    ctx->pc = 0x2184A8u;
    // 0x2184a8: 0x1000003d
    ctx->pc = 0x2184A8u;
    {
        const bool branch_taken_0x2184a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2184ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2184a8) {
            ctx->pc = 0x2185A0u;
            goto label_2185a0;
        }
    }
    ctx->pc = 0x2184B0u;
label_2184b0:
    // 0x2184b0: 0x26640284
    ctx->pc = 0x2184b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 644));
    // 0x2184b4: 0xc05ad72
    ctx->pc = 0x2184B4u;
    SET_GPR_U32(ctx, 31, 0x2184BCu);
    ctx->pc = 0x2184B8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Open_0x16b5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2184BCu; }
        else if (ctx->pc != 0x2184BCu) { ctx->pc = 0x2184BCu; }
    }
    if (ctx->pc != 0x2184BCu) { return; }
    ctx->pc = 0x2184BCu;
    // 0x2184bc: 0x14400002
    ctx->pc = 0x2184BCu;
    {
        const bool branch_taken_0x2184bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2184C0u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 592), GPR_U32(ctx, 2));
        if (branch_taken_0x2184bc) {
            ctx->pc = 0x2184C8u;
            goto label_2184c8;
        }
    }
    ctx->pc = 0x2184C4u;
    // 0x2184c4: 0xd
    ctx->pc = 0x2184c4u;
    runtime->handleBreak(rdram, ctx);
label_2184c8:
    // 0x2184c8: 0x104080
    ctx->pc = 0x2184c8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2184cc: 0x1101021
    ctx->pc = 0x2184ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2184d0: 0x3c030091
    ctx->pc = 0x2184d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)145 << 16));
    // 0x2184d4: 0xa670020e
    ctx->pc = 0x2184d4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 526), (uint16_t)GPR_U32(ctx, 16));
    // 0x2184d8: 0x210c0
    ctx->pc = 0x2184d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x2184dc: 0x24632800
    ctx->pc = 0x2184dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 10240));
    // 0x2184e0: 0xa671020c
    ctx->pc = 0x2184e0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 524), (uint16_t)GPR_U32(ctx, 17));
    // 0x2184e4: 0x621821
    ctx->pc = 0x2184e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2184e8: 0x8c650000
    ctx->pc = 0x2184e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2184ec: 0x3c010091
    ctx->pc = 0x2184ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x2184f0: 0x3c030091
    ctx->pc = 0x2184f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)145 << 16));
    // 0x2184f4: 0x24632808
    ctx->pc = 0x2184f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 10248));
    // 0x2184f8: 0x622021
    ctx->pc = 0x2184f8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2184fc: 0xae650220
    ctx->pc = 0x2184fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 544), GPR_U32(ctx, 5));
    // 0x218500: 0x8c870000
    ctx->pc = 0x218500u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x218504: 0x3c030091
    ctx->pc = 0x218504u;
    SET_GPR_U32(ctx, 3, ((uint32_t)145 << 16));
    // 0x218508: 0x24632804
    ctx->pc = 0x218508u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 10244));
    // 0x21850c: 0x622021
    ctx->pc = 0x21850cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218510: 0xae670228
    ctx->pc = 0x218510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 552), GPR_U32(ctx, 7));
    // 0x218514: 0x8c870000
    ctx->pc = 0x218514u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x218518: 0x3c030091
    ctx->pc = 0x218518u;
    SET_GPR_U32(ctx, 3, ((uint32_t)145 << 16));
    // 0x21851c: 0x24662d00
    ctx->pc = 0x21851cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 11520));
    // 0x218520: 0x3c030001
    ctx->pc = 0x218520u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x218524: 0x34652000
    ctx->pc = 0x218524u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 8192));
    // 0x218528: 0x3c030091
    ctx->pc = 0x218528u;
    SET_GPR_U32(ctx, 3, ((uint32_t)145 << 16));
    // 0x21852c: 0xae670224
    ctx->pc = 0x21852cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 548), GPR_U32(ctx, 7));
    // 0x218530: 0x24632760
    ctx->pc = 0x218530u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 10080));
    // 0x218534: 0xae660210
    ctx->pc = 0x218534u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 528), GPR_U32(ctx, 6));
    // 0x218538: 0x682021
    ctx->pc = 0x218538u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x21853c: 0xae650214
    ctx->pc = 0x21853cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 532), GPR_U32(ctx, 5));
    // 0x218540: 0x8c860000
    ctx->pc = 0x218540u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x218544: 0x3c030091
    ctx->pc = 0x218544u;
    SET_GPR_U32(ctx, 3, ((uint32_t)145 << 16));
    // 0x218548: 0x2463280c
    ctx->pc = 0x218548u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 10252));
    // 0x21854c: 0x622821
    ctx->pc = 0x21854cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218550: 0x3c030091
    ctx->pc = 0x218550u;
    SET_GPR_U32(ctx, 3, ((uint32_t)145 << 16));
    // 0x218554: 0x24632814
    ctx->pc = 0x218554u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 10260));
    // 0x218558: 0xae66022c
    ctx->pc = 0x218558u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 556), GPR_U32(ctx, 6));
    // 0x21855c: 0x8ca50000
    ctx->pc = 0x21855cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218560: 0x622021
    ctx->pc = 0x218560u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218564: 0x3c030091
    ctx->pc = 0x218564u;
    SET_GPR_U32(ctx, 3, ((uint32_t)145 << 16));
    // 0x218568: 0x24632810
    ctx->pc = 0x218568u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 10256));
    // 0x21856c: 0x621821
    ctx->pc = 0x21856cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218570: 0x24020001
    ctx->pc = 0x218570u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x218574: 0xae650230
    ctx->pc = 0x218574u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 560), GPR_U32(ctx, 5));
    // 0x218578: 0x8c840000
    ctx->pc = 0x218578u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21857c: 0xae640238
    ctx->pc = 0x21857cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 568), GPR_U32(ctx, 4));
    // 0x218580: 0x8c630000
    ctx->pc = 0x218580u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218584: 0xae630234
    ctx->pc = 0x218584u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 564), GPR_U32(ctx, 3));
    // 0x218588: 0x8c2327e0
    ctx->pc = 0x218588u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 10208)));
    // 0x21858c: 0xae630218
    ctx->pc = 0x21858cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 536), GPR_U32(ctx, 3));
    // 0x218590: 0xae72023c
    ctx->pc = 0x218590u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 572), GPR_U32(ctx, 18));
    // 0x218594: 0xae600268
    ctx->pc = 0x218594u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 616), GPR_U32(ctx, 0));
    // 0x218598: 0x8e630208
    ctx->pc = 0x218598u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 520)));
    // 0x21859c: 0xac62000c
    ctx->pc = 0x21859cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2185a0:
    // 0x2185a0: 0x7bbf0040
    ctx->pc = 0x2185a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2185a4: 0x7bb30030
    ctx->pc = 0x2185a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2185a8: 0x7bb20020
    ctx->pc = 0x2185a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2185ac: 0x7bb10010
    ctx->pc = 0x2185acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2185b0: 0x7bb00000
    ctx->pc = 0x2185b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2185b4: 0x3e00008
    ctx->pc = 0x2185B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2185B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2184B0u: goto label_2184b0;
            case 0x2184C8u: goto label_2184c8;
            case 0x2185A0u: goto label_2185a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2185BCu;
}
