#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TriggerCameraActivate
// Address: 0x2a26b0 - 0x2a27dc
void TriggerCameraActivate_0x2a26b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a26b0u;

    // 0x2a26b0: 0x27bdff90
    ctx->pc = 0x2a26b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a26b4: 0xffbf0060
    ctx->pc = 0x2a26b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a26b8: 0xffb40050
    ctx->pc = 0x2a26b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2a26bc: 0xffb30040
    ctx->pc = 0x2a26bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2a26c0: 0xffb20030
    ctx->pc = 0x2a26c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a26c4: 0xffb10020
    ctx->pc = 0x2a26c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a26c8: 0xffb00010
    ctx->pc = 0x2a26c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a26cc: 0x80a02d
    ctx->pc = 0x2a26ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26d0: 0xa0802d
    ctx->pc = 0x2a26d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26d4: 0xc0982d
    ctx->pc = 0x2a26d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26d8: 0x100882d
    ctx->pc = 0x2a26d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26dc: 0x4e0000a
    ctx->pc = 0x2A26DCu;
    {
        const bool branch_taken_0x2a26dc = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2A26E0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a26dc) {
            ctx->pc = 0x2A2708u;
            goto label_2a2708;
        }
    }
    ctx->pc = 0x2A26E4u;
    // 0x2a26e4: 0x3c020036
    ctx->pc = 0x2a26e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a26e8: 0x10e00004
    ctx->pc = 0x2A26E8u;
    {
        const bool branch_taken_0x2a26e8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A26ECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294958004));
        if (branch_taken_0x2a26e8) {
            ctx->pc = 0x2A26FCu;
            goto label_2a26fc;
        }
    }
    ctx->pc = 0x2A26F0u;
    // 0x2a26f0: 0x24020006
    ctx->pc = 0x2a26f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a26f4: 0x10000002
    ctx->pc = 0x2A26F4u;
    {
        const bool branch_taken_0x2a26f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A26F8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2a26f4) {
            ctx->pc = 0x2A2700u;
            goto label_2a2700;
        }
    }
    ctx->pc = 0x2A26FCu;
label_2a26fc:
    // 0x2a26fc: 0x24070028
    ctx->pc = 0x2a26fcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
label_2a2700:
    // 0x2a2700: 0x10000005
    ctx->pc = 0x2A2700u;
    {
        const bool branch_taken_0x2a2700 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A2704u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        if (branch_taken_0x2a2700) {
            ctx->pc = 0x2A2718u;
            goto label_2a2718;
        }
    }
    ctx->pc = 0x2A2708u;
label_2a2708:
    // 0x2a2708: 0x3c030036
    ctx->pc = 0x2a2708u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2a270c: 0x3c02000f
    ctx->pc = 0x2a270cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
    // 0x2a2710: 0x34424240
    ctx->pc = 0x2a2710u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16960));
    // 0x2a2714: 0xac62dbb4
    ctx->pc = 0x2a2714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958004), GPR_U32(ctx, 2));
