#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: OVLAP__13EventCtrlTaskFv
// Address: 0x1e3d00 - 0x1e3d38
void OVLAP__13EventCtrlTaskFv_0x1e3d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("OVLAP__13EventCtrlTaskFv");


    ctx->pc = 0x1e3d00u;

    // 0x1e3d00: 0x27bdffe0
    ctx->pc = 0x1e3d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3d04: 0x7fbf0010
    ctx->pc = 0x1e3d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3d08: 0x7fb00000
    ctx->pc = 0x1e3d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3d0c: 0x8c82000c
    ctx->pc = 0x1e3d0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3d10: 0x70808628
    ctx->pc = 0x1e3d10u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3d14: 0xc085774
    ctx->pc = 0x1E3D14u;
    SET_GPR_U32(ctx, 31, 0x1E3D1Cu);
    ctx->pc = 0x1E3D18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x215DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_OverLapTask__FPi_0x215dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3D1Cu; }
        else if (ctx->pc != 0x1E3D1Cu) { ctx->pc = 0x1E3D1Cu; }
    }
    if (ctx->pc != 0x1E3D1Cu) { return; }
    ctx->pc = 0x1E3D1Cu;
    // 0x1e3d1c: 0x8e03000c
    ctx->pc = 0x1e3d1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3d20: 0x24630014
    ctx->pc = 0x1e3d20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20));
    // 0x1e3d24: 0xae03000c
    ctx->pc = 0x1e3d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e3d28: 0x7bbf0010
    ctx->pc = 0x1e3d28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3d2c: 0x7bb00000
    ctx->pc = 0x1e3d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3d30: 0x3e00008
    ctx->pc = 0x1E3D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3D34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3D38u;
}
