#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: new_ctrl
// Address: 0x206e60 - 0x206eb4
void new_ctrl_0x206e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x206e60u;

    // 0x206e60: 0x27bdfff0
    ctx->pc = 0x206e60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206e64: 0x2402ffff
    ctx->pc = 0x206e64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206e68: 0x14a20005
    ctx->pc = 0x206E68u;
    {
        const bool branch_taken_0x206e68 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x206E6Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x206e68) {
            ctx->pc = 0x206E80u;
            goto label_206e80;
        }
    }
    ctx->pc = 0x206E70u;
    // 0x206e70: 0xc081b4e
    ctx->pc = 0x206E70u;
    SET_GPR_U32(ctx, 31, 0x206E78u);
    ctx->pc = 0x206D38u;
    {
        const uint32_t __entryPc = ctx->pc;
        and_edges_0x206d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E78u; }
    }
    if (ctx->pc != 0x206E78u) { return; }
    ctx->pc = 0x206E78u;
    // 0x206e78: 0x1000000c
    ctx->pc = 0x206E78u;
    {
        const bool branch_taken_0x206e78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206E7Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x206e78) {
            ctx->pc = 0x206EACu;
            goto label_206eac;
        }
    }
    ctx->pc = 0x206E80u;
label_206e80:
    // 0x206e80: 0x3c030031
    ctx->pc = 0x206e80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x206e84: 0x24631b90
    ctx->pc = 0x206e84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x206e88: 0x2402003c
    ctx->pc = 0x206e88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x206e8c: 0xa21018
    ctx->pc = 0x206e8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x206e90: 0x621821
    ctx->pc = 0x206e90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206e94: 0x8c620008
    ctx->pc = 0x206e94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x206e98: 0x821024
    ctx->pc = 0x206e98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206e9c: 0x14400002
    ctx->pc = 0x206E9Cu;
    {
        const bool branch_taken_0x206e9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x206EA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x206e9c) {
            ctx->pc = 0x206EA8u;
            goto label_206ea8;
        }
    }
    ctx->pc = 0x206EA4u;
    // 0x206ea4: 0x102d
    ctx->pc = 0x206ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206ea8:
    // 0x206ea8: 0xdfbf0000
    ctx->pc = 0x206ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206eac:
    // 0x206eac: 0x3e00008
    ctx->pc = 0x206EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206EB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206E80u: goto label_206e80;
            case 0x206EA8u: goto label_206ea8;
            case 0x206EACu: goto label_206eac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206EB4u;
}
