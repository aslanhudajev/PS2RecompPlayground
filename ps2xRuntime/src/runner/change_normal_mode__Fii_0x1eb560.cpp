#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: change_normal_mode__Fii
// Address: 0x1eb560 - 0x1eb634
void change_normal_mode__Fii_0x1eb560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("change_normal_mode__Fii");


    ctx->pc = 0x1eb560u;

    // 0x1eb560: 0x27bdfff0
    ctx->pc = 0x1eb560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eb564: 0x7fbf0000
    ctx->pc = 0x1eb564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1eb568: 0x24030001
    ctx->pc = 0x1eb568u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb56c: 0xaf838dcc
    ctx->pc = 0x1eb56cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 3));
    // 0x1eb570: 0x3c030050
    ctx->pc = 0x1eb570u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1eb574: 0x43140
    ctx->pc = 0x1eb574u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 4), 5));
    // 0x1eb578: 0x24630db8
    ctx->pc = 0x1eb578u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3512));
    // 0x1eb57c: 0x663821
    ctx->pc = 0x1eb57cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1eb580: 0x51900
    ctx->pc = 0x1eb580u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1eb584: 0xaf808dec
    ctx->pc = 0x1eb584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938092), GPR_U32(ctx, 0));
    // 0x1eb588: 0xaf808dd4
    ctx->pc = 0x1eb588u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938068), GPR_U32(ctx, 0));
    // 0x1eb58c: 0x240800d3
    ctx->pc = 0x1eb58cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 211));
    // 0x1eb590: 0x673821
    ctx->pc = 0x1eb590u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1eb594: 0xace80000
    ctx->pc = 0x1eb594u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x1eb598: 0x3c070050
    ctx->pc = 0x1eb598u;
    SET_GPR_U32(ctx, 7, ((uint32_t)80 << 16));
    // 0x1eb59c: 0x24e70dbc
    ctx->pc = 0x1eb59cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 3516));
    // 0x1eb5a0: 0xe63821
    ctx->pc = 0x1eb5a0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1eb5a4: 0x24080044
    ctx->pc = 0x1eb5a4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 68));
    // 0x1eb5a8: 0x673821
    ctx->pc = 0x1eb5a8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1eb5ac: 0x14a00013
    ctx->pc = 0x1EB5ACu;
    {
        const bool branch_taken_0x1eb5ac = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EB5B0u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
        if (branch_taken_0x1eb5ac) {
            ctx->pc = 0x1EB5FCu;
            goto label_1eb5fc;
        }
    }
    ctx->pc = 0x1EB5B4u;
    // 0x1eb5b4: 0x3c020050
    ctx->pc = 0x1eb5b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eb5b8: 0x24420db0
    ctx->pc = 0x1eb5b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3504));
    // 0x1eb5bc: 0x461021
    ctx->pc = 0x1eb5bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1eb5c0: 0x2405000a
    ctx->pc = 0x1eb5c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1eb5c4: 0x621021
    ctx->pc = 0x1eb5c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb5c8: 0xac450000
    ctx->pc = 0x1eb5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1eb5cc: 0x3c020050
    ctx->pc = 0x1eb5ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eb5d0: 0x24420db4
    ctx->pc = 0x1eb5d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3508));
    // 0x1eb5d4: 0x461021
    ctx->pc = 0x1eb5d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1eb5d8: 0x2405003c
    ctx->pc = 0x1eb5d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1eb5dc: 0x621021
    ctx->pc = 0x1eb5dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb5e0: 0xc07b518
    ctx->pc = 0x1EB5E0u;
    SET_GPR_U32(ctx, 31, 0x1EB5E8u);
    ctx->pc = 0x1EB5E4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x1ED460u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunBuffer__Fi_0x1ed460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB5E8u; }
        else if (ctx->pc != 0x1EB5E8u) { ctx->pc = 0x1EB5E8u; }
    }
    if (ctx->pc != 0x1EB5E8u) { return; }
    ctx->pc = 0x1EB5E8u;
    // 0x1eb5e8: 0x8c450000
    ctx->pc = 0x1eb5e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb5ec: 0xc07b660
    ctx->pc = 0x1EB5ECu;
    SET_GPR_U32(ctx, 31, 0x1EB5F4u);
    ctx->pc = 0x1EB5F0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->pc = 0x1ED980u;
    {
        const uint32_t __entryPc = ctx->pc;
        trans_ctrl_data__Fii_0x1ed980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB5F4u; }
        else if (ctx->pc != 0x1EB5F4u) { ctx->pc = 0x1EB5F4u; }
    }
    if (ctx->pc != 0x1EB5F4u) { return; }
    ctx->pc = 0x1EB5F4u;
    // 0x1eb5f4: 0x1000000c
    ctx->pc = 0x1EB5F4u;
    {
        const bool branch_taken_0x1eb5f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB5F8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 0));
        if (branch_taken_0x1eb5f4) {
            ctx->pc = 0x1EB628u;
            goto label_1eb628;
        }
    }
    ctx->pc = 0x1EB5FCu;
label_1eb5fc:
    // 0x1eb5fc: 0x3c040050
    ctx->pc = 0x1eb5fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)80 << 16));
    // 0x1eb600: 0x24840db0
    ctx->pc = 0x1eb600u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3504));
    // 0x1eb604: 0x862021
    ctx->pc = 0x1eb604u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1eb608: 0x642021
    ctx->pc = 0x1eb608u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1eb60c: 0xac800000
    ctx->pc = 0x1eb60cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1eb610: 0x3c040050
    ctx->pc = 0x1eb610u;
    SET_GPR_U32(ctx, 4, ((uint32_t)80 << 16));
    // 0x1eb614: 0x24840db4
    ctx->pc = 0x1eb614u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3508));
    // 0x1eb618: 0x862021
    ctx->pc = 0x1eb618u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1eb61c: 0x641821
    ctx->pc = 0x1eb61cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1eb620: 0xac600000
    ctx->pc = 0x1eb620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1eb624: 0xaf808df8
    ctx->pc = 0x1eb624u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 0));
label_1eb628:
    // 0x1eb628: 0x7bbf0000
    ctx->pc = 0x1eb628u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb62c: 0x3e00008
    ctx->pc = 0x1EB62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB630u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB5FCu: goto label_1eb5fc;
            case 0x1EB628u: goto label_1eb628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB634u;
}
