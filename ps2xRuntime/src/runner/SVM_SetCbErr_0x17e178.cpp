#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_SetCbErr
// Address: 0x17e178 - 0x17e1b0
void SVM_SetCbErr_0x17e178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_SetCbErr");


    ctx->pc = 0x17e178u;

    // 0x17e178: 0x27bdffd0
    ctx->pc = 0x17e178u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e17c: 0xffb10010
    ctx->pc = 0x17e17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17e180: 0xffb00000
    ctx->pc = 0x17e180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e184: 0xa0882d
    ctx->pc = 0x17e184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e188: 0xffbf0020
    ctx->pc = 0x17e188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17e18c: 0xc05f6f6
    ctx->pc = 0x17E18Cu;
    SET_GPR_U32(ctx, 31, 0x17E194u);
    ctx->pc = 0x17E190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17DBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Lock_0x17dbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E194u; }
        else if (ctx->pc != 0x17E194u) { ctx->pc = 0x17E194u; }
    }
    if (ctx->pc != 0x17E194u) { return; }
    ctx->pc = 0x17E194u;
    // 0x17e194: 0xaf908920
    ctx->pc = 0x17e194u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 16));
    // 0x17e198: 0xaf918924
    ctx->pc = 0x17e198u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936868), GPR_U32(ctx, 17));
    // 0x17e19c: 0xdfbf0020
    ctx->pc = 0x17e19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e1a0: 0xdfb10010
    ctx->pc = 0x17e1a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e1a4: 0xdfb00000
    ctx->pc = 0x17e1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e1a8: 0x805f700
    ctx->pc = 0x17E1A8u;
    ctx->pc = 0x17E1ACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17DC00u;
    SVM_Unlock_0x17dc00(rdram, ctx, runtime); return;
    ctx->pc = 0x17E1B0u;
}
