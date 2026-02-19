#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic03
// Address: 0x241bb8 - 0x241da4
void move_logic03_0x241bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x241bb8u;

    // 0x241bb8: 0x27bdffb0
    ctx->pc = 0x241bb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x241bbc: 0xffbf0030
    ctx->pc = 0x241bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x241bc0: 0xffb20020
    ctx->pc = 0x241bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x241bc4: 0xffb10010
    ctx->pc = 0x241bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x241bc8: 0xffb00000
    ctx->pc = 0x241bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241bcc: 0xe7b40040
    ctx->pc = 0x241bccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x241bd0: 0x80882d
    ctx->pc = 0x241bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241bd4: 0x240303b0
    ctx->pc = 0x241bd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x241bd8: 0x2231818
    ctx->pc = 0x241bd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x241bdc: 0x3c020033
    ctx->pc = 0x241bdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x241be0: 0x2442dfd0
    ctx->pc = 0x241be0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x241be4: 0x628021
    ctx->pc = 0x241be4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241be8: 0x860202f2
    ctx->pc = 0x241be8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 754)));
    // 0x241bec: 0x50400005
    ctx->pc = 0x241BECu;
    {
        const bool branch_taken_0x241bec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x241bec) {
            ctx->pc = 0x241BF0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 828)));
            ctx->pc = 0x241C04u;
            goto label_241c04;
        }
    }
    ctx->pc = 0x241BF4u;
    // 0x241bf4: 0x86020288
    ctx->pc = 0x241bf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x241bf8: 0x443005c
    ctx->pc = 0x241BF8u;
    {
        const bool branch_taken_0x241bf8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x241bf8) {
            ctx->pc = 0x241BFCu;
            WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x241D6Cu;
            goto label_241d6c;
        }
    }
    ctx->pc = 0x241C00u;
    // 0x241c00: 0x8e02033c
    ctx->pc = 0x241c00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 828)));
label_241c04:
    // 0x241c04: 0x443000c
    ctx->pc = 0x241C04u;
    {
        const bool branch_taken_0x241c04 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x241c04) {
            ctx->pc = 0x241C08u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->pc = 0x241C38u;
            goto label_241c38;
        }
    }
    ctx->pc = 0x241C0Cu;
    // 0x241c0c: 0x32220001
    ctx->pc = 0x241c0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
    // 0x241c10: 0x24420005
    ctx->pc = 0x241c10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5));
    // 0x241c14: 0xa6020324
    ctx->pc = 0x241c14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x241c18: 0x220202d
    ctx->pc = 0x241c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241c1c: 0xdfbf0030
    ctx->pc = 0x241c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241c20: 0xdfb20020
    ctx->pc = 0x241c20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241c24: 0xdfb10010
    ctx->pc = 0x241c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241c28: 0xdfb00000
    ctx->pc = 0x241c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241c2c: 0xc7b40040
    ctx->pc = 0x241c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x241c30: 0x809095a
    ctx->pc = 0x241C30u;
    ctx->pc = 0x241C34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x241C38u;
label_241c38:
    // 0x241c38: 0x4480a000
    ctx->pc = 0x241c38u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x241c3c: 0x1840000c
    ctx->pc = 0x241C3Cu;
    {
        const bool branch_taken_0x241c3c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x241C40u;
        SET_GPR_U32(ctx, 18, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
        if (branch_taken_0x241c3c) {
            ctx->pc = 0x241C70u;
            goto label_241c70;
        }
    }
    ctx->pc = 0x241C44u;
    // 0x241c44: 0x8e040338
    ctx->pc = 0x241c44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x241c48: 0x28820008
    ctx->pc = 0x241c48u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8));
    // 0x241c4c: 0x10400008
    ctx->pc = 0x241C4Cu;
    {
        const bool branch_taken_0x241c4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x241C50u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x241c4c) {
            ctx->pc = 0x241C70u;
            goto label_241c70;
        }
    }
    ctx->pc = 0x241C54u;
    // 0x241c54: 0x2442de30
    ctx->pc = 0x241c54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958640));
    // 0x241c58: 0x41880
    ctx->pc = 0x241c58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x241c5c: 0x621821
    ctx->pc = 0x241c5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241c60: 0xc4740000
    ctx->pc = 0x241c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x241c64: 0x24820001
    ctx->pc = 0x241c64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x241c68: 0xae020338
    ctx->pc = 0x241c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 2));
    // 0x241c6c: 0xae00036c
    ctx->pc = 0x241c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
