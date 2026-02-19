#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_GetObjectDef
// Address: 0x2c6720 - 0x2c677c
void MBOX_GetObjectDef_0x2c6720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c6720u;

    // 0x2c6720: 0x3c020036
    ctx->pc = 0x2c6720u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c6724: 0x8c45dee0
    ctx->pc = 0x2c6724u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c6728: 0x43403
    ctx->pc = 0x2c6728u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2c672c: 0x8ca20038
    ctx->pc = 0x2c672cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2c6730: 0x8c420000
    ctx->pc = 0x2c6730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c6734: 0xc2102a
    ctx->pc = 0x2c6734u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x2c6738: 0x10400007
    ctx->pc = 0x2C6738u;
    {
        const bool branch_taken_0x2c6738 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C673Cu;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
        if (branch_taken_0x2c6738) {
            ctx->pc = 0x2C6758u;
            goto label_2c6758;
        }
    }
    ctx->pc = 0x2C6740u;
    // 0x2c6740: 0x8ca20038
    ctx->pc = 0x2c6740u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2c6744: 0x61900
    ctx->pc = 0x2c6744u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 4));
    // 0x2c6748: 0x431021
    ctx->pc = 0x2c6748u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c674c: 0x8c420010
    ctx->pc = 0x2c674cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c6750: 0x50400003
    ctx->pc = 0x2C6750u;
    {
        const bool branch_taken_0x2c6750 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c6750) {
            ctx->pc = 0x2C6754u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 56)));
            ctx->pc = 0x2C6760u;
            goto label_2c6760;
        }
    }
    ctx->pc = 0x2C6758u;
label_2c6758:
    // 0x2c6758: 0x3e00008
    ctx->pc = 0x2C6758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C675Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C6758u: goto label_2c6758;
            case 0x2C6760u: goto label_2c6760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C6760u;
label_2c6760:
    // 0x2c6760: 0x431021
    ctx->pc = 0x2c6760u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c6764: 0x8c420004
    ctx->pc = 0x2c6764u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c6768: 0x8c430054
    ctx->pc = 0x2c6768u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2c676c: 0x41180
    ctx->pc = 0x2c676cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 6));
    // 0x2c6770: 0x431021
    ctx->pc = 0x2c6770u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c6774: 0x3e00008
    ctx->pc = 0x2C6774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6778u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C6758u: goto label_2c6758;
            case 0x2C6760u: goto label_2c6760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C677Cu;
}
