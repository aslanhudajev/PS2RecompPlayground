#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_InitHn
// Address: 0x19d660 - 0x19d830
void SFTIM_InitHn_0x19d660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_InitHn");


    ctx->pc = 0x19d660u;

    // 0x19d660: 0x27bdffd0
    ctx->pc = 0x19d660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d664: 0x302d
    ctx->pc = 0x19d664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d668: 0xffb10010
    ctx->pc = 0x19d668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19d66c: 0xa0882d
    ctx->pc = 0x19d66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d670: 0xffb00000
    ctx->pc = 0x19d670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d674: 0x80802d
    ctx->pc = 0x19d674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d678: 0x3c05001a
    ctx->pc = 0x19d678u;
    SET_GPR_U32(ctx, 5, ((uint32_t)26 << 16));
    // 0x19d67c: 0xffbf0020
    ctx->pc = 0x19d67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19d680: 0xc0678be
    ctx->pc = 0x19D680u;
    SET_GPR_U32(ctx, 31, 0x19D688u);
    ctx->pc = 0x19D684u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959232));
    ctx->pc = 0x19E2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_SetTimeFn_0x19e2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D688u; }
        else if (ctx->pc != 0x19D688u) { ctx->pc = 0x19D688u; }
    }
    if (ctx->pc != 0x19D688u) { return; }
    ctx->pc = 0x19D688u;
    // 0x19d688: 0x3c05001a
    ctx->pc = 0x19d688u;
    SET_GPR_U32(ctx, 5, ((uint32_t)26 << 16));
    // 0x19d68c: 0x200202d
    ctx->pc = 0x19d68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d690: 0x24a5e0c8
    ctx->pc = 0x19d690u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959304));
    // 0x19d694: 0xc0678be
    ctx->pc = 0x19D694u;
    SET_GPR_U32(ctx, 31, 0x19D69Cu);
    ctx->pc = 0x19D698u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19E2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_SetTimeFn_0x19e2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D69Cu; }
        else if (ctx->pc != 0x19D69Cu) { ctx->pc = 0x19D69Cu; }
    }
    if (ctx->pc != 0x19D69Cu) { return; }
    ctx->pc = 0x19D69Cu;
    // 0x19d69c: 0x200202d
    ctx->pc = 0x19d69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6a0: 0x282d
    ctx->pc = 0x19d6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6a4: 0xc0678be
    ctx->pc = 0x19D6A4u;
    SET_GPR_U32(ctx, 31, 0x19D6ACu);
    ctx->pc = 0x19D6A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x19E2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_SetTimeFn_0x19e2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D6ACu; }
        else if (ctx->pc != 0x19D6ACu) { ctx->pc = 0x19D6ACu; }
    }
    if (ctx->pc != 0x19D6ACu) { return; }
    ctx->pc = 0x19D6ACu;
    // 0x19d6ac: 0x3c05001a
    ctx->pc = 0x19d6acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)26 << 16));
    // 0x19d6b0: 0x200202d
    ctx->pc = 0x19d6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6b4: 0x24a5e130
    ctx->pc = 0x19d6b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959408));
    // 0x19d6b8: 0xc0678be
    ctx->pc = 0x19D6B8u;
    SET_GPR_U32(ctx, 31, 0x19D6C0u);
    ctx->pc = 0x19D6BCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x19E2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_SetTimeFn_0x19e2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D6C0u; }
        else if (ctx->pc != 0x19D6C0u) { ctx->pc = 0x19D6C0u; }
    }
    if (ctx->pc != 0x19D6C0u) { return; }
    ctx->pc = 0x19D6C0u;
    // 0x19d6c0: 0x200202d
    ctx->pc = 0x19d6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6c4: 0x282d
    ctx->pc = 0x19d6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6c8: 0xc0678be
    ctx->pc = 0x19D6C8u;
    SET_GPR_U32(ctx, 31, 0x19D6D0u);
    ctx->pc = 0x19D6CCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x19E2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_SetTimeFn_0x19e2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D6D0u; }
        else if (ctx->pc != 0x19D6D0u) { ctx->pc = 0x19D6D0u; }
    }
    if (ctx->pc != 0x19D6D0u) { return; }
    ctx->pc = 0x19D6D0u;
    // 0x19d6d0: 0xae200014
    ctx->pc = 0x19d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x19d6d4: 0x26240090
    ctx->pc = 0x19d6d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 144));
    // 0x19d6d8: 0xc06760c
    ctx->pc = 0x19D6D8u;
    SET_GPR_U32(ctx, 31, 0x19D6E0u);
    ctx->pc = 0x19D6DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D830u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_InitTtu_0x19d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D6E0u; }
        else if (ctx->pc != 0x19D6E0u) { ctx->pc = 0x19D6E0u; }
    }
    if (ctx->pc != 0x19D6E0u) { return; }
    ctx->pc = 0x19D6E0u;
    // 0x19d6e0: 0x3c057fff
    ctx->pc = 0x19d6e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32767 << 16));
    // 0x19d6e4: 0x26240018
    ctx->pc = 0x19d6e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 24));
    // 0x19d6e8: 0xc06760c
    ctx->pc = 0x19D6E8u;
    SET_GPR_U32(ctx, 31, 0x19D6F0u);
    ctx->pc = 0x19D6ECu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    ctx->pc = 0x19D830u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_InitTtu_0x19d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D6F0u; }
        else if (ctx->pc != 0x19D6F0u) { ctx->pc = 0x19D6F0u; }
    }
    if (ctx->pc != 0x19D6F0u) { return; }
    ctx->pc = 0x19D6F0u;
    // 0x19d6f0: 0x26240040
    ctx->pc = 0x19d6f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 64));
    // 0x19d6f4: 0xc06760c
    ctx->pc = 0x19D6F4u;
    SET_GPR_U32(ctx, 31, 0x19D6FCu);
    ctx->pc = 0x19D6F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x19D830u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_InitTtu_0x19d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D6FCu; }
        else if (ctx->pc != 0x19D6FCu) { ctx->pc = 0x19D6FCu; }
    }
    if (ctx->pc != 0x19D6FCu) { return; }
    ctx->pc = 0x19D6FCu;
    // 0x19d6fc: 0x26240068
    ctx->pc = 0x19d6fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 104));
    // 0x19d700: 0xc06760c
    ctx->pc = 0x19D700u;
    SET_GPR_U32(ctx, 31, 0x19D708u);
    ctx->pc = 0x19D704u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x19D830u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_InitTtu_0x19d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D708u; }
        else if (ctx->pc != 0x19D708u) { ctx->pc = 0x19D708u; }
    }
    if (ctx->pc != 0x19D708u) { return; }
    ctx->pc = 0x19D708u;
    // 0x19d708: 0x262400b8
    ctx->pc = 0x19d708u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 184));
    // 0x19d70c: 0xc06760c
    ctx->pc = 0x19D70Cu;
    SET_GPR_U32(ctx, 31, 0x19D714u);
    ctx->pc = 0x19D710u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x19D830u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_InitTtu_0x19d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D714u; }
        else if (ctx->pc != 0x19D714u) { ctx->pc = 0x19D714u; }
    }
    if (ctx->pc != 0x19D714u) { return; }
    ctx->pc = 0x19D714u;
    // 0x19d714: 0x3c057fff
    ctx->pc = 0x19d714u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32767 << 16));
    // 0x19d718: 0x262400e0
    ctx->pc = 0x19d718u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 224));
    // 0x19d71c: 0xc06760c
    ctx->pc = 0x19D71Cu;
    SET_GPR_U32(ctx, 31, 0x19D724u);
    ctx->pc = 0x19D720u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    ctx->pc = 0x19D830u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_InitTtu_0x19d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D724u; }
        else if (ctx->pc != 0x19D724u) { ctx->pc = 0x19D724u; }
    }
    if (ctx->pc != 0x19D724u) { return; }
    ctx->pc = 0x19D724u;
    // 0x19d724: 0x2402ffff
    ctx->pc = 0x19d724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19d728: 0xae200108
    ctx->pc = 0x19d728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x19d72c: 0xae220114
    ctx->pc = 0x19d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 2));
    // 0x19d730: 0x262501b0
    ctx->pc = 0x19d730u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 432));
    // 0x19d734: 0xae20010c
    ctx->pc = 0x19d734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
    // 0x19d738: 0x2404001f
    ctx->pc = 0x19d738u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 31));
    // 0x19d73c: 0xae220110
    ctx->pc = 0x19d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
    // 0x19d740: 0x2623019c
    ctx->pc = 0x19d740u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 412));
    // 0x19d744: 0xae200118
    ctx->pc = 0x19d744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
    // 0x19d748: 0xae20011c
    ctx->pc = 0x19d748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 0));
    // 0x19d74c: 0x0
    ctx->pc = 0x19d74cu;
    // NOP
