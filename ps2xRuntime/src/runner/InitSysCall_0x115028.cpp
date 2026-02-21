#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitSysCall
// Address: 0x115028 - 0x115068
void InitSysCall_0x115028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115028u;

    // 0x115028: 0x27bdffe0
    ctx->pc = 0x115028u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11502c: 0xffb00000
    ctx->pc = 0x11502cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115030: 0xffbf0010
    ctx->pc = 0x115030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115034: 0x24100080
    ctx->pc = 0x115034u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 128));
    // 0x115038: 0x200202d
    ctx->pc = 0x115038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11503c: 0x0
    ctx->pc = 0x11503cu;
    // NOP
label_115040:
    // 0x115040: 0xc045406
    ctx->pc = 0x115040u;
    SET_GPR_U32(ctx, 31, 0x115048u);
    ctx->pc = 0x115044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x115018u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_0x115018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115048u; }
    }
    if (ctx->pc != 0x115048u) { return; }
    ctx->pc = 0x115048u;
    // 0x115048: 0x26100001
    ctx->pc = 0x115048u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x11504c: 0x2a020100
    ctx->pc = 0x11504cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 256));
    // 0x115050: 0x1440fffb
    ctx->pc = 0x115050u;
    {
        const bool branch_taken_0x115050 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x115054u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x115050) {
            ctx->pc = 0x115040u;
            goto label_115040;
        }
    }
    ctx->pc = 0x115058u;
    // 0x115058: 0xdfbf0010
    ctx->pc = 0x115058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11505c: 0xdfb00000
    ctx->pc = 0x11505cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115060: 0x3e00008
    ctx->pc = 0x115060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115064u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115040u: goto label_115040;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115068u;
}
