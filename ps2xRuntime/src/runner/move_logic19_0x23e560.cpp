#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic19
// Address: 0x23e560 - 0x23e86c
void move_logic19_0x23e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23e560u;

    // 0x23e560: 0x27bdffc0
    ctx->pc = 0x23e560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23e564: 0xffbf0030
    ctx->pc = 0x23e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23e568: 0xffb20020
    ctx->pc = 0x23e568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23e56c: 0xffb10010
    ctx->pc = 0x23e56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23e570: 0xffb00000
    ctx->pc = 0x23e570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23e574: 0x80882d
    ctx->pc = 0x23e574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e578: 0x240303b0
    ctx->pc = 0x23e578u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23e57c: 0x2231818
    ctx->pc = 0x23e57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23e580: 0x3c020033
    ctx->pc = 0x23e580u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23e584: 0x2442dfd0
    ctx->pc = 0x23e584u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23e588: 0x628021
    ctx->pc = 0x23e588u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e58c: 0x8e020330
    ctx->pc = 0x23e58cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x23e590: 0x14400015
    ctx->pc = 0x23E590u;
    {
        const bool branch_taken_0x23e590 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23E594u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 132));
        if (branch_taken_0x23e590) {
            ctx->pc = 0x23E5E8u;
            goto label_23e5e8;
        }
    }
    ctx->pc = 0x23E598u;
    // 0x23e598: 0x86020288
    ctx->pc = 0x23e598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23e59c: 0x442000e
    ctx->pc = 0x23E59Cu;
    {
        const bool branch_taken_0x23e59c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23e59c) {
            ctx->pc = 0x23E5A0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 816)));
            ctx->pc = 0x23E5D8u;
            goto label_23e5d8;
        }
    }
    ctx->pc = 0x23E5A4u;
    // 0x23e5a4: 0xc6010290
    ctx->pc = 0x23e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e5a8: 0xc6000314
    ctx->pc = 0x23e5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e5ac: 0x46000834
    ctx->pc = 0x23e5acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e5b0: 0x0
    ctx->pc = 0x23e5b0u;
    // NOP
    // 0x23e5b4: 0x45020008
    ctx->pc = 0x23E5B4u;
    {
        const bool branch_taken_0x23e5b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e5b4) {
            ctx->pc = 0x23E5B8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 816)));
            ctx->pc = 0x23E5D8u;
            goto label_23e5d8;
        }
    }
    ctx->pc = 0x23E5BCu;
    // 0x23e5bc: 0x860202f0
    ctx->pc = 0x23e5bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x23e5c0: 0x10400004
    ctx->pc = 0x23E5C0u;
    {
        const bool branch_taken_0x23e5c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23E5C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23e5c0) {
            ctx->pc = 0x23E5D4u;
            goto label_23e5d4;
        }
    }
    ctx->pc = 0x23E5C8u;
    // 0x23e5c8: 0xae020330
    ctx->pc = 0x23e5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
    // 0x23e5cc: 0xc097f0e
    ctx->pc = 0x23E5CCu;
    SET_GPR_U32(ctx, 31, 0x23E5D4u);
    ctx->pc = 0x23E5D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x25FC38u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioGolemBorn_0x25fc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E5D4u; }
    }
    if (ctx->pc != 0x23E5D4u) { return; }
    ctx->pc = 0x23E5D4u;
label_23e5d4:
    // 0x23e5d4: 0x8e020330
    ctx->pc = 0x23e5d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 816)));
label_23e5d8:
    // 0x23e5d8: 0x14400004
    ctx->pc = 0x23E5D8u;
    {
        const bool branch_taken_0x23e5d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23E5DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23e5d8) {
            ctx->pc = 0x23E5ECu;
            goto label_23e5ec;
        }
    }
    ctx->pc = 0x23E5E0u;
    // 0x23e5e0: 0x1000009c
    ctx->pc = 0x23E5E0u;
    {
        const bool branch_taken_0x23e5e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23E5E4u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x23e5e0) {
            ctx->pc = 0x23E854u;
            goto label_23e854;
        }
    }
    ctx->pc = 0x23E5E8u;
