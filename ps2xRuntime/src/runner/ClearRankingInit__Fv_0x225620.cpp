#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ClearRankingInit__Fv
// Address: 0x225620 - 0x22572c
void ClearRankingInit__Fv_0x225620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ClearRankingInit__Fv");


    ctx->pc = 0x225620u;

    // 0x225620: 0x27bdffe0
    ctx->pc = 0x225620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225624: 0x7fbf0010
    ctx->pc = 0x225624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x225628: 0x7fb00000
    ctx->pc = 0x225628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22562c: 0x3c020050
    ctx->pc = 0x22562cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x225630: 0xaf808b9c
    ctx->pc = 0x225630u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 0));
    // 0x225634: 0x70002e28
    ctx->pc = 0x225634u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x225638: 0x2446dd20
    ctx->pc = 0x225638u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294958368));
    // 0x22563c: 0x24030008
    ctx->pc = 0x22563cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x225640: 0x24040009
    ctx->pc = 0x225640u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
label_225644:
    // 0x225644: 0x8cc20004
    ctx->pc = 0x225644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x225648: 0x50440004
    ctx->pc = 0x225648u;
    {
        const bool branch_taken_0x225648 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x225648) {
            ctx->pc = 0x22564Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x22565Cu;
            goto label_22565c;
        }
    }
    ctx->pc = 0x225650u;
    // 0x225650: 0xacc30004
    ctx->pc = 0x225650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x225654: 0x0
    ctx->pc = 0x225654u;
    // NOP
    // 0x225658: 0x24a50001
    ctx->pc = 0x225658u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_22565c:
    // 0x22565c: 0x28a20002
    ctx->pc = 0x22565cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 2));
    // 0x225660: 0x1440fff8
    ctx->pc = 0x225660u;
    {
        const bool branch_taken_0x225660 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225664u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 840));
        if (branch_taken_0x225660) {
            ctx->pc = 0x225644u;
            goto label_225644;
        }
    }
    ctx->pc = 0x225668u;
    // 0x225668: 0x24020001
    ctx->pc = 0x225668u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22566c: 0xa7828bf4
    ctx->pc = 0x22566cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937588), (uint16_t)GPR_U32(ctx, 2));
    // 0x225670: 0x3c020051
    ctx->pc = 0x225670u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x225674: 0x244437a0
    ctx->pc = 0x225674u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    // 0x225678: 0xc086578
    ctx->pc = 0x225678u;
    SET_GPR_U32(ctx, 31, 0x225680u);
    ctx->pc = 0x22567Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 415));
    ctx->pc = 0x2195E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankSpr__13EntryDatClassFi_0x2195e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225680u; }
        else if (ctx->pc != 0x225680u) { ctx->pc = 0x225680u; }
    }
    if (ctx->pc != 0x225680u) { return; }
    ctx->pc = 0x225680u;
    // 0x225680: 0x3c010050
    ctx->pc = 0x225680u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x225684: 0x8025fec5
    ctx->pc = 0x225684u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x225688: 0x3c02002c
    ctx->pc = 0x225688u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x22568c: 0x244322d0
    ctx->pc = 0x22568cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8912));
    // 0x225690: 0x3c020051
    ctx->pc = 0x225690u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x225694: 0x244437a0
    ctx->pc = 0x225694u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    // 0x225698: 0x51080
    ctx->pc = 0x225698u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x22569c: 0x621021
    ctx->pc = 0x22569cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2256a0: 0xc086578
    ctx->pc = 0x2256A0u;
    SET_GPR_U32(ctx, 31, 0x2256A8u);
    ctx->pc = 0x2256A4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2195E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankSpr__13EntryDatClassFi_0x2195e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256A8u; }
        else if (ctx->pc != 0x2256A8u) { ctx->pc = 0x2256A8u; }
    }
    if (ctx->pc != 0x2256A8u) { return; }
    ctx->pc = 0x2256A8u;
    // 0x2256a8: 0x3c020051
    ctx->pc = 0x2256a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x2256ac: 0xc08637c
    ctx->pc = 0x2256ACu;
    SET_GPR_U32(ctx, 31, 0x2256B4u);
    ctx->pc = 0x2256B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218DF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        flush__13EntryDatClassFv_0x218df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256B4u; }
        else if (ctx->pc != 0x2256B4u) { ctx->pc = 0x2256B4u; }
    }
    if (ctx->pc != 0x2256B4u) { return; }
    ctx->pc = 0x2256B4u;
    // 0x2256b4: 0xc06878c
    ctx->pc = 0x2256B4u;
    SET_GPR_U32(ctx, 31, 0x2256BCu);
    ctx->pc = 0x2256B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256BCu; }
        else if (ctx->pc != 0x2256BCu) { ctx->pc = 0x2256BCu; }
    }
    if (ctx->pc != 0x2256BCu) { return; }
    ctx->pc = 0x2256BCu;
    // 0x2256bc: 0x70408628
    ctx->pc = 0x2256bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2256c0: 0x12000005
    ctx->pc = 0x2256C0u;
    {
        const bool branch_taken_0x2256c0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2256c0) {
            ctx->pc = 0x2256D8u;
            goto label_2256d8;
        }
    }
    ctx->pc = 0x2256C8u;
    // 0x2256c8: 0x3c020022
    ctx->pc = 0x2256c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x2256cc: 0x72002628
    ctx->pc = 0x2256ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2256d0: 0xc0690b0
    ctx->pc = 0x2256D0u;
    SET_GPR_U32(ctx, 31, 0x2256D8u);
    ctx->pc = 0x2256D4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 22320));
    ctx->pc = 0x1A42C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9TASK_LOOPFPFv_v_0x1a42c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256D8u; }
        else if (ctx->pc != 0x2256D8u) { ctx->pc = 0x2256D8u; }
    }
    if (ctx->pc != 0x2256D8u) { return; }
    ctx->pc = 0x2256D8u;
