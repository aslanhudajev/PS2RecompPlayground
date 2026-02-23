#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: exec__13PrePlayerTaskFv
// Address: 0x213760 - 0x2137e0
void exec__13PrePlayerTaskFv_0x213760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("exec__13PrePlayerTaskFv");


    ctx->pc = 0x213760u;

    // 0x213760: 0x8f868c48
    ctx->pc = 0x213760u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x213764: 0x24030001
    ctx->pc = 0x213764u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x213768: 0x8cc50004
    ctx->pc = 0x213768u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21376c: 0x52040
    ctx->pc = 0x21376cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x213770: 0x852021
    ctx->pc = 0x213770u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x213774: 0x42080
    ctx->pc = 0x213774u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x213778: 0x852021
    ctx->pc = 0x213778u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21377c: 0x42100
    ctx->pc = 0x21377cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x213780: 0x862021
    ctx->pc = 0x213780u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x213784: 0x808400d2
    ctx->pc = 0x213784u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 210)));
    // 0x213788: 0x14830010
    ctx->pc = 0x213788u;
    {
        const bool branch_taken_0x213788 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x213788) {
            ctx->pc = 0x2137CCu;
            goto label_2137cc;
        }
    }
    ctx->pc = 0x213790u;
    // 0x213790: 0x83848ba8
    ctx->pc = 0x213790u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x213794: 0x24030007
    ctx->pc = 0x213794u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x213798: 0x1083000c
    ctx->pc = 0x213798u;
    {
        const bool branch_taken_0x213798 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x21379Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x213798) {
            ctx->pc = 0x2137CCu;
            goto label_2137cc;
        }
    }
    ctx->pc = 0x2137A0u;
    // 0x2137a0: 0x8424e504
    ctx->pc = 0x2137a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x2137a4: 0x24030009
    ctx->pc = 0x2137a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x2137a8: 0x10830008
    ctx->pc = 0x2137A8u;
    {
        const bool branch_taken_0x2137a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x2137a8) {
            ctx->pc = 0x2137CCu;
            goto label_2137cc;
        }
    }
    ctx->pc = 0x2137B0u;
    // 0x2137b0: 0x8f848cb0
    ctx->pc = 0x2137b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x2137b4: 0x30830024
    ctx->pc = 0x2137b4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 36));
    // 0x2137b8: 0x14600004
    ctx->pc = 0x2137B8u;
    {
        const bool branch_taken_0x2137b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2137BCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2137b8) {
            ctx->pc = 0x2137CCu;
            goto label_2137cc;
        }
    }
    ctx->pc = 0x2137C0u;
    // 0x2137c0: 0x831824
    ctx->pc = 0x2137c0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2137c4: 0x10000004
    ctx->pc = 0x2137C4u;
    {
        const bool branch_taken_0x2137c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2137C8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 3));
        if (branch_taken_0x2137c4) {
            ctx->pc = 0x2137D8u;
            goto label_2137d8;
        }
    }
    ctx->pc = 0x2137CCu;
label_2137cc:
    // 0x2137cc: 0x8f838cb0
    ctx->pc = 0x2137ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x2137d0: 0x34630001
    ctx->pc = 0x2137d0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1));
    // 0x2137d4: 0xaf838cb0
    ctx->pc = 0x2137d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 3));
label_2137d8:
    // 0x2137d8: 0x3e00008
    ctx->pc = 0x2137D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2137CCu: goto label_2137cc;
            case 0x2137D8u: goto label_2137d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2137E0u;
}
