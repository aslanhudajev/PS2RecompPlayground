#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPSLIB_SetErr
// Address: 0x182618 - 0x182660
void MPSLIB_SetErr_0x182618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPSLIB_SetErr");


    ctx->pc = 0x182618u;

    // 0x182618: 0x27bdffe0
    ctx->pc = 0x182618u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18261c: 0xffb00000
    ctx->pc = 0x18261cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182620: 0xffbf0010
    ctx->pc = 0x182620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182624: 0x14800006
    ctx->pc = 0x182624u;
    {
        const bool branch_taken_0x182624 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x182628u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182624) {
            ctx->pc = 0x182640u;
            goto label_182640;
        }
    }
    ctx->pc = 0x18262Cu;
    // 0x18262c: 0x3c020024
    ctx->pc = 0x18262cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x182630: 0xc060998
    ctx->pc = 0x182630u;
    SET_GPR_U32(ctx, 31, 0x182638u);
    ctx->pc = 0x182634u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 5432)));
    ctx->pc = 0x182660u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpslib_SetErrSub_0x182660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182638u; }
        else if (ctx->pc != 0x182638u) { ctx->pc = 0x182638u; }
    }
    if (ctx->pc != 0x182638u) { return; }
    ctx->pc = 0x182638u;
    // 0x182638: 0x10000005
    ctx->pc = 0x182638u;
    {
        const bool branch_taken_0x182638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18263Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182638) {
            ctx->pc = 0x182650u;
            goto label_182650;
        }
    }
    ctx->pc = 0x182640u;
label_182640:
    // 0x182640: 0x24840004
    ctx->pc = 0x182640u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x182644: 0xc060998
    ctx->pc = 0x182644u;
    SET_GPR_U32(ctx, 31, 0x18264Cu);
    ctx->pc = 0x182648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182660u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpslib_SetErrSub_0x182660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18264Cu; }
        else if (ctx->pc != 0x18264Cu) { ctx->pc = 0x18264Cu; }
    }
    if (ctx->pc != 0x18264Cu) { return; }
    ctx->pc = 0x18264Cu;
    // 0x18264c: 0x200102d
    ctx->pc = 0x18264cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182650:
    // 0x182650: 0xdfbf0010
    ctx->pc = 0x182650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182654: 0xdfb00000
    ctx->pc = 0x182654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182658: 0x3e00008
    ctx->pc = 0x182658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18265Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182640u: goto label_182640;
            case 0x182650u: goto label_182650;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182660u;
}
