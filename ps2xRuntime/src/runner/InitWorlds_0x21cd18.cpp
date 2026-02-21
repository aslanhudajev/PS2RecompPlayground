#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitWorlds
// Address: 0x21cd18 - 0x21cd70
void InitWorlds_0x21cd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21cd18u;

    // 0x21cd18: 0x3c020032
    ctx->pc = 0x21cd18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21cd1c: 0xac40fb50
    ctx->pc = 0x21cd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966096), GPR_U32(ctx, 0));
    // 0x21cd20: 0x3c020032
    ctx->pc = 0x21cd20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21cd24: 0xac40fb54
    ctx->pc = 0x21cd24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966100), GPR_U32(ctx, 0));
    // 0x21cd28: 0x3c020032
    ctx->pc = 0x21cd28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21cd2c: 0xac40faa0
    ctx->pc = 0x21cd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965920), GPR_U32(ctx, 0));
    // 0x21cd30: 0x3c020032
    ctx->pc = 0x21cd30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21cd34: 0xac40faa4
    ctx->pc = 0x21cd34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965924), GPR_U32(ctx, 0));
    // 0x21cd38: 0x3c050032
    ctx->pc = 0x21cd38u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x21cd3c: 0x24a2f9f8
    ctx->pc = 0x21cd3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294965752));
    // 0x21cd40: 0x2403ffff
    ctx->pc = 0x21cd40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21cd44: 0xac430084
    ctx->pc = 0x21cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
    // 0x21cd48: 0x3c040032
    ctx->pc = 0x21cd48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x21cd4c: 0x2482faa8
    ctx->pc = 0x21cd4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294965928));
    // 0x21cd50: 0xac430084
    ctx->pc = 0x21cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
    // 0x21cd54: 0xaca0f9f8
    ctx->pc = 0x21cd54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294965752), GPR_U32(ctx, 0));
    // 0x21cd58: 0xac80faa8
    ctx->pc = 0x21cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965928), GPR_U32(ctx, 0));
    // 0x21cd5c: 0x3c020032
    ctx->pc = 0x21cd5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21cd60: 0xac40f9f0
    ctx->pc = 0x21cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965744), GPR_U32(ctx, 0));
    // 0x21cd64: 0x3c020032
    ctx->pc = 0x21cd64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21cd68: 0x3e00008
    ctx->pc = 0x21CD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CD6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294965748), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CD70u;
}
