#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DispPlDamEffReq__Fi
// Address: 0x212ff0 - 0x2130fc
void DispPlDamEffReq__Fi_0x212ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DispPlDamEffReq__Fi");


    ctx->pc = 0x212ff0u;

    // 0x212ff0: 0x27bdffc0
    ctx->pc = 0x212ff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x212ff4: 0x7fbf0030
    ctx->pc = 0x212ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x212ff8: 0x7fb20020
    ctx->pc = 0x212ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x212ffc: 0x70809628
    ctx->pc = 0x212ffcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x213000: 0x418c0
    ctx->pc = 0x213000u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x213004: 0x721823
    ctx->pc = 0x213004u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x213008: 0x32880
    ctx->pc = 0x213008u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21300c: 0x41900
    ctx->pc = 0x21300cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x213010: 0x722023
    ctx->pc = 0x213010u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x213014: 0x7fb10010
    ctx->pc = 0x213014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x213018: 0x3c030050
    ctx->pc = 0x213018u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x21301c: 0x7fb00000
    ctx->pc = 0x21301cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x213020: 0x2463e3b0
    ctx->pc = 0x213020u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960048));
    // 0x213024: 0x658021
    ctx->pc = 0x213024u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x213028: 0x418c0
    ctx->pc = 0x213028u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x21302c: 0x641823
    ctx->pc = 0x21302cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x213030: 0x320c0
    ctx->pc = 0x213030u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 3));
    // 0x213034: 0x3c030050
    ctx->pc = 0x213034u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x213038: 0x2463dde0
    ctx->pc = 0x213038u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958560));
    // 0x21303c: 0x641821
    ctx->pc = 0x21303cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x213040: 0x8c710000
    ctx->pc = 0x213040u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213044: 0x8e030000
    ctx->pc = 0x213044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x213048: 0x14600026
    ctx->pc = 0x213048u;
    {
        const bool branch_taken_0x213048 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x213048) {
            ctx->pc = 0x2130E4u;
            goto label_2130e4;
        }
    }
    ctx->pc = 0x213050u;
    // 0x213050: 0x3c020027
    ctx->pc = 0x213050u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x213054: 0x111880
    ctx->pc = 0x213054u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x213058: 0x24423600
    ctx->pc = 0x213058u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13824));
    // 0x21305c: 0x431021
    ctx->pc = 0x21305cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x213060: 0x8c450000
    ctx->pc = 0x213060u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213064: 0x70003628
    ctx->pc = 0x213064u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x213068: 0x70003e28
    ctx->pc = 0x213068u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21306c: 0x24080040
    ctx->pc = 0x21306cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    // 0x213070: 0x3c020051
    ctx->pc = 0x213070u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x213074: 0xc086018
    ctx->pc = 0x213074u;
    SET_GPR_U32(ctx, 31, 0x21307Cu);
    ctx->pc = 0x213078u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21307Cu; }
        else if (ctx->pc != 0x21307Cu) { ctx->pc = 0x21307Cu; }
    }
    if (ctx->pc != 0x21307Cu) { return; }
    ctx->pc = 0x21307Cu;
    // 0x21307c: 0x24060001
    ctx->pc = 0x21307cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x213080: 0xae060000
    ctx->pc = 0x213080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x213084: 0x24020032
    ctx->pc = 0x213084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
    // 0x213088: 0xae020004
    ctx->pc = 0x213088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x21308c: 0x3c010050
    ctx->pc = 0x21308cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x213090: 0x8427e3ec
    ctx->pc = 0x213090u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960108)));
    // 0x213094: 0x3c020027
    ctx->pc = 0x213094u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x213098: 0x244335e8
    ctx->pc = 0x213098u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 13800));
    // 0x21309c: 0x121080
    ctx->pc = 0x21309cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x2130a0: 0x72402628
    ctx->pc = 0x2130a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2130a4: 0x70002e28
    ctx->pc = 0x2130a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2130a8: 0xae070018
    ctx->pc = 0x2130a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    // 0x2130ac: 0x8e080018
    ctx->pc = 0x2130acu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2130b0: 0x2407003c
    ctx->pc = 0x2130b0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2130b4: 0x840c0
    ctx->pc = 0x2130b4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 3));
    // 0x2130b8: 0x681821
    ctx->pc = 0x2130b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2130bc: 0x431021
    ctx->pc = 0x2130bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2130c0: 0xc4400000
    ctx->pc = 0x2130c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2130c4: 0xe6000010
    ctx->pc = 0x2130c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2130c8: 0xc07bf14
    ctx->pc = 0x2130C8u;
    SET_GPR_U32(ctx, 31, 0x2130D0u);
    ctx->pc = 0x2130CCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    ctx->pc = 0x1EFC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_PadAct_nopause__Fiiii_0x1efc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2130D0u; }
        else if (ctx->pc != 0x2130D0u) { ctx->pc = 0x2130D0u; }
    }
    if (ctx->pc != 0x2130D0u) { return; }
    ctx->pc = 0x2130D0u;
    // 0x2130d0: 0x72402628
    ctx->pc = 0x2130d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2130d4: 0x24050001
    ctx->pc = 0x2130d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2130d8: 0x24060096
    ctx->pc = 0x2130d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 150));
    // 0x2130dc: 0xc07bf14
    ctx->pc = 0x2130DCu;
    SET_GPR_U32(ctx, 31, 0x2130E4u);
    ctx->pc = 0x2130E0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x1EFC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_PadAct_nopause__Fiiii_0x1efc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2130E4u; }
        else if (ctx->pc != 0x2130E4u) { ctx->pc = 0x2130E4u; }
    }
    if (ctx->pc != 0x2130E4u) { return; }
    ctx->pc = 0x2130E4u;
label_2130e4:
    // 0x2130e4: 0x7bbf0030
    ctx->pc = 0x2130e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2130e8: 0x7bb20020
    ctx->pc = 0x2130e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2130ec: 0x7bb10010
    ctx->pc = 0x2130ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2130f0: 0x7bb00000
    ctx->pc = 0x2130f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2130f4: 0x3e00008
    ctx->pc = 0x2130F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2130F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2130E4u: goto label_2130e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2130FCu;
}