label_2a2718:
    // 0x2a2718: 0x3c030036
    ctx->pc = 0x2a2718u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2a271c: 0x24020002
    ctx->pc = 0x2a271cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a2720: 0xac62dbac
    ctx->pc = 0x2a2720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957996), GPR_U32(ctx, 2));
    // 0x2a2724: 0x3c020036
    ctx->pc = 0x2a2724u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a2728: 0x8c43dbac
    ctx->pc = 0x2a2728u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957996)));
    // 0x2a272c: 0x24020002
    ctx->pc = 0x2a272cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a2730: 0x14620004
    ctx->pc = 0x2A2730u;
    {
        const bool branch_taken_0x2a2730 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2A2734u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a2730) {
            ctx->pc = 0x2A2744u;
            goto label_2a2744;
        }
    }
    ctx->pc = 0x2A2738u;
    // 0x2a2738: 0xc081776
    ctx->pc = 0x2A2738u;
    SET_GPR_U32(ctx, 31, 0x2A2740u);
    ctx->pc = 0x205DD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DisablePlayerControls_0x205dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2740u; }
    }
    if (ctx->pc != 0x2A2740u) { return; }
    ctx->pc = 0x2A2740u;
    // 0x2a2740: 0x3c020036
    ctx->pc = 0x2a2740u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a2744:
    // 0x2a2744: 0xac51dbb0
    ctx->pc = 0x2a2744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958000), GPR_U32(ctx, 17));
    // 0x2a2748: 0x3c020036
    ctx->pc = 0x2a2748u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a274c: 0xac52dbb8
    ctx->pc = 0x2a274cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958008), GPR_U32(ctx, 18));
    // 0x2a2750: 0x3c020036
    ctx->pc = 0x2a2750u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a2754: 0xac54de04
    ctx->pc = 0x2a2754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958596), GPR_U32(ctx, 20));
    // 0x2a2758: 0x3c014049
    ctx->pc = 0x2a2758u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2a275c: 0x34210fdb
    ctx->pc = 0x2a275cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a2760: 0x44810000
    ctx->pc = 0x2a2760u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a2764: 0xc66c0004
    ctx->pc = 0x2a2764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a2768: 0x3c04003a
    ctx->pc = 0x2a2768u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2a276c: 0x24842520
    ctx->pc = 0x2a276cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9504));
    // 0x2a2770: 0x3a0282d
    ctx->pc = 0x2a2770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2774: 0xc0b57e6
    ctx->pc = 0x2A2774u;
    SET_GPR_U32(ctx, 31, 0x2A277Cu);
    ctx->pc = 0x2A2778u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A277Cu; }
    }
    if (ctx->pc != 0x2A277Cu) { return; }
    ctx->pc = 0x2A277Cu;
    // 0x2a277c: 0x3a0202d
    ctx->pc = 0x2a277cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2780: 0x3a0282d
    ctx->pc = 0x2a2780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2784: 0xc0b580a
    ctx->pc = 0x2A2784u;
    SET_GPR_U32(ctx, 31, 0x2A278Cu);
    ctx->pc = 0x2A2788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D6028u;
    {
        const uint32_t __entryPc = ctx->pc;
        PitchVec3_0x2d6028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A278Cu; }
    }
    if (ctx->pc != 0x2A278Cu) { return; }
    ctx->pc = 0x2A278Cu;
    // 0x2a278c: 0x3c050036
    ctx->pc = 0x2a278cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)54 << 16));
    // 0x2a2790: 0x24a5de10
    ctx->pc = 0x2a2790u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958608));
    // 0x2a2794: 0xc6000000
    ctx->pc = 0x2a2794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2798: 0xe4a00030
    ctx->pc = 0x2a2798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x2a279c: 0xc6000004
    ctx->pc = 0x2a279cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a27a0: 0xe4a00034
    ctx->pc = 0x2a27a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x2a27a4: 0xc6000008
    ctx->pc = 0x2a27a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a27a8: 0xe4a00038
    ctx->pc = 0x2a27a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x2a27ac: 0xc09cf00
    ctx->pc = 0x2A27ACu;
    SET_GPR_U32(ctx, 31, 0x2A27B4u);
    ctx->pc = 0x2A27B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x273C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        LookInDirection_0x273c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A27B4u; }
    }
    if (ctx->pc != 0x2A27B4u) { return; }
    ctx->pc = 0x2A27B4u;
    // 0x2a27b4: 0xc081ab2
    ctx->pc = 0x2A27B4u;
    SET_GPR_U32(ctx, 31, 0x2A27BCu);
    ctx->pc = 0x206AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        vibrators_off_0x206ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A27BCu; }
    }
    if (ctx->pc != 0x2A27BCu) { return; }
    ctx->pc = 0x2A27BCu;
    // 0x2a27bc: 0xdfbf0060
    ctx->pc = 0x2a27bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a27c0: 0xdfb40050
    ctx->pc = 0x2a27c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a27c4: 0xdfb30040
    ctx->pc = 0x2a27c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a27c8: 0xdfb20030
    ctx->pc = 0x2a27c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a27cc: 0xdfb10020
    ctx->pc = 0x2a27ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a27d0: 0xdfb00010
    ctx->pc = 0x2a27d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a27d4: 0x3e00008
    ctx->pc = 0x2A27D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A27D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A26FCu: goto label_2a26fc;
            case 0x2A2700u: goto label_2a2700;
            case 0x2A2708u: goto label_2a2708;
            case 0x2A2718u: goto label_2a2718;
            case 0x2A2744u: goto label_2a2744;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A27DCu;
}
