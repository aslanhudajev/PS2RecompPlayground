#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBRemoveObject
// Address: 0x2c8810 - 0x2c8818
void MBRemoveObject_0x2c8810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c8810u;

    // 0x2c8810: 0x80b3f1a
    ctx->pc = 0x2C8810u;
    ctx->pc = 0x2C8814u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    MBRemoveNode_0x2cfc68(rdram, ctx, runtime); return;
    ctx->pc = 0x2C8818u;
}
