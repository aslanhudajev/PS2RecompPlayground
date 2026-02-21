#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic04
// Address: 0x2419a0 - 0x241bb4
void move_logic04_0x2419a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2419a0u;

    // 0x2419a0: 0x27bdffd0
    ctx->pc = 0x2419a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2419a4: 0xffbf0020
    ctx->pc = 0x2419a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2419a8: 0xffb10010
    ctx->pc = 0x2419a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2419ac: 0xffb00000
    ctx->pc = 0x2419acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2419b0: 0x80882d
    ctx->pc = 0x2419b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2419b4: 0x240303b0
    ctx->pc = 0x2419b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x2419b8: 0x2231818
    ctx->pc = 0x2419b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2419bc: 0x3c020033
    ctx->pc = 0x2419bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2419c0: 0x2442dfd0
    ctx->pc = 0x2419c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x2419c4: 0xc08ed18
    ctx->pc = 0x2419C4u;
    SET_GPR_U32(ctx, 31, 0x2419CCu);
    ctx->pc = 0x2419C8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2419CCu; }
    }
    if (ctx->pc != 0x2419CCu) { return; }
    ctx->pc = 0x2419CCu;
    // 0x2419cc: 0x50400009
    ctx->pc = 0x2419CCu;
    {
        const bool branch_taken_0x2419cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2419cc) {
            ctx->pc = 0x2419D0u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
            ctx->pc = 0x2419F4u;
            goto label_2419f4;
        }
    }
    ctx->pc = 0x2419D4u;
    // 0x2419d4: 0x24020018
    ctx->pc = 0x2419d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2419d8: 0xa6020324
    ctx->pc = 0x2419d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x2419dc: 0x220202d
    ctx->pc = 0x2419dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2419e0: 0xdfbf0020
    ctx->pc = 0x2419e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2419e4: 0xdfb10010
    ctx->pc = 0x2419e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2419e8: 0xdfb00000
    ctx->pc = 0x2419e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2419ec: 0x809095a
    ctx->pc = 0x2419ECu;
    ctx->pc = 0x2419F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x2419F4u;
label_2419f4:
    // 0x2419f4: 0x440000e
    ctx->pc = 0x2419F4u;
    {
        const bool branch_taken_0x2419f4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2419f4) {
            ctx->pc = 0x241A30u;
            goto label_241a30;
        }
    }
    ctx->pc = 0x2419FCu;
    // 0x2419fc: 0xc601028c
    ctx->pc = 0x2419fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241a00: 0x3c014100
    ctx->pc = 0x241a00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16640 << 16));
    // 0x241a04: 0x44810000
    ctx->pc = 0x241a04u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241a08: 0x46000836
    ctx->pc = 0x241a08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241a0c: 0x0
    ctx->pc = 0x241a0cu;
    // NOP
    // 0x241a10: 0x45000007
    ctx->pc = 0x241A10u;
    {
        const bool branch_taken_0x241a10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241A14u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x241a10) {
            ctx->pc = 0x241A30u;
            goto label_241a30;
        }
    }
    ctx->pc = 0x241A18u;
    // 0x241a18: 0xa6000324
    ctx->pc = 0x241a18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 0));
    // 0x241a1c: 0xdfbf0020
    ctx->pc = 0x241a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241a20: 0xdfb10010
    ctx->pc = 0x241a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241a24: 0xdfb00000
    ctx->pc = 0x241a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241a28: 0x809095a
    ctx->pc = 0x241A28u;
    ctx->pc = 0x241A2Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x241A30u;
