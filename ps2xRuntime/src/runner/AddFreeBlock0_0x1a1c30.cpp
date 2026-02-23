#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: AddFreeBlock0
// Address: 0x1a1c30 - 0x1a1d30
void AddFreeBlock0_0x1a1c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("AddFreeBlock0");


    ctx->pc = 0x1a1c30u;

label_1a1c30:
    // 0x1a1c30: 0x27bdfff0
    ctx->pc = 0x1a1c30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1c34: 0x7fbf0000
    ctx->pc = 0x1a1c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a1c38: 0x8f83892c
    ctx->pc = 0x1a1c38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294936876)));
    // 0x1a1c3c: 0x24840008
    ctx->pc = 0x1a1c3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a1c40: 0x3087000c
    ctx->pc = 0x1a1c40u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 4), 12));
    // 0x1a1c44: 0x24630001
    ctx->pc = 0x1a1c44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a1c48: 0x10e0000d
    ctx->pc = 0x1A1C48u;
    {
        const bool branch_taken_0x1a1c48 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1C4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 3));
        if (branch_taken_0x1a1c48) {
            ctx->pc = 0x1A1C80u;
            goto label_1a1c80;
        }
    }
    ctx->pc = 0x1A1C50u;
    // 0x1a1c50: 0x24030004
    ctx->pc = 0x1a1c50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a1c54: 0x14e30003
    ctx->pc = 0x1A1C54u;
    {
        const bool branch_taken_0x1a1c54 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A1C58u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x1a1c54) {
            ctx->pc = 0x1A1C64u;
            goto label_1a1c64;
        }
    }
    ctx->pc = 0x1A1C5Cu;
    // 0x1a1c5c: 0x10000008
    ctx->pc = 0x1A1C5Cu;
    {
        const bool branch_taken_0x1a1c5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1C60u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12));
        if (branch_taken_0x1a1c5c) {
            ctx->pc = 0x1A1C80u;
            goto label_1a1c80;
        }
    }
    ctx->pc = 0x1A1C64u;
label_1a1c64:
    // 0x1a1c64: 0x14e30003
    ctx->pc = 0x1A1C64u;
    {
        const bool branch_taken_0x1a1c64 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A1C68u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x1a1c64) {
            ctx->pc = 0x1A1C74u;
            goto label_1a1c74;
        }
    }
    ctx->pc = 0x1A1C6Cu;
    // 0x1a1c6c: 0x10000004
    ctx->pc = 0x1A1C6Cu;
    {
        const bool branch_taken_0x1a1c6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1C70u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x1a1c6c) {
            ctx->pc = 0x1A1C80u;
            goto label_1a1c80;
        }
    }
    ctx->pc = 0x1A1C74u;
label_1a1c74:
    // 0x1a1c74: 0x14e30003
    ctx->pc = 0x1A1C74u;
    {
        const bool branch_taken_0x1a1c74 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A1C78u;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        if (branch_taken_0x1a1c74) {
            ctx->pc = 0x1A1C84u;
            goto label_1a1c84;
        }
    }
    ctx->pc = 0x1A1C7Cu;
    // 0x1a1c7c: 0x24840004
    ctx->pc = 0x1a1c7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
