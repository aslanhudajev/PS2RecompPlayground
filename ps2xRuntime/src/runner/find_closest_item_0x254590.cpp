#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: find_closest_item
// Address: 0x254590 - 0x254758
void find_closest_item_0x254590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x254590u;

    // 0x254590: 0x27bdff40
    ctx->pc = 0x254590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x254594: 0xffbf00a0
    ctx->pc = 0x254594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x254598: 0xffb70090
    ctx->pc = 0x254598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x25459c: 0xffb60080
    ctx->pc = 0x25459cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2545a0: 0xffb50070
    ctx->pc = 0x2545a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2545a4: 0xffb40060
    ctx->pc = 0x2545a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2545a8: 0xffb30050
    ctx->pc = 0x2545a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2545ac: 0xffb20040
    ctx->pc = 0x2545acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2545b0: 0xffb10030
    ctx->pc = 0x2545b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2545b4: 0xffb00020
    ctx->pc = 0x2545b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2545b8: 0xe7b500b8
    ctx->pc = 0x2545b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2545bc: 0xe7b400b0
    ctx->pc = 0x2545bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2545c0: 0x80882d
    ctx->pc = 0x2545c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545c4: 0xa0902d
    ctx->pc = 0x2545c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545c8: 0xc0a82d
    ctx->pc = 0x2545c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545cc: 0xe0b02d
    ctx->pc = 0x2545ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545d0: 0xa02d
    ctx->pc = 0x2545d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545d4: 0x3c0147c3
    ctx->pc = 0x2545d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x2545d8: 0x34215000
    ctx->pc = 0x2545d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x2545dc: 0x4481a000
    ctx->pc = 0x2545dcu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2545e0: 0xc0a0120
    ctx->pc = 0x2545E0u;
    SET_GPR_U32(ctx, 31, 0x2545E8u);
    ctx->pc = 0x2545E4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x280480u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartItemGrid_0x280480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2545E8u; }
    }
    if (ctx->pc != 0x2545E8u) { return; }
    ctx->pc = 0x2545E8u;
    // 0x2545e8: 0x3c170034
    ctx->pc = 0x2545e8u;
    SET_GPR_U32(ctx, 23, ((uint32_t)52 << 16));
    // 0x2545ec: 0x10000043
    ctx->pc = 0x2545ECu;
    {
        const bool branch_taken_0x2545ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2545F0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2545ec) {
            ctx->pc = 0x2546FCu;
            goto label_2546fc;
        }
    }
    ctx->pc = 0x2545F4u;
    // 0x2545f4: 0x0
    ctx->pc = 0x2545f4u;
    // NOP
