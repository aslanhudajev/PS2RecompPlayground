#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: JIMAKU__13EventCtrlTaskFv
// Address: 0x1e4eb0 - 0x1e4ee8
void JIMAKU__13EventCtrlTaskFv_0x1e4eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("JIMAKU__13EventCtrlTaskFv");


    ctx->pc = 0x1e4eb0u;

    // 0x1e4eb0: 0x27bdffe0
    ctx->pc = 0x1e4eb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4eb4: 0x7fbf0010
    ctx->pc = 0x1e4eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4eb8: 0x7fb00000
    ctx->pc = 0x1e4eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4ebc: 0x8c82000c
    ctx->pc = 0x1e4ebcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4ec0: 0x70808628
    ctx->pc = 0x1e4ec0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4ec4: 0xc253198
    ctx->pc = 0x1E4EC4u;
    SET_GPR_U32(ctx, 31, 0x1E4ECCu);
    ctx->pc = 0x1E4EC8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x94C660u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_JimakuTask__Fi_0x94c660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4ECCu; }
        else if (ctx->pc != 0x1E4ECCu) { ctx->pc = 0x1E4ECCu; }
    }
    if (ctx->pc != 0x1E4ECCu) { return; }
    ctx->pc = 0x1E4ECCu;
    // 0x1e4ecc: 0x8e03000c
    ctx->pc = 0x1e4eccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4ed0: 0x24630008
    ctx->pc = 0x1e4ed0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e4ed4: 0xae03000c
    ctx->pc = 0x1e4ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4ed8: 0x7bbf0010
    ctx->pc = 0x1e4ed8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4edc: 0x7bb00000
    ctx->pc = 0x1e4edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4ee0: 0x3e00008
    ctx->pc = 0x1E4EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4EE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4EE8u;
}
