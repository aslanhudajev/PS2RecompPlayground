#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: InitGunAdjustPara__Fv
// Address: 0x1ead90 - 0x1eae48
void InitGunAdjustPara__Fv_0x1ead90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("InitGunAdjustPara__Fv");


    ctx->pc = 0x1ead90u;

    // 0x1ead90: 0x2409000a
    ctx->pc = 0x1ead90u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ead94: 0x3c010050
    ctx->pc = 0x1ead94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ead98: 0xac290db0
    ctx->pc = 0x1ead98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3504), GPR_U32(ctx, 9));
    // 0x1ead9c: 0x2408003c
    ctx->pc = 0x1ead9cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1eada0: 0x3c010050
    ctx->pc = 0x1eada0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eada4: 0xac280db4
    ctx->pc = 0x1eada4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3508), GPR_U32(ctx, 8));
    // 0x1eada8: 0x240700d3
    ctx->pc = 0x1eada8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 211));
    // 0x1eadac: 0x3c010050
    ctx->pc = 0x1eadacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eadb0: 0xac270db8
    ctx->pc = 0x1eadb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3512), GPR_U32(ctx, 7));
    // 0x1eadb4: 0x24060044
    ctx->pc = 0x1eadb4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 68));
    // 0x1eadb8: 0x3c010050
    ctx->pc = 0x1eadb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eadbc: 0xac260dbc
    ctx->pc = 0x1eadbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3516), GPR_U32(ctx, 6));
    // 0x1eadc0: 0x2405ff97
    ctx->pc = 0x1eadc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967191));
    // 0x1eadc4: 0x3c010050
    ctx->pc = 0x1eadc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eadc8: 0xac250dc0
    ctx->pc = 0x1eadc8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3520), GPR_U32(ctx, 5));
    // 0x1eadcc: 0x2404ffa1
    ctx->pc = 0x1eadccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967201));
    // 0x1eadd0: 0x3c010050
    ctx->pc = 0x1eadd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eadd4: 0xac240dc4
    ctx->pc = 0x1eadd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3524), GPR_U32(ctx, 4));
    // 0x1eadd8: 0x2403008a
    ctx->pc = 0x1eadd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 138));
    // 0x1eaddc: 0x3c010050
    ctx->pc = 0x1eaddcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eade0: 0xac230dc8
    ctx->pc = 0x1eade0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3528), GPR_U32(ctx, 3));
    // 0x1eade4: 0x3c010050
    ctx->pc = 0x1eade4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eade8: 0xac260dcc
    ctx->pc = 0x1eade8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3532), GPR_U32(ctx, 6));
    // 0x1eadec: 0x3c010050
    ctx->pc = 0x1eadecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eadf0: 0xac290dd0
    ctx->pc = 0x1eadf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3536), GPR_U32(ctx, 9));
    // 0x1eadf4: 0x3c010050
    ctx->pc = 0x1eadf4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eadf8: 0xac280dd4
    ctx->pc = 0x1eadf8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3540), GPR_U32(ctx, 8));
    // 0x1eadfc: 0x3c010050
    ctx->pc = 0x1eadfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eae00: 0xac270dd8
    ctx->pc = 0x1eae00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3544), GPR_U32(ctx, 7));
    // 0x1eae04: 0x3c010050
    ctx->pc = 0x1eae04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eae08: 0xac260ddc
    ctx->pc = 0x1eae08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3548), GPR_U32(ctx, 6));
    // 0x1eae0c: 0x3c010050
    ctx->pc = 0x1eae0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eae10: 0xac250de0
    ctx->pc = 0x1eae10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3552), GPR_U32(ctx, 5));
    // 0x1eae14: 0x3c010050
    ctx->pc = 0x1eae14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eae18: 0xac240de4
    ctx->pc = 0x1eae18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3556), GPR_U32(ctx, 4));
    // 0x1eae1c: 0x3c010050
    ctx->pc = 0x1eae1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eae20: 0xac230de8
    ctx->pc = 0x1eae20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3560), GPR_U32(ctx, 3));
    // 0x1eae24: 0x24030001
    ctx->pc = 0x1eae24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eae28: 0x3c010050
    ctx->pc = 0x1eae28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eae2c: 0xaf838d24
    ctx->pc = 0x1eae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937892), GPR_U32(ctx, 3));
    // 0x1eae30: 0xaf838d28
    ctx->pc = 0x1eae30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937896), GPR_U32(ctx, 3));
    // 0x1eae34: 0x24030004
    ctx->pc = 0x1eae34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eae38: 0xaf808d20
    ctx->pc = 0x1eae38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937888), GPR_U32(ctx, 0));
    // 0x1eae3c: 0xac260dec
    ctx->pc = 0x1eae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3564), GPR_U32(ctx, 6));
    // 0x1eae40: 0x3e00008
    ctx->pc = 0x1EAE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAE44u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937900), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EAE48u;
}