label_23e5e8:
    // 0x23e5e8: 0x24020001
    ctx->pc = 0x23e5e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_23e5ec:
    // 0x23e5ec: 0xa642001e
    ctx->pc = 0x23e5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e5f0: 0x860202f2
    ctx->pc = 0x23e5f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 754)));
    // 0x23e5f4: 0x10400005
    ctx->pc = 0x23E5F4u;
    {
        const bool branch_taken_0x23e5f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23E5F8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x23e5f4) {
            ctx->pc = 0x23E60Cu;
            goto label_23e60c;
        }
    }
    ctx->pc = 0x23E5FCu;
    // 0x23e5fc: 0x86020288
    ctx->pc = 0x23e5fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23e600: 0x443000b
    ctx->pc = 0x23E600u;
    {
        const bool branch_taken_0x23e600 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23e600) {
            ctx->pc = 0x23E604u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
            ctx->pc = 0x23E630u;
            goto label_23e630;
        }
    }
    ctx->pc = 0x23E608u;
    // 0x23e608: 0x32220001
    ctx->pc = 0x23e608u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
label_23e60c:
    // 0x23e60c: 0x24420005
    ctx->pc = 0x23e60cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5));
    // 0x23e610: 0xa6020324
    ctx->pc = 0x23e610u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e614: 0x220202d
    ctx->pc = 0x23e614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e618: 0xdfbf0030
    ctx->pc = 0x23e618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e61c: 0xdfb20020
    ctx->pc = 0x23e61cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e620: 0xdfb10010
    ctx->pc = 0x23e620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e624: 0xdfb00000
    ctx->pc = 0x23e624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e628: 0x809095a
    ctx->pc = 0x23E628u;
    ctx->pc = 0x23E62Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x23E630u;
label_23e630:
    // 0x23e630: 0x86020328
    ctx->pc = 0x23e630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x23e634: 0x10620004
    ctx->pc = 0x23E634u;
    {
        const bool branch_taken_0x23e634 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23E638u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23e634) {
            ctx->pc = 0x23E648u;
            goto label_23e648;
        }
    }
    ctx->pc = 0x23E63Cu;
    // 0x23e63c: 0xc08e210
    ctx->pc = 0x23E63Cu;
    SET_GPR_U32(ctx, 31, 0x23E644u);
    ctx->pc = 0x23E640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E644u; }
    }
    if (ctx->pc != 0x23E644u) { return; }
    ctx->pc = 0x23E644u;
    // 0x23e644: 0x200202d
    ctx->pc = 0x23e644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e648:
    // 0x23e648: 0xc08f0f0
    ctx->pc = 0x23E648u;
    SET_GPR_U32(ctx, 31, 0x23E650u);
    ctx->pc = 0x23E64Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E650u; }
    }
    if (ctx->pc != 0x23E650u) { return; }
    ctx->pc = 0x23E650u;
    // 0x23e650: 0xe6000260
    ctx->pc = 0x23e650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23e654: 0x8603032a
    ctx->pc = 0x23e654u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 810)));
    // 0x23e658: 0x24020001
    ctx->pc = 0x23e658u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e65c: 0x1062000a
    ctx->pc = 0x23E65Cu;
    {
        const bool branch_taken_0x23e65c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23E660u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x23e65c) {
            ctx->pc = 0x23E688u;
            goto label_23e688;
        }
    }
    ctx->pc = 0x23E664u;
    // 0x23e664: 0x14400004
    ctx->pc = 0x23E664u;
    {
        const bool branch_taken_0x23e664 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23E668u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23e664) {
            ctx->pc = 0x23E678u;
            goto label_23e678;
        }
    }
    ctx->pc = 0x23E66Cu;
    // 0x23e66c: 0x24020002
    ctx->pc = 0x23e66cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x23e670: 0x10620017
    ctx->pc = 0x23E670u;
    {
        const bool branch_taken_0x23e670 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23E674u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23e670) {
            ctx->pc = 0x23E6D0u;
            goto label_23e6d0;
        }
    }
    ctx->pc = 0x23E678u;
