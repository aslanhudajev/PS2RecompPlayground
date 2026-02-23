#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setTunagimeTbl__6CClothFPiiPiiPi
// Address: 0x1ced40 - 0x1ced58
void setTunagimeTbl__6CClothFPiiPiiPi_0x1ced40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setTunagimeTbl__6CClothFPiiPiiPi");


    ctx->pc = 0x1ced40u;

    // 0x1ced40: 0xac850038
    ctx->pc = 0x1ced40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x1ced44: 0xac86003c
    ctx->pc = 0x1ced44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 6));
    // 0x1ced48: 0xac870040
    ctx->pc = 0x1ced48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 7));
    // 0x1ced4c: 0xac880044
    ctx->pc = 0x1ced4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 8));
    // 0x1ced50: 0x3e00008
    ctx->pc = 0x1CED50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CED54u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 9));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CED58u;
}
