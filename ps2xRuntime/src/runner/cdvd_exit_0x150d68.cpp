#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cdvd_exit
// Address: 0x150d68 - 0x150de8
void cdvd_exit_0x150d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cdvd_exit");


    ctx->pc = 0x150d68u;

    // 0x150d68: 0x3c020022
    ctx->pc = 0x150d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x150d6c: 0x27bdffe0
    ctx->pc = 0x150d6cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x150d70: 0x8c437c94
    ctx->pc = 0x150d70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 31892)));
    // 0x150d74: 0xffbf0010
    ctx->pc = 0x150d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x150d78: 0x10600009
    ctx->pc = 0x150D78u;
    {
        const bool branch_taken_0x150d78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x150D7Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x150d78) {
            ctx->pc = 0x150DA0u;
            goto label_150da0;
        }
    }
    ctx->pc = 0x150D80u;
    // 0x150d80: 0x3c030022
    ctx->pc = 0x150d80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x150d84: 0x2402ffff
    ctx->pc = 0x150d84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x150d88: 0xac627cd4
    ctx->pc = 0x150d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31956), GPR_U32(ctx, 2));
    // 0x150d8c: 0x3c100022
    ctx->pc = 0x150d8cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)34 << 16));
    // 0x150d90: 0xc055240
    ctx->pc = 0x150D90u;
    SET_GPR_U32(ctx, 31, 0x150D98u);
    ctx->pc = 0x150D94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 31904)));
    ctx->pc = 0x154900u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x154900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D98u; }
        else if (ctx->pc != 0x150D98u) { ctx->pc = 0x150D98u; }
    }
    if (ctx->pc != 0x150D98u) { return; }
    ctx->pc = 0x150D98u;
    // 0x150d98: 0x10000003
    ctx->pc = 0x150D98u;
    {
        const bool branch_taken_0x150d98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150D9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
        if (branch_taken_0x150d98) {
            ctx->pc = 0x150DA8u;
            goto label_150da8;
        }
    }
    ctx->pc = 0x150DA0u;
label_150da0:
    // 0x150da0: 0x3c100022
    ctx->pc = 0x150da0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)34 << 16));
    // 0x150da4: 0x3c020022
    ctx->pc = 0x150da4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_150da8:
    // 0x150da8: 0xc05523c
    ctx->pc = 0x150DA8u;
    SET_GPR_U32(ctx, 31, 0x150DB0u);
    ctx->pc = 0x150DACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 31912)));
    ctx->pc = 0x1548F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x1548f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DB0u; }
        else if (ctx->pc != 0x150DB0u) { ctx->pc = 0x150DB0u; }
    }
    if (ctx->pc != 0x150DB0u) { return; }
    ctx->pc = 0x150DB0u;
    // 0x150db0: 0x3c030022
    ctx->pc = 0x150db0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x150db4: 0xc05523c
    ctx->pc = 0x150DB4u;
    SET_GPR_U32(ctx, 31, 0x150DBCu);
    ctx->pc = 0x150DB8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 31916)));
    ctx->pc = 0x1548F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x1548f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DBCu; }
        else if (ctx->pc != 0x150DBCu) { ctx->pc = 0x150DBCu; }
    }
    if (ctx->pc != 0x150DBCu) { return; }
    ctx->pc = 0x150DBCu;
    // 0x150dbc: 0xc05523c
    ctx->pc = 0x150DBCu;
    SET_GPR_U32(ctx, 31, 0x150DC4u);
    ctx->pc = 0x150DC0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 31904)));
    ctx->pc = 0x1548F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x1548f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DC4u; }
        else if (ctx->pc != 0x150DC4u) { ctx->pc = 0x150DC4u; }
    }
    if (ctx->pc != 0x150DC4u) { return; }
    ctx->pc = 0x150DC4u;
    // 0x150dc4: 0xc05725c
    ctx->pc = 0x150DC4u;
    SET_GPR_U32(ctx, 31, 0x150DCCu);
    ctx->pc = 0x15C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x15c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DCCu; }
        else if (ctx->pc != 0x150DCCu) { ctx->pc = 0x150DCCu; }
    }
    if (ctx->pc != 0x150DCCu) { return; }
    ctx->pc = 0x150DCCu;
    // 0x150dcc: 0x3c048000
    ctx->pc = 0x150dccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x150dd0: 0xc055b74
    ctx->pc = 0x150DD0u;
    SET_GPR_U32(ctx, 31, 0x150DD8u);
    ctx->pc = 0x150DD4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 18));
    ctx->pc = 0x156DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifRemoveCmdHandler_0x156dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DD8u; }
        else if (ctx->pc != 0x150DD8u) { ctx->pc = 0x150DD8u; }
    }
    if (ctx->pc != 0x150DD8u) { return; }
    ctx->pc = 0x150DD8u;
    // 0x150dd8: 0xdfbf0010
    ctx->pc = 0x150dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150ddc: 0xdfb00000
    ctx->pc = 0x150ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150de0: 0x805726e
    ctx->pc = 0x150DE0u;
    ctx->pc = 0x150DE4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x15C9B8u;
    EIntr_0x15c9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x150DE8u;
}