label_1a1c80:
    // 0x1a1c80: 0xa41823
    ctx->pc = 0x1a1c80u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1a1c84:
    // 0x1a1c84: 0x3c050051
    ctx->pc = 0x1a1c84u;
    SET_GPR_U32(ctx, 5, ((uint32_t)81 << 16));
    // 0x1a1c88: 0x24870004
    ctx->pc = 0x1a1c88u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 4));
    // 0x1a1c8c: 0x24a55040
    ctx->pc = 0x1a1c8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20544));
    // 0x1a1c90: 0x31883
    ctx->pc = 0x1a1c90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1a1c94: 0xe52823
    ctx->pc = 0x1a1c94u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1a1c98: 0x2468fffe
    ctx->pc = 0x1a1c98u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1a1c9c: 0x54883
    ctx->pc = 0x1a1c9cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1a1ca0: 0x31880
    ctx->pc = 0x1a1ca0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a1ca4: 0x24050001
    ctx->pc = 0x1a1ca4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1ca8: 0x641821
    ctx->pc = 0x1a1ca8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a1cac: 0xac850000
    ctx->pc = 0x1a1cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1a1cb0: 0xac65fffc
    ctx->pc = 0x1a1cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 5));
    // 0x1a1cb4: 0x8f878928
    ctx->pc = 0x1a1cb4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294936872)));
    // 0x1a1cb8: 0x3c030051
    ctx->pc = 0x1a1cb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1a1cbc: 0x82823
    ctx->pc = 0x1a1cbcu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x1a1cc0: 0x3c010051
    ctx->pc = 0x1a1cc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1a1cc4: 0x24635044
    ctx->pc = 0x1a1cc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20548));
    // 0x1a1cc8: 0xe83821
    ctx->pc = 0x1a1cc8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a1ccc: 0xaf878928
    ctx->pc = 0x1a1cccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936872), GPR_U32(ctx, 7));
    // 0x1a1cd0: 0xac850004
    ctx->pc = 0x1a1cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1a1cd4: 0xac800008
    ctx->pc = 0x1a1cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1a1cd8: 0x8c255048
    ctx->pc = 0x1a1cd8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 20552)));
    // 0x1a1cdc: 0xac85000c
    ctx->pc = 0x1a1cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1a1ce0: 0x8c870004
    ctx->pc = 0x1a1ce0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a1ce4: 0x3c010051
    ctx->pc = 0x1a1ce4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1a1ce8: 0x72823
    ctx->pc = 0x1a1ce8u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x1a1cec: 0x52880
    ctx->pc = 0x1a1cecu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a1cf0: 0x852021
    ctx->pc = 0x1a1cf0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a1cf4: 0xac870000
    ctx->pc = 0x1a1cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x1a1cf8: 0x8c245048
    ctx->pc = 0x1a1cf8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 20552)));
    // 0x1a1cfc: 0x42080
    ctx->pc = 0x1a1cfcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a1d00: 0x641821
    ctx->pc = 0x1a1d00u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a1d04: 0xac690000
    ctx->pc = 0x1a1d04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x1a1d08: 0x3c010051
    ctx->pc = 0x1a1d08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1a1d0c: 0x10c00005
    ctx->pc = 0x1A1D0Cu;
    {
        const bool branch_taken_0x1a1d0c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1D10u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 20552), GPR_U32(ctx, 9));
        if (branch_taken_0x1a1d0c) {
            ctx->pc = 0x1A1D24u;
            goto label_1a1d24;
        }
    }
    ctx->pc = 0x1A1D14u;
    // 0x1a1d14: 0x8cc50000
    ctx->pc = 0x1a1d14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a1d18: 0x70c02628
    ctx->pc = 0x1a1d18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1a1d1c: 0xc06870c
    ctx->pc = 0x1A1D1Cu;
    SET_GPR_U32(ctx, 31, 0x1A1D24u);
    ctx->pc = 0x1A1D20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->pc = 0x1A1C30u;
    goto label_1a1c30;
    ctx->pc = 0x1A1D24u;
label_1a1d24:
    // 0x1a1d24: 0x7bbf0000
    ctx->pc = 0x1a1d24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1d28: 0x3e00008
    ctx->pc = 0x1A1D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1D2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1C30u: goto label_1a1c30;
            case 0x1A1C64u: goto label_1a1c64;
            case 0x1A1C74u: goto label_1a1c74;
            case 0x1A1C80u: goto label_1a1c80;
            case 0x1A1C84u: goto label_1a1c84;
            case 0x1A1D24u: goto label_1a1d24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1D30u;
}
