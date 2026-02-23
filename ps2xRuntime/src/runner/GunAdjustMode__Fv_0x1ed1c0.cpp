#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GunAdjustMode__Fv
// Address: 0x1ed1c0 - 0x1ed274
void GunAdjustMode__Fv_0x1ed1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GunAdjustMode__Fv");


    ctx->pc = 0x1ed1c0u;

    // 0x1ed1c0: 0x27bdfff0
    ctx->pc = 0x1ed1c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ed1c4: 0x7fbf0000
    ctx->pc = 0x1ed1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ed1c8: 0x83848b90
    ctx->pc = 0x1ed1c8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937488)));
    // 0x1ed1cc: 0x24030002
    ctx->pc = 0x1ed1ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ed1d0: 0x1083001c
    ctx->pc = 0x1ED1D0u;
    {
        const bool branch_taken_0x1ed1d0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1ED1D4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ed1d0) {
            ctx->pc = 0x1ED244u;
            goto label_1ed244;
        }
    }
    ctx->pc = 0x1ED1D8u;
    // 0x1ed1d8: 0x1083000d
    ctx->pc = 0x1ED1D8u;
    {
        const bool branch_taken_0x1ed1d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ed1d8) {
            ctx->pc = 0x1ED210u;
            goto label_1ed210;
        }
    }
    ctx->pc = 0x1ED1E0u;
    // 0x1ed1e0: 0x10800003
    ctx->pc = 0x1ED1E0u;
    {
        const bool branch_taken_0x1ed1e0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ED1E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1ed1e0) {
            ctx->pc = 0x1ED1F0u;
            goto label_1ed1f0;
        }
    }
    ctx->pc = 0x1ED1E8u;
    // 0x1ed1e8: 0x10000020
    ctx->pc = 0x1ED1E8u;
    {
        const bool branch_taken_0x1ed1e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ED1ECu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1ed1e8) {
            ctx->pc = 0x1ED26Cu;
            goto label_1ed26c;
        }
    }
    ctx->pc = 0x1ED1F0u;
label_1ed1f0:
    // 0x1ed1f0: 0xc07aae4
    ctx->pc = 0x1ED1F0u;
    SET_GPR_U32(ctx, 31, 0x1ED1F8u);
    ctx->pc = 0x1EAB90u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitGunAdjust__Fi_0x1eab90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1F8u; }
        else if (ctx->pc != 0x1ED1F8u) { ctx->pc = 0x1ED1F8u; }
    }
    if (ctx->pc != 0x1ED1F8u) { return; }
    ctx->pc = 0x1ED1F8u;
    // 0x1ed1f8: 0x24020001
    ctx->pc = 0x1ed1f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed1fc: 0xa7828bf4
    ctx->pc = 0x1ed1fcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937588), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ed200: 0xa7828b58
    ctx->pc = 0x1ed200u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937432), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ed204: 0x83828b90
    ctx->pc = 0x1ed204u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937488)));
    // 0x1ed208: 0x24420001
    ctx->pc = 0x1ed208u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ed20c: 0xa3828b90
    ctx->pc = 0x1ed20cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937488), (uint8_t)GPR_U32(ctx, 2));
