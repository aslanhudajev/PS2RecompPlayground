#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: swap_pre_idct_tbl
// Address: 0x17ed80 - 0x17eddc
void swap_pre_idct_tbl_0x17ed80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("swap_pre_idct_tbl");


    ctx->pc = 0x17ed80u;

    // 0x17ed80: 0x27bdff80
    ctx->pc = 0x17ed80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17ed84: 0x2405003f
    ctx->pc = 0x17ed84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 63));
    // 0x17ed88: 0x3a0182d
    ctx->pc = 0x17ed88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed8c: 0x0
    ctx->pc = 0x17ed8cu;
    // NOP
label_17ed90:
    // 0x17ed90: 0x94820000
    ctx->pc = 0x17ed90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17ed94: 0x24a5ffff
    ctx->pc = 0x17ed94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x17ed98: 0x24840002
    ctx->pc = 0x17ed98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x17ed9c: 0xa4620000
    ctx->pc = 0x17ed9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17eda0: 0x24630002
    ctx->pc = 0x17eda0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x17eda4: 0x4a1fffa
    ctx->pc = 0x17EDA4u;
    {
        const bool branch_taken_0x17eda4 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x17eda4) {
            ctx->pc = 0x17ED90u;
            goto label_17ed90;
        }
    }
    ctx->pc = 0x17EDACu;
    // 0x17edac: 0x3a0182d
    ctx->pc = 0x17edacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17edb0: 0x2405003f
    ctx->pc = 0x17edb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 63));
    // 0x17edb4: 0x0
    ctx->pc = 0x17edb4u;
    // NOP
label_17edb8:
    // 0x17edb8: 0x94620000
    ctx->pc = 0x17edb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17edbc: 0x2484fffe
    ctx->pc = 0x17edbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x17edc0: 0x24630002
    ctx->pc = 0x17edc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x17edc4: 0x24a5ffff
    ctx->pc = 0x17edc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x17edc8: 0xa4820000
    ctx->pc = 0x17edc8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17edcc: 0x4a1fffa
    ctx->pc = 0x17EDCCu;
    {
        const bool branch_taken_0x17edcc = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x17edcc) {
            ctx->pc = 0x17EDB8u;
            goto label_17edb8;
        }
    }
    ctx->pc = 0x17EDD4u;
    // 0x17edd4: 0x3e00008
    ctx->pc = 0x17EDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EDD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17ED90u: goto label_17ed90;
            case 0x17EDB8u: goto label_17edb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17EDDCu;
}
