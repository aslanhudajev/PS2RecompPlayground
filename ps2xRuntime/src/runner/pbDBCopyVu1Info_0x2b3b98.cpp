#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDBCopyVu1Info
// Address: 0x2b3b98 - 0x2b3bf0
void pbDBCopyVu1Info_0x2b3b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3b98u;

    // 0x2b3b98: 0x50c00001
    ctx->pc = 0x2B3B98u;
    {
        const bool branch_taken_0x2b3b98 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b3b98) {
            ctx->pc = 0x2B3B9Cu;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->pc = 0x2B3BA0u;
            goto label_2b3ba0;
        }
    }
    ctx->pc = 0x2B3BA0u;
label_2b3ba0:
    // 0x2b3ba0: 0x80102d
    ctx->pc = 0x2b3ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ba4: 0x24a30260
    ctx->pc = 0x2b3ba4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 608));
label_2b3ba8:
    // 0x2b3ba8: 0xdca70000
    ctx->pc = 0x2b3ba8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b3bac: 0xdca80008
    ctx->pc = 0x2b3bacu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b3bb0: 0xdca90010
    ctx->pc = 0x2b3bb0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b3bb4: 0xdcaa0018
    ctx->pc = 0x2b3bb4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2b3bb8: 0xfc470000
    ctx->pc = 0x2b3bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x2b3bbc: 0xfc480008
    ctx->pc = 0x2b3bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 8));
    // 0x2b3bc0: 0xfc490010
    ctx->pc = 0x2b3bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 9));
    // 0x2b3bc4: 0xfc4a0018
    ctx->pc = 0x2b3bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 10));
    // 0x2b3bc8: 0x24a50020
    ctx->pc = 0x2b3bc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x2b3bcc: 0x24420020
    ctx->pc = 0x2b3bccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b3bd0: 0x0
    ctx->pc = 0x2b3bd0u;
    // NOP
    // 0x2b3bd4: 0x0
    ctx->pc = 0x2b3bd4u;
    // NOP
    // 0x2b3bd8: 0x14a3fff3
    ctx->pc = 0x2B3BD8u;
    {
        const bool branch_taken_0x2b3bd8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x2b3bd8) {
            ctx->pc = 0x2B3BA8u;
            goto label_2b3ba8;
        }
    }
    ctx->pc = 0x2B3BE0u;
    // 0x2b3be0: 0x54c00001
    ctx->pc = 0x2B3BE0u;
    {
        const bool branch_taken_0x2b3be0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b3be0) {
            ctx->pc = 0x2B3BE4u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
            ctx->pc = 0x2B3BE8u;
            goto label_2b3be8;
        }
    }
    ctx->pc = 0x2B3BE8u;
label_2b3be8:
    // 0x2b3be8: 0x3e00008
    ctx->pc = 0x2B3BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B3BA0u: goto label_2b3ba0;
            case 0x2B3BA8u: goto label_2b3ba8;
            case 0x2B3BE8u: goto label_2b3be8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B3BF0u;
}
