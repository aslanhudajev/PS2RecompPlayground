#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterColnodeUpdateMoves
// Address: 0x292ed0 - 0x292f78
void CritterColnodeUpdateMoves_0x292ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x292ed0u;

    // 0x292ed0: 0x8c8200bc
    ctx->pc = 0x292ed0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x292ed4: 0x18400026
    ctx->pc = 0x292ED4u;
    {
        const bool branch_taken_0x292ed4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x292ED8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292ed4) {
            ctx->pc = 0x292F70u;
            goto label_292f70;
        }
    }
    ctx->pc = 0x292EDCu;
    // 0x292edc: 0x240a0028
    ctx->pc = 0x292edcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 40));
    // 0x292ee0: 0x8c8200c0
    ctx->pc = 0x292ee0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x292ee4: 0x0
    ctx->pc = 0x292ee4u;
    // NOP
label_292ee8:
    // 0x292ee8: 0xea3018
    ctx->pc = 0x292ee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x292eec: 0xc21821
    ctx->pc = 0x292eecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x292ef0: 0x8c620000
    ctx->pc = 0x292ef0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292ef4: 0x5445001a
    ctx->pc = 0x292EF4u;
    {
        const bool branch_taken_0x292ef4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x292ef4) {
            ctx->pc = 0x292EF8u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x292F60u;
            goto label_292f60;
        }
    }
    ctx->pc = 0x292EFCu;
    // 0x292efc: 0xac600020
    ctx->pc = 0x292efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x292f00: 0x8c8200c0
    ctx->pc = 0x292f00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x292f04: 0xc21021
    ctx->pc = 0x292f04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x292f08: 0xac400000
    ctx->pc = 0x292f08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x292f0c: 0x8c820004
    ctx->pc = 0x292f0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x292f10: 0x40182d
    ctx->pc = 0x292f10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f14: 0x84420110
    ctx->pc = 0x292f14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x292f18: 0x18400010
    ctx->pc = 0x292F18u;
    {
        const bool branch_taken_0x292f18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x292F1Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292f18) {
            ctx->pc = 0x292F5Cu;
            goto label_292f5c;
        }
    }
    ctx->pc = 0x292F20u;
    // 0x292f20: 0x24090090
    ctx->pc = 0x292f20u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 144));
    // 0x292f24: 0x2408ffff
    ctx->pc = 0x292f24u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x292f28: 0x8c630124
    ctx->pc = 0x292f28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x292f2c: 0x0
    ctx->pc = 0x292f2cu;
    // NOP
label_292f30:
    // 0x292f30: 0xc91018
    ctx->pc = 0x292f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x292f34: 0x431821
    ctx->pc = 0x292f34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292f38: 0x8462000e
    ctx->pc = 0x292f38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x292f3c: 0x50470001
    ctx->pc = 0x292F3Cu;
    {
        const bool branch_taken_0x292f3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 7));
        if (branch_taken_0x292f3c) {
            ctx->pc = 0x292F40u;
            WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 8));
            ctx->pc = 0x292F44u;
            goto label_292f44;
        }
    }
    ctx->pc = 0x292F44u;
label_292f44:
    // 0x292f44: 0x24c60001
    ctx->pc = 0x292f44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x292f48: 0x8c830004
    ctx->pc = 0x292f48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x292f4c: 0x84620110
    ctx->pc = 0x292f4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x292f50: 0xc2102a
    ctx->pc = 0x292f50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x292f54: 0x5440fff6
    ctx->pc = 0x292F54u;
    {
        const bool branch_taken_0x292f54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x292f54) {
            ctx->pc = 0x292F58u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 292)));
            ctx->pc = 0x292F30u;
            goto label_292f30;
        }
    }
    ctx->pc = 0x292F5Cu;
label_292f5c:
    // 0x292f5c: 0x24e70001
    ctx->pc = 0x292f5cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_292f60:
    // 0x292f60: 0x8c8200bc
    ctx->pc = 0x292f60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x292f64: 0xe2102a
    ctx->pc = 0x292f64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
    // 0x292f68: 0x5440ffdf
    ctx->pc = 0x292F68u;
    {
        const bool branch_taken_0x292f68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x292f68) {
            ctx->pc = 0x292F6Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 192)));
            ctx->pc = 0x292EE8u;
            goto label_292ee8;
        }
    }
    ctx->pc = 0x292F70u;
label_292f70:
    // 0x292f70: 0x3e00008
    ctx->pc = 0x292F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292EE8u: goto label_292ee8;
            case 0x292F30u: goto label_292f30;
            case 0x292F44u: goto label_292f44;
            case 0x292F5Cu: goto label_292f5c;
            case 0x292F60u: goto label_292f60;
            case 0x292F70u: goto label_292f70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292F78u;
}
