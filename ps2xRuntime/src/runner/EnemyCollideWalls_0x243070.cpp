#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnemyCollideWalls
// Address: 0x243070 - 0x243198
void EnemyCollideWalls_0x243070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x243070u;

    // 0x243070: 0x27bdff80
    ctx->pc = 0x243070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x243074: 0xffbf0060
    ctx->pc = 0x243074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x243078: 0xffb40050
    ctx->pc = 0x243078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24307c: 0xffb30040
    ctx->pc = 0x24307cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x243080: 0xffb20030
    ctx->pc = 0x243080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x243084: 0xffb10020
    ctx->pc = 0x243084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x243088: 0xffb00010
    ctx->pc = 0x243088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24308c: 0xe7b40070
    ctx->pc = 0x24308cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x243090: 0x80a02d
    ctx->pc = 0x243090u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243094: 0xa0802d
    ctx->pc = 0x243094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243098: 0xc0882d
    ctx->pc = 0x243098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24309c: 0x3c013fc0
    ctx->pc = 0x24309cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x2430a0: 0x44810000
    ctx->pc = 0x2430a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2430a4: 0x46006502
    ctx->pc = 0x2430a4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2430a8: 0xc6000000
    ctx->pc = 0x2430a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2430ac: 0xc6210000
    ctx->pc = 0x2430acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2430b0: 0x46010000
    ctx->pc = 0x2430b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2430b4: 0xe7a00000
    ctx->pc = 0x2430b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2430b8: 0xc6000004
    ctx->pc = 0x2430b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2430bc: 0xc6210004
    ctx->pc = 0x2430bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2430c0: 0x46010000
    ctx->pc = 0x2430c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2430c4: 0xe7a00004
    ctx->pc = 0x2430c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2430c8: 0xc6000008
    ctx->pc = 0x2430c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2430cc: 0xc6210008
    ctx->pc = 0x2430ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2430d0: 0x46010000
    ctx->pc = 0x2430d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2430d4: 0xe7a00008
    ctx->pc = 0x2430d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2430d8: 0x200202d
    ctx->pc = 0x2430d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2430dc: 0x3a0282d
    ctx->pc = 0x2430dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2430e0: 0x3c13003c
    ctx->pc = 0x2430e0u;
    SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
    // 0x2430e4: 0x26661e78
    ctx->pc = 0x2430e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 7800));
    // 0x2430e8: 0xc087bde
    ctx->pc = 0x2430E8u;
    SET_GPR_U32(ctx, 31, 0x2430F0u);
    ctx->pc = 0x2430ECu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x21EF78u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyWallCollide_0x21ef78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2430F0u; }
    }
    if (ctx->pc != 0x2430F0u) { return; }
    ctx->pc = 0x2430F0u;
    // 0x2430f0: 0x3c12003c
    ctx->pc = 0x2430f0u;
    SET_GPR_U32(ctx, 18, ((uint32_t)60 << 16));
    // 0x2430f4: 0x1040001e
    ctx->pc = 0x2430F4u;
    {
        const bool branch_taken_0x2430f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2430F8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7796), GPR_U32(ctx, 2));
        if (branch_taken_0x2430f4) {
            ctx->pc = 0x243170u;
            goto label_243170;
        }
    }
    ctx->pc = 0x2430FCu;
    // 0x2430fc: 0x280202d
    ctx->pc = 0x2430fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243100: 0x40282d
    ctx->pc = 0x243100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243104: 0x200302d
    ctx->pc = 0x243104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243108: 0xc090bc2
    ctx->pc = 0x243108u;
    SET_GPR_U32(ctx, 31, 0x243110u);
    ctx->pc = 0x24310Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 7800));
    ctx->pc = 0x242F08u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyWorldDamage_0x242f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243110u; }
    }
    if (ctx->pc != 0x243110u) { return; }
    ctx->pc = 0x243110u;
    // 0x243110: 0x8e421e74
    ctx->pc = 0x243110u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7796)));
    // 0x243114: 0x8c420010
    ctx->pc = 0x243114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x243118: 0x30420038
    ctx->pc = 0x243118u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 56));
    // 0x24311c: 0x14400015
    ctx->pc = 0x24311Cu;
    {
        const bool branch_taken_0x24311c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x243120u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24311c) {
            ctx->pc = 0x243174u;
            goto label_243174;
        }
    }
    ctx->pc = 0x243124u;
    // 0x243124: 0x8e820344
    ctx->pc = 0x243124u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 836)));
    // 0x243128: 0x30420001
    ctx->pc = 0x243128u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x24312c: 0x14400011
    ctx->pc = 0x24312Cu;
    {
        const bool branch_taken_0x24312c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x243130u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x24312c) {
            ctx->pc = 0x243174u;
            goto label_243174;
        }
    }
    ctx->pc = 0x243134u;
    // 0x243134: 0x200202d
    ctx->pc = 0x243134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243138: 0x220282d
    ctx->pc = 0x243138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24313c: 0x3c06003c
    ctx->pc = 0x24313cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
    // 0x243140: 0x24c61e78
    ctx->pc = 0x243140u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 7800));
    // 0x243144: 0x3c070032
    ctx->pc = 0x243144u;
    SET_GPR_U32(ctx, 7, ((uint32_t)50 << 16));
    // 0x243148: 0x24e7fc10
    ctx->pc = 0x243148u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294966288));
    // 0x24314c: 0xc087c18
    ctx->pc = 0x24314Cu;
    SET_GPR_U32(ctx, 31, 0x243154u);
    ctx->pc = 0x243150u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x21F060u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlideAlongWall_0x21f060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243154u; }
    }
    if (ctx->pc != 0x243154u) { return; }
    ctx->pc = 0x243154u;
    // 0x243154: 0x4410007
    ctx->pc = 0x243154u;
    {
        const bool branch_taken_0x243154 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x243158u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x243154) {
            ctx->pc = 0x243174u;
            goto label_243174;
        }
    }
    ctx->pc = 0x24315Cu;
    // 0x24315c: 0x44800000
    ctx->pc = 0x24315cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x243160: 0xe6200008
    ctx->pc = 0x243160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x243164: 0xe6200000
    ctx->pc = 0x243164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x243168: 0x10000002
    ctx->pc = 0x243168u;
    {
        const bool branch_taken_0x243168 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24316Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x243168) {
            ctx->pc = 0x243174u;
            goto label_243174;
        }
    }
    ctx->pc = 0x243170u;
label_243170:
    // 0x243170: 0x102d
    ctx->pc = 0x243170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243174:
    // 0x243174: 0xdfbf0060
    ctx->pc = 0x243174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x243178: 0xdfb40050
    ctx->pc = 0x243178u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24317c: 0xdfb30040
    ctx->pc = 0x24317cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x243180: 0xdfb20030
    ctx->pc = 0x243180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243184: 0xdfb10020
    ctx->pc = 0x243184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243188: 0xdfb00010
    ctx->pc = 0x243188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24318c: 0xc7b40070
    ctx->pc = 0x24318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x243190: 0x3e00008
    ctx->pc = 0x243190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243194u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x243170u: goto label_243170;
            case 0x243174u: goto label_243174;
            default: break;
        }
        return;
    }
    ctx->pc = 0x243198u;
}
