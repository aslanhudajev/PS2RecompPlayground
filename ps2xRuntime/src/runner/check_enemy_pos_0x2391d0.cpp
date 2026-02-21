#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: check_enemy_pos
// Address: 0x2391d0 - 0x2393c8
void check_enemy_pos_0x2391d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2391d0u;

    // 0x2391d0: 0x27bdffa0
    ctx->pc = 0x2391d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2391d4: 0xffbf0040
    ctx->pc = 0x2391d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2391d8: 0xffb20030
    ctx->pc = 0x2391d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2391dc: 0xffb10020
    ctx->pc = 0x2391dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2391e0: 0xffb00010
    ctx->pc = 0x2391e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2391e4: 0xe7b50058
    ctx->pc = 0x2391e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2391e8: 0xe7b40050
    ctx->pc = 0x2391e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2391ec: 0x80802d
    ctx->pc = 0x2391ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2391f0: 0xc0902d
    ctx->pc = 0x2391f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2391f4: 0x240303b0
    ctx->pc = 0x2391f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x2391f8: 0x2431818
    ctx->pc = 0x2391f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2391fc: 0x3c020033
    ctx->pc = 0x2391fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x239200: 0x2442dfd0
    ctx->pc = 0x239200u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x239204: 0x628821
    ctx->pc = 0x239204u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x239208: 0xc634024c
    ctx->pc = 0x239208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23920c: 0x10a00015
    ctx->pc = 0x23920Cu;
    {
        const bool branch_taken_0x23920c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x239210u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        if (branch_taken_0x23920c) {
            ctx->pc = 0x239264u;
            goto label_239264;
        }
    }
    ctx->pc = 0x239214u;
    // 0x239214: 0xc4a00000
    ctx->pc = 0x239214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239218: 0xc6010000
    ctx->pc = 0x239218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23921c: 0x46010000
    ctx->pc = 0x23921cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x239220: 0xe7a00000
    ctx->pc = 0x239220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x239224: 0xc4a00004
    ctx->pc = 0x239224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239228: 0xc6010004
    ctx->pc = 0x239228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23922c: 0x46010000
    ctx->pc = 0x23922cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x239230: 0xe7a00004
    ctx->pc = 0x239230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x239234: 0xc4a00008
    ctx->pc = 0x239234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239238: 0xc6010008
    ctx->pc = 0x239238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23923c: 0x46010000
    ctx->pc = 0x23923cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x239240: 0xe7a00008
    ctx->pc = 0x239240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x239244: 0x3a0282d
    ctx->pc = 0x239244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239248: 0x302d
    ctx->pc = 0x239248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23924c: 0xc087bde
    ctx->pc = 0x23924Cu;
    SET_GPR_U32(ctx, 31, 0x239254u);
    ctx->pc = 0x239250u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x21EF78u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyWallCollide_0x21ef78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239254u; }
    }
    if (ctx->pc != 0x239254u) { return; }
    ctx->pc = 0x239254u;
    // 0x239254: 0x1040000a
    ctx->pc = 0x239254u;
    {
        const bool branch_taken_0x239254 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x239258u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x239254) {
            ctx->pc = 0x239280u;
            goto label_239280;
        }
    }
    ctx->pc = 0x23925Cu;
label_23925c:
    // 0x23925c: 0x10000052
    ctx->pc = 0x23925Cu;
    {
        const bool branch_taken_0x23925c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x239260u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x23925c) {
            ctx->pc = 0x2393A8u;
            goto label_2393a8;
        }
    }
    ctx->pc = 0x239264u;
