#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: distance_to_closest_player
// Address: 0x254498 - 0x25458c
void distance_to_closest_player_0x254498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x254498u;

    // 0x254498: 0x27bdff90
    ctx->pc = 0x254498u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25449c: 0xffbf0050
    ctx->pc = 0x25449cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2544a0: 0xffb30040
    ctx->pc = 0x2544a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2544a4: 0xffb20030
    ctx->pc = 0x2544a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2544a8: 0xffb10020
    ctx->pc = 0x2544a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2544ac: 0xffb00010
    ctx->pc = 0x2544acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2544b0: 0xe7b40060
    ctx->pc = 0x2544b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2544b4: 0x80882d
    ctx->pc = 0x2544b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2544b8: 0x3c020032
    ctx->pc = 0x2544b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2544bc: 0x24501bc0
    ctx->pc = 0x2544bcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2544c0: 0x3c0147c3
    ctx->pc = 0x2544c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x2544c4: 0x34215000
    ctx->pc = 0x2544c4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x2544c8: 0x4481a000
    ctx->pc = 0x2544c8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2544cc: 0x902d
    ctx->pc = 0x2544ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2544d0: 0x24130001
    ctx->pc = 0x2544d0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2544d4: 0x0
    ctx->pc = 0x2544d4u;
    // NOP
label_2544d8:
    // 0x2544d8: 0x8e0200fc
    ctx->pc = 0x2544d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x2544dc: 0x5453001f
    ctx->pc = 0x2544DCu;
    {
        const bool branch_taken_0x2544dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x2544dc) {
            ctx->pc = 0x2544E0u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x25455Cu;
            goto label_25455c;
        }
    }
    ctx->pc = 0x2544E4u;
    // 0x2544e4: 0xc6230000
    ctx->pc = 0x2544e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2544e8: 0xc6000050
    ctx->pc = 0x2544e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2544ec: 0x460018c1
    ctx->pc = 0x2544ecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2544f0: 0xe7a30000
    ctx->pc = 0x2544f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2544f4: 0xc6220004
    ctx->pc = 0x2544f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2544f8: 0xc6000054
    ctx->pc = 0x2544f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2544fc: 0x46001081
    ctx->pc = 0x2544fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x254500: 0xe7a20004
    ctx->pc = 0x254500u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x254504: 0xc6200008
    ctx->pc = 0x254504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254508: 0xc6010058
    ctx->pc = 0x254508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25450c: 0x46010001
    ctx->pc = 0x25450cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x254510: 0xe7a00008
    ctx->pc = 0x254510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x254514: 0x460318c2
    ctx->pc = 0x254514u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x254518: 0x46021082
    ctx->pc = 0x254518u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x25451c: 0x460218c0
    ctx->pc = 0x25451cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x254520: 0x46000002
    ctx->pc = 0x254520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x254524: 0x46001b00
    ctx->pc = 0x254524u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x254528: 0x0
    ctx->pc = 0x254528u;
    // NOP
    // 0x25452c: 0x0
    ctx->pc = 0x25452cu;
    // NOP
    // 0x254530: 0x460c0004
    ctx->pc = 0x254530u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x254534: 0x46000032
    ctx->pc = 0x254534u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254538: 0x45010003
    ctx->pc = 0x254538u;
    {
        const bool branch_taken_0x254538 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x254538) {
            ctx->pc = 0x254548u;
            goto label_254548;
        }
    }
    ctx->pc = 0x254540u;
    // 0x254540: 0xc0ba284
    ctx->pc = 0x254540u;
    SET_GPR_U32(ctx, 31, 0x254548u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254548u; }
    }
    if (ctx->pc != 0x254548u) { return; }
    ctx->pc = 0x254548u;
label_254548:
    // 0x254548: 0x46140034
    ctx->pc = 0x254548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25454c: 0x0
    ctx->pc = 0x25454cu;
    // NOP
    // 0x254550: 0x45030001
    ctx->pc = 0x254550u;
    {
        const bool branch_taken_0x254550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x254550) {
            ctx->pc = 0x254554u;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x254558u;
            goto label_254558;
        }
    }
    ctx->pc = 0x254558u;
label_254558:
    // 0x254558: 0x26520001
    ctx->pc = 0x254558u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_25455c:
    // 0x25455c: 0x2a420004
    ctx->pc = 0x25455cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x254560: 0x1440ffdd
    ctx->pc = 0x254560u;
    {
        const bool branch_taken_0x254560 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x254564u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 11008));
        if (branch_taken_0x254560) {
            ctx->pc = 0x2544D8u;
            goto label_2544d8;
        }
    }
    ctx->pc = 0x254568u;
    // 0x254568: 0x4600a006
    ctx->pc = 0x254568u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x25456c: 0xdfbf0050
    ctx->pc = 0x25456cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x254570: 0xdfb30040
    ctx->pc = 0x254570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254574: 0xdfb20030
    ctx->pc = 0x254574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254578: 0xdfb10020
    ctx->pc = 0x254578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25457c: 0xdfb00010
    ctx->pc = 0x25457cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254580: 0xc7b40060
    ctx->pc = 0x254580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x254584: 0x3e00008
    ctx->pc = 0x254584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254588u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2544D8u: goto label_2544d8;
            case 0x254548u: goto label_254548;
            case 0x254558u: goto label_254558;
            case 0x25455Cu: goto label_25455c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25458Cu;
}