label_241a30:
    // 0x241a30: 0x40034800
    ctx->pc = 0x241a30u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x241a34: 0x3c02003a
    ctx->pc = 0x241a34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x241a38: 0x8c4221d0
    ctx->pc = 0x241a38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x241a3c: 0xac4301a8
    ctx->pc = 0x241a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 424), GPR_U32(ctx, 3));
    // 0x241a40: 0x86030324
    ctx->pc = 0x241a40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x241a44: 0x86020328
    ctx->pc = 0x241a44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x241a48: 0x50620004
    ctx->pc = 0x241A48u;
    {
        const bool branch_taken_0x241a48 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x241a48) {
            ctx->pc = 0x241A4Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->pc = 0x241A5Cu;
            goto label_241a5c;
        }
    }
    ctx->pc = 0x241A50u;
    // 0x241a50: 0xc08e210
    ctx->pc = 0x241A50u;
    SET_GPR_U32(ctx, 31, 0x241A58u);
    ctx->pc = 0x241A54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241A58u; }
    }
    if (ctx->pc != 0x241A58u) { return; }
    ctx->pc = 0x241A58u;
    // 0x241a58: 0x8e03036c
    ctx->pc = 0x241a58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_241a5c:
    // 0x241a5c: 0x1860002f
    ctx->pc = 0x241A5Cu;
    {
        const bool branch_taken_0x241a5c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x241A60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x241a5c) {
            ctx->pc = 0x241B1Cu;
            goto label_241b1c;
        }
    }
    ctx->pc = 0x241A64u;
    // 0x241a64: 0x8c42ffbc
    ctx->pc = 0x241a64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x241a68: 0x621023
    ctx->pc = 0x241a68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241a6c: 0x1c40002b
    ctx->pc = 0x241A6Cu;
    {
        const bool branch_taken_0x241a6c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x241A70u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
        if (branch_taken_0x241a6c) {
            ctx->pc = 0x241B1Cu;
            goto label_241b1c;
        }
    }
    ctx->pc = 0x241A74u;
    // 0x241a74: 0xc6000260
    ctx->pc = 0x241a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241a78: 0x3c013f49
    ctx->pc = 0x241a78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16201 << 16));
    // 0x241a7c: 0x34210fdb
    ctx->pc = 0x241a7cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241a80: 0x44810800
    ctx->pc = 0x241a80u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x241a84: 0x46010041
    ctx->pc = 0x241a84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x241a88: 0x3c014049
    ctx->pc = 0x241a88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x241a8c: 0x34210fdb
    ctx->pc = 0x241a8cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241a90: 0x44810000
    ctx->pc = 0x241a90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241a94: 0x46010034
    ctx->pc = 0x241a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241a98: 0x0
    ctx->pc = 0x241a98u;
    // NOP
    // 0x241a9c: 0x45000006
    ctx->pc = 0x241A9Cu;
    {
        const bool branch_taken_0x241a9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241AA0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x241a9c) {
            ctx->pc = 0x241AB8u;
            goto label_241ab8;
        }
    }
    ctx->pc = 0x241AA4u;
    // 0x241aa4: 0x3c0140c9
    ctx->pc = 0x241aa4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x241aa8: 0x34210fdb
    ctx->pc = 0x241aa8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241aac: 0x44810000
    ctx->pc = 0x241aacu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241ab0: 0x1000000d
    ctx->pc = 0x241AB0u;
    {
        const bool branch_taken_0x241ab0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x241AB4u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x241ab0) {
            ctx->pc = 0x241AE8u;
            goto label_241ae8;
        }
    }
    ctx->pc = 0x241AB8u;
label_241ab8:
    // 0x241ab8: 0xc6010260
    ctx->pc = 0x241ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241abc: 0x3c01c049
    ctx->pc = 0x241abcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x241ac0: 0x34210fdb
    ctx->pc = 0x241ac0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241ac4: 0x44810000
    ctx->pc = 0x241ac4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241ac8: 0x46000836
    ctx->pc = 0x241ac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241acc: 0x0
    ctx->pc = 0x241accu;
    // NOP
    // 0x241ad0: 0x45020005
    ctx->pc = 0x241AD0u;
    {
        const bool branch_taken_0x241ad0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241ad0) {
            ctx->pc = 0x241AD4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x241AE8u;
            goto label_241ae8;
        }
    }
    ctx->pc = 0x241AD8u;
    // 0x241ad8: 0x3c0140c9
    ctx->pc = 0x241ad8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x241adc: 0x34210fdb
    ctx->pc = 0x241adcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241ae0: 0x44810000
    ctx->pc = 0x241ae0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241ae4: 0x46000800
    ctx->pc = 0x241ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_241ae8:
    // 0x241ae8: 0xe6000260
    ctx->pc = 0x241ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x241aec: 0x8e020370
    ctx->pc = 0x241aecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x241af0: 0x24420001
    ctx->pc = 0x241af0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x241af4: 0xae020370
    ctx->pc = 0x241af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
    // 0x241af8: 0x28420004
    ctx->pc = 0x241af8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x241afc: 0x54400008
    ctx->pc = 0x241AFCu;
    {
        const bool branch_taken_0x241afc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x241afc) {
            ctx->pc = 0x241B00u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 664)));
            ctx->pc = 0x241B20u;
            goto label_241b20;
        }
    }
    ctx->pc = 0x241B04u;
    // 0x241b04: 0xae000370
    ctx->pc = 0x241b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 0));
    // 0x241b08: 0x24020002
    ctx->pc = 0x241b08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x241b0c: 0xa6020324
    ctx->pc = 0x241b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x241b10: 0xa6020326
    ctx->pc = 0x241b10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 806), (uint16_t)GPR_U32(ctx, 2));
    // 0x241b14: 0x24020004
    ctx->pc = 0x241b14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x241b18: 0xae020388
    ctx->pc = 0x241b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 2));
