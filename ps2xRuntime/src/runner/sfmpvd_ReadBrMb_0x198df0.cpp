#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpvd_ReadBrMb
// Address: 0x198df0 - 0x198e48
void sfmpvd_ReadBrMb_0x198df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpvd_ReadBrMb");


    ctx->pc = 0x198df0u;

    // 0x198df0: 0x28a5000b
    ctx->pc = 0x198df0u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), 11));
    // 0x198df4: 0x10a00003
    ctx->pc = 0x198DF4u;
    {
        const bool branch_taken_0x198df4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x198DF8u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x198df4) {
            ctx->pc = 0x198E04u;
            goto label_198e04;
        }
    }
    ctx->pc = 0x198DFCu;
    // 0x198dfc: 0x3e00008
    ctx->pc = 0x198DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198E00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198E04u: goto label_198e04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198E04u;
label_198e04:
    // 0x198e04: 0x90830008
    ctx->pc = 0x198e04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x198e08: 0x3c050002
    ctx->pc = 0x198e08u;
    SET_GPR_U32(ctx, 5, ((uint32_t)2 << 16));
    // 0x198e0c: 0x90820009
    ctx->pc = 0x198e0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x198e10: 0x34a5ffff
    ctx->pc = 0x198e10u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x198e14: 0x31a00
    ctx->pc = 0x198e14u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x198e18: 0x9086000a
    ctx->pc = 0x198e18u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x198e1c: 0x621825
    ctx->pc = 0x198e1cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198e20: 0x31a00
    ctx->pc = 0x198e20u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x198e24: 0x102d
    ctx->pc = 0x198e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e28: 0x661825
    ctx->pc = 0x198e28u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x198e2c: 0x32182
    ctx->pc = 0x198e2cu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 3), 6));
    // 0x198e30: 0x31942
    ctx->pc = 0x198e30u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 5));
    // 0x198e34: 0x852024
    ctx->pc = 0x198e34u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x198e38: 0x30630001
    ctx->pc = 0x198e38u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x198e3c: 0xad040000
    ctx->pc = 0x198e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x198e40: 0x3e00008
    ctx->pc = 0x198E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198E44u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198E04u: goto label_198e04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198E48u;
}
