#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_conv_fname
// Address: 0x1792a8 - 0x1793d8
void htci_conv_fname_0x1792a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_conv_fname");


    ctx->pc = 0x1792a8u;

    // 0x1792a8: 0x27bdffc0
    ctx->pc = 0x1792a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1792ac: 0xffb10010
    ctx->pc = 0x1792acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1792b0: 0xffb20020
    ctx->pc = 0x1792b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1792b4: 0xa0882d
    ctx->pc = 0x1792b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1792b8: 0xffbf0030
    ctx->pc = 0x1792b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1792bc: 0x80902d
    ctx->pc = 0x1792bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1792c0: 0xffb00000
    ctx->pc = 0x1792c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1792c4: 0xc05e47a
    ctx->pc = 0x1792C4u;
    SET_GPR_U32(ctx, 31, 0x1792CCu);
    ctx->pc = 0x1792C8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1791E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_is_inc_colon_0x1791e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1792CCu; }
        else if (ctx->pc != 0x1792CCu) { ctx->pc = 0x1792CCu; }
    }
    if (ctx->pc != 0x1792CCu) { return; }
    ctx->pc = 0x1792CCu;
    // 0x1792cc: 0x14400006
    ctx->pc = 0x1792CCu;
    {
        const bool branch_taken_0x1792cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1792D0u;
        SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
        if (branch_taken_0x1792cc) {
            ctx->pc = 0x1792E8u;
            goto label_1792e8;
        }
    }
    ctx->pc = 0x1792D4u;
    // 0x1792d4: 0x3c050024
    ctx->pc = 0x1792d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x1792d8: 0x220202d
    ctx->pc = 0x1792d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1792dc: 0xc05150e
    ctx->pc = 0x1792DCu;
    SET_GPR_U32(ctx, 31, 0x1792E4u);
    ctx->pc = 0x1792E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294944072));
    ctx->pc = 0x145438u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x145438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1792E4u; }
        else if (ctx->pc != 0x1792E4u) { ctx->pc = 0x1792E4u; }
    }
    if (ctx->pc != 0x1792E4u) { return; }
    ctx->pc = 0x1792E4u;
    // 0x1792e4: 0x3c100024
    ctx->pc = 0x1792e4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
label_1792e8:
    // 0x1792e8: 0x8202a440
    ctx->pc = 0x1792e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294943808)));
    // 0x1792ec: 0x14400007
    ctx->pc = 0x1792ECu;
    {
        const bool branch_taken_0x1792ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1792F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 92));
        if (branch_taken_0x1792ec) {
            ctx->pc = 0x17930Cu;
            goto label_17930c;
        }
    }
    ctx->pc = 0x1792F4u;
    // 0x1792f4: 0x82430000
    ctx->pc = 0x1792f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1792f8: 0x10620003
    ctx->pc = 0x1792F8u;
    {
        const bool branch_taken_0x1792f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1792FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
        if (branch_taken_0x1792f8) {
            ctx->pc = 0x179308u;
            goto label_179308;
        }
    }
    ctx->pc = 0x179300u;
    // 0x179300: 0x14620002
    ctx->pc = 0x179300u;
    {
        const bool branch_taken_0x179300 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x179300) {
            ctx->pc = 0x17930Cu;
            goto label_17930c;
        }
    }
    ctx->pc = 0x179308u;
