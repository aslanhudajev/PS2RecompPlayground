#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FindExit
// Address: 0x25b960 - 0x25b9e4
void FindExit_0x25b960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25b960u;

    // 0x25b960: 0x27bdffe0
    ctx->pc = 0x25b960u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25b964: 0x3c020034
    ctx->pc = 0x25b964u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25b968: 0x8c42cd98
    ctx->pc = 0x25b968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x25b96c: 0x1840001a
    ctx->pc = 0x25B96Cu;
    {
        const bool branch_taken_0x25b96c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25B970u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25b96c) {
            ctx->pc = 0x25B9D8u;
            goto label_25b9d8;
        }
    }
    ctx->pc = 0x25B974u;
    // 0x25b974: 0x3c020034
    ctx->pc = 0x25b974u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25b978: 0x24090110
    ctx->pc = 0x25b978u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 272));
    // 0x25b97c: 0x8c4acd94
    ctx->pc = 0x25b97cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x25b980: 0x2408ffff
    ctx->pc = 0x25b980u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25b984: 0x24070009
    ctx->pc = 0x25b984u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 9));
    // 0x25b988: 0x3c020034
    ctx->pc = 0x25b988u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25b98c: 0x8c46cd98
    ctx->pc = 0x25b98cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x25b990: 0xa91018
    ctx->pc = 0x25b990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25b994: 0x0
    ctx->pc = 0x25b994u;
    // NOP
label_25b998:
    // 0x25b998: 0x4a1821
    ctx->pc = 0x25b998u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x25b99c: 0x846200d8
    ctx->pc = 0x25b99cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x25b9a0: 0x5048000a
    ctx->pc = 0x25B9A0u;
    {
        const bool branch_taken_0x25b9a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 8));
        if (branch_taken_0x25b9a0) {
            ctx->pc = 0x25B9A4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x25B9CCu;
            goto label_25b9cc;
        }
    }
    ctx->pc = 0x25B9A8u;
    // 0x25b9a8: 0x8c620000
    ctx->pc = 0x25b9a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25b9ac: 0x8c420000
    ctx->pc = 0x25b9acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b9b0: 0x54470006
    ctx->pc = 0x25B9B0u;
    {
        const bool branch_taken_0x25b9b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        if (branch_taken_0x25b9b0) {
            ctx->pc = 0x25B9B4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x25B9CCu;
            goto label_25b9cc;
        }
    }
    ctx->pc = 0x25B9B8u;
    // 0x25b9b8: 0x846200f0
    ctx->pc = 0x25b9b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x25b9bc: 0x54820003
    ctx->pc = 0x25B9BCu;
    {
        const bool branch_taken_0x25b9bc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x25b9bc) {
            ctx->pc = 0x25B9C0u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x25B9CCu;
            goto label_25b9cc;
        }
    }
    ctx->pc = 0x25B9C4u;
    // 0x25b9c4: 0x10000005
    ctx->pc = 0x25B9C4u;
    {
        const bool branch_taken_0x25b9c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B9C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25b9c4) {
            ctx->pc = 0x25B9DCu;
            goto label_25b9dc;
        }
    }
    ctx->pc = 0x25B9CCu;
label_25b9cc:
    // 0x25b9cc: 0xa6102a
    ctx->pc = 0x25b9ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x25b9d0: 0x1440fff1
    ctx->pc = 0x25B9D0u;
    {
        const bool branch_taken_0x25b9d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B9D4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x25b9d0) {
            ctx->pc = 0x25B998u;
            goto label_25b998;
        }
    }
    ctx->pc = 0x25B9D8u;
label_25b9d8:
    // 0x25b9d8: 0x102d
    ctx->pc = 0x25b9d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b9dc:
    // 0x25b9dc: 0x3e00008
    ctx->pc = 0x25B9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B9E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B998u: goto label_25b998;
            case 0x25B9CCu: goto label_25b9cc;
            case 0x25B9D8u: goto label_25b9d8;
            case 0x25B9DCu: goto label_25b9dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B9E4u;
}
