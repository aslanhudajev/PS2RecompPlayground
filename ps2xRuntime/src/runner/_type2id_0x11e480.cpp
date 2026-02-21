#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _type2id
// Address: 0x11e480 - 0x11e508
void _type2id_0x11e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11e480u;

    // 0x11e480: 0xa0382d
    ctx->pc = 0x11e480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e484: 0x27bdfff0
    ctx->pc = 0x11e484u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e488: 0x182d
    ctx->pc = 0x11e488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e48c: 0x2c82000a
    ctx->pc = 0x11e48cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 10));
    // 0x11e490: 0x1040001a
    ctx->pc = 0x11E490u;
    {
        const bool branch_taken_0x11e490 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E494u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11e490) {
            ctx->pc = 0x11E4FCu;
            goto label_11e4fc;
        }
    }
    ctx->pc = 0x11E498u;
    // 0x11e498: 0x3c080017
    ctx->pc = 0x11e498u;
    SET_GPR_U32(ctx, 8, ((uint32_t)23 << 16));
    // 0x11e49c: 0x43100
    ctx->pc = 0x11e49cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 4), 4));
    // 0x11e4a0: 0x250216f0
    ctx->pc = 0x11e4a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 5872));
    // 0x11e4a4: 0x3404ffff
    ctx->pc = 0x11e4a4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65535));
    // 0x11e4a8: 0x42638
    ctx->pc = 0x11e4a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x11e4ac: 0x461021
    ctx->pc = 0x11e4acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11e4b0: 0xdc430008
    ctx->pc = 0x11e4b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11e4b4: 0x10640009
    ctx->pc = 0x11E4B4u;
    {
        const bool branch_taken_0x11e4b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x11E4B8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x11e4b4) {
            ctx->pc = 0x11E4DCu;
            goto label_11e4dc;
        }
    }
    ctx->pc = 0x11E4BCu;
    // 0x11e4bc: 0x5440000a
    ctx->pc = 0x11E4BCu;
    {
        const bool branch_taken_0x11e4bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11e4bc) {
            ctx->pc = 0x11E4C0u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x11E4E8u;
            goto label_11e4e8;
        }
    }
    ctx->pc = 0x11E4C4u;
    // 0x11e4c4: 0x3402ff00
    ctx->pc = 0x11e4c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65280));
    // 0x11e4c8: 0x21638
    ctx->pc = 0x11e4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11e4cc: 0x10620005
    ctx->pc = 0x11E4CCu;
    {
        const bool branch_taken_0x11e4cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x11E4D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 5872));
        if (branch_taken_0x11e4cc) {
            ctx->pc = 0x11E4E4u;
            goto label_11e4e4;
        }
    }
    ctx->pc = 0x11E4D4u;
    // 0x11e4d4: 0x10000006
    ctx->pc = 0x11E4D4u;
    {
        const bool branch_taken_0x11e4d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E4D8u;
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
        if (branch_taken_0x11e4d4) {
            ctx->pc = 0x11E4F0u;
            goto label_11e4f0;
        }
    }
    ctx->pc = 0x11E4DCu;
label_11e4dc:
    // 0x11e4dc: 0x10000002
    ctx->pc = 0x11E4DCu;
    {
        const bool branch_taken_0x11e4dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E4E0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x11e4dc) {
            ctx->pc = 0x11E4E8u;
            goto label_11e4e8;
        }
    }
    ctx->pc = 0x11E4E4u;
label_11e4e4:
    // 0x11e4e4: 0x24050020
    ctx->pc = 0x11e4e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_11e4e8:
    // 0x11e4e8: 0x250216f0
    ctx->pc = 0x11e4e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 5872));
    // 0x11e4ec: 0xa72014
    ctx->pc = 0x11e4ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
label_11e4f0:
    // 0x11e4f0: 0xc21021
    ctx->pc = 0x11e4f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11e4f4: 0xdc430000
    ctx->pc = 0x11e4f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e4f8: 0x641825
    ctx->pc = 0x11e4f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_11e4fc:
    // 0x11e4fc: 0x60102d
    ctx->pc = 0x11e4fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e500: 0x3e00008
    ctx->pc = 0x11E500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E504u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E4DCu: goto label_11e4dc;
            case 0x11E4E4u: goto label_11e4e4;
            case 0x11E4E8u: goto label_11e4e8;
            case 0x11E4F0u: goto label_11e4f0;
            case 0x11E4FCu: goto label_11e4fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E508u;
}
