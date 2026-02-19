#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: hide_rune_stones
// Address: 0x265b88 - 0x265c30
void hide_rune_stones_0x265b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x265b88u;

    // 0x265b88: 0x24070001
    ctx->pc = 0x265b88u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x265b8c: 0x302d
    ctx->pc = 0x265b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b90: 0x282d
    ctx->pc = 0x265b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b94: 0x24092b00
    ctx->pc = 0x265b94u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x265b98: 0x3c020032
    ctx->pc = 0x265b98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x265b9c: 0x244b1bc0
    ctx->pc = 0x265b9cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x265ba0: 0x24080001
    ctx->pc = 0x265ba0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x265ba4: 0x240400b4
    ctx->pc = 0x265ba4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 180));
    // 0x265ba8: 0xa91018
    ctx->pc = 0x265ba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x265bac: 0x0
    ctx->pc = 0x265bacu;
    // NOP
label_265bb0:
    // 0x265bb0: 0x4b1821
    ctx->pc = 0x265bb0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x265bb4: 0x8c6200fc
    ctx->pc = 0x265bb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x265bb8: 0x14480006
    ctx->pc = 0x265BB8u;
    {
        const bool branch_taken_0x265bb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 8));
        ctx->pc = 0x265BBCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x265bb8) {
            ctx->pc = 0x265BD4u;
            goto label_265bd4;
        }
    }
    ctx->pc = 0x265BC0u;
    // 0x265bc0: 0x8c62000c
    ctx->pc = 0x265bc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x265bc4: 0x445018
    ctx->pc = 0x265bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x265bc8: 0x1431021
    ctx->pc = 0x265bc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x265bcc: 0x94420cf2
    ctx->pc = 0x265bccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3314)));
    // 0x265bd0: 0xc23025
    ctx->pc = 0x265bd0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_265bd4:
    // 0x265bd4: 0x28a20004
    ctx->pc = 0x265bd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x265bd8: 0x1440fff5
    ctx->pc = 0x265BD8u;
    {
        const bool branch_taken_0x265bd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x265BDCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x265bd8) {
            ctx->pc = 0x265BB0u;
            goto label_265bb0;
        }
    }
    ctx->pc = 0x265BE0u;
    // 0x265be0: 0x282d
    ctx->pc = 0x265be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265be4: 0x24080001
    ctx->pc = 0x265be4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x265be8: 0x182d
    ctx->pc = 0x265be8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265bec: 0x0
    ctx->pc = 0x265becu;
    // NOP
label_265bf0:
    // 0x265bf0: 0x51040
    ctx->pc = 0x265bf0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x265bf4: 0x452021
    ctx->pc = 0x265bf4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_265bf8:
    // 0x265bf8: 0x831021
    ctx->pc = 0x265bf8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x265bfc: 0x481004
    ctx->pc = 0x265bfcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x265c00: 0xc21024
    ctx->pc = 0x265c00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x265c04: 0x2380a
    ctx->pc = 0x265c04u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 0));
    // 0x265c08: 0x24630001
    ctx->pc = 0x265c08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x265c0c: 0x28620003
    ctx->pc = 0x265c0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
    // 0x265c10: 0x1440fff9
    ctx->pc = 0x265C10u;
    {
        const bool branch_taken_0x265c10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x265c10) {
            ctx->pc = 0x265BF8u;
            goto label_265bf8;
        }
    }
    ctx->pc = 0x265C18u;
    // 0x265c18: 0x24a50001
    ctx->pc = 0x265c18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x265c1c: 0x28a20004
    ctx->pc = 0x265c1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x265c20: 0x1440fff3
    ctx->pc = 0x265C20u;
    {
        const bool branch_taken_0x265c20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x265C24u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x265c20) {
            ctx->pc = 0x265BF0u;
            goto label_265bf0;
        }
    }
    ctx->pc = 0x265C28u;
    // 0x265c28: 0x3e00008
    ctx->pc = 0x265C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265C2Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x265BB0u: goto label_265bb0;
            case 0x265BD4u: goto label_265bd4;
            case 0x265BF0u: goto label_265bf0;
            case 0x265BF8u: goto label_265bf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x265C30u;
}
