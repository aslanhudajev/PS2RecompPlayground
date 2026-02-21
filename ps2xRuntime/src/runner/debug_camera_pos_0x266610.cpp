#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: debug_camera_pos
// Address: 0x266610 - 0x266fe8
void debug_camera_pos_0x266610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x266610u;

label_266610:
    // 0x266610: 0x27bdff90
    ctx->pc = 0x266610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_266614:
    // 0x266614: 0xffbf0050
    ctx->pc = 0x266614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_266618:
    // 0x266618: 0xffb40040
    ctx->pc = 0x266618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_26661c:
    // 0x26661c: 0xffb30030
    ctx->pc = 0x26661cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_266620:
    // 0x266620: 0xffb20020
    ctx->pc = 0x266620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_266624:
    // 0x266624: 0xffb10010
    ctx->pc = 0x266624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_266628:
    // 0x266628: 0xffb00000
    ctx->pc = 0x266628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_26662c:
    // 0x26662c: 0xe7b40060
    ctx->pc = 0x26662cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_266630:
    // 0x266630: 0x3c020031
    ctx->pc = 0x266630u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_266634:
    // 0x266634: 0xdc420e28
    ctx->pc = 0x266634u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
label_266638:
    // 0x266638: 0x30420001
    ctx->pc = 0x266638u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_26663c:
    // 0x26663c: 0x2103c
    ctx->pc = 0x26663cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_266640:
    // 0x266640: 0x2103f
    ctx->pc = 0x266640u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_266644:
    // 0x266644: 0x1040025f
label_266648:
    if (ctx->pc == 0x266648u) {
        ctx->pc = 0x266648u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x26664Cu;
        goto label_26664c;
    }
    ctx->pc = 0x266644u;
    {
        const bool branch_taken_0x266644 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x266648u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x266644) {
            ctx->pc = 0x266FC4u;
            goto label_266fc4;
        }
    }
    ctx->pc = 0x26664Cu;
label_26664c:
    // 0x26664c: 0x8c43f520
    ctx->pc = 0x26664cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294964512)));
label_266650:
    // 0x266650: 0x240201a0
    ctx->pc = 0x266650u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
label_266654:
    // 0x266654: 0x621818
    ctx->pc = 0x266654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_266658:
    // 0x266658: 0x3c020034
    ctx->pc = 0x266658u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26665c:
    // 0x26665c: 0x2442eb60
    ctx->pc = 0x26665cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
label_266660:
    // 0x266660: 0xc0aa372
label_266664:
    if (ctx->pc == 0x266664u) {
        ctx->pc = 0x266664u;
        SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x266668u;
        goto label_266668;
    }
    ctx->pc = 0x266660u;
    SET_GPR_U32(ctx, 31, 0x266668u);
    ctx->pc = 0x266664u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x2A8DC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBScreenHeight_0x2a8dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266668u; }
    }
    if (ctx->pc != 0x266668u) { return; }
    ctx->pc = 0x266668u;
label_266668:
    // 0x266668: 0xc0aa36c
label_26666c:
    if (ctx->pc == 0x26666Cu) {
        ctx->pc = 0x26666Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266670u;
        goto label_266670;
    }
    ctx->pc = 0x266668u;
    SET_GPR_U32(ctx, 31, 0x266670u);
    ctx->pc = 0x26666Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A8DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBScreenWidth_0x2a8db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266670u; }
    }
    if (ctx->pc != 0x266670u) { return; }
    ctx->pc = 0x266670u;
label_266670:
    // 0x266670: 0x26030007
    ctx->pc = 0x266670u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 7));
label_266674:
    // 0x266674: 0x2402ffff
    ctx->pc = 0x266674u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_266678:
    // 0x266678: 0x50102a
    ctx->pc = 0x266678u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_26667c:
    // 0x26667c: 0x62800a
    ctx->pc = 0x26667cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
label_266680:
    // 0x266680: 0x1098c3
    ctx->pc = 0x266680u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 16), 3));
label_266684:
    // 0x266684: 0x2663fffe
    ctx->pc = 0x266684u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 4294967294));
label_266688:
    // 0x266688: 0x3a620020
    ctx->pc = 0x266688u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 19), 32));
label_26668c:
    // 0x26668c: 0x62980b
    ctx->pc = 0x26668cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
label_266690:
    // 0x266690: 0x3c0140c9
    ctx->pc = 0x266690u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
label_266694:
    // 0x266694: 0x34210fdb
    ctx->pc = 0x266694u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_266698:
    // 0x266698: 0x44810000
    ctx->pc = 0x266698u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_26669c:
    // 0x26669c: 0xc68c00b4
    ctx->pc = 0x26669cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2666a0:
    // 0x2666a0: 0xc0b5a1a
label_2666a4:
    if (ctx->pc == 0x2666A4u) {
        ctx->pc = 0x2666A4u;
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
        ctx->pc = 0x2666A8u;
        goto label_2666a8;
    }
    ctx->pc = 0x2666A0u;
    SET_GPR_U32(ctx, 31, 0x2666A8u);
    ctx->pc = 0x2666A4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2666A8u; }
    }
    if (ctx->pc != 0x2666A8u) { return; }
    ctx->pc = 0x2666A8u;
label_2666a8:
    // 0x2666a8: 0x3c014334
    ctx->pc = 0x2666a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
label_2666ac:
    // 0x2666ac: 0x44810800
    ctx->pc = 0x2666acu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2666b0:
    // 0x2666b0: 0x46010502
    ctx->pc = 0x2666b0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2666b4:
    // 0x2666b4: 0x3c013ea2
    ctx->pc = 0x2666b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
label_2666b8:
    // 0x2666b8: 0x3421f983
    ctx->pc = 0x2666b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
label_2666bc:
    // 0x2666bc: 0x44810000
    ctx->pc = 0x2666bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2666c0:
    // 0x2666c0: 0x4600a502
    ctx->pc = 0x2666c0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2666c4:
    // 0x2666c4: 0x44800000
    ctx->pc = 0x2666c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2666c8:
    // 0x2666c8: 0x4600a034
    ctx->pc = 0x2666c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2666cc:
    // 0x2666cc: 0x45000004
label_2666d0:
    if (ctx->pc == 0x2666D0u) {
        ctx->pc = 0x2666D4u;
        goto label_2666d4;
    }
    ctx->pc = 0x2666CCu;
    {
        const bool branch_taken_0x2666cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2666cc) {
            ctx->pc = 0x2666E0u;
            goto label_2666e0;
        }
    }
    ctx->pc = 0x2666D4u;
label_2666d4:
    // 0x2666d4: 0x3c0143b4
    ctx->pc = 0x2666d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17332 << 16));
label_2666d8:
    // 0x2666d8: 0x44810000
    ctx->pc = 0x2666d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2666dc:
    // 0x2666dc: 0x4600a500
    ctx->pc = 0x2666dcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2666e0:
    // 0x2666e0: 0x3c0143b3
    ctx->pc = 0x2666e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17331 << 16));
label_2666e4:
    // 0x2666e4: 0x3421f99a
    ctx->pc = 0x2666e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63898));
label_2666e8:
    // 0x2666e8: 0x44810000
    ctx->pc = 0x2666e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2666ec:
    // 0x2666ec: 0x46140034
    ctx->pc = 0x2666ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2666f0:
    // 0x2666f0: 0x45000002
label_2666f4:
    if (ctx->pc == 0x2666F4u) {
        ctx->pc = 0x2666F8u;
        goto label_2666f8;
    }
    ctx->pc = 0x2666F0u;
    {
        const bool branch_taken_0x2666f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2666f0) {
            ctx->pc = 0x2666FCu;
            goto label_2666fc;
        }
    }
    ctx->pc = 0x2666F8u;
label_2666f8:
    // 0x2666f8: 0x4480a000
    ctx->pc = 0x2666f8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
label_2666fc:
    // 0x2666fc: 0xc0b46e2
label_266700:
    if (ctx->pc == 0x266700u) {
        ctx->pc = 0x266700u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65280));
        ctx->pc = 0x266704u;
        goto label_266704;
    }
    ctx->pc = 0x2666FCu;
    SET_GPR_U32(ctx, 31, 0x266704u);
    ctx->pc = 0x266700u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65280));
    ctx->pc = 0x2D1B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_set_color_0x2d1b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266704u; }
    }
    if (ctx->pc != 0x266704u) { return; }
    ctx->pc = 0x266704u;
label_266704:
    // 0x266704: 0x2671fff4
    ctx->pc = 0x266704u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 19), 4294967284));
label_266708:
    // 0x266708: 0xc0be862
label_26670c:
    if (ctx->pc == 0x26670Cu) {
        ctx->pc = 0x26670Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x266710u;
        goto label_266710;
    }
    ctx->pc = 0x266708u;
    SET_GPR_U32(ctx, 31, 0x266710u);
    ctx->pc = 0x26670Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266710u; }
    }
    if (ctx->pc != 0x266710u) { return; }
    ctx->pc = 0x266710u;
label_266710:
    // 0x266710: 0x40902d
    ctx->pc = 0x266710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266714:
    // 0x266714: 0xc0be862
label_266718:
    if (ctx->pc == 0x266718u) {
        ctx->pc = 0x266718u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x26671Cu;
        goto label_26671c;
    }
    ctx->pc = 0x266714u;
    SET_GPR_U32(ctx, 31, 0x26671Cu);
    ctx->pc = 0x266718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26671Cu; }
    }
    if (ctx->pc != 0x26671Cu) { return; }
    ctx->pc = 0x26671Cu;
label_26671c:
    // 0x26671c: 0x40802d
    ctx->pc = 0x26671cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266720:
    // 0x266720: 0xc0be862
label_266724:
    if (ctx->pc == 0x266724u) {
        ctx->pc = 0x266724u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x266728u;
        goto label_266728;
    }
    ctx->pc = 0x266720u;
    SET_GPR_U32(ctx, 31, 0x266728u);
    ctx->pc = 0x266724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266728u; }
    }
    if (ctx->pc != 0x266728u) { return; }
    ctx->pc = 0x266728u;
label_266728:
    // 0x266728: 0x24040001
    ctx->pc = 0x266728u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_26672c:
    // 0x26672c: 0x220282d
    ctx->pc = 0x26672cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_266730:
    // 0x266730: 0x3c06003b
    ctx->pc = 0x266730u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266734:
    // 0x266734: 0x24c6a230
    ctx->pc = 0x266734u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943280));
label_266738:
    // 0x266738: 0x240382d
    ctx->pc = 0x266738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26673c:
    // 0x26673c: 0x200402d
    ctx->pc = 0x26673cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_266740:
    // 0x266740: 0xc0b47da
label_266744:
    if (ctx->pc == 0x266744u) {
        ctx->pc = 0x266744u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266748u;
        goto label_266748;
    }
    ctx->pc = 0x266740u;
    SET_GPR_U32(ctx, 31, 0x266748u);
    ctx->pc = 0x266744u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266748u; }
    }
    if (ctx->pc != 0x266748u) { return; }
    ctx->pc = 0x266748u;
label_266748:
    // 0x266748: 0x2671fff5
    ctx->pc = 0x266748u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 19), 4294967285));
label_26674c:
    // 0x26674c: 0xc0be862
label_266750:
    if (ctx->pc == 0x266750u) {
        ctx->pc = 0x266750u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x266754u;
        goto label_266754;
    }
    ctx->pc = 0x26674Cu;
    SET_GPR_U32(ctx, 31, 0x266754u);
    ctx->pc = 0x266750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266754u; }
    }
    if (ctx->pc != 0x266754u) { return; }
    ctx->pc = 0x266754u;
label_266754:
    // 0x266754: 0x40902d
    ctx->pc = 0x266754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266758:
    // 0x266758: 0xc0be862
label_26675c:
    if (ctx->pc == 0x26675Cu) {
        ctx->pc = 0x26675Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x266760u;
        goto label_266760;
    }
    ctx->pc = 0x266758u;
    SET_GPR_U32(ctx, 31, 0x266760u);
    ctx->pc = 0x26675Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266760u; }
    }
    if (ctx->pc != 0x266760u) { return; }
    ctx->pc = 0x266760u;
label_266760:
    // 0x266760: 0x40802d
    ctx->pc = 0x266760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266764:
    // 0x266764: 0xc0be862
label_266768:
    if (ctx->pc == 0x266768u) {
        ctx->pc = 0x266768u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x26676Cu;
        goto label_26676c;
    }
    ctx->pc = 0x266764u;
    SET_GPR_U32(ctx, 31, 0x26676Cu);
    ctx->pc = 0x266768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26676Cu; }
    }
    if (ctx->pc != 0x26676Cu) { return; }
    ctx->pc = 0x26676Cu;
label_26676c:
    // 0x26676c: 0x24040001
    ctx->pc = 0x26676cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_266770:
    // 0x266770: 0x220282d
    ctx->pc = 0x266770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_266774:
    // 0x266774: 0x3c06003b
    ctx->pc = 0x266774u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266778:
    // 0x266778: 0x24c6a248
    ctx->pc = 0x266778u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943304));
label_26677c:
    // 0x26677c: 0x240382d
    ctx->pc = 0x26677cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_266780:
    // 0x266780: 0x200402d
    ctx->pc = 0x266780u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_266784:
    // 0x266784: 0xc0b47da
label_266788:
    if (ctx->pc == 0x266788u) {
        ctx->pc = 0x266788u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26678Cu;
        goto label_26678c;
    }
    ctx->pc = 0x266784u;
    SET_GPR_U32(ctx, 31, 0x26678Cu);
    ctx->pc = 0x266788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26678Cu; }
    }
    if (ctx->pc != 0x26678Cu) { return; }
    ctx->pc = 0x26678Cu;
label_26678c:
    // 0x26678c: 0x2670fff6
    ctx->pc = 0x26678cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 4294967286));
label_266790:
    // 0x266790: 0xc0be862
label_266794:
    if (ctx->pc == 0x266794u) {
        ctx->pc = 0x266794u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x266798u;
        goto label_266798;
    }
    ctx->pc = 0x266790u;
    SET_GPR_U32(ctx, 31, 0x266798u);
    ctx->pc = 0x266794u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266798u; }
    }
    if (ctx->pc != 0x266798u) { return; }
    ctx->pc = 0x266798u;
label_266798:
    // 0x266798: 0x40882d
    ctx->pc = 0x266798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26679c:
    // 0x26679c: 0xc0be862
label_2667a0:
    if (ctx->pc == 0x2667A0u) {
        ctx->pc = 0x2667A0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2667A4u;
        goto label_2667a4;
    }
    ctx->pc = 0x26679Cu;
    SET_GPR_U32(ctx, 31, 0x2667A4u);
    ctx->pc = 0x2667A0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2667A4u; }
    }
    if (ctx->pc != 0x2667A4u) { return; }
    ctx->pc = 0x2667A4u;
label_2667a4:
    // 0x2667a4: 0x24040001
    ctx->pc = 0x2667a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_2667a8:
    // 0x2667a8: 0x200282d
    ctx->pc = 0x2667a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2667ac:
    // 0x2667ac: 0x3c06003b
    ctx->pc = 0x2667acu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2667b0:
    // 0x2667b0: 0x24c6a260
    ctx->pc = 0x2667b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943328));
label_2667b4:
    // 0x2667b4: 0x220382d
    ctx->pc = 0x2667b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2667b8:
    // 0x2667b8: 0xc0b47da
label_2667bc:
    if (ctx->pc == 0x2667BCu) {
        ctx->pc = 0x2667BCu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2667C0u;
        goto label_2667c0;
    }
    ctx->pc = 0x2667B8u;
    SET_GPR_U32(ctx, 31, 0x2667C0u);
    ctx->pc = 0x2667BCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2667C0u; }
    }
    if (ctx->pc != 0x2667C0u) { return; }
    ctx->pc = 0x2667C0u;
label_2667c0:
    // 0x2667c0: 0xc68100b0
    ctx->pc = 0x2667c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2667c4:
    // 0x2667c4: 0x3c014334
    ctx->pc = 0x2667c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
label_2667c8:
    // 0x2667c8: 0x44810000
    ctx->pc = 0x2667c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2667cc:
    // 0x2667cc: 0x46000842
    ctx->pc = 0x2667ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2667d0:
    // 0x2667d0: 0x3c013ea2
    ctx->pc = 0x2667d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
label_2667d4:
    // 0x2667d4: 0x3421f983
    ctx->pc = 0x2667d4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
label_2667d8:
    // 0x2667d8: 0x44810000
    ctx->pc = 0x2667d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2667dc:
    // 0x2667dc: 0x46000842
    ctx->pc = 0x2667dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2667e0:
    // 0x2667e0: 0x24040001
    ctx->pc = 0x2667e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_2667e4:
    // 0x2667e4: 0x2665fff7
    ctx->pc = 0x2667e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967287));
label_2667e8:
    // 0x2667e8: 0x3c06003b
    ctx->pc = 0x2667e8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2667ec:
    // 0x2667ec: 0x46000824
    ctx->pc = 0x2667ecu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
label_2667f0:
    // 0x2667f0: 0x44070000
    ctx->pc = 0x2667f0u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
label_2667f4:
    // 0x2667f4: 0xc0b47da
label_2667f8:
    if (ctx->pc == 0x2667F8u) {
        ctx->pc = 0x2667F8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943352));
        ctx->pc = 0x2667FCu;
        goto label_2667fc;
    }
    ctx->pc = 0x2667F4u;
    SET_GPR_U32(ctx, 31, 0x2667FCu);
    ctx->pc = 0x2667F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943352));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2667FCu; }
    }
    if (ctx->pc != 0x2667FCu) { return; }
    ctx->pc = 0x2667FCu;
label_2667fc:
    // 0x2667fc: 0x2670fff8
    ctx->pc = 0x2667fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 4294967288));
label_266800:
    // 0x266800: 0xc0be862
label_266804:
    if (ctx->pc == 0x266804u) {
        ctx->pc = 0x266804u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x266808u;
        goto label_266808;
    }
    ctx->pc = 0x266800u;
    SET_GPR_U32(ctx, 31, 0x266808u);
    ctx->pc = 0x266804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266808u; }
    }
    if (ctx->pc != 0x266808u) { return; }
    ctx->pc = 0x266808u;
label_266808:
    // 0x266808: 0x24040001
    ctx->pc = 0x266808u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_26680c:
    // 0x26680c: 0x200282d
    ctx->pc = 0x26680cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_266810:
    // 0x266810: 0x3c06003b
    ctx->pc = 0x266810u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266814:
    // 0x266814: 0x24c6a288
    ctx->pc = 0x266814u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943368));
label_266818:
    // 0x266818: 0xc0b47da
label_26681c:
    if (ctx->pc == 0x26681Cu) {
        ctx->pc = 0x26681Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266820u;
        goto label_266820;
    }
    ctx->pc = 0x266818u;
    SET_GPR_U32(ctx, 31, 0x266820u);
    ctx->pc = 0x26681Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266820u; }
    }
    if (ctx->pc != 0x266820u) { return; }
    ctx->pc = 0x266820u;
label_266820:
    // 0x266820: 0x24040001
    ctx->pc = 0x266820u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_266824:
    // 0x266824: 0x2665fff9
    ctx->pc = 0x266824u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266828:
    // 0x266828: 0x3c06003b
    ctx->pc = 0x266828u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_26682c:
    // 0x26682c: 0xc0b47da
label_266830:
    if (ctx->pc == 0x266830u) {
        ctx->pc = 0x266830u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943392));
        ctx->pc = 0x266834u;
        goto label_266834;
    }
    ctx->pc = 0x26682Cu;
    SET_GPR_U32(ctx, 31, 0x266834u);
    ctx->pc = 0x266830u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943392));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266834u; }
    }
    if (ctx->pc != 0x266834u) { return; }
    ctx->pc = 0x266834u;
label_266834:
    // 0x266834: 0x8e8300f8
    ctx->pc = 0x266834u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 248)));
label_266838:
    // 0x266838: 0x2c62000d
    ctx->pc = 0x266838u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 13));
label_26683c:
    // 0x26683c: 0x10400062
label_266840:
    if (ctx->pc == 0x266840u) {
        ctx->pc = 0x266840u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x266844u;
        goto label_266844;
    }
    ctx->pc = 0x26683Cu;
    {
        const bool branch_taken_0x26683c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x266840u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x26683c) {
            ctx->pc = 0x2669C8u;
            goto label_2669c8;
        }
    }
    ctx->pc = 0x266844u;
label_266844:
    // 0x266844: 0x2442a550
    ctx->pc = 0x266844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944080));
label_266848:
    // 0x266848: 0x31880
    ctx->pc = 0x266848u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_26684c:
    // 0x26684c: 0x621821
    ctx->pc = 0x26684cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266850:
    // 0x266850: 0x8c620000
    ctx->pc = 0x266850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_266854:
    // 0x266854: 0x400008
