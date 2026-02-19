#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSetVuFBRST
// Address: 0x2b3940 - 0x2b3978
void pbSetVuFBRST_0x2b3940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3940u;

    // 0x2b3940: 0x0
    ctx->pc = 0x2b3940u;
    // NOP
    // 0x2b3944: 0x0
    ctx->pc = 0x2b3944u;
    // NOP
    // 0x2b3948: 0x0
    ctx->pc = 0x2b3948u;
    // NOP
    // 0x2b394c: 0x0
    ctx->pc = 0x2b394cu;
    // NOP
    // 0x2b3950: 0x0
    ctx->pc = 0x2b3950u;
    // NOP
    // 0x2b3954: 0x0
    ctx->pc = 0x2b3954u;
    // NOP
    // 0x2b3958: 0x48c4e000
    ctx->pc = 0x2b3958u;
    ctx->vu0_itop = GPR_U32(ctx, 4) & 0x3FF;
    // 0x2b395c: 0x0
    ctx->pc = 0x2b395cu;
    // NOP
    // 0x2b3960: 0x0
    ctx->pc = 0x2b3960u;
    // NOP
    // 0x2b3964: 0x0
    ctx->pc = 0x2b3964u;
    // NOP
    // 0x2b3968: 0x0
    ctx->pc = 0x2b3968u;
    // NOP
    // 0x2b396c: 0x0
    ctx->pc = 0x2b396cu;
    // NOP
    // 0x2b3970: 0x3e00008
    ctx->pc = 0x2B3970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3978u;
}
