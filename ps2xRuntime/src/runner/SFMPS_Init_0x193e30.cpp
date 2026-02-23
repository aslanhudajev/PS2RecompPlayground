#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPS_Init
// Address: 0x193e30 - 0x193ea4
void SFMPS_Init_0x193e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPS_Init");


    ctx->pc = 0x193e30u;

    // 0x193e30: 0x27bdfff0
    ctx->pc = 0x193e30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193e34: 0xffbf0000
    ctx->pc = 0x193e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193e38: 0xc064faa
    ctx->pc = 0x193E38u;
    SET_GPR_U32(ctx, 31, 0x193E40u);
    ctx->pc = 0x193EA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_ChkFatal_0x193ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E40u; }
        else if (ctx->pc != 0x193E40u) { ctx->pc = 0x193E40u; }
    }
    if (ctx->pc != 0x193E40u) { return; }
    ctx->pc = 0x193E40u;
    // 0x193e40: 0x10400008
    ctx->pc = 0x193E40u;
    {
        const bool branch_taken_0x193e40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x193E44u;
        SET_GPR_U32(ctx, 5, ((uint32_t)47 << 16));
        if (branch_taken_0x193e40) {
            ctx->pc = 0x193E64u;
            goto label_193e64;
        }
    }
    ctx->pc = 0x193E48u;
label_193e48:
    // 0x193e48: 0x0
    ctx->pc = 0x193e48u;
    // NOP
    // 0x193e4c: 0x0
    ctx->pc = 0x193e4cu;
    // NOP
    // 0x193e50: 0x0
    ctx->pc = 0x193e50u;
    // NOP
    // 0x193e54: 0x0
    ctx->pc = 0x193e54u;
    // NOP
    // 0x193e58: 0x0
    ctx->pc = 0x193e58u;
    // NOP
    // 0x193e5c: 0x1000fffa
    ctx->pc = 0x193E5Cu;
    {
        const bool branch_taken_0x193e5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x193e5c) {
            ctx->pc = 0x193E48u;
            goto label_193e48;
        }
    }
    ctx->pc = 0x193E64u;
label_193e64:
    // 0x193e64: 0x24040020
    ctx->pc = 0x193e64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x193e68: 0xc060924
    ctx->pc = 0x193E68u;
    SET_GPR_U32(ctx, 31, 0x193E70u);
    ctx->pc = 0x193E6Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953096));
    ctx->pc = 0x182490u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPS_Init_0x182490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E70u; }
        else if (ctx->pc != 0x193E70u) { ctx->pc = 0x193E70u; }
    }
    if (ctx->pc != 0x193E70u) { return; }
    ctx->pc = 0x193E70u;
    // 0x193e70: 0x10400006
    ctx->pc = 0x193E70u;
    {
        const bool branch_taken_0x193e70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x193E74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193e70) {
            ctx->pc = 0x193E8Cu;
            goto label_193e8c;
        }
    }
    ctx->pc = 0x193E78u;
    // 0x193e78: 0x3c05ff00
    ctx->pc = 0x193e78u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x193e7c: 0xc064ea0
    ctx->pc = 0x193E7Cu;
    SET_GPR_U32(ctx, 31, 0x193E84u);
    ctx->pc = 0x193E80u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3329));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E84u; }
        else if (ctx->pc != 0x193E84u) { ctx->pc = 0x193E84u; }
    }
    if (ctx->pc != 0x193E84u) { return; }
    ctx->pc = 0x193E84u;
    // 0x193e84: 0x10000005
    ctx->pc = 0x193E84u;
    {
        const bool branch_taken_0x193e84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x193E88u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x193e84) {
            ctx->pc = 0x193E9Cu;
            goto label_193e9c;
        }
    }
    ctx->pc = 0x193E8Cu;
label_193e8c:
    // 0x193e8c: 0x3c030026
    ctx->pc = 0x193e8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x193e90: 0x102d
    ctx->pc = 0x193e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e94: 0xac60df40
    ctx->pc = 0x193e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958912), GPR_U32(ctx, 0));
    // 0x193e98: 0xdfbf0000
    ctx->pc = 0x193e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193e9c:
    // 0x193e9c: 0x3e00008
    ctx->pc = 0x193E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193EA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193E48u: goto label_193e48;
            case 0x193E64u: goto label_193e64;
            case 0x193E8Cu: goto label_193e8c;
            case 0x193E9Cu: goto label_193e9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193EA4u;
}
