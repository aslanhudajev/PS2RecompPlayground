#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeSetEmpty
// Address: 0x212c80 - 0x212d30
void AtreeSetEmpty_0x212c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212c80u;

    // 0x212c80: 0x3c02003c
    ctx->pc = 0x212c80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x212c84: 0x8c42cb6c
    ctx->pc = 0x212c84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953836)));
    // 0x212c88: 0x10400013
    ctx->pc = 0x212C88u;
    {
        const bool branch_taken_0x212c88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x212C8Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x212c88) {
            ctx->pc = 0x212CD8u;
            goto label_212cd8;
        }
    }
    ctx->pc = 0x212C90u;
    // 0x212c90: 0x40202d
    ctx->pc = 0x212c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c94: 0x8c42f4b8
    ctx->pc = 0x212c94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964408)));
    // 0x212c98: 0x1840000f
    ctx->pc = 0x212C98u;
    {
        const bool branch_taken_0x212c98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x212C9Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212c98) {
            ctx->pc = 0x212CD8u;
            goto label_212cd8;
        }
    }
    ctx->pc = 0x212CA0u;
    // 0x212ca0: 0x3c02003c
    ctx->pc = 0x212ca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x212ca4: 0x8c48cb6c
    ctx->pc = 0x212ca4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4294953836)));
    // 0x212ca8: 0x24060028
    ctx->pc = 0x212ca8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 40));
    // 0x212cac: 0x2405ffff
    ctx->pc = 0x212cacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212cb0: 0x8c84f4b8
    ctx->pc = 0x212cb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4294964408)));
    // 0x212cb4: 0x0
    ctx->pc = 0x212cb4u;
    // NOP
label_212cb8:
    // 0x212cb8: 0x663818
    ctx->pc = 0x212cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x212cbc: 0xe81021
    ctx->pc = 0x212cbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x212cc0: 0xac450020
    ctx->pc = 0x212cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x212cc4: 0x24630001
    ctx->pc = 0x212cc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x212cc8: 0x64102a
    ctx->pc = 0x212cc8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x212ccc: 0x0
    ctx->pc = 0x212cccu;
    // NOP
    // 0x212cd0: 0x1440fff9
    ctx->pc = 0x212CD0u;
    {
        const bool branch_taken_0x212cd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x212cd0) {
            ctx->pc = 0x212CB8u;
            goto label_212cb8;
        }
    }
    ctx->pc = 0x212CD8u;
label_212cd8:
    // 0x212cd8: 0x3c02003c
    ctx->pc = 0x212cd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x212cdc: 0x8c42cb70
    ctx->pc = 0x212cdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953840)));
    // 0x212ce0: 0x10400011
    ctx->pc = 0x212CE0u;
    {
        const bool branch_taken_0x212ce0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x212CE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x212ce0) {
            ctx->pc = 0x212D28u;
            goto label_212d28;
        }
    }
    ctx->pc = 0x212CE8u;
    // 0x212ce8: 0x40202d
    ctx->pc = 0x212ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212cec: 0x8c42f4c4
    ctx->pc = 0x212cecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964420)));
    // 0x212cf0: 0x1840000d
    ctx->pc = 0x212CF0u;
    {
        const bool branch_taken_0x212cf0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x212CF4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212cf0) {
            ctx->pc = 0x212D28u;
            goto label_212d28;
        }
    }
    ctx->pc = 0x212CF8u;
    // 0x212cf8: 0x3c02003c
    ctx->pc = 0x212cf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x212cfc: 0x8c47cb70
    ctx->pc = 0x212cfcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294953840)));
    // 0x212d00: 0x240500a0
    ctx->pc = 0x212d00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 160));
    // 0x212d04: 0x8c84f4c4
    ctx->pc = 0x212d04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4294964420)));
label_212d08:
    // 0x212d08: 0x653018
    ctx->pc = 0x212d08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x212d0c: 0xc71021
    ctx->pc = 0x212d0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x212d10: 0xac400004
    ctx->pc = 0x212d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x212d14: 0x24630001
    ctx->pc = 0x212d14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x212d18: 0x64102a
    ctx->pc = 0x212d18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x212d1c: 0x0
    ctx->pc = 0x212d1cu;
    // NOP
    // 0x212d20: 0x1440fff9
    ctx->pc = 0x212D20u;
    {
        const bool branch_taken_0x212d20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x212d20) {
            ctx->pc = 0x212D08u;
            goto label_212d08;
        }
    }
    ctx->pc = 0x212D28u;
label_212d28:
    // 0x212d28: 0x3e00008
    ctx->pc = 0x212D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212CB8u: goto label_212cb8;
            case 0x212CD8u: goto label_212cd8;
            case 0x212D08u: goto label_212d08;
            case 0x212D28u: goto label_212d28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212D30u;
}
