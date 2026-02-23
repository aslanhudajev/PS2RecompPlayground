#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_GetSbverStr
// Address: 0x19fa40 - 0x19fa4c
void SFH_GetSbverStr_0x19fa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_GetSbverStr");


    ctx->pc = 0x19fa40u;

    // 0x19fa40: 0x3c02002c
    ctx->pc = 0x19fa40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x19fa44: 0x3e00008
    ctx->pc = 0x19FA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FA48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956816));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FA4Cu;
}
