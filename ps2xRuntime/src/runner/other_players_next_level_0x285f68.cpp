#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: other_players_next_level
// Address: 0x285f68 - 0x285fd4
void other_players_next_level_0x285f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x285f68u;

    // 0x285f68: 0x3c020032
    ctx->pc = 0x285f68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x285f6c: 0x24451bc0
    ctx->pc = 0x285f6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x285f70: 0x182d
    ctx->pc = 0x285f70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285f74: 0x24080001
    ctx->pc = 0x285f74u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x285f78: 0x24070005
    ctx->pc = 0x285f78u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 5));
    // 0x285f7c: 0x24060004
    ctx->pc = 0x285f7cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
label_285f80:
    // 0x285f80: 0x5064000a
    ctx->pc = 0x285F80u;
    {
        const bool branch_taken_0x285f80 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x285f80) {
            ctx->pc = 0x285F84u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x285FACu;
            goto label_285fac;
        }
    }
    ctx->pc = 0x285F88u;
    // 0x285f88: 0x8ca200fc
    ctx->pc = 0x285f88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 252)));
    // 0x285f8c: 0x10480005
    ctx->pc = 0x285F8Cu;
    {
        const bool branch_taken_0x285f8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 8));
        if (branch_taken_0x285f8c) {
            ctx->pc = 0x285FA4u;
            goto label_285fa4;
        }
    }
    ctx->pc = 0x285F94u;
    // 0x285f94: 0x10470003
    ctx->pc = 0x285F94u;
    {
        const bool branch_taken_0x285f94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 7));
        if (branch_taken_0x285f94) {
            ctx->pc = 0x285FA4u;
            goto label_285fa4;
        }
    }
    ctx->pc = 0x285F9Cu;
    // 0x285f9c: 0x14460003
    ctx->pc = 0x285F9Cu;
    {
        const bool branch_taken_0x285f9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        ctx->pc = 0x285FA0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x285f9c) {
            ctx->pc = 0x285FACu;
            goto label_285fac;
        }
    }
    ctx->pc = 0x285FA4u;
label_285fa4:
    // 0x285fa4: 0x3e00008
    ctx->pc = 0x285FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285FA8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 2056)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285F80u: goto label_285f80;
            case 0x285FA4u: goto label_285fa4;
            case 0x285FACu: goto label_285fac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285FACu;
label_285fac:
    // 0x285fac: 0x28620004
    ctx->pc = 0x285facu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x285fb0: 0x1440fff3
    ctx->pc = 0x285FB0u;
    {
        const bool branch_taken_0x285fb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x285FB4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 11008));
        if (branch_taken_0x285fb0) {
            ctx->pc = 0x285F80u;
            goto label_285f80;
        }
    }
    ctx->pc = 0x285FB8u;
    // 0x285fb8: 0x3c030032
    ctx->pc = 0x285fb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x285fbc: 0x24631bc0
    ctx->pc = 0x285fbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x285fc0: 0x24022b00
    ctx->pc = 0x285fc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x285fc4: 0x821018
    ctx->pc = 0x285fc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x285fc8: 0x431021
    ctx->pc = 0x285fc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285fcc: 0x3e00008
    ctx->pc = 0x285FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285FD0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2056)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285F80u: goto label_285f80;
            case 0x285FA4u: goto label_285fa4;
            case 0x285FACu: goto label_285fac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285FD4u;
}
