#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic26
// Address: 0x23d610 - 0x23d928
void move_logic26_0x23d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23d610u;

    // 0x23d610: 0x27bdffb0
    ctx->pc = 0x23d610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23d614: 0xffbf0030
    ctx->pc = 0x23d614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23d618: 0xffb20020
    ctx->pc = 0x23d618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23d61c: 0xffb10010
    ctx->pc = 0x23d61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23d620: 0xffb00000
    ctx->pc = 0x23d620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23d624: 0xe7b40040
    ctx->pc = 0x23d624u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23d628: 0x80882d
    ctx->pc = 0x23d628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d62c: 0x240303b0
    ctx->pc = 0x23d62cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23d630: 0x2231818
    ctx->pc = 0x23d630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23d634: 0x3c020033
    ctx->pc = 0x23d634u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23d638: 0x2442dfd0
    ctx->pc = 0x23d638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23d63c: 0x628021
    ctx->pc = 0x23d63cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d640: 0x4480a000
    ctx->pc = 0x23d640u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x23d644: 0x8e02036c
    ctx->pc = 0x23d644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23d648: 0xc08ed18
    ctx->pc = 0x23D648u;
    SET_GPR_U32(ctx, 31, 0x23D650u);
    ctx->pc = 0x23D64Cu;
    SET_GPR_U32(ctx, 18, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D650u; }
    }
    if (ctx->pc != 0x23D650u) { return; }
    ctx->pc = 0x23D650u;
    // 0x23d650: 0x5040000b
    ctx->pc = 0x23D650u;
    {
        const bool branch_taken_0x23d650 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23d650) {
            ctx->pc = 0x23D654u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 754)));
            ctx->pc = 0x23D680u;
            goto label_23d680;
        }
    }
    ctx->pc = 0x23D658u;
    // 0x23d658: 0x24020018
    ctx->pc = 0x23d658u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x23d65c: 0xa6020324
    ctx->pc = 0x23d65cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23d660: 0x220202d
    ctx->pc = 0x23d660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d664: 0xdfbf0030
    ctx->pc = 0x23d664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d668: 0xdfb20020
    ctx->pc = 0x23d668u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d66c: 0xdfb10010
    ctx->pc = 0x23d66cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d670: 0xdfb00000
    ctx->pc = 0x23d670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d674: 0xc7b40040
    ctx->pc = 0x23d674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23d678: 0x809095a
    ctx->pc = 0x23D678u;
    ctx->pc = 0x23D67Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x23D680u;
label_23d680:
    // 0x23d680: 0x10400004
    ctx->pc = 0x23D680u;
    {
        const bool branch_taken_0x23d680 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D684u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x23d680) {
            ctx->pc = 0x23D694u;
            goto label_23d694;
        }
    }
    ctx->pc = 0x23D688u;
    // 0x23d688: 0x86020288
    ctx->pc = 0x23d688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23d68c: 0x441000b
    ctx->pc = 0x23D68Cu;
    {
        const bool branch_taken_0x23d68c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23D690u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x23d68c) {
            ctx->pc = 0x23D6BCu;
            goto label_23d6bc;
        }
    }
    ctx->pc = 0x23D694u;
label_23d694:
    // 0x23d694: 0x24420005
    ctx->pc = 0x23d694u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5));
    // 0x23d698: 0xa6020324
    ctx->pc = 0x23d698u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23d69c: 0x220202d
    ctx->pc = 0x23d69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d6a0: 0xdfbf0030
    ctx->pc = 0x23d6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d6a4: 0xdfb20020
    ctx->pc = 0x23d6a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d6a8: 0xdfb10010
    ctx->pc = 0x23d6a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d6ac: 0xdfb00000
    ctx->pc = 0x23d6acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d6b0: 0xc7b40040
    ctx->pc = 0x23d6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23d6b4: 0x809095a
    ctx->pc = 0x23D6B4u;
    ctx->pc = 0x23D6B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x23D6BCu;
