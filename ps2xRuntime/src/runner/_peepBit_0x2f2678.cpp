#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _peepBit
// Address: 0x2f2678 - 0x2f27ac
void _peepBit_0x2f2678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f2678u;

    // 0x2f2678: 0x27bdffa0
    ctx->pc = 0x2f2678u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f267c: 0xffb40040
    ctx->pc = 0x2f267cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f2680: 0x3c14003a
    ctx->pc = 0x2f2680u;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2f2684: 0xffb10010
    ctx->pc = 0x2f2684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f2688: 0x8e823064
    ctx->pc = 0x2f2688u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 12388)));
    // 0x2f268c: 0x80882d
    ctx->pc = 0x2f268cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2690: 0xffbf0050
    ctx->pc = 0x2f2690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f2694: 0xffb30030
    ctx->pc = 0x2f2694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f2698: 0xffb20020
    ctx->pc = 0x2f2698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f269c: 0x14400008
    ctx->pc = 0x2F269Cu;
    {
        const bool branch_taken_0x2f269c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F26A0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x2f269c) {
            ctx->pc = 0x2F26C0u;
            goto label_2f26c0;
        }
    }
    ctx->pc = 0x2F26A4u;
    // 0x2f26a4: 0x3c13003a
    ctx->pc = 0x2f26a4u;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x2f26a8: 0x8e6238dc
    ctx->pc = 0x2f26a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 14556)));
    // 0x2f26ac: 0x51102a
    ctx->pc = 0x2f26acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
    // 0x2f26b0: 0x10400032
    ctx->pc = 0x2F26B0u;
    {
        const bool branch_taken_0x2f26b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F26B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x2f26b0) {
            ctx->pc = 0x2F277Cu;
            goto label_2f277c;
        }
    }
    ctx->pc = 0x2F26B8u;
    // 0x2f26b8: 0x10000003
    ctx->pc = 0x2F26B8u;
    {
        const bool branch_taken_0x2f26b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f26b8) {
            ctx->pc = 0x2F26C8u;
            goto label_2f26c8;
        }
    }
    ctx->pc = 0x2F26C0u;
label_2f26c0:
    // 0x2f26c0: 0x3c13003a
    ctx->pc = 0x2f26c0u;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x2f26c4: 0x3c021000
    ctx->pc = 0x2f26c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_2f26c8:
    // 0x2f26c8: 0x3c048000
    ctx->pc = 0x2f26c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x2f26cc: 0x34422010
    ctx->pc = 0x2f26ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x2f26d0: 0x34844000
    ctx->pc = 0x2f26d0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 16384));
    // 0x2f26d4: 0x8c430000
    ctx->pc = 0x2f26d4u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2f26d8: 0x3c028000
    ctx->pc = 0x2f26d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x2f26dc: 0x641824
    ctx->pc = 0x2f26dcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f26e0: 0x14620016
    ctx->pc = 0x2F26E0u;
    {
        const bool branch_taken_0x2f26e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F26E4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f26e0) {
            ctx->pc = 0x2F273Cu;
            goto label_2f273c;
        }
    }
    ctx->pc = 0x2F26E8u;
    // 0x2f26e8: 0x3c10003a
    ctx->pc = 0x2f26e8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f26ec: 0x3c12003a
    ctx->pc = 0x2f26ecu;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
