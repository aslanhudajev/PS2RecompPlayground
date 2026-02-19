#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_actual_closest_player
// Address: 0x2372b0 - 0x2373b8
void get_actual_closest_player_0x2372b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2372b0u;

    // 0x2372b0: 0x27bdff80
    ctx->pc = 0x2372b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2372b4: 0xffbf0060
    ctx->pc = 0x2372b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2372b8: 0xffb40050
    ctx->pc = 0x2372b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2372bc: 0xffb30040
    ctx->pc = 0x2372bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2372c0: 0xffb20030
    ctx->pc = 0x2372c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2372c4: 0xffb10020
    ctx->pc = 0x2372c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2372c8: 0xffb00010
    ctx->pc = 0x2372c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2372cc: 0xe7b40070
    ctx->pc = 0x2372ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2372d0: 0x80902d
    ctx->pc = 0x2372d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372d4: 0x3c020032
    ctx->pc = 0x2372d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2372d8: 0x24501bc0
    ctx->pc = 0x2372d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2372dc: 0x2413ffff
    ctx->pc = 0x2372dcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2372e0: 0x3c0147c3
    ctx->pc = 0x2372e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x2372e4: 0x34215000
    ctx->pc = 0x2372e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x2372e8: 0x4481a000
    ctx->pc = 0x2372e8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2372ec: 0x882d
    ctx->pc = 0x2372ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372f0: 0x24140001
    ctx->pc = 0x2372f0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2372f4: 0x0
    ctx->pc = 0x2372f4u;
    // NOP
label_2372f8:
    // 0x2372f8: 0x8e0200fc
    ctx->pc = 0x2372f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x2372fc: 0x54540021
    ctx->pc = 0x2372FCu;
    {
        const bool branch_taken_0x2372fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        if (branch_taken_0x2372fc) {
            ctx->pc = 0x237300u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x237384u;
            goto label_237384;
        }
    }
    ctx->pc = 0x237304u;
    // 0x237304: 0xc6430060
    ctx->pc = 0x237304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x237308: 0xc6000070
    ctx->pc = 0x237308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23730c: 0x460018c1
    ctx->pc = 0x23730cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x237310: 0xe7a30000
    ctx->pc = 0x237310u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x237314: 0xc6420064
    ctx->pc = 0x237314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x237318: 0xc6000074
    ctx->pc = 0x237318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23731c: 0x46001081
    ctx->pc = 0x23731cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x237320: 0xe7a20004
    ctx->pc = 0x237320u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x237324: 0xc6400068
    ctx->pc = 0x237324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237328: 0xc6010078
    ctx->pc = 0x237328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23732c: 0x46010001
    ctx->pc = 0x23732cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x237330: 0xe7a00008
    ctx->pc = 0x237330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x237334: 0x460318c2
    ctx->pc = 0x237334u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x237338: 0x46021082
    ctx->pc = 0x237338u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x23733c: 0x460218c0
    ctx->pc = 0x23733cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x237340: 0x46000002
    ctx->pc = 0x237340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x237344: 0x46001b00
    ctx->pc = 0x237344u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x237348: 0x0
    ctx->pc = 0x237348u;
    // NOP
    // 0x23734c: 0x0
    ctx->pc = 0x23734cu;
    // NOP
    // 0x237350: 0x460c0004
    ctx->pc = 0x237350u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x237354: 0x46000032
    ctx->pc = 0x237354u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237358: 0x45010003
    ctx->pc = 0x237358u;
    {
        const bool branch_taken_0x237358 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x237358) {
            ctx->pc = 0x237368u;
            goto label_237368;
        }
    }
    ctx->pc = 0x237360u;
    // 0x237360: 0xc0ba284
    ctx->pc = 0x237360u;
    SET_GPR_U32(ctx, 31, 0x237368u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237368u; }
    }
    if (ctx->pc != 0x237368u) { return; }
    ctx->pc = 0x237368u;
label_237368:
    // 0x237368: 0x46140034
    ctx->pc = 0x237368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23736c: 0x0
    ctx->pc = 0x23736cu;
    // NOP
    // 0x237370: 0x45020004
    ctx->pc = 0x237370u;
    {
        const bool branch_taken_0x237370 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x237370) {
            ctx->pc = 0x237374u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x237384u;
            goto label_237384;
        }
    }
    ctx->pc = 0x237378u;
    // 0x237378: 0x46000506
    ctx->pc = 0x237378u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x23737c: 0x220982d
    ctx->pc = 0x23737cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237380: 0x26310001
    ctx->pc = 0x237380u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_237384:
    // 0x237384: 0x2a220004
    ctx->pc = 0x237384u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x237388: 0x1440ffdb
    ctx->pc = 0x237388u;
    {
        const bool branch_taken_0x237388 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23738Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 11008));
        if (branch_taken_0x237388) {
            ctx->pc = 0x2372F8u;
            goto label_2372f8;
        }
    }
    ctx->pc = 0x237390u;
    // 0x237390: 0x260102d
    ctx->pc = 0x237390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237394: 0xdfbf0060
    ctx->pc = 0x237394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x237398: 0xdfb40050
    ctx->pc = 0x237398u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23739c: 0xdfb30040
    ctx->pc = 0x23739cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2373a0: 0xdfb20030
    ctx->pc = 0x2373a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2373a4: 0xdfb10020
    ctx->pc = 0x2373a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2373a8: 0xdfb00010
    ctx->pc = 0x2373a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2373ac: 0xc7b40070
    ctx->pc = 0x2373acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2373b0: 0x3e00008
    ctx->pc = 0x2373B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2373B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2372F8u: goto label_2372f8;
            case 0x237368u: goto label_237368;
            case 0x237384u: goto label_237384;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2373B8u;
}