label_241c70:
    // 0x241c70: 0x200202d
    ctx->pc = 0x241c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241c74: 0xc08f106
    ctx->pc = 0x241C74u;
    SET_GPR_U32(ctx, 31, 0x241C7Cu);
    ctx->pc = 0x241C78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C418u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang2_0x23c418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C7Cu; }
    }
    if (ctx->pc != 0x241C7Cu) { return; }
    ctx->pc = 0x241C7Cu;
    // 0x241c7c: 0x3c014049
    ctx->pc = 0x241c7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x241c80: 0x34210fdb
    ctx->pc = 0x241c80u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241c84: 0x44810800
    ctx->pc = 0x241c84u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x241c88: 0x46010000
    ctx->pc = 0x241c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x241c8c: 0x46140340
    ctx->pc = 0x241c8cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x241c90: 0x460d0834
    ctx->pc = 0x241c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241c94: 0x0
    ctx->pc = 0x241c94u;
    // NOP
    // 0x241c98: 0x45000006
    ctx->pc = 0x241C98u;
    {
        const bool branch_taken_0x241c98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241C9Cu;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x241c98) {
            ctx->pc = 0x241CB4u;
            goto label_241cb4;
        }
    }
    ctx->pc = 0x241CA0u;
    // 0x241ca0: 0x3c0140c9
    ctx->pc = 0x241ca0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x241ca4: 0x34210fdb
    ctx->pc = 0x241ca4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241ca8: 0x44810000
    ctx->pc = 0x241ca8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241cac: 0x1000000d
    ctx->pc = 0x241CACu;
    {
        const bool branch_taken_0x241cac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x241CB0u;
        ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x241cac) {
            ctx->pc = 0x241CE4u;
            goto label_241ce4;
        }
    }
    ctx->pc = 0x241CB4u;
label_241cb4:
    // 0x241cb4: 0xc60d0260
    ctx->pc = 0x241cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x241cb8: 0x3c01c049
    ctx->pc = 0x241cb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x241cbc: 0x34210fdb
    ctx->pc = 0x241cbcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241cc0: 0x44810000
    ctx->pc = 0x241cc0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241cc4: 0x46006836
    ctx->pc = 0x241cc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241cc8: 0x0
    ctx->pc = 0x241cc8u;
    // NOP
    // 0x241ccc: 0x45020006
    ctx->pc = 0x241CCCu;
    {
        const bool branch_taken_0x241ccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241ccc) {
            ctx->pc = 0x241CD0u;
            { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
            ctx->pc = 0x241CE8u;
            goto label_241ce8;
        }
    }
    ctx->pc = 0x241CD4u;
    // 0x241cd4: 0x3c0140c9
    ctx->pc = 0x241cd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x241cd8: 0x34210fdb
    ctx->pc = 0x241cd8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241cdc: 0x44810000
    ctx->pc = 0x241cdcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241ce0: 0x46006b40
    ctx->pc = 0x241ce0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_241ce4:
    // 0x241ce4: 0xe60d0260
    ctx->pc = 0x241ce4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
