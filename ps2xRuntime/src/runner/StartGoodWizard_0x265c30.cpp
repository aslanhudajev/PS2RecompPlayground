#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartGoodWizard
// Address: 0x265c30 - 0x265c48
void StartGoodWizard_0x265c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x265c30u;

    // 0x265c30: 0x3c020034
    ctx->pc = 0x265c30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x265c34: 0x24030001
    ctx->pc = 0x265c34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x265c38: 0xac43e8fc
    ctx->pc = 0x265c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961404), GPR_U32(ctx, 3));
    // 0x265c3c: 0x3c020032
    ctx->pc = 0x265c3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x265c40: 0x3e00008
    ctx->pc = 0x265C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265C44u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955868), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265C48u;
}
