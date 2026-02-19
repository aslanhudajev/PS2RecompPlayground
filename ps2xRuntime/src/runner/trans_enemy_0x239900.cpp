#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: trans_enemy
// Address: 0x239900 - 0x239994
void trans_enemy_0x239900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x239900u;

    // 0x239900: 0x27bdffd0
    ctx->pc = 0x239900u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239904: 0xffbf0020
    ctx->pc = 0x239904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x239908: 0xffb00010
    ctx->pc = 0x239908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23990c: 0x80302d
    ctx->pc = 0x23990cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239910: 0x240303b0
    ctx->pc = 0x239910u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x239914: 0xc31818
    ctx->pc = 0x239914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x239918: 0x3c020033
    ctx->pc = 0x239918u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23991c: 0x2442dfd0
    ctx->pc = 0x23991cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x239920: 0x628021
    ctx->pc = 0x239920u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x239924: 0xc4a00000
    ctx->pc = 0x239924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239928: 0xe7a00000
    ctx->pc = 0x239928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23992c: 0xc4a10004
    ctx->pc = 0x23992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239930: 0xc4a00008
    ctx->pc = 0x239930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239934: 0xe7a00008
    ctx->pc = 0x239934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x239938: 0xc6000244
    ctx->pc = 0x239938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23993c: 0x46000840
    ctx->pc = 0x23993cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x239940: 0xe7a10004
    ctx->pc = 0x239940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x239944: 0x3a0202d
    ctx->pc = 0x239944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239948: 0xc08e474
    ctx->pc = 0x239948u;
    SET_GPR_U32(ctx, 31, 0x239950u);
    ctx->pc = 0x23994Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2391D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_enemy_pos_0x2391d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239950u; }
    }
    if (ctx->pc != 0x239950u) { return; }
    ctx->pc = 0x239950u;
    // 0x239950: 0x1c40000c
    ctx->pc = 0x239950u;
    {
        const bool branch_taken_0x239950 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x239954u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x239950) {
            ctx->pc = 0x239984u;
            goto label_239984;
        }
    }
    ctx->pc = 0x239958u;
    // 0x239958: 0x8e040070
    ctx->pc = 0x239958u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x23995c: 0x24050002
    ctx->pc = 0x23995cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x239960: 0xc0b41b8
    ctx->pc = 0x239960u;
    SET_GPR_U32(ctx, 31, 0x239968u);
    ctx->pc = 0x239964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239968u; }
    }
    if (ctx->pc != 0x239968u) { return; }
    ctx->pc = 0x239968u;
    // 0x239968: 0x8e0401f0
    ctx->pc = 0x239968u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x23996c: 0x10800003
    ctx->pc = 0x23996Cu;
    {
        const bool branch_taken_0x23996c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x239970u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x23996c) {
            ctx->pc = 0x23997Cu;
            goto label_23997c;
        }
    }
    ctx->pc = 0x239974u;
    // 0x239974: 0xc0b41b8
    ctx->pc = 0x239974u;
    SET_GPR_U32(ctx, 31, 0x23997Cu);
    ctx->pc = 0x239978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23997Cu; }
    }
    if (ctx->pc != 0x23997Cu) { return; }
    ctx->pc = 0x23997Cu;
label_23997c:
    // 0x23997c: 0xae0000c8
    ctx->pc = 0x23997cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x239980: 0x102d
    ctx->pc = 0x239980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239984:
    // 0x239984: 0xdfbf0020
    ctx->pc = 0x239984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239988: 0xdfb00010
    ctx->pc = 0x239988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23998c: 0x3e00008
    ctx->pc = 0x23998Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239990u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23997Cu: goto label_23997c;
            case 0x239984u: goto label_239984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239994u;
}