label_23d6bc:
    // 0x23d6bc: 0x40034800
    ctx->pc = 0x23d6bcu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23d6c0: 0x3c02003a
    ctx->pc = 0x23d6c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23d6c4: 0x8c4221d0
    ctx->pc = 0x23d6c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23d6c8: 0xac430308
    ctx->pc = 0x23d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 776), GPR_U32(ctx, 3));
    // 0x23d6cc: 0x86030324
    ctx->pc = 0x23d6ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23d6d0: 0x86020328
    ctx->pc = 0x23d6d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x23d6d4: 0x10620004
    ctx->pc = 0x23D6D4u;
    {
        const bool branch_taken_0x23d6d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23D6D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23d6d4) {
            ctx->pc = 0x23D6E8u;
            goto label_23d6e8;
        }
    }
    ctx->pc = 0x23D6DCu;
    // 0x23d6dc: 0xc08e210
    ctx->pc = 0x23D6DCu;
    SET_GPR_U32(ctx, 31, 0x23D6E4u);
    ctx->pc = 0x23D6E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D6E4u; }
    }
    if (ctx->pc != 0x23D6E4u) { return; }
    ctx->pc = 0x23D6E4u;
    // 0x23d6e4: 0x200202d
    ctx->pc = 0x23d6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d6e8:
    // 0x23d6e8: 0xc08f0f0
    ctx->pc = 0x23D6E8u;
    SET_GPR_U32(ctx, 31, 0x23D6F0u);
    ctx->pc = 0x23D6ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D6F0u; }
    }
    if (ctx->pc != 0x23D6F0u) { return; }
    ctx->pc = 0x23D6F0u;
    // 0x23d6f0: 0xe6000260
    ctx->pc = 0x23d6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23d6f4: 0x86020288
    ctx->pc = 0x23d6f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23d6f8: 0x4400069
    ctx->pc = 0x23D6F8u;
    {
        const bool branch_taken_0x23d6f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23D6FCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x23d6f8) {
            ctx->pc = 0x23D8A0u;
            goto label_23d8a0;
        }
    }
    ctx->pc = 0x23D700u;
    // 0x23d700: 0x431818
    ctx->pc = 0x23d700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23d704: 0x3c020032
    ctx->pc = 0x23d704u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23d708: 0x24421bc0
    ctx->pc = 0x23d708u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x23d70c: 0x621821
    ctx->pc = 0x23d70cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d710: 0xc6010044
    ctx->pc = 0x23d710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d714: 0xc4600054
    ctx->pc = 0x23d714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d718: 0x860202f0
    ctx->pc = 0x23d718u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x23d71c: 0x10400060
    ctx->pc = 0x23D71Cu;
    {
        const bool branch_taken_0x23d71c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D720u;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x23d71c) {
            ctx->pc = 0x23D8A0u;
            goto label_23d8a0;
        }
    }
    ctx->pc = 0x23D724u;
    // 0x23d724: 0x3c01c120
    ctx->pc = 0x23d724u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49440 << 16));
    // 0x23d728: 0x44810000
    ctx->pc = 0x23d728u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d72c: 0x46010036
    ctx->pc = 0x23d72cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d730: 0x4500005b
    ctx->pc = 0x23D730u;
    {
        const bool branch_taken_0x23d730 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d730) {
            ctx->pc = 0x23D8A0u;
            goto label_23d8a0;
        }
    }
    ctx->pc = 0x23D738u;
    // 0x23d738: 0x3c014120
    ctx->pc = 0x23d738u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x23d73c: 0x44810000
    ctx->pc = 0x23d73cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d740: 0x46000836
    ctx->pc = 0x23d740u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d744: 0x45000056
    ctx->pc = 0x23D744u;
    {
        const bool branch_taken_0x23d744 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d744) {
            ctx->pc = 0x23D8A0u;
            goto label_23d8a0;
        }
    }
    ctx->pc = 0x23D74Cu;
    // 0x23d74c: 0x8e020330
    ctx->pc = 0x23d74cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x23d750: 0x1440000b
    ctx->pc = 0x23D750u;
    {
        const bool branch_taken_0x23d750 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23D754u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x23d750) {
            ctx->pc = 0x23D780u;
            goto label_23d780;
        }
    }
    ctx->pc = 0x23D758u;
    // 0x23d758: 0x3c013f00
    ctx->pc = 0x23d758u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x23d75c: 0x44810800
    ctx->pc = 0x23d75cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23d760: 0x46010002
    ctx->pc = 0x23d760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23d764: 0xc6010290
    ctx->pc = 0x23d764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d768: 0x46000836
    ctx->pc = 0x23d768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d76c: 0x0
    ctx->pc = 0x23d76cu;
    // NOP
    // 0x23d770: 0x4500001c
    ctx->pc = 0x23D770u;
    {
        const bool branch_taken_0x23d770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23D774u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23d770) {
            ctx->pc = 0x23D7E4u;
            goto label_23d7e4;
        }
    }
    ctx->pc = 0x23D778u;
    // 0x23d778: 0x1000001a
    ctx->pc = 0x23D778u;
    {
        const bool branch_taken_0x23d778 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D77Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
        if (branch_taken_0x23d778) {
            ctx->pc = 0x23D7E4u;
            goto label_23d7e4;
        }
    }
    ctx->pc = 0x23D780u;
