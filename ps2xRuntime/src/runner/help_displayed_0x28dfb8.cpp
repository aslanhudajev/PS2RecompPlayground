#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: help_displayed
// Address: 0x28dfb8 - 0x28e028
void help_displayed_0x28dfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28dfb8u;

    // 0x28dfb8: 0x4a10004
    ctx->pc = 0x28DFB8u;
    {
        const bool branch_taken_0x28dfb8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x28DFBCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 256));
        if (branch_taken_0x28dfb8) {
            ctx->pc = 0x28DFCCu;
            goto label_28dfcc;
        }
    }
    ctx->pc = 0x28DFC0u;
    // 0x28dfc0: 0x102d
    ctx->pc = 0x28dfc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dfc4: 0x10000002
    ctx->pc = 0x28DFC4u;
    {
        const bool branch_taken_0x28dfc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DFC8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x28dfc4) {
            ctx->pc = 0x28DFD0u;
            goto label_28dfd0;
        }
    }
    ctx->pc = 0x28DFCCu;
label_28dfcc:
    // 0x28dfcc: 0xa0102d
    ctx->pc = 0x28dfccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28dfd0:
    // 0x28dfd0: 0x40302d
    ctx->pc = 0x28dfd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dfd4: 0xa6102a
    ctx->pc = 0x28dfd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x28dfd8: 0x14400011
    ctx->pc = 0x28DFD8u;
    {
        const bool branch_taken_0x28dfd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28DFDCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x28dfd8) {
            ctx->pc = 0x28E020u;
            goto label_28e020;
        }
    }
    ctx->pc = 0x28DFE0u;
    // 0x28dfe0: 0x3c020032
    ctx->pc = 0x28dfe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28dfe4: 0x24491bc0
    ctx->pc = 0x28dfe4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x28dfe8: 0xc81018
    ctx->pc = 0x28dfe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28dfec: 0x0
    ctx->pc = 0x28dfecu;
    // NOP
label_28dff0:
    // 0x28dff0: 0x491821
    ctx->pc = 0x28dff0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x28dff4: 0x8c6200fc
    ctx->pc = 0x28dff4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x28dff8: 0x10400005
    ctx->pc = 0x28DFF8u;
    {
        const bool branch_taken_0x28dff8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DFFCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x28dff8) {
            ctx->pc = 0x28E010u;
            goto label_28e010;
        }
    }
    ctx->pc = 0x28E000u;
    // 0x28e000: 0x90421910
    ctx->pc = 0x28e000u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6416)));
    // 0x28e004: 0x50400002
    ctx->pc = 0x28E004u;
    {
        const bool branch_taken_0x28e004 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28e004) {
            ctx->pc = 0x28E008u;
            SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 255));
            ctx->pc = 0x28E010u;
            goto label_28e010;
        }
    }
    ctx->pc = 0x28E00Cu;
    // 0x28e00c: 0xe23825
    ctx->pc = 0x28e00cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_28e010:
    // 0x28e010: 0x24c60001
    ctx->pc = 0x28e010u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x28e014: 0xa6102a
    ctx->pc = 0x28e014u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x28e018: 0x1040fff5
    ctx->pc = 0x28E018u;
    {
        const bool branch_taken_0x28e018 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28E01Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x28e018) {
            ctx->pc = 0x28DFF0u;
            goto label_28dff0;
        }
    }
    ctx->pc = 0x28E020u;
label_28e020:
    // 0x28e020: 0x3e00008
    ctx->pc = 0x28E020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E024u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28DFCCu: goto label_28dfcc;
            case 0x28DFD0u: goto label_28dfd0;
            case 0x28DFF0u: goto label_28dff0;
            case 0x28E010u: goto label_28e010;
            case 0x28E020u: goto label_28e020;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28E028u;
}
