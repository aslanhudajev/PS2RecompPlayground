#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _decode_motion_vector
// Address: 0x123698 - 0x123720
void _decode_motion_vector_0x123698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123698u;

    // 0x123698: 0x80502d
    ctx->pc = 0x123698u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12369c: 0x24020010
    ctx->pc = 0x12369cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1236a0: 0x8d440000
    ctx->pc = 0x1236a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1236a4: 0xa24804
    ctx->pc = 0x1236a4u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1236a8: 0x41843
    ctx->pc = 0x1236a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1236ac: 0x18c0000c
    ctx->pc = 0x1236ACu;
    {
        const bool branch_taken_0x1236ac = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1236B0u;
        if (GPR_U32(ctx, 8) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
        if (branch_taken_0x1236ac) {
            ctx->pc = 0x1236E0u;
            goto label_1236e0;
        }
    }
    ctx->pc = 0x1236B4u;
    // 0x1236b4: 0x24c2ffff
    ctx->pc = 0x1236b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1236b8: 0x24840001
    ctx->pc = 0x1236b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1236bc: 0xa21004
    ctx->pc = 0x1236bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1236c0: 0x471021
    ctx->pc = 0x1236c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1236c4: 0x822021
    ctx->pc = 0x1236c4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1236c8: 0x89182a
    ctx->pc = 0x1236c8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 9)));
    // 0x1236cc: 0x14600011
    ctx->pc = 0x1236CCu;
    {
        const bool branch_taken_0x1236cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1236D0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1236cc) {
            ctx->pc = 0x123714u;
            goto label_123714;
        }
    }
    ctx->pc = 0x1236D4u;
    // 0x1236d4: 0x91040
    ctx->pc = 0x1236d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 1));
    // 0x1236d8: 0x1000000d
    ctx->pc = 0x1236D8u;
    {
        const bool branch_taken_0x1236d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1236DCu;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x1236d8) {
            ctx->pc = 0x123710u;
            goto label_123710;
        }
    }
    ctx->pc = 0x1236E0u;
label_1236e0:
    // 0x1236e0: 0x4c1000c
    ctx->pc = 0x1236E0u;
    {
        const bool branch_taken_0x1236e0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1236E4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1236e0) {
            ctx->pc = 0x123714u;
            goto label_123714;
        }
    }
    ctx->pc = 0x1236E8u;
    // 0x1236e8: 0x61027
    ctx->pc = 0x1236e8u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x1236ec: 0x2484ffff
    ctx->pc = 0x1236ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1236f0: 0xa21004
    ctx->pc = 0x1236f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1236f4: 0x91823
    ctx->pc = 0x1236f4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x1236f8: 0x471021
    ctx->pc = 0x1236f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1236fc: 0x822023
    ctx->pc = 0x1236fcu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x123700: 0x83182a
    ctx->pc = 0x123700u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x123704: 0x10600002
    ctx->pc = 0x123704u;
    {
        const bool branch_taken_0x123704 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x123708u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x123704) {
            ctx->pc = 0x123710u;
            goto label_123710;
        }
    }
    ctx->pc = 0x12370Cu;
    // 0x12370c: 0x822021
    ctx->pc = 0x12370cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_123710:
    // 0x123710: 0x41040
    ctx->pc = 0x123710u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
label_123714:
    // 0x123714: 0x88100a
    ctx->pc = 0x123714u;
    if (GPR_U32(ctx, 8) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x123718: 0x3e00008
    ctx->pc = 0x123718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12371Cu;
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1236E0u: goto label_1236e0;
            case 0x123710u: goto label_123710;
            case 0x123714u: goto label_123714;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123720u;
}