label_266858:
    if (ctx->pc == 0x266858u) {
        ctx->pc = 0x26685Cu;
        goto label_26685c;
    }
    ctx->pc = 0x266854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x266610u: goto label_266610;
            case 0x266614u: goto label_266614;
            case 0x266618u: goto label_266618;
            case 0x26661Cu: goto label_26661c;
            case 0x266620u: goto label_266620;
            case 0x266624u: goto label_266624;
            case 0x266628u: goto label_266628;
            case 0x26662Cu: goto label_26662c;
            case 0x266630u: goto label_266630;
            case 0x266634u: goto label_266634;
            case 0x266638u: goto label_266638;
            case 0x26663Cu: goto label_26663c;
            case 0x266640u: goto label_266640;
            case 0x266644u: goto label_266644;
            case 0x266648u: goto label_266648;
            case 0x26664Cu: goto label_26664c;
            case 0x266650u: goto label_266650;
            case 0x266654u: goto label_266654;
            case 0x266658u: goto label_266658;
            case 0x26665Cu: goto label_26665c;
            case 0x266660u: goto label_266660;
            case 0x266664u: goto label_266664;
            case 0x266668u: goto label_266668;
            case 0x26666Cu: goto label_26666c;
            case 0x266670u: goto label_266670;
            case 0x266674u: goto label_266674;
            case 0x266678u: goto label_266678;
            case 0x26667Cu: goto label_26667c;
            case 0x266680u: goto label_266680;
            case 0x266684u: goto label_266684;
            case 0x266688u: goto label_266688;
            case 0x26668Cu: goto label_26668c;
            case 0x266690u: goto label_266690;
            case 0x266694u: goto label_266694;
            case 0x266698u: goto label_266698;
            case 0x26669Cu: goto label_26669c;
            case 0x2666A0u: goto label_2666a0;
            case 0x2666A4u: goto label_2666a4;
            case 0x2666A8u: goto label_2666a8;
            case 0x2666ACu: goto label_2666ac;
            case 0x2666B0u: goto label_2666b0;
            case 0x2666B4u: goto label_2666b4;
            case 0x2666B8u: goto label_2666b8;
            case 0x2666BCu: goto label_2666bc;
            case 0x2666C0u: goto label_2666c0;
            case 0x2666C4u: goto label_2666c4;
            case 0x2666C8u: goto label_2666c8;
            case 0x2666CCu: goto label_2666cc;
            case 0x2666D0u: goto label_2666d0;
            case 0x2666D4u: goto label_2666d4;
            case 0x2666D8u: goto label_2666d8;
            case 0x2666DCu: goto label_2666dc;
            case 0x2666E0u: goto label_2666e0;
            case 0x2666E4u: goto label_2666e4;
            case 0x2666E8u: goto label_2666e8;
            case 0x2666ECu: goto label_2666ec;
            case 0x2666F0u: goto label_2666f0;
            case 0x2666F4u: goto label_2666f4;
            case 0x2666F8u: goto label_2666f8;
            case 0x2666FCu: goto label_2666fc;
            case 0x266700u: goto label_266700;
            case 0x266704u: goto label_266704;
            case 0x266708u: goto label_266708;
            case 0x26670Cu: goto label_26670c;
            case 0x266710u: goto label_266710;
            case 0x266714u: goto label_266714;
            case 0x266718u: goto label_266718;
            case 0x26671Cu: goto label_26671c;
            case 0x266720u: goto label_266720;
            case 0x266724u: goto label_266724;
            case 0x266728u: goto label_266728;
            case 0x26672Cu: goto label_26672c;
            case 0x266730u: goto label_266730;
            case 0x266734u: goto label_266734;
            case 0x266738u: goto label_266738;
            case 0x26673Cu: goto label_26673c;
            case 0x266740u: goto label_266740;
            case 0x266744u: goto label_266744;
            case 0x266748u: goto label_266748;
            case 0x26674Cu: goto label_26674c;
            case 0x266750u: goto label_266750;
            case 0x266754u: goto label_266754;
            case 0x266758u: goto label_266758;
            case 0x26675Cu: goto label_26675c;
            case 0x266760u: goto label_266760;
            case 0x266764u: goto label_266764;
            case 0x266768u: goto label_266768;
            case 0x26676Cu: goto label_26676c;
            case 0x266770u: goto label_266770;
            case 0x266774u: goto label_266774;
            case 0x266778u: goto label_266778;
            case 0x26677Cu: goto label_26677c;
            case 0x266780u: goto label_266780;
            case 0x266784u: goto label_266784;
            case 0x266788u: goto label_266788;
            case 0x26678Cu: goto label_26678c;
            case 0x266790u: goto label_266790;
            case 0x266794u: goto label_266794;
            case 0x266798u: goto label_266798;
            case 0x26679Cu: goto label_26679c;
            case 0x2667A0u: goto label_2667a0;
            case 0x2667A4u: goto label_2667a4;
            case 0x2667A8u: goto label_2667a8;
            case 0x2667ACu: goto label_2667ac;
            case 0x2667B0u: goto label_2667b0;
            case 0x2667B4u: goto label_2667b4;
            case 0x2667B8u: goto label_2667b8;
            case 0x2667BCu: goto label_2667bc;
            case 0x2667C0u: goto label_2667c0;
            case 0x2667C4u: goto label_2667c4;
            case 0x2667C8u: goto label_2667c8;
            case 0x2667CCu: goto label_2667cc;
            case 0x2667D0u: goto label_2667d0;
            case 0x2667D4u: goto label_2667d4;
            case 0x2667D8u: goto label_2667d8;
            case 0x2667DCu: goto label_2667dc;
            case 0x2667E0u: goto label_2667e0;
            case 0x2667E4u: goto label_2667e4;
            case 0x2667E8u: goto label_2667e8;
            case 0x2667ECu: goto label_2667ec;
            case 0x2667F0u: goto label_2667f0;
            case 0x2667F4u: goto label_2667f4;
            case 0x2667F8u: goto label_2667f8;
            case 0x2667FCu: goto label_2667fc;
            case 0x266800u: goto label_266800;
            case 0x266804u: goto label_266804;
            case 0x266808u: goto label_266808;
            case 0x26680Cu: goto label_26680c;
            case 0x266810u: goto label_266810;
            case 0x266814u: goto label_266814;
            case 0x266818u: goto label_266818;
            case 0x26681Cu: goto label_26681c;
            case 0x266820u: goto label_266820;
            case 0x266824u: goto label_266824;
            case 0x266828u: goto label_266828;
            case 0x26682Cu: goto label_26682c;
            case 0x266830u: goto label_266830;
            case 0x266834u: goto label_266834;
            case 0x266838u: goto label_266838;
            case 0x26683Cu: goto label_26683c;
            case 0x266840u: goto label_266840;
            case 0x266844u: goto label_266844;
            case 0x266848u: goto label_266848;
            case 0x26684Cu: goto label_26684c;
            case 0x266850u: goto label_266850;
            case 0x266854u: goto label_266854;
            case 0x266858u: goto label_266858;
            case 0x26685Cu: goto label_26685c;
            case 0x266860u: goto label_266860;
            case 0x266864u: goto label_266864;
            case 0x266868u: goto label_266868;
            case 0x26686Cu: goto label_26686c;
            case 0x266870u: goto label_266870;
            case 0x266874u: goto label_266874;
            case 0x266878u: goto label_266878;
            case 0x26687Cu: goto label_26687c;
            case 0x266880u: goto label_266880;
            case 0x266884u: goto label_266884;
            case 0x266888u: goto label_266888;
            case 0x26688Cu: goto label_26688c;
            case 0x266890u: goto label_266890;
            case 0x266894u: goto label_266894;
            case 0x266898u: goto label_266898;
            case 0x26689Cu: goto label_26689c;
            case 0x2668A0u: goto label_2668a0;
            case 0x2668A4u: goto label_2668a4;
            case 0x2668A8u: goto label_2668a8;
            case 0x2668ACu: goto label_2668ac;
            case 0x2668B0u: goto label_2668b0;
            case 0x2668B4u: goto label_2668b4;
            case 0x2668B8u: goto label_2668b8;
            case 0x2668BCu: goto label_2668bc;
            case 0x2668C0u: goto label_2668c0;
            case 0x2668C4u: goto label_2668c4;
            case 0x2668C8u: goto label_2668c8;
            case 0x2668CCu: goto label_2668cc;
            case 0x2668D0u: goto label_2668d0;
            case 0x2668D4u: goto label_2668d4;
            case 0x2668D8u: goto label_2668d8;
            case 0x2668DCu: goto label_2668dc;
            case 0x2668E0u: goto label_2668e0;
            case 0x2668E4u: goto label_2668e4;
            case 0x2668E8u: goto label_2668e8;
            case 0x2668ECu: goto label_2668ec;
            case 0x2668F0u: goto label_2668f0;
            case 0x2668F4u: goto label_2668f4;
            case 0x2668F8u: goto label_2668f8;
            case 0x2668FCu: goto label_2668fc;
            case 0x266900u: goto label_266900;
            case 0x266904u: goto label_266904;
            case 0x266908u: goto label_266908;
            case 0x26690Cu: goto label_26690c;
            case 0x266910u: goto label_266910;
            case 0x266914u: goto label_266914;
            case 0x266918u: goto label_266918;
            case 0x26691Cu: goto label_26691c;
            case 0x266920u: goto label_266920;
            case 0x266924u: goto label_266924;
            case 0x266928u: goto label_266928;
            case 0x26692Cu: goto label_26692c;
            case 0x266930u: goto label_266930;
            case 0x266934u: goto label_266934;
            case 0x266938u: goto label_266938;
            case 0x26693Cu: goto label_26693c;
            case 0x266940u: goto label_266940;
            case 0x266944u: goto label_266944;
            case 0x266948u: goto label_266948;
            case 0x26694Cu: goto label_26694c;
            case 0x266950u: goto label_266950;
            case 0x266954u: goto label_266954;
            case 0x266958u: goto label_266958;
            case 0x26695Cu: goto label_26695c;
            case 0x266960u: goto label_266960;
            case 0x266964u: goto label_266964;
            case 0x266968u: goto label_266968;
            case 0x26696Cu: goto label_26696c;
            case 0x266970u: goto label_266970;
            case 0x266974u: goto label_266974;
            case 0x266978u: goto label_266978;
            case 0x26697Cu: goto label_26697c;
            case 0x266980u: goto label_266980;
            case 0x266984u: goto label_266984;
            case 0x266988u: goto label_266988;
            case 0x26698Cu: goto label_26698c;
            case 0x266990u: goto label_266990;
            case 0x266994u: goto label_266994;
            case 0x266998u: goto label_266998;
            case 0x26699Cu: goto label_26699c;
            case 0x2669A0u: goto label_2669a0;
            case 0x2669A4u: goto label_2669a4;
            case 0x2669A8u: goto label_2669a8;
            case 0x2669ACu: goto label_2669ac;
            case 0x2669B0u: goto label_2669b0;
            case 0x2669B4u: goto label_2669b4;
            case 0x2669B8u: goto label_2669b8;
            case 0x2669BCu: goto label_2669bc;
            case 0x2669C0u: goto label_2669c0;
            case 0x2669C4u: goto label_2669c4;
            case 0x2669C8u: goto label_2669c8;
            case 0x2669CCu: goto label_2669cc;
            case 0x2669D0u: goto label_2669d0;
            case 0x2669D4u: goto label_2669d4;
            case 0x2669D8u: goto label_2669d8;
            case 0x2669DCu: goto label_2669dc;
            case 0x2669E0u: goto label_2669e0;
            case 0x2669E4u: goto label_2669e4;
            case 0x2669E8u: goto label_2669e8;
            case 0x2669ECu: goto label_2669ec;
            case 0x2669F0u: goto label_2669f0;
            case 0x2669F4u: goto label_2669f4;
            case 0x2669F8u: goto label_2669f8;
            case 0x2669FCu: goto label_2669fc;
            case 0x266A00u: goto label_266a00;
            case 0x266A04u: goto label_266a04;
            case 0x266A08u: goto label_266a08;
            case 0x266A0Cu: goto label_266a0c;
            case 0x266A10u: goto label_266a10;
            case 0x266A14u: goto label_266a14;
            case 0x266A18u: goto label_266a18;
            case 0x266A1Cu: goto label_266a1c;
            case 0x266A20u: goto label_266a20;
            case 0x266A24u: goto label_266a24;
            case 0x266A28u: goto label_266a28;
            case 0x266A2Cu: goto label_266a2c;
            case 0x266A30u: goto label_266a30;
            case 0x266A34u: goto label_266a34;
            case 0x266A38u: goto label_266a38;
            case 0x266A3Cu: goto label_266a3c;
            case 0x266A40u: goto label_266a40;
            case 0x266A44u: goto label_266a44;
            case 0x266A48u: goto label_266a48;
            case 0x266A4Cu: goto label_266a4c;
            case 0x266A50u: goto label_266a50;
            case 0x266A54u: goto label_266a54;
            case 0x266A58u: goto label_266a58;
            case 0x266A5Cu: goto label_266a5c;
            case 0x266A60u: goto label_266a60;
            case 0x266A64u: goto label_266a64;
            case 0x266A68u: goto label_266a68;
            case 0x266A6Cu: goto label_266a6c;
            case 0x266A70u: goto label_266a70;
            case 0x266A74u: goto label_266a74;
            case 0x266A78u: goto label_266a78;
            case 0x266A7Cu: goto label_266a7c;
            case 0x266A80u: goto label_266a80;
            case 0x266A84u: goto label_266a84;
            case 0x266A88u: goto label_266a88;
            case 0x266A8Cu: goto label_266a8c;
            case 0x266A90u: goto label_266a90;
            case 0x266A94u: goto label_266a94;
            case 0x266A98u: goto label_266a98;
            case 0x266A9Cu: goto label_266a9c;
            case 0x266AA0u: goto label_266aa0;
            case 0x266AA4u: goto label_266aa4;
            case 0x266AA8u: goto label_266aa8;
            case 0x266AACu: goto label_266aac;
            case 0x266AB0u: goto label_266ab0;
            case 0x266AB4u: goto label_266ab4;
            case 0x266AB8u: goto label_266ab8;
            case 0x266ABCu: goto label_266abc;
            case 0x266AC0u: goto label_266ac0;
            case 0x266AC4u: goto label_266ac4;
            case 0x266AC8u: goto label_266ac8;
            case 0x266ACCu: goto label_266acc;
            case 0x266AD0u: goto label_266ad0;
            case 0x266AD4u: goto label_266ad4;
            case 0x266AD8u: goto label_266ad8;
            case 0x266ADCu: goto label_266adc;
            case 0x266AE0u: goto label_266ae0;
            case 0x266AE4u: goto label_266ae4;
            case 0x266AE8u: goto label_266ae8;
            case 0x266AECu: goto label_266aec;
            case 0x266AF0u: goto label_266af0;
            case 0x266AF4u: goto label_266af4;
            case 0x266AF8u: goto label_266af8;
            case 0x266AFCu: goto label_266afc;
            case 0x266B00u: goto label_266b00;
            case 0x266B04u: goto label_266b04;
            case 0x266B08u: goto label_266b08;
            case 0x266B0Cu: goto label_266b0c;
            case 0x266B10u: goto label_266b10;
            case 0x266B14u: goto label_266b14;
            case 0x266B18u: goto label_266b18;
            case 0x266B1Cu: goto label_266b1c;
            case 0x266B20u: goto label_266b20;
            case 0x266B24u: goto label_266b24;
            case 0x266B28u: goto label_266b28;
            case 0x266B2Cu: goto label_266b2c;
            case 0x266B30u: goto label_266b30;
            case 0x266B34u: goto label_266b34;
            case 0x266B38u: goto label_266b38;
            case 0x266B3Cu: goto label_266b3c;
            case 0x266B40u: goto label_266b40;
            case 0x266B44u: goto label_266b44;
            case 0x266B48u: goto label_266b48;
            case 0x266B4Cu: goto label_266b4c;
            case 0x266B50u: goto label_266b50;
            case 0x266B54u: goto label_266b54;
            case 0x266B58u: goto label_266b58;
            case 0x266B5Cu: goto label_266b5c;
            case 0x266B60u: goto label_266b60;
            case 0x266B64u: goto label_266b64;
            case 0x266B68u: goto label_266b68;
            case 0x266B6Cu: goto label_266b6c;
            case 0x266B70u: goto label_266b70;
            case 0x266B74u: goto label_266b74;
            case 0x266B78u: goto label_266b78;
            case 0x266B7Cu: goto label_266b7c;
            case 0x266B80u: goto label_266b80;
            case 0x266B84u: goto label_266b84;
            case 0x266B88u: goto label_266b88;
            case 0x266B8Cu: goto label_266b8c;
            case 0x266B90u: goto label_266b90;
            case 0x266B94u: goto label_266b94;
            case 0x266B98u: goto label_266b98;
            case 0x266B9Cu: goto label_266b9c;
            case 0x266BA0u: goto label_266ba0;
            case 0x266BA4u: goto label_266ba4;
            case 0x266BA8u: goto label_266ba8;
            case 0x266BACu: goto label_266bac;
            case 0x266BB0u: goto label_266bb0;
            case 0x266BB4u: goto label_266bb4;
            case 0x266BB8u: goto label_266bb8;
            case 0x266BBCu: goto label_266bbc;
            case 0x266BC0u: goto label_266bc0;
            case 0x266BC4u: goto label_266bc4;
            case 0x266BC8u: goto label_266bc8;
            case 0x266BCCu: goto label_266bcc;
            case 0x266BD0u: goto label_266bd0;
            case 0x266BD4u: goto label_266bd4;
            case 0x266BD8u: goto label_266bd8;
            case 0x266BDCu: goto label_266bdc;
            case 0x266BE0u: goto label_266be0;
            case 0x266BE4u: goto label_266be4;
            case 0x266BE8u: goto label_266be8;
            case 0x266BECu: goto label_266bec;
            case 0x266BF0u: goto label_266bf0;
            case 0x266BF4u: goto label_266bf4;
            case 0x266BF8u: goto label_266bf8;
            case 0x266BFCu: goto label_266bfc;
            case 0x266C00u: goto label_266c00;
            case 0x266C04u: goto label_266c04;
            case 0x266C08u: goto label_266c08;
            case 0x266C0Cu: goto label_266c0c;
            case 0x266C10u: goto label_266c10;
            case 0x266C14u: goto label_266c14;
            case 0x266C18u: goto label_266c18;
            case 0x266C1Cu: goto label_266c1c;
            case 0x266C20u: goto label_266c20;
            case 0x266C24u: goto label_266c24;
            case 0x266C28u: goto label_266c28;
            case 0x266C2Cu: goto label_266c2c;
            case 0x266C30u: goto label_266c30;
            case 0x266C34u: goto label_266c34;
            case 0x266C38u: goto label_266c38;
            case 0x266C3Cu: goto label_266c3c;
            case 0x266C40u: goto label_266c40;
            case 0x266C44u: goto label_266c44;
            case 0x266C48u: goto label_266c48;
            case 0x266C4Cu: goto label_266c4c;
            case 0x266C50u: goto label_266c50;
            case 0x266C54u: goto label_266c54;
            case 0x266C58u: goto label_266c58;
            case 0x266C5Cu: goto label_266c5c;
            case 0x266C60u: goto label_266c60;
            case 0x266C64u: goto label_266c64;
            case 0x266C68u: goto label_266c68;
            case 0x266C6Cu: goto label_266c6c;
            case 0x266C70u: goto label_266c70;
            case 0x266C74u: goto label_266c74;
            case 0x266C78u: goto label_266c78;
            case 0x266C7Cu: goto label_266c7c;
            case 0x266C80u: goto label_266c80;
            case 0x266C84u: goto label_266c84;
            case 0x266C88u: goto label_266c88;
            case 0x266C8Cu: goto label_266c8c;
            case 0x266C90u: goto label_266c90;
            case 0x266C94u: goto label_266c94;
            case 0x266C98u: goto label_266c98;
            case 0x266C9Cu: goto label_266c9c;
            case 0x266CA0u: goto label_266ca0;
            case 0x266CA4u: goto label_266ca4;
            case 0x266CA8u: goto label_266ca8;
            case 0x266CACu: goto label_266cac;
            case 0x266CB0u: goto label_266cb0;
            case 0x266CB4u: goto label_266cb4;
            case 0x266CB8u: goto label_266cb8;
            case 0x266CBCu: goto label_266cbc;
            case 0x266CC0u: goto label_266cc0;
            case 0x266CC4u: goto label_266cc4;
            case 0x266CC8u: goto label_266cc8;
            case 0x266CCCu: goto label_266ccc;
            case 0x266CD0u: goto label_266cd0;
            case 0x266CD4u: goto label_266cd4;
            case 0x266CD8u: goto label_266cd8;
            case 0x266CDCu: goto label_266cdc;
            case 0x266CE0u: goto label_266ce0;
            case 0x266CE4u: goto label_266ce4;
            case 0x266CE8u: goto label_266ce8;
            case 0x266CECu: goto label_266cec;
            case 0x266CF0u: goto label_266cf0;
            case 0x266CF4u: goto label_266cf4;
            case 0x266CF8u: goto label_266cf8;
            case 0x266CFCu: goto label_266cfc;
            case 0x266D00u: goto label_266d00;
            case 0x266D04u: goto label_266d04;
            case 0x266D08u: goto label_266d08;
            case 0x266D0Cu: goto label_266d0c;
            case 0x266D10u: goto label_266d10;
            case 0x266D14u: goto label_266d14;
            case 0x266D18u: goto label_266d18;
            case 0x266D1Cu: goto label_266d1c;
            case 0x266D20u: goto label_266d20;
            case 0x266D24u: goto label_266d24;
            case 0x266D28u: goto label_266d28;
            case 0x266D2Cu: goto label_266d2c;
            case 0x266D30u: goto label_266d30;
            case 0x266D34u: goto label_266d34;
            case 0x266D38u: goto label_266d38;
            case 0x266D3Cu: goto label_266d3c;
            case 0x266D40u: goto label_266d40;
            case 0x266D44u: goto label_266d44;
            case 0x266D48u: goto label_266d48;
            case 0x266D4Cu: goto label_266d4c;
            case 0x266D50u: goto label_266d50;
            case 0x266D54u: goto label_266d54;
            case 0x266D58u: goto label_266d58;
            case 0x266D5Cu: goto label_266d5c;
            case 0x266D60u: goto label_266d60;
            case 0x266D64u: goto label_266d64;
            case 0x266D68u: goto label_266d68;
            case 0x266D6Cu: goto label_266d6c;
            case 0x266D70u: goto label_266d70;
            case 0x266D74u: goto label_266d74;
            case 0x266D78u: goto label_266d78;
            case 0x266D7Cu: goto label_266d7c;
            case 0x266D80u: goto label_266d80;
            case 0x266D84u: goto label_266d84;
            case 0x266D88u: goto label_266d88;
            case 0x266D8Cu: goto label_266d8c;
            case 0x266D90u: goto label_266d90;
            case 0x266D94u: goto label_266d94;
            case 0x266D98u: goto label_266d98;
            case 0x266D9Cu: goto label_266d9c;
            case 0x266DA0u: goto label_266da0;
            case 0x266DA4u: goto label_266da4;
            case 0x266DA8u: goto label_266da8;
            case 0x266DACu: goto label_266dac;
            case 0x266DB0u: goto label_266db0;
            case 0x266DB4u: goto label_266db4;
            case 0x266DB8u: goto label_266db8;
            case 0x266DBCu: goto label_266dbc;
            case 0x266DC0u: goto label_266dc0;
            case 0x266DC4u: goto label_266dc4;
            case 0x266DC8u: goto label_266dc8;
            case 0x266DCCu: goto label_266dcc;
            case 0x266DD0u: goto label_266dd0;
            case 0x266DD4u: goto label_266dd4;
            case 0x266DD8u: goto label_266dd8;
            case 0x266DDCu: goto label_266ddc;
            case 0x266DE0u: goto label_266de0;
            case 0x266DE4u: goto label_266de4;
            case 0x266DE8u: goto label_266de8;
            case 0x266DECu: goto label_266dec;
            case 0x266DF0u: goto label_266df0;
            case 0x266DF4u: goto label_266df4;
            case 0x266DF8u: goto label_266df8;
            case 0x266DFCu: goto label_266dfc;
            case 0x266E00u: goto label_266e00;
            case 0x266E04u: goto label_266e04;
            case 0x266E08u: goto label_266e08;
            case 0x266E0Cu: goto label_266e0c;
            case 0x266E10u: goto label_266e10;
            case 0x266E14u: goto label_266e14;
            case 0x266E18u: goto label_266e18;
            case 0x266E1Cu: goto label_266e1c;
            case 0x266E20u: goto label_266e20;
            case 0x266E24u: goto label_266e24;
            case 0x266E28u: goto label_266e28;
            case 0x266E2Cu: goto label_266e2c;
            case 0x266E30u: goto label_266e30;
            case 0x266E34u: goto label_266e34;
            case 0x266E38u: goto label_266e38;
            case 0x266E3Cu: goto label_266e3c;
            case 0x266E40u: goto label_266e40;
            case 0x266E44u: goto label_266e44;
            case 0x266E48u: goto label_266e48;
            case 0x266E4Cu: goto label_266e4c;
            case 0x266E50u: goto label_266e50;
            case 0x266E54u: goto label_266e54;
            case 0x266E58u: goto label_266e58;
            case 0x266E5Cu: goto label_266e5c;
            case 0x266E60u: goto label_266e60;
            case 0x266E64u: goto label_266e64;
            case 0x266E68u: goto label_266e68;
            case 0x266E6Cu: goto label_266e6c;
            case 0x266E70u: goto label_266e70;
            case 0x266E74u: goto label_266e74;
            case 0x266E78u: goto label_266e78;
            case 0x266E7Cu: goto label_266e7c;
            case 0x266E80u: goto label_266e80;
            case 0x266E84u: goto label_266e84;
            case 0x266E88u: goto label_266e88;
            case 0x266E8Cu: goto label_266e8c;
            case 0x266E90u: goto label_266e90;
            case 0x266E94u: goto label_266e94;
            case 0x266E98u: goto label_266e98;
            case 0x266E9Cu: goto label_266e9c;
            case 0x266EA0u: goto label_266ea0;
            case 0x266EA4u: goto label_266ea4;
            case 0x266EA8u: goto label_266ea8;
            case 0x266EACu: goto label_266eac;
            case 0x266EB0u: goto label_266eb0;
            case 0x266EB4u: goto label_266eb4;
            case 0x266EB8u: goto label_266eb8;
            case 0x266EBCu: goto label_266ebc;
            case 0x266EC0u: goto label_266ec0;
            case 0x266EC4u: goto label_266ec4;
            case 0x266EC8u: goto label_266ec8;
            case 0x266ECCu: goto label_266ecc;
            case 0x266ED0u: goto label_266ed0;
            case 0x266ED4u: goto label_266ed4;
            case 0x266ED8u: goto label_266ed8;
            case 0x266EDCu: goto label_266edc;
            case 0x266EE0u: goto label_266ee0;
            case 0x266EE4u: goto label_266ee4;
            case 0x266EE8u: goto label_266ee8;
            case 0x266EECu: goto label_266eec;
            case 0x266EF0u: goto label_266ef0;
            case 0x266EF4u: goto label_266ef4;
            case 0x266EF8u: goto label_266ef8;
            case 0x266EFCu: goto label_266efc;
            case 0x266F00u: goto label_266f00;
            case 0x266F04u: goto label_266f04;
            case 0x266F08u: goto label_266f08;
            case 0x266F0Cu: goto label_266f0c;
            case 0x266F10u: goto label_266f10;
            case 0x266F14u: goto label_266f14;
            case 0x266F18u: goto label_266f18;
            case 0x266F1Cu: goto label_266f1c;
            case 0x266F20u: goto label_266f20;
            case 0x266F24u: goto label_266f24;
            case 0x266F28u: goto label_266f28;
            case 0x266F2Cu: goto label_266f2c;
            case 0x266F30u: goto label_266f30;
            case 0x266F34u: goto label_266f34;
            case 0x266F38u: goto label_266f38;
            case 0x266F3Cu: goto label_266f3c;
            case 0x266F40u: goto label_266f40;
            case 0x266F44u: goto label_266f44;
            case 0x266F48u: goto label_266f48;
            case 0x266F4Cu: goto label_266f4c;
            case 0x266F50u: goto label_266f50;
            case 0x266F54u: goto label_266f54;
            case 0x266F58u: goto label_266f58;
            case 0x266F5Cu: goto label_266f5c;
            case 0x266F60u: goto label_266f60;
            case 0x266F64u: goto label_266f64;
            case 0x266F68u: goto label_266f68;
            case 0x266F6Cu: goto label_266f6c;
            case 0x266F70u: goto label_266f70;
            case 0x266F74u: goto label_266f74;
            case 0x266F78u: goto label_266f78;
            case 0x266F7Cu: goto label_266f7c;
            case 0x266F80u: goto label_266f80;
            case 0x266F84u: goto label_266f84;
            case 0x266F88u: goto label_266f88;
            case 0x266F8Cu: goto label_266f8c;
            case 0x266F90u: goto label_266f90;
            case 0x266F94u: goto label_266f94;
            case 0x266F98u: goto label_266f98;
            case 0x266F9Cu: goto label_266f9c;
            case 0x266FA0u: goto label_266fa0;
            case 0x266FA4u: goto label_266fa4;
            case 0x266FA8u: goto label_266fa8;
            case 0x266FACu: goto label_266fac;
            case 0x266FB0u: goto label_266fb0;
            case 0x266FB4u: goto label_266fb4;
            case 0x266FB8u: goto label_266fb8;
            case 0x266FBCu: goto label_266fbc;
            case 0x266FC0u: goto label_266fc0;
            case 0x266FC4u: goto label_266fc4;
            case 0x266FC8u: goto label_266fc8;
            case 0x266FCCu: goto label_266fcc;
            case 0x266FD0u: goto label_266fd0;
            case 0x266FD4u: goto label_266fd4;
            case 0x266FD8u: goto label_266fd8;
            case 0x266FDCu: goto label_266fdc;
            case 0x266FE0u: goto label_266fe0;
            case 0x266FE4u: goto label_266fe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26685Cu;
label_26685c:
    // 0x26685c: 0x24040005
    ctx->pc = 0x26685cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_266860:
    // 0x266860: 0x2665fff9
    ctx->pc = 0x266860u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266864:
    // 0x266864: 0x3c06003b
    ctx->pc = 0x266864u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266868:
    // 0x266868: 0xc0b47da
label_26686c:
    if (ctx->pc == 0x26686Cu) {
        ctx->pc = 0x26686Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943400));
        ctx->pc = 0x266870u;
        goto label_266870;
    }
    ctx->pc = 0x266868u;
    SET_GPR_U32(ctx, 31, 0x266870u);
    ctx->pc = 0x26686Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943400));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266870u; }
    }
    if (ctx->pc != 0x266870u) { return; }
    ctx->pc = 0x266870u;
label_266870:
    // 0x266870: 0x1000005b
label_266874:
    if (ctx->pc == 0x266874u) {
        ctx->pc = 0x266874u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x266878u;
        goto label_266878;
    }
    ctx->pc = 0x266870u;
    {
        const bool branch_taken_0x266870 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266874u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x266870) {
            ctx->pc = 0x2669E0u;
            goto label_2669e0;
        }
    }
    ctx->pc = 0x266878u;
label_266878:
    // 0x266878: 0x24040005
    ctx->pc = 0x266878u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_26687c:
    // 0x26687c: 0x2665fff9
    ctx->pc = 0x26687cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266880:
    // 0x266880: 0x3c06003b
    ctx->pc = 0x266880u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266884:
    // 0x266884: 0xc0b47da
label_266888:
    if (ctx->pc == 0x266888u) {
        ctx->pc = 0x266888u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943408));
        ctx->pc = 0x26688Cu;
        goto label_26688c;
    }
    ctx->pc = 0x266884u;
    SET_GPR_U32(ctx, 31, 0x26688Cu);
    ctx->pc = 0x266888u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943408));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26688Cu; }
    }
    if (ctx->pc != 0x26688Cu) { return; }
    ctx->pc = 0x26688Cu;
label_26688c:
    // 0x26688c: 0x10000054
label_266890:
    if (ctx->pc == 0x266890u) {
        ctx->pc = 0x266890u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x266894u;
        goto label_266894;
    }
    ctx->pc = 0x26688Cu;
    {
        const bool branch_taken_0x26688c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266890u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x26688c) {
            ctx->pc = 0x2669E0u;
            goto label_2669e0;
        }
    }
    ctx->pc = 0x266894u;
