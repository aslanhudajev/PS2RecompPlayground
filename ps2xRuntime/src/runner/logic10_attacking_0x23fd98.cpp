#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: logic10_attacking
// Address: 0x23fd98 - 0x23fe38
void logic10_attacking_0x23fd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23fd98u;

    // 0x23fd98: 0x27bdffd0
    ctx->pc = 0x23fd98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23fd9c: 0xffbf0020
    ctx->pc = 0x23fd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23fda0: 0xffb10010
    ctx->pc = 0x23fda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23fda4: 0xffb00000
    ctx->pc = 0x23fda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23fda8: 0x80882d
    ctx->pc = 0x23fda8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fdac: 0x240303b0
    ctx->pc = 0x23fdacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23fdb0: 0x2231818
    ctx->pc = 0x23fdb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23fdb4: 0x3c020033
    ctx->pc = 0x23fdb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23fdb8: 0x2442dfd0
    ctx->pc = 0x23fdb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23fdbc: 0x628021
    ctx->pc = 0x23fdbcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fdc0: 0x8e020298
    ctx->pc = 0x23fdc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x23fdc4: 0x4400017
    ctx->pc = 0x23FDC4u;
    {
        const bool branch_taken_0x23fdc4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23FDC8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23fdc4) {
            ctx->pc = 0x23FE24u;
            goto label_23fe24;
        }
    }
    ctx->pc = 0x23FDCCu;
    // 0x23fdcc: 0x86030324
    ctx->pc = 0x23fdccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23fdd0: 0x86020328
    ctx->pc = 0x23fdd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x23fdd4: 0x50620004
    ctx->pc = 0x23FDD4u;
    {
        const bool branch_taken_0x23fdd4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23fdd4) {
            ctx->pc = 0x23FDD8u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x23FDE8u;
            goto label_23fde8;
        }
    }
    ctx->pc = 0x23FDDCu;
    // 0x23fddc: 0xc08e210
    ctx->pc = 0x23FDDCu;
    SET_GPR_U32(ctx, 31, 0x23FDE4u);
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FDE4u; }
    }
    if (ctx->pc != 0x23FDE4u) { return; }
    ctx->pc = 0x23FDE4u;
    // 0x23fde4: 0x200202d
    ctx->pc = 0x23fde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23fde8:
    // 0x23fde8: 0xc08f0f0
    ctx->pc = 0x23FDE8u;
    SET_GPR_U32(ctx, 31, 0x23FDF0u);
    ctx->pc = 0x23FDECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FDF0u; }
    }
    if (ctx->pc != 0x23FDF0u) { return; }
    ctx->pc = 0x23FDF0u;
    // 0x23fdf0: 0xe6000260
    ctx->pc = 0x23fdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23fdf4: 0xae00036c
    ctx->pc = 0x23fdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
    // 0x23fdf8: 0x200202d
    ctx->pc = 0x23fdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fdfc: 0x3c013f80
    ctx->pc = 0x23fdfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23fe00: 0x44816000
    ctx->pc = 0x23fe00u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23fe04: 0xc08f14c
    ctx->pc = 0x23FE04u;
    SET_GPR_U32(ctx, 31, 0x23FE0Cu);
    ctx->pc = 0x23FE08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FE0Cu; }
    }
    if (ctx->pc != 0x23FE0Cu) { return; }
    ctx->pc = 0x23FE0Cu;
    // 0x23fe0c: 0xc08f20c
    ctx->pc = 0x23FE0Cu;
    SET_GPR_U32(ctx, 31, 0x23FE14u);
    ctx->pc = 0x23FE10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FE14u; }
    }
    if (ctx->pc != 0x23FE14u) { return; }
    ctx->pc = 0x23FE14u;
    // 0x23fe14: 0xe6000258
    ctx->pc = 0x23fe14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x23fe18: 0xc090e82
    ctx->pc = 0x23FE18u;
    SET_GPR_U32(ctx, 31, 0x23FE20u);
    ctx->pc = 0x23FE1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FE20u; }
    }
    if (ctx->pc != 0x23FE20u) { return; }
    ctx->pc = 0x23FE20u;
    // 0x23fe20: 0x2402ffff
    ctx->pc = 0x23fe20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_23fe24:
    // 0x23fe24: 0xdfbf0020
    ctx->pc = 0x23fe24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fe28: 0xdfb10010
    ctx->pc = 0x23fe28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fe2c: 0xdfb00000
    ctx->pc = 0x23fe2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fe30: 0x3e00008
    ctx->pc = 0x23FE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FE34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23FDE8u: goto label_23fde8;
            case 0x23FE24u: goto label_23fe24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23FE38u;
}
