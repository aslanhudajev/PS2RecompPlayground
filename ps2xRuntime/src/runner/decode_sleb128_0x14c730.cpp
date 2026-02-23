#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: decode_sleb128
// Address: 0x14c730 - 0x14c780
void decode_sleb128_0x14c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("decode_sleb128");


    ctx->pc = 0x14c730u;

    // 0x14c730: 0x382d
    ctx->pc = 0x14c730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c734: 0x402d
    ctx->pc = 0x14c734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c738:
    // 0x14c738: 0x90860000
    ctx->pc = 0x14c738u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14c73c: 0x24840001
    ctx->pc = 0x14c73cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x14c740: 0x30c2007f
    ctx->pc = 0x14c740u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 127));
    // 0x14c744: 0x30c30080
    ctx->pc = 0x14c744u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 128));
    // 0x14c748: 0xe21004
    ctx->pc = 0x14c748u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x14c74c: 0x1024025
    ctx->pc = 0x14c74cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x14c750: 0x1460fff9
    ctx->pc = 0x14C750u;
    {
        const bool branch_taken_0x14c750 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C754u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 7));
        if (branch_taken_0x14c750) {
            ctx->pc = 0x14C738u;
            goto label_14c738;
        }
    }
    ctx->pc = 0x14C758u;
    // 0x14c758: 0x2ce20020
    ctx->pc = 0x14c758u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 32));
    // 0x14c75c: 0x10400005
    ctx->pc = 0x14C75Cu;
    {
        const bool branch_taken_0x14c75c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C760u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 64));
        if (branch_taken_0x14c75c) {
            ctx->pc = 0x14C774u;
            goto label_14c774;
        }
    }
    ctx->pc = 0x14C764u;
    // 0x14c764: 0x10400003
    ctx->pc = 0x14C764u;
    {
        const bool branch_taken_0x14c764 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C768u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x14c764) {
            ctx->pc = 0x14C774u;
            goto label_14c774;
        }
    }
    ctx->pc = 0x14C76Cu;
    // 0x14c76c: 0xe21004
    ctx->pc = 0x14c76cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x14c770: 0x1024025
    ctx->pc = 0x14c770u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_14c774:
    // 0x14c774: 0xaca80000
    ctx->pc = 0x14c774u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x14c778: 0x3e00008
    ctx->pc = 0x14C778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C77Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C738u: goto label_14c738;
            case 0x14C774u: goto label_14c774;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14C780u;
}