label_2f26f0:
    // 0x2f26f0: 0xc0102d
    ctx->pc = 0x2f26f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f26f4: 0x28421389
    ctx->pc = 0x2f26f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x2f26f8: 0x14400005
    ctx->pc = 0x2F26F8u;
    {
        const bool branch_taken_0x2f26f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F26FCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x2f26f8) {
            ctx->pc = 0x2F2710u;
            goto label_2f2710;
        }
    }
    ctx->pc = 0x2F2700u;
    // 0x2f2700: 0x3c02003a
    ctx->pc = 0x2f2700u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f2704: 0xc0bb848
    ctx->pc = 0x2F2704u;
    SET_GPR_U32(ctx, 31, 0x2F270Cu);
    ctx->pc = 0x2F2708u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12324)));
    ctx->pc = 0x2EE120u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x2ee120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F270Cu; }
    }
    if (ctx->pc != 0x2F270Cu) { return; }
    ctx->pc = 0x2F270Cu;
    // 0x2f270c: 0x302d
    ctx->pc = 0x2f270cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2710:
    // 0x2f2710: 0x3c031000
    ctx->pc = 0x2f2710u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f2714: 0x3c048000
    ctx->pc = 0x2f2714u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x2f2718: 0x34632010
    ctx->pc = 0x2f2718u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x2f271c: 0x34844000
    ctx->pc = 0x2f271cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 16384));
    // 0x2f2720: 0x8c620000
    ctx->pc = 0x2f2720u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2f2724: 0x3c058000
    ctx->pc = 0x2f2724u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x2f2728: 0x441024
    ctx->pc = 0x2f2728u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f272c: 0x1045fff0
    ctx->pc = 0x2F272Cu;
    {
        const bool branch_taken_0x2f272c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x2F2730u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x2f272c) {
            ctx->pc = 0x2F26F0u;
            goto label_2f26f0;
        }
    }
    ctx->pc = 0x2F2734u;
    // 0x2f2734: 0x10000005
    ctx->pc = 0x2F2734u;
    {
        const bool branch_taken_0x2f2734 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F2738u;
        SET_GPR_U32(ctx, 5, ((uint32_t)16384 << 16));
        if (branch_taken_0x2f2734) {
            ctx->pc = 0x2F274Cu;
            goto label_2f274c;
        }
    }
    ctx->pc = 0x2F273Cu;
label_2f273c:
    // 0x2f273c: 0x3c10003a
    ctx->pc = 0x2f273cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f2740: 0x3c12003a
    ctx->pc = 0x2f2740u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2f2744: 0x3c021000
    ctx->pc = 0x2f2744u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f2748: 0x3c054000
    ctx->pc = 0x2f2748u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16384 << 16));
label_2f274c:
    // 0x2f274c: 0x34422000
    ctx->pc = 0x2f274cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x2f2750: 0x26043948
    ctx->pc = 0x2f2750u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 14664));
    // 0x2f2754: 0xac450000
    ctx->pc = 0x2f2754u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x2f2758: 0x8c830010
    ctx->pc = 0x2f2758u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f275c: 0xc0bc904
    ctx->pc = 0x2F275Cu;
    SET_GPR_U32(ctx, 31, 0x2F2764u);
    ctx->pc = 0x2F2760u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12388), GPR_U32(ctx, 3));
    ctx->pc = 0x2F2410u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x2f2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2764u; }
    }
    if (ctx->pc != 0x2F2764u) { return; }
    ctx->pc = 0x2F2764u;
    // 0x2f2764: 0x2103c
    ctx->pc = 0x2f2764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f2768: 0x2103f
    ctx->pc = 0x2f2768u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f276c: 0x24030020
    ctx->pc = 0x2f276cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f2770: 0xae6338dc
    ctx->pc = 0x2f2770u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 14556), GPR_U32(ctx, 3));
    // 0x2f2774: 0x10000002
    ctx->pc = 0x2F2774u;
    {
        const bool branch_taken_0x2f2774 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F2778u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 14552), GPR_U32(ctx, 2));
        if (branch_taken_0x2f2774) {
            ctx->pc = 0x2F2780u;
            goto label_2f2780;
        }
    }
    ctx->pc = 0x2F277Cu;
label_2f277c:
    // 0x2f277c: 0x3c12003a
    ctx->pc = 0x2f277cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
label_2f2780:
    // 0x2f2780: 0x8e4338d8
    ctx->pc = 0x2f2780u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 14552)));
    // 0x2f2784: 0x111023
    ctx->pc = 0x2f2784u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x2f2788: 0xdfbf0050
    ctx->pc = 0x2f2788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f278c: 0xdfb40040
    ctx->pc = 0x2f278cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2790: 0x431006
    ctx->pc = 0x2f2790u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2f2794: 0xdfb30030
    ctx->pc = 0x2f2794u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2798: 0xdfb20020
    ctx->pc = 0x2f2798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f279c: 0xdfb10010
    ctx->pc = 0x2f279cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f27a0: 0xdfb00000
    ctx->pc = 0x2f27a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f27a4: 0x3e00008
    ctx->pc = 0x2F27A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F27A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F26C0u: goto label_2f26c0;
            case 0x2F26C8u: goto label_2f26c8;
            case 0x2F26F0u: goto label_2f26f0;
            case 0x2F2710u: goto label_2f2710;
            case 0x2F273Cu: goto label_2f273c;
            case 0x2F274Cu: goto label_2f274c;
            case 0x2F277Cu: goto label_2f277c;
            case 0x2F2780u: goto label_2f2780;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F27ACu;
}
