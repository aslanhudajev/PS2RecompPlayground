#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Guncon2AdjustCheckSet__Fv
// Address: 0x1edb70 - 0x1edbe4
void Guncon2AdjustCheckSet__Fv_0x1edb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Guncon2AdjustCheckSet__Fv");


    ctx->pc = 0x1edb70u;

    // 0x1edb70: 0x27bdffd0
    ctx->pc = 0x1edb70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1edb74: 0x7fbf0020
    ctx->pc = 0x1edb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1edb78: 0x7fb10010
    ctx->pc = 0x1edb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1edb7c: 0x7fb00000
    ctx->pc = 0x1edb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1edb80: 0x3c020050
    ctx->pc = 0x1edb80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1edb84: 0x70008628
    ctx->pc = 0x1edb84u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1edb88: 0x24510df0
    ctx->pc = 0x1edb88u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 3568));
label_1edb8c:
    // 0x1edb8c: 0xc07bf9c
    ctx->pc = 0x1EDB8Cu;
    SET_GPR_U32(ctx, 31, 0x1EDB94u);
    ctx->pc = 0x1EDB90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB94u; }
        else if (ctx->pc != 0x1EDB94u) { ctx->pc = 0x1EDB94u; }
    }
    if (ctx->pc != 0x1EDB94u) { return; }
    ctx->pc = 0x1EDB94u;
    // 0x1edb94: 0x24030003
    ctx->pc = 0x1edb94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1edb98: 0x5443000a
    ctx->pc = 0x1EDB98u;
    {
        const bool branch_taken_0x1edb98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1edb98) {
            ctx->pc = 0x1EDB9Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x1EDBC4u;
            goto label_1edbc4;
        }
    }
    ctx->pc = 0x1EDBA0u;
    // 0x1edba0: 0x8e23000c
    ctx->pc = 0x1edba0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1edba4: 0x14600006
    ctx->pc = 0x1EDBA4u;
    {
        const bool branch_taken_0x1edba4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EDBA8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1edba4) {
            ctx->pc = 0x1EDBC0u;
            goto label_1edbc0;
        }
    }
    ctx->pc = 0x1EDBACu;
    // 0x1edbac: 0xc07b518
    ctx->pc = 0x1EDBACu;
    SET_GPR_U32(ctx, 31, 0x1EDBB4u);
    ctx->pc = 0x1ED460u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunBuffer__Fi_0x1ed460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDBB4u; }
        else if (ctx->pc != 0x1EDBB4u) { ctx->pc = 0x1EDBB4u; }
    }
    if (ctx->pc != 0x1EDBB4u) { return; }
    ctx->pc = 0x1EDBB4u;
    // 0x1edbb4: 0x8c450000
    ctx->pc = 0x1edbb4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1edbb8: 0xc07b660
    ctx->pc = 0x1EDBB8u;
    SET_GPR_U32(ctx, 31, 0x1EDBC0u);
    ctx->pc = 0x1EDBBCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->pc = 0x1ED980u;
    {
        const uint32_t __entryPc = ctx->pc;
        trans_ctrl_data__Fii_0x1ed980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDBC0u; }
        else if (ctx->pc != 0x1EDBC0u) { ctx->pc = 0x1EDBC0u; }
    }
    if (ctx->pc != 0x1EDBC0u) { return; }
    ctx->pc = 0x1EDBC0u;
label_1edbc0:
    // 0x1edbc0: 0x26100001
    ctx->pc = 0x1edbc0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1edbc4:
    // 0x1edbc4: 0x2a030002
    ctx->pc = 0x1edbc4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2));
    // 0x1edbc8: 0x1460fff0
    ctx->pc = 0x1EDBC8u;
    {
        const bool branch_taken_0x1edbc8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EDBCCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x1edbc8) {
            ctx->pc = 0x1EDB8Cu;
            goto label_1edb8c;
        }
    }
    ctx->pc = 0x1EDBD0u;
    // 0x1edbd0: 0x7bbf0020
    ctx->pc = 0x1edbd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1edbd4: 0x7bb10010
    ctx->pc = 0x1edbd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edbd8: 0x7bb00000
    ctx->pc = 0x1edbd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edbdc: 0x3e00008
    ctx->pc = 0x1EDBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDBE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EDB8Cu: goto label_1edb8c;
            case 0x1EDBC0u: goto label_1edbc0;
            case 0x1EDBC4u: goto label_1edbc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EDBE4u;
}
