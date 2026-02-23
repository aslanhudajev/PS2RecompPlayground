#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: CAMDR__13EventCtrlTaskFv
// Address: 0x1e3230 - 0x1e3260
void CAMDR__13EventCtrlTaskFv_0x1e3230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CAMDR__13EventCtrlTaskFv");


    ctx->pc = 0x1e3230u;

    // 0x1e3230: 0x27bdffe0
    ctx->pc = 0x1e3230u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3234: 0x7fbf0010
    ctx->pc = 0x1e3234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3238: 0x7fb00000
    ctx->pc = 0x1e3238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e323c: 0x70808628
    ctx->pc = 0x1e323cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3240: 0x8e05000c
    ctx->pc = 0x1e3240u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3244: 0xc072630
    ctx->pc = 0x1E3244u;
    SET_GPR_U32(ctx, 31, 0x1E324Cu);
    ctx->pc = 0x1E3248u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    ctx->pc = 0x1C98C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        chgToDirMode__10CameraTaskFPUi_0x1c98c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E324Cu; }
        else if (ctx->pc != 0x1E324Cu) { ctx->pc = 0x1E324Cu; }
    }
    if (ctx->pc != 0x1E324Cu) { return; }
    ctx->pc = 0x1E324Cu;
    // 0x1e324c: 0xae02000c
    ctx->pc = 0x1e324cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e3250: 0x7bbf0010
    ctx->pc = 0x1e3250u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3254: 0x7bb00000
    ctx->pc = 0x1e3254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3258: 0x3e00008
    ctx->pc = 0x1E3258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E325Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3260u;
}
