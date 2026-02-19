#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterChildGetPattern
// Address: 0x296bd8 - 0x296c28
void CritterChildGetPattern_0x296bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x296bd8u;

    // 0x296bd8: 0x8ca70004
    ctx->pc = 0x296bd8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x296bdc: 0x84860128
    ctx->pc = 0x296bdcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x296be0: 0x84e20114
    ctx->pc = 0x296be0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 276)));
    // 0x296be4: 0xc2102a
    ctx->pc = 0x296be4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x296be8: 0x1040000d
    ctx->pc = 0x296BE8u;
    {
        const bool branch_taken_0x296be8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x296BECu;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 296)));
        if (branch_taken_0x296be8) {
            ctx->pc = 0x296C20u;
            goto label_296c20;
        }
    }
    ctx->pc = 0x296BF0u;
    // 0x296bf0: 0xa4a30128
    ctx->pc = 0x296bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 296), (uint16_t)GPR_U32(ctx, 3));
    // 0x296bf4: 0x9483012c
    ctx->pc = 0x296bf4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x296bf8: 0xa4a3012c
    ctx->pc = 0x296bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 300), (uint16_t)GPR_U32(ctx, 3));
    // 0x296bfc: 0x8ce40128
    ctx->pc = 0x296bfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 296)));
    // 0x296c00: 0x24020050
    ctx->pc = 0x296c00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x296c04: 0xc21018
    ctx->pc = 0x296c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x296c08: 0x441021
    ctx->pc = 0x296c08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x296c0c: 0x31c00
    ctx->pc = 0x296c0cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x296c10: 0x31bc3
    ctx->pc = 0x296c10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
    // 0x296c14: 0x431021
    ctx->pc = 0x296c14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296c18: 0x94420020
    ctx->pc = 0x296c18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x296c1c: 0xa4a20126
    ctx->pc = 0x296c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 294), (uint16_t)GPR_U32(ctx, 2));
label_296c20:
    // 0x296c20: 0x3e00008
    ctx->pc = 0x296C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296C20u: goto label_296c20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296C28u;
}
