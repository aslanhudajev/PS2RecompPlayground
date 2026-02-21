#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CameraLimitPlayerDpos
// Address: 0x2a2588 - 0x2a26b0
void CameraLimitPlayerDpos_0x2a2588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a2588u;

    // 0x2a2588: 0x27bdffa0
    ctx->pc = 0x2a2588u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a258c: 0xffbf0040
    ctx->pc = 0x2a258cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a2590: 0xffb30030
    ctx->pc = 0x2a2590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a2594: 0xffb20020
    ctx->pc = 0x2a2594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a2598: 0xffb10010
    ctx->pc = 0x2a2598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a259c: 0xffb00000
    ctx->pc = 0x2a259cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a25a0: 0xe7b40050
    ctx->pc = 0x2a25a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a25a4: 0xa0802d
    ctx->pc = 0x2a25a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a25a8: 0xc0982d
    ctx->pc = 0x2a25a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a25ac: 0x24120001
    ctx->pc = 0x2a25acu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a25b0: 0x24022b00
    ctx->pc = 0x2a25b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2a25b4: 0x822018
    ctx->pc = 0x2a25b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2a25b8: 0x3c020032
    ctx->pc = 0x2a25b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2a25bc: 0x24421bc0
    ctx->pc = 0x2a25bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2a25c0: 0x828821
    ctx->pc = 0x2a25c0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a25c4: 0x3c020036
    ctx->pc = 0x2a25c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a25c8: 0x8c42db68
    ctx->pc = 0x2a25c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957928)));
    // 0x2a25cc: 0x10400020
    ctx->pc = 0x2A25CCu;
    {
        const bool branch_taken_0x2a25cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A25D0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x2a25cc) {
            ctx->pc = 0x2A2650u;
            goto label_2a2650;
        }
    }
    ctx->pc = 0x2A25D4u;
    // 0x2a25d4: 0x3c020036
    ctx->pc = 0x2a25d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a25d8: 0x8c42d804
    ctx->pc = 0x2a25d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957060)));
    // 0x2a25dc: 0x14400005
    ctx->pc = 0x2A25DCu;
    {
        const bool branch_taken_0x2a25dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A25E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a25dc) {
            ctx->pc = 0x2A25F4u;
            goto label_2a25f4;
        }
    }
    ctx->pc = 0x2A25E4u;
    // 0x2a25e4: 0x3c020036
    ctx->pc = 0x2a25e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a25e8: 0x8c42d808
    ctx->pc = 0x2a25e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957064)));
    // 0x2a25ec: 0x10400010
    ctx->pc = 0x2A25ECu;
    {
        const bool branch_taken_0x2a25ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A25F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a25ec) {
            ctx->pc = 0x2A2630u;
            goto label_2a2630;
        }
    }
    ctx->pc = 0x2A25F4u;
label_2a25f4:
    // 0x2a25f4: 0x8c43d934
    ctx->pc = 0x2a25f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x2a25f8: 0x24020029
    ctx->pc = 0x2a25f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 41));
    // 0x2a25fc: 0x10620005
    ctx->pc = 0x2A25FCu;
    {
        const bool branch_taken_0x2a25fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2A2600u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 37));
        if (branch_taken_0x2a25fc) {
            ctx->pc = 0x2A2614u;
            goto label_2a2614;
        }
    }
    ctx->pc = 0x2A2604u;
    // 0x2a2604: 0x10620003
    ctx->pc = 0x2A2604u;
    {
        const bool branch_taken_0x2a2604 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2A2608u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
        if (branch_taken_0x2a2604) {
            ctx->pc = 0x2A2614u;
            goto label_2a2614;
        }
    }
    ctx->pc = 0x2A260Cu;
    // 0x2a260c: 0x14620009
    ctx->pc = 0x2A260Cu;
    {
        const bool branch_taken_0x2a260c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2A2610u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a260c) {
            ctx->pc = 0x2A2634u;
            goto label_2a2634;
        }
    }
    ctx->pc = 0x2A2614u;
label_2a2614:
    // 0x2a2614: 0xc0953a8
    ctx->pc = 0x2A2614u;
    SET_GPR_U32(ctx, 31, 0x2A261Cu);
    ctx->pc = 0x254EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        IsGoldActive_0x254ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A261Cu; }
    }
    if (ctx->pc != 0x2A261Cu) { return; }
    ctx->pc = 0x2A261Cu;
    // 0x2a261c: 0x10400004
    ctx->pc = 0x2A261Cu;
    {
        const bool branch_taken_0x2a261c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A2620u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a261c) {
            ctx->pc = 0x2A2630u;
            goto label_2a2630;
        }
    }
    ctx->pc = 0x2A2624u;
    // 0x2a2624: 0x8c42dba8
    ctx->pc = 0x2a2624u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957992)));
    // 0x2a2628: 0x10400019
    ctx->pc = 0x2A2628u;
    {
        const bool branch_taken_0x2a2628 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A262Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a2628) {
            ctx->pc = 0x2A2690u;
            goto label_2a2690;
        }
    }
    ctx->pc = 0x2A2630u;