label_23e678:
    // 0x23e678: 0xae020338
    ctx->pc = 0x23e678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 2));
    // 0x23e67c: 0x9602032a
    ctx->pc = 0x23e67cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 810)));
    // 0x23e680: 0x24420001
    ctx->pc = 0x23e680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e684: 0xa602032a
    ctx->pc = 0x23e684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 810), (uint16_t)GPR_U32(ctx, 2));
label_23e688:
    // 0x23e688: 0x200202d
    ctx->pc = 0x23e688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e68c: 0xc09de18
    ctx->pc = 0x23E68Cu;
    SET_GPR_U32(ctx, 31, 0x23E694u);
    ctx->pc = 0x23E690u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E694u; }
    }
    if (ctx->pc != 0x23E694u) { return; }
    ctx->pc = 0x23E694u;
    // 0x23e694: 0x8e0300e0
    ctx->pc = 0x23e694u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x23e698: 0x24020003
    ctx->pc = 0x23e698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x23e69c: 0x54620009
    ctx->pc = 0x23E69Cu;
    {
        const bool branch_taken_0x23e69c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23e69c) {
            ctx->pc = 0x23E6A0u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 810)));
            ctx->pc = 0x23E6C4u;
            goto label_23e6c4;
        }
    }
    ctx->pc = 0x23E6A4u;
    // 0x23e6a4: 0xc0b5c24
    ctx->pc = 0x23E6A4u;
    SET_GPR_U32(ctx, 31, 0x23E6ACu);
    ctx->pc = 0x23E6A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 90));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E6ACu; }
    }
    if (ctx->pc != 0x23E6ACu) { return; }
    ctx->pc = 0x23E6ACu;
    // 0x23e6ac: 0x2442001e
    ctx->pc = 0x23e6acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30));
    // 0x23e6b0: 0xae020338
    ctx->pc = 0x23e6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 2));
    // 0x23e6b4: 0x9602032a
    ctx->pc = 0x23e6b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 810)));
    // 0x23e6b8: 0x24420001
    ctx->pc = 0x23e6b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e6bc: 0xa602032a
    ctx->pc = 0x23e6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 810), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e6c0: 0x8603032a
    ctx->pc = 0x23e6c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 810)));
label_23e6c4:
    // 0x23e6c4: 0x24020002
    ctx->pc = 0x23e6c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x23e6c8: 0x14620020
    ctx->pc = 0x23E6C8u;
    {
        const bool branch_taken_0x23e6c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23e6c8) {
            ctx->pc = 0x23E74Cu;
            goto label_23e74c;
        }
    }
    ctx->pc = 0x23E6D0u;
label_23e6d0:
    // 0x23e6d0: 0x8e03036c
    ctx->pc = 0x23e6d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23e6d4: 0x18600005
    ctx->pc = 0x23E6D4u;
    {
        const bool branch_taken_0x23e6d4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23E6D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23e6d4) {
            ctx->pc = 0x23E6ECu;
            goto label_23e6ec;
        }
    }
    ctx->pc = 0x23E6DCu;
    // 0x23e6dc: 0x8c42ffbc
    ctx->pc = 0x23e6dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23e6e0: 0x621023
    ctx->pc = 0x23e6e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e6e4: 0x1c400006
    ctx->pc = 0x23E6E4u;
    {
        const bool branch_taken_0x23e6e4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23E6E8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
        if (branch_taken_0x23e6e4) {
            ctx->pc = 0x23E700u;
            goto label_23e700;
        }
    }
    ctx->pc = 0x23E6ECu;
label_23e6ec:
    // 0x23e6ec: 0x200202d
    ctx->pc = 0x23e6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e6f0: 0x3c013f80
    ctx->pc = 0x23e6f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23e6f4: 0x44816000
    ctx->pc = 0x23e6f4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23e6f8: 0xc08f14c
    ctx->pc = 0x23E6F8u;
    SET_GPR_U32(ctx, 31, 0x23E700u);
    ctx->pc = 0x23E6FCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E700u; }
    }
    if (ctx->pc != 0x23E700u) { return; }
    ctx->pc = 0x23E700u;