label_2545f8:
    // 0x2545f8: 0x621018
    ctx->pc = 0x2545f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2545fc: 0x8ee3cd94
    ctx->pc = 0x2545fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 4294954388)));
    // 0x254600: 0x438021
    ctx->pc = 0x254600u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254604: 0x860200d8
    ctx->pc = 0x254604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x254608: 0x1053003c
    ctx->pc = 0x254608u;
    {
        const bool branch_taken_0x254608 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        ctx->pc = 0x25460Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 33024));
        if (branch_taken_0x254608) {
            ctx->pc = 0x2546FCu;
            goto label_2546fc;
        }
    }
    ctx->pc = 0x254610u;
    // 0x254610: 0x1440003a
    ctx->pc = 0x254610u;
    {
        const bool branch_taken_0x254610 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x254610) {
            ctx->pc = 0x2546FCu;
            goto label_2546fc;
        }
    }
    ctx->pc = 0x254618u;
    // 0x254618: 0x8e030000
    ctx->pc = 0x254618u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25461c: 0x84620008
    ctx->pc = 0x25461cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x254620: 0x10400036
    ctx->pc = 0x254620u;
    {
        const bool branch_taken_0x254620 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x254620) {
            ctx->pc = 0x2546FCu;
            goto label_2546fc;
        }
    }
    ctx->pc = 0x254628u;
    // 0x254628: 0x5240000b
    ctx->pc = 0x254628u;
    {
        const bool branch_taken_0x254628 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x254628) {
            ctx->pc = 0x25462Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x254658u;
            goto label_254658;
        }
    }
    ctx->pc = 0x254630u;
    // 0x254630: 0x8c620000
    ctx->pc = 0x254630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254634: 0x14520031
    ctx->pc = 0x254634u;
    {
        const bool branch_taken_0x254634 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x254638u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x254634) {
            ctx->pc = 0x2546FCu;
            goto label_2546fc;
        }
    }
    ctx->pc = 0x25463Cu;
    // 0x25463c: 0x56420006
    ctx->pc = 0x25463Cu;
    {
        const bool branch_taken_0x25463c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x25463c) {
            ctx->pc = 0x254640u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x254658u;
            goto label_254658;
        }
    }
    ctx->pc = 0x254644u;
    // 0x254644: 0x8e0200f8
    ctx->pc = 0x254644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x254648: 0x30420001
    ctx->pc = 0x254648u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x25464c: 0x1440002b
    ctx->pc = 0x25464Cu;
    {
        const bool branch_taken_0x25464c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25464c) {
            ctx->pc = 0x2546FCu;
            goto label_2546fc;
        }
    }
    ctx->pc = 0x254654u;
    // 0x254654: 0x8e020000
    ctx->pc = 0x254654u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_254658:
    // 0x254658: 0x8c420000
    ctx->pc = 0x254658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25465c: 0x10530027
    ctx->pc = 0x25465Cu;
    {
        const bool branch_taken_0x25465c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        if (branch_taken_0x25465c) {
            ctx->pc = 0x2546FCu;
            goto label_2546fc;
        }
    }
    ctx->pc = 0x254664u;
    // 0x254664: 0x820200e1
    ctx->pc = 0x254664u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 225)));
    // 0x254668: 0x14400024
    ctx->pc = 0x254668u;
    {
        const bool branch_taken_0x254668 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x254668) {
            ctx->pc = 0x2546FCu;
            goto label_2546fc;
        }
    }
    ctx->pc = 0x254670u;
    // 0x254670: 0xc09610a
    ctx->pc = 0x254670u;
    SET_GPR_U32(ctx, 31, 0x254678u);
    ctx->pc = 0x254674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x258428u;
    {
        const uint32_t __entryPc = ctx->pc;
        SkipItem_0x258428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254678u; }
    }
    if (ctx->pc != 0x254678u) { return; }
    ctx->pc = 0x254678u;
    // 0x254678: 0x14400020
    ctx->pc = 0x254678u;
    {
        const bool branch_taken_0x254678 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25467Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x254678) {
            ctx->pc = 0x2546FCu;
            goto label_2546fc;
        }
    }
    ctx->pc = 0x254680u;
    // 0x254680: 0xc094e70
    ctx->pc = 0x254680u;
    SET_GPR_U32(ctx, 31, 0x254688u);
    ctx->pc = 0x254684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2539C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetItemPos_0x2539c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254688u; }
    }
    if (ctx->pc != 0x254688u) { return; }
    ctx->pc = 0x254688u;
    // 0x254688: 0xc7ac0000
    ctx->pc = 0x254688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25468c: 0xc6200000
    ctx->pc = 0x25468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254690: 0x46006301
    ctx->pc = 0x254690u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x254694: 0xe7ac0010
    ctx->pc = 0x254694u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x254698: 0xc7a00004
    ctx->pc = 0x254698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25469c: 0xc6210004
    ctx->pc = 0x25469cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2546a0: 0x46010001
    ctx->pc = 0x2546a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2546a4: 0xe7a00014
    ctx->pc = 0x2546a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2546a8: 0xc7ad0008
    ctx->pc = 0x2546a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2546ac: 0xc6200008
    ctx->pc = 0x2546acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2546b0: 0x46006b41
    ctx->pc = 0x2546b0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x2546b4: 0xc0b5c34
    ctx->pc = 0x2546B4u;
    SET_GPR_U32(ctx, 31, 0x2546BCu);
    ctx->pc = 0x2546B8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2546BCu; }
    }
    if (ctx->pc != 0x2546BCu) { return; }
    ctx->pc = 0x2546BCu;
    // 0x2546bc: 0x8e020000
    ctx->pc = 0x2546bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2546c0: 0xc441000c
    ctx->pc = 0x2546c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2546c4: 0x46010001
    ctx->pc = 0x2546c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2546c8: 0x46140034
    ctx->pc = 0x2546c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2546cc: 0x0
    ctx->pc = 0x2546ccu;
    // NOP
    // 0x2546d0: 0x45030001
    ctx->pc = 0x2546D0u;
    {
        const bool branch_taken_0x2546d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2546d0) {
            ctx->pc = 0x2546D4u;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2546D8u;
            goto label_2546d8;
        }
    }
    ctx->pc = 0x2546D8u;
