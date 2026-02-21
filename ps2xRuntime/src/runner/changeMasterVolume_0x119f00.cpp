#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: changeMasterVolume
// Address: 0x119f00 - 0x119f68
void changeMasterVolume_0x119f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119f00u;

    // 0x119f00: 0x27bdffd0
    ctx->pc = 0x119f00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x119f04: 0xffb10010
    ctx->pc = 0x119f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119f08: 0xffb00000
    ctx->pc = 0x119f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119f0c: 0x80882d
    ctx->pc = 0x119f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f10: 0xffbf0020
    ctx->pc = 0x119f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119f14: 0x802d
    ctx->pc = 0x119f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f18: 0x36060980
    ctx->pc = 0x119f18u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 2432));
    // 0x119f1c: 0x0
    ctx->pc = 0x119f1cu;
    // NOP
label_119f20:
    // 0x119f20: 0x24040001
    ctx->pc = 0x119f20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x119f24: 0x34058010
    ctx->pc = 0x119f24u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x119f28: 0xc045c80
    ctx->pc = 0x119F28u;
    SET_GPR_U32(ctx, 31, 0x119F30u);
    ctx->pc = 0x119F2Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F30u; }
    }
    if (ctx->pc != 0x119F30u) { return; }
    ctx->pc = 0x119F30u;
    // 0x119f30: 0x36060a80
    ctx->pc = 0x119f30u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 2688));
    // 0x119f34: 0x24040001
    ctx->pc = 0x119f34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x119f38: 0x34058010
    ctx->pc = 0x119f38u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x119f3c: 0xc045c80
    ctx->pc = 0x119F3Cu;
    SET_GPR_U32(ctx, 31, 0x119F44u);
    ctx->pc = 0x119F40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F44u; }
    }
    if (ctx->pc != 0x119F44u) { return; }
    ctx->pc = 0x119F44u;
    // 0x119f44: 0x26100001
    ctx->pc = 0x119f44u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x119f48: 0x2a020002
    ctx->pc = 0x119f48u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x119f4c: 0x1440fff4
    ctx->pc = 0x119F4Cu;
    {
        const bool branch_taken_0x119f4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x119F50u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 2432));
        if (branch_taken_0x119f4c) {
            ctx->pc = 0x119F20u;
            goto label_119f20;
        }
    }
    ctx->pc = 0x119F54u;
    // 0x119f54: 0xdfbf0020
    ctx->pc = 0x119f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119f58: 0xdfb10010
    ctx->pc = 0x119f58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119f5c: 0xdfb00000
    ctx->pc = 0x119f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119f60: 0x3e00008
    ctx->pc = 0x119F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119F64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119F20u: goto label_119f20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119F68u;
}
