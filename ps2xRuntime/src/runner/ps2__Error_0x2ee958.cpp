#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _Error
// Address: 0x2ee958 - 0x2ee9b0
void ps2__Error_0x2ee958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ee958u;

    // 0x2ee958: 0x3c02003a
    ctx->pc = 0x2ee958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ee95c: 0x80182d
    ctx->pc = 0x2ee95cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee960: 0x27bdffe0
    ctx->pc = 0x2ee960u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ee964: 0x8c443024
    ctx->pc = 0x2ee964u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12324)));
    // 0x2ee968: 0x1080000c
    ctx->pc = 0x2EE968u;
    {
        const bool branch_taken_0x2ee968 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE96Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x2ee968) {
            ctx->pc = 0x2EE99Cu;
            goto label_2ee99c;
        }
    }
    ctx->pc = 0x2EE970u;
    // 0x2ee970: 0x8c820040
    ctx->pc = 0x2ee970u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2ee974: 0x10400009
    ctx->pc = 0x2EE974u;
    {
        const bool branch_taken_0x2ee974 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ee974) {
            ctx->pc = 0x2EE99Cu;
            goto label_2ee99c;
        }
    }
    ctx->pc = 0x2EE97Cu;
    // 0x2ee97c: 0x8c42000c
    ctx->pc = 0x2ee97cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ee980: 0x10400006
    ctx->pc = 0x2EE980u;
    {
        const bool branch_taken_0x2ee980 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE984u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ee980) {
            ctx->pc = 0x2EE99Cu;
            goto label_2ee99c;
        }
    }
    ctx->pc = 0x2EE988u;
    // 0x2ee988: 0xafa30004
    ctx->pc = 0x2ee988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2ee98c: 0xc0bb834
    ctx->pc = 0x2EE98Cu;
    SET_GPR_U32(ctx, 31, 0x2EE994u);
    ctx->pc = 0x2EE990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x2EE0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x2ee0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE994u; }
    }
    if (ctx->pc != 0x2EE994u) { return; }
    ctx->pc = 0x2EE994u;
    // 0x2ee994: 0x10000004
    ctx->pc = 0x2EE994u;
    {
        const bool branch_taken_0x2ee994 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE998u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2ee994) {
            ctx->pc = 0x2EE9A8u;
            goto label_2ee9a8;
        }
    }
    ctx->pc = 0x2EE99Cu;
label_2ee99c:
    // 0x2ee99c: 0xc0bba46
    ctx->pc = 0x2EE99Cu;
    SET_GPR_U32(ctx, 31, 0x2EE9A4u);
    ctx->pc = 0x2EE9A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE918u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__ErrMessage_0x2ee918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE9A4u; }
    }
    if (ctx->pc != 0x2EE9A4u) { return; }
    ctx->pc = 0x2EE9A4u;
    // 0x2ee9a4: 0xdfbf0010
    ctx->pc = 0x2ee9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ee9a8:
    // 0x2ee9a8: 0x3e00008
    ctx->pc = 0x2EE9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE9ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EE99Cu: goto label_2ee99c;
            case 0x2EE9A8u: goto label_2ee9a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2EE9B0u;
}
