#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: UnloadWeaponsPowerups
// Address: 0x24f938 - 0x24f950
void UnloadWeaponsPowerups_0x24f938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24f938u;

    // 0x24f938: 0x3c020033
    ctx->pc = 0x24f938u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24f93c: 0x2403ffff
    ctx->pc = 0x24f93cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24f940: 0xac434970
    ctx->pc = 0x24f940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18800), GPR_U32(ctx, 3));
    // 0x24f944: 0x3c020033
    ctx->pc = 0x24f944u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24f948: 0x3e00008
    ctx->pc = 0x24F948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F94Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 18804), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24F950u;
}
