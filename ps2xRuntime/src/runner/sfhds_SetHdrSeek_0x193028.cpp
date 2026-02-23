#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfhds_SetHdrSeek
// Address: 0x193028 - 0x193064
void sfhds_SetHdrSeek_0x193028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfhds_SetHdrSeek");


    ctx->pc = 0x193028u;

    // 0x193028: 0x27bdffe0
    ctx->pc = 0x193028u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19302c: 0xffb00000
    ctx->pc = 0x19302cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193030: 0xffbf0010
    ctx->pc = 0x193030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193034: 0xc064c62
    ctx->pc = 0x193034u;
    SET_GPR_U32(ctx, 31, 0x19303Cu);
    ctx->pc = 0x193038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193188u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_GetHd_0x193188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19303Cu; }
        else if (ctx->pc != 0x19303Cu) { ctx->pc = 0x19303Cu; }
    }
    if (ctx->pc != 0x19303Cu) { return; }
    ctx->pc = 0x19303Cu;
    // 0x19303c: 0x10400006
    ctx->pc = 0x19303Cu;
    {
        const bool branch_taken_0x19303c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x193040u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19303c) {
            ctx->pc = 0x193058u;
            goto label_193058;
        }
    }
    ctx->pc = 0x193044u;
    // 0x193044: 0x2605006c
    ctx->pc = 0x193044u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 108));
    // 0x193048: 0xdfb00000
    ctx->pc = 0x193048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19304c: 0x40202d
    ctx->pc = 0x19304cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193050: 0x8064c1a
    ctx->pc = 0x193050u;
    ctx->pc = 0x193054u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x193068u;
    sfhds_CopyFhd_0x193068(rdram, ctx, runtime); return;
    ctx->pc = 0x193058u;
label_193058:
    // 0x193058: 0xdfb00000
    ctx->pc = 0x193058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19305c: 0x3e00008
    ctx->pc = 0x19305Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193060u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193058u: goto label_193058;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193064u;
}
