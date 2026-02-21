#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cstdio>

// Function: MBBlitOrder
// Address: 0x2c2e80 - 0x2c2ef4
void MBBlitOrder_0x2c2e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    static int _call = 0;
    ++_call;

    uint32_t arg_a0 = GPR_U32(ctx, 4);
    uint32_t arg_a1 = GPR_U32(ctx, 5);
    uint32_t arg_ra = GPR_U32(ctx, 31);

    printf("[MBBlitOrder #%d] ENTRY a0=0x%x a1=0x%x ra=0x%x\n", _call, arg_a0, arg_a1, arg_ra);

    if (arg_a0 == arg_a1) {
        printf("[MBBlitOrder #%d] *** BUG: a0 == a1 (0x%x)! This WILL create a self-loop. Caller ra=0x%x ***\n",
               _call, arg_a0, arg_ra);
    }

    ctx->pc = 0x2c2e80u;

    // 0x2c2e80: 0x8c830034
    ctx->pc = 0x2c2e80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2c2e84: 0x8ca20034
    ctx->pc = 0x2c2e84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2c2e88: 0x50620004
    ctx->pc = 0x2C2E88u;
    {
        const bool branch_taken_0x2c2e88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2c2e88) {
            ctx->pc = 0x2C2E8Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 44)));
            ctx->pc = 0x2C2E9Cu;
            goto label_2c2e9c;
        }
    }
    ctx->pc = 0x2C2E90u;
    // 0x2c2e90: 0x3c04003b
    ctx->pc = 0x2c2e90u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c2e94: 0x80b492e
    ctx->pc = 0x2C2E94u;
    ctx->pc = 0x2C2E98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28256));
    ctx->pc = 0x2D24B8u;
    Errorf_0x2d24b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2C2E9Cu;
label_2c2e9c:
    // 0x2c2e9c: 0x50600009
    ctx->pc = 0x2C2E9Cu;
    {
        const bool branch_taken_0x2c2e9c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c2e9c) {
            ctx->pc = 0x2C2EA0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 52)));
            ctx->pc = 0x2C2EC4u;
            goto label_2c2ec4;
        }
    }
    ctx->pc = 0x2C2EA4u;
    // 0x2c2ea4: 0x8ca20030
    ctx->pc = 0x2c2ea4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2c2ea8: 0xac620030  *(prev+48) = a1->next  (unlink a1 from list)
    ctx->pc = 0x2c2ea8u;
    printf("[MBBlitOrder #%d] @2c2ea8 WRITE *(0x%x+48) = 0x%x  (prev->next = a1->next)\n",
           _call, GPR_U32(ctx, 3), GPR_U32(ctx, 2));
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x2c2eac: 0x8ca30030
    ctx->pc = 0x2c2eacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2c2eb0: 0x5060000a
    ctx->pc = 0x2C2EB0u;
    {
        const bool branch_taken_0x2c2eb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c2eb0) {
            ctx->pc = 0x2C2EB4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->pc = 0x2C2EDCu;
            goto label_2c2edc;
        }
    }
    ctx->pc = 0x2C2EB8u;
    // 0x2c2eb8: 0x8ca2002c
    ctx->pc = 0x2c2eb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2c2ebc: 0x10000006
    ctx->pc = 0x2C2EBCu;
    {
        const bool branch_taken_0x2c2ebc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C2EC0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x2c2ebc) {
            ctx->pc = 0x2C2ED8u;
            goto label_2c2ed8;
        }
    }
    ctx->pc = 0x2C2EC4u;
label_2c2ec4:
    // 0x2c2ec4: 0x8ca20030
    ctx->pc = 0x2c2ec4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2c2ec8: 0xac620070
    ctx->pc = 0x2c2ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
    // 0x2c2ecc: 0x8ca20030
    ctx->pc = 0x2c2eccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2c2ed0: 0x54400001
    ctx->pc = 0x2C2ED0u;
    {
        const bool branch_taken_0x2c2ed0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c2ed0) {
            ctx->pc = 0x2C2ED4u;
            WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
            ctx->pc = 0x2C2ED8u;
            goto label_2c2ed8;
        }
    }
    ctx->pc = 0x2C2ED8u;
label_2c2ed8:
    // 0x2c2ed8: 0x8c820030
    ctx->pc = 0x2c2ed8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2c2edc:
    // 0x2c2edc: 0x10400002  *(a1+48) = a0->next  (insert: a1->next = old a0->next)
    ctx->pc = 0x2C2EDCu;
    {
        const bool branch_taken_0x2c2edc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C2EE0u;
        printf("[MBBlitOrder #%d] @2c2ee0 WRITE *(0x%x+48) = 0x%x  (a1->next = old a0->next)\n",
               _call, GPR_U32(ctx, 5), GPR_U32(ctx, 2));
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
        if (branch_taken_0x2c2edc) {
            ctx->pc = 0x2C2EE8u;
            goto label_2c2ee8;
        }
    }
    ctx->pc = 0x2C2EE4u;
    // 0x2c2ee4: 0xac45002c
    ctx->pc = 0x2c2ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 5));
label_2c2ee8:
    // 0x2c2ee8: 0xaca4002c  *(a1+44) = a0  (a1->prev = a0)
    ctx->pc = 0x2c2ee8u;
    printf("[MBBlitOrder #%d] @2c2ee8 WRITE *(0x%x+44) = 0x%x  (a1->prev = a0)%s\n",
           _call, GPR_U32(ctx, 5), GPR_U32(ctx, 4),
           (GPR_U32(ctx, 5) == GPR_U32(ctx, 4)) ? " *** SELF-REF! ***" : "");
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 4));
    // 0x2c2eec: 0x3e00008  jr ra; delay slot: *(a0+48) = a1  (a0->next = a1)
    ctx->pc = 0x2C2EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2EF0u;
        printf("[MBBlitOrder #%d] @2c2ef0 WRITE *(0x%x+48) = 0x%x  (a0->next = a1)%s\n",
               _call, GPR_U32(ctx, 4), GPR_U32(ctx, 5),
               (GPR_U32(ctx, 4) == GPR_U32(ctx, 5)) ? " *** SELF-LOOP! ***" : "");
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C2E9Cu: goto label_2c2e9c;
            case 0x2C2EC4u: goto label_2c2ec4;
            case 0x2C2ED8u: goto label_2c2ed8;
            case 0x2C2EDCu: goto label_2c2edc;
            case 0x2C2EE8u: goto label_2c2ee8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C2EF4u;
}
