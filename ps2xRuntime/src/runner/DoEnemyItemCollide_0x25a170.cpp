#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoEnemyItemCollide
// Address: 0x25a170 - 0x25a364
void DoEnemyItemCollide_0x25a170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25a170u;

    // 0x25a170: 0x27bdff70
    ctx->pc = 0x25a170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x25a174: 0xffbf0070
    ctx->pc = 0x25a174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x25a178: 0xffb50060
    ctx->pc = 0x25a178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x25a17c: 0xffb40050
    ctx->pc = 0x25a17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x25a180: 0xffb30040
    ctx->pc = 0x25a180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25a184: 0xffb20030
    ctx->pc = 0x25a184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25a188: 0xffb10020
    ctx->pc = 0x25a188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25a18c: 0xffb00010
    ctx->pc = 0x25a18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25a190: 0xe7b40080
    ctx->pc = 0x25a190u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x25a194: 0x80a82d
    ctx->pc = 0x25a194u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a198: 0xa0a02d
    ctx->pc = 0x25a198u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a19c: 0xc0882d
    ctx->pc = 0x25a19cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a1a0: 0x240303b0
    ctx->pc = 0x25a1a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x25a1a4: 0x2a31818
    ctx->pc = 0x25a1a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25a1a8: 0x3c020033
    ctx->pc = 0x25a1a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x25a1ac: 0x2442dfd0
    ctx->pc = 0x25a1acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x25a1b0: 0x628021
    ctx->pc = 0x25a1b0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a1b4: 0x902d
    ctx->pc = 0x25a1b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a1b8: 0x982d
    ctx->pc = 0x25a1b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a1bc: 0xc601024c
    ctx->pc = 0x25a1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a1c0: 0x3c013f00
    ctx->pc = 0x25a1c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x25a1c4: 0x44810000
    ctx->pc = 0x25a1c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x25a1c8: 0x46000d02
    ctx->pc = 0x25a1c8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25a1cc: 0x40034800
    ctx->pc = 0x25a1ccu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x25a1d0: 0x3c02003a
    ctx->pc = 0x25a1d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x25a1d4: 0x8c4221d0
    ctx->pc = 0x25a1d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x25a1d8: 0x14e00012
    ctx->pc = 0x25A1D8u;
    {
        const bool branch_taken_0x25a1d8 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x25A1DCu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 920), GPR_U32(ctx, 3));
        if (branch_taken_0x25a1d8) {
            ctx->pc = 0x25A224u;
            goto label_25a224;
        }
    }
    ctx->pc = 0x25A1E0u;
    // 0x25a1e0: 0x8e0402a0
    ctx->pc = 0x25a1e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 672)));
    // 0x25a1e4: 0x1080000d
    ctx->pc = 0x25A1E4u;
    {
        const bool branch_taken_0x25a1e4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A1E8u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x25a1e4) {
            ctx->pc = 0x25A21Cu;
            goto label_25a21c;
        }
    }
    ctx->pc = 0x25A1ECu;
    // 0x25a1ec: 0x3c013fc0
    ctx->pc = 0x25a1ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x25a1f0: 0x44816800
    ctx->pc = 0x25a1f0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25a1f4: 0x382d
    ctx->pc = 0x25a1f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a1f8: 0xc095e6c
    ctx->pc = 0x25A1F8u;
    SET_GPR_U32(ctx, 31, 0x25A200u);
    ctx->pc = 0x25A1FCu;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    ctx->pc = 0x2579B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemCollSub_0x2579b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A200u; }
    }
    if (ctx->pc != 0x25A200u) { return; }
    ctx->pc = 0x25A200u;
    // 0x25a200: 0x44800800
    ctx->pc = 0x25a200u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x25a204: 0x46000836
    ctx->pc = 0x25a204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a208: 0x0
    ctx->pc = 0x25a208u;
    // NOP
    // 0x25a20c: 0x45030037
    ctx->pc = 0x25A20Cu;
    {
        const bool branch_taken_0x25a20c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a20c) {
            ctx->pc = 0x25A210u;
            SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 672)));
            ctx->pc = 0x25A2ECu;
            goto label_25a2ec;
        }
    }
    ctx->pc = 0x25A214u;
    // 0x25a214: 0x10000035
    ctx->pc = 0x25A214u;
    {
        const bool branch_taken_0x25a214 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25a214) {
            ctx->pc = 0x25A2ECu;
            goto label_25a2ec;
        }
    }
    ctx->pc = 0x25A21Cu;
