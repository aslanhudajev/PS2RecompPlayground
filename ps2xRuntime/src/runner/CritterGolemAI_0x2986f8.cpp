#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterGolemAI
// Address: 0x2986f8 - 0x298a0c
void CritterGolemAI_0x2986f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2986f8u;

    // 0x2986f8: 0x27bdffc0
    ctx->pc = 0x2986f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2986fc: 0xffbf0030
    ctx->pc = 0x2986fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x298700: 0xffb20020
    ctx->pc = 0x298700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x298704: 0xffb10010
    ctx->pc = 0x298704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x298708: 0xffb00000
    ctx->pc = 0x298708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29870c: 0xc0a6cf0
    ctx->pc = 0x29870Cu;
    SET_GPR_U32(ctx, 31, 0x298714u);
    ctx->pc = 0x298710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29B3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetSingleTargetPlayer_0x29b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298714u; }
    }
    if (ctx->pc != 0x298714u) { return; }
    ctx->pc = 0x298714u;
    // 0x298714: 0xc0a70ce
    ctx->pc = 0x298714u;
    SET_GPR_U32(ctx, 31, 0x29871Cu);
    ctx->pc = 0x298718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29C338u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterSetDifficulty_0x29c338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29871Cu; }
    }
    if (ctx->pc != 0x29871Cu) { return; }
    ctx->pc = 0x29871Cu;
    // 0x29871c: 0x8e020008
    ctx->pc = 0x29871cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x298720: 0x54400009
    ctx->pc = 0x298720u;
    {
        const bool branch_taken_0x298720 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x298720) {
            ctx->pc = 0x298724u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x298748u;
            goto label_298748;
        }
    }
    ctx->pc = 0x298728u;
    // 0x298728: 0x8e020b5c
    ctx->pc = 0x298728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2908)));
    // 0x29872c: 0x14400003
    ctx->pc = 0x29872Cu;
    {
        const bool branch_taken_0x29872c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x29872c) {
            ctx->pc = 0x29873Cu;
            goto label_29873c;
        }
    }
    ctx->pc = 0x298734u;
    // 0x298734: 0xc0a6e50
    ctx->pc = 0x298734u;
    SET_GPR_U32(ctx, 31, 0x29873Cu);
    ctx->pc = 0x298738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29B940u;
    {
        const uint32_t __entryPc = ctx->pc;
        MaxPlayerDist_0x29b940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29873Cu; }
    }
    if (ctx->pc != 0x29873Cu) { return; }
    ctx->pc = 0x29873Cu;
label_29873c:
    // 0x29873c: 0xc0a5dee
    ctx->pc = 0x29873Cu;
    SET_GPR_U32(ctx, 31, 0x298744u);
    ctx->pc = 0x298740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2977B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterActivate_0x2977b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298744u; }
    }
    if (ctx->pc != 0x298744u) { return; }
    ctx->pc = 0x298744u;
    // 0x298744: 0x8e020004
    ctx->pc = 0x298744u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_298748:
    // 0x298748: 0x86030124
    ctx->pc = 0x298748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x29874c: 0x4600004
    ctx->pc = 0x29874Cu;
    {
        const bool branch_taken_0x29874c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x298750u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 292)));
        if (branch_taken_0x29874c) {
            ctx->pc = 0x298760u;
            goto label_298760;
        }
    }
    ctx->pc = 0x298754u;
    // 0x298754: 0x24020090
    ctx->pc = 0x298754u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
    // 0x298758: 0x622018
    ctx->pc = 0x298758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29875c: 0x918821
    ctx->pc = 0x29875cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_298760:
    // 0x298760: 0xc0a5790
    ctx->pc = 0x298760u;
    SET_GPR_U32(ctx, 31, 0x298768u);
    ctx->pc = 0x298764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x295E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterMoveSetup_0x295e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298768u; }
    }
    if (ctx->pc != 0x298768u) { return; }
    ctx->pc = 0x298768u;
    // 0x298768: 0xc0a5796
    ctx->pc = 0x298768u;
    SET_GPR_U32(ctx, 31, 0x298770u);
    ctx->pc = 0x29876Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x295E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLookForCriticalMove_0x295e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298770u; }
    }
    if (ctx->pc != 0x298770u) { return; }
    ctx->pc = 0x298770u;
    // 0x298770: 0x3c020036
    ctx->pc = 0x298770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x298774: 0x8c42dbac
    ctx->pc = 0x298774u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957996)));
    // 0x298778: 0x10400008
    ctx->pc = 0x298778u;
    {
        const bool branch_taken_0x298778 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29877Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x298778) {
            ctx->pc = 0x29879Cu;
            goto label_29879c;
        }
    }
    ctx->pc = 0x298780u;
    // 0x298780: 0x86020126
    ctx->pc = 0x298780u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
    // 0x298784: 0x4430022
    ctx->pc = 0x298784u;
    {
        const bool branch_taken_0x298784 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x298784) {
            ctx->pc = 0x298788u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x298810u;
            goto label_298810;
        }
    }
    ctx->pc = 0x29878Cu;
    // 0x29878c: 0xc0a5a66
    ctx->pc = 0x29878Cu;
    SET_GPR_U32(ctx, 31, 0x298794u);
    ctx->pc = 0x298790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296998u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLookForReady_0x296998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298794u; }
    }
    if (ctx->pc != 0x298794u) { return; }
    ctx->pc = 0x298794u;
    // 0x298794: 0x10000018
    ctx->pc = 0x298794u;
    {
        const bool branch_taken_0x298794 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x298798u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
        if (branch_taken_0x298794) {
            ctx->pc = 0x2987F8u;
            goto label_2987f8;
        }
    }
    ctx->pc = 0x29879Cu;
