#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_int
// Address: 0x280b10 - 0x280b68
void set_int_0x280b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x280b10u;

    // 0x280b10: 0x10a00013
    ctx->pc = 0x280B10u;
    {
        const bool branch_taken_0x280b10 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x280b10) {
            ctx->pc = 0x280B60u;
            goto label_280b60;
        }
    }
    ctx->pc = 0x280B18u;
    // 0x280b18: 0x4a00005
    ctx->pc = 0x280B18u;
    {
        const bool branch_taken_0x280b18 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x280B1Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 1000));
        if (branch_taken_0x280b18) {
            ctx->pc = 0x280B30u;
            goto label_280b30;
        }
    }
    ctx->pc = 0x280B20u;
    // 0x280b20: 0x10400003
    ctx->pc = 0x280B20u;
    {
        const bool branch_taken_0x280b20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x280B24u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 998));
        if (branch_taken_0x280b20) {
            ctx->pc = 0x280B30u;
            goto label_280b30;
        }
    }
    ctx->pc = 0x280B28u;
    // 0x280b28: 0x1040000d
    ctx->pc = 0x280B28u;
    {
        const bool branch_taken_0x280b28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x280b28) {
            ctx->pc = 0x280B60u;
            goto label_280b60;
        }
    }
    ctx->pc = 0x280B30u;
label_280b30:
    // 0x280b30: 0x1080000b
    ctx->pc = 0x280B30u;
    {
        const bool branch_taken_0x280b30 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x280b30) {
            ctx->pc = 0x280B60u;
            goto label_280b60;
        }
    }
    ctx->pc = 0x280B38u;
    // 0x280b38: 0x8c820000
    ctx->pc = 0x280b38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x280b3c: 0xa21021
    ctx->pc = 0x280b3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x280b40: 0xac820000
    ctx->pc = 0x280b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x280b44: 0xc2102a
    ctx->pc = 0x280b44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x280b48: 0x50400003
    ctx->pc = 0x280B48u;
    {
        const bool branch_taken_0x280b48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x280b48) {
            ctx->pc = 0x280B4Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x280B58u;
            goto label_280b58;
        }
    }
    ctx->pc = 0x280B50u;
    // 0x280b50: 0x3e00008
    ctx->pc = 0x280B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280B54u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280B30u: goto label_280b30;
            case 0x280B58u: goto label_280b58;
            case 0x280B60u: goto label_280b60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280B58u;
label_280b58:
    // 0x280b58: 0x4420001
    ctx->pc = 0x280B58u;
    {
        const bool branch_taken_0x280b58 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x280b58) {
            ctx->pc = 0x280B5Cu;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
            ctx->pc = 0x280B60u;
            goto label_280b60;
        }
    }
    ctx->pc = 0x280B60u;
label_280b60:
    // 0x280b60: 0x3e00008
    ctx->pc = 0x280B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280B30u: goto label_280b30;
            case 0x280B58u: goto label_280b58;
            case 0x280B60u: goto label_280b60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280B68u;
}
