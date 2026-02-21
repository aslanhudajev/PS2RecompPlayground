#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_over
// Address: 0x228060 - 0x228180
void do_over_0x228060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x228060u;

    // 0x228060: 0x27bdffc0
    ctx->pc = 0x228060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x228064: 0xffbf0030
    ctx->pc = 0x228064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x228068: 0xffb20020
    ctx->pc = 0x228068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22806c: 0xffb10010
    ctx->pc = 0x22806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x228070: 0xffb00000
    ctx->pc = 0x228070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x228074: 0x3c040031
    ctx->pc = 0x228074u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x228078: 0x8c830020
    ctx->pc = 0x228078u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x22807c: 0x3c020031
    ctx->pc = 0x22807cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228080: 0x8c52ff9c
    ctx->pc = 0x228080u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x228084: 0x3c020031
    ctx->pc = 0x228084u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228088: 0x8c42ffbc
    ctx->pc = 0x228088u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x22808c: 0x621021
    ctx->pc = 0x22808cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228090: 0xac820020
    ctx->pc = 0x228090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x228094: 0x2451ffc4
    ctx->pc = 0x228094u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x228098: 0x2863003c
    ctx->pc = 0x228098u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 60));
    // 0x22809c: 0x10600006
    ctx->pc = 0x22809Cu;
    {
        const bool branch_taken_0x22809c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2280A0u;
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 3));
        if (branch_taken_0x22809c) {
            ctx->pc = 0x2280B8u;
            goto label_2280b8;
        }
    }
    ctx->pc = 0x2280A4u;
    // 0x2280a4: 0x2842003c
    ctx->pc = 0x2280a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 60));
    // 0x2280a8: 0x14400003
    ctx->pc = 0x2280A8u;
    {
        const bool branch_taken_0x2280a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2280a8) {
            ctx->pc = 0x2280B8u;
            goto label_2280b8;
        }
    }
    ctx->pc = 0x2280B0u;
    // 0x2280b0: 0xc09787e
    ctx->pc = 0x2280B0u;
    SET_GPR_U32(ctx, 31, 0x2280B8u);
    ctx->pc = 0x25E1F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioGameOver_0x25e1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2280B8u; }
    }
    if (ctx->pc != 0x2280B8u) { return; }
    ctx->pc = 0x2280B8u;
label_2280b8:
    // 0x2280b8: 0x6200005
    ctx->pc = 0x2280B8u;
    {
        const bool branch_taken_0x2280b8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2280BCu;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 10));
        if (branch_taken_0x2280b8) {
            ctx->pc = 0x2280D0u;
            goto label_2280d0;
        }
    }
    ctx->pc = 0x2280C0u;
    // 0x2280c0: 0x24020009
    ctx->pc = 0x2280c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x2280c4: 0x223100b
    ctx->pc = 0x2280c4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 17));
    // 0x2280c8: 0x10000002
    ctx->pc = 0x2280C8u;
    {
        const bool branch_taken_0x2280c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2280CCu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2280c8) {
            ctx->pc = 0x2280D4u;
            goto label_2280d4;
        }
    }
    ctx->pc = 0x2280D0u;
