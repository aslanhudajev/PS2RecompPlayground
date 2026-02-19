#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBRomTexPtr
// Address: 0x2cf680 - 0x2cf6e8
void MBRomTexPtr_0x2cf680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cf680u;

    // 0x2cf680: 0x27bdffd0
    ctx->pc = 0x2cf680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf684: 0xffbf0020
    ctx->pc = 0x2cf684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cf688: 0xffb10010
    ctx->pc = 0x2cf688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cf68c: 0xffb00000
    ctx->pc = 0x2cf68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf690: 0x80802d
    ctx->pc = 0x2cf690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf694: 0x3c020036
    ctx->pc = 0x2cf694u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2cf698: 0x6010005
    ctx->pc = 0x2CF698u;
    {
        const bool branch_taken_0x2cf698 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2CF69Cu;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
        if (branch_taken_0x2cf698) {
            ctx->pc = 0x2CF6B0u;
            goto label_2cf6b0;
        }
    }
    ctx->pc = 0x2CF6A0u;
    // 0x2cf6a0: 0x3c04003b
    ctx->pc = 0x2cf6a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2cf6a4: 0x24847710
    ctx->pc = 0x2cf6a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30480));
    // 0x2cf6a8: 0xc0b49a6
    ctx->pc = 0x2CF6A8u;
    SET_GPR_U32(ctx, 31, 0x2CF6B0u);
    ctx->pc = 0x2CF6ACu;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF6B0u; }
    }
    if (ctx->pc != 0x2CF6B0u) { return; }
    ctx->pc = 0x2CF6B0u;
label_2cf6b0:
    // 0x2cf6b0: 0x102403
    ctx->pc = 0x2cf6b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    // 0x2cf6b4: 0x3202ffff
    ctx->pc = 0x2cf6b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 65535));
    // 0x2cf6b8: 0x8e230038
    ctx->pc = 0x2cf6b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2cf6bc: 0x42100
    ctx->pc = 0x2cf6bcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2cf6c0: 0x641821
    ctx->pc = 0x2cf6c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf6c4: 0x8c630004
    ctx->pc = 0x2cf6c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2cf6c8: 0x8c630058
    ctx->pc = 0x2cf6c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2cf6cc: 0x21180
    ctx->pc = 0x2cf6ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x2cf6d0: 0x621021
    ctx->pc = 0x2cf6d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cf6d4: 0xdfbf0020
    ctx->pc = 0x2cf6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf6d8: 0xdfb10010
    ctx->pc = 0x2cf6d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf6dc: 0xdfb00000
    ctx->pc = 0x2cf6dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf6e0: 0x3e00008
    ctx->pc = 0x2CF6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF6E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CF6B0u: goto label_2cf6b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CF6E8u;
}
