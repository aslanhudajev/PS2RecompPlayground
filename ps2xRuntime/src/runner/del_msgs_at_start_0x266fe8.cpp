#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: del_msgs_at_start
// Address: 0x266fe8 - 0x267020
void del_msgs_at_start_0x266fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x266fe8u;

    // 0x266fe8: 0x27bdffe0
    ctx->pc = 0x266fe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x266fec: 0xffbf0010
    ctx->pc = 0x266fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x266ff0: 0xffb00000
    ctx->pc = 0x266ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x266ff4: 0x3c10003c
    ctx->pc = 0x266ff4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x266ff8: 0x8e0438f4
    ctx->pc = 0x266ff8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 14580)));
    // 0x266ffc: 0x10800005
    ctx->pc = 0x266FFCu;
    {
        const bool branch_taken_0x266ffc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x267000u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x266ffc) {
            ctx->pc = 0x267014u;
            goto label_267014;
        }
    }
    ctx->pc = 0x267004u;
    // 0x267004: 0xc0b0b38
    ctx->pc = 0x267004u;
    SET_GPR_U32(ctx, 31, 0x26700Cu);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26700Cu; }
    }
    if (ctx->pc != 0x26700Cu) { return; }
    ctx->pc = 0x26700Cu;
    // 0x26700c: 0xae0038f4
    ctx->pc = 0x26700cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14580), GPR_U32(ctx, 0));
    // 0x267010: 0xdfbf0010
    ctx->pc = 0x267010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_267014:
    // 0x267014: 0xdfb00000
    ctx->pc = 0x267014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267018: 0x3e00008
    ctx->pc = 0x267018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26701Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x267014u: goto label_267014;
            default: break;
        }
        return;
    }
    ctx->pc = 0x267020u;
}