label_23e700:
    // 0x23e700: 0x3c020031
    ctx->pc = 0x23e700u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x23e704: 0x8e030338
    ctx->pc = 0x23e704u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x23e708: 0x8c42ffbc
    ctx->pc = 0x23e708u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23e70c: 0x621823
    ctx->pc = 0x23e70cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e710: 0x1c600005
    ctx->pc = 0x23E710u;
    {
        const bool branch_taken_0x23e710 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x23E714u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 3));
        if (branch_taken_0x23e710) {
            ctx->pc = 0x23E728u;
            goto label_23e728;
        }
    }
    ctx->pc = 0x23E718u;
    // 0x23e718: 0x8e0300e4
    ctx->pc = 0x23e718u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x23e71c: 0x24020003
    ctx->pc = 0x23e71cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x23e720: 0x50620001
    ctx->pc = 0x23E720u;
    {
        const bool branch_taken_0x23e720 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23e720) {
            ctx->pc = 0x23E724u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
            ctx->pc = 0x23E728u;
            goto label_23e728;
        }
    }
    ctx->pc = 0x23E728u;
label_23e728:
    // 0x23e728: 0x8e02036c
    ctx->pc = 0x23e728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23e72c: 0x18400004
    ctx->pc = 0x23E72Cu;
    {
        const bool branch_taken_0x23e72c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23E730u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23e72c) {
            ctx->pc = 0x23E740u;
            goto label_23e740;
        }
    }
    ctx->pc = 0x23E734u;
    // 0x23e734: 0x86030212
    ctx->pc = 0x23e734u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
    // 0x23e738: 0x50620004
    ctx->pc = 0x23E738u;
    {
        const bool branch_taken_0x23e738 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23e738) {
            ctx->pc = 0x23E73Cu;
            WRITE16(ADD32(GPR_U32(ctx, 16), 810), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x23E74Cu;
            goto label_23e74c;
        }
    }
    ctx->pc = 0x23E740u;
label_23e740:
    // 0x23e740: 0x8e0200e0
    ctx->pc = 0x23e740u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x23e744: 0x50400001
    ctx->pc = 0x23E744u;
    {
        const bool branch_taken_0x23e744 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23e744) {
            ctx->pc = 0x23E748u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 810), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x23E74Cu;
            goto label_23e74c;
        }
    }
    ctx->pc = 0x23E74Cu;
