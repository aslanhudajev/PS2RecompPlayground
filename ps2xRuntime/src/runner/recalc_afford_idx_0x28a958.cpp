#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: recalc_afford_idx
// Address: 0x28a958 - 0x28a9f8
void recalc_afford_idx_0x28a958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28a958u;

    // 0x28a958: 0x24032b00
    ctx->pc = 0x28a958u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x28a95c: 0x831818
    ctx->pc = 0x28a95cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28a960: 0x3c020032
    ctx->pc = 0x28a960u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28a964: 0x24421bc0
    ctx->pc = 0x28a964u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x28a968: 0x623821
    ctx->pc = 0x28a968u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a96c: 0x3c03003c
    ctx->pc = 0x28a96cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x28a970: 0x24633de0
    ctx->pc = 0x28a970u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15840));
    // 0x28a974: 0x41080
    ctx->pc = 0x28a974u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x28a978: 0x431021
    ctx->pc = 0x28a978u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a97c: 0xac400000
    ctx->pc = 0x28a97cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28a980: 0x3c020035
    ctx->pc = 0x28a980u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28a984: 0x8c46b528
    ctx->pc = 0x28a984u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294948136)));
    // 0x28a988: 0x3c020035
    ctx->pc = 0x28a988u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28a98c: 0x8c42b52c
    ctx->pc = 0x28a98cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948140)));
    // 0x28a990: 0x18400011
    ctx->pc = 0x28A990u;
    {
        const bool branch_taken_0x28a990 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28A994u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28a990) {
            ctx->pc = 0x28A9D8u;
            goto label_28a9d8;
        }
    }
    ctx->pc = 0x28A998u;
    // 0x28a998: 0x8ce81a20
    ctx->pc = 0x28a998u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 7), 6688)));
    // 0x28a99c: 0x3c02003c
    ctx->pc = 0x28a99cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28a9a0: 0x24423de0
    ctx->pc = 0x28a9a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15840));
    // 0x28a9a4: 0x41880
    ctx->pc = 0x28a9a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x28a9a8: 0x621821
    ctx->pc = 0x28a9a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a9ac: 0x3c020035
    ctx->pc = 0x28a9acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28a9b0: 0x8c47b52c
    ctx->pc = 0x28a9b0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294948140)));
    // 0x28a9b4: 0x0
    ctx->pc = 0x28a9b4u;
    // NOP
label_28a9b8:
    // 0x28a9b8: 0x8cc20048
    ctx->pc = 0x28a9b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x28a9bc: 0x102102a
    ctx->pc = 0x28a9bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 2)));
    // 0x28a9c0: 0x50400001
    ctx->pc = 0x28A9C0u;
    {
        const bool branch_taken_0x28a9c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28a9c0) {
            ctx->pc = 0x28A9C4u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
            ctx->pc = 0x28A9C8u;
            goto label_28a9c8;
        }
    }
    ctx->pc = 0x28A9C8u;
label_28a9c8:
    // 0x28a9c8: 0x24a50001
    ctx->pc = 0x28a9c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x28a9cc: 0xa7102a
    ctx->pc = 0x28a9ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x28a9d0: 0x1440fff9
    ctx->pc = 0x28A9D0u;
    {
        const bool branch_taken_0x28a9d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28A9D4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 80));
        if (branch_taken_0x28a9d0) {
            ctx->pc = 0x28A9B8u;
            goto label_28a9b8;
        }
    }
    ctx->pc = 0x28A9D8u;
label_28a9d8:
    // 0x28a9d8: 0x3c02003c
    ctx->pc = 0x28a9d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28a9dc: 0x24423de0
    ctx->pc = 0x28a9dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15840));
    // 0x28a9e0: 0x41880
    ctx->pc = 0x28a9e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x28a9e4: 0x621821
    ctx->pc = 0x28a9e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a9e8: 0x8c620000
    ctx->pc = 0x28a9e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a9ec: 0x24420001
    ctx->pc = 0x28a9ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x28a9f0: 0x3e00008
    ctx->pc = 0x28A9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A9F4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A9B8u: goto label_28a9b8;
            case 0x28A9C8u: goto label_28a9c8;
            case 0x28A9D8u: goto label_28a9d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28A9F8u;
}
