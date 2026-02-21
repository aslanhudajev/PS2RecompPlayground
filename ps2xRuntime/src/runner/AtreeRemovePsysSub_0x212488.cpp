#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeRemovePsysSub
// Address: 0x212488 - 0x2124f4
void AtreeRemovePsysSub_0x212488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212488u;

label_212488:
    // 0x212488: 0x27bdffd0
    ctx->pc = 0x212488u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21248c: 0xffbf0020
    ctx->pc = 0x21248cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x212490: 0xffb10010
    ctx->pc = 0x212490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x212494: 0xffb00000
    ctx->pc = 0x212494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212498: 0x80802d
    ctx->pc = 0x212498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21249c: 0x12000010
    ctx->pc = 0x21249Cu;
    {
        const bool branch_taken_0x21249c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2124A0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x21249c) {
            ctx->pc = 0x2124E0u;
            goto label_2124e0;
        }
    }
    ctx->pc = 0x2124A4u;
    // 0x2124a4: 0x0
    ctx->pc = 0x2124a4u;
    // NOP
label_2124a8:
    // 0x2124a8: 0xc084922
    ctx->pc = 0x2124A8u;
    SET_GPR_U32(ctx, 31, 0x2124B0u);
    ctx->pc = 0x2124ACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x212488u;
    goto label_212488;
    ctx->pc = 0x2124B0u;
label_2124b0:
    // 0x2124b0: 0x8e020020
    ctx->pc = 0x2124b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2124b4: 0x54510008
    ctx->pc = 0x2124B4u;
    {
        const bool branch_taken_0x2124b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x2124b4) {
            ctx->pc = 0x2124B8u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x2124D8u;
            goto label_2124d8;
        }
    }
    ctx->pc = 0x2124BCu;
    // 0x2124bc: 0x8e04001c
    ctx->pc = 0x2124bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2124c0: 0x50800005
    ctx->pc = 0x2124C0u;
    {
        const bool branch_taken_0x2124c0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2124c0) {
            ctx->pc = 0x2124C4u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x2124D8u;
            goto label_2124d8;
        }
    }
    ctx->pc = 0x2124C8u;
    // 0x2124c8: 0xc0b3f1a
    ctx->pc = 0x2124C8u;
    SET_GPR_U32(ctx, 31, 0x2124D0u);
    ctx->pc = 0x2124CCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124D0u; }
    }
    if (ctx->pc != 0x2124D0u) { return; }
    ctx->pc = 0x2124D0u;
    // 0x2124d0: 0xae02001c
    ctx->pc = 0x2124d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2124d4: 0x8e10000c
    ctx->pc = 0x2124d4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2124d8:
    // 0x2124d8: 0x1600fff3
    ctx->pc = 0x2124D8u;
    {
        const bool branch_taken_0x2124d8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x2124d8) {
            ctx->pc = 0x2124A8u;
            goto label_2124a8;
        }
    }
    ctx->pc = 0x2124E0u;
label_2124e0:
    // 0x2124e0: 0xdfbf0020
    ctx->pc = 0x2124e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2124e4: 0xdfb10010
    ctx->pc = 0x2124e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2124e8: 0xdfb00000
    ctx->pc = 0x2124e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2124ec: 0x3e00008
    ctx->pc = 0x2124ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2124F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212488u: goto label_212488;
            case 0x2124A8u: goto label_2124a8;
            case 0x2124B0u: goto label_2124b0;
            case 0x2124D8u: goto label_2124d8;
            case 0x2124E0u: goto label_2124e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2124F4u;
}