label_19d750:
    // 0x19d750: 0xac600000
    ctx->pc = 0x19d750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x19d754: 0x2484ffff
    ctx->pc = 0x19d754u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19d758: 0x2463fffc
    ctx->pc = 0x19d758u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x19d75c: 0x0
    ctx->pc = 0x19d75cu;
    // NOP
    // 0x19d760: 0x0
    ctx->pc = 0x19d760u;
    // NOP
    // 0x19d764: 0x481fffa
    ctx->pc = 0x19D764u;
    {
        const bool branch_taken_0x19d764 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x19d764) {
            ctx->pc = 0x19D750u;
            goto label_19d750;
        }
    }
    ctx->pc = 0x19D76Cu;
    // 0x19d76c: 0x24020001
    ctx->pc = 0x19d76cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d770: 0xae2001a4
    ctx->pc = 0x19d770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 0));
    // 0x19d774: 0xae2201a0
    ctx->pc = 0x19d774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
    // 0x19d778: 0x2404001f
    ctx->pc = 0x19d778u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 31));
    // 0x19d77c: 0xae2001a8
    ctx->pc = 0x19d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 0));
    // 0x19d780: 0x24a2007c
    ctx->pc = 0x19d780u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 124));
    // 0x19d784: 0xae2001ac
    ctx->pc = 0x19d784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 0));