label_2256d8:
    // 0x2256d8: 0x3c020051
    ctx->pc = 0x2256d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x2256dc: 0x244434f0
    ctx->pc = 0x2256dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x2256e0: 0x3c020040
    ctx->pc = 0x2256e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
    // 0x2256e4: 0x34450008
    ctx->pc = 0x2256e4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 8));
    // 0x2256e8: 0x70003628
    ctx->pc = 0x2256e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2256ec: 0x70003e28
    ctx->pc = 0x2256ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2256f0: 0x24080040
    ctx->pc = 0x2256f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2256f4: 0xc086018
    ctx->pc = 0x2256F4u;
    SET_GPR_U32(ctx, 31, 0x2256FCu);
    ctx->pc = 0x2256F8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937568), GPR_U32(ctx, 16));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256FCu; }
        else if (ctx->pc != 0x2256FCu) { ctx->pc = 0x2256FCu; }
    }
    if (ctx->pc != 0x2256FCu) { return; }
    ctx->pc = 0x2256FCu;
    // 0x2256fc: 0x3c020051
    ctx->pc = 0x2256fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x225700: 0x244434f0
    ctx->pc = 0x225700u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x225704: 0xc086058
    ctx->pc = 0x225704u;
    SET_GPR_U32(ctx, 31, 0x22570Cu);
    ctx->pc = 0x225708u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967286));
    ctx->pc = 0x218160u;
    {
        const uint32_t __entryPc = ctx->pc;
        setBgmVolume__13SoundMgrClassFi_0x218160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22570Cu; }
        else if (ctx->pc != 0x22570Cu) { ctx->pc = 0x22570Cu; }
    }
    if (ctx->pc != 0x22570Cu) { return; }
    ctx->pc = 0x22570Cu;
    // 0x22570c: 0x83828b90
    ctx->pc = 0x22570cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937488)));
    // 0x225710: 0x24420001
    ctx->pc = 0x225710u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x225714: 0xc089564
    ctx->pc = 0x225714u;
    SET_GPR_U32(ctx, 31, 0x22571Cu);
    ctx->pc = 0x225718u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937488), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x225590u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearRankingLoop__Fv_0x225590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22571Cu; }
        else if (ctx->pc != 0x22571Cu) { ctx->pc = 0x22571Cu; }
    }
    if (ctx->pc != 0x22571Cu) { return; }
    ctx->pc = 0x22571Cu;
    // 0x22571c: 0x7bbf0010
    ctx->pc = 0x22571cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225720: 0x7bb00000
    ctx->pc = 0x225720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225724: 0x3e00008
    ctx->pc = 0x225724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225728u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x225644u: goto label_225644;
            case 0x22565Cu: goto label_22565c;
            case 0x2256D8u: goto label_2256d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22572Cu;
}
