#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: UpdateObjWorldMat
// Address: 0x203388 - 0x203408
void UpdateObjWorldMat_0x203388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203388u;

    // 0x203388: 0x27bdffe0
    ctx->pc = 0x203388u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20338c: 0xffbf0010
    ctx->pc = 0x20338cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x203390: 0xffb00000
    ctx->pc = 0x203390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203394: 0x80802d
    ctx->pc = 0x203394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203398: 0x12000018
    ctx->pc = 0x203398u;
    {
        const bool branch_taken_0x203398 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x20339Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x203398) {
            ctx->pc = 0x2033FCu;
            goto label_2033fc;
        }
    }
    ctx->pc = 0x2033A0u;
    // 0x2033a0: 0x8e050060
    ctx->pc = 0x2033a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2033a4: 0x50a00016
    ctx->pc = 0x2033A4u;
    {
        const bool branch_taken_0x2033a4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x2033a4) {
            ctx->pc = 0x2033A8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x203400u;
            goto label_203400;
        }
    }
    ctx->pc = 0x2033ACu;
    // 0x2033ac: 0xc0b5494
    ctx->pc = 0x2033ACu;
    SET_GPR_U32(ctx, 31, 0x2033B4u);
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2033B4u; }
    }
    if (ctx->pc != 0x2033B4u) { return; }
    ctx->pc = 0x2033B4u;
    // 0x2033b4: 0x8e020060
    ctx->pc = 0x2033b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2033b8: 0x40202d
    ctx->pc = 0x2033b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033bc: 0xc0b42dc
    ctx->pc = 0x2033BCu;
    SET_GPR_U32(ctx, 31, 0x2033C4u);
    ctx->pc = 0x2033C0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 116)));
    ctx->pc = 0x2D0B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        UnparentMatrix_0x2d0b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2033C4u; }
    }
    if (ctx->pc != 0x2033C4u) { return; }
    ctx->pc = 0x2033C4u;
    // 0x2033c4: 0xc080c6e
    ctx->pc = 0x2033C4u;
    SET_GPR_U32(ctx, 31, 0x2033CCu);
    ctx->pc = 0x2033C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->pc = 0x2031B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckMat4_0x2031b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2033CCu; }
    }
    if (ctx->pc != 0x2033CCu) { return; }
    ctx->pc = 0x2033CCu;
    // 0x2033cc: 0x1440000b
    ctx->pc = 0x2033CCu;
    {
        const bool branch_taken_0x2033cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2033D0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2033cc) {
            ctx->pc = 0x2033FCu;
            goto label_2033fc;
        }
    }
    ctx->pc = 0x2033D4u;
    // 0x2033d4: 0x200202d
    ctx->pc = 0x2033d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033d8: 0xc0b5494
    ctx->pc = 0x2033D8u;
    SET_GPR_U32(ctx, 31, 0x2033E0u);
    ctx->pc = 0x2033DCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2033E0u; }
    }
    if (ctx->pc != 0x2033E0u) { return; }
    ctx->pc = 0x2033E0u;
    // 0x2033e0: 0x8e020060
    ctx->pc = 0x2033e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2033e4: 0x40202d
    ctx->pc = 0x2033e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033e8: 0x8c450074
    ctx->pc = 0x2033e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x2033ec: 0xdfbf0010
    ctx->pc = 0x2033ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2033f0: 0xdfb00000
    ctx->pc = 0x2033f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2033f4: 0x80b42dc
    ctx->pc = 0x2033F4u;
    ctx->pc = 0x2033F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D0B70u;
    UnparentMatrix_0x2d0b70(rdram, ctx, runtime); return;
    ctx->pc = 0x2033FCu;
label_2033fc:
    // 0x2033fc: 0xdfb00000
    ctx->pc = 0x2033fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203400:
    // 0x203400: 0x3e00008
    ctx->pc = 0x203400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203404u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2033FCu: goto label_2033fc;
            case 0x203400u: goto label_203400;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203408u;
}