label_25a21c:
    // 0x25a21c: 0x50e00007
    ctx->pc = 0x25A21Cu;
    {
        const bool branch_taken_0x25a21c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x25a21c) {
            ctx->pc = 0x25A220u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 832)));
            ctx->pc = 0x25A23Cu;
            goto label_25a23c;
        }
    }
    ctx->pc = 0x25A224u;
label_25a224:
    // 0x25a224: 0x3c020031
    ctx->pc = 0x25a224u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x25a228: 0x8e030340
    ctx->pc = 0x25a228u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x25a22c: 0x8c42ffbc
    ctx->pc = 0x25a22cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x25a230: 0x621823
    ctx->pc = 0x25a230u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a234: 0xae030340
    ctx->pc = 0x25a234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 3));
    // 0x25a238: 0x8e020340
    ctx->pc = 0x25a238u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 832)));
label_25a23c:
    // 0x25a23c: 0x1c40002b
    ctx->pc = 0x25A23Cu;
    {
        const bool branch_taken_0x25a23c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x25A240u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a23c) {
            ctx->pc = 0x25A2ECu;
            goto label_25a2ec;
        }
    }
    ctx->pc = 0x25A244u;
    // 0x25a244: 0x4600a306
    ctx->pc = 0x25a244u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25a248: 0x282d
    ctx->pc = 0x25a248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a24c: 0x302d
    ctx->pc = 0x25a24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a250: 0xc095164
    ctx->pc = 0x25A250u;
    SET_GPR_U32(ctx, 31, 0x25A258u);
    ctx->pc = 0x25A254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x254590u;
    {
        const uint32_t __entryPc = ctx->pc;
        find_closest_item_0x254590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A258u; }
    }
    if (ctx->pc != 0x25A258u) { return; }
    ctx->pc = 0x25A258u;
    // 0x25a258: 0xc7a00000
    ctx->pc = 0x25a258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a25c: 0x46140001
    ctx->pc = 0x25a25cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x25a260: 0xe7a00000
    ctx->pc = 0x25a260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25a264: 0x46000086
    ctx->pc = 0x25a264u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x25a268: 0x44800000
    ctx->pc = 0x25a268u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x25a26c: 0x46020034
    ctx->pc = 0x25a26cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a270: 0x0
    ctx->pc = 0x25a270u;
    // NOP
    // 0x25a274: 0x4500000c
    ctx->pc = 0x25A274u;
    {
        const bool branch_taken_0x25a274 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A278u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a274) {
            ctx->pc = 0x25A2A8u;
            goto label_25a2a8;
        }
    }
    ctx->pc = 0x25A27Cu;
    // 0x25a27c: 0xc60000cc
    ctx->pc = 0x25a27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a280: 0x3c013f00
    ctx->pc = 0x25a280u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x25a284: 0x44810800
    ctx->pc = 0x25a284u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x25a288: 0x46010002
    ctx->pc = 0x25a288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25a28c: 0x46020002
    ctx->pc = 0x25a28cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x25a290: 0x46000064
    ctx->pc = 0x25a290u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x25a294: 0x44020800
    ctx->pc = 0x25a294u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x25a298: 0x2844001f
    ctx->pc = 0x25a298u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 31));
    // 0x25a29c: 0x2403001e
    ctx->pc = 0x25a29cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 30));
    // 0x25a2a0: 0x64100a
    ctx->pc = 0x25a2a0u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x25a2a4: 0xae020340
    ctx->pc = 0x25a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 2));
