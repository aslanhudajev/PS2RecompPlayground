#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJUNI_Reset
// Address: 0x17ccc0 - 0x17cd5c
void SJUNI_Reset_0x17ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJUNI_Reset");


    ctx->pc = 0x17ccc0u;

    // 0x17ccc0: 0x80302d
    ctx->pc = 0x17ccc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ccc4: 0x282d
    ctx->pc = 0x17ccc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ccc8: 0x8cc7000c
    ctx->pc = 0x17ccc8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x17cccc: 0x8cc20010
    ctx->pc = 0x17ccccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x17ccd0: 0x2442ffff
    ctx->pc = 0x17ccd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17ccd4: 0x18400010
    ctx->pc = 0x17CCD4u;
    {
        const bool branch_taken_0x17ccd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17CCD8u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 7));
        if (branch_taken_0x17ccd4) {
            ctx->pc = 0x17CD18u;
            goto label_17cd18;
        }
    }
    ctx->pc = 0x17CCDCu;
    // 0x17ccdc: 0x24c80018
    ctx->pc = 0x17ccdcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 6), 24));
label_17cce0:
    // 0x17cce0: 0x51100
    ctx->pc = 0x17cce0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x17cce4: 0x472021
    ctx->pc = 0x17cce4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x17cce8: 0x24a50001
    ctx->pc = 0x17cce8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x17ccec: 0xac80000c
    ctx->pc = 0x17ccecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x17ccf0: 0x24420010
    ctx->pc = 0x17ccf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x17ccf4: 0xe21021
    ctx->pc = 0x17ccf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x17ccf8: 0xac800008
    ctx->pc = 0x17ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x17ccfc: 0x8cc30010
    ctx->pc = 0x17ccfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x17cd00: 0x2463ffff
    ctx->pc = 0x17cd00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17cd04: 0xa3182a
    ctx->pc = 0x17cd04u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x17cd08: 0x1460fff5
    ctx->pc = 0x17CD08u;
    {
        const bool branch_taken_0x17cd08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17CD0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x17cd08) {
            ctx->pc = 0x17CCE0u;
            goto label_17cce0;
        }
    }
    ctx->pc = 0x17CD10u;
    // 0x17cd10: 0x10000003
    ctx->pc = 0x17CD10u;
    {
        const bool branch_taken_0x17cd10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17CD14u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x17cd10) {
            ctx->pc = 0x17CD20u;
            goto label_17cd20;
        }
    }
    ctx->pc = 0x17CD18u;
label_17cd18:
    // 0x17cd18: 0x24c80018
    ctx->pc = 0x17cd18u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 6), 24));
    // 0x17cd1c: 0x51100
    ctx->pc = 0x17cd1cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_17cd20:
    // 0x17cd20: 0x2504000c
    ctx->pc = 0x17cd20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 8), 12));
    // 0x17cd24: 0x471021
    ctx->pc = 0x17cd24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x17cd28: 0x24050003
    ctx->pc = 0x17cd28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x17cd2c: 0xac40000c
    ctx->pc = 0x17cd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x17cd30: 0xac400000
    ctx->pc = 0x17cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17cd34: 0xac400008
    ctx->pc = 0x17cd34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_17cd38:
    // 0x17cd38: 0xac800000
    ctx->pc = 0x17cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17cd3c: 0x24a5ffff
    ctx->pc = 0x17cd3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x17cd40: 0x2484fffc
    ctx->pc = 0x17cd40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x17cd44: 0x0
    ctx->pc = 0x17cd44u;
    // NOP
    // 0x17cd48: 0x0
    ctx->pc = 0x17cd48u;
    // NOP
    // 0x17cd4c: 0x4a1fffa
    ctx->pc = 0x17CD4Cu;
    {
        const bool branch_taken_0x17cd4c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x17cd4c) {
            ctx->pc = 0x17CD38u;
            goto label_17cd38;
        }
    }
    ctx->pc = 0x17CD54u;
    // 0x17cd54: 0x3e00008
    ctx->pc = 0x17CD54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17CCE0u: goto label_17cce0;
            case 0x17CD18u: goto label_17cd18;
            case 0x17CD20u: goto label_17cd20;
            case 0x17CD38u: goto label_17cd38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17CD5Cu;
}