label_23d780:
    // 0x23d780: 0x3c013f4c
    ctx->pc = 0x23d780u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
    // 0x23d784: 0x3421cccd
    ctx->pc = 0x23d784u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x23d788: 0x44810800
    ctx->pc = 0x23d788u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23d78c: 0x46010002
    ctx->pc = 0x23d78cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23d790: 0xc6010290
    ctx->pc = 0x23d790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d794: 0x46010034
    ctx->pc = 0x23d794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d798: 0x0
    ctx->pc = 0x23d798u;
    // NOP
    // 0x23d79c: 0x45030011
    ctx->pc = 0x23D79Cu;
    {
        const bool branch_taken_0x23d79c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d79c) {
            ctx->pc = 0x23D7A0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
            ctx->pc = 0x23D7E4u;
            goto label_23d7e4;
        }
    }
    ctx->pc = 0x23D7A4u;
    // 0x23d7a4: 0x8e02036c
    ctx->pc = 0x23d7a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23d7a8: 0x5840000f
    ctx->pc = 0x23D7A8u;
    {
        const bool branch_taken_0x23d7a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23d7a8) {
            ctx->pc = 0x23D7ACu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->pc = 0x23D7E8u;
            goto label_23d7e8;
        }
    }
    ctx->pc = 0x23D7B0u;
    // 0x23d7b0: 0x8e040338
    ctx->pc = 0x23d7b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x23d7b4: 0x28820008
    ctx->pc = 0x23d7b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8));
    // 0x23d7b8: 0x10400009
    ctx->pc = 0x23D7B8u;
    {
        const bool branch_taken_0x23d7b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D7BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x23d7b8) {
            ctx->pc = 0x23D7E0u;
            goto label_23d7e0;
        }
    }
    ctx->pc = 0x23D7C0u;
    // 0x23d7c0: 0x2442de30
    ctx->pc = 0x23d7c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958640));
    // 0x23d7c4: 0x41880
    ctx->pc = 0x23d7c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x23d7c8: 0x621821
    ctx->pc = 0x23d7c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d7cc: 0xc4740000
    ctx->pc = 0x23d7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23d7d0: 0x24820001
    ctx->pc = 0x23d7d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x23d7d4: 0xae020338
    ctx->pc = 0x23d7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 2));
    // 0x23d7d8: 0x10000002
    ctx->pc = 0x23D7D8u;
    {
        const bool branch_taken_0x23d7d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D7DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
        if (branch_taken_0x23d7d8) {
            ctx->pc = 0x23D7E4u;
            goto label_23d7e4;
        }
    }
    ctx->pc = 0x23D7E0u;
label_23d7e0:
    // 0x23d7e0: 0xae000330
    ctx->pc = 0x23d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
label_23d7e4:
    // 0x23d7e4: 0x8e030334
    ctx->pc = 0x23d7e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23d7e8:
    // 0x23d7e8: 0x18600005
    ctx->pc = 0x23D7E8u;
    {
        const bool branch_taken_0x23d7e8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23D7ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23d7e8) {
            ctx->pc = 0x23D800u;
            goto label_23d800;
        }
    }
    ctx->pc = 0x23D7F0u;
    // 0x23d7f0: 0x8c42ffbc
    ctx->pc = 0x23d7f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23d7f4: 0x621023
    ctx->pc = 0x23d7f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d7f8: 0x10000029
    ctx->pc = 0x23D7F8u;
    {
        const bool branch_taken_0x23d7f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D7FCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
        if (branch_taken_0x23d7f8) {
            ctx->pc = 0x23D8A0u;
            goto label_23d8a0;
        }
    }
    ctx->pc = 0x23D800u;