label_1ed210:
    // 0x1ed210: 0x3c020051
    ctx->pc = 0x1ed210u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ed214: 0xc086370
    ctx->pc = 0x1ED214u;
    SET_GPR_U32(ctx, 31, 0x1ED21Cu);
    ctx->pc = 0x1ED218u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkRemain__13EntryDatClassFv_0x218dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED21Cu; }
        else if (ctx->pc != 0x1ED21Cu) { ctx->pc = 0x1ED21Cu; }
    }
    if (ctx->pc != 0x1ED21Cu) { return; }
    ctx->pc = 0x1ED21Cu;
    // 0x1ed21c: 0x10400005
    ctx->pc = 0x1ED21Cu;
    {
        const bool branch_taken_0x1ed21c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ed21c) {
            ctx->pc = 0x1ED234u;
            goto label_1ed234;
        }
    }
    ctx->pc = 0x1ED224u;
    // 0x1ed224: 0xc080d60
    ctx->pc = 0x1ED224u;
    SET_GPR_U32(ctx, 31, 0x1ED22Cu);
    ctx->pc = 0x203580u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispNowLoading__Fv_0x203580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED22Cu; }
        else if (ctx->pc != 0x1ED22Cu) { ctx->pc = 0x1ED22Cu; }
    }
    if (ctx->pc != 0x1ED22Cu) { return; }
    ctx->pc = 0x1ED22Cu;
    // 0x1ed22c: 0x1000000e
    ctx->pc = 0x1ED22Cu;
    {
        const bool branch_taken_0x1ed22c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ed22c) {
            ctx->pc = 0x1ED268u;
            goto label_1ed268;
        }
    }
    ctx->pc = 0x1ED234u;
label_1ed234:
    // 0x1ed234: 0x83838b90
    ctx->pc = 0x1ed234u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937488)));
    // 0x1ed238: 0x24630001
    ctx->pc = 0x1ed238u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ed23c: 0x1000000a
    ctx->pc = 0x1ED23Cu;
    {
        const bool branch_taken_0x1ed23c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ED240u;
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937488), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ed23c) {
            ctx->pc = 0x1ED268u;
            goto label_1ed268;
        }
    }
    ctx->pc = 0x1ED244u;
label_1ed244:
    // 0x1ed244: 0xc07ab94
    ctx->pc = 0x1ED244u;
    SET_GPR_U32(ctx, 31, 0x1ED24Cu);
    ctx->pc = 0x1EAE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        gun_adjust_main__Fv_0x1eae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED24Cu; }
        else if (ctx->pc != 0x1ED24Cu) { ctx->pc = 0x1ED24Cu; }
    }
    if (ctx->pc != 0x1ED24Cu) { return; }
    ctx->pc = 0x1ED24Cu;
    // 0x1ed24c: 0x14400006
    ctx->pc = 0x1ED24Cu;
    {
        const bool branch_taken_0x1ed24c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ed24c) {
            ctx->pc = 0x1ED268u;
            goto label_1ed268;
        }
    }
    ctx->pc = 0x1ED254u;
    // 0x1ed254: 0xc080cb0
    ctx->pc = 0x1ED254u;
    SET_GPR_U32(ctx, 31, 0x1ED25Cu);
    ctx->pc = 0x1ED258u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937432), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2032C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MaskScreen__Fv_0x2032c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED25Cu; }
        else if (ctx->pc != 0x1ED25Cu) { ctx->pc = 0x1ED25Cu; }
    }
    if (ctx->pc != 0x1ED25Cu) { return; }
    ctx->pc = 0x1ED25Cu;
    // 0x1ed25c: 0x3c020050
    ctx->pc = 0x1ed25cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ed260: 0xc07cca0
    ctx->pc = 0x1ED260u;
    SET_GPR_U32(ctx, 31, 0x1ED268u);
    ctx->pc = 0x1ED264u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960384));
    ctx->pc = 0x1F3280u;
    {
        const uint32_t __entryPc = ctx->pc;
        next__16MainModeMgrClassFv_0x1f3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED268u; }
        else if (ctx->pc != 0x1ED268u) { ctx->pc = 0x1ED268u; }
    }
    if (ctx->pc != 0x1ED268u) { return; }
    ctx->pc = 0x1ED268u;
label_1ed268:
    // 0x1ed268: 0x7bbf0000
    ctx->pc = 0x1ed268u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed26c:
    // 0x1ed26c: 0x3e00008
    ctx->pc = 0x1ED26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED270u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED1F0u: goto label_1ed1f0;
            case 0x1ED210u: goto label_1ed210;
            case 0x1ED234u: goto label_1ed234;
            case 0x1ED244u: goto label_1ed244;
            case 0x1ED268u: goto label_1ed268;
            case 0x1ED26Cu: goto label_1ed26c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ED274u;
}
