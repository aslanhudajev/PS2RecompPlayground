#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPaletteChangeData
// Address: 0x1ab4e0 - 0x1ab52c
void nlPaletteChangeData_0x1ab4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPaletteChangeData");


    ctx->pc = 0x1ab4e0u;

    // 0x1ab4e0: 0x27bdfff0
    ctx->pc = 0x1ab4e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab4e4: 0x7fbf0000
    ctx->pc = 0x1ab4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ab4e8: 0x8f868a54
    ctx->pc = 0x1ab4e8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937172)));
    // 0x1ab4ec: 0x86082a
    ctx->pc = 0x1ab4ecu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 6)));
    // 0x1ab4f0: 0x50200008
    ctx->pc = 0x1AB4F0u;
    {
        const bool branch_taken_0x1ab4f0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ab4f0) {
            ctx->pc = 0x1AB4F4u;
            SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1AB514u;
            goto label_1ab514;
        }
    }
    ctx->pc = 0x1AB4F8u;
    // 0x1ab4f8: 0x8f868a50
    ctx->pc = 0x1ab4f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937168)));
    // 0x1ab4fc: 0x41840
    ctx->pc = 0x1ab4fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ab500: 0x641821
    ctx->pc = 0x1ab500u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab504: 0x31880
    ctx->pc = 0x1ab504u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ab508: 0x661821
    ctx->pc = 0x1ab508u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ab50c: 0x10000004
    ctx->pc = 0x1AB50Cu;
    {
        const bool branch_taken_0x1ab50c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB510u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x1ab50c) {
            ctx->pc = 0x1AB520u;
            goto label_1ab520;
        }
    }
    ctx->pc = 0x1AB514u;
label_1ab514:
    // 0x1ab514: 0x3c020026
    ctx->pc = 0x1ab514u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1ab518: 0xc05114a
    ctx->pc = 0x1AB518u;
    SET_GPR_U32(ctx, 31, 0x1AB520u);
    ctx->pc = 0x1AB51Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964848));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB520u; }
        else if (ctx->pc != 0x1AB520u) { ctx->pc = 0x1AB520u; }
    }
    if (ctx->pc != 0x1AB520u) { return; }
    ctx->pc = 0x1AB520u;
label_1ab520:
    // 0x1ab520: 0x7bbf0000
    ctx->pc = 0x1ab520u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab524: 0x3e00008
    ctx->pc = 0x1AB524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB528u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB514u: goto label_1ab514;
            case 0x1AB520u: goto label_1ab520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB52Cu;
}
