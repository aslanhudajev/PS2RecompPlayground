#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterActivate
// Address: 0x2977b8 - 0x297820
void CritterActivate_0x2977b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2977b8u;

    // 0x2977b8: 0x27bdffe0
    ctx->pc = 0x2977b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2977bc: 0xffbf0010
    ctx->pc = 0x2977bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2977c0: 0x24020003
    ctx->pc = 0x2977c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2977c4: 0xac820008
    ctx->pc = 0x2977c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2977c8: 0x8c820b60
    ctx->pc = 0x2977c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2912)));
    // 0x2977cc: 0x10400009
    ctx->pc = 0x2977CCu;
    {
        const bool branch_taken_0x2977cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2977D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2977cc) {
            ctx->pc = 0x2977F4u;
            goto label_2977f4;
        }
    }
    ctx->pc = 0x2977D4u;
    // 0x2977d4: 0x0
    ctx->pc = 0x2977d4u;
    // NOP
label_2977d8:
    // 0x2977d8: 0xac430008
    ctx->pc = 0x2977d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2977dc: 0x8c420b60
    ctx->pc = 0x2977dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2912)));
    // 0x2977e0: 0x0
    ctx->pc = 0x2977e0u;
    // NOP
    // 0x2977e4: 0x0
    ctx->pc = 0x2977e4u;
    // NOP
    // 0x2977e8: 0x0
    ctx->pc = 0x2977e8u;
    // NOP
    // 0x2977ec: 0x1440fffa
    ctx->pc = 0x2977ECu;
    {
        const bool branch_taken_0x2977ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2977ec) {
            ctx->pc = 0x2977D8u;
            goto label_2977d8;
        }
    }
    ctx->pc = 0x2977F4u;
label_2977f4:
    // 0x2977f4: 0x8c820004
    ctx->pc = 0x2977f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2977f8: 0x8c420120
    ctx->pc = 0x2977f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x2977fc: 0x84430020
    ctx->pc = 0x2977fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x297800: 0x24020004
    ctx->pc = 0x297800u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x297804: 0x14620004
    ctx->pc = 0x297804u;
    {
        const bool branch_taken_0x297804 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x297808u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x297804) {
            ctx->pc = 0x297818u;
            goto label_297818;
        }
    }
    ctx->pc = 0x29780Cu;
    // 0x29780c: 0xc0a7846
    ctx->pc = 0x29780Cu;
    SET_GPR_U32(ctx, 31, 0x297814u);
    ctx->pc = 0x297810u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x29E118u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossActivate_0x29e118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297814u; }
    }
    if (ctx->pc != 0x297814u) { return; }
    ctx->pc = 0x297814u;
    // 0x297814: 0xdfbf0010
    ctx->pc = 0x297814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_297818:
    // 0x297818: 0x3e00008
    ctx->pc = 0x297818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29781Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2977D8u: goto label_2977d8;
            case 0x2977F4u: goto label_2977f4;
            case 0x297818u: goto label_297818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x297820u;
}