label_29879c:
    // 0x29879c: 0x8c4207f8
    ctx->pc = 0x29879cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2040)));
    // 0x2987a0: 0x14400015
    ctx->pc = 0x2987A0u;
    {
        const bool branch_taken_0x2987a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2987A4u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
        if (branch_taken_0x2987a0) {
            ctx->pc = 0x2987F8u;
            goto label_2987f8;
        }
    }
    ctx->pc = 0x2987A8u;
    // 0x2987a8: 0x4430019
    ctx->pc = 0x2987A8u;
    {
        const bool branch_taken_0x2987a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2987a8) {
            ctx->pc = 0x2987ACu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x298810u;
            goto label_298810;
        }
    }
    ctx->pc = 0x2987B0u;
    // 0x2987b0: 0xc0a58b4
    ctx->pc = 0x2987B0u;
    SET_GPR_U32(ctx, 31, 0x2987B8u);
    ctx->pc = 0x2987B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2962D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLookForBlock_0x2962d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2987B8u; }
    }
    if (ctx->pc != 0x2987B8u) { return; }
    ctx->pc = 0x2987B8u;
    // 0x2987b8: 0x86020126
    ctx->pc = 0x2987b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
    // 0x2987bc: 0x4430014
    ctx->pc = 0x2987BCu;
    {
        const bool branch_taken_0x2987bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2987bc) {
            ctx->pc = 0x2987C0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x298810u;
            goto label_298810;
        }
    }
    ctx->pc = 0x2987C4u;
    // 0x2987c4: 0xc0a590a
    ctx->pc = 0x2987C4u;
    SET_GPR_U32(ctx, 31, 0x2987CCu);
    ctx->pc = 0x2987C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296428u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLookForAttack_0x296428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2987CCu; }
    }
    if (ctx->pc != 0x2987CCu) { return; }
    ctx->pc = 0x2987CCu;
    // 0x2987cc: 0x86020126
    ctx->pc = 0x2987ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
    // 0x2987d0: 0x443000f
    ctx->pc = 0x2987D0u;
    {
        const bool branch_taken_0x2987d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2987d0) {
            ctx->pc = 0x2987D4u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x298810u;
            goto label_298810;
        }
    }
    ctx->pc = 0x2987D8u;
    // 0x2987d8: 0xc0a59fa
    ctx->pc = 0x2987D8u;
    SET_GPR_U32(ctx, 31, 0x2987E0u);
    ctx->pc = 0x2987DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2967E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLookForTranslate_0x2967e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2987E0u; }
    }
    if (ctx->pc != 0x2987E0u) { return; }
    ctx->pc = 0x2987E0u;
    // 0x2987e0: 0x86020126
    ctx->pc = 0x2987e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
    // 0x2987e4: 0x443000a
    ctx->pc = 0x2987E4u;
    {
        const bool branch_taken_0x2987e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2987e4) {
            ctx->pc = 0x2987E8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x298810u;
            goto label_298810;
        }
    }
    ctx->pc = 0x2987ECu;
    // 0x2987ec: 0xc0a5a66
    ctx->pc = 0x2987ECu;
    SET_GPR_U32(ctx, 31, 0x2987F4u);
    ctx->pc = 0x2987F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296998u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLookForReady_0x296998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2987F4u; }
    }
    if (ctx->pc != 0x2987F4u) { return; }
    ctx->pc = 0x2987F4u;
    // 0x2987f4: 0x86020126
    ctx->pc = 0x2987f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
