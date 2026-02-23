#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: get_reg_addr
// Address: 0x149218 - 0x1492a0
void get_reg_addr_0x149218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("get_reg_addr");


    ctx->pc = 0x149218u;

    // 0x149218: 0x27bdfff0
    ctx->pc = 0x149218u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14921c: 0x80302d
    ctx->pc = 0x14921cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149220: 0xffbf0000
    ctx->pc = 0x149220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149224: 0x24a8029c
    ctx->pc = 0x149224u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 5), 668));
    // 0x149228: 0x1061821
    ctx->pc = 0x149228u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x14922c: 0x24020002
    ctx->pc = 0x14922cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x149230: 0x80640000
    ctx->pc = 0x149230u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149234: 0x1482000c
    ctx->pc = 0x149234u;
    {
        const bool branch_taken_0x149234 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x149238u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        if (branch_taken_0x149234) {
            ctx->pc = 0x149268u;
            goto label_149268;
        }
    }
    ctx->pc = 0x14923Cu;
    // 0x14923c: 0x24a70018
    ctx->pc = 0x14923cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 5), 24));
    // 0x149240: 0x610c0
    ctx->pc = 0x149240u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 3));
    // 0x149244: 0x24040002
    ctx->pc = 0x149244u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_149248:
    // 0x149248: 0xe21021
    ctx->pc = 0x149248u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x14924c: 0xdc430000
    ctx->pc = 0x14924cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149250: 0x3303c
    ctx->pc = 0x149250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x149254: 0x6303f
    ctx->pc = 0x149254u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x149258: 0x1061021
    ctx->pc = 0x149258u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x14925c: 0x80430000
    ctx->pc = 0x14925cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149260: 0x5064fff9
    ctx->pc = 0x149260u;
    {
        const bool branch_taken_0x149260 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x149260) {
            ctx->pc = 0x149264u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 3));
            ctx->pc = 0x149248u;
            goto label_149248;
        }
    }
    ctx->pc = 0x149268u;
label_149268:
    // 0x149268: 0x24040001
    ctx->pc = 0x149268u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x14926c: 0x80430000
    ctx->pc = 0x14926cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149270: 0x14640006
    ctx->pc = 0x149270u;
    {
        const bool branch_taken_0x149270 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x149274u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 3));
        if (branch_taken_0x149270) {
            ctx->pc = 0x14928Cu;
            goto label_14928c;
        }
    }
    ctx->pc = 0x149278u;
    // 0x149278: 0x8ca40000
    ctx->pc = 0x149278u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14927c: 0xa31821
    ctx->pc = 0x14927cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x149280: 0x8c620018
    ctx->pc = 0x149280u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x149284: 0x10000003
    ctx->pc = 0x149284u;
    {
        const bool branch_taken_0x149284 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x149288u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x149284) {
            ctx->pc = 0x149294u;
            goto label_149294;
        }
    }
    ctx->pc = 0x14928Cu;
label_14928c:
    // 0x14928c: 0xc050034
    ctx->pc = 0x14928Cu;
    SET_GPR_U32(ctx, 31, 0x149294u);
    ctx->pc = 0x1400D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        abort_0x1400d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149294u; }
        else if (ctx->pc != 0x149294u) { ctx->pc = 0x149294u; }
    }
    if (ctx->pc != 0x149294u) { return; }
    ctx->pc = 0x149294u;
label_149294:
    // 0x149294: 0xdfbf0000
    ctx->pc = 0x149294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149298: 0x3e00008
    ctx->pc = 0x149298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14929Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x149248u: goto label_149248;
            case 0x149268u: goto label_149268;
            case 0x14928Cu: goto label_14928c;
            case 0x149294u: goto label_149294;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1492A0u;
}