label_266894:
    // 0x266894: 0x24040005
    ctx->pc = 0x266894u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_266898:
    // 0x266898: 0x2665fff9
    ctx->pc = 0x266898u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_26689c:
    // 0x26689c: 0x3c06003b
    ctx->pc = 0x26689cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2668a0:
    // 0x2668a0: 0xc0b47da
label_2668a4:
    if (ctx->pc == 0x2668A4u) {
        ctx->pc = 0x2668A4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943416));
        ctx->pc = 0x2668A8u;
        goto label_2668a8;
    }
    ctx->pc = 0x2668A0u;
    SET_GPR_U32(ctx, 31, 0x2668A8u);
    ctx->pc = 0x2668A4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943416));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2668A8u; }
    }
    if (ctx->pc != 0x2668A8u) { return; }
    ctx->pc = 0x2668A8u;
label_2668a8:
    // 0x2668a8: 0x1000004d
label_2668ac:
    if (ctx->pc == 0x2668ACu) {
        ctx->pc = 0x2668ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2668B0u;
        goto label_2668b0;
    }
    ctx->pc = 0x2668A8u;
    {
        const bool branch_taken_0x2668a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2668ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x2668a8) {
            ctx->pc = 0x2669E0u;
            goto label_2669e0;
        }
    }
    ctx->pc = 0x2668B0u;
label_2668b0:
    // 0x2668b0: 0x24040005
    ctx->pc = 0x2668b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_2668b4:
    // 0x2668b4: 0x2665fff9
    ctx->pc = 0x2668b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_2668b8:
    // 0x2668b8: 0x3c06003b
    ctx->pc = 0x2668b8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2668bc:
    // 0x2668bc: 0xc0b47da
label_2668c0:
    if (ctx->pc == 0x2668C0u) {
        ctx->pc = 0x2668C0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943424));
        ctx->pc = 0x2668C4u;
        goto label_2668c4;
    }
    ctx->pc = 0x2668BCu;
    SET_GPR_U32(ctx, 31, 0x2668C4u);
    ctx->pc = 0x2668C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943424));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2668C4u; }
    }
    if (ctx->pc != 0x2668C4u) { return; }
    ctx->pc = 0x2668C4u;
label_2668c4:
    // 0x2668c4: 0x10000046
label_2668c8:
    if (ctx->pc == 0x2668C8u) {
        ctx->pc = 0x2668C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2668CCu;
        goto label_2668cc;
    }
    ctx->pc = 0x2668C4u;
    {
        const bool branch_taken_0x2668c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2668C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x2668c4) {
            ctx->pc = 0x2669E0u;
            goto label_2669e0;
        }
    }
    ctx->pc = 0x2668CCu;
label_2668cc:
    // 0x2668cc: 0x24040005
    ctx->pc = 0x2668ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_2668d0:
    // 0x2668d0: 0x2665fff9
    ctx->pc = 0x2668d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_2668d4:
    // 0x2668d4: 0x3c06003b
    ctx->pc = 0x2668d4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2668d8:
    // 0x2668d8: 0xc0b47da
label_2668dc:
    if (ctx->pc == 0x2668DCu) {
        ctx->pc = 0x2668DCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943432));
        ctx->pc = 0x2668E0u;
        goto label_2668e0;
    }
    ctx->pc = 0x2668D8u;
    SET_GPR_U32(ctx, 31, 0x2668E0u);
    ctx->pc = 0x2668DCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943432));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2668E0u; }
    }
    if (ctx->pc != 0x2668E0u) { return; }
    ctx->pc = 0x2668E0u;
label_2668e0:
    // 0x2668e0: 0x1000003f
label_2668e4:
    if (ctx->pc == 0x2668E4u) {
        ctx->pc = 0x2668E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2668E8u;
        goto label_2668e8;
    }
    ctx->pc = 0x2668E0u;
    {
        const bool branch_taken_0x2668e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2668E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x2668e0) {
            ctx->pc = 0x2669E0u;
            goto label_2669e0;
        }
    }
    ctx->pc = 0x2668E8u;
label_2668e8:
    // 0x2668e8: 0x24040005
    ctx->pc = 0x2668e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_2668ec:
    // 0x2668ec: 0x2665fff9
    ctx->pc = 0x2668ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_2668f0:
    // 0x2668f0: 0x3c06003b
    ctx->pc = 0x2668f0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2668f4:
    // 0x2668f4: 0xc0b47da
label_2668f8:
    if (ctx->pc == 0x2668F8u) {
        ctx->pc = 0x2668F8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943440));
        ctx->pc = 0x2668FCu;
        goto label_2668fc;
    }
    ctx->pc = 0x2668F4u;
    SET_GPR_U32(ctx, 31, 0x2668FCu);
    ctx->pc = 0x2668F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943440));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2668FCu; }
    }
    if (ctx->pc != 0x2668FCu) { return; }
    ctx->pc = 0x2668FCu;
label_2668fc:
    // 0x2668fc: 0x10000038
label_266900:
    if (ctx->pc == 0x266900u) {
        ctx->pc = 0x266900u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x266904u;
        goto label_266904;
    }
    ctx->pc = 0x2668FCu;
    {
        const bool branch_taken_0x2668fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266900u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x2668fc) {
            ctx->pc = 0x2669E0u;
            goto label_2669e0;
        }
    }
    ctx->pc = 0x266904u;
label_266904:
    // 0x266904: 0x24040005
    ctx->pc = 0x266904u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_266908:
    // 0x266908: 0x2665fff9
    ctx->pc = 0x266908u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_26690c:
    // 0x26690c: 0x3c06003b
    ctx->pc = 0x26690cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266910:
    // 0x266910: 0xc0b47da
label_266914:
    if (ctx->pc == 0x266914u) {
        ctx->pc = 0x266914u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943448));
        ctx->pc = 0x266918u;
        goto label_266918;
    }
    ctx->pc = 0x266910u;
    SET_GPR_U32(ctx, 31, 0x266918u);
    ctx->pc = 0x266914u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943448));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266918u; }
    }
    if (ctx->pc != 0x266918u) { return; }
    ctx->pc = 0x266918u;
label_266918:
    // 0x266918: 0x10000031
label_26691c:
    if (ctx->pc == 0x26691Cu) {
        ctx->pc = 0x26691Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x266920u;
        goto label_266920;
    }
    ctx->pc = 0x266918u;
    {
        const bool branch_taken_0x266918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26691Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x266918) {
            ctx->pc = 0x2669E0u;
            goto label_2669e0;
        }
    }
    ctx->pc = 0x266920u;
label_266920:
    // 0x266920: 0x24040005
    ctx->pc = 0x266920u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_266924:
    // 0x266924: 0x2665fff9
    ctx->pc = 0x266924u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266928:
    // 0x266928: 0x3c06003b
    ctx->pc = 0x266928u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_26692c:
    // 0x26692c: 0xc0b47da
label_266930:
    if (ctx->pc == 0x266930u) {
        ctx->pc = 0x266930u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943456));
        ctx->pc = 0x266934u;
        goto label_266934;
    }
    ctx->pc = 0x26692Cu;
    SET_GPR_U32(ctx, 31, 0x266934u);
    ctx->pc = 0x266930u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943456));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266934u; }
    }
    if (ctx->pc != 0x266934u) { return; }
    ctx->pc = 0x266934u;
label_266934:
    // 0x266934: 0x1000002a
label_266938:
    if (ctx->pc == 0x266938u) {
        ctx->pc = 0x266938u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x26693Cu;
        goto label_26693c;
    }
    ctx->pc = 0x266934u;
    {
        const bool branch_taken_0x266934 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266938u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x266934) {
            ctx->pc = 0x2669E0u;
            goto label_2669e0;
        }
    }
    ctx->pc = 0x26693Cu;
label_26693c:
    // 0x26693c: 0x24040005
    ctx->pc = 0x26693cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_266940:
    // 0x266940: 0x2665fff9
    ctx->pc = 0x266940u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266944:
    // 0x266944: 0x3c06003b
    ctx->pc = 0x266944u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266948:
    // 0x266948: 0xc0b47da
label_26694c:
    if (ctx->pc == 0x26694Cu) {
        ctx->pc = 0x26694Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943464));
        ctx->pc = 0x266950u;
        goto label_266950;
    }
    ctx->pc = 0x266948u;
    SET_GPR_U32(ctx, 31, 0x266950u);
    ctx->pc = 0x26694Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943464));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266950u; }
    }
    if (ctx->pc != 0x266950u) { return; }
    ctx->pc = 0x266950u;
label_266950:
    // 0x266950: 0x10000023
label_266954:
    if (ctx->pc == 0x266954u) {
        ctx->pc = 0x266954u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x266958u;
        goto label_266958;
    }
    ctx->pc = 0x266950u;
    {
        const bool branch_taken_0x266950 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266954u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x266950) {
            ctx->pc = 0x2669E0u;
            goto label_2669e0;
        }
    }
    ctx->pc = 0x266958u;
label_266958:
    // 0x266958: 0x24040005
    ctx->pc = 0x266958u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_26695c:
    // 0x26695c: 0x2665fff9
    ctx->pc = 0x26695cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266960:
    // 0x266960: 0x3c06003b
    ctx->pc = 0x266960u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266964:
    // 0x266964: 0xc0b47da
label_266968:
    if (ctx->pc == 0x266968u) {
        ctx->pc = 0x266968u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943472));
        ctx->pc = 0x26696Cu;
        goto label_26696c;
    }
    ctx->pc = 0x266964u;
    SET_GPR_U32(ctx, 31, 0x26696Cu);
    ctx->pc = 0x266968u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943472));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26696Cu; }
    }
    if (ctx->pc != 0x26696Cu) { return; }
    ctx->pc = 0x26696Cu;
label_26696c:
    // 0x26696c: 0x1000001c
label_266970:
    if (ctx->pc == 0x266970u) {
        ctx->pc = 0x266970u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x266974u;
        goto label_266974;
    }
    ctx->pc = 0x26696Cu;
    {
        const bool branch_taken_0x26696c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266970u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x26696c) {
            ctx->pc = 0x2669E0u;
            goto label_2669e0;
        }
    }
    ctx->pc = 0x266974u;
label_266974:
    // 0x266974: 0x24040005
    ctx->pc = 0x266974u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_266978:
    // 0x266978: 0x2665fff9
    ctx->pc = 0x266978u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_26697c:
    // 0x26697c: 0x3c06003b
    ctx->pc = 0x26697cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266980:
    // 0x266980: 0xc0b47da
label_266984:
    if (ctx->pc == 0x266984u) {
        ctx->pc = 0x266984u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943480));
        ctx->pc = 0x266988u;
        goto label_266988;
    }
    ctx->pc = 0x266980u;
    SET_GPR_U32(ctx, 31, 0x266988u);
    ctx->pc = 0x266984u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943480));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266988u; }
    }
    if (ctx->pc != 0x266988u) { return; }
    ctx->pc = 0x266988u;
label_266988:
    // 0x266988: 0x10000015
label_26698c:
    if (ctx->pc == 0x26698Cu) {
        ctx->pc = 0x26698Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x266990u;
        goto label_266990;
    }
    ctx->pc = 0x266988u;
    {
        const bool branch_taken_0x266988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26698Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x266988) {
            ctx->pc = 0x2669E0u;
            goto label_2669e0;
        }
    }
    ctx->pc = 0x266990u;
label_266990:
    // 0x266990: 0x24040005
    ctx->pc = 0x266990u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_266994:
    // 0x266994: 0x2665fff9
    ctx->pc = 0x266994u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266998:
    // 0x266998: 0x3c06003b
    ctx->pc = 0x266998u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_26699c:
    // 0x26699c: 0xc0b47da
label_2669a0:
    if (ctx->pc == 0x2669A0u) {
        ctx->pc = 0x2669A0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943488));
        ctx->pc = 0x2669A4u;
        goto label_2669a4;
    }
    ctx->pc = 0x26699Cu;
    SET_GPR_U32(ctx, 31, 0x2669A4u);
    ctx->pc = 0x2669A0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943488));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2669A4u; }
    }
    if (ctx->pc != 0x2669A4u) { return; }
    ctx->pc = 0x2669A4u;
label_2669a4:
    // 0x2669a4: 0x1000000e
label_2669a8:
    if (ctx->pc == 0x2669A8u) {
        ctx->pc = 0x2669A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2669ACu;
        goto label_2669ac;
    }
    ctx->pc = 0x2669A4u;
    {
        const bool branch_taken_0x2669a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2669A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x2669a4) {
            ctx->pc = 0x2669E0u;
            goto label_2669e0;
        }
    }
    ctx->pc = 0x2669ACu;
label_2669ac:
    // 0x2669ac: 0x24040005
    ctx->pc = 0x2669acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_2669b0:
    // 0x2669b0: 0x2665fff9
    ctx->pc = 0x2669b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_2669b4:
    // 0x2669b4: 0x3c06003b
    ctx->pc = 0x2669b4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2669b8:
    // 0x2669b8: 0xc0b47da
label_2669bc:
    if (ctx->pc == 0x2669BCu) {
        ctx->pc = 0x2669BCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943496));
        ctx->pc = 0x2669C0u;
        goto label_2669c0;
    }
    ctx->pc = 0x2669B8u;
    SET_GPR_U32(ctx, 31, 0x2669C0u);
    ctx->pc = 0x2669BCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943496));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2669C0u; }
    }
    if (ctx->pc != 0x2669C0u) { return; }
    ctx->pc = 0x2669C0u;
label_2669c0:
    // 0x2669c0: 0x10000007
label_2669c4:
    if (ctx->pc == 0x2669C4u) {
        ctx->pc = 0x2669C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2669C8u;
        goto label_2669c8;
    }
    ctx->pc = 0x2669C0u;
    {
        const bool branch_taken_0x2669c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2669C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x2669c0) {
            ctx->pc = 0x2669E0u;
            goto label_2669e0;
        }
    }
    ctx->pc = 0x2669C8u;
label_2669c8:
    // 0x2669c8: 0x24040005
    ctx->pc = 0x2669c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_2669cc:
    // 0x2669cc: 0x2665fff9
    ctx->pc = 0x2669ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_2669d0:
    // 0x2669d0: 0x3c06003b
    ctx->pc = 0x2669d0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2669d4:
    // 0x2669d4: 0xc0b47da
label_2669d8:
    if (ctx->pc == 0x2669D8u) {
        ctx->pc = 0x2669D8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943504));
        ctx->pc = 0x2669DCu;
        goto label_2669dc;
    }
    ctx->pc = 0x2669D4u;
    SET_GPR_U32(ctx, 31, 0x2669DCu);
    ctx->pc = 0x2669D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943504));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2669DCu; }
    }
    if (ctx->pc != 0x2669DCu) { return; }
    ctx->pc = 0x2669DCu;
label_2669dc:
    // 0x2669dc: 0x2404000e
    ctx->pc = 0x2669dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_2669e0:
    // 0x2669e0: 0x2665fff9
    ctx->pc = 0x2669e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_2669e4:
    // 0x2669e4: 0x3c06003b
    ctx->pc = 0x2669e4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2669e8:
    // 0x2669e8: 0xc0b47da
label_2669ec:
    if (ctx->pc == 0x2669ECu) {
        ctx->pc = 0x2669ECu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943512));
        ctx->pc = 0x2669F0u;
        goto label_2669f0;
    }
    ctx->pc = 0x2669E8u;
    SET_GPR_U32(ctx, 31, 0x2669F0u);
    ctx->pc = 0x2669ECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943512));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2669F0u; }
    }
    if (ctx->pc != 0x2669F0u) { return; }
    ctx->pc = 0x2669F0u;
label_2669f0:
    // 0x2669f0: 0x8e830104
    ctx->pc = 0x2669f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_2669f4:
    // 0x2669f4: 0x2c62000b
    ctx->pc = 0x2669f4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 11));
label_2669f8:
    // 0x2669f8: 0x10400158
label_2669fc:
    if (ctx->pc == 0x2669FCu) {
        ctx->pc = 0x2669FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x266A00u;
        goto label_266a00;
    }
    ctx->pc = 0x2669F8u;
    {
        const bool branch_taken_0x2669f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2669FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2669f8) {
            ctx->pc = 0x266F5Cu;
            goto label_266f5c;
        }
    }
    ctx->pc = 0x266A00u;
label_266a00:
    // 0x266a00: 0x2442a590
    ctx->pc = 0x266a00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944144));
label_266a04:
    // 0x266a04: 0x31880
    ctx->pc = 0x266a04u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_266a08:
    // 0x266a08: 0x621821
    ctx->pc = 0x266a08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266a0c:
    // 0x266a0c: 0x8c620000
    ctx->pc = 0x266a0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_266a10:
    // 0x266a10: 0x400008