label_25a2a8:
    // 0x25a2a8: 0x12400015
    ctx->pc = 0x25A2A8u;
    {
        const bool branch_taken_0x25a2a8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A2ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a2a8) {
            ctx->pc = 0x25A300u;
            goto label_25a300;
        }
    }
    ctx->pc = 0x25A2B0u;
    // 0x25a2b0: 0x3c013fc0
    ctx->pc = 0x25a2b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x25a2b4: 0x44816800
    ctx->pc = 0x25a2b4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25a2b8: 0x280282d
    ctx->pc = 0x25a2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a2bc: 0x220302d
    ctx->pc = 0x25a2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a2c0: 0x382d
    ctx->pc = 0x25a2c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a2c4: 0x4600a306
    ctx->pc = 0x25a2c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25a2c8: 0xc095e6c
    ctx->pc = 0x25A2C8u;
    SET_GPR_U32(ctx, 31, 0x25A2D0u);
    ctx->pc = 0x25A2CCu;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    ctx->pc = 0x2579B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemCollSub_0x2579b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A2D0u; }
    }
    if (ctx->pc != 0x25A2D0u) { return; }
    ctx->pc = 0x25A2D0u;
    // 0x25a2d0: 0x44800800
    ctx->pc = 0x25a2d0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x25a2d4: 0x46000836
    ctx->pc = 0x25a2d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a2d8: 0x0
    ctx->pc = 0x25a2d8u;
    // NOP
    // 0x25a2dc: 0x45000002
    ctx->pc = 0x25A2DCu;
    {
        const bool branch_taken_0x25a2dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A2E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a2dc) {
            ctx->pc = 0x25A2E8u;
            goto label_25a2e8;
        }
    }
    ctx->pc = 0x25A2E4u;
    // 0x25a2e4: 0x240102d
    ctx->pc = 0x25a2e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a2e8:
    // 0x25a2e8: 0x40902d
    ctx->pc = 0x25a2e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a2ec:
    // 0x25a2ec: 0x12400004
    ctx->pc = 0x25A2ECu;
    {
        const bool branch_taken_0x25a2ec = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A2F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a2ec) {
            ctx->pc = 0x25A300u;
            goto label_25a300;
        }
    }
    ctx->pc = 0x25A2F4u;
    // 0x25a2f4: 0xc0967ea
    ctx->pc = 0x25A2F4u;
    SET_GPR_U32(ctx, 31, 0x25A2FCu);
    ctx->pc = 0x25A2F8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x259FA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyItemCollision_0x259fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A2FCu; }
    }
    if (ctx->pc != 0x25A2FCu) { return; }
    ctx->pc = 0x25A2FCu;
    // 0x25a2fc: 0x40982d
    ctx->pc = 0x25a2fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a300:
    // 0x25a300: 0x52600002
    ctx->pc = 0x25A300u;
    {
        const bool branch_taken_0x25a300 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x25a300) {
            ctx->pc = 0x25A304u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
            ctx->pc = 0x25A30Cu;
            goto label_25a30c;
        }
    }
    ctx->pc = 0x25A308u;
    // 0x25a308: 0xae1202a0
    ctx->pc = 0x25a308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 18));
label_25a30c:
    // 0x25a30c: 0x40034800
    ctx->pc = 0x25a30cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x25a310: 0x3c02003a
    ctx->pc = 0x25a310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x25a314: 0x8c4421d0
    ctx->pc = 0x25a314u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x25a318: 0x8c820398
    ctx->pc = 0x25a318u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 920)));
    // 0x25a31c: 0x621823
    ctx->pc = 0x25a31cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a320: 0x8c820390
    ctx->pc = 0x25a320u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x25a324: 0x621821
    ctx->pc = 0x25a324u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a328: 0xac830390
    ctx->pc = 0x25a328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 912), GPR_U32(ctx, 3));
    // 0x25a32c: 0x8c820394
    ctx->pc = 0x25a32cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 916)));
    // 0x25a330: 0x24420001
    ctx->pc = 0x25a330u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a334: 0xac820394
    ctx->pc = 0x25a334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 2));
    // 0x25a338: 0x260102d
    ctx->pc = 0x25a338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a33c: 0xdfbf0070
    ctx->pc = 0x25a33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25a340: 0xdfb50060
    ctx->pc = 0x25a340u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25a344: 0xdfb40050
    ctx->pc = 0x25a344u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25a348: 0xdfb30040
    ctx->pc = 0x25a348u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a34c: 0xdfb20030
    ctx->pc = 0x25a34cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a350: 0xdfb10020
    ctx->pc = 0x25a350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a354: 0xdfb00010
    ctx->pc = 0x25a354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a358: 0xc7b40080
    ctx->pc = 0x25a358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a35c: 0x3e00008
    ctx->pc = 0x25A35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A360u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A21Cu: goto label_25a21c;
            case 0x25A224u: goto label_25a224;
            case 0x25A23Cu: goto label_25a23c;
            case 0x25A2A8u: goto label_25a2a8;
            case 0x25A2E8u: goto label_25a2e8;
            case 0x25A2ECu: goto label_25a2ec;
            case 0x25A300u: goto label_25a300;
            case 0x25A30Cu: goto label_25a30c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25A364u;
}