label_23d800:
    // 0x23d800: 0x8e020330
    ctx->pc = 0x23d800u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x23d804: 0x54400006
    ctx->pc = 0x23D804u;
    {
        const bool branch_taken_0x23d804 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23d804) {
            ctx->pc = 0x23D808u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23D820u;
            goto label_23d820;
        }
    }
    ctx->pc = 0x23D80Cu;
    // 0x23d80c: 0x200202d
    ctx->pc = 0x23d80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d810: 0xc09de18
    ctx->pc = 0x23D810u;
    SET_GPR_U32(ctx, 31, 0x23D818u);
    ctx->pc = 0x23D814u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D818u; }
    }
    if (ctx->pc != 0x23D818u) { return; }
    ctx->pc = 0x23D818u;
    // 0x23d818: 0x10000021
    ctx->pc = 0x23D818u;
    {
        const bool branch_taken_0x23d818 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23d818) {
            ctx->pc = 0x23D8A0u;
            goto label_23d8a0;
        }
    }
    ctx->pc = 0x23D820u;
label_23d820:
    // 0x23d820: 0x3c014049
    ctx->pc = 0x23d820u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23d824: 0x34210fdb
    ctx->pc = 0x23d824u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23d828: 0x44810800
    ctx->pc = 0x23d828u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23d82c: 0x46010340
    ctx->pc = 0x23d82cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23d830: 0x46146b40
    ctx->pc = 0x23d830u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
    // 0x23d834: 0x460d0834
    ctx->pc = 0x23d834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d838: 0x45000006
    ctx->pc = 0x23D838u;
    {
        const bool branch_taken_0x23d838 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d838) {
            ctx->pc = 0x23D854u;
            goto label_23d854;
        }
    }
    ctx->pc = 0x23D840u;
    // 0x23d840: 0x3c0140c9
    ctx->pc = 0x23d840u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23d844: 0x34210fdb
    ctx->pc = 0x23d844u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23d848: 0x44810000
    ctx->pc = 0x23d848u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d84c: 0x1000000b
    ctx->pc = 0x23D84Cu;
    {
        const bool branch_taken_0x23d84c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D850u;
        ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x23d84c) {
            ctx->pc = 0x23D87Cu;
            goto label_23d87c;
        }
    }
    ctx->pc = 0x23D854u;
label_23d854:
    // 0x23d854: 0x3c01c049
    ctx->pc = 0x23d854u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23d858: 0x34210fdb
    ctx->pc = 0x23d858u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23d85c: 0x44810000
    ctx->pc = 0x23d85cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d860: 0x46006836
    ctx->pc = 0x23d860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d864: 0x45000005
    ctx->pc = 0x23D864u;
    {
        const bool branch_taken_0x23d864 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d864) {
            ctx->pc = 0x23D87Cu;
            goto label_23d87c;
        }
    }
    ctx->pc = 0x23D86Cu;
    // 0x23d86c: 0x3c0140c9
    ctx->pc = 0x23d86cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23d870: 0x34210fdb
    ctx->pc = 0x23d870u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23d874: 0x44810000
    ctx->pc = 0x23d874u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d878: 0x46006b40
    ctx->pc = 0x23d878u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_23d87c:
    // 0x23d87c: 0x3c013f4c
    ctx->pc = 0x23d87cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
    // 0x23d880: 0x3421cccd
    ctx->pc = 0x23d880u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x23d884: 0x44816000
    ctx->pc = 0x23d884u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23d888: 0xc08f14c
    ctx->pc = 0x23D888u;
    SET_GPR_U32(ctx, 31, 0x23D890u);
    ctx->pc = 0x23D88Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D890u; }
    }
    if (ctx->pc != 0x23D890u) { return; }
    ctx->pc = 0x23D890u;
    // 0x23d890: 0x200202d
    ctx->pc = 0x23d890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d894: 0xc09de18
    ctx->pc = 0x23D894u;
    SET_GPR_U32(ctx, 31, 0x23D89Cu);
    ctx->pc = 0x23D898u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D89Cu; }
    }
    if (ctx->pc != 0x23D89Cu) { return; }
    ctx->pc = 0x23D89Cu;
    // 0x23d89c: 0xae00036c
    ctx->pc = 0x23d89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
