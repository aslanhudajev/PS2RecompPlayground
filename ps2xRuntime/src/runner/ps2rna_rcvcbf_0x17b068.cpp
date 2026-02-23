#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ps2rna_rcvcbf
// Address: 0x17b068 - 0x17b0bc
void ps2rna_rcvcbf_0x17b068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2rna_rcvcbf");


    ctx->pc = 0x17b068u;

    // 0x17b068: 0x54a00008
    ctx->pc = 0x17B068u;
    {
        const bool branch_taken_0x17b068 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x17b068) {
            ctx->pc = 0x17B06Cu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x17B08Cu;
            goto label_17b08c;
        }
    }
    ctx->pc = 0x17B070u;
label_17b070:
    // 0x17b070: 0x0
    ctx->pc = 0x17b070u;
    // NOP
    // 0x17b074: 0x0
    ctx->pc = 0x17b074u;
    // NOP
    // 0x17b078: 0x0
    ctx->pc = 0x17b078u;
    // NOP
    // 0x17b07c: 0x0
    ctx->pc = 0x17b07cu;
    // NOP
    // 0x17b080: 0x0
    ctx->pc = 0x17b080u;
    // NOP
    // 0x17b084: 0x1000fffa
    ctx->pc = 0x17B084u;
    {
        const bool branch_taken_0x17b084 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17b084) {
            ctx->pc = 0x17B070u;
            goto label_17b070;
        }
    }
    ctx->pc = 0x17B08Cu;
label_17b08c:
    // 0x17b08c: 0x18a00009
    ctx->pc = 0x17B08Cu;
    {
        const bool branch_taken_0x17b08c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x17b08c) {
            ctx->pc = 0x17B0B4u;
            goto label_17b0b4;
        }
    }
    ctx->pc = 0x17B094u;
    // 0x17b094: 0x0
    ctx->pc = 0x17b094u;
    // NOP
label_17b098:
    // 0x17b098: 0x24a5ffff
    ctx->pc = 0x17b098u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x17b09c: 0x0
    ctx->pc = 0x17b09cu;
    // NOP
    // 0x17b0a0: 0x0
    ctx->pc = 0x17b0a0u;
    // NOP
    // 0x17b0a4: 0x0
    ctx->pc = 0x17b0a4u;
    // NOP
    // 0x17b0a8: 0x0
    ctx->pc = 0x17b0a8u;
    // NOP
    // 0x17b0ac: 0x14a0fffa
    ctx->pc = 0x17B0ACu;
    {
        const bool branch_taken_0x17b0ac = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x17b0ac) {
            ctx->pc = 0x17B098u;
            goto label_17b098;
        }
    }
    ctx->pc = 0x17B0B4u;
label_17b0b4:
    // 0x17b0b4: 0x3e00008
    ctx->pc = 0x17B0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B070u: goto label_17b070;
            case 0x17B08Cu: goto label_17b08c;
            case 0x17B098u: goto label_17b098;
            case 0x17B0B4u: goto label_17b0b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B0BCu;
}
