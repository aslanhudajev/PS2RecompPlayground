#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerUsePowerup
// Address: 0x22c450 - 0x22c574
void PlayerUsePowerup_0x22c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22c450u;

    // 0x22c450: 0x402d
    ctx->pc = 0x22c450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c454: 0x44800800
    ctx->pc = 0x22c454u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x22c458: 0xc4800144
    ctx->pc = 0x22c458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c45c: 0x46010032
    ctx->pc = 0x22c45cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c460: 0x0
    ctx->pc = 0x22c460u;
    // NOP
    // 0x22c464: 0x45010008
    ctx->pc = 0x22C464u;
    {
        const bool branch_taken_0x22c464 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C468u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22c464) {
            ctx->pc = 0x22C488u;
            goto label_22c488;
        }
    }
    ctx->pc = 0x22C46Cu;
    // 0x22c46c: 0x8c820148
    ctx->pc = 0x22c46cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x22c470: 0x54450006
    ctx->pc = 0x22C470u;
    {
        const bool branch_taken_0x22c470 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x22c470) {
            ctx->pc = 0x22C474u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x22C48Cu;
            goto label_22c48c;
        }
    }
    ctx->pc = 0x22C478u;
    // 0x22c478: 0x8c820150
    ctx->pc = 0x22c478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x22c47c: 0xc21024
    ctx->pc = 0x22c47cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22c480: 0x14400015
    ctx->pc = 0x22C480u;
    {
        const bool branch_taken_0x22c480 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22C484u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 8));
        if (branch_taken_0x22c480) {
            ctx->pc = 0x22C4D8u;
            goto label_22c4d8;
        }
    }
    ctx->pc = 0x22C488u;
label_22c488:
    // 0x22c488: 0x24e70001
    ctx->pc = 0x22c488u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_22c48c:
    // 0x22c48c: 0x28e20008
    ctx->pc = 0x22c48cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 8));
    // 0x22c490: 0x10400036
    ctx->pc = 0x22C490u;
    {
        const bool branch_taken_0x22c490 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C494u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x22c490) {
            ctx->pc = 0x22C56Cu;
            goto label_22c56c;
        }
    }
    ctx->pc = 0x22C498u;
    // 0x22c498: 0x831021
    ctx->pc = 0x22c498u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22c49c: 0x44800800
    ctx->pc = 0x22c49cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x22c4a0: 0xc4400144
    ctx->pc = 0x22c4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c4a4: 0x46010032
    ctx->pc = 0x22c4a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c4a8: 0x0
    ctx->pc = 0x22c4a8u;
    // NOP
    // 0x22c4ac: 0x4503fff7
    ctx->pc = 0x22C4ACu;
    {
        const bool branch_taken_0x22c4ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c4ac) {
            ctx->pc = 0x22C4B0u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x22C48Cu;
            goto label_22c48c;
        }
    }
    ctx->pc = 0x22C4B4u;
    // 0x22c4b4: 0x8c420148
    ctx->pc = 0x22c4b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x22c4b8: 0x5445fff4
    ctx->pc = 0x22C4B8u;
    {
        const bool branch_taken_0x22c4b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x22c4b8) {
            ctx->pc = 0x22C4BCu;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x22C48Cu;
            goto label_22c48c;
        }
    }
    ctx->pc = 0x22C4C0u;
    // 0x22c4c0: 0x831021
    ctx->pc = 0x22c4c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22c4c4: 0x8c420150
    ctx->pc = 0x22c4c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x22c4c8: 0xc21024
    ctx->pc = 0x22c4c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22c4cc: 0x5040ffef
    ctx->pc = 0x22C4CCu;
    {
        const bool branch_taken_0x22c4cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22c4cc) {
            ctx->pc = 0x22C4D0u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x22C48Cu;
            goto label_22c48c;
        }
    }
    ctx->pc = 0x22C4D4u;
    // 0x22c4d4: 0x28e20008
    ctx->pc = 0x22c4d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 8));
