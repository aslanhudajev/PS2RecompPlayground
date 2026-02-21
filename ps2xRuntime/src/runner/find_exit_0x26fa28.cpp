#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: find_exit
// Address: 0x26fa28 - 0x26fb60
void find_exit_0x26fa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26fa28u;

    // 0x26fa28: 0x27bdff60
    ctx->pc = 0x26fa28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26fa2c: 0xffbf0080
    ctx->pc = 0x26fa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x26fa30: 0xffb60070
    ctx->pc = 0x26fa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x26fa34: 0xffb50060
    ctx->pc = 0x26fa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x26fa38: 0xffb40050
    ctx->pc = 0x26fa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x26fa3c: 0xffb30040
    ctx->pc = 0x26fa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x26fa40: 0xffb20030
    ctx->pc = 0x26fa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x26fa44: 0xffb10020
    ctx->pc = 0x26fa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x26fa48: 0xffb00010
    ctx->pc = 0x26fa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26fa4c: 0xe7b40090
    ctx->pc = 0x26fa4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x26fa50: 0x2413ffff
    ctx->pc = 0x26fa50u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26fa54: 0x3c0147c3
    ctx->pc = 0x26fa54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x26fa58: 0x34215000
    ctx->pc = 0x26fa58u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x26fa5c: 0x4481a000
    ctx->pc = 0x26fa5cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x26fa60: 0x3c020034
    ctx->pc = 0x26fa60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26fa64: 0x8c50cd94
    ctx->pc = 0x26fa64u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x26fa68: 0x3c020034
    ctx->pc = 0x26fa68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26fa6c: 0x8c42cd98
    ctx->pc = 0x26fa6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x26fa70: 0x1840002f
    ctx->pc = 0x26FA70u;
    {
        const bool branch_taken_0x26fa70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26FA74u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26fa70) {
            ctx->pc = 0x26FB30u;
            goto label_26fb30;
        }
    }
    ctx->pc = 0x26FA78u;
    // 0x26fa78: 0x24160009
    ctx->pc = 0x26fa78u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 9));
    // 0x26fa7c: 0x3c150033
    ctx->pc = 0x26fa7cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)51 << 16));
    // 0x26fa80: 0x2a0102d
    ctx->pc = 0x26fa80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fa84: 0x2452c7c8
    ctx->pc = 0x26fa84u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294952904));
    // 0x26fa88: 0x3c140034
    ctx->pc = 0x26fa88u;
    SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
    // 0x26fa8c: 0x0
    ctx->pc = 0x26fa8cu;
    // NOP
label_26fa90:
    // 0x26fa90: 0x8e020000
    ctx->pc = 0x26fa90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26fa94: 0x8c420000
    ctx->pc = 0x26fa94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26fa98: 0x54560021
    ctx->pc = 0x26FA98u;
    {
        const bool branch_taken_0x26fa98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 22));
        if (branch_taken_0x26fa98) {
            ctx->pc = 0x26FA9Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x26FB20u;
            goto label_26fb20;
        }
    }
    ctx->pc = 0x26FAA0u;
    // 0x26faa0: 0xc6a3c7c8
    ctx->pc = 0x26faa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294952904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26faa4: 0xc6000040
    ctx->pc = 0x26faa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26faa8: 0x460018c1
    ctx->pc = 0x26faa8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x26faac: 0xe7a30000
    ctx->pc = 0x26faacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26fab0: 0xc6420004
    ctx->pc = 0x26fab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fab4: 0xc6000044
    ctx->pc = 0x26fab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fab8: 0x46001081
    ctx->pc = 0x26fab8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26fabc: 0xe7a20004
    ctx->pc = 0x26fabcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26fac0: 0xc6400008
    ctx->pc = 0x26fac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fac4: 0xc6010048
    ctx->pc = 0x26fac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fac8: 0x46010001
    ctx->pc = 0x26fac8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26facc: 0xe7a00008
    ctx->pc = 0x26faccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26fad0: 0x460318c2
    ctx->pc = 0x26fad0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x26fad4: 0x46021082
    ctx->pc = 0x26fad4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26fad8: 0x460218c0
    ctx->pc = 0x26fad8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x26fadc: 0x46000002
    ctx->pc = 0x26fadcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x26fae0: 0x46001b00
    ctx->pc = 0x26fae0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x26fae4: 0x0
    ctx->pc = 0x26fae4u;
    // NOP
    // 0x26fae8: 0x0
    ctx->pc = 0x26fae8u;
    // NOP
    // 0x26faec: 0x460c0004
    ctx->pc = 0x26faecu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x26faf0: 0x46000032
    ctx->pc = 0x26faf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26faf4: 0x45010003
    ctx->pc = 0x26FAF4u;
    {
        const bool branch_taken_0x26faf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26faf4) {
            ctx->pc = 0x26FB04u;
            goto label_26fb04;
        }
    }
    ctx->pc = 0x26FAFCu;
    // 0x26fafc: 0xc0ba284
    ctx->pc = 0x26FAFCu;
    SET_GPR_U32(ctx, 31, 0x26FB04u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FB04u; }
    }
    if (ctx->pc != 0x26FB04u) { return; }
    ctx->pc = 0x26FB04u;
label_26fb04:
    // 0x26fb04: 0x46140034
    ctx->pc = 0x26fb04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fb08: 0x0
    ctx->pc = 0x26fb08u;
    // NOP
    // 0x26fb0c: 0x45020004
    ctx->pc = 0x26FB0Cu;
    {
        const bool branch_taken_0x26fb0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fb0c) {
            ctx->pc = 0x26FB10u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x26FB20u;
            goto label_26fb20;
        }
    }
    ctx->pc = 0x26FB14u;
    // 0x26fb14: 0x220982d
    ctx->pc = 0x26fb14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb18: 0x46000506
    ctx->pc = 0x26fb18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26fb1c: 0x26310001
    ctx->pc = 0x26fb1cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_26fb20:
    // 0x26fb20: 0x8e82cd98
    ctx->pc = 0x26fb20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294954392)));
    // 0x26fb24: 0x222102a
    ctx->pc = 0x26fb24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x26fb28: 0x1440ffd9
    ctx->pc = 0x26FB28u;
    {
        const bool branch_taken_0x26fb28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26FB2Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 272));
        if (branch_taken_0x26fb28) {
            ctx->pc = 0x26FA90u;
            goto label_26fa90;
        }
    }
    ctx->pc = 0x26FB30u;
label_26fb30:
    // 0x26fb30: 0x260102d
    ctx->pc = 0x26fb30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb34: 0xdfbf0080
    ctx->pc = 0x26fb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26fb38: 0xdfb60070
    ctx->pc = 0x26fb38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26fb3c: 0xdfb50060
    ctx->pc = 0x26fb3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26fb40: 0xdfb40050
    ctx->pc = 0x26fb40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26fb44: 0xdfb30040
    ctx->pc = 0x26fb44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26fb48: 0xdfb20030
    ctx->pc = 0x26fb48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26fb4c: 0xdfb10020
    ctx->pc = 0x26fb4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fb50: 0xdfb00010
    ctx->pc = 0x26fb50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fb54: 0xc7b40090
    ctx->pc = 0x26fb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26fb58: 0x3e00008
    ctx->pc = 0x26FB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FB5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26FA90u: goto label_26fa90;
            case 0x26FB04u: goto label_26fb04;
            case 0x26FB20u: goto label_26fb20;
            case 0x26FB30u: goto label_26fb30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26FB60u;
}
