#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: del_attract_msgs
// Address: 0x2821e0 - 0x28221c
void del_attract_msgs_0x2821e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2821e0u;

    // 0x2821e0: 0x27bdffe0
    ctx->pc = 0x2821e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2821e4: 0xffbf0010
    ctx->pc = 0x2821e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2821e8: 0xc09a342
    ctx->pc = 0x2821E8u;
    SET_GPR_U32(ctx, 31, 0x2821F0u);
    ctx->pc = 0x2821ECu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x268D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_targets_0x268d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2821F0u; }
    }
    if (ctx->pc != 0x2821F0u) { return; }
    ctx->pc = 0x2821F0u;
    // 0x2821f0: 0x3c100035
    ctx->pc = 0x2821f0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x2821f4: 0x8e049bc4
    ctx->pc = 0x2821f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294941636)));
    // 0x2821f8: 0x10800005
    ctx->pc = 0x2821F8u;
    {
        const bool branch_taken_0x2821f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2821FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2821f8) {
            ctx->pc = 0x282210u;
            goto label_282210;
        }
    }
    ctx->pc = 0x282200u;
    // 0x282200: 0xc0b0b38
    ctx->pc = 0x282200u;
    SET_GPR_U32(ctx, 31, 0x282208u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282208u; }
    }
    if (ctx->pc != 0x282208u) { return; }
    ctx->pc = 0x282208u;
    // 0x282208: 0xae009bc4
    ctx->pc = 0x282208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941636), GPR_U32(ctx, 0));
    // 0x28220c: 0xdfbf0010
    ctx->pc = 0x28220cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_282210:
    // 0x282210: 0xdfb00000
    ctx->pc = 0x282210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282214: 0x3e00008
    ctx->pc = 0x282214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282218u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282210u: goto label_282210;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28221Cu;
}