label_22c4d8:
    // 0x22c4d8: 0x10400024
    ctx->pc = 0x22C4D8u;
    {
        const bool branch_taken_0x22c4d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C4DCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x22c4d8) {
            ctx->pc = 0x22C56Cu;
            goto label_22c56c;
        }
    }
    ctx->pc = 0x22C4E0u;
    // 0x22c4e0: 0x821021
    ctx->pc = 0x22c4e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22c4e4: 0xc440014c
    ctx->pc = 0x22c4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c4e8: 0x46000064
    ctx->pc = 0x22c4e8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x22c4ec: 0x44080800
    ctx->pc = 0x22c4ecu;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[1]);
    // 0x22c4f0: 0x0
    ctx->pc = 0x22c4f0u;
    // NOP
    // 0x22c4f4: 0x5010003
    ctx->pc = 0x22C4F4u;
    {
        const bool branch_taken_0x22c4f4 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x22C4F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x22c4f4) {
            ctx->pc = 0x22C504u;
            goto label_22c504;
        }
    }
    ctx->pc = 0x22C4FCu;
    // 0x22c4fc: 0x1000001b
    ctx->pc = 0x22C4FCu;
    {
        const bool branch_taken_0x22c4fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C500u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x22c4fc) {
            ctx->pc = 0x22C56Cu;
            goto label_22c56c;
        }
    }
    ctx->pc = 0x22C504u;
label_22c504:
    // 0x22c504: 0x8c43e7f0
    ctx->pc = 0x22c504u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x22c508: 0x2402000d
    ctx->pc = 0x22c508u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x22c50c: 0x10620017
    ctx->pc = 0x22C50Cu;
    {
        const bool branch_taken_0x22c50c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x22c50c) {
            ctx->pc = 0x22C56Cu;
            goto label_22c56c;
        }
    }
    ctx->pc = 0x22C514u;
    // 0x22c514: 0x44800000
    ctx->pc = 0x22c514u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x22c518: 0x46006034
    ctx->pc = 0x22c518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c51c: 0x0
    ctx->pc = 0x22c51cu;
    // NOP
    // 0x22c520: 0x45000004
    ctx->pc = 0x22C520u;
    {
        const bool branch_taken_0x22c520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C524u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x22c520) {
            ctx->pc = 0x22C534u;
            goto label_22c534;
        }
    }
    ctx->pc = 0x22C528u;
    // 0x22c528: 0x821021
    ctx->pc = 0x22c528u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22c52c: 0x10000007
    ctx->pc = 0x22C52Cu;
    {
        const bool branch_taken_0x22c52c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C530u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 332), bits); }
        if (branch_taken_0x22c52c) {
            ctx->pc = 0x22C54Cu;
            goto label_22c54c;
        }
    }
    ctx->pc = 0x22C534u;
label_22c534:
    // 0x22c534: 0x71900
    ctx->pc = 0x22c534u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 4));
    // 0x22c538: 0x2482014c
    ctx->pc = 0x22c538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 332));
    // 0x22c53c: 0x431021
    ctx->pc = 0x22c53cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c540: 0xc4400000
    ctx->pc = 0x22c540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c544: 0x460c0001
    ctx->pc = 0x22c544u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x22c548: 0xe4400000
    ctx->pc = 0x22c548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_22c54c:
    // 0x22c54c: 0x71900
    ctx->pc = 0x22c54cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 4));
    // 0x22c550: 0x831021
    ctx->pc = 0x22c550u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22c554: 0xc440014c
    ctx->pc = 0x22c554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c558: 0x44800800
    ctx->pc = 0x22c558u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x22c55c: 0x46010036
    ctx->pc = 0x22c55cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c560: 0x0
    ctx->pc = 0x22c560u;
    // NOP
    // 0x22c564: 0x45030001
    ctx->pc = 0x22C564u;
    {
        const bool branch_taken_0x22c564 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c564) {
            ctx->pc = 0x22C568u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
            ctx->pc = 0x22C56Cu;
            goto label_22c56c;
        }
    }
    ctx->pc = 0x22C56Cu;
label_22c56c:
    // 0x22c56c: 0x3e00008
    ctx->pc = 0x22C56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C570u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C488u: goto label_22c488;
            case 0x22C48Cu: goto label_22c48c;
            case 0x22C4D8u: goto label_22c4d8;
            case 0x22C504u: goto label_22c504;
            case 0x22C534u: goto label_22c534;
            case 0x22C54Cu: goto label_22c54c;
            case 0x22C56Cu: goto label_22c56c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22C574u;
}