label_2a2630:
    // 0x2a2630: 0x3c020036
    ctx->pc = 0x2a2630u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a2634:
    // 0x2a2634: 0x8c44dbc0
    ctx->pc = 0x2a2634u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a2638: 0x220282d
    ctx->pc = 0x2a2638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a263c: 0x200302d
    ctx->pc = 0x2a263cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2640: 0xc0a88bc
    ctx->pc = 0x2A2640u;
    SET_GPR_U32(ctx, 31, 0x2A2648u);
    ctx->pc = 0x2A2644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A22F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamLimitPlayerDpos_0x2a22f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2648u; }
    }
    if (ctx->pc != 0x2A2648u) { return; }
    ctx->pc = 0x2A2648u;
    // 0x2a2648: 0x10000010
    ctx->pc = 0x2A2648u;
    {
        const bool branch_taken_0x2a2648 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A264Cu;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        if (branch_taken_0x2a2648) {
            ctx->pc = 0x2A268Cu;
            goto label_2a268c;
        }
    }
    ctx->pc = 0x2A2650u;
label_2a2650:
    // 0x2a2650: 0x3c020032
    ctx->pc = 0x2a2650u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2a2654: 0x8c43f7d0
    ctx->pc = 0x2a2654u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965200)));
    // 0x2a2658: 0x24020002
    ctx->pc = 0x2a2658u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a265c: 0x54620007
    ctx->pc = 0x2A265Cu;
    {
        const bool branch_taken_0x2a265c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2a265c) {
            ctx->pc = 0x2A2660u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2A267Cu;
            goto label_2a267c;
        }
    }
    ctx->pc = 0x2A2664u;
    // 0x2a2664: 0x220202d
    ctx->pc = 0x2a2664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2668: 0x200282d
    ctx->pc = 0x2a2668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a266c: 0xc0859c8
    ctx->pc = 0x2A266Cu;
    SET_GPR_U32(ctx, 31, 0x2A2674u);
    ctx->pc = 0x2A2670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x216720u;
    {
        const uint32_t __entryPc = ctx->pc;
        StdCamLimitPlayerDpos_0x216720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2674u; }
    }
    if (ctx->pc != 0x2A2674u) { return; }
    ctx->pc = 0x2A2674u;
    // 0x2a2674: 0x10000005
    ctx->pc = 0x2A2674u;
    {
        const bool branch_taken_0x2a2674 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A2678u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a2674) {
            ctx->pc = 0x2A268Cu;
            goto label_2a268c;
        }
    }
    ctx->pc = 0x2A267Cu;
label_2a267c:
    // 0x2a267c: 0xc09c164
    ctx->pc = 0x2A267Cu;
    SET_GPR_U32(ctx, 31, 0x2A2684u);
    ctx->pc = 0x2A2680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x270590u;
    {
        const uint32_t __entryPc = ctx->pc;
        screen_limitation_0x270590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2684u; }
    }
    if (ctx->pc != 0x2A2684u) { return; }
    ctx->pc = 0x2A2684u;
    // 0x2a2684: 0x40902d
    ctx->pc = 0x2a2684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2688: 0xe6140004
    ctx->pc = 0x2a2688u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2a268c:
    // 0x2a268c: 0x240102d
    ctx->pc = 0x2a268cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a2690:
    // 0x2a2690: 0xdfbf0040
    ctx->pc = 0x2a2690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2694: 0xdfb30030
    ctx->pc = 0x2a2694u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2698: 0xdfb20020
    ctx->pc = 0x2a2698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a269c: 0xdfb10010
    ctx->pc = 0x2a269cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a26a0: 0xdfb00000
    ctx->pc = 0x2a26a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a26a4: 0xc7b40050
    ctx->pc = 0x2a26a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a26a8: 0x3e00008
    ctx->pc = 0x2A26A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A26ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A25F4u: goto label_2a25f4;
            case 0x2A2614u: goto label_2a2614;
            case 0x2A2630u: goto label_2a2630;
            case 0x2A2634u: goto label_2a2634;
            case 0x2A2650u: goto label_2a2650;
            case 0x2A267Cu: goto label_2a267c;
            case 0x2A268Cu: goto label_2a268c;
            case 0x2A2690u: goto label_2a2690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A26B0u;
}
