#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_ExecOneSub
// Address: 0x19ade8 - 0x19ae10
void sfply_ExecOneSub_0x19ade8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_ExecOneSub");


    ctx->pc = 0x19ade8u;

    // 0x19ade8: 0x27bdffe0
    ctx->pc = 0x19ade8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19adec: 0xffb00000
    ctx->pc = 0x19adecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19adf0: 0xffbf0010
    ctx->pc = 0x19adf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19adf4: 0xc066b84
    ctx->pc = 0x19ADF4u;
    SET_GPR_U32(ctx, 31, 0x19ADFCu);
    ctx->pc = 0x19ADF8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19AE10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_TrExecServer_0x19ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ADFCu; }
        else if (ctx->pc != 0x19ADFCu) { ctx->pc = 0x19ADFCu; }
    }
    if (ctx->pc != 0x19ADFCu) { return; }
    ctx->pc = 0x19ADFCu;
    // 0x19adfc: 0x200202d
    ctx->pc = 0x19adfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae00: 0xdfbf0010
    ctx->pc = 0x19ae00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ae04: 0xdfb00000
    ctx->pc = 0x19ae04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ae08: 0x8067192
    ctx->pc = 0x19AE08u;
    ctx->pc = 0x19AE0Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x19C648u;
    SFSEE_ExecServer_0x19c648(rdram, ctx, runtime); return;
    ctx->pc = 0x19AE10u;
}