label_23e74c:
    // 0x23e74c: 0xc08f20c
    ctx->pc = 0x23E74Cu;
    SET_GPR_U32(ctx, 31, 0x23E754u);
    ctx->pc = 0x23E750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E754u; }
    }
    if (ctx->pc != 0x23E754u) { return; }
    ctx->pc = 0x23E754u;
    // 0x23e754: 0xe6000258
    ctx->pc = 0x23e754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x23e758: 0xc090e82
    ctx->pc = 0x23E758u;
    SET_GPR_U32(ctx, 31, 0x23E760u);
    ctx->pc = 0x23E75Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E760u; }
    }
    if (ctx->pc != 0x23E760u) { return; }
    ctx->pc = 0x23E760u;
    // 0x23e760: 0x8e0300e0
    ctx->pc = 0x23e760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x23e764: 0x24020003
    ctx->pc = 0x23e764u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x23e768: 0x14620025
    ctx->pc = 0x23E768u;
    {
        const bool branch_taken_0x23e768 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23E76Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x23e768) {
            ctx->pc = 0x23E800u;
            goto label_23e800;
        }
    }
    ctx->pc = 0x23E770u;
    // 0x23e770: 0x8e02036c
    ctx->pc = 0x23e770u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23e774: 0x58400008
    ctx->pc = 0x23E774u;
    {
        const bool branch_taken_0x23e774 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23e774) {
            ctx->pc = 0x23E778u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23E798u;
            goto label_23e798;
        }
    }
    ctx->pc = 0x23E77Cu;
    // 0x23e77c: 0x8e020338
    ctx->pc = 0x23e77cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x23e780: 0x28420002
    ctx->pc = 0x23e780u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x23e784: 0x54400004
    ctx->pc = 0x23E784u;
    {
        const bool branch_taken_0x23e784 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23e784) {
            ctx->pc = 0x23E788u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23E798u;
            goto label_23e798;
        }
    }
    ctx->pc = 0x23E78Cu;
    // 0x23e78c: 0x24020001
    ctx->pc = 0x23e78cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e790: 0xae020338
    ctx->pc = 0x23e790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 2));
    // 0x23e794: 0xc60003a0
    ctx->pc = 0x23e794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23e798:
    // 0x23e798: 0x3c014120
    ctx->pc = 0x23e798u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x23e79c: 0x44810800
    ctx->pc = 0x23e79cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23e7a0: 0x46010034
    ctx->pc = 0x23e7a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e7a4: 0x0
    ctx->pc = 0x23e7a4u;
    // NOP
    // 0x23e7a8: 0x45020006
    ctx->pc = 0x23E7A8u;
    {
        const bool branch_taken_0x23e7a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e7a8) {
            ctx->pc = 0x23E7ACu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23E7C4u;
            goto label_23e7c4;
        }
    }
    ctx->pc = 0x23E7B0u;
    // 0x23e7b0: 0xc6400018
    ctx->pc = 0x23e7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e7b4: 0x46000836
    ctx->pc = 0x23e7b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e7b8: 0x4501000d
    ctx->pc = 0x23E7B8u;
    {
        const bool branch_taken_0x23e7b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e7b8) {
            ctx->pc = 0x23E7F0u;
            goto label_23e7f0;
        }
    }
    ctx->pc = 0x23E7C0u;
    // 0x23e7c0: 0xc60003a0
    ctx->pc = 0x23e7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23e7c4:
    // 0x23e7c4: 0x3c0141c8
    ctx->pc = 0x23e7c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16840 << 16));
    // 0x23e7c8: 0x44810800
    ctx->pc = 0x23e7c8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23e7cc: 0x46010034
    ctx->pc = 0x23e7ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e7d0: 0x0
    ctx->pc = 0x23e7d0u;
    // NOP
    // 0x23e7d4: 0x45020009
    ctx->pc = 0x23E7D4u;
    {
        const bool branch_taken_0x23e7d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e7d4) {
            ctx->pc = 0x23E7D8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->pc = 0x23E7FCu;
            goto label_23e7fc;
        }
    }
    ctx->pc = 0x23E7DCu;
    // 0x23e7dc: 0xc6400018
    ctx->pc = 0x23e7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e7e0: 0x46000836
    ctx->pc = 0x23e7e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e7e4: 0x0
    ctx->pc = 0x23e7e4u;
    // NOP
    // 0x23e7e8: 0x45020004
    ctx->pc = 0x23E7E8u;
    {
        const bool branch_taken_0x23e7e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e7e8) {
            ctx->pc = 0x23E7ECu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->pc = 0x23E7FCu;
            goto label_23e7fc;
        }
    }
    ctx->pc = 0x23E7F0u;
label_23e7f0:
    // 0x23e7f0: 0xc097e86
    ctx->pc = 0x23E7F0u;
    SET_GPR_U32(ctx, 31, 0x23E7F8u);
    ctx->pc = 0x23E7F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25FA18u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioEnemyWalk_0x25fa18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E7F8u; }
    }
    if (ctx->pc != 0x23E7F8u) { return; }
    ctx->pc = 0x23E7F8u;
    // 0x23e7f8: 0x8e0300e0
    ctx->pc = 0x23e7f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_23e7fc:
    // 0x23e7fc: 0x2402000c
    ctx->pc = 0x23e7fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_23e800:
    // 0x23e800: 0x10620005
    ctx->pc = 0x23E800u;
    {
        const bool branch_taken_0x23e800 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23E804u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x23e800) {
            ctx->pc = 0x23E818u;
            goto label_23e818;
        }
    }
    ctx->pc = 0x23E808u;
    // 0x23e808: 0x10620003
    ctx->pc = 0x23E808u;
    {
        const bool branch_taken_0x23e808 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23E80Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x23e808) {
            ctx->pc = 0x23E818u;
            goto label_23e818;
        }
    }
    ctx->pc = 0x23E810u;
    // 0x23e810: 0x5462000f
    ctx->pc = 0x23E810u;
    {
        const bool branch_taken_0x23e810 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23e810) {
            ctx->pc = 0x23E814u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23E850u;
            goto label_23e850;
        }
    }
    ctx->pc = 0x23E818u;
