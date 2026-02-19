#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_player_select
// Address: 0x288270 - 0x289d7c
void do_player_select_0x288270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x288270u;

label_288270:
    // 0x288270: 0x27bdff50
    ctx->pc = 0x288270u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_288274:
    // 0x288274: 0xffbf00a0
    ctx->pc = 0x288274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_288278:
    // 0x288278: 0xffbe0090
    ctx->pc = 0x288278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_28827c:
    // 0x28827c: 0xffb70080
    ctx->pc = 0x28827cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_288280:
    // 0x288280: 0xffb60070
    ctx->pc = 0x288280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_288284:
    // 0x288284: 0xffb50060
    ctx->pc = 0x288284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_288288:
    // 0x288288: 0xffb40050
    ctx->pc = 0x288288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_28828c:
    // 0x28828c: 0xffb30040
    ctx->pc = 0x28828cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_288290:
    // 0x288290: 0xffb20030
    ctx->pc = 0x288290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_288294:
    // 0x288294: 0xffb10020
    ctx->pc = 0x288294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_288298:
    // 0x288298: 0xffb00010
    ctx->pc = 0x288298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_28829c:
    // 0x28829c: 0x24170001
    ctx->pc = 0x28829cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
label_2882a0:
    // 0x2882a0: 0x802d
    ctx->pc = 0x2882a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2882a4:
    // 0x2882a4: 0x3c030035
    ctx->pc = 0x2882a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_2882a8:
    // 0x2882a8: 0x8c62a3c4
    ctx->pc = 0x2882a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943684)));
label_2882ac:
    // 0x2882ac: 0x1840000f
label_2882b0:
    if (ctx->pc == 0x2882B0u) {
        ctx->pc = 0x2882B0u;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2882B4u;
        goto label_2882b4;
    }
    ctx->pc = 0x2882ACu;
    {
        const bool branch_taken_0x2882ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2882B0u;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2882ac) {
            ctx->pc = 0x2882ECu;
            goto label_2882ec;
        }
    }
    ctx->pc = 0x2882B4u;
label_2882b4:
    // 0x2882b4: 0x2442ffff
    ctx->pc = 0x2882b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2882b8:
    // 0x2882b8: 0x14400005
label_2882bc:
    if (ctx->pc == 0x2882BCu) {
        ctx->pc = 0x2882BCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943684), GPR_U32(ctx, 2));
        ctx->pc = 0x2882C0u;
        goto label_2882c0;
    }
    ctx->pc = 0x2882B8u;
    {
        const bool branch_taken_0x2882b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2882BCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943684), GPR_U32(ctx, 2));
        if (branch_taken_0x2882b8) {
            ctx->pc = 0x2882D0u;
            goto label_2882d0;
        }
    }
    ctx->pc = 0x2882C0u;
label_2882c0:
    // 0x2882c0: 0xc09739e
label_2882c4:
    if (ctx->pc == 0x2882C4u) {
        ctx->pc = 0x2882C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2882C8u;
        goto label_2882c8;
    }
    ctx->pc = 0x2882C0u;
    SET_GPR_U32(ctx, 31, 0x2882C8u);
    ctx->pc = 0x2882C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x25CE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSelect_0x25ce78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882C8u; }
    }
    if (ctx->pc != 0x2882C8u) { return; }
    ctx->pc = 0x2882C8u;
label_2882c8:
    // 0x2882c8: 0x10000009
label_2882cc:
    if (ctx->pc == 0x2882CCu) {
        ctx->pc = 0x2882CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2882D0u;
        goto label_2882d0;
    }
    ctx->pc = 0x2882C8u;
    {
        const bool branch_taken_0x2882c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2882CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2882c8) {
            ctx->pc = 0x2882F0u;
            goto label_2882f0;
        }
    }
    ctx->pc = 0x2882D0u;
label_2882d0:
    // 0x2882d0: 0x24040154
    ctx->pc = 0x2882d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 340));
label_2882d4:
    // 0x2882d4: 0x24050104
    ctx->pc = 0x2882d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 260));
label_2882d8:
    // 0x2882d8: 0x3c013f80
    ctx->pc = 0x2882d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2882dc:
    // 0x2882dc: 0x44816000
    ctx->pc = 0x2882dcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_2882e0:
    // 0x2882e0: 0x3c06003b
    ctx->pc = 0x2882e0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2882e4:
    // 0x2882e4: 0xc080a9a
label_2882e8:
    if (ctx->pc == 0x2882E8u) {
        ctx->pc = 0x2882E8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294956912));
        ctx->pc = 0x2882ECu;
        goto label_2882ec;
    }
    ctx->pc = 0x2882E4u;
    SET_GPR_U32(ctx, 31, 0x2882ECu);
    ctx->pc = 0x2882E8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294956912));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882ECu; }
    }
    if (ctx->pc != 0x2882ECu) { return; }
    ctx->pc = 0x2882ECu;
label_2882ec:
    // 0x2882ec: 0x3c020031
    ctx->pc = 0x2882ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2882f0:
    // 0x2882f0: 0x24030001
    ctx->pc = 0x2882f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2882f4:
    // 0x2882f4: 0xc0a17b2
label_2882f8:
    if (ctx->pc == 0x2882F8u) {
        ctx->pc = 0x2882F8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 3664), GPR_U32(ctx, 3));
        ctx->pc = 0x2882FCu;
        goto label_2882fc;
    }
    ctx->pc = 0x2882F4u;
    SET_GPR_U32(ctx, 31, 0x2882FCu);
    ctx->pc = 0x2882F8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3664), GPR_U32(ctx, 3));
    ctx->pc = 0x285EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_active_players_0x285ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882FCu; }
    }
    if (ctx->pc != 0x2882FCu) { return; }
    ctx->pc = 0x2882FCu;
label_2882fc:
    // 0x2882fc: 0xc0a19a4
label_288300:
    if (ctx->pc == 0x288300u) {
        ctx->pc = 0x288300u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288304u;
        goto label_288304;
    }
    ctx->pc = 0x2882FCu;
    SET_GPR_U32(ctx, 31, 0x288304u);
    ctx->pc = 0x288300u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x286690u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_vmu_entries_0x286690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288304u; }
    }
    if (ctx->pc != 0x288304u) { return; }
    ctx->pc = 0x288304u;
label_288304:
    // 0x288304: 0x3c020032
    ctx->pc = 0x288304u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_288308:
    // 0x288308: 0x24531bc0
    ctx->pc = 0x288308u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 7104));
label_28830c:
    // 0x28830c: 0x24040002
    ctx->pc = 0x28830cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_288310:
    // 0x288310: 0x24030003
    ctx->pc = 0x288310u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_288314:
    // 0x288314: 0x0
    ctx->pc = 0x288314u;
    // NOP
label_288318:
    // 0x288318: 0x8e6200fc
    ctx->pc = 0x288318u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_28831c:
    // 0x28831c: 0x50440005
label_288320:
    if (ctx->pc == 0x288320u) {
        ctx->pc = 0x288320u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x288324u;
        goto label_288324;
    }
    ctx->pc = 0x28831Cu;
    {
        const bool branch_taken_0x28831c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x28831c) {
            ctx->pc = 0x288320u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x288334u;
            goto label_288334;
        }
    }
    ctx->pc = 0x288324u;
label_288324:
    // 0x288324: 0x50430004
label_288328:
    if (ctx->pc == 0x288328u) {
        ctx->pc = 0x288328u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28832Cu;
        goto label_28832c;
    }
    ctx->pc = 0x288324u;
    {
        const bool branch_taken_0x288324 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x288324) {
            ctx->pc = 0x288328u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x288338u;
            goto label_288338;
        }
    }
    ctx->pc = 0x28832Cu;
label_28832c:
    // 0x28832c: 0x10000003
label_288330:
    if (ctx->pc == 0x288330u) {
        ctx->pc = 0x288330u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x288334u;
        goto label_288334;
    }
    ctx->pc = 0x28832Cu;
    {
        const bool branch_taken_0x28832c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288330u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x28832c) {
            ctx->pc = 0x28833Cu;
            goto label_28833c;
        }
    }
    ctx->pc = 0x288334u;
label_288334:
    // 0x288334: 0xb82d
    ctx->pc = 0x288334u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_288338:
    // 0x288338: 0x26940001
    ctx->pc = 0x288338u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_28833c:
    // 0x28833c: 0x2a820004
    ctx->pc = 0x28833cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
label_288340:
    // 0x288340: 0x1440fff5
label_288344:
    if (ctx->pc == 0x288344u) {
        ctx->pc = 0x288344u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 11008));
        ctx->pc = 0x288348u;
        goto label_288348;
    }
    ctx->pc = 0x288340u;
    {
        const bool branch_taken_0x288340 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x288344u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 11008));
        if (branch_taken_0x288340) {
            ctx->pc = 0x288318u;
            goto label_288318;
        }
    }
    ctx->pc = 0x288348u;
label_288348:
    // 0x288348: 0x3c020032
    ctx->pc = 0x288348u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_28834c:
    // 0x28834c: 0x8c4207b4
    ctx->pc = 0x28834cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1972)));
label_288350:
    // 0x288350: 0x14400003
label_288354:
    if (ctx->pc == 0x288354u) {
        ctx->pc = 0x288354u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        ctx->pc = 0x288358u;
        goto label_288358;
    }
    ctx->pc = 0x288350u;
    {
        const bool branch_taken_0x288350 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x288354u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x288350) {
            ctx->pc = 0x288360u;
            goto label_288360;
        }
    }
    ctx->pc = 0x288358u;
label_288358:
    // 0x288358: 0x24020001
    ctx->pc = 0x288358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_28835c:
    // 0x28835c: 0xac62a3bc
    ctx->pc = 0x28835cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943676), GPR_U32(ctx, 2));
label_288360:
    // 0x288360: 0x1200000e
label_288364:
    if (ctx->pc == 0x288364u) {
        ctx->pc = 0x288364u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288368u;
        goto label_288368;
    }
    ctx->pc = 0x288360u;
    {
        const bool branch_taken_0x288360 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x288364u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x288360) {
            ctx->pc = 0x28839Cu;
            goto label_28839c;
        }
    }
    ctx->pc = 0x288368u;
label_288368:
    // 0x288368: 0x24100001
    ctx->pc = 0x288368u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_28836c:
    // 0x28836c: 0x0
    ctx->pc = 0x28836cu;
    // NOP
label_288370:
    // 0x288370: 0xc0a1234
label_288374:
    if (ctx->pc == 0x288374u) {
        ctx->pc = 0x288374u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288378u;
        goto label_288378;
    }
    ctx->pc = 0x288370u;
    SET_GPR_U32(ctx, 31, 0x288378u);
    ctx->pc = 0x288374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2848D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        serve_blits_0x2848d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288378u; }
    }
    if (ctx->pc != 0x288378u) { return; }
    ctx->pc = 0x288378u;
label_288378:
    // 0x288378: 0x10400002
label_28837c:
    if (ctx->pc == 0x28837Cu) {
        ctx->pc = 0x28837Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 20) & 0x1F));
        ctx->pc = 0x288380u;
        goto label_288380;
    }
    ctx->pc = 0x288378u;
    {
        const bool branch_taken_0x288378 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28837Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 20) & 0x1F));
        if (branch_taken_0x288378) {
            ctx->pc = 0x288384u;
            goto label_288384;
        }
    }
    ctx->pc = 0x288380u;
label_288380:
    // 0x288380: 0x3c2f025
    ctx->pc = 0x288380u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_288384:
    // 0x288384: 0x26940001
    ctx->pc = 0x288384u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_288388:
    // 0x288388: 0x2a820004
    ctx->pc = 0x288388u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
label_28838c:
    // 0x28838c: 0x1440fff8
label_288390:
    if (ctx->pc == 0x288390u) {
        ctx->pc = 0x288394u;
        goto label_288394;
    }
    ctx->pc = 0x28838Cu;
    {
        const bool branch_taken_0x28838c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28838c) {
            ctx->pc = 0x288370u;
            goto label_288370;
        }
    }
    ctx->pc = 0x288394u;
label_288394:
    // 0x288394: 0x10000004
label_288398:
    if (ctx->pc == 0x288398u) {
        ctx->pc = 0x288398u;
        if (GPR_U32(ctx, 30) != 0) SET_GPR_U32(ctx, 23, GPR_U32(ctx, 0));
        ctx->pc = 0x28839Cu;
        goto label_28839c;
    }
    ctx->pc = 0x288394u;
    {
        const bool branch_taken_0x288394 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288398u;
        if (GPR_U32(ctx, 30) != 0) SET_GPR_U32(ctx, 23, GPR_U32(ctx, 0));
        if (branch_taken_0x288394) {
            ctx->pc = 0x2883A8u;
            goto label_2883a8;
        }
    }
    ctx->pc = 0x28839Cu;
label_28839c:
    // 0x28839c: 0x2404ffff
    ctx->pc = 0x28839cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2883a0:
    // 0x2883a0: 0xc0a13e0
label_2883a4:
    if (ctx->pc == 0x2883A4u) {
        ctx->pc = 0x2883A4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2883A8u;
        goto label_2883a8;
    }
    ctx->pc = 0x2883A0u;
    SET_GPR_U32(ctx, 31, 0x2883A8u);
    ctx->pc = 0x2883A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x284F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        hide_select_blits_0x284f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2883A8u; }
    }
    if (ctx->pc != 0x2883A8u) { return; }
    ctx->pc = 0x2883A8u;
label_2883a8:
    // 0x2883a8: 0x3c040035
    ctx->pc = 0x2883a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2883ac:
    // 0x2883ac: 0x8c83a3c8
    ctx->pc = 0x2883acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294943688)));
label_2883b0:
    // 0x2883b0: 0x18600006
label_2883b4:
    if (ctx->pc == 0x2883B4u) {
        ctx->pc = 0x2883B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2883B8u;
        goto label_2883b8;
    }
    ctx->pc = 0x2883B0u;
    {
        const bool branch_taken_0x2883b0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2883B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2883b0) {
            ctx->pc = 0x2883CCu;
            goto label_2883cc;
        }
    }
    ctx->pc = 0x2883B8u;
label_2883b8:
    // 0x2883b8: 0x8c42ffc0
    ctx->pc = 0x2883b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967232)));
label_2883bc:
    // 0x2883bc: 0x621023
    ctx->pc = 0x2883bcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2883c0:
    // 0x2883c0: 0x4410002
label_2883c4:
    if (ctx->pc == 0x2883C4u) {
        ctx->pc = 0x2883C4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294943688), GPR_U32(ctx, 2));
        ctx->pc = 0x2883C8u;
        goto label_2883c8;
    }
    ctx->pc = 0x2883C0u;
    {
        const bool branch_taken_0x2883c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2883C4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294943688), GPR_U32(ctx, 2));
        if (branch_taken_0x2883c0) {
            ctx->pc = 0x2883CCu;
            goto label_2883cc;
        }
    }
    ctx->pc = 0x2883C8u;
label_2883c8:
    // 0x2883c8: 0xac80a3c8
    ctx->pc = 0x2883c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943688), GPR_U32(ctx, 0));
label_2883cc:
    // 0x2883cc: 0xa02d
    ctx->pc = 0x2883ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2883d0:
    // 0x2883d0: 0x3c020032
    ctx->pc = 0x2883d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2883d4:
    // 0x2883d4: 0x24531bc0
    ctx->pc = 0x2883d4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 7104));
label_2883d8:
    // 0x2883d8: 0x3c020035
    ctx->pc = 0x2883d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2883dc:
    // 0x2883dc: 0x8c42a3c4
    ctx->pc = 0x2883dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943684)));
label_2883e0:
    // 0x2883e0: 0x10400003
label_2883e4:
    if (ctx->pc == 0x2883E4u) {
        ctx->pc = 0x2883E4u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x2883E8u;
        goto label_2883e8;
    }
    ctx->pc = 0x2883E0u;
    {
        const bool branch_taken_0x2883e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2883E4u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 19), 4)));
        if (branch_taken_0x2883e0) {
            ctx->pc = 0x2883F0u;
            goto label_2883f0;
        }
    }
    ctx->pc = 0x2883E8u;
label_2883e8:
    // 0x2883e8: 0x10000601
label_2883ec:
    if (ctx->pc == 0x2883ECu) {
        ctx->pc = 0x2883ECu;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2883F0u;
        goto label_2883f0;
    }
    ctx->pc = 0x2883E8u;
    {
        const bool branch_taken_0x2883e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2883ECu;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2883e8) {
            ctx->pc = 0x289BF0u;
            goto label_289bf0;
        }
    }
    ctx->pc = 0x2883F0u;
label_2883f0:
    // 0x2883f0: 0x3c020035
    ctx->pc = 0x2883f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2883f4:
    // 0x2883f4: 0x8c42a3bc
    ctx->pc = 0x2883f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943676)));
label_2883f8:
    // 0x2883f8: 0x544005fe
label_2883fc:
    if (ctx->pc == 0x2883FCu) {
        ctx->pc = 0x2883FCu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x288400u;
        goto label_288400;
    }
    ctx->pc = 0x2883F8u;
    {
        const bool branch_taken_0x2883f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2883f8) {
            ctx->pc = 0x2883FCu;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x289BF4u;
            goto label_289bf4;
        }
    }
    ctx->pc = 0x288400u;
label_288400:
    // 0x288400: 0x8e6300fc
    ctx->pc = 0x288400u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_288404:
    // 0x288404: 0x24020002
    ctx->pc = 0x288404u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_288408:
    // 0x288408: 0x1062000c
label_28840c:
    if (ctx->pc == 0x28840Cu) {
        ctx->pc = 0x28840Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 3));
        ctx->pc = 0x288410u;
        goto label_288410;
    }
    ctx->pc = 0x288408u;
    {
        const bool branch_taken_0x288408 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28840Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x288408) {
            ctx->pc = 0x28843Cu;
            goto label_28843c;
        }
    }
    ctx->pc = 0x288410u;
label_288410:
    // 0x288410: 0x10400005
label_288414:
    if (ctx->pc == 0x288414u) {
        ctx->pc = 0x288414u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x288418u;
        goto label_288418;
    }
    ctx->pc = 0x288410u;
    {
        const bool branch_taken_0x288410 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x288414u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x288410) {
            ctx->pc = 0x288428u;
            goto label_288428;
        }
    }
    ctx->pc = 0x288418u;
label_288418:
    // 0x288418: 0x106205f5
label_28841c:
    if (ctx->pc == 0x28841Cu) {
        ctx->pc = 0x28841Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288420u;
        goto label_288420;
    }
    ctx->pc = 0x288418u;
    {
        const bool branch_taken_0x288418 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28841Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x288418) {
            ctx->pc = 0x289BF0u;
            goto label_289bf0;
        }
    }
    ctx->pc = 0x288420u;
label_288420:
    // 0x288420: 0x100005f1
label_288424:
    if (ctx->pc == 0x288424u) {
        ctx->pc = 0x288424u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x288428u;
        goto label_288428;
    }
    ctx->pc = 0x288420u;
    {
        const bool branch_taken_0x288420 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288424u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x288420) {
            ctx->pc = 0x289BE8u;
            goto label_289be8;
        }
    }
    ctx->pc = 0x288428u;
label_288428:
    // 0x288428: 0x24020003
    ctx->pc = 0x288428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_28842c:
    // 0x28842c: 0x10620588
label_288430:
    if (ctx->pc == 0x288430u) {
        ctx->pc = 0x288430u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288434u;
        goto label_288434;
    }
    ctx->pc = 0x28842Cu;
    {
        const bool branch_taken_0x28842c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x288430u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28842c) {
            ctx->pc = 0x289A50u;
            goto label_289a50;
        }
    }
    ctx->pc = 0x288434u;
label_288434:
    // 0x288434: 0x100005ec
label_288438:
    if (ctx->pc == 0x288438u) {
        ctx->pc = 0x288438u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x28843Cu;
        goto label_28843c;
    }
    ctx->pc = 0x288434u;
    {
        const bool branch_taken_0x288434 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288438u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x288434) {
            ctx->pc = 0x289BE8u;
            goto label_289be8;
        }
    }
    ctx->pc = 0x28843Cu;
label_28843c:
    // 0x28843c: 0x8e632ad4
    ctx->pc = 0x28843cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
label_288440:
    // 0x288440: 0x2c62000f
    ctx->pc = 0x288440u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 15));
label_288444:
    // 0x288444: 0x10400578
label_288448:
    if (ctx->pc == 0x288448u) {
        ctx->pc = 0x288448u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x28844Cu;
        goto label_28844c;
    }
    ctx->pc = 0x288444u;
    {
        const bool branch_taken_0x288444 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x288448u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x288444) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x28844Cu;
label_28844c:
    // 0x28844c: 0x2442d7c0
    ctx->pc = 0x28844cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956992));
label_288450:
    // 0x288450: 0x31880
    ctx->pc = 0x288450u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_288454:
    // 0x288454: 0x621821
    ctx->pc = 0x288454u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_288458:
    // 0x288458: 0x8c620000
    ctx->pc = 0x288458u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28845c:
    // 0x28845c: 0x400008
label_288460:
    if (ctx->pc == 0x288460u) {
        ctx->pc = 0x288464u;
        goto label_288464;
    }
    ctx->pc = 0x28845Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x288270u: goto label_288270;
            case 0x288274u: goto label_288274;
            case 0x288278u: goto label_288278;
            case 0x28827Cu: goto label_28827c;
            case 0x288280u: goto label_288280;
            case 0x288284u: goto label_288284;
            case 0x288288u: goto label_288288;
            case 0x28828Cu: goto label_28828c;
            case 0x288290u: goto label_288290;
            case 0x288294u: goto label_288294;
            case 0x288298u: goto label_288298;
            case 0x28829Cu: goto label_28829c;
            case 0x2882A0u: goto label_2882a0;
            case 0x2882A4u: goto label_2882a4;
            case 0x2882A8u: goto label_2882a8;
            case 0x2882ACu: goto label_2882ac;
            case 0x2882B0u: goto label_2882b0;
            case 0x2882B4u: goto label_2882b4;
            case 0x2882B8u: goto label_2882b8;
            case 0x2882BCu: goto label_2882bc;
            case 0x2882C0u: goto label_2882c0;
            case 0x2882C4u: goto label_2882c4;
            case 0x2882C8u: goto label_2882c8;
            case 0x2882CCu: goto label_2882cc;
            case 0x2882D0u: goto label_2882d0;
            case 0x2882D4u: goto label_2882d4;
            case 0x2882D8u: goto label_2882d8;
            case 0x2882DCu: goto label_2882dc;
            case 0x2882E0u: goto label_2882e0;
            case 0x2882E4u: goto label_2882e4;
            case 0x2882E8u: goto label_2882e8;
            case 0x2882ECu: goto label_2882ec;
            case 0x2882F0u: goto label_2882f0;
            case 0x2882F4u: goto label_2882f4;
            case 0x2882F8u: goto label_2882f8;
            case 0x2882FCu: goto label_2882fc;
            case 0x288300u: goto label_288300;
            case 0x288304u: goto label_288304;
            case 0x288308u: goto label_288308;
            case 0x28830Cu: goto label_28830c;
            case 0x288310u: goto label_288310;
            case 0x288314u: goto label_288314;
            case 0x288318u: goto label_288318;
            case 0x28831Cu: goto label_28831c;
            case 0x288320u: goto label_288320;
            case 0x288324u: goto label_288324;
            case 0x288328u: goto label_288328;
            case 0x28832Cu: goto label_28832c;
            case 0x288330u: goto label_288330;
            case 0x288334u: goto label_288334;
            case 0x288338u: goto label_288338;
            case 0x28833Cu: goto label_28833c;
            case 0x288340u: goto label_288340;
            case 0x288344u: goto label_288344;
            case 0x288348u: goto label_288348;
            case 0x28834Cu: goto label_28834c;
            case 0x288350u: goto label_288350;
            case 0x288354u: goto label_288354;
            case 0x288358u: goto label_288358;
            case 0x28835Cu: goto label_28835c;
            case 0x288360u: goto label_288360;
            case 0x288364u: goto label_288364;
            case 0x288368u: goto label_288368;
            case 0x28836Cu: goto label_28836c;
            case 0x288370u: goto label_288370;
            case 0x288374u: goto label_288374;
            case 0x288378u: goto label_288378;
            case 0x28837Cu: goto label_28837c;
            case 0x288380u: goto label_288380;
            case 0x288384u: goto label_288384;
            case 0x288388u: goto label_288388;
            case 0x28838Cu: goto label_28838c;
            case 0x288390u: goto label_288390;
            case 0x288394u: goto label_288394;
            case 0x288398u: goto label_288398;
            case 0x28839Cu: goto label_28839c;
            case 0x2883A0u: goto label_2883a0;
            case 0x2883A4u: goto label_2883a4;
            case 0x2883A8u: goto label_2883a8;
            case 0x2883ACu: goto label_2883ac;
            case 0x2883B0u: goto label_2883b0;
            case 0x2883B4u: goto label_2883b4;
            case 0x2883B8u: goto label_2883b8;
            case 0x2883BCu: goto label_2883bc;
            case 0x2883C0u: goto label_2883c0;
            case 0x2883C4u: goto label_2883c4;
            case 0x2883C8u: goto label_2883c8;
            case 0x2883CCu: goto label_2883cc;
            case 0x2883D0u: goto label_2883d0;
            case 0x2883D4u: goto label_2883d4;
            case 0x2883D8u: goto label_2883d8;
            case 0x2883DCu: goto label_2883dc;
            case 0x2883E0u: goto label_2883e0;
            case 0x2883E4u: goto label_2883e4;
            case 0x2883E8u: goto label_2883e8;
            case 0x2883ECu: goto label_2883ec;
            case 0x2883F0u: goto label_2883f0;
            case 0x2883F4u: goto label_2883f4;
            case 0x2883F8u: goto label_2883f8;
            case 0x2883FCu: goto label_2883fc;
            case 0x288400u: goto label_288400;
            case 0x288404u: goto label_288404;
            case 0x288408u: goto label_288408;
            case 0x28840Cu: goto label_28840c;
            case 0x288410u: goto label_288410;
            case 0x288414u: goto label_288414;
            case 0x288418u: goto label_288418;
            case 0x28841Cu: goto label_28841c;
            case 0x288420u: goto label_288420;
            case 0x288424u: goto label_288424;
            case 0x288428u: goto label_288428;
            case 0x28842Cu: goto label_28842c;
            case 0x288430u: goto label_288430;
            case 0x288434u: goto label_288434;
            case 0x288438u: goto label_288438;
            case 0x28843Cu: goto label_28843c;
            case 0x288440u: goto label_288440;
            case 0x288444u: goto label_288444;
            case 0x288448u: goto label_288448;
            case 0x28844Cu: goto label_28844c;
            case 0x288450u: goto label_288450;
            case 0x288454u: goto label_288454;
            case 0x288458u: goto label_288458;
            case 0x28845Cu: goto label_28845c;
            case 0x288460u: goto label_288460;
            case 0x288464u: goto label_288464;
            case 0x288468u: goto label_288468;
            case 0x28846Cu: goto label_28846c;
            case 0x288470u: goto label_288470;
            case 0x288474u: goto label_288474;
            case 0x288478u: goto label_288478;
            case 0x28847Cu: goto label_28847c;
            case 0x288480u: goto label_288480;
            case 0x288484u: goto label_288484;
            case 0x288488u: goto label_288488;
            case 0x28848Cu: goto label_28848c;
            case 0x288490u: goto label_288490;
            case 0x288494u: goto label_288494;
            case 0x288498u: goto label_288498;
            case 0x28849Cu: goto label_28849c;
            case 0x2884A0u: goto label_2884a0;
            case 0x2884A4u: goto label_2884a4;
            case 0x2884A8u: goto label_2884a8;
            case 0x2884ACu: goto label_2884ac;
            case 0x2884B0u: goto label_2884b0;
            case 0x2884B4u: goto label_2884b4;
            case 0x2884B8u: goto label_2884b8;
            case 0x2884BCu: goto label_2884bc;
            case 0x2884C0u: goto label_2884c0;
            case 0x2884C4u: goto label_2884c4;
            case 0x2884C8u: goto label_2884c8;
            case 0x2884CCu: goto label_2884cc;
            case 0x2884D0u: goto label_2884d0;
            case 0x2884D4u: goto label_2884d4;
            case 0x2884D8u: goto label_2884d8;
            case 0x2884DCu: goto label_2884dc;
            case 0x2884E0u: goto label_2884e0;
            case 0x2884E4u: goto label_2884e4;
            case 0x2884E8u: goto label_2884e8;
            case 0x2884ECu: goto label_2884ec;
            case 0x2884F0u: goto label_2884f0;
            case 0x2884F4u: goto label_2884f4;
            case 0x2884F8u: goto label_2884f8;
            case 0x2884FCu: goto label_2884fc;
            case 0x288500u: goto label_288500;
            case 0x288504u: goto label_288504;
            case 0x288508u: goto label_288508;
            case 0x28850Cu: goto label_28850c;
            case 0x288510u: goto label_288510;
            case 0x288514u: goto label_288514;
            case 0x288518u: goto label_288518;
            case 0x28851Cu: goto label_28851c;
            case 0x288520u: goto label_288520;
            case 0x288524u: goto label_288524;
            case 0x288528u: goto label_288528;
            case 0x28852Cu: goto label_28852c;
            case 0x288530u: goto label_288530;
            case 0x288534u: goto label_288534;
            case 0x288538u: goto label_288538;
            case 0x28853Cu: goto label_28853c;
            case 0x288540u: goto label_288540;
            case 0x288544u: goto label_288544;
            case 0x288548u: goto label_288548;
            case 0x28854Cu: goto label_28854c;
            case 0x288550u: goto label_288550;
            case 0x288554u: goto label_288554;
            case 0x288558u: goto label_288558;
            case 0x28855Cu: goto label_28855c;
            case 0x288560u: goto label_288560;
            case 0x288564u: goto label_288564;
            case 0x288568u: goto label_288568;
            case 0x28856Cu: goto label_28856c;
            case 0x288570u: goto label_288570;
            case 0x288574u: goto label_288574;
            case 0x288578u: goto label_288578;
            case 0x28857Cu: goto label_28857c;
            case 0x288580u: goto label_288580;
            case 0x288584u: goto label_288584;
            case 0x288588u: goto label_288588;
            case 0x28858Cu: goto label_28858c;
            case 0x288590u: goto label_288590;
            case 0x288594u: goto label_288594;
            case 0x288598u: goto label_288598;
            case 0x28859Cu: goto label_28859c;
            case 0x2885A0u: goto label_2885a0;
            case 0x2885A4u: goto label_2885a4;
            case 0x2885A8u: goto label_2885a8;
            case 0x2885ACu: goto label_2885ac;
            case 0x2885B0u: goto label_2885b0;
            case 0x2885B4u: goto label_2885b4;
            case 0x2885B8u: goto label_2885b8;
            case 0x2885BCu: goto label_2885bc;
            case 0x2885C0u: goto label_2885c0;
            case 0x2885C4u: goto label_2885c4;
            case 0x2885C8u: goto label_2885c8;
            case 0x2885CCu: goto label_2885cc;
            case 0x2885D0u: goto label_2885d0;
            case 0x2885D4u: goto label_2885d4;
            case 0x2885D8u: goto label_2885d8;
            case 0x2885DCu: goto label_2885dc;
            case 0x2885E0u: goto label_2885e0;
            case 0x2885E4u: goto label_2885e4;
            case 0x2885E8u: goto label_2885e8;
            case 0x2885ECu: goto label_2885ec;
            case 0x2885F0u: goto label_2885f0;
            case 0x2885F4u: goto label_2885f4;
            case 0x2885F8u: goto label_2885f8;
            case 0x2885FCu: goto label_2885fc;
            case 0x288600u: goto label_288600;
            case 0x288604u: goto label_288604;
            case 0x288608u: goto label_288608;
            case 0x28860Cu: goto label_28860c;
            case 0x288610u: goto label_288610;
            case 0x288614u: goto label_288614;
            case 0x288618u: goto label_288618;
            case 0x28861Cu: goto label_28861c;
            case 0x288620u: goto label_288620;
            case 0x288624u: goto label_288624;
            case 0x288628u: goto label_288628;
            case 0x28862Cu: goto label_28862c;
            case 0x288630u: goto label_288630;
            case 0x288634u: goto label_288634;
            case 0x288638u: goto label_288638;
            case 0x28863Cu: goto label_28863c;
            case 0x288640u: goto label_288640;
            case 0x288644u: goto label_288644;
            case 0x288648u: goto label_288648;
            case 0x28864Cu: goto label_28864c;
            case 0x288650u: goto label_288650;
            case 0x288654u: goto label_288654;
            case 0x288658u: goto label_288658;
            case 0x28865Cu: goto label_28865c;
            case 0x288660u: goto label_288660;
            case 0x288664u: goto label_288664;
            case 0x288668u: goto label_288668;
            case 0x28866Cu: goto label_28866c;
            case 0x288670u: goto label_288670;
            case 0x288674u: goto label_288674;
            case 0x288678u: goto label_288678;
            case 0x28867Cu: goto label_28867c;
            case 0x288680u: goto label_288680;
            case 0x288684u: goto label_288684;
            case 0x288688u: goto label_288688;
            case 0x28868Cu: goto label_28868c;
            case 0x288690u: goto label_288690;
            case 0x288694u: goto label_288694;
            case 0x288698u: goto label_288698;
            case 0x28869Cu: goto label_28869c;
            case 0x2886A0u: goto label_2886a0;
            case 0x2886A4u: goto label_2886a4;
            case 0x2886A8u: goto label_2886a8;
            case 0x2886ACu: goto label_2886ac;
            case 0x2886B0u: goto label_2886b0;
            case 0x2886B4u: goto label_2886b4;
            case 0x2886B8u: goto label_2886b8;
            case 0x2886BCu: goto label_2886bc;
            case 0x2886C0u: goto label_2886c0;
            case 0x2886C4u: goto label_2886c4;
            case 0x2886C8u: goto label_2886c8;
            case 0x2886CCu: goto label_2886cc;
            case 0x2886D0u: goto label_2886d0;
            case 0x2886D4u: goto label_2886d4;
            case 0x2886D8u: goto label_2886d8;
            case 0x2886DCu: goto label_2886dc;
            case 0x2886E0u: goto label_2886e0;
            case 0x2886E4u: goto label_2886e4;
            case 0x2886E8u: goto label_2886e8;
            case 0x2886ECu: goto label_2886ec;
            case 0x2886F0u: goto label_2886f0;
            case 0x2886F4u: goto label_2886f4;
            case 0x2886F8u: goto label_2886f8;
            case 0x2886FCu: goto label_2886fc;
            case 0x288700u: goto label_288700;
            case 0x288704u: goto label_288704;
            case 0x288708u: goto label_288708;
            case 0x28870Cu: goto label_28870c;
            case 0x288710u: goto label_288710;
            case 0x288714u: goto label_288714;
            case 0x288718u: goto label_288718;
            case 0x28871Cu: goto label_28871c;
            case 0x288720u: goto label_288720;
            case 0x288724u: goto label_288724;
            case 0x288728u: goto label_288728;
            case 0x28872Cu: goto label_28872c;
            case 0x288730u: goto label_288730;
            case 0x288734u: goto label_288734;
            case 0x288738u: goto label_288738;
            case 0x28873Cu: goto label_28873c;
            case 0x288740u: goto label_288740;
            case 0x288744u: goto label_288744;
            case 0x288748u: goto label_288748;
            case 0x28874Cu: goto label_28874c;
            case 0x288750u: goto label_288750;
            case 0x288754u: goto label_288754;
            case 0x288758u: goto label_288758;
            case 0x28875Cu: goto label_28875c;
            case 0x288760u: goto label_288760;
            case 0x288764u: goto label_288764;
            case 0x288768u: goto label_288768;
            case 0x28876Cu: goto label_28876c;
            case 0x288770u: goto label_288770;
            case 0x288774u: goto label_288774;
            case 0x288778u: goto label_288778;
            case 0x28877Cu: goto label_28877c;
            case 0x288780u: goto label_288780;
            case 0x288784u: goto label_288784;
            case 0x288788u: goto label_288788;
            case 0x28878Cu: goto label_28878c;
            case 0x288790u: goto label_288790;
            case 0x288794u: goto label_288794;
            case 0x288798u: goto label_288798;
            case 0x28879Cu: goto label_28879c;
            case 0x2887A0u: goto label_2887a0;
            case 0x2887A4u: goto label_2887a4;
            case 0x2887A8u: goto label_2887a8;
            case 0x2887ACu: goto label_2887ac;
            case 0x2887B0u: goto label_2887b0;
            case 0x2887B4u: goto label_2887b4;
            case 0x2887B8u: goto label_2887b8;
            case 0x2887BCu: goto label_2887bc;
            case 0x2887C0u: goto label_2887c0;
            case 0x2887C4u: goto label_2887c4;
            case 0x2887C8u: goto label_2887c8;
            case 0x2887CCu: goto label_2887cc;
            case 0x2887D0u: goto label_2887d0;
            case 0x2887D4u: goto label_2887d4;
            case 0x2887D8u: goto label_2887d8;
            case 0x2887DCu: goto label_2887dc;
            case 0x2887E0u: goto label_2887e0;
            case 0x2887E4u: goto label_2887e4;
            case 0x2887E8u: goto label_2887e8;
            case 0x2887ECu: goto label_2887ec;
            case 0x2887F0u: goto label_2887f0;
            case 0x2887F4u: goto label_2887f4;
            case 0x2887F8u: goto label_2887f8;
            case 0x2887FCu: goto label_2887fc;
            case 0x288800u: goto label_288800;
            case 0x288804u: goto label_288804;
            case 0x288808u: goto label_288808;
            case 0x28880Cu: goto label_28880c;
            case 0x288810u: goto label_288810;
            case 0x288814u: goto label_288814;
            case 0x288818u: goto label_288818;
            case 0x28881Cu: goto label_28881c;
            case 0x288820u: goto label_288820;
            case 0x288824u: goto label_288824;
            case 0x288828u: goto label_288828;
            case 0x28882Cu: goto label_28882c;
            case 0x288830u: goto label_288830;
            case 0x288834u: goto label_288834;
            case 0x288838u: goto label_288838;
            case 0x28883Cu: goto label_28883c;
            case 0x288840u: goto label_288840;
            case 0x288844u: goto label_288844;
            case 0x288848u: goto label_288848;
            case 0x28884Cu: goto label_28884c;
            case 0x288850u: goto label_288850;
            case 0x288854u: goto label_288854;
            case 0x288858u: goto label_288858;
            case 0x28885Cu: goto label_28885c;
            case 0x288860u: goto label_288860;
            case 0x288864u: goto label_288864;
            case 0x288868u: goto label_288868;
            case 0x28886Cu: goto label_28886c;
            case 0x288870u: goto label_288870;
            case 0x288874u: goto label_288874;
            case 0x288878u: goto label_288878;
            case 0x28887Cu: goto label_28887c;
            case 0x288880u: goto label_288880;
            case 0x288884u: goto label_288884;
            case 0x288888u: goto label_288888;
            case 0x28888Cu: goto label_28888c;
            case 0x288890u: goto label_288890;
            case 0x288894u: goto label_288894;
            case 0x288898u: goto label_288898;
            case 0x28889Cu: goto label_28889c;
            case 0x2888A0u: goto label_2888a0;
            case 0x2888A4u: goto label_2888a4;
            case 0x2888A8u: goto label_2888a8;
            case 0x2888ACu: goto label_2888ac;
            case 0x2888B0u: goto label_2888b0;
            case 0x2888B4u: goto label_2888b4;
            case 0x2888B8u: goto label_2888b8;
            case 0x2888BCu: goto label_2888bc;
            case 0x2888C0u: goto label_2888c0;
            case 0x2888C4u: goto label_2888c4;
            case 0x2888C8u: goto label_2888c8;
            case 0x2888CCu: goto label_2888cc;
            case 0x2888D0u: goto label_2888d0;
            case 0x2888D4u: goto label_2888d4;
            case 0x2888D8u: goto label_2888d8;
            case 0x2888DCu: goto label_2888dc;
            case 0x2888E0u: goto label_2888e0;
            case 0x2888E4u: goto label_2888e4;
            case 0x2888E8u: goto label_2888e8;
            case 0x2888ECu: goto label_2888ec;
            case 0x2888F0u: goto label_2888f0;
            case 0x2888F4u: goto label_2888f4;
            case 0x2888F8u: goto label_2888f8;
            case 0x2888FCu: goto label_2888fc;
            case 0x288900u: goto label_288900;
            case 0x288904u: goto label_288904;
            case 0x288908u: goto label_288908;
            case 0x28890Cu: goto label_28890c;
            case 0x288910u: goto label_288910;
            case 0x288914u: goto label_288914;
            case 0x288918u: goto label_288918;
            case 0x28891Cu: goto label_28891c;
            case 0x288920u: goto label_288920;
            case 0x288924u: goto label_288924;
            case 0x288928u: goto label_288928;
            case 0x28892Cu: goto label_28892c;
            case 0x288930u: goto label_288930;
            case 0x288934u: goto label_288934;
            case 0x288938u: goto label_288938;
            case 0x28893Cu: goto label_28893c;
            case 0x288940u: goto label_288940;
            case 0x288944u: goto label_288944;
            case 0x288948u: goto label_288948;
            case 0x28894Cu: goto label_28894c;
            case 0x288950u: goto label_288950;
            case 0x288954u: goto label_288954;
            case 0x288958u: goto label_288958;
            case 0x28895Cu: goto label_28895c;
            case 0x288960u: goto label_288960;
            case 0x288964u: goto label_288964;
            case 0x288968u: goto label_288968;
            case 0x28896Cu: goto label_28896c;
            case 0x288970u: goto label_288970;
            case 0x288974u: goto label_288974;
            case 0x288978u: goto label_288978;
            case 0x28897Cu: goto label_28897c;
            case 0x288980u: goto label_288980;
            case 0x288984u: goto label_288984;
            case 0x288988u: goto label_288988;
            case 0x28898Cu: goto label_28898c;
            case 0x288990u: goto label_288990;
            case 0x288994u: goto label_288994;
            case 0x288998u: goto label_288998;
            case 0x28899Cu: goto label_28899c;
            case 0x2889A0u: goto label_2889a0;
            case 0x2889A4u: goto label_2889a4;
            case 0x2889A8u: goto label_2889a8;
            case 0x2889ACu: goto label_2889ac;
            case 0x2889B0u: goto label_2889b0;
            case 0x2889B4u: goto label_2889b4;
            case 0x2889B8u: goto label_2889b8;
            case 0x2889BCu: goto label_2889bc;
            case 0x2889C0u: goto label_2889c0;
            case 0x2889C4u: goto label_2889c4;
            case 0x2889C8u: goto label_2889c8;
            case 0x2889CCu: goto label_2889cc;
            case 0x2889D0u: goto label_2889d0;
            case 0x2889D4u: goto label_2889d4;
            case 0x2889D8u: goto label_2889d8;
            case 0x2889DCu: goto label_2889dc;
            case 0x2889E0u: goto label_2889e0;
            case 0x2889E4u: goto label_2889e4;
            case 0x2889E8u: goto label_2889e8;
            case 0x2889ECu: goto label_2889ec;
            case 0x2889F0u: goto label_2889f0;
            case 0x2889F4u: goto label_2889f4;
            case 0x2889F8u: goto label_2889f8;
            case 0x2889FCu: goto label_2889fc;
            case 0x288A00u: goto label_288a00;
            case 0x288A04u: goto label_288a04;
            case 0x288A08u: goto label_288a08;
            case 0x288A0Cu: goto label_288a0c;
            case 0x288A10u: goto label_288a10;
            case 0x288A14u: goto label_288a14;
            case 0x288A18u: goto label_288a18;
            case 0x288A1Cu: goto label_288a1c;
            case 0x288A20u: goto label_288a20;
            case 0x288A24u: goto label_288a24;
            case 0x288A28u: goto label_288a28;
            case 0x288A2Cu: goto label_288a2c;
            case 0x288A30u: goto label_288a30;
            case 0x288A34u: goto label_288a34;
            case 0x288A38u: goto label_288a38;
            case 0x288A3Cu: goto label_288a3c;
            case 0x288A40u: goto label_288a40;
            case 0x288A44u: goto label_288a44;
            case 0x288A48u: goto label_288a48;
            case 0x288A4Cu: goto label_288a4c;
            case 0x288A50u: goto label_288a50;
            case 0x288A54u: goto label_288a54;
            case 0x288A58u: goto label_288a58;
            case 0x288A5Cu: goto label_288a5c;
            case 0x288A60u: goto label_288a60;
            case 0x288A64u: goto label_288a64;
            case 0x288A68u: goto label_288a68;
            case 0x288A6Cu: goto label_288a6c;
            case 0x288A70u: goto label_288a70;
            case 0x288A74u: goto label_288a74;
            case 0x288A78u: goto label_288a78;
            case 0x288A7Cu: goto label_288a7c;
            case 0x288A80u: goto label_288a80;
            case 0x288A84u: goto label_288a84;
            case 0x288A88u: goto label_288a88;
            case 0x288A8Cu: goto label_288a8c;
            case 0x288A90u: goto label_288a90;
            case 0x288A94u: goto label_288a94;
            case 0x288A98u: goto label_288a98;
            case 0x288A9Cu: goto label_288a9c;
            case 0x288AA0u: goto label_288aa0;
            case 0x288AA4u: goto label_288aa4;
            case 0x288AA8u: goto label_288aa8;
            case 0x288AACu: goto label_288aac;
            case 0x288AB0u: goto label_288ab0;
            case 0x288AB4u: goto label_288ab4;
            case 0x288AB8u: goto label_288ab8;
            case 0x288ABCu: goto label_288abc;
            case 0x288AC0u: goto label_288ac0;
            case 0x288AC4u: goto label_288ac4;
            case 0x288AC8u: goto label_288ac8;
            case 0x288ACCu: goto label_288acc;
            case 0x288AD0u: goto label_288ad0;
            case 0x288AD4u: goto label_288ad4;
            case 0x288AD8u: goto label_288ad8;
            case 0x288ADCu: goto label_288adc;
            case 0x288AE0u: goto label_288ae0;
            case 0x288AE4u: goto label_288ae4;
            case 0x288AE8u: goto label_288ae8;
            case 0x288AECu: goto label_288aec;
            case 0x288AF0u: goto label_288af0;
            case 0x288AF4u: goto label_288af4;
            case 0x288AF8u: goto label_288af8;
            case 0x288AFCu: goto label_288afc;
            case 0x288B00u: goto label_288b00;
            case 0x288B04u: goto label_288b04;
            case 0x288B08u: goto label_288b08;
            case 0x288B0Cu: goto label_288b0c;
            case 0x288B10u: goto label_288b10;
            case 0x288B14u: goto label_288b14;
            case 0x288B18u: goto label_288b18;
            case 0x288B1Cu: goto label_288b1c;
            case 0x288B20u: goto label_288b20;
            case 0x288B24u: goto label_288b24;
            case 0x288B28u: goto label_288b28;
            case 0x288B2Cu: goto label_288b2c;
            case 0x288B30u: goto label_288b30;
            case 0x288B34u: goto label_288b34;
            case 0x288B38u: goto label_288b38;
            case 0x288B3Cu: goto label_288b3c;
            case 0x288B40u: goto label_288b40;
            case 0x288B44u: goto label_288b44;
            case 0x288B48u: goto label_288b48;
            case 0x288B4Cu: goto label_288b4c;
            case 0x288B50u: goto label_288b50;
            case 0x288B54u: goto label_288b54;
            case 0x288B58u: goto label_288b58;
            case 0x288B5Cu: goto label_288b5c;
            case 0x288B60u: goto label_288b60;
            case 0x288B64u: goto label_288b64;
            case 0x288B68u: goto label_288b68;
            case 0x288B6Cu: goto label_288b6c;
            case 0x288B70u: goto label_288b70;
            case 0x288B74u: goto label_288b74;
            case 0x288B78u: goto label_288b78;
            case 0x288B7Cu: goto label_288b7c;
            case 0x288B80u: goto label_288b80;
            case 0x288B84u: goto label_288b84;
            case 0x288B88u: goto label_288b88;
            case 0x288B8Cu: goto label_288b8c;
            case 0x288B90u: goto label_288b90;
            case 0x288B94u: goto label_288b94;
            case 0x288B98u: goto label_288b98;
            case 0x288B9Cu: goto label_288b9c;
            case 0x288BA0u: goto label_288ba0;
            case 0x288BA4u: goto label_288ba4;
            case 0x288BA8u: goto label_288ba8;
            case 0x288BACu: goto label_288bac;
            case 0x288BB0u: goto label_288bb0;
            case 0x288BB4u: goto label_288bb4;
            case 0x288BB8u: goto label_288bb8;
            case 0x288BBCu: goto label_288bbc;
            case 0x288BC0u: goto label_288bc0;
            case 0x288BC4u: goto label_288bc4;
            case 0x288BC8u: goto label_288bc8;
            case 0x288BCCu: goto label_288bcc;
            case 0x288BD0u: goto label_288bd0;
            case 0x288BD4u: goto label_288bd4;
            case 0x288BD8u: goto label_288bd8;
            case 0x288BDCu: goto label_288bdc;
            case 0x288BE0u: goto label_288be0;
            case 0x288BE4u: goto label_288be4;
            case 0x288BE8u: goto label_288be8;
            case 0x288BECu: goto label_288bec;
            case 0x288BF0u: goto label_288bf0;
            case 0x288BF4u: goto label_288bf4;
            case 0x288BF8u: goto label_288bf8;
            case 0x288BFCu: goto label_288bfc;
            case 0x288C00u: goto label_288c00;
            case 0x288C04u: goto label_288c04;
            case 0x288C08u: goto label_288c08;
            case 0x288C0Cu: goto label_288c0c;
            case 0x288C10u: goto label_288c10;
            case 0x288C14u: goto label_288c14;
            case 0x288C18u: goto label_288c18;
            case 0x288C1Cu: goto label_288c1c;
            case 0x288C20u: goto label_288c20;
            case 0x288C24u: goto label_288c24;
            case 0x288C28u: goto label_288c28;
            case 0x288C2Cu: goto label_288c2c;
            case 0x288C30u: goto label_288c30;
            case 0x288C34u: goto label_288c34;
            case 0x288C38u: goto label_288c38;
            case 0x288C3Cu: goto label_288c3c;
            case 0x288C40u: goto label_288c40;
            case 0x288C44u: goto label_288c44;
            case 0x288C48u: goto label_288c48;
            case 0x288C4Cu: goto label_288c4c;
            case 0x288C50u: goto label_288c50;
            case 0x288C54u: goto label_288c54;
            case 0x288C58u: goto label_288c58;
            case 0x288C5Cu: goto label_288c5c;
            case 0x288C60u: goto label_288c60;
            case 0x288C64u: goto label_288c64;
            case 0x288C68u: goto label_288c68;
            case 0x288C6Cu: goto label_288c6c;
            case 0x288C70u: goto label_288c70;
            case 0x288C74u: goto label_288c74;
            case 0x288C78u: goto label_288c78;
            case 0x288C7Cu: goto label_288c7c;
            case 0x288C80u: goto label_288c80;
            case 0x288C84u: goto label_288c84;
            case 0x288C88u: goto label_288c88;
            case 0x288C8Cu: goto label_288c8c;
            case 0x288C90u: goto label_288c90;
            case 0x288C94u: goto label_288c94;
            case 0x288C98u: goto label_288c98;
            case 0x288C9Cu: goto label_288c9c;
            case 0x288CA0u: goto label_288ca0;
            case 0x288CA4u: goto label_288ca4;
            case 0x288CA8u: goto label_288ca8;
            case 0x288CACu: goto label_288cac;
            case 0x288CB0u: goto label_288cb0;
            case 0x288CB4u: goto label_288cb4;
            case 0x288CB8u: goto label_288cb8;
            case 0x288CBCu: goto label_288cbc;
            case 0x288CC0u: goto label_288cc0;
            case 0x288CC4u: goto label_288cc4;
            case 0x288CC8u: goto label_288cc8;
            case 0x288CCCu: goto label_288ccc;
            case 0x288CD0u: goto label_288cd0;
            case 0x288CD4u: goto label_288cd4;
            case 0x288CD8u: goto label_288cd8;
            case 0x288CDCu: goto label_288cdc;
            case 0x288CE0u: goto label_288ce0;
            case 0x288CE4u: goto label_288ce4;
            case 0x288CE8u: goto label_288ce8;
            case 0x288CECu: goto label_288cec;
            case 0x288CF0u: goto label_288cf0;
            case 0x288CF4u: goto label_288cf4;
            case 0x288CF8u: goto label_288cf8;
            case 0x288CFCu: goto label_288cfc;
            case 0x288D00u: goto label_288d00;
            case 0x288D04u: goto label_288d04;
            case 0x288D08u: goto label_288d08;
            case 0x288D0Cu: goto label_288d0c;
            case 0x288D10u: goto label_288d10;
            case 0x288D14u: goto label_288d14;
            case 0x288D18u: goto label_288d18;
            case 0x288D1Cu: goto label_288d1c;
            case 0x288D20u: goto label_288d20;
            case 0x288D24u: goto label_288d24;
            case 0x288D28u: goto label_288d28;
            case 0x288D2Cu: goto label_288d2c;
            case 0x288D30u: goto label_288d30;
            case 0x288D34u: goto label_288d34;
            case 0x288D38u: goto label_288d38;
            case 0x288D3Cu: goto label_288d3c;
            case 0x288D40u: goto label_288d40;
            case 0x288D44u: goto label_288d44;
            case 0x288D48u: goto label_288d48;
            case 0x288D4Cu: goto label_288d4c;
            case 0x288D50u: goto label_288d50;
            case 0x288D54u: goto label_288d54;
            case 0x288D58u: goto label_288d58;
            case 0x288D5Cu: goto label_288d5c;
            case 0x288D60u: goto label_288d60;
            case 0x288D64u: goto label_288d64;
            case 0x288D68u: goto label_288d68;
            case 0x288D6Cu: goto label_288d6c;
            case 0x288D70u: goto label_288d70;
            case 0x288D74u: goto label_288d74;
            case 0x288D78u: goto label_288d78;
            case 0x288D7Cu: goto label_288d7c;
            case 0x288D80u: goto label_288d80;
            case 0x288D84u: goto label_288d84;
            case 0x288D88u: goto label_288d88;
            case 0x288D8Cu: goto label_288d8c;
            case 0x288D90u: goto label_288d90;
            case 0x288D94u: goto label_288d94;
            case 0x288D98u: goto label_288d98;
            case 0x288D9Cu: goto label_288d9c;
            case 0x288DA0u: goto label_288da0;
            case 0x288DA4u: goto label_288da4;
            case 0x288DA8u: goto label_288da8;
            case 0x288DACu: goto label_288dac;
            case 0x288DB0u: goto label_288db0;
            case 0x288DB4u: goto label_288db4;
            case 0x288DB8u: goto label_288db8;
            case 0x288DBCu: goto label_288dbc;
            case 0x288DC0u: goto label_288dc0;
            case 0x288DC4u: goto label_288dc4;
            case 0x288DC8u: goto label_288dc8;
            case 0x288DCCu: goto label_288dcc;
            case 0x288DD0u: goto label_288dd0;
            case 0x288DD4u: goto label_288dd4;
            case 0x288DD8u: goto label_288dd8;
            case 0x288DDCu: goto label_288ddc;
            case 0x288DE0u: goto label_288de0;
            case 0x288DE4u: goto label_288de4;
            case 0x288DE8u: goto label_288de8;
            case 0x288DECu: goto label_288dec;
            case 0x288DF0u: goto label_288df0;
            case 0x288DF4u: goto label_288df4;
            case 0x288DF8u: goto label_288df8;
            case 0x288DFCu: goto label_288dfc;
            case 0x288E00u: goto label_288e00;
            case 0x288E04u: goto label_288e04;
            case 0x288E08u: goto label_288e08;
            case 0x288E0Cu: goto label_288e0c;
            case 0x288E10u: goto label_288e10;
            case 0x288E14u: goto label_288e14;
            case 0x288E18u: goto label_288e18;
            case 0x288E1Cu: goto label_288e1c;
            case 0x288E20u: goto label_288e20;
            case 0x288E24u: goto label_288e24;
            case 0x288E28u: goto label_288e28;
            case 0x288E2Cu: goto label_288e2c;
            case 0x288E30u: goto label_288e30;
            case 0x288E34u: goto label_288e34;
            case 0x288E38u: goto label_288e38;
            case 0x288E3Cu: goto label_288e3c;
            case 0x288E40u: goto label_288e40;
            case 0x288E44u: goto label_288e44;
            case 0x288E48u: goto label_288e48;
            case 0x288E4Cu: goto label_288e4c;
            case 0x288E50u: goto label_288e50;
            case 0x288E54u: goto label_288e54;
            case 0x288E58u: goto label_288e58;
            case 0x288E5Cu: goto label_288e5c;
            case 0x288E60u: goto label_288e60;
            case 0x288E64u: goto label_288e64;
            case 0x288E68u: goto label_288e68;
            case 0x288E6Cu: goto label_288e6c;
            case 0x288E70u: goto label_288e70;
            case 0x288E74u: goto label_288e74;
            case 0x288E78u: goto label_288e78;
            case 0x288E7Cu: goto label_288e7c;
            case 0x288E80u: goto label_288e80;
            case 0x288E84u: goto label_288e84;
            case 0x288E88u: goto label_288e88;
            case 0x288E8Cu: goto label_288e8c;
            case 0x288E90u: goto label_288e90;
            case 0x288E94u: goto label_288e94;
            case 0x288E98u: goto label_288e98;
            case 0x288E9Cu: goto label_288e9c;
            case 0x288EA0u: goto label_288ea0;
            case 0x288EA4u: goto label_288ea4;
            case 0x288EA8u: goto label_288ea8;
            case 0x288EACu: goto label_288eac;
            case 0x288EB0u: goto label_288eb0;
            case 0x288EB4u: goto label_288eb4;
            case 0x288EB8u: goto label_288eb8;
            case 0x288EBCu: goto label_288ebc;
            case 0x288EC0u: goto label_288ec0;
            case 0x288EC4u: goto label_288ec4;
            case 0x288EC8u: goto label_288ec8;
            case 0x288ECCu: goto label_288ecc;
            case 0x288ED0u: goto label_288ed0;
            case 0x288ED4u: goto label_288ed4;
            case 0x288ED8u: goto label_288ed8;
            case 0x288EDCu: goto label_288edc;
            case 0x288EE0u: goto label_288ee0;
            case 0x288EE4u: goto label_288ee4;
            case 0x288EE8u: goto label_288ee8;
            case 0x288EECu: goto label_288eec;
            case 0x288EF0u: goto label_288ef0;
            case 0x288EF4u: goto label_288ef4;
            case 0x288EF8u: goto label_288ef8;
            case 0x288EFCu: goto label_288efc;
            case 0x288F00u: goto label_288f00;
            case 0x288F04u: goto label_288f04;
            case 0x288F08u: goto label_288f08;
            case 0x288F0Cu: goto label_288f0c;
            case 0x288F10u: goto label_288f10;
            case 0x288F14u: goto label_288f14;
            case 0x288F18u: goto label_288f18;
            case 0x288F1Cu: goto label_288f1c;
            case 0x288F20u: goto label_288f20;
            case 0x288F24u: goto label_288f24;
            case 0x288F28u: goto label_288f28;
            case 0x288F2Cu: goto label_288f2c;
            case 0x288F30u: goto label_288f30;
            case 0x288F34u: goto label_288f34;
            case 0x288F38u: goto label_288f38;
            case 0x288F3Cu: goto label_288f3c;
            case 0x288F40u: goto label_288f40;
            case 0x288F44u: goto label_288f44;
            case 0x288F48u: goto label_288f48;
            case 0x288F4Cu: goto label_288f4c;
            case 0x288F50u: goto label_288f50;
            case 0x288F54u: goto label_288f54;
            case 0x288F58u: goto label_288f58;
            case 0x288F5Cu: goto label_288f5c;
            case 0x288F60u: goto label_288f60;
            case 0x288F64u: goto label_288f64;
            case 0x288F68u: goto label_288f68;
            case 0x288F6Cu: goto label_288f6c;
            case 0x288F70u: goto label_288f70;
            case 0x288F74u: goto label_288f74;
            case 0x288F78u: goto label_288f78;
            case 0x288F7Cu: goto label_288f7c;
            case 0x288F80u: goto label_288f80;
            case 0x288F84u: goto label_288f84;
            case 0x288F88u: goto label_288f88;
            case 0x288F8Cu: goto label_288f8c;
            case 0x288F90u: goto label_288f90;
            case 0x288F94u: goto label_288f94;
            case 0x288F98u: goto label_288f98;
            case 0x288F9Cu: goto label_288f9c;
            case 0x288FA0u: goto label_288fa0;
            case 0x288FA4u: goto label_288fa4;
            case 0x288FA8u: goto label_288fa8;
            case 0x288FACu: goto label_288fac;
            case 0x288FB0u: goto label_288fb0;
            case 0x288FB4u: goto label_288fb4;
            case 0x288FB8u: goto label_288fb8;
            case 0x288FBCu: goto label_288fbc;
            case 0x288FC0u: goto label_288fc0;
            case 0x288FC4u: goto label_288fc4;
            case 0x288FC8u: goto label_288fc8;
            case 0x288FCCu: goto label_288fcc;
            case 0x288FD0u: goto label_288fd0;
            case 0x288FD4u: goto label_288fd4;
            case 0x288FD8u: goto label_288fd8;
            case 0x288FDCu: goto label_288fdc;
            case 0x288FE0u: goto label_288fe0;
            case 0x288FE4u: goto label_288fe4;
            case 0x288FE8u: goto label_288fe8;
            case 0x288FECu: goto label_288fec;
            case 0x288FF0u: goto label_288ff0;
            case 0x288FF4u: goto label_288ff4;
            case 0x288FF8u: goto label_288ff8;
            case 0x288FFCu: goto label_288ffc;
            case 0x289000u: goto label_289000;
            case 0x289004u: goto label_289004;
            case 0x289008u: goto label_289008;
            case 0x28900Cu: goto label_28900c;
            case 0x289010u: goto label_289010;
            case 0x289014u: goto label_289014;
            case 0x289018u: goto label_289018;
            case 0x28901Cu: goto label_28901c;
            case 0x289020u: goto label_289020;
            case 0x289024u: goto label_289024;
            case 0x289028u: goto label_289028;
            case 0x28902Cu: goto label_28902c;
            case 0x289030u: goto label_289030;
            case 0x289034u: goto label_289034;
            case 0x289038u: goto label_289038;
            case 0x28903Cu: goto label_28903c;
            case 0x289040u: goto label_289040;
            case 0x289044u: goto label_289044;
            case 0x289048u: goto label_289048;
            case 0x28904Cu: goto label_28904c;
            case 0x289050u: goto label_289050;
            case 0x289054u: goto label_289054;
            case 0x289058u: goto label_289058;
            case 0x28905Cu: goto label_28905c;
            case 0x289060u: goto label_289060;
            case 0x289064u: goto label_289064;
            case 0x289068u: goto label_289068;
            case 0x28906Cu: goto label_28906c;
            case 0x289070u: goto label_289070;
            case 0x289074u: goto label_289074;
            case 0x289078u: goto label_289078;
            case 0x28907Cu: goto label_28907c;
            case 0x289080u: goto label_289080;
            case 0x289084u: goto label_289084;
            case 0x289088u: goto label_289088;
            case 0x28908Cu: goto label_28908c;
            case 0x289090u: goto label_289090;
            case 0x289094u: goto label_289094;
            case 0x289098u: goto label_289098;
            case 0x28909Cu: goto label_28909c;
            case 0x2890A0u: goto label_2890a0;
            case 0x2890A4u: goto label_2890a4;
            case 0x2890A8u: goto label_2890a8;
            case 0x2890ACu: goto label_2890ac;
            case 0x2890B0u: goto label_2890b0;
            case 0x2890B4u: goto label_2890b4;
            case 0x2890B8u: goto label_2890b8;
            case 0x2890BCu: goto label_2890bc;
            case 0x2890C0u: goto label_2890c0;
            case 0x2890C4u: goto label_2890c4;
            case 0x2890C8u: goto label_2890c8;
            case 0x2890CCu: goto label_2890cc;
            case 0x2890D0u: goto label_2890d0;
            case 0x2890D4u: goto label_2890d4;
            case 0x2890D8u: goto label_2890d8;
            case 0x2890DCu: goto label_2890dc;
            case 0x2890E0u: goto label_2890e0;
            case 0x2890E4u: goto label_2890e4;
            case 0x2890E8u: goto label_2890e8;
            case 0x2890ECu: goto label_2890ec;
            case 0x2890F0u: goto label_2890f0;
            case 0x2890F4u: goto label_2890f4;
            case 0x2890F8u: goto label_2890f8;
            case 0x2890FCu: goto label_2890fc;
            case 0x289100u: goto label_289100;
            case 0x289104u: goto label_289104;
            case 0x289108u: goto label_289108;
            case 0x28910Cu: goto label_28910c;
            case 0x289110u: goto label_289110;
            case 0x289114u: goto label_289114;
            case 0x289118u: goto label_289118;
            case 0x28911Cu: goto label_28911c;
            case 0x289120u: goto label_289120;
            case 0x289124u: goto label_289124;
            case 0x289128u: goto label_289128;
            case 0x28912Cu: goto label_28912c;
            case 0x289130u: goto label_289130;
            case 0x289134u: goto label_289134;
            case 0x289138u: goto label_289138;
            case 0x28913Cu: goto label_28913c;
            case 0x289140u: goto label_289140;
            case 0x289144u: goto label_289144;
            case 0x289148u: goto label_289148;
            case 0x28914Cu: goto label_28914c;
            case 0x289150u: goto label_289150;
            case 0x289154u: goto label_289154;
            case 0x289158u: goto label_289158;
            case 0x28915Cu: goto label_28915c;
            case 0x289160u: goto label_289160;
            case 0x289164u: goto label_289164;
            case 0x289168u: goto label_289168;
            case 0x28916Cu: goto label_28916c;
            case 0x289170u: goto label_289170;
            case 0x289174u: goto label_289174;
            case 0x289178u: goto label_289178;
            case 0x28917Cu: goto label_28917c;
            case 0x289180u: goto label_289180;
            case 0x289184u: goto label_289184;
            case 0x289188u: goto label_289188;
            case 0x28918Cu: goto label_28918c;
            case 0x289190u: goto label_289190;
            case 0x289194u: goto label_289194;
            case 0x289198u: goto label_289198;
            case 0x28919Cu: goto label_28919c;
            case 0x2891A0u: goto label_2891a0;
            case 0x2891A4u: goto label_2891a4;
            case 0x2891A8u: goto label_2891a8;
            case 0x2891ACu: goto label_2891ac;
            case 0x2891B0u: goto label_2891b0;
            case 0x2891B4u: goto label_2891b4;
            case 0x2891B8u: goto label_2891b8;
            case 0x2891BCu: goto label_2891bc;
            case 0x2891C0u: goto label_2891c0;
            case 0x2891C4u: goto label_2891c4;
            case 0x2891C8u: goto label_2891c8;
            case 0x2891CCu: goto label_2891cc;
            case 0x2891D0u: goto label_2891d0;
            case 0x2891D4u: goto label_2891d4;
            case 0x2891D8u: goto label_2891d8;
            case 0x2891DCu: goto label_2891dc;
            case 0x2891E0u: goto label_2891e0;
            case 0x2891E4u: goto label_2891e4;
            case 0x2891E8u: goto label_2891e8;
            case 0x2891ECu: goto label_2891ec;
            case 0x2891F0u: goto label_2891f0;
            case 0x2891F4u: goto label_2891f4;
            case 0x2891F8u: goto label_2891f8;
            case 0x2891FCu: goto label_2891fc;
            case 0x289200u: goto label_289200;
            case 0x289204u: goto label_289204;
            case 0x289208u: goto label_289208;
            case 0x28920Cu: goto label_28920c;
            case 0x289210u: goto label_289210;
            case 0x289214u: goto label_289214;
            case 0x289218u: goto label_289218;
            case 0x28921Cu: goto label_28921c;
            case 0x289220u: goto label_289220;
            case 0x289224u: goto label_289224;
            case 0x289228u: goto label_289228;
            case 0x28922Cu: goto label_28922c;
            case 0x289230u: goto label_289230;
            case 0x289234u: goto label_289234;
            case 0x289238u: goto label_289238;
            case 0x28923Cu: goto label_28923c;
            case 0x289240u: goto label_289240;
            case 0x289244u: goto label_289244;
            case 0x289248u: goto label_289248;
            case 0x28924Cu: goto label_28924c;
            case 0x289250u: goto label_289250;
            case 0x289254u: goto label_289254;
            case 0x289258u: goto label_289258;
            case 0x28925Cu: goto label_28925c;
            case 0x289260u: goto label_289260;
            case 0x289264u: goto label_289264;
            case 0x289268u: goto label_289268;
            case 0x28926Cu: goto label_28926c;
            case 0x289270u: goto label_289270;
            case 0x289274u: goto label_289274;
            case 0x289278u: goto label_289278;
            case 0x28927Cu: goto label_28927c;
            case 0x289280u: goto label_289280;
            case 0x289284u: goto label_289284;
            case 0x289288u: goto label_289288;
            case 0x28928Cu: goto label_28928c;
            case 0x289290u: goto label_289290;
            case 0x289294u: goto label_289294;
            case 0x289298u: goto label_289298;
            case 0x28929Cu: goto label_28929c;
            case 0x2892A0u: goto label_2892a0;
            case 0x2892A4u: goto label_2892a4;
            case 0x2892A8u: goto label_2892a8;
            case 0x2892ACu: goto label_2892ac;
            case 0x2892B0u: goto label_2892b0;
            case 0x2892B4u: goto label_2892b4;
            case 0x2892B8u: goto label_2892b8;
            case 0x2892BCu: goto label_2892bc;
            case 0x2892C0u: goto label_2892c0;
            case 0x2892C4u: goto label_2892c4;
            case 0x2892C8u: goto label_2892c8;
            case 0x2892CCu: goto label_2892cc;
            case 0x2892D0u: goto label_2892d0;
            case 0x2892D4u: goto label_2892d4;
            case 0x2892D8u: goto label_2892d8;
            case 0x2892DCu: goto label_2892dc;
            case 0x2892E0u: goto label_2892e0;
            case 0x2892E4u: goto label_2892e4;
            case 0x2892E8u: goto label_2892e8;
            case 0x2892ECu: goto label_2892ec;
            case 0x2892F0u: goto label_2892f0;
            case 0x2892F4u: goto label_2892f4;
            case 0x2892F8u: goto label_2892f8;
            case 0x2892FCu: goto label_2892fc;
            case 0x289300u: goto label_289300;
            case 0x289304u: goto label_289304;
            case 0x289308u: goto label_289308;
            case 0x28930Cu: goto label_28930c;
            case 0x289310u: goto label_289310;
            case 0x289314u: goto label_289314;
            case 0x289318u: goto label_289318;
            case 0x28931Cu: goto label_28931c;
            case 0x289320u: goto label_289320;
            case 0x289324u: goto label_289324;
            case 0x289328u: goto label_289328;
            case 0x28932Cu: goto label_28932c;
            case 0x289330u: goto label_289330;
            case 0x289334u: goto label_289334;
            case 0x289338u: goto label_289338;
            case 0x28933Cu: goto label_28933c;
            case 0x289340u: goto label_289340;
            case 0x289344u: goto label_289344;
            case 0x289348u: goto label_289348;
            case 0x28934Cu: goto label_28934c;
            case 0x289350u: goto label_289350;
            case 0x289354u: goto label_289354;
            case 0x289358u: goto label_289358;
            case 0x28935Cu: goto label_28935c;
            case 0x289360u: goto label_289360;
            case 0x289364u: goto label_289364;
            case 0x289368u: goto label_289368;
            case 0x28936Cu: goto label_28936c;
            case 0x289370u: goto label_289370;
            case 0x289374u: goto label_289374;
            case 0x289378u: goto label_289378;
            case 0x28937Cu: goto label_28937c;
            case 0x289380u: goto label_289380;
            case 0x289384u: goto label_289384;
            case 0x289388u: goto label_289388;
            case 0x28938Cu: goto label_28938c;
            case 0x289390u: goto label_289390;
            case 0x289394u: goto label_289394;
            case 0x289398u: goto label_289398;
            case 0x28939Cu: goto label_28939c;
            case 0x2893A0u: goto label_2893a0;
            case 0x2893A4u: goto label_2893a4;
            case 0x2893A8u: goto label_2893a8;
            case 0x2893ACu: goto label_2893ac;
            case 0x2893B0u: goto label_2893b0;
            case 0x2893B4u: goto label_2893b4;
            case 0x2893B8u: goto label_2893b8;
            case 0x2893BCu: goto label_2893bc;
            case 0x2893C0u: goto label_2893c0;
            case 0x2893C4u: goto label_2893c4;
            case 0x2893C8u: goto label_2893c8;
            case 0x2893CCu: goto label_2893cc;
            case 0x2893D0u: goto label_2893d0;
            case 0x2893D4u: goto label_2893d4;
            case 0x2893D8u: goto label_2893d8;
            case 0x2893DCu: goto label_2893dc;
            case 0x2893E0u: goto label_2893e0;
            case 0x2893E4u: goto label_2893e4;
            case 0x2893E8u: goto label_2893e8;
            case 0x2893ECu: goto label_2893ec;
            case 0x2893F0u: goto label_2893f0;
            case 0x2893F4u: goto label_2893f4;
            case 0x2893F8u: goto label_2893f8;
            case 0x2893FCu: goto label_2893fc;
            case 0x289400u: goto label_289400;
            case 0x289404u: goto label_289404;
            case 0x289408u: goto label_289408;
            case 0x28940Cu: goto label_28940c;
            case 0x289410u: goto label_289410;
            case 0x289414u: goto label_289414;
            case 0x289418u: goto label_289418;
            case 0x28941Cu: goto label_28941c;
            case 0x289420u: goto label_289420;
            case 0x289424u: goto label_289424;
            case 0x289428u: goto label_289428;
            case 0x28942Cu: goto label_28942c;
            case 0x289430u: goto label_289430;
            case 0x289434u: goto label_289434;
            case 0x289438u: goto label_289438;
            case 0x28943Cu: goto label_28943c;
            case 0x289440u: goto label_289440;
            case 0x289444u: goto label_289444;
            case 0x289448u: goto label_289448;
            case 0x28944Cu: goto label_28944c;
            case 0x289450u: goto label_289450;
            case 0x289454u: goto label_289454;
            case 0x289458u: goto label_289458;
            case 0x28945Cu: goto label_28945c;
            case 0x289460u: goto label_289460;
            case 0x289464u: goto label_289464;
            case 0x289468u: goto label_289468;
            case 0x28946Cu: goto label_28946c;
            case 0x289470u: goto label_289470;
            case 0x289474u: goto label_289474;
            case 0x289478u: goto label_289478;
            case 0x28947Cu: goto label_28947c;
            case 0x289480u: goto label_289480;
            case 0x289484u: goto label_289484;
            case 0x289488u: goto label_289488;
            case 0x28948Cu: goto label_28948c;
            case 0x289490u: goto label_289490;
            case 0x289494u: goto label_289494;
            case 0x289498u: goto label_289498;
            case 0x28949Cu: goto label_28949c;
            case 0x2894A0u: goto label_2894a0;
            case 0x2894A4u: goto label_2894a4;
            case 0x2894A8u: goto label_2894a8;
            case 0x2894ACu: goto label_2894ac;
            case 0x2894B0u: goto label_2894b0;
            case 0x2894B4u: goto label_2894b4;
            case 0x2894B8u: goto label_2894b8;
            case 0x2894BCu: goto label_2894bc;
            case 0x2894C0u: goto label_2894c0;
            case 0x2894C4u: goto label_2894c4;
            case 0x2894C8u: goto label_2894c8;
            case 0x2894CCu: goto label_2894cc;
            case 0x2894D0u: goto label_2894d0;
            case 0x2894D4u: goto label_2894d4;
            case 0x2894D8u: goto label_2894d8;
            case 0x2894DCu: goto label_2894dc;
            case 0x2894E0u: goto label_2894e0;
            case 0x2894E4u: goto label_2894e4;
            case 0x2894E8u: goto label_2894e8;
            case 0x2894ECu: goto label_2894ec;
            case 0x2894F0u: goto label_2894f0;
            case 0x2894F4u: goto label_2894f4;
            case 0x2894F8u: goto label_2894f8;
            case 0x2894FCu: goto label_2894fc;
            case 0x289500u: goto label_289500;
            case 0x289504u: goto label_289504;
            case 0x289508u: goto label_289508;
            case 0x28950Cu: goto label_28950c;
            case 0x289510u: goto label_289510;
            case 0x289514u: goto label_289514;
            case 0x289518u: goto label_289518;
            case 0x28951Cu: goto label_28951c;
            case 0x289520u: goto label_289520;
            case 0x289524u: goto label_289524;
            case 0x289528u: goto label_289528;
            case 0x28952Cu: goto label_28952c;
            case 0x289530u: goto label_289530;
            case 0x289534u: goto label_289534;
            case 0x289538u: goto label_289538;
            case 0x28953Cu: goto label_28953c;
            case 0x289540u: goto label_289540;
            case 0x289544u: goto label_289544;
            case 0x289548u: goto label_289548;
            case 0x28954Cu: goto label_28954c;
            case 0x289550u: goto label_289550;
            case 0x289554u: goto label_289554;
            case 0x289558u: goto label_289558;
            case 0x28955Cu: goto label_28955c;
            case 0x289560u: goto label_289560;
            case 0x289564u: goto label_289564;
            case 0x289568u: goto label_289568;
            case 0x28956Cu: goto label_28956c;
            case 0x289570u: goto label_289570;
            case 0x289574u: goto label_289574;
            case 0x289578u: goto label_289578;
            case 0x28957Cu: goto label_28957c;
            case 0x289580u: goto label_289580;
            case 0x289584u: goto label_289584;
            case 0x289588u: goto label_289588;
            case 0x28958Cu: goto label_28958c;
            case 0x289590u: goto label_289590;
            case 0x289594u: goto label_289594;
            case 0x289598u: goto label_289598;
            case 0x28959Cu: goto label_28959c;
            case 0x2895A0u: goto label_2895a0;
            case 0x2895A4u: goto label_2895a4;
            case 0x2895A8u: goto label_2895a8;
            case 0x2895ACu: goto label_2895ac;
            case 0x2895B0u: goto label_2895b0;
            case 0x2895B4u: goto label_2895b4;
            case 0x2895B8u: goto label_2895b8;
            case 0x2895BCu: goto label_2895bc;
            case 0x2895C0u: goto label_2895c0;
            case 0x2895C4u: goto label_2895c4;
            case 0x2895C8u: goto label_2895c8;
            case 0x2895CCu: goto label_2895cc;
            case 0x2895D0u: goto label_2895d0;
            case 0x2895D4u: goto label_2895d4;
            case 0x2895D8u: goto label_2895d8;
            case 0x2895DCu: goto label_2895dc;
            case 0x2895E0u: goto label_2895e0;
            case 0x2895E4u: goto label_2895e4;
            case 0x2895E8u: goto label_2895e8;
            case 0x2895ECu: goto label_2895ec;
            case 0x2895F0u: goto label_2895f0;
            case 0x2895F4u: goto label_2895f4;
            case 0x2895F8u: goto label_2895f8;
            case 0x2895FCu: goto label_2895fc;
            case 0x289600u: goto label_289600;
            case 0x289604u: goto label_289604;
            case 0x289608u: goto label_289608;
            case 0x28960Cu: goto label_28960c;
            case 0x289610u: goto label_289610;
            case 0x289614u: goto label_289614;
            case 0x289618u: goto label_289618;
            case 0x28961Cu: goto label_28961c;
            case 0x289620u: goto label_289620;
            case 0x289624u: goto label_289624;
            case 0x289628u: goto label_289628;
            case 0x28962Cu: goto label_28962c;
            case 0x289630u: goto label_289630;
            case 0x289634u: goto label_289634;
            case 0x289638u: goto label_289638;
            case 0x28963Cu: goto label_28963c;
            case 0x289640u: goto label_289640;
            case 0x289644u: goto label_289644;
            case 0x289648u: goto label_289648;
            case 0x28964Cu: goto label_28964c;
            case 0x289650u: goto label_289650;
            case 0x289654u: goto label_289654;
            case 0x289658u: goto label_289658;
            case 0x28965Cu: goto label_28965c;
            case 0x289660u: goto label_289660;
            case 0x289664u: goto label_289664;
            case 0x289668u: goto label_289668;
            case 0x28966Cu: goto label_28966c;
            case 0x289670u: goto label_289670;
            case 0x289674u: goto label_289674;
            case 0x289678u: goto label_289678;
            case 0x28967Cu: goto label_28967c;
            case 0x289680u: goto label_289680;
            case 0x289684u: goto label_289684;
            case 0x289688u: goto label_289688;
            case 0x28968Cu: goto label_28968c;
            case 0x289690u: goto label_289690;
            case 0x289694u: goto label_289694;
            case 0x289698u: goto label_289698;
            case 0x28969Cu: goto label_28969c;
            case 0x2896A0u: goto label_2896a0;
            case 0x2896A4u: goto label_2896a4;
            case 0x2896A8u: goto label_2896a8;
            case 0x2896ACu: goto label_2896ac;
            case 0x2896B0u: goto label_2896b0;
            case 0x2896B4u: goto label_2896b4;
            case 0x2896B8u: goto label_2896b8;
            case 0x2896BCu: goto label_2896bc;
            case 0x2896C0u: goto label_2896c0;
            case 0x2896C4u: goto label_2896c4;
            case 0x2896C8u: goto label_2896c8;
            case 0x2896CCu: goto label_2896cc;
            case 0x2896D0u: goto label_2896d0;
            case 0x2896D4u: goto label_2896d4;
            case 0x2896D8u: goto label_2896d8;
            case 0x2896DCu: goto label_2896dc;
            case 0x2896E0u: goto label_2896e0;
            case 0x2896E4u: goto label_2896e4;
            case 0x2896E8u: goto label_2896e8;
            case 0x2896ECu: goto label_2896ec;
            case 0x2896F0u: goto label_2896f0;
            case 0x2896F4u: goto label_2896f4;
            case 0x2896F8u: goto label_2896f8;
            case 0x2896FCu: goto label_2896fc;
            case 0x289700u: goto label_289700;
            case 0x289704u: goto label_289704;
            case 0x289708u: goto label_289708;
            case 0x28970Cu: goto label_28970c;
            case 0x289710u: goto label_289710;
            case 0x289714u: goto label_289714;
            case 0x289718u: goto label_289718;
            case 0x28971Cu: goto label_28971c;
            case 0x289720u: goto label_289720;
            case 0x289724u: goto label_289724;
            case 0x289728u: goto label_289728;
            case 0x28972Cu: goto label_28972c;
            case 0x289730u: goto label_289730;
            case 0x289734u: goto label_289734;
            case 0x289738u: goto label_289738;
            case 0x28973Cu: goto label_28973c;
            case 0x289740u: goto label_289740;
            case 0x289744u: goto label_289744;
            case 0x289748u: goto label_289748;
            case 0x28974Cu: goto label_28974c;
            case 0x289750u: goto label_289750;
            case 0x289754u: goto label_289754;
            case 0x289758u: goto label_289758;
            case 0x28975Cu: goto label_28975c;
            case 0x289760u: goto label_289760;
            case 0x289764u: goto label_289764;
            case 0x289768u: goto label_289768;
            case 0x28976Cu: goto label_28976c;
            case 0x289770u: goto label_289770;
            case 0x289774u: goto label_289774;
            case 0x289778u: goto label_289778;
            case 0x28977Cu: goto label_28977c;
            case 0x289780u: goto label_289780;
            case 0x289784u: goto label_289784;
            case 0x289788u: goto label_289788;
            case 0x28978Cu: goto label_28978c;
            case 0x289790u: goto label_289790;
            case 0x289794u: goto label_289794;
            case 0x289798u: goto label_289798;
            case 0x28979Cu: goto label_28979c;
            case 0x2897A0u: goto label_2897a0;
            case 0x2897A4u: goto label_2897a4;
            case 0x2897A8u: goto label_2897a8;
            case 0x2897ACu: goto label_2897ac;
            case 0x2897B0u: goto label_2897b0;
            case 0x2897B4u: goto label_2897b4;
            case 0x2897B8u: goto label_2897b8;
            case 0x2897BCu: goto label_2897bc;
            case 0x2897C0u: goto label_2897c0;
            case 0x2897C4u: goto label_2897c4;
            case 0x2897C8u: goto label_2897c8;
            case 0x2897CCu: goto label_2897cc;
            case 0x2897D0u: goto label_2897d0;
            case 0x2897D4u: goto label_2897d4;
            case 0x2897D8u: goto label_2897d8;
            case 0x2897DCu: goto label_2897dc;
            case 0x2897E0u: goto label_2897e0;
            case 0x2897E4u: goto label_2897e4;
            case 0x2897E8u: goto label_2897e8;
            case 0x2897ECu: goto label_2897ec;
            case 0x2897F0u: goto label_2897f0;
            case 0x2897F4u: goto label_2897f4;
            case 0x2897F8u: goto label_2897f8;
            case 0x2897FCu: goto label_2897fc;
            case 0x289800u: goto label_289800;
            case 0x289804u: goto label_289804;
            case 0x289808u: goto label_289808;
            case 0x28980Cu: goto label_28980c;
            case 0x289810u: goto label_289810;
            case 0x289814u: goto label_289814;
            case 0x289818u: goto label_289818;
            case 0x28981Cu: goto label_28981c;
            case 0x289820u: goto label_289820;
            case 0x289824u: goto label_289824;
            case 0x289828u: goto label_289828;
            case 0x28982Cu: goto label_28982c;
            case 0x289830u: goto label_289830;
            case 0x289834u: goto label_289834;
            case 0x289838u: goto label_289838;
            case 0x28983Cu: goto label_28983c;
            case 0x289840u: goto label_289840;
            case 0x289844u: goto label_289844;
            case 0x289848u: goto label_289848;
            case 0x28984Cu: goto label_28984c;
            case 0x289850u: goto label_289850;
            case 0x289854u: goto label_289854;
            case 0x289858u: goto label_289858;
            case 0x28985Cu: goto label_28985c;
            case 0x289860u: goto label_289860;
            case 0x289864u: goto label_289864;
            case 0x289868u: goto label_289868;
            case 0x28986Cu: goto label_28986c;
            case 0x289870u: goto label_289870;
            case 0x289874u: goto label_289874;
            case 0x289878u: goto label_289878;
            case 0x28987Cu: goto label_28987c;
            case 0x289880u: goto label_289880;
            case 0x289884u: goto label_289884;
            case 0x289888u: goto label_289888;
            case 0x28988Cu: goto label_28988c;
            case 0x289890u: goto label_289890;
            case 0x289894u: goto label_289894;
            case 0x289898u: goto label_289898;
            case 0x28989Cu: goto label_28989c;
            case 0x2898A0u: goto label_2898a0;
            case 0x2898A4u: goto label_2898a4;
            case 0x2898A8u: goto label_2898a8;
            case 0x2898ACu: goto label_2898ac;
            case 0x2898B0u: goto label_2898b0;
            case 0x2898B4u: goto label_2898b4;
            case 0x2898B8u: goto label_2898b8;
            case 0x2898BCu: goto label_2898bc;
            case 0x2898C0u: goto label_2898c0;
            case 0x2898C4u: goto label_2898c4;
            case 0x2898C8u: goto label_2898c8;
            case 0x2898CCu: goto label_2898cc;
            case 0x2898D0u: goto label_2898d0;
            case 0x2898D4u: goto label_2898d4;
            case 0x2898D8u: goto label_2898d8;
            case 0x2898DCu: goto label_2898dc;
            case 0x2898E0u: goto label_2898e0;
            case 0x2898E4u: goto label_2898e4;
            case 0x2898E8u: goto label_2898e8;
            case 0x2898ECu: goto label_2898ec;
            case 0x2898F0u: goto label_2898f0;
            case 0x2898F4u: goto label_2898f4;
            case 0x2898F8u: goto label_2898f8;
            case 0x2898FCu: goto label_2898fc;
            case 0x289900u: goto label_289900;
            case 0x289904u: goto label_289904;
            case 0x289908u: goto label_289908;
            case 0x28990Cu: goto label_28990c;
            case 0x289910u: goto label_289910;
            case 0x289914u: goto label_289914;
            case 0x289918u: goto label_289918;
            case 0x28991Cu: goto label_28991c;
            case 0x289920u: goto label_289920;
            case 0x289924u: goto label_289924;
            case 0x289928u: goto label_289928;
            case 0x28992Cu: goto label_28992c;
            case 0x289930u: goto label_289930;
            case 0x289934u: goto label_289934;
            case 0x289938u: goto label_289938;
            case 0x28993Cu: goto label_28993c;
            case 0x289940u: goto label_289940;
            case 0x289944u: goto label_289944;
            case 0x289948u: goto label_289948;
            case 0x28994Cu: goto label_28994c;
            case 0x289950u: goto label_289950;
            case 0x289954u: goto label_289954;
            case 0x289958u: goto label_289958;
            case 0x28995Cu: goto label_28995c;
            case 0x289960u: goto label_289960;
            case 0x289964u: goto label_289964;
            case 0x289968u: goto label_289968;
            case 0x28996Cu: goto label_28996c;
            case 0x289970u: goto label_289970;
            case 0x289974u: goto label_289974;
            case 0x289978u: goto label_289978;
            case 0x28997Cu: goto label_28997c;
            case 0x289980u: goto label_289980;
            case 0x289984u: goto label_289984;
            case 0x289988u: goto label_289988;
            case 0x28998Cu: goto label_28998c;
            case 0x289990u: goto label_289990;
            case 0x289994u: goto label_289994;
            case 0x289998u: goto label_289998;
            case 0x28999Cu: goto label_28999c;
            case 0x2899A0u: goto label_2899a0;
            case 0x2899A4u: goto label_2899a4;
            case 0x2899A8u: goto label_2899a8;
            case 0x2899ACu: goto label_2899ac;
            case 0x2899B0u: goto label_2899b0;
            case 0x2899B4u: goto label_2899b4;
            case 0x2899B8u: goto label_2899b8;
            case 0x2899BCu: goto label_2899bc;
            case 0x2899C0u: goto label_2899c0;
            case 0x2899C4u: goto label_2899c4;
            case 0x2899C8u: goto label_2899c8;
            case 0x2899CCu: goto label_2899cc;
            case 0x2899D0u: goto label_2899d0;
            case 0x2899D4u: goto label_2899d4;
            case 0x2899D8u: goto label_2899d8;
            case 0x2899DCu: goto label_2899dc;
            case 0x2899E0u: goto label_2899e0;
            case 0x2899E4u: goto label_2899e4;
            case 0x2899E8u: goto label_2899e8;
            case 0x2899ECu: goto label_2899ec;
            case 0x2899F0u: goto label_2899f0;
            case 0x2899F4u: goto label_2899f4;
            case 0x2899F8u: goto label_2899f8;
            case 0x2899FCu: goto label_2899fc;
            case 0x289A00u: goto label_289a00;
            case 0x289A04u: goto label_289a04;
            case 0x289A08u: goto label_289a08;
            case 0x289A0Cu: goto label_289a0c;
            case 0x289A10u: goto label_289a10;
            case 0x289A14u: goto label_289a14;
            case 0x289A18u: goto label_289a18;
            case 0x289A1Cu: goto label_289a1c;
            case 0x289A20u: goto label_289a20;
            case 0x289A24u: goto label_289a24;
            case 0x289A28u: goto label_289a28;
            case 0x289A2Cu: goto label_289a2c;
            case 0x289A30u: goto label_289a30;
            case 0x289A34u: goto label_289a34;
            case 0x289A38u: goto label_289a38;
            case 0x289A3Cu: goto label_289a3c;
            case 0x289A40u: goto label_289a40;
            case 0x289A44u: goto label_289a44;
            case 0x289A48u: goto label_289a48;
            case 0x289A4Cu: goto label_289a4c;
            case 0x289A50u: goto label_289a50;
            case 0x289A54u: goto label_289a54;
            case 0x289A58u: goto label_289a58;
            case 0x289A5Cu: goto label_289a5c;
            case 0x289A60u: goto label_289a60;
            case 0x289A64u: goto label_289a64;
            case 0x289A68u: goto label_289a68;
            case 0x289A6Cu: goto label_289a6c;
            case 0x289A70u: goto label_289a70;
            case 0x289A74u: goto label_289a74;
            case 0x289A78u: goto label_289a78;
            case 0x289A7Cu: goto label_289a7c;
            case 0x289A80u: goto label_289a80;
            case 0x289A84u: goto label_289a84;
            case 0x289A88u: goto label_289a88;
            case 0x289A8Cu: goto label_289a8c;
            case 0x289A90u: goto label_289a90;
            case 0x289A94u: goto label_289a94;
            case 0x289A98u: goto label_289a98;
            case 0x289A9Cu: goto label_289a9c;
            case 0x289AA0u: goto label_289aa0;
            case 0x289AA4u: goto label_289aa4;
            case 0x289AA8u: goto label_289aa8;
            case 0x289AACu: goto label_289aac;
            case 0x289AB0u: goto label_289ab0;
            case 0x289AB4u: goto label_289ab4;
            case 0x289AB8u: goto label_289ab8;
            case 0x289ABCu: goto label_289abc;
            case 0x289AC0u: goto label_289ac0;
            case 0x289AC4u: goto label_289ac4;
            case 0x289AC8u: goto label_289ac8;
            case 0x289ACCu: goto label_289acc;
            case 0x289AD0u: goto label_289ad0;
            case 0x289AD4u: goto label_289ad4;
            case 0x289AD8u: goto label_289ad8;
            case 0x289ADCu: goto label_289adc;
            case 0x289AE0u: goto label_289ae0;
            case 0x289AE4u: goto label_289ae4;
            case 0x289AE8u: goto label_289ae8;
            case 0x289AECu: goto label_289aec;
            case 0x289AF0u: goto label_289af0;
            case 0x289AF4u: goto label_289af4;
            case 0x289AF8u: goto label_289af8;
            case 0x289AFCu: goto label_289afc;
            case 0x289B00u: goto label_289b00;
            case 0x289B04u: goto label_289b04;
            case 0x289B08u: goto label_289b08;
            case 0x289B0Cu: goto label_289b0c;
            case 0x289B10u: goto label_289b10;
            case 0x289B14u: goto label_289b14;
            case 0x289B18u: goto label_289b18;
            case 0x289B1Cu: goto label_289b1c;
            case 0x289B20u: goto label_289b20;
            case 0x289B24u: goto label_289b24;
            case 0x289B28u: goto label_289b28;
            case 0x289B2Cu: goto label_289b2c;
            case 0x289B30u: goto label_289b30;
            case 0x289B34u: goto label_289b34;
            case 0x289B38u: goto label_289b38;
            case 0x289B3Cu: goto label_289b3c;
            case 0x289B40u: goto label_289b40;
            case 0x289B44u: goto label_289b44;
            case 0x289B48u: goto label_289b48;
            case 0x289B4Cu: goto label_289b4c;
            case 0x289B50u: goto label_289b50;
            case 0x289B54u: goto label_289b54;
            case 0x289B58u: goto label_289b58;
            case 0x289B5Cu: goto label_289b5c;
            case 0x289B60u: goto label_289b60;
            case 0x289B64u: goto label_289b64;
            case 0x289B68u: goto label_289b68;
            case 0x289B6Cu: goto label_289b6c;
            case 0x289B70u: goto label_289b70;
            case 0x289B74u: goto label_289b74;
            case 0x289B78u: goto label_289b78;
            case 0x289B7Cu: goto label_289b7c;
            case 0x289B80u: goto label_289b80;
            case 0x289B84u: goto label_289b84;
            case 0x289B88u: goto label_289b88;
            case 0x289B8Cu: goto label_289b8c;
            case 0x289B90u: goto label_289b90;
            case 0x289B94u: goto label_289b94;
            case 0x289B98u: goto label_289b98;
            case 0x289B9Cu: goto label_289b9c;
            case 0x289BA0u: goto label_289ba0;
            case 0x289BA4u: goto label_289ba4;
            case 0x289BA8u: goto label_289ba8;
            case 0x289BACu: goto label_289bac;
            case 0x289BB0u: goto label_289bb0;
            case 0x289BB4u: goto label_289bb4;
            case 0x289BB8u: goto label_289bb8;
            case 0x289BBCu: goto label_289bbc;
            case 0x289BC0u: goto label_289bc0;
            case 0x289BC4u: goto label_289bc4;
            case 0x289BC8u: goto label_289bc8;
            case 0x289BCCu: goto label_289bcc;
            case 0x289BD0u: goto label_289bd0;
            case 0x289BD4u: goto label_289bd4;
            case 0x289BD8u: goto label_289bd8;
            case 0x289BDCu: goto label_289bdc;
            case 0x289BE0u: goto label_289be0;
            case 0x289BE4u: goto label_289be4;
            case 0x289BE8u: goto label_289be8;
            case 0x289BECu: goto label_289bec;
            case 0x289BF0u: goto label_289bf0;
            case 0x289BF4u: goto label_289bf4;
            case 0x289BF8u: goto label_289bf8;
            case 0x289BFCu: goto label_289bfc;
            case 0x289C00u: goto label_289c00;
            case 0x289C04u: goto label_289c04;
            case 0x289C08u: goto label_289c08;
            case 0x289C0Cu: goto label_289c0c;
            case 0x289C10u: goto label_289c10;
            case 0x289C14u: goto label_289c14;
            case 0x289C18u: goto label_289c18;
            case 0x289C1Cu: goto label_289c1c;
            case 0x289C20u: goto label_289c20;
            case 0x289C24u: goto label_289c24;
            case 0x289C28u: goto label_289c28;
            case 0x289C2Cu: goto label_289c2c;
            case 0x289C30u: goto label_289c30;
            case 0x289C34u: goto label_289c34;
            case 0x289C38u: goto label_289c38;
            case 0x289C3Cu: goto label_289c3c;
            case 0x289C40u: goto label_289c40;
            case 0x289C44u: goto label_289c44;
            case 0x289C48u: goto label_289c48;
            case 0x289C4Cu: goto label_289c4c;
            case 0x289C50u: goto label_289c50;
            case 0x289C54u: goto label_289c54;
            case 0x289C58u: goto label_289c58;
            case 0x289C5Cu: goto label_289c5c;
            case 0x289C60u: goto label_289c60;
            case 0x289C64u: goto label_289c64;
            case 0x289C68u: goto label_289c68;
            case 0x289C6Cu: goto label_289c6c;
            case 0x289C70u: goto label_289c70;
            case 0x289C74u: goto label_289c74;
            case 0x289C78u: goto label_289c78;
            case 0x289C7Cu: goto label_289c7c;
            case 0x289C80u: goto label_289c80;
            case 0x289C84u: goto label_289c84;
            case 0x289C88u: goto label_289c88;
            case 0x289C8Cu: goto label_289c8c;
            case 0x289C90u: goto label_289c90;
            case 0x289C94u: goto label_289c94;
            case 0x289C98u: goto label_289c98;
            case 0x289C9Cu: goto label_289c9c;
            case 0x289CA0u: goto label_289ca0;
            case 0x289CA4u: goto label_289ca4;
            case 0x289CA8u: goto label_289ca8;
            case 0x289CACu: goto label_289cac;
            case 0x289CB0u: goto label_289cb0;
            case 0x289CB4u: goto label_289cb4;
            case 0x289CB8u: goto label_289cb8;
            case 0x289CBCu: goto label_289cbc;
            case 0x289CC0u: goto label_289cc0;
            case 0x289CC4u: goto label_289cc4;
            case 0x289CC8u: goto label_289cc8;
            case 0x289CCCu: goto label_289ccc;
            case 0x289CD0u: goto label_289cd0;
            case 0x289CD4u: goto label_289cd4;
            case 0x289CD8u: goto label_289cd8;
            case 0x289CDCu: goto label_289cdc;
            case 0x289CE0u: goto label_289ce0;
            case 0x289CE4u: goto label_289ce4;
            case 0x289CE8u: goto label_289ce8;
            case 0x289CECu: goto label_289cec;
            case 0x289CF0u: goto label_289cf0;
            case 0x289CF4u: goto label_289cf4;
            case 0x289CF8u: goto label_289cf8;
            case 0x289CFCu: goto label_289cfc;
            case 0x289D00u: goto label_289d00;
            case 0x289D04u: goto label_289d04;
            case 0x289D08u: goto label_289d08;
            case 0x289D0Cu: goto label_289d0c;
            case 0x289D10u: goto label_289d10;
            case 0x289D14u: goto label_289d14;
            case 0x289D18u: goto label_289d18;
            case 0x289D1Cu: goto label_289d1c;
            case 0x289D20u: goto label_289d20;
            case 0x289D24u: goto label_289d24;
            case 0x289D28u: goto label_289d28;
            case 0x289D2Cu: goto label_289d2c;
            case 0x289D30u: goto label_289d30;
            case 0x289D34u: goto label_289d34;
            case 0x289D38u: goto label_289d38;
            case 0x289D3Cu: goto label_289d3c;
            case 0x289D40u: goto label_289d40;
            case 0x289D44u: goto label_289d44;
            case 0x289D48u: goto label_289d48;
            case 0x289D4Cu: goto label_289d4c;
            case 0x289D50u: goto label_289d50;
            case 0x289D54u: goto label_289d54;
            case 0x289D58u: goto label_289d58;
            case 0x289D5Cu: goto label_289d5c;
            case 0x289D60u: goto label_289d60;
            case 0x289D64u: goto label_289d64;
            case 0x289D68u: goto label_289d68;
            case 0x289D6Cu: goto label_289d6c;
            case 0x289D70u: goto label_289d70;
            case 0x289D74u: goto label_289d74;
            case 0x289D78u: goto label_289d78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x288464u;
label_288464:
    // 0x288464: 0x8e622ad4
    ctx->pc = 0x288464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
label_288468:
    // 0x288468: 0xae622ad8
    ctx->pc = 0x288468u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10968), GPR_U32(ctx, 2));
label_28846c:
    // 0x28846c: 0x3c020031
    ctx->pc = 0x28846cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_288470:
    // 0x288470: 0xdc420e28
    ctx->pc = 0x288470u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
label_288474:
    // 0x288474: 0x30420004
    ctx->pc = 0x288474u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_288478:
    // 0x288478: 0x10400006
label_28847c:
    if (ctx->pc == 0x28847Cu) {
        ctx->pc = 0x28847Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x288480u;
        goto label_288480;
    }
    ctx->pc = 0x288478u;
    {
        const bool branch_taken_0x288478 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28847Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x288478) {
            ctx->pc = 0x288494u;
            goto label_288494;
        }
    }
    ctx->pc = 0x288480u;
label_288480:
    // 0x288480: 0xae6200fc
    ctx->pc = 0x288480u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 252), GPR_U32(ctx, 2));
label_288484:
    // 0x288484: 0x3c02003b
    ctx->pc = 0x288484u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_288488:
    // 0x288488: 0x8c42d780
    ctx->pc = 0x288488u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956928)));
label_28848c:
    // 0x28848c: 0x10000566
label_288490:
    if (ctx->pc == 0x288490u) {
        ctx->pc = 0x288490u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 2460), GPR_U32(ctx, 2));
        ctx->pc = 0x288494u;
        goto label_288494;
    }
    ctx->pc = 0x28848Cu;
    {
        const bool branch_taken_0x28848c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288490u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 2460), GPR_U32(ctx, 2));
        if (branch_taken_0x28848c) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x288494u;
label_288494:
    // 0x288494: 0x3c030035
    ctx->pc = 0x288494u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_288498:
    // 0x288498: 0x2463a620
    ctx->pc = 0x288498u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_28849c:
    // 0x28849c: 0x240200e8
    ctx->pc = 0x28849cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_2884a0:
    // 0x2884a0: 0x2821018
    ctx->pc = 0x2884a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2884a4:
    // 0x2884a4: 0x621821
    ctx->pc = 0x2884a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2884a8:
    // 0x2884a8: 0x8c62006c
    ctx->pc = 0x2884a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2884ac:
    // 0x2884ac: 0x14400010
label_2884b0:
    if (ctx->pc == 0x2884B0u) {
        ctx->pc = 0x2884B0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x2884B4u;
        goto label_2884b4;
    }
    ctx->pc = 0x2884ACu;
    {
        const bool branch_taken_0x2884ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2884B0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x2884ac) {
            ctx->pc = 0x2884F0u;
            goto label_2884f0;
        }
    }
    ctx->pc = 0x2884B4u;
label_2884b4:
    // 0x2884b4: 0x280202d
    ctx->pc = 0x2884b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2884b8:
    // 0x2884b8: 0xc0a18a2
label_2884bc:
    if (ctx->pc == 0x2884BCu) {
        ctx->pc = 0x2884BCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2884C0u;
        goto label_2884c0;
    }
    ctx->pc = 0x2884B8u;
    SET_GPR_U32(ctx, 31, 0x2884C0u);
    ctx->pc = 0x2884BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x286288u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_sel_menu_0x286288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2884C0u; }
    }
    if (ctx->pc != 0x2884C0u) { return; }
    ctx->pc = 0x2884C0u;
label_2884c0:
    // 0x2884c0: 0xc082728
label_2884c4:
    if (ctx->pc == 0x2884C4u) {
        ctx->pc = 0x2884C8u;
        goto label_2884c8;
    }
    ctx->pc = 0x2884C0u;
    SET_GPR_U32(ctx, 31, 0x2884C8u);
    ctx->pc = 0x209CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        vmu_exists_0x209ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2884C8u; }
    }
    if (ctx->pc != 0x2884C8u) { return; }
    ctx->pc = 0x2884C8u;
label_2884c8:
    // 0x2884c8: 0x28420002
    ctx->pc = 0x2884c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_2884cc:
    // 0x2884cc: 0x14400008
label_2884d0:
    if (ctx->pc == 0x2884D0u) {
        ctx->pc = 0x2884D0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x2884D4u;
        goto label_2884d4;
    }
    ctx->pc = 0x2884CCu;
    {
        const bool branch_taken_0x2884cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2884D0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x2884cc) {
            ctx->pc = 0x2884F0u;
            goto label_2884f0;
        }
    }
    ctx->pc = 0x2884D4u;
label_2884d4:
    // 0x2884d4: 0xc08289a
label_2884d8:
    if (ctx->pc == 0x2884D8u) {
        ctx->pc = 0x2884DCu;
        goto label_2884dc;
    }
    ctx->pc = 0x2884D4u;
    SET_GPR_U32(ctx, 31, 0x2884DCu);
    ctx->pc = 0x20A268u;
    {
        const uint32_t __entryPc = ctx->pc;
        vmu_directory_exists_0x20a268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2884DCu; }
    }
    if (ctx->pc != 0x2884DCu) { return; }
    ctx->pc = 0x2884DCu;
label_2884dc:
    // 0x2884dc: 0x10400004
label_2884e0:
    if (ctx->pc == 0x2884E0u) {
        ctx->pc = 0x2884E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2884E4u;
        goto label_2884e4;
    }
    ctx->pc = 0x2884DCu;
    {
        const bool branch_taken_0x2884dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2884E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2884dc) {
            ctx->pc = 0x2884F0u;
            goto label_2884f0;
        }
    }
    ctx->pc = 0x2884E4u;
label_2884e4:
    // 0x2884e4: 0xc0a1862
label_2884e8:
    if (ctx->pc == 0x2884E8u) {
        ctx->pc = 0x2884E8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1001));
        ctx->pc = 0x2884ECu;
        goto label_2884ec;
    }
    ctx->pc = 0x2884E4u;
    SET_GPR_U32(ctx, 31, 0x2884ECu);
    ctx->pc = 0x2884E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1001));
    ctx->pc = 0x286188u;
    {
        const uint32_t __entryPc = ctx->pc;
        sel_set_choice_0x286188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2884ECu; }
    }
    if (ctx->pc != 0x2884ECu) { return; }
    ctx->pc = 0x2884ECu;
label_2884ec:
    // 0x2884ec: 0x241000e8
    ctx->pc = 0x2884ecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
label_2884f0:
    // 0x2884f0: 0x2908018
    ctx->pc = 0x2884f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2884f4:
    // 0x2884f4: 0x3c020035
    ctx->pc = 0x2884f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2884f8:
    // 0x2884f8: 0x2442a620
    ctx->pc = 0x2884f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944288));
label_2884fc:
    // 0x2884fc: 0x2028021
    ctx->pc = 0x2884fcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_288500:
    // 0x288500: 0xc082d7e
label_288504:
    if (ctx->pc == 0x288504u) {
        ctx->pc = 0x288504u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288508u;
        goto label_288508;
    }
    ctx->pc = 0x288500u;
    SET_GPR_U32(ctx, 31, 0x288508u);
    ctx->pc = 0x288504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_optmenu_0x20b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288508u; }
    }
    if (ctx->pc != 0x288508u) { return; }
    ctx->pc = 0x288508u;
label_288508:
    // 0x288508: 0x200202d
    ctx->pc = 0x288508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28850c:
    // 0x28850c: 0xc083146
label_288510:
    if (ctx->pc == 0x288510u) {
        ctx->pc = 0x288510u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x288514u;
        goto label_288514;
    }
    ctx->pc = 0x28850Cu;
    SET_GPR_U32(ctx, 31, 0x288514u);
    ctx->pc = 0x288510u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_optmenu_0x20c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288514u; }
    }
    if (ctx->pc != 0x288514u) { return; }
    ctx->pc = 0x288514u;
label_288514:
    // 0x288514: 0x40882d
    ctx->pc = 0x288514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288518:
    // 0x288518: 0x280202d
    ctx->pc = 0x288518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28851c:
    // 0x28851c: 0xc0a1ab2
label_288520:
    if (ctx->pc == 0x288520u) {
        ctx->pc = 0x288520u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288524u;
        goto label_288524;
    }
    ctx->pc = 0x28851Cu;
    SET_GPR_U32(ctx, 31, 0x288524u);
    ctx->pc = 0x288520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x286AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_sel_menu_0x286ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288524u; }
    }
    if (ctx->pc != 0x288524u) { return; }
    ctx->pc = 0x288524u;
label_288524:
    // 0x288524: 0x240203e8
    ctx->pc = 0x288524u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1000));
label_288528:
    // 0x288528: 0x12220020
label_28852c:
    if (ctx->pc == 0x28852Cu) {
        ctx->pc = 0x28852Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x288530u;
        goto label_288530;
    }
    ctx->pc = 0x288528u;
    {
        const bool branch_taken_0x288528 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x28852Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x288528) {
            ctx->pc = 0x2885ACu;
            goto label_2885ac;
        }
    }
    ctx->pc = 0x288530u;
label_288530:
    // 0x288530: 0x2a2203e9
    ctx->pc = 0x288530u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1001));
label_288534:
    // 0x288534: 0x10400005
label_288538:
    if (ctx->pc == 0x288538u) {
        ctx->pc = 0x288538u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28853Cu;
        goto label_28853c;
    }
    ctx->pc = 0x288534u;
    {
        const bool branch_taken_0x288534 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x288538u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x288534) {
            ctx->pc = 0x28854Cu;
            goto label_28854c;
        }
    }
    ctx->pc = 0x28853Cu;
label_28853c:
    // 0x28853c: 0x12220008
label_288540:
    if (ctx->pc == 0x288540u) {
        ctx->pc = 0x288540u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x288544u;
        goto label_288544;
    }
    ctx->pc = 0x28853Cu;
    {
        const bool branch_taken_0x28853c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x288540u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x28853c) {
            ctx->pc = 0x288560u;
            goto label_288560;
        }
    }
    ctx->pc = 0x288544u;
label_288544:
    // 0x288544: 0x10000539
label_288548:
    if (ctx->pc == 0x288548u) {
        ctx->pc = 0x288548u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x28854Cu;
        goto label_28854c;
    }
    ctx->pc = 0x288544u;
    {
        const bool branch_taken_0x288544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288548u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        if (branch_taken_0x288544) {
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x28854Cu;
label_28854c:
    // 0x28854c: 0x240203e9
    ctx->pc = 0x28854cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1001));
label_288550:
    // 0x288550: 0x1222001f
label_288554:
    if (ctx->pc == 0x288554u) {
        ctx->pc = 0x288554u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x288558u;
        goto label_288558;
    }
    ctx->pc = 0x288550u;
    {
        const bool branch_taken_0x288550 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x288554u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x288550) {
            ctx->pc = 0x2885D0u;
            goto label_2885d0;
        }
    }
    ctx->pc = 0x288558u;
label_288558:
    // 0x288558: 0x10000534
label_28855c:
    if (ctx->pc == 0x28855Cu) {
        ctx->pc = 0x28855Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x288560u;
        goto label_288560;
    }
    ctx->pc = 0x288558u;
    {
        const bool branch_taken_0x288558 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28855Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        if (branch_taken_0x288558) {
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x288560u;
label_288560:
    // 0x288560: 0x8c42f184
    ctx->pc = 0x288560u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_288564:
    // 0x288564: 0x54400531
label_288568:
    if (ctx->pc == 0x288568u) {
        ctx->pc = 0x288568u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x28856Cu;
        goto label_28856c;
    }
    ctx->pc = 0x288564u;
    {
        const bool branch_taken_0x288564 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x288564) {
            ctx->pc = 0x288568u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x28856Cu;
label_28856c:
    // 0x28856c: 0x240200e8
    ctx->pc = 0x28856cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_288570:
    // 0x288570: 0x2821018
    ctx->pc = 0x288570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288574:
    // 0x288574: 0x3c040035
    ctx->pc = 0x288574u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_288578:
    // 0x288578: 0x2484a620
    ctx->pc = 0x288578u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_28857c:
    // 0x28857c: 0xc082c8c
label_288580:
    if (ctx->pc == 0x288580u) {
        ctx->pc = 0x288580u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x288584u;
        goto label_288584;
    }
    ctx->pc = 0x28857Cu;
    SET_GPR_U32(ctx, 31, 0x288584u);
    ctx->pc = 0x288580u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288584u; }
    }
    if (ctx->pc != 0x288584u) { return; }
    ctx->pc = 0x288584u;
label_288584:
    // 0x288584: 0x3c030032
    ctx->pc = 0x288584u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_288588:
    // 0x288588: 0x24020001
    ctx->pc = 0x288588u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_28858c:
    // 0x28858c: 0x2821004
    ctx->pc = 0x28858cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
label_288590:
    // 0x288590: 0x21027
    ctx->pc = 0x288590u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_288594:
    // 0x288594: 0x8c6307b4
    ctx->pc = 0x288594u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 1972)));
label_288598:
    // 0x288598: 0x431024
    ctx->pc = 0x288598u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28859c:
    // 0x28859c: 0x144000da
label_2885a0:
    if (ctx->pc == 0x2885A0u) {
        ctx->pc = 0x2885A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2885A4u;
        goto label_2885a4;
    }
    ctx->pc = 0x28859Cu;
    {
        const bool branch_taken_0x28859c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2885A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28859c) {
            ctx->pc = 0x288908u;
            goto label_288908;
        }
    }
    ctx->pc = 0x2885A4u;
label_2885a4:
    // 0x2885a4: 0x100000dc
label_2885a8:
    if (ctx->pc == 0x2885A8u) {
        ctx->pc = 0x2885ACu;
        goto label_2885ac;
    }
    ctx->pc = 0x2885A4u;
    {
        const bool branch_taken_0x2885a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2885a4) {
            ctx->pc = 0x288918u;
            goto label_288918;
        }
    }
    ctx->pc = 0x2885ACu;
label_2885ac:
    // 0x2885ac: 0x2821018
    ctx->pc = 0x2885acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2885b0:
    // 0x2885b0: 0x3c040035
    ctx->pc = 0x2885b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2885b4:
    // 0x2885b4: 0x2484a620
    ctx->pc = 0x2885b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_2885b8:
    // 0x2885b8: 0xc082c8c
label_2885bc:
    if (ctx->pc == 0x2885BCu) {
        ctx->pc = 0x2885BCu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x2885C0u;
        goto label_2885c0;
    }
    ctx->pc = 0x2885B8u;
    SET_GPR_U32(ctx, 31, 0x2885C0u);
    ctx->pc = 0x2885BCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2885C0u; }
    }
    if (ctx->pc != 0x2885C0u) { return; }
    ctx->pc = 0x2885C0u;
label_2885c0:
    // 0x2885c0: 0x24020001
    ctx->pc = 0x2885c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2885c4:
    // 0x2885c4: 0xae622ae4
    ctx->pc = 0x2885c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
label_2885c8:
    // 0x2885c8: 0x10000009
label_2885cc:
    if (ctx->pc == 0x2885CCu) {
        ctx->pc = 0x2885CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2885D0u;
        goto label_2885d0;
    }
    ctx->pc = 0x2885C8u;
    {
        const bool branch_taken_0x2885c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2885CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2885c8) {
            ctx->pc = 0x2885F0u;
            goto label_2885f0;
        }
    }
    ctx->pc = 0x2885D0u;
label_2885d0:
    // 0x2885d0: 0x2821018
    ctx->pc = 0x2885d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2885d4:
    // 0x2885d4: 0x3c040035
    ctx->pc = 0x2885d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2885d8:
    // 0x2885d8: 0x2484a620
    ctx->pc = 0x2885d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_2885dc:
    // 0x2885dc: 0xc082c8c
label_2885e0:
    if (ctx->pc == 0x2885E0u) {
        ctx->pc = 0x2885E0u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x2885E4u;
        goto label_2885e4;
    }
    ctx->pc = 0x2885DCu;
    SET_GPR_U32(ctx, 31, 0x2885E4u);
    ctx->pc = 0x2885E0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2885E4u; }
    }
    if (ctx->pc != 0x2885E4u) { return; }
    ctx->pc = 0x2885E4u;
label_2885e4:
    // 0x2885e4: 0x24020001
    ctx->pc = 0x2885e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2885e8:
    // 0x2885e8: 0xae622ae4
    ctx->pc = 0x2885e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
label_2885ec:
    // 0x2885ec: 0x24020005
    ctx->pc = 0x2885ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_2885f0:
    // 0x2885f0: 0xc0981a6
label_2885f4:
    if (ctx->pc == 0x2885F4u) {
        ctx->pc = 0x2885F4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        ctx->pc = 0x2885F8u;
        goto label_2885f8;
    }
    ctx->pc = 0x2885F0u;
    SET_GPR_U32(ctx, 31, 0x2885F8u);
    ctx->pc = 0x2885F4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
    ctx->pc = 0x260698u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCursorSelect_0x260698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2885F8u; }
    }
    if (ctx->pc != 0x2885F8u) { return; }
    ctx->pc = 0x2885F8u;
label_2885f8:
    // 0x2885f8: 0x1000050c
label_2885fc:
    if (ctx->pc == 0x2885FCu) {
        ctx->pc = 0x2885FCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x288600u;
        goto label_288600;
    }
    ctx->pc = 0x2885F8u;
    {
        const bool branch_taken_0x2885f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2885FCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        if (branch_taken_0x2885f8) {
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x288600u;
label_288600:
    // 0x288600: 0x8e622ad4
    ctx->pc = 0x288600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
label_288604:
    // 0x288604: 0xae622ad8
    ctx->pc = 0x288604u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10968), GPR_U32(ctx, 2));
label_288608:
    // 0x288608: 0x3c030035
    ctx->pc = 0x288608u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_28860c:
    // 0x28860c: 0x2463a620
    ctx->pc = 0x28860cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_288610:
    // 0x288610: 0x240200e8
    ctx->pc = 0x288610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_288614:
    // 0x288614: 0x2821018
    ctx->pc = 0x288614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288618:
    // 0x288618: 0x621821
    ctx->pc = 0x288618u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28861c:
    // 0x28861c: 0x8c62006c
    ctx->pc = 0x28861cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_288620:
    // 0x288620: 0x14400024
label_288624:
    if (ctx->pc == 0x288624u) {
        ctx->pc = 0x288624u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x288628u;
        goto label_288628;
    }
    ctx->pc = 0x288620u;
    {
        const bool branch_taken_0x288620 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x288624u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x288620) {
            ctx->pc = 0x2886B4u;
            goto label_2886b4;
        }
    }
    ctx->pc = 0x288628u;
label_288628:
    // 0x288628: 0x280202d
    ctx->pc = 0x288628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28862c:
    // 0x28862c: 0xc0a18a2
label_288630:
    if (ctx->pc == 0x288630u) {
        ctx->pc = 0x288630u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x288634u;
        goto label_288634;
    }
    ctx->pc = 0x28862Cu;
    SET_GPR_U32(ctx, 31, 0x288634u);
    ctx->pc = 0x288630u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x286288u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_sel_menu_0x286288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288634u; }
    }
    if (ctx->pc != 0x288634u) { return; }
    ctx->pc = 0x288634u;
label_288634:
    // 0x288634: 0xc082728
label_288638:
    if (ctx->pc == 0x288638u) {
        ctx->pc = 0x28863Cu;
        goto label_28863c;
    }
    ctx->pc = 0x288634u;
    SET_GPR_U32(ctx, 31, 0x28863Cu);
    ctx->pc = 0x209CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        vmu_exists_0x209ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28863Cu; }
    }
    if (ctx->pc != 0x28863Cu) { return; }
    ctx->pc = 0x28863Cu;
label_28863c:
    // 0x28863c: 0x28420002
    ctx->pc = 0x28863cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_288640:
    // 0x288640: 0x14400006
label_288644:
    if (ctx->pc == 0x288644u) {
        ctx->pc = 0x288644u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288648u;
        goto label_288648;
    }
    ctx->pc = 0x288640u;
    {
        const bool branch_taken_0x288640 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x288644u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x288640) {
            ctx->pc = 0x28865Cu;
            goto label_28865c;
        }
    }
    ctx->pc = 0x288648u;
label_288648:
    // 0x288648: 0xc08289a
label_28864c:
    if (ctx->pc == 0x28864Cu) {
        ctx->pc = 0x288650u;
        goto label_288650;
    }
    ctx->pc = 0x288648u;
    SET_GPR_U32(ctx, 31, 0x288650u);
    ctx->pc = 0x20A268u;
    {
        const uint32_t __entryPc = ctx->pc;
        vmu_directory_exists_0x20a268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288650u; }
    }
    if (ctx->pc != 0x288650u) { return; }
    ctx->pc = 0x288650u;
label_288650:
    // 0x288650: 0x14400005
label_288654:
    if (ctx->pc == 0x288654u) {
        ctx->pc = 0x288654u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x288658u;
        goto label_288658;
    }
    ctx->pc = 0x288650u;
    {
        const bool branch_taken_0x288650 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x288654u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x288650) {
            ctx->pc = 0x288668u;
            goto label_288668;
        }
    }
    ctx->pc = 0x288658u;
label_288658:
    // 0x288658: 0x280202d
    ctx->pc = 0x288658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28865c:
    // 0x28865c: 0xc0a1862
label_288660:
    if (ctx->pc == 0x288660u) {
        ctx->pc = 0x288660u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1005));
        ctx->pc = 0x288664u;
        goto label_288664;
    }
    ctx->pc = 0x28865Cu;
    SET_GPR_U32(ctx, 31, 0x288664u);
    ctx->pc = 0x288660u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1005));
    ctx->pc = 0x286188u;
    {
        const uint32_t __entryPc = ctx->pc;
        sel_set_choice_0x286188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288664u; }
    }
    if (ctx->pc != 0x288664u) { return; }
    ctx->pc = 0x288664u;
label_288664:
    // 0x288664: 0x3c020034
    ctx->pc = 0x288664u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_288668:
    // 0x288668: 0x8c43e808
    ctx->pc = 0x288668u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
label_28866c:
    // 0x28866c: 0x24020008
    ctx->pc = 0x28866cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_288670:
    // 0x288670: 0x14620010
label_288674:
    if (ctx->pc == 0x288674u) {
        ctx->pc = 0x288674u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x288678u;
        goto label_288678;
    }
    ctx->pc = 0x288670u;
    {
        const bool branch_taken_0x288670 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x288674u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x288670) {
            ctx->pc = 0x2886B4u;
            goto label_2886b4;
        }
    }
    ctx->pc = 0x288678u;
label_288678:
    // 0x288678: 0x3c020034
    ctx->pc = 0x288678u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_28867c:
    // 0x28867c: 0x8c43e80c
    ctx->pc = 0x28867cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961164)));
label_288680:
    // 0x288680: 0x24020003
    ctx->pc = 0x288680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_288684:
    // 0x288684: 0x1462000c
label_288688:
    if (ctx->pc == 0x288688u) {
        ctx->pc = 0x288688u;
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x28868Cu;
        goto label_28868c;
    }
    ctx->pc = 0x288684u;
    {
        const bool branch_taken_0x288684 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x288688u;
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x288684) {
            ctx->pc = 0x2886B8u;
            goto label_2886b8;
        }
    }
    ctx->pc = 0x28868Cu;
label_28868c:
    // 0x28868c: 0x280202d
    ctx->pc = 0x28868cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_288690:
    // 0x288690: 0xc0a1882
label_288694:
    if (ctx->pc == 0x288694u) {
        ctx->pc = 0x288694u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1003));
        ctx->pc = 0x288698u;
        goto label_288698;
    }
    ctx->pc = 0x288690u;
    SET_GPR_U32(ctx, 31, 0x288698u);
    ctx->pc = 0x288694u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1003));
    ctx->pc = 0x286208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sel_set_inactive_0x286208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288698u; }
    }
    if (ctx->pc != 0x288698u) { return; }
    ctx->pc = 0x288698u;
label_288698:
    // 0x288698: 0x280202d
    ctx->pc = 0x288698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28869c:
    // 0x28869c: 0xc0a1882
label_2886a0:
    if (ctx->pc == 0x2886A0u) {
        ctx->pc = 0x2886A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1001));
        ctx->pc = 0x2886A4u;
        goto label_2886a4;
    }
    ctx->pc = 0x28869Cu;
    SET_GPR_U32(ctx, 31, 0x2886A4u);
    ctx->pc = 0x2886A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1001));
    ctx->pc = 0x286208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sel_set_inactive_0x286208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2886A4u; }
    }
    if (ctx->pc != 0x2886A4u) { return; }
    ctx->pc = 0x2886A4u;
label_2886a4:
    // 0x2886a4: 0x280202d
    ctx->pc = 0x2886a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2886a8:
    // 0x2886a8: 0xc0a1882
label_2886ac:
    if (ctx->pc == 0x2886ACu) {
        ctx->pc = 0x2886ACu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1004));
        ctx->pc = 0x2886B0u;
        goto label_2886b0;
    }
    ctx->pc = 0x2886A8u;
    SET_GPR_U32(ctx, 31, 0x2886B0u);
    ctx->pc = 0x2886ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1004));
    ctx->pc = 0x286208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sel_set_inactive_0x286208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2886B0u; }
    }
    if (ctx->pc != 0x2886B0u) { return; }
    ctx->pc = 0x2886B0u;
label_2886b0:
    // 0x2886b0: 0x241000e8
    ctx->pc = 0x2886b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
label_2886b4:
    // 0x2886b4: 0x2908018
    ctx->pc = 0x2886b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2886b8:
    // 0x2886b8: 0x3c020035
    ctx->pc = 0x2886b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2886bc:
    // 0x2886bc: 0x2442a620
    ctx->pc = 0x2886bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944288));
label_2886c0:
    // 0x2886c0: 0x2028021
    ctx->pc = 0x2886c0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2886c4:
    // 0x2886c4: 0xc082d7e
label_2886c8:
    if (ctx->pc == 0x2886C8u) {
        ctx->pc = 0x2886C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2886CCu;
        goto label_2886cc;
    }
    ctx->pc = 0x2886C4u;
    SET_GPR_U32(ctx, 31, 0x2886CCu);
    ctx->pc = 0x2886C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_optmenu_0x20b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2886CCu; }
    }
    if (ctx->pc != 0x2886CCu) { return; }
    ctx->pc = 0x2886CCu;
label_2886cc:
    // 0x2886cc: 0x200202d
    ctx->pc = 0x2886ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2886d0:
    // 0x2886d0: 0xc083146
label_2886d4:
    if (ctx->pc == 0x2886D4u) {
        ctx->pc = 0x2886D4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2886D8u;
        goto label_2886d8;
    }
    ctx->pc = 0x2886D0u;
    SET_GPR_U32(ctx, 31, 0x2886D8u);
    ctx->pc = 0x2886D4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_optmenu_0x20c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2886D8u; }
    }
    if (ctx->pc != 0x2886D8u) { return; }
    ctx->pc = 0x2886D8u;
label_2886d8:
    // 0x2886d8: 0x40882d
    ctx->pc = 0x2886d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2886dc:
    // 0x2886dc: 0x280202d
    ctx->pc = 0x2886dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2886e0:
    // 0x2886e0: 0xc0a1ab2
label_2886e4:
    if (ctx->pc == 0x2886E4u) {
        ctx->pc = 0x2886E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2886E8u;
        goto label_2886e8;
    }
    ctx->pc = 0x2886E0u;
    SET_GPR_U32(ctx, 31, 0x2886E8u);
    ctx->pc = 0x2886E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x286AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_sel_menu_0x286ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2886E8u; }
    }
    if (ctx->pc != 0x2886E8u) { return; }
    ctx->pc = 0x2886E8u;
label_2886e8:
    // 0x2886e8: 0x240203ea
    ctx->pc = 0x2886e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1002));
label_2886ec:
    // 0x2886ec: 0x1222001c
label_2886f0:
    if (ctx->pc == 0x2886F0u) {
        ctx->pc = 0x2886F0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1003));
        ctx->pc = 0x2886F4u;
        goto label_2886f4;
    }
    ctx->pc = 0x2886ECu;
    {
        const bool branch_taken_0x2886ec = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x2886F0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1003));
        if (branch_taken_0x2886ec) {
            ctx->pc = 0x288760u;
            goto label_288760;
        }
    }
    ctx->pc = 0x2886F4u;
label_2886f4:
    // 0x2886f4: 0x10400007
label_2886f8:
    if (ctx->pc == 0x2886F8u) {
        ctx->pc = 0x2886F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2886FCu;
        goto label_2886fc;
    }
    ctx->pc = 0x2886F4u;
    {
        const bool branch_taken_0x2886f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2886F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2886f4) {
            ctx->pc = 0x288714u;
            goto label_288714;
        }
    }
    ctx->pc = 0x2886FCu;
label_2886fc:
    // 0x2886fc: 0x122204ca
label_288700:
    if (ctx->pc == 0x288700u) {
        ctx->pc = 0x288700u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1001));
        ctx->pc = 0x288704u;
        goto label_288704;
    }
    ctx->pc = 0x2886FCu;
    {
        const bool branch_taken_0x2886fc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x288700u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1001));
        if (branch_taken_0x2886fc) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x288704u;
label_288704:
    // 0x288704: 0x1222001c
label_288708:
    if (ctx->pc == 0x288708u) {
        ctx->pc = 0x288708u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x28870Cu;
        goto label_28870c;
    }
    ctx->pc = 0x288704u;
    {
        const bool branch_taken_0x288704 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x288708u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x288704) {
            ctx->pc = 0x288778u;
            goto label_288778;
        }
    }
    ctx->pc = 0x28870Cu;
label_28870c:
    // 0x28870c: 0x100004c7
label_288710:
    if (ctx->pc == 0x288710u) {
        ctx->pc = 0x288710u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x288714u;
        goto label_288714;
    }
    ctx->pc = 0x28870Cu;
    {
        const bool branch_taken_0x28870c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288710u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        if (branch_taken_0x28870c) {
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x288714u;
label_288714:
    // 0x288714: 0x240203ec
    ctx->pc = 0x288714u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1004));
label_288718:
    // 0x288718: 0x1222002c
label_28871c:
    if (ctx->pc == 0x28871Cu) {
        ctx->pc = 0x28871Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1004));
        ctx->pc = 0x288720u;
        goto label_288720;
    }
    ctx->pc = 0x288718u;
    {
        const bool branch_taken_0x288718 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x28871Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1004));
        if (branch_taken_0x288718) {
            ctx->pc = 0x2887CCu;
            goto label_2887cc;
        }
    }
    ctx->pc = 0x288720u;
label_288720:
    // 0x288720: 0x14400021
label_288724:
    if (ctx->pc == 0x288724u) {
        ctx->pc = 0x288724u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x288728u;
        goto label_288728;
    }
    ctx->pc = 0x288720u;
    {
        const bool branch_taken_0x288720 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x288724u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x288720) {
            ctx->pc = 0x2887A8u;
            goto label_2887a8;
        }
    }
    ctx->pc = 0x288728u;
label_288728:
    // 0x288728: 0x240203ed
    ctx->pc = 0x288728u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1005));
label_28872c:
    // 0x28872c: 0x562204bf
label_288730:
    if (ctx->pc == 0x288730u) {
        ctx->pc = 0x288730u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x288734u;
        goto label_288734;
    }
    ctx->pc = 0x28872Cu;
    {
        const bool branch_taken_0x28872c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x28872c) {
            ctx->pc = 0x288730u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x288734u;
label_288734:
    // 0x288734: 0xc0981a6
label_288738:
    if (ctx->pc == 0x288738u) {
        ctx->pc = 0x28873Cu;
        goto label_28873c;
    }
    ctx->pc = 0x288734u;
    SET_GPR_U32(ctx, 31, 0x28873Cu);
    ctx->pc = 0x260698u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCursorSelect_0x260698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28873Cu; }
    }
    if (ctx->pc != 0x28873Cu) { return; }
    ctx->pc = 0x28873Cu;
label_28873c:
    // 0x28873c: 0x240200e8
    ctx->pc = 0x28873cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_288740:
    // 0x288740: 0x2821018
    ctx->pc = 0x288740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288744:
    // 0x288744: 0x3c040035
    ctx->pc = 0x288744u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_288748:
    // 0x288748: 0x2484a620
    ctx->pc = 0x288748u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_28874c:
    // 0x28874c: 0xc082c8c
label_288750:
    if (ctx->pc == 0x288750u) {
        ctx->pc = 0x288750u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x288754u;
        goto label_288754;
    }
    ctx->pc = 0x28874Cu;
    SET_GPR_U32(ctx, 31, 0x288754u);
    ctx->pc = 0x288750u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288754u; }
    }
    if (ctx->pc != 0x288754u) { return; }
    ctx->pc = 0x288754u;
label_288754:
    // 0x288754: 0x24020003
    ctx->pc = 0x288754u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_288758:
    // 0x288758: 0x100004b3
label_28875c:
    if (ctx->pc == 0x28875Cu) {
        ctx->pc = 0x28875Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 252), GPR_U32(ctx, 2));
        ctx->pc = 0x288760u;
        goto label_288760;
    }
    ctx->pc = 0x288758u;
    {
        const bool branch_taken_0x288758 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28875Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 252), GPR_U32(ctx, 2));
        if (branch_taken_0x288758) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x288760u;
label_288760:
    // 0x288760: 0x240200e8
    ctx->pc = 0x288760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_288764:
    // 0x288764: 0x2821018
    ctx->pc = 0x288764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288768:
    // 0x288768: 0x3c040035
    ctx->pc = 0x288768u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_28876c:
    // 0x28876c: 0x2484a620
    ctx->pc = 0x28876cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_288770:
    // 0x288770: 0x100002ab
label_288774:
    if (ctx->pc == 0x288774u) {
        ctx->pc = 0x288774u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x288778u;
        goto label_288778;
    }
    ctx->pc = 0x288770u;
    {
        const bool branch_taken_0x288770 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288774u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        if (branch_taken_0x288770) {
            ctx->pc = 0x289220u;
            goto label_289220;
        }
    }
    ctx->pc = 0x288778u;
label_288778:
    // 0x288778: 0x2821018
    ctx->pc = 0x288778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28877c:
    // 0x28877c: 0x3c040035
    ctx->pc = 0x28877cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_288780:
    // 0x288780: 0x2484a620
    ctx->pc = 0x288780u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_288784:
    // 0x288784: 0xc082c8c
label_288788:
    if (ctx->pc == 0x288788u) {
        ctx->pc = 0x288788u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x28878Cu;
        goto label_28878c;
    }
    ctx->pc = 0x288784u;
    SET_GPR_U32(ctx, 31, 0x28878Cu);
    ctx->pc = 0x288788u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28878Cu; }
    }
    if (ctx->pc != 0x28878Cu) { return; }
    ctx->pc = 0x28878Cu;
label_28878c:
    // 0x28878c: 0x826209a7
    ctx->pc = 0x28878cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2471)));
label_288790:
    // 0x288790: 0x10400003
label_288794:
    if (ctx->pc == 0x288794u) {
        ctx->pc = 0x288794u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x288798u;
        goto label_288798;
    }
    ctx->pc = 0x288790u;
    {
        const bool branch_taken_0x288790 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x288794u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x288790) {
            ctx->pc = 0x2887A0u;
            goto label_2887a0;
        }
    }
    ctx->pc = 0x288798u;
label_288798:
    // 0x288798: 0x1000012c
label_28879c:
    if (ctx->pc == 0x28879Cu) {
        ctx->pc = 0x28879Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        ctx->pc = 0x2887A0u;
        goto label_2887a0;
    }
    ctx->pc = 0x288798u;
    {
        const bool branch_taken_0x288798 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28879Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        if (branch_taken_0x288798) {
            ctx->pc = 0x288C4Cu;
            goto label_288c4c;
        }
    }
    ctx->pc = 0x2887A0u;
label_2887a0:
    // 0x2887a0: 0x1000012a
label_2887a4:
    if (ctx->pc == 0x2887A4u) {
        ctx->pc = 0x2887A4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 0));
        ctx->pc = 0x2887A8u;
        goto label_2887a8;
    }
    ctx->pc = 0x2887A0u;
    {
        const bool branch_taken_0x2887a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2887A4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 0));
        if (branch_taken_0x2887a0) {
            ctx->pc = 0x288C4Cu;
            goto label_288c4c;
        }
    }
    ctx->pc = 0x2887A8u;
label_2887a8:
    // 0x2887a8: 0x2821018
    ctx->pc = 0x2887a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2887ac:
    // 0x2887ac: 0x3c040035
    ctx->pc = 0x2887acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2887b0:
    // 0x2887b0: 0x2484a620
    ctx->pc = 0x2887b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_2887b4:
    // 0x2887b4: 0xc082c8c
label_2887b8:
    if (ctx->pc == 0x2887B8u) {
        ctx->pc = 0x2887B8u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x2887BCu;
        goto label_2887bc;
    }
    ctx->pc = 0x2887B4u;
    SET_GPR_U32(ctx, 31, 0x2887BCu);
    ctx->pc = 0x2887B8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2887BCu; }
    }
    if (ctx->pc != 0x2887BCu) { return; }
    ctx->pc = 0x2887BCu;
label_2887bc:
    // 0x2887bc: 0xc0a205a
label_2887c0:
    if (ctx->pc == 0x2887C0u) {
        ctx->pc = 0x2887C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2887C4u;
        goto label_2887c4;
    }
    ctx->pc = 0x2887BCu;
    SET_GPR_U32(ctx, 31, 0x2887C4u);
    ctx->pc = 0x2887C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x288168u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_player_change_0x288168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2887C4u; }
    }
    if (ctx->pc != 0x2887C4u) { return; }
    ctx->pc = 0x2887C4u;
label_2887c4:
    // 0x2887c4: 0x10000499
label_2887c8:
    if (ctx->pc == 0x2887C8u) {
        ctx->pc = 0x2887C8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x2887CCu;
        goto label_2887cc;
    }
    ctx->pc = 0x2887C4u;
    {
        const bool branch_taken_0x2887c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2887C8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        if (branch_taken_0x2887c4) {
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x2887CCu;
label_2887cc:
    // 0x2887cc: 0x240200e8
    ctx->pc = 0x2887ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_2887d0:
    // 0x2887d0: 0x2821018
    ctx->pc = 0x2887d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2887d4:
    // 0x2887d4: 0x3c040035
    ctx->pc = 0x2887d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2887d8:
    // 0x2887d8: 0x2484a620
    ctx->pc = 0x2887d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_2887dc:
    // 0x2887dc: 0xc082c8c
label_2887e0:
    if (ctx->pc == 0x2887E0u) {
        ctx->pc = 0x2887E0u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x2887E4u;
        goto label_2887e4;
    }
    ctx->pc = 0x2887DCu;
    SET_GPR_U32(ctx, 31, 0x2887E4u);
    ctx->pc = 0x2887E0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2887E4u; }
    }
    if (ctx->pc != 0x2887E4u) { return; }
    ctx->pc = 0x2887E4u;
label_2887e4:
    // 0x2887e4: 0x826209a7
    ctx->pc = 0x2887e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2471)));
label_2887e8:
    // 0x2887e8: 0x10400003
label_2887ec:
    if (ctx->pc == 0x2887ECu) {
        ctx->pc = 0x2887ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2887F0u;
        goto label_2887f0;
    }
    ctx->pc = 0x2887E8u;
    {
        const bool branch_taken_0x2887e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2887ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2887e8) {
            ctx->pc = 0x2887F8u;
            goto label_2887f8;
        }
    }
    ctx->pc = 0x2887F0u;
label_2887f0:
    // 0x2887f0: 0x10000002
label_2887f4:
    if (ctx->pc == 0x2887F4u) {
        ctx->pc = 0x2887F4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        ctx->pc = 0x2887F8u;
        goto label_2887f8;
    }
    ctx->pc = 0x2887F0u;
    {
        const bool branch_taken_0x2887f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2887F4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        if (branch_taken_0x2887f0) {
            ctx->pc = 0x2887FCu;
            goto label_2887fc;
        }
    }
    ctx->pc = 0x2887F8u;
label_2887f8:
    // 0x2887f8: 0xae602ae4
    ctx->pc = 0x2887f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 0));
label_2887fc:
    // 0x2887fc: 0x24020002
    ctx->pc = 0x2887fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_288800:
    // 0x288800: 0x10000489
label_288804:
    if (ctx->pc == 0x288804u) {
        ctx->pc = 0x288804u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        ctx->pc = 0x288808u;
        goto label_288808;
    }
    ctx->pc = 0x288800u;
    {
        const bool branch_taken_0x288800 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288804u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        if (branch_taken_0x288800) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x288808u;
label_288808:
    // 0x288808: 0x8e622ae4
    ctx->pc = 0x288808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
label_28880c:
    // 0x28880c: 0x14400037
label_288810:
    if (ctx->pc == 0x288810u) {
        ctx->pc = 0x288810u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x288814u;
        goto label_288814;
    }
    ctx->pc = 0x28880Cu;
    {
        const bool branch_taken_0x28880c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x288810u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x28880c) {
            ctx->pc = 0x2888ECu;
            goto label_2888ec;
        }
    }
    ctx->pc = 0x288814u;
label_288814:
    // 0x288814: 0x3c030035
    ctx->pc = 0x288814u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_288818:
    // 0x288818: 0x2463a620
    ctx->pc = 0x288818u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_28881c:
    // 0x28881c: 0x240200e8
    ctx->pc = 0x28881cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_288820:
    // 0x288820: 0x2821018
    ctx->pc = 0x288820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288824:
    // 0x288824: 0x621821
    ctx->pc = 0x288824u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_288828:
    // 0x288828: 0x8c62006c
    ctx->pc = 0x288828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_28882c:
    // 0x28882c: 0x14400005
label_288830:
    if (ctx->pc == 0x288830u) {
        ctx->pc = 0x288830u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x288834u;
        goto label_288834;
    }
    ctx->pc = 0x28882Cu;
    {
        const bool branch_taken_0x28882c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x288830u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x28882c) {
            ctx->pc = 0x288844u;
            goto label_288844;
        }
    }
    ctx->pc = 0x288834u;
label_288834:
    // 0x288834: 0x280202d
    ctx->pc = 0x288834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_288838:
    // 0x288838: 0xc0a18a2
label_28883c:
    if (ctx->pc == 0x28883Cu) {
        ctx->pc = 0x28883Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x288840u;
        goto label_288840;
    }
    ctx->pc = 0x288838u;
    SET_GPR_U32(ctx, 31, 0x288840u);
    ctx->pc = 0x28883Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x286288u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_sel_menu_0x286288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288840u; }
    }
    if (ctx->pc != 0x288840u) { return; }
    ctx->pc = 0x288840u;
label_288840:
    // 0x288840: 0x241000e8
    ctx->pc = 0x288840u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
label_288844:
    // 0x288844: 0x2908018
    ctx->pc = 0x288844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288848:
    // 0x288848: 0x3c020035
    ctx->pc = 0x288848u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28884c:
    // 0x28884c: 0x2442a620
    ctx->pc = 0x28884cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944288));
label_288850:
    // 0x288850: 0x2028021
    ctx->pc = 0x288850u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_288854:
    // 0x288854: 0xc082d7e
label_288858:
    if (ctx->pc == 0x288858u) {
        ctx->pc = 0x288858u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28885Cu;
        goto label_28885c;
    }
    ctx->pc = 0x288854u;
    SET_GPR_U32(ctx, 31, 0x28885Cu);
    ctx->pc = 0x288858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_optmenu_0x20b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28885Cu; }
    }
    if (ctx->pc != 0x28885Cu) { return; }
    ctx->pc = 0x28885Cu;
label_28885c:
    // 0x28885c: 0x200202d
    ctx->pc = 0x28885cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_288860:
    // 0x288860: 0xc083146
label_288864:
    if (ctx->pc == 0x288864u) {
        ctx->pc = 0x288864u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x288868u;
        goto label_288868;
    }
    ctx->pc = 0x288860u;
    SET_GPR_U32(ctx, 31, 0x288868u);
    ctx->pc = 0x288864u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_optmenu_0x20c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288868u; }
    }
    if (ctx->pc != 0x288868u) { return; }
    ctx->pc = 0x288868u;
label_288868:
    // 0x288868: 0x40882d
    ctx->pc = 0x288868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28886c:
    // 0x28886c: 0x280202d
    ctx->pc = 0x28886cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_288870:
    // 0x288870: 0xc0a1ab2
label_288874:
    if (ctx->pc == 0x288874u) {
        ctx->pc = 0x288874u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x288878u;
        goto label_288878;
    }
    ctx->pc = 0x288870u;
    SET_GPR_U32(ctx, 31, 0x288878u);
    ctx->pc = 0x288874u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x286AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_sel_menu_0x286ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288878u; }
    }
    if (ctx->pc != 0x288878u) { return; }
    ctx->pc = 0x288878u;
label_288878:
    // 0x288878: 0x240203ee
    ctx->pc = 0x288878u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1006));
label_28887c:
    // 0x28887c: 0x12220013
label_288880:
    if (ctx->pc == 0x288880u) {
        ctx->pc = 0x288880u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1007));
        ctx->pc = 0x288884u;
        goto label_288884;
    }
    ctx->pc = 0x28887Cu;
    {
        const bool branch_taken_0x28887c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x288880u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1007));
        if (branch_taken_0x28887c) {
            ctx->pc = 0x2888CCu;
            goto label_2888cc;
        }
    }
    ctx->pc = 0x288884u;
label_288884:
    // 0x288884: 0x10400005
label_288888:
    if (ctx->pc == 0x288888u) {
        ctx->pc = 0x288888u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28888Cu;
        goto label_28888c;
    }
    ctx->pc = 0x288884u;
    {
        const bool branch_taken_0x288884 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x288888u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x288884) {
            ctx->pc = 0x28889Cu;
            goto label_28889c;
        }
    }
    ctx->pc = 0x28888Cu;
label_28888c:
    // 0x28888c: 0x12220007
label_288890:
    if (ctx->pc == 0x288890u) {
        ctx->pc = 0x288890u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x288894u;
        goto label_288894;
    }
    ctx->pc = 0x28888Cu;
    {
        const bool branch_taken_0x28888c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x288890u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x28888c) {
            ctx->pc = 0x2888ACu;
            goto label_2888ac;
        }
    }
    ctx->pc = 0x288894u;
label_288894:
    // 0x288894: 0x10000465
label_288898:
    if (ctx->pc == 0x288898u) {
        ctx->pc = 0x288898u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x28889Cu;
        goto label_28889c;
    }
    ctx->pc = 0x288894u;
    {
        const bool branch_taken_0x288894 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288898u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        if (branch_taken_0x288894) {
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x28889Cu;
label_28889c:
    // 0x28889c: 0x240203ef
    ctx->pc = 0x28889cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1007));
label_2888a0:
    // 0x2888a0: 0x56220462
label_2888a4:
    if (ctx->pc == 0x2888A4u) {
        ctx->pc = 0x2888A4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x2888A8u;
        goto label_2888a8;
    }
    ctx->pc = 0x2888A0u;
    {
        const bool branch_taken_0x2888a0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x2888a0) {
            ctx->pc = 0x2888A4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x2888A8u;
label_2888a8:
    // 0x2888a8: 0x240200e8
    ctx->pc = 0x2888a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_2888ac:
    // 0x2888ac: 0x2821018
    ctx->pc = 0x2888acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2888b0:
    // 0x2888b0: 0x3c040035
    ctx->pc = 0x2888b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2888b4:
    // 0x2888b4: 0x2484a620
    ctx->pc = 0x2888b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_2888b8:
    // 0x2888b8: 0xc082c8c
label_2888bc:
    if (ctx->pc == 0x2888BCu) {
        ctx->pc = 0x2888BCu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x2888C0u;
        goto label_2888c0;
    }
    ctx->pc = 0x2888B8u;
    SET_GPR_U32(ctx, 31, 0x2888C0u);
    ctx->pc = 0x2888BCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2888C0u; }
    }
    if (ctx->pc != 0x2888C0u) { return; }
    ctx->pc = 0x2888C0u;
label_2888c0:
    // 0x2888c0: 0x24020001
    ctx->pc = 0x2888c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2888c4:
    // 0x2888c4: 0x10000458
label_2888c8:
    if (ctx->pc == 0x2888C8u) {
        ctx->pc = 0x2888C8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        ctx->pc = 0x2888CCu;
        goto label_2888cc;
    }
    ctx->pc = 0x2888C4u;
    {
        const bool branch_taken_0x2888c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2888C8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        if (branch_taken_0x2888c4) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x2888CCu;
label_2888cc:
    // 0x2888cc: 0x240200e8
    ctx->pc = 0x2888ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_2888d0:
    // 0x2888d0: 0x2821018
    ctx->pc = 0x2888d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2888d4:
    // 0x2888d4: 0x3c040035
    ctx->pc = 0x2888d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2888d8:
    // 0x2888d8: 0x2484a620
    ctx->pc = 0x2888d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_2888dc:
    // 0x2888dc: 0xc082c8c
label_2888e0:
    if (ctx->pc == 0x2888E0u) {
        ctx->pc = 0x2888E0u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x2888E4u;
        goto label_2888e4;
    }
    ctx->pc = 0x2888DCu;
    SET_GPR_U32(ctx, 31, 0x2888E4u);
    ctx->pc = 0x2888E0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2888E4u; }
    }
    if (ctx->pc != 0x2888E4u) { return; }
    ctx->pc = 0x2888E4u;
label_2888e4:
    // 0x2888e4: 0x1000008e
label_2888e8:
    if (ctx->pc == 0x2888E8u) {
        ctx->pc = 0x2888E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2888ECu;
        goto label_2888ec;
    }
    ctx->pc = 0x2888E4u;
    {
        const bool branch_taken_0x2888e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2888E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2888e4) {
            ctx->pc = 0x288B20u;
            goto label_288b20;
        }
    }
    ctx->pc = 0x2888ECu;
label_2888ec:
    // 0x2888ec: 0x24030001
    ctx->pc = 0x2888ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2888f0:
    // 0x2888f0: 0x2831804
    ctx->pc = 0x2888f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_2888f4:
    // 0x2888f4: 0x31827
    ctx->pc = 0x2888f4u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_2888f8:
    // 0x2888f8: 0x8c4207b4
    ctx->pc = 0x2888f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1972)));
label_2888fc:
    // 0x2888fc: 0x621824
    ctx->pc = 0x2888fcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_288900:
    // 0x288900: 0x10600005
label_288904:
    if (ctx->pc == 0x288904u) {
        ctx->pc = 0x288904u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288908u;
        goto label_288908;
    }
    ctx->pc = 0x288900u;
    {
        const bool branch_taken_0x288900 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x288904u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x288900) {
            ctx->pc = 0x288918u;
            goto label_288918;
        }
    }
    ctx->pc = 0x288908u;
label_288908:
    // 0x288908: 0xc08c684
label_28890c:
    if (ctx->pc == 0x28890Cu) {
        ctx->pc = 0x28890Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288910u;
        goto label_288910;
    }
    ctx->pc = 0x288908u;
    SET_GPR_U32(ctx, 31, 0x288910u);
    ctx->pc = 0x28890Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        inactivate_player_0x231a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288910u; }
    }
    if (ctx->pc != 0x288910u) { return; }
    ctx->pc = 0x288910u;
label_288910:
    // 0x288910: 0x10000446
label_288914:
    if (ctx->pc == 0x288914u) {
        ctx->pc = 0x288914u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x288918u;
        goto label_288918;
    }
    ctx->pc = 0x288910u;
    {
        const bool branch_taken_0x288910 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288914u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        if (branch_taken_0x288910) {
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x288918u;
label_288918:
    // 0x288918: 0xc08c4cc
label_28891c:
    if (ctx->pc == 0x28891Cu) {
        ctx->pc = 0x28891Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x288920u;
        goto label_288920;
    }
    ctx->pc = 0x288918u;
    SET_GPR_U32(ctx, 31, 0x288920u);
    ctx->pc = 0x28891Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x231330u;
    {
        const uint32_t __entryPc = ctx->pc;
        clear_player_0x231330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288920u; }
    }
    if (ctx->pc != 0x288920u) { return; }
    ctx->pc = 0x288920u;
label_288920:
    // 0x288920: 0x3c030035
    ctx->pc = 0x288920u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_288924:
    // 0x288924: 0x24020001
    ctx->pc = 0x288924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_288928:
    // 0x288928: 0x1000043f
label_28892c:
    if (ctx->pc == 0x28892Cu) {
        ctx->pc = 0x28892Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943676), GPR_U32(ctx, 2));
        ctx->pc = 0x288930u;
        goto label_288930;
    }
    ctx->pc = 0x288928u;
    {
        const bool branch_taken_0x288928 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28892Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943676), GPR_U32(ctx, 2));
        if (branch_taken_0x288928) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x288930u;
label_288930:
    // 0x288930: 0x8e622ae4
    ctx->pc = 0x288930u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
label_288934:
    // 0x288934: 0x14400039
label_288938:
    if (ctx->pc == 0x288938u) {
        ctx->pc = 0x288938u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        ctx->pc = 0x28893Cu;
        goto label_28893c;
    }
    ctx->pc = 0x288934u;
    {
        const bool branch_taken_0x288934 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x288938u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x288934) {
            ctx->pc = 0x288A1Cu;
            goto label_288a1c;
        }
    }
    ctx->pc = 0x28893Cu;
label_28893c:
    // 0x28893c: 0x2463a620
    ctx->pc = 0x28893cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_288940:
    // 0x288940: 0x240200e8
    ctx->pc = 0x288940u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_288944:
    // 0x288944: 0x2821018
    ctx->pc = 0x288944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288948:
    // 0x288948: 0x621821
    ctx->pc = 0x288948u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28894c:
    // 0x28894c: 0x8c62006c
    ctx->pc = 0x28894cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_288950:
    // 0x288950: 0x14400005
label_288954:
    if (ctx->pc == 0x288954u) {
        ctx->pc = 0x288954u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x288958u;
        goto label_288958;
    }
    ctx->pc = 0x288950u;
    {
        const bool branch_taken_0x288950 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x288954u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x288950) {
            ctx->pc = 0x288968u;
            goto label_288968;
        }
    }
    ctx->pc = 0x288958u;
label_288958:
    // 0x288958: 0x280202d
    ctx->pc = 0x288958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28895c:
    // 0x28895c: 0xc0a18a2
label_288960:
    if (ctx->pc == 0x288960u) {
        ctx->pc = 0x288960u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x288964u;
        goto label_288964;
    }
    ctx->pc = 0x28895Cu;
    SET_GPR_U32(ctx, 31, 0x288964u);
    ctx->pc = 0x288960u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x286288u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_sel_menu_0x286288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288964u; }
    }
    if (ctx->pc != 0x288964u) { return; }
    ctx->pc = 0x288964u;
label_288964:
    // 0x288964: 0x241000e8
    ctx->pc = 0x288964u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
label_288968:
    // 0x288968: 0x2908018
    ctx->pc = 0x288968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28896c:
    // 0x28896c: 0x3c020035
    ctx->pc = 0x28896cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_288970:
    // 0x288970: 0x2442a620
    ctx->pc = 0x288970u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944288));
label_288974:
    // 0x288974: 0x2028021
    ctx->pc = 0x288974u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_288978:
    // 0x288978: 0xc082d7e
label_28897c:
    if (ctx->pc == 0x28897Cu) {
        ctx->pc = 0x28897Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288980u;
        goto label_288980;
    }
    ctx->pc = 0x288978u;
    SET_GPR_U32(ctx, 31, 0x288980u);
    ctx->pc = 0x28897Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_optmenu_0x20b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288980u; }
    }
    if (ctx->pc != 0x288980u) { return; }
    ctx->pc = 0x288980u;
label_288980:
    // 0x288980: 0x200202d
    ctx->pc = 0x288980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_288984:
    // 0x288984: 0xc083146
label_288988:
    if (ctx->pc == 0x288988u) {
        ctx->pc = 0x288988u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28898Cu;
        goto label_28898c;
    }
    ctx->pc = 0x288984u;
    SET_GPR_U32(ctx, 31, 0x28898Cu);
    ctx->pc = 0x288988u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_optmenu_0x20c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28898Cu; }
    }
    if (ctx->pc != 0x28898Cu) { return; }
    ctx->pc = 0x28898Cu;
label_28898c:
    // 0x28898c: 0x40882d
    ctx->pc = 0x28898cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288990:
    // 0x288990: 0x240203ee
    ctx->pc = 0x288990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1006));
label_288994:
    // 0x288994: 0x12220013
label_288998:
    if (ctx->pc == 0x288998u) {
        ctx->pc = 0x288998u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1007));
        ctx->pc = 0x28899Cu;
        goto label_28899c;
    }
    ctx->pc = 0x288994u;
    {
        const bool branch_taken_0x288994 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x288998u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1007));
        if (branch_taken_0x288994) {
            ctx->pc = 0x2889E4u;
            goto label_2889e4;
        }
    }
    ctx->pc = 0x28899Cu;
label_28899c:
    // 0x28899c: 0x10400005
label_2889a0:
    if (ctx->pc == 0x2889A0u) {
        ctx->pc = 0x2889A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2889A4u;
        goto label_2889a4;
    }
    ctx->pc = 0x28899Cu;
    {
        const bool branch_taken_0x28899c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2889A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x28899c) {
            ctx->pc = 0x2889B4u;
            goto label_2889b4;
        }
    }
    ctx->pc = 0x2889A4u;
label_2889a4:
    // 0x2889a4: 0x12220006
label_2889a8:
    if (ctx->pc == 0x2889A8u) {
        ctx->pc = 0x2889A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2889ACu;
        goto label_2889ac;
    }
    ctx->pc = 0x2889A4u;
    {
        const bool branch_taken_0x2889a4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x2889A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2889a4) {
            ctx->pc = 0x2889C0u;
            goto label_2889c0;
        }
    }
    ctx->pc = 0x2889ACu;
label_2889ac:
    // 0x2889ac: 0x10000016
label_2889b0:
    if (ctx->pc == 0x2889B0u) {
        ctx->pc = 0x2889B4u;
        goto label_2889b4;
    }
    ctx->pc = 0x2889ACu;
    {
        const bool branch_taken_0x2889ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2889ac) {
            ctx->pc = 0x288A08u;
            goto label_288a08;
        }
    }
    ctx->pc = 0x2889B4u;
label_2889b4:
    // 0x2889b4: 0x240203ef
    ctx->pc = 0x2889b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1007));
label_2889b8:
    // 0x2889b8: 0x16220013
label_2889bc:
    if (ctx->pc == 0x2889BCu) {
        ctx->pc = 0x2889BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2889C0u;
        goto label_2889c0;
    }
    ctx->pc = 0x2889B8u;
    {
        const bool branch_taken_0x2889b8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2889BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2889b8) {
            ctx->pc = 0x288A08u;
            goto label_288a08;
        }
    }
    ctx->pc = 0x2889C0u;
label_2889c0:
    // 0x2889c0: 0x240200e8
    ctx->pc = 0x2889c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_2889c4:
    // 0x2889c4: 0x2821018
    ctx->pc = 0x2889c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2889c8:
    // 0x2889c8: 0x3c040035
    ctx->pc = 0x2889c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2889cc:
    // 0x2889cc: 0x2484a620
    ctx->pc = 0x2889ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_2889d0:
    // 0x2889d0: 0xc082c8c
label_2889d4:
    if (ctx->pc == 0x2889D4u) {
        ctx->pc = 0x2889D4u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x2889D8u;
        goto label_2889d8;
    }
    ctx->pc = 0x2889D0u;
    SET_GPR_U32(ctx, 31, 0x2889D8u);
    ctx->pc = 0x2889D4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2889D8u; }
    }
    if (ctx->pc != 0x2889D8u) { return; }
    ctx->pc = 0x2889D8u;
label_2889d8:
    // 0x2889d8: 0x8e622ad8
    ctx->pc = 0x2889d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10968)));
label_2889dc:
    // 0x2889dc: 0x10000009
label_2889e0:
    if (ctx->pc == 0x2889E0u) {
        ctx->pc = 0x2889E0u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        ctx->pc = 0x2889E4u;
        goto label_2889e4;
    }
    ctx->pc = 0x2889DCu;
    {
        const bool branch_taken_0x2889dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2889E0u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        if (branch_taken_0x2889dc) {
            ctx->pc = 0x288A04u;
            goto label_288a04;
        }
    }
    ctx->pc = 0x2889E4u;
label_2889e4:
    // 0x2889e4: 0x240200e8
    ctx->pc = 0x2889e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_2889e8:
    // 0x2889e8: 0x2821018
    ctx->pc = 0x2889e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2889ec:
    // 0x2889ec: 0x3c040035
    ctx->pc = 0x2889ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2889f0:
    // 0x2889f0: 0x2484a620
    ctx->pc = 0x2889f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_2889f4:
    // 0x2889f4: 0xc082c8c
label_2889f8:
    if (ctx->pc == 0x2889F8u) {
        ctx->pc = 0x2889F8u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x2889FCu;
        goto label_2889fc;
    }
    ctx->pc = 0x2889F4u;
    SET_GPR_U32(ctx, 31, 0x2889FCu);
    ctx->pc = 0x2889F8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2889FCu; }
    }
    if (ctx->pc != 0x2889FCu) { return; }
    ctx->pc = 0x2889FCu;
label_2889fc:
    // 0x2889fc: 0x24020001
    ctx->pc = 0x2889fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_288a00:
    // 0x288a00: 0xae622ae4
    ctx->pc = 0x288a00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
label_288a04:
    // 0x288a04: 0x280202d
    ctx->pc = 0x288a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_288a08:
    // 0x288a08: 0xc0a1ab2
label_288a0c:
    if (ctx->pc == 0x288A0Cu) {
        ctx->pc = 0x288A0Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x288A10u;
        goto label_288a10;
    }
    ctx->pc = 0x288A08u;
    SET_GPR_U32(ctx, 31, 0x288A10u);
    ctx->pc = 0x288A0Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x286AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_sel_menu_0x286ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288A10u; }
    }
    if (ctx->pc != 0x288A10u) { return; }
    ctx->pc = 0x288A10u;
label_288a10:
    // 0x288a10: 0x8e622ae4
    ctx->pc = 0x288a10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
label_288a14:
    // 0x288a14: 0x10400404
label_288a18:
    if (ctx->pc == 0x288A18u) {
        ctx->pc = 0x288A18u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        ctx->pc = 0x288A1Cu;
        goto label_288a1c;
    }
    ctx->pc = 0x288A14u;
    {
        const bool branch_taken_0x288a14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x288A18u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x288a14) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x288A1Cu;
label_288a1c:
    // 0x288a1c: 0x2463a620
    ctx->pc = 0x288a1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_288a20:
    // 0x288a20: 0x240200e8
    ctx->pc = 0x288a20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_288a24:
    // 0x288a24: 0x2821018
    ctx->pc = 0x288a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288a28:
    // 0x288a28: 0x621821
    ctx->pc = 0x288a28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_288a2c:
    // 0x288a2c: 0x8c62006c
    ctx->pc = 0x288a2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_288a30:
    // 0x288a30: 0x54400005
label_288a34:
    if (ctx->pc == 0x288A34u) {
        ctx->pc = 0x288A34u;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        ctx->pc = 0x288A38u;
        goto label_288a38;
    }
    ctx->pc = 0x288A30u;
    {
        const bool branch_taken_0x288a30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x288a30) {
            ctx->pc = 0x288A34u;
            SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
            ctx->pc = 0x288A48u;
            goto label_288a48;
        }
    }
    ctx->pc = 0x288A38u;
label_288a38:
    // 0x288a38: 0x280202d
    ctx->pc = 0x288a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_288a3c:
    // 0x288a3c: 0xc0a18a2
label_288a40:
    if (ctx->pc == 0x288A40u) {
        ctx->pc = 0x288A40u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x288A44u;
        goto label_288a44;
    }
    ctx->pc = 0x288A3Cu;
    SET_GPR_U32(ctx, 31, 0x288A44u);
    ctx->pc = 0x288A40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x286288u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_sel_menu_0x286288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288A44u; }
    }
    if (ctx->pc != 0x288A44u) { return; }
    ctx->pc = 0x288A44u;
label_288a44:
    // 0x288a44: 0x3c040035
    ctx->pc = 0x288a44u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_288a48:
    // 0x288a48: 0x2484a620
    ctx->pc = 0x288a48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_288a4c:
    // 0x288a4c: 0x240300e8
    ctx->pc = 0x288a4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 232));
label_288a50:
    // 0x288a50: 0x2831818
    ctx->pc = 0x288a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288a54:
    // 0x288a54: 0x831021
    ctx->pc = 0x288a54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_288a58:
    // 0x288a58: 0xac400084
    ctx->pc = 0x288a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
label_288a5c:
    // 0x288a5c: 0x649021
    ctx->pc = 0x288a5cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_288a60:
    // 0x288a60: 0xc082d7e
label_288a64:
    if (ctx->pc == 0x288A64u) {
        ctx->pc = 0x288A64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288A68u;
        goto label_288a68;
    }
    ctx->pc = 0x288A60u;
    SET_GPR_U32(ctx, 31, 0x288A68u);
    ctx->pc = 0x288A64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_optmenu_0x20b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288A68u; }
    }
    if (ctx->pc != 0x288A68u) { return; }
    ctx->pc = 0x288A68u;
label_288a68:
    // 0x288a68: 0x240202d
    ctx->pc = 0x288a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_288a6c:
    // 0x288a6c: 0xc083146
label_288a70:
    if (ctx->pc == 0x288A70u) {
        ctx->pc = 0x288A70u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x288A74u;
        goto label_288a74;
    }
    ctx->pc = 0x288A6Cu;
    SET_GPR_U32(ctx, 31, 0x288A74u);
    ctx->pc = 0x288A70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_optmenu_0x20c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288A74u; }
    }
    if (ctx->pc != 0x288A74u) { return; }
    ctx->pc = 0x288A74u;
label_288a74:
    // 0x288a74: 0xc082728
label_288a78:
    if (ctx->pc == 0x288A78u) {
        ctx->pc = 0x288A78u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288A7Cu;
        goto label_288a7c;
    }
    ctx->pc = 0x288A74u;
    SET_GPR_U32(ctx, 31, 0x288A7Cu);
    ctx->pc = 0x288A78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x209CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        vmu_exists_0x209ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288A7Cu; }
    }
    if (ctx->pc != 0x288A7Cu) { return; }
    ctx->pc = 0x288A7Cu;
label_288a7c:
    // 0x288a7c: 0x2410ffff
    ctx->pc = 0x288a7cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
label_288a80:
    // 0x288a80: 0x2102a
    ctx->pc = 0x288a80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
label_288a84:
    // 0x288a84: 0x202880a
    ctx->pc = 0x288a84u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 16));
label_288a88:
    // 0x288a88: 0x280202d
    ctx->pc = 0x288a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_288a8c:
    // 0x288a8c: 0xc0a1ab2
label_288a90:
    if (ctx->pc == 0x288A90u) {
        ctx->pc = 0x288A90u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x288A94u;
        goto label_288a94;
    }
    ctx->pc = 0x288A8Cu;
    SET_GPR_U32(ctx, 31, 0x288A94u);
    ctx->pc = 0x288A90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x286AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_sel_menu_0x286ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288A94u; }
    }
    if (ctx->pc != 0x288A94u) { return; }
    ctx->pc = 0x288A94u;
label_288a94:
    // 0x288a94: 0x16300005
label_288a98:
    if (ctx->pc == 0x288A98u) {
        ctx->pc = 0x288A98u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1000));
        ctx->pc = 0x288A9Cu;
        goto label_288a9c;
    }
    ctx->pc = 0x288A94u;
    {
        const bool branch_taken_0x288a94 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x288A98u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1000));
        if (branch_taken_0x288a94) {
            ctx->pc = 0x288AACu;
            goto label_288aac;
        }
    }
    ctx->pc = 0x288A9Cu;
label_288a9c:
    // 0x288a9c: 0xc082c8c
label_288aa0:
    if (ctx->pc == 0x288AA0u) {
        ctx->pc = 0x288AA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288AA4u;
        goto label_288aa4;
    }
    ctx->pc = 0x288A9Cu;
    SET_GPR_U32(ctx, 31, 0x288AA4u);
    ctx->pc = 0x288AA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288AA4u; }
    }
    if (ctx->pc != 0x288AA4u) { return; }
    ctx->pc = 0x288AA4u;
label_288aa4:
    // 0x288aa4: 0x100002db
label_288aa8:
    if (ctx->pc == 0x288AA8u) {
        ctx->pc = 0x288AA8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10968)));
        ctx->pc = 0x288AACu;
        goto label_288aac;
    }
    ctx->pc = 0x288AA4u;
    {
        const bool branch_taken_0x288aa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288AA8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10968)));
        if (branch_taken_0x288aa4) {
            ctx->pc = 0x289614u;
            goto label_289614;
        }
    }
    ctx->pc = 0x288AACu;
label_288aac:
    // 0x288aac: 0x544003df
label_288ab0:
    if (ctx->pc == 0x288AB0u) {
        ctx->pc = 0x288AB0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x288AB4u;
        goto label_288ab4;
    }
    ctx->pc = 0x288AACu;
    {
        const bool branch_taken_0x288aac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x288aac) {
            ctx->pc = 0x288AB0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x288AB4u;
label_288ab4:
    // 0x288ab4: 0x240200e8
    ctx->pc = 0x288ab4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_288ab8:
    // 0x288ab8: 0x2821018
    ctx->pc = 0x288ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288abc:
    // 0x288abc: 0x3c040035
    ctx->pc = 0x288abcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_288ac0:
    // 0x288ac0: 0x2484a620
    ctx->pc = 0x288ac0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_288ac4:
    // 0x288ac4: 0xc082c8c
label_288ac8:
    if (ctx->pc == 0x288AC8u) {
        ctx->pc = 0x288AC8u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x288ACCu;
        goto label_288acc;
    }
    ctx->pc = 0x288AC4u;
    SET_GPR_U32(ctx, 31, 0x288ACCu);
    ctx->pc = 0x288AC8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288ACCu; }
    }
    if (ctx->pc != 0x288ACCu) { return; }
    ctx->pc = 0x288ACCu;
label_288acc:
    // 0x288acc: 0x2624fc18
    ctx->pc = 0x288accu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294966296));
label_288ad0:
    // 0x288ad0: 0x2622fc1b
    ctx->pc = 0x288ad0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294966299));
label_288ad4:
    // 0x288ad4: 0x2410ffff
    ctx->pc = 0x288ad4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
label_288ad8:
    // 0x288ad8: 0x204182a
    ctx->pc = 0x288ad8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 4)));
label_288adc:
    // 0x288adc: 0x83100b
    ctx->pc = 0x288adcu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_288ae0:
    // 0x288ae0: 0x21083
    ctx->pc = 0x288ae0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_288ae4:
    // 0x288ae4: 0xae622ae8
    ctx->pc = 0x288ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10984), GPR_U32(ctx, 2));
label_288ae8:
    // 0x288ae8: 0x21080
    ctx->pc = 0x288ae8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_288aec:
    // 0x288aec: 0x822023
    ctx->pc = 0x288aecu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_288af0:
    // 0x288af0: 0xae642aec
    ctx->pc = 0x288af0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10988), GPR_U32(ctx, 4));
label_288af4:
    // 0x288af4: 0x260202d
    ctx->pc = 0x288af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_288af8:
    // 0x288af8: 0xc0a1a3a
label_288afc:
    if (ctx->pc == 0x288AFCu) {
        ctx->pc = 0x288AFCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x288B00u;
        goto label_288b00;
    }
    ctx->pc = 0x288AF8u;
    SET_GPR_U32(ctx, 31, 0x288B00u);
    ctx->pc = 0x288AFCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2868E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_file_entries_0x2868e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288B00u; }
    }
    if (ctx->pc != 0x288B00u) { return; }
    ctx->pc = 0x288B00u;
label_288b00:
    // 0x288b00: 0x40882d
    ctx->pc = 0x288b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288b04:
    // 0x288b04: 0x123000e3
label_288b08:
    if (ctx->pc == 0x288B08u) {
        ctx->pc = 0x288B08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x288B0Cu;
        goto label_288b0c;
    }
    ctx->pc = 0x288B04u;
    {
        const bool branch_taken_0x288b04 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 16));
        ctx->pc = 0x288B08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x288b04) {
            ctx->pc = 0x288E94u;
            goto label_288e94;
        }
    }
    ctx->pc = 0x288B0Cu;
label_288b0c:
    // 0x288b0c: 0x1e200006
label_288b10:
    if (ctx->pc == 0x288B10u) {
        ctx->pc = 0x288B10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x288B14u;
        goto label_288b14;
    }
    ctx->pc = 0x288B0Cu;
    {
        const bool branch_taken_0x288b0c = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x288B10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x288b0c) {
            ctx->pc = 0x288B28u;
            goto label_288b28;
        }
    }
    ctx->pc = 0x288B14u;
label_288b14:
    // 0x288b14: 0x24020007
    ctx->pc = 0x288b14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_288b18:
    // 0x288b18: 0xae622ad4
    ctx->pc = 0x288b18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
label_288b1c:
    // 0x288b1c: 0x24020001
    ctx->pc = 0x288b1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_288b20:
    // 0x288b20: 0x100003c1
label_288b24:
    if (ctx->pc == 0x288B24u) {
        ctx->pc = 0x288B24u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        ctx->pc = 0x288B28u;
        goto label_288b28;
    }
    ctx->pc = 0x288B20u;
    {
        const bool branch_taken_0x288b20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288B24u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        if (branch_taken_0x288b20) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x288B28u;
label_288b28:
    // 0x288b28: 0x100003bf
label_288b2c:
    if (ctx->pc == 0x288B2Cu) {
        ctx->pc = 0x288B2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        ctx->pc = 0x288B30u;
        goto label_288b30;
    }
    ctx->pc = 0x288B28u;
    {
        const bool branch_taken_0x288b28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288B2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        if (branch_taken_0x288b28) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x288B30u;
label_288b30:
    // 0x288b30: 0x280202d
    ctx->pc = 0x288b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_288b34:
    // 0x288b34: 0xc0a1ab2
label_288b38:
    if (ctx->pc == 0x288B38u) {
        ctx->pc = 0x288B38u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x288B3Cu;
        goto label_288b3c;
    }
    ctx->pc = 0x288B34u;
    SET_GPR_U32(ctx, 31, 0x288B3Cu);
    ctx->pc = 0x288B38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x286AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_sel_menu_0x286ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288B3Cu; }
    }
    if (ctx->pc != 0x288B3Cu) { return; }
    ctx->pc = 0x288B3Cu;
label_288b3c:
    // 0x288b3c: 0x3c020031
    ctx->pc = 0x288b3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_288b40:
    // 0x288b40: 0x8e632ae4
    ctx->pc = 0x288b40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
label_288b44:
    // 0x288b44: 0x8c42ffbc
    ctx->pc = 0x288b44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_288b48:
    // 0x288b48: 0x621821
    ctx->pc = 0x288b48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_288b4c:
    // 0x288b4c: 0xae632ae4
    ctx->pc = 0x288b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 3));
label_288b50:
    // 0x288b50: 0x28630078
    ctx->pc = 0x288b50u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 120));
label_288b54:
    // 0x288b54: 0x546003b5
label_288b58:
    if (ctx->pc == 0x288B58u) {
        ctx->pc = 0x288B58u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x288B5Cu;
        goto label_288b5c;
    }
    ctx->pc = 0x288B54u;
    {
        const bool branch_taken_0x288b54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x288b54) {
            ctx->pc = 0x288B58u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x288B5Cu;
label_288b5c:
    // 0x288b5c: 0x100000cd
label_288b60:
    if (ctx->pc == 0x288B60u) {
        ctx->pc = 0x288B60u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10968)));
        ctx->pc = 0x288B64u;
        goto label_288b64;
    }
    ctx->pc = 0x288B5Cu;
    {
        const bool branch_taken_0x288b5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288B60u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10968)));
        if (branch_taken_0x288b5c) {
            ctx->pc = 0x288E94u;
            goto label_288e94;
        }
    }
    ctx->pc = 0x288B64u;
label_288b64:
    // 0x288b64: 0x3c030035
    ctx->pc = 0x288b64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_288b68:
    // 0x288b68: 0x2463a620
    ctx->pc = 0x288b68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_288b6c:
    // 0x288b6c: 0x240200e8
    ctx->pc = 0x288b6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_288b70:
    // 0x288b70: 0x2821018
    ctx->pc = 0x288b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288b74:
    // 0x288b74: 0x621821
    ctx->pc = 0x288b74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_288b78:
    // 0x288b78: 0x8c62006c
    ctx->pc = 0x288b78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_288b7c:
    // 0x288b7c: 0x14400005
label_288b80:
    if (ctx->pc == 0x288B80u) {
        ctx->pc = 0x288B80u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        ctx->pc = 0x288B84u;
        goto label_288b84;
    }
    ctx->pc = 0x288B7Cu;
    {
        const bool branch_taken_0x288b7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x288B80u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x288b7c) {
            ctx->pc = 0x288B94u;
            goto label_288b94;
        }
    }
    ctx->pc = 0x288B84u;
label_288b84:
    // 0x288b84: 0x280202d
    ctx->pc = 0x288b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_288b88:
    // 0x288b88: 0xc0a18a2
label_288b8c:
    if (ctx->pc == 0x288B8Cu) {
        ctx->pc = 0x288B8Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x288B90u;
        goto label_288b90;
    }
    ctx->pc = 0x288B88u;
    SET_GPR_U32(ctx, 31, 0x288B90u);
    ctx->pc = 0x288B8Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x286288u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_sel_menu_0x286288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288B90u; }
    }
    if (ctx->pc != 0x288B90u) { return; }
    ctx->pc = 0x288B90u;
label_288b90:
    // 0x288b90: 0x3c030035
    ctx->pc = 0x288b90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_288b94:
    // 0x288b94: 0x2463a620
    ctx->pc = 0x288b94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_288b98:
    // 0x288b98: 0x241000e8
    ctx->pc = 0x288b98u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
label_288b9c:
    // 0x288b9c: 0x2908018
    ctx->pc = 0x288b9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288ba0:
    // 0x288ba0: 0x701021
    ctx->pc = 0x288ba0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_288ba4:
    // 0x288ba4: 0xac400084
    ctx->pc = 0x288ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
label_288ba8:
    // 0x288ba8: 0x2038021
    ctx->pc = 0x288ba8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_288bac:
    // 0x288bac: 0xc082d7e
label_288bb0:
    if (ctx->pc == 0x288BB0u) {
        ctx->pc = 0x288BB0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288BB4u;
        goto label_288bb4;
    }
    ctx->pc = 0x288BACu;
    SET_GPR_U32(ctx, 31, 0x288BB4u);
    ctx->pc = 0x288BB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_optmenu_0x20b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288BB4u; }
    }
    if (ctx->pc != 0x288BB4u) { return; }
    ctx->pc = 0x288BB4u;
label_288bb4:
    // 0x288bb4: 0x200202d
    ctx->pc = 0x288bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_288bb8:
    // 0x288bb8: 0xc083146
label_288bbc:
    if (ctx->pc == 0x288BBCu) {
        ctx->pc = 0x288BBCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x288BC0u;
        goto label_288bc0;
    }
    ctx->pc = 0x288BB8u;
    SET_GPR_U32(ctx, 31, 0x288BC0u);
    ctx->pc = 0x288BBCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_optmenu_0x20c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288BC0u; }
    }
    if (ctx->pc != 0x288BC0u) { return; }
    ctx->pc = 0x288BC0u;
label_288bc0:
    // 0x288bc0: 0x40882d
    ctx->pc = 0x288bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288bc4:
    // 0x288bc4: 0x3c040031
    ctx->pc = 0x288bc4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
label_288bc8:
    // 0x288bc8: 0x248422a0
    ctx->pc = 0x288bc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8864));
label_288bcc:
    // 0x288bcc: 0x8e632aec
    ctx->pc = 0x288bccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10988)));
label_288bd0:
    // 0x288bd0: 0x31880
    ctx->pc = 0x288bd0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_288bd4:
    // 0x288bd4: 0x8e622ae8
    ctx->pc = 0x288bd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10984)));
label_288bd8:
    // 0x288bd8: 0x21100
    ctx->pc = 0x288bd8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_288bdc:
    // 0x288bdc: 0x621821
    ctx->pc = 0x288bdcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_288be0:
    // 0x288be0: 0x642021
    ctx->pc = 0x288be0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_288be4:
    // 0x288be4: 0x8c840000
    ctx->pc = 0x288be4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_288be8:
    // 0x288be8: 0x24020002
    ctx->pc = 0x288be8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_288bec:
    // 0x288bec: 0x54820008
label_288bf0:
    if (ctx->pc == 0x288BF0u) {
        ctx->pc = 0x288BF0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x288BF4u;
        goto label_288bf4;
    }
    ctx->pc = 0x288BECu;
    {
        const bool branch_taken_0x288bec = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x288bec) {
            ctx->pc = 0x288BF0u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x288C10u;
            goto label_288c10;
        }
    }
    ctx->pc = 0x288BF4u;
label_288bf4:
    // 0x288bf4: 0x3c020031
    ctx->pc = 0x288bf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_288bf8:
    // 0x288bf8: 0x24422280
    ctx->pc = 0x288bf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8832));
label_288bfc:
    // 0x288bfc: 0x621021
    ctx->pc = 0x288bfcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_288c00:
    // 0x288c00: 0x8c420000
    ctx->pc = 0x288c00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_288c04:
    // 0x288c04: 0x10440003
label_288c08:
    if (ctx->pc == 0x288C08u) {
        ctx->pc = 0x288C08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288C0Cu;
        goto label_288c0c;
    }
    ctx->pc = 0x288C04u;
    {
        const bool branch_taken_0x288c04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x288C08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x288c04) {
            ctx->pc = 0x288C14u;
            goto label_288c14;
        }
    }
    ctx->pc = 0x288C0Cu;
label_288c0c:
    // 0x288c0c: 0x2411ffff
    ctx->pc = 0x288c0cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
label_288c10:
    // 0x288c10: 0x260202d
    ctx->pc = 0x288c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_288c14:
    // 0x288c14: 0xc0a1a3a
label_288c18:
    if (ctx->pc == 0x288C18u) {
        ctx->pc = 0x288C18u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288C1Cu;
        goto label_288c1c;
    }
    ctx->pc = 0x288C14u;
    SET_GPR_U32(ctx, 31, 0x288C1Cu);
    ctx->pc = 0x288C18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2868E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_file_entries_0x2868e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C1Cu; }
    }
    if (ctx->pc != 0x288C1Cu) { return; }
    ctx->pc = 0x288C1Cu;
label_288c1c:
    // 0x288c1c: 0x280202d
    ctx->pc = 0x288c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_288c20:
    // 0x288c20: 0xc0a1ab2
label_288c24:
    if (ctx->pc == 0x288C24u) {
        ctx->pc = 0x288C24u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x288C28u;
        goto label_288c28;
    }
    ctx->pc = 0x288C20u;
    SET_GPR_U32(ctx, 31, 0x288C28u);
    ctx->pc = 0x288C24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x286AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_sel_menu_0x286ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C28u; }
    }
    if (ctx->pc != 0x288C28u) { return; }
    ctx->pc = 0x288C28u;
label_288c28:
    // 0x288c28: 0x2402ffff
    ctx->pc = 0x288c28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_288c2c:
    // 0x288c2c: 0x1622000a
label_288c30:
    if (ctx->pc == 0x288C30u) {
        ctx->pc = 0x288C30u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1000));
        ctx->pc = 0x288C34u;
        goto label_288c34;
    }
    ctx->pc = 0x288C2Cu;
    {
        const bool branch_taken_0x288c2c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x288C30u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1000));
        if (branch_taken_0x288c2c) {
            ctx->pc = 0x288C58u;
            goto label_288c58;
        }
    }
    ctx->pc = 0x288C34u;
label_288c34:
    // 0x288c34: 0x240200e8
    ctx->pc = 0x288c34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_288c38:
    // 0x288c38: 0x2821018
    ctx->pc = 0x288c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288c3c:
    // 0x288c3c: 0x3c040035
    ctx->pc = 0x288c3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_288c40:
    // 0x288c40: 0x2484a620
    ctx->pc = 0x288c40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_288c44:
    // 0x288c44: 0xc082c8c
label_288c48:
    if (ctx->pc == 0x288C48u) {
        ctx->pc = 0x288C48u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x288C4Cu;
        goto label_288c4c;
    }
    ctx->pc = 0x288C44u;
    SET_GPR_U32(ctx, 31, 0x288C4Cu);
    ctx->pc = 0x288C48u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C4Cu; }
    }
    if (ctx->pc != 0x288C4Cu) { return; }
    ctx->pc = 0x288C4Cu;
label_288c4c:
    // 0x288c4c: 0x24020005
    ctx->pc = 0x288c4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_288c50:
    // 0x288c50: 0x10000375
label_288c54:
    if (ctx->pc == 0x288C54u) {
        ctx->pc = 0x288C54u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        ctx->pc = 0x288C58u;
        goto label_288c58;
    }
    ctx->pc = 0x288C50u;
    {
        const bool branch_taken_0x288c50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288C54u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        if (branch_taken_0x288c50) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x288C58u;
label_288c58:
    // 0x288c58: 0x54400374
label_288c5c:
    if (ctx->pc == 0x288C5Cu) {
        ctx->pc = 0x288C5Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x288C60u;
        goto label_288c60;
    }
    ctx->pc = 0x288C58u;
    {
        const bool branch_taken_0x288c58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x288c58) {
            ctx->pc = 0x288C5Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x288C60u;
label_288c60:
    // 0x288c60: 0x2630fc18
    ctx->pc = 0x288c60u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294966296));
label_288c64:
    // 0x288c64: 0x260202d
    ctx->pc = 0x288c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_288c68:
    // 0x288c68: 0xc0a1a1c
label_288c6c:
    if (ctx->pc == 0x288C6Cu) {
        ctx->pc = 0x288C6Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288C70u;
        goto label_288c70;
    }
    ctx->pc = 0x288C68u;
    SET_GPR_U32(ctx, 31, 0x288C70u);
    ctx->pc = 0x288C6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x286870u;
    {
        const uint32_t __entryPc = ctx->pc;
        verify_vmu_file_ok_0x286870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C70u; }
    }
    if (ctx->pc != 0x288C70u) { return; }
    ctx->pc = 0x288C70u;
label_288c70:
    // 0x288c70: 0x1040036d
label_288c74:
    if (ctx->pc == 0x288C74u) {
        ctx->pc = 0x288C74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x288C78u;
        goto label_288c78;
    }
    ctx->pc = 0x288C70u;
    {
        const bool branch_taken_0x288c70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x288C74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x288c70) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x288C78u;
label_288c78:
    // 0x288c78: 0x2821018
    ctx->pc = 0x288c78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288c7c:
    // 0x288c7c: 0x3c040035
    ctx->pc = 0x288c7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_288c80:
    // 0x288c80: 0x2484a620
    ctx->pc = 0x288c80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_288c84:
    // 0x288c84: 0xc082c8c
label_288c88:
    if (ctx->pc == 0x288C88u) {
        ctx->pc = 0x288C88u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x288C8Cu;
        goto label_288c8c;
    }
    ctx->pc = 0x288C84u;
    SET_GPR_U32(ctx, 31, 0x288C8Cu);
    ctx->pc = 0x288C88u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C8Cu; }
    }
    if (ctx->pc != 0x288C8Cu) { return; }
    ctx->pc = 0x288C8Cu;
label_288c8c:
    // 0x288c8c: 0x24020009
    ctx->pc = 0x288c8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_288c90:
    // 0x288c90: 0xae622ad4
    ctx->pc = 0x288c90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
label_288c94:
    // 0x288c94: 0xae702af0
    ctx->pc = 0x288c94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10992), GPR_U32(ctx, 16));
label_288c98:
    // 0x288c98: 0xae702af4
    ctx->pc = 0x288c98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10996), GPR_U32(ctx, 16));
label_288c9c:
    // 0x288c9c: 0x10000362
label_288ca0:
    if (ctx->pc == 0x288CA0u) {
        ctx->pc = 0x288CA0u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 0));
        ctx->pc = 0x288CA4u;
        goto label_288ca4;
    }
    ctx->pc = 0x288C9Cu;
    {
        const bool branch_taken_0x288c9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288CA0u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 0));
        if (branch_taken_0x288c9c) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x288CA4u;
label_288ca4:
    // 0x288ca4: 0x8e632ae4
    ctx->pc = 0x288ca4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
label_288ca8:
    // 0x288ca8: 0x4600023
label_288cac:
    if (ctx->pc == 0x288CACu) {
        ctx->pc = 0x288CACu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
        ctx->pc = 0x288CB0u;
        goto label_288cb0;
    }
    ctx->pc = 0x288CA8u;
    {
        const bool branch_taken_0x288ca8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x288CACu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
        if (branch_taken_0x288ca8) {
            ctx->pc = 0x288D38u;
            goto label_288d38;
        }
    }
    ctx->pc = 0x288CB0u;
label_288cb0:
    // 0x288cb0: 0x14400006
label_288cb4:
    if (ctx->pc == 0x288CB4u) {
        ctx->pc = 0x288CB4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288CB8u;
        goto label_288cb8;
    }
    ctx->pc = 0x288CB0u;
    {
        const bool branch_taken_0x288cb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x288CB4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x288cb0) {
            ctx->pc = 0x288CCCu;
            goto label_288ccc;
        }
    }
    ctx->pc = 0x288CB8u;
label_288cb8:
    // 0x288cb8: 0x24020003
    ctx->pc = 0x288cb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_288cbc:
    // 0x288cbc: 0x1062000a
label_288cc0:
    if (ctx->pc == 0x288CC0u) {
        ctx->pc = 0x288CC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288CC4u;
        goto label_288cc4;
    }
    ctx->pc = 0x288CBCu;
    {
        const bool branch_taken_0x288cbc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x288CC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x288cbc) {
            ctx->pc = 0x288CE8u;
            goto label_288ce8;
        }
    }
    ctx->pc = 0x288CC4u;
label_288cc4:
    // 0x288cc4: 0x1000000f
label_288cc8:
    if (ctx->pc == 0x288CC8u) {
        ctx->pc = 0x288CCCu;
        goto label_288ccc;
    }
    ctx->pc = 0x288CC4u;
    {
        const bool branch_taken_0x288cc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x288cc4) {
            ctx->pc = 0x288D04u;
            goto label_288d04;
        }
    }
    ctx->pc = 0x288CCCu;
label_288ccc:
    // 0x288ccc: 0xc09908c
label_288cd0:
    if (ctx->pc == 0x288CD0u) {
        ctx->pc = 0x288CD0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288CD4u;
        goto label_288cd4;
    }
    ctx->pc = 0x288CCCu;
    SET_GPR_U32(ctx, 31, 0x288CD4u);
    ctx->pc = 0x288CD0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x264230u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadGauntWorldDone_0x264230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CD4u; }
    }
    if (ctx->pc != 0x288CD4u) { return; }
    ctx->pc = 0x288CD4u;
label_288cd4:
    // 0x288cd4: 0x10400025
label_288cd8:
    if (ctx->pc == 0x288CD8u) {
        ctx->pc = 0x288CD8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288CDCu;
        goto label_288cdc;
    }
    ctx->pc = 0x288CD4u;
    {
        const bool branch_taken_0x288cd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x288CD8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x288cd4) {
            ctx->pc = 0x288D6Cu;
            goto label_288d6c;
        }
    }
    ctx->pc = 0x288CDCu;
label_288cdc:
    // 0x288cdc: 0x8e622ae4
    ctx->pc = 0x288cdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
label_288ce0:
    // 0x288ce0: 0x10000020
label_288ce4:
    if (ctx->pc == 0x288CE4u) {
        ctx->pc = 0x288CE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x288CE8u;
        goto label_288ce8;
    }
    ctx->pc = 0x288CE0u;
    {
        const bool branch_taken_0x288ce0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288CE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x288ce0) {
            ctx->pc = 0x288D64u;
            goto label_288d64;
        }
    }
    ctx->pc = 0x288CE8u;
label_288ce8:
    // 0x288ce8: 0xc08c2f6
label_288cec:
    if (ctx->pc == 0x288CECu) {
        ctx->pc = 0x288CECu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 10992)));
        ctx->pc = 0x288CF0u;
        goto label_288cf0;
    }
    ctx->pc = 0x288CE8u;
    SET_GPR_U32(ctx, 31, 0x288CF0u);
    ctx->pc = 0x288CECu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 10992)));
    ctx->pc = 0x230BD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerLoadSaveFile_0x230bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CF0u; }
    }
    if (ctx->pc != 0x288CF0u) { return; }
    ctx->pc = 0x288CF0u;
label_288cf0:
    // 0x288cf0: 0x5040001c
label_288cf4:
    if (ctx->pc == 0x288CF4u) {
        ctx->pc = 0x288CF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x288CF8u;
        goto label_288cf8;
    }
    ctx->pc = 0x288CF0u;
    {
        const bool branch_taken_0x288cf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x288cf0) {
            ctx->pc = 0x288CF4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x288D64u;
            goto label_288d64;
        }
    }
    ctx->pc = 0x288CF8u;
label_288cf8:
    // 0x288cf8: 0x8e622ae4
    ctx->pc = 0x288cf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
label_288cfc:
    // 0x288cfc: 0x10000019
label_288d00:
    if (ctx->pc == 0x288D00u) {
        ctx->pc = 0x288D00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x288D04u;
        goto label_288d04;
    }
    ctx->pc = 0x288CFCu;
    {
        const bool branch_taken_0x288cfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288D00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x288cfc) {
            ctx->pc = 0x288D64u;
            goto label_288d64;
        }
    }
    ctx->pc = 0x288D04u;
label_288d04:
    // 0x288d04: 0x460000c
label_288d08:
    if (ctx->pc == 0x288D08u) {
        ctx->pc = 0x288D08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x288D0Cu;
        goto label_288d0c;
    }
    ctx->pc = 0x288D04u;
    {
        const bool branch_taken_0x288d04 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x288D08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x288d04) {
            ctx->pc = 0x288D38u;
            goto label_288d38;
        }
    }
    ctx->pc = 0x288D0Cu;
label_288d0c:
    // 0x288d0c: 0x8c42ffbc
    ctx->pc = 0x288d0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_288d10:
    // 0x288d10: 0x621021
    ctx->pc = 0x288d10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_288d14:
    // 0x288d14: 0xae622ae4
    ctx->pc = 0x288d14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
label_288d18:
    // 0x288d18: 0x28420078
    ctx->pc = 0x288d18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 120));
label_288d1c:
    // 0x288d1c: 0x14400013
label_288d20:
    if (ctx->pc == 0x288D20u) {
        ctx->pc = 0x288D20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288D24u;
        goto label_288d24;
    }
    ctx->pc = 0x288D1Cu;
    {
        const bool branch_taken_0x288d1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x288D20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x288d1c) {
            ctx->pc = 0x288D6Cu;
            goto label_288d6c;
        }
    }
    ctx->pc = 0x288D24u;
label_288d24:
    // 0x288d24: 0xc0a205a
label_288d28:
    if (ctx->pc == 0x288D28u) {
        ctx->pc = 0x288D28u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288D2Cu;
        goto label_288d2c;
    }
    ctx->pc = 0x288D24u;
    SET_GPR_U32(ctx, 31, 0x288D2Cu);
    ctx->pc = 0x288D28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x288168u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_player_change_0x288168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D2Cu; }
    }
    if (ctx->pc != 0x288D2Cu) { return; }
    ctx->pc = 0x288D2Cu;
label_288d2c:
    // 0x288d2c: 0x24020001
    ctx->pc = 0x288d2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_288d30:
    // 0x288d30: 0x1000000b
label_288d34:
    if (ctx->pc == 0x288D34u) {
        ctx->pc = 0x288D34u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10948), GPR_U32(ctx, 2));
        ctx->pc = 0x288D38u;
        goto label_288d38;
    }
    ctx->pc = 0x288D30u;
    {
        const bool branch_taken_0x288d30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288D34u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10948), GPR_U32(ctx, 2));
        if (branch_taken_0x288d30) {
            ctx->pc = 0x288D60u;
            goto label_288d60;
        }
    }
    ctx->pc = 0x288D38u;
label_288d38:
    // 0x288d38: 0x3c020031
    ctx->pc = 0x288d38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_288d3c:
    // 0x288d3c: 0x8e632ae4
    ctx->pc = 0x288d3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
label_288d40:
    // 0x288d40: 0x8c42ffbc
    ctx->pc = 0x288d40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_288d44:
    // 0x288d44: 0x621823
    ctx->pc = 0x288d44u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_288d48:
    // 0x288d48: 0xae632ae4
    ctx->pc = 0x288d48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 3));
label_288d4c:
    // 0x288d4c: 0x2863ff89
    ctx->pc = 0x288d4cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 4294967177));
label_288d50:
    // 0x288d50: 0x10600006
label_288d54:
    if (ctx->pc == 0x288D54u) {
        ctx->pc = 0x288D54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288D58u;
        goto label_288d58;
    }
    ctx->pc = 0x288D50u;
    {
        const bool branch_taken_0x288d50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x288D54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x288d50) {
            ctx->pc = 0x288D6Cu;
            goto label_288d6c;
        }
    }
    ctx->pc = 0x288D58u;
label_288d58:
    // 0x288d58: 0x8e622ad8
    ctx->pc = 0x288d58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10968)));
label_288d5c:
    // 0x288d5c: 0xae622ad4
    ctx->pc = 0x288d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
label_288d60:
    // 0x288d60: 0x2402ffff
    ctx->pc = 0x288d60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_288d64:
    // 0x288d64: 0xae622ae4
    ctx->pc = 0x288d64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
label_288d68:
    // 0x288d68: 0x280202d
    ctx->pc = 0x288d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_288d6c:
    // 0x288d6c: 0xc0a1ab2
label_288d70:
    if (ctx->pc == 0x288D70u) {
        ctx->pc = 0x288D70u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x288D74u;
        goto label_288d74;
    }
    ctx->pc = 0x288D6Cu;
    SET_GPR_U32(ctx, 31, 0x288D74u);
    ctx->pc = 0x288D70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x286AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_sel_menu_0x286ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D74u; }
    }
    if (ctx->pc != 0x288D74u) { return; }
    ctx->pc = 0x288D74u;
label_288d74:
    // 0x288d74: 0x1000032d
label_288d78:
    if (ctx->pc == 0x288D78u) {
        ctx->pc = 0x288D78u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x288D7Cu;
        goto label_288d7c;
    }
    ctx->pc = 0x288D74u;
    {
        const bool branch_taken_0x288d74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288D78u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        if (branch_taken_0x288d74) {
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x288D7Cu;
label_288d7c:
    // 0x288d7c: 0x3c030035
    ctx->pc = 0x288d7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_288d80:
    // 0x288d80: 0x2463a620
    ctx->pc = 0x288d80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_288d84:
    // 0x288d84: 0x240200e8
    ctx->pc = 0x288d84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_288d88:
    // 0x288d88: 0x2821018
    ctx->pc = 0x288d88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288d8c:
    // 0x288d8c: 0x621821
    ctx->pc = 0x288d8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_288d90:
    // 0x288d90: 0x8c62006c
    ctx->pc = 0x288d90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_288d94:
    // 0x288d94: 0x54400005
label_288d98:
    if (ctx->pc == 0x288D98u) {
        ctx->pc = 0x288D98u;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        ctx->pc = 0x288D9Cu;
        goto label_288d9c;
    }
    ctx->pc = 0x288D94u;
    {
        const bool branch_taken_0x288d94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x288d94) {
            ctx->pc = 0x288D98u;
            SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
            ctx->pc = 0x288DACu;
            goto label_288dac;
        }
    }
    ctx->pc = 0x288D9Cu;
label_288d9c:
    // 0x288d9c: 0x280202d
    ctx->pc = 0x288d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_288da0:
    // 0x288da0: 0xc0a18a2
label_288da4:
    if (ctx->pc == 0x288DA4u) {
        ctx->pc = 0x288DA4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x288DA8u;
        goto label_288da8;
    }
    ctx->pc = 0x288DA0u;
    SET_GPR_U32(ctx, 31, 0x288DA8u);
    ctx->pc = 0x288DA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x286288u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_sel_menu_0x286288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288DA8u; }
    }
    if (ctx->pc != 0x288DA8u) { return; }
    ctx->pc = 0x288DA8u;
label_288da8:
    // 0x288da8: 0x3c040035
    ctx->pc = 0x288da8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_288dac:
    // 0x288dac: 0x2484a620
    ctx->pc = 0x288dacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_288db0:
    // 0x288db0: 0x240300e8
    ctx->pc = 0x288db0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 232));
label_288db4:
    // 0x288db4: 0x2831818
    ctx->pc = 0x288db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288db8:
    // 0x288db8: 0x831021
    ctx->pc = 0x288db8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_288dbc:
    // 0x288dbc: 0xac400084
    ctx->pc = 0x288dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
label_288dc0:
    // 0x288dc0: 0x649021
    ctx->pc = 0x288dc0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_288dc4:
    // 0x288dc4: 0xc082d7e
label_288dc8:
    if (ctx->pc == 0x288DC8u) {
        ctx->pc = 0x288DC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288DCCu;
        goto label_288dcc;
    }
    ctx->pc = 0x288DC4u;
    SET_GPR_U32(ctx, 31, 0x288DCCu);
    ctx->pc = 0x288DC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_optmenu_0x20b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288DCCu; }
    }
    if (ctx->pc != 0x288DCCu) { return; }
    ctx->pc = 0x288DCCu;
label_288dcc:
    // 0x288dcc: 0x240202d
    ctx->pc = 0x288dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_288dd0:
    // 0x288dd0: 0xc083146
label_288dd4:
    if (ctx->pc == 0x288DD4u) {
        ctx->pc = 0x288DD4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x288DD8u;
        goto label_288dd8;
    }
    ctx->pc = 0x288DD0u;
    SET_GPR_U32(ctx, 31, 0x288DD8u);
    ctx->pc = 0x288DD4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_optmenu_0x20c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288DD8u; }
    }
    if (ctx->pc != 0x288DD8u) { return; }
    ctx->pc = 0x288DD8u;
label_288dd8:
    // 0x288dd8: 0xc082728
label_288ddc:
    if (ctx->pc == 0x288DDCu) {
        ctx->pc = 0x288DDCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288DE0u;
        goto label_288de0;
    }
    ctx->pc = 0x288DD8u;
    SET_GPR_U32(ctx, 31, 0x288DE0u);
    ctx->pc = 0x288DDCu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x209CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        vmu_exists_0x209ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288DE0u; }
    }
    if (ctx->pc != 0x288DE0u) { return; }
    ctx->pc = 0x288DE0u;
label_288de0:
    // 0x288de0: 0x2410ffff
    ctx->pc = 0x288de0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
label_288de4:
    // 0x288de4: 0x2102a
    ctx->pc = 0x288de4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
label_288de8:
    // 0x288de8: 0x202880a
    ctx->pc = 0x288de8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 16));
label_288dec:
    // 0x288dec: 0x280202d
    ctx->pc = 0x288decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_288df0:
    // 0x288df0: 0xc0a1ab2
label_288df4:
    if (ctx->pc == 0x288DF4u) {
        ctx->pc = 0x288DF4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x288DF8u;
        goto label_288df8;
    }
    ctx->pc = 0x288DF0u;
    SET_GPR_U32(ctx, 31, 0x288DF8u);
    ctx->pc = 0x288DF4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x286AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_sel_menu_0x286ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288DF8u; }
    }
    if (ctx->pc != 0x288DF8u) { return; }
    ctx->pc = 0x288DF8u;
label_288df8:
    // 0x288df8: 0x16300005
label_288dfc:
    if (ctx->pc == 0x288DFCu) {
        ctx->pc = 0x288DFCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1000));
        ctx->pc = 0x288E00u;
        goto label_288e00;
    }
    ctx->pc = 0x288DF8u;
    {
        const bool branch_taken_0x288df8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x288DFCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1000));
        if (branch_taken_0x288df8) {
            ctx->pc = 0x288E10u;
            goto label_288e10;
        }
    }
    ctx->pc = 0x288E00u;
label_288e00:
    // 0x288e00: 0xc082c8c
label_288e04:
    if (ctx->pc == 0x288E04u) {
        ctx->pc = 0x288E04u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288E08u;
        goto label_288e08;
    }
    ctx->pc = 0x288E00u;
    SET_GPR_U32(ctx, 31, 0x288E08u);
    ctx->pc = 0x288E04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288E08u; }
    }
    if (ctx->pc != 0x288E08u) { return; }
    ctx->pc = 0x288E08u;
label_288e08:
    // 0x288e08: 0x10000202
label_288e0c:
    if (ctx->pc == 0x288E0Cu) {
        ctx->pc = 0x288E0Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10968)));
        ctx->pc = 0x288E10u;
        goto label_288e10;
    }
    ctx->pc = 0x288E08u;
    {
        const bool branch_taken_0x288e08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288E0Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10968)));
        if (branch_taken_0x288e08) {
            ctx->pc = 0x289614u;
            goto label_289614;
        }
    }
    ctx->pc = 0x288E10u;
label_288e10:
    // 0x288e10: 0x54400306
label_288e14:
    if (ctx->pc == 0x288E14u) {
        ctx->pc = 0x288E14u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x288E18u;
        goto label_288e18;
    }
    ctx->pc = 0x288E10u;
    {
        const bool branch_taken_0x288e10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x288e10) {
            ctx->pc = 0x288E14u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x288E18u;
label_288e18:
    // 0x288e18: 0x240300e8
    ctx->pc = 0x288e18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 232));
label_288e1c:
    // 0x288e1c: 0x2831818
    ctx->pc = 0x288e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288e20:
    // 0x288e20: 0x3c020035
    ctx->pc = 0x288e20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_288e24:
    // 0x288e24: 0x2442a620
    ctx->pc = 0x288e24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944288));
label_288e28:
    // 0x288e28: 0x628021
    ctx->pc = 0x288e28u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_288e2c:
    // 0x288e2c: 0xc082c8c
label_288e30:
    if (ctx->pc == 0x288E30u) {
        ctx->pc = 0x288E30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288E34u;
        goto label_288e34;
    }
    ctx->pc = 0x288E2Cu;
    SET_GPR_U32(ctx, 31, 0x288E34u);
    ctx->pc = 0x288E30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288E34u; }
    }
    if (ctx->pc != 0x288E34u) { return; }
    ctx->pc = 0x288E34u;
label_288e34:
    // 0x288e34: 0x2624fc18
    ctx->pc = 0x288e34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294966296));
label_288e38:
    // 0x288e38: 0x2623fc1b
    ctx->pc = 0x288e38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294966299));
label_288e3c:
    // 0x288e3c: 0x2402ffff
    ctx->pc = 0x288e3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_288e40:
    // 0x288e40: 0x44102a
    ctx->pc = 0x288e40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
label_288e44:
    // 0x288e44: 0x82180b
    ctx->pc = 0x288e44u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
label_288e48:
    // 0x288e48: 0x31883
    ctx->pc = 0x288e48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_288e4c:
    // 0x288e4c: 0xae632ae8
    ctx->pc = 0x288e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10984), GPR_U32(ctx, 3));
label_288e50:
    // 0x288e50: 0x31880
    ctx->pc = 0x288e50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_288e54:
    // 0x288e54: 0x832023
    ctx->pc = 0x288e54u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_288e58:
    // 0x288e58: 0xae642aec
    ctx->pc = 0x288e58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10988), GPR_U32(ctx, 4));
label_288e5c:
    // 0x288e5c: 0x260202d
    ctx->pc = 0x288e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_288e60:
    // 0x288e60: 0xc0a1a3a
label_288e64:
    if (ctx->pc == 0x288E64u) {
        ctx->pc = 0x288E64u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x288E68u;
        goto label_288e68;
    }
    ctx->pc = 0x288E60u;
    SET_GPR_U32(ctx, 31, 0x288E68u);
    ctx->pc = 0x288E64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2868E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_file_entries_0x2868e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288E68u; }
    }
    if (ctx->pc != 0x288E68u) { return; }
    ctx->pc = 0x288E68u;
label_288e68:
    // 0x288e68: 0x40882d
    ctx->pc = 0x288e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288e6c:
    // 0x288e6c: 0x2402fffe
    ctx->pc = 0x288e6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_288e70:
    // 0x288e70: 0x16220003
label_288e74:
    if (ctx->pc == 0x288E74u) {
        ctx->pc = 0x288E74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x288E78u;
        goto label_288e78;
    }
    ctx->pc = 0x288E70u;
    {
        const bool branch_taken_0x288e70 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x288E74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x288e70) {
            ctx->pc = 0x288E80u;
            goto label_288e80;
        }
    }
    ctx->pc = 0x288E78u;
label_288e78:
    // 0x288e78: 0x100000e9
label_288e7c:
    if (ctx->pc == 0x288E7Cu) {
        ctx->pc = 0x288E7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288E80u;
        goto label_288e80;
    }
    ctx->pc = 0x288E78u;
    {
        const bool branch_taken_0x288e78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288E7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x288e78) {
            ctx->pc = 0x289220u;
            goto label_289220;
        }
    }
    ctx->pc = 0x288E80u;
label_288e80:
    // 0x288e80: 0x12220004
label_288e84:
    if (ctx->pc == 0x288E84u) {
        ctx->pc = 0x288E84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x288E88u;
        goto label_288e88;
    }
    ctx->pc = 0x288E80u;
    {
        const bool branch_taken_0x288e80 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x288E84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x288e80) {
            ctx->pc = 0x288E94u;
            goto label_288e94;
        }
    }
    ctx->pc = 0x288E88u;
label_288e88:
    // 0x288e88: 0x16200005
label_288e8c:
    if (ctx->pc == 0x288E8Cu) {
        ctx->pc = 0x288E8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x288E90u;
        goto label_288e90;
    }
    ctx->pc = 0x288E88u;
    {
        const bool branch_taken_0x288e88 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x288E8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x288e88) {
            ctx->pc = 0x288EA0u;
            goto label_288ea0;
        }
    }
    ctx->pc = 0x288E90u;
label_288e90:
    // 0x288e90: 0x2402000c
    ctx->pc = 0x288e90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_288e94:
    // 0x288e94: 0xae622ad4
    ctx->pc = 0x288e94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
label_288e98:
    // 0x288e98: 0x100002e3
label_288e9c:
    if (ctx->pc == 0x288E9Cu) {
        ctx->pc = 0x288E9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 0));
        ctx->pc = 0x288EA0u;
        goto label_288ea0;
    }
    ctx->pc = 0x288E98u;
    {
        const bool branch_taken_0x288e98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288E9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 0));
        if (branch_taken_0x288e98) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x288EA0u;
label_288ea0:
    // 0x288ea0: 0x100002e1
label_288ea4:
    if (ctx->pc == 0x288EA4u) {
        ctx->pc = 0x288EA4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        ctx->pc = 0x288EA8u;
        goto label_288ea8;
    }
    ctx->pc = 0x288EA0u;
    {
        const bool branch_taken_0x288ea0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288EA4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        if (branch_taken_0x288ea0) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x288EA8u;
label_288ea8:
    // 0x288ea8: 0x8e632ae4
    ctx->pc = 0x288ea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
label_288eac:
    // 0x288eac: 0x28620003
    ctx->pc = 0x288eacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
label_288eb0:
    // 0x288eb0: 0x50400007
label_288eb4:
    if (ctx->pc == 0x288EB4u) {
        ctx->pc = 0x288EB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x288EB8u;
        goto label_288eb8;
    }
    ctx->pc = 0x288EB0u;
    {
        const bool branch_taken_0x288eb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x288eb0) {
            ctx->pc = 0x288EB4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x288ED0u;
            goto label_288ed0;
        }
    }
    ctx->pc = 0x288EB8u;
label_288eb8:
    // 0x288eb8: 0x1c60004a
label_288ebc:
    if (ctx->pc == 0x288EBCu) {
        ctx->pc = 0x288EBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288EC0u;
        goto label_288ec0;
    }
    ctx->pc = 0x288EB8u;
    {
        const bool branch_taken_0x288eb8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x288EBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x288eb8) {
            ctx->pc = 0x288FE4u;
            goto label_288fe4;
        }
    }
    ctx->pc = 0x288EC0u;
label_288ec0:
    // 0x288ec0: 0x10600007
label_288ec4:
    if (ctx->pc == 0x288EC4u) {
        ctx->pc = 0x288EC4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 1000));
        ctx->pc = 0x288EC8u;
        goto label_288ec8;
    }
    ctx->pc = 0x288EC0u;
    {
        const bool branch_taken_0x288ec0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x288EC4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 1000));
        if (branch_taken_0x288ec0) {
            ctx->pc = 0x288EE0u;
            goto label_288ee0;
        }
    }
    ctx->pc = 0x288EC8u;
label_288ec8:
    // 0x288ec8: 0x10000071
label_288ecc:
    if (ctx->pc == 0x288ECCu) {
        ctx->pc = 0x288ED0u;
        goto label_288ed0;
    }
    ctx->pc = 0x288EC8u;
    {
        const bool branch_taken_0x288ec8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x288ec8) {
            ctx->pc = 0x289090u;
            goto label_289090;
        }
    }
    ctx->pc = 0x288ED0u;
label_288ed0:
    // 0x288ed0: 0x5062004a
label_288ed4:
    if (ctx->pc == 0x288ED4u) {
        ctx->pc = 0x288ED4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
        ctx->pc = 0x288ED8u;
        goto label_288ed8;
    }
    ctx->pc = 0x288ED0u;
    {
        const bool branch_taken_0x288ed0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x288ed0) {
            ctx->pc = 0x288ED4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
            ctx->pc = 0x288FFCu;
            goto label_288ffc;
        }
    }
    ctx->pc = 0x288ED8u;
label_288ed8:
    // 0x288ed8: 0x1000006c
label_288edc:
    if (ctx->pc == 0x288EDCu) {
        ctx->pc = 0x288EDCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
        ctx->pc = 0x288EE0u;
        goto label_288ee0;
    }
    ctx->pc = 0x288ED8u;
    {
        const bool branch_taken_0x288ed8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288EDCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
        if (branch_taken_0x288ed8) {
            ctx->pc = 0x28908Cu;
            goto label_28908c;
        }
    }
    ctx->pc = 0x288EE0u;
label_288ee0:
    // 0x288ee0: 0x3c030035
    ctx->pc = 0x288ee0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_288ee4:
    // 0x288ee4: 0x2463a620
    ctx->pc = 0x288ee4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_288ee8:
    // 0x288ee8: 0x240200e8
    ctx->pc = 0x288ee8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_288eec:
    // 0x288eec: 0x2821018
    ctx->pc = 0x288eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288ef0:
    // 0x288ef0: 0x621821
    ctx->pc = 0x288ef0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_288ef4:
    // 0x288ef4: 0x8c62006c
    ctx->pc = 0x288ef4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_288ef8:
    // 0x288ef8: 0x14400005
label_288efc:
    if (ctx->pc == 0x288EFCu) {
        ctx->pc = 0x288EFCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x288F00u;
        goto label_288f00;
    }
    ctx->pc = 0x288EF8u;
    {
        const bool branch_taken_0x288ef8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x288EFCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x288ef8) {
            ctx->pc = 0x288F10u;
            goto label_288f10;
        }
    }
    ctx->pc = 0x288F00u;
label_288f00:
    // 0x288f00: 0x280202d
    ctx->pc = 0x288f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_288f04:
    // 0x288f04: 0xc0a18a2
label_288f08:
    if (ctx->pc == 0x288F08u) {
        ctx->pc = 0x288F08u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x288F0Cu;
        goto label_288f0c;
    }
    ctx->pc = 0x288F04u;
    SET_GPR_U32(ctx, 31, 0x288F0Cu);
    ctx->pc = 0x288F08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x286288u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_sel_menu_0x286288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288F0Cu; }
    }
    if (ctx->pc != 0x288F0Cu) { return; }
    ctx->pc = 0x288F0Cu;
label_288f0c:
    // 0x288f0c: 0x241000e8
    ctx->pc = 0x288f0cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
label_288f10:
    // 0x288f10: 0x2908018
    ctx->pc = 0x288f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288f14:
    // 0x288f14: 0x3c020035
    ctx->pc = 0x288f14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_288f18:
    // 0x288f18: 0x2442a620
    ctx->pc = 0x288f18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944288));
label_288f1c:
    // 0x288f1c: 0x2028021
    ctx->pc = 0x288f1cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_288f20:
    // 0x288f20: 0xc082d7e
label_288f24:
    if (ctx->pc == 0x288F24u) {
        ctx->pc = 0x288F24u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288F28u;
        goto label_288f28;
    }
    ctx->pc = 0x288F20u;
    SET_GPR_U32(ctx, 31, 0x288F28u);
    ctx->pc = 0x288F24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_optmenu_0x20b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288F28u; }
    }
    if (ctx->pc != 0x288F28u) { return; }
    ctx->pc = 0x288F28u;
label_288f28:
    // 0x288f28: 0x200202d
    ctx->pc = 0x288f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_288f2c:
    // 0x288f2c: 0xc083146
label_288f30:
    if (ctx->pc == 0x288F30u) {
        ctx->pc = 0x288F30u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x288F34u;
        goto label_288f34;
    }
    ctx->pc = 0x288F2Cu;
    SET_GPR_U32(ctx, 31, 0x288F34u);
    ctx->pc = 0x288F30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_optmenu_0x20c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288F34u; }
    }
    if (ctx->pc != 0x288F34u) { return; }
    ctx->pc = 0x288F34u;
label_288f34:
    // 0x288f34: 0x3c050031
    ctx->pc = 0x288f34u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
label_288f38:
    // 0x288f38: 0x24a522a0
    ctx->pc = 0x288f38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8864));
label_288f3c:
    // 0x288f3c: 0x8e642aec
    ctx->pc = 0x288f3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 10988)));
label_288f40:
    // 0x288f40: 0x42080
    ctx->pc = 0x288f40u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_288f44:
    // 0x288f44: 0x8e632ae8
    ctx->pc = 0x288f44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10984)));
label_288f48:
    // 0x288f48: 0x31900
    ctx->pc = 0x288f48u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
label_288f4c:
    // 0x288f4c: 0x832021
    ctx->pc = 0x288f4cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_288f50:
    // 0x288f50: 0x852021
    ctx->pc = 0x288f50u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_288f54:
    // 0x288f54: 0x8c830000
    ctx->pc = 0x288f54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_288f58:
    // 0x288f58: 0x2404ffff
    ctx->pc = 0x288f58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_288f5c:
    // 0x288f5c: 0x38630002
    ctx->pc = 0x288f5cu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 2));
label_288f60:
    // 0x288f60: 0x80882d
    ctx->pc = 0x288f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_288f64:
    // 0x288f64: 0x43880a
    ctx->pc = 0x288f64u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
label_288f68:
    // 0x288f68: 0x240203ee
    ctx->pc = 0x288f68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1006));
label_288f6c:
    // 0x288f6c: 0x12220015
label_288f70:
    if (ctx->pc == 0x288F70u) {
        ctx->pc = 0x288F70u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1007));
        ctx->pc = 0x288F74u;
        goto label_288f74;
    }
    ctx->pc = 0x288F6Cu;
    {
        const bool branch_taken_0x288f6c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x288F70u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1007));
        if (branch_taken_0x288f6c) {
            ctx->pc = 0x288FC4u;
            goto label_288fc4;
        }
    }
    ctx->pc = 0x288F74u;
label_288f74:
    // 0x288f74: 0x10400005
label_288f78:
    if (ctx->pc == 0x288F78u) {
        ctx->pc = 0x288F78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1007));
        ctx->pc = 0x288F7Cu;
        goto label_288f7c;
    }
    ctx->pc = 0x288F74u;
    {
        const bool branch_taken_0x288f74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x288F78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1007));
        if (branch_taken_0x288f74) {
            ctx->pc = 0x288F8Cu;
            goto label_288f8c;
        }
    }
    ctx->pc = 0x288F7Cu;
label_288f7c:
    // 0x288f7c: 0x12240006
label_288f80:
    if (ctx->pc == 0x288F80u) {
        ctx->pc = 0x288F80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x288F84u;
        goto label_288f84;
    }
    ctx->pc = 0x288F7Cu;
    {
        const bool branch_taken_0x288f7c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 4));
        ctx->pc = 0x288F80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x288f7c) {
            ctx->pc = 0x288F98u;
            goto label_288f98;
        }
    }
    ctx->pc = 0x288F84u;
label_288f84:
    // 0x288f84: 0x10000070
label_288f88:
    if (ctx->pc == 0x288F88u) {
        ctx->pc = 0x288F88u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
        ctx->pc = 0x288F8Cu;
        goto label_288f8c;
    }
    ctx->pc = 0x288F84u;
    {
        const bool branch_taken_0x288f84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288F88u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
        if (branch_taken_0x288f84) {
            ctx->pc = 0x289148u;
            goto label_289148;
        }
    }
    ctx->pc = 0x288F8Cu;
label_288f8c:
    // 0x288f8c: 0x5622006e
label_288f90:
    if (ctx->pc == 0x288F90u) {
        ctx->pc = 0x288F90u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
        ctx->pc = 0x288F94u;
        goto label_288f94;
    }
    ctx->pc = 0x288F8Cu;
    {
        const bool branch_taken_0x288f8c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x288f8c) {
            ctx->pc = 0x288F90u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
            ctx->pc = 0x289148u;
            goto label_289148;
        }
    }
    ctx->pc = 0x288F94u;
label_288f94:
    // 0x288f94: 0x240200e8
    ctx->pc = 0x288f94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_288f98:
    // 0x288f98: 0x2821018
    ctx->pc = 0x288f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288f9c:
    // 0x288f9c: 0x3c040035
    ctx->pc = 0x288f9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_288fa0:
    // 0x288fa0: 0x2484a620
    ctx->pc = 0x288fa0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_288fa4:
    // 0x288fa4: 0xc082c8c
label_288fa8:
    if (ctx->pc == 0x288FA8u) {
        ctx->pc = 0x288FA8u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x288FACu;
        goto label_288fac;
    }
    ctx->pc = 0x288FA4u;
    SET_GPR_U32(ctx, 31, 0x288FACu);
    ctx->pc = 0x288FA8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288FACu; }
    }
    if (ctx->pc != 0x288FACu) { return; }
    ctx->pc = 0x288FACu;
label_288fac:
    // 0x288fac: 0x8e632ad4
    ctx->pc = 0x288facu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
label_288fb0:
    // 0x288fb0: 0x24020006
    ctx->pc = 0x288fb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_288fb4:
    // 0x288fb4: 0x1062004e
label_288fb8:
    if (ctx->pc == 0x288FB8u) {
        ctx->pc = 0x288FB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x288FBCu;
        goto label_288fbc;
    }
    ctx->pc = 0x288FB4u;
    {
        const bool branch_taken_0x288fb4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x288FB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x288fb4) {
            ctx->pc = 0x2890F0u;
            goto label_2890f0;
        }
    }
    ctx->pc = 0x288FBCu;
label_288fbc:
    // 0x288fbc: 0x10000061
label_288fc0:
    if (ctx->pc == 0x288FC0u) {
        ctx->pc = 0x288FC0u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        ctx->pc = 0x288FC4u;
        goto label_288fc4;
    }
    ctx->pc = 0x288FBCu;
    {
        const bool branch_taken_0x288fbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288FC0u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        if (branch_taken_0x288fbc) {
            ctx->pc = 0x289144u;
            goto label_289144;
        }
    }
    ctx->pc = 0x288FC4u;
label_288fc4:
    // 0x288fc4: 0x240200e8
    ctx->pc = 0x288fc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_288fc8:
    // 0x288fc8: 0x2821018
    ctx->pc = 0x288fc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_288fcc:
    // 0x288fcc: 0x3c040035
    ctx->pc = 0x288fccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_288fd0:
    // 0x288fd0: 0x2484a620
    ctx->pc = 0x288fd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_288fd4:
    // 0x288fd4: 0xc082c8c
label_288fd8:
    if (ctx->pc == 0x288FD8u) {
        ctx->pc = 0x288FD8u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x288FDCu;
        goto label_288fdc;
    }
    ctx->pc = 0x288FD4u;
    SET_GPR_U32(ctx, 31, 0x288FDCu);
    ctx->pc = 0x288FD8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288FDCu; }
    }
    if (ctx->pc != 0x288FDCu) { return; }
    ctx->pc = 0x288FDCu;
label_288fdc:
    // 0x288fdc: 0x10000047
label_288fe0:
    if (ctx->pc == 0x288FE0u) {
        ctx->pc = 0x288FE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x288FE4u;
        goto label_288fe4;
    }
    ctx->pc = 0x288FDCu;
    {
        const bool branch_taken_0x288fdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288FE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x288fdc) {
            ctx->pc = 0x2890FCu;
            goto label_2890fc;
        }
    }
    ctx->pc = 0x288FE4u;
label_288fe4:
    // 0x288fe4: 0xc09908c
label_288fe8:
    if (ctx->pc == 0x288FE8u) {
        ctx->pc = 0x288FE8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x288FECu;
        goto label_288fec;
    }
    ctx->pc = 0x288FE4u;
    SET_GPR_U32(ctx, 31, 0x288FECu);
    ctx->pc = 0x288FE8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x264230u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadGauntWorldDone_0x264230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288FECu; }
    }
    if (ctx->pc != 0x288FECu) { return; }
    ctx->pc = 0x288FECu;
label_288fec:
    // 0x288fec: 0x50400056
label_288ff0:
    if (ctx->pc == 0x288FF0u) {
        ctx->pc = 0x288FF0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
        ctx->pc = 0x288FF4u;
        goto label_288ff4;
    }
    ctx->pc = 0x288FECu;
    {
        const bool branch_taken_0x288fec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x288fec) {
            ctx->pc = 0x288FF0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
            ctx->pc = 0x289148u;
            goto label_289148;
        }
    }
    ctx->pc = 0x288FF4u;
label_288ff4:
    // 0x288ff4: 0x10000020
label_288ff8:
    if (ctx->pc == 0x288FF8u) {
        ctx->pc = 0x288FF8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
        ctx->pc = 0x288FFCu;
        goto label_288ffc;
    }
    ctx->pc = 0x288FF4u;
    {
        const bool branch_taken_0x288ff4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288FF8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
        if (branch_taken_0x288ff4) {
            ctx->pc = 0x289078u;
            goto label_289078;
        }
    }
    ctx->pc = 0x288FFCu;
label_288ffc:
    // 0x288ffc: 0x24020006
    ctx->pc = 0x288ffcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_289000:
    // 0x289000: 0x5462000a
label_289004:
    if (ctx->pc == 0x289004u) {
        ctx->pc = 0x289004u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
        ctx->pc = 0x289008u;
        goto label_289008;
    }
    ctx->pc = 0x289000u;
    {
        const bool branch_taken_0x289000 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x289000) {
            ctx->pc = 0x289004u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
            ctx->pc = 0x28902Cu;
            goto label_28902c;
        }
    }
    ctx->pc = 0x289008u;
label_289008:
    // 0x289008: 0x8e642ae8
    ctx->pc = 0x289008u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 10984)));
label_28900c:
    // 0x28900c: 0x8e652aec
    ctx->pc = 0x28900cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 10988)));
label_289010:
    // 0x289010: 0xc0820e2
label_289014:
    if (ctx->pc == 0x289014u) {
        ctx->pc = 0x289014u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x289018u;
        goto label_289018;
    }
    ctx->pc = 0x289010u;
    SET_GPR_U32(ctx, 31, 0x289018u);
    ctx->pc = 0x289014u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x208388u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveMount_0x208388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289018u; }
    }
    if (ctx->pc != 0x289018u) { return; }
    ctx->pc = 0x289018u;
label_289018:
    // 0x289018: 0x2403ffff
    ctx->pc = 0x289018u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_28901c:
    // 0x28901c: 0x62182a
    ctx->pc = 0x28901cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_289020:
    // 0x289020: 0x882d
    ctx->pc = 0x289020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289024:
    // 0x289024: 0x10000011
label_289028:
    if (ctx->pc == 0x289028u) {
        ctx->pc = 0x289028u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
        ctx->pc = 0x28902Cu;
        goto label_28902c;
    }
    ctx->pc = 0x289024u;
    {
        const bool branch_taken_0x289024 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289028u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
        if (branch_taken_0x289024) {
            ctx->pc = 0x28906Cu;
            goto label_28906c;
        }
    }
    ctx->pc = 0x28902Cu;
label_28902c:
    // 0x28902c: 0x2402000c
    ctx->pc = 0x28902cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_289030:
    // 0x289030: 0x1462000b
label_289034:
    if (ctx->pc == 0x289034u) {
        ctx->pc = 0x289034u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 10984)));
        ctx->pc = 0x289038u;
        goto label_289038;
    }
    ctx->pc = 0x289030u;
    {
        const bool branch_taken_0x289030 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x289034u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 10984)));
        if (branch_taken_0x289030) {
            ctx->pc = 0x289060u;
            goto label_289060;
        }
    }
    ctx->pc = 0x289038u;
label_289038:
    // 0x289038: 0xc082380
label_28903c:
    if (ctx->pc == 0x28903Cu) {
        ctx->pc = 0x28903Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 10988)));
        ctx->pc = 0x289040u;
        goto label_289040;
    }
    ctx->pc = 0x289038u;
    SET_GPR_U32(ctx, 31, 0x289040u);
    ctx->pc = 0x28903Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 10988)));
    ctx->pc = 0x208E00u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveGetFreeBytes_0x208e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289040u; }
    }
    if (ctx->pc != 0x289040u) { return; }
    ctx->pc = 0x289040u;
label_289040:
    // 0x289040: 0x3c030035
    ctx->pc = 0x289040u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_289044:
    // 0x289044: 0x8c63a3cc
    ctx->pc = 0x289044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294943692)));
label_289048:
    // 0x289048: 0x43102a
    ctx->pc = 0x289048u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_28904c:
    // 0x28904c: 0x10400003
label_289050:
    if (ctx->pc == 0x289050u) {
        ctx->pc = 0x289050u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1000));
        ctx->pc = 0x289054u;
        goto label_289054;
    }
    ctx->pc = 0x28904Cu;
    {
        const bool branch_taken_0x28904c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x289050u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1000));
        if (branch_taken_0x28904c) {
            ctx->pc = 0x28905Cu;
            goto label_28905c;
        }
    }
    ctx->pc = 0x289054u;
label_289054:
    // 0x289054: 0x1000003b
label_289058:
    if (ctx->pc == 0x289058u) {
        ctx->pc = 0x289058u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        ctx->pc = 0x28905Cu;
        goto label_28905c;
    }
    ctx->pc = 0x289054u;
    {
        const bool branch_taken_0x289054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289058u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        if (branch_taken_0x289054) {
            ctx->pc = 0x289144u;
            goto label_289144;
        }
    }
    ctx->pc = 0x28905Cu;
label_28905c:
    // 0x28905c: 0x8e642ae8
    ctx->pc = 0x28905cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 10984)));
label_289060:
    // 0x289060: 0xc08223a
label_289064:
    if (ctx->pc == 0x289064u) {
        ctx->pc = 0x289064u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 10988)));
        ctx->pc = 0x289068u;
        goto label_289068;
    }
    ctx->pc = 0x289060u;
    SET_GPR_U32(ctx, 31, 0x289068u);
    ctx->pc = 0x289064u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 10988)));
    ctx->pc = 0x2088E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MemCardCreateGaunt_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289068u; }
    }
    if (ctx->pc != 0x289068u) { return; }
    ctx->pc = 0x289068u;
label_289068:
    // 0x289068: 0x40882d
    ctx->pc = 0x289068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28906c:
    // 0x28906c: 0x12200005
label_289070:
    if (ctx->pc == 0x289070u) {
        ctx->pc = 0x289070u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x289074u;
        goto label_289074;
    }
    ctx->pc = 0x28906Cu;
    {
        const bool branch_taken_0x28906c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x289070u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x28906c) {
            ctx->pc = 0x289084u;
            goto label_289084;
        }
    }
    ctx->pc = 0x289074u;
label_289074:
    // 0x289074: 0x8e622ae4
    ctx->pc = 0x289074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
label_289078:
    // 0x289078: 0x24420001
    ctx->pc = 0x289078u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_28907c:
    // 0x28907c: 0x10000031
label_289080:
    if (ctx->pc == 0x289080u) {
        ctx->pc = 0x289080u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        ctx->pc = 0x289084u;
        goto label_289084;
    }
    ctx->pc = 0x28907Cu;
    {
        const bool branch_taken_0x28907c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289080u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        if (branch_taken_0x28907c) {
            ctx->pc = 0x289144u;
            goto label_289144;
        }
    }
    ctx->pc = 0x289084u;
label_289084:
    // 0x289084: 0x1000002f
label_289088:
    if (ctx->pc == 0x289088u) {
        ctx->pc = 0x289088u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        ctx->pc = 0x28908Cu;
        goto label_28908c;
    }
    ctx->pc = 0x289084u;
    {
        const bool branch_taken_0x289084 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289088u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        if (branch_taken_0x289084) {
            ctx->pc = 0x289144u;
            goto label_289144;
        }
    }
    ctx->pc = 0x28908Cu;
label_28908c:
    // 0x28908c: 0x286203e8
    ctx->pc = 0x28908cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 1000));
label_289090:
    // 0x289090: 0x5440000c
label_289094:
    if (ctx->pc == 0x289094u) {
        ctx->pc = 0x289094u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
        ctx->pc = 0x289098u;
        goto label_289098;
    }
    ctx->pc = 0x289090u;
    {
        const bool branch_taken_0x289090 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x289090) {
            ctx->pc = 0x289094u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
            ctx->pc = 0x2890C4u;
            goto label_2890c4;
        }
    }
    ctx->pc = 0x289098u;
label_289098:
    // 0x289098: 0x3c020031
    ctx->pc = 0x289098u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_28909c:
    // 0x28909c: 0x8c42ffbc
    ctx->pc = 0x28909cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_2890a0:
    // 0x2890a0: 0x621021
    ctx->pc = 0x2890a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2890a4:
    // 0x2890a4: 0xae622ae4
    ctx->pc = 0x2890a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
label_2890a8:
    // 0x2890a8: 0x28420460
    ctx->pc = 0x2890a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1120));
label_2890ac:
    // 0x2890ac: 0x54400026
label_2890b0:
    if (ctx->pc == 0x2890B0u) {
        ctx->pc = 0x2890B0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
        ctx->pc = 0x2890B4u;
        goto label_2890b4;
    }
    ctx->pc = 0x2890ACu;
    {
        const bool branch_taken_0x2890ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2890ac) {
            ctx->pc = 0x2890B0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
            ctx->pc = 0x289148u;
            goto label_289148;
        }
    }
    ctx->pc = 0x2890B4u;
label_2890b4:
    // 0x2890b4: 0xae602ae4
    ctx->pc = 0x2890b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 0));
label_2890b8:
    // 0x2890b8: 0x8e622ad8
    ctx->pc = 0x2890b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10968)));
label_2890bc:
    // 0x2890bc: 0x10000021
label_2890c0:
    if (ctx->pc == 0x2890C0u) {
        ctx->pc = 0x2890C0u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        ctx->pc = 0x2890C4u;
        goto label_2890c4;
    }
    ctx->pc = 0x2890BCu;
    {
        const bool branch_taken_0x2890bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2890C0u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        if (branch_taken_0x2890bc) {
            ctx->pc = 0x289144u;
            goto label_289144;
        }
    }
    ctx->pc = 0x2890C4u;
label_2890c4:
    // 0x2890c4: 0x4600015
label_2890c8:
    if (ctx->pc == 0x2890C8u) {
        ctx->pc = 0x2890C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2890CCu;
        goto label_2890cc;
    }
    ctx->pc = 0x2890C4u;
    {
        const bool branch_taken_0x2890c4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2890C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2890c4) {
            ctx->pc = 0x28911Cu;
            goto label_28911c;
        }
    }
    ctx->pc = 0x2890CCu;
label_2890cc:
    // 0x2890cc: 0x8c42ffbc
    ctx->pc = 0x2890ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_2890d0:
    // 0x2890d0: 0x621021
    ctx->pc = 0x2890d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2890d4:
    // 0x2890d4: 0xae622ae4
    ctx->pc = 0x2890d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
label_2890d8:
    // 0x2890d8: 0x28420078
    ctx->pc = 0x2890d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 120));
label_2890dc:
    // 0x2890dc: 0x1440001a
label_2890e0:
    if (ctx->pc == 0x2890E0u) {
        ctx->pc = 0x2890E0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
        ctx->pc = 0x2890E4u;
        goto label_2890e4;
    }
    ctx->pc = 0x2890DCu;
    {
        const bool branch_taken_0x2890dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2890E0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
        if (branch_taken_0x2890dc) {
            ctx->pc = 0x289148u;
            goto label_289148;
        }
    }
    ctx->pc = 0x2890E4u;
label_2890e4:
    // 0x2890e4: 0x24020006
    ctx->pc = 0x2890e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_2890e8:
    // 0x2890e8: 0x14620006
label_2890ec:
    if (ctx->pc == 0x2890ECu) {
        ctx->pc = 0x2890ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x2890F0u;
        goto label_2890f0;
    }
    ctx->pc = 0x2890E8u;
    {
        const bool branch_taken_0x2890e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2890ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x2890e8) {
            ctx->pc = 0x289104u;
            goto label_289104;
        }
    }
    ctx->pc = 0x2890F0u;
label_2890f0:
    // 0x2890f0: 0x24020005
    ctx->pc = 0x2890f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_2890f4:
    // 0x2890f4: 0xae622ad4
    ctx->pc = 0x2890f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
label_2890f8:
    // 0x2890f8: 0x24020001
    ctx->pc = 0x2890f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2890fc:
    // 0x2890fc: 0x10000011
label_289100:
    if (ctx->pc == 0x289100u) {
        ctx->pc = 0x289100u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        ctx->pc = 0x289104u;
        goto label_289104;
    }
    ctx->pc = 0x2890FCu;
    {
        const bool branch_taken_0x2890fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289100u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        if (branch_taken_0x2890fc) {
            ctx->pc = 0x289144u;
            goto label_289144;
        }
    }
    ctx->pc = 0x289104u;
label_289104:
    // 0x289104: 0xae622ad4
    ctx->pc = 0x289104u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
label_289108:
    // 0x289108: 0x260202d
    ctx->pc = 0x289108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28910c:
    // 0x28910c: 0xc0a1a3a
label_289110:
    if (ctx->pc == 0x289110u) {
        ctx->pc = 0x289110u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x289114u;
        goto label_289114;
    }
    ctx->pc = 0x28910Cu;
    SET_GPR_U32(ctx, 31, 0x289114u);
    ctx->pc = 0x289110u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2868E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_file_entries_0x2868e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289114u; }
    }
    if (ctx->pc != 0x289114u) { return; }
    ctx->pc = 0x289114u;
label_289114:
    // 0x289114: 0x1000000b
label_289118:
    if (ctx->pc == 0x289118u) {
        ctx->pc = 0x289118u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 0));
        ctx->pc = 0x28911Cu;
        goto label_28911c;
    }
    ctx->pc = 0x289114u;
    {
        const bool branch_taken_0x289114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289118u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 0));
        if (branch_taken_0x289114) {
            ctx->pc = 0x289144u;
            goto label_289144;
        }
    }
    ctx->pc = 0x28911Cu;
label_28911c:
    // 0x28911c: 0x8e632ae4
    ctx->pc = 0x28911cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
label_289120:
    // 0x289120: 0x8c42ffbc
    ctx->pc = 0x289120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_289124:
    // 0x289124: 0x621823
    ctx->pc = 0x289124u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_289128:
    // 0x289128: 0xae632ae4
    ctx->pc = 0x289128u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 3));
label_28912c:
    // 0x28912c: 0x2863ff89
    ctx->pc = 0x28912cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 4294967177));
label_289130:
    // 0x289130: 0x50600005
label_289134:
    if (ctx->pc == 0x289134u) {
        ctx->pc = 0x289134u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
        ctx->pc = 0x289138u;
        goto label_289138;
    }
    ctx->pc = 0x289130u;
    {
        const bool branch_taken_0x289130 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x289130) {
            ctx->pc = 0x289134u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
            ctx->pc = 0x289148u;
            goto label_289148;
        }
    }
    ctx->pc = 0x289138u;
label_289138:
    // 0x289138: 0x8e622ad8
    ctx->pc = 0x289138u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10968)));
label_28913c:
    // 0x28913c: 0xae622ad4
    ctx->pc = 0x28913cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
label_289140:
    // 0x289140: 0xae602ae4
    ctx->pc = 0x289140u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 0));
label_289144:
    // 0x289144: 0x8e632ad4
    ctx->pc = 0x289144u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
label_289148:
    // 0x289148: 0x2402000b
    ctx->pc = 0x289148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
label_28914c:
    // 0x28914c: 0x54620006
label_289150:
    if (ctx->pc == 0x289150u) {
        ctx->pc = 0x289150u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
        ctx->pc = 0x289154u;
        goto label_289154;
    }
    ctx->pc = 0x28914Cu;
    {
        const bool branch_taken_0x28914c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x28914c) {
            ctx->pc = 0x289150u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
            ctx->pc = 0x289168u;
            goto label_289168;
        }
    }
    ctx->pc = 0x289154u;
label_289154:
    // 0x289154: 0x280202d
    ctx->pc = 0x289154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_289158:
    // 0x289158: 0xc0a1ab2
label_28915c:
    if (ctx->pc == 0x28915Cu) {
        ctx->pc = 0x28915Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x289160u;
        goto label_289160;
    }
    ctx->pc = 0x289158u;
    SET_GPR_U32(ctx, 31, 0x289160u);
    ctx->pc = 0x28915Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x286AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_sel_menu_0x286ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289160u; }
    }
    if (ctx->pc != 0x289160u) { return; }
    ctx->pc = 0x289160u;
label_289160:
    // 0x289160: 0x10000232
label_289164:
    if (ctx->pc == 0x289164u) {
        ctx->pc = 0x289164u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x289168u;
        goto label_289168;
    }
    ctx->pc = 0x289160u;
    {
        const bool branch_taken_0x289160 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289164u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        if (branch_taken_0x289160) {
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x289168u;
label_289168:
    // 0x289168: 0x24020006
    ctx->pc = 0x289168u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_28916c:
    // 0x28916c: 0x14620005
label_289170:
    if (ctx->pc == 0x289170u) {
        ctx->pc = 0x289170u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289174u;
        goto label_289174;
    }
    ctx->pc = 0x28916Cu;
    {
        const bool branch_taken_0x28916c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x289170u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28916c) {
            ctx->pc = 0x289184u;
            goto label_289184;
        }
    }
    ctx->pc = 0x289174u;
label_289174:
    // 0x289174: 0xc0a1ab2
label_289178:
    if (ctx->pc == 0x289178u) {
        ctx->pc = 0x289178u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x28917Cu;
        goto label_28917c;
    }
    ctx->pc = 0x289174u;
    SET_GPR_U32(ctx, 31, 0x28917Cu);
    ctx->pc = 0x289178u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x286AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_sel_menu_0x286ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28917Cu; }
    }
    if (ctx->pc != 0x28917Cu) { return; }
    ctx->pc = 0x28917Cu;
label_28917c:
    // 0x28917c: 0x1000022b
label_289180:
    if (ctx->pc == 0x289180u) {
        ctx->pc = 0x289180u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x289184u;
        goto label_289184;
    }
    ctx->pc = 0x28917Cu;
    {
        const bool branch_taken_0x28917c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289180u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        if (branch_taken_0x28917c) {
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x289184u;
label_289184:
    // 0x289184: 0xc0a1ab2
label_289188:
    if (ctx->pc == 0x289188u) {
        ctx->pc = 0x289188u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x28918Cu;
        goto label_28918c;
    }
    ctx->pc = 0x289184u;
    SET_GPR_U32(ctx, 31, 0x28918Cu);
    ctx->pc = 0x289188u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x286AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_sel_menu_0x286ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28918Cu; }
    }
    if (ctx->pc != 0x28918Cu) { return; }
    ctx->pc = 0x28918Cu;
label_28918c:
    // 0x28918c: 0x10000227
label_289190:
    if (ctx->pc == 0x289190u) {
        ctx->pc = 0x289190u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x289194u;
        goto label_289194;
    }
    ctx->pc = 0x28918Cu;
    {
        const bool branch_taken_0x28918c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289190u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        if (branch_taken_0x28918c) {
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x289194u;
label_289194:
    // 0x289194: 0x3c030035
    ctx->pc = 0x289194u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_289198:
    // 0x289198: 0x2463a620
    ctx->pc = 0x289198u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_28919c:
    // 0x28919c: 0x240200e8
    ctx->pc = 0x28919cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_2891a0:
    // 0x2891a0: 0x2821018
    ctx->pc = 0x2891a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2891a4:
    // 0x2891a4: 0x621821
    ctx->pc = 0x2891a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2891a8:
    // 0x2891a8: 0x8c62006c
    ctx->pc = 0x2891a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2891ac:
    // 0x2891ac: 0x14400005
label_2891b0:
    if (ctx->pc == 0x2891B0u) {
        ctx->pc = 0x2891B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x2891B4u;
        goto label_2891b4;
    }
    ctx->pc = 0x2891ACu;
    {
        const bool branch_taken_0x2891ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2891B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x2891ac) {
            ctx->pc = 0x2891C4u;
            goto label_2891c4;
        }
    }
    ctx->pc = 0x2891B4u;
label_2891b4:
    // 0x2891b4: 0x280202d
    ctx->pc = 0x2891b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2891b8:
    // 0x2891b8: 0xc0a18a2
label_2891bc:
    if (ctx->pc == 0x2891BCu) {
        ctx->pc = 0x2891BCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x2891C0u;
        goto label_2891c0;
    }
    ctx->pc = 0x2891B8u;
    SET_GPR_U32(ctx, 31, 0x2891C0u);
    ctx->pc = 0x2891BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x286288u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_sel_menu_0x286288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2891C0u; }
    }
    if (ctx->pc != 0x2891C0u) { return; }
    ctx->pc = 0x2891C0u;
label_2891c0:
    // 0x2891c0: 0x240300e8
    ctx->pc = 0x2891c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 232));
label_2891c4:
    // 0x2891c4: 0x2831818
    ctx->pc = 0x2891c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2891c8:
    // 0x2891c8: 0x3c020035
    ctx->pc = 0x2891c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2891cc:
    // 0x2891cc: 0x2442a620
    ctx->pc = 0x2891ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944288));
label_2891d0:
    // 0x2891d0: 0x629021
    ctx->pc = 0x2891d0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2891d4:
    // 0x2891d4: 0xc082d7e
label_2891d8:
    if (ctx->pc == 0x2891D8u) {
        ctx->pc = 0x2891D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2891DCu;
        goto label_2891dc;
    }
    ctx->pc = 0x2891D4u;
    SET_GPR_U32(ctx, 31, 0x2891DCu);
    ctx->pc = 0x2891D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_optmenu_0x20b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2891DCu; }
    }
    if (ctx->pc != 0x2891DCu) { return; }
    ctx->pc = 0x2891DCu;
label_2891dc:
    // 0x2891dc: 0x260202d
    ctx->pc = 0x2891dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2891e0:
    // 0x2891e0: 0xc0a1a3a
label_2891e4:
    if (ctx->pc == 0x2891E4u) {
        ctx->pc = 0x2891E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2891E8u;
        goto label_2891e8;
    }
    ctx->pc = 0x2891E0u;
    SET_GPR_U32(ctx, 31, 0x2891E8u);
    ctx->pc = 0x2891E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2868E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_file_entries_0x2868e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2891E8u; }
    }
    if (ctx->pc != 0x2891E8u) { return; }
    ctx->pc = 0x2891E8u;
label_2891e8:
    // 0x2891e8: 0x240202d
    ctx->pc = 0x2891e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2891ec:
    // 0x2891ec: 0xc083146
label_2891f0:
    if (ctx->pc == 0x2891F0u) {
        ctx->pc = 0x2891F0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2891F4u;
        goto label_2891f4;
    }
    ctx->pc = 0x2891ECu;
    SET_GPR_U32(ctx, 31, 0x2891F4u);
    ctx->pc = 0x2891F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_optmenu_0x20c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2891F4u; }
    }
    if (ctx->pc != 0x2891F4u) { return; }
    ctx->pc = 0x2891F4u;
label_2891f4:
    // 0x2891f4: 0xc082728
label_2891f8:
    if (ctx->pc == 0x2891F8u) {
        ctx->pc = 0x2891F8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2891FCu;
        goto label_2891fc;
    }
    ctx->pc = 0x2891F4u;
    SET_GPR_U32(ctx, 31, 0x2891FCu);
    ctx->pc = 0x2891F8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x209CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        vmu_exists_0x209ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2891FCu; }
    }
    if (ctx->pc != 0x2891FCu) { return; }
    ctx->pc = 0x2891FCu;
label_2891fc:
    // 0x2891fc: 0x2410ffff
    ctx->pc = 0x2891fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
label_289200:
    // 0x289200: 0x2102a
    ctx->pc = 0x289200u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
label_289204:
    // 0x289204: 0x202880a
    ctx->pc = 0x289204u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 16));
label_289208:
    // 0x289208: 0x280202d
    ctx->pc = 0x289208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28920c:
    // 0x28920c: 0xc0a1ab2
label_289210:
    if (ctx->pc == 0x289210u) {
        ctx->pc = 0x289210u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x289214u;
        goto label_289214;
    }
    ctx->pc = 0x28920Cu;
    SET_GPR_U32(ctx, 31, 0x289214u);
    ctx->pc = 0x289210u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x286AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_sel_menu_0x286ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289214u; }
    }
    if (ctx->pc != 0x289214u) { return; }
    ctx->pc = 0x289214u;
label_289214:
    // 0x289214: 0x16300007
label_289218:
    if (ctx->pc == 0x289218u) {
        ctx->pc = 0x289218u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1000));
        ctx->pc = 0x28921Cu;
        goto label_28921c;
    }
    ctx->pc = 0x289214u;
    {
        const bool branch_taken_0x289214 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x289218u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1000));
        if (branch_taken_0x289214) {
            ctx->pc = 0x289234u;
            goto label_289234;
        }
    }
    ctx->pc = 0x28921Cu;
label_28921c:
    // 0x28921c: 0x240202d
    ctx->pc = 0x28921cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_289220:
    // 0x289220: 0xc082c8c
label_289224:
    if (ctx->pc == 0x289224u) {
        ctx->pc = 0x289228u;
        goto label_289228;
    }
    ctx->pc = 0x289220u;
    SET_GPR_U32(ctx, 31, 0x289228u);
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289228u; }
    }
    if (ctx->pc != 0x289228u) { return; }
    ctx->pc = 0x289228u;
label_289228:
    // 0x289228: 0x2402000a
    ctx->pc = 0x289228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_28922c:
    // 0x28922c: 0x100001fe
label_289230:
    if (ctx->pc == 0x289230u) {
        ctx->pc = 0x289230u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        ctx->pc = 0x289234u;
        goto label_289234;
    }
    ctx->pc = 0x28922Cu;
    {
        const bool branch_taken_0x28922c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289230u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        if (branch_taken_0x28922c) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x289234u;
label_289234:
    // 0x289234: 0x544001fd
label_289238:
    if (ctx->pc == 0x289238u) {
        ctx->pc = 0x289238u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x28923Cu;
        goto label_28923c;
    }
    ctx->pc = 0x289234u;
    {
        const bool branch_taken_0x289234 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x289234) {
            ctx->pc = 0x289238u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x28923Cu;
label_28923c:
    // 0x28923c: 0x3c100035
    ctx->pc = 0x28923cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
label_289240:
    // 0x289240: 0x8e02a3c8
    ctx->pc = 0x289240u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294943688)));
label_289244:
    // 0x289244: 0x544001f9
label_289248:
    if (ctx->pc == 0x289248u) {
        ctx->pc = 0x289248u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x28924Cu;
        goto label_28924c;
    }
    ctx->pc = 0x289244u;
    {
        const bool branch_taken_0x289244 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x289244) {
            ctx->pc = 0x289248u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x28924Cu;
label_28924c:
    // 0x28924c: 0x240200e8
    ctx->pc = 0x28924cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_289250:
    // 0x289250: 0x2821018
    ctx->pc = 0x289250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_289254:
    // 0x289254: 0x3c040035
    ctx->pc = 0x289254u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_289258:
    // 0x289258: 0x2484a620
    ctx->pc = 0x289258u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_28925c:
    // 0x28925c: 0xc082c8c
label_289260:
    if (ctx->pc == 0x289260u) {
        ctx->pc = 0x289260u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x289264u;
        goto label_289264;
    }
    ctx->pc = 0x28925Cu;
    SET_GPR_U32(ctx, 31, 0x289264u);
    ctx->pc = 0x289260u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289264u; }
    }
    if (ctx->pc != 0x289264u) { return; }
    ctx->pc = 0x289264u;
label_289264:
    // 0x289264: 0x2402000e
    ctx->pc = 0x289264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
label_289268:
    // 0x289268: 0xae622ad4
    ctx->pc = 0x289268u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
label_28926c:
    // 0x28926c: 0x2622fc18
    ctx->pc = 0x28926cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294966296));
label_289270:
    // 0x289270: 0xae622af0
    ctx->pc = 0x289270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10992), GPR_U32(ctx, 2));
label_289274:
    // 0x289274: 0xae622af4
    ctx->pc = 0x289274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10996), GPR_U32(ctx, 2));
label_289278:
    // 0x289278: 0xae602ae4
    ctx->pc = 0x289278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 0));
label_28927c:
    // 0x28927c: 0x2402001e
    ctx->pc = 0x28927cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
label_289280:
    // 0x289280: 0x100001e9
label_289284:
    if (ctx->pc == 0x289284u) {
        ctx->pc = 0x289284u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294943688), GPR_U32(ctx, 2));
        ctx->pc = 0x289288u;
        goto label_289288;
    }
    ctx->pc = 0x289280u;
    {
        const bool branch_taken_0x289280 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289284u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294943688), GPR_U32(ctx, 2));
        if (branch_taken_0x289280) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x289288u;
label_289288:
    // 0x289288: 0x8e632ae4
    ctx->pc = 0x289288u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
label_28928c:
    // 0x28928c: 0x28620003
    ctx->pc = 0x28928cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
label_289290:
    // 0x289290: 0x50400007
label_289294:
    if (ctx->pc == 0x289294u) {
        ctx->pc = 0x289294u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x289298u;
        goto label_289298;
    }
    ctx->pc = 0x289290u;
    {
        const bool branch_taken_0x289290 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x289290) {
            ctx->pc = 0x289294u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x2892B0u;
            goto label_2892b0;
        }
    }
    ctx->pc = 0x289298u;
label_289298:
    // 0x289298: 0x1c60004d
label_28929c:
    if (ctx->pc == 0x28929Cu) {
        ctx->pc = 0x28929Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2892A0u;
        goto label_2892a0;
    }
    ctx->pc = 0x289298u;
    {
        const bool branch_taken_0x289298 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x28929Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x289298) {
            ctx->pc = 0x2893D0u;
            goto label_2893d0;
        }
    }
    ctx->pc = 0x2892A0u;
label_2892a0:
    // 0x2892a0: 0x10600007
label_2892a4:
    if (ctx->pc == 0x2892A4u) {
        ctx->pc = 0x2892A4u;
        SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
        ctx->pc = 0x2892A8u;
        goto label_2892a8;
    }
    ctx->pc = 0x2892A0u;
    {
        const bool branch_taken_0x2892a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2892A4u;
        SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
        if (branch_taken_0x2892a0) {
            ctx->pc = 0x2892C0u;
            goto label_2892c0;
        }
    }
    ctx->pc = 0x2892A8u;
label_2892a8:
    // 0x2892a8: 0x10000063
label_2892ac:
    if (ctx->pc == 0x2892ACu) {
        ctx->pc = 0x2892B0u;
        goto label_2892b0;
    }
    ctx->pc = 0x2892A8u;
    {
        const bool branch_taken_0x2892a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2892a8) {
            ctx->pc = 0x289438u;
            goto label_289438;
        }
    }
    ctx->pc = 0x2892B0u;
label_2892b0:
    // 0x2892b0: 0x1062004f
label_2892b4:
    if (ctx->pc == 0x2892B4u) {
        ctx->pc = 0x2892B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2892B8u;
        goto label_2892b8;
    }
    ctx->pc = 0x2892B0u;
    {
        const bool branch_taken_0x2892b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2892B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2892b0) {
            ctx->pc = 0x2893F0u;
            goto label_2893f0;
        }
    }
    ctx->pc = 0x2892B8u;
label_2892b8:
    // 0x2892b8: 0x1000005f
label_2892bc:
    if (ctx->pc == 0x2892BCu) {
        ctx->pc = 0x2892BCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
        ctx->pc = 0x2892C0u;
        goto label_2892c0;
    }
    ctx->pc = 0x2892B8u;
    {
        const bool branch_taken_0x2892b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2892BCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
        if (branch_taken_0x2892b8) {
            ctx->pc = 0x289438u;
            goto label_289438;
        }
    }
    ctx->pc = 0x2892C0u;
label_2892c0:
    // 0x2892c0: 0x24a51e60
    ctx->pc = 0x2892c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7776));
label_2892c4:
    // 0x2892c4: 0x8e642af0
    ctx->pc = 0x2892c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 10992)));
label_2892c8:
    // 0x2892c8: 0x42100
    ctx->pc = 0x2892c8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
label_2892cc:
    // 0x2892cc: 0x8e622aec
    ctx->pc = 0x2892ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10988)));
label_2892d0:
    // 0x2892d0: 0x24030084
    ctx->pc = 0x2892d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 132));
label_2892d4:
    // 0x2892d4: 0x431018
    ctx->pc = 0x2892d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2892d8:
    // 0x2892d8: 0x822021
    ctx->pc = 0x2892d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2892dc:
    // 0x2892dc: 0x8e622ae8
    ctx->pc = 0x2892dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10984)));
label_2892e0:
    // 0x2892e0: 0x24030210
    ctx->pc = 0x2892e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 528));
label_2892e4:
    // 0x2892e4: 0x431018
    ctx->pc = 0x2892e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2892e8:
    // 0x2892e8: 0x822021
    ctx->pc = 0x2892e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2892ec:
    // 0x2892ec: 0x852021
    ctx->pc = 0x2892ecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2892f0:
    // 0x2892f0: 0x8c820000
    ctx->pc = 0x2892f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2892f4:
    // 0x2892f4: 0x4400033
label_2892f8:
    if (ctx->pc == 0x2892F8u) {
        ctx->pc = 0x2892F8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        ctx->pc = 0x2892FCu;
        goto label_2892fc;
    }
    ctx->pc = 0x2892F4u;
    {
        const bool branch_taken_0x2892f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2892F8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x2892f4) {
            ctx->pc = 0x2893C4u;
            goto label_2893c4;
        }
    }
    ctx->pc = 0x2892FCu;
label_2892fc:
    // 0x2892fc: 0x2463a620
    ctx->pc = 0x2892fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_289300:
    // 0x289300: 0x240200e8
    ctx->pc = 0x289300u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_289304:
    // 0x289304: 0x2821018
    ctx->pc = 0x289304u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_289308:
    // 0x289308: 0x621821
    ctx->pc = 0x289308u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28930c:
    // 0x28930c: 0x8c62006c
    ctx->pc = 0x28930cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_289310:
    // 0x289310: 0x14400005
label_289314:
    if (ctx->pc == 0x289314u) {
        ctx->pc = 0x289314u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x289318u;
        goto label_289318;
    }
    ctx->pc = 0x289310u;
    {
        const bool branch_taken_0x289310 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x289314u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x289310) {
            ctx->pc = 0x289328u;
            goto label_289328;
        }
    }
    ctx->pc = 0x289318u;
label_289318:
    // 0x289318: 0x280202d
    ctx->pc = 0x289318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28931c:
    // 0x28931c: 0xc0a18a2
label_289320:
    if (ctx->pc == 0x289320u) {
        ctx->pc = 0x289320u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x289324u;
        goto label_289324;
    }
    ctx->pc = 0x28931Cu;
    SET_GPR_U32(ctx, 31, 0x289324u);
    ctx->pc = 0x289320u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x286288u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_sel_menu_0x286288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289324u; }
    }
    if (ctx->pc != 0x289324u) { return; }
    ctx->pc = 0x289324u;
label_289324:
    // 0x289324: 0x241000e8
    ctx->pc = 0x289324u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 232));
label_289328:
    // 0x289328: 0x2908018
    ctx->pc = 0x289328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28932c:
    // 0x28932c: 0x3c020035
    ctx->pc = 0x28932cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_289330:
    // 0x289330: 0x2442a620
    ctx->pc = 0x289330u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944288));
label_289334:
    // 0x289334: 0x2028021
    ctx->pc = 0x289334u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_289338:
    // 0x289338: 0xc082d7e
label_28933c:
    if (ctx->pc == 0x28933Cu) {
        ctx->pc = 0x28933Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289340u;
        goto label_289340;
    }
    ctx->pc = 0x289338u;
    SET_GPR_U32(ctx, 31, 0x289340u);
    ctx->pc = 0x28933Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_optmenu_0x20b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289340u; }
    }
    if (ctx->pc != 0x289340u) { return; }
    ctx->pc = 0x289340u;
label_289340:
    // 0x289340: 0x200202d
    ctx->pc = 0x289340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289344:
    // 0x289344: 0xc083146
label_289348:
    if (ctx->pc == 0x289348u) {
        ctx->pc = 0x289348u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28934Cu;
        goto label_28934c;
    }
    ctx->pc = 0x289344u;
    SET_GPR_U32(ctx, 31, 0x28934Cu);
    ctx->pc = 0x289348u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_optmenu_0x20c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28934Cu; }
    }
    if (ctx->pc != 0x28934Cu) { return; }
    ctx->pc = 0x28934Cu;
label_28934c:
    // 0x28934c: 0x40882d
    ctx->pc = 0x28934cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289350:
    // 0x289350: 0x240203ee
    ctx->pc = 0x289350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1006));
label_289354:
    // 0x289354: 0x12220015
label_289358:
    if (ctx->pc == 0x289358u) {
        ctx->pc = 0x289358u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1007));
        ctx->pc = 0x28935Cu;
        goto label_28935c;
    }
    ctx->pc = 0x289354u;
    {
        const bool branch_taken_0x289354 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x289358u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1007));
        if (branch_taken_0x289354) {
            ctx->pc = 0x2893ACu;
            goto label_2893ac;
        }
    }
    ctx->pc = 0x28935Cu;
label_28935c:
    // 0x28935c: 0x10400005
label_289360:
    if (ctx->pc == 0x289360u) {
        ctx->pc = 0x289360u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x289364u;
        goto label_289364;
    }
    ctx->pc = 0x28935Cu;
    {
        const bool branch_taken_0x28935c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x289360u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x28935c) {
            ctx->pc = 0x289374u;
            goto label_289374;
        }
    }
    ctx->pc = 0x289364u;
label_289364:
    // 0x289364: 0x12220006
label_289368:
    if (ctx->pc == 0x289368u) {
        ctx->pc = 0x289368u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28936Cu;
        goto label_28936c;
    }
    ctx->pc = 0x289364u;
    {
        const bool branch_taken_0x289364 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x289368u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x289364) {
            ctx->pc = 0x289380u;
            goto label_289380;
        }
    }
    ctx->pc = 0x28936Cu;
label_28936c:
    // 0x28936c: 0x1000004f
label_289370:
    if (ctx->pc == 0x289370u) {
        ctx->pc = 0x289374u;
        goto label_289374;
    }
    ctx->pc = 0x28936Cu;
    {
        const bool branch_taken_0x28936c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28936c) {
            ctx->pc = 0x2894ACu;
            goto label_2894ac;
        }
    }
    ctx->pc = 0x289374u;
label_289374:
    // 0x289374: 0x240203ef
    ctx->pc = 0x289374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1007));
label_289378:
    // 0x289378: 0x1622004c
label_28937c:
    if (ctx->pc == 0x28937Cu) {
        ctx->pc = 0x28937Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289380u;
        goto label_289380;
    }
    ctx->pc = 0x289378u;
    {
        const bool branch_taken_0x289378 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x28937Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x289378) {
            ctx->pc = 0x2894ACu;
            goto label_2894ac;
        }
    }
    ctx->pc = 0x289380u;
label_289380:
    // 0x289380: 0x240200e8
    ctx->pc = 0x289380u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_289384:
    // 0x289384: 0x2821018
    ctx->pc = 0x289384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_289388:
    // 0x289388: 0x3c040035
    ctx->pc = 0x289388u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_28938c:
    // 0x28938c: 0x2484a620
    ctx->pc = 0x28938cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_289390:
    // 0x289390: 0xc082c8c
label_289394:
    if (ctx->pc == 0x289394u) {
        ctx->pc = 0x289394u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x289398u;
        goto label_289398;
    }
    ctx->pc = 0x289390u;
    SET_GPR_U32(ctx, 31, 0x289398u);
    ctx->pc = 0x289394u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289398u; }
    }
    if (ctx->pc != 0x289398u) { return; }
    ctx->pc = 0x289398u;
label_289398:
    // 0x289398: 0x2402000d
    ctx->pc = 0x289398u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_28939c:
    // 0x28939c: 0xae622ad4
    ctx->pc = 0x28939cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
label_2893a0:
    // 0x2893a0: 0x2402ffff
    ctx->pc = 0x2893a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2893a4:
    // 0x2893a4: 0x10000040
label_2893a8:
    if (ctx->pc == 0x2893A8u) {
        ctx->pc = 0x2893A8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10996), GPR_U32(ctx, 2));
        ctx->pc = 0x2893ACu;
        goto label_2893ac;
    }
    ctx->pc = 0x2893A4u;
    {
        const bool branch_taken_0x2893a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2893A8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10996), GPR_U32(ctx, 2));
        if (branch_taken_0x2893a4) {
            ctx->pc = 0x2894A8u;
            goto label_2894a8;
        }
    }
    ctx->pc = 0x2893ACu;
label_2893ac:
    // 0x2893ac: 0x240200e8
    ctx->pc = 0x2893acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_2893b0:
    // 0x2893b0: 0x2821018
    ctx->pc = 0x2893b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2893b4:
    // 0x2893b4: 0x3c040035
    ctx->pc = 0x2893b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2893b8:
    // 0x2893b8: 0x2484a620
    ctx->pc = 0x2893b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_2893bc:
    // 0x2893bc: 0xc082c8c
label_2893c0:
    if (ctx->pc == 0x2893C0u) {
        ctx->pc = 0x2893C0u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x2893C4u;
        goto label_2893c4;
    }
    ctx->pc = 0x2893BCu;
    SET_GPR_U32(ctx, 31, 0x2893C4u);
    ctx->pc = 0x2893C0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2893C4u; }
    }
    if (ctx->pc != 0x2893C4u) { return; }
    ctx->pc = 0x2893C4u;
label_2893c4:
    // 0x2893c4: 0x24020001
    ctx->pc = 0x2893c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2893c8:
    // 0x2893c8: 0x10000037
label_2893cc:
    if (ctx->pc == 0x2893CCu) {
        ctx->pc = 0x2893CCu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        ctx->pc = 0x2893D0u;
        goto label_2893d0;
    }
    ctx->pc = 0x2893C8u;
    {
        const bool branch_taken_0x2893c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2893CCu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        if (branch_taken_0x2893c8) {
            ctx->pc = 0x2894A8u;
            goto label_2894a8;
        }
    }
    ctx->pc = 0x2893D0u;
label_2893d0:
    // 0x2893d0: 0xc09908c
label_2893d4:
    if (ctx->pc == 0x2893D4u) {
        ctx->pc = 0x2893D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2893D8u;
        goto label_2893d8;
    }
    ctx->pc = 0x2893D0u;
    SET_GPR_U32(ctx, 31, 0x2893D8u);
    ctx->pc = 0x2893D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x264230u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadGauntWorldDone_0x264230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2893D8u; }
    }
    if (ctx->pc != 0x2893D8u) { return; }
    ctx->pc = 0x2893D8u;
label_2893d8:
    // 0x2893d8: 0x10400034
label_2893dc:
    if (ctx->pc == 0x2893DCu) {
        ctx->pc = 0x2893DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2893E0u;
        goto label_2893e0;
    }
    ctx->pc = 0x2893D8u;
    {
        const bool branch_taken_0x2893d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2893DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2893d8) {
            ctx->pc = 0x2894ACu;
            goto label_2894ac;
        }
    }
    ctx->pc = 0x2893E0u;
label_2893e0:
    // 0x2893e0: 0x8e622ae4
    ctx->pc = 0x2893e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
label_2893e4:
    // 0x2893e4: 0x24420001
    ctx->pc = 0x2893e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2893e8:
    // 0x2893e8: 0x10000030
label_2893ec:
    if (ctx->pc == 0x2893ECu) {
        ctx->pc = 0x2893ECu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        ctx->pc = 0x2893F0u;
        goto label_2893f0;
    }
    ctx->pc = 0x2893E8u;
    {
        const bool branch_taken_0x2893e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2893ECu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        if (branch_taken_0x2893e8) {
            ctx->pc = 0x2894ACu;
            goto label_2894ac;
        }
    }
    ctx->pc = 0x2893F0u;
label_2893f0:
    // 0x2893f0: 0xc08c2de
label_2893f4:
    if (ctx->pc == 0x2893F4u) {
        ctx->pc = 0x2893F4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 10992)));
        ctx->pc = 0x2893F8u;
        goto label_2893f8;
    }
    ctx->pc = 0x2893F0u;
    SET_GPR_U32(ctx, 31, 0x2893F8u);
    ctx->pc = 0x2893F4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 10992)));
    ctx->pc = 0x230B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerWriteSaveFile_0x230b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2893F8u; }
    }
    if (ctx->pc != 0x2893F8u) { return; }
    ctx->pc = 0x2893F8u;
label_2893f8:
    // 0x2893f8: 0x1040000c
label_2893fc:
    if (ctx->pc == 0x2893FCu) {
        ctx->pc = 0x2893FCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 2460));
        ctx->pc = 0x289400u;
        goto label_289400;
    }
    ctx->pc = 0x2893F8u;
    {
        const bool branch_taken_0x2893f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2893FCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 2460));
        if (branch_taken_0x2893f8) {
            ctx->pc = 0x28942Cu;
            goto label_28942c;
        }
    }
    ctx->pc = 0x289400u;
label_289400:
    // 0x289400: 0x8e622ae4
    ctx->pc = 0x289400u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
label_289404:
    // 0x289404: 0x24420001
    ctx->pc = 0x289404u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_289408:
    // 0x289408: 0xae622ae4
    ctx->pc = 0x289408u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
label_28940c:
    // 0x28940c: 0x8e642ae8
    ctx->pc = 0x28940cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 10984)));
label_289410:
    // 0x289410: 0x8e652aec
    ctx->pc = 0x289410u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 10988)));
label_289414:
    // 0x289414: 0x8e662af0
    ctx->pc = 0x289414u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 10992)));
label_289418:
    // 0x289418: 0x966809aa
    ctx->pc = 0x289418u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2474)));
label_28941c:
    // 0x28941c: 0xc0828e8
label_289420:
    if (ctx->pc == 0x289420u) {
        ctx->pc = 0x289420u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x289424u;
        goto label_289424;
    }
    ctx->pc = 0x28941Cu;
    SET_GPR_U32(ctx, 31, 0x289424u);
    ctx->pc = 0x289420u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    ctx->pc = 0x20A3A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_vmu_file_0x20a3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289424u; }
    }
    if (ctx->pc != 0x289424u) { return; }
    ctx->pc = 0x289424u;
label_289424:
    // 0x289424: 0x10000021
label_289428:
    if (ctx->pc == 0x289428u) {
        ctx->pc = 0x289428u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28942Cu;
        goto label_28942c;
    }
    ctx->pc = 0x289424u;
    {
        const bool branch_taken_0x289424 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289428u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x289424) {
            ctx->pc = 0x2894ACu;
            goto label_2894ac;
        }
    }
    ctx->pc = 0x28942Cu;
label_28942c:
    // 0x28942c: 0x2402ffff
    ctx->pc = 0x28942cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_289430:
    // 0x289430: 0x1000001d
label_289434:
    if (ctx->pc == 0x289434u) {
        ctx->pc = 0x289434u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        ctx->pc = 0x289438u;
        goto label_289438;
    }
    ctx->pc = 0x289430u;
    {
        const bool branch_taken_0x289430 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289434u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
        if (branch_taken_0x289430) {
            ctx->pc = 0x2894A8u;
            goto label_2894a8;
        }
    }
    ctx->pc = 0x289438u;
label_289438:
    // 0x289438: 0x4600011
label_28943c:
    if (ctx->pc == 0x28943Cu) {
        ctx->pc = 0x28943Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x289440u;
        goto label_289440;
    }
    ctx->pc = 0x289438u;
    {
        const bool branch_taken_0x289438 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x28943Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x289438) {
            ctx->pc = 0x289480u;
            goto label_289480;
        }
    }
    ctx->pc = 0x289440u;
label_289440:
    // 0x289440: 0x8c42ffbc
    ctx->pc = 0x289440u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_289444:
    // 0x289444: 0x621021
    ctx->pc = 0x289444u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_289448:
    // 0x289448: 0xae622ae4
    ctx->pc = 0x289448u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
label_28944c:
    // 0x28944c: 0x28420078
    ctx->pc = 0x28944cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 120));
label_289450:
    // 0x289450: 0x14400016
label_289454:
    if (ctx->pc == 0x289454u) {
        ctx->pc = 0x289454u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289458u;
        goto label_289458;
    }
    ctx->pc = 0x289450u;
    {
        const bool branch_taken_0x289450 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x289454u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x289450) {
            ctx->pc = 0x2894ACu;
            goto label_2894ac;
        }
    }
    ctx->pc = 0x289458u;
label_289458:
    // 0x289458: 0xae602ae4
    ctx->pc = 0x289458u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 0));
label_28945c:
    // 0x28945c: 0x8e652ad8
    ctx->pc = 0x28945cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 10968)));
label_289460:
    // 0x289460: 0xae652ad4
    ctx->pc = 0x289460u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 5));
label_289464:
    // 0x289464: 0xc0a18a2
label_289468:
    if (ctx->pc == 0x289468u) {
        ctx->pc = 0x289468u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28946Cu;
        goto label_28946c;
    }
    ctx->pc = 0x289464u;
    SET_GPR_U32(ctx, 31, 0x28946Cu);
    ctx->pc = 0x289468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x286288u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_sel_menu_0x286288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28946Cu; }
    }
    if (ctx->pc != 0x28946Cu) { return; }
    ctx->pc = 0x28946Cu;
label_28946c:
    // 0x28946c: 0x280202d
    ctx->pc = 0x28946cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_289470:
    // 0x289470: 0xc0a1862
label_289474:
    if (ctx->pc == 0x289474u) {
        ctx->pc = 0x289474u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1005));
        ctx->pc = 0x289478u;
        goto label_289478;
    }
    ctx->pc = 0x289470u;
    SET_GPR_U32(ctx, 31, 0x289478u);
    ctx->pc = 0x289474u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1005));
    ctx->pc = 0x286188u;
    {
        const uint32_t __entryPc = ctx->pc;
        sel_set_choice_0x286188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289478u; }
    }
    if (ctx->pc != 0x289478u) { return; }
    ctx->pc = 0x289478u;
label_289478:
    // 0x289478: 0x1000000c
label_28947c:
    if (ctx->pc == 0x28947Cu) {
        ctx->pc = 0x28947Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289480u;
        goto label_289480;
    }
    ctx->pc = 0x289478u;
    {
        const bool branch_taken_0x289478 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28947Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x289478) {
            ctx->pc = 0x2894ACu;
            goto label_2894ac;
        }
    }
    ctx->pc = 0x289480u;
label_289480:
    // 0x289480: 0x8e632ae4
    ctx->pc = 0x289480u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
label_289484:
    // 0x289484: 0x8c42ffbc
    ctx->pc = 0x289484u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_289488:
    // 0x289488: 0x621823
    ctx->pc = 0x289488u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28948c:
    // 0x28948c: 0xae632ae4
    ctx->pc = 0x28948cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 3));
label_289490:
    // 0x289490: 0x2863ff89
    ctx->pc = 0x289490u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 4294967177));
label_289494:
    // 0x289494: 0x10600005
label_289498:
    if (ctx->pc == 0x289498u) {
        ctx->pc = 0x289498u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28949Cu;
        goto label_28949c;
    }
    ctx->pc = 0x289494u;
    {
        const bool branch_taken_0x289494 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x289498u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x289494) {
            ctx->pc = 0x2894ACu;
            goto label_2894ac;
        }
    }
    ctx->pc = 0x28949Cu;
label_28949c:
    // 0x28949c: 0x8e622ad8
    ctx->pc = 0x28949cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10968)));
label_2894a0:
    // 0x2894a0: 0xae622ad4
    ctx->pc = 0x2894a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
label_2894a4:
    // 0x2894a4: 0xae602ae4
    ctx->pc = 0x2894a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 0));
label_2894a8:
    // 0x2894a8: 0x280202d
    ctx->pc = 0x2894a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2894ac:
    // 0x2894ac: 0xc0a1ab2
label_2894b0:
    if (ctx->pc == 0x2894B0u) {
        ctx->pc = 0x2894B0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2894B4u;
        goto label_2894b4;
    }
    ctx->pc = 0x2894ACu;
    SET_GPR_U32(ctx, 31, 0x2894B4u);
    ctx->pc = 0x2894B0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x286AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_sel_menu_0x286ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2894B4u; }
    }
    if (ctx->pc != 0x2894B4u) { return; }
    ctx->pc = 0x2894B4u;
label_2894b4:
    // 0x2894b4: 0x1000015d
label_2894b8:
    if (ctx->pc == 0x2894B8u) {
        ctx->pc = 0x2894B8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x2894BCu;
        goto label_2894bc;
    }
    ctx->pc = 0x2894B4u;
    {
        const bool branch_taken_0x2894b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2894B8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        if (branch_taken_0x2894b4) {
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x2894BCu;
label_2894bc:
    // 0x2894bc: 0x8e632ae4
    ctx->pc = 0x2894bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10980)));
label_2894c0:
    // 0x2894c0: 0x28620002
    ctx->pc = 0x2894c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
label_2894c4:
    // 0x2894c4: 0x10400007
label_2894c8:
    if (ctx->pc == 0x2894C8u) {
        ctx->pc = 0x2894CCu;
        goto label_2894cc;
    }
    ctx->pc = 0x2894C4u;
    {
        const bool branch_taken_0x2894c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2894c4) {
            ctx->pc = 0x2894E4u;
            goto label_2894e4;
        }
    }
    ctx->pc = 0x2894CCu;
label_2894cc:
    // 0x2894cc: 0x4600005
label_2894d0:
    if (ctx->pc == 0x2894D0u) {
        ctx->pc = 0x2894D4u;
        goto label_2894d4;
    }
    ctx->pc = 0x2894CCu;
    {
        const bool branch_taken_0x2894cc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2894cc) {
            ctx->pc = 0x2894E4u;
            goto label_2894e4;
        }
    }
    ctx->pc = 0x2894D4u;
label_2894d4:
    // 0x2894d4: 0xc09d032
label_2894d8:
    if (ctx->pc == 0x2894D8u) {
        ctx->pc = 0x2894D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2894DCu;
        goto label_2894dc;
    }
    ctx->pc = 0x2894D4u;
    SET_GPR_U32(ctx, 31, 0x2894DCu);
    ctx->pc = 0x2894D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2740C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitGetName_0x2740c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2894DCu; }
    }
    if (ctx->pc != 0x2894DCu) { return; }
    ctx->pc = 0x2894DCu;
label_2894dc:
    // 0x2894dc: 0x24020002
    ctx->pc = 0x2894dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2894e0:
    // 0x2894e0: 0xae622ae4
    ctx->pc = 0x2894e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10980), GPR_U32(ctx, 2));
label_2894e4:
    // 0x2894e4: 0xc09d144
label_2894e8:
    if (ctx->pc == 0x2894E8u) {
        ctx->pc = 0x2894E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2894ECu;
        goto label_2894ec;
    }
    ctx->pc = 0x2894E4u;
    SET_GPR_U32(ctx, 31, 0x2894ECu);
    ctx->pc = 0x2894E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x274510u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoGetName_0x274510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2894ECu; }
    }
    if (ctx->pc != 0x2894ECu) { return; }
    ctx->pc = 0x2894ECu;
label_2894ec:
    // 0x2894ec: 0x1040003b
label_2894f0:
    if (ctx->pc == 0x2894F0u) {
        ctx->pc = 0x2894F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x2894F4u;
        goto label_2894f4;
    }
    ctx->pc = 0x2894ECu;
    {
        const bool branch_taken_0x2894ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2894F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x2894ec) {
            ctx->pc = 0x2895DCu;
            goto label_2895dc;
        }
    }
    ctx->pc = 0x2894F4u;
label_2894f4:
    // 0x2894f4: 0xc0a205a
label_2894f8:
    if (ctx->pc == 0x2894F8u) {
        ctx->pc = 0x2894F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2894FCu;
        goto label_2894fc;
    }
    ctx->pc = 0x2894F4u;
    SET_GPR_U32(ctx, 31, 0x2894FCu);
    ctx->pc = 0x2894F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x288168u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_player_change_0x288168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2894FCu; }
    }
    if (ctx->pc != 0x2894FCu) { return; }
    ctx->pc = 0x2894FCu;
label_2894fc:
    // 0x2894fc: 0x26641a28
    ctx->pc = 0x2894fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 6696));
label_289500:
    // 0x289500: 0x2663099c
    ctx->pc = 0x289500u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 2460));
label_289504:
    // 0x289504: 0x641025
    ctx->pc = 0x289504u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_289508:
    // 0x289508: 0x30420007
    ctx->pc = 0x289508u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
label_28950c:
    // 0x28950c: 0x10400019
label_289510:
    if (ctx->pc == 0x289510u) {
        ctx->pc = 0x289510u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 6652));
        ctx->pc = 0x289514u;
        goto label_289514;
    }
    ctx->pc = 0x28950Cu;
    {
        const bool branch_taken_0x28950c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x289510u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 6652));
        if (branch_taken_0x28950c) {
            ctx->pc = 0x289574u;
            goto label_289574;
        }
    }
    ctx->pc = 0x289514u;
label_289514:
    // 0x289514: 0x68650007
    ctx->pc = 0x289514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
label_289518:
    // 0x289518: 0x6c650000
    ctx->pc = 0x289518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
label_28951c:
    // 0x28951c: 0x6866000f
    ctx->pc = 0x28951cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
label_289520:
    // 0x289520: 0x6c660008
    ctx->pc = 0x289520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
label_289524:
    // 0x289524: 0x68670017
    ctx->pc = 0x289524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
label_289528:
    // 0x289528: 0x6c670010
    ctx->pc = 0x289528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
label_28952c:
    // 0x28952c: 0x6868001f
    ctx->pc = 0x28952cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
label_289530:
    // 0x289530: 0x6c680018
    ctx->pc = 0x289530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
label_289534:
    // 0x289534: 0xb0850007
    ctx->pc = 0x289534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_289538:
    // 0x289538: 0xb4850000
    ctx->pc = 0x289538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28953c:
    // 0x28953c: 0xb086000f
    ctx->pc = 0x28953cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_289540:
    // 0x289540: 0xb4860008
    ctx->pc = 0x289540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_289544:
    // 0x289544: 0xb0870017
    ctx->pc = 0x289544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_289548:
    // 0x289548: 0xb4870010
    ctx->pc = 0x289548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28954c:
    // 0x28954c: 0xb088001f
    ctx->pc = 0x28954cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_289550:
    // 0x289550: 0xb4880018
    ctx->pc = 0x289550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_289554:
    // 0x289554: 0x24630020
    ctx->pc = 0x289554u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
label_289558:
    // 0x289558: 0x24840020
    ctx->pc = 0x289558u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
label_28955c:
    // 0x28955c: 0x0
    ctx->pc = 0x28955cu;
    // NOP
label_289560:
    // 0x289560: 0x0
    ctx->pc = 0x289560u;
    // NOP
label_289564:
    // 0x289564: 0x1462ffeb
label_289568:
    if (ctx->pc == 0x289568u) {
        ctx->pc = 0x28956Cu;
        goto label_28956c;
    }
    ctx->pc = 0x289564u;
    {
        const bool branch_taken_0x289564 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x289564) {
            ctx->pc = 0x289514u;
            goto label_289514;
        }
    }
    ctx->pc = 0x28956Cu;
label_28956c:
    // 0x28956c: 0x10000010
label_289570:
    if (ctx->pc == 0x289570u) {
        ctx->pc = 0x289574u;
        goto label_289574;
    }
    ctx->pc = 0x28956Cu;
    {
        const bool branch_taken_0x28956c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28956c) {
            ctx->pc = 0x2895B0u;
            goto label_2895b0;
        }
    }
    ctx->pc = 0x289574u;
label_289574:
    // 0x289574: 0x24621060
    ctx->pc = 0x289574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4192));
label_289578:
    // 0x289578: 0xdc650000
    ctx->pc = 0x289578u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_28957c:
    // 0x28957c: 0xdc660008
    ctx->pc = 0x28957cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_289580:
    // 0x289580: 0xdc670010
    ctx->pc = 0x289580u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_289584:
    // 0x289584: 0xdc680018
    ctx->pc = 0x289584u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_289588:
    // 0x289588: 0xfc850000
    ctx->pc = 0x289588u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
label_28958c:
    // 0x28958c: 0xfc860008
    ctx->pc = 0x28958cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
label_289590:
    // 0x289590: 0xfc870010
    ctx->pc = 0x289590u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
label_289594:
    // 0x289594: 0xfc880018
    ctx->pc = 0x289594u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
label_289598:
    // 0x289598: 0x24630020
    ctx->pc = 0x289598u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
label_28959c:
    // 0x28959c: 0x24840020
    ctx->pc = 0x28959cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
label_2895a0:
    // 0x2895a0: 0x0
    ctx->pc = 0x2895a0u;
    // NOP
label_2895a4:
    // 0x2895a4: 0x0
    ctx->pc = 0x2895a4u;
    // NOP
label_2895a8:
    // 0x2895a8: 0x1462fff3
label_2895ac:
    if (ctx->pc == 0x2895ACu) {
        ctx->pc = 0x2895B0u;
        goto label_2895b0;
    }
    ctx->pc = 0x2895A8u;
    {
        const bool branch_taken_0x2895a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2895a8) {
            ctx->pc = 0x289578u;
            goto label_289578;
        }
    }
    ctx->pc = 0x2895B0u;
label_2895b0:
    // 0x2895b0: 0x68620007
    ctx->pc = 0x2895b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
label_2895b4:
    // 0x2895b4: 0x6c620000
    ctx->pc = 0x2895b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2895b8:
    // 0x2895b8: 0x6865000f
    ctx->pc = 0x2895b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
label_2895bc:
    // 0x2895bc: 0x6c650008
    ctx->pc = 0x2895bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2895c0:
    // 0x2895c0: 0x8c660010
    ctx->pc = 0x2895c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2895c4:
    // 0x2895c4: 0xb0820007
    ctx->pc = 0x2895c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2895c8:
    // 0x2895c8: 0xb4820000
    ctx->pc = 0x2895c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2895cc:
    // 0x2895cc: 0xb085000f
    ctx->pc = 0x2895ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2895d0:
    // 0x2895d0: 0xb4850008
    ctx->pc = 0x2895d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2895d4:
    // 0x2895d4: 0xac860010
    ctx->pc = 0x2895d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
label_2895d8:
    // 0x2895d8: 0x240200e8
    ctx->pc = 0x2895d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_2895dc:
    // 0x2895dc: 0x2821018
    ctx->pc = 0x2895dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2895e0:
    // 0x2895e0: 0x3c040035
    ctx->pc = 0x2895e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2895e4:
    // 0x2895e4: 0x2484a620
    ctx->pc = 0x2895e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_2895e8:
    // 0x2895e8: 0x442021
    ctx->pc = 0x2895e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2895ec:
    // 0x2895ec: 0xc083146
label_2895f0:
    if (ctx->pc == 0x2895F0u) {
        ctx->pc = 0x2895F0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2895F4u;
        goto label_2895f4;
    }
    ctx->pc = 0x2895ECu;
    SET_GPR_U32(ctx, 31, 0x2895F4u);
    ctx->pc = 0x2895F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_optmenu_0x20c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2895F4u; }
    }
    if (ctx->pc != 0x2895F4u) { return; }
    ctx->pc = 0x2895F4u;
label_2895f4:
    // 0x2895f4: 0x40882d
    ctx->pc = 0x2895f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2895f8:
    // 0x2895f8: 0x280202d
    ctx->pc = 0x2895f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2895fc:
    // 0x2895fc: 0xc0a1ab2
label_289600:
    if (ctx->pc == 0x289600u) {
        ctx->pc = 0x289600u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x289604u;
        goto label_289604;
    }
    ctx->pc = 0x2895FCu;
    SET_GPR_U32(ctx, 31, 0x289604u);
    ctx->pc = 0x289600u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x286AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_sel_menu_0x286ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289604u; }
    }
    if (ctx->pc != 0x289604u) { return; }
    ctx->pc = 0x289604u;
label_289604:
    // 0x289604: 0x2402ffff
    ctx->pc = 0x289604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_289608:
    // 0x289608: 0x56220108
label_28960c:
    if (ctx->pc == 0x28960Cu) {
        ctx->pc = 0x28960Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x289610u;
        goto label_289610;
    }
    ctx->pc = 0x289608u;
    {
        const bool branch_taken_0x289608 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x289608) {
            ctx->pc = 0x28960Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x289610u;
label_289610:
    // 0x289610: 0x8e622ad8
    ctx->pc = 0x289610u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10968)));
label_289614:
    // 0x289614: 0x10000104
label_289618:
    if (ctx->pc == 0x289618u) {
        ctx->pc = 0x289618u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        ctx->pc = 0x28961Cu;
        goto label_28961c;
    }
    ctx->pc = 0x289614u;
    {
        const bool branch_taken_0x289614 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289618u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        if (branch_taken_0x289614) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x28961Cu;
label_28961c:
    // 0x28961c: 0xa82d
    ctx->pc = 0x28961cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289620:
    // 0x289620: 0xb02d
    ctx->pc = 0x289620u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289624:
    // 0x289624: 0x8e700010
    ctx->pc = 0x289624u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_289628:
    // 0x289628: 0x240200e8
    ctx->pc = 0x289628u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_28962c:
    // 0x28962c: 0x2821018
    ctx->pc = 0x28962cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_289630:
    // 0x289630: 0x3c040035
    ctx->pc = 0x289630u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_289634:
    // 0x289634: 0x2484a620
    ctx->pc = 0x289634u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_289638:
    // 0x289638: 0x442021
    ctx->pc = 0x289638u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28963c:
    // 0x28963c: 0xc083146
label_289640:
    if (ctx->pc == 0x289640u) {
        ctx->pc = 0x289640u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289644u;
        goto label_289644;
    }
    ctx->pc = 0x28963Cu;
    SET_GPR_U32(ctx, 31, 0x289644u);
    ctx->pc = 0x289640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_optmenu_0x20c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289644u; }
    }
    if (ctx->pc != 0x289644u) { return; }
    ctx->pc = 0x289644u;
label_289644:
    // 0x289644: 0x40882d
    ctx->pc = 0x289644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289648:
    // 0x289648: 0x280202d
    ctx->pc = 0x289648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28964c:
    // 0x28964c: 0xc0a1ab2
label_289650:
    if (ctx->pc == 0x289650u) {
        ctx->pc = 0x289650u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x289654u;
        goto label_289654;
    }
    ctx->pc = 0x28964Cu;
    SET_GPR_U32(ctx, 31, 0x289654u);
    ctx->pc = 0x289650u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x286AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_sel_menu_0x286ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289654u; }
    }
    if (ctx->pc != 0x289654u) { return; }
    ctx->pc = 0x289654u;
label_289654:
    // 0x289654: 0x26230001
    ctx->pc = 0x289654u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
label_289658:
    // 0x289658: 0x2c62000a
    ctx->pc = 0x289658u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 10));
label_28965c:
    // 0x28965c: 0x10400040
label_289660:
    if (ctx->pc == 0x289660u) {
        ctx->pc = 0x289660u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x289664u;
        goto label_289664;
    }
    ctx->pc = 0x28965Cu;
    {
        const bool branch_taken_0x28965c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x289660u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x28965c) {
            ctx->pc = 0x289760u;
            goto label_289760;
        }
    }
    ctx->pc = 0x289664u;
label_289664:
    // 0x289664: 0x2442d800
    ctx->pc = 0x289664u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957056));
label_289668:
    // 0x289668: 0x31880
    ctx->pc = 0x289668u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_28966c:
    // 0x28966c: 0x621821
    ctx->pc = 0x28966cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_289670:
    // 0x289670: 0x8c620000
    ctx->pc = 0x289670u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_289674:
    // 0x289674: 0x400008
label_289678:
    if (ctx->pc == 0x289678u) {
        ctx->pc = 0x28967Cu;
        goto label_28967c;
    }
    ctx->pc = 0x289674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x288270u: goto label_288270;
            case 0x288274u: goto label_288274;
            case 0x288278u: goto label_288278;
            case 0x28827Cu: goto label_28827c;
            case 0x288280u: goto label_288280;
            case 0x288284u: goto label_288284;
            case 0x288288u: goto label_288288;
            case 0x28828Cu: goto label_28828c;
            case 0x288290u: goto label_288290;
            case 0x288294u: goto label_288294;
            case 0x288298u: goto label_288298;
            case 0x28829Cu: goto label_28829c;
            case 0x2882A0u: goto label_2882a0;
            case 0x2882A4u: goto label_2882a4;
            case 0x2882A8u: goto label_2882a8;
            case 0x2882ACu: goto label_2882ac;
            case 0x2882B0u: goto label_2882b0;
            case 0x2882B4u: goto label_2882b4;
            case 0x2882B8u: goto label_2882b8;
            case 0x2882BCu: goto label_2882bc;
            case 0x2882C0u: goto label_2882c0;
            case 0x2882C4u: goto label_2882c4;
            case 0x2882C8u: goto label_2882c8;
            case 0x2882CCu: goto label_2882cc;
            case 0x2882D0u: goto label_2882d0;
            case 0x2882D4u: goto label_2882d4;
            case 0x2882D8u: goto label_2882d8;
            case 0x2882DCu: goto label_2882dc;
            case 0x2882E0u: goto label_2882e0;
            case 0x2882E4u: goto label_2882e4;
            case 0x2882E8u: goto label_2882e8;
            case 0x2882ECu: goto label_2882ec;
            case 0x2882F0u: goto label_2882f0;
            case 0x2882F4u: goto label_2882f4;
            case 0x2882F8u: goto label_2882f8;
            case 0x2882FCu: goto label_2882fc;
            case 0x288300u: goto label_288300;
            case 0x288304u: goto label_288304;
            case 0x288308u: goto label_288308;
            case 0x28830Cu: goto label_28830c;
            case 0x288310u: goto label_288310;
            case 0x288314u: goto label_288314;
            case 0x288318u: goto label_288318;
            case 0x28831Cu: goto label_28831c;
            case 0x288320u: goto label_288320;
            case 0x288324u: goto label_288324;
            case 0x288328u: goto label_288328;
            case 0x28832Cu: goto label_28832c;
            case 0x288330u: goto label_288330;
            case 0x288334u: goto label_288334;
            case 0x288338u: goto label_288338;
            case 0x28833Cu: goto label_28833c;
            case 0x288340u: goto label_288340;
            case 0x288344u: goto label_288344;
            case 0x288348u: goto label_288348;
            case 0x28834Cu: goto label_28834c;
            case 0x288350u: goto label_288350;
            case 0x288354u: goto label_288354;
            case 0x288358u: goto label_288358;
            case 0x28835Cu: goto label_28835c;
            case 0x288360u: goto label_288360;
            case 0x288364u: goto label_288364;
            case 0x288368u: goto label_288368;
            case 0x28836Cu: goto label_28836c;
            case 0x288370u: goto label_288370;
            case 0x288374u: goto label_288374;
            case 0x288378u: goto label_288378;
            case 0x28837Cu: goto label_28837c;
            case 0x288380u: goto label_288380;
            case 0x288384u: goto label_288384;
            case 0x288388u: goto label_288388;
            case 0x28838Cu: goto label_28838c;
            case 0x288390u: goto label_288390;
            case 0x288394u: goto label_288394;
            case 0x288398u: goto label_288398;
            case 0x28839Cu: goto label_28839c;
            case 0x2883A0u: goto label_2883a0;
            case 0x2883A4u: goto label_2883a4;
            case 0x2883A8u: goto label_2883a8;
            case 0x2883ACu: goto label_2883ac;
            case 0x2883B0u: goto label_2883b0;
            case 0x2883B4u: goto label_2883b4;
            case 0x2883B8u: goto label_2883b8;
            case 0x2883BCu: goto label_2883bc;
            case 0x2883C0u: goto label_2883c0;
            case 0x2883C4u: goto label_2883c4;
            case 0x2883C8u: goto label_2883c8;
            case 0x2883CCu: goto label_2883cc;
            case 0x2883D0u: goto label_2883d0;
            case 0x2883D4u: goto label_2883d4;
            case 0x2883D8u: goto label_2883d8;
            case 0x2883DCu: goto label_2883dc;
            case 0x2883E0u: goto label_2883e0;
            case 0x2883E4u: goto label_2883e4;
            case 0x2883E8u: goto label_2883e8;
            case 0x2883ECu: goto label_2883ec;
            case 0x2883F0u: goto label_2883f0;
            case 0x2883F4u: goto label_2883f4;
            case 0x2883F8u: goto label_2883f8;
            case 0x2883FCu: goto label_2883fc;
            case 0x288400u: goto label_288400;
            case 0x288404u: goto label_288404;
            case 0x288408u: goto label_288408;
            case 0x28840Cu: goto label_28840c;
            case 0x288410u: goto label_288410;
            case 0x288414u: goto label_288414;
            case 0x288418u: goto label_288418;
            case 0x28841Cu: goto label_28841c;
            case 0x288420u: goto label_288420;
            case 0x288424u: goto label_288424;
            case 0x288428u: goto label_288428;
            case 0x28842Cu: goto label_28842c;
            case 0x288430u: goto label_288430;
            case 0x288434u: goto label_288434;
            case 0x288438u: goto label_288438;
            case 0x28843Cu: goto label_28843c;
            case 0x288440u: goto label_288440;
            case 0x288444u: goto label_288444;
            case 0x288448u: goto label_288448;
            case 0x28844Cu: goto label_28844c;
            case 0x288450u: goto label_288450;
            case 0x288454u: goto label_288454;
            case 0x288458u: goto label_288458;
            case 0x28845Cu: goto label_28845c;
            case 0x288460u: goto label_288460;
            case 0x288464u: goto label_288464;
            case 0x288468u: goto label_288468;
            case 0x28846Cu: goto label_28846c;
            case 0x288470u: goto label_288470;
            case 0x288474u: goto label_288474;
            case 0x288478u: goto label_288478;
            case 0x28847Cu: goto label_28847c;
            case 0x288480u: goto label_288480;
            case 0x288484u: goto label_288484;
            case 0x288488u: goto label_288488;
            case 0x28848Cu: goto label_28848c;
            case 0x288490u: goto label_288490;
            case 0x288494u: goto label_288494;
            case 0x288498u: goto label_288498;
            case 0x28849Cu: goto label_28849c;
            case 0x2884A0u: goto label_2884a0;
            case 0x2884A4u: goto label_2884a4;
            case 0x2884A8u: goto label_2884a8;
            case 0x2884ACu: goto label_2884ac;
            case 0x2884B0u: goto label_2884b0;
            case 0x2884B4u: goto label_2884b4;
            case 0x2884B8u: goto label_2884b8;
            case 0x2884BCu: goto label_2884bc;
            case 0x2884C0u: goto label_2884c0;
            case 0x2884C4u: goto label_2884c4;
            case 0x2884C8u: goto label_2884c8;
            case 0x2884CCu: goto label_2884cc;
            case 0x2884D0u: goto label_2884d0;
            case 0x2884D4u: goto label_2884d4;
            case 0x2884D8u: goto label_2884d8;
            case 0x2884DCu: goto label_2884dc;
            case 0x2884E0u: goto label_2884e0;
            case 0x2884E4u: goto label_2884e4;
            case 0x2884E8u: goto label_2884e8;
            case 0x2884ECu: goto label_2884ec;
            case 0x2884F0u: goto label_2884f0;
            case 0x2884F4u: goto label_2884f4;
            case 0x2884F8u: goto label_2884f8;
            case 0x2884FCu: goto label_2884fc;
            case 0x288500u: goto label_288500;
            case 0x288504u: goto label_288504;
            case 0x288508u: goto label_288508;
            case 0x28850Cu: goto label_28850c;
            case 0x288510u: goto label_288510;
            case 0x288514u: goto label_288514;
            case 0x288518u: goto label_288518;
            case 0x28851Cu: goto label_28851c;
            case 0x288520u: goto label_288520;
            case 0x288524u: goto label_288524;
            case 0x288528u: goto label_288528;
            case 0x28852Cu: goto label_28852c;
            case 0x288530u: goto label_288530;
            case 0x288534u: goto label_288534;
            case 0x288538u: goto label_288538;
            case 0x28853Cu: goto label_28853c;
            case 0x288540u: goto label_288540;
            case 0x288544u: goto label_288544;
            case 0x288548u: goto label_288548;
            case 0x28854Cu: goto label_28854c;
            case 0x288550u: goto label_288550;
            case 0x288554u: goto label_288554;
            case 0x288558u: goto label_288558;
            case 0x28855Cu: goto label_28855c;
            case 0x288560u: goto label_288560;
            case 0x288564u: goto label_288564;
            case 0x288568u: goto label_288568;
            case 0x28856Cu: goto label_28856c;
            case 0x288570u: goto label_288570;
            case 0x288574u: goto label_288574;
            case 0x288578u: goto label_288578;
            case 0x28857Cu: goto label_28857c;
            case 0x288580u: goto label_288580;
            case 0x288584u: goto label_288584;
            case 0x288588u: goto label_288588;
            case 0x28858Cu: goto label_28858c;
            case 0x288590u: goto label_288590;
            case 0x288594u: goto label_288594;
            case 0x288598u: goto label_288598;
            case 0x28859Cu: goto label_28859c;
            case 0x2885A0u: goto label_2885a0;
            case 0x2885A4u: goto label_2885a4;
            case 0x2885A8u: goto label_2885a8;
            case 0x2885ACu: goto label_2885ac;
            case 0x2885B0u: goto label_2885b0;
            case 0x2885B4u: goto label_2885b4;
            case 0x2885B8u: goto label_2885b8;
            case 0x2885BCu: goto label_2885bc;
            case 0x2885C0u: goto label_2885c0;
            case 0x2885C4u: goto label_2885c4;
            case 0x2885C8u: goto label_2885c8;
            case 0x2885CCu: goto label_2885cc;
            case 0x2885D0u: goto label_2885d0;
            case 0x2885D4u: goto label_2885d4;
            case 0x2885D8u: goto label_2885d8;
            case 0x2885DCu: goto label_2885dc;
            case 0x2885E0u: goto label_2885e0;
            case 0x2885E4u: goto label_2885e4;
            case 0x2885E8u: goto label_2885e8;
            case 0x2885ECu: goto label_2885ec;
            case 0x2885F0u: goto label_2885f0;
            case 0x2885F4u: goto label_2885f4;
            case 0x2885F8u: goto label_2885f8;
            case 0x2885FCu: goto label_2885fc;
            case 0x288600u: goto label_288600;
            case 0x288604u: goto label_288604;
            case 0x288608u: goto label_288608;
            case 0x28860Cu: goto label_28860c;
            case 0x288610u: goto label_288610;
            case 0x288614u: goto label_288614;
            case 0x288618u: goto label_288618;
            case 0x28861Cu: goto label_28861c;
            case 0x288620u: goto label_288620;
            case 0x288624u: goto label_288624;
            case 0x288628u: goto label_288628;
            case 0x28862Cu: goto label_28862c;
            case 0x288630u: goto label_288630;
            case 0x288634u: goto label_288634;
            case 0x288638u: goto label_288638;
            case 0x28863Cu: goto label_28863c;
            case 0x288640u: goto label_288640;
            case 0x288644u: goto label_288644;
            case 0x288648u: goto label_288648;
            case 0x28864Cu: goto label_28864c;
            case 0x288650u: goto label_288650;
            case 0x288654u: goto label_288654;
            case 0x288658u: goto label_288658;
            case 0x28865Cu: goto label_28865c;
            case 0x288660u: goto label_288660;
            case 0x288664u: goto label_288664;
            case 0x288668u: goto label_288668;
            case 0x28866Cu: goto label_28866c;
            case 0x288670u: goto label_288670;
            case 0x288674u: goto label_288674;
            case 0x288678u: goto label_288678;
            case 0x28867Cu: goto label_28867c;
            case 0x288680u: goto label_288680;
            case 0x288684u: goto label_288684;
            case 0x288688u: goto label_288688;
            case 0x28868Cu: goto label_28868c;
            case 0x288690u: goto label_288690;
            case 0x288694u: goto label_288694;
            case 0x288698u: goto label_288698;
            case 0x28869Cu: goto label_28869c;
            case 0x2886A0u: goto label_2886a0;
            case 0x2886A4u: goto label_2886a4;
            case 0x2886A8u: goto label_2886a8;
            case 0x2886ACu: goto label_2886ac;
            case 0x2886B0u: goto label_2886b0;
            case 0x2886B4u: goto label_2886b4;
            case 0x2886B8u: goto label_2886b8;
            case 0x2886BCu: goto label_2886bc;
            case 0x2886C0u: goto label_2886c0;
            case 0x2886C4u: goto label_2886c4;
            case 0x2886C8u: goto label_2886c8;
            case 0x2886CCu: goto label_2886cc;
            case 0x2886D0u: goto label_2886d0;
            case 0x2886D4u: goto label_2886d4;
            case 0x2886D8u: goto label_2886d8;
            case 0x2886DCu: goto label_2886dc;
            case 0x2886E0u: goto label_2886e0;
            case 0x2886E4u: goto label_2886e4;
            case 0x2886E8u: goto label_2886e8;
            case 0x2886ECu: goto label_2886ec;
            case 0x2886F0u: goto label_2886f0;
            case 0x2886F4u: goto label_2886f4;
            case 0x2886F8u: goto label_2886f8;
            case 0x2886FCu: goto label_2886fc;
            case 0x288700u: goto label_288700;
            case 0x288704u: goto label_288704;
            case 0x288708u: goto label_288708;
            case 0x28870Cu: goto label_28870c;
            case 0x288710u: goto label_288710;
            case 0x288714u: goto label_288714;
            case 0x288718u: goto label_288718;
            case 0x28871Cu: goto label_28871c;
            case 0x288720u: goto label_288720;
            case 0x288724u: goto label_288724;
            case 0x288728u: goto label_288728;
            case 0x28872Cu: goto label_28872c;
            case 0x288730u: goto label_288730;
            case 0x288734u: goto label_288734;
            case 0x288738u: goto label_288738;
            case 0x28873Cu: goto label_28873c;
            case 0x288740u: goto label_288740;
            case 0x288744u: goto label_288744;
            case 0x288748u: goto label_288748;
            case 0x28874Cu: goto label_28874c;
            case 0x288750u: goto label_288750;
            case 0x288754u: goto label_288754;
            case 0x288758u: goto label_288758;
            case 0x28875Cu: goto label_28875c;
            case 0x288760u: goto label_288760;
            case 0x288764u: goto label_288764;
            case 0x288768u: goto label_288768;
            case 0x28876Cu: goto label_28876c;
            case 0x288770u: goto label_288770;
            case 0x288774u: goto label_288774;
            case 0x288778u: goto label_288778;
            case 0x28877Cu: goto label_28877c;
            case 0x288780u: goto label_288780;
            case 0x288784u: goto label_288784;
            case 0x288788u: goto label_288788;
            case 0x28878Cu: goto label_28878c;
            case 0x288790u: goto label_288790;
            case 0x288794u: goto label_288794;
            case 0x288798u: goto label_288798;
            case 0x28879Cu: goto label_28879c;
            case 0x2887A0u: goto label_2887a0;
            case 0x2887A4u: goto label_2887a4;
            case 0x2887A8u: goto label_2887a8;
            case 0x2887ACu: goto label_2887ac;
            case 0x2887B0u: goto label_2887b0;
            case 0x2887B4u: goto label_2887b4;
            case 0x2887B8u: goto label_2887b8;
            case 0x2887BCu: goto label_2887bc;
            case 0x2887C0u: goto label_2887c0;
            case 0x2887C4u: goto label_2887c4;
            case 0x2887C8u: goto label_2887c8;
            case 0x2887CCu: goto label_2887cc;
            case 0x2887D0u: goto label_2887d0;
            case 0x2887D4u: goto label_2887d4;
            case 0x2887D8u: goto label_2887d8;
            case 0x2887DCu: goto label_2887dc;
            case 0x2887E0u: goto label_2887e0;
            case 0x2887E4u: goto label_2887e4;
            case 0x2887E8u: goto label_2887e8;
            case 0x2887ECu: goto label_2887ec;
            case 0x2887F0u: goto label_2887f0;
            case 0x2887F4u: goto label_2887f4;
            case 0x2887F8u: goto label_2887f8;
            case 0x2887FCu: goto label_2887fc;
            case 0x288800u: goto label_288800;
            case 0x288804u: goto label_288804;
            case 0x288808u: goto label_288808;
            case 0x28880Cu: goto label_28880c;
            case 0x288810u: goto label_288810;
            case 0x288814u: goto label_288814;
            case 0x288818u: goto label_288818;
            case 0x28881Cu: goto label_28881c;
            case 0x288820u: goto label_288820;
            case 0x288824u: goto label_288824;
            case 0x288828u: goto label_288828;
            case 0x28882Cu: goto label_28882c;
            case 0x288830u: goto label_288830;
            case 0x288834u: goto label_288834;
            case 0x288838u: goto label_288838;
            case 0x28883Cu: goto label_28883c;
            case 0x288840u: goto label_288840;
            case 0x288844u: goto label_288844;
            case 0x288848u: goto label_288848;
            case 0x28884Cu: goto label_28884c;
            case 0x288850u: goto label_288850;
            case 0x288854u: goto label_288854;
            case 0x288858u: goto label_288858;
            case 0x28885Cu: goto label_28885c;
            case 0x288860u: goto label_288860;
            case 0x288864u: goto label_288864;
            case 0x288868u: goto label_288868;
            case 0x28886Cu: goto label_28886c;
            case 0x288870u: goto label_288870;
            case 0x288874u: goto label_288874;
            case 0x288878u: goto label_288878;
            case 0x28887Cu: goto label_28887c;
            case 0x288880u: goto label_288880;
            case 0x288884u: goto label_288884;
            case 0x288888u: goto label_288888;
            case 0x28888Cu: goto label_28888c;
            case 0x288890u: goto label_288890;
            case 0x288894u: goto label_288894;
            case 0x288898u: goto label_288898;
            case 0x28889Cu: goto label_28889c;
            case 0x2888A0u: goto label_2888a0;
            case 0x2888A4u: goto label_2888a4;
            case 0x2888A8u: goto label_2888a8;
            case 0x2888ACu: goto label_2888ac;
            case 0x2888B0u: goto label_2888b0;
            case 0x2888B4u: goto label_2888b4;
            case 0x2888B8u: goto label_2888b8;
            case 0x2888BCu: goto label_2888bc;
            case 0x2888C0u: goto label_2888c0;
            case 0x2888C4u: goto label_2888c4;
            case 0x2888C8u: goto label_2888c8;
            case 0x2888CCu: goto label_2888cc;
            case 0x2888D0u: goto label_2888d0;
            case 0x2888D4u: goto label_2888d4;
            case 0x2888D8u: goto label_2888d8;
            case 0x2888DCu: goto label_2888dc;
            case 0x2888E0u: goto label_2888e0;
            case 0x2888E4u: goto label_2888e4;
            case 0x2888E8u: goto label_2888e8;
            case 0x2888ECu: goto label_2888ec;
            case 0x2888F0u: goto label_2888f0;
            case 0x2888F4u: goto label_2888f4;
            case 0x2888F8u: goto label_2888f8;
            case 0x2888FCu: goto label_2888fc;
            case 0x288900u: goto label_288900;
            case 0x288904u: goto label_288904;
            case 0x288908u: goto label_288908;
            case 0x28890Cu: goto label_28890c;
            case 0x288910u: goto label_288910;
            case 0x288914u: goto label_288914;
            case 0x288918u: goto label_288918;
            case 0x28891Cu: goto label_28891c;
            case 0x288920u: goto label_288920;
            case 0x288924u: goto label_288924;
            case 0x288928u: goto label_288928;
            case 0x28892Cu: goto label_28892c;
            case 0x288930u: goto label_288930;
            case 0x288934u: goto label_288934;
            case 0x288938u: goto label_288938;
            case 0x28893Cu: goto label_28893c;
            case 0x288940u: goto label_288940;
            case 0x288944u: goto label_288944;
            case 0x288948u: goto label_288948;
            case 0x28894Cu: goto label_28894c;
            case 0x288950u: goto label_288950;
            case 0x288954u: goto label_288954;
            case 0x288958u: goto label_288958;
            case 0x28895Cu: goto label_28895c;
            case 0x288960u: goto label_288960;
            case 0x288964u: goto label_288964;
            case 0x288968u: goto label_288968;
            case 0x28896Cu: goto label_28896c;
            case 0x288970u: goto label_288970;
            case 0x288974u: goto label_288974;
            case 0x288978u: goto label_288978;
            case 0x28897Cu: goto label_28897c;
            case 0x288980u: goto label_288980;
            case 0x288984u: goto label_288984;
            case 0x288988u: goto label_288988;
            case 0x28898Cu: goto label_28898c;
            case 0x288990u: goto label_288990;
            case 0x288994u: goto label_288994;
            case 0x288998u: goto label_288998;
            case 0x28899Cu: goto label_28899c;
            case 0x2889A0u: goto label_2889a0;
            case 0x2889A4u: goto label_2889a4;
            case 0x2889A8u: goto label_2889a8;
            case 0x2889ACu: goto label_2889ac;
            case 0x2889B0u: goto label_2889b0;
            case 0x2889B4u: goto label_2889b4;
            case 0x2889B8u: goto label_2889b8;
            case 0x2889BCu: goto label_2889bc;
            case 0x2889C0u: goto label_2889c0;
            case 0x2889C4u: goto label_2889c4;
            case 0x2889C8u: goto label_2889c8;
            case 0x2889CCu: goto label_2889cc;
            case 0x2889D0u: goto label_2889d0;
            case 0x2889D4u: goto label_2889d4;
            case 0x2889D8u: goto label_2889d8;
            case 0x2889DCu: goto label_2889dc;
            case 0x2889E0u: goto label_2889e0;
            case 0x2889E4u: goto label_2889e4;
            case 0x2889E8u: goto label_2889e8;
            case 0x2889ECu: goto label_2889ec;
            case 0x2889F0u: goto label_2889f0;
            case 0x2889F4u: goto label_2889f4;
            case 0x2889F8u: goto label_2889f8;
            case 0x2889FCu: goto label_2889fc;
            case 0x288A00u: goto label_288a00;
            case 0x288A04u: goto label_288a04;
            case 0x288A08u: goto label_288a08;
            case 0x288A0Cu: goto label_288a0c;
            case 0x288A10u: goto label_288a10;
            case 0x288A14u: goto label_288a14;
            case 0x288A18u: goto label_288a18;
            case 0x288A1Cu: goto label_288a1c;
            case 0x288A20u: goto label_288a20;
            case 0x288A24u: goto label_288a24;
            case 0x288A28u: goto label_288a28;
            case 0x288A2Cu: goto label_288a2c;
            case 0x288A30u: goto label_288a30;
            case 0x288A34u: goto label_288a34;
            case 0x288A38u: goto label_288a38;
            case 0x288A3Cu: goto label_288a3c;
            case 0x288A40u: goto label_288a40;
            case 0x288A44u: goto label_288a44;
            case 0x288A48u: goto label_288a48;
            case 0x288A4Cu: goto label_288a4c;
            case 0x288A50u: goto label_288a50;
            case 0x288A54u: goto label_288a54;
            case 0x288A58u: goto label_288a58;
            case 0x288A5Cu: goto label_288a5c;
            case 0x288A60u: goto label_288a60;
            case 0x288A64u: goto label_288a64;
            case 0x288A68u: goto label_288a68;
            case 0x288A6Cu: goto label_288a6c;
            case 0x288A70u: goto label_288a70;
            case 0x288A74u: goto label_288a74;
            case 0x288A78u: goto label_288a78;
            case 0x288A7Cu: goto label_288a7c;
            case 0x288A80u: goto label_288a80;
            case 0x288A84u: goto label_288a84;
            case 0x288A88u: goto label_288a88;
            case 0x288A8Cu: goto label_288a8c;
            case 0x288A90u: goto label_288a90;
            case 0x288A94u: goto label_288a94;
            case 0x288A98u: goto label_288a98;
            case 0x288A9Cu: goto label_288a9c;
            case 0x288AA0u: goto label_288aa0;
            case 0x288AA4u: goto label_288aa4;
            case 0x288AA8u: goto label_288aa8;
            case 0x288AACu: goto label_288aac;
            case 0x288AB0u: goto label_288ab0;
            case 0x288AB4u: goto label_288ab4;
            case 0x288AB8u: goto label_288ab8;
            case 0x288ABCu: goto label_288abc;
            case 0x288AC0u: goto label_288ac0;
            case 0x288AC4u: goto label_288ac4;
            case 0x288AC8u: goto label_288ac8;
            case 0x288ACCu: goto label_288acc;
            case 0x288AD0u: goto label_288ad0;
            case 0x288AD4u: goto label_288ad4;
            case 0x288AD8u: goto label_288ad8;
            case 0x288ADCu: goto label_288adc;
            case 0x288AE0u: goto label_288ae0;
            case 0x288AE4u: goto label_288ae4;
            case 0x288AE8u: goto label_288ae8;
            case 0x288AECu: goto label_288aec;
            case 0x288AF0u: goto label_288af0;
            case 0x288AF4u: goto label_288af4;
            case 0x288AF8u: goto label_288af8;
            case 0x288AFCu: goto label_288afc;
            case 0x288B00u: goto label_288b00;
            case 0x288B04u: goto label_288b04;
            case 0x288B08u: goto label_288b08;
            case 0x288B0Cu: goto label_288b0c;
            case 0x288B10u: goto label_288b10;
            case 0x288B14u: goto label_288b14;
            case 0x288B18u: goto label_288b18;
            case 0x288B1Cu: goto label_288b1c;
            case 0x288B20u: goto label_288b20;
            case 0x288B24u: goto label_288b24;
            case 0x288B28u: goto label_288b28;
            case 0x288B2Cu: goto label_288b2c;
            case 0x288B30u: goto label_288b30;
            case 0x288B34u: goto label_288b34;
            case 0x288B38u: goto label_288b38;
            case 0x288B3Cu: goto label_288b3c;
            case 0x288B40u: goto label_288b40;
            case 0x288B44u: goto label_288b44;
            case 0x288B48u: goto label_288b48;
            case 0x288B4Cu: goto label_288b4c;
            case 0x288B50u: goto label_288b50;
            case 0x288B54u: goto label_288b54;
            case 0x288B58u: goto label_288b58;
            case 0x288B5Cu: goto label_288b5c;
            case 0x288B60u: goto label_288b60;
            case 0x288B64u: goto label_288b64;
            case 0x288B68u: goto label_288b68;
            case 0x288B6Cu: goto label_288b6c;
            case 0x288B70u: goto label_288b70;
            case 0x288B74u: goto label_288b74;
            case 0x288B78u: goto label_288b78;
            case 0x288B7Cu: goto label_288b7c;
            case 0x288B80u: goto label_288b80;
            case 0x288B84u: goto label_288b84;
            case 0x288B88u: goto label_288b88;
            case 0x288B8Cu: goto label_288b8c;
            case 0x288B90u: goto label_288b90;
            case 0x288B94u: goto label_288b94;
            case 0x288B98u: goto label_288b98;
            case 0x288B9Cu: goto label_288b9c;
            case 0x288BA0u: goto label_288ba0;
            case 0x288BA4u: goto label_288ba4;
            case 0x288BA8u: goto label_288ba8;
            case 0x288BACu: goto label_288bac;
            case 0x288BB0u: goto label_288bb0;
            case 0x288BB4u: goto label_288bb4;
            case 0x288BB8u: goto label_288bb8;
            case 0x288BBCu: goto label_288bbc;
            case 0x288BC0u: goto label_288bc0;
            case 0x288BC4u: goto label_288bc4;
            case 0x288BC8u: goto label_288bc8;
            case 0x288BCCu: goto label_288bcc;
            case 0x288BD0u: goto label_288bd0;
            case 0x288BD4u: goto label_288bd4;
            case 0x288BD8u: goto label_288bd8;
            case 0x288BDCu: goto label_288bdc;
            case 0x288BE0u: goto label_288be0;
            case 0x288BE4u: goto label_288be4;
            case 0x288BE8u: goto label_288be8;
            case 0x288BECu: goto label_288bec;
            case 0x288BF0u: goto label_288bf0;
            case 0x288BF4u: goto label_288bf4;
            case 0x288BF8u: goto label_288bf8;
            case 0x288BFCu: goto label_288bfc;
            case 0x288C00u: goto label_288c00;
            case 0x288C04u: goto label_288c04;
            case 0x288C08u: goto label_288c08;
            case 0x288C0Cu: goto label_288c0c;
            case 0x288C10u: goto label_288c10;
            case 0x288C14u: goto label_288c14;
            case 0x288C18u: goto label_288c18;
            case 0x288C1Cu: goto label_288c1c;
            case 0x288C20u: goto label_288c20;
            case 0x288C24u: goto label_288c24;
            case 0x288C28u: goto label_288c28;
            case 0x288C2Cu: goto label_288c2c;
            case 0x288C30u: goto label_288c30;
            case 0x288C34u: goto label_288c34;
            case 0x288C38u: goto label_288c38;
            case 0x288C3Cu: goto label_288c3c;
            case 0x288C40u: goto label_288c40;
            case 0x288C44u: goto label_288c44;
            case 0x288C48u: goto label_288c48;
            case 0x288C4Cu: goto label_288c4c;
            case 0x288C50u: goto label_288c50;
            case 0x288C54u: goto label_288c54;
            case 0x288C58u: goto label_288c58;
            case 0x288C5Cu: goto label_288c5c;
            case 0x288C60u: goto label_288c60;
            case 0x288C64u: goto label_288c64;
            case 0x288C68u: goto label_288c68;
            case 0x288C6Cu: goto label_288c6c;
            case 0x288C70u: goto label_288c70;
            case 0x288C74u: goto label_288c74;
            case 0x288C78u: goto label_288c78;
            case 0x288C7Cu: goto label_288c7c;
            case 0x288C80u: goto label_288c80;
            case 0x288C84u: goto label_288c84;
            case 0x288C88u: goto label_288c88;
            case 0x288C8Cu: goto label_288c8c;
            case 0x288C90u: goto label_288c90;
            case 0x288C94u: goto label_288c94;
            case 0x288C98u: goto label_288c98;
            case 0x288C9Cu: goto label_288c9c;
            case 0x288CA0u: goto label_288ca0;
            case 0x288CA4u: goto label_288ca4;
            case 0x288CA8u: goto label_288ca8;
            case 0x288CACu: goto label_288cac;
            case 0x288CB0u: goto label_288cb0;
            case 0x288CB4u: goto label_288cb4;
            case 0x288CB8u: goto label_288cb8;
            case 0x288CBCu: goto label_288cbc;
            case 0x288CC0u: goto label_288cc0;
            case 0x288CC4u: goto label_288cc4;
            case 0x288CC8u: goto label_288cc8;
            case 0x288CCCu: goto label_288ccc;
            case 0x288CD0u: goto label_288cd0;
            case 0x288CD4u: goto label_288cd4;
            case 0x288CD8u: goto label_288cd8;
            case 0x288CDCu: goto label_288cdc;
            case 0x288CE0u: goto label_288ce0;
            case 0x288CE4u: goto label_288ce4;
            case 0x288CE8u: goto label_288ce8;
            case 0x288CECu: goto label_288cec;
            case 0x288CF0u: goto label_288cf0;
            case 0x288CF4u: goto label_288cf4;
            case 0x288CF8u: goto label_288cf8;
            case 0x288CFCu: goto label_288cfc;
            case 0x288D00u: goto label_288d00;
            case 0x288D04u: goto label_288d04;
            case 0x288D08u: goto label_288d08;
            case 0x288D0Cu: goto label_288d0c;
            case 0x288D10u: goto label_288d10;
            case 0x288D14u: goto label_288d14;
            case 0x288D18u: goto label_288d18;
            case 0x288D1Cu: goto label_288d1c;
            case 0x288D20u: goto label_288d20;
            case 0x288D24u: goto label_288d24;
            case 0x288D28u: goto label_288d28;
            case 0x288D2Cu: goto label_288d2c;
            case 0x288D30u: goto label_288d30;
            case 0x288D34u: goto label_288d34;
            case 0x288D38u: goto label_288d38;
            case 0x288D3Cu: goto label_288d3c;
            case 0x288D40u: goto label_288d40;
            case 0x288D44u: goto label_288d44;
            case 0x288D48u: goto label_288d48;
            case 0x288D4Cu: goto label_288d4c;
            case 0x288D50u: goto label_288d50;
            case 0x288D54u: goto label_288d54;
            case 0x288D58u: goto label_288d58;
            case 0x288D5Cu: goto label_288d5c;
            case 0x288D60u: goto label_288d60;
            case 0x288D64u: goto label_288d64;
            case 0x288D68u: goto label_288d68;
            case 0x288D6Cu: goto label_288d6c;
            case 0x288D70u: goto label_288d70;
            case 0x288D74u: goto label_288d74;
            case 0x288D78u: goto label_288d78;
            case 0x288D7Cu: goto label_288d7c;
            case 0x288D80u: goto label_288d80;
            case 0x288D84u: goto label_288d84;
            case 0x288D88u: goto label_288d88;
            case 0x288D8Cu: goto label_288d8c;
            case 0x288D90u: goto label_288d90;
            case 0x288D94u: goto label_288d94;
            case 0x288D98u: goto label_288d98;
            case 0x288D9Cu: goto label_288d9c;
            case 0x288DA0u: goto label_288da0;
            case 0x288DA4u: goto label_288da4;
            case 0x288DA8u: goto label_288da8;
            case 0x288DACu: goto label_288dac;
            case 0x288DB0u: goto label_288db0;
            case 0x288DB4u: goto label_288db4;
            case 0x288DB8u: goto label_288db8;
            case 0x288DBCu: goto label_288dbc;
            case 0x288DC0u: goto label_288dc0;
            case 0x288DC4u: goto label_288dc4;
            case 0x288DC8u: goto label_288dc8;
            case 0x288DCCu: goto label_288dcc;
            case 0x288DD0u: goto label_288dd0;
            case 0x288DD4u: goto label_288dd4;
            case 0x288DD8u: goto label_288dd8;
            case 0x288DDCu: goto label_288ddc;
            case 0x288DE0u: goto label_288de0;
            case 0x288DE4u: goto label_288de4;
            case 0x288DE8u: goto label_288de8;
            case 0x288DECu: goto label_288dec;
            case 0x288DF0u: goto label_288df0;
            case 0x288DF4u: goto label_288df4;
            case 0x288DF8u: goto label_288df8;
            case 0x288DFCu: goto label_288dfc;
            case 0x288E00u: goto label_288e00;
            case 0x288E04u: goto label_288e04;
            case 0x288E08u: goto label_288e08;
            case 0x288E0Cu: goto label_288e0c;
            case 0x288E10u: goto label_288e10;
            case 0x288E14u: goto label_288e14;
            case 0x288E18u: goto label_288e18;
            case 0x288E1Cu: goto label_288e1c;
            case 0x288E20u: goto label_288e20;
            case 0x288E24u: goto label_288e24;
            case 0x288E28u: goto label_288e28;
            case 0x288E2Cu: goto label_288e2c;
            case 0x288E30u: goto label_288e30;
            case 0x288E34u: goto label_288e34;
            case 0x288E38u: goto label_288e38;
            case 0x288E3Cu: goto label_288e3c;
            case 0x288E40u: goto label_288e40;
            case 0x288E44u: goto label_288e44;
            case 0x288E48u: goto label_288e48;
            case 0x288E4Cu: goto label_288e4c;
            case 0x288E50u: goto label_288e50;
            case 0x288E54u: goto label_288e54;
            case 0x288E58u: goto label_288e58;
            case 0x288E5Cu: goto label_288e5c;
            case 0x288E60u: goto label_288e60;
            case 0x288E64u: goto label_288e64;
            case 0x288E68u: goto label_288e68;
            case 0x288E6Cu: goto label_288e6c;
            case 0x288E70u: goto label_288e70;
            case 0x288E74u: goto label_288e74;
            case 0x288E78u: goto label_288e78;
            case 0x288E7Cu: goto label_288e7c;
            case 0x288E80u: goto label_288e80;
            case 0x288E84u: goto label_288e84;
            case 0x288E88u: goto label_288e88;
            case 0x288E8Cu: goto label_288e8c;
            case 0x288E90u: goto label_288e90;
            case 0x288E94u: goto label_288e94;
            case 0x288E98u: goto label_288e98;
            case 0x288E9Cu: goto label_288e9c;
            case 0x288EA0u: goto label_288ea0;
            case 0x288EA4u: goto label_288ea4;
            case 0x288EA8u: goto label_288ea8;
            case 0x288EACu: goto label_288eac;
            case 0x288EB0u: goto label_288eb0;
            case 0x288EB4u: goto label_288eb4;
            case 0x288EB8u: goto label_288eb8;
            case 0x288EBCu: goto label_288ebc;
            case 0x288EC0u: goto label_288ec0;
            case 0x288EC4u: goto label_288ec4;
            case 0x288EC8u: goto label_288ec8;
            case 0x288ECCu: goto label_288ecc;
            case 0x288ED0u: goto label_288ed0;
            case 0x288ED4u: goto label_288ed4;
            case 0x288ED8u: goto label_288ed8;
            case 0x288EDCu: goto label_288edc;
            case 0x288EE0u: goto label_288ee0;
            case 0x288EE4u: goto label_288ee4;
            case 0x288EE8u: goto label_288ee8;
            case 0x288EECu: goto label_288eec;
            case 0x288EF0u: goto label_288ef0;
            case 0x288EF4u: goto label_288ef4;
            case 0x288EF8u: goto label_288ef8;
            case 0x288EFCu: goto label_288efc;
            case 0x288F00u: goto label_288f00;
            case 0x288F04u: goto label_288f04;
            case 0x288F08u: goto label_288f08;
            case 0x288F0Cu: goto label_288f0c;
            case 0x288F10u: goto label_288f10;
            case 0x288F14u: goto label_288f14;
            case 0x288F18u: goto label_288f18;
            case 0x288F1Cu: goto label_288f1c;
            case 0x288F20u: goto label_288f20;
            case 0x288F24u: goto label_288f24;
            case 0x288F28u: goto label_288f28;
            case 0x288F2Cu: goto label_288f2c;
            case 0x288F30u: goto label_288f30;
            case 0x288F34u: goto label_288f34;
            case 0x288F38u: goto label_288f38;
            case 0x288F3Cu: goto label_288f3c;
            case 0x288F40u: goto label_288f40;
            case 0x288F44u: goto label_288f44;
            case 0x288F48u: goto label_288f48;
            case 0x288F4Cu: goto label_288f4c;
            case 0x288F50u: goto label_288f50;
            case 0x288F54u: goto label_288f54;
            case 0x288F58u: goto label_288f58;
            case 0x288F5Cu: goto label_288f5c;
            case 0x288F60u: goto label_288f60;
            case 0x288F64u: goto label_288f64;
            case 0x288F68u: goto label_288f68;
            case 0x288F6Cu: goto label_288f6c;
            case 0x288F70u: goto label_288f70;
            case 0x288F74u: goto label_288f74;
            case 0x288F78u: goto label_288f78;
            case 0x288F7Cu: goto label_288f7c;
            case 0x288F80u: goto label_288f80;
            case 0x288F84u: goto label_288f84;
            case 0x288F88u: goto label_288f88;
            case 0x288F8Cu: goto label_288f8c;
            case 0x288F90u: goto label_288f90;
            case 0x288F94u: goto label_288f94;
            case 0x288F98u: goto label_288f98;
            case 0x288F9Cu: goto label_288f9c;
            case 0x288FA0u: goto label_288fa0;
            case 0x288FA4u: goto label_288fa4;
            case 0x288FA8u: goto label_288fa8;
            case 0x288FACu: goto label_288fac;
            case 0x288FB0u: goto label_288fb0;
            case 0x288FB4u: goto label_288fb4;
            case 0x288FB8u: goto label_288fb8;
            case 0x288FBCu: goto label_288fbc;
            case 0x288FC0u: goto label_288fc0;
            case 0x288FC4u: goto label_288fc4;
            case 0x288FC8u: goto label_288fc8;
            case 0x288FCCu: goto label_288fcc;
            case 0x288FD0u: goto label_288fd0;
            case 0x288FD4u: goto label_288fd4;
            case 0x288FD8u: goto label_288fd8;
            case 0x288FDCu: goto label_288fdc;
            case 0x288FE0u: goto label_288fe0;
            case 0x288FE4u: goto label_288fe4;
            case 0x288FE8u: goto label_288fe8;
            case 0x288FECu: goto label_288fec;
            case 0x288FF0u: goto label_288ff0;
            case 0x288FF4u: goto label_288ff4;
            case 0x288FF8u: goto label_288ff8;
            case 0x288FFCu: goto label_288ffc;
            case 0x289000u: goto label_289000;
            case 0x289004u: goto label_289004;
            case 0x289008u: goto label_289008;
            case 0x28900Cu: goto label_28900c;
            case 0x289010u: goto label_289010;
            case 0x289014u: goto label_289014;
            case 0x289018u: goto label_289018;
            case 0x28901Cu: goto label_28901c;
            case 0x289020u: goto label_289020;
            case 0x289024u: goto label_289024;
            case 0x289028u: goto label_289028;
            case 0x28902Cu: goto label_28902c;
            case 0x289030u: goto label_289030;
            case 0x289034u: goto label_289034;
            case 0x289038u: goto label_289038;
            case 0x28903Cu: goto label_28903c;
            case 0x289040u: goto label_289040;
            case 0x289044u: goto label_289044;
            case 0x289048u: goto label_289048;
            case 0x28904Cu: goto label_28904c;
            case 0x289050u: goto label_289050;
            case 0x289054u: goto label_289054;
            case 0x289058u: goto label_289058;
            case 0x28905Cu: goto label_28905c;
            case 0x289060u: goto label_289060;
            case 0x289064u: goto label_289064;
            case 0x289068u: goto label_289068;
            case 0x28906Cu: goto label_28906c;
            case 0x289070u: goto label_289070;
            case 0x289074u: goto label_289074;
            case 0x289078u: goto label_289078;
            case 0x28907Cu: goto label_28907c;
            case 0x289080u: goto label_289080;
            case 0x289084u: goto label_289084;
            case 0x289088u: goto label_289088;
            case 0x28908Cu: goto label_28908c;
            case 0x289090u: goto label_289090;
            case 0x289094u: goto label_289094;
            case 0x289098u: goto label_289098;
            case 0x28909Cu: goto label_28909c;
            case 0x2890A0u: goto label_2890a0;
            case 0x2890A4u: goto label_2890a4;
            case 0x2890A8u: goto label_2890a8;
            case 0x2890ACu: goto label_2890ac;
            case 0x2890B0u: goto label_2890b0;
            case 0x2890B4u: goto label_2890b4;
            case 0x2890B8u: goto label_2890b8;
            case 0x2890BCu: goto label_2890bc;
            case 0x2890C0u: goto label_2890c0;
            case 0x2890C4u: goto label_2890c4;
            case 0x2890C8u: goto label_2890c8;
            case 0x2890CCu: goto label_2890cc;
            case 0x2890D0u: goto label_2890d0;
            case 0x2890D4u: goto label_2890d4;
            case 0x2890D8u: goto label_2890d8;
            case 0x2890DCu: goto label_2890dc;
            case 0x2890E0u: goto label_2890e0;
            case 0x2890E4u: goto label_2890e4;
            case 0x2890E8u: goto label_2890e8;
            case 0x2890ECu: goto label_2890ec;
            case 0x2890F0u: goto label_2890f0;
            case 0x2890F4u: goto label_2890f4;
            case 0x2890F8u: goto label_2890f8;
            case 0x2890FCu: goto label_2890fc;
            case 0x289100u: goto label_289100;
            case 0x289104u: goto label_289104;
            case 0x289108u: goto label_289108;
            case 0x28910Cu: goto label_28910c;
            case 0x289110u: goto label_289110;
            case 0x289114u: goto label_289114;
            case 0x289118u: goto label_289118;
            case 0x28911Cu: goto label_28911c;
            case 0x289120u: goto label_289120;
            case 0x289124u: goto label_289124;
            case 0x289128u: goto label_289128;
            case 0x28912Cu: goto label_28912c;
            case 0x289130u: goto label_289130;
            case 0x289134u: goto label_289134;
            case 0x289138u: goto label_289138;
            case 0x28913Cu: goto label_28913c;
            case 0x289140u: goto label_289140;
            case 0x289144u: goto label_289144;
            case 0x289148u: goto label_289148;
            case 0x28914Cu: goto label_28914c;
            case 0x289150u: goto label_289150;
            case 0x289154u: goto label_289154;
            case 0x289158u: goto label_289158;
            case 0x28915Cu: goto label_28915c;
            case 0x289160u: goto label_289160;
            case 0x289164u: goto label_289164;
            case 0x289168u: goto label_289168;
            case 0x28916Cu: goto label_28916c;
            case 0x289170u: goto label_289170;
            case 0x289174u: goto label_289174;
            case 0x289178u: goto label_289178;
            case 0x28917Cu: goto label_28917c;
            case 0x289180u: goto label_289180;
            case 0x289184u: goto label_289184;
            case 0x289188u: goto label_289188;
            case 0x28918Cu: goto label_28918c;
            case 0x289190u: goto label_289190;
            case 0x289194u: goto label_289194;
            case 0x289198u: goto label_289198;
            case 0x28919Cu: goto label_28919c;
            case 0x2891A0u: goto label_2891a0;
            case 0x2891A4u: goto label_2891a4;
            case 0x2891A8u: goto label_2891a8;
            case 0x2891ACu: goto label_2891ac;
            case 0x2891B0u: goto label_2891b0;
            case 0x2891B4u: goto label_2891b4;
            case 0x2891B8u: goto label_2891b8;
            case 0x2891BCu: goto label_2891bc;
            case 0x2891C0u: goto label_2891c0;
            case 0x2891C4u: goto label_2891c4;
            case 0x2891C8u: goto label_2891c8;
            case 0x2891CCu: goto label_2891cc;
            case 0x2891D0u: goto label_2891d0;
            case 0x2891D4u: goto label_2891d4;
            case 0x2891D8u: goto label_2891d8;
            case 0x2891DCu: goto label_2891dc;
            case 0x2891E0u: goto label_2891e0;
            case 0x2891E4u: goto label_2891e4;
            case 0x2891E8u: goto label_2891e8;
            case 0x2891ECu: goto label_2891ec;
            case 0x2891F0u: goto label_2891f0;
            case 0x2891F4u: goto label_2891f4;
            case 0x2891F8u: goto label_2891f8;
            case 0x2891FCu: goto label_2891fc;
            case 0x289200u: goto label_289200;
            case 0x289204u: goto label_289204;
            case 0x289208u: goto label_289208;
            case 0x28920Cu: goto label_28920c;
            case 0x289210u: goto label_289210;
            case 0x289214u: goto label_289214;
            case 0x289218u: goto label_289218;
            case 0x28921Cu: goto label_28921c;
            case 0x289220u: goto label_289220;
            case 0x289224u: goto label_289224;
            case 0x289228u: goto label_289228;
            case 0x28922Cu: goto label_28922c;
            case 0x289230u: goto label_289230;
            case 0x289234u: goto label_289234;
            case 0x289238u: goto label_289238;
            case 0x28923Cu: goto label_28923c;
            case 0x289240u: goto label_289240;
            case 0x289244u: goto label_289244;
            case 0x289248u: goto label_289248;
            case 0x28924Cu: goto label_28924c;
            case 0x289250u: goto label_289250;
            case 0x289254u: goto label_289254;
            case 0x289258u: goto label_289258;
            case 0x28925Cu: goto label_28925c;
            case 0x289260u: goto label_289260;
            case 0x289264u: goto label_289264;
            case 0x289268u: goto label_289268;
            case 0x28926Cu: goto label_28926c;
            case 0x289270u: goto label_289270;
            case 0x289274u: goto label_289274;
            case 0x289278u: goto label_289278;
            case 0x28927Cu: goto label_28927c;
            case 0x289280u: goto label_289280;
            case 0x289284u: goto label_289284;
            case 0x289288u: goto label_289288;
            case 0x28928Cu: goto label_28928c;
            case 0x289290u: goto label_289290;
            case 0x289294u: goto label_289294;
            case 0x289298u: goto label_289298;
            case 0x28929Cu: goto label_28929c;
            case 0x2892A0u: goto label_2892a0;
            case 0x2892A4u: goto label_2892a4;
            case 0x2892A8u: goto label_2892a8;
            case 0x2892ACu: goto label_2892ac;
            case 0x2892B0u: goto label_2892b0;
            case 0x2892B4u: goto label_2892b4;
            case 0x2892B8u: goto label_2892b8;
            case 0x2892BCu: goto label_2892bc;
            case 0x2892C0u: goto label_2892c0;
            case 0x2892C4u: goto label_2892c4;
            case 0x2892C8u: goto label_2892c8;
            case 0x2892CCu: goto label_2892cc;
            case 0x2892D0u: goto label_2892d0;
            case 0x2892D4u: goto label_2892d4;
            case 0x2892D8u: goto label_2892d8;
            case 0x2892DCu: goto label_2892dc;
            case 0x2892E0u: goto label_2892e0;
            case 0x2892E4u: goto label_2892e4;
            case 0x2892E8u: goto label_2892e8;
            case 0x2892ECu: goto label_2892ec;
            case 0x2892F0u: goto label_2892f0;
            case 0x2892F4u: goto label_2892f4;
            case 0x2892F8u: goto label_2892f8;
            case 0x2892FCu: goto label_2892fc;
            case 0x289300u: goto label_289300;
            case 0x289304u: goto label_289304;
            case 0x289308u: goto label_289308;
            case 0x28930Cu: goto label_28930c;
            case 0x289310u: goto label_289310;
            case 0x289314u: goto label_289314;
            case 0x289318u: goto label_289318;
            case 0x28931Cu: goto label_28931c;
            case 0x289320u: goto label_289320;
            case 0x289324u: goto label_289324;
            case 0x289328u: goto label_289328;
            case 0x28932Cu: goto label_28932c;
            case 0x289330u: goto label_289330;
            case 0x289334u: goto label_289334;
            case 0x289338u: goto label_289338;
            case 0x28933Cu: goto label_28933c;
            case 0x289340u: goto label_289340;
            case 0x289344u: goto label_289344;
            case 0x289348u: goto label_289348;
            case 0x28934Cu: goto label_28934c;
            case 0x289350u: goto label_289350;
            case 0x289354u: goto label_289354;
            case 0x289358u: goto label_289358;
            case 0x28935Cu: goto label_28935c;
            case 0x289360u: goto label_289360;
            case 0x289364u: goto label_289364;
            case 0x289368u: goto label_289368;
            case 0x28936Cu: goto label_28936c;
            case 0x289370u: goto label_289370;
            case 0x289374u: goto label_289374;
            case 0x289378u: goto label_289378;
            case 0x28937Cu: goto label_28937c;
            case 0x289380u: goto label_289380;
            case 0x289384u: goto label_289384;
            case 0x289388u: goto label_289388;
            case 0x28938Cu: goto label_28938c;
            case 0x289390u: goto label_289390;
            case 0x289394u: goto label_289394;
            case 0x289398u: goto label_289398;
            case 0x28939Cu: goto label_28939c;
            case 0x2893A0u: goto label_2893a0;
            case 0x2893A4u: goto label_2893a4;
            case 0x2893A8u: goto label_2893a8;
            case 0x2893ACu: goto label_2893ac;
            case 0x2893B0u: goto label_2893b0;
            case 0x2893B4u: goto label_2893b4;
            case 0x2893B8u: goto label_2893b8;
            case 0x2893BCu: goto label_2893bc;
            case 0x2893C0u: goto label_2893c0;
            case 0x2893C4u: goto label_2893c4;
            case 0x2893C8u: goto label_2893c8;
            case 0x2893CCu: goto label_2893cc;
            case 0x2893D0u: goto label_2893d0;
            case 0x2893D4u: goto label_2893d4;
            case 0x2893D8u: goto label_2893d8;
            case 0x2893DCu: goto label_2893dc;
            case 0x2893E0u: goto label_2893e0;
            case 0x2893E4u: goto label_2893e4;
            case 0x2893E8u: goto label_2893e8;
            case 0x2893ECu: goto label_2893ec;
            case 0x2893F0u: goto label_2893f0;
            case 0x2893F4u: goto label_2893f4;
            case 0x2893F8u: goto label_2893f8;
            case 0x2893FCu: goto label_2893fc;
            case 0x289400u: goto label_289400;
            case 0x289404u: goto label_289404;
            case 0x289408u: goto label_289408;
            case 0x28940Cu: goto label_28940c;
            case 0x289410u: goto label_289410;
            case 0x289414u: goto label_289414;
            case 0x289418u: goto label_289418;
            case 0x28941Cu: goto label_28941c;
            case 0x289420u: goto label_289420;
            case 0x289424u: goto label_289424;
            case 0x289428u: goto label_289428;
            case 0x28942Cu: goto label_28942c;
            case 0x289430u: goto label_289430;
            case 0x289434u: goto label_289434;
            case 0x289438u: goto label_289438;
            case 0x28943Cu: goto label_28943c;
            case 0x289440u: goto label_289440;
            case 0x289444u: goto label_289444;
            case 0x289448u: goto label_289448;
            case 0x28944Cu: goto label_28944c;
            case 0x289450u: goto label_289450;
            case 0x289454u: goto label_289454;
            case 0x289458u: goto label_289458;
            case 0x28945Cu: goto label_28945c;
            case 0x289460u: goto label_289460;
            case 0x289464u: goto label_289464;
            case 0x289468u: goto label_289468;
            case 0x28946Cu: goto label_28946c;
            case 0x289470u: goto label_289470;
            case 0x289474u: goto label_289474;
            case 0x289478u: goto label_289478;
            case 0x28947Cu: goto label_28947c;
            case 0x289480u: goto label_289480;
            case 0x289484u: goto label_289484;
            case 0x289488u: goto label_289488;
            case 0x28948Cu: goto label_28948c;
            case 0x289490u: goto label_289490;
            case 0x289494u: goto label_289494;
            case 0x289498u: goto label_289498;
            case 0x28949Cu: goto label_28949c;
            case 0x2894A0u: goto label_2894a0;
            case 0x2894A4u: goto label_2894a4;
            case 0x2894A8u: goto label_2894a8;
            case 0x2894ACu: goto label_2894ac;
            case 0x2894B0u: goto label_2894b0;
            case 0x2894B4u: goto label_2894b4;
            case 0x2894B8u: goto label_2894b8;
            case 0x2894BCu: goto label_2894bc;
            case 0x2894C0u: goto label_2894c0;
            case 0x2894C4u: goto label_2894c4;
            case 0x2894C8u: goto label_2894c8;
            case 0x2894CCu: goto label_2894cc;
            case 0x2894D0u: goto label_2894d0;
            case 0x2894D4u: goto label_2894d4;
            case 0x2894D8u: goto label_2894d8;
            case 0x2894DCu: goto label_2894dc;
            case 0x2894E0u: goto label_2894e0;
            case 0x2894E4u: goto label_2894e4;
            case 0x2894E8u: goto label_2894e8;
            case 0x2894ECu: goto label_2894ec;
            case 0x2894F0u: goto label_2894f0;
            case 0x2894F4u: goto label_2894f4;
            case 0x2894F8u: goto label_2894f8;
            case 0x2894FCu: goto label_2894fc;
            case 0x289500u: goto label_289500;
            case 0x289504u: goto label_289504;
            case 0x289508u: goto label_289508;
            case 0x28950Cu: goto label_28950c;
            case 0x289510u: goto label_289510;
            case 0x289514u: goto label_289514;
            case 0x289518u: goto label_289518;
            case 0x28951Cu: goto label_28951c;
            case 0x289520u: goto label_289520;
            case 0x289524u: goto label_289524;
            case 0x289528u: goto label_289528;
            case 0x28952Cu: goto label_28952c;
            case 0x289530u: goto label_289530;
            case 0x289534u: goto label_289534;
            case 0x289538u: goto label_289538;
            case 0x28953Cu: goto label_28953c;
            case 0x289540u: goto label_289540;
            case 0x289544u: goto label_289544;
            case 0x289548u: goto label_289548;
            case 0x28954Cu: goto label_28954c;
            case 0x289550u: goto label_289550;
            case 0x289554u: goto label_289554;
            case 0x289558u: goto label_289558;
            case 0x28955Cu: goto label_28955c;
            case 0x289560u: goto label_289560;
            case 0x289564u: goto label_289564;
            case 0x289568u: goto label_289568;
            case 0x28956Cu: goto label_28956c;
            case 0x289570u: goto label_289570;
            case 0x289574u: goto label_289574;
            case 0x289578u: goto label_289578;
            case 0x28957Cu: goto label_28957c;
            case 0x289580u: goto label_289580;
            case 0x289584u: goto label_289584;
            case 0x289588u: goto label_289588;
            case 0x28958Cu: goto label_28958c;
            case 0x289590u: goto label_289590;
            case 0x289594u: goto label_289594;
            case 0x289598u: goto label_289598;
            case 0x28959Cu: goto label_28959c;
            case 0x2895A0u: goto label_2895a0;
            case 0x2895A4u: goto label_2895a4;
            case 0x2895A8u: goto label_2895a8;
            case 0x2895ACu: goto label_2895ac;
            case 0x2895B0u: goto label_2895b0;
            case 0x2895B4u: goto label_2895b4;
            case 0x2895B8u: goto label_2895b8;
            case 0x2895BCu: goto label_2895bc;
            case 0x2895C0u: goto label_2895c0;
            case 0x2895C4u: goto label_2895c4;
            case 0x2895C8u: goto label_2895c8;
            case 0x2895CCu: goto label_2895cc;
            case 0x2895D0u: goto label_2895d0;
            case 0x2895D4u: goto label_2895d4;
            case 0x2895D8u: goto label_2895d8;
            case 0x2895DCu: goto label_2895dc;
            case 0x2895E0u: goto label_2895e0;
            case 0x2895E4u: goto label_2895e4;
            case 0x2895E8u: goto label_2895e8;
            case 0x2895ECu: goto label_2895ec;
            case 0x2895F0u: goto label_2895f0;
            case 0x2895F4u: goto label_2895f4;
            case 0x2895F8u: goto label_2895f8;
            case 0x2895FCu: goto label_2895fc;
            case 0x289600u: goto label_289600;
            case 0x289604u: goto label_289604;
            case 0x289608u: goto label_289608;
            case 0x28960Cu: goto label_28960c;
            case 0x289610u: goto label_289610;
            case 0x289614u: goto label_289614;
            case 0x289618u: goto label_289618;
            case 0x28961Cu: goto label_28961c;
            case 0x289620u: goto label_289620;
            case 0x289624u: goto label_289624;
            case 0x289628u: goto label_289628;
            case 0x28962Cu: goto label_28962c;
            case 0x289630u: goto label_289630;
            case 0x289634u: goto label_289634;
            case 0x289638u: goto label_289638;
            case 0x28963Cu: goto label_28963c;
            case 0x289640u: goto label_289640;
            case 0x289644u: goto label_289644;
            case 0x289648u: goto label_289648;
            case 0x28964Cu: goto label_28964c;
            case 0x289650u: goto label_289650;
            case 0x289654u: goto label_289654;
            case 0x289658u: goto label_289658;
            case 0x28965Cu: goto label_28965c;
            case 0x289660u: goto label_289660;
            case 0x289664u: goto label_289664;
            case 0x289668u: goto label_289668;
            case 0x28966Cu: goto label_28966c;
            case 0x289670u: goto label_289670;
            case 0x289674u: goto label_289674;
            case 0x289678u: goto label_289678;
            case 0x28967Cu: goto label_28967c;
            case 0x289680u: goto label_289680;
            case 0x289684u: goto label_289684;
            case 0x289688u: goto label_289688;
            case 0x28968Cu: goto label_28968c;
            case 0x289690u: goto label_289690;
            case 0x289694u: goto label_289694;
            case 0x289698u: goto label_289698;
            case 0x28969Cu: goto label_28969c;
            case 0x2896A0u: goto label_2896a0;
            case 0x2896A4u: goto label_2896a4;
            case 0x2896A8u: goto label_2896a8;
            case 0x2896ACu: goto label_2896ac;
            case 0x2896B0u: goto label_2896b0;
            case 0x2896B4u: goto label_2896b4;
            case 0x2896B8u: goto label_2896b8;
            case 0x2896BCu: goto label_2896bc;
            case 0x2896C0u: goto label_2896c0;
            case 0x2896C4u: goto label_2896c4;
            case 0x2896C8u: goto label_2896c8;
            case 0x2896CCu: goto label_2896cc;
            case 0x2896D0u: goto label_2896d0;
            case 0x2896D4u: goto label_2896d4;
            case 0x2896D8u: goto label_2896d8;
            case 0x2896DCu: goto label_2896dc;
            case 0x2896E0u: goto label_2896e0;
            case 0x2896E4u: goto label_2896e4;
            case 0x2896E8u: goto label_2896e8;
            case 0x2896ECu: goto label_2896ec;
            case 0x2896F0u: goto label_2896f0;
            case 0x2896F4u: goto label_2896f4;
            case 0x2896F8u: goto label_2896f8;
            case 0x2896FCu: goto label_2896fc;
            case 0x289700u: goto label_289700;
            case 0x289704u: goto label_289704;
            case 0x289708u: goto label_289708;
            case 0x28970Cu: goto label_28970c;
            case 0x289710u: goto label_289710;
            case 0x289714u: goto label_289714;
            case 0x289718u: goto label_289718;
            case 0x28971Cu: goto label_28971c;
            case 0x289720u: goto label_289720;
            case 0x289724u: goto label_289724;
            case 0x289728u: goto label_289728;
            case 0x28972Cu: goto label_28972c;
            case 0x289730u: goto label_289730;
            case 0x289734u: goto label_289734;
            case 0x289738u: goto label_289738;
            case 0x28973Cu: goto label_28973c;
            case 0x289740u: goto label_289740;
            case 0x289744u: goto label_289744;
            case 0x289748u: goto label_289748;
            case 0x28974Cu: goto label_28974c;
            case 0x289750u: goto label_289750;
            case 0x289754u: goto label_289754;
            case 0x289758u: goto label_289758;
            case 0x28975Cu: goto label_28975c;
            case 0x289760u: goto label_289760;
            case 0x289764u: goto label_289764;
            case 0x289768u: goto label_289768;
            case 0x28976Cu: goto label_28976c;
            case 0x289770u: goto label_289770;
            case 0x289774u: goto label_289774;
            case 0x289778u: goto label_289778;
            case 0x28977Cu: goto label_28977c;
            case 0x289780u: goto label_289780;
            case 0x289784u: goto label_289784;
            case 0x289788u: goto label_289788;
            case 0x28978Cu: goto label_28978c;
            case 0x289790u: goto label_289790;
            case 0x289794u: goto label_289794;
            case 0x289798u: goto label_289798;
            case 0x28979Cu: goto label_28979c;
            case 0x2897A0u: goto label_2897a0;
            case 0x2897A4u: goto label_2897a4;
            case 0x2897A8u: goto label_2897a8;
            case 0x2897ACu: goto label_2897ac;
            case 0x2897B0u: goto label_2897b0;
            case 0x2897B4u: goto label_2897b4;
            case 0x2897B8u: goto label_2897b8;
            case 0x2897BCu: goto label_2897bc;
            case 0x2897C0u: goto label_2897c0;
            case 0x2897C4u: goto label_2897c4;
            case 0x2897C8u: goto label_2897c8;
            case 0x2897CCu: goto label_2897cc;
            case 0x2897D0u: goto label_2897d0;
            case 0x2897D4u: goto label_2897d4;
            case 0x2897D8u: goto label_2897d8;
            case 0x2897DCu: goto label_2897dc;
            case 0x2897E0u: goto label_2897e0;
            case 0x2897E4u: goto label_2897e4;
            case 0x2897E8u: goto label_2897e8;
            case 0x2897ECu: goto label_2897ec;
            case 0x2897F0u: goto label_2897f0;
            case 0x2897F4u: goto label_2897f4;
            case 0x2897F8u: goto label_2897f8;
            case 0x2897FCu: goto label_2897fc;
            case 0x289800u: goto label_289800;
            case 0x289804u: goto label_289804;
            case 0x289808u: goto label_289808;
            case 0x28980Cu: goto label_28980c;
            case 0x289810u: goto label_289810;
            case 0x289814u: goto label_289814;
            case 0x289818u: goto label_289818;
            case 0x28981Cu: goto label_28981c;
            case 0x289820u: goto label_289820;
            case 0x289824u: goto label_289824;
            case 0x289828u: goto label_289828;
            case 0x28982Cu: goto label_28982c;
            case 0x289830u: goto label_289830;
            case 0x289834u: goto label_289834;
            case 0x289838u: goto label_289838;
            case 0x28983Cu: goto label_28983c;
            case 0x289840u: goto label_289840;
            case 0x289844u: goto label_289844;
            case 0x289848u: goto label_289848;
            case 0x28984Cu: goto label_28984c;
            case 0x289850u: goto label_289850;
            case 0x289854u: goto label_289854;
            case 0x289858u: goto label_289858;
            case 0x28985Cu: goto label_28985c;
            case 0x289860u: goto label_289860;
            case 0x289864u: goto label_289864;
            case 0x289868u: goto label_289868;
            case 0x28986Cu: goto label_28986c;
            case 0x289870u: goto label_289870;
            case 0x289874u: goto label_289874;
            case 0x289878u: goto label_289878;
            case 0x28987Cu: goto label_28987c;
            case 0x289880u: goto label_289880;
            case 0x289884u: goto label_289884;
            case 0x289888u: goto label_289888;
            case 0x28988Cu: goto label_28988c;
            case 0x289890u: goto label_289890;
            case 0x289894u: goto label_289894;
            case 0x289898u: goto label_289898;
            case 0x28989Cu: goto label_28989c;
            case 0x2898A0u: goto label_2898a0;
            case 0x2898A4u: goto label_2898a4;
            case 0x2898A8u: goto label_2898a8;
            case 0x2898ACu: goto label_2898ac;
            case 0x2898B0u: goto label_2898b0;
            case 0x2898B4u: goto label_2898b4;
            case 0x2898B8u: goto label_2898b8;
            case 0x2898BCu: goto label_2898bc;
            case 0x2898C0u: goto label_2898c0;
            case 0x2898C4u: goto label_2898c4;
            case 0x2898C8u: goto label_2898c8;
            case 0x2898CCu: goto label_2898cc;
            case 0x2898D0u: goto label_2898d0;
            case 0x2898D4u: goto label_2898d4;
            case 0x2898D8u: goto label_2898d8;
            case 0x2898DCu: goto label_2898dc;
            case 0x2898E0u: goto label_2898e0;
            case 0x2898E4u: goto label_2898e4;
            case 0x2898E8u: goto label_2898e8;
            case 0x2898ECu: goto label_2898ec;
            case 0x2898F0u: goto label_2898f0;
            case 0x2898F4u: goto label_2898f4;
            case 0x2898F8u: goto label_2898f8;
            case 0x2898FCu: goto label_2898fc;
            case 0x289900u: goto label_289900;
            case 0x289904u: goto label_289904;
            case 0x289908u: goto label_289908;
            case 0x28990Cu: goto label_28990c;
            case 0x289910u: goto label_289910;
            case 0x289914u: goto label_289914;
            case 0x289918u: goto label_289918;
            case 0x28991Cu: goto label_28991c;
            case 0x289920u: goto label_289920;
            case 0x289924u: goto label_289924;
            case 0x289928u: goto label_289928;
            case 0x28992Cu: goto label_28992c;
            case 0x289930u: goto label_289930;
            case 0x289934u: goto label_289934;
            case 0x289938u: goto label_289938;
            case 0x28993Cu: goto label_28993c;
            case 0x289940u: goto label_289940;
            case 0x289944u: goto label_289944;
            case 0x289948u: goto label_289948;
            case 0x28994Cu: goto label_28994c;
            case 0x289950u: goto label_289950;
            case 0x289954u: goto label_289954;
            case 0x289958u: goto label_289958;
            case 0x28995Cu: goto label_28995c;
            case 0x289960u: goto label_289960;
            case 0x289964u: goto label_289964;
            case 0x289968u: goto label_289968;
            case 0x28996Cu: goto label_28996c;
            case 0x289970u: goto label_289970;
            case 0x289974u: goto label_289974;
            case 0x289978u: goto label_289978;
            case 0x28997Cu: goto label_28997c;
            case 0x289980u: goto label_289980;
            case 0x289984u: goto label_289984;
            case 0x289988u: goto label_289988;
            case 0x28998Cu: goto label_28998c;
            case 0x289990u: goto label_289990;
            case 0x289994u: goto label_289994;
            case 0x289998u: goto label_289998;
            case 0x28999Cu: goto label_28999c;
            case 0x2899A0u: goto label_2899a0;
            case 0x2899A4u: goto label_2899a4;
            case 0x2899A8u: goto label_2899a8;
            case 0x2899ACu: goto label_2899ac;
            case 0x2899B0u: goto label_2899b0;
            case 0x2899B4u: goto label_2899b4;
            case 0x2899B8u: goto label_2899b8;
            case 0x2899BCu: goto label_2899bc;
            case 0x2899C0u: goto label_2899c0;
            case 0x2899C4u: goto label_2899c4;
            case 0x2899C8u: goto label_2899c8;
            case 0x2899CCu: goto label_2899cc;
            case 0x2899D0u: goto label_2899d0;
            case 0x2899D4u: goto label_2899d4;
            case 0x2899D8u: goto label_2899d8;
            case 0x2899DCu: goto label_2899dc;
            case 0x2899E0u: goto label_2899e0;
            case 0x2899E4u: goto label_2899e4;
            case 0x2899E8u: goto label_2899e8;
            case 0x2899ECu: goto label_2899ec;
            case 0x2899F0u: goto label_2899f0;
            case 0x2899F4u: goto label_2899f4;
            case 0x2899F8u: goto label_2899f8;
            case 0x2899FCu: goto label_2899fc;
            case 0x289A00u: goto label_289a00;
            case 0x289A04u: goto label_289a04;
            case 0x289A08u: goto label_289a08;
            case 0x289A0Cu: goto label_289a0c;
            case 0x289A10u: goto label_289a10;
            case 0x289A14u: goto label_289a14;
            case 0x289A18u: goto label_289a18;
            case 0x289A1Cu: goto label_289a1c;
            case 0x289A20u: goto label_289a20;
            case 0x289A24u: goto label_289a24;
            case 0x289A28u: goto label_289a28;
            case 0x289A2Cu: goto label_289a2c;
            case 0x289A30u: goto label_289a30;
            case 0x289A34u: goto label_289a34;
            case 0x289A38u: goto label_289a38;
            case 0x289A3Cu: goto label_289a3c;
            case 0x289A40u: goto label_289a40;
            case 0x289A44u: goto label_289a44;
            case 0x289A48u: goto label_289a48;
            case 0x289A4Cu: goto label_289a4c;
            case 0x289A50u: goto label_289a50;
            case 0x289A54u: goto label_289a54;
            case 0x289A58u: goto label_289a58;
            case 0x289A5Cu: goto label_289a5c;
            case 0x289A60u: goto label_289a60;
            case 0x289A64u: goto label_289a64;
            case 0x289A68u: goto label_289a68;
            case 0x289A6Cu: goto label_289a6c;
            case 0x289A70u: goto label_289a70;
            case 0x289A74u: goto label_289a74;
            case 0x289A78u: goto label_289a78;
            case 0x289A7Cu: goto label_289a7c;
            case 0x289A80u: goto label_289a80;
            case 0x289A84u: goto label_289a84;
            case 0x289A88u: goto label_289a88;
            case 0x289A8Cu: goto label_289a8c;
            case 0x289A90u: goto label_289a90;
            case 0x289A94u: goto label_289a94;
            case 0x289A98u: goto label_289a98;
            case 0x289A9Cu: goto label_289a9c;
            case 0x289AA0u: goto label_289aa0;
            case 0x289AA4u: goto label_289aa4;
            case 0x289AA8u: goto label_289aa8;
            case 0x289AACu: goto label_289aac;
            case 0x289AB0u: goto label_289ab0;
            case 0x289AB4u: goto label_289ab4;
            case 0x289AB8u: goto label_289ab8;
            case 0x289ABCu: goto label_289abc;
            case 0x289AC0u: goto label_289ac0;
            case 0x289AC4u: goto label_289ac4;
            case 0x289AC8u: goto label_289ac8;
            case 0x289ACCu: goto label_289acc;
            case 0x289AD0u: goto label_289ad0;
            case 0x289AD4u: goto label_289ad4;
            case 0x289AD8u: goto label_289ad8;
            case 0x289ADCu: goto label_289adc;
            case 0x289AE0u: goto label_289ae0;
            case 0x289AE4u: goto label_289ae4;
            case 0x289AE8u: goto label_289ae8;
            case 0x289AECu: goto label_289aec;
            case 0x289AF0u: goto label_289af0;
            case 0x289AF4u: goto label_289af4;
            case 0x289AF8u: goto label_289af8;
            case 0x289AFCu: goto label_289afc;
            case 0x289B00u: goto label_289b00;
            case 0x289B04u: goto label_289b04;
            case 0x289B08u: goto label_289b08;
            case 0x289B0Cu: goto label_289b0c;
            case 0x289B10u: goto label_289b10;
            case 0x289B14u: goto label_289b14;
            case 0x289B18u: goto label_289b18;
            case 0x289B1Cu: goto label_289b1c;
            case 0x289B20u: goto label_289b20;
            case 0x289B24u: goto label_289b24;
            case 0x289B28u: goto label_289b28;
            case 0x289B2Cu: goto label_289b2c;
            case 0x289B30u: goto label_289b30;
            case 0x289B34u: goto label_289b34;
            case 0x289B38u: goto label_289b38;
            case 0x289B3Cu: goto label_289b3c;
            case 0x289B40u: goto label_289b40;
            case 0x289B44u: goto label_289b44;
            case 0x289B48u: goto label_289b48;
            case 0x289B4Cu: goto label_289b4c;
            case 0x289B50u: goto label_289b50;
            case 0x289B54u: goto label_289b54;
            case 0x289B58u: goto label_289b58;
            case 0x289B5Cu: goto label_289b5c;
            case 0x289B60u: goto label_289b60;
            case 0x289B64u: goto label_289b64;
            case 0x289B68u: goto label_289b68;
            case 0x289B6Cu: goto label_289b6c;
            case 0x289B70u: goto label_289b70;
            case 0x289B74u: goto label_289b74;
            case 0x289B78u: goto label_289b78;
            case 0x289B7Cu: goto label_289b7c;
            case 0x289B80u: goto label_289b80;
            case 0x289B84u: goto label_289b84;
            case 0x289B88u: goto label_289b88;
            case 0x289B8Cu: goto label_289b8c;
            case 0x289B90u: goto label_289b90;
            case 0x289B94u: goto label_289b94;
            case 0x289B98u: goto label_289b98;
            case 0x289B9Cu: goto label_289b9c;
            case 0x289BA0u: goto label_289ba0;
            case 0x289BA4u: goto label_289ba4;
            case 0x289BA8u: goto label_289ba8;
            case 0x289BACu: goto label_289bac;
            case 0x289BB0u: goto label_289bb0;
            case 0x289BB4u: goto label_289bb4;
            case 0x289BB8u: goto label_289bb8;
            case 0x289BBCu: goto label_289bbc;
            case 0x289BC0u: goto label_289bc0;
            case 0x289BC4u: goto label_289bc4;
            case 0x289BC8u: goto label_289bc8;
            case 0x289BCCu: goto label_289bcc;
            case 0x289BD0u: goto label_289bd0;
            case 0x289BD4u: goto label_289bd4;
            case 0x289BD8u: goto label_289bd8;
            case 0x289BDCu: goto label_289bdc;
            case 0x289BE0u: goto label_289be0;
            case 0x289BE4u: goto label_289be4;
            case 0x289BE8u: goto label_289be8;
            case 0x289BECu: goto label_289bec;
            case 0x289BF0u: goto label_289bf0;
            case 0x289BF4u: goto label_289bf4;
            case 0x289BF8u: goto label_289bf8;
            case 0x289BFCu: goto label_289bfc;
            case 0x289C00u: goto label_289c00;
            case 0x289C04u: goto label_289c04;
            case 0x289C08u: goto label_289c08;
            case 0x289C0Cu: goto label_289c0c;
            case 0x289C10u: goto label_289c10;
            case 0x289C14u: goto label_289c14;
            case 0x289C18u: goto label_289c18;
            case 0x289C1Cu: goto label_289c1c;
            case 0x289C20u: goto label_289c20;
            case 0x289C24u: goto label_289c24;
            case 0x289C28u: goto label_289c28;
            case 0x289C2Cu: goto label_289c2c;
            case 0x289C30u: goto label_289c30;
            case 0x289C34u: goto label_289c34;
            case 0x289C38u: goto label_289c38;
            case 0x289C3Cu: goto label_289c3c;
            case 0x289C40u: goto label_289c40;
            case 0x289C44u: goto label_289c44;
            case 0x289C48u: goto label_289c48;
            case 0x289C4Cu: goto label_289c4c;
            case 0x289C50u: goto label_289c50;
            case 0x289C54u: goto label_289c54;
            case 0x289C58u: goto label_289c58;
            case 0x289C5Cu: goto label_289c5c;
            case 0x289C60u: goto label_289c60;
            case 0x289C64u: goto label_289c64;
            case 0x289C68u: goto label_289c68;
            case 0x289C6Cu: goto label_289c6c;
            case 0x289C70u: goto label_289c70;
            case 0x289C74u: goto label_289c74;
            case 0x289C78u: goto label_289c78;
            case 0x289C7Cu: goto label_289c7c;
            case 0x289C80u: goto label_289c80;
            case 0x289C84u: goto label_289c84;
            case 0x289C88u: goto label_289c88;
            case 0x289C8Cu: goto label_289c8c;
            case 0x289C90u: goto label_289c90;
            case 0x289C94u: goto label_289c94;
            case 0x289C98u: goto label_289c98;
            case 0x289C9Cu: goto label_289c9c;
            case 0x289CA0u: goto label_289ca0;
            case 0x289CA4u: goto label_289ca4;
            case 0x289CA8u: goto label_289ca8;
            case 0x289CACu: goto label_289cac;
            case 0x289CB0u: goto label_289cb0;
            case 0x289CB4u: goto label_289cb4;
            case 0x289CB8u: goto label_289cb8;
            case 0x289CBCu: goto label_289cbc;
            case 0x289CC0u: goto label_289cc0;
            case 0x289CC4u: goto label_289cc4;
            case 0x289CC8u: goto label_289cc8;
            case 0x289CCCu: goto label_289ccc;
            case 0x289CD0u: goto label_289cd0;
            case 0x289CD4u: goto label_289cd4;
            case 0x289CD8u: goto label_289cd8;
            case 0x289CDCu: goto label_289cdc;
            case 0x289CE0u: goto label_289ce0;
            case 0x289CE4u: goto label_289ce4;
            case 0x289CE8u: goto label_289ce8;
            case 0x289CECu: goto label_289cec;
            case 0x289CF0u: goto label_289cf0;
            case 0x289CF4u: goto label_289cf4;
            case 0x289CF8u: goto label_289cf8;
            case 0x289CFCu: goto label_289cfc;
            case 0x289D00u: goto label_289d00;
            case 0x289D04u: goto label_289d04;
            case 0x289D08u: goto label_289d08;
            case 0x289D0Cu: goto label_289d0c;
            case 0x289D10u: goto label_289d10;
            case 0x289D14u: goto label_289d14;
            case 0x289D18u: goto label_289d18;
            case 0x289D1Cu: goto label_289d1c;
            case 0x289D20u: goto label_289d20;
            case 0x289D24u: goto label_289d24;
            case 0x289D28u: goto label_289d28;
            case 0x289D2Cu: goto label_289d2c;
            case 0x289D30u: goto label_289d30;
            case 0x289D34u: goto label_289d34;
            case 0x289D38u: goto label_289d38;
            case 0x289D3Cu: goto label_289d3c;
            case 0x289D40u: goto label_289d40;
            case 0x289D44u: goto label_289d44;
            case 0x289D48u: goto label_289d48;
            case 0x289D4Cu: goto label_289d4c;
            case 0x289D50u: goto label_289d50;
            case 0x289D54u: goto label_289d54;
            case 0x289D58u: goto label_289d58;
            case 0x289D5Cu: goto label_289d5c;
            case 0x289D60u: goto label_289d60;
            case 0x289D64u: goto label_289d64;
            case 0x289D68u: goto label_289d68;
            case 0x289D6Cu: goto label_289d6c;
            case 0x289D70u: goto label_289d70;
            case 0x289D74u: goto label_289d74;
            case 0x289D78u: goto label_289d78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28967Cu;
label_28967c:
    // 0x28967c: 0x3c020031
    ctx->pc = 0x28967cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_289680:
    // 0x289680: 0x8c42f184
    ctx->pc = 0x289680u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_289684:
    // 0x289684: 0x14400036
label_289688:
    if (ctx->pc == 0x289688u) {
        ctx->pc = 0x28968Cu;
        goto label_28968c;
    }
    ctx->pc = 0x289684u;
    {
        const bool branch_taken_0x289684 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x289684) {
            ctx->pc = 0x289760u;
            goto label_289760;
        }
    }
    ctx->pc = 0x28968Cu;
label_28968c:
    // 0x28968c: 0x26520001
    ctx->pc = 0x28968cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_289690:
    // 0x289690: 0x2a420004
    ctx->pc = 0x289690u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
label_289694:
    // 0x289694: 0x2900a
    ctx->pc = 0x289694u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 0));
label_289698:
    // 0x289698: 0x10000031
label_28969c:
    if (ctx->pc == 0x28969Cu) {
        ctx->pc = 0x28969Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2896A0u;
        goto label_2896a0;
    }
    ctx->pc = 0x289698u;
    {
        const bool branch_taken_0x289698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28969Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x289698) {
            ctx->pc = 0x289760u;
            goto label_289760;
        }
    }
    ctx->pc = 0x2896A0u;
label_2896a0:
    // 0x2896a0: 0x3c020031
    ctx->pc = 0x2896a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2896a4:
    // 0x2896a4: 0x8c42f184
    ctx->pc = 0x2896a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_2896a8:
    // 0x2896a8: 0x1440002d
label_2896ac:
    if (ctx->pc == 0x2896ACu) {
        ctx->pc = 0x2896ACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2896B0u;
        goto label_2896b0;
    }
    ctx->pc = 0x2896A8u;
    {
        const bool branch_taken_0x2896a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2896ACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2896a8) {
            ctx->pc = 0x289760u;
            goto label_289760;
        }
    }
    ctx->pc = 0x2896B0u;
label_2896b0:
    // 0x2896b0: 0x2652ffff
    ctx->pc = 0x2896b0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_2896b4:
    // 0x2896b4: 0x2402ffff
    ctx->pc = 0x2896b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2896b8:
    // 0x2896b8: 0x52102a
    ctx->pc = 0x2896b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 18)));
label_2896bc:
    // 0x2896bc: 0x62900a
    ctx->pc = 0x2896bcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
label_2896c0:
    // 0x2896c0: 0x10000027
label_2896c4:
    if (ctx->pc == 0x2896C4u) {
        ctx->pc = 0x2896C4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2896C8u;
        goto label_2896c8;
    }
    ctx->pc = 0x2896C0u;
    {
        const bool branch_taken_0x2896c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2896C4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2896c0) {
            ctx->pc = 0x289760u;
            goto label_289760;
        }
    }
    ctx->pc = 0x2896C8u;
label_2896c8:
    // 0x2896c8: 0x2416ffff
    ctx->pc = 0x2896c8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2896cc:
    // 0x2896cc: 0x10000024
label_2896d0:
    if (ctx->pc == 0x2896D0u) {
        ctx->pc = 0x2896D0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2896D4u;
        goto label_2896d4;
    }
    ctx->pc = 0x2896CCu;
    {
        const bool branch_taken_0x2896cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2896D0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2896cc) {
            ctx->pc = 0x289760u;
            goto label_289760;
        }
    }
    ctx->pc = 0x2896D4u;
label_2896d4:
    // 0x2896d4: 0x24160001
    ctx->pc = 0x2896d4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
label_2896d8:
    // 0x2896d8: 0x10000021
label_2896dc:
    if (ctx->pc == 0x2896DCu) {
        ctx->pc = 0x2896DCu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2896E0u;
        goto label_2896e0;
    }
    ctx->pc = 0x2896D8u;
    {
        const bool branch_taken_0x2896d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2896DCu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2896d8) {
            ctx->pc = 0x289760u;
            goto label_289760;
        }
    }
    ctx->pc = 0x2896E0u;
label_2896e0:
    // 0x2896e0: 0x8e622ad8
    ctx->pc = 0x2896e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10968)));
label_2896e4:
    // 0x2896e4: 0x14400003
label_2896e8:
    if (ctx->pc == 0x2896E8u) {
        ctx->pc = 0x2896E8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        ctx->pc = 0x2896ECu;
        goto label_2896ec;
    }
    ctx->pc = 0x2896E4u;
    {
        const bool branch_taken_0x2896e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2896E8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
        if (branch_taken_0x2896e4) {
            ctx->pc = 0x2896F4u;
            goto label_2896f4;
        }
    }
    ctx->pc = 0x2896ECu;
label_2896ec:
    // 0x2896ec: 0xc08c516
label_2896f0:
    if (ctx->pc == 0x2896F0u) {
        ctx->pc = 0x2896F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2896F4u;
        goto label_2896f4;
    }
    ctx->pc = 0x2896ECu;
    SET_GPR_U32(ctx, 31, 0x2896F4u);
    ctx->pc = 0x2896F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231458u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_player_0x231458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2896F4u; }
    }
    if (ctx->pc != 0x2896F4u) { return; }
    ctx->pc = 0x2896F4u;
label_2896f4:
    // 0x2896f4: 0x3c03003c
    ctx->pc = 0x2896f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2896f8:
    // 0x2896f8: 0x24633b88
    ctx->pc = 0x2896f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15240));
label_2896fc:
    // 0x2896fc: 0x24020084
    ctx->pc = 0x2896fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 132));
label_289700:
    // 0x289700: 0x2821018
    ctx->pc = 0x289700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_289704:
    // 0x289704: 0x621821
    ctx->pc = 0x289704u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_289708:
    // 0x289708: 0x8c640024
    ctx->pc = 0x289708u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_28970c:
    // 0x28970c: 0xc0b0ce8
label_289710:
    if (ctx->pc == 0x289710u) {
        ctx->pc = 0x289710u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x289714u;
        goto label_289714;
    }
    ctx->pc = 0x28970Cu;
    SET_GPR_U32(ctx, 31, 0x289714u);
    ctx->pc = 0x289710u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289714u; }
    }
    if (ctx->pc != 0x289714u) { return; }
    ctx->pc = 0x289714u;
label_289714:
    // 0x289714: 0x3c020031
    ctx->pc = 0x289714u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_289718:
    // 0x289718: 0x8c42f184
    ctx->pc = 0x289718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_28971c:
    // 0x28971c: 0x10400010
label_289720:
    if (ctx->pc == 0x289720u) {
        ctx->pc = 0x289720u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x289724u;
        goto label_289724;
    }
    ctx->pc = 0x28971Cu;
    {
        const bool branch_taken_0x28971c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x289720u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x28971c) {
            ctx->pc = 0x289760u;
            goto label_289760;
        }
    }
    ctx->pc = 0x289724u;
label_289724:
    // 0x289724: 0x2445d760
    ctx->pc = 0x289724u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294956896));
label_289728:
    // 0x289728: 0x68a80007
    ctx->pc = 0x289728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
label_28972c:
    // 0x28972c: 0x6ca80000
    ctx->pc = 0x28972cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
label_289730:
    // 0x289730: 0x68a3000f
    ctx->pc = 0x289730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
label_289734:
    // 0x289734: 0x6ca30008
    ctx->pc = 0x289734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
label_289738:
    // 0x289738: 0xb3a80007
    ctx->pc = 0x289738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28973c:
    // 0x28973c: 0xb7a80000
    ctx->pc = 0x28973cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_289740:
    // 0x289740: 0xb3a3000f
    ctx->pc = 0x289740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_289744:
    // 0x289744: 0xb7a30008
    ctx->pc = 0x289744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_289748:
    // 0x289748: 0x8e620008
    ctx->pc = 0x289748u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_28974c:
    // 0x28974c: 0x30420003
    ctx->pc = 0x28974cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
label_289750:
    // 0x289750: 0x21080
    ctx->pc = 0x289750u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_289754:
    // 0x289754: 0x3a21021
    ctx->pc = 0x289754u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_289758:
    // 0x289758: 0x8c420000
    ctx->pc = 0x289758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28975c:
    // 0x28975c: 0xae620004
    ctx->pc = 0x28975cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_289760:
    // 0x289760: 0x16a00007
label_289764:
    if (ctx->pc == 0x289764u) {
        ctx->pc = 0x289764u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->pc = 0x289768u;
        goto label_289768;
    }
    ctx->pc = 0x289760u;
    {
        const bool branch_taken_0x289760 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x289764u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        if (branch_taken_0x289760) {
            ctx->pc = 0x289780u;
            goto label_289780;
        }
    }
    ctx->pc = 0x289768u;
label_289768:
    // 0x289768: 0x8e620010
    ctx->pc = 0x289768u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_28976c:
    // 0x28976c: 0x16020005
label_289770:
    if (ctx->pc == 0x289770u) {
        ctx->pc = 0x289770u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x289774u;
        goto label_289774;
    }
    ctx->pc = 0x28976Cu;
    {
        const bool branch_taken_0x28976c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x289770u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x28976c) {
            ctx->pc = 0x289784u;
            goto label_289784;
        }
    }
    ctx->pc = 0x289774u;
label_289774:
    // 0x289774: 0x8e630100
    ctx->pc = 0x289774u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_289778:
    // 0x289778: 0x50620066
label_28977c:
    if (ctx->pc == 0x28977Cu) {
        ctx->pc = 0x28977Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289780u;
        goto label_289780;
    }
    ctx->pc = 0x289778u;
    {
        const bool branch_taken_0x289778 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x289778) {
            ctx->pc = 0x28977Cu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x289914u;
            goto label_289914;
        }
    }
    ctx->pc = 0x289780u;
label_289780:
    // 0x289780: 0x24020002
    ctx->pc = 0x289780u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_289784:
    // 0x289784: 0xae620100
    ctx->pc = 0x289784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
label_289788:
    // 0x289788: 0x260202d
    ctx->pc = 0x289788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28978c:
    // 0x28978c: 0x200282d
    ctx->pc = 0x28978cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289790:
    // 0x289790: 0xc0a203c
label_289794:
    if (ctx->pc == 0x289794u) {
        ctx->pc = 0x289794u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289798u;
        goto label_289798;
    }
    ctx->pc = 0x289790u;
    SET_GPR_U32(ctx, 31, 0x289798u);
    ctx->pc = 0x289794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2880F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LimitSeltype_0x2880f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289798u; }
    }
    if (ctx->pc != 0x289798u) { return; }
    ctx->pc = 0x289798u;
label_289798:
    // 0x289798: 0x40802d
    ctx->pc = 0x289798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28979c:
    // 0x28979c: 0x2a030008
    ctx->pc = 0x28979cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 8));
label_2897a0:
    // 0x2897a0: 0x2602fff8
    ctx->pc = 0x2897a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967288));
label_2897a4:
    // 0x2897a4: 0x40202d
    ctx->pc = 0x2897a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2897a8:
    // 0x2897a8: 0x3c020031
    ctx->pc = 0x2897a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2897ac:
    // 0x2897ac: 0x8c42f184
    ctx->pc = 0x2897acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_2897b0:
    // 0x2897b0: 0x10400015
label_2897b4:
    if (ctx->pc == 0x2897B4u) {
        ctx->pc = 0x2897B4u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 16));
        ctx->pc = 0x2897B8u;
        goto label_2897b8;
    }
    ctx->pc = 0x2897B0u;
    {
        const bool branch_taken_0x2897b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2897B4u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 16));
        if (branch_taken_0x2897b0) {
            ctx->pc = 0x289808u;
            goto label_289808;
        }
    }
    ctx->pc = 0x2897B8u;
label_2897b8:
    // 0x2897b8: 0x3c02003b
    ctx->pc = 0x2897b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_2897bc:
    // 0x2897bc: 0x2443d760
    ctx->pc = 0x2897bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294956896));
label_2897c0:
    // 0x2897c0: 0x68660007
    ctx->pc = 0x2897c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
label_2897c4:
    // 0x2897c4: 0x6c660000
    ctx->pc = 0x2897c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2897c8:
    // 0x2897c8: 0x6867000f
    ctx->pc = 0x2897c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
label_2897cc:
    // 0x2897cc: 0x6c670008
    ctx->pc = 0x2897ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2897d0:
    // 0x2897d0: 0xb3a60007
    ctx->pc = 0x2897d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2897d4:
    // 0x2897d4: 0xb7a60000
    ctx->pc = 0x2897d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2897d8:
    // 0x2897d8: 0xb3a7000f
    ctx->pc = 0x2897d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2897dc:
    // 0x2897dc: 0xb7a70008
    ctx->pc = 0x2897dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2897e0:
    // 0x2897e0: 0x24820003
    ctx->pc = 0x2897e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 3));
label_2897e4:
    // 0x2897e4: 0x2403ffff
    ctx->pc = 0x2897e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2897e8:
    // 0x2897e8: 0x64182a
    ctx->pc = 0x2897e8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_2897ec:
    // 0x2897ec: 0x83100b
    ctx->pc = 0x2897ecu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_2897f0:
    // 0x2897f0: 0x21083
    ctx->pc = 0x2897f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2897f4:
    // 0x2897f4: 0x21080
    ctx->pc = 0x2897f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_2897f8:
    // 0x2897f8: 0x821023
    ctx->pc = 0x2897f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2897fc:
    // 0x2897fc: 0x21080
    ctx->pc = 0x2897fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_289800:
    // 0x289800: 0x3a21021
    ctx->pc = 0x289800u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_289804:
    // 0x289804: 0x8c520000
    ctx->pc = 0x289804u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_289808:
    // 0x289808: 0x24020010
    ctx->pc = 0x289808u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_28980c:
    // 0x28980c: 0x12020004
label_289810:
    if (ctx->pc == 0x289810u) {
        ctx->pc = 0x289810u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289814u;
        goto label_289814;
    }
    ctx->pc = 0x28980Cu;
    {
        const bool branch_taken_0x28980c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x289810u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28980c) {
            ctx->pc = 0x289820u;
            goto label_289820;
        }
    }
    ctx->pc = 0x289814u;
label_289814:
    // 0x289814: 0x200282d
    ctx->pc = 0x289814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289818:
    // 0x289818: 0xc093692
label_28981c:
    if (ctx->pc == 0x28981Cu) {
        ctx->pc = 0x28981Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289820u;
        goto label_289820;
    }
    ctx->pc = 0x289818u;
    SET_GPR_U32(ctx, 31, 0x289820u);
    ctx->pc = 0x28981Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadPlyrData_0x24da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289820u; }
    }
    if (ctx->pc != 0x289820u) { return; }
    ctx->pc = 0x289820u;
label_289820:
    // 0x289820: 0x16a00004
label_289824:
    if (ctx->pc == 0x289824u) {
        ctx->pc = 0x289828u;
        goto label_289828;
    }
    ctx->pc = 0x289820u;
    {
        const bool branch_taken_0x289820 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x289820) {
            ctx->pc = 0x289834u;
            goto label_289834;
        }
    }
    ctx->pc = 0x289828u;
label_289828:
    // 0x289828: 0x8e620010
    ctx->pc = 0x289828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_28982c:
    // 0x28982c: 0x52020037
label_289830:
    if (ctx->pc == 0x289830u) {
        ctx->pc = 0x289830u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
        ctx->pc = 0x289834u;
        goto label_289834;
    }
    ctx->pc = 0x28982Cu;
    {
        const bool branch_taken_0x28982c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x28982c) {
            ctx->pc = 0x289830u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
            ctx->pc = 0x28990Cu;
            goto label_28990c;
        }
    }
    ctx->pc = 0x289834u;
label_289834:
    // 0x289834: 0xc0a11f8
label_289838:
    if (ctx->pc == 0x289838u) {
        ctx->pc = 0x289838u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28983Cu;
        goto label_28983c;
    }
    ctx->pc = 0x289834u;
    SET_GPR_U32(ctx, 31, 0x28983Cu);
    ctx->pc = 0x289838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2847E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        useable_class_0x2847e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28983Cu; }
    }
    if (ctx->pc != 0x28983Cu) { return; }
    ctx->pc = 0x28983Cu;
label_28983c:
    // 0x28983c: 0x10400007
label_289840:
    if (ctx->pc == 0x289840u) {
        ctx->pc = 0x289840u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x289844u;
        goto label_289844;
    }
    ctx->pc = 0x28983Cu;
    {
        const bool branch_taken_0x28983c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x289840u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x28983c) {
            ctx->pc = 0x28985Cu;
            goto label_28985c;
        }
    }
    ctx->pc = 0x289844u;
label_289844:
    // 0x289844: 0x24631480
    ctx->pc = 0x289844u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5248));
label_289848:
    // 0x289848: 0x8e620004
    ctx->pc = 0x289848u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_28984c:
    // 0x28984c: 0x21080
    ctx->pc = 0x28984cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_289850:
    // 0x289850: 0x431021
    ctx->pc = 0x289850u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_289854:
    // 0x289854: 0x10000003
label_289858:
    if (ctx->pc == 0x289858u) {
        ctx->pc = 0x289858u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x28985Cu;
        goto label_28985c;
    }
    ctx->pc = 0x289854u;
    {
        const bool branch_taken_0x289854 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289858u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x289854) {
            ctx->pc = 0x289864u;
            goto label_289864;
        }
    }
    ctx->pc = 0x28985Cu;
label_28985c:
    // 0x28985c: 0x3c02003b
    ctx->pc = 0x28985cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_289860:
    // 0x289860: 0x2451d1c8
    ctx->pc = 0x289860u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294955464));
label_289864:
    // 0x289864: 0xc0981a2
label_289868:
    if (ctx->pc == 0x289868u) {
        ctx->pc = 0x28986Cu;
        goto label_28986c;
    }
    ctx->pc = 0x289864u;
    SET_GPR_U32(ctx, 31, 0x28986Cu);
    ctx->pc = 0x260688u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCursorChar_0x260688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28986Cu; }
    }
    if (ctx->pc != 0x28986Cu) { return; }
    ctx->pc = 0x28986Cu;
label_28986c:
    // 0x28986c: 0x3c020031
    ctx->pc = 0x28986cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_289870:
    // 0x289870: 0x8c42f184
    ctx->pc = 0x289870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_289874:
    // 0x289874: 0x54400025
label_289878:
    if (ctx->pc == 0x289878u) {
        ctx->pc = 0x289878u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
        ctx->pc = 0x28987Cu;
        goto label_28987c;
    }
    ctx->pc = 0x289874u;
    {
        const bool branch_taken_0x289874 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x289874) {
            ctx->pc = 0x289878u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
            ctx->pc = 0x28990Cu;
            goto label_28990c;
        }
    }
    ctx->pc = 0x28987Cu;
label_28987c:
    // 0x28987c: 0x8e630010
    ctx->pc = 0x28987cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_289880:
    // 0x289880: 0x24020010
    ctx->pc = 0x289880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_289884:
    // 0x289884: 0x5462000a
label_289888:
    if (ctx->pc == 0x289888u) {
        ctx->pc = 0x289888u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->pc = 0x28988Cu;
        goto label_28988c;
    }
    ctx->pc = 0x289884u;
    {
        const bool branch_taken_0x289884 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x289884) {
            ctx->pc = 0x289888u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->pc = 0x2898B0u;
            goto label_2898b0;
        }
    }
    ctx->pc = 0x28988Cu;
label_28988c:
    // 0x28988c: 0x280202d
    ctx->pc = 0x28988cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_289890:
    // 0x289890: 0x24050004
    ctx->pc = 0x289890u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
label_289894:
    // 0x289894: 0x302d
    ctx->pc = 0x289894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289898:
    // 0x289898: 0x382d
    ctx->pc = 0x289898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28989c:
    // 0x28989c: 0x3c08003b
    ctx->pc = 0x28989cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2898a0:
    // 0x2898a0: 0xc0a139c
label_2898a4:
    if (ctx->pc == 0x2898A4u) {
        ctx->pc = 0x2898A4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955496));
        ctx->pc = 0x2898A8u;
        goto label_2898a8;
    }
    ctx->pc = 0x2898A0u;
    SET_GPR_U32(ctx, 31, 0x2898A8u);
    ctx->pc = 0x2898A4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955496));
    ctx->pc = 0x284E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_tex_0x284e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2898A8u; }
    }
    if (ctx->pc != 0x2898A8u) { return; }
    ctx->pc = 0x2898A8u;
label_2898a8:
    // 0x2898a8: 0x1000000e
label_2898ac:
    if (ctx->pc == 0x2898ACu) {
        ctx->pc = 0x2898ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2898B0u;
        goto label_2898b0;
    }
    ctx->pc = 0x2898A8u;
    {
        const bool branch_taken_0x2898a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2898ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2898a8) {
            ctx->pc = 0x2898E4u;
            goto label_2898e4;
        }
    }
    ctx->pc = 0x2898B0u;
label_2898b0:
    // 0x2898b0: 0x21080
    ctx->pc = 0x2898b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_2898b4:
    // 0x2898b4: 0x3c090032
    ctx->pc = 0x2898b4u;
    SET_GPR_U32(ctx, 9, ((uint32_t)50 << 16));
label_2898b8:
    // 0x2898b8: 0x25291428
    ctx->pc = 0x2898b8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 5160));
label_2898bc:
    // 0x2898bc: 0x280202d
    ctx->pc = 0x2898bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2898c0:
    // 0x2898c0: 0x24050004
    ctx->pc = 0x2898c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
label_2898c4:
    // 0x2898c4: 0x302d
    ctx->pc = 0x2898c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2898c8:
    // 0x2898c8: 0x382d
    ctx->pc = 0x2898c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2898cc:
    // 0x2898cc: 0x3c08003b
    ctx->pc = 0x2898ccu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2898d0:
    // 0x2898d0: 0x2508d1f0
    ctx->pc = 0x2898d0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955504));
label_2898d4:
    // 0x2898d4: 0x494821
    ctx->pc = 0x2898d4u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2898d8:
    // 0x2898d8: 0xc0a139c
label_2898dc:
    if (ctx->pc == 0x2898DCu) {
        ctx->pc = 0x2898DCu;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2898E0u;
        goto label_2898e0;
    }
    ctx->pc = 0x2898D8u;
    SET_GPR_U32(ctx, 31, 0x2898E0u);
    ctx->pc = 0x2898DCu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x284E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_tex_0x284e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2898E0u; }
    }
    if (ctx->pc != 0x2898E0u) { return; }
    ctx->pc = 0x2898E0u;
label_2898e0:
    // 0x2898e0: 0x280202d
    ctx->pc = 0x2898e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2898e4:
    // 0x2898e4: 0x24050004
    ctx->pc = 0x2898e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
label_2898e8:
    // 0x2898e8: 0xc0a1204
label_2898ec:
    if (ctx->pc == 0x2898ECu) {
        ctx->pc = 0x2898ECu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2898F0u;
        goto label_2898f0;
    }
    ctx->pc = 0x2898E8u;
    SET_GPR_U32(ctx, 31, 0x2898F0u);
    ctx->pc = 0x2898ECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x284810u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_blit_fx_0x284810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2898F0u; }
    }
    if (ctx->pc != 0x2898F0u) { return; }
    ctx->pc = 0x2898F0u;
label_2898f0:
    // 0x2898f0: 0xc0a1234
label_2898f4:
    if (ctx->pc == 0x2898F4u) {
        ctx->pc = 0x2898F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2898F8u;
        goto label_2898f8;
    }
    ctx->pc = 0x2898F0u;
    SET_GPR_U32(ctx, 31, 0x2898F8u);
    ctx->pc = 0x2898F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2848D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        serve_blits_0x2848d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2898F8u; }
    }
    if (ctx->pc != 0x2898F8u) { return; }
    ctx->pc = 0x2898F8u;
label_2898f8:
    // 0x2898f8: 0x10400003
label_2898fc:
    if (ctx->pc == 0x2898FCu) {
        ctx->pc = 0x2898FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x289900u;
        goto label_289900;
    }
    ctx->pc = 0x2898F8u;
    {
        const bool branch_taken_0x2898f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2898FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2898f8) {
            ctx->pc = 0x289908u;
            goto label_289908;
        }
    }
    ctx->pc = 0x289900u;
label_289900:
    // 0x289900: 0x2821004
    ctx->pc = 0x289900u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
label_289904:
    // 0x289904: 0x3c2f025
    ctx->pc = 0x289904u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_289908:
    // 0x289908: 0xae700010
    ctx->pc = 0x289908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
label_28990c:
    // 0x28990c: 0xae720004
    ctx->pc = 0x28990cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_289910:
    // 0x289910: 0x280202d
    ctx->pc = 0x289910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_289914:
    // 0x289914: 0xc081c4c
label_289918:
    if (ctx->pc == 0x289918u) {
        ctx->pc = 0x289918u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28991Cu;
        goto label_28991c;
    }
    ctx->pc = 0x289914u;
    SET_GPR_U32(ctx, 31, 0x28991Cu);
    ctx->pc = 0x289918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x207130u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_menu_accept_0x207130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28991Cu; }
    }
    if (ctx->pc != 0x28991Cu) { return; }
    ctx->pc = 0x28991Cu;
label_28991c:
    // 0x28991c: 0x50400043
label_289920:
    if (ctx->pc == 0x289920u) {
        ctx->pc = 0x289920u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x289924u;
        goto label_289924;
    }
    ctx->pc = 0x28991Cu;
    {
        const bool branch_taken_0x28991c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28991c) {
            ctx->pc = 0x289920u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x289924u;
label_289924:
    // 0x289924: 0xc0a11f8
label_289928:
    if (ctx->pc == 0x289928u) {
        ctx->pc = 0x289928u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28992Cu;
        goto label_28992c;
    }
    ctx->pc = 0x289924u;
    SET_GPR_U32(ctx, 31, 0x28992Cu);
    ctx->pc = 0x289928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2847E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        useable_class_0x2847e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28992Cu; }
    }
    if (ctx->pc != 0x28992Cu) { return; }
    ctx->pc = 0x28992Cu;
label_28992c:
    // 0x28992c: 0x1040003c
label_289930:
    if (ctx->pc == 0x289930u) {
        ctx->pc = 0x289934u;
        goto label_289934;
    }
    ctx->pc = 0x28992Cu;
    {
        const bool branch_taken_0x28992c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28992c) {
            ctx->pc = 0x289A20u;
            goto label_289a20;
        }
    }
    ctx->pc = 0x289934u;
label_289934:
    // 0x289934: 0xc0981a6
label_289938:
    if (ctx->pc == 0x289938u) {
        ctx->pc = 0x28993Cu;
        goto label_28993c;
    }
    ctx->pc = 0x289934u;
    SET_GPR_U32(ctx, 31, 0x28993Cu);
    ctx->pc = 0x260698u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCursorSelect_0x260698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28993Cu; }
    }
    if (ctx->pc != 0x28993Cu) { return; }
    ctx->pc = 0x28993Cu;
label_28993c:
    // 0x28993c: 0x8e622ac4
    ctx->pc = 0x28993cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 10948)));
label_289940:
    // 0x289940: 0x10400022
label_289944:
    if (ctx->pc == 0x289944u) {
        ctx->pc = 0x289944u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x289948u;
        goto label_289948;
    }
    ctx->pc = 0x289940u;
    {
        const bool branch_taken_0x289940 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x289944u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x289940) {
            ctx->pc = 0x2899CCu;
            goto label_2899cc;
        }
    }
    ctx->pc = 0x289948u;
label_289948:
    // 0x289948: 0x280202d
    ctx->pc = 0x289948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28994c:
    // 0x28994c: 0xc08c544
label_289950:
    if (ctx->pc == 0x289950u) {
        ctx->pc = 0x289950u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->pc = 0x289954u;
        goto label_289954;
    }
    ctx->pc = 0x28994Cu;
    SET_GPR_U32(ctx, 31, 0x289954u);
    ctx->pc = 0x289950u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->pc = 0x231510u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_player_0x231510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289954u; }
    }
    if (ctx->pc != 0x289954u) { return; }
    ctx->pc = 0x289954u;
label_289954:
    // 0x289954: 0xae702ac4
    ctx->pc = 0x289954u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10948), GPR_U32(ctx, 16));
label_289958:
    // 0x289958: 0xae702ad4
    ctx->pc = 0x289958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 16));
label_28995c:
    // 0x28995c: 0x280202d
    ctx->pc = 0x28995cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_289960:
    // 0x289960: 0xc0a18a2
label_289964:
    if (ctx->pc == 0x289964u) {
        ctx->pc = 0x289964u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x289968u;
        goto label_289968;
    }
    ctx->pc = 0x289960u;
    SET_GPR_U32(ctx, 31, 0x289968u);
    ctx->pc = 0x289964u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x286288u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_sel_menu_0x286288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289968u; }
    }
    if (ctx->pc != 0x289968u) { return; }
    ctx->pc = 0x289968u;
label_289968:
    // 0x289968: 0x280202d
    ctx->pc = 0x289968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28996c:
    // 0x28996c: 0xc0a1862
label_289970:
    if (ctx->pc == 0x289970u) {
        ctx->pc = 0x289970u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1005));
        ctx->pc = 0x289974u;
        goto label_289974;
    }
    ctx->pc = 0x28996Cu;
    SET_GPR_U32(ctx, 31, 0x289974u);
    ctx->pc = 0x289970u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1005));
    ctx->pc = 0x286188u;
    {
        const uint32_t __entryPc = ctx->pc;
        sel_set_choice_0x286188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289974u; }
    }
    if (ctx->pc != 0x289974u) { return; }
    ctx->pc = 0x289974u;
label_289974:
    // 0x289974: 0x280202d
    ctx->pc = 0x289974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_289978:
    // 0x289978: 0xc0a155a
label_28997c:
    if (ctx->pc == 0x28997Cu) {
        ctx->pc = 0x28997Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->pc = 0x289980u;
        goto label_289980;
    }
    ctx->pc = 0x289978u;
    SET_GPR_U32(ctx, 31, 0x289980u);
    ctx->pc = 0x28997Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->pc = 0x285568u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_selected_blit_0x285568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289980u; }
    }
    if (ctx->pc != 0x289980u) { return; }
    ctx->pc = 0x289980u;
label_289980:
    // 0x289980: 0x8e630010
    ctx->pc = 0x289980u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_289984:
    // 0x289984: 0x24020010
    ctx->pc = 0x289984u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_289988:
    // 0x289988: 0x50620005
label_28998c:
    if (ctx->pc == 0x28998Cu) {
        ctx->pc = 0x28998Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289990u;
        goto label_289990;
    }
    ctx->pc = 0x289988u;
    {
        const bool branch_taken_0x289988 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x289988) {
            ctx->pc = 0x28998Cu;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2899A0u;
            goto label_2899a0;
        }
    }
    ctx->pc = 0x289990u;
label_289990:
    // 0x289990: 0x8e620104
    ctx->pc = 0x289990u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_289994:
    // 0x289994: 0x50400003
label_289998:
    if (ctx->pc == 0x289998u) {
        ctx->pc = 0x289998u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 6684)));
        ctx->pc = 0x28999Cu;
        goto label_28999c;
    }
    ctx->pc = 0x289994u;
    {
        const bool branch_taken_0x289994 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x289994) {
            ctx->pc = 0x289998u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 6684)));
            ctx->pc = 0x2899A4u;
            goto label_2899a4;
        }
    }
    ctx->pc = 0x28999Cu;
label_28999c:
    // 0x28999c: 0x802d
    ctx->pc = 0x28999cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2899a0:
    // 0x2899a0: 0x8e621a1c
    ctx->pc = 0x2899a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 6684)));
label_2899a4:
    // 0x2899a4: 0x14400005
label_2899a8:
    if (ctx->pc == 0x2899A8u) {
        ctx->pc = 0x2899A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2899ACu;
        goto label_2899ac;
    }
    ctx->pc = 0x2899A4u;
    {
        const bool branch_taken_0x2899a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2899A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2899a4) {
            ctx->pc = 0x2899BCu;
            goto label_2899bc;
        }
    }
    ctx->pc = 0x2899ACu;
label_2899ac:
    // 0x2899ac: 0xc097724
label_2899b0:
    if (ctx->pc == 0x2899B0u) {
        ctx->pc = 0x2899B0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2899B4u;
        goto label_2899b4;
    }
    ctx->pc = 0x2899ACu;
    SET_GPR_U32(ctx, 31, 0x2899B4u);
    ctx->pc = 0x2899B0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25DC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioWelcome_0x25dc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2899B4u; }
    }
    if (ctx->pc != 0x2899B4u) { return; }
    ctx->pc = 0x2899B4u;
label_2899b4:
    // 0x2899b4: 0x10000009
label_2899b8:
    if (ctx->pc == 0x2899B8u) {
        ctx->pc = 0x2899B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2899BCu;
        goto label_2899bc;
    }
    ctx->pc = 0x2899B4u;
    {
        const bool branch_taken_0x2899b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2899B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2899b4) {
            ctx->pc = 0x2899DCu;
            goto label_2899dc;
        }
    }
    ctx->pc = 0x2899BCu;
label_2899bc:
    // 0x2899bc: 0xc09773c
label_2899c0:
    if (ctx->pc == 0x2899C0u) {
        ctx->pc = 0x2899C0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2899C4u;
        goto label_2899c4;
    }
    ctx->pc = 0x2899BCu;
    SET_GPR_U32(ctx, 31, 0x2899C4u);
    ctx->pc = 0x2899C0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25DCF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioWelcomeBack_0x25dcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2899C4u; }
    }
    if (ctx->pc != 0x2899C4u) { return; }
    ctx->pc = 0x2899C4u;
label_2899c4:
    // 0x2899c4: 0x10000005
label_2899c8:
    if (ctx->pc == 0x2899C8u) {
        ctx->pc = 0x2899C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2899CCu;
        goto label_2899cc;
    }
    ctx->pc = 0x2899C4u;
    {
        const bool branch_taken_0x2899c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2899C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2899c4) {
            ctx->pc = 0x2899DCu;
            goto label_2899dc;
        }
    }
    ctx->pc = 0x2899CCu;
label_2899cc:
    // 0x2899cc: 0x280202d
    ctx->pc = 0x2899ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2899d0:
    // 0x2899d0: 0xc0a2010
label_2899d4:
    if (ctx->pc == 0x2899D4u) {
        ctx->pc = 0x2899D4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->pc = 0x2899D8u;
        goto label_2899d8;
    }
    ctx->pc = 0x2899D0u;
    SET_GPR_U32(ctx, 31, 0x2899D8u);
    ctx->pc = 0x2899D4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->pc = 0x288040u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_selected_0x288040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2899D8u; }
    }
    if (ctx->pc != 0x2899D8u) { return; }
    ctx->pc = 0x2899D8u;
label_2899d8:
    // 0x2899d8: 0x280202d
    ctx->pc = 0x2899d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2899dc:
    // 0x2899dc: 0x24050002
    ctx->pc = 0x2899dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_2899e0:
    // 0x2899e0: 0xc0a1204
label_2899e4:
    if (ctx->pc == 0x2899E4u) {
        ctx->pc = 0x2899E4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2899E8u;
        goto label_2899e8;
    }
    ctx->pc = 0x2899E0u;
    SET_GPR_U32(ctx, 31, 0x2899E8u);
    ctx->pc = 0x2899E4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x284810u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_blit_fx_0x284810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2899E8u; }
    }
    if (ctx->pc != 0x2899E8u) { return; }
    ctx->pc = 0x2899E8u;
label_2899e8:
    // 0x2899e8: 0x280202d
    ctx->pc = 0x2899e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2899ec:
    // 0x2899ec: 0x24050003
    ctx->pc = 0x2899ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
label_2899f0:
    // 0x2899f0: 0xc0a1204
label_2899f4:
    if (ctx->pc == 0x2899F4u) {
        ctx->pc = 0x2899F4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2899F8u;
        goto label_2899f8;
    }
    ctx->pc = 0x2899F0u;
    SET_GPR_U32(ctx, 31, 0x2899F8u);
    ctx->pc = 0x2899F4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x284810u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_blit_fx_0x284810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2899F8u; }
    }
    if (ctx->pc != 0x2899F8u) { return; }
    ctx->pc = 0x2899F8u;
label_2899f8:
    // 0x2899f8: 0x280202d
    ctx->pc = 0x2899f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2899fc:
    // 0x2899fc: 0x24050006
    ctx->pc = 0x2899fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
label_289a00:
    // 0x289a00: 0xc0a1204
label_289a04:
    if (ctx->pc == 0x289A04u) {
        ctx->pc = 0x289A04u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x289A08u;
        goto label_289a08;
    }
    ctx->pc = 0x289A00u;
    SET_GPR_U32(ctx, 31, 0x289A08u);
    ctx->pc = 0x289A04u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x284810u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_blit_fx_0x284810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289A08u; }
    }
    if (ctx->pc != 0x289A08u) { return; }
    ctx->pc = 0x289A08u;
label_289a08:
    // 0x289a08: 0x280202d
    ctx->pc = 0x289a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_289a0c:
    // 0x289a0c: 0x24050005
    ctx->pc = 0x289a0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
label_289a10:
    // 0x289a10: 0xc0a1204
label_289a14:
    if (ctx->pc == 0x289A14u) {
        ctx->pc = 0x289A14u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x289A18u;
        goto label_289a18;
    }
    ctx->pc = 0x289A10u;
    SET_GPR_U32(ctx, 31, 0x289A18u);
    ctx->pc = 0x289A14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x284810u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_blit_fx_0x284810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289A18u; }
    }
    if (ctx->pc != 0x289A18u) { return; }
    ctx->pc = 0x289A18u;
label_289a18:
    // 0x289a18: 0x10000004
label_289a1c:
    if (ctx->pc == 0x289A1Cu) {
        ctx->pc = 0x289A1Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x289A20u;
        goto label_289a20;
    }
    ctx->pc = 0x289A18u;
    {
        const bool branch_taken_0x289a18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289A1Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        if (branch_taken_0x289a18) {
            ctx->pc = 0x289A2Cu;
            goto label_289a2c;
        }
    }
    ctx->pc = 0x289A20u;
label_289a20:
    // 0x289a20: 0xc098196
label_289a24:
    if (ctx->pc == 0x289A24u) {
        ctx->pc = 0x289A28u;
        goto label_289a28;
    }
    ctx->pc = 0x289A20u;
    SET_GPR_U32(ctx, 31, 0x289A28u);
    ctx->pc = 0x260658u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioBuzzer_0x260658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289A28u; }
    }
    if (ctx->pc != 0x289A28u) { return; }
    ctx->pc = 0x289A28u;
label_289a28:
    // 0x289a28: 0x8e6300fc
    ctx->pc = 0x289a28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_289a2c:
    // 0x289a2c: 0x24020002
    ctx->pc = 0x289a2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_289a30:
    // 0x289a30: 0x54620070
label_289a34:
    if (ctx->pc == 0x289A34u) {
        ctx->pc = 0x289A34u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x289A38u;
        goto label_289a38;
    }
    ctx->pc = 0x289A30u;
    {
        const bool branch_taken_0x289a30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x289a30) {
            ctx->pc = 0x289A34u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x289BF4u;
            goto label_289bf4;
        }
    }
    ctx->pc = 0x289A38u;
label_289a38:
    // 0x289a38: 0xc0a1576
label_289a3c:
    if (ctx->pc == 0x289A3Cu) {
        ctx->pc = 0x289A3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289A40u;
        goto label_289a40;
    }
    ctx->pc = 0x289A38u;
    SET_GPR_U32(ctx, 31, 0x289A40u);
    ctx->pc = 0x289A3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2855D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        update_class_spec_0x2855d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289A40u; }
    }
    if (ctx->pc != 0x289A40u) { return; }
    ctx->pc = 0x289A40u;
label_289a40:
    // 0x289a40: 0xc0a166c
label_289a44:
    if (ctx->pc == 0x289A44u) {
        ctx->pc = 0x289A44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289A48u;
        goto label_289a48;
    }
    ctx->pc = 0x289A40u;
    SET_GPR_U32(ctx, 31, 0x289A48u);
    ctx->pc = 0x289A44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2859B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        update_class_attr_0x2859b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289A48u; }
    }
    if (ctx->pc != 0x289A48u) { return; }
    ctx->pc = 0x289A48u;
label_289a48:
    // 0x289a48: 0x1000006a
label_289a4c:
    if (ctx->pc == 0x289A4Cu) {
        ctx->pc = 0x289A4Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x289A50u;
        goto label_289a50;
    }
    ctx->pc = 0x289A48u;
    {
        const bool branch_taken_0x289a48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289A4Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x289a48) {
            ctx->pc = 0x289BF4u;
            goto label_289bf4;
        }
    }
    ctx->pc = 0x289A50u;
label_289a50:
    // 0x289a50: 0x56e00047
label_289a54:
    if (ctx->pc == 0x289A54u) {
        ctx->pc = 0x289A54u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x289A58u;
        goto label_289a58;
    }
    ctx->pc = 0x289A50u;
    {
        const bool branch_taken_0x289a50 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        if (branch_taken_0x289a50) {
            ctx->pc = 0x289A54u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->pc = 0x289B70u;
            goto label_289b70;
        }
    }
    ctx->pc = 0x289A58u;
label_289a58:
    // 0x289a58: 0x29e1007
    ctx->pc = 0x289a58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 30), GPR_U32(ctx, 20) & 0x1F));
label_289a5c:
    // 0x289a5c: 0x30420001
    ctx->pc = 0x289a5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_289a60:
    // 0x289a60: 0x54400043
label_289a64:
    if (ctx->pc == 0x289A64u) {
        ctx->pc = 0x289A64u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x289A68u;
        goto label_289a68;
    }
    ctx->pc = 0x289A60u;
    {
        const bool branch_taken_0x289a60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x289a60) {
            ctx->pc = 0x289A64u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->pc = 0x289B70u;
            goto label_289b70;
        }
    }
    ctx->pc = 0x289A68u;
label_289a68:
    // 0x289a68: 0x3c030035
    ctx->pc = 0x289a68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_289a6c:
    // 0x289a6c: 0x2463a2f0
    ctx->pc = 0x289a6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943472));
label_289a70:
    // 0x289a70: 0x141080
    ctx->pc = 0x289a70u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_289a74:
    // 0x289a74: 0x431021
    ctx->pc = 0x289a74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_289a78:
    // 0x289a78: 0x8c500000
    ctx->pc = 0x289a78u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_289a7c:
    // 0x289a7c: 0x26100040
    ctx->pc = 0x289a7cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
label_289a80:
    // 0x289a80: 0x108023
    ctx->pc = 0x289a80u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_289a84:
    // 0x289a84: 0x200202d
    ctx->pc = 0x289a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289a88:
    // 0x289a88: 0x2405008e
    ctx->pc = 0x289a88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 142));
label_289a8c:
    // 0x289a8c: 0x302d
    ctx->pc = 0x289a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289a90:
    // 0x289a90: 0x3c0700ff
    ctx->pc = 0x289a90u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_289a94:
    // 0x289a94: 0x34e7ffff
    ctx->pc = 0x289a94u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_289a98:
    // 0x289a98: 0x3c013f99
    ctx->pc = 0x289a98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16281 << 16));
label_289a9c:
    // 0x289a9c: 0x3421999a
    ctx->pc = 0x289a9cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
label_289aa0:
    // 0x289aa0: 0x44816000
    ctx->pc = 0x289aa0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_289aa4:
    // 0x289aa4: 0x3c08003b
    ctx->pc = 0x289aa4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_289aa8:
    // 0x289aa8: 0xc080510
label_289aac:
    if (ctx->pc == 0x289AACu) {
        ctx->pc = 0x289AACu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956936));
        ctx->pc = 0x289AB0u;
        goto label_289ab0;
    }
    ctx->pc = 0x289AA8u;
    SET_GPR_U32(ctx, 31, 0x289AB0u);
    ctx->pc = 0x289AACu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956936));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289AB0u; }
    }
    if (ctx->pc != 0x289AB0u) { return; }
    ctx->pc = 0x289AB0u;
label_289ab0:
    // 0x289ab0: 0x200202d
    ctx->pc = 0x289ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289ab4:
    // 0x289ab4: 0x2405009a
    ctx->pc = 0x289ab4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 154));
label_289ab8:
    // 0x289ab8: 0x302d
    ctx->pc = 0x289ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289abc:
    // 0x289abc: 0x3c0700ff
    ctx->pc = 0x289abcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_289ac0:
    // 0x289ac0: 0x34e7ffff
    ctx->pc = 0x289ac0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_289ac4:
    // 0x289ac4: 0x3c013f99
    ctx->pc = 0x289ac4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16281 << 16));
label_289ac8:
    // 0x289ac8: 0x3421999a
    ctx->pc = 0x289ac8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
label_289acc:
    // 0x289acc: 0x44816000
    ctx->pc = 0x289accu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_289ad0:
    // 0x289ad0: 0x3c08003b
    ctx->pc = 0x289ad0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_289ad4:
    // 0x289ad4: 0xc080510
label_289ad8:
    if (ctx->pc == 0x289AD8u) {
        ctx->pc = 0x289AD8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956952));
        ctx->pc = 0x289ADCu;
        goto label_289adc;
    }
    ctx->pc = 0x289AD4u;
    SET_GPR_U32(ctx, 31, 0x289ADCu);
    ctx->pc = 0x289AD8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956952));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289ADCu; }
    }
    if (ctx->pc != 0x289ADCu) { return; }
    ctx->pc = 0x289ADCu;
label_289adc:
    // 0x289adc: 0x200202d
    ctx->pc = 0x289adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289ae0:
    // 0x289ae0: 0x240500a6
    ctx->pc = 0x289ae0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 166));
label_289ae4:
    // 0x289ae4: 0x302d
    ctx->pc = 0x289ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289ae8:
    // 0x289ae8: 0x3c0700ff
    ctx->pc = 0x289ae8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_289aec:
    // 0x289aec: 0x34e7ffff
    ctx->pc = 0x289aecu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_289af0:
    // 0x289af0: 0x3c013f99
    ctx->pc = 0x289af0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16281 << 16));
label_289af4:
    // 0x289af4: 0x3421999a
    ctx->pc = 0x289af4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
label_289af8:
    // 0x289af8: 0x44816000
    ctx->pc = 0x289af8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_289afc:
    // 0x289afc: 0x3c08003b
    ctx->pc = 0x289afcu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_289b00:
    // 0x289b00: 0xc080510
label_289b04:
    if (ctx->pc == 0x289B04u) {
        ctx->pc = 0x289B04u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956968));
        ctx->pc = 0x289B08u;
        goto label_289b08;
    }
    ctx->pc = 0x289B00u;
    SET_GPR_U32(ctx, 31, 0x289B08u);
    ctx->pc = 0x289B04u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956968));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289B08u; }
    }
    if (ctx->pc != 0x289B08u) { return; }
    ctx->pc = 0x289B08u;
label_289b08:
    // 0x289b08: 0x200202d
    ctx->pc = 0x289b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289b0c:
    // 0x289b0c: 0x240500b2
    ctx->pc = 0x289b0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 178));
label_289b10:
    // 0x289b10: 0x302d
    ctx->pc = 0x289b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289b14:
    // 0x289b14: 0x3c0700ff
    ctx->pc = 0x289b14u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_289b18:
    // 0x289b18: 0x34e7ffff
    ctx->pc = 0x289b18u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_289b1c:
    // 0x289b1c: 0x3c013f99
    ctx->pc = 0x289b1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16281 << 16));
label_289b20:
    // 0x289b20: 0x3421999a
    ctx->pc = 0x289b20u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
label_289b24:
    // 0x289b24: 0x44816000
    ctx->pc = 0x289b24u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_289b28:
    // 0x289b28: 0x3c08003b
    ctx->pc = 0x289b28u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_289b2c:
    // 0x289b2c: 0xc080510
label_289b30:
    if (ctx->pc == 0x289B30u) {
        ctx->pc = 0x289B30u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956120));
        ctx->pc = 0x289B34u;
        goto label_289b34;
    }
    ctx->pc = 0x289B2Cu;
    SET_GPR_U32(ctx, 31, 0x289B34u);
    ctx->pc = 0x289B30u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956120));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289B34u; }
    }
    if (ctx->pc != 0x289B34u) { return; }
    ctx->pc = 0x289B34u;
label_289b34:
    // 0x289b34: 0x3c030031
    ctx->pc = 0x289b34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_289b38:
    // 0x289b38: 0x24631b90
    ctx->pc = 0x289b38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
label_289b3c:
    // 0x289b3c: 0x2402003c
    ctx->pc = 0x289b3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_289b40:
    // 0x289b40: 0x2821018
    ctx->pc = 0x289b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_289b44:
    // 0x289b44: 0x621821
    ctx->pc = 0x289b44u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_289b48:
    // 0x289b48: 0x8c620008
    ctx->pc = 0x289b48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_289b4c:
    // 0x289b4c: 0x3c030004
    ctx->pc = 0x289b4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
label_289b50:
    // 0x289b50: 0x431024
    ctx->pc = 0x289b50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_289b54:
    // 0x289b54: 0x10400005
label_289b58:
    if (ctx->pc == 0x289B58u) {
        ctx->pc = 0x289B58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x289B5Cu;
        goto label_289b5c;
    }
    ctx->pc = 0x289B54u;
    {
        const bool branch_taken_0x289b54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x289B58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x289b54) {
            ctx->pc = 0x289B6Cu;
            goto label_289b6c;
        }
    }
    ctx->pc = 0x289B5Cu;
label_289b5c:
    // 0x289b5c: 0xae6200fc
    ctx->pc = 0x289b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 252), GPR_U32(ctx, 2));
label_289b60:
    // 0x289b60: 0x24020001
    ctx->pc = 0x289b60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_289b64:
    // 0x289b64: 0xae622ad4
    ctx->pc = 0x289b64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10964), GPR_U32(ctx, 2));
label_289b68:
    // 0x289b68: 0xae622ad8
    ctx->pc = 0x289b68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10968), GPR_U32(ctx, 2));
label_289b6c:
    // 0x289b6c: 0x8e63000c
    ctx->pc = 0x289b6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_289b70:
    // 0x289b70: 0x24020002
    ctx->pc = 0x289b70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_289b74:
    // 0x289b74: 0x5462000f
label_289b78:
    if (ctx->pc == 0x289B78u) {
        ctx->pc = 0x289B78u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x289B7Cu;
        goto label_289b7c;
    }
    ctx->pc = 0x289B74u;
    {
        const bool branch_taken_0x289b74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x289b74) {
            ctx->pc = 0x289B78u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->pc = 0x289BB4u;
            goto label_289bb4;
        }
    }
    ctx->pc = 0x289B7Cu;
label_289b7c:
    // 0x289b7c: 0x3c020032
    ctx->pc = 0x289b7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_289b80:
    // 0x289b80: 0x8e630104
    ctx->pc = 0x289b80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_289b84:
    // 0x289b84: 0x8c421540
    ctx->pc = 0x289b84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5440)));
label_289b88:
    // 0x289b88: 0x5462000a
label_289b8c:
    if (ctx->pc == 0x289B8Cu) {
        ctx->pc = 0x289B8Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x289B90u;
        goto label_289b90;
    }
    ctx->pc = 0x289B88u;
    {
        const bool branch_taken_0x289b88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x289b88) {
            ctx->pc = 0x289B8Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->pc = 0x289BB4u;
            goto label_289bb4;
        }
    }
    ctx->pc = 0x289B90u;
label_289b90:
    // 0x289b90: 0x280202d
    ctx->pc = 0x289b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_289b94:
    // 0x289b94: 0x24050008
    ctx->pc = 0x289b94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
label_289b98:
    // 0x289b98: 0x302d
    ctx->pc = 0x289b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289b9c:
    // 0x289b9c: 0x382d
    ctx->pc = 0x289b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289ba0:
    // 0x289ba0: 0x3c08003b
    ctx->pc = 0x289ba0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_289ba4:
    // 0x289ba4: 0xc0a139c
label_289ba8:
    if (ctx->pc == 0x289BA8u) {
        ctx->pc = 0x289BA8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955384));
        ctx->pc = 0x289BACu;
        goto label_289bac;
    }
    ctx->pc = 0x289BA4u;
    SET_GPR_U32(ctx, 31, 0x289BACu);
    ctx->pc = 0x289BA8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955384));
    ctx->pc = 0x284E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_tex_0x284e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289BACu; }
    }
    if (ctx->pc != 0x289BACu) { return; }
    ctx->pc = 0x289BACu;
label_289bac:
    // 0x289bac: 0x10000011
label_289bb0:
    if (ctx->pc == 0x289BB0u) {
        ctx->pc = 0x289BB0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x289BB4u;
        goto label_289bb4;
    }
    ctx->pc = 0x289BACu;
    {
        const bool branch_taken_0x289bac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289BB0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x289bac) {
            ctx->pc = 0x289BF4u;
            goto label_289bf4;
        }
    }
    ctx->pc = 0x289BB4u;
label_289bb4:
    // 0x289bb4: 0x21080
    ctx->pc = 0x289bb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_289bb8:
    // 0x289bb8: 0x3c090032
    ctx->pc = 0x289bb8u;
    SET_GPR_U32(ctx, 9, ((uint32_t)50 << 16));
label_289bbc:
    // 0x289bbc: 0x25291428
    ctx->pc = 0x289bbcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 5160));
label_289bc0:
    // 0x289bc0: 0x280202d
    ctx->pc = 0x289bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_289bc4:
    // 0x289bc4: 0x24050008
    ctx->pc = 0x289bc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
label_289bc8:
    // 0x289bc8: 0x302d
    ctx->pc = 0x289bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289bcc:
    // 0x289bcc: 0x382d
    ctx->pc = 0x289bccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289bd0:
    // 0x289bd0: 0x3c08003b
    ctx->pc = 0x289bd0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_289bd4:
    // 0x289bd4: 0x2508d188
    ctx->pc = 0x289bd4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955400));
label_289bd8:
    // 0x289bd8: 0xc0a139c
label_289bdc:
    if (ctx->pc == 0x289BDCu) {
        ctx->pc = 0x289BDCu;
        SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->pc = 0x289BE0u;
        goto label_289be0;
    }
    ctx->pc = 0x289BD8u;
    SET_GPR_U32(ctx, 31, 0x289BE0u);
    ctx->pc = 0x289BDCu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    ctx->pc = 0x284E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_tex_0x284e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289BE0u; }
    }
    if (ctx->pc != 0x289BE0u) { return; }
    ctx->pc = 0x289BE0u;
label_289be0:
    // 0x289be0: 0x10000004
label_289be4:
    if (ctx->pc == 0x289BE4u) {
        ctx->pc = 0x289BE4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x289BE8u;
        goto label_289be8;
    }
    ctx->pc = 0x289BE0u;
    {
        const bool branch_taken_0x289be0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289BE4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x289be0) {
            ctx->pc = 0x289BF4u;
            goto label_289bf4;
        }
    }
    ctx->pc = 0x289BE8u;
label_289be8:
    // 0x289be8: 0xc0a1204
label_289bec:
    if (ctx->pc == 0x289BECu) {
        ctx->pc = 0x289BECu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x289BF0u;
        goto label_289bf0;
    }
    ctx->pc = 0x289BE8u;
    SET_GPR_U32(ctx, 31, 0x289BF0u);
    ctx->pc = 0x289BECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x284810u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_blit_fx_0x284810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289BF0u; }
    }
    if (ctx->pc != 0x289BF0u) { return; }
    ctx->pc = 0x289BF0u;
label_289bf0:
    // 0x289bf0: 0x26940001
    ctx->pc = 0x289bf0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_289bf4:
    // 0x289bf4: 0x2a820004
    ctx->pc = 0x289bf4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
label_289bf8:
    // 0x289bf8: 0x1440f9f7
label_289bfc:
    if (ctx->pc == 0x289BFCu) {
        ctx->pc = 0x289BFCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 11008));
        ctx->pc = 0x289C00u;
        goto label_289c00;
    }
    ctx->pc = 0x289BF8u;
    {
        const bool branch_taken_0x289bf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x289BFCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 11008));
        if (branch_taken_0x289bf8) {
            ctx->pc = 0x2883D8u;
            goto label_2883d8;
        }
    }
    ctx->pc = 0x289C00u;
label_289c00:
    // 0x289c00: 0x3c020031
    ctx->pc = 0x289c00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_289c04:
    // 0x289c04: 0x8c430018
    ctx->pc = 0x289c04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_289c08:
    // 0x289c08: 0x2402400b
    ctx->pc = 0x289c08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
label_289c0c:
    // 0x289c0c: 0x1462003d
label_289c10:
    if (ctx->pc == 0x289C10u) {
        ctx->pc = 0x289C14u;
        goto label_289c14;
    }
    ctx->pc = 0x289C0Cu;
    {
        const bool branch_taken_0x289c0c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x289c0c) {
            ctx->pc = 0x289D04u;
            goto label_289d04;
        }
    }
    ctx->pc = 0x289C14u;
label_289c14:
    // 0x289c14: 0xc089a16
label_289c18:
    if (ctx->pc == 0x289C18u) {
        ctx->pc = 0x289C1Cu;
        goto label_289c1c;
    }
    ctx->pc = 0x289C14u;
    SET_GPR_U32(ctx, 31, 0x289C1Cu);
    ctx->pc = 0x226858u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadTowerDone_0x226858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289C1Cu; }
    }
    if (ctx->pc != 0x289C1Cu) { return; }
    ctx->pc = 0x289C1Cu;
label_289c1c:
    // 0x289c1c: 0x14400011
label_289c20:
    if (ctx->pc == 0x289C20u) {
        ctx->pc = 0x289C20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x289C24u;
        goto label_289c24;
    }
    ctx->pc = 0x289C1Cu;
    {
        const bool branch_taken_0x289c1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x289C20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x289c1c) {
            ctx->pc = 0x289C64u;
            goto label_289c64;
        }
    }
    ctx->pc = 0x289C24u;
label_289c24:
    // 0x289c24: 0x16e00005
label_289c28:
    if (ctx->pc == 0x289C28u) {
        ctx->pc = 0x289C28u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->pc = 0x289C2Cu;
        goto label_289c2c;
    }
    ctx->pc = 0x289C24u;
    {
        const bool branch_taken_0x289c24 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        ctx->pc = 0x289C28u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
        if (branch_taken_0x289c24) {
            ctx->pc = 0x289C3Cu;
            goto label_289c3c;
        }
    }
    ctx->pc = 0x289C2Cu;
label_289c2c:
    // 0x289c2c: 0x3c020035
    ctx->pc = 0x289c2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_289c30:
    // 0x289c30: 0x8c42a3bc
    ctx->pc = 0x289c30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943676)));
label_289c34:
    // 0x289c34: 0x10400033
label_289c38:
    if (ctx->pc == 0x289C38u) {
        ctx->pc = 0x289C38u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289C3Cu;
        goto label_289c3c;
    }
    ctx->pc = 0x289C34u;
    {
        const bool branch_taken_0x289c34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x289C38u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x289c34) {
            ctx->pc = 0x289D04u;
            goto label_289d04;
        }
    }
    ctx->pc = 0x289C3Cu;
label_289c3c:
    // 0x289c3c: 0x240500ea
    ctx->pc = 0x289c3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 234));
label_289c40:
    // 0x289c40: 0x3c013f80
    ctx->pc = 0x289c40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_289c44:
    // 0x289c44: 0x44816000
    ctx->pc = 0x289c44u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_289c48:
    // 0x289c48: 0x3c06003b
    ctx->pc = 0x289c48u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_289c4c:
    // 0x289c4c: 0xc080a9a
label_289c50:
    if (ctx->pc == 0x289C50u) {
        ctx->pc = 0x289C50u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294956912));
        ctx->pc = 0x289C54u;
        goto label_289c54;
    }
    ctx->pc = 0x289C4Cu;
    SET_GPR_U32(ctx, 31, 0x289C54u);
    ctx->pc = 0x289C50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294956912));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289C54u; }
    }
    if (ctx->pc != 0x289C54u) { return; }
    ctx->pc = 0x289C54u;
label_289c54:
    // 0x289c54: 0xc08da4e
label_289c58:
    if (ctx->pc == 0x289C58u) {
        ctx->pc = 0x289C58u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x289C5Cu;
        goto label_289c5c;
    }
    ctx->pc = 0x289C54u;
    SET_GPR_U32(ctx, 31, 0x289C5Cu);
    ctx->pc = 0x289C58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x236938u;
    {
        const uint32_t __entryPc = ctx->pc;
        WritePlayerInfo_0x236938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289C5Cu; }
    }
    if (ctx->pc != 0x289C5Cu) { return; }
    ctx->pc = 0x289C5Cu;
label_289c5c:
    // 0x289c5c: 0x10000029
label_289c60:
    if (ctx->pc == 0x289C60u) {
        ctx->pc = 0x289C60u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289C64u;
        goto label_289c64;
    }
    ctx->pc = 0x289C5Cu;
    {
        const bool branch_taken_0x289c5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289C60u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x289c5c) {
            ctx->pc = 0x289D04u;
            goto label_289d04;
        }
    }
    ctx->pc = 0x289C64u;
label_289c64:
    // 0x289c64: 0x8c43e808
    ctx->pc = 0x289c64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
label_289c68:
    // 0x289c68: 0x24020008
    ctx->pc = 0x289c68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_289c6c:
    // 0x289c6c: 0x14620017
label_289c70:
    if (ctx->pc == 0x289C70u) {
        ctx->pc = 0x289C70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x289C74u;
        goto label_289c74;
    }
    ctx->pc = 0x289C6Cu;
    {
        const bool branch_taken_0x289c6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x289C70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x289c6c) {
            ctx->pc = 0x289CCCu;
            goto label_289ccc;
        }
    }
    ctx->pc = 0x289C74u;
label_289c74:
    // 0x289c74: 0x3c020034
    ctx->pc = 0x289c74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_289c78:
    // 0x289c78: 0x8c43e80c
    ctx->pc = 0x289c78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961164)));
label_289c7c:
    // 0x289c7c: 0x24020003
    ctx->pc = 0x289c7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_289c80:
    // 0x289c80: 0x14620012
label_289c84:
    if (ctx->pc == 0x289C84u) {
        ctx->pc = 0x289C84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x289C88u;
        goto label_289c88;
    }
    ctx->pc = 0x289C80u;
    {
        const bool branch_taken_0x289c80 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x289C84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x289c80) {
            ctx->pc = 0x289CCCu;
            goto label_289ccc;
        }
    }
    ctx->pc = 0x289C88u;
label_289c88:
    // 0x289c88: 0x16e00003
label_289c8c:
    if (ctx->pc == 0x289C8Cu) {
        ctx->pc = 0x289C8Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943676)));
        ctx->pc = 0x289C90u;
        goto label_289c90;
    }
    ctx->pc = 0x289C88u;
    {
        const bool branch_taken_0x289c88 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        ctx->pc = 0x289C8Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943676)));
        if (branch_taken_0x289c88) {
            ctx->pc = 0x289C98u;
            goto label_289c98;
        }
    }
    ctx->pc = 0x289C90u;
label_289c90:
    // 0x289c90: 0x1040001c
label_289c94:
    if (ctx->pc == 0x289C94u) {
        ctx->pc = 0x289C98u;
        goto label_289c98;
    }
    ctx->pc = 0x289C90u;
    {
        const bool branch_taken_0x289c90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x289c90) {
            ctx->pc = 0x289D04u;
            goto label_289d04;
        }
    }
    ctx->pc = 0x289C98u;
label_289c98:
    // 0x289c98: 0xc089a1e
label_289c9c:
    if (ctx->pc == 0x289C9Cu) {
        ctx->pc = 0x289C9Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289CA0u;
        goto label_289ca0;
    }
    ctx->pc = 0x289C98u;
    SET_GPR_U32(ctx, 31, 0x289CA0u);
    ctx->pc = 0x289C9Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x226878u;
    {
        const uint32_t __entryPc = ctx->pc;
        EndTower_0x226878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289CA0u; }
    }
    if (ctx->pc != 0x289CA0u) { return; }
    ctx->pc = 0x289CA0u;
label_289ca0:
    // 0x289ca0: 0xc08c684
label_289ca4:
    if (ctx->pc == 0x289CA4u) {
        ctx->pc = 0x289CA4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289CA8u;
        goto label_289ca8;
    }
    ctx->pc = 0x289CA0u;
    SET_GPR_U32(ctx, 31, 0x289CA8u);
    ctx->pc = 0x289CA4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        inactivate_player_0x231a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289CA8u; }
    }
    if (ctx->pc != 0x289CA8u) { return; }
    ctx->pc = 0x289CA8u;
label_289ca8:
    // 0x289ca8: 0x26100001
    ctx->pc = 0x289ca8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_289cac:
    // 0x289cac: 0x2a020004
    ctx->pc = 0x289cacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
label_289cb0:
    // 0x289cb0: 0x1440fffb
label_289cb4:
    if (ctx->pc == 0x289CB4u) {
        ctx->pc = 0x289CB8u;
        goto label_289cb8;
    }
    ctx->pc = 0x289CB0u;
    {
        const bool branch_taken_0x289cb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x289cb0) {
            ctx->pc = 0x289CA0u;
            goto label_289ca0;
        }
    }
    ctx->pc = 0x289CB8u;
label_289cb8:
    // 0x289cb8: 0xc0a0960
label_289cbc:
    if (ctx->pc == 0x289CBCu) {
        ctx->pc = 0x289CBCu;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32768));
        ctx->pc = 0x289CC0u;
        goto label_289cc0;
    }
    ctx->pc = 0x289CB8u;
    SET_GPR_U32(ctx, 31, 0x289CC0u);
    ctx->pc = 0x289CBCu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32768));
    ctx->pc = 0x282580u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_attract_mode_0x282580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289CC0u; }
    }
    if (ctx->pc != 0x289CC0u) { return; }
    ctx->pc = 0x289CC0u;
label_289cc0:
    // 0x289cc0: 0x3c020031
    ctx->pc = 0x289cc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_289cc4:
    // 0x289cc4: 0x10000020
label_289cc8:
    if (ctx->pc == 0x289CC8u) {
        ctx->pc = 0x289CC8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 3664), GPR_U32(ctx, 0));
        ctx->pc = 0x289CCCu;
        goto label_289ccc;
    }
    ctx->pc = 0x289CC4u;
    {
        const bool branch_taken_0x289cc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289CC8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 3664), GPR_U32(ctx, 0));
        if (branch_taken_0x289cc4) {
            ctx->pc = 0x289D48u;
            goto label_289d48;
        }
    }
    ctx->pc = 0x289CCCu;
label_289ccc:
    // 0x289ccc: 0x8c42a3bc
    ctx->pc = 0x289cccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943676)));
label_289cd0:
    // 0x289cd0: 0x1040000c
label_289cd4:
    if (ctx->pc == 0x289CD4u) {
        ctx->pc = 0x289CD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x289CD8u;
        goto label_289cd8;
    }
    ctx->pc = 0x289CD0u;
    {
        const bool branch_taken_0x289cd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x289CD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x289cd0) {
            ctx->pc = 0x289D04u;
            goto label_289d04;
        }
    }
    ctx->pc = 0x289CD8u;
label_289cd8:
    // 0x289cd8: 0xac400e50
    ctx->pc = 0x289cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3664), GPR_U32(ctx, 0));
label_289cdc:
    // 0x289cdc: 0x3c020031
    ctx->pc = 0x289cdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_289ce0:
    // 0x289ce0: 0x8c42f184
    ctx->pc = 0x289ce0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_289ce4:
    // 0x289ce4: 0x10400005
label_289ce8:
    if (ctx->pc == 0x289CE8u) {
        ctx->pc = 0x289CECu;
        goto label_289cec;
    }
    ctx->pc = 0x289CE4u;
    {
        const bool branch_taken_0x289ce4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x289ce4) {
            ctx->pc = 0x289CFCu;
            goto label_289cfc;
        }
    }
    ctx->pc = 0x289CECu;
label_289cec:
    // 0x289cec: 0xc08026e
label_289cf0:
    if (ctx->pc == 0x289CF0u) {
        ctx->pc = 0x289CF4u;
        goto label_289cf4;
    }
    ctx->pc = 0x289CECu;
    SET_GPR_U32(ctx, 31, 0x289CF4u);
    ctx->pc = 0x2009B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DemoEnd_0x2009b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289CF4u; }
    }
    if (ctx->pc != 0x289CF4u) { return; }
    ctx->pc = 0x289CF4u;
label_289cf4:
    // 0x289cf4: 0x10000003
label_289cf8:
    if (ctx->pc == 0x289CF8u) {
        ctx->pc = 0x289CFCu;
        goto label_289cfc;
    }
    ctx->pc = 0x289CF4u;
    {
        const bool branch_taken_0x289cf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x289cf4) {
            ctx->pc = 0x289D04u;
            goto label_289d04;
        }
    }
    ctx->pc = 0x289CFCu;
label_289cfc:
    // 0x289cfc: 0xc0a102e
label_289d00:
    if (ctx->pc == 0x289D00u) {
        ctx->pc = 0x289D04u;
        goto label_289d04;
    }
    ctx->pc = 0x289CFCu;
    SET_GPR_U32(ctx, 31, 0x289D04u);
    ctx->pc = 0x2840B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_titlescreen_0x2840b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289D04u; }
    }
    if (ctx->pc != 0x289D04u) { return; }
    ctx->pc = 0x289D04u;
label_289d04:
    // 0x289d04: 0x12e00005
label_289d08:
    if (ctx->pc == 0x289D08u) {
        ctx->pc = 0x289D08u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        ctx->pc = 0x289D0Cu;
        goto label_289d0c;
    }
    ctx->pc = 0x289D04u;
    {
        const bool branch_taken_0x289d04 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x289D08u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x289d04) {
            ctx->pc = 0x289D1Cu;
            goto label_289d1c;
        }
    }
    ctx->pc = 0x289D0Cu;
label_289d0c:
    // 0x289d0c: 0x8c62a3c0
    ctx->pc = 0x289d0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943680)));
label_289d10:
    // 0x289d10: 0x24420001
    ctx->pc = 0x289d10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_289d14:
    // 0x289d14: 0x10000003
label_289d18:
    if (ctx->pc == 0x289D18u) {
        ctx->pc = 0x289D18u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943680), GPR_U32(ctx, 2));
        ctx->pc = 0x289D1Cu;
        goto label_289d1c;
    }
    ctx->pc = 0x289D14u;
    {
        const bool branch_taken_0x289d14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289D18u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943680), GPR_U32(ctx, 2));
        if (branch_taken_0x289d14) {
            ctx->pc = 0x289D24u;
            goto label_289d24;
        }
    }
    ctx->pc = 0x289D1Cu;
label_289d1c:
    // 0x289d1c: 0x3c020035
    ctx->pc = 0x289d1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_289d20:
    // 0x289d20: 0xac40a3c0
    ctx->pc = 0x289d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943680), GPR_U32(ctx, 0));
label_289d24:
    // 0x289d24: 0x3c020035
    ctx->pc = 0x289d24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_289d28:
    // 0x289d28: 0x8c42a3c0
    ctx->pc = 0x289d28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943680)));
label_289d2c:
    // 0x289d2c: 0x28420009
    ctx->pc = 0x289d2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 9));
label_289d30:
    // 0x289d30: 0x54400006
label_289d34:
    if (ctx->pc == 0x289D34u) {
        ctx->pc = 0x289D34u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289D38u;
        goto label_289d38;
    }
    ctx->pc = 0x289D30u;
    {
        const bool branch_taken_0x289d30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x289d30) {
            ctx->pc = 0x289D34u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x289D4Cu;
            goto label_289d4c;
        }
    }
    ctx->pc = 0x289D38u;
label_289d38:
    // 0x289d38: 0x3c020031
    ctx->pc = 0x289d38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_289d3c:
    // 0x289d3c: 0xac400e50
    ctx->pc = 0x289d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3664), GPR_U32(ctx, 0));
label_289d40:
    // 0x289d40: 0x10000002
label_289d44:
    if (ctx->pc == 0x289D44u) {
        ctx->pc = 0x289D44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x289D48u;
        goto label_289d48;
    }
    ctx->pc = 0x289D40u;
    {
        const bool branch_taken_0x289d40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x289D44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x289d40) {
            ctx->pc = 0x289D4Cu;
            goto label_289d4c;
        }
    }
    ctx->pc = 0x289D48u;
label_289d48:
    // 0x289d48: 0x102d
    ctx->pc = 0x289d48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289d4c:
    // 0x289d4c: 0xdfbf00a0
    ctx->pc = 0x289d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_289d50:
    // 0x289d50: 0xdfbe0090
    ctx->pc = 0x289d50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_289d54:
    // 0x289d54: 0xdfb70080
    ctx->pc = 0x289d54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_289d58:
    // 0x289d58: 0xdfb60070
    ctx->pc = 0x289d58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_289d5c:
    // 0x289d5c: 0xdfb50060
    ctx->pc = 0x289d5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_289d60:
    // 0x289d60: 0xdfb40050
    ctx->pc = 0x289d60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_289d64:
    // 0x289d64: 0xdfb30040
    ctx->pc = 0x289d64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_289d68:
    // 0x289d68: 0xdfb20030
    ctx->pc = 0x289d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_289d6c:
    // 0x289d6c: 0xdfb10020
    ctx->pc = 0x289d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_289d70:
    // 0x289d70: 0xdfb00010
    ctx->pc = 0x289d70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_289d74:
    // 0x289d74: 0x3e00008
label_289d78:
    if (ctx->pc == 0x289D78u) {
        ctx->pc = 0x289D78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x289D7Cu;
        goto label_fallthrough_0x289d74;
    }
    ctx->pc = 0x289D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289D78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x288270u: goto label_288270;
            case 0x288274u: goto label_288274;
            case 0x288278u: goto label_288278;
            case 0x28827Cu: goto label_28827c;
            case 0x288280u: goto label_288280;
            case 0x288284u: goto label_288284;
            case 0x288288u: goto label_288288;
            case 0x28828Cu: goto label_28828c;
            case 0x288290u: goto label_288290;
            case 0x288294u: goto label_288294;
            case 0x288298u: goto label_288298;
            case 0x28829Cu: goto label_28829c;
            case 0x2882A0u: goto label_2882a0;
            case 0x2882A4u: goto label_2882a4;
            case 0x2882A8u: goto label_2882a8;
            case 0x2882ACu: goto label_2882ac;
            case 0x2882B0u: goto label_2882b0;
            case 0x2882B4u: goto label_2882b4;
            case 0x2882B8u: goto label_2882b8;
            case 0x2882BCu: goto label_2882bc;
            case 0x2882C0u: goto label_2882c0;
            case 0x2882C4u: goto label_2882c4;
            case 0x2882C8u: goto label_2882c8;
            case 0x2882CCu: goto label_2882cc;
            case 0x2882D0u: goto label_2882d0;
            case 0x2882D4u: goto label_2882d4;
            case 0x2882D8u: goto label_2882d8;
            case 0x2882DCu: goto label_2882dc;
            case 0x2882E0u: goto label_2882e0;
            case 0x2882E4u: goto label_2882e4;
            case 0x2882E8u: goto label_2882e8;
            case 0x2882ECu: goto label_2882ec;
            case 0x2882F0u: goto label_2882f0;
            case 0x2882F4u: goto label_2882f4;
            case 0x2882F8u: goto label_2882f8;
            case 0x2882FCu: goto label_2882fc;
            case 0x288300u: goto label_288300;
            case 0x288304u: goto label_288304;
            case 0x288308u: goto label_288308;
            case 0x28830Cu: goto label_28830c;
            case 0x288310u: goto label_288310;
            case 0x288314u: goto label_288314;
            case 0x288318u: goto label_288318;
            case 0x28831Cu: goto label_28831c;
            case 0x288320u: goto label_288320;
            case 0x288324u: goto label_288324;
            case 0x288328u: goto label_288328;
            case 0x28832Cu: goto label_28832c;
            case 0x288330u: goto label_288330;
            case 0x288334u: goto label_288334;
            case 0x288338u: goto label_288338;
            case 0x28833Cu: goto label_28833c;
            case 0x288340u: goto label_288340;
            case 0x288344u: goto label_288344;
            case 0x288348u: goto label_288348;
            case 0x28834Cu: goto label_28834c;
            case 0x288350u: goto label_288350;
            case 0x288354u: goto label_288354;
            case 0x288358u: goto label_288358;
            case 0x28835Cu: goto label_28835c;
            case 0x288360u: goto label_288360;
            case 0x288364u: goto label_288364;
            case 0x288368u: goto label_288368;
            case 0x28836Cu: goto label_28836c;
            case 0x288370u: goto label_288370;
            case 0x288374u: goto label_288374;
            case 0x288378u: goto label_288378;
            case 0x28837Cu: goto label_28837c;
            case 0x288380u: goto label_288380;
            case 0x288384u: goto label_288384;
            case 0x288388u: goto label_288388;
            case 0x28838Cu: goto label_28838c;
            case 0x288390u: goto label_288390;
            case 0x288394u: goto label_288394;
            case 0x288398u: goto label_288398;
            case 0x28839Cu: goto label_28839c;
            case 0x2883A0u: goto label_2883a0;
            case 0x2883A4u: goto label_2883a4;
            case 0x2883A8u: goto label_2883a8;
            case 0x2883ACu: goto label_2883ac;
            case 0x2883B0u: goto label_2883b0;
            case 0x2883B4u: goto label_2883b4;
            case 0x2883B8u: goto label_2883b8;
            case 0x2883BCu: goto label_2883bc;
            case 0x2883C0u: goto label_2883c0;
            case 0x2883C4u: goto label_2883c4;
            case 0x2883C8u: goto label_2883c8;
            case 0x2883CCu: goto label_2883cc;
            case 0x2883D0u: goto label_2883d0;
            case 0x2883D4u: goto label_2883d4;
            case 0x2883D8u: goto label_2883d8;
            case 0x2883DCu: goto label_2883dc;
            case 0x2883E0u: goto label_2883e0;
            case 0x2883E4u: goto label_2883e4;
            case 0x2883E8u: goto label_2883e8;
            case 0x2883ECu: goto label_2883ec;
            case 0x2883F0u: goto label_2883f0;
            case 0x2883F4u: goto label_2883f4;
            case 0x2883F8u: goto label_2883f8;
            case 0x2883FCu: goto label_2883fc;
            case 0x288400u: goto label_288400;
            case 0x288404u: goto label_288404;
            case 0x288408u: goto label_288408;
            case 0x28840Cu: goto label_28840c;
            case 0x288410u: goto label_288410;
            case 0x288414u: goto label_288414;
            case 0x288418u: goto label_288418;
            case 0x28841Cu: goto label_28841c;
            case 0x288420u: goto label_288420;
            case 0x288424u: goto label_288424;
            case 0x288428u: goto label_288428;
            case 0x28842Cu: goto label_28842c;
            case 0x288430u: goto label_288430;
            case 0x288434u: goto label_288434;
            case 0x288438u: goto label_288438;
            case 0x28843Cu: goto label_28843c;
            case 0x288440u: goto label_288440;
            case 0x288444u: goto label_288444;
            case 0x288448u: goto label_288448;
            case 0x28844Cu: goto label_28844c;
            case 0x288450u: goto label_288450;
            case 0x288454u: goto label_288454;
            case 0x288458u: goto label_288458;
            case 0x28845Cu: goto label_28845c;
            case 0x288460u: goto label_288460;
            case 0x288464u: goto label_288464;
            case 0x288468u: goto label_288468;
            case 0x28846Cu: goto label_28846c;
            case 0x288470u: goto label_288470;
            case 0x288474u: goto label_288474;
            case 0x288478u: goto label_288478;
            case 0x28847Cu: goto label_28847c;
            case 0x288480u: goto label_288480;
            case 0x288484u: goto label_288484;
            case 0x288488u: goto label_288488;
            case 0x28848Cu: goto label_28848c;
            case 0x288490u: goto label_288490;
            case 0x288494u: goto label_288494;
            case 0x288498u: goto label_288498;
            case 0x28849Cu: goto label_28849c;
            case 0x2884A0u: goto label_2884a0;
            case 0x2884A4u: goto label_2884a4;
            case 0x2884A8u: goto label_2884a8;
            case 0x2884ACu: goto label_2884ac;
            case 0x2884B0u: goto label_2884b0;
            case 0x2884B4u: goto label_2884b4;
            case 0x2884B8u: goto label_2884b8;
            case 0x2884BCu: goto label_2884bc;
            case 0x2884C0u: goto label_2884c0;
            case 0x2884C4u: goto label_2884c4;
            case 0x2884C8u: goto label_2884c8;
            case 0x2884CCu: goto label_2884cc;
            case 0x2884D0u: goto label_2884d0;
            case 0x2884D4u: goto label_2884d4;
            case 0x2884D8u: goto label_2884d8;
            case 0x2884DCu: goto label_2884dc;
            case 0x2884E0u: goto label_2884e0;
            case 0x2884E4u: goto label_2884e4;
            case 0x2884E8u: goto label_2884e8;
            case 0x2884ECu: goto label_2884ec;
            case 0x2884F0u: goto label_2884f0;
            case 0x2884F4u: goto label_2884f4;
            case 0x2884F8u: goto label_2884f8;
            case 0x2884FCu: goto label_2884fc;
            case 0x288500u: goto label_288500;
            case 0x288504u: goto label_288504;
            case 0x288508u: goto label_288508;
            case 0x28850Cu: goto label_28850c;
            case 0x288510u: goto label_288510;
            case 0x288514u: goto label_288514;
            case 0x288518u: goto label_288518;
            case 0x28851Cu: goto label_28851c;
            case 0x288520u: goto label_288520;
            case 0x288524u: goto label_288524;
            case 0x288528u: goto label_288528;
            case 0x28852Cu: goto label_28852c;
            case 0x288530u: goto label_288530;
            case 0x288534u: goto label_288534;
            case 0x288538u: goto label_288538;
            case 0x28853Cu: goto label_28853c;
            case 0x288540u: goto label_288540;
            case 0x288544u: goto label_288544;
            case 0x288548u: goto label_288548;
            case 0x28854Cu: goto label_28854c;
            case 0x288550u: goto label_288550;
            case 0x288554u: goto label_288554;
            case 0x288558u: goto label_288558;
            case 0x28855Cu: goto label_28855c;
            case 0x288560u: goto label_288560;
            case 0x288564u: goto label_288564;
            case 0x288568u: goto label_288568;
            case 0x28856Cu: goto label_28856c;
            case 0x288570u: goto label_288570;
            case 0x288574u: goto label_288574;
            case 0x288578u: goto label_288578;
            case 0x28857Cu: goto label_28857c;
            case 0x288580u: goto label_288580;
            case 0x288584u: goto label_288584;
            case 0x288588u: goto label_288588;
            case 0x28858Cu: goto label_28858c;
            case 0x288590u: goto label_288590;
            case 0x288594u: goto label_288594;
            case 0x288598u: goto label_288598;
            case 0x28859Cu: goto label_28859c;
            case 0x2885A0u: goto label_2885a0;
            case 0x2885A4u: goto label_2885a4;
            case 0x2885A8u: goto label_2885a8;
            case 0x2885ACu: goto label_2885ac;
            case 0x2885B0u: goto label_2885b0;
            case 0x2885B4u: goto label_2885b4;
            case 0x2885B8u: goto label_2885b8;
            case 0x2885BCu: goto label_2885bc;
            case 0x2885C0u: goto label_2885c0;
            case 0x2885C4u: goto label_2885c4;
            case 0x2885C8u: goto label_2885c8;
            case 0x2885CCu: goto label_2885cc;
            case 0x2885D0u: goto label_2885d0;
            case 0x2885D4u: goto label_2885d4;
            case 0x2885D8u: goto label_2885d8;
            case 0x2885DCu: goto label_2885dc;
            case 0x2885E0u: goto label_2885e0;
            case 0x2885E4u: goto label_2885e4;
            case 0x2885E8u: goto label_2885e8;
            case 0x2885ECu: goto label_2885ec;
            case 0x2885F0u: goto label_2885f0;
            case 0x2885F4u: goto label_2885f4;
            case 0x2885F8u: goto label_2885f8;
            case 0x2885FCu: goto label_2885fc;
            case 0x288600u: goto label_288600;
            case 0x288604u: goto label_288604;
            case 0x288608u: goto label_288608;
            case 0x28860Cu: goto label_28860c;
            case 0x288610u: goto label_288610;
            case 0x288614u: goto label_288614;
            case 0x288618u: goto label_288618;
            case 0x28861Cu: goto label_28861c;
            case 0x288620u: goto label_288620;
            case 0x288624u: goto label_288624;
            case 0x288628u: goto label_288628;
            case 0x28862Cu: goto label_28862c;
            case 0x288630u: goto label_288630;
            case 0x288634u: goto label_288634;
            case 0x288638u: goto label_288638;
            case 0x28863Cu: goto label_28863c;
            case 0x288640u: goto label_288640;
            case 0x288644u: goto label_288644;
            case 0x288648u: goto label_288648;
            case 0x28864Cu: goto label_28864c;
            case 0x288650u: goto label_288650;
            case 0x288654u: goto label_288654;
            case 0x288658u: goto label_288658;
            case 0x28865Cu: goto label_28865c;
            case 0x288660u: goto label_288660;
            case 0x288664u: goto label_288664;
            case 0x288668u: goto label_288668;
            case 0x28866Cu: goto label_28866c;
            case 0x288670u: goto label_288670;
            case 0x288674u: goto label_288674;
            case 0x288678u: goto label_288678;
            case 0x28867Cu: goto label_28867c;
            case 0x288680u: goto label_288680;
            case 0x288684u: goto label_288684;
            case 0x288688u: goto label_288688;
            case 0x28868Cu: goto label_28868c;
            case 0x288690u: goto label_288690;
            case 0x288694u: goto label_288694;
            case 0x288698u: goto label_288698;
            case 0x28869Cu: goto label_28869c;
            case 0x2886A0u: goto label_2886a0;
            case 0x2886A4u: goto label_2886a4;
            case 0x2886A8u: goto label_2886a8;
            case 0x2886ACu: goto label_2886ac;
            case 0x2886B0u: goto label_2886b0;
            case 0x2886B4u: goto label_2886b4;
            case 0x2886B8u: goto label_2886b8;
            case 0x2886BCu: goto label_2886bc;
            case 0x2886C0u: goto label_2886c0;
            case 0x2886C4u: goto label_2886c4;
            case 0x2886C8u: goto label_2886c8;
            case 0x2886CCu: goto label_2886cc;
            case 0x2886D0u: goto label_2886d0;
            case 0x2886D4u: goto label_2886d4;
            case 0x2886D8u: goto label_2886d8;
            case 0x2886DCu: goto label_2886dc;
            case 0x2886E0u: goto label_2886e0;
            case 0x2886E4u: goto label_2886e4;
            case 0x2886E8u: goto label_2886e8;
            case 0x2886ECu: goto label_2886ec;
            case 0x2886F0u: goto label_2886f0;
            case 0x2886F4u: goto label_2886f4;
            case 0x2886F8u: goto label_2886f8;
            case 0x2886FCu: goto label_2886fc;
            case 0x288700u: goto label_288700;
            case 0x288704u: goto label_288704;
            case 0x288708u: goto label_288708;
            case 0x28870Cu: goto label_28870c;
            case 0x288710u: goto label_288710;
            case 0x288714u: goto label_288714;
            case 0x288718u: goto label_288718;
            case 0x28871Cu: goto label_28871c;
            case 0x288720u: goto label_288720;
            case 0x288724u: goto label_288724;
            case 0x288728u: goto label_288728;
            case 0x28872Cu: goto label_28872c;
            case 0x288730u: goto label_288730;
            case 0x288734u: goto label_288734;
            case 0x288738u: goto label_288738;
            case 0x28873Cu: goto label_28873c;
            case 0x288740u: goto label_288740;
            case 0x288744u: goto label_288744;
            case 0x288748u: goto label_288748;
            case 0x28874Cu: goto label_28874c;
            case 0x288750u: goto label_288750;
            case 0x288754u: goto label_288754;
            case 0x288758u: goto label_288758;
            case 0x28875Cu: goto label_28875c;
            case 0x288760u: goto label_288760;
            case 0x288764u: goto label_288764;
            case 0x288768u: goto label_288768;
            case 0x28876Cu: goto label_28876c;
            case 0x288770u: goto label_288770;
            case 0x288774u: goto label_288774;
            case 0x288778u: goto label_288778;
            case 0x28877Cu: goto label_28877c;
            case 0x288780u: goto label_288780;
            case 0x288784u: goto label_288784;
            case 0x288788u: goto label_288788;
            case 0x28878Cu: goto label_28878c;
            case 0x288790u: goto label_288790;
            case 0x288794u: goto label_288794;
            case 0x288798u: goto label_288798;
            case 0x28879Cu: goto label_28879c;
            case 0x2887A0u: goto label_2887a0;
            case 0x2887A4u: goto label_2887a4;
            case 0x2887A8u: goto label_2887a8;
            case 0x2887ACu: goto label_2887ac;
            case 0x2887B0u: goto label_2887b0;
            case 0x2887B4u: goto label_2887b4;
            case 0x2887B8u: goto label_2887b8;
            case 0x2887BCu: goto label_2887bc;
            case 0x2887C0u: goto label_2887c0;
            case 0x2887C4u: goto label_2887c4;
            case 0x2887C8u: goto label_2887c8;
            case 0x2887CCu: goto label_2887cc;
            case 0x2887D0u: goto label_2887d0;
            case 0x2887D4u: goto label_2887d4;
            case 0x2887D8u: goto label_2887d8;
            case 0x2887DCu: goto label_2887dc;
            case 0x2887E0u: goto label_2887e0;
            case 0x2887E4u: goto label_2887e4;
            case 0x2887E8u: goto label_2887e8;
            case 0x2887ECu: goto label_2887ec;
            case 0x2887F0u: goto label_2887f0;
            case 0x2887F4u: goto label_2887f4;
            case 0x2887F8u: goto label_2887f8;
            case 0x2887FCu: goto label_2887fc;
            case 0x288800u: goto label_288800;
            case 0x288804u: goto label_288804;
            case 0x288808u: goto label_288808;
            case 0x28880Cu: goto label_28880c;
            case 0x288810u: goto label_288810;
            case 0x288814u: goto label_288814;
            case 0x288818u: goto label_288818;
            case 0x28881Cu: goto label_28881c;
            case 0x288820u: goto label_288820;
            case 0x288824u: goto label_288824;
            case 0x288828u: goto label_288828;
            case 0x28882Cu: goto label_28882c;
            case 0x288830u: goto label_288830;
            case 0x288834u: goto label_288834;
            case 0x288838u: goto label_288838;
            case 0x28883Cu: goto label_28883c;
            case 0x288840u: goto label_288840;
            case 0x288844u: goto label_288844;
            case 0x288848u: goto label_288848;
            case 0x28884Cu: goto label_28884c;
            case 0x288850u: goto label_288850;
            case 0x288854u: goto label_288854;
            case 0x288858u: goto label_288858;
            case 0x28885Cu: goto label_28885c;
            case 0x288860u: goto label_288860;
            case 0x288864u: goto label_288864;
            case 0x288868u: goto label_288868;
            case 0x28886Cu: goto label_28886c;
            case 0x288870u: goto label_288870;
            case 0x288874u: goto label_288874;
            case 0x288878u: goto label_288878;
            case 0x28887Cu: goto label_28887c;
            case 0x288880u: goto label_288880;
            case 0x288884u: goto label_288884;
            case 0x288888u: goto label_288888;
            case 0x28888Cu: goto label_28888c;
            case 0x288890u: goto label_288890;
            case 0x288894u: goto label_288894;
            case 0x288898u: goto label_288898;
            case 0x28889Cu: goto label_28889c;
            case 0x2888A0u: goto label_2888a0;
            case 0x2888A4u: goto label_2888a4;
            case 0x2888A8u: goto label_2888a8;
            case 0x2888ACu: goto label_2888ac;
            case 0x2888B0u: goto label_2888b0;
            case 0x2888B4u: goto label_2888b4;
            case 0x2888B8u: goto label_2888b8;
            case 0x2888BCu: goto label_2888bc;
            case 0x2888C0u: goto label_2888c0;
            case 0x2888C4u: goto label_2888c4;
            case 0x2888C8u: goto label_2888c8;
            case 0x2888CCu: goto label_2888cc;
            case 0x2888D0u: goto label_2888d0;
            case 0x2888D4u: goto label_2888d4;
            case 0x2888D8u: goto label_2888d8;
            case 0x2888DCu: goto label_2888dc;
            case 0x2888E0u: goto label_2888e0;
            case 0x2888E4u: goto label_2888e4;
            case 0x2888E8u: goto label_2888e8;
            case 0x2888ECu: goto label_2888ec;
            case 0x2888F0u: goto label_2888f0;
            case 0x2888F4u: goto label_2888f4;
            case 0x2888F8u: goto label_2888f8;
            case 0x2888FCu: goto label_2888fc;
            case 0x288900u: goto label_288900;
            case 0x288904u: goto label_288904;
            case 0x288908u: goto label_288908;
            case 0x28890Cu: goto label_28890c;
            case 0x288910u: goto label_288910;
            case 0x288914u: goto label_288914;
            case 0x288918u: goto label_288918;
            case 0x28891Cu: goto label_28891c;
            case 0x288920u: goto label_288920;
            case 0x288924u: goto label_288924;
            case 0x288928u: goto label_288928;
            case 0x28892Cu: goto label_28892c;
            case 0x288930u: goto label_288930;
            case 0x288934u: goto label_288934;
            case 0x288938u: goto label_288938;
            case 0x28893Cu: goto label_28893c;
            case 0x288940u: goto label_288940;
            case 0x288944u: goto label_288944;
            case 0x288948u: goto label_288948;
            case 0x28894Cu: goto label_28894c;
            case 0x288950u: goto label_288950;
            case 0x288954u: goto label_288954;
            case 0x288958u: goto label_288958;
            case 0x28895Cu: goto label_28895c;
            case 0x288960u: goto label_288960;
            case 0x288964u: goto label_288964;
            case 0x288968u: goto label_288968;
            case 0x28896Cu: goto label_28896c;
            case 0x288970u: goto label_288970;
            case 0x288974u: goto label_288974;
            case 0x288978u: goto label_288978;
            case 0x28897Cu: goto label_28897c;
            case 0x288980u: goto label_288980;
            case 0x288984u: goto label_288984;
            case 0x288988u: goto label_288988;
            case 0x28898Cu: goto label_28898c;
            case 0x288990u: goto label_288990;
            case 0x288994u: goto label_288994;
            case 0x288998u: goto label_288998;
            case 0x28899Cu: goto label_28899c;
            case 0x2889A0u: goto label_2889a0;
            case 0x2889A4u: goto label_2889a4;
            case 0x2889A8u: goto label_2889a8;
            case 0x2889ACu: goto label_2889ac;
            case 0x2889B0u: goto label_2889b0;
            case 0x2889B4u: goto label_2889b4;
            case 0x2889B8u: goto label_2889b8;
            case 0x2889BCu: goto label_2889bc;
            case 0x2889C0u: goto label_2889c0;
            case 0x2889C4u: goto label_2889c4;
            case 0x2889C8u: goto label_2889c8;
            case 0x2889CCu: goto label_2889cc;
            case 0x2889D0u: goto label_2889d0;
            case 0x2889D4u: goto label_2889d4;
            case 0x2889D8u: goto label_2889d8;
            case 0x2889DCu: goto label_2889dc;
            case 0x2889E0u: goto label_2889e0;
            case 0x2889E4u: goto label_2889e4;
            case 0x2889E8u: goto label_2889e8;
            case 0x2889ECu: goto label_2889ec;
            case 0x2889F0u: goto label_2889f0;
            case 0x2889F4u: goto label_2889f4;
            case 0x2889F8u: goto label_2889f8;
            case 0x2889FCu: goto label_2889fc;
            case 0x288A00u: goto label_288a00;
            case 0x288A04u: goto label_288a04;
            case 0x288A08u: goto label_288a08;
            case 0x288A0Cu: goto label_288a0c;
            case 0x288A10u: goto label_288a10;
            case 0x288A14u: goto label_288a14;
            case 0x288A18u: goto label_288a18;
            case 0x288A1Cu: goto label_288a1c;
            case 0x288A20u: goto label_288a20;
            case 0x288A24u: goto label_288a24;
            case 0x288A28u: goto label_288a28;
            case 0x288A2Cu: goto label_288a2c;
            case 0x288A30u: goto label_288a30;
            case 0x288A34u: goto label_288a34;
            case 0x288A38u: goto label_288a38;
            case 0x288A3Cu: goto label_288a3c;
            case 0x288A40u: goto label_288a40;
            case 0x288A44u: goto label_288a44;
            case 0x288A48u: goto label_288a48;
            case 0x288A4Cu: goto label_288a4c;
            case 0x288A50u: goto label_288a50;
            case 0x288A54u: goto label_288a54;
            case 0x288A58u: goto label_288a58;
            case 0x288A5Cu: goto label_288a5c;
            case 0x288A60u: goto label_288a60;
            case 0x288A64u: goto label_288a64;
            case 0x288A68u: goto label_288a68;
            case 0x288A6Cu: goto label_288a6c;
            case 0x288A70u: goto label_288a70;
            case 0x288A74u: goto label_288a74;
            case 0x288A78u: goto label_288a78;
            case 0x288A7Cu: goto label_288a7c;
            case 0x288A80u: goto label_288a80;
            case 0x288A84u: goto label_288a84;
            case 0x288A88u: goto label_288a88;
            case 0x288A8Cu: goto label_288a8c;
            case 0x288A90u: goto label_288a90;
            case 0x288A94u: goto label_288a94;
            case 0x288A98u: goto label_288a98;
            case 0x288A9Cu: goto label_288a9c;
            case 0x288AA0u: goto label_288aa0;
            case 0x288AA4u: goto label_288aa4;
            case 0x288AA8u: goto label_288aa8;
            case 0x288AACu: goto label_288aac;
            case 0x288AB0u: goto label_288ab0;
            case 0x288AB4u: goto label_288ab4;
            case 0x288AB8u: goto label_288ab8;
            case 0x288ABCu: goto label_288abc;
            case 0x288AC0u: goto label_288ac0;
            case 0x288AC4u: goto label_288ac4;
            case 0x288AC8u: goto label_288ac8;
            case 0x288ACCu: goto label_288acc;
            case 0x288AD0u: goto label_288ad0;
            case 0x288AD4u: goto label_288ad4;
            case 0x288AD8u: goto label_288ad8;
            case 0x288ADCu: goto label_288adc;
            case 0x288AE0u: goto label_288ae0;
            case 0x288AE4u: goto label_288ae4;
            case 0x288AE8u: goto label_288ae8;
            case 0x288AECu: goto label_288aec;
            case 0x288AF0u: goto label_288af0;
            case 0x288AF4u: goto label_288af4;
            case 0x288AF8u: goto label_288af8;
            case 0x288AFCu: goto label_288afc;
            case 0x288B00u: goto label_288b00;
            case 0x288B04u: goto label_288b04;
            case 0x288B08u: goto label_288b08;
            case 0x288B0Cu: goto label_288b0c;
            case 0x288B10u: goto label_288b10;
            case 0x288B14u: goto label_288b14;
            case 0x288B18u: goto label_288b18;
            case 0x288B1Cu: goto label_288b1c;
            case 0x288B20u: goto label_288b20;
            case 0x288B24u: goto label_288b24;
            case 0x288B28u: goto label_288b28;
            case 0x288B2Cu: goto label_288b2c;
            case 0x288B30u: goto label_288b30;
            case 0x288B34u: goto label_288b34;
            case 0x288B38u: goto label_288b38;
            case 0x288B3Cu: goto label_288b3c;
            case 0x288B40u: goto label_288b40;
            case 0x288B44u: goto label_288b44;
            case 0x288B48u: goto label_288b48;
            case 0x288B4Cu: goto label_288b4c;
            case 0x288B50u: goto label_288b50;
            case 0x288B54u: goto label_288b54;
            case 0x288B58u: goto label_288b58;
            case 0x288B5Cu: goto label_288b5c;
            case 0x288B60u: goto label_288b60;
            case 0x288B64u: goto label_288b64;
            case 0x288B68u: goto label_288b68;
            case 0x288B6Cu: goto label_288b6c;
            case 0x288B70u: goto label_288b70;
            case 0x288B74u: goto label_288b74;
            case 0x288B78u: goto label_288b78;
            case 0x288B7Cu: goto label_288b7c;
            case 0x288B80u: goto label_288b80;
            case 0x288B84u: goto label_288b84;
            case 0x288B88u: goto label_288b88;
            case 0x288B8Cu: goto label_288b8c;
            case 0x288B90u: goto label_288b90;
            case 0x288B94u: goto label_288b94;
            case 0x288B98u: goto label_288b98;
            case 0x288B9Cu: goto label_288b9c;
            case 0x288BA0u: goto label_288ba0;
            case 0x288BA4u: goto label_288ba4;
            case 0x288BA8u: goto label_288ba8;
            case 0x288BACu: goto label_288bac;
            case 0x288BB0u: goto label_288bb0;
            case 0x288BB4u: goto label_288bb4;
            case 0x288BB8u: goto label_288bb8;
            case 0x288BBCu: goto label_288bbc;
            case 0x288BC0u: goto label_288bc0;
            case 0x288BC4u: goto label_288bc4;
            case 0x288BC8u: goto label_288bc8;
            case 0x288BCCu: goto label_288bcc;
            case 0x288BD0u: goto label_288bd0;
            case 0x288BD4u: goto label_288bd4;
            case 0x288BD8u: goto label_288bd8;
            case 0x288BDCu: goto label_288bdc;
            case 0x288BE0u: goto label_288be0;
            case 0x288BE4u: goto label_288be4;
            case 0x288BE8u: goto label_288be8;
            case 0x288BECu: goto label_288bec;
            case 0x288BF0u: goto label_288bf0;
            case 0x288BF4u: goto label_288bf4;
            case 0x288BF8u: goto label_288bf8;
            case 0x288BFCu: goto label_288bfc;
            case 0x288C00u: goto label_288c00;
            case 0x288C04u: goto label_288c04;
            case 0x288C08u: goto label_288c08;
            case 0x288C0Cu: goto label_288c0c;
            case 0x288C10u: goto label_288c10;
            case 0x288C14u: goto label_288c14;
            case 0x288C18u: goto label_288c18;
            case 0x288C1Cu: goto label_288c1c;
            case 0x288C20u: goto label_288c20;
            case 0x288C24u: goto label_288c24;
            case 0x288C28u: goto label_288c28;
            case 0x288C2Cu: goto label_288c2c;
            case 0x288C30u: goto label_288c30;
            case 0x288C34u: goto label_288c34;
            case 0x288C38u: goto label_288c38;
            case 0x288C3Cu: goto label_288c3c;
            case 0x288C40u: goto label_288c40;
            case 0x288C44u: goto label_288c44;
            case 0x288C48u: goto label_288c48;
            case 0x288C4Cu: goto label_288c4c;
            case 0x288C50u: goto label_288c50;
            case 0x288C54u: goto label_288c54;
            case 0x288C58u: goto label_288c58;
            case 0x288C5Cu: goto label_288c5c;
            case 0x288C60u: goto label_288c60;
            case 0x288C64u: goto label_288c64;
            case 0x288C68u: goto label_288c68;
            case 0x288C6Cu: goto label_288c6c;
            case 0x288C70u: goto label_288c70;
            case 0x288C74u: goto label_288c74;
            case 0x288C78u: goto label_288c78;
            case 0x288C7Cu: goto label_288c7c;
            case 0x288C80u: goto label_288c80;
            case 0x288C84u: goto label_288c84;
            case 0x288C88u: goto label_288c88;
            case 0x288C8Cu: goto label_288c8c;
            case 0x288C90u: goto label_288c90;
            case 0x288C94u: goto label_288c94;
            case 0x288C98u: goto label_288c98;
            case 0x288C9Cu: goto label_288c9c;
            case 0x288CA0u: goto label_288ca0;
            case 0x288CA4u: goto label_288ca4;
            case 0x288CA8u: goto label_288ca8;
            case 0x288CACu: goto label_288cac;
            case 0x288CB0u: goto label_288cb0;
            case 0x288CB4u: goto label_288cb4;
            case 0x288CB8u: goto label_288cb8;
            case 0x288CBCu: goto label_288cbc;
            case 0x288CC0u: goto label_288cc0;
            case 0x288CC4u: goto label_288cc4;
            case 0x288CC8u: goto label_288cc8;
            case 0x288CCCu: goto label_288ccc;
            case 0x288CD0u: goto label_288cd0;
            case 0x288CD4u: goto label_288cd4;
            case 0x288CD8u: goto label_288cd8;
            case 0x288CDCu: goto label_288cdc;
            case 0x288CE0u: goto label_288ce0;
            case 0x288CE4u: goto label_288ce4;
            case 0x288CE8u: goto label_288ce8;
            case 0x288CECu: goto label_288cec;
            case 0x288CF0u: goto label_288cf0;
            case 0x288CF4u: goto label_288cf4;
            case 0x288CF8u: goto label_288cf8;
            case 0x288CFCu: goto label_288cfc;
            case 0x288D00u: goto label_288d00;
            case 0x288D04u: goto label_288d04;
            case 0x288D08u: goto label_288d08;
            case 0x288D0Cu: goto label_288d0c;
            case 0x288D10u: goto label_288d10;
            case 0x288D14u: goto label_288d14;
            case 0x288D18u: goto label_288d18;
            case 0x288D1Cu: goto label_288d1c;
            case 0x288D20u: goto label_288d20;
            case 0x288D24u: goto label_288d24;
            case 0x288D28u: goto label_288d28;
            case 0x288D2Cu: goto label_288d2c;
            case 0x288D30u: goto label_288d30;
            case 0x288D34u: goto label_288d34;
            case 0x288D38u: goto label_288d38;
            case 0x288D3Cu: goto label_288d3c;
            case 0x288D40u: goto label_288d40;
            case 0x288D44u: goto label_288d44;
            case 0x288D48u: goto label_288d48;
            case 0x288D4Cu: goto label_288d4c;
            case 0x288D50u: goto label_288d50;
            case 0x288D54u: goto label_288d54;
            case 0x288D58u: goto label_288d58;
            case 0x288D5Cu: goto label_288d5c;
            case 0x288D60u: goto label_288d60;
            case 0x288D64u: goto label_288d64;
            case 0x288D68u: goto label_288d68;
            case 0x288D6Cu: goto label_288d6c;
            case 0x288D70u: goto label_288d70;
            case 0x288D74u: goto label_288d74;
            case 0x288D78u: goto label_288d78;
            case 0x288D7Cu: goto label_288d7c;
            case 0x288D80u: goto label_288d80;
            case 0x288D84u: goto label_288d84;
            case 0x288D88u: goto label_288d88;
            case 0x288D8Cu: goto label_288d8c;
            case 0x288D90u: goto label_288d90;
            case 0x288D94u: goto label_288d94;
            case 0x288D98u: goto label_288d98;
            case 0x288D9Cu: goto label_288d9c;
            case 0x288DA0u: goto label_288da0;
            case 0x288DA4u: goto label_288da4;
            case 0x288DA8u: goto label_288da8;
            case 0x288DACu: goto label_288dac;
            case 0x288DB0u: goto label_288db0;
            case 0x288DB4u: goto label_288db4;
            case 0x288DB8u: goto label_288db8;
            case 0x288DBCu: goto label_288dbc;
            case 0x288DC0u: goto label_288dc0;
            case 0x288DC4u: goto label_288dc4;
            case 0x288DC8u: goto label_288dc8;
            case 0x288DCCu: goto label_288dcc;
            case 0x288DD0u: goto label_288dd0;
            case 0x288DD4u: goto label_288dd4;
            case 0x288DD8u: goto label_288dd8;
            case 0x288DDCu: goto label_288ddc;
            case 0x288DE0u: goto label_288de0;
            case 0x288DE4u: goto label_288de4;
            case 0x288DE8u: goto label_288de8;
            case 0x288DECu: goto label_288dec;
            case 0x288DF0u: goto label_288df0;
            case 0x288DF4u: goto label_288df4;
            case 0x288DF8u: goto label_288df8;
            case 0x288DFCu: goto label_288dfc;
            case 0x288E00u: goto label_288e00;
            case 0x288E04u: goto label_288e04;
            case 0x288E08u: goto label_288e08;
            case 0x288E0Cu: goto label_288e0c;
            case 0x288E10u: goto label_288e10;
            case 0x288E14u: goto label_288e14;
            case 0x288E18u: goto label_288e18;
            case 0x288E1Cu: goto label_288e1c;
            case 0x288E20u: goto label_288e20;
            case 0x288E24u: goto label_288e24;
            case 0x288E28u: goto label_288e28;
            case 0x288E2Cu: goto label_288e2c;
            case 0x288E30u: goto label_288e30;
            case 0x288E34u: goto label_288e34;
            case 0x288E38u: goto label_288e38;
            case 0x288E3Cu: goto label_288e3c;
            case 0x288E40u: goto label_288e40;
            case 0x288E44u: goto label_288e44;
            case 0x288E48u: goto label_288e48;
            case 0x288E4Cu: goto label_288e4c;
            case 0x288E50u: goto label_288e50;
            case 0x288E54u: goto label_288e54;
            case 0x288E58u: goto label_288e58;
            case 0x288E5Cu: goto label_288e5c;
            case 0x288E60u: goto label_288e60;
            case 0x288E64u: goto label_288e64;
            case 0x288E68u: goto label_288e68;
            case 0x288E6Cu: goto label_288e6c;
            case 0x288E70u: goto label_288e70;
            case 0x288E74u: goto label_288e74;
            case 0x288E78u: goto label_288e78;
            case 0x288E7Cu: goto label_288e7c;
            case 0x288E80u: goto label_288e80;
            case 0x288E84u: goto label_288e84;
            case 0x288E88u: goto label_288e88;
            case 0x288E8Cu: goto label_288e8c;
            case 0x288E90u: goto label_288e90;
            case 0x288E94u: goto label_288e94;
            case 0x288E98u: goto label_288e98;
            case 0x288E9Cu: goto label_288e9c;
            case 0x288EA0u: goto label_288ea0;
            case 0x288EA4u: goto label_288ea4;
            case 0x288EA8u: goto label_288ea8;
            case 0x288EACu: goto label_288eac;
            case 0x288EB0u: goto label_288eb0;
            case 0x288EB4u: goto label_288eb4;
            case 0x288EB8u: goto label_288eb8;
            case 0x288EBCu: goto label_288ebc;
            case 0x288EC0u: goto label_288ec0;
            case 0x288EC4u: goto label_288ec4;
            case 0x288EC8u: goto label_288ec8;
            case 0x288ECCu: goto label_288ecc;
            case 0x288ED0u: goto label_288ed0;
            case 0x288ED4u: goto label_288ed4;
            case 0x288ED8u: goto label_288ed8;
            case 0x288EDCu: goto label_288edc;
            case 0x288EE0u: goto label_288ee0;
            case 0x288EE4u: goto label_288ee4;
            case 0x288EE8u: goto label_288ee8;
            case 0x288EECu: goto label_288eec;
            case 0x288EF0u: goto label_288ef0;
            case 0x288EF4u: goto label_288ef4;
            case 0x288EF8u: goto label_288ef8;
            case 0x288EFCu: goto label_288efc;
            case 0x288F00u: goto label_288f00;
            case 0x288F04u: goto label_288f04;
            case 0x288F08u: goto label_288f08;
            case 0x288F0Cu: goto label_288f0c;
            case 0x288F10u: goto label_288f10;
            case 0x288F14u: goto label_288f14;
            case 0x288F18u: goto label_288f18;
            case 0x288F1Cu: goto label_288f1c;
            case 0x288F20u: goto label_288f20;
            case 0x288F24u: goto label_288f24;
            case 0x288F28u: goto label_288f28;
            case 0x288F2Cu: goto label_288f2c;
            case 0x288F30u: goto label_288f30;
            case 0x288F34u: goto label_288f34;
            case 0x288F38u: goto label_288f38;
            case 0x288F3Cu: goto label_288f3c;
            case 0x288F40u: goto label_288f40;
            case 0x288F44u: goto label_288f44;
            case 0x288F48u: goto label_288f48;
            case 0x288F4Cu: goto label_288f4c;
            case 0x288F50u: goto label_288f50;
            case 0x288F54u: goto label_288f54;
            case 0x288F58u: goto label_288f58;
            case 0x288F5Cu: goto label_288f5c;
            case 0x288F60u: goto label_288f60;
            case 0x288F64u: goto label_288f64;
            case 0x288F68u: goto label_288f68;
            case 0x288F6Cu: goto label_288f6c;
            case 0x288F70u: goto label_288f70;
            case 0x288F74u: goto label_288f74;
            case 0x288F78u: goto label_288f78;
            case 0x288F7Cu: goto label_288f7c;
            case 0x288F80u: goto label_288f80;
            case 0x288F84u: goto label_288f84;
            case 0x288F88u: goto label_288f88;
            case 0x288F8Cu: goto label_288f8c;
            case 0x288F90u: goto label_288f90;
            case 0x288F94u: goto label_288f94;
            case 0x288F98u: goto label_288f98;
            case 0x288F9Cu: goto label_288f9c;
            case 0x288FA0u: goto label_288fa0;
            case 0x288FA4u: goto label_288fa4;
            case 0x288FA8u: goto label_288fa8;
            case 0x288FACu: goto label_288fac;
            case 0x288FB0u: goto label_288fb0;
            case 0x288FB4u: goto label_288fb4;
            case 0x288FB8u: goto label_288fb8;
            case 0x288FBCu: goto label_288fbc;
            case 0x288FC0u: goto label_288fc0;
            case 0x288FC4u: goto label_288fc4;
            case 0x288FC8u: goto label_288fc8;
            case 0x288FCCu: goto label_288fcc;
            case 0x288FD0u: goto label_288fd0;
            case 0x288FD4u: goto label_288fd4;
            case 0x288FD8u: goto label_288fd8;
            case 0x288FDCu: goto label_288fdc;
            case 0x288FE0u: goto label_288fe0;
            case 0x288FE4u: goto label_288fe4;
            case 0x288FE8u: goto label_288fe8;
            case 0x288FECu: goto label_288fec;
            case 0x288FF0u: goto label_288ff0;
            case 0x288FF4u: goto label_288ff4;
            case 0x288FF8u: goto label_288ff8;
            case 0x288FFCu: goto label_288ffc;
            case 0x289000u: goto label_289000;
            case 0x289004u: goto label_289004;
            case 0x289008u: goto label_289008;
            case 0x28900Cu: goto label_28900c;
            case 0x289010u: goto label_289010;
            case 0x289014u: goto label_289014;
            case 0x289018u: goto label_289018;
            case 0x28901Cu: goto label_28901c;
            case 0x289020u: goto label_289020;
            case 0x289024u: goto label_289024;
            case 0x289028u: goto label_289028;
            case 0x28902Cu: goto label_28902c;
            case 0x289030u: goto label_289030;
            case 0x289034u: goto label_289034;
            case 0x289038u: goto label_289038;
            case 0x28903Cu: goto label_28903c;
            case 0x289040u: goto label_289040;
            case 0x289044u: goto label_289044;
            case 0x289048u: goto label_289048;
            case 0x28904Cu: goto label_28904c;
            case 0x289050u: goto label_289050;
            case 0x289054u: goto label_289054;
            case 0x289058u: goto label_289058;
            case 0x28905Cu: goto label_28905c;
            case 0x289060u: goto label_289060;
            case 0x289064u: goto label_289064;
            case 0x289068u: goto label_289068;
            case 0x28906Cu: goto label_28906c;
            case 0x289070u: goto label_289070;
            case 0x289074u: goto label_289074;
            case 0x289078u: goto label_289078;
            case 0x28907Cu: goto label_28907c;
            case 0x289080u: goto label_289080;
            case 0x289084u: goto label_289084;
            case 0x289088u: goto label_289088;
            case 0x28908Cu: goto label_28908c;
            case 0x289090u: goto label_289090;
            case 0x289094u: goto label_289094;
            case 0x289098u: goto label_289098;
            case 0x28909Cu: goto label_28909c;
            case 0x2890A0u: goto label_2890a0;
            case 0x2890A4u: goto label_2890a4;
            case 0x2890A8u: goto label_2890a8;
            case 0x2890ACu: goto label_2890ac;
            case 0x2890B0u: goto label_2890b0;
            case 0x2890B4u: goto label_2890b4;
            case 0x2890B8u: goto label_2890b8;
            case 0x2890BCu: goto label_2890bc;
            case 0x2890C0u: goto label_2890c0;
            case 0x2890C4u: goto label_2890c4;
            case 0x2890C8u: goto label_2890c8;
            case 0x2890CCu: goto label_2890cc;
            case 0x2890D0u: goto label_2890d0;
            case 0x2890D4u: goto label_2890d4;
            case 0x2890D8u: goto label_2890d8;
            case 0x2890DCu: goto label_2890dc;
            case 0x2890E0u: goto label_2890e0;
            case 0x2890E4u: goto label_2890e4;
            case 0x2890E8u: goto label_2890e8;
            case 0x2890ECu: goto label_2890ec;
            case 0x2890F0u: goto label_2890f0;
            case 0x2890F4u: goto label_2890f4;
            case 0x2890F8u: goto label_2890f8;
            case 0x2890FCu: goto label_2890fc;
            case 0x289100u: goto label_289100;
            case 0x289104u: goto label_289104;
            case 0x289108u: goto label_289108;
            case 0x28910Cu: goto label_28910c;
            case 0x289110u: goto label_289110;
            case 0x289114u: goto label_289114;
            case 0x289118u: goto label_289118;
            case 0x28911Cu: goto label_28911c;
            case 0x289120u: goto label_289120;
            case 0x289124u: goto label_289124;
            case 0x289128u: goto label_289128;
            case 0x28912Cu: goto label_28912c;
            case 0x289130u: goto label_289130;
            case 0x289134u: goto label_289134;
            case 0x289138u: goto label_289138;
            case 0x28913Cu: goto label_28913c;
            case 0x289140u: goto label_289140;
            case 0x289144u: goto label_289144;
            case 0x289148u: goto label_289148;
            case 0x28914Cu: goto label_28914c;
            case 0x289150u: goto label_289150;
            case 0x289154u: goto label_289154;
            case 0x289158u: goto label_289158;
            case 0x28915Cu: goto label_28915c;
            case 0x289160u: goto label_289160;
            case 0x289164u: goto label_289164;
            case 0x289168u: goto label_289168;
            case 0x28916Cu: goto label_28916c;
            case 0x289170u: goto label_289170;
            case 0x289174u: goto label_289174;
            case 0x289178u: goto label_289178;
            case 0x28917Cu: goto label_28917c;
            case 0x289180u: goto label_289180;
            case 0x289184u: goto label_289184;
            case 0x289188u: goto label_289188;
            case 0x28918Cu: goto label_28918c;
            case 0x289190u: goto label_289190;
            case 0x289194u: goto label_289194;
            case 0x289198u: goto label_289198;
            case 0x28919Cu: goto label_28919c;
            case 0x2891A0u: goto label_2891a0;
            case 0x2891A4u: goto label_2891a4;
            case 0x2891A8u: goto label_2891a8;
            case 0x2891ACu: goto label_2891ac;
            case 0x2891B0u: goto label_2891b0;
            case 0x2891B4u: goto label_2891b4;
            case 0x2891B8u: goto label_2891b8;
            case 0x2891BCu: goto label_2891bc;
            case 0x2891C0u: goto label_2891c0;
            case 0x2891C4u: goto label_2891c4;
            case 0x2891C8u: goto label_2891c8;
            case 0x2891CCu: goto label_2891cc;
            case 0x2891D0u: goto label_2891d0;
            case 0x2891D4u: goto label_2891d4;
            case 0x2891D8u: goto label_2891d8;
            case 0x2891DCu: goto label_2891dc;
            case 0x2891E0u: goto label_2891e0;
            case 0x2891E4u: goto label_2891e4;
            case 0x2891E8u: goto label_2891e8;
            case 0x2891ECu: goto label_2891ec;
            case 0x2891F0u: goto label_2891f0;
            case 0x2891F4u: goto label_2891f4;
            case 0x2891F8u: goto label_2891f8;
            case 0x2891FCu: goto label_2891fc;
            case 0x289200u: goto label_289200;
            case 0x289204u: goto label_289204;
            case 0x289208u: goto label_289208;
            case 0x28920Cu: goto label_28920c;
            case 0x289210u: goto label_289210;
            case 0x289214u: goto label_289214;
            case 0x289218u: goto label_289218;
            case 0x28921Cu: goto label_28921c;
            case 0x289220u: goto label_289220;
            case 0x289224u: goto label_289224;
            case 0x289228u: goto label_289228;
            case 0x28922Cu: goto label_28922c;
            case 0x289230u: goto label_289230;
            case 0x289234u: goto label_289234;
            case 0x289238u: goto label_289238;
            case 0x28923Cu: goto label_28923c;
            case 0x289240u: goto label_289240;
            case 0x289244u: goto label_289244;
            case 0x289248u: goto label_289248;
            case 0x28924Cu: goto label_28924c;
            case 0x289250u: goto label_289250;
            case 0x289254u: goto label_289254;
            case 0x289258u: goto label_289258;
            case 0x28925Cu: goto label_28925c;
            case 0x289260u: goto label_289260;
            case 0x289264u: goto label_289264;
            case 0x289268u: goto label_289268;
            case 0x28926Cu: goto label_28926c;
            case 0x289270u: goto label_289270;
            case 0x289274u: goto label_289274;
            case 0x289278u: goto label_289278;
            case 0x28927Cu: goto label_28927c;
            case 0x289280u: goto label_289280;
            case 0x289284u: goto label_289284;
            case 0x289288u: goto label_289288;
            case 0x28928Cu: goto label_28928c;
            case 0x289290u: goto label_289290;
            case 0x289294u: goto label_289294;
            case 0x289298u: goto label_289298;
            case 0x28929Cu: goto label_28929c;
            case 0x2892A0u: goto label_2892a0;
            case 0x2892A4u: goto label_2892a4;
            case 0x2892A8u: goto label_2892a8;
            case 0x2892ACu: goto label_2892ac;
            case 0x2892B0u: goto label_2892b0;
            case 0x2892B4u: goto label_2892b4;
            case 0x2892B8u: goto label_2892b8;
            case 0x2892BCu: goto label_2892bc;
            case 0x2892C0u: goto label_2892c0;
            case 0x2892C4u: goto label_2892c4;
            case 0x2892C8u: goto label_2892c8;
            case 0x2892CCu: goto label_2892cc;
            case 0x2892D0u: goto label_2892d0;
            case 0x2892D4u: goto label_2892d4;
            case 0x2892D8u: goto label_2892d8;
            case 0x2892DCu: goto label_2892dc;
            case 0x2892E0u: goto label_2892e0;
            case 0x2892E4u: goto label_2892e4;
            case 0x2892E8u: goto label_2892e8;
            case 0x2892ECu: goto label_2892ec;
            case 0x2892F0u: goto label_2892f0;
            case 0x2892F4u: goto label_2892f4;
            case 0x2892F8u: goto label_2892f8;
            case 0x2892FCu: goto label_2892fc;
            case 0x289300u: goto label_289300;
            case 0x289304u: goto label_289304;
            case 0x289308u: goto label_289308;
            case 0x28930Cu: goto label_28930c;
            case 0x289310u: goto label_289310;
            case 0x289314u: goto label_289314;
            case 0x289318u: goto label_289318;
            case 0x28931Cu: goto label_28931c;
            case 0x289320u: goto label_289320;
            case 0x289324u: goto label_289324;
            case 0x289328u: goto label_289328;
            case 0x28932Cu: goto label_28932c;
            case 0x289330u: goto label_289330;
            case 0x289334u: goto label_289334;
            case 0x289338u: goto label_289338;
            case 0x28933Cu: goto label_28933c;
            case 0x289340u: goto label_289340;
            case 0x289344u: goto label_289344;
            case 0x289348u: goto label_289348;
            case 0x28934Cu: goto label_28934c;
            case 0x289350u: goto label_289350;
            case 0x289354u: goto label_289354;
            case 0x289358u: goto label_289358;
            case 0x28935Cu: goto label_28935c;
            case 0x289360u: goto label_289360;
            case 0x289364u: goto label_289364;
            case 0x289368u: goto label_289368;
            case 0x28936Cu: goto label_28936c;
            case 0x289370u: goto label_289370;
            case 0x289374u: goto label_289374;
            case 0x289378u: goto label_289378;
            case 0x28937Cu: goto label_28937c;
            case 0x289380u: goto label_289380;
            case 0x289384u: goto label_289384;
            case 0x289388u: goto label_289388;
            case 0x28938Cu: goto label_28938c;
            case 0x289390u: goto label_289390;
            case 0x289394u: goto label_289394;
            case 0x289398u: goto label_289398;
            case 0x28939Cu: goto label_28939c;
            case 0x2893A0u: goto label_2893a0;
            case 0x2893A4u: goto label_2893a4;
            case 0x2893A8u: goto label_2893a8;
            case 0x2893ACu: goto label_2893ac;
            case 0x2893B0u: goto label_2893b0;
            case 0x2893B4u: goto label_2893b4;
            case 0x2893B8u: goto label_2893b8;
            case 0x2893BCu: goto label_2893bc;
            case 0x2893C0u: goto label_2893c0;
            case 0x2893C4u: goto label_2893c4;
            case 0x2893C8u: goto label_2893c8;
            case 0x2893CCu: goto label_2893cc;
            case 0x2893D0u: goto label_2893d0;
            case 0x2893D4u: goto label_2893d4;
            case 0x2893D8u: goto label_2893d8;
            case 0x2893DCu: goto label_2893dc;
            case 0x2893E0u: goto label_2893e0;
            case 0x2893E4u: goto label_2893e4;
            case 0x2893E8u: goto label_2893e8;
            case 0x2893ECu: goto label_2893ec;
            case 0x2893F0u: goto label_2893f0;
            case 0x2893F4u: goto label_2893f4;
            case 0x2893F8u: goto label_2893f8;
            case 0x2893FCu: goto label_2893fc;
            case 0x289400u: goto label_289400;
            case 0x289404u: goto label_289404;
            case 0x289408u: goto label_289408;
            case 0x28940Cu: goto label_28940c;
            case 0x289410u: goto label_289410;
            case 0x289414u: goto label_289414;
            case 0x289418u: goto label_289418;
            case 0x28941Cu: goto label_28941c;
            case 0x289420u: goto label_289420;
            case 0x289424u: goto label_289424;
            case 0x289428u: goto label_289428;
            case 0x28942Cu: goto label_28942c;
            case 0x289430u: goto label_289430;
            case 0x289434u: goto label_289434;
            case 0x289438u: goto label_289438;
            case 0x28943Cu: goto label_28943c;
            case 0x289440u: goto label_289440;
            case 0x289444u: goto label_289444;
            case 0x289448u: goto label_289448;
            case 0x28944Cu: goto label_28944c;
            case 0x289450u: goto label_289450;
            case 0x289454u: goto label_289454;
            case 0x289458u: goto label_289458;
            case 0x28945Cu: goto label_28945c;
            case 0x289460u: goto label_289460;
            case 0x289464u: goto label_289464;
            case 0x289468u: goto label_289468;
            case 0x28946Cu: goto label_28946c;
            case 0x289470u: goto label_289470;
            case 0x289474u: goto label_289474;
            case 0x289478u: goto label_289478;
            case 0x28947Cu: goto label_28947c;
            case 0x289480u: goto label_289480;
            case 0x289484u: goto label_289484;
            case 0x289488u: goto label_289488;
            case 0x28948Cu: goto label_28948c;
            case 0x289490u: goto label_289490;
            case 0x289494u: goto label_289494;
            case 0x289498u: goto label_289498;
            case 0x28949Cu: goto label_28949c;
            case 0x2894A0u: goto label_2894a0;
            case 0x2894A4u: goto label_2894a4;
            case 0x2894A8u: goto label_2894a8;
            case 0x2894ACu: goto label_2894ac;
            case 0x2894B0u: goto label_2894b0;
            case 0x2894B4u: goto label_2894b4;
            case 0x2894B8u: goto label_2894b8;
            case 0x2894BCu: goto label_2894bc;
            case 0x2894C0u: goto label_2894c0;
            case 0x2894C4u: goto label_2894c4;
            case 0x2894C8u: goto label_2894c8;
            case 0x2894CCu: goto label_2894cc;
            case 0x2894D0u: goto label_2894d0;
            case 0x2894D4u: goto label_2894d4;
            case 0x2894D8u: goto label_2894d8;
            case 0x2894DCu: goto label_2894dc;
            case 0x2894E0u: goto label_2894e0;
            case 0x2894E4u: goto label_2894e4;
            case 0x2894E8u: goto label_2894e8;
            case 0x2894ECu: goto label_2894ec;
            case 0x2894F0u: goto label_2894f0;
            case 0x2894F4u: goto label_2894f4;
            case 0x2894F8u: goto label_2894f8;
            case 0x2894FCu: goto label_2894fc;
            case 0x289500u: goto label_289500;
            case 0x289504u: goto label_289504;
            case 0x289508u: goto label_289508;
            case 0x28950Cu: goto label_28950c;
            case 0x289510u: goto label_289510;
            case 0x289514u: goto label_289514;
            case 0x289518u: goto label_289518;
            case 0x28951Cu: goto label_28951c;
            case 0x289520u: goto label_289520;
            case 0x289524u: goto label_289524;
            case 0x289528u: goto label_289528;
            case 0x28952Cu: goto label_28952c;
            case 0x289530u: goto label_289530;
            case 0x289534u: goto label_289534;
            case 0x289538u: goto label_289538;
            case 0x28953Cu: goto label_28953c;
            case 0x289540u: goto label_289540;
            case 0x289544u: goto label_289544;
            case 0x289548u: goto label_289548;
            case 0x28954Cu: goto label_28954c;
            case 0x289550u: goto label_289550;
            case 0x289554u: goto label_289554;
            case 0x289558u: goto label_289558;
            case 0x28955Cu: goto label_28955c;
            case 0x289560u: goto label_289560;
            case 0x289564u: goto label_289564;
            case 0x289568u: goto label_289568;
            case 0x28956Cu: goto label_28956c;
            case 0x289570u: goto label_289570;
            case 0x289574u: goto label_289574;
            case 0x289578u: goto label_289578;
            case 0x28957Cu: goto label_28957c;
            case 0x289580u: goto label_289580;
            case 0x289584u: goto label_289584;
            case 0x289588u: goto label_289588;
            case 0x28958Cu: goto label_28958c;
            case 0x289590u: goto label_289590;
            case 0x289594u: goto label_289594;
            case 0x289598u: goto label_289598;
            case 0x28959Cu: goto label_28959c;
            case 0x2895A0u: goto label_2895a0;
            case 0x2895A4u: goto label_2895a4;
            case 0x2895A8u: goto label_2895a8;
            case 0x2895ACu: goto label_2895ac;
            case 0x2895B0u: goto label_2895b0;
            case 0x2895B4u: goto label_2895b4;
            case 0x2895B8u: goto label_2895b8;
            case 0x2895BCu: goto label_2895bc;
            case 0x2895C0u: goto label_2895c0;
            case 0x2895C4u: goto label_2895c4;
            case 0x2895C8u: goto label_2895c8;
            case 0x2895CCu: goto label_2895cc;
            case 0x2895D0u: goto label_2895d0;
            case 0x2895D4u: goto label_2895d4;
            case 0x2895D8u: goto label_2895d8;
            case 0x2895DCu: goto label_2895dc;
            case 0x2895E0u: goto label_2895e0;
            case 0x2895E4u: goto label_2895e4;
            case 0x2895E8u: goto label_2895e8;
            case 0x2895ECu: goto label_2895ec;
            case 0x2895F0u: goto label_2895f0;
            case 0x2895F4u: goto label_2895f4;
            case 0x2895F8u: goto label_2895f8;
            case 0x2895FCu: goto label_2895fc;
            case 0x289600u: goto label_289600;
            case 0x289604u: goto label_289604;
            case 0x289608u: goto label_289608;
            case 0x28960Cu: goto label_28960c;
            case 0x289610u: goto label_289610;
            case 0x289614u: goto label_289614;
            case 0x289618u: goto label_289618;
            case 0x28961Cu: goto label_28961c;
            case 0x289620u: goto label_289620;
            case 0x289624u: goto label_289624;
            case 0x289628u: goto label_289628;
            case 0x28962Cu: goto label_28962c;
            case 0x289630u: goto label_289630;
            case 0x289634u: goto label_289634;
            case 0x289638u: goto label_289638;
            case 0x28963Cu: goto label_28963c;
            case 0x289640u: goto label_289640;
            case 0x289644u: goto label_289644;
            case 0x289648u: goto label_289648;
            case 0x28964Cu: goto label_28964c;
            case 0x289650u: goto label_289650;
            case 0x289654u: goto label_289654;
            case 0x289658u: goto label_289658;
            case 0x28965Cu: goto label_28965c;
            case 0x289660u: goto label_289660;
            case 0x289664u: goto label_289664;
            case 0x289668u: goto label_289668;
            case 0x28966Cu: goto label_28966c;
            case 0x289670u: goto label_289670;
            case 0x289674u: goto label_289674;
            case 0x289678u: goto label_289678;
            case 0x28967Cu: goto label_28967c;
            case 0x289680u: goto label_289680;
            case 0x289684u: goto label_289684;
            case 0x289688u: goto label_289688;
            case 0x28968Cu: goto label_28968c;
            case 0x289690u: goto label_289690;
            case 0x289694u: goto label_289694;
            case 0x289698u: goto label_289698;
            case 0x28969Cu: goto label_28969c;
            case 0x2896A0u: goto label_2896a0;
            case 0x2896A4u: goto label_2896a4;
            case 0x2896A8u: goto label_2896a8;
            case 0x2896ACu: goto label_2896ac;
            case 0x2896B0u: goto label_2896b0;
            case 0x2896B4u: goto label_2896b4;
            case 0x2896B8u: goto label_2896b8;
            case 0x2896BCu: goto label_2896bc;
            case 0x2896C0u: goto label_2896c0;
            case 0x2896C4u: goto label_2896c4;
            case 0x2896C8u: goto label_2896c8;
            case 0x2896CCu: goto label_2896cc;
            case 0x2896D0u: goto label_2896d0;
            case 0x2896D4u: goto label_2896d4;
            case 0x2896D8u: goto label_2896d8;
            case 0x2896DCu: goto label_2896dc;
            case 0x2896E0u: goto label_2896e0;
            case 0x2896E4u: goto label_2896e4;
            case 0x2896E8u: goto label_2896e8;
            case 0x2896ECu: goto label_2896ec;
            case 0x2896F0u: goto label_2896f0;
            case 0x2896F4u: goto label_2896f4;
            case 0x2896F8u: goto label_2896f8;
            case 0x2896FCu: goto label_2896fc;
            case 0x289700u: goto label_289700;
            case 0x289704u: goto label_289704;
            case 0x289708u: goto label_289708;
            case 0x28970Cu: goto label_28970c;
            case 0x289710u: goto label_289710;
            case 0x289714u: goto label_289714;
            case 0x289718u: goto label_289718;
            case 0x28971Cu: goto label_28971c;
            case 0x289720u: goto label_289720;
            case 0x289724u: goto label_289724;
            case 0x289728u: goto label_289728;
            case 0x28972Cu: goto label_28972c;
            case 0x289730u: goto label_289730;
            case 0x289734u: goto label_289734;
            case 0x289738u: goto label_289738;
            case 0x28973Cu: goto label_28973c;
            case 0x289740u: goto label_289740;
            case 0x289744u: goto label_289744;
            case 0x289748u: goto label_289748;
            case 0x28974Cu: goto label_28974c;
            case 0x289750u: goto label_289750;
            case 0x289754u: goto label_289754;
            case 0x289758u: goto label_289758;
            case 0x28975Cu: goto label_28975c;
            case 0x289760u: goto label_289760;
            case 0x289764u: goto label_289764;
            case 0x289768u: goto label_289768;
            case 0x28976Cu: goto label_28976c;
            case 0x289770u: goto label_289770;
            case 0x289774u: goto label_289774;
            case 0x289778u: goto label_289778;
            case 0x28977Cu: goto label_28977c;
            case 0x289780u: goto label_289780;
            case 0x289784u: goto label_289784;
            case 0x289788u: goto label_289788;
            case 0x28978Cu: goto label_28978c;
            case 0x289790u: goto label_289790;
            case 0x289794u: goto label_289794;
            case 0x289798u: goto label_289798;
            case 0x28979Cu: goto label_28979c;
            case 0x2897A0u: goto label_2897a0;
            case 0x2897A4u: goto label_2897a4;
            case 0x2897A8u: goto label_2897a8;
            case 0x2897ACu: goto label_2897ac;
            case 0x2897B0u: goto label_2897b0;
            case 0x2897B4u: goto label_2897b4;
            case 0x2897B8u: goto label_2897b8;
            case 0x2897BCu: goto label_2897bc;
            case 0x2897C0u: goto label_2897c0;
            case 0x2897C4u: goto label_2897c4;
            case 0x2897C8u: goto label_2897c8;
            case 0x2897CCu: goto label_2897cc;
            case 0x2897D0u: goto label_2897d0;
            case 0x2897D4u: goto label_2897d4;
            case 0x2897D8u: goto label_2897d8;
            case 0x2897DCu: goto label_2897dc;
            case 0x2897E0u: goto label_2897e0;
            case 0x2897E4u: goto label_2897e4;
            case 0x2897E8u: goto label_2897e8;
            case 0x2897ECu: goto label_2897ec;
            case 0x2897F0u: goto label_2897f0;
            case 0x2897F4u: goto label_2897f4;
            case 0x2897F8u: goto label_2897f8;
            case 0x2897FCu: goto label_2897fc;
            case 0x289800u: goto label_289800;
            case 0x289804u: goto label_289804;
            case 0x289808u: goto label_289808;
            case 0x28980Cu: goto label_28980c;
            case 0x289810u: goto label_289810;
            case 0x289814u: goto label_289814;
            case 0x289818u: goto label_289818;
            case 0x28981Cu: goto label_28981c;
            case 0x289820u: goto label_289820;
            case 0x289824u: goto label_289824;
            case 0x289828u: goto label_289828;
            case 0x28982Cu: goto label_28982c;
            case 0x289830u: goto label_289830;
            case 0x289834u: goto label_289834;
            case 0x289838u: goto label_289838;
            case 0x28983Cu: goto label_28983c;
            case 0x289840u: goto label_289840;
            case 0x289844u: goto label_289844;
            case 0x289848u: goto label_289848;
            case 0x28984Cu: goto label_28984c;
            case 0x289850u: goto label_289850;
            case 0x289854u: goto label_289854;
            case 0x289858u: goto label_289858;
            case 0x28985Cu: goto label_28985c;
            case 0x289860u: goto label_289860;
            case 0x289864u: goto label_289864;
            case 0x289868u: goto label_289868;
            case 0x28986Cu: goto label_28986c;
            case 0x289870u: goto label_289870;
            case 0x289874u: goto label_289874;
            case 0x289878u: goto label_289878;
            case 0x28987Cu: goto label_28987c;
            case 0x289880u: goto label_289880;
            case 0x289884u: goto label_289884;
            case 0x289888u: goto label_289888;
            case 0x28988Cu: goto label_28988c;
            case 0x289890u: goto label_289890;
            case 0x289894u: goto label_289894;
            case 0x289898u: goto label_289898;
            case 0x28989Cu: goto label_28989c;
            case 0x2898A0u: goto label_2898a0;
            case 0x2898A4u: goto label_2898a4;
            case 0x2898A8u: goto label_2898a8;
            case 0x2898ACu: goto label_2898ac;
            case 0x2898B0u: goto label_2898b0;
            case 0x2898B4u: goto label_2898b4;
            case 0x2898B8u: goto label_2898b8;
            case 0x2898BCu: goto label_2898bc;
            case 0x2898C0u: goto label_2898c0;
            case 0x2898C4u: goto label_2898c4;
            case 0x2898C8u: goto label_2898c8;
            case 0x2898CCu: goto label_2898cc;
            case 0x2898D0u: goto label_2898d0;
            case 0x2898D4u: goto label_2898d4;
            case 0x2898D8u: goto label_2898d8;
            case 0x2898DCu: goto label_2898dc;
            case 0x2898E0u: goto label_2898e0;
            case 0x2898E4u: goto label_2898e4;
            case 0x2898E8u: goto label_2898e8;
            case 0x2898ECu: goto label_2898ec;
            case 0x2898F0u: goto label_2898f0;
            case 0x2898F4u: goto label_2898f4;
            case 0x2898F8u: goto label_2898f8;
            case 0x2898FCu: goto label_2898fc;
            case 0x289900u: goto label_289900;
            case 0x289904u: goto label_289904;
            case 0x289908u: goto label_289908;
            case 0x28990Cu: goto label_28990c;
            case 0x289910u: goto label_289910;
            case 0x289914u: goto label_289914;
            case 0x289918u: goto label_289918;
            case 0x28991Cu: goto label_28991c;
            case 0x289920u: goto label_289920;
            case 0x289924u: goto label_289924;
            case 0x289928u: goto label_289928;
            case 0x28992Cu: goto label_28992c;
            case 0x289930u: goto label_289930;
            case 0x289934u: goto label_289934;
            case 0x289938u: goto label_289938;
            case 0x28993Cu: goto label_28993c;
            case 0x289940u: goto label_289940;
            case 0x289944u: goto label_289944;
            case 0x289948u: goto label_289948;
            case 0x28994Cu: goto label_28994c;
            case 0x289950u: goto label_289950;
            case 0x289954u: goto label_289954;
            case 0x289958u: goto label_289958;
            case 0x28995Cu: goto label_28995c;
            case 0x289960u: goto label_289960;
            case 0x289964u: goto label_289964;
            case 0x289968u: goto label_289968;
            case 0x28996Cu: goto label_28996c;
            case 0x289970u: goto label_289970;
            case 0x289974u: goto label_289974;
            case 0x289978u: goto label_289978;
            case 0x28997Cu: goto label_28997c;
            case 0x289980u: goto label_289980;
            case 0x289984u: goto label_289984;
            case 0x289988u: goto label_289988;
            case 0x28998Cu: goto label_28998c;
            case 0x289990u: goto label_289990;
            case 0x289994u: goto label_289994;
            case 0x289998u: goto label_289998;
            case 0x28999Cu: goto label_28999c;
            case 0x2899A0u: goto label_2899a0;
            case 0x2899A4u: goto label_2899a4;
            case 0x2899A8u: goto label_2899a8;
            case 0x2899ACu: goto label_2899ac;
            case 0x2899B0u: goto label_2899b0;
            case 0x2899B4u: goto label_2899b4;
            case 0x2899B8u: goto label_2899b8;
            case 0x2899BCu: goto label_2899bc;
            case 0x2899C0u: goto label_2899c0;
            case 0x2899C4u: goto label_2899c4;
            case 0x2899C8u: goto label_2899c8;
            case 0x2899CCu: goto label_2899cc;
            case 0x2899D0u: goto label_2899d0;
            case 0x2899D4u: goto label_2899d4;
            case 0x2899D8u: goto label_2899d8;
            case 0x2899DCu: goto label_2899dc;
            case 0x2899E0u: goto label_2899e0;
            case 0x2899E4u: goto label_2899e4;
            case 0x2899E8u: goto label_2899e8;
            case 0x2899ECu: goto label_2899ec;
            case 0x2899F0u: goto label_2899f0;
            case 0x2899F4u: goto label_2899f4;
            case 0x2899F8u: goto label_2899f8;
            case 0x2899FCu: goto label_2899fc;
            case 0x289A00u: goto label_289a00;
            case 0x289A04u: goto label_289a04;
            case 0x289A08u: goto label_289a08;
            case 0x289A0Cu: goto label_289a0c;
            case 0x289A10u: goto label_289a10;
            case 0x289A14u: goto label_289a14;
            case 0x289A18u: goto label_289a18;
            case 0x289A1Cu: goto label_289a1c;
            case 0x289A20u: goto label_289a20;
            case 0x289A24u: goto label_289a24;
            case 0x289A28u: goto label_289a28;
            case 0x289A2Cu: goto label_289a2c;
            case 0x289A30u: goto label_289a30;
            case 0x289A34u: goto label_289a34;
            case 0x289A38u: goto label_289a38;
            case 0x289A3Cu: goto label_289a3c;
            case 0x289A40u: goto label_289a40;
            case 0x289A44u: goto label_289a44;
            case 0x289A48u: goto label_289a48;
            case 0x289A4Cu: goto label_289a4c;
            case 0x289A50u: goto label_289a50;
            case 0x289A54u: goto label_289a54;
            case 0x289A58u: goto label_289a58;
            case 0x289A5Cu: goto label_289a5c;
            case 0x289A60u: goto label_289a60;
            case 0x289A64u: goto label_289a64;
            case 0x289A68u: goto label_289a68;
            case 0x289A6Cu: goto label_289a6c;
            case 0x289A70u: goto label_289a70;
            case 0x289A74u: goto label_289a74;
            case 0x289A78u: goto label_289a78;
            case 0x289A7Cu: goto label_289a7c;
            case 0x289A80u: goto label_289a80;
            case 0x289A84u: goto label_289a84;
            case 0x289A88u: goto label_289a88;
            case 0x289A8Cu: goto label_289a8c;
            case 0x289A90u: goto label_289a90;
            case 0x289A94u: goto label_289a94;
            case 0x289A98u: goto label_289a98;
            case 0x289A9Cu: goto label_289a9c;
            case 0x289AA0u: goto label_289aa0;
            case 0x289AA4u: goto label_289aa4;
            case 0x289AA8u: goto label_289aa8;
            case 0x289AACu: goto label_289aac;
            case 0x289AB0u: goto label_289ab0;
            case 0x289AB4u: goto label_289ab4;
            case 0x289AB8u: goto label_289ab8;
            case 0x289ABCu: goto label_289abc;
            case 0x289AC0u: goto label_289ac0;
            case 0x289AC4u: goto label_289ac4;
            case 0x289AC8u: goto label_289ac8;
            case 0x289ACCu: goto label_289acc;
            case 0x289AD0u: goto label_289ad0;
            case 0x289AD4u: goto label_289ad4;
            case 0x289AD8u: goto label_289ad8;
            case 0x289ADCu: goto label_289adc;
            case 0x289AE0u: goto label_289ae0;
            case 0x289AE4u: goto label_289ae4;
            case 0x289AE8u: goto label_289ae8;
            case 0x289AECu: goto label_289aec;
            case 0x289AF0u: goto label_289af0;
            case 0x289AF4u: goto label_289af4;
            case 0x289AF8u: goto label_289af8;
            case 0x289AFCu: goto label_289afc;
            case 0x289B00u: goto label_289b00;
            case 0x289B04u: goto label_289b04;
            case 0x289B08u: goto label_289b08;
            case 0x289B0Cu: goto label_289b0c;
            case 0x289B10u: goto label_289b10;
            case 0x289B14u: goto label_289b14;
            case 0x289B18u: goto label_289b18;
            case 0x289B1Cu: goto label_289b1c;
            case 0x289B20u: goto label_289b20;
            case 0x289B24u: goto label_289b24;
            case 0x289B28u: goto label_289b28;
            case 0x289B2Cu: goto label_289b2c;
            case 0x289B30u: goto label_289b30;
            case 0x289B34u: goto label_289b34;
            case 0x289B38u: goto label_289b38;
            case 0x289B3Cu: goto label_289b3c;
            case 0x289B40u: goto label_289b40;
            case 0x289B44u: goto label_289b44;
            case 0x289B48u: goto label_289b48;
            case 0x289B4Cu: goto label_289b4c;
            case 0x289B50u: goto label_289b50;
            case 0x289B54u: goto label_289b54;
            case 0x289B58u: goto label_289b58;
            case 0x289B5Cu: goto label_289b5c;
            case 0x289B60u: goto label_289b60;
            case 0x289B64u: goto label_289b64;
            case 0x289B68u: goto label_289b68;
            case 0x289B6Cu: goto label_289b6c;
            case 0x289B70u: goto label_289b70;
            case 0x289B74u: goto label_289b74;
            case 0x289B78u: goto label_289b78;
            case 0x289B7Cu: goto label_289b7c;
            case 0x289B80u: goto label_289b80;
            case 0x289B84u: goto label_289b84;
            case 0x289B88u: goto label_289b88;
            case 0x289B8Cu: goto label_289b8c;
            case 0x289B90u: goto label_289b90;
            case 0x289B94u: goto label_289b94;
            case 0x289B98u: goto label_289b98;
            case 0x289B9Cu: goto label_289b9c;
            case 0x289BA0u: goto label_289ba0;
            case 0x289BA4u: goto label_289ba4;
            case 0x289BA8u: goto label_289ba8;
            case 0x289BACu: goto label_289bac;
            case 0x289BB0u: goto label_289bb0;
            case 0x289BB4u: goto label_289bb4;
            case 0x289BB8u: goto label_289bb8;
            case 0x289BBCu: goto label_289bbc;
            case 0x289BC0u: goto label_289bc0;
            case 0x289BC4u: goto label_289bc4;
            case 0x289BC8u: goto label_289bc8;
            case 0x289BCCu: goto label_289bcc;
            case 0x289BD0u: goto label_289bd0;
            case 0x289BD4u: goto label_289bd4;
            case 0x289BD8u: goto label_289bd8;
            case 0x289BDCu: goto label_289bdc;
            case 0x289BE0u: goto label_289be0;
            case 0x289BE4u: goto label_289be4;
            case 0x289BE8u: goto label_289be8;
            case 0x289BECu: goto label_289bec;
            case 0x289BF0u: goto label_289bf0;
            case 0x289BF4u: goto label_289bf4;
            case 0x289BF8u: goto label_289bf8;
            case 0x289BFCu: goto label_289bfc;
            case 0x289C00u: goto label_289c00;
            case 0x289C04u: goto label_289c04;
            case 0x289C08u: goto label_289c08;
            case 0x289C0Cu: goto label_289c0c;
            case 0x289C10u: goto label_289c10;
            case 0x289C14u: goto label_289c14;
            case 0x289C18u: goto label_289c18;
            case 0x289C1Cu: goto label_289c1c;
            case 0x289C20u: goto label_289c20;
            case 0x289C24u: goto label_289c24;
            case 0x289C28u: goto label_289c28;
            case 0x289C2Cu: goto label_289c2c;
            case 0x289C30u: goto label_289c30;
            case 0x289C34u: goto label_289c34;
            case 0x289C38u: goto label_289c38;
            case 0x289C3Cu: goto label_289c3c;
            case 0x289C40u: goto label_289c40;
            case 0x289C44u: goto label_289c44;
            case 0x289C48u: goto label_289c48;
            case 0x289C4Cu: goto label_289c4c;
            case 0x289C50u: goto label_289c50;
            case 0x289C54u: goto label_289c54;
            case 0x289C58u: goto label_289c58;
            case 0x289C5Cu: goto label_289c5c;
            case 0x289C60u: goto label_289c60;
            case 0x289C64u: goto label_289c64;
            case 0x289C68u: goto label_289c68;
            case 0x289C6Cu: goto label_289c6c;
            case 0x289C70u: goto label_289c70;
            case 0x289C74u: goto label_289c74;
            case 0x289C78u: goto label_289c78;
            case 0x289C7Cu: goto label_289c7c;
            case 0x289C80u: goto label_289c80;
            case 0x289C84u: goto label_289c84;
            case 0x289C88u: goto label_289c88;
            case 0x289C8Cu: goto label_289c8c;
            case 0x289C90u: goto label_289c90;
            case 0x289C94u: goto label_289c94;
            case 0x289C98u: goto label_289c98;
            case 0x289C9Cu: goto label_289c9c;
            case 0x289CA0u: goto label_289ca0;
            case 0x289CA4u: goto label_289ca4;
            case 0x289CA8u: goto label_289ca8;
            case 0x289CACu: goto label_289cac;
            case 0x289CB0u: goto label_289cb0;
            case 0x289CB4u: goto label_289cb4;
            case 0x289CB8u: goto label_289cb8;
            case 0x289CBCu: goto label_289cbc;
            case 0x289CC0u: goto label_289cc0;
            case 0x289CC4u: goto label_289cc4;
            case 0x289CC8u: goto label_289cc8;
            case 0x289CCCu: goto label_289ccc;
            case 0x289CD0u: goto label_289cd0;
            case 0x289CD4u: goto label_289cd4;
            case 0x289CD8u: goto label_289cd8;
            case 0x289CDCu: goto label_289cdc;
            case 0x289CE0u: goto label_289ce0;
            case 0x289CE4u: goto label_289ce4;
            case 0x289CE8u: goto label_289ce8;
            case 0x289CECu: goto label_289cec;
            case 0x289CF0u: goto label_289cf0;
            case 0x289CF4u: goto label_289cf4;
            case 0x289CF8u: goto label_289cf8;
            case 0x289CFCu: goto label_289cfc;
            case 0x289D00u: goto label_289d00;
            case 0x289D04u: goto label_289d04;
            case 0x289D08u: goto label_289d08;
            case 0x289D0Cu: goto label_289d0c;
            case 0x289D10u: goto label_289d10;
            case 0x289D14u: goto label_289d14;
            case 0x289D18u: goto label_289d18;
            case 0x289D1Cu: goto label_289d1c;
            case 0x289D20u: goto label_289d20;
            case 0x289D24u: goto label_289d24;
            case 0x289D28u: goto label_289d28;
            case 0x289D2Cu: goto label_289d2c;
            case 0x289D30u: goto label_289d30;
            case 0x289D34u: goto label_289d34;
            case 0x289D38u: goto label_289d38;
            case 0x289D3Cu: goto label_289d3c;
            case 0x289D40u: goto label_289d40;
            case 0x289D44u: goto label_289d44;
            case 0x289D48u: goto label_289d48;
            case 0x289D4Cu: goto label_289d4c;
            case 0x289D50u: goto label_289d50;
            case 0x289D54u: goto label_289d54;
            case 0x289D58u: goto label_289d58;
            case 0x289D5Cu: goto label_289d5c;
            case 0x289D60u: goto label_289d60;
            case 0x289D64u: goto label_289d64;
            case 0x289D68u: goto label_289d68;
            case 0x289D6Cu: goto label_289d6c;
            case 0x289D70u: goto label_289d70;
            case 0x289D74u: goto label_289d74;
            case 0x289D78u: goto label_289d78;
            default: break;
        }
        return;
    }
label_fallthrough_0x289d74:
    ctx->pc = 0x289D7Cu;
}
