#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTRYLANGBANK__13EventCtrlTaskFv
// Address: 0x1e4170 - 0x1e41d0
void ENTRYLANGBANK__13EventCtrlTaskFv_0x1e4170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTRYLANGBANK__13EventCtrlTaskFv");


    ctx->pc = 0x1e4170u;

    // 0x1e4170: 0x27bdffe0
    ctx->pc = 0x1e4170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4174: 0x7fbf0010
    ctx->pc = 0x1e4174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4178: 0x7fb00000
    ctx->pc = 0x1e4178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e417c: 0x70808628
    ctx->pc = 0x1e417cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4180: 0x8c84000c
    ctx->pc = 0x1e4180u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4184: 0x3c010050
    ctx->pc = 0x1e4184u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e4188: 0x8023fec5
    ctx->pc = 0x1e4188u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x1e418c: 0x8c840004
    ctx->pc = 0x1e418cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e4190: 0x31840
    ctx->pc = 0x1e4190u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e4194: 0x831821
    ctx->pc = 0x1e4194u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e4198: 0x94630000
    ctx->pc = 0x1e4198u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e419c: 0x10600005
    ctx->pc = 0x1E419Cu;
    {
        const bool branch_taken_0x1e419c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e419c) {
            ctx->pc = 0x1E41B4u;
            goto label_1e41b4;
        }
    }
    ctx->pc = 0x1E41A4u;
    // 0x1e41a4: 0x3c020051
    ctx->pc = 0x1e41a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e41a8: 0x3065ffff
    ctx->pc = 0x1e41a8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1e41ac: 0xc0864f8
    ctx->pc = 0x1E41ACu;
    SET_GPR_U32(ctx, 31, 0x1E41B4u);
    ctx->pc = 0x1E41B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x2193E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankObj__13EntryDatClassFi_0x2193e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E41B4u; }
        else if (ctx->pc != 0x1E41B4u) { ctx->pc = 0x1E41B4u; }
    }
    if (ctx->pc != 0x1E41B4u) { return; }
    ctx->pc = 0x1E41B4u;
label_1e41b4:
    // 0x1e41b4: 0x8e03000c
    ctx->pc = 0x1e41b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e41b8: 0x24630008
    ctx->pc = 0x1e41b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e41bc: 0xae03000c
    ctx->pc = 0x1e41bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e41c0: 0x7bbf0010
    ctx->pc = 0x1e41c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e41c4: 0x7bb00000
    ctx->pc = 0x1e41c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e41c8: 0x3e00008
    ctx->pc = 0x1E41C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E41CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E41B4u: goto label_1e41b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E41D0u;
}