label_2987f8:
    // 0x2987f8: 0x4430004
    ctx->pc = 0x2987F8u;
    {
        const bool branch_taken_0x2987f8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2987f8) {
            ctx->pc = 0x2987FCu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x29880Cu;
            goto label_29880c;
        }
    }
    ctx->pc = 0x298800u;
    // 0x298800: 0x96020124
    ctx->pc = 0x298800u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x298804: 0xa6020126
    ctx->pc = 0x298804u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 2));
    // 0x298808: 0x8e040004
    ctx->pc = 0x298808u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29880c:
    // 0x29880c: 0x86020126
    ctx->pc = 0x29880cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
label_298810:
    // 0x298810: 0x24030090
    ctx->pc = 0x298810u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 144));
    // 0x298814: 0x431018
    ctx->pc = 0x298814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x298818: 0x8c830124
    ctx->pc = 0x298818u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x29881c: 0x432821
    ctx->pc = 0x29881cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298820: 0x3c020032
    ctx->pc = 0x298820u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x298824: 0x8c4207f8
    ctx->pc = 0x298824u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2040)));
    // 0x298828: 0x1040000e
    ctx->pc = 0x298828u;
    {
        const bool branch_taken_0x298828 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x298828) {
            ctx->pc = 0x298864u;
            goto label_298864;
        }
    }
    ctx->pc = 0x298830u;
    // 0x298830: 0x86020124
    ctx->pc = 0x298830u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x298834: 0x440000b
    ctx->pc = 0x298834u;
    {
        const bool branch_taken_0x298834 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x298838u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17));
        if (branch_taken_0x298834) {
            ctx->pc = 0x298864u;
            goto label_298864;
        }
    }
    ctx->pc = 0x29883Cu;
    // 0x29883c: 0x8e230000
    ctx->pc = 0x29883cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x298840: 0x10640008
    ctx->pc = 0x298840u;
    {
        const bool branch_taken_0x298840 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x298840) {
            ctx->pc = 0x298864u;
            goto label_298864;
        }
    }
    ctx->pc = 0x298848u;
    // 0x298848: 0x8ca20000
    ctx->pc = 0x298848u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29884c: 0x10440005
    ctx->pc = 0x29884Cu;
    {
        const bool branch_taken_0x29884c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x298850u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x29884c) {
            ctx->pc = 0x298864u;
            goto label_298864;
        }
    }
    ctx->pc = 0x298854u;
    // 0x298854: 0x10640003
    ctx->pc = 0x298854u;
    {
        const bool branch_taken_0x298854 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x298854) {
            ctx->pc = 0x298864u;
            goto label_298864;
        }
    }
    ctx->pc = 0x29885Cu;
    // 0x29885c: 0x54440004
    ctx->pc = 0x29885Cu;
    {
        const bool branch_taken_0x29885c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x29885c) {
            ctx->pc = 0x298860u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
            ctx->pc = 0x298870u;
            goto label_298870;
        }
    }
    ctx->pc = 0x298864u;
label_298864:
    // 0x298864: 0xc0a5636
    ctx->pc = 0x298864u;
    SET_GPR_U32(ctx, 31, 0x29886Cu);
    ctx->pc = 0x298868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2958D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterAnimate_0x2958d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29886Cu; }
    }
    if (ctx->pc != 0x29886Cu) { return; }
    ctx->pc = 0x29886Cu;
    // 0x29886c: 0x86020124
    ctx->pc = 0x29886cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
label_298870:
    // 0x298870: 0x4420001
    ctx->pc = 0x298870u;
    {
        const bool branch_taken_0x298870 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x298870) {
            ctx->pc = 0x298874u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 292), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x298878u;
            goto label_298878;
        }
    }
    ctx->pc = 0x298878u;
