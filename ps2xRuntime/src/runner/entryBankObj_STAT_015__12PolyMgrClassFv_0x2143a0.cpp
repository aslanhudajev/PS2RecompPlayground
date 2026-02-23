#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBankObj_STAT_015__12PolyMgrClassFv
// Address: 0x2143a0 - 0x21445c
void entryBankObj_STAT_015__12PolyMgrClassFv_0x2143a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBankObj_STAT_015__12PolyMgrClassFv");


    ctx->pc = 0x2143a0u;

    // 0x2143a0: 0x27bdffd0
    ctx->pc = 0x2143a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2143a4: 0x7fbf0020
    ctx->pc = 0x2143a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2143a8: 0x7fb10010
    ctx->pc = 0x2143a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2143ac: 0x7fb00000
    ctx->pc = 0x2143acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2143b0: 0x70808e28
    ctx->pc = 0x2143b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2143b4: 0x8c840000
    ctx->pc = 0x2143b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2143b8: 0x3c020050
    ctx->pc = 0x2143b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2143bc: 0x2443ea20
    ctx->pc = 0x2143bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x2143c0: 0x8f828c5c
    ctx->pc = 0x2143c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x2143c4: 0x8c850008
    ctx->pc = 0x2143c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2143c8: 0x52100
    ctx->pc = 0x2143c8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x2143cc: 0x1040000b
    ctx->pc = 0x2143CCu;
    {
        const bool branch_taken_0x2143cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2143D0u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x2143cc) {
            ctx->pc = 0x2143FCu;
            goto label_2143fc;
        }
    }
    ctx->pc = 0x2143D4u;
    // 0x2143d4: 0x51040
    ctx->pc = 0x2143d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x2143d8: 0x3c0101fb
    ctx->pc = 0x2143d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x2143dc: 0x410821
    ctx->pc = 0x2143dcu;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2143e0: 0x8423de48
    ctx->pc = 0x2143e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958664)));
    // 0x2143e4: 0x31040
    ctx->pc = 0x2143e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x2143e8: 0x431021
    ctx->pc = 0x2143e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2143ec: 0xc08551c
    ctx->pc = 0x2143ECu;
    SET_GPR_U32(ctx, 31, 0x2143F4u);
    ctx->pc = 0x2143F0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x215470u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPolCommonBuf__Fi_0x215470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2143F4u; }
        else if (ctx->pc != 0x2143F4u) { ctx->pc = 0x2143F4u; }
    }
    if (ctx->pc != 0x2143F4u) { return; }
    ctx->pc = 0x2143F4u;
    // 0x2143f4: 0x1000000a
    ctx->pc = 0x2143F4u;
    {
        const bool branch_taken_0x2143f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2143F8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x2143f4) {
            ctx->pc = 0x214420u;
            goto label_214420;
        }
    }
    ctx->pc = 0x2143FCu;
label_2143fc:
    // 0x2143fc: 0x51040
    ctx->pc = 0x2143fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x214400: 0x3c0101fb
    ctx->pc = 0x214400u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x214404: 0x410821
    ctx->pc = 0x214404u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x214408: 0x8423de48
    ctx->pc = 0x214408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958664)));
    // 0x21440c: 0x31040
    ctx->pc = 0x21440cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x214410: 0x431021
    ctx->pc = 0x214410u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214414: 0xc06878c
    ctx->pc = 0x214414u;
    SET_GPR_U32(ctx, 31, 0x21441Cu);
    ctx->pc = 0x214418u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21441Cu; }
        else if (ctx->pc != 0x21441Cu) { ctx->pc = 0x21441Cu; }
    }
    if (ctx->pc != 0x21441Cu) { return; }
    ctx->pc = 0x21441Cu;
    // 0x21441c: 0xae020004
    ctx->pc = 0x21441cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_214420:
    // 0x214420: 0x8f838cf8
    ctx->pc = 0x214420u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x214424: 0x3c010091
    ctx->pc = 0x214424u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214428: 0xa42019a8
    ctx->pc = 0x214428u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 6568), (uint16_t)GPR_U32(ctx, 0));
    // 0x21442c: 0x3c010091
    ctx->pc = 0x21442cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214430: 0x24040005
    ctx->pc = 0x214430u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x214434: 0x24020001
    ctx->pc = 0x214434u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x214438: 0x24630008
    ctx->pc = 0x214438u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x21443c: 0xac2319a4
    ctx->pc = 0x21443cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6564), GPR_U32(ctx, 3));
    // 0x214440: 0x8e230000
    ctx->pc = 0x214440u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x214444: 0xac64000c
    ctx->pc = 0x214444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x214448: 0x7bbf0020
    ctx->pc = 0x214448u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21444c: 0x7bb10010
    ctx->pc = 0x21444cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214450: 0x7bb00000
    ctx->pc = 0x214450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214454: 0x3e00008
    ctx->pc = 0x214454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214458u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2143FCu: goto label_2143fc;
            case 0x214420u: goto label_214420;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21445Cu;
}
