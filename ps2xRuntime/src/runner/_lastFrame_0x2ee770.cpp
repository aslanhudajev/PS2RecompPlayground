#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _lastFrame
// Address: 0x2ee770 - 0x2ee7f4
void _lastFrame_0x2ee770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ee770u;

    // 0x2ee770: 0x27bdffe0
    ctx->pc = 0x2ee770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ee774: 0xffb00000
    ctx->pc = 0x2ee774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee778: 0x3c10003a
    ctx->pc = 0x2ee778u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2ee77c: 0xffbf0010
    ctx->pc = 0x2ee77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ee780: 0x8e02315c
    ctx->pc = 0x2ee780u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12636)));
    // 0x2ee784: 0x10400006
    ctx->pc = 0x2EE784u;
    {
        const bool branch_taken_0x2ee784 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE788u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ee784) {
            ctx->pc = 0x2EE7A0u;
            goto label_2ee7a0;
        }
    }
    ctx->pc = 0x2EE78Cu;
    // 0x2ee78c: 0x3c04003c
    ctx->pc = 0x2ee78cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2ee790: 0xc0bba56
    ctx->pc = 0x2EE790u;
    SET_GPR_U32(ctx, 31, 0x2EE798u);
    ctx->pc = 0x2EE794u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942104));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE798u; }
    }
    if (ctx->pc != 0x2EE798u) { return; }
    ctx->pc = 0x2EE798u;
    // 0x2ee798: 0x10000012
    ctx->pc = 0x2EE798u;
    {
        const bool branch_taken_0x2ee798 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE79Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12636), GPR_U32(ctx, 0));
        if (branch_taken_0x2ee798) {
            ctx->pc = 0x2EE7E4u;
            goto label_2ee7e4;
        }
    }
    ctx->pc = 0x2EE7A0u;
label_2ee7a0:
    // 0x2ee7a0: 0x3c02003a
    ctx->pc = 0x2ee7a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ee7a4: 0x24040003
    ctx->pc = 0x2ee7a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee7a8: 0x8c4331ec
    ctx->pc = 0x2ee7a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12780)));
    // 0x2ee7ac: 0x14640007
    ctx->pc = 0x2EE7ACu;
    {
        const bool branch_taken_0x2ee7ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x2EE7B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2ee7ac) {
            ctx->pc = 0x2EE7CCu;
            goto label_2ee7cc;
        }
    }
    ctx->pc = 0x2EE7B4u;
    // 0x2ee7b4: 0x3c02003a
    ctx->pc = 0x2ee7b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ee7b8: 0x24a5ffff
    ctx->pc = 0x2ee7b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2ee7bc: 0xc0bcf82
    ctx->pc = 0x2EE7BCu;
    SET_GPR_U32(ctx, 31, 0x2EE7C4u);
    ctx->pc = 0x2EE7C0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12356)));
    ctx->pc = 0x2F3E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImage_0x2f3e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE7C4u; }
    }
    if (ctx->pc != 0x2EE7C4u) { return; }
    ctx->pc = 0x2EE7C4u;
    // 0x2ee7c4: 0x10000007
    ctx->pc = 0x2EE7C4u;
    {
        const bool branch_taken_0x2ee7c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE7C8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12636), GPR_U32(ctx, 0));
        if (branch_taken_0x2ee7c4) {
            ctx->pc = 0x2EE7E4u;
            goto label_2ee7e4;
        }
    }
    ctx->pc = 0x2EE7CCu;
label_2ee7cc:
    // 0x2ee7cc: 0x3c03003a
    ctx->pc = 0x2ee7ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2ee7d0: 0x24a6ffff
    ctx->pc = 0x2ee7d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2ee7d4: 0x8c443050
    ctx->pc = 0x2ee7d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12368)));
    // 0x2ee7d8: 0xc0bcfc8
    ctx->pc = 0x2EE7D8u;
    SET_GPR_U32(ctx, 31, 0x2EE7E0u);
    ctx->pc = 0x2EE7DCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 12380)));
    ctx->pc = 0x2F3F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImageField_0x2f3f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE7E0u; }
    }
    if (ctx->pc != 0x2EE7E0u) { return; }
    ctx->pc = 0x2EE7E0u;
    // 0x2ee7e0: 0xae00315c
    ctx->pc = 0x2ee7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12636), GPR_U32(ctx, 0));
label_2ee7e4:
    // 0x2ee7e4: 0xdfbf0010
    ctx->pc = 0x2ee7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee7e8: 0xdfb00000
    ctx->pc = 0x2ee7e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee7ec: 0x3e00008
    ctx->pc = 0x2EE7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE7F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EE7A0u: goto label_2ee7a0;
            case 0x2EE7CCu: goto label_2ee7cc;
            case 0x2EE7E4u: goto label_2ee7e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2EE7F4u;
}