label_298878:
    // 0x298878: 0x8e040004
    ctx->pc = 0x298878u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29887c: 0x86020124
    ctx->pc = 0x29887cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x298880: 0x24030090
    ctx->pc = 0x298880u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 144));
    // 0x298884: 0x431018
    ctx->pc = 0x298884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x298888: 0x8c830124
    ctx->pc = 0x298888u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x29888c: 0x438821
    ctx->pc = 0x29888cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298890: 0xc600009c
    ctx->pc = 0x298890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298894: 0x46000064
    ctx->pc = 0x298894u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x298898: 0x44120800
    ctx->pc = 0x298898u;
    SET_GPR_U32(ctx, 18, *(uint32_t*)&ctx->f[1]);
    // 0x29889c: 0x8e230000
    ctx->pc = 0x29889cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2988a0: 0x24020011
    ctx->pc = 0x2988a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x2988a4: 0x14620020
    ctx->pc = 0x2988A4u;
    {
        const bool branch_taken_0x2988a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2988A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2988a4) {
            ctx->pc = 0x298928u;
            goto label_298928;
        }
    }
    ctx->pc = 0x2988ACu;
    // 0x2988ac: 0xc0841b8
    ctx->pc = 0x2988ACu;
    SET_GPR_U32(ctx, 31, 0x2988B4u);
    ctx->pc = 0x2988B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 132));
    ctx->pc = 0x2106E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimDone_0x2106e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2988B4u; }
    }
    if (ctx->pc != 0x2988B4u) { return; }
    ctx->pc = 0x2988B4u;
    // 0x2988b4: 0x50400007
    ctx->pc = 0x2988B4u;
    {
        const bool branch_taken_0x2988b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2988b4) {
            ctx->pc = 0x2988B8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->pc = 0x2988D4u;
            goto label_2988d4;
        }
    }
    ctx->pc = 0x2988BCu;
    // 0x2988bc: 0xc0a5e36
    ctx->pc = 0x2988BCu;
    SET_GPR_U32(ctx, 31, 0x2988C4u);
    ctx->pc = 0x2988C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2978D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDropItem_0x2978d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2988C4u; }
    }
    if (ctx->pc != 0x2988C4u) { return; }
    ctx->pc = 0x2988C4u;
    // 0x2988c4: 0xc0a4cb8
    ctx->pc = 0x2988C4u;
    SET_GPR_U32(ctx, 31, 0x2988CCu);
    ctx->pc = 0x2988C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2932E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDelInst_0x2932e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2988CCu; }
    }
    if (ctx->pc != 0x2988CCu) { return; }
    ctx->pc = 0x2988CCu;
    // 0x2988cc: 0x10000049
    ctx->pc = 0x2988CCu;
    {
        const bool branch_taken_0x2988cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2988D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2988cc) {
            ctx->pc = 0x2989F4u;
            goto label_2989f4;
        }
    }
    ctx->pc = 0x2988D4u;
label_2988d4:
    // 0x2988d4: 0x18600010
    ctx->pc = 0x2988D4u;
    {
        const bool branch_taken_0x2988d4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2988D8u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        if (branch_taken_0x2988d4) {
            ctx->pc = 0x298918u;
            goto label_298918;
        }
    }
    ctx->pc = 0x2988DCu;
    // 0x2988dc: 0x86020094
    ctx->pc = 0x2988dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2988e0: 0x1880000d
    ctx->pc = 0x2988E0u;
    {
        const bool branch_taken_0x2988e0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2988E4u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x2988e0) {
            ctx->pc = 0x298918u;
            goto label_298918;
        }
    }
    ctx->pc = 0x2988E8u;
    // 0x2988e8: 0x1840000b
    ctx->pc = 0x2988E8u;
    {
        const bool branch_taken_0x2988e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2988ECu;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x2988e8) {
            ctx->pc = 0x298918u;
            goto label_298918;
        }
    }
    ctx->pc = 0x2988F0u;
    // 0x2988f0: 0xa42823
    ctx->pc = 0x2988f0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2988f4: 0xa2001a
    ctx->pc = 0x2988f4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2988f8: 0x2812
    ctx->pc = 0x2988f8u;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x2988fc: 0x50400001
    ctx->pc = 0x2988FCu;
    {
        const bool branch_taken_0x2988fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2988fc) {
            ctx->pc = 0x298900u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x298904u;
            goto label_298904;
        }
    }
    ctx->pc = 0x298904u;
label_298904:
    // 0x298904: 0x240200ff
    ctx->pc = 0x298904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x298908: 0x8e0400cc
    ctx->pc = 0x298908u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x29890c: 0x452823
    ctx->pc = 0x29890cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x298910: 0xc0b40c0
    ctx->pc = 0x298910u;
    SET_GPR_U32(ctx, 31, 0x298918u);
    ctx->pc = 0x298914u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298918u; }
    }
    if (ctx->pc != 0x298918u) { return; }
    ctx->pc = 0x298918u;