label_23d8a0:
    // 0x23d8a0: 0xc08f20c
    ctx->pc = 0x23D8A0u;
    SET_GPR_U32(ctx, 31, 0x23D8A8u);
    ctx->pc = 0x23D8A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D8A8u; }
    }
    if (ctx->pc != 0x23D8A8u) { return; }
    ctx->pc = 0x23D8A8u;
    // 0x23d8a8: 0xe6000258
    ctx->pc = 0x23d8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x23d8ac: 0xc090e82
    ctx->pc = 0x23D8ACu;
    SET_GPR_U32(ctx, 31, 0x23D8B4u);
    ctx->pc = 0x23D8B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D8B4u; }
    }
    if (ctx->pc != 0x23D8B4u) { return; }
    ctx->pc = 0x23D8B4u;
    // 0x23d8b4: 0x86020294
    ctx->pc = 0x23d8b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x23d8b8: 0x54400001
    ctx->pc = 0x23D8B8u;
    {
        const bool branch_taken_0x23d8b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23d8b8) {
            ctx->pc = 0x23D8BCu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
            ctx->pc = 0x23D8C0u;
            goto label_23d8c0;
        }
    }
    ctx->pc = 0x23D8C0u;
label_23d8c0:
    // 0x23d8c0: 0x16400007
    ctx->pc = 0x23D8C0u;
    {
        const bool branch_taken_0x23d8c0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x23d8c0) {
            ctx->pc = 0x23D8E0u;
            goto label_23d8e0;
        }
    }
    ctx->pc = 0x23D8C8u;
    // 0x23d8c8: 0x8e02036c
    ctx->pc = 0x23d8c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23d8cc: 0x18400004
    ctx->pc = 0x23D8CCu;
    {
        const bool branch_taken_0x23d8cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23d8cc) {
            ctx->pc = 0x23D8E0u;
            goto label_23d8e0;
        }
    }
    ctx->pc = 0x23D8D4u;
    // 0x23d8d4: 0xc6000260
    ctx->pc = 0x23d8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d8d8: 0xe6000268
    ctx->pc = 0x23d8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x23d8dc: 0xae000338
    ctx->pc = 0x23d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
label_23d8e0:
    // 0x23d8e0: 0x40034800
    ctx->pc = 0x23d8e0u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23d8e4: 0x3c02003a
    ctx->pc = 0x23d8e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23d8e8: 0x8c4421d0
    ctx->pc = 0x23d8e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23d8ec: 0x8c820308
    ctx->pc = 0x23d8ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 776)));
    // 0x23d8f0: 0x621823
    ctx->pc = 0x23d8f0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d8f4: 0x8c820300
    ctx->pc = 0x23d8f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 768)));
    // 0x23d8f8: 0x621821
    ctx->pc = 0x23d8f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d8fc: 0xac830300
    ctx->pc = 0x23d8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 768), GPR_U32(ctx, 3));
    // 0x23d900: 0x8c820304
    ctx->pc = 0x23d900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 772)));
    // 0x23d904: 0x24420001
    ctx->pc = 0x23d904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d908: 0xac820304
    ctx->pc = 0x23d908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 772), GPR_U32(ctx, 2));
    // 0x23d90c: 0xdfbf0030
    ctx->pc = 0x23d90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d910: 0xdfb20020
    ctx->pc = 0x23d910u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d914: 0xdfb10010
    ctx->pc = 0x23d914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d918: 0xdfb00000
    ctx->pc = 0x23d918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d91c: 0xc7b40040
    ctx->pc = 0x23d91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23d920: 0x3e00008
    ctx->pc = 0x23D920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D924u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D680u: goto label_23d680;
            case 0x23D694u: goto label_23d694;
            case 0x23D6BCu: goto label_23d6bc;
            case 0x23D6E8u: goto label_23d6e8;
            case 0x23D780u: goto label_23d780;
            case 0x23D7E0u: goto label_23d7e0;
            case 0x23D7E4u: goto label_23d7e4;
            case 0x23D7E8u: goto label_23d7e8;
            case 0x23D800u: goto label_23d800;
            case 0x23D820u: goto label_23d820;
            case 0x23D854u: goto label_23d854;
            case 0x23D87Cu: goto label_23d87c;
            case 0x23D8A0u: goto label_23d8a0;
            case 0x23D8C0u: goto label_23d8c0;
            case 0x23D8E0u: goto label_23d8e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23D928u;
}
