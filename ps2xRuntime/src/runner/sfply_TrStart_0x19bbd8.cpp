#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_TrStart
// Address: 0x19bbd8 - 0x19bc00
void sfply_TrStart_0x19bbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_TrStart");


    ctx->pc = 0x19bbd8u;

    // 0x19bbd8: 0x27bdfff0
    ctx->pc = 0x19bbd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19bbdc: 0x24050007
    ctx->pc = 0x19bbdcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x19bbe0: 0xffbf0000
    ctx->pc = 0x19bbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bbe4: 0x24060006
    ctx->pc = 0x19bbe4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19bbe8: 0x382d
    ctx->pc = 0x19bbe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbec: 0xc067cca
    ctx->pc = 0x19BBECu;
    SET_GPR_U32(ctx, 31, 0x19BBF4u);
    ctx->pc = 0x19BBF0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_CallTrtTrif_0x19f328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BBF4u; }
        else if (ctx->pc != 0x19BBF4u) { ctx->pc = 0x19BBF4u; }
    }
    if (ctx->pc != 0x19BBF4u) { return; }
    ctx->pc = 0x19BBF4u;
    // 0x19bbf4: 0xdfbf0000
    ctx->pc = 0x19bbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bbf8: 0x3e00008
    ctx->pc = 0x19BBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BBFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BC00u;
}