label_2280d0:
    // 0x2280d0: 0x182d
    ctx->pc = 0x2280d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2280d4:
    // 0x2280d4: 0x3c014000
    ctx->pc = 0x2280d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x2280d8: 0x44816000
    ctx->pc = 0x2280d8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2280dc: 0xc080750
    ctx->pc = 0x2280DCu;
    SET_GPR_U32(ctx, 31, 0x2280E4u);
    ctx->pc = 0x2280E0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetDrawStringScale_0x201d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2280E4u; }
    }
    if (ctx->pc != 0x2280E4u) { return; }
    ctx->pc = 0x2280E4u;
    // 0x2280e4: 0x2404ff00
    ctx->pc = 0x2280e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x2280e8: 0x24050078
    ctx->pc = 0x2280e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 120));
    // 0x2280ec: 0x24060006
    ctx->pc = 0x2280ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2280f0: 0x3c0700ff
    ctx->pc = 0x2280f0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x2280f4: 0x34e7ffff
    ctx->pc = 0x2280f4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x2280f8: 0x240800a9
    ctx->pc = 0x2280f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 169));
    // 0x2280fc: 0xc0807a8
    ctx->pc = 0x2280FCu;
    SET_GPR_U32(ctx, 31, 0x228104u);
    ctx->pc = 0x228100u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228104u; }
    }
    if (ctx->pc != 0x228104u) { return; }
    ctx->pc = 0x228104u;
    // 0x228104: 0xc080756
    ctx->pc = 0x228104u;
    SET_GPR_U32(ctx, 31, 0x22810Cu);
    ctx->pc = 0x228108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        RestoreDrawStringScale_0x201d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22810Cu; }
    }
    if (ctx->pc != 0x22810Cu) { return; }
    ctx->pc = 0x22810Cu;
    // 0x22810c: 0x8e020010
    ctx->pc = 0x22810cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x228110: 0x511021
    ctx->pc = 0x228110u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x228114: 0x16400014
    ctx->pc = 0x228114u;
    {
        const bool branch_taken_0x228114 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x228118u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x228114) {
            ctx->pc = 0x228168u;
            goto label_228168;
        }
    }
    ctx->pc = 0x22811Cu;
    // 0x22811c: 0x3c040031
    ctx->pc = 0x22811cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x228120: 0x3c030031
    ctx->pc = 0x228120u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x228124: 0x8c82001c
    ctx->pc = 0x228124u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x228128: 0x8c63ffbc
    ctx->pc = 0x228128u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x22812c: 0x431023
    ctx->pc = 0x22812cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x228130: 0x1c40000d
    ctx->pc = 0x228130u;
    {
        const bool branch_taken_0x228130 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x228134u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x228130) {
            ctx->pc = 0x228168u;
            goto label_228168;
        }
    }
    ctx->pc = 0x228138u;
    // 0x228138: 0xc089a1e
    ctx->pc = 0x228138u;
    SET_GPR_U32(ctx, 31, 0x228140u);
    ctx->pc = 0x226878u;
    {
        const uint32_t __entryPc = ctx->pc;
        EndTower_0x226878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228140u; }
    }
    if (ctx->pc != 0x228140u) { return; }
    ctx->pc = 0x228140u;
    // 0x228140: 0x3c030035
    ctx->pc = 0x228140u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x228144: 0x24020001
    ctx->pc = 0x228144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x228148: 0xac629ba0
    ctx->pc = 0x228148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941600), GPR_U32(ctx, 2));
    // 0x22814c: 0x34048002
    ctx->pc = 0x22814cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32770));
    // 0x228150: 0xdfbf0030
    ctx->pc = 0x228150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228154: 0xdfb20020
    ctx->pc = 0x228154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228158: 0xdfb10010
    ctx->pc = 0x228158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22815c: 0xdfb00000
    ctx->pc = 0x22815cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228160: 0x80a0960
    ctx->pc = 0x228160u;
    ctx->pc = 0x228164u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x282580u;
    init_attract_mode_0x282580(rdram, ctx, runtime); return;
    ctx->pc = 0x228168u;
label_228168:
    // 0x228168: 0xdfbf0030
    ctx->pc = 0x228168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22816c: 0xdfb20020
    ctx->pc = 0x22816cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228170: 0xdfb10010
    ctx->pc = 0x228170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228174: 0xdfb00000
    ctx->pc = 0x228174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228178: 0x3e00008
    ctx->pc = 0x228178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22817Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2280B8u: goto label_2280b8;
            case 0x2280D0u: goto label_2280d0;
            case 0x2280D4u: goto label_2280d4;
            case 0x228168u: goto label_228168;
            default: break;
        }
        return;
    }
    ctx->pc = 0x228180u;
}
