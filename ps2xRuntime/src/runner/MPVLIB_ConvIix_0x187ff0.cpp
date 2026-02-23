#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVLIB_ConvIix
// Address: 0x187ff0 - 0x18800c
void MPVLIB_ConvIix_0x187ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVLIB_ConvIix");


    ctx->pc = 0x187ff0u;

    // 0x187ff0: 0x3c03002e
    ctx->pc = 0x187ff0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x187ff4: 0x8c6242b0
    ctx->pc = 0x187ff4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 17072)));
    // 0x187ff8: 0x10400002
    ctx->pc = 0x187FF8u;
    {
        const bool branch_taken_0x187ff8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x187FFCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
        if (branch_taken_0x187ff8) {
            ctx->pc = 0x188004u;
            goto label_188004;
        }
    }
    ctx->pc = 0x188000u;
    // 0x188000: 0x822025
    ctx->pc = 0x188000u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_188004:
    // 0x188004: 0x3e00008
    ctx->pc = 0x188004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188008u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188004u: goto label_188004;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18800Cu;
}
