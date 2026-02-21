#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSetVu1DataF
// Address: 0x2b3690 - 0x2b370c
void pbSetVu1DataF_0x2b3690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3690u;

    // 0x2b3690: 0x27bdffd0
    ctx->pc = 0x2b3690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b3694: 0xffbf0010
    ctx->pc = 0x2b3694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b3698: 0xffb00000
    ctx->pc = 0x2b3698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b369c: 0xe7b40020
    ctx->pc = 0x2b369cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b36a0: 0xc0802d
    ctx->pc = 0x2b36a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b36a4: 0x46006506
    ctx->pc = 0x2b36a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2b36a8: 0xc0accda
    ctx->pc = 0x2B36A8u;
    SET_GPR_U32(ctx, 31, 0x2B36B0u);
    ctx->pc = 0x2B36ACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3368u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1DataAddr_0x2b3368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B36B0u; }
    }
    if (ctx->pc != 0x2B36B0u) { return; }
    ctx->pc = 0x2B36B0u;
    // 0x2b36b0: 0x40202d
    ctx->pc = 0x2b36b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b36b4: 0x54800003
    ctx->pc = 0x2B36B4u;
    {
        const bool branch_taken_0x2b36b4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b36b4) {
            ctx->pc = 0x2B36B8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x2B36C4u;
            goto label_2b36c4;
        }
    }
    ctx->pc = 0x2B36BCu;
    // 0x2b36bc: 0x1000000e
    ctx->pc = 0x2B36BCu;
    {
        const bool branch_taken_0x2b36bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B36C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2b36bc) {
            ctx->pc = 0x2B36F8u;
            goto label_2b36f8;
        }
    }
    ctx->pc = 0x2B36C4u;
label_2b36c4:
    // 0x2b36c4: 0x3c02ffff
    ctx->pc = 0x2b36c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2b36c8: 0x3442ffff
    ctx->pc = 0x2b36c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2b36cc: 0x54620003
    ctx->pc = 0x2B36CCu;
    {
        const bool branch_taken_0x2b36cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b36cc) {
            ctx->pc = 0x2B36D0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x2B36DCu;
            goto label_2b36dc;
        }
    }
    ctx->pc = 0x2B36D4u;
    // 0x2b36d4: 0x10000008
    ctx->pc = 0x2B36D4u;
    {
        const bool branch_taken_0x2b36d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B36D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2b36d4) {
            ctx->pc = 0x2B36F8u;
            goto label_2b36f8;
        }
    }
    ctx->pc = 0x2B36DCu;
label_2b36dc:
    // 0x2b36dc: 0x101880
    ctx->pc = 0x2b36dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b36e0: 0x621821
    ctx->pc = 0x2b36e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b36e4: 0x3c021100
    ctx->pc = 0x2b36e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4352 << 16));
    // 0x2b36e8: 0x3442c000
    ctx->pc = 0x2b36e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49152));
    // 0x2b36ec: 0x621821
    ctx->pc = 0x2b36ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b36f0: 0xe4740000
    ctx->pc = 0x2b36f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b36f4: 0x102d
    ctx->pc = 0x2b36f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b36f8:
    // 0x2b36f8: 0xdfbf0010
    ctx->pc = 0x2b36f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b36fc: 0xdfb00000
    ctx->pc = 0x2b36fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3700: 0xc7b40020
    ctx->pc = 0x2b3700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b3704: 0x3e00008
    ctx->pc = 0x2B3704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3708u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B36C4u: goto label_2b36c4;
            case 0x2B36DCu: goto label_2b36dc;
            case 0x2B36F8u: goto label_2b36f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B370Cu;
}
