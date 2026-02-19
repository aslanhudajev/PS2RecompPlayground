#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: update_options_time
// Address: 0x20c4a8 - 0x20c514
void update_options_time_0x20c4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20c4a8u;

    // 0x20c4a8: 0x3c020031
    ctx->pc = 0x20c4a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20c4ac: 0xdc420e28
    ctx->pc = 0x20c4acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x20c4b0: 0x30420008
    ctx->pc = 0x20c4b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x20c4b4: 0x10400012
    ctx->pc = 0x20C4B4u;
    {
        const bool branch_taken_0x20c4b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C4B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x20c4b4) {
            ctx->pc = 0x20C500u;
            goto label_20c500;
        }
    }
    ctx->pc = 0x20C4BCu;
    // 0x20c4bc: 0x8c421b38
    ctx->pc = 0x20c4bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6968)));
    // 0x20c4c0: 0x3c030200
    ctx->pc = 0x20c4c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x20c4c4: 0x431024
    ctx->pc = 0x20c4c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c4c8: 0x14400007
    ctx->pc = 0x20C4C8u;
    {
        const bool branch_taken_0x20c4c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20C4CCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x20c4c8) {
            ctx->pc = 0x20C4E8u;
            goto label_20c4e8;
        }
    }
    ctx->pc = 0x20C4D0u;
    // 0x20c4d0: 0x3c020031
    ctx->pc = 0x20c4d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20c4d4: 0x8c421b20
    ctx->pc = 0x20c4d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6944)));
    // 0x20c4d8: 0x3c030100
    ctx->pc = 0x20c4d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x20c4dc: 0x431024
    ctx->pc = 0x20c4dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c4e0: 0x10400004
    ctx->pc = 0x20C4E0u;
    {
        const bool branch_taken_0x20c4e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C4E4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x20c4e0) {
            ctx->pc = 0x20C4F4u;
            goto label_20c4f4;
        }
    }
    ctx->pc = 0x20C4E8u;
label_20c4e8:
    // 0x20c4e8: 0x24020002
    ctx->pc = 0x20c4e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20c4ec: 0x3e00008
    ctx->pc = 0x20C4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C4F0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952200), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C4E8u: goto label_20c4e8;
            case 0x20C4F4u: goto label_20c4f4;
            case 0x20C500u: goto label_20c500;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C4F4u;
label_20c4f4:
    // 0x20c4f4: 0x3c02003c
    ctx->pc = 0x20c4f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x20c4f8: 0x3e00008
    ctx->pc = 0x20C4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C4FCu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952200), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C4E8u: goto label_20c4e8;
            case 0x20C4F4u: goto label_20c4f4;
            case 0x20C500u: goto label_20c500;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C500u;
label_20c500:
    // 0x20c500: 0x3c02003c
    ctx->pc = 0x20c500u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x20c504: 0x3c030031
    ctx->pc = 0x20c504u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x20c508: 0x8c63ffc0
    ctx->pc = 0x20c508u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967232)));
    // 0x20c50c: 0x3e00008
    ctx->pc = 0x20C50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C510u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952200), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C4E8u: goto label_20c4e8;
            case 0x20C4F4u: goto label_20c4f4;
            case 0x20C500u: goto label_20c500;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C514u;
}
