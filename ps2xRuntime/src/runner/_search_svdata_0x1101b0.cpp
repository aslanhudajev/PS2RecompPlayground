#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _search_svdata
// Address: 0x1101b0 - 0x1101fc
void _search_svdata_0x1101b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1101b0u;

    // 0x1101b0: 0x8ca50028
    ctx->pc = 0x1101b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1101b4: 0x10a0000f
    ctx->pc = 0x1101B4u;
    {
        const bool branch_taken_0x1101b4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1101b4) {
            ctx->pc = 0x1101F4u;
            goto label_1101f4;
        }
    }
    ctx->pc = 0x1101BCu;
    // 0x1101bc: 0x8ca30008
    ctx->pc = 0x1101bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1101c0:
    // 0x1101c0: 0x5060000a
    ctx->pc = 0x1101C0u;
    {
        const bool branch_taken_0x1101c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1101c0) {
            ctx->pc = 0x1101C4u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->pc = 0x1101ECu;
            goto label_1101ec;
        }
    }
    ctx->pc = 0x1101C8u;
    // 0x1101c8: 0x8c620000
    ctx->pc = 0x1101c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1101cc: 0x0
    ctx->pc = 0x1101ccu;
    // NOP
label_1101d0:
    // 0x1101d0: 0x54440003
    ctx->pc = 0x1101D0u;
    {
        const bool branch_taken_0x1101d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x1101d0) {
            ctx->pc = 0x1101D4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->pc = 0x1101E0u;
            goto label_1101e0;
        }
    }
    ctx->pc = 0x1101D8u;
    // 0x1101d8: 0x3e00008
    ctx->pc = 0x1101D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1101DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1101C0u: goto label_1101c0;
            case 0x1101D0u: goto label_1101d0;
            case 0x1101E0u: goto label_1101e0;
            case 0x1101ECu: goto label_1101ec;
            case 0x1101F4u: goto label_1101f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1101E0u;
label_1101e0:
    // 0x1101e0: 0x5460fffb
    ctx->pc = 0x1101E0u;
    {
        const bool branch_taken_0x1101e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1101e0) {
            ctx->pc = 0x1101E4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->pc = 0x1101D0u;
            goto label_1101d0;
        }
    }
    ctx->pc = 0x1101E8u;
    // 0x1101e8: 0x8ca50014
    ctx->pc = 0x1101e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1101ec:
    // 0x1101ec: 0x54a0fff4
    ctx->pc = 0x1101ECu;
    {
        const bool branch_taken_0x1101ec = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x1101ec) {
            ctx->pc = 0x1101F0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->pc = 0x1101C0u;
            goto label_1101c0;
        }
    }
    ctx->pc = 0x1101F4u;
label_1101f4:
    // 0x1101f4: 0x3e00008
    ctx->pc = 0x1101F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1101F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1101C0u: goto label_1101c0;
            case 0x1101D0u: goto label_1101d0;
            case 0x1101E0u: goto label_1101e0;
            case 0x1101ECu: goto label_1101ec;
            case 0x1101F4u: goto label_1101f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1101FCu;
}
