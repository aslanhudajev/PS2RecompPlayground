#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: eliminate_enemies
// Address: 0x22f010 - 0x22f148
void eliminate_enemies_0x22f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22f010u;

    // 0x22f010: 0x27bdff80
    ctx->pc = 0x22f010u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22f014: 0xffbf0060
    ctx->pc = 0x22f014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22f018: 0xffb40050
    ctx->pc = 0x22f018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22f01c: 0xffb30040
    ctx->pc = 0x22f01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22f020: 0xffb20030
    ctx->pc = 0x22f020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22f024: 0xffb10020
    ctx->pc = 0x22f024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22f028: 0xffb00010
    ctx->pc = 0x22f028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22f02c: 0xe7b40070
    ctx->pc = 0x22f02cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x22f030: 0x3c014120
    ctx->pc = 0x22f030u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x22f034: 0x44816000
    ctx->pc = 0x22f034u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x22f038: 0xc0a00b0
    ctx->pc = 0x22F038u;
    SET_GPR_U32(ctx, 31, 0x22F040u);
    ctx->pc = 0x22F03Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2802C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartEnemyGrid_0x2802c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F040u; }
    }
    if (ctx->pc != 0x22F040u) { return; }
    ctx->pc = 0x22F040u;
    // 0x22f040: 0x241403b0
    ctx->pc = 0x22f040u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 944));
    // 0x22f044: 0x3c020033
    ctx->pc = 0x22f044u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22f048: 0x2453dfd0
    ctx->pc = 0x22f048u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x22f04c: 0x3c014120
    ctx->pc = 0x22f04cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x22f050: 0x4481a000
    ctx->pc = 0x22f050u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x22f054: 0x1000002f
    ctx->pc = 0x22F054u;
    {
        const bool branch_taken_0x22f054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F058u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x22f054) {
            ctx->pc = 0x22F114u;
            goto label_22f114;
        }
    }
    ctx->pc = 0x22F05Cu;
    // 0x22f05c: 0x0
    ctx->pc = 0x22f05cu;
    // NOP
label_22f060:
    // 0x22f060: 0x738021
    ctx->pc = 0x22f060u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x22f064: 0x8e0200c8
    ctx->pc = 0x22f064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x22f068: 0x1452002a
    ctx->pc = 0x22F068u;
    {
        const bool branch_taken_0x22f068 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x22f068) {
            ctx->pc = 0x22F114u;
            goto label_22f114;
        }
    }
    ctx->pc = 0x22F070u;
    // 0x22f070: 0x860202ec
    ctx->pc = 0x22f070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 748)));
    // 0x22f074: 0x14400027
    ctx->pc = 0x22F074u;
    {
        const bool branch_taken_0x22f074 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22f074) {
            ctx->pc = 0x22F114u;
            goto label_22f114;
        }
    }
    ctx->pc = 0x22F07Cu;
    // 0x22f07c: 0xc6230000
    ctx->pc = 0x22f07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22f080: 0xc6000040
    ctx->pc = 0x22f080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f084: 0x460018c1
    ctx->pc = 0x22f084u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x22f088: 0xe7a30000
    ctx->pc = 0x22f088u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22f08c: 0xc6220004
    ctx->pc = 0x22f08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22f090: 0xc6000044
    ctx->pc = 0x22f090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f094: 0x46001081
    ctx->pc = 0x22f094u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x22f098: 0xe7a20004
    ctx->pc = 0x22f098u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22f09c: 0xc6200008
    ctx->pc = 0x22f09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f0a0: 0xc6010048
    ctx->pc = 0x22f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f0a4: 0x46010001
    ctx->pc = 0x22f0a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22f0a8: 0xe7a00008
    ctx->pc = 0x22f0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22f0ac: 0x460318c2
    ctx->pc = 0x22f0acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x22f0b0: 0x46021082
    ctx->pc = 0x22f0b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x22f0b4: 0x460218c0
    ctx->pc = 0x22f0b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x22f0b8: 0x46000002
    ctx->pc = 0x22f0b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x22f0bc: 0x46001b00
    ctx->pc = 0x22f0bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x22f0c0: 0x0
    ctx->pc = 0x22f0c0u;
    // NOP
    // 0x22f0c4: 0x0
    ctx->pc = 0x22f0c4u;
    // NOP
    // 0x22f0c8: 0x460c0004
    ctx->pc = 0x22f0c8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x22f0cc: 0x46000032
    ctx->pc = 0x22f0ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f0d0: 0x45010003
    ctx->pc = 0x22F0D0u;
    {
        const bool branch_taken_0x22f0d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f0d0) {
            ctx->pc = 0x22F0E0u;
            goto label_22f0e0;
        }
    }
    ctx->pc = 0x22F0D8u;
    // 0x22f0d8: 0xc0ba284
    ctx->pc = 0x22F0D8u;
    SET_GPR_U32(ctx, 31, 0x22F0E0u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F0E0u; }
    }
    if (ctx->pc != 0x22F0E0u) { return; }
    ctx->pc = 0x22F0E0u;