label_298918:
    // 0x298918: 0x8e230000
    ctx->pc = 0x298918u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29891c: 0x24020011
    ctx->pc = 0x29891cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x298920: 0x10620004
    ctx->pc = 0x298920u;
    {
        const bool branch_taken_0x298920 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x298924u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x298920) {
            ctx->pc = 0x298934u;
            goto label_298934;
        }
    }
    ctx->pc = 0x298928u;
label_298928:
    // 0x298928: 0x8c4207f8
    ctx->pc = 0x298928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2040)));
    // 0x29892c: 0x14400013
    ctx->pc = 0x29892Cu;
    {
        const bool branch_taken_0x29892c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x298930u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x29892c) {
            ctx->pc = 0x29897Cu;
            goto label_29897c;
        }
    }
    ctx->pc = 0x298934u;
label_298934:
    // 0x298934: 0x200202d
    ctx->pc = 0x298934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298938: 0xc0a5b88
    ctx->pc = 0x298938u;
    SET_GPR_U32(ctx, 31, 0x298940u);
    ctx->pc = 0x29893Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoTransition_0x296e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298940u; }
    }
    if (ctx->pc != 0x298940u) { return; }
    ctx->pc = 0x298940u;
    // 0x298940: 0x200202d
    ctx->pc = 0x298940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298944: 0x220282d
    ctx->pc = 0x298944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298948: 0xc0a5b0a
    ctx->pc = 0x298948u;
    SET_GPR_U32(ctx, 31, 0x298950u);
    ctx->pc = 0x29894Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296C28u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoActions_0x296c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298950u; }
    }
    if (ctx->pc != 0x298950u) { return; }
    ctx->pc = 0x298950u;
    // 0x298950: 0x200202d
    ctx->pc = 0x298950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298954: 0xc0a5c9c
    ctx->pc = 0x298954u;
    SET_GPR_U32(ctx, 31, 0x29895Cu);
    ctx->pc = 0x298958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x297270u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterTranslate_0x297270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29895Cu; }
    }
    if (ctx->pc != 0x29895Cu) { return; }
    ctx->pc = 0x29895Cu;
    // 0x29895c: 0x14400004
    ctx->pc = 0x29895Cu;
    {
        const bool branch_taken_0x29895c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x298960u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29895c) {
            ctx->pc = 0x298970u;
            goto label_298970;
        }
    }
    ctx->pc = 0x298964u;
    // 0x298964: 0xc0a5bc8
    ctx->pc = 0x298964u;
    SET_GPR_U32(ctx, 31, 0x29896Cu);
    ctx->pc = 0x298968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterRotate_0x296f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29896Cu; }
    }
    if (ctx->pc != 0x29896Cu) { return; }
    ctx->pc = 0x29896Cu;
    // 0x29896c: 0x200202d
    ctx->pc = 0x29896cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_298970:
    // 0x298970: 0xc0a71d8
    ctx->pc = 0x298970u;
    SET_GPR_U32(ctx, 31, 0x298978u);
    ctx->pc = 0x298974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29C760u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLookAtPlayer_0x29c760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298978u; }
    }
    if (ctx->pc != 0x298978u) { return; }
    ctx->pc = 0x298978u;
    // 0x298978: 0x3c020032
    ctx->pc = 0x298978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_29897c:
    // 0x29897c: 0xc44e07fc
    ctx->pc = 0x29897cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x298980: 0x3c013f80
    ctx->pc = 0x298980u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x298984: 0x44810000
    ctx->pc = 0x298984u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x298988: 0x46007032
    ctx->pc = 0x298988u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29898c: 0x0
    ctx->pc = 0x29898cu;
    // NOP
    // 0x298990: 0x4501000e
    ctx->pc = 0x298990u;
    {
        const bool branch_taken_0x298990 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x298994u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
        if (branch_taken_0x298990) {
            ctx->pc = 0x2989CCu;
            goto label_2989cc;
        }
    }
    ctx->pc = 0x298998u;
    // 0x298998: 0x10800003
    ctx->pc = 0x298998u;
    {
        const bool branch_taken_0x298998 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x29899Cu;
        ctx->f[12] = FPU_MOV_S(ctx->f[14]);
        if (branch_taken_0x298998) {
            ctx->pc = 0x2989A8u;
            goto label_2989a8;
        }
    }
    ctx->pc = 0x2989A0u;
    // 0x2989a0: 0xc0b41ae
    ctx->pc = 0x2989A0u;
    SET_GPR_U32(ctx, 31, 0x2989A8u);
    ctx->pc = 0x2989A4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[14]);
    ctx->pc = 0x2D06B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetScale_0x2d06b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2989A8u; }
    }
    if (ctx->pc != 0x2989A8u) { return; }
    ctx->pc = 0x2989A8u;