label_266a14:
    if (ctx->pc == 0x266A14u) {
        ctx->pc = 0x266A18u;
        goto label_266a18;
    }
    ctx->pc = 0x266A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x266610u: goto label_266610;
            case 0x266614u: goto label_266614;
            case 0x266618u: goto label_266618;
            case 0x26661Cu: goto label_26661c;
            case 0x266620u: goto label_266620;
            case 0x266624u: goto label_266624;
            case 0x266628u: goto label_266628;
            case 0x26662Cu: goto label_26662c;
            case 0x266630u: goto label_266630;
            case 0x266634u: goto label_266634;
            case 0x266638u: goto label_266638;
            case 0x26663Cu: goto label_26663c;
            case 0x266640u: goto label_266640;
            case 0x266644u: goto label_266644;
            case 0x266648u: goto label_266648;
            case 0x26664Cu: goto label_26664c;
            case 0x266650u: goto label_266650;
            case 0x266654u: goto label_266654;
            case 0x266658u: goto label_266658;
            case 0x26665Cu: goto label_26665c;
            case 0x266660u: goto label_266660;
            case 0x266664u: goto label_266664;
            case 0x266668u: goto label_266668;
            case 0x26666Cu: goto label_26666c;
            case 0x266670u: goto label_266670;
            case 0x266674u: goto label_266674;
            case 0x266678u: goto label_266678;
            case 0x26667Cu: goto label_26667c;
            case 0x266680u: goto label_266680;
            case 0x266684u: goto label_266684;
            case 0x266688u: goto label_266688;
            case 0x26668Cu: goto label_26668c;
            case 0x266690u: goto label_266690;
            case 0x266694u: goto label_266694;
            case 0x266698u: goto label_266698;
            case 0x26669Cu: goto label_26669c;
            case 0x2666A0u: goto label_2666a0;
            case 0x2666A4u: goto label_2666a4;
            case 0x2666A8u: goto label_2666a8;
            case 0x2666ACu: goto label_2666ac;
            case 0x2666B0u: goto label_2666b0;
            case 0x2666B4u: goto label_2666b4;
            case 0x2666B8u: goto label_2666b8;
            case 0x2666BCu: goto label_2666bc;
            case 0x2666C0u: goto label_2666c0;
            case 0x2666C4u: goto label_2666c4;
            case 0x2666C8u: goto label_2666c8;
            case 0x2666CCu: goto label_2666cc;
            case 0x2666D0u: goto label_2666d0;
            case 0x2666D4u: goto label_2666d4;
            case 0x2666D8u: goto label_2666d8;
            case 0x2666DCu: goto label_2666dc;
            case 0x2666E0u: goto label_2666e0;
            case 0x2666E4u: goto label_2666e4;
            case 0x2666E8u: goto label_2666e8;
            case 0x2666ECu: goto label_2666ec;
            case 0x2666F0u: goto label_2666f0;
            case 0x2666F4u: goto label_2666f4;
            case 0x2666F8u: goto label_2666f8;
            case 0x2666FCu: goto label_2666fc;
            case 0x266700u: goto label_266700;
            case 0x266704u: goto label_266704;
            case 0x266708u: goto label_266708;
            case 0x26670Cu: goto label_26670c;
            case 0x266710u: goto label_266710;
            case 0x266714u: goto label_266714;
            case 0x266718u: goto label_266718;
            case 0x26671Cu: goto label_26671c;
            case 0x266720u: goto label_266720;
            case 0x266724u: goto label_266724;
            case 0x266728u: goto label_266728;
            case 0x26672Cu: goto label_26672c;
            case 0x266730u: goto label_266730;
            case 0x266734u: goto label_266734;
            case 0x266738u: goto label_266738;
            case 0x26673Cu: goto label_26673c;
            case 0x266740u: goto label_266740;
            case 0x266744u: goto label_266744;
            case 0x266748u: goto label_266748;
            case 0x26674Cu: goto label_26674c;
            case 0x266750u: goto label_266750;
            case 0x266754u: goto label_266754;
            case 0x266758u: goto label_266758;
            case 0x26675Cu: goto label_26675c;
            case 0x266760u: goto label_266760;
            case 0x266764u: goto label_266764;
            case 0x266768u: goto label_266768;
            case 0x26676Cu: goto label_26676c;
            case 0x266770u: goto label_266770;
            case 0x266774u: goto label_266774;
            case 0x266778u: goto label_266778;
            case 0x26677Cu: goto label_26677c;
            case 0x266780u: goto label_266780;
            case 0x266784u: goto label_266784;
            case 0x266788u: goto label_266788;
            case 0x26678Cu: goto label_26678c;
            case 0x266790u: goto label_266790;
            case 0x266794u: goto label_266794;
            case 0x266798u: goto label_266798;
            case 0x26679Cu: goto label_26679c;
            case 0x2667A0u: goto label_2667a0;
            case 0x2667A4u: goto label_2667a4;
            case 0x2667A8u: goto label_2667a8;
            case 0x2667ACu: goto label_2667ac;
            case 0x2667B0u: goto label_2667b0;
            case 0x2667B4u: goto label_2667b4;
            case 0x2667B8u: goto label_2667b8;
            case 0x2667BCu: goto label_2667bc;
            case 0x2667C0u: goto label_2667c0;
            case 0x2667C4u: goto label_2667c4;
            case 0x2667C8u: goto label_2667c8;
            case 0x2667CCu: goto label_2667cc;
            case 0x2667D0u: goto label_2667d0;
            case 0x2667D4u: goto label_2667d4;
            case 0x2667D8u: goto label_2667d8;
            case 0x2667DCu: goto label_2667dc;
            case 0x2667E0u: goto label_2667e0;
            case 0x2667E4u: goto label_2667e4;
            case 0x2667E8u: goto label_2667e8;
            case 0x2667ECu: goto label_2667ec;
            case 0x2667F0u: goto label_2667f0;
            case 0x2667F4u: goto label_2667f4;
            case 0x2667F8u: goto label_2667f8;
            case 0x2667FCu: goto label_2667fc;
            case 0x266800u: goto label_266800;
            case 0x266804u: goto label_266804;
            case 0x266808u: goto label_266808;
            case 0x26680Cu: goto label_26680c;
            case 0x266810u: goto label_266810;
            case 0x266814u: goto label_266814;
            case 0x266818u: goto label_266818;
            case 0x26681Cu: goto label_26681c;
            case 0x266820u: goto label_266820;
            case 0x266824u: goto label_266824;
            case 0x266828u: goto label_266828;
            case 0x26682Cu: goto label_26682c;
            case 0x266830u: goto label_266830;
            case 0x266834u: goto label_266834;
            case 0x266838u: goto label_266838;
            case 0x26683Cu: goto label_26683c;
            case 0x266840u: goto label_266840;
            case 0x266844u: goto label_266844;
            case 0x266848u: goto label_266848;
            case 0x26684Cu: goto label_26684c;
            case 0x266850u: goto label_266850;
            case 0x266854u: goto label_266854;
            case 0x266858u: goto label_266858;
            case 0x26685Cu: goto label_26685c;
            case 0x266860u: goto label_266860;
            case 0x266864u: goto label_266864;
            case 0x266868u: goto label_266868;
            case 0x26686Cu: goto label_26686c;
            case 0x266870u: goto label_266870;
            case 0x266874u: goto label_266874;
            case 0x266878u: goto label_266878;
            case 0x26687Cu: goto label_26687c;
            case 0x266880u: goto label_266880;
            case 0x266884u: goto label_266884;
            case 0x266888u: goto label_266888;
            case 0x26688Cu: goto label_26688c;
            case 0x266890u: goto label_266890;
            case 0x266894u: goto label_266894;
            case 0x266898u: goto label_266898;
            case 0x26689Cu: goto label_26689c;
            case 0x2668A0u: goto label_2668a0;
            case 0x2668A4u: goto label_2668a4;
            case 0x2668A8u: goto label_2668a8;
            case 0x2668ACu: goto label_2668ac;
            case 0x2668B0u: goto label_2668b0;
            case 0x2668B4u: goto label_2668b4;
            case 0x2668B8u: goto label_2668b8;
            case 0x2668BCu: goto label_2668bc;
            case 0x2668C0u: goto label_2668c0;
            case 0x2668C4u: goto label_2668c4;
            case 0x2668C8u: goto label_2668c8;
            case 0x2668CCu: goto label_2668cc;
            case 0x2668D0u: goto label_2668d0;
            case 0x2668D4u: goto label_2668d4;
            case 0x2668D8u: goto label_2668d8;
            case 0x2668DCu: goto label_2668dc;
            case 0x2668E0u: goto label_2668e0;
            case 0x2668E4u: goto label_2668e4;
            case 0x2668E8u: goto label_2668e8;
            case 0x2668ECu: goto label_2668ec;
            case 0x2668F0u: goto label_2668f0;
            case 0x2668F4u: goto label_2668f4;
            case 0x2668F8u: goto label_2668f8;
            case 0x2668FCu: goto label_2668fc;
            case 0x266900u: goto label_266900;
            case 0x266904u: goto label_266904;
            case 0x266908u: goto label_266908;
            case 0x26690Cu: goto label_26690c;
            case 0x266910u: goto label_266910;
            case 0x266914u: goto label_266914;
            case 0x266918u: goto label_266918;
            case 0x26691Cu: goto label_26691c;
            case 0x266920u: goto label_266920;
            case 0x266924u: goto label_266924;
            case 0x266928u: goto label_266928;
            case 0x26692Cu: goto label_26692c;
            case 0x266930u: goto label_266930;
            case 0x266934u: goto label_266934;
            case 0x266938u: goto label_266938;
            case 0x26693Cu: goto label_26693c;
            case 0x266940u: goto label_266940;
            case 0x266944u: goto label_266944;
            case 0x266948u: goto label_266948;
            case 0x26694Cu: goto label_26694c;
            case 0x266950u: goto label_266950;
            case 0x266954u: goto label_266954;
            case 0x266958u: goto label_266958;
            case 0x26695Cu: goto label_26695c;
            case 0x266960u: goto label_266960;
            case 0x266964u: goto label_266964;
            case 0x266968u: goto label_266968;
            case 0x26696Cu: goto label_26696c;
            case 0x266970u: goto label_266970;
            case 0x266974u: goto label_266974;
            case 0x266978u: goto label_266978;
            case 0x26697Cu: goto label_26697c;
            case 0x266980u: goto label_266980;
            case 0x266984u: goto label_266984;
            case 0x266988u: goto label_266988;
            case 0x26698Cu: goto label_26698c;
            case 0x266990u: goto label_266990;
            case 0x266994u: goto label_266994;
            case 0x266998u: goto label_266998;
            case 0x26699Cu: goto label_26699c;
            case 0x2669A0u: goto label_2669a0;
            case 0x2669A4u: goto label_2669a4;
            case 0x2669A8u: goto label_2669a8;
            case 0x2669ACu: goto label_2669ac;
            case 0x2669B0u: goto label_2669b0;
            case 0x2669B4u: goto label_2669b4;
            case 0x2669B8u: goto label_2669b8;
            case 0x2669BCu: goto label_2669bc;
            case 0x2669C0u: goto label_2669c0;
            case 0x2669C4u: goto label_2669c4;
            case 0x2669C8u: goto label_2669c8;
            case 0x2669CCu: goto label_2669cc;
            case 0x2669D0u: goto label_2669d0;
            case 0x2669D4u: goto label_2669d4;
            case 0x2669D8u: goto label_2669d8;
            case 0x2669DCu: goto label_2669dc;
            case 0x2669E0u: goto label_2669e0;
            case 0x2669E4u: goto label_2669e4;
            case 0x2669E8u: goto label_2669e8;
            case 0x2669ECu: goto label_2669ec;
            case 0x2669F0u: goto label_2669f0;
            case 0x2669F4u: goto label_2669f4;
            case 0x2669F8u: goto label_2669f8;
            case 0x2669FCu: goto label_2669fc;
            case 0x266A00u: goto label_266a00;
            case 0x266A04u: goto label_266a04;
            case 0x266A08u: goto label_266a08;
            case 0x266A0Cu: goto label_266a0c;
            case 0x266A10u: goto label_266a10;
            case 0x266A14u: goto label_266a14;
            case 0x266A18u: goto label_266a18;
            case 0x266A1Cu: goto label_266a1c;
            case 0x266A20u: goto label_266a20;
            case 0x266A24u: goto label_266a24;
            case 0x266A28u: goto label_266a28;
            case 0x266A2Cu: goto label_266a2c;
            case 0x266A30u: goto label_266a30;
            case 0x266A34u: goto label_266a34;
            case 0x266A38u: goto label_266a38;
            case 0x266A3Cu: goto label_266a3c;
            case 0x266A40u: goto label_266a40;
            case 0x266A44u: goto label_266a44;
            case 0x266A48u: goto label_266a48;
            case 0x266A4Cu: goto label_266a4c;
            case 0x266A50u: goto label_266a50;
            case 0x266A54u: goto label_266a54;
            case 0x266A58u: goto label_266a58;
            case 0x266A5Cu: goto label_266a5c;
            case 0x266A60u: goto label_266a60;
            case 0x266A64u: goto label_266a64;
            case 0x266A68u: goto label_266a68;
            case 0x266A6Cu: goto label_266a6c;
            case 0x266A70u: goto label_266a70;
            case 0x266A74u: goto label_266a74;
            case 0x266A78u: goto label_266a78;
            case 0x266A7Cu: goto label_266a7c;
            case 0x266A80u: goto label_266a80;
            case 0x266A84u: goto label_266a84;
            case 0x266A88u: goto label_266a88;
            case 0x266A8Cu: goto label_266a8c;
            case 0x266A90u: goto label_266a90;
            case 0x266A94u: goto label_266a94;
            case 0x266A98u: goto label_266a98;
            case 0x266A9Cu: goto label_266a9c;
            case 0x266AA0u: goto label_266aa0;
            case 0x266AA4u: goto label_266aa4;
            case 0x266AA8u: goto label_266aa8;
            case 0x266AACu: goto label_266aac;
            case 0x266AB0u: goto label_266ab0;
            case 0x266AB4u: goto label_266ab4;
            case 0x266AB8u: goto label_266ab8;
            case 0x266ABCu: goto label_266abc;
            case 0x266AC0u: goto label_266ac0;
            case 0x266AC4u: goto label_266ac4;
            case 0x266AC8u: goto label_266ac8;
            case 0x266ACCu: goto label_266acc;
            case 0x266AD0u: goto label_266ad0;
            case 0x266AD4u: goto label_266ad4;
            case 0x266AD8u: goto label_266ad8;
            case 0x266ADCu: goto label_266adc;
            case 0x266AE0u: goto label_266ae0;
            case 0x266AE4u: goto label_266ae4;
            case 0x266AE8u: goto label_266ae8;
            case 0x266AECu: goto label_266aec;
            case 0x266AF0u: goto label_266af0;
            case 0x266AF4u: goto label_266af4;
            case 0x266AF8u: goto label_266af8;
            case 0x266AFCu: goto label_266afc;
            case 0x266B00u: goto label_266b00;
            case 0x266B04u: goto label_266b04;
            case 0x266B08u: goto label_266b08;
            case 0x266B0Cu: goto label_266b0c;
            case 0x266B10u: goto label_266b10;
            case 0x266B14u: goto label_266b14;
            case 0x266B18u: goto label_266b18;
            case 0x266B1Cu: goto label_266b1c;
            case 0x266B20u: goto label_266b20;
            case 0x266B24u: goto label_266b24;
            case 0x266B28u: goto label_266b28;
            case 0x266B2Cu: goto label_266b2c;
            case 0x266B30u: goto label_266b30;
            case 0x266B34u: goto label_266b34;
            case 0x266B38u: goto label_266b38;
            case 0x266B3Cu: goto label_266b3c;
            case 0x266B40u: goto label_266b40;
            case 0x266B44u: goto label_266b44;
            case 0x266B48u: goto label_266b48;
            case 0x266B4Cu: goto label_266b4c;
            case 0x266B50u: goto label_266b50;
            case 0x266B54u: goto label_266b54;
            case 0x266B58u: goto label_266b58;
            case 0x266B5Cu: goto label_266b5c;
            case 0x266B60u: goto label_266b60;
            case 0x266B64u: goto label_266b64;
            case 0x266B68u: goto label_266b68;
            case 0x266B6Cu: goto label_266b6c;
            case 0x266B70u: goto label_266b70;
            case 0x266B74u: goto label_266b74;
            case 0x266B78u: goto label_266b78;
            case 0x266B7Cu: goto label_266b7c;
            case 0x266B80u: goto label_266b80;
            case 0x266B84u: goto label_266b84;
            case 0x266B88u: goto label_266b88;
            case 0x266B8Cu: goto label_266b8c;
            case 0x266B90u: goto label_266b90;
            case 0x266B94u: goto label_266b94;
            case 0x266B98u: goto label_266b98;
            case 0x266B9Cu: goto label_266b9c;
            case 0x266BA0u: goto label_266ba0;
            case 0x266BA4u: goto label_266ba4;
            case 0x266BA8u: goto label_266ba8;
            case 0x266BACu: goto label_266bac;
            case 0x266BB0u: goto label_266bb0;
            case 0x266BB4u: goto label_266bb4;
            case 0x266BB8u: goto label_266bb8;
            case 0x266BBCu: goto label_266bbc;
            case 0x266BC0u: goto label_266bc0;
            case 0x266BC4u: goto label_266bc4;
            case 0x266BC8u: goto label_266bc8;
            case 0x266BCCu: goto label_266bcc;
            case 0x266BD0u: goto label_266bd0;
            case 0x266BD4u: goto label_266bd4;
            case 0x266BD8u: goto label_266bd8;
            case 0x266BDCu: goto label_266bdc;
            case 0x266BE0u: goto label_266be0;
            case 0x266BE4u: goto label_266be4;
            case 0x266BE8u: goto label_266be8;
            case 0x266BECu: goto label_266bec;
            case 0x266BF0u: goto label_266bf0;
            case 0x266BF4u: goto label_266bf4;
            case 0x266BF8u: goto label_266bf8;
            case 0x266BFCu: goto label_266bfc;
            case 0x266C00u: goto label_266c00;
            case 0x266C04u: goto label_266c04;
            case 0x266C08u: goto label_266c08;
            case 0x266C0Cu: goto label_266c0c;
            case 0x266C10u: goto label_266c10;
            case 0x266C14u: goto label_266c14;
            case 0x266C18u: goto label_266c18;
            case 0x266C1Cu: goto label_266c1c;
            case 0x266C20u: goto label_266c20;
            case 0x266C24u: goto label_266c24;
            case 0x266C28u: goto label_266c28;
            case 0x266C2Cu: goto label_266c2c;
            case 0x266C30u: goto label_266c30;
            case 0x266C34u: goto label_266c34;
            case 0x266C38u: goto label_266c38;
            case 0x266C3Cu: goto label_266c3c;
            case 0x266C40u: goto label_266c40;
            case 0x266C44u: goto label_266c44;
            case 0x266C48u: goto label_266c48;
            case 0x266C4Cu: goto label_266c4c;
            case 0x266C50u: goto label_266c50;
            case 0x266C54u: goto label_266c54;
            case 0x266C58u: goto label_266c58;
            case 0x266C5Cu: goto label_266c5c;
            case 0x266C60u: goto label_266c60;
            case 0x266C64u: goto label_266c64;
            case 0x266C68u: goto label_266c68;
            case 0x266C6Cu: goto label_266c6c;
            case 0x266C70u: goto label_266c70;
            case 0x266C74u: goto label_266c74;
            case 0x266C78u: goto label_266c78;
            case 0x266C7Cu: goto label_266c7c;
            case 0x266C80u: goto label_266c80;
            case 0x266C84u: goto label_266c84;
            case 0x266C88u: goto label_266c88;
            case 0x266C8Cu: goto label_266c8c;
            case 0x266C90u: goto label_266c90;
            case 0x266C94u: goto label_266c94;
            case 0x266C98u: goto label_266c98;
            case 0x266C9Cu: goto label_266c9c;
            case 0x266CA0u: goto label_266ca0;
            case 0x266CA4u: goto label_266ca4;
            case 0x266CA8u: goto label_266ca8;
            case 0x266CACu: goto label_266cac;
            case 0x266CB0u: goto label_266cb0;
            case 0x266CB4u: goto label_266cb4;
            case 0x266CB8u: goto label_266cb8;
            case 0x266CBCu: goto label_266cbc;
            case 0x266CC0u: goto label_266cc0;
            case 0x266CC4u: goto label_266cc4;
            case 0x266CC8u: goto label_266cc8;
            case 0x266CCCu: goto label_266ccc;
            case 0x266CD0u: goto label_266cd0;
            case 0x266CD4u: goto label_266cd4;
            case 0x266CD8u: goto label_266cd8;
            case 0x266CDCu: goto label_266cdc;
            case 0x266CE0u: goto label_266ce0;
            case 0x266CE4u: goto label_266ce4;
            case 0x266CE8u: goto label_266ce8;
            case 0x266CECu: goto label_266cec;
            case 0x266CF0u: goto label_266cf0;
            case 0x266CF4u: goto label_266cf4;
            case 0x266CF8u: goto label_266cf8;
            case 0x266CFCu: goto label_266cfc;
            case 0x266D00u: goto label_266d00;
            case 0x266D04u: goto label_266d04;
            case 0x266D08u: goto label_266d08;
            case 0x266D0Cu: goto label_266d0c;
            case 0x266D10u: goto label_266d10;
            case 0x266D14u: goto label_266d14;
            case 0x266D18u: goto label_266d18;
            case 0x266D1Cu: goto label_266d1c;
            case 0x266D20u: goto label_266d20;
            case 0x266D24u: goto label_266d24;
            case 0x266D28u: goto label_266d28;
            case 0x266D2Cu: goto label_266d2c;
            case 0x266D30u: goto label_266d30;
            case 0x266D34u: goto label_266d34;
            case 0x266D38u: goto label_266d38;
            case 0x266D3Cu: goto label_266d3c;
            case 0x266D40u: goto label_266d40;
            case 0x266D44u: goto label_266d44;
            case 0x266D48u: goto label_266d48;
            case 0x266D4Cu: goto label_266d4c;
            case 0x266D50u: goto label_266d50;
            case 0x266D54u: goto label_266d54;
            case 0x266D58u: goto label_266d58;
            case 0x266D5Cu: goto label_266d5c;
            case 0x266D60u: goto label_266d60;
            case 0x266D64u: goto label_266d64;
            case 0x266D68u: goto label_266d68;
            case 0x266D6Cu: goto label_266d6c;
            case 0x266D70u: goto label_266d70;
            case 0x266D74u: goto label_266d74;
            case 0x266D78u: goto label_266d78;
            case 0x266D7Cu: goto label_266d7c;
            case 0x266D80u: goto label_266d80;
            case 0x266D84u: goto label_266d84;
            case 0x266D88u: goto label_266d88;
            case 0x266D8Cu: goto label_266d8c;
            case 0x266D90u: goto label_266d90;
            case 0x266D94u: goto label_266d94;
            case 0x266D98u: goto label_266d98;
            case 0x266D9Cu: goto label_266d9c;
            case 0x266DA0u: goto label_266da0;
            case 0x266DA4u: goto label_266da4;
            case 0x266DA8u: goto label_266da8;
            case 0x266DACu: goto label_266dac;
            case 0x266DB0u: goto label_266db0;
            case 0x266DB4u: goto label_266db4;
            case 0x266DB8u: goto label_266db8;
            case 0x266DBCu: goto label_266dbc;
            case 0x266DC0u: goto label_266dc0;
            case 0x266DC4u: goto label_266dc4;
            case 0x266DC8u: goto label_266dc8;
            case 0x266DCCu: goto label_266dcc;
            case 0x266DD0u: goto label_266dd0;
            case 0x266DD4u: goto label_266dd4;
            case 0x266DD8u: goto label_266dd8;
            case 0x266DDCu: goto label_266ddc;
            case 0x266DE0u: goto label_266de0;
            case 0x266DE4u: goto label_266de4;
            case 0x266DE8u: goto label_266de8;
            case 0x266DECu: goto label_266dec;
            case 0x266DF0u: goto label_266df0;
            case 0x266DF4u: goto label_266df4;
            case 0x266DF8u: goto label_266df8;
            case 0x266DFCu: goto label_266dfc;
            case 0x266E00u: goto label_266e00;
            case 0x266E04u: goto label_266e04;
            case 0x266E08u: goto label_266e08;
            case 0x266E0Cu: goto label_266e0c;
            case 0x266E10u: goto label_266e10;
            case 0x266E14u: goto label_266e14;
            case 0x266E18u: goto label_266e18;
            case 0x266E1Cu: goto label_266e1c;
            case 0x266E20u: goto label_266e20;
            case 0x266E24u: goto label_266e24;
            case 0x266E28u: goto label_266e28;
            case 0x266E2Cu: goto label_266e2c;
            case 0x266E30u: goto label_266e30;
            case 0x266E34u: goto label_266e34;
            case 0x266E38u: goto label_266e38;
            case 0x266E3Cu: goto label_266e3c;
            case 0x266E40u: goto label_266e40;
            case 0x266E44u: goto label_266e44;
            case 0x266E48u: goto label_266e48;
            case 0x266E4Cu: goto label_266e4c;
            case 0x266E50u: goto label_266e50;
            case 0x266E54u: goto label_266e54;
            case 0x266E58u: goto label_266e58;
            case 0x266E5Cu: goto label_266e5c;
            case 0x266E60u: goto label_266e60;
            case 0x266E64u: goto label_266e64;
            case 0x266E68u: goto label_266e68;
            case 0x266E6Cu: goto label_266e6c;
            case 0x266E70u: goto label_266e70;
            case 0x266E74u: goto label_266e74;
            case 0x266E78u: goto label_266e78;
            case 0x266E7Cu: goto label_266e7c;
            case 0x266E80u: goto label_266e80;
            case 0x266E84u: goto label_266e84;
            case 0x266E88u: goto label_266e88;
            case 0x266E8Cu: goto label_266e8c;
            case 0x266E90u: goto label_266e90;
            case 0x266E94u: goto label_266e94;
            case 0x266E98u: goto label_266e98;
            case 0x266E9Cu: goto label_266e9c;
            case 0x266EA0u: goto label_266ea0;
            case 0x266EA4u: goto label_266ea4;
            case 0x266EA8u: goto label_266ea8;
            case 0x266EACu: goto label_266eac;
            case 0x266EB0u: goto label_266eb0;
            case 0x266EB4u: goto label_266eb4;
            case 0x266EB8u: goto label_266eb8;
            case 0x266EBCu: goto label_266ebc;
            case 0x266EC0u: goto label_266ec0;
            case 0x266EC4u: goto label_266ec4;
            case 0x266EC8u: goto label_266ec8;
            case 0x266ECCu: goto label_266ecc;
            case 0x266ED0u: goto label_266ed0;
            case 0x266ED4u: goto label_266ed4;
            case 0x266ED8u: goto label_266ed8;
            case 0x266EDCu: goto label_266edc;
            case 0x266EE0u: goto label_266ee0;
            case 0x266EE4u: goto label_266ee4;
            case 0x266EE8u: goto label_266ee8;
            case 0x266EECu: goto label_266eec;
            case 0x266EF0u: goto label_266ef0;
            case 0x266EF4u: goto label_266ef4;
            case 0x266EF8u: goto label_266ef8;
            case 0x266EFCu: goto label_266efc;
            case 0x266F00u: goto label_266f00;
            case 0x266F04u: goto label_266f04;
            case 0x266F08u: goto label_266f08;
            case 0x266F0Cu: goto label_266f0c;
            case 0x266F10u: goto label_266f10;
            case 0x266F14u: goto label_266f14;
            case 0x266F18u: goto label_266f18;
            case 0x266F1Cu: goto label_266f1c;
            case 0x266F20u: goto label_266f20;
            case 0x266F24u: goto label_266f24;
            case 0x266F28u: goto label_266f28;
            case 0x266F2Cu: goto label_266f2c;
            case 0x266F30u: goto label_266f30;
            case 0x266F34u: goto label_266f34;
            case 0x266F38u: goto label_266f38;
            case 0x266F3Cu: goto label_266f3c;
            case 0x266F40u: goto label_266f40;
            case 0x266F44u: goto label_266f44;
            case 0x266F48u: goto label_266f48;
            case 0x266F4Cu: goto label_266f4c;
            case 0x266F50u: goto label_266f50;
            case 0x266F54u: goto label_266f54;
            case 0x266F58u: goto label_266f58;
            case 0x266F5Cu: goto label_266f5c;
            case 0x266F60u: goto label_266f60;
            case 0x266F64u: goto label_266f64;
            case 0x266F68u: goto label_266f68;
            case 0x266F6Cu: goto label_266f6c;
            case 0x266F70u: goto label_266f70;
            case 0x266F74u: goto label_266f74;
            case 0x266F78u: goto label_266f78;
            case 0x266F7Cu: goto label_266f7c;
            case 0x266F80u: goto label_266f80;
            case 0x266F84u: goto label_266f84;
            case 0x266F88u: goto label_266f88;
            case 0x266F8Cu: goto label_266f8c;
            case 0x266F90u: goto label_266f90;
            case 0x266F94u: goto label_266f94;
            case 0x266F98u: goto label_266f98;
            case 0x266F9Cu: goto label_266f9c;
            case 0x266FA0u: goto label_266fa0;
            case 0x266FA4u: goto label_266fa4;
            case 0x266FA8u: goto label_266fa8;
            case 0x266FACu: goto label_266fac;
            case 0x266FB0u: goto label_266fb0;
            case 0x266FB4u: goto label_266fb4;
            case 0x266FB8u: goto label_266fb8;
            case 0x266FBCu: goto label_266fbc;
            case 0x266FC0u: goto label_266fc0;
            case 0x266FC4u: goto label_266fc4;
            case 0x266FC8u: goto label_266fc8;
            case 0x266FCCu: goto label_266fcc;
            case 0x266FD0u: goto label_266fd0;
            case 0x266FD4u: goto label_266fd4;
            case 0x266FD8u: goto label_266fd8;
            case 0x266FDCu: goto label_266fdc;
            case 0x266FE0u: goto label_266fe0;
            case 0x266FE4u: goto label_266fe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x266A18u;
label_266a18:
    // 0x266a18: 0x24040012
    ctx->pc = 0x266a18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
label_266a1c:
    // 0x266a1c: 0x2665fff9
    ctx->pc = 0x266a1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266a20:
    // 0x266a20: 0x3c06003b
    ctx->pc = 0x266a20u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266a24:
    // 0x266a24: 0xc0b47da
label_266a28:
    if (ctx->pc == 0x266A28u) {
        ctx->pc = 0x266A28u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943520));
        ctx->pc = 0x266A2Cu;
        goto label_266a2c;
    }
    ctx->pc = 0x266A24u;
    SET_GPR_U32(ctx, 31, 0x266A2Cu);
    ctx->pc = 0x266A28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943520));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266A2Cu; }
    }
    if (ctx->pc != 0x266A2Cu) { return; }
    ctx->pc = 0x266A2Cu;
label_266a2c:
    // 0x266a2c: 0x10000050
label_266a30:
    if (ctx->pc == 0x266A30u) {
        ctx->pc = 0x266A30u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x266A34u;
        goto label_266a34;
    }
    ctx->pc = 0x266A2Cu;
    {
        const bool branch_taken_0x266a2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266A30u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x266a2c) {
            ctx->pc = 0x266B70u;
            goto label_266b70;
        }
    }
    ctx->pc = 0x266A34u;
label_266a34:
    // 0x266a34: 0x24040012
    ctx->pc = 0x266a34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
label_266a38:
    // 0x266a38: 0x2665fff9
    ctx->pc = 0x266a38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266a3c:
    // 0x266a3c: 0x3c06003b
    ctx->pc = 0x266a3cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266a40:
    // 0x266a40: 0xc0b47da
label_266a44:
    if (ctx->pc == 0x266A44u) {
        ctx->pc = 0x266A44u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943568));
        ctx->pc = 0x266A48u;
        goto label_266a48;
    }
    ctx->pc = 0x266A40u;
    SET_GPR_U32(ctx, 31, 0x266A48u);
    ctx->pc = 0x266A44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943568));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266A48u; }
    }
    if (ctx->pc != 0x266A48u) { return; }
    ctx->pc = 0x266A48u;
label_266a48:
    // 0x266a48: 0x10000049
label_266a4c:
    if (ctx->pc == 0x266A4Cu) {
        ctx->pc = 0x266A4Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x266A50u;
        goto label_266a50;
    }
    ctx->pc = 0x266A48u;
    {
        const bool branch_taken_0x266a48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266A4Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x266a48) {
            ctx->pc = 0x266B70u;
            goto label_266b70;
        }
    }
    ctx->pc = 0x266A50u;
label_266a50:
    // 0x266a50: 0x24040012
    ctx->pc = 0x266a50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
label_266a54:
    // 0x266a54: 0x2665fff9
    ctx->pc = 0x266a54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266a58:
    // 0x266a58: 0x3c06003b
    ctx->pc = 0x266a58u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266a5c:
    // 0x266a5c: 0xc0b47da
label_266a60:
    if (ctx->pc == 0x266A60u) {
        ctx->pc = 0x266A60u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943584));
        ctx->pc = 0x266A64u;
        goto label_266a64;
    }
    ctx->pc = 0x266A5Cu;
    SET_GPR_U32(ctx, 31, 0x266A64u);
    ctx->pc = 0x266A60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943584));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266A64u; }
    }
    if (ctx->pc != 0x266A64u) { return; }
    ctx->pc = 0x266A64u;
label_266a64:
    // 0x266a64: 0x10000042
label_266a68:
    if (ctx->pc == 0x266A68u) {
        ctx->pc = 0x266A68u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x266A6Cu;
        goto label_266a6c;
    }
    ctx->pc = 0x266A64u;
    {
        const bool branch_taken_0x266a64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266A68u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x266a64) {
            ctx->pc = 0x266B70u;
            goto label_266b70;
        }
    }
    ctx->pc = 0x266A6Cu;
label_266a6c:
    // 0x266a6c: 0x24040012
    ctx->pc = 0x266a6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
label_266a70:
    // 0x266a70: 0x2665fff9
    ctx->pc = 0x266a70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266a74:
    // 0x266a74: 0x3c06003b
    ctx->pc = 0x266a74u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266a78:
    // 0x266a78: 0xc0b47da
label_266a7c:
    if (ctx->pc == 0x266A7Cu) {
        ctx->pc = 0x266A7Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943600));
        ctx->pc = 0x266A80u;
        goto label_266a80;
    }
    ctx->pc = 0x266A78u;
    SET_GPR_U32(ctx, 31, 0x266A80u);
    ctx->pc = 0x266A7Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943600));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266A80u; }
    }
    if (ctx->pc != 0x266A80u) { return; }
    ctx->pc = 0x266A80u;
label_266a80:
    // 0x266a80: 0x1000003b
label_266a84:
    if (ctx->pc == 0x266A84u) {
        ctx->pc = 0x266A84u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x266A88u;
        goto label_266a88;
    }
    ctx->pc = 0x266A80u;
    {
        const bool branch_taken_0x266a80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266A84u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x266a80) {
            ctx->pc = 0x266B70u;
            goto label_266b70;
        }
    }
    ctx->pc = 0x266A88u;
label_266a88:
    // 0x266a88: 0x24040012
    ctx->pc = 0x266a88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
label_266a8c:
    // 0x266a8c: 0x2665fff9
    ctx->pc = 0x266a8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266a90:
    // 0x266a90: 0x3c06003b
    ctx->pc = 0x266a90u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266a94:
    // 0x266a94: 0xc0b47da
label_266a98:
    if (ctx->pc == 0x266A98u) {
        ctx->pc = 0x266A98u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943616));
        ctx->pc = 0x266A9Cu;
        goto label_266a9c;
    }
    ctx->pc = 0x266A94u;
    SET_GPR_U32(ctx, 31, 0x266A9Cu);
    ctx->pc = 0x266A98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943616));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266A9Cu; }
    }
    if (ctx->pc != 0x266A9Cu) { return; }
    ctx->pc = 0x266A9Cu;
label_266a9c:
    // 0x266a9c: 0x10000034
label_266aa0:
    if (ctx->pc == 0x266AA0u) {
        ctx->pc = 0x266AA0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x266AA4u;
        goto label_266aa4;
    }
    ctx->pc = 0x266A9Cu;
    {
        const bool branch_taken_0x266a9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266AA0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x266a9c) {
            ctx->pc = 0x266B70u;
            goto label_266b70;
        }
    }
    ctx->pc = 0x266AA4u;
