#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbVuEvalComment
// Address: 0x2b76c0 - 0x2b773c
void pbVuEvalComment_0x2b76c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b76c0u;

    // 0x2b76c0: 0x27bdfff0
    ctx->pc = 0x2b76c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b76c4: 0xffbf0000
    ctx->pc = 0x2b76c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b76c8: 0x80302d
    ctx->pc = 0x2b76c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b76cc: 0x3c020037
    ctx->pc = 0x2b76ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b76d0: 0x8c4320ac
    ctx->pc = 0x2b76d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b76d4: 0x8c62002c
    ctx->pc = 0x2b76d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2b76d8: 0x14400004
    ctx->pc = 0x2B76D8u;
    {
        const bool branch_taken_0x2b76d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B76DCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b76d8) {
            ctx->pc = 0x2B76ECu;
            goto label_2b76ec;
        }
    }
    ctx->pc = 0x2B76E0u;
    // 0x2b76e0: 0x8c620004
    ctx->pc = 0x2b76e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b76e4: 0x10000012
    ctx->pc = 0x2B76E4u;
    {
        const bool branch_taken_0x2b76e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B76E8u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x2b76e4) {
            ctx->pc = 0x2B7730u;
            goto label_2b7730;
        }
    }
    ctx->pc = 0x2B76ECu;
label_2b76ec:
    // 0x2b76ec: 0x10e0000b
    ctx->pc = 0x2B76ECu;
    {
        const bool branch_taken_0x2b76ec = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B76F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2b76ec) {
            ctx->pc = 0x2B771Cu;
            goto label_2b771c;
        }
    }
    ctx->pc = 0x2B76F4u;
    // 0x2b76f4: 0x80e20000
    ctx->pc = 0x2b76f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b76f8: 0x10400008
    ctx->pc = 0x2B76F8u;
    {
        const bool branch_taken_0x2b76f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B76FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2b76f8) {
            ctx->pc = 0x2B771Cu;
            goto label_2b771c;
        }
    }
    ctx->pc = 0x2B7700u;
    // 0x2b7700: 0x8c4220ac
    ctx->pc = 0x2b7700u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b7704: 0x8c440004
    ctx->pc = 0x2b7704u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7708: 0x3c05003b
    ctx->pc = 0x2b7708u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2b770c: 0xc0b6252
    ctx->pc = 0x2B770Cu;
    SET_GPR_U32(ctx, 31, 0x2B7714u);
    ctx->pc = 0x2B7710u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20840));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7714u; }
    }
    if (ctx->pc != 0x2B7714u) { return; }
    ctx->pc = 0x2B7714u;
    // 0x2b7714: 0x10000007
    ctx->pc = 0x2B7714u;
    {
        const bool branch_taken_0x2b7714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7718u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2b7714) {
            ctx->pc = 0x2B7734u;
            goto label_2b7734;
        }
    }
    ctx->pc = 0x2B771Cu;
label_2b771c:
    // 0x2b771c: 0x8c4220ac
    ctx->pc = 0x2b771cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b7720: 0x8c440004
    ctx->pc = 0x2b7720u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7724: 0x3c05003b
    ctx->pc = 0x2b7724u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2b7728: 0xc0b6252
    ctx->pc = 0x2B7728u;
    SET_GPR_U32(ctx, 31, 0x2B7730u);
    ctx->pc = 0x2B772Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17992));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7730u; }
    }
    if (ctx->pc != 0x2B7730u) { return; }
    ctx->pc = 0x2B7730u;
label_2b7730:
    // 0x2b7730: 0xdfbf0000
    ctx->pc = 0x2b7730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b7734:
    // 0x2b7734: 0x3e00008
    ctx->pc = 0x2B7734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7738u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B76ECu: goto label_2b76ec;
            case 0x2B771Cu: goto label_2b771c;
            case 0x2B7730u: goto label_2b7730;
            case 0x2B7734u: goto label_2b7734;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B773Cu;
}