label_19d788:
    // 0x19d788: 0xac400000
    ctx->pc = 0x19d788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19d78c: 0x2484ffff
    ctx->pc = 0x19d78cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19d790: 0x2442fffc
    ctx->pc = 0x19d790u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x19d794: 0x0
    ctx->pc = 0x19d794u;
    // NOP
    // 0x19d798: 0x0
    ctx->pc = 0x19d798u;
    // NOP
    // 0x19d79c: 0x481fffa
    ctx->pc = 0x19D79Cu;
    {
        const bool branch_taken_0x19d79c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x19d79c) {
            ctx->pc = 0x19D788u;
            goto label_19d788;
        }
    }
    ctx->pc = 0x19D7A4u;
    // 0x19d7a4: 0xae200254
    ctx->pc = 0x19d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 0));
    // 0x19d7a8: 0x2402ffff
    ctx->pc = 0x19d7a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19d7ac: 0xae220278
    ctx->pc = 0x19d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 2));
    // 0x19d7b0: 0x3c047fff
    ctx->pc = 0x19d7b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32767 << 16));
    // 0x19d7b4: 0x3c01bf80
    ctx->pc = 0x19d7b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x19d7b8: 0x44810000
    ctx->pc = 0x19d7b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x19d7bc: 0x2403fffb
    ctx->pc = 0x19d7bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x19d7c0: 0x8e250254
    ctx->pc = 0x19d7c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x19d7c4: 0x24020001
    ctx->pc = 0x19d7c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d7c8: 0x3484ffff
    ctx->pc = 0x19d7c8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x19d7cc: 0x240603e8
    ctx->pc = 0x19d7ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x19d7d0: 0x24070064
    ctx->pc = 0x19d7d0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 100));
    // 0x19d7d4: 0xae25027c
    ctx->pc = 0x19d7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 5));
    // 0x19d7d8: 0xae230240
    ctx->pc = 0x19d7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 3));
    // 0x19d7dc: 0xae24024c
    ctx->pc = 0x19d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 4));
    // 0x19d7e0: 0xae260258
    ctx->pc = 0x19d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 6));
    // 0x19d7e4: 0xae220264
    ctx->pc = 0x19d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    // 0x19d7e8: 0xae270268
    ctx->pc = 0x19d7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 7));
    // 0x19d7ec: 0xe6200274
    ctx->pc = 0x19d7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 628), bits); }
    // 0x19d7f0: 0xae230230
    ctx->pc = 0x19d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 3));
    // 0x19d7f4: 0xae220234
    ctx->pc = 0x19d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 2));
    // 0x19d7f8: 0xae230238
    ctx->pc = 0x19d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 3));
    // 0x19d7fc: 0xae22023c
    ctx->pc = 0x19d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    // 0x19d800: 0xae240244
    ctx->pc = 0x19d800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 4));
    // 0x19d804: 0xae200248
    ctx->pc = 0x19d804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 0));
    // 0x19d808: 0xae200250
    ctx->pc = 0x19d808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 0));
    // 0x19d80c: 0xae20025c
    ctx->pc = 0x19d80cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 0));
    // 0x19d810: 0xae200260
    ctx->pc = 0x19d810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
    // 0x19d814: 0xe620026c
    ctx->pc = 0x19d814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 620), bits); }
    // 0x19d818: 0xae200270
    ctx->pc = 0x19d818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
    // 0x19d81c: 0xdfbf0020
    ctx->pc = 0x19d81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d820: 0xdfb10010
    ctx->pc = 0x19d820u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d824: 0xdfb00000
    ctx->pc = 0x19d824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d828: 0x3e00008
    ctx->pc = 0x19D828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D82Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D750u: goto label_19d750;
            case 0x19D788u: goto label_19d788;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D830u;
}