label_2546d8:
    // 0x2546d8: 0xde0200d8
    ctx->pc = 0x2546d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x2546dc: 0x30424040
    ctx->pc = 0x2546dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16448));
    // 0x2546e0: 0x10400006
    ctx->pc = 0x2546E0u;
    {
        const bool branch_taken_0x2546e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2546e0) {
            ctx->pc = 0x2546FCu;
            goto label_2546fc;
        }
    }
    ctx->pc = 0x2546E8u;
    // 0x2546e8: 0x46150034
    ctx->pc = 0x2546e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2546ec: 0x45000003
    ctx->pc = 0x2546ECu;
    {
        const bool branch_taken_0x2546ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2546ec) {
            ctx->pc = 0x2546FCu;
            goto label_2546fc;
        }
    }
    ctx->pc = 0x2546F4u;
    // 0x2546f4: 0x46000546
    ctx->pc = 0x2546f4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2546f8: 0x200a02d
    ctx->pc = 0x2546f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2546fc:
    // 0x2546fc: 0xc0a015a
    ctx->pc = 0x2546FCu;
    SET_GPR_U32(ctx, 31, 0x254704u);
    ctx->pc = 0x280568u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridItem_0x280568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254704u; }
    }
    if (ctx->pc != 0x254704u) { return; }
    ctx->pc = 0x254704u;
    // 0x254704: 0x40182d
    ctx->pc = 0x254704u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254708: 0x463ffbb
    ctx->pc = 0x254708u;
    {
        const bool branch_taken_0x254708 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x254708) {
            ctx->pc = 0x25470Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
            ctx->pc = 0x2545F8u;
            goto label_2545f8;
        }
    }
    ctx->pc = 0x254710u;
    // 0x254710: 0x56a00001
    ctx->pc = 0x254710u;
    {
        const bool branch_taken_0x254710 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x254710) {
            ctx->pc = 0x254714u;
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
            ctx->pc = 0x254718u;
            goto label_254718;
        }
    }
    ctx->pc = 0x254718u;
label_254718:
    // 0x254718: 0x56c00001
    ctx->pc = 0x254718u;
    {
        const bool branch_taken_0x254718 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x254718) {
            ctx->pc = 0x25471Cu;
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
            ctx->pc = 0x254720u;
            goto label_254720;
        }
    }
    ctx->pc = 0x254720u;
label_254720:
    // 0x254720: 0x280102d
    ctx->pc = 0x254720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254724: 0xdfbf00a0
    ctx->pc = 0x254724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x254728: 0xdfb70090
    ctx->pc = 0x254728u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25472c: 0xdfb60080
    ctx->pc = 0x25472cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x254730: 0xdfb50070
    ctx->pc = 0x254730u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x254734: 0xdfb40060
    ctx->pc = 0x254734u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x254738: 0xdfb30050
    ctx->pc = 0x254738u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25473c: 0xdfb20040
    ctx->pc = 0x25473cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254740: 0xdfb10030
    ctx->pc = 0x254740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254744: 0xdfb00020
    ctx->pc = 0x254744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254748: 0xc7b500b8
    ctx->pc = 0x254748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25474c: 0xc7b400b0
    ctx->pc = 0x25474cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x254750: 0x3e00008
    ctx->pc = 0x254750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254754u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2545F8u: goto label_2545f8;
            case 0x254658u: goto label_254658;
            case 0x2546D8u: goto label_2546d8;
            case 0x2546FCu: goto label_2546fc;
            case 0x254718u: goto label_254718;
            case 0x254720u: goto label_254720;
            default: break;
        }
        return;
    }
    ctx->pc = 0x254758u;
}