label_179308:
    // 0x179308: 0x26520001
    ctx->pc = 0x179308u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_17930c:
    // 0x17930c: 0xc05e494
    ctx->pc = 0x17930Cu;
    SET_GPR_U32(ctx, 31, 0x179314u);
    ctx->pc = 0x179310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179250u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_is_bgn_host_0x179250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179314u; }
        else if (ctx->pc != 0x179314u) { ctx->pc = 0x179314u; }
    }
    if (ctx->pc != 0x179314u) { return; }
    ctx->pc = 0x179314u;
    // 0x179314: 0x24030001
    ctx->pc = 0x179314u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x179318: 0x14430019
    ctx->pc = 0x179318u;
    {
        const bool branch_taken_0x179318 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x17931Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179318) {
            ctx->pc = 0x179380u;
            goto label_179380;
        }
    }
    ctx->pc = 0x179320u;
    // 0x179320: 0x2610a440
    ctx->pc = 0x179320u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294943808));
    // 0x179324: 0x220202d
    ctx->pc = 0x179324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179328: 0xc051470
    ctx->pc = 0x179328u;
    SET_GPR_U32(ctx, 31, 0x179330u);
    ctx->pc = 0x17932Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1451C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x1451c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179330u; }
        else if (ctx->pc != 0x179330u) { ctx->pc = 0x179330u; }
    }
    if (ctx->pc != 0x179330u) { return; }
    ctx->pc = 0x179330u;
    // 0x179330: 0xc051554
    ctx->pc = 0x179330u;
    SET_GPR_U32(ctx, 31, 0x179338u);
    ctx->pc = 0x179334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179338u; }
        else if (ctx->pc != 0x179338u) { ctx->pc = 0x179338u; }
    }
    if (ctx->pc != 0x179338u) { return; }
    ctx->pc = 0x179338u;
    // 0x179338: 0x501021
    ctx->pc = 0x179338u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17933c: 0x2404005c
    ctx->pc = 0x17933cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 92));
    // 0x179340: 0x8050ffff
    ctx->pc = 0x179340u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x179344: 0x1204000d
    ctx->pc = 0x179344u;
    {
        const bool branch_taken_0x179344 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x179348u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 47));
        if (branch_taken_0x179344) {
            ctx->pc = 0x17937Cu;
            goto label_17937c;
        }
    }
    ctx->pc = 0x17934Cu;
    // 0x17934c: 0x1203000c
    ctx->pc = 0x17934Cu;
    {
        const bool branch_taken_0x17934c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x179350u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17934c) {
            ctx->pc = 0x179380u;
            goto label_179380;
        }
    }
    ctx->pc = 0x179354u;
    // 0x179354: 0x1200000a
    ctx->pc = 0x179354u;
    {
        const bool branch_taken_0x179354 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x179354) {
            ctx->pc = 0x179380u;
            goto label_179380;
        }
    }
    ctx->pc = 0x17935Cu;
    // 0x17935c: 0x82420000
    ctx->pc = 0x17935cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x179360: 0x10440007
    ctx->pc = 0x179360u;
    {
        const bool branch_taken_0x179360 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x179360) {
            ctx->pc = 0x179380u;
            goto label_179380;
        }
    }
    ctx->pc = 0x179368u;
    // 0x179368: 0x10430004
    ctx->pc = 0x179368u;
    {
        const bool branch_taken_0x179368 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x17936Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
        if (branch_taken_0x179368) {
            ctx->pc = 0x17937Cu;
            goto label_17937c;
        }
    }
    ctx->pc = 0x179370u;
    // 0x179370: 0x220202d
    ctx->pc = 0x179370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179374: 0xc051470
    ctx->pc = 0x179374u;
    SET_GPR_U32(ctx, 31, 0x17937Cu);
    ctx->pc = 0x179378u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294949016));
    ctx->pc = 0x1451C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x1451c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17937Cu; }
        else if (ctx->pc != 0x17937Cu) { ctx->pc = 0x17937Cu; }
    }
    if (ctx->pc != 0x17937Cu) { return; }
    ctx->pc = 0x17937Cu;
label_17937c:
    // 0x17937c: 0x240282d
    ctx->pc = 0x17937cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_179380:
    // 0x179380: 0xc051470
    ctx->pc = 0x179380u;
    SET_GPR_U32(ctx, 31, 0x179388u);
    ctx->pc = 0x179384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1451C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x1451c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179388u; }
        else if (ctx->pc != 0x179388u) { ctx->pc = 0x179388u; }
    }
    if (ctx->pc != 0x179388u) { return; }
    ctx->pc = 0x179388u;
    // 0x179388: 0xc051554
    ctx->pc = 0x179388u;
    SET_GPR_U32(ctx, 31, 0x179390u);
    ctx->pc = 0x17938Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179390u; }
        else if (ctx->pc != 0x179390u) { ctx->pc = 0x179390u; }
    }
    if (ctx->pc != 0x179390u) { return; }
    ctx->pc = 0x179390u;
    // 0x179390: 0x1840000c
    ctx->pc = 0x179390u;
    {
        const bool branch_taken_0x179390 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x179394u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x179390) {
            ctx->pc = 0x1793C4u;
            goto label_1793c4;
        }
    }
    ctx->pc = 0x179398u;
    // 0x179398: 0x220202d
    ctx->pc = 0x179398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17939c: 0x40182d
    ctx->pc = 0x17939cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1793a0: 0x2406005c
    ctx->pc = 0x1793a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 92));
    // 0x1793a4: 0x2405002f
    ctx->pc = 0x1793a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
label_1793a8:
    // 0x1793a8: 0x80820000
    ctx->pc = 0x1793a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1793ac: 0x50460001
    ctx->pc = 0x1793ACu;
    {
        const bool branch_taken_0x1793ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        if (branch_taken_0x1793ac) {
            ctx->pc = 0x1793B0u;
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->pc = 0x1793B4u;
            goto label_1793b4;
        }
    }
    ctx->pc = 0x1793B4u;
label_1793b4:
    // 0x1793b4: 0x2463ffff
    ctx->pc = 0x1793b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1793b8: 0x1460fffb
    ctx->pc = 0x1793B8u;
    {
        const bool branch_taken_0x1793b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1793BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1793b8) {
            ctx->pc = 0x1793A8u;
            goto label_1793a8;
        }
    }
    ctx->pc = 0x1793C0u;
    // 0x1793c0: 0xdfbf0030
    ctx->pc = 0x1793c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1793c4:
    // 0x1793c4: 0xdfb20020
    ctx->pc = 0x1793c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1793c8: 0xdfb10010
    ctx->pc = 0x1793c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1793cc: 0xdfb00000
    ctx->pc = 0x1793ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1793d0: 0x3e00008
    ctx->pc = 0x1793D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1793D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1792E8u: goto label_1792e8;
            case 0x179308u: goto label_179308;
            case 0x17930Cu: goto label_17930c;
            case 0x17937Cu: goto label_17937c;
            case 0x179380u: goto label_179380;
            case 0x1793A8u: goto label_1793a8;
            case 0x1793B4u: goto label_1793b4;
            case 0x1793C4u: goto label_1793c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1793D8u;
}
