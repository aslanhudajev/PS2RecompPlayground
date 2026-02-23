#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFSVM_Lock
// Address: 0x18f740 - 0x18f760
void MWSFSVM_Lock_0x18f740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFSVM_Lock");
    ctx->pc = 0x18f740u;

    // 0x18f740: 0x27bdfff0
    ctx->pc = 0x18f740u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f744: 0xffbf0000
    ctx->pc = 0x18f744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f748: 0xc05f6f6
    ctx->pc = 0x18F748u;
    SET_GPR_U32(ctx, 31, 0x18F750u);
    ctx->pc = 0x17DBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Lock_0x17dbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F750u; }
        else if (ctx->pc != 0x18F750u) { ctx->pc = 0x18F750u; }
    }
    if (ctx->pc != 0x18F750u) { return; }
    ctx->pc = 0x18F750u;
    // 0x18f750: 0xdfbf0000
    ctx->pc = 0x18f750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f754: 0x24020001
    ctx->pc = 0x18f754u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f758: 0x3e00008
    ctx->pc = 0x18F758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F75Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F760u;
}
