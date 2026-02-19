#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetObjWorldMat
// Address: 0x203408 - 0x203488
void GetObjWorldMat_0x203408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203408u;

    // 0x203408: 0x27bdffc0
    ctx->pc = 0x203408u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20340c: 0xffbf0030
    ctx->pc = 0x20340cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x203410: 0xffb20020
    ctx->pc = 0x203410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x203414: 0xffb10010
    ctx->pc = 0x203414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x203418: 0xffb00000
    ctx->pc = 0x203418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20341c: 0x80802d
    ctx->pc = 0x20341cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203420: 0xa0882d
    ctx->pc = 0x203420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203424: 0x12000011
    ctx->pc = 0x203424u;
    {
        const bool branch_taken_0x203424 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x203428u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x203424) {
            ctx->pc = 0x20346Cu;
            goto label_20346c;
        }
    }
    ctx->pc = 0x20342Cu;
    // 0x20342c: 0x8e040060
    ctx->pc = 0x20342cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x203430: 0x10800009
    ctx->pc = 0x203430u;
    {
        const bool branch_taken_0x203430 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x203434u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x203430) {
            ctx->pc = 0x203458u;
            goto label_203458;
        }
    }
    ctx->pc = 0x203438u;
    // 0x203438: 0xc0b4302
    ctx->pc = 0x203438u;
    SET_GPR_U32(ctx, 31, 0x203440u);
    ctx->pc = 0x20343Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203440u; }
    }
    if (ctx->pc != 0x203440u) { return; }
    ctx->pc = 0x203440u;
    // 0x203440: 0x200202d
    ctx->pc = 0x203440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203444: 0x220282d
    ctx->pc = 0x203444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203448: 0xc080cd4
    ctx->pc = 0x203448u;
    SET_GPR_U32(ctx, 31, 0x203450u);
    ctx->pc = 0x20344Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203350u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjOffsets_0x203350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203450u; }
    }
    if (ctx->pc != 0x203450u) { return; }
    ctx->pc = 0x203450u;
    // 0x203450: 0x10000007
    ctx->pc = 0x203450u;
    {
        const bool branch_taken_0x203450 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203454u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x203450) {
            ctx->pc = 0x203470u;
            goto label_203470;
        }
    }
    ctx->pc = 0x203458u;
label_203458:
    // 0x203458: 0x12000004
    ctx->pc = 0x203458u;
    {
        const bool branch_taken_0x203458 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x20345Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x203458) {
            ctx->pc = 0x20346Cu;
            goto label_20346c;
        }
    }
    ctx->pc = 0x203460u;
    // 0x203460: 0x24842550
    ctx->pc = 0x203460u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x203464: 0xc0b5494
    ctx->pc = 0x203464u;
    SET_GPR_U32(ctx, 31, 0x20346Cu);
    ctx->pc = 0x203468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20346Cu; }
    }
    if (ctx->pc != 0x20346Cu) { return; }
    ctx->pc = 0x20346Cu;
label_20346c:
    // 0x20346c: 0x200202d
    ctx->pc = 0x20346cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203470:
    // 0x203470: 0xdfbf0030
    ctx->pc = 0x203470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203474: 0xdfb20020
    ctx->pc = 0x203474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203478: 0xdfb10010
    ctx->pc = 0x203478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20347c: 0xdfb00000
    ctx->pc = 0x20347cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203480: 0x8080c6e
    ctx->pc = 0x203480u;
    ctx->pc = 0x203484u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2031B8u;
    CheckMat4_0x2031b8(rdram, ctx, runtime); return;
    ctx->pc = 0x203488u;
}
