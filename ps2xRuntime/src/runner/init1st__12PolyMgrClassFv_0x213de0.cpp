#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init1st__12PolyMgrClassFv
// Address: 0x213de0 - 0x213e8c
void init1st__12PolyMgrClassFv_0x213de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init1st__12PolyMgrClassFv");


    ctx->pc = 0x213de0u;

    // 0x213de0: 0x27bdfff0
    ctx->pc = 0x213de0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213de4: 0x7fbf0000
    ctx->pc = 0x213de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x213de8: 0xc07c108
    ctx->pc = 0x213DE8u;
    SET_GPR_U32(ctx, 31, 0x213DF0u);
    ctx->pc = 0x213DECu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937672), GPR_U32(ctx, 0));
    ctx->pc = 0x1F0420u;
    {
        const uint32_t __entryPc = ctx->pc;
        LightAllInit__Fv_0x1f0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213DF0u; }
        else if (ctx->pc != 0x213DF0u) { ctx->pc = 0x213DF0u; }
    }
    if (ctx->pc != 0x213DF0u) { return; }
    ctx->pc = 0x213DF0u;
    // 0x213df0: 0xc0699cc
    ctx->pc = 0x213DF0u;
    SET_GPR_U32(ctx, 31, 0x213DF8u);
    ctx->pc = 0x1A6730u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlFogInit_0x1a6730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213DF8u; }
        else if (ctx->pc != 0x213DF8u) { ctx->pc = 0x213DF8u; }
    }
    if (ctx->pc != 0x213DF8u) { return; }
    ctx->pc = 0x213DF8u;
    // 0x213df8: 0x3c02008d
    ctx->pc = 0x213df8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)141 << 16));
    // 0x213dfc: 0x24440970
    ctx->pc = 0x213dfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2416));
    // 0x213e00: 0xc06a61c
    ctx->pc = 0x213E00u;
    SET_GPR_U32(ctx, 31, 0x213E08u);
    ctx->pc = 0x213E04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x1A9870u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutInit_0x1a9870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E08u; }
        else if (ctx->pc != 0x213E08u) { ctx->pc = 0x213E08u; }
    }
    if (ctx->pc != 0x213E08u) { return; }
    ctx->pc = 0x213E08u;
    // 0x213e08: 0xc06a274
    ctx->pc = 0x213E08u;
    SET_GPR_U32(ctx, 31, 0x213E10u);
    ctx->pc = 0x213E0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A89D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetEntryOverMode_0x1a89d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E10u; }
        else if (ctx->pc != 0x213E10u) { ctx->pc = 0x213E10u; }
    }
    if (ctx->pc != 0x213E10u) { return; }
    ctx->pc = 0x213E10u;
    // 0x213e10: 0x3c020091
    ctx->pc = 0x213e10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)145 << 16));
    // 0x213e14: 0x24440970
    ctx->pc = 0x213e14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2416));
    // 0x213e18: 0xc06a458
    ctx->pc = 0x213E18u;
    SET_GPR_U32(ctx, 31, 0x213E20u);
    ctx->pc = 0x213E1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 512));
    ctx->pc = 0x1A9160u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutTrnslSetBackupBuf_0x1a9160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E20u; }
        else if (ctx->pc != 0x213E20u) { ctx->pc = 0x213E20u; }
    }
    if (ctx->pc != 0x213E20u) { return; }
    ctx->pc = 0x213E20u;
    // 0x213e20: 0xc06a45c
    ctx->pc = 0x213E20u;
    SET_GPR_U32(ctx, 31, 0x213E28u);
    ctx->pc = 0x213E24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A9170u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutTrnslSetBackupMode_0x1a9170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E28u; }
        else if (ctx->pc != 0x213E28u) { ctx->pc = 0x213E28u; }
    }
    if (ctx->pc != 0x213E28u) { return; }
    ctx->pc = 0x213E28u;
    // 0x213e28: 0x3c02003f
    ctx->pc = 0x213e28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)63 << 16));
    // 0x213e2c: 0xc06ad58
    ctx->pc = 0x213E2Cu;
    SET_GPR_U32(ctx, 31, 0x213E34u);
    ctx->pc = 0x213E30u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 57344));
    ctx->pc = 0x1AB560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPrintSetTexAddr_0x1ab560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E34u; }
        else if (ctx->pc != 0x213E34u) { ctx->pc = 0x213E34u; }
    }
    if (ctx->pc != 0x213E34u) { return; }
    ctx->pc = 0x213E34u;
    // 0x213e34: 0xc06ada4
    ctx->pc = 0x213E34u;
    SET_GPR_U32(ctx, 31, 0x213E3Cu);
    ctx->pc = 0x1AB690u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlInitPrint_0x1ab690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E3Cu; }
        else if (ctx->pc != 0x213E3Cu) { ctx->pc = 0x213E3Cu; }
    }
    if (ctx->pc != 0x213E3Cu) { return; }
    ctx->pc = 0x213E3Cu;
    // 0x213e3c: 0xc06aeb0
    ctx->pc = 0x213E3Cu;
    SET_GPR_U32(ctx, 31, 0x213E44u);
    ctx->pc = 0x1ABAC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPrnIndentOn_0x1abac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E44u; }
        else if (ctx->pc != 0x213E44u) { ctx->pc = 0x213E44u; }
    }
    if (ctx->pc != 0x213E44u) { return; }
    ctx->pc = 0x213E44u;
    // 0x213e44: 0x24040008
    ctx->pc = 0x213e44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x213e48: 0xc06aeb4
    ctx->pc = 0x213E48u;
    SET_GPR_U32(ctx, 31, 0x213E50u);
    ctx->pc = 0x213E4Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ABAD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetFontSize_0x1abad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E50u; }
        else if (ctx->pc != 0x213E50u) { ctx->pc = 0x213E50u; }
    }
    if (ctx->pc != 0x213E50u) { return; }
    ctx->pc = 0x213E50u;
    // 0x213e50: 0xc06ae94
    ctx->pc = 0x213E50u;
    SET_GPR_U32(ctx, 31, 0x213E58u);
    ctx->pc = 0x213E54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ABA50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPrintMonitorMode_0x1aba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E58u; }
        else if (ctx->pc != 0x213E58u) { ctx->pc = 0x213E58u; }
    }
    if (ctx->pc != 0x213E58u) { return; }
    ctx->pc = 0x213E58u;
    // 0x213e58: 0x3c030050
    ctx->pc = 0x213e58u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x213e5c: 0x2465ea20
    ctx->pc = 0x213e5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294961696));
    // 0x213e60: 0x70002628
    ctx->pc = 0x213e60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_213e64:
    // 0x213e64: 0xaca00000
    ctx->pc = 0x213e64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x213e68: 0x24840001
    ctx->pc = 0x213e68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x213e6c: 0xaca00004
    ctx->pc = 0x213e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x213e70: 0x2883010e
    ctx->pc = 0x213e70u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 270));
    // 0x213e74: 0x24a50010
    ctx->pc = 0x213e74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x213e78: 0x1460fffa
    ctx->pc = 0x213E78u;
    {
        const bool branch_taken_0x213e78 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x213e78) {
            ctx->pc = 0x213E64u;
            goto label_213e64;
        }
    }
    ctx->pc = 0x213E80u;
    // 0x213e80: 0x7bbf0000
    ctx->pc = 0x213e80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213e84: 0x3e00008
    ctx->pc = 0x213E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213E88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213E64u: goto label_213e64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213E8Cu;
}