label_266aa4:
    // 0x266aa4: 0x24040012
    ctx->pc = 0x266aa4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
label_266aa8:
    // 0x266aa8: 0x2665fff9
    ctx->pc = 0x266aa8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266aac:
    // 0x266aac: 0x3c06003b
    ctx->pc = 0x266aacu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266ab0:
    // 0x266ab0: 0x24c6a390
    ctx->pc = 0x266ab0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943632));
label_266ab4:
    // 0x266ab4: 0x1000002b
label_266ab8:
    if (ctx->pc == 0x266AB8u) {
        ctx->pc = 0x266AB8u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 268)));
        ctx->pc = 0x266ABCu;
        goto label_266abc;
    }
    ctx->pc = 0x266AB4u;
    {
        const bool branch_taken_0x266ab4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266AB8u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 268)));
        if (branch_taken_0x266ab4) {
            ctx->pc = 0x266B64u;
            goto label_266b64;
        }
    }
    ctx->pc = 0x266ABCu;
label_266abc:
    // 0x266abc: 0x8e870110
    ctx->pc = 0x266abcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_266ac0:
    // 0x266ac0: 0x241003b0
    ctx->pc = 0x266ac0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 944));
label_266ac4:
    // 0x266ac4: 0xf08018
    ctx->pc = 0x266ac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_266ac8:
    // 0x266ac8: 0x3c020033
    ctx->pc = 0x266ac8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_266acc:
    // 0x266acc: 0x2442dfd0
    ctx->pc = 0x266accu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
label_266ad0:
    // 0x266ad0: 0x2028021
    ctx->pc = 0x266ad0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_266ad4:
    // 0x266ad4: 0x24040012
    ctx->pc = 0x266ad4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
label_266ad8:
    // 0x266ad8: 0x2665fff9
    ctx->pc = 0x266ad8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266adc:
    // 0x266adc: 0x3c06003b
    ctx->pc = 0x266adcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266ae0:
    // 0x266ae0: 0xc0b47da
label_266ae4:
    if (ctx->pc == 0x266AE4u) {
        ctx->pc = 0x266AE4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943648));
        ctx->pc = 0x266AE8u;
        goto label_266ae8;
    }
    ctx->pc = 0x266AE0u;
    SET_GPR_U32(ctx, 31, 0x266AE8u);
    ctx->pc = 0x266AE4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943648));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266AE8u; }
    }
    if (ctx->pc != 0x266AE8u) { return; }
    ctx->pc = 0x266AE8u;
label_266ae8:
    // 0x266ae8: 0x3c020033
    ctx->pc = 0x266ae8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_266aec:
    // 0x266aec: 0x2442d440
    ctx->pc = 0x266aecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956096));
label_266af0:
    // 0x266af0: 0x8e030000
    ctx->pc = 0x266af0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_266af4:
    // 0x266af4: 0x31880
    ctx->pc = 0x266af4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_266af8:
    // 0x266af8: 0x621821
    ctx->pc = 0x266af8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266afc:
    // 0x266afc: 0x2404000e
    ctx->pc = 0x266afcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_266b00:
    // 0x266b00: 0x2665fffa
    ctx->pc = 0x266b00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967290));
label_266b04:
    // 0x266b04: 0x3c06003b
    ctx->pc = 0x266b04u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266b08:
    // 0x266b08: 0x24c6a3b0
    ctx->pc = 0x266b08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943664));
label_266b0c:
    // 0x266b0c: 0x8c670000
    ctx->pc = 0x266b0cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_266b10:
    // 0x266b10: 0xc0b47da
label_266b14:
    if (ctx->pc == 0x266B14u) {
        ctx->pc = 0x266B14u;
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->pc = 0x266B18u;
        goto label_266b18;
    }
    ctx->pc = 0x266B10u;
    SET_GPR_U32(ctx, 31, 0x266B18u);
    ctx->pc = 0x266B14u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B18u; }
    }
    if (ctx->pc != 0x266B18u) { return; }
    ctx->pc = 0x266B18u;
label_266b18:
    // 0x266b18: 0x1000011b
label_266b1c:
    if (ctx->pc == 0x266B1Cu) {
        ctx->pc = 0x266B1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x266B20u;
        goto label_266b20;
    }
    ctx->pc = 0x266B18u;
    {
        const bool branch_taken_0x266b18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266B1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x266b18) {
            ctx->pc = 0x266F88u;
            goto label_266f88;
        }
    }
    ctx->pc = 0x266B20u;
label_266b20:
    // 0x266b20: 0x24040012
    ctx->pc = 0x266b20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
label_266b24:
    // 0x266b24: 0x2665fff9
    ctx->pc = 0x266b24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266b28:
    // 0x266b28: 0x3c06003b
    ctx->pc = 0x266b28u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266b2c:
    // 0x266b2c: 0x24c6a3d0
    ctx->pc = 0x266b2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943696));
label_266b30:
    // 0x266b30: 0x1000000c
label_266b34:
    if (ctx->pc == 0x266B34u) {
        ctx->pc = 0x266B34u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 280)));
        ctx->pc = 0x266B38u;
        goto label_266b38;
    }
    ctx->pc = 0x266B30u;
    {
        const bool branch_taken_0x266b30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266B34u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 280)));
        if (branch_taken_0x266b30) {
            ctx->pc = 0x266B64u;
            goto label_266b64;
        }
    }
    ctx->pc = 0x266B38u;
label_266b38:
    // 0x266b38: 0x24040012
    ctx->pc = 0x266b38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
label_266b3c:
    // 0x266b3c: 0x2665fff9
    ctx->pc = 0x266b3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266b40:
    // 0x266b40: 0x3c06003b
    ctx->pc = 0x266b40u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266b44:
    // 0x266b44: 0x24c6a3e0
    ctx->pc = 0x266b44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943712));
label_266b48:
    // 0x266b48: 0x10000006
label_266b4c:
    if (ctx->pc == 0x266B4Cu) {
        ctx->pc = 0x266B4Cu;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->pc = 0x266B50u;
        goto label_266b50;
    }
    ctx->pc = 0x266B48u;
    {
        const bool branch_taken_0x266b48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266B4Cu;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 284)));
        if (branch_taken_0x266b48) {
            ctx->pc = 0x266B64u;
            goto label_266b64;
        }
    }
    ctx->pc = 0x266B50u;
label_266b50:
    // 0x266b50: 0x24040012
    ctx->pc = 0x266b50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
label_266b54:
    // 0x266b54: 0x2665fff9
    ctx->pc = 0x266b54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266b58:
    // 0x266b58: 0x3c06003b
    ctx->pc = 0x266b58u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266b5c:
    // 0x266b5c: 0x24c6a3f0
    ctx->pc = 0x266b5cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943728));
label_266b60:
    // 0x266b60: 0x8e870120
    ctx->pc = 0x266b60u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 288)));
label_266b64:
    // 0x266b64: 0xc0b47da
label_266b68:
    if (ctx->pc == 0x266B68u) {
        ctx->pc = 0x266B6Cu;
        goto label_266b6c;
    }
    ctx->pc = 0x266B64u;
    SET_GPR_U32(ctx, 31, 0x266B6Cu);
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B6Cu; }
    }
    if (ctx->pc != 0x266B6Cu) { return; }
    ctx->pc = 0x266B6Cu;
label_266b6c:
    // 0x266b6c: 0x2404000e
    ctx->pc = 0x266b6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_266b70:
    // 0x266b70: 0x2665fffa
    ctx->pc = 0x266b70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967290));
label_266b74:
    // 0x266b74: 0x3c06003b
    ctx->pc = 0x266b74u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266b78:
    // 0x266b78: 0xc0b47da
label_266b7c:
    if (ctx->pc == 0x266B7Cu) {
        ctx->pc = 0x266B7Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943536));
        ctx->pc = 0x266B80u;
        goto label_266b80;
    }
    ctx->pc = 0x266B78u;
    SET_GPR_U32(ctx, 31, 0x266B80u);
    ctx->pc = 0x266B7Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943536));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B80u; }
    }
    if (ctx->pc != 0x266B80u) { return; }
    ctx->pc = 0x266B80u;
label_266b80:
    // 0x266b80: 0x10000101
label_266b84:
    if (ctx->pc == 0x266B84u) {
        ctx->pc = 0x266B84u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x266B88u;
        goto label_266b88;
    }
    ctx->pc = 0x266B80u;
    {
        const bool branch_taken_0x266b80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266B84u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x266b80) {
            ctx->pc = 0x266F88u;
            goto label_266f88;
        }
    }
    ctx->pc = 0x266B88u;
label_266b88:
    // 0x266b88: 0x3c030034
    ctx->pc = 0x266b88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_266b8c:
    // 0x266b8c: 0x8e870114
    ctx->pc = 0x266b8cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 276)));
label_266b90:
    // 0x266b90: 0x24020110
    ctx->pc = 0x266b90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
label_266b94:
    // 0x266b94: 0xe21018
    ctx->pc = 0x266b94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_266b98:
    // 0x266b98: 0x8c63cd94
    ctx->pc = 0x266b98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294954388)));
label_266b9c:
    // 0x266b9c: 0x438021
    ctx->pc = 0x266b9cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_266ba0:
    // 0x266ba0: 0x24040012
    ctx->pc = 0x266ba0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
label_266ba4:
    // 0x266ba4: 0x2665fff9
    ctx->pc = 0x266ba4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266ba8:
    // 0x266ba8: 0x3c06003b
    ctx->pc = 0x266ba8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266bac:
    // 0x266bac: 0x24c6a400
    ctx->pc = 0x266bacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943744));
label_266bb0:
    // 0x266bb0: 0xc0b47da
label_266bb4:
    if (ctx->pc == 0x266BB4u) {
        ctx->pc = 0x266BB4u;
        SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->pc = 0x266BB8u;
        goto label_266bb8;
    }
    ctx->pc = 0x266BB0u;
    SET_GPR_U32(ctx, 31, 0x266BB8u);
    ctx->pc = 0x266BB4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 224)));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266BB8u; }
    }
    if (ctx->pc != 0x266BB8u) { return; }
    ctx->pc = 0x266BB8u;
label_266bb8:
    // 0x266bb8: 0x8e020000
    ctx->pc = 0x266bb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_266bbc:
    // 0x266bbc: 0x8c510000
    ctx->pc = 0x266bbcu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_266bc0:
    // 0x266bc0: 0x2402ffff
    ctx->pc = 0x266bc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_266bc4:
    // 0x266bc4: 0x51102a
    ctx->pc = 0x266bc4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
label_266bc8:
    // 0x266bc8: 0x2880a
    ctx->pc = 0x266bc8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
label_266bcc:
    // 0x266bcc: 0x26230001
    ctx->pc = 0x266bccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
label_266bd0:
    // 0x266bd0: 0x2c62000f
    ctx->pc = 0x266bd0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 15));
label_266bd4:
    // 0x266bd4: 0x104000cb
label_266bd8:
    if (ctx->pc == 0x266BD8u) {
        ctx->pc = 0x266BD8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x266BDCu;
        goto label_266bdc;
    }
    ctx->pc = 0x266BD4u;
    {
        const bool branch_taken_0x266bd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x266BD8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x266bd4) {
            ctx->pc = 0x266F04u;
            goto label_266f04;
        }
    }
    ctx->pc = 0x266BDCu;
label_266bdc:
    // 0x266bdc: 0x2442a5c0
    ctx->pc = 0x266bdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944192));
label_266be0:
    // 0x266be0: 0x31880
    ctx->pc = 0x266be0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_266be4:
    // 0x266be4: 0x621821
    ctx->pc = 0x266be4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266be8:
    // 0x266be8: 0x8c620000
    ctx->pc = 0x266be8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_266bec:
    // 0x266bec: 0x400008
