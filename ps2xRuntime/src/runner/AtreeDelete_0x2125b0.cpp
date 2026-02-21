#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeDelete
// Address: 0x2125b0 - 0x212608
void AtreeDelete_0x2125b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2125b0u;

    // 0x2125b0: 0x27bdffd0
    ctx->pc = 0x2125b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2125b4: 0xffbf0020
    ctx->pc = 0x2125b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2125b8: 0xffb10010
    ctx->pc = 0x2125b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2125bc: 0xffb00000
    ctx->pc = 0x2125bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2125c0: 0x80882d
    ctx->pc = 0x2125c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125c4: 0x8e240000
    ctx->pc = 0x2125c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2125c8: 0x10800009
    ctx->pc = 0x2125C8u;
    {
        const bool branch_taken_0x2125c8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2125CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2125c8) {
            ctx->pc = 0x2125F0u;
            goto label_2125f0;
        }
    }
    ctx->pc = 0x2125D0u;
    // 0x2125d0: 0x8c90000c
    ctx->pc = 0x2125d0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2125d4: 0x0
    ctx->pc = 0x2125d4u;
    // NOP
label_2125d8:
    // 0x2125d8: 0x24050001
    ctx->pc = 0x2125d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2125dc: 0xc0848dc
    ctx->pc = 0x2125DCu;
    SET_GPR_U32(ctx, 31, 0x2125E4u);
    ctx->pc = 0x2125E0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212370u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeRemoveNode_0x212370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125E4u; }
    }
    if (ctx->pc != 0x2125E4u) { return; }
    ctx->pc = 0x2125E4u;
    // 0x2125e4: 0x200202d
    ctx->pc = 0x2125e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125e8: 0x5480fffb
    ctx->pc = 0x2125E8u;
    {
        const bool branch_taken_0x2125e8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x2125e8) {
            ctx->pc = 0x2125ECu;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->pc = 0x2125D8u;
            goto label_2125d8;
        }
    }
    ctx->pc = 0x2125F0u;
label_2125f0:
    // 0x2125f0: 0xae200000
    ctx->pc = 0x2125f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2125f4: 0xdfbf0020
    ctx->pc = 0x2125f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2125f8: 0xdfb10010
    ctx->pc = 0x2125f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2125fc: 0xdfb00000
    ctx->pc = 0x2125fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212600: 0x3e00008
    ctx->pc = 0x212600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212604u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2125D8u: goto label_2125d8;
            case 0x2125F0u: goto label_2125f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212608u;
}
