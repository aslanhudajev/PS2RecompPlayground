#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LockMem
// Address: 0x2d3ef8 - 0x2d3f60
void LockMem_0x2d3ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3ef8u;

    // 0x2d3ef8: 0x27bdffe0
    ctx->pc = 0x2d3ef8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3efc: 0xffbf0010
    ctx->pc = 0x2d3efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d3f00: 0xffb00000
    ctx->pc = 0x2d3f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3f04: 0x80802d
    ctx->pc = 0x2d3f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3f08: 0x2a020008
    ctx->pc = 0x2d3f08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x2d3f0c: 0x14400006
    ctx->pc = 0x2D3F0Cu;
    {
        const bool branch_taken_0x2d3f0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D3F10u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d3f0c) {
            ctx->pc = 0x2D3F28u;
            goto label_2d3f28;
        }
    }
    ctx->pc = 0x2D3F14u;
    // 0x2d3f14: 0x3c04003b
    ctx->pc = 0x2d3f14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d3f18: 0x24847b00
    ctx->pc = 0x2d3f18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31488));
    // 0x2d3f1c: 0xc0b49a6
    ctx->pc = 0x2D3F1Cu;
    SET_GPR_U32(ctx, 31, 0x2D3F24u);
    ctx->pc = 0x2D3F20u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3F24u; }
    }
    if (ctx->pc != 0x2D3F24u) { return; }
    ctx->pc = 0x2D3F24u;
    // 0x2d3f24: 0x3c02003a
    ctx->pc = 0x2d3f24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2d3f28:
    // 0x2d3f28: 0x24422360
    ctx->pc = 0x2d3f28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9056));
    // 0x2d3f2c: 0x101880
    ctx->pc = 0x2d3f2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d3f30: 0x621821
    ctx->pc = 0x2d3f30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3f34: 0x3c02003a
    ctx->pc = 0x2d3f34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d3f38: 0x8c42230c
    ctx->pc = 0x2d3f38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8972)));
    // 0x2d3f3c: 0xac620000
    ctx->pc = 0x2d3f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d3f40: 0x3c03003d
    ctx->pc = 0x2d3f40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2d3f44: 0x3c02003d
    ctx->pc = 0x2d3f44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d3f48: 0x8c422cf0
    ctx->pc = 0x2d3f48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 11504)));
    // 0x2d3f4c: 0xac622cf4
    ctx->pc = 0x2d3f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11508), GPR_U32(ctx, 2));
    // 0x2d3f50: 0xdfbf0010
    ctx->pc = 0x2d3f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3f54: 0xdfb00000
    ctx->pc = 0x2d3f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3f58: 0x3e00008
    ctx->pc = 0x2D3F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3F5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D3F28u: goto label_2d3f28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D3F60u;
}