label_266bf0:
    if (ctx->pc == 0x266BF0u) {
        ctx->pc = 0x266BF4u;
        goto label_266bf4;
    }
    ctx->pc = 0x266BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x266610u: goto label_266610;
            case 0x266614u: goto label_266614;
            case 0x266618u: goto label_266618;
            case 0x26661Cu: goto label_26661c;
            case 0x266620u: goto label_266620;
            case 0x266624u: goto label_266624;
            case 0x266628u: goto label_266628;
            case 0x26662Cu: goto label_26662c;
            case 0x266630u: goto label_266630;
            case 0x266634u: goto label_266634;
            case 0x266638u: goto label_266638;
            case 0x26663Cu: goto label_26663c;
            case 0x266640u: goto label_266640;
            case 0x266644u: goto label_266644;
            case 0x266648u: goto label_266648;
            case 0x26664Cu: goto label_26664c;
            case 0x266650u: goto label_266650;
            case 0x266654u: goto label_266654;
            case 0x266658u: goto label_266658;
            case 0x26665Cu: goto label_26665c;
            case 0x266660u: goto label_266660;
            case 0x266664u: goto label_266664;
            case 0x266668u: goto label_266668;
            case 0x26666Cu: goto label_26666c;
            case 0x266670u: goto label_266670;
            case 0x266674u: goto label_266674;
            case 0x266678u: goto label_266678;
            case 0x26667Cu: goto label_26667c;
            case 0x266680u: goto label_266680;
            case 0x266684u: goto label_266684;
            case 0x266688u: goto label_266688;
            case 0x26668Cu: goto label_26668c;
            case 0x266690u: goto label_266690;
            case 0x266694u: goto label_266694;
            case 0x266698u: goto label_266698;
            case 0x26669Cu: goto label_26669c;
            case 0x2666A0u: goto label_2666a0;
            case 0x2666A4u: goto label_2666a4;
            case 0x2666A8u: goto label_2666a8;
            case 0x2666ACu: goto label_2666ac;
            case 0x2666B0u: goto label_2666b0;
            case 0x2666B4u: goto label_2666b4;
            case 0x2666B8u: goto label_2666b8;
            case 0x2666BCu: goto label_2666bc;
            case 0x2666C0u: goto label_2666c0;
            case 0x2666C4u: goto label_2666c4;
            case 0x2666C8u: goto label_2666c8;
            case 0x2666CCu: goto label_2666cc;
            case 0x2666D0u: goto label_2666d0;
            case 0x2666D4u: goto label_2666d4;
            case 0x2666D8u: goto label_2666d8;
            case 0x2666DCu: goto label_2666dc;
            case 0x2666E0u: goto label_2666e0;
            case 0x2666E4u: goto label_2666e4;
            case 0x2666E8u: goto label_2666e8;
            case 0x2666ECu: goto label_2666ec;
            case 0x2666F0u: goto label_2666f0;
            case 0x2666F4u: goto label_2666f4;
            case 0x2666F8u: goto label_2666f8;
            case 0x2666FCu: goto label_2666fc;
            case 0x266700u: goto label_266700;
            case 0x266704u: goto label_266704;
            case 0x266708u: goto label_266708;
            case 0x26670Cu: goto label_26670c;
            case 0x266710u: goto label_266710;
            case 0x266714u: goto label_266714;
            case 0x266718u: goto label_266718;
            case 0x26671Cu: goto label_26671c;
            case 0x266720u: goto label_266720;
            case 0x266724u: goto label_266724;
            case 0x266728u: goto label_266728;
            case 0x26672Cu: goto label_26672c;
            case 0x266730u: goto label_266730;
            case 0x266734u: goto label_266734;
            case 0x266738u: goto label_266738;
            case 0x26673Cu: goto label_26673c;
            case 0x266740u: goto label_266740;
            case 0x266744u: goto label_266744;
            case 0x266748u: goto label_266748;
            case 0x26674Cu: goto label_26674c;
            case 0x266750u: goto label_266750;
            case 0x266754u: goto label_266754;
            case 0x266758u: goto label_266758;
            case 0x26675Cu: goto label_26675c;
            case 0x266760u: goto label_266760;
            case 0x266764u: goto label_266764;
            case 0x266768u: goto label_266768;
            case 0x26676Cu: goto label_26676c;
            case 0x266770u: goto label_266770;
            case 0x266774u: goto label_266774;
            case 0x266778u: goto label_266778;
            case 0x26677Cu: goto label_26677c;
            case 0x266780u: goto label_266780;
            case 0x266784u: goto label_266784;
            case 0x266788u: goto label_266788;
            case 0x26678Cu: goto label_26678c;
            case 0x266790u: goto label_266790;
            case 0x266794u: goto label_266794;
            case 0x266798u: goto label_266798;
            case 0x26679Cu: goto label_26679c;
            case 0x2667A0u: goto label_2667a0;
            case 0x2667A4u: goto label_2667a4;
            case 0x2667A8u: goto label_2667a8;
            case 0x2667ACu: goto label_2667ac;
            case 0x2667B0u: goto label_2667b0;
            case 0x2667B4u: goto label_2667b4;
            case 0x2667B8u: goto label_2667b8;
            case 0x2667BCu: goto label_2667bc;
            case 0x2667C0u: goto label_2667c0;
            case 0x2667C4u: goto label_2667c4;
            case 0x2667C8u: goto label_2667c8;
            case 0x2667CCu: goto label_2667cc;
            case 0x2667D0u: goto label_2667d0;
            case 0x2667D4u: goto label_2667d4;
            case 0x2667D8u: goto label_2667d8;
            case 0x2667DCu: goto label_2667dc;
            case 0x2667E0u: goto label_2667e0;
            case 0x2667E4u: goto label_2667e4;
            case 0x2667E8u: goto label_2667e8;
            case 0x2667ECu: goto label_2667ec;
            case 0x2667F0u: goto label_2667f0;
            case 0x2667F4u: goto label_2667f4;
            case 0x2667F8u: goto label_2667f8;
            case 0x2667FCu: goto label_2667fc;
            case 0x266800u: goto label_266800;
            case 0x266804u: goto label_266804;
            case 0x266808u: goto label_266808;
            case 0x26680Cu: goto label_26680c;
            case 0x266810u: goto label_266810;
            case 0x266814u: goto label_266814;
            case 0x266818u: goto label_266818;
            case 0x26681Cu: goto label_26681c;
            case 0x266820u: goto label_266820;
            case 0x266824u: goto label_266824;
            case 0x266828u: goto label_266828;
            case 0x26682Cu: goto label_26682c;
            case 0x266830u: goto label_266830;
            case 0x266834u: goto label_266834;
            case 0x266838u: goto label_266838;
            case 0x26683Cu: goto label_26683c;
            case 0x266840u: goto label_266840;
            case 0x266844u: goto label_266844;
            case 0x266848u: goto label_266848;
            case 0x26684Cu: goto label_26684c;
            case 0x266850u: goto label_266850;
            case 0x266854u: goto label_266854;
            case 0x266858u: goto label_266858;
            case 0x26685Cu: goto label_26685c;
            case 0x266860u: goto label_266860;
            case 0x266864u: goto label_266864;
            case 0x266868u: goto label_266868;
            case 0x26686Cu: goto label_26686c;
            case 0x266870u: goto label_266870;
            case 0x266874u: goto label_266874;
            case 0x266878u: goto label_266878;
            case 0x26687Cu: goto label_26687c;
            case 0x266880u: goto label_266880;
            case 0x266884u: goto label_266884;
            case 0x266888u: goto label_266888;
            case 0x26688Cu: goto label_26688c;
            case 0x266890u: goto label_266890;
            case 0x266894u: goto label_266894;
            case 0x266898u: goto label_266898;
            case 0x26689Cu: goto label_26689c;
            case 0x2668A0u: goto label_2668a0;
            case 0x2668A4u: goto label_2668a4;
            case 0x2668A8u: goto label_2668a8;
            case 0x2668ACu: goto label_2668ac;
            case 0x2668B0u: goto label_2668b0;
            case 0x2668B4u: goto label_2668b4;
            case 0x2668B8u: goto label_2668b8;
            case 0x2668BCu: goto label_2668bc;
            case 0x2668C0u: goto label_2668c0;
            case 0x2668C4u: goto label_2668c4;
            case 0x2668C8u: goto label_2668c8;
            case 0x2668CCu: goto label_2668cc;
            case 0x2668D0u: goto label_2668d0;
            case 0x2668D4u: goto label_2668d4;
            case 0x2668D8u: goto label_2668d8;
            case 0x2668DCu: goto label_2668dc;
            case 0x2668E0u: goto label_2668e0;
            case 0x2668E4u: goto label_2668e4;
            case 0x2668E8u: goto label_2668e8;
            case 0x2668ECu: goto label_2668ec;
            case 0x2668F0u: goto label_2668f0;
            case 0x2668F4u: goto label_2668f4;
            case 0x2668F8u: goto label_2668f8;
            case 0x2668FCu: goto label_2668fc;
            case 0x266900u: goto label_266900;
            case 0x266904u: goto label_266904;
            case 0x266908u: goto label_266908;
            case 0x26690Cu: goto label_26690c;
            case 0x266910u: goto label_266910;
            case 0x266914u: goto label_266914;
            case 0x266918u: goto label_266918;
            case 0x26691Cu: goto label_26691c;
            case 0x266920u: goto label_266920;
            case 0x266924u: goto label_266924;
            case 0x266928u: goto label_266928;
            case 0x26692Cu: goto label_26692c;
            case 0x266930u: goto label_266930;
            case 0x266934u: goto label_266934;
            case 0x266938u: goto label_266938;
            case 0x26693Cu: goto label_26693c;
            case 0x266940u: goto label_266940;
            case 0x266944u: goto label_266944;
            case 0x266948u: goto label_266948;
            case 0x26694Cu: goto label_26694c;
            case 0x266950u: goto label_266950;
            case 0x266954u: goto label_266954;
            case 0x266958u: goto label_266958;
            case 0x26695Cu: goto label_26695c;
            case 0x266960u: goto label_266960;
            case 0x266964u: goto label_266964;
            case 0x266968u: goto label_266968;
            case 0x26696Cu: goto label_26696c;
            case 0x266970u: goto label_266970;
            case 0x266974u: goto label_266974;
            case 0x266978u: goto label_266978;
            case 0x26697Cu: goto label_26697c;
            case 0x266980u: goto label_266980;
            case 0x266984u: goto label_266984;
            case 0x266988u: goto label_266988;
            case 0x26698Cu: goto label_26698c;
            case 0x266990u: goto label_266990;
            case 0x266994u: goto label_266994;
            case 0x266998u: goto label_266998;
            case 0x26699Cu: goto label_26699c;
            case 0x2669A0u: goto label_2669a0;
            case 0x2669A4u: goto label_2669a4;
            case 0x2669A8u: goto label_2669a8;
            case 0x2669ACu: goto label_2669ac;
            case 0x2669B0u: goto label_2669b0;
            case 0x2669B4u: goto label_2669b4;
            case 0x2669B8u: goto label_2669b8;
            case 0x2669BCu: goto label_2669bc;
            case 0x2669C0u: goto label_2669c0;
            case 0x2669C4u: goto label_2669c4;
            case 0x2669C8u: goto label_2669c8;
            case 0x2669CCu: goto label_2669cc;
            case 0x2669D0u: goto label_2669d0;
            case 0x2669D4u: goto label_2669d4;
            case 0x2669D8u: goto label_2669d8;
            case 0x2669DCu: goto label_2669dc;
            case 0x2669E0u: goto label_2669e0;
            case 0x2669E4u: goto label_2669e4;
            case 0x2669E8u: goto label_2669e8;
            case 0x2669ECu: goto label_2669ec;
            case 0x2669F0u: goto label_2669f0;
            case 0x2669F4u: goto label_2669f4;
            case 0x2669F8u: goto label_2669f8;
            case 0x2669FCu: goto label_2669fc;
            case 0x266A00u: goto label_266a00;
            case 0x266A04u: goto label_266a04;
            case 0x266A08u: goto label_266a08;
            case 0x266A0Cu: goto label_266a0c;
            case 0x266A10u: goto label_266a10;
            case 0x266A14u: goto label_266a14;
            case 0x266A18u: goto label_266a18;
            case 0x266A1Cu: goto label_266a1c;
            case 0x266A20u: goto label_266a20;
            case 0x266A24u: goto label_266a24;
            case 0x266A28u: goto label_266a28;
            case 0x266A2Cu: goto label_266a2c;
            case 0x266A30u: goto label_266a30;
            case 0x266A34u: goto label_266a34;
            case 0x266A38u: goto label_266a38;
            case 0x266A3Cu: goto label_266a3c;
            case 0x266A40u: goto label_266a40;
            case 0x266A44u: goto label_266a44;
            case 0x266A48u: goto label_266a48;
            case 0x266A4Cu: goto label_266a4c;
            case 0x266A50u: goto label_266a50;
            case 0x266A54u: goto label_266a54;
            case 0x266A58u: goto label_266a58;
            case 0x266A5Cu: goto label_266a5c;
            case 0x266A60u: goto label_266a60;
            case 0x266A64u: goto label_266a64;
            case 0x266A68u: goto label_266a68;
            case 0x266A6Cu: goto label_266a6c;
            case 0x266A70u: goto label_266a70;
            case 0x266A74u: goto label_266a74;
            case 0x266A78u: goto label_266a78;
            case 0x266A7Cu: goto label_266a7c;
            case 0x266A80u: goto label_266a80;
            case 0x266A84u: goto label_266a84;
            case 0x266A88u: goto label_266a88;
            case 0x266A8Cu: goto label_266a8c;
            case 0x266A90u: goto label_266a90;
            case 0x266A94u: goto label_266a94;
            case 0x266A98u: goto label_266a98;
            case 0x266A9Cu: goto label_266a9c;
            case 0x266AA0u: goto label_266aa0;
            case 0x266AA4u: goto label_266aa4;
            case 0x266AA8u: goto label_266aa8;
            case 0x266AACu: goto label_266aac;
            case 0x266AB0u: goto label_266ab0;
            case 0x266AB4u: goto label_266ab4;
            case 0x266AB8u: goto label_266ab8;
            case 0x266ABCu: goto label_266abc;
            case 0x266AC0u: goto label_266ac0;
            case 0x266AC4u: goto label_266ac4;
            case 0x266AC8u: goto label_266ac8;
            case 0x266ACCu: goto label_266acc;
            case 0x266AD0u: goto label_266ad0;
            case 0x266AD4u: goto label_266ad4;
            case 0x266AD8u: goto label_266ad8;
            case 0x266ADCu: goto label_266adc;
            case 0x266AE0u: goto label_266ae0;
            case 0x266AE4u: goto label_266ae4;
            case 0x266AE8u: goto label_266ae8;
            case 0x266AECu: goto label_266aec;
            case 0x266AF0u: goto label_266af0;
            case 0x266AF4u: goto label_266af4;
            case 0x266AF8u: goto label_266af8;
            case 0x266AFCu: goto label_266afc;
            case 0x266B00u: goto label_266b00;
            case 0x266B04u: goto label_266b04;
            case 0x266B08u: goto label_266b08;
            case 0x266B0Cu: goto label_266b0c;
            case 0x266B10u: goto label_266b10;
            case 0x266B14u: goto label_266b14;
            case 0x266B18u: goto label_266b18;
            case 0x266B1Cu: goto label_266b1c;
            case 0x266B20u: goto label_266b20;
            case 0x266B24u: goto label_266b24;
            case 0x266B28u: goto label_266b28;
            case 0x266B2Cu: goto label_266b2c;
            case 0x266B30u: goto label_266b30;
            case 0x266B34u: goto label_266b34;
            case 0x266B38u: goto label_266b38;
            case 0x266B3Cu: goto label_266b3c;
            case 0x266B40u: goto label_266b40;
            case 0x266B44u: goto label_266b44;
            case 0x266B48u: goto label_266b48;
            case 0x266B4Cu: goto label_266b4c;
            case 0x266B50u: goto label_266b50;
            case 0x266B54u: goto label_266b54;
            case 0x266B58u: goto label_266b58;
            case 0x266B5Cu: goto label_266b5c;
            case 0x266B60u: goto label_266b60;
            case 0x266B64u: goto label_266b64;
            case 0x266B68u: goto label_266b68;
            case 0x266B6Cu: goto label_266b6c;
            case 0x266B70u: goto label_266b70;
            case 0x266B74u: goto label_266b74;
            case 0x266B78u: goto label_266b78;
            case 0x266B7Cu: goto label_266b7c;
            case 0x266B80u: goto label_266b80;
            case 0x266B84u: goto label_266b84;
            case 0x266B88u: goto label_266b88;
            case 0x266B8Cu: goto label_266b8c;
            case 0x266B90u: goto label_266b90;
            case 0x266B94u: goto label_266b94;
            case 0x266B98u: goto label_266b98;
            case 0x266B9Cu: goto label_266b9c;
            case 0x266BA0u: goto label_266ba0;
            case 0x266BA4u: goto label_266ba4;
            case 0x266BA8u: goto label_266ba8;
            case 0x266BACu: goto label_266bac;
            case 0x266BB0u: goto label_266bb0;
            case 0x266BB4u: goto label_266bb4;
            case 0x266BB8u: goto label_266bb8;
            case 0x266BBCu: goto label_266bbc;
            case 0x266BC0u: goto label_266bc0;
            case 0x266BC4u: goto label_266bc4;
            case 0x266BC8u: goto label_266bc8;
            case 0x266BCCu: goto label_266bcc;
            case 0x266BD0u: goto label_266bd0;
            case 0x266BD4u: goto label_266bd4;
            case 0x266BD8u: goto label_266bd8;
            case 0x266BDCu: goto label_266bdc;
            case 0x266BE0u: goto label_266be0;
            case 0x266BE4u: goto label_266be4;
            case 0x266BE8u: goto label_266be8;
            case 0x266BECu: goto label_266bec;
            case 0x266BF0u: goto label_266bf0;
            case 0x266BF4u: goto label_266bf4;
            case 0x266BF8u: goto label_266bf8;
            case 0x266BFCu: goto label_266bfc;
            case 0x266C00u: goto label_266c00;
            case 0x266C04u: goto label_266c04;
            case 0x266C08u: goto label_266c08;
            case 0x266C0Cu: goto label_266c0c;
            case 0x266C10u: goto label_266c10;
            case 0x266C14u: goto label_266c14;
            case 0x266C18u: goto label_266c18;
            case 0x266C1Cu: goto label_266c1c;
            case 0x266C20u: goto label_266c20;
            case 0x266C24u: goto label_266c24;
            case 0x266C28u: goto label_266c28;
            case 0x266C2Cu: goto label_266c2c;
            case 0x266C30u: goto label_266c30;
            case 0x266C34u: goto label_266c34;
            case 0x266C38u: goto label_266c38;
            case 0x266C3Cu: goto label_266c3c;
            case 0x266C40u: goto label_266c40;
            case 0x266C44u: goto label_266c44;
            case 0x266C48u: goto label_266c48;
            case 0x266C4Cu: goto label_266c4c;
            case 0x266C50u: goto label_266c50;
            case 0x266C54u: goto label_266c54;
            case 0x266C58u: goto label_266c58;
            case 0x266C5Cu: goto label_266c5c;
            case 0x266C60u: goto label_266c60;
            case 0x266C64u: goto label_266c64;
            case 0x266C68u: goto label_266c68;
            case 0x266C6Cu: goto label_266c6c;
            case 0x266C70u: goto label_266c70;
            case 0x266C74u: goto label_266c74;
            case 0x266C78u: goto label_266c78;
            case 0x266C7Cu: goto label_266c7c;
            case 0x266C80u: goto label_266c80;
            case 0x266C84u: goto label_266c84;
            case 0x266C88u: goto label_266c88;
            case 0x266C8Cu: goto label_266c8c;
            case 0x266C90u: goto label_266c90;
            case 0x266C94u: goto label_266c94;
            case 0x266C98u: goto label_266c98;
            case 0x266C9Cu: goto label_266c9c;
            case 0x266CA0u: goto label_266ca0;
            case 0x266CA4u: goto label_266ca4;
            case 0x266CA8u: goto label_266ca8;
            case 0x266CACu: goto label_266cac;
            case 0x266CB0u: goto label_266cb0;
            case 0x266CB4u: goto label_266cb4;
            case 0x266CB8u: goto label_266cb8;
            case 0x266CBCu: goto label_266cbc;
            case 0x266CC0u: goto label_266cc0;
            case 0x266CC4u: goto label_266cc4;
            case 0x266CC8u: goto label_266cc8;
            case 0x266CCCu: goto label_266ccc;
            case 0x266CD0u: goto label_266cd0;
            case 0x266CD4u: goto label_266cd4;
            case 0x266CD8u: goto label_266cd8;
            case 0x266CDCu: goto label_266cdc;
            case 0x266CE0u: goto label_266ce0;
            case 0x266CE4u: goto label_266ce4;
            case 0x266CE8u: goto label_266ce8;
            case 0x266CECu: goto label_266cec;
            case 0x266CF0u: goto label_266cf0;
            case 0x266CF4u: goto label_266cf4;
            case 0x266CF8u: goto label_266cf8;
            case 0x266CFCu: goto label_266cfc;
            case 0x266D00u: goto label_266d00;
            case 0x266D04u: goto label_266d04;
            case 0x266D08u: goto label_266d08;
            case 0x266D0Cu: goto label_266d0c;
            case 0x266D10u: goto label_266d10;
            case 0x266D14u: goto label_266d14;
            case 0x266D18u: goto label_266d18;
            case 0x266D1Cu: goto label_266d1c;
            case 0x266D20u: goto label_266d20;
            case 0x266D24u: goto label_266d24;
            case 0x266D28u: goto label_266d28;
            case 0x266D2Cu: goto label_266d2c;
            case 0x266D30u: goto label_266d30;
            case 0x266D34u: goto label_266d34;
            case 0x266D38u: goto label_266d38;
            case 0x266D3Cu: goto label_266d3c;
            case 0x266D40u: goto label_266d40;
            case 0x266D44u: goto label_266d44;
            case 0x266D48u: goto label_266d48;
            case 0x266D4Cu: goto label_266d4c;
            case 0x266D50u: goto label_266d50;
            case 0x266D54u: goto label_266d54;
            case 0x266D58u: goto label_266d58;
            case 0x266D5Cu: goto label_266d5c;
            case 0x266D60u: goto label_266d60;
            case 0x266D64u: goto label_266d64;
            case 0x266D68u: goto label_266d68;
            case 0x266D6Cu: goto label_266d6c;
            case 0x266D70u: goto label_266d70;
            case 0x266D74u: goto label_266d74;
            case 0x266D78u: goto label_266d78;
            case 0x266D7Cu: goto label_266d7c;
            case 0x266D80u: goto label_266d80;
            case 0x266D84u: goto label_266d84;
            case 0x266D88u: goto label_266d88;
            case 0x266D8Cu: goto label_266d8c;
            case 0x266D90u: goto label_266d90;
            case 0x266D94u: goto label_266d94;
            case 0x266D98u: goto label_266d98;
            case 0x266D9Cu: goto label_266d9c;
            case 0x266DA0u: goto label_266da0;
            case 0x266DA4u: goto label_266da4;
            case 0x266DA8u: goto label_266da8;
            case 0x266DACu: goto label_266dac;
            case 0x266DB0u: goto label_266db0;
            case 0x266DB4u: goto label_266db4;
            case 0x266DB8u: goto label_266db8;
            case 0x266DBCu: goto label_266dbc;
            case 0x266DC0u: goto label_266dc0;
            case 0x266DC4u: goto label_266dc4;
            case 0x266DC8u: goto label_266dc8;
            case 0x266DCCu: goto label_266dcc;
            case 0x266DD0u: goto label_266dd0;
            case 0x266DD4u: goto label_266dd4;
            case 0x266DD8u: goto label_266dd8;
            case 0x266DDCu: goto label_266ddc;
            case 0x266DE0u: goto label_266de0;
            case 0x266DE4u: goto label_266de4;
            case 0x266DE8u: goto label_266de8;
            case 0x266DECu: goto label_266dec;
            case 0x266DF0u: goto label_266df0;
            case 0x266DF4u: goto label_266df4;
            case 0x266DF8u: goto label_266df8;
            case 0x266DFCu: goto label_266dfc;
            case 0x266E00u: goto label_266e00;
            case 0x266E04u: goto label_266e04;
            case 0x266E08u: goto label_266e08;
            case 0x266E0Cu: goto label_266e0c;
            case 0x266E10u: goto label_266e10;
            case 0x266E14u: goto label_266e14;
            case 0x266E18u: goto label_266e18;
            case 0x266E1Cu: goto label_266e1c;
            case 0x266E20u: goto label_266e20;
            case 0x266E24u: goto label_266e24;
            case 0x266E28u: goto label_266e28;
            case 0x266E2Cu: goto label_266e2c;
            case 0x266E30u: goto label_266e30;
            case 0x266E34u: goto label_266e34;
            case 0x266E38u: goto label_266e38;
            case 0x266E3Cu: goto label_266e3c;
            case 0x266E40u: goto label_266e40;
            case 0x266E44u: goto label_266e44;
            case 0x266E48u: goto label_266e48;
            case 0x266E4Cu: goto label_266e4c;
            case 0x266E50u: goto label_266e50;
            case 0x266E54u: goto label_266e54;
            case 0x266E58u: goto label_266e58;
            case 0x266E5Cu: goto label_266e5c;
            case 0x266E60u: goto label_266e60;
            case 0x266E64u: goto label_266e64;
            case 0x266E68u: goto label_266e68;
            case 0x266E6Cu: goto label_266e6c;
            case 0x266E70u: goto label_266e70;
            case 0x266E74u: goto label_266e74;
            case 0x266E78u: goto label_266e78;
            case 0x266E7Cu: goto label_266e7c;
            case 0x266E80u: goto label_266e80;
            case 0x266E84u: goto label_266e84;
            case 0x266E88u: goto label_266e88;
            case 0x266E8Cu: goto label_266e8c;
            case 0x266E90u: goto label_266e90;
            case 0x266E94u: goto label_266e94;
            case 0x266E98u: goto label_266e98;
            case 0x266E9Cu: goto label_266e9c;
            case 0x266EA0u: goto label_266ea0;
            case 0x266EA4u: goto label_266ea4;
            case 0x266EA8u: goto label_266ea8;
            case 0x266EACu: goto label_266eac;
            case 0x266EB0u: goto label_266eb0;
            case 0x266EB4u: goto label_266eb4;
            case 0x266EB8u: goto label_266eb8;
            case 0x266EBCu: goto label_266ebc;
            case 0x266EC0u: goto label_266ec0;
            case 0x266EC4u: goto label_266ec4;
            case 0x266EC8u: goto label_266ec8;
            case 0x266ECCu: goto label_266ecc;
            case 0x266ED0u: goto label_266ed0;
            case 0x266ED4u: goto label_266ed4;
            case 0x266ED8u: goto label_266ed8;
            case 0x266EDCu: goto label_266edc;
            case 0x266EE0u: goto label_266ee0;
            case 0x266EE4u: goto label_266ee4;
            case 0x266EE8u: goto label_266ee8;
            case 0x266EECu: goto label_266eec;
            case 0x266EF0u: goto label_266ef0;
            case 0x266EF4u: goto label_266ef4;
            case 0x266EF8u: goto label_266ef8;
            case 0x266EFCu: goto label_266efc;
            case 0x266F00u: goto label_266f00;
            case 0x266F04u: goto label_266f04;
            case 0x266F08u: goto label_266f08;
            case 0x266F0Cu: goto label_266f0c;
            case 0x266F10u: goto label_266f10;
            case 0x266F14u: goto label_266f14;
            case 0x266F18u: goto label_266f18;
            case 0x266F1Cu: goto label_266f1c;
            case 0x266F20u: goto label_266f20;
            case 0x266F24u: goto label_266f24;
            case 0x266F28u: goto label_266f28;
            case 0x266F2Cu: goto label_266f2c;
            case 0x266F30u: goto label_266f30;
            case 0x266F34u: goto label_266f34;
            case 0x266F38u: goto label_266f38;
            case 0x266F3Cu: goto label_266f3c;
            case 0x266F40u: goto label_266f40;
            case 0x266F44u: goto label_266f44;
            case 0x266F48u: goto label_266f48;
            case 0x266F4Cu: goto label_266f4c;
            case 0x266F50u: goto label_266f50;
            case 0x266F54u: goto label_266f54;
            case 0x266F58u: goto label_266f58;
            case 0x266F5Cu: goto label_266f5c;
            case 0x266F60u: goto label_266f60;
            case 0x266F64u: goto label_266f64;
            case 0x266F68u: goto label_266f68;
            case 0x266F6Cu: goto label_266f6c;
            case 0x266F70u: goto label_266f70;
            case 0x266F74u: goto label_266f74;
            case 0x266F78u: goto label_266f78;
            case 0x266F7Cu: goto label_266f7c;
            case 0x266F80u: goto label_266f80;
            case 0x266F84u: goto label_266f84;
            case 0x266F88u: goto label_266f88;
            case 0x266F8Cu: goto label_266f8c;
            case 0x266F90u: goto label_266f90;
            case 0x266F94u: goto label_266f94;
            case 0x266F98u: goto label_266f98;
            case 0x266F9Cu: goto label_266f9c;
            case 0x266FA0u: goto label_266fa0;
            case 0x266FA4u: goto label_266fa4;
            case 0x266FA8u: goto label_266fa8;
            case 0x266FACu: goto label_266fac;
            case 0x266FB0u: goto label_266fb0;
            case 0x266FB4u: goto label_266fb4;
            case 0x266FB8u: goto label_266fb8;
            case 0x266FBCu: goto label_266fbc;
            case 0x266FC0u: goto label_266fc0;
            case 0x266FC4u: goto label_266fc4;
            case 0x266FC8u: goto label_266fc8;
            case 0x266FCCu: goto label_266fcc;
            case 0x266FD0u: goto label_266fd0;
            case 0x266FD4u: goto label_266fd4;
            case 0x266FD8u: goto label_266fd8;
            case 0x266FDCu: goto label_266fdc;
            case 0x266FE0u: goto label_266fe0;
            case 0x266FE4u: goto label_266fe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x266BF4u;
label_266bf4:
    // 0x266bf4: 0x3c040032
    ctx->pc = 0x266bf4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_266bf8:
    // 0x266bf8: 0x860200f0
    ctx->pc = 0x266bf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 240)));
label_266bfc:
    // 0x266bfc: 0x24030050
    ctx->pc = 0x266bfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
label_266c00:
    // 0x266c00: 0x431018
    ctx->pc = 0x266c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_266c04:
    // 0x266c04: 0x8c83fa60
    ctx->pc = 0x266c04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294965856)));
label_266c08:
    // 0x266c08: 0x432821
    ctx->pc = 0x266c08u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_266c0c:
    // 0x266c0c: 0x8ca40000
    ctx->pc = 0x266c0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_266c10:
    // 0x266c10: 0x2402ffff
    ctx->pc = 0x266c10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_266c14:
    // 0x266c14: 0x44102a
    ctx->pc = 0x266c14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
label_266c18:
    // 0x266c18: 0x2200a
    ctx->pc = 0x266c18u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
label_266c1c:
    // 0x266c1c: 0x24020001
    ctx->pc = 0x266c1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_266c20:
    // 0x266c20: 0x10820016
label_266c24:
    if (ctx->pc == 0x266C24u) {
        ctx->pc = 0x266C24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x266C28u;
        goto label_266c28;
    }
    ctx->pc = 0x266C20u;
    {
        const bool branch_taken_0x266c20 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x266C24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x266c20) {
            ctx->pc = 0x266C7Cu;
            goto label_266c7c;
        }
    }
    ctx->pc = 0x266C28u;
label_266c28:
    // 0x266c28: 0x54820022
label_266c2c:
    if (ctx->pc == 0x266C2Cu) {
        ctx->pc = 0x266C2Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x266C30u;
        goto label_266c30;
    }
    ctx->pc = 0x266C28u;
    {
        const bool branch_taken_0x266c28 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x266c28) {
            ctx->pc = 0x266C2Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x266CB4u;
            goto label_266cb4;
        }
    }
    ctx->pc = 0x266C30u;
label_266c30:
    // 0x266c30: 0xc08dbc4
label_266c34:
    if (ctx->pc == 0x266C34u) {
        ctx->pc = 0x266C34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 40));
        ctx->pc = 0x266C38u;
        goto label_266c38;
    }
    ctx->pc = 0x266C30u;
    SET_GPR_U32(ctx, 31, 0x266C38u);
    ctx->pc = 0x266C34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 40));
    ctx->pc = 0x236F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyDescType_0x236f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C38u; }
    }
    if (ctx->pc != 0x266C38u) { return; }
    ctx->pc = 0x266C38u;
label_266c38:
    // 0x266c38: 0x3c030034
    ctx->pc = 0x266c38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_266c3c:
    // 0x266c3c: 0x2463e9d0
    ctx->pc = 0x266c3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961616));
label_266c40:
    // 0x266c40: 0x113880
    ctx->pc = 0x266c40u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 17), 2));
label_266c44:
    // 0x266c44: 0xe33821
    ctx->pc = 0x266c44u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_266c48:
    // 0x266c48: 0x3c030033
    ctx->pc = 0x266c48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
label_266c4c:
    // 0x266c4c: 0x2463d440
    ctx->pc = 0x266c4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294956096));
label_266c50:
    // 0x266c50: 0x21080
    ctx->pc = 0x266c50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_266c54:
    // 0x266c54: 0x431021
    ctx->pc = 0x266c54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_266c58:
    // 0x266c58: 0x2404000e
    ctx->pc = 0x266c58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_266c5c:
    // 0x266c5c: 0x2665fffa
    ctx->pc = 0x266c5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967290));
label_266c60:
    // 0x266c60: 0x3c06003b
    ctx->pc = 0x266c60u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266c64:
    // 0x266c64: 0x24c6a410
    ctx->pc = 0x266c64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943760));
label_266c68:
    // 0x266c68: 0x8ce70000
    ctx->pc = 0x266c68u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_266c6c:
    // 0x266c6c: 0xc0b47da
label_266c70:
    if (ctx->pc == 0x266C70u) {
        ctx->pc = 0x266C70u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x266C74u;
        goto label_266c74;
    }
    ctx->pc = 0x266C6Cu;
    SET_GPR_U32(ctx, 31, 0x266C74u);
    ctx->pc = 0x266C70u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C74u; }
    }
    if (ctx->pc != 0x266C74u) { return; }
    ctx->pc = 0x266C74u;
label_266c74:
    // 0x266c74: 0x100000c4
label_266c78:
    if (ctx->pc == 0x266C78u) {
        ctx->pc = 0x266C78u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x266C7Cu;
        goto label_266c7c;
    }
    ctx->pc = 0x266C74u;
    {
        const bool branch_taken_0x266c74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266C78u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x266c74) {
            ctx->pc = 0x266F88u;
            goto label_266f88;
        }
    }
    ctx->pc = 0x266C7Cu;
label_266c7c:
    // 0x266c7c: 0x8ca40004
    ctx->pc = 0x266c7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_266c80:
    // 0x266c80: 0x3c020034
    ctx->pc = 0x266c80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_266c84:
    // 0x266c84: 0x2442e9d0
    ctx->pc = 0x266c84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961616));
label_266c88:
    // 0x266c88: 0x113880
    ctx->pc = 0x266c88u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 17), 2));
label_266c8c:
    // 0x266c8c: 0xe23821
    ctx->pc = 0x266c8cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_266c90:
    // 0x266c90: 0x3c020034
    ctx->pc = 0x266c90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_266c94:
    // 0x266c94: 0x2442ea08
    ctx->pc = 0x266c94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961672));
label_266c98:
    // 0x266c98: 0x41880
    ctx->pc = 0x266c98u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_266c9c:
    // 0x266c9c: 0x621821
    ctx->pc = 0x266c9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266ca0:
    // 0x266ca0: 0x2404000e
    ctx->pc = 0x266ca0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_266ca4:
    // 0x266ca4: 0x2665fffa
    ctx->pc = 0x266ca4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967290));
label_266ca8:
    // 0x266ca8: 0x3c06003b
    ctx->pc = 0x266ca8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266cac:
    // 0x266cac: 0x100000a6
label_266cb0:
    if (ctx->pc == 0x266CB0u) {
        ctx->pc = 0x266CB0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943760));
        ctx->pc = 0x266CB4u;
        goto label_266cb4;
    }
    ctx->pc = 0x266CACu;
    {
        const bool branch_taken_0x266cac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266CB0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943760));
        if (branch_taken_0x266cac) {
            ctx->pc = 0x266F48u;
            goto label_266f48;
        }
    }
    ctx->pc = 0x266CB4u;
label_266cb4:
    // 0x266cb4: 0x8c430004
    ctx->pc = 0x266cb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_266cb8:
    // 0x266cb8: 0x24020030
    ctx->pc = 0x266cb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
label_266cbc:
    // 0x266cbc: 0x1462000c
label_266cc0:
    if (ctx->pc == 0x266CC0u) {
        ctx->pc = 0x266CC0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x266CC4u;
        goto label_266cc4;
    }
    ctx->pc = 0x266CBCu;
    {
        const bool branch_taken_0x266cbc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x266CC0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x266cbc) {
            ctx->pc = 0x266CF0u;
            goto label_266cf0;
        }
    }
    ctx->pc = 0x266CC4u;
label_266cc4:
    // 0x266cc4: 0x3c020034
    ctx->pc = 0x266cc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_266cc8:
    // 0x266cc8: 0x2442e9d0
    ctx->pc = 0x266cc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961616));
label_266ccc:
    // 0x266ccc: 0x113880
    ctx->pc = 0x266cccu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 17), 2));
label_266cd0:
    // 0x266cd0: 0xe23821
    ctx->pc = 0x266cd0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_266cd4:
    // 0x266cd4: 0x41880
    ctx->pc = 0x266cd4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_266cd8:
    // 0x266cd8: 0x621821
    ctx->pc = 0x266cd8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266cdc:
    // 0x266cdc: 0x2404000e
    ctx->pc = 0x266cdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_266ce0:
    // 0x266ce0: 0x2665fffa
    ctx->pc = 0x266ce0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967290));
label_266ce4:
    // 0x266ce4: 0x3c06003b
    ctx->pc = 0x266ce4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266ce8:
    // 0x266ce8: 0x10000097
label_266cec:
    if (ctx->pc == 0x266CECu) {
        ctx->pc = 0x266CECu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943760));
        ctx->pc = 0x266CF0u;
        goto label_266cf0;
    }
    ctx->pc = 0x266CE8u;
    {
        const bool branch_taken_0x266ce8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266CECu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943760));
        if (branch_taken_0x266ce8) {
            ctx->pc = 0x266F48u;
            goto label_266f48;
        }
    }
    ctx->pc = 0x266CF0u;
label_266cf0:
    // 0x266cf0: 0x84a20008
    ctx->pc = 0x266cf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_266cf4:
    // 0x266cf4: 0x8c64fa60
    ctx->pc = 0x266cf4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294965856)));
label_266cf8:
    // 0x266cf8: 0x24030050
    ctx->pc = 0x266cf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
label_266cfc:
    // 0x266cfc: 0x431018
    ctx->pc = 0x266cfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_266d00:
    // 0x266d00: 0x441021
    ctx->pc = 0x266d00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_266d04:
    // 0x266d04: 0x8c440004
    ctx->pc = 0x266d04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_266d08:
    // 0x266d08: 0x3c020034
    ctx->pc = 0x266d08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_266d0c:
    // 0x266d0c: 0x2442e9d0
    ctx->pc = 0x266d0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961616));
label_266d10:
    // 0x266d10: 0x113880
    ctx->pc = 0x266d10u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 17), 2));
label_266d14:
    // 0x266d14: 0xe23821
    ctx->pc = 0x266d14u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_266d18:
    // 0x266d18: 0x3c020034
    ctx->pc = 0x266d18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_266d1c:
    // 0x266d1c: 0x2442ea08
    ctx->pc = 0x266d1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961672));
label_266d20:
    // 0x266d20: 0x41880
    ctx->pc = 0x266d20u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_266d24:
    // 0x266d24: 0x621821
    ctx->pc = 0x266d24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266d28:
    // 0x266d28: 0x2404000e
    ctx->pc = 0x266d28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_266d2c:
    // 0x266d2c: 0x2665fffa
    ctx->pc = 0x266d2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967290));
label_266d30:
    // 0x266d30: 0x3c06003b
    ctx->pc = 0x266d30u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266d34:
    // 0x266d34: 0x10000084
label_266d38:
    if (ctx->pc == 0x266D38u) {
        ctx->pc = 0x266D38u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943760));
        ctx->pc = 0x266D3Cu;
        goto label_266d3c;
    }
    ctx->pc = 0x266D34u;
    {
        const bool branch_taken_0x266d34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266D38u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943760));
        if (branch_taken_0x266d34) {
            ctx->pc = 0x266F48u;
            goto label_266f48;
        }
    }
    ctx->pc = 0x266D3Cu;
label_266d3c:
    // 0x266d3c: 0x860400f0
    ctx->pc = 0x266d3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 240)));
label_266d40:
    // 0x266d40: 0x3c020034
    ctx->pc = 0x266d40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_266d44:
    // 0x266d44: 0x2442e9d0
    ctx->pc = 0x266d44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961616));
label_266d48:
    // 0x266d48: 0x113880
    ctx->pc = 0x266d48u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 17), 2));