label_239264:
    // 0x239264: 0xc6000000
    ctx->pc = 0x239264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239268: 0xe7a00000
    ctx->pc = 0x239268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23926c: 0xc6000004
    ctx->pc = 0x23926cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239270: 0xe7a00004
    ctx->pc = 0x239270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x239274: 0xc6000008
    ctx->pc = 0x239274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239278: 0xe7a00008
    ctx->pc = 0x239278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23927c: 0xc7a00000
    ctx->pc = 0x23927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_239280:
    // 0x239280: 0xe6200040
    ctx->pc = 0x239280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x239284: 0xc7a00004
    ctx->pc = 0x239284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239288: 0xe6200044
    ctx->pc = 0x239288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x23928c: 0xc7a00008
    ctx->pc = 0x23928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239290: 0xe6200048
    ctx->pc = 0x239290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x239294: 0x3a0202d
    ctx->pc = 0x239294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239298: 0x282d
    ctx->pc = 0x239298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23929c: 0x3c013dcc
    ctx->pc = 0x23929cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2392a0: 0x3421cccd
    ctx->pc = 0x2392a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2392a4: 0x44816000
    ctx->pc = 0x2392a4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2392a8: 0x3c014080
    ctx->pc = 0x2392a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x2392ac: 0x44816800
    ctx->pc = 0x2392acu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2392b0: 0x3c01c120
    ctx->pc = 0x2392b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49440 << 16));
    // 0x2392b4: 0x44817000
    ctx->pc = 0x2392b4u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x2392b8: 0x302d
    ctx->pc = 0x2392b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2392bc: 0xc087b24
    ctx->pc = 0x2392BCu;
    SET_GPR_U32(ctx, 31, 0x2392C4u);
    ctx->pc = 0x2392C0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392C4u; }
    }
    if (ctx->pc != 0x2392C4u) { return; }
    ctx->pc = 0x2392C4u;
    // 0x2392c4: 0x1040ffe5
    ctx->pc = 0x2392C4u;
    {
        const bool branch_taken_0x2392c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2392C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2392c4) {
            ctx->pc = 0x23925Cu;
            goto label_23925c;
        }
    }
    ctx->pc = 0x2392CCu;
    // 0x2392cc: 0xc442fbe4
    ctx->pc = 0x2392ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2392d0: 0xc6000004
    ctx->pc = 0x2392d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2392d4: 0x46001001
    ctx->pc = 0x2392d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2392d8: 0x46000005
    ctx->pc = 0x2392d8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2392dc: 0x3c0140c0
    ctx->pc = 0x2392dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
    // 0x2392e0: 0x44810800
    ctx->pc = 0x2392e0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2392e4: 0x46000834
    ctx->pc = 0x2392e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2392e8: 0x0
    ctx->pc = 0x2392e8u;
    // NOP
    // 0x2392ec: 0x4501002e
    ctx->pc = 0x2392ECu;
    {
        const bool branch_taken_0x2392ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2392F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2392ec) {
            ctx->pc = 0x2393A8u;
            goto label_2393a8;
        }
    }
    ctx->pc = 0x2392F4u;
    // 0x2392f4: 0xe6220044
    ctx->pc = 0x2392f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x2392f8: 0x26240010
    ctx->pc = 0x2392f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    // 0x2392fc: 0xc080c70
    ctx->pc = 0x2392FCu;
    SET_GPR_U32(ctx, 31, 0x239304u);
    ctx->pc = 0x239300u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 576));
    ctx->pc = 0x2031C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjColOffset_0x2031c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239304u; }
    }
    if (ctx->pc != 0x239304u) { return; }
    ctx->pc = 0x239304u;
    // 0x239304: 0x240202d
    ctx->pc = 0x239304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239308: 0x24050001
    ctx->pc = 0x239308u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23930c: 0x200302d
    ctx->pc = 0x23930cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239310: 0x3a0382d
    ctx->pc = 0x239310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239314: 0x4600a306
    ctx->pc = 0x239314u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x239318: 0xc0909ec
    ctx->pc = 0x239318u;
    SET_GPR_U32(ctx, 31, 0x239320u);
    ctx->pc = 0x23931Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2427B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyCollidePlayer_0x2427b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239320u; }
    }
    if (ctx->pc != 0x239320u) { return; }
    ctx->pc = 0x239320u;
    // 0x239320: 0x4410021
    ctx->pc = 0x239320u;
    {
        const bool branch_taken_0x239320 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x239324u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x239320) {
            ctx->pc = 0x2393A8u;
            goto label_2393a8;
        }
    }
    ctx->pc = 0x239328u;
    // 0x239328: 0x3c013f00
    ctx->pc = 0x239328u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x23932c: 0x44816000
    ctx->pc = 0x23932cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x239330: 0x240202d
    ctx->pc = 0x239330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239334: 0x200282d
    ctx->pc = 0x239334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239338: 0x3a0302d
    ctx->pc = 0x239338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23933c: 0x382d
    ctx->pc = 0x23933cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239340: 0x460ca302
    ctx->pc = 0x239340u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x239344: 0x4600ab46
    ctx->pc = 0x239344u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x239348: 0xc090a70
    ctx->pc = 0x239348u;
    SET_GPR_U32(ctx, 31, 0x239350u);
    ctx->pc = 0x23934Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2429C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyCollideEnemy_0x2429c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239350u; }
    }
    if (ctx->pc != 0x239350u) { return; }
    ctx->pc = 0x239350u;
    // 0x239350: 0x4410015
    ctx->pc = 0x239350u;
    {
        const bool branch_taken_0x239350 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x239354u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x239350) {
            ctx->pc = 0x2393A8u;
            goto label_2393a8;
        }
    }
    ctx->pc = 0x239358u;
    // 0x239358: 0x3c013f00
    ctx->pc = 0x239358u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x23935c: 0x44816000
    ctx->pc = 0x23935cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x239360: 0x200202d
    ctx->pc = 0x239360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239364: 0x3a0282d
    ctx->pc = 0x239364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239368: 0x302d
    ctx->pc = 0x239368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23936c: 0x460ca302
    ctx->pc = 0x23936cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x239370: 0xc09612c
    ctx->pc = 0x239370u;
    SET_GPR_U32(ctx, 31, 0x239378u);
    ctx->pc = 0x239374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2584B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemCollide_0x2584b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239378u; }
    }
    if (ctx->pc != 0x239378u) { return; }
    ctx->pc = 0x239378u;
    // 0x239378: 0x40282d
    ctx->pc = 0x239378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23937c: 0x10a0000a
    ctx->pc = 0x23937Cu;
    {
        const bool branch_taken_0x23937c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x239380u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23937c) {
            ctx->pc = 0x2393A8u;
            goto label_2393a8;
        }
    }
    ctx->pc = 0x239384u;
    // 0x239384: 0x8e2202a4
    ctx->pc = 0x239384u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 676)));
    // 0x239388: 0x50a20007
    ctx->pc = 0x239388u;
    {
        const bool branch_taken_0x239388 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x239388) {
            ctx->pc = 0x23938Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x2393A8u;
            goto label_2393a8;
        }
    }
    ctx->pc = 0x239390u;
    // 0x239390: 0xc0967ea
    ctx->pc = 0x239390u;
    SET_GPR_U32(ctx, 31, 0x239398u);
    ctx->pc = 0x239394u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x259FA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyItemCollision_0x259fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239398u; }
    }
    if (ctx->pc != 0x239398u) { return; }
    ctx->pc = 0x239398u;
    // 0x239398: 0x40182d
    ctx->pc = 0x239398u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23939c: 0x14600002
    ctx->pc = 0x23939Cu;
    {
        const bool branch_taken_0x23939c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2393A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23939c) {
            ctx->pc = 0x2393A8u;
            goto label_2393a8;
        }
    }
    ctx->pc = 0x2393A4u;
    // 0x2393a4: 0x24020001
    ctx->pc = 0x2393a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2393a8:
    // 0x2393a8: 0xdfbf0040
    ctx->pc = 0x2393a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2393ac: 0xdfb20030
    ctx->pc = 0x2393acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2393b0: 0xdfb10020
    ctx->pc = 0x2393b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2393b4: 0xdfb00010
    ctx->pc = 0x2393b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2393b8: 0xc7b50058
    ctx->pc = 0x2393b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2393bc: 0xc7b40050
    ctx->pc = 0x2393bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2393c0: 0x3e00008
    ctx->pc = 0x2393C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2393C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23925Cu: goto label_23925c;
            case 0x239264u: goto label_239264;
            case 0x239280u: goto label_239280;
            case 0x2393A8u: goto label_2393a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2393C8u;
}