label_241ce8:
    // 0x241ce8: 0x3c013f80
    ctx->pc = 0x241ce8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x241cec: 0x44816000
    ctx->pc = 0x241cecu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x241cf0: 0xc08f14c
    ctx->pc = 0x241CF0u;
    SET_GPR_U32(ctx, 31, 0x241CF8u);
    ctx->pc = 0x241CF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241CF8u; }
    }
    if (ctx->pc != 0x241CF8u) { return; }
    ctx->pc = 0x241CF8u;
    // 0x241cf8: 0xc08f20c
    ctx->pc = 0x241CF8u;
    SET_GPR_U32(ctx, 31, 0x241D00u);
    ctx->pc = 0x241CFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241D00u; }
    }
    if (ctx->pc != 0x241D00u) { return; }
    ctx->pc = 0x241D00u;
    // 0x241d00: 0xe6000258
    ctx->pc = 0x241d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x241d04: 0xc6000224
    ctx->pc = 0x241d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241d08: 0x3c013f66
    ctx->pc = 0x241d08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16230 << 16));
    // 0x241d0c: 0x34216666
    ctx->pc = 0x241d0cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x241d10: 0x44810800
    ctx->pc = 0x241d10u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x241d14: 0x46010002
    ctx->pc = 0x241d14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x241d18: 0xe6000224
    ctx->pc = 0x241d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
    // 0x241d1c: 0xc6000228
    ctx->pc = 0x241d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241d20: 0x46010002
    ctx->pc = 0x241d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x241d24: 0xe6000228
    ctx->pc = 0x241d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
    // 0x241d28: 0xc600022c
    ctx->pc = 0x241d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241d2c: 0x46010002
    ctx->pc = 0x241d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x241d30: 0xe600022c
    ctx->pc = 0x241d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
    // 0x241d34: 0xc090e82
    ctx->pc = 0x241D34u;
    SET_GPR_U32(ctx, 31, 0x241D3Cu);
    ctx->pc = 0x241D38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241D3Cu; }
    }
    if (ctx->pc != 0x241D3Cu) { return; }
    ctx->pc = 0x241D3Cu;
    // 0x241d3c: 0x86020294
    ctx->pc = 0x241d3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x241d40: 0x54400001
    ctx->pc = 0x241D40u;
    {
        const bool branch_taken_0x241d40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x241d40) {
            ctx->pc = 0x241D44u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
            ctx->pc = 0x241D48u;
            goto label_241d48;
        }
    }
    ctx->pc = 0x241D48u;
label_241d48:
    // 0x241d48: 0x16400010
    ctx->pc = 0x241D48u;
    {
        const bool branch_taken_0x241d48 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x241D4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x241d48) {
            ctx->pc = 0x241D8Cu;
            goto label_241d8c;
        }
    }
    ctx->pc = 0x241D50u;
    // 0x241d50: 0x8e02036c
    ctx->pc = 0x241d50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x241d54: 0x1840000e
    ctx->pc = 0x241D54u;
    {
        const bool branch_taken_0x241d54 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x241D58u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x241d54) {
            ctx->pc = 0x241D90u;
            goto label_241d90;
        }
    }
    ctx->pc = 0x241D5Cu;
    // 0x241d5c: 0xc6000260
    ctx->pc = 0x241d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241d60: 0xe6000268
    ctx->pc = 0x241d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x241d64: 0x1000000a
    ctx->pc = 0x241D64u;
    {
        const bool branch_taken_0x241d64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x241D68u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
        if (branch_taken_0x241d64) {
            ctx->pc = 0x241D90u;
            goto label_241d90;
        }
    }
    ctx->pc = 0x241D6Cu;
label_241d6c:
    // 0x241d6c: 0x220202d
    ctx->pc = 0x241d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241d70: 0xdfbf0030
    ctx->pc = 0x241d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241d74: 0xdfb20020
    ctx->pc = 0x241d74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241d78: 0xdfb10010
    ctx->pc = 0x241d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241d7c: 0xdfb00000
    ctx->pc = 0x241d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241d80: 0xc7b40040
    ctx->pc = 0x241d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x241d84: 0x809095a
    ctx->pc = 0x241D84u;
    ctx->pc = 0x241D88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x241D8Cu;
label_241d8c:
    // 0x241d8c: 0xdfb20020
    ctx->pc = 0x241d8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_241d90:
    // 0x241d90: 0xdfb10010
    ctx->pc = 0x241d90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241d94: 0xdfb00000
    ctx->pc = 0x241d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241d98: 0xc7b40040
    ctx->pc = 0x241d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x241d9c: 0x3e00008
    ctx->pc = 0x241D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241DA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x241C04u: goto label_241c04;
            case 0x241C38u: goto label_241c38;
            case 0x241C70u: goto label_241c70;
            case 0x241CB4u: goto label_241cb4;
            case 0x241CE4u: goto label_241ce4;
            case 0x241CE8u: goto label_241ce8;
            case 0x241D48u: goto label_241d48;
            case 0x241D6Cu: goto label_241d6c;
            case 0x241D8Cu: goto label_241d8c;
            case 0x241D90u: goto label_241d90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x241DA4u;
}
