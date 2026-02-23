#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJMEM_Finish
// Address: 0x17bf80 - 0x17bfac
void SJMEM_Finish_0x17bf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJMEM_Finish");


    ctx->pc = 0x17bf80u;

    // 0x17bf80: 0x8f8282f8
    ctx->pc = 0x17bf80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935288)));
    // 0x17bf84: 0x2442ffff
    ctx->pc = 0x17bf84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17bf88: 0x14400006
    ctx->pc = 0x17BF88u;
    {
        const bool branch_taken_0x17bf88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17BF8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935288), GPR_U32(ctx, 2));
        if (branch_taken_0x17bf88) {
            ctx->pc = 0x17BFA4u;
            goto label_17bfa4;
        }
    }
    ctx->pc = 0x17BF90u;
    // 0x17bf90: 0x3c040024
    ctx->pc = 0x17bf90u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x17bf94: 0x282d
    ctx->pc = 0x17bf94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf98: 0x2484ec80
    ctx->pc = 0x17bf98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962304));
    // 0x17bf9c: 0x8050cfe
    ctx->pc = 0x17BF9Cu;
    ctx->pc = 0x17BFA0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1152));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x17BFA4u;
label_17bfa4:
    // 0x17bfa4: 0x3e00008
    ctx->pc = 0x17BFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BFA4u: goto label_17bfa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17BFACu;
}
