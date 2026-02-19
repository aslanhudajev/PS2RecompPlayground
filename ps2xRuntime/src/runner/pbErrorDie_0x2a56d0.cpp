#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbErrorDie
// Address: 0x2a56d0 - 0x2a5730
void pbErrorDie_0x2a56d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a56d0u;

    // 0x2a56d0: 0x3c030036
    ctx->pc = 0x2a56d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2a56d4: 0x0
    ctx->pc = 0x2a56d4u;
    // NOP
label_2a56d8:
    // 0x2a56d8: 0x8c627ffc
    ctx->pc = 0x2a56d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32764)));
    // 0x2a56dc: 0x0
    ctx->pc = 0x2a56dcu;
    // NOP
    // 0x2a56e0: 0x0
    ctx->pc = 0x2a56e0u;
    // NOP
    // 0x2a56e4: 0x0
    ctx->pc = 0x2a56e4u;
    // NOP
    // 0x2a56e8: 0x0
    ctx->pc = 0x2a56e8u;
    // NOP
    // 0x2a56ec: 0x1040fffa
    ctx->pc = 0x2A56ECu;
    {
        const bool branch_taken_0x2a56ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a56ec) {
            ctx->pc = 0x2A56D8u;
            goto label_2a56d8;
        }
    }
    ctx->pc = 0x2A56F4u;
    // 0x2a56f4: 0x3c020036
    ctx->pc = 0x2a56f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a56f8: 0x8c437ffc
    ctx->pc = 0x2a56f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 32764)));
    // 0x2a56fc: 0x24020002
    ctx->pc = 0x2a56fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5700: 0x10620009
    ctx->pc = 0x2A5700u;
    {
        const bool branch_taken_0x2a5700 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2A5704u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
        if (branch_taken_0x2a5700) {
            ctx->pc = 0x2A5728u;
            goto label_2a5728;
        }
    }
    ctx->pc = 0x2A5708u;
    // 0x2a5708: 0x14400006
    ctx->pc = 0x2A5708u;
    {
        const bool branch_taken_0x2a5708 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A570Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a5708) {
            ctx->pc = 0x2A5724u;
            goto label_2a5724;
        }
    }
    ctx->pc = 0x2A5710u;
    // 0x2a5710: 0x24020003
    ctx->pc = 0x2a5710u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a5714: 0x14620003
    ctx->pc = 0x2A5714u;
    {
        const bool branch_taken_0x2a5714 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2A5718u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a5714) {
            ctx->pc = 0x2A5724u;
            goto label_2a5724;
        }
    }
    ctx->pc = 0x2A571Cu;
    // 0x2a571c: 0x80c0c80
    ctx->pc = 0x2A571Cu;
    ctx->pc = 0x2A5720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303200u;
    Exit_0x303200(rdram, ctx, runtime); return;
    ctx->pc = 0x2A5724u;
label_2a5724:
    // 0x2a5724: 0xac407ffc
    ctx->pc = 0x2a5724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32764), GPR_U32(ctx, 0));
label_2a5728:
    // 0x2a5728: 0x3e00008
    ctx->pc = 0x2A5728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A56D8u: goto label_2a56d8;
            case 0x2A5724u: goto label_2a5724;
            case 0x2A5728u: goto label_2a5728;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A5730u;
}
