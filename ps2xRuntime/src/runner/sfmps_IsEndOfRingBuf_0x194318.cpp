#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_IsEndOfRingBuf
// Address: 0x194318 - 0x194370
void sfmps_IsEndOfRingBuf_0x194318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_IsEndOfRingBuf");


    ctx->pc = 0x194318u;

    // 0x194318: 0x8c823704
    ctx->pc = 0x194318u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 14084)));
    // 0x19431c: 0x24030388
    ctx->pc = 0x19431cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 904));
    // 0x194320: 0x24840d34
    ctx->pc = 0x194320u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3380));
    // 0x194324: 0x431018
    ctx->pc = 0x194324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x194328: 0x822021
    ctx->pc = 0x194328u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19432c: 0x8c820010
    ctx->pc = 0x19432cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x194330: 0x14400009
    ctx->pc = 0x194330u;
    {
        const bool branch_taken_0x194330 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x194334u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 16));
        if (branch_taken_0x194330) {
            ctx->pc = 0x194358u;
            goto label_194358;
        }
    }
    ctx->pc = 0x194338u;
    // 0x194338: 0x8cc20010
    ctx->pc = 0x194338u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x19433c: 0x14400004
    ctx->pc = 0x19433Cu;
    {
        const bool branch_taken_0x19433c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19433c) {
            ctx->pc = 0x194350u;
            goto label_194350;
        }
    }
    ctx->pc = 0x194344u;
    // 0x194344: 0x8cc20014
    ctx->pc = 0x194344u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x194348: 0x50400004
    ctx->pc = 0x194348u;
    {
        const bool branch_taken_0x194348 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x194348) {
            ctx->pc = 0x19434Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->pc = 0x19435Cu;
            goto label_19435c;
        }
    }
    ctx->pc = 0x194350u;
label_194350:
    // 0x194350: 0x3e00008
    ctx->pc = 0x194350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194354u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194350u: goto label_194350;
            case 0x194358u: goto label_194358;
            case 0x19435Cu: goto label_19435c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194358u;
label_194358:
    // 0x194358: 0x8cc3000c
    ctx->pc = 0x194358u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_19435c:
    // 0x19435c: 0x8cc20008
    ctx->pc = 0x19435cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x194360: 0x431021
    ctx->pc = 0x194360u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194364: 0xa21026
    ctx->pc = 0x194364u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x194368: 0x3e00008
    ctx->pc = 0x194368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19436Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194350u: goto label_194350;
            case 0x194358u: goto label_194358;
            case 0x19435Cu: goto label_19435c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194370u;
}
