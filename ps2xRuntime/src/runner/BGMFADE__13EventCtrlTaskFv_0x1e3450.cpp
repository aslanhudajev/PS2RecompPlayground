#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: BGMFADE__13EventCtrlTaskFv
// Address: 0x1e3450 - 0x1e3490
void BGMFADE__13EventCtrlTaskFv_0x1e3450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BGMFADE__13EventCtrlTaskFv");


    ctx->pc = 0x1e3450u;

    // 0x1e3450: 0x27bdffe0
    ctx->pc = 0x1e3450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3454: 0x7fbf0010
    ctx->pc = 0x1e3454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3458: 0x7fb00000
    ctx->pc = 0x1e3458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e345c: 0x8c82000c
    ctx->pc = 0x1e345cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3460: 0xc44c0004
    ctx->pc = 0x1e3460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e3464: 0xc44d0008
    ctx->pc = 0x1e3464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e3468: 0xc44e000c
    ctx->pc = 0x1e3468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e346c: 0xc25041c
    ctx->pc = 0x1E346Cu;
    SET_GPR_U32(ctx, 31, 0x1E3474u);
    ctx->pc = 0x1E3470u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x941070u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_BgmFade__Ffff_0x941070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3474u; }
        else if (ctx->pc != 0x1E3474u) { ctx->pc = 0x1E3474u; }
    }
    if (ctx->pc != 0x1E3474u) { return; }
    ctx->pc = 0x1E3474u;
    // 0x1e3474: 0x8e03000c
    ctx->pc = 0x1e3474u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3478: 0x24630010
    ctx->pc = 0x1e3478u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e347c: 0xae03000c
    ctx->pc = 0x1e347cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e3480: 0x7bbf0010
    ctx->pc = 0x1e3480u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3484: 0x7bb00000
    ctx->pc = 0x1e3484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3488: 0x3e00008
    ctx->pc = 0x1E3488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E348Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3490u;
}
