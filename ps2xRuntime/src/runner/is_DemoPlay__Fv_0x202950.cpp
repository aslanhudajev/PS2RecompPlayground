#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_DemoPlay__Fv
// Address: 0x202950 - 0x2029c0
void is_DemoPlay__Fv_0x202950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_DemoPlay__Fv");


    ctx->pc = 0x202950u;

    // 0x202950: 0x3c010050
    ctx->pc = 0x202950u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x202954: 0x8423e504
    ctx->pc = 0x202954u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x202958: 0x2402000a
    ctx->pc = 0x202958u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20295c: 0x1062000f
    ctx->pc = 0x20295Cu;
    {
        const bool branch_taken_0x20295c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x20295c) {
            ctx->pc = 0x20299Cu;
            goto label_20299c;
        }
    }
    ctx->pc = 0x202964u;
    // 0x202964: 0x2402000f
    ctx->pc = 0x202964u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x202968: 0x1062000a
    ctx->pc = 0x202968u;
    {
        const bool branch_taken_0x202968 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20296Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x202968) {
            ctx->pc = 0x202994u;
            goto label_202994;
        }
    }
    ctx->pc = 0x202970u;
    // 0x202970: 0x24020009
    ctx->pc = 0x202970u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x202974: 0x10620006
    ctx->pc = 0x202974u;
    {
        const bool branch_taken_0x202974 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x202974) {
            ctx->pc = 0x202990u;
            goto label_202990;
        }
    }
    ctx->pc = 0x20297Cu;
    // 0x20297c: 0x2402000e
    ctx->pc = 0x20297cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x202980: 0x10620003
    ctx->pc = 0x202980u;
    {
        const bool branch_taken_0x202980 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x202980) {
            ctx->pc = 0x202990u;
            goto label_202990;
        }
    }
    ctx->pc = 0x202988u;
    // 0x202988: 0x1000000b
    ctx->pc = 0x202988u;
    {
        const bool branch_taken_0x202988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20298Cu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x202988) {
            ctx->pc = 0x2029B8u;
            goto label_2029b8;
        }
    }
    ctx->pc = 0x202990u;
label_202990:
    // 0x202990: 0x24020001
    ctx->pc = 0x202990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_202994:
    // 0x202994: 0x10000008
    ctx->pc = 0x202994u;
    {
        const bool branch_taken_0x202994 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x202994) {
            ctx->pc = 0x2029B8u;
            goto label_2029b8;
        }
    }
    ctx->pc = 0x20299Cu;
label_20299c:
    // 0x20299c: 0x83838b90
    ctx->pc = 0x20299cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937488)));
    // 0x2029a0: 0x24020008
    ctx->pc = 0x2029a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2029a4: 0x14620004
    ctx->pc = 0x2029A4u;
    {
        const bool branch_taken_0x2029a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2029A8u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2029a4) {
            ctx->pc = 0x2029B8u;
            goto label_2029b8;
        }
    }
    ctx->pc = 0x2029ACu;
    // 0x2029ac: 0x10000002
    ctx->pc = 0x2029ACu;
    {
        const bool branch_taken_0x2029ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2029B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2029ac) {
            ctx->pc = 0x2029B8u;
            goto label_2029b8;
        }
    }
    ctx->pc = 0x2029B4u;
    // 0x2029b4: 0x70001628
    ctx->pc = 0x2029b4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2029b8:
    // 0x2029b8: 0x3e00008
    ctx->pc = 0x2029B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202990u: goto label_202990;
            case 0x202994u: goto label_202994;
            case 0x20299Cu: goto label_20299c;
            case 0x2029B8u: goto label_2029b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2029C0u;
}
