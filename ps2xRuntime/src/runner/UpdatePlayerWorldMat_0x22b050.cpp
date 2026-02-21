#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: UpdatePlayerWorldMat
// Address: 0x22b050 - 0x22b0b0
void UpdatePlayerWorldMat_0x22b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22b050u;

    // 0x22b050: 0x27bdffc0
    ctx->pc = 0x22b050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22b054: 0xffbf0030
    ctx->pc = 0x22b054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22b058: 0xffb20020
    ctx->pc = 0x22b058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22b05c: 0xffb10010
    ctx->pc = 0x22b05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22b060: 0xffb00000
    ctx->pc = 0x22b060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22b064: 0x80802d
    ctx->pc = 0x22b064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b068: 0x9602093c
    ctx->pc = 0x22b068u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2364)));
    // 0x22b06c: 0x30420020
    ctx->pc = 0x22b06cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x22b070: 0x14400009
    ctx->pc = 0x22B070u;
    {
        const bool branch_taken_0x22b070 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22B074u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22b070) {
            ctx->pc = 0x22B098u;
            goto label_22b098;
        }
    }
    ctx->pc = 0x22B078u;
    // 0x22b078: 0x26110020
    ctx->pc = 0x22b078u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 32));
    // 0x22b07c: 0xc080ce2
    ctx->pc = 0x22B07Cu;
    SET_GPR_U32(ctx, 31, 0x22B084u);
    ctx->pc = 0x22B080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203388u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjWorldMat_0x203388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B084u; }
    }
    if (ctx->pc != 0x22B084u) { return; }
    ctx->pc = 0x22B084u;
    // 0x22b084: 0x12400004
    ctx->pc = 0x22B084u;
    {
        const bool branch_taken_0x22b084 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B088u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22b084) {
            ctx->pc = 0x22B098u;
            goto label_22b098;
        }
    }
    ctx->pc = 0x22B08Cu;
    // 0x22b08c: 0x2605081c
    ctx->pc = 0x22b08cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2076));
    // 0x22b090: 0xc080cd4
    ctx->pc = 0x22B090u;
    SET_GPR_U32(ctx, 31, 0x22B098u);
    ctx->pc = 0x22B094u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 2064));
    ctx->pc = 0x203350u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjOffsets_0x203350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B098u; }
    }
    if (ctx->pc != 0x22B098u) { return; }
    ctx->pc = 0x22B098u;
label_22b098:
    // 0x22b098: 0xdfbf0030
    ctx->pc = 0x22b098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b09c: 0xdfb20020
    ctx->pc = 0x22b09cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b0a0: 0xdfb10010
    ctx->pc = 0x22b0a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b0a4: 0xdfb00000
    ctx->pc = 0x22b0a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b0a8: 0x3e00008
    ctx->pc = 0x22B0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B0ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B098u: goto label_22b098;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B0B0u;
}