label_22f0e0:
    // 0x22f0e0: 0x46140034
    ctx->pc = 0x22f0e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f0e4: 0x0
    ctx->pc = 0x22f0e4u;
    // NOP
    // 0x22f0e8: 0x4500000a
    ctx->pc = 0x22F0E8u;
    {
        const bool branch_taken_0x22f0e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22F0ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22f0e8) {
            ctx->pc = 0x22F114u;
            goto label_22f114;
        }
    }
    ctx->pc = 0x22F0F0u;
    // 0x22f0f0: 0x3c014479
    ctx->pc = 0x22f0f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17529 << 16));
    // 0x22f0f4: 0x3421c000
    ctx->pc = 0x22f0f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49152));
    // 0x22f0f8: 0x44816000
    ctx->pc = 0x22f0f8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x22f0fc: 0x2405ffff
    ctx->pc = 0x22f0fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22f100: 0x302d
    ctx->pc = 0x22f100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f104: 0x382d
    ctx->pc = 0x22f104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f108: 0x402d
    ctx->pc = 0x22f108u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f10c: 0xc08e7bc
    ctx->pc = 0x22F10Cu;
    SET_GPR_U32(ctx, 31, 0x22F114u);
    ctx->pc = 0x22F110u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x239EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_enemy_0x239ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F114u; }
    }
    if (ctx->pc != 0x22F114u) { return; }
    ctx->pc = 0x22F114u;
label_22f114:
    // 0x22f114: 0xc0a00ea
    ctx->pc = 0x22F114u;
    SET_GPR_U32(ctx, 31, 0x22F11Cu);
    ctx->pc = 0x2803A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridEnemy_0x2803a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F11Cu; }
    }
    if (ctx->pc != 0x22F11Cu) { return; }
    ctx->pc = 0x22F11Cu;
    // 0x22f11c: 0x441ffd0
    ctx->pc = 0x22F11Cu;
    {
        const bool branch_taken_0x22f11c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x22F120u;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x22f11c) {
            ctx->pc = 0x22F060u;
            goto label_22f060;
        }
    }
    ctx->pc = 0x22F124u;
    // 0x22f124: 0xdfbf0060
    ctx->pc = 0x22f124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22f128: 0xdfb40050
    ctx->pc = 0x22f128u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f12c: 0xdfb30040
    ctx->pc = 0x22f12cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22f130: 0xdfb20030
    ctx->pc = 0x22f130u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f134: 0xdfb10020
    ctx->pc = 0x22f134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f138: 0xdfb00010
    ctx->pc = 0x22f138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f13c: 0xc7b40070
    ctx->pc = 0x22f13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22f140: 0x3e00008
    ctx->pc = 0x22F140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F144u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22F060u: goto label_22f060;
            case 0x22F0E0u: goto label_22f0e0;
            case 0x22F114u: goto label_22f114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22F148u;
}
