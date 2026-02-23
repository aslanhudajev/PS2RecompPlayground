#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: HFileAddPageG__Fii
// Address: 0x1d3a10 - 0x1d3aac
void HFileAddPageG__Fii_0x1d3a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("HFileAddPageG__Fii");


    ctx->pc = 0x1d3a10u;

    // 0x1d3a10: 0x24020004
    ctx->pc = 0x1d3a10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d3a14: 0x10820017
    ctx->pc = 0x1D3A14u;
    {
        const bool branch_taken_0x1d3a14 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D3A18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1d3a14) {
            ctx->pc = 0x1D3A74u;
            goto label_1d3a74;
        }
    }
    ctx->pc = 0x1D3A1Cu;
    // 0x1d3a1c: 0x24020003
    ctx->pc = 0x1d3a1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d3a20: 0x10820011
    ctx->pc = 0x1D3A20u;
    {
        const bool branch_taken_0x1d3a20 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D3A24u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1d3a20) {
            ctx->pc = 0x1D3A68u;
            goto label_1d3a68;
        }
    }
    ctx->pc = 0x1D3A28u;
    // 0x1d3a28: 0x24020001
    ctx->pc = 0x1d3a28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3a2c: 0x1082000c
    ctx->pc = 0x1D3A2Cu;
    {
        const bool branch_taken_0x1d3a2c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D3A30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1d3a2c) {
            ctx->pc = 0x1D3A60u;
            goto label_1d3a60;
        }
    }
    ctx->pc = 0x1D3A34u;
    // 0x1d3a34: 0x24020002
    ctx->pc = 0x1d3a34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3a38: 0x10820007
    ctx->pc = 0x1D3A38u;
    {
        const bool branch_taken_0x1d3a38 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D3A3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1d3a38) {
            ctx->pc = 0x1D3A58u;
            goto label_1d3a58;
        }
    }
    ctx->pc = 0x1D3A40u;
    // 0x1d3a40: 0x10800003
    ctx->pc = 0x1D3A40u;
    {
        const bool branch_taken_0x1d3a40 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3A44u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1d3a40) {
            ctx->pc = 0x1D3A50u;
            goto label_1d3a50;
        }
    }
    ctx->pc = 0x1D3A48u;
    // 0x1d3a48: 0x1000000c
    ctx->pc = 0x1D3A48u;
    {
        const bool branch_taken_0x1d3a48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3A4Cu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d3a48) {
            ctx->pc = 0x1D3A7Cu;
            goto label_1d3a7c;
        }
    }
    ctx->pc = 0x1D3A50u;
label_1d3a50:
    // 0x1d3a50: 0x1000000c
    ctx->pc = 0x1D3A50u;
    {
        const bool branch_taken_0x1d3a50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3A54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966592));
        if (branch_taken_0x1d3a50) {
            ctx->pc = 0x1D3A84u;
            goto label_1d3a84;
        }
    }
    ctx->pc = 0x1D3A58u;
label_1d3a58:
    // 0x1d3a58: 0x1000000a
    ctx->pc = 0x1D3A58u;
    {
        const bool branch_taken_0x1d3a58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3A5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966618));
        if (branch_taken_0x1d3a58) {
            ctx->pc = 0x1D3A84u;
            goto label_1d3a84;
        }
    }
    ctx->pc = 0x1D3A60u;
label_1d3a60:
    // 0x1d3a60: 0x10000008
    ctx->pc = 0x1D3A60u;
    {
        const bool branch_taken_0x1d3a60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3A64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966603));
        if (branch_taken_0x1d3a60) {
            ctx->pc = 0x1D3A84u;
            goto label_1d3a84;
        }
    }
    ctx->pc = 0x1D3A68u;
label_1d3a68:
    // 0x1d3a68: 0x2442fd6a
    ctx->pc = 0x1d3a68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966634));
    // 0x1d3a6c: 0x10000005
    ctx->pc = 0x1D3A6Cu;
    {
        const bool branch_taken_0x1d3a6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3A70u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
        if (branch_taken_0x1d3a6c) {
            ctx->pc = 0x1D3A84u;
            goto label_1d3a84;
        }
    }
    ctx->pc = 0x1D3A74u;
label_1d3a74:
    // 0x1d3a74: 0x10000003
    ctx->pc = 0x1D3A74u;
    {
        const bool branch_taken_0x1d3a74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3A78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966686));
        if (branch_taken_0x1d3a74) {
            ctx->pc = 0x1D3A84u;
            goto label_1d3a84;
        }
    }
    ctx->pc = 0x1D3A7Cu;
label_1d3a7c:
    // 0x1d3a7c: 0x10000009
    ctx->pc = 0x1D3A7Cu;
    {
        const bool branch_taken_0x1d3a7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d3a7c) {
            ctx->pc = 0x1D3AA4u;
            goto label_1d3aa4;
        }
    }
    ctx->pc = 0x1D3A84u;
label_1d3a84:
    // 0x1d3a84: 0x452021
    ctx->pc = 0x1d3a84u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d3a88: 0x80830000
    ctx->pc = 0x1d3a88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d3a8c: 0x30620001
    ctx->pc = 0x1d3a8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x1d3a90: 0x14400004
    ctx->pc = 0x1D3A90u;
    {
        const bool branch_taken_0x1d3a90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D3A94u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d3a90) {
            ctx->pc = 0x1D3AA4u;
            goto label_1d3aa4;
        }
    }
    ctx->pc = 0x1D3A98u;
    // 0x1d3a98: 0x34620001
    ctx->pc = 0x1d3a98u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 1));
    // 0x1d3a9c: 0xa0820000
    ctx->pc = 0x1d3a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d3aa0: 0x24020001
    ctx->pc = 0x1d3aa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1d3aa4:
    // 0x1d3aa4: 0x3e00008
    ctx->pc = 0x1D3AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3A50u: goto label_1d3a50;
            case 0x1D3A58u: goto label_1d3a58;
            case 0x1D3A60u: goto label_1d3a60;
            case 0x1D3A68u: goto label_1d3a68;
            case 0x1D3A74u: goto label_1d3a74;
            case 0x1D3A7Cu: goto label_1d3a7c;
            case 0x1D3A84u: goto label_1d3a84;
            case 0x1D3AA4u: goto label_1d3aa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3AACu;
}