label_2989a8:
    // 0x2989a8: 0x8e0400d0
    ctx->pc = 0x2989a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x2989ac: 0x10800010
    ctx->pc = 0x2989ACu;
    {
        const bool branch_taken_0x2989ac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2989B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2989ac) {
            ctx->pc = 0x2989F0u;
            goto label_2989f0;
        }
    }
    ctx->pc = 0x2989B4u;
    // 0x2989b4: 0xc44c07fc
    ctx->pc = 0x2989b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2989b8: 0x46006346
    ctx->pc = 0x2989b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2989bc: 0xc0b41ae
    ctx->pc = 0x2989BCu;
    SET_GPR_U32(ctx, 31, 0x2989C4u);
    ctx->pc = 0x2989C0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2D06B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetScale_0x2d06b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2989C4u; }
    }
    if (ctx->pc != 0x2989C4u) { return; }
    ctx->pc = 0x2989C4u;
    // 0x2989c4: 0x1000000b
    ctx->pc = 0x2989C4u;
    {
        const bool branch_taken_0x2989c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2989C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2989c4) {
            ctx->pc = 0x2989F4u;
            goto label_2989f4;
        }
    }
    ctx->pc = 0x2989CCu;
label_2989cc:
    // 0x2989cc: 0x10800003
    ctx->pc = 0x2989CCu;
    {
        const bool branch_taken_0x2989cc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2989D0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x2989cc) {
            ctx->pc = 0x2989DCu;
            goto label_2989dc;
        }
    }
    ctx->pc = 0x2989D4u;
    // 0x2989d4: 0xc0b41e4
    ctx->pc = 0x2989D4u;
    SET_GPR_U32(ctx, 31, 0x2989DCu);
    ctx->pc = 0x2989D8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2989DCu; }
    }
    if (ctx->pc != 0x2989DCu) { return; }
    ctx->pc = 0x2989DCu;
label_2989dc:
    // 0x2989dc: 0x8e0400d0
    ctx->pc = 0x2989dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x2989e0: 0x10800003
    ctx->pc = 0x2989E0u;
    {
        const bool branch_taken_0x2989e0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2989E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x2989e0) {
            ctx->pc = 0x2989F0u;
            goto label_2989f0;
        }
    }
    ctx->pc = 0x2989E8u;
    // 0x2989e8: 0xc0b41e4
    ctx->pc = 0x2989E8u;
    SET_GPR_U32(ctx, 31, 0x2989F0u);
    ctx->pc = 0x2989ECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2989F0u; }
    }
    if (ctx->pc != 0x2989F0u) { return; }
    ctx->pc = 0x2989F0u;
label_2989f0:
    // 0x2989f0: 0x24020001
    ctx->pc = 0x2989f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2989f4:
    // 0x2989f4: 0xdfbf0030
    ctx->pc = 0x2989f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2989f8: 0xdfb20020
    ctx->pc = 0x2989f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2989fc: 0xdfb10010
    ctx->pc = 0x2989fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298a00: 0xdfb00000
    ctx->pc = 0x298a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298a04: 0x3e00008
    ctx->pc = 0x298A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298A08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29873Cu: goto label_29873c;
            case 0x298748u: goto label_298748;
            case 0x298760u: goto label_298760;
            case 0x29879Cu: goto label_29879c;
            case 0x2987F8u: goto label_2987f8;
            case 0x29880Cu: goto label_29880c;
            case 0x298810u: goto label_298810;
            case 0x298864u: goto label_298864;
            case 0x298870u: goto label_298870;
            case 0x298878u: goto label_298878;
            case 0x2988D4u: goto label_2988d4;
            case 0x298904u: goto label_298904;
            case 0x298918u: goto label_298918;
            case 0x298928u: goto label_298928;
            case 0x298934u: goto label_298934;
            case 0x298970u: goto label_298970;
            case 0x29897Cu: goto label_29897c;
            case 0x2989A8u: goto label_2989a8;
            case 0x2989CCu: goto label_2989cc;
            case 0x2989DCu: goto label_2989dc;
            case 0x2989F0u: goto label_2989f0;
            case 0x2989F4u: goto label_2989f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x298A0Cu;
}
