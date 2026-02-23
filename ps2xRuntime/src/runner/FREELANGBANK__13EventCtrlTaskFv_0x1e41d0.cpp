#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FREELANGBANK__13EventCtrlTaskFv
// Address: 0x1e41d0 - 0x1e4230
void FREELANGBANK__13EventCtrlTaskFv_0x1e41d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FREELANGBANK__13EventCtrlTaskFv");


    ctx->pc = 0x1e41d0u;

    // 0x1e41d0: 0x27bdffe0
    ctx->pc = 0x1e41d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e41d4: 0x7fbf0010
    ctx->pc = 0x1e41d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e41d8: 0x7fb00000
    ctx->pc = 0x1e41d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e41dc: 0x70808628
    ctx->pc = 0x1e41dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e41e0: 0x8c84000c
    ctx->pc = 0x1e41e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e41e4: 0x3c010050
    ctx->pc = 0x1e41e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e41e8: 0x8023fec5
    ctx->pc = 0x1e41e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x1e41ec: 0x8c840004
    ctx->pc = 0x1e41ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e41f0: 0x31840
    ctx->pc = 0x1e41f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e41f4: 0x831821
    ctx->pc = 0x1e41f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e41f8: 0x94630000
    ctx->pc = 0x1e41f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e41fc: 0x10600005
    ctx->pc = 0x1E41FCu;
    {
        const bool branch_taken_0x1e41fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e41fc) {
            ctx->pc = 0x1E4214u;
            goto label_1e4214;
        }
    }
    ctx->pc = 0x1E4204u;
    // 0x1e4204: 0x3c020051
    ctx->pc = 0x1e4204u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e4208: 0x3065ffff
    ctx->pc = 0x1e4208u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1e420c: 0xc086518
    ctx->pc = 0x1E420Cu;
    SET_GPR_U32(ctx, 31, 0x1E4214u);
    ctx->pc = 0x1E4210u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219460u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeBankObj__13EntryDatClassFi_0x219460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4214u; }
        else if (ctx->pc != 0x1E4214u) { ctx->pc = 0x1E4214u; }
    }
    if (ctx->pc != 0x1E4214u) { return; }
    ctx->pc = 0x1E4214u;
label_1e4214:
    // 0x1e4214: 0x8e03000c
    ctx->pc = 0x1e4214u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4218: 0x24630008
    ctx->pc = 0x1e4218u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e421c: 0xae03000c
    ctx->pc = 0x1e421cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4220: 0x7bbf0010
    ctx->pc = 0x1e4220u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4224: 0x7bb00000
    ctx->pc = 0x1e4224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4228: 0x3e00008
    ctx->pc = 0x1E4228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E422Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4214u: goto label_1e4214;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E4230u;
}
