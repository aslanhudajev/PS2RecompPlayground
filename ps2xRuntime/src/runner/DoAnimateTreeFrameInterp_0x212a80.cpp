#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoAnimateTreeFrameInterp
// Address: 0x212a80 - 0x212aec
void DoAnimateTreeFrameInterp_0x212a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212a80u;

    // 0x212a80: 0x27bdffb0
    ctx->pc = 0x212a80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x212a84: 0xffbf0040
    ctx->pc = 0x212a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x212a88: 0xffb30030
    ctx->pc = 0x212a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x212a8c: 0xffb20020
    ctx->pc = 0x212a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x212a90: 0xffb10010
    ctx->pc = 0x212a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x212a94: 0xffb00000
    ctx->pc = 0x212a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212a98: 0x80902d
    ctx->pc = 0x212a98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a9c: 0xa0982d
    ctx->pc = 0x212a9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212aa0: 0x120802d
    ctx->pc = 0x212aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212aa4: 0xc0282d
    ctx->pc = 0x212aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212aa8: 0xe0302d
    ctx->pc = 0x212aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212aac: 0xc083fbc
    ctx->pc = 0x212AACu;
    SET_GPR_U32(ctx, 31, 0x212AB4u);
    ctx->pc = 0x212AB0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20FEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateTreeFrameInterp_0x20fef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212AB4u; }
    }
    if (ctx->pc != 0x212AB4u) { return; }
    ctx->pc = 0x212AB4u;
    // 0x212ab4: 0x1a000005
    ctx->pc = 0x212AB4u;
    {
        const bool branch_taken_0x212ab4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x212AB8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212ab4) {
            ctx->pc = 0x212ACCu;
            goto label_212acc;
        }
    }
    ctx->pc = 0x212ABCu;
    // 0x212abc: 0x260202d
    ctx->pc = 0x212abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ac0: 0x240282d
    ctx->pc = 0x212ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ac4: 0xc0849d6
    ctx->pc = 0x212AC4u;
    SET_GPR_U32(ctx, 31, 0x212ACCu);
    ctx->pc = 0x212AC8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212758u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateNode_0x212758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212ACCu; }
    }
    if (ctx->pc != 0x212ACCu) { return; }
    ctx->pc = 0x212ACCu;
label_212acc:
    // 0x212acc: 0x220102d
    ctx->pc = 0x212accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ad0: 0xdfbf0040
    ctx->pc = 0x212ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212ad4: 0xdfb30030
    ctx->pc = 0x212ad4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212ad8: 0xdfb20020
    ctx->pc = 0x212ad8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212adc: 0xdfb10010
    ctx->pc = 0x212adcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212ae0: 0xdfb00000
    ctx->pc = 0x212ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212ae4: 0x3e00008
    ctx->pc = 0x212AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212AE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212ACCu: goto label_212acc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212AECu;
}
