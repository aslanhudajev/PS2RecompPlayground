#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfpts_SearchPtsQue
// Address: 0x19c248 - 0x19c300
void sfpts_SearchPtsQue_0x19c248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfpts_SearchPtsQue");


    ctx->pc = 0x19c248u;

    // 0x19c248: 0x8c8d0008
    ctx->pc = 0x19c248u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19c24c: 0xc75821
    ctx->pc = 0x19c24cu;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x19c250: 0x8c8c0004
    ctx->pc = 0x19c250u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19c254: 0x482d
    ctx->pc = 0x19c254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c258: 0x19a00027
    ctx->pc = 0x19C258u;
    {
        const bool branch_taken_0x19c258 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x19C25Cu;
        SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 16)));
        if (branch_taken_0x19c258) {
            ctx->pc = 0x19C2F8u;
            goto label_19c2f8;
        }
    }
    ctx->pc = 0x19C260u;
    // 0x19c260: 0x8c840000
    ctx->pc = 0x19c260u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19c264: 0x2402000c
    ctx->pc = 0x19c264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_19c268:
    // 0x19c268: 0x1421818
    ctx->pc = 0x19c268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19c26c: 0x641021
    ctx->pc = 0x19c26cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c270: 0x8c480004
    ctx->pc = 0x19c270u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19c274: 0x8c430008
    ctx->pc = 0x19c274u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19c278: 0x1031821
    ctx->pc = 0x19c278u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x19c27c: 0x163102b
    ctx->pc = 0x19c27cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x19c280: 0x14400008
    ctx->pc = 0x19C280u;
    {
        const bool branch_taken_0x19c280 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19C284u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        if (branch_taken_0x19c280) {
            ctx->pc = 0x19C2A4u;
            goto label_19c2a4;
        }
    }
    ctx->pc = 0x19C288u;
    // 0x19c288: 0x54400011
    ctx->pc = 0x19C288u;
    {
        const bool branch_taken_0x19c288 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19c288) {
            ctx->pc = 0x19C28Cu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 10), 1));
            ctx->pc = 0x19C2D0u;
            goto label_19c2d0;
        }
    }
    ctx->pc = 0x19C290u;
    // 0x19c290: 0xa3102b
    ctx->pc = 0x19c290u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x19c294: 0x1040000e
    ctx->pc = 0x19C294u;
    {
        const bool branch_taken_0x19c294 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C298u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 10), 1));
        if (branch_taken_0x19c294) {
            ctx->pc = 0x19C2D0u;
            goto label_19c2d0;
        }
    }
    ctx->pc = 0x19C29Cu;
label_19c29c:
    // 0x19c29c: 0x3e00008
    ctx->pc = 0x19C29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C2A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C268u: goto label_19c268;
            case 0x19C29Cu: goto label_19c29c;
            case 0x19C2A4u: goto label_19c2a4;
            case 0x19C2B8u: goto label_19c2b8;
            case 0x19C2D0u: goto label_19c2d0;
            case 0x19C2E4u: goto label_19c2e4;
            case 0x19C2F8u: goto label_19c2f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C2A4u;
label_19c2a4:
    // 0x19c2a4: 0x14400004
    ctx->pc = 0x19C2A4u;
    {
        const bool branch_taken_0x19c2a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19C2A8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        if (branch_taken_0x19c2a4) {
            ctx->pc = 0x19C2B8u;
            goto label_19c2b8;
        }
    }
    ctx->pc = 0x19C2ACu;
    // 0x19c2ac: 0xab102b
    ctx->pc = 0x19c2acu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x19c2b0: 0x1440fffa
    ctx->pc = 0x19C2B0u;
    {
        const bool branch_taken_0x19c2b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19C2B4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        if (branch_taken_0x19c2b0) {
            ctx->pc = 0x19C29Cu;
            goto label_19c29c;
        }
    }
    ctx->pc = 0x19C2B8u;
label_19c2b8:
    // 0x19c2b8: 0x54400005
    ctx->pc = 0x19C2B8u;
    {
        const bool branch_taken_0x19c2b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19c2b8) {
            ctx->pc = 0x19C2BCu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 10), 1));
            ctx->pc = 0x19C2D0u;
            goto label_19c2d0;
        }
    }
    ctx->pc = 0x19C2C0u;
    // 0x19c2c0: 0x671023
    ctx->pc = 0x19c2c0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19c2c4: 0xa2102b
    ctx->pc = 0x19c2c4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c2c8: 0x1440fff4
    ctx->pc = 0x19C2C8u;
    {
        const bool branch_taken_0x19c2c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19C2CCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 10), 1));
        if (branch_taken_0x19c2c8) {
            ctx->pc = 0x19C29Cu;
            goto label_19c29c;
        }
    }
    ctx->pc = 0x19C2D0u;
label_19c2d0:
    // 0x19c2d0: 0x6c102a
    ctx->pc = 0x19c2d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 12)));
    // 0x19c2d4: 0x14400003
    ctx->pc = 0x19C2D4u;
    {
        const bool branch_taken_0x19c2d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19C2D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19c2d4) {
            ctx->pc = 0x19C2E4u;
            goto label_19c2e4;
        }
    }
    ctx->pc = 0x19C2DCu;
    // 0x19c2dc: 0x2582ffff
    ctx->pc = 0x19c2dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x19c2e0: 0x1421023
    ctx->pc = 0x19c2e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_19c2e4:
    // 0x19c2e4: 0x25290001
    ctx->pc = 0x19c2e4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x19c2e8: 0x40502d
    ctx->pc = 0x19c2e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c2ec: 0x12d102a
    ctx->pc = 0x19c2ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 13)));
    // 0x19c2f0: 0x1440ffdd
    ctx->pc = 0x19C2F0u;
    {
        const bool branch_taken_0x19c2f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19C2F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x19c2f0) {
            ctx->pc = 0x19C268u;
            goto label_19c268;
        }
    }
    ctx->pc = 0x19C2F8u;
label_19c2f8:
    // 0x19c2f8: 0x3e00008
    ctx->pc = 0x19C2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C2FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C268u: goto label_19c268;
            case 0x19C29Cu: goto label_19c29c;
            case 0x19C2A4u: goto label_19c2a4;
            case 0x19C2B8u: goto label_19c2b8;
            case 0x19C2D0u: goto label_19c2d0;
            case 0x19C2E4u: goto label_19c2e4;
            case 0x19C2F8u: goto label_19c2f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C300u;
}