label_266d4c:
    // 0x266d4c: 0xe23821
    ctx->pc = 0x266d4cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_266d50:
    // 0x266d50: 0x3c020033
    ctx->pc = 0x266d50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_266d54:
    // 0x266d54: 0x2442d440
    ctx->pc = 0x266d54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956096));
label_266d58:
    // 0x266d58: 0x41880
    ctx->pc = 0x266d58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_266d5c:
    // 0x266d5c: 0x621821
    ctx->pc = 0x266d5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266d60:
    // 0x266d60: 0x2404000e
    ctx->pc = 0x266d60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_266d64:
    // 0x266d64: 0x2665fffa
    ctx->pc = 0x266d64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967290));
label_266d68:
    // 0x266d68: 0x3c06003b
    ctx->pc = 0x266d68u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266d6c:
    // 0x266d6c: 0x24c6a430
    ctx->pc = 0x266d6cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943792));
label_266d70:
    // 0x266d70: 0x8ce70000
    ctx->pc = 0x266d70u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_266d74:
    // 0x266d74: 0x8c680000
    ctx->pc = 0x266d74u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_266d78:
    // 0x266d78: 0x820900f7
    ctx->pc = 0x266d78u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 247)));
label_266d7c:
    // 0x266d7c: 0x820a00f6
    ctx->pc = 0x266d7cu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 246)));
label_266d80:
    // 0x266d80: 0xc0b47da
label_266d84:
    if (ctx->pc == 0x266D84u) {
        ctx->pc = 0x266D84u;
        SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 243)));
        ctx->pc = 0x266D88u;
        goto label_266d88;
    }
    ctx->pc = 0x266D80u;
    SET_GPR_U32(ctx, 31, 0x266D88u);
    ctx->pc = 0x266D84u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 243)));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266D88u; }
    }
    if (ctx->pc != 0x266D88u) { return; }
    ctx->pc = 0x266D88u;
label_266d88:
    // 0x266d88: 0x1000007f
label_266d8c:
    if (ctx->pc == 0x266D8Cu) {
        ctx->pc = 0x266D8Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x266D90u;
        goto label_266d90;
    }
    ctx->pc = 0x266D88u;
    {
        const bool branch_taken_0x266d88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266D8Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x266d88) {
            ctx->pc = 0x266F88u;
            goto label_266f88;
        }
    }
    ctx->pc = 0x266D90u;
label_266d90:
    // 0x266d90: 0x3c020034
    ctx->pc = 0x266d90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_266d94:
    // 0x266d94: 0x2442e9d0
    ctx->pc = 0x266d94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961616));
label_266d98:
    // 0x266d98: 0x113880
    ctx->pc = 0x266d98u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 17), 2));
label_266d9c:
    // 0x266d9c: 0xe23821
    ctx->pc = 0x266d9cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_266da0:
    // 0x266da0: 0x3c020034
    ctx->pc = 0x266da0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_266da4:
    // 0x266da4: 0x2442eaf8
    ctx->pc = 0x266da4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961912));
label_266da8:
    // 0x266da8: 0x820300dc
    ctx->pc = 0x266da8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
label_266dac:
    // 0x266dac: 0x10000061
label_266db0:
    if (ctx->pc == 0x266DB0u) {
        ctx->pc = 0x266DB0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x266DB4u;
        goto label_266db4;
    }
    ctx->pc = 0x266DACu;
    {
        const bool branch_taken_0x266dac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266DB0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x266dac) {
            ctx->pc = 0x266F34u;
            goto label_266f34;
        }
    }
    ctx->pc = 0x266DB4u;
label_266db4:
    // 0x266db4: 0x3c020034
    ctx->pc = 0x266db4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_266db8:
    // 0x266db8: 0x2442e9d0
    ctx->pc = 0x266db8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961616));
label_266dbc:
    // 0x266dbc: 0x111880
    ctx->pc = 0x266dbcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_266dc0:
    // 0x266dc0: 0x621821
    ctx->pc = 0x266dc0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266dc4:
    // 0x266dc4: 0x2404000e
    ctx->pc = 0x266dc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_266dc8:
    // 0x266dc8: 0x2665fffa
    ctx->pc = 0x266dc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967290));
label_266dcc:
    // 0x266dcc: 0x3c06003b
    ctx->pc = 0x266dccu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266dd0:
    // 0x266dd0: 0x24c6a470
    ctx->pc = 0x266dd0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943856));
label_266dd4:
    // 0x266dd4: 0x8c670000
    ctx->pc = 0x266dd4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_266dd8:
    // 0x266dd8: 0xc0b47da
label_266ddc:
    if (ctx->pc == 0x266DDCu) {
        ctx->pc = 0x266DDCu;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->pc = 0x266DE0u;
        goto label_266de0;
    }
    ctx->pc = 0x266DD8u;
    SET_GPR_U32(ctx, 31, 0x266DE0u);
    ctx->pc = 0x266DDCu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266DE0u; }
    }
    if (ctx->pc != 0x266DE0u) { return; }
    ctx->pc = 0x266DE0u;
label_266de0:
    // 0x266de0: 0x10000069
label_266de4:
    if (ctx->pc == 0x266DE4u) {
        ctx->pc = 0x266DE4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x266DE8u;
        goto label_266de8;
    }
    ctx->pc = 0x266DE0u;
    {
        const bool branch_taken_0x266de0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266DE4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x266de0) {
            ctx->pc = 0x266F88u;
            goto label_266f88;
        }
    }
    ctx->pc = 0x266DE8u;
label_266de8:
    // 0x266de8: 0x3c020034
    ctx->pc = 0x266de8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_266dec:
    // 0x266dec: 0x2442e9d0
    ctx->pc = 0x266decu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961616));
label_266df0:
    // 0x266df0: 0x111880
    ctx->pc = 0x266df0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_266df4:
    // 0x266df4: 0x621821
    ctx->pc = 0x266df4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266df8:
    // 0x266df8: 0x2404000e
    ctx->pc = 0x266df8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_266dfc:
    // 0x266dfc: 0x2665fffa
    ctx->pc = 0x266dfcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967290));
label_266e00:
    // 0x266e00: 0x3c06003b
    ctx->pc = 0x266e00u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266e04:
    // 0x266e04: 0x24c6a490
    ctx->pc = 0x266e04u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943888));
label_266e08:
    // 0x266e08: 0xc0b47da
label_266e0c:
    if (ctx->pc == 0x266E0Cu) {
        ctx->pc = 0x266E0Cu;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x266E10u;
        goto label_266e10;
    }
    ctx->pc = 0x266E08u;
    SET_GPR_U32(ctx, 31, 0x266E10u);
    ctx->pc = 0x266E0Cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266E10u; }
    }
    if (ctx->pc != 0x266E10u) { return; }
    ctx->pc = 0x266E10u;
label_266e10:
    // 0x266e10: 0x1000005d
label_266e14:
    if (ctx->pc == 0x266E14u) {
        ctx->pc = 0x266E14u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x266E18u;
        goto label_266e18;
    }
    ctx->pc = 0x266E10u;
    {
        const bool branch_taken_0x266e10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266E14u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x266e10) {
            ctx->pc = 0x266F88u;
            goto label_266f88;
        }
    }
    ctx->pc = 0x266E18u;
label_266e18:
    // 0x266e18: 0x820200e3
    ctx->pc = 0x266e18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 227)));
label_266e1c:
    // 0x266e1c: 0x440000d
label_266e20:
    if (ctx->pc == 0x266E20u) {
        ctx->pc = 0x266E20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x266E24u;
        goto label_266e24;
    }
    ctx->pc = 0x266E1Cu;
    {
        const bool branch_taken_0x266e1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x266E20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x266e1c) {
            ctx->pc = 0x266E54u;
            goto label_266e54;
        }
    }
    ctx->pc = 0x266E24u;
label_266e24:
    // 0x266e24: 0x2442e9d0
    ctx->pc = 0x266e24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961616));
label_266e28:
    // 0x266e28: 0x111880
    ctx->pc = 0x266e28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_266e2c:
    // 0x266e2c: 0x621821
    ctx->pc = 0x266e2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266e30:
    // 0x266e30: 0x2404000e
    ctx->pc = 0x266e30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_266e34:
    // 0x266e34: 0x2665fffa
    ctx->pc = 0x266e34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967290));
label_266e38:
    // 0x266e38: 0x3c06003b
    ctx->pc = 0x266e38u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266e3c:
    // 0x266e3c: 0x24c6a4b0
    ctx->pc = 0x266e3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943920));
label_266e40:
    // 0x266e40: 0x8c670000
    ctx->pc = 0x266e40u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_266e44:
    // 0x266e44: 0xc0b47da
label_266e48:
    if (ctx->pc == 0x266E48u) {
        ctx->pc = 0x266E48u;
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 228)));
        ctx->pc = 0x266E4Cu;
        goto label_266e4c;
    }
    ctx->pc = 0x266E44u;
    SET_GPR_U32(ctx, 31, 0x266E4Cu);
    ctx->pc = 0x266E48u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 228)));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266E4Cu; }
    }
    if (ctx->pc != 0x266E4Cu) { return; }
    ctx->pc = 0x266E4Cu;
label_266e4c:
    // 0x266e4c: 0x1000004e
label_266e50:
    if (ctx->pc == 0x266E50u) {
        ctx->pc = 0x266E50u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x266E54u;
        goto label_266e54;
    }
    ctx->pc = 0x266E4Cu;
    {
        const bool branch_taken_0x266e4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266E50u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x266e4c) {
            ctx->pc = 0x266F88u;
            goto label_266f88;
        }
    }
    ctx->pc = 0x266E54u;
label_266e54:
    // 0x266e54: 0x2442e9d0
    ctx->pc = 0x266e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961616));
label_266e58:
    // 0x266e58: 0x111880
    ctx->pc = 0x266e58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_266e5c:
    // 0x266e5c: 0x621821
    ctx->pc = 0x266e5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266e60:
    // 0x266e60: 0x8e080000
    ctx->pc = 0x266e60u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_266e64:
    // 0x266e64: 0x2404000e
    ctx->pc = 0x266e64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_266e68:
    // 0x266e68: 0x2665fffa
    ctx->pc = 0x266e68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967290));
label_266e6c:
    // 0x266e6c: 0x3c06003b
    ctx->pc = 0x266e6cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266e70:
    // 0x266e70: 0x24c6a4d0
    ctx->pc = 0x266e70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943952));
label_266e74:
    // 0x266e74: 0x8c670000
    ctx->pc = 0x266e74u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_266e78:
    // 0x266e78: 0xc0b47da
label_266e7c:
    if (ctx->pc == 0x266E7Cu) {
        ctx->pc = 0x266E7Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 40));
        ctx->pc = 0x266E80u;
        goto label_266e80;
    }
    ctx->pc = 0x266E78u;
    SET_GPR_U32(ctx, 31, 0x266E80u);
    ctx->pc = 0x266E7Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 40));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266E80u; }
    }
    if (ctx->pc != 0x266E80u) { return; }
    ctx->pc = 0x266E80u;
label_266e80:
    // 0x266e80: 0x10000041
label_266e84:
    if (ctx->pc == 0x266E84u) {
        ctx->pc = 0x266E84u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x266E88u;
        goto label_266e88;
    }
    ctx->pc = 0x266E80u;
    {
        const bool branch_taken_0x266e80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266E84u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x266e80) {
            ctx->pc = 0x266F88u;
            goto label_266f88;
        }
    }
    ctx->pc = 0x266E88u;
label_266e88:
    // 0x266e88: 0x8e080000
    ctx->pc = 0x266e88u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_266e8c:
    // 0x266e8c: 0x3c020034
    ctx->pc = 0x266e8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_266e90:
    // 0x266e90: 0x2442e9d0
    ctx->pc = 0x266e90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961616));
label_266e94:
    // 0x266e94: 0x111880
    ctx->pc = 0x266e94u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_266e98:
    // 0x266e98: 0x621821
    ctx->pc = 0x266e98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266e9c:
    // 0x266e9c: 0x2404000e
    ctx->pc = 0x266e9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_266ea0:
    // 0x266ea0: 0x2665fffa
    ctx->pc = 0x266ea0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967290));
label_266ea4:
    // 0x266ea4: 0x3c06003b
    ctx->pc = 0x266ea4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266ea8:
    // 0x266ea8: 0x24c6a4e8
    ctx->pc = 0x266ea8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943976));
label_266eac:
    // 0x266eac: 0x8c670000
    ctx->pc = 0x266eacu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_266eb0:
    // 0x266eb0: 0xc0b47da
label_266eb4:
    if (ctx->pc == 0x266EB4u) {
        ctx->pc = 0x266EB4u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->pc = 0x266EB8u;
        goto label_266eb8;
    }
    ctx->pc = 0x266EB0u;
    SET_GPR_U32(ctx, 31, 0x266EB8u);
    ctx->pc = 0x266EB4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266EB8u; }
    }
    if (ctx->pc != 0x266EB8u) { return; }
    ctx->pc = 0x266EB8u;
label_266eb8:
    // 0x266eb8: 0x10000033
label_266ebc:
    if (ctx->pc == 0x266EBCu) {
        ctx->pc = 0x266EBCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x266EC0u;
        goto label_266ec0;
    }
    ctx->pc = 0x266EB8u;
    {
        const bool branch_taken_0x266eb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266EBCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x266eb8) {
            ctx->pc = 0x266F88u;
            goto label_266f88;
        }
    }
    ctx->pc = 0x266EC0u;
label_266ec0:
    // 0x266ec0: 0x3c020034
    ctx->pc = 0x266ec0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_266ec4:
    // 0x266ec4: 0x2442e9d0
    ctx->pc = 0x266ec4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961616));
label_266ec8:
    // 0x266ec8: 0x111880
    ctx->pc = 0x266ec8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_266ecc:
    // 0x266ecc: 0x621821
    ctx->pc = 0x266eccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266ed0:
    // 0x266ed0: 0x8e080000
    ctx->pc = 0x266ed0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_266ed4:
    // 0x266ed4: 0xc60000f0
    ctx->pc = 0x266ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266ed8:
    // 0x266ed8: 0x2404000e
    ctx->pc = 0x266ed8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_266edc:
    // 0x266edc: 0x2665fffa
    ctx->pc = 0x266edcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967290));
label_266ee0:
    // 0x266ee0: 0x3c06003b
    ctx->pc = 0x266ee0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266ee4:
    // 0x266ee4: 0x24c6a508
    ctx->pc = 0x266ee4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944008));
label_266ee8:
    // 0x266ee8: 0x8c670000
    ctx->pc = 0x266ee8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_266eec:
    // 0x266eec: 0x46000064
    ctx->pc = 0x266eecu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_266ef0:
    // 0x266ef0: 0x44090800
    ctx->pc = 0x266ef0u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[1]);
label_266ef4:
    // 0x266ef4: 0xc0b47da
label_266ef8:
    if (ctx->pc == 0x266EF8u) {
        ctx->pc = 0x266EF8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 40));
        ctx->pc = 0x266EFCu;
        goto label_266efc;
    }
    ctx->pc = 0x266EF4u;
    SET_GPR_U32(ctx, 31, 0x266EFCu);
    ctx->pc = 0x266EF8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 40));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266EFCu; }
    }
    if (ctx->pc != 0x266EFCu) { return; }
    ctx->pc = 0x266EFCu;
label_266efc:
    // 0x266efc: 0x10000022
label_266f00:
    if (ctx->pc == 0x266F00u) {
        ctx->pc = 0x266F00u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x266F04u;
        goto label_266f04;
    }
    ctx->pc = 0x266EFCu;
    {
        const bool branch_taken_0x266efc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266F00u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x266efc) {
            ctx->pc = 0x266F88u;
            goto label_266f88;
        }
    }
    ctx->pc = 0x266F04u;
label_266f04:
    // 0x266f04: 0x8e020000
    ctx->pc = 0x266f04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_266f08:
    // 0x266f08: 0x8c440004
    ctx->pc = 0x266f08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_266f0c:
    // 0x266f0c: 0x2402ffff
    ctx->pc = 0x266f0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_266f10:
    // 0x266f10: 0x44102a
    ctx->pc = 0x266f10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
label_266f14:
    // 0x266f14: 0x2200a
    ctx->pc = 0x266f14u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
label_266f18:
    // 0x266f18: 0x3c020034
    ctx->pc = 0x266f18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_266f1c:
    // 0x266f1c: 0x2442e9d0
    ctx->pc = 0x266f1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961616));
label_266f20:
    // 0x266f20: 0x113880
    ctx->pc = 0x266f20u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 17), 2));
label_266f24:
    // 0x266f24: 0xe23821
    ctx->pc = 0x266f24u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_266f28:
    // 0x266f28: 0x3c020034
    ctx->pc = 0x266f28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_266f2c:
    // 0x266f2c: 0x2442ea08
    ctx->pc = 0x266f2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961672));
label_266f30:
    // 0x266f30: 0x41880
    ctx->pc = 0x266f30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_266f34:
    // 0x266f34: 0x621821
    ctx->pc = 0x266f34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266f38:
    // 0x266f38: 0x2404000e
    ctx->pc = 0x266f38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_266f3c:
    // 0x266f3c: 0x2665fffa
    ctx->pc = 0x266f3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967290));
label_266f40:
    // 0x266f40: 0x3c06003b
    ctx->pc = 0x266f40u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266f44:
    // 0x266f44: 0x24c6a450
    ctx->pc = 0x266f44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943824));
label_266f48:
    // 0x266f48: 0x8ce70000
    ctx->pc = 0x266f48u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_266f4c:
    // 0x266f4c: 0xc0b47da
label_266f50:
    if (ctx->pc == 0x266F50u) {
        ctx->pc = 0x266F50u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x266F54u;
        goto label_266f54;
    }
    ctx->pc = 0x266F4Cu;
    SET_GPR_U32(ctx, 31, 0x266F54u);
    ctx->pc = 0x266F50u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266F54u; }
    }
    if (ctx->pc != 0x266F54u) { return; }
    ctx->pc = 0x266F54u;
label_266f54:
    // 0x266f54: 0x1000000c
label_266f58:
    if (ctx->pc == 0x266F58u) {
        ctx->pc = 0x266F58u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x266F5Cu;
        goto label_266f5c;
    }
    ctx->pc = 0x266F54u;
    {
        const bool branch_taken_0x266f54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266F58u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x266f54) {
            ctx->pc = 0x266F88u;
            goto label_266f88;
        }
    }
    ctx->pc = 0x266F5Cu;
label_266f5c:
    // 0x266f5c: 0x24040012
    ctx->pc = 0x266f5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
label_266f60:
    // 0x266f60: 0x2665fff9
    ctx->pc = 0x266f60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967289));
label_266f64:
    // 0x266f64: 0x3c06003b
    ctx->pc = 0x266f64u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266f68:
    // 0x266f68: 0xc0b47da
label_266f6c:
    if (ctx->pc == 0x266F6Cu) {
        ctx->pc = 0x266F6Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944040));
        ctx->pc = 0x266F70u;
        goto label_266f70;
    }
    ctx->pc = 0x266F68u;
    SET_GPR_U32(ctx, 31, 0x266F70u);
    ctx->pc = 0x266F6Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944040));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266F70u; }
    }
    if (ctx->pc != 0x266F70u) { return; }
    ctx->pc = 0x266F70u;
label_266f70:
    // 0x266f70: 0x2404000e
    ctx->pc = 0x266f70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_266f74:
    // 0x266f74: 0x2665fffa
    ctx->pc = 0x266f74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967290));
label_266f78:
    // 0x266f78: 0x3c06003b
    ctx->pc = 0x266f78u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266f7c:
    // 0x266f7c: 0xc0b47da
label_266f80:
    if (ctx->pc == 0x266F80u) {
        ctx->pc = 0x266F80u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943536));
        ctx->pc = 0x266F84u;
        goto label_266f84;
    }
    ctx->pc = 0x266F7Cu;
    SET_GPR_U32(ctx, 31, 0x266F84u);
    ctx->pc = 0x266F80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943536));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266F84u; }
    }
    if (ctx->pc != 0x266F84u) { return; }
    ctx->pc = 0x266F84u;
label_266f84:
    // 0x266f84: 0x24040001
    ctx->pc = 0x266f84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_266f88:
    // 0x266f88: 0x2665fffa
    ctx->pc = 0x266f88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967290));
label_266f8c:
    // 0x266f8c: 0x3c06003b
    ctx->pc = 0x266f8cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_266f90:
    // 0x266f90: 0x24c6a538
    ctx->pc = 0x266f90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944056));
label_266f94:
    // 0x266f94: 0xc0b47da
label_266f98:
    if (ctx->pc == 0x266F98u) {
        ctx->pc = 0x266F98u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 220)));
        ctx->pc = 0x266F9Cu;
        goto label_266f9c;
    }
    ctx->pc = 0x266F94u;
    SET_GPR_U32(ctx, 31, 0x266F9Cu);
    ctx->pc = 0x266F98u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 220)));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266F9Cu; }
    }
    if (ctx->pc != 0x266F9Cu) { return; }
    ctx->pc = 0x266F9Cu;
label_266f9c:
    // 0x266f9c: 0x2404ffff
    ctx->pc = 0x266f9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_266fa0:
    // 0x266fa0: 0xdfbf0050
    ctx->pc = 0x266fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_266fa4:
    // 0x266fa4: 0xdfb40040
    ctx->pc = 0x266fa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_266fa8:
    // 0x266fa8: 0xdfb30030
    ctx->pc = 0x266fa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_266fac:
    // 0x266fac: 0xdfb20020
    ctx->pc = 0x266facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_266fb0:
    // 0x266fb0: 0xdfb10010
    ctx->pc = 0x266fb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_266fb4:
    // 0x266fb4: 0xdfb00000
    ctx->pc = 0x266fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_266fb8:
    // 0x266fb8: 0xc7b40060
    ctx->pc = 0x266fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_266fbc:
    // 0x266fbc: 0x80b46e2
label_266fc0:
    if (ctx->pc == 0x266FC0u) {
        ctx->pc = 0x266FC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x266FC4u;
        goto label_266fc4;
    }
    ctx->pc = 0x266FBCu;
    ctx->pc = 0x266FC0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x2D1B88u;
    text_set_color_0x2d1b88(rdram, ctx, runtime); return;
    ctx->pc = 0x266FC4u;
label_266fc4:
    // 0x266fc4: 0xdfbf0050
    ctx->pc = 0x266fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_266fc8:
    // 0x266fc8: 0xdfb40040
    ctx->pc = 0x266fc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_266fcc:
    // 0x266fcc: 0xdfb30030
    ctx->pc = 0x266fccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_266fd0:
    // 0x266fd0: 0xdfb20020
    ctx->pc = 0x266fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_266fd4:
    // 0x266fd4: 0xdfb10010
    ctx->pc = 0x266fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_266fd8:
    // 0x266fd8: 0xdfb00000
    ctx->pc = 0x266fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_266fdc:
    // 0x266fdc: 0xc7b40060
    ctx->pc = 0x266fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_266fe0:
    // 0x266fe0: 0x3e00008