label_23e818:
    // 0x23e818: 0xc60003a0
    ctx->pc = 0x23e818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e81c: 0x3c014000
    ctx->pc = 0x23e81cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x23e820: 0x44810800
    ctx->pc = 0x23e820u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23e824: 0x46010034
    ctx->pc = 0x23e824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e828: 0x0
    ctx->pc = 0x23e828u;
    // NOP
    // 0x23e82c: 0x45000008
    ctx->pc = 0x23E82Cu;
    {
        const bool branch_taken_0x23e82c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23E830u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x23e82c) {
            ctx->pc = 0x23E850u;
            goto label_23e850;
        }
    }
    ctx->pc = 0x23E834u;
    // 0x23e834: 0x46000836
    ctx->pc = 0x23e834u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e838: 0x0
    ctx->pc = 0x23e838u;
    // NOP
    // 0x23e83c: 0x45020005
    ctx->pc = 0x23E83Cu;
    {
        const bool branch_taken_0x23e83c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e83c) {
            ctx->pc = 0x23E840u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
            ctx->pc = 0x23E854u;
            goto label_23e854;
        }
    }
    ctx->pc = 0x23E844u;
    // 0x23e844: 0xc097f14
    ctx->pc = 0x23E844u;
    SET_GPR_U32(ctx, 31, 0x23E84Cu);
    ctx->pc = 0x23E848u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x25FC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioGolemSwing_0x25fc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E84Cu; }
    }
    if (ctx->pc != 0x23E84Cu) { return; }
    ctx->pc = 0x23E84Cu;
    // 0x23e84c: 0xc6400018
    ctx->pc = 0x23e84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23e850:
    // 0x23e850: 0xe60003a0
    ctx->pc = 0x23e850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
label_23e854:
    // 0x23e854: 0xdfbf0030
    ctx->pc = 0x23e854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e858: 0xdfb20020
    ctx->pc = 0x23e858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e85c: 0xdfb10010
    ctx->pc = 0x23e85cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e860: 0xdfb00000
    ctx->pc = 0x23e860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e864: 0x3e00008
    ctx->pc = 0x23E864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E868u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23E5D4u: goto label_23e5d4;
            case 0x23E5D8u: goto label_23e5d8;
            case 0x23E5E8u: goto label_23e5e8;
            case 0x23E5ECu: goto label_23e5ec;
            case 0x23E60Cu: goto label_23e60c;
            case 0x23E630u: goto label_23e630;
            case 0x23E648u: goto label_23e648;
            case 0x23E678u: goto label_23e678;
            case 0x23E688u: goto label_23e688;
            case 0x23E6C4u: goto label_23e6c4;
            case 0x23E6D0u: goto label_23e6d0;
            case 0x23E6ECu: goto label_23e6ec;
            case 0x23E700u: goto label_23e700;
            case 0x23E728u: goto label_23e728;
            case 0x23E740u: goto label_23e740;
            case 0x23E74Cu: goto label_23e74c;
            case 0x23E798u: goto label_23e798;
            case 0x23E7C4u: goto label_23e7c4;
            case 0x23E7F0u: goto label_23e7f0;
            case 0x23E7FCu: goto label_23e7fc;
            case 0x23E800u: goto label_23e800;
            case 0x23E818u: goto label_23e818;
            case 0x23E850u: goto label_23e850;
            case 0x23E854u: goto label_23e854;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E86Cu;
}
