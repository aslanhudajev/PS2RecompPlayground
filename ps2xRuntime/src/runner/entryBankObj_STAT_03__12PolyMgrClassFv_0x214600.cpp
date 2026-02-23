#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBankObj_STAT_03__12PolyMgrClassFv
// Address: 0x214600 - 0x214674
void entryBankObj_STAT_03__12PolyMgrClassFv_0x214600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBankObj_STAT_03__12PolyMgrClassFv");


    ctx->pc = 0x214600u;

    // 0x214600: 0x27bdffe0
    ctx->pc = 0x214600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214604: 0x7fbf0010
    ctx->pc = 0x214604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x214608: 0x7fb00000
    ctx->pc = 0x214608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21460c: 0x3c010046
    ctx->pc = 0x21460cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)70 << 16));
    // 0x214610: 0x84227cf0
    ctx->pc = 0x214610u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 31984)));
    // 0x214614: 0x1040000f
    ctx->pc = 0x214614u;
    {
        const bool branch_taken_0x214614 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x214618u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x214614) {
            ctx->pc = 0x214654u;
            goto label_214654;
        }
    }
    ctx->pc = 0x21461Cu;
label_21461c:
    // 0x21461c: 0xc079580
    ctx->pc = 0x21461Cu;
    SET_GPR_U32(ctx, 31, 0x214624u);
    ctx->pc = 0x1E5600u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5600_0x1e5600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214624u; }
        else if (ctx->pc != 0x214624u) { ctx->pc = 0x214624u; }
    }
    if (ctx->pc != 0x214624u) { return; }
    ctx->pc = 0x214624u;
    // 0x214624: 0xc079580
    ctx->pc = 0x214624u;
    SET_GPR_U32(ctx, 31, 0x21462Cu);
    ctx->pc = 0x1E5600u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5600_0x1e5600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21462Cu; }
        else if (ctx->pc != 0x21462Cu) { ctx->pc = 0x21462Cu; }
    }
    if (ctx->pc != 0x21462Cu) { return; }
    ctx->pc = 0x21462Cu;
    // 0x21462c: 0xc079580
    ctx->pc = 0x21462Cu;
    SET_GPR_U32(ctx, 31, 0x214634u);
    ctx->pc = 0x1E5600u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5600_0x1e5600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214634u; }
        else if (ctx->pc != 0x214634u) { ctx->pc = 0x214634u; }
    }
    if (ctx->pc != 0x214634u) { return; }
    ctx->pc = 0x214634u;
    // 0x214634: 0xc079580
    ctx->pc = 0x214634u;
    SET_GPR_U32(ctx, 31, 0x21463Cu);
    ctx->pc = 0x1E5600u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5600_0x1e5600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21463Cu; }
        else if (ctx->pc != 0x21463Cu) { ctx->pc = 0x21463Cu; }
    }
    if (ctx->pc != 0x21463Cu) { return; }
    ctx->pc = 0x21463Cu;
    // 0x21463c: 0x26100001
    ctx->pc = 0x21463cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x214640: 0x2a020100
    ctx->pc = 0x214640u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 256));
    // 0x214644: 0x1440fff5
    ctx->pc = 0x214644u;
    {
        const bool branch_taken_0x214644 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x214648u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x214644) {
            ctx->pc = 0x21461Cu;
            goto label_21461c;
        }
    }
    ctx->pc = 0x21464Cu;
    // 0x21464c: 0x10000006
    ctx->pc = 0x21464Cu;
    {
        const bool branch_taken_0x21464c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x214650u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x21464c) {
            ctx->pc = 0x214668u;
            goto label_214668;
        }
    }
    ctx->pc = 0x214654u;
label_214654:
    // 0x214654: 0x8c830000
    ctx->pc = 0x214654u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x214658: 0x24020001
    ctx->pc = 0x214658u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21465c: 0x24040004
    ctx->pc = 0x21465cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x214660: 0xac64000c
    ctx->pc = 0x214660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x214664: 0x7bbf0010
    ctx->pc = 0x214664u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_214668:
    // 0x214668: 0x7bb00000
    ctx->pc = 0x214668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21466c: 0x3e00008
    ctx->pc = 0x21466Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214670u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21461Cu: goto label_21461c;
            case 0x214654u: goto label_214654;
            case 0x214668u: goto label_214668;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214674u;
}