label_266fe4:
    if (ctx->pc == 0x266FE4u) {
        ctx->pc = 0x266FE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x266FE8u;
        goto label_fallthrough_0x266fe0;
    }
    ctx->pc = 0x266FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266FE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x266610u: goto label_266610;
            case 0x266614u: goto label_266614;
            case 0x266618u: goto label_266618;
            case 0x26661Cu: goto label_26661c;
            case 0x266620u: goto label_266620;
            case 0x266624u: goto label_266624;
            case 0x266628u: goto label_266628;
            case 0x26662Cu: goto label_26662c;
            case 0x266630u: goto label_266630;
            case 0x266634u: goto label_266634;
            case 0x266638u: goto label_266638;
            case 0x26663Cu: goto label_26663c;
            case 0x266640u: goto label_266640;
            case 0x266644u: goto label_266644;
            case 0x266648u: goto label_266648;
            case 0x26664Cu: goto label_26664c;
            case 0x266650u: goto label_266650;
            case 0x266654u: goto label_266654;
            case 0x266658u: goto label_266658;
            case 0x26665Cu: goto label_26665c;
            case 0x266660u: goto label_266660;
            case 0x266664u: goto label_266664;
            case 0x266668u: goto label_266668;
            case 0x26666Cu: goto label_26666c;
            case 0x266670u: goto label_266670;
            case 0x266674u: goto label_266674;
            case 0x266678u: goto label_266678;
            case 0x26667Cu: goto label_26667c;
            case 0x266680u: goto label_266680;
            case 0x266684u: goto label_266684;
            case 0x266688u: goto label_266688;
            case 0x26668Cu: goto label_26668c;
            case 0x266690u: goto label_266690;
            case 0x266694u: goto label_266694;
            case 0x266698u: goto label_266698;
            case 0x26669Cu: goto label_26669c;
            case 0x2666A0u: goto label_2666a0;
            case 0x2666A4u: goto label_2666a4;
            case 0x2666A8u: goto label_2666a8;
            case 0x2666ACu: goto label_2666ac;
            case 0x2666B0u: goto label_2666b0;
            case 0x2666B4u: goto label_2666b4;
            case 0x2666B8u: goto label_2666b8;
            case 0x2666BCu: goto label_2666bc;
            case 0x2666C0u: goto label_2666c0;
            case 0x2666C4u: goto label_2666c4;
            case 0x2666C8u: goto label_2666c8;
            case 0x2666CCu: goto label_2666cc;
            case 0x2666D0u: goto label_2666d0;
            case 0x2666D4u: goto label_2666d4;
            case 0x2666D8u: goto label_2666d8;
            case 0x2666DCu: goto label_2666dc;
            case 0x2666E0u: goto label_2666e0;
            case 0x2666E4u: goto label_2666e4;
            case 0x2666E8u: goto label_2666e8;
            case 0x2666ECu: goto label_2666ec;
            case 0x2666F0u: goto label_2666f0;
            case 0x2666F4u: goto label_2666f4;
            case 0x2666F8u: goto label_2666f8;
            case 0x2666FCu: goto label_2666fc;
            case 0x266700u: goto label_266700;
            case 0x266704u: goto label_266704;
            case 0x266708u: goto label_266708;
            case 0x26670Cu: goto label_26670c;
            case 0x266710u: goto label_266710;
            case 0x266714u: goto label_266714;
            case 0x266718u: goto label_266718;
            case 0x26671Cu: goto label_26671c;
            case 0x266720u: goto label_266720;
            case 0x266724u: goto label_266724;
            case 0x266728u: goto label_266728;
            case 0x26672Cu: goto label_26672c;
            case 0x266730u: goto label_266730;
            case 0x266734u: goto label_266734;
            case 0x266738u: goto label_266738;
            case 0x26673Cu: goto label_26673c;
            case 0x266740u: goto label_266740;
            case 0x266744u: goto label_266744;
            case 0x266748u: goto label_266748;
            case 0x26674Cu: goto label_26674c;
            case 0x266750u: goto label_266750;
            case 0x266754u: goto label_266754;
            case 0x266758u: goto label_266758;
            case 0x26675Cu: goto label_26675c;
            case 0x266760u: goto label_266760;
            case 0x266764u: goto label_266764;
            case 0x266768u: goto label_266768;
            case 0x26676Cu: goto label_26676c;
            case 0x266770u: goto label_266770;
            case 0x266774u: goto label_266774;
            case 0x266778u: goto label_266778;
            case 0x26677Cu: goto label_26677c;
            case 0x266780u: goto label_266780;
            case 0x266784u: goto label_266784;
            case 0x266788u: goto label_266788;
            case 0x26678Cu: goto label_26678c;
            case 0x266790u: goto label_266790;
            case 0x266794u: goto label_266794;
            case 0x266798u: goto label_266798;
            case 0x26679Cu: goto label_26679c;
            case 0x2667A0u: goto label_2667a0;
            case 0x2667A4u: goto label_2667a4;
            case 0x2667A8u: goto label_2667a8;
            case 0x2667ACu: goto label_2667ac;
            case 0x2667B0u: goto label_2667b0;
            case 0x2667B4u: goto label_2667b4;
            case 0x2667B8u: goto label_2667b8;
            case 0x2667BCu: goto label_2667bc;
            case 0x2667C0u: goto label_2667c0;
            case 0x2667C4u: goto label_2667c4;
            case 0x2667C8u: goto label_2667c8;
            case 0x2667CCu: goto label_2667cc;
            case 0x2667D0u: goto label_2667d0;
            case 0x2667D4u: goto label_2667d4;
            case 0x2667D8u: goto label_2667d8;
            case 0x2667DCu: goto label_2667dc;
            case 0x2667E0u: goto label_2667e0;
            case 0x2667E4u: goto label_2667e4;
            case 0x2667E8u: goto label_2667e8;
            case 0x2667ECu: goto label_2667ec;
            case 0x2667F0u: goto label_2667f0;
            case 0x2667F4u: goto label_2667f4;
            case 0x2667F8u: goto label_2667f8;
            case 0x2667FCu: goto label_2667fc;
            case 0x266800u: goto label_266800;
            case 0x266804u: goto label_266804;
            case 0x266808u: goto label_266808;
            case 0x26680Cu: goto label_26680c;
            case 0x266810u: goto label_266810;
            case 0x266814u: goto label_266814;
            case 0x266818u: goto label_266818;
            case 0x26681Cu: goto label_26681c;
            case 0x266820u: goto label_266820;
            case 0x266824u: goto label_266824;
            case 0x266828u: goto label_266828;
            case 0x26682Cu: goto label_26682c;
            case 0x266830u: goto label_266830;
            case 0x266834u: goto label_266834;
            case 0x266838u: goto label_266838;
            case 0x26683Cu: goto label_26683c;
            case 0x266840u: goto label_266840;
            case 0x266844u: goto label_266844;
            case 0x266848u: goto label_266848;
            case 0x26684Cu: goto label_26684c;
            case 0x266850u: goto label_266850;
            case 0x266854u: goto label_266854;
            case 0x266858u: goto label_266858;
            case 0x26685Cu: goto label_26685c;
            case 0x266860u: goto label_266860;
            case 0x266864u: goto label_266864;
            case 0x266868u: goto label_266868;
            case 0x26686Cu: goto label_26686c;
            case 0x266870u: goto label_266870;
            case 0x266874u: goto label_266874;
            case 0x266878u: goto label_266878;
            case 0x26687Cu: goto label_26687c;
            case 0x266880u: goto label_266880;
            case 0x266884u: goto label_266884;
            case 0x266888u: goto label_266888;
            case 0x26688Cu: goto label_26688c;
            case 0x266890u: goto label_266890;
            case 0x266894u: goto label_266894;
            case 0x266898u: goto label_266898;
            case 0x26689Cu: goto label_26689c;
            case 0x2668A0u: goto label_2668a0;
            case 0x2668A4u: goto label_2668a4;
            case 0x2668A8u: goto label_2668a8;
            case 0x2668ACu: goto label_2668ac;
            case 0x2668B0u: goto label_2668b0;
            case 0x2668B4u: goto label_2668b4;
            case 0x2668B8u: goto label_2668b8;
            case 0x2668BCu: goto label_2668bc;
            case 0x2668C0u: goto label_2668c0;
            case 0x2668C4u: goto label_2668c4;
            case 0x2668C8u: goto label_2668c8;
            case 0x2668CCu: goto label_2668cc;
            case 0x2668D0u: goto label_2668d0;
            case 0x2668D4u: goto label_2668d4;
            case 0x2668D8u: goto label_2668d8;
            case 0x2668DCu: goto label_2668dc;
            case 0x2668E0u: goto label_2668e0;
            case 0x2668E4u: goto label_2668e4;
            case 0x2668E8u: goto label_2668e8;
            case 0x2668ECu: goto label_2668ec;
            case 0x2668F0u: goto label_2668f0;
            case 0x2668F4u: goto label_2668f4;
            case 0x2668F8u: goto label_2668f8;
            case 0x2668FCu: goto label_2668fc;
            case 0x266900u: goto label_266900;
            case 0x266904u: goto label_266904;
            case 0x266908u: goto label_266908;
            case 0x26690Cu: goto label_26690c;
            case 0x266910u: goto label_266910;
            case 0x266914u: goto label_266914;
            case 0x266918u: goto label_266918;
            case 0x26691Cu: goto label_26691c;
            case 0x266920u: goto label_266920;
            case 0x266924u: goto label_266924;
            case 0x266928u: goto label_266928;
            case 0x26692Cu: goto label_26692c;
            case 0x266930u: goto label_266930;
            case 0x266934u: goto label_266934;
            case 0x266938u: goto label_266938;
            case 0x26693Cu: goto label_26693c;
            case 0x266940u: goto label_266940;
            case 0x266944u: goto label_266944;
            case 0x266948u: goto label_266948;
            case 0x26694Cu: goto label_26694c;
            case 0x266950u: goto label_266950;
            case 0x266954u: goto label_266954;
            case 0x266958u: goto label_266958;
            case 0x26695Cu: goto label_26695c;
            case 0x266960u: goto label_266960;
            case 0x266964u: goto label_266964;
            case 0x266968u: goto label_266968;
            case 0x26696Cu: goto label_26696c;
            case 0x266970u: goto label_266970;
            case 0x266974u: goto label_266974;
            case 0x266978u: goto label_266978;
            case 0x26697Cu: goto label_26697c;
            case 0x266980u: goto label_266980;
            case 0x266984u: goto label_266984;
            case 0x266988u: goto label_266988;
            case 0x26698Cu: goto label_26698c;
            case 0x266990u: goto label_266990;
            case 0x266994u: goto label_266994;
            case 0x266998u: goto label_266998;
            case 0x26699Cu: goto label_26699c;
            case 0x2669A0u: goto label_2669a0;
            case 0x2669A4u: goto label_2669a4;
            case 0x2669A8u: goto label_2669a8;
            case 0x2669ACu: goto label_2669ac;
            case 0x2669B0u: goto label_2669b0;
            case 0x2669B4u: goto label_2669b4;
            case 0x2669B8u: goto label_2669b8;
            case 0x2669BCu: goto label_2669bc;
            case 0x2669C0u: goto label_2669c0;
            case 0x2669C4u: goto label_2669c4;
            case 0x2669C8u: goto label_2669c8;
            case 0x2669CCu: goto label_2669cc;
            case 0x2669D0u: goto label_2669d0;
            case 0x2669D4u: goto label_2669d4;
            case 0x2669D8u: goto label_2669d8;
            case 0x2669DCu: goto label_2669dc;
            case 0x2669E0u: goto label_2669e0;
            case 0x2669E4u: goto label_2669e4;
            case 0x2669E8u: goto label_2669e8;
            case 0x2669ECu: goto label_2669ec;
            case 0x2669F0u: goto label_2669f0;
            case 0x2669F4u: goto label_2669f4;
            case 0x2669F8u: goto label_2669f8;
            case 0x2669FCu: goto label_2669fc;
            case 0x266A00u: goto label_266a00;
            case 0x266A04u: goto label_266a04;
            case 0x266A08u: goto label_266a08;
            case 0x266A0Cu: goto label_266a0c;
            case 0x266A10u: goto label_266a10;
            case 0x266A14u: goto label_266a14;
            case 0x266A18u: goto label_266a18;
            case 0x266A1Cu: goto label_266a1c;
            case 0x266A20u: goto label_266a20;
            case 0x266A24u: goto label_266a24;
            case 0x266A28u: goto label_266a28;
            case 0x266A2Cu: goto label_266a2c;
            case 0x266A30u: goto label_266a30;
            case 0x266A34u: goto label_266a34;
            case 0x266A38u: goto label_266a38;
            case 0x266A3Cu: goto label_266a3c;
            case 0x266A40u: goto label_266a40;
            case 0x266A44u: goto label_266a44;
            case 0x266A48u: goto label_266a48;
            case 0x266A4Cu: goto label_266a4c;
            case 0x266A50u: goto label_266a50;
            case 0x266A54u: goto label_266a54;
            case 0x266A58u: goto label_266a58;
            case 0x266A5Cu: goto label_266a5c;
            case 0x266A60u: goto label_266a60;
            case 0x266A64u: goto label_266a64;
            case 0x266A68u: goto label_266a68;
            case 0x266A6Cu: goto label_266a6c;
            case 0x266A70u: goto label_266a70;
            case 0x266A74u: goto label_266a74;
            case 0x266A78u: goto label_266a78;
            case 0x266A7Cu: goto label_266a7c;
            case 0x266A80u: goto label_266a80;
            case 0x266A84u: goto label_266a84;
            case 0x266A88u: goto label_266a88;
            case 0x266A8Cu: goto label_266a8c;
            case 0x266A90u: goto label_266a90;
            case 0x266A94u: goto label_266a94;
            case 0x266A98u: goto label_266a98;
            case 0x266A9Cu: goto label_266a9c;
            case 0x266AA0u: goto label_266aa0;
            case 0x266AA4u: goto label_266aa4;
            case 0x266AA8u: goto label_266aa8;
            case 0x266AACu: goto label_266aac;
            case 0x266AB0u: goto label_266ab0;
            case 0x266AB4u: goto label_266ab4;
            case 0x266AB8u: goto label_266ab8;
            case 0x266ABCu: goto label_266abc;
            case 0x266AC0u: goto label_266ac0;
            case 0x266AC4u: goto label_266ac4;
            case 0x266AC8u: goto label_266ac8;
            case 0x266ACCu: goto label_266acc;
            case 0x266AD0u: goto label_266ad0;
            case 0x266AD4u: goto label_266ad4;
            case 0x266AD8u: goto label_266ad8;
            case 0x266ADCu: goto label_266adc;
            case 0x266AE0u: goto label_266ae0;
            case 0x266AE4u: goto label_266ae4;
            case 0x266AE8u: goto label_266ae8;
            case 0x266AECu: goto label_266aec;
            case 0x266AF0u: goto label_266af0;
            case 0x266AF4u: goto label_266af4;
            case 0x266AF8u: goto label_266af8;
            case 0x266AFCu: goto label_266afc;
            case 0x266B00u: goto label_266b00;
            case 0x266B04u: goto label_266b04;
            case 0x266B08u: goto label_266b08;
            case 0x266B0Cu: goto label_266b0c;
            case 0x266B10u: goto label_266b10;
            case 0x266B14u: goto label_266b14;
            case 0x266B18u: goto label_266b18;
            case 0x266B1Cu: goto label_266b1c;
            case 0x266B20u: goto label_266b20;
            case 0x266B24u: goto label_266b24;
            case 0x266B28u: goto label_266b28;
            case 0x266B2Cu: goto label_266b2c;
            case 0x266B30u: goto label_266b30;
            case 0x266B34u: goto label_266b34;
            case 0x266B38u: goto label_266b38;
            case 0x266B3Cu: goto label_266b3c;
            case 0x266B40u: goto label_266b40;
            case 0x266B44u: goto label_266b44;
            case 0x266B48u: goto label_266b48;
            case 0x266B4Cu: goto label_266b4c;
            case 0x266B50u: goto label_266b50;
            case 0x266B54u: goto label_266b54;
            case 0x266B58u: goto label_266b58;
            case 0x266B5Cu: goto label_266b5c;
            case 0x266B60u: goto label_266b60;
            case 0x266B64u: goto label_266b64;
            case 0x266B68u: goto label_266b68;
            case 0x266B6Cu: goto label_266b6c;
            case 0x266B70u: goto label_266b70;
            case 0x266B74u: goto label_266b74;
            case 0x266B78u: goto label_266b78;
            case 0x266B7Cu: goto label_266b7c;
            case 0x266B80u: goto label_266b80;
            case 0x266B84u: goto label_266b84;
            case 0x266B88u: goto label_266b88;
            case 0x266B8Cu: goto label_266b8c;
            case 0x266B90u: goto label_266b90;
            case 0x266B94u: goto label_266b94;
            case 0x266B98u: goto label_266b98;
            case 0x266B9Cu: goto label_266b9c;
            case 0x266BA0u: goto label_266ba0;
            case 0x266BA4u: goto label_266ba4;
            case 0x266BA8u: goto label_266ba8;
            case 0x266BACu: goto label_266bac;
            case 0x266BB0u: goto label_266bb0;
            case 0x266BB4u: goto label_266bb4;
            case 0x266BB8u: goto label_266bb8;
            case 0x266BBCu: goto label_266bbc;
            case 0x266BC0u: goto label_266bc0;
            case 0x266BC4u: goto label_266bc4;
            case 0x266BC8u: goto label_266bc8;
            case 0x266BCCu: goto label_266bcc;
            case 0x266BD0u: goto label_266bd0;
            case 0x266BD4u: goto label_266bd4;
            case 0x266BD8u: goto label_266bd8;
            case 0x266BDCu: goto label_266bdc;
            case 0x266BE0u: goto label_266be0;
            case 0x266BE4u: goto label_266be4;
            case 0x266BE8u: goto label_266be8;
            case 0x266BECu: goto label_266bec;
            case 0x266BF0u: goto label_266bf0;
            case 0x266BF4u: goto label_266bf4;
            case 0x266BF8u: goto label_266bf8;
            case 0x266BFCu: goto label_266bfc;
            case 0x266C00u: goto label_266c00;
            case 0x266C04u: goto label_266c04;
            case 0x266C08u: goto label_266c08;
            case 0x266C0Cu: goto label_266c0c;
            case 0x266C10u: goto label_266c10;
            case 0x266C14u: goto label_266c14;
            case 0x266C18u: goto label_266c18;
            case 0x266C1Cu: goto label_266c1c;
            case 0x266C20u: goto label_266c20;
            case 0x266C24u: goto label_266c24;
            case 0x266C28u: goto label_266c28;
            case 0x266C2Cu: goto label_266c2c;
            case 0x266C30u: goto label_266c30;
            case 0x266C34u: goto label_266c34;
            case 0x266C38u: goto label_266c38;
            case 0x266C3Cu: goto label_266c3c;
            case 0x266C40u: goto label_266c40;
            case 0x266C44u: goto label_266c44;
            case 0x266C48u: goto label_266c48;
            case 0x266C4Cu: goto label_266c4c;
            case 0x266C50u: goto label_266c50;
            case 0x266C54u: goto label_266c54;
            case 0x266C58u: goto label_266c58;
            case 0x266C5Cu: goto label_266c5c;
            case 0x266C60u: goto label_266c60;
            case 0x266C64u: goto label_266c64;
            case 0x266C68u: goto label_266c68;
            case 0x266C6Cu: goto label_266c6c;
            case 0x266C70u: goto label_266c70;
            case 0x266C74u: goto label_266c74;
            case 0x266C78u: goto label_266c78;
            case 0x266C7Cu: goto label_266c7c;
            case 0x266C80u: goto label_266c80;
            case 0x266C84u: goto label_266c84;
            case 0x266C88u: goto label_266c88;
            case 0x266C8Cu: goto label_266c8c;
            case 0x266C90u: goto label_266c90;
            case 0x266C94u: goto label_266c94;
            case 0x266C98u: goto label_266c98;
            case 0x266C9Cu: goto label_266c9c;
            case 0x266CA0u: goto label_266ca0;
            case 0x266CA4u: goto label_266ca4;
            case 0x266CA8u: goto label_266ca8;
            case 0x266CACu: goto label_266cac;
            case 0x266CB0u: goto label_266cb0;
            case 0x266CB4u: goto label_266cb4;
            case 0x266CB8u: goto label_266cb8;
            case 0x266CBCu: goto label_266cbc;
            case 0x266CC0u: goto label_266cc0;
            case 0x266CC4u: goto label_266cc4;
            case 0x266CC8u: goto label_266cc8;
            case 0x266CCCu: goto label_266ccc;
            case 0x266CD0u: goto label_266cd0;
            case 0x266CD4u: goto label_266cd4;
            case 0x266CD8u: goto label_266cd8;
            case 0x266CDCu: goto label_266cdc;
            case 0x266CE0u: goto label_266ce0;
            case 0x266CE4u: goto label_266ce4;
            case 0x266CE8u: goto label_266ce8;
            case 0x266CECu: goto label_266cec;
            case 0x266CF0u: goto label_266cf0;
            case 0x266CF4u: goto label_266cf4;
            case 0x266CF8u: goto label_266cf8;
            case 0x266CFCu: goto label_266cfc;
            case 0x266D00u: goto label_266d00;
            case 0x266D04u: goto label_266d04;
            case 0x266D08u: goto label_266d08;
            case 0x266D0Cu: goto label_266d0c;
            case 0x266D10u: goto label_266d10;
            case 0x266D14u: goto label_266d14;
            case 0x266D18u: goto label_266d18;
            case 0x266D1Cu: goto label_266d1c;
            case 0x266D20u: goto label_266d20;
            case 0x266D24u: goto label_266d24;
            case 0x266D28u: goto label_266d28;
            case 0x266D2Cu: goto label_266d2c;
            case 0x266D30u: goto label_266d30;
            case 0x266D34u: goto label_266d34;
            case 0x266D38u: goto label_266d38;
            case 0x266D3Cu: goto label_266d3c;
            case 0x266D40u: goto label_266d40;
            case 0x266D44u: goto label_266d44;
            case 0x266D48u: goto label_266d48;
            case 0x266D4Cu: goto label_266d4c;
            case 0x266D50u: goto label_266d50;
            case 0x266D54u: goto label_266d54;
            case 0x266D58u: goto label_266d58;
            case 0x266D5Cu: goto label_266d5c;
            case 0x266D60u: goto label_266d60;
            case 0x266D64u: goto label_266d64;
            case 0x266D68u: goto label_266d68;
            case 0x266D6Cu: goto label_266d6c;
            case 0x266D70u: goto label_266d70;
            case 0x266D74u: goto label_266d74;
            case 0x266D78u: goto label_266d78;
            case 0x266D7Cu: goto label_266d7c;
            case 0x266D80u: goto label_266d80;
            case 0x266D84u: goto label_266d84;
            case 0x266D88u: goto label_266d88;
            case 0x266D8Cu: goto label_266d8c;
            case 0x266D90u: goto label_266d90;
            case 0x266D94u: goto label_266d94;
            case 0x266D98u: goto label_266d98;
            case 0x266D9Cu: goto label_266d9c;
            case 0x266DA0u: goto label_266da0;
            case 0x266DA4u: goto label_266da4;
            case 0x266DA8u: goto label_266da8;
            case 0x266DACu: goto label_266dac;
            case 0x266DB0u: goto label_266db0;
            case 0x266DB4u: goto label_266db4;
            case 0x266DB8u: goto label_266db8;
            case 0x266DBCu: goto label_266dbc;
            case 0x266DC0u: goto label_266dc0;
            case 0x266DC4u: goto label_266dc4;
            case 0x266DC8u: goto label_266dc8;
            case 0x266DCCu: goto label_266dcc;
            case 0x266DD0u: goto label_266dd0;
            case 0x266DD4u: goto label_266dd4;
            case 0x266DD8u: goto label_266dd8;
            case 0x266DDCu: goto label_266ddc;
            case 0x266DE0u: goto label_266de0;
            case 0x266DE4u: goto label_266de4;
            case 0x266DE8u: goto label_266de8;
            case 0x266DECu: goto label_266dec;
            case 0x266DF0u: goto label_266df0;
            case 0x266DF4u: goto label_266df4;
            case 0x266DF8u: goto label_266df8;
            case 0x266DFCu: goto label_266dfc;
            case 0x266E00u: goto label_266e00;
            case 0x266E04u: goto label_266e04;
            case 0x266E08u: goto label_266e08;
            case 0x266E0Cu: goto label_266e0c;
            case 0x266E10u: goto label_266e10;
            case 0x266E14u: goto label_266e14;
            case 0x266E18u: goto label_266e18;
            case 0x266E1Cu: goto label_266e1c;
            case 0x266E20u: goto label_266e20;
            case 0x266E24u: goto label_266e24;
            case 0x266E28u: goto label_266e28;
            case 0x266E2Cu: goto label_266e2c;
            case 0x266E30u: goto label_266e30;
            case 0x266E34u: goto label_266e34;
            case 0x266E38u: goto label_266e38;
            case 0x266E3Cu: goto label_266e3c;
            case 0x266E40u: goto label_266e40;
            case 0x266E44u: goto label_266e44;
            case 0x266E48u: goto label_266e48;
            case 0x266E4Cu: goto label_266e4c;
            case 0x266E50u: goto label_266e50;
            case 0x266E54u: goto label_266e54;
            case 0x266E58u: goto label_266e58;
            case 0x266E5Cu: goto label_266e5c;
            case 0x266E60u: goto label_266e60;
            case 0x266E64u: goto label_266e64;
            case 0x266E68u: goto label_266e68;
            case 0x266E6Cu: goto label_266e6c;
            case 0x266E70u: goto label_266e70;
            case 0x266E74u: goto label_266e74;
            case 0x266E78u: goto label_266e78;
            case 0x266E7Cu: goto label_266e7c;
            case 0x266E80u: goto label_266e80;
            case 0x266E84u: goto label_266e84;
            case 0x266E88u: goto label_266e88;
            case 0x266E8Cu: goto label_266e8c;
            case 0x266E90u: goto label_266e90;
            case 0x266E94u: goto label_266e94;
            case 0x266E98u: goto label_266e98;
            case 0x266E9Cu: goto label_266e9c;
            case 0x266EA0u: goto label_266ea0;
            case 0x266EA4u: goto label_266ea4;
            case 0x266EA8u: goto label_266ea8;
            case 0x266EACu: goto label_266eac;
            case 0x266EB0u: goto label_266eb0;
            case 0x266EB4u: goto label_266eb4;
            case 0x266EB8u: goto label_266eb8;
            case 0x266EBCu: goto label_266ebc;
            case 0x266EC0u: goto label_266ec0;
            case 0x266EC4u: goto label_266ec4;
            case 0x266EC8u: goto label_266ec8;
            case 0x266ECCu: goto label_266ecc;
            case 0x266ED0u: goto label_266ed0;
            case 0x266ED4u: goto label_266ed4;
            case 0x266ED8u: goto label_266ed8;
            case 0x266EDCu: goto label_266edc;
            case 0x266EE0u: goto label_266ee0;
            case 0x266EE4u: goto label_266ee4;
            case 0x266EE8u: goto label_266ee8;
            case 0x266EECu: goto label_266eec;
            case 0x266EF0u: goto label_266ef0;
            case 0x266EF4u: goto label_266ef4;
            case 0x266EF8u: goto label_266ef8;
            case 0x266EFCu: goto label_266efc;
            case 0x266F00u: goto label_266f00;
            case 0x266F04u: goto label_266f04;
            case 0x266F08u: goto label_266f08;
            case 0x266F0Cu: goto label_266f0c;
            case 0x266F10u: goto label_266f10;
            case 0x266F14u: goto label_266f14;
            case 0x266F18u: goto label_266f18;
            case 0x266F1Cu: goto label_266f1c;
            case 0x266F20u: goto label_266f20;
            case 0x266F24u: goto label_266f24;
            case 0x266F28u: goto label_266f28;
            case 0x266F2Cu: goto label_266f2c;
            case 0x266F30u: goto label_266f30;
            case 0x266F34u: goto label_266f34;
            case 0x266F38u: goto label_266f38;
            case 0x266F3Cu: goto label_266f3c;
            case 0x266F40u: goto label_266f40;
            case 0x266F44u: goto label_266f44;
            case 0x266F48u: goto label_266f48;
            case 0x266F4Cu: goto label_266f4c;
            case 0x266F50u: goto label_266f50;
            case 0x266F54u: goto label_266f54;
            case 0x266F58u: goto label_266f58;
            case 0x266F5Cu: goto label_266f5c;
            case 0x266F60u: goto label_266f60;
            case 0x266F64u: goto label_266f64;
            case 0x266F68u: goto label_266f68;
            case 0x266F6Cu: goto label_266f6c;
            case 0x266F70u: goto label_266f70;
            case 0x266F74u: goto label_266f74;
            case 0x266F78u: goto label_266f78;
            case 0x266F7Cu: goto label_266f7c;
            case 0x266F80u: goto label_266f80;
            case 0x266F84u: goto label_266f84;
            case 0x266F88u: goto label_266f88;
            case 0x266F8Cu: goto label_266f8c;
            case 0x266F90u: goto label_266f90;
            case 0x266F94u: goto label_266f94;
            case 0x266F98u: goto label_266f98;
            case 0x266F9Cu: goto label_266f9c;
            case 0x266FA0u: goto label_266fa0;
            case 0x266FA4u: goto label_266fa4;
            case 0x266FA8u: goto label_266fa8;
            case 0x266FACu: goto label_266fac;
            case 0x266FB0u: goto label_266fb0;
            case 0x266FB4u: goto label_266fb4;
            case 0x266FB8u: goto label_266fb8;
            case 0x266FBCu: goto label_266fbc;
            case 0x266FC0u: goto label_266fc0;
            case 0x266FC4u: goto label_266fc4;
            case 0x266FC8u: goto label_266fc8;
            case 0x266FCCu: goto label_266fcc;
            case 0x266FD0u: goto label_266fd0;
            case 0x266FD4u: goto label_266fd4;
            case 0x266FD8u: goto label_266fd8;
            case 0x266FDCu: goto label_266fdc;
            case 0x266FE0u: goto label_266fe0;
            case 0x266FE4u: goto label_266fe4;
            default: break;
        }
        return;
    }
label_fallthrough_0x266fe0:
    ctx->pc = 0x266FE8u;
}
