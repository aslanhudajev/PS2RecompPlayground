#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WorldOpen
// Address: 0x2775d0 - 0x2776a0
void WorldOpen_0x2775d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2775d0u;

    // 0x2775d0: 0x27bdffe0
    ctx->pc = 0x2775d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2775d4: 0xffbf0010
    ctx->pc = 0x2775d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2775d8: 0xffb00000
    ctx->pc = 0x2775d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2775dc: 0x24020006
    ctx->pc = 0x2775dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2775e0: 0x10820014
    ctx->pc = 0x2775E0u;
    {
        const bool branch_taken_0x2775e0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2775E4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2775e0) {
            ctx->pc = 0x277634u;
            goto label_277634;
        }
    }
    ctx->pc = 0x2775E8u;
    // 0x2775e8: 0x28820007
    ctx->pc = 0x2775e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 7));
    // 0x2775ec: 0x10400005
    ctx->pc = 0x2775ECu;
    {
        const bool branch_taken_0x2775ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2775F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x2775ec) {
            ctx->pc = 0x277604u;
            goto label_277604;
        }
    }
    ctx->pc = 0x2775F4u;
    // 0x2775f4: 0x1082000a
    ctx->pc = 0x2775F4u;
    {
        const bool branch_taken_0x2775f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2775F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2775f4) {
            ctx->pc = 0x277620u;
            goto label_277620;
        }
    }
    ctx->pc = 0x2775FCu;
    // 0x2775fc: 0x1000001d
    ctx->pc = 0x2775FCu;
    {
        const bool branch_taken_0x2775fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x277600u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966128));
        if (branch_taken_0x2775fc) {
            ctx->pc = 0x277674u;
            goto label_277674;
        }
    }
    ctx->pc = 0x277604u;
label_277604:
    // 0x277604: 0x24020008
    ctx->pc = 0x277604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x277608: 0x10820014
    ctx->pc = 0x277608u;
    {
        const bool branch_taken_0x277608 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x27760Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x277608) {
            ctx->pc = 0x27765Cu;
            goto label_27765c;
        }
    }
    ctx->pc = 0x277610u;
    // 0x277610: 0x14820017
    ctx->pc = 0x277610u;
    {
        const bool branch_taken_0x277610 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x277614u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x277610) {
            ctx->pc = 0x277670u;
            goto label_277670;
        }
    }
    ctx->pc = 0x277618u;
    // 0x277618: 0x1000001c
    ctx->pc = 0x277618u;
    {
        const bool branch_taken_0x277618 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27761Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x277618) {
            ctx->pc = 0x27768Cu;
            goto label_27768c;
        }
    }
    ctx->pc = 0x277620u;
label_277620:
    // 0x277620: 0x2404ffff
    ctx->pc = 0x277620u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277624: 0xc09da6e
    ctx->pc = 0x277624u;
    SET_GPR_U32(ctx, 31, 0x27762Cu);
    ctx->pc = 0x277628u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 510));
    ctx->pc = 0x2769B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasShard_0x2769b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27762Cu; }
    }
    if (ctx->pc != 0x27762Cu) { return; }
    ctx->pc = 0x27762Cu;
    // 0x27762c: 0x10000016
    ctx->pc = 0x27762Cu;
    {
        const bool branch_taken_0x27762c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x277630u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27762c) {
            ctx->pc = 0x277688u;
            goto label_277688;
        }
    }
    ctx->pc = 0x277634u;
label_277634:
    // 0x277634: 0x2404ffff
    ctx->pc = 0x277634u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277638: 0xc09da6e
    ctx->pc = 0x277638u;
    SET_GPR_U32(ctx, 31, 0x277640u);
    ctx->pc = 0x27763Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1022));
    ctx->pc = 0x2769B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasShard_0x2769b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277640u; }
    }
    if (ctx->pc != 0x277640u) { return; }
    ctx->pc = 0x277640u;
    // 0x277640: 0x10400013
    ctx->pc = 0x277640u;
    {
        const bool branch_taken_0x277640 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x277644u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x277640) {
            ctx->pc = 0x277690u;
            goto label_277690;
        }
    }
    ctx->pc = 0x277648u;
    // 0x277648: 0x2404ffff
    ctx->pc = 0x277648u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27764c: 0xc09d9fe
    ctx->pc = 0x27764Cu;
    SET_GPR_U32(ctx, 31, 0x277654u);
    ctx->pc = 0x277650u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4095));
    ctx->pc = 0x2767F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasRune_0x2767f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277654u; }
    }
    if (ctx->pc != 0x277654u) { return; }
    ctx->pc = 0x277654u;
    // 0x277654: 0x1000000c
    ctx->pc = 0x277654u;
    {
        const bool branch_taken_0x277654 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x277658u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x277654) {
            ctx->pc = 0x277688u;
            goto label_277688;
        }
    }
    ctx->pc = 0x27765Cu;
label_27765c:
    // 0x27765c: 0x2404ffff
    ctx->pc = 0x27765cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277660: 0xc09da6e
    ctx->pc = 0x277660u;
    SET_GPR_U32(ctx, 31, 0x277668u);
    ctx->pc = 0x277664u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2046));
    ctx->pc = 0x2769B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasShard_0x2769b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277668u; }
    }
    if (ctx->pc != 0x277668u) { return; }
    ctx->pc = 0x277668u;
    // 0x277668: 0x10000007
    ctx->pc = 0x277668u;
    {
        const bool branch_taken_0x277668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27766Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x277668) {
            ctx->pc = 0x277688u;
            goto label_277688;
        }
    }
    ctx->pc = 0x277670u;
label_277670:
    // 0x277670: 0x2442fb70
    ctx->pc = 0x277670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966128));
label_277674:
    // 0x277674: 0x41880
    ctx->pc = 0x277674u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x277678: 0x621821
    ctx->pc = 0x277678u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27767c: 0xc09dbb2
    ctx->pc = 0x27767Cu;
    SET_GPR_U32(ctx, 31, 0x277684u);
    ctx->pc = 0x277680u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x276EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnyPlayerHasAllCrystals_0x276ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277684u; }
    }
    if (ctx->pc != 0x277684u) { return; }
    ctx->pc = 0x277684u;
    // 0x277684: 0x24030001
    ctx->pc = 0x277684u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_277688:
    // 0x277688: 0x62800b
    ctx->pc = 0x277688u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
label_27768c:
    // 0x27768c: 0x200102d
    ctx->pc = 0x27768cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277690:
    // 0x277690: 0xdfbf0010
    ctx->pc = 0x277690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277694: 0xdfb00000
    ctx->pc = 0x277694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277698: 0x3e00008
    ctx->pc = 0x277698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27769Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x277604u: goto label_277604;
            case 0x277620u: goto label_277620;
            case 0x277634u: goto label_277634;
            case 0x27765Cu: goto label_27765c;
            case 0x277670u: goto label_277670;
            case 0x277674u: goto label_277674;
            case 0x277688u: goto label_277688;
            case 0x27768Cu: goto label_27768c;
            case 0x277690u: goto label_277690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2776A0u;
}
