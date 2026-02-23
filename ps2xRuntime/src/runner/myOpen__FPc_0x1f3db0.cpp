#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: myOpen__FPc
// Address: 0x1f3db0 - 0x1f3e04
void myOpen__FPc_0x1f3db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("myOpen__FPc");


    ctx->pc = 0x1f3db0u;

    // 0x1f3db0: 0x27bdff70
    ctx->pc = 0x1f3db0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f3db4: 0x70803628
    ctx->pc = 0x1f3db4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1f3db8: 0x3c020027
    ctx->pc = 0x1f3db8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f3dbc: 0x7fbf0000
    ctx->pc = 0x1f3dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1f3dc0: 0x27a40010
    ctx->pc = 0x1f3dc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f3dc4: 0xc0513ca
    ctx->pc = 0x1F3DC4u;
    SET_GPR_U32(ctx, 31, 0x1F3DCCu);
    ctx->pc = 0x1F3DC8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294953272));
    ctx->pc = 0x144F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x144f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DCCu; }
        else if (ctx->pc != 0x1F3DCCu) { ctx->pc = 0x1F3DCCu; }
    }
    if (ctx->pc != 0x1F3DCCu) { return; }
    ctx->pc = 0x1F3DCCu;
    // 0x1f3dcc: 0x27a40010
    ctx->pc = 0x1f3dccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f3dd0: 0xc05623e
    ctx->pc = 0x1F3DD0u;
    SET_GPR_U32(ctx, 31, 0x1F3DD8u);
    ctx->pc = 0x1F3DD4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 514));
    ctx->pc = 0x1588F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x1588f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DD8u; }
        else if (ctx->pc != 0x1F3DD8u) { ctx->pc = 0x1F3DD8u; }
    }
    if (ctx->pc != 0x1F3DD8u) { return; }
    ctx->pc = 0x1F3DD8u;
    // 0x1f3dd8: 0x4410007
    ctx->pc = 0x1F3DD8u;
    {
        const bool branch_taken_0x1f3dd8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f3dd8) {
            ctx->pc = 0x1F3DF8u;
            goto label_1f3df8;
        }
    }
    ctx->pc = 0x1F3DE0u;
    // 0x1f3de0: 0x3c020027
    ctx->pc = 0x1f3de0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f3de4: 0x2444c950
    ctx->pc = 0x1f3de4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953296));
    // 0x1f3de8: 0xc05114a
    ctx->pc = 0x1F3DE8u;
    SET_GPR_U32(ctx, 31, 0x1F3DF0u);
    ctx->pc = 0x1F3DECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DF0u; }
        else if (ctx->pc != 0x1F3DF0u) { ctx->pc = 0x1F3DF0u; }
    }
    if (ctx->pc != 0x1F3DF0u) { return; }
    ctx->pc = 0x1F3DF0u;
label_1f3df0:
    // 0x1f3df0: 0x1000ffff
    ctx->pc = 0x1F3DF0u;
    {
        const bool branch_taken_0x1f3df0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3df0) {
            ctx->pc = 0x1F3DF0u;
            goto label_1f3df0;
        }
    }
    ctx->pc = 0x1F3DF8u;
label_1f3df8:
    // 0x1f3df8: 0x7bbf0000
    ctx->pc = 0x1f3df8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3dfc: 0x3e00008
    ctx->pc = 0x1F3DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3E00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3DF0u: goto label_1f3df0;
            case 0x1F3DF8u: goto label_1f3df8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3E04u;
}
