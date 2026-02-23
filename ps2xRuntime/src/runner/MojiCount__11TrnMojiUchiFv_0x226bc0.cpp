#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MojiCount__11TrnMojiUchiFv
// Address: 0x226bc0 - 0x226c98
void MojiCount__11TrnMojiUchiFv_0x226bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MojiCount__11TrnMojiUchiFv");


    ctx->pc = 0x226bc0u;

    // 0x226bc0: 0x83838ea8
    ctx->pc = 0x226bc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938280)));
    // 0x226bc4: 0x14600003
    ctx->pc = 0x226BC4u;
    {
        const bool branch_taken_0x226bc4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x226BC8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x226bc4) {
            ctx->pc = 0x226BD4u;
            goto label_226bd4;
        }
    }
    ctx->pc = 0x226BCCu;
    // 0x226bcc: 0xaf808ea4
    ctx->pc = 0x226bccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938276), GPR_U32(ctx, 0));
    // 0x226bd0: 0xa3838ea8
    ctx->pc = 0x226bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938280), (uint8_t)GPR_U32(ctx, 3));
label_226bd4:
    // 0x226bd4: 0x8c850010
    ctx->pc = 0x226bd4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x226bd8: 0x14a0001f
    ctx->pc = 0x226BD8u;
    {
        const bool branch_taken_0x226bd8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x226BDCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x226bd8) {
            ctx->pc = 0x226C58u;
            goto label_226c58;
        }
    }
    ctx->pc = 0x226BE0u;
    // 0x226be0: 0x3c010050
    ctx->pc = 0x226be0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x226be4: 0x8023fec5
    ctx->pc = 0x226be4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x226be8: 0x1460000e
    ctx->pc = 0x226BE8u;
    {
        const bool branch_taken_0x226be8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x226be8) {
            ctx->pc = 0x226C24u;
            goto label_226c24;
        }
    }
    ctx->pc = 0x226BF0u;
    // 0x226bf0: 0x8f858ea4
    ctx->pc = 0x226bf0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938276)));
    // 0x226bf4: 0x24030006
    ctx->pc = 0x226bf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x226bf8: 0xa3001a
    ctx->pc = 0x226bf8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x226bfc: 0x0
    ctx->pc = 0x226bfcu;
    // NOP
    // 0x226c00: 0x0
    ctx->pc = 0x226c00u;
    // NOP
    // 0x226c04: 0x1810
    ctx->pc = 0x226c04u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x226c08: 0x14600019
    ctx->pc = 0x226C08u;
    {
        const bool branch_taken_0x226c08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x226c08) {
            ctx->pc = 0x226C70u;
            goto label_226c70;
        }
    }
    ctx->pc = 0x226C10u;
    // 0x226c10: 0x8c83000c
    ctx->pc = 0x226c10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x226c14: 0x24630001
    ctx->pc = 0x226c14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x226c18: 0xac83000c
    ctx->pc = 0x226c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x226c1c: 0x10000014
    ctx->pc = 0x226C1Cu;
    {
        const bool branch_taken_0x226c1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226C20u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938276), GPR_U32(ctx, 0));
        if (branch_taken_0x226c1c) {
            ctx->pc = 0x226C70u;
            goto label_226c70;
        }
    }
    ctx->pc = 0x226C24u;
label_226c24:
    // 0x226c24: 0x8f858ea4
    ctx->pc = 0x226c24u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938276)));
    // 0x226c28: 0x4a10004
    ctx->pc = 0x226C28u;
    {
        const bool branch_taken_0x226c28 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x226C2Cu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x226c28) {
            ctx->pc = 0x226C3Cu;
            goto label_226c3c;
        }
    }
    ctx->pc = 0x226C30u;
    // 0x226c30: 0x10600002
    ctx->pc = 0x226C30u;
    {
        const bool branch_taken_0x226c30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x226c30) {
            ctx->pc = 0x226C3Cu;
            goto label_226c3c;
        }
    }
    ctx->pc = 0x226C38u;
    // 0x226c38: 0x2463fffe
    ctx->pc = 0x226c38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967294));
label_226c3c:
    // 0x226c3c: 0x1460000c
    ctx->pc = 0x226C3Cu;
    {
        const bool branch_taken_0x226c3c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x226c3c) {
            ctx->pc = 0x226C70u;
            goto label_226c70;
        }
    }
    ctx->pc = 0x226C44u;
    // 0x226c44: 0x8c83000c
    ctx->pc = 0x226c44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x226c48: 0x24630001
    ctx->pc = 0x226c48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x226c4c: 0xac83000c
    ctx->pc = 0x226c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x226c50: 0x10000007
    ctx->pc = 0x226C50u;
    {
        const bool branch_taken_0x226c50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226C54u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938276), GPR_U32(ctx, 0));
        if (branch_taken_0x226c50) {
            ctx->pc = 0x226C70u;
            goto label_226c70;
        }
    }
    ctx->pc = 0x226C58u;
label_226c58:
    // 0x226c58: 0x14a30005
    ctx->pc = 0x226C58u;
    {
        const bool branch_taken_0x226c58 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x226c58) {
            ctx->pc = 0x226C70u;
            goto label_226c70;
        }
    }
    ctx->pc = 0x226C60u;
    // 0x226c60: 0x8c83000c
    ctx->pc = 0x226c60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x226c64: 0x24630001
    ctx->pc = 0x226c64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x226c68: 0xac83000c
    ctx->pc = 0x226c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x226c6c: 0xaf808ea4
    ctx->pc = 0x226c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938276), GPR_U32(ctx, 0));
label_226c70:
    // 0x226c70: 0x8f838ea4
    ctx->pc = 0x226c70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938276)));
    // 0x226c74: 0x24630001
    ctx->pc = 0x226c74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x226c78: 0xaf838ea4
    ctx->pc = 0x226c78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938276), GPR_U32(ctx, 3));
    // 0x226c7c: 0x8c83000c
    ctx->pc = 0x226c7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x226c80: 0x286103e9
    ctx->pc = 0x226c80u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 1001));
    // 0x226c84: 0x14200002
    ctx->pc = 0x226C84u;
    {
        const bool branch_taken_0x226c84 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x226C88u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x226c84) {
            ctx->pc = 0x226C90u;
            goto label_226c90;
        }
    }
    ctx->pc = 0x226C8Cu;
    // 0x226c8c: 0xa083101c
    ctx->pc = 0x226c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4124), (uint8_t)GPR_U32(ctx, 3));
label_226c90:
    // 0x226c90: 0x3e00008
    ctx->pc = 0x226C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226BD4u: goto label_226bd4;
            case 0x226C24u: goto label_226c24;
            case 0x226C3Cu: goto label_226c3c;
            case 0x226C58u: goto label_226c58;
            case 0x226C70u: goto label_226c70;
            case 0x226C90u: goto label_226c90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226C98u;
}