label_241b1c:
    // 0x241b1c: 0x8e020298
    ctx->pc = 0x241b1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_241b20:
    // 0x241b20: 0x442000b
    ctx->pc = 0x241B20u;
    {
        const bool branch_taken_0x241b20 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x241b20) {
            ctx->pc = 0x241B24u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x241B50u;
            goto label_241b50;
        }
    }
    ctx->pc = 0x241B28u;
    // 0x241b28: 0x24042b00
    ctx->pc = 0x241b28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x241b2c: 0x442018
    ctx->pc = 0x241b2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x241b30: 0x3c020032
    ctx->pc = 0x241b30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x241b34: 0x24421be0
    ctx->pc = 0x241b34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x241b38: 0x822021
    ctx->pc = 0x241b38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x241b3c: 0x24840030
    ctx->pc = 0x241b3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 48));
    // 0x241b40: 0xc09a2aa
    ctx->pc = 0x241B40u;
    SET_GPR_U32(ctx, 31, 0x241B48u);
    ctx->pc = 0x241B44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x268AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_yaw_0x268aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B48u; }
    }
    if (ctx->pc != 0x241B48u) { return; }
    ctx->pc = 0x241B48u;
    // 0x241b48: 0xe6000260
    ctx->pc = 0x241b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x241b4c: 0x200202d
    ctx->pc = 0x241b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241b50:
    // 0x241b50: 0x3c013f80
    ctx->pc = 0x241b50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x241b54: 0x44816000
    ctx->pc = 0x241b54u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x241b58: 0xc08f14c
    ctx->pc = 0x241B58u;
    SET_GPR_U32(ctx, 31, 0x241B60u);
    ctx->pc = 0x241B5Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B60u; }
    }
    if (ctx->pc != 0x241B60u) { return; }
    ctx->pc = 0x241B60u;
    // 0x241b60: 0xc08f20c
    ctx->pc = 0x241B60u;
    SET_GPR_U32(ctx, 31, 0x241B68u);
    ctx->pc = 0x241B64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B68u; }
    }
    if (ctx->pc != 0x241B68u) { return; }
    ctx->pc = 0x241B68u;
    // 0x241b68: 0xe6000258
    ctx->pc = 0x241b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x241b6c: 0xc090e82
    ctx->pc = 0x241B6Cu;
    SET_GPR_U32(ctx, 31, 0x241B74u);
    ctx->pc = 0x241B70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B74u; }
    }
    if (ctx->pc != 0x241B74u) { return; }
    ctx->pc = 0x241B74u;
    // 0x241b74: 0x40034800
    ctx->pc = 0x241b74u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x241b78: 0x3c02003a
    ctx->pc = 0x241b78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x241b7c: 0x8c4421d0
    ctx->pc = 0x241b7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x241b80: 0x8c8201a8
    ctx->pc = 0x241b80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 424)));
    // 0x241b84: 0x621823
    ctx->pc = 0x241b84u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241b88: 0x8c8201a0
    ctx->pc = 0x241b88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x241b8c: 0x621821
    ctx->pc = 0x241b8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241b90: 0xac8301a0
    ctx->pc = 0x241b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 3));
    // 0x241b94: 0x8c8201a4
    ctx->pc = 0x241b94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x241b98: 0x24420001
    ctx->pc = 0x241b98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x241b9c: 0xac8201a4
    ctx->pc = 0x241b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 2));
    // 0x241ba0: 0xdfbf0020
    ctx->pc = 0x241ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241ba4: 0xdfb10010
    ctx->pc = 0x241ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241ba8: 0xdfb00000
    ctx->pc = 0x241ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241bac: 0x3e00008
    ctx->pc = 0x241BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241BB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2419F4u: goto label_2419f4;
            case 0x241A30u: goto label_241a30;
            case 0x241A5Cu: goto label_241a5c;
            case 0x241AB8u: goto label_241ab8;
            case 0x241AE8u: goto label_241ae8;
            case 0x241B1Cu: goto label_241b1c;
            case 0x241B20u: goto label_241b20;
            case 0x241B50u: goto label_241b50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x241BB4u;
}
