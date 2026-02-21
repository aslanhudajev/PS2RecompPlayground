#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_show_gold
// Address: 0x28c450 - 0x28c4fc
void init_show_gold_0x28c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28c450u;

    // 0x28c450: 0x80302d
    ctx->pc = 0x28c450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c454: 0x24032b00
    ctx->pc = 0x28c454u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x28c458: 0xc31818
    ctx->pc = 0x28c458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c45c: 0x3c020032
    ctx->pc = 0x28c45cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28c460: 0x24421bc0
    ctx->pc = 0x28c460u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x28c464: 0x623821
    ctx->pc = 0x28c464u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c468: 0x3c03003c
    ctx->pc = 0x28c468u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x28c46c: 0x24633e80
    ctx->pc = 0x28c46cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16000));
    // 0x28c470: 0x2402000c
    ctx->pc = 0x28c470u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x28c474: 0xc21018
    ctx->pc = 0x28c474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c478: 0x431021
    ctx->pc = 0x28c478u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28c47c: 0x8c420000
    ctx->pc = 0x28c47cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c480: 0x1040000f
    ctx->pc = 0x28C480u;
    {
        const bool branch_taken_0x28c480 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C484u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28c480) {
            ctx->pc = 0x28C4C0u;
            goto label_28c4c0;
        }
    }
    ctx->pc = 0x28C488u;
    // 0x28c488: 0x3c02003c
    ctx->pc = 0x28c488u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28c48c: 0x24443e80
    ctx->pc = 0x28c48cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16000));
    // 0x28c490: 0x2402000c
    ctx->pc = 0x28c490u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x28c494: 0xc21818
    ctx->pc = 0x28c494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c498: 0x24a50001
    ctx->pc = 0x28c498u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x28c49c: 0x0
    ctx->pc = 0x28c49cu;
    // NOP
label_28c4a0:
    // 0x28c4a0: 0x28a20003
    ctx->pc = 0x28c4a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x28c4a4: 0x10400006
    ctx->pc = 0x28C4A4u;
    {
        const bool branch_taken_0x28c4a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C4A8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x28c4a4) {
            ctx->pc = 0x28C4C0u;
            goto label_28c4c0;
        }
    }
    ctx->pc = 0x28C4ACu;
    // 0x28c4ac: 0x431021
    ctx->pc = 0x28c4acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28c4b0: 0x441021
    ctx->pc = 0x28c4b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28c4b4: 0x8c420000
    ctx->pc = 0x28c4b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c4b8: 0x5440fff9
    ctx->pc = 0x28C4B8u;
    {
        const bool branch_taken_0x28c4b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28c4b8) {
            ctx->pc = 0x28C4BCu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x28C4A0u;
            goto label_28c4a0;
        }
    }
    ctx->pc = 0x28C4C0u;
label_28c4c0:
    // 0x28c4c0: 0x3c04003c
    ctx->pc = 0x28c4c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x28c4c4: 0x24843e20
    ctx->pc = 0x28c4c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15904));
    // 0x28c4c8: 0x51880
    ctx->pc = 0x28c4c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x28c4cc: 0x2402000c
    ctx->pc = 0x28c4ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x28c4d0: 0xc21018
    ctx->pc = 0x28c4d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c4d4: 0x621821
    ctx->pc = 0x28c4d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c4d8: 0x642021
    ctx->pc = 0x28c4d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28c4dc: 0x3c02003c
    ctx->pc = 0x28c4dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28c4e0: 0x24423df0
    ctx->pc = 0x28c4e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15856));
    // 0x28c4e4: 0x621821
    ctx->pc = 0x28c4e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c4e8: 0x8c620000
    ctx->pc = 0x28c4e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c4ec: 0xac820000
    ctx->pc = 0x28c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x28c4f0: 0x8ce21a20
    ctx->pc = 0x28c4f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 6688)));
    // 0x28c4f4: 0x3e00008
    ctx->pc = 0x28C4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C4F8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28C4A0u: goto label_28c4a0;
            case 0x28C4C0u: goto label_28c4c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28C4FCu;
}
