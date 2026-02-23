#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryOskBank_STAT_02__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fdbf0 - 0x1fdc90
void entryOskBank_STAT_02__15OneSkinMgrClassFP11DATAENT_REQ_0x1fdbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryOskBank_STAT_02__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fdbf0u;

    // 0x1fdbf0: 0x27bdffe0
    ctx->pc = 0x1fdbf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fdbf4: 0x7fbf0010
    ctx->pc = 0x1fdbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fdbf8: 0x7fb00000
    ctx->pc = 0x1fdbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fdbfc: 0x3c010050
    ctx->pc = 0x1fdbfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fdc00: 0x8c240c80
    ctx->pc = 0x1fdc00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    // 0x1fdc04: 0xc05b018
    ctx->pc = 0x1FDC04u;
    SET_GPR_U32(ctx, 31, 0x1FDC0Cu);
    ctx->pc = 0x1FDC08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDC0Cu; }
        else if (ctx->pc != 0x1FDC0Cu) { ctx->pc = 0x1FDC0Cu; }
    }
    if (ctx->pc != 0x1FDC0Cu) { return; }
    ctx->pc = 0x1FDC0Cu;
    // 0x1fdc0c: 0x24030004
    ctx->pc = 0x1fdc0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fdc10: 0x1443000f
    ctx->pc = 0x1FDC10u;
    {
        const bool branch_taken_0x1fdc10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1FDC14u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fdc10) {
            ctx->pc = 0x1FDC50u;
            goto label_1fdc50;
        }
    }
    ctx->pc = 0x1FDC18u;
    // 0x1fdc18: 0x3c010052
    ctx->pc = 0x1fdc18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdc1c: 0x8c2694c4
    ctx->pc = 0x1fdc1cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294939844)));
    // 0x1fdc20: 0x8f828d10
    ctx->pc = 0x1fdc20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1fdc24: 0x3c010050
    ctx->pc = 0x1fdc24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fdc28: 0x8c240c80
    ctx->pc = 0x1fdc28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    // 0x1fdc2c: 0x24420001
    ctx->pc = 0x1fdc2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fdc30: 0x3c010052
    ctx->pc = 0x1fdc30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdc34: 0x8c2594c0
    ctx->pc = 0x1fdc34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294939840)));
    // 0x1fdc38: 0xc05aeba
    ctx->pc = 0x1FDC38u;
    SET_GPR_U32(ctx, 31, 0x1FDC40u);
    ctx->pc = 0x1FDC3Cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 2));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDC40u; }
        else if (ctx->pc != 0x1FDC40u) { ctx->pc = 0x1FDC40u; }
    }
    if (ctx->pc != 0x1FDC40u) { return; }
    ctx->pc = 0x1FDC40u;
    // 0x1fdc40: 0x3c010050
    ctx->pc = 0x1fdc40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fdc44: 0xc05b018
    ctx->pc = 0x1FDC44u;
    SET_GPR_U32(ctx, 31, 0x1FDC4Cu);
    ctx->pc = 0x1FDC48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDC4Cu; }
        else if (ctx->pc != 0x1FDC4Cu) { ctx->pc = 0x1FDC4Cu; }
    }
    if (ctx->pc != 0x1FDC4Cu) { return; }
    ctx->pc = 0x1FDC4Cu;
    // 0x1fdc4c: 0x24030001
    ctx->pc = 0x1fdc4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1fdc50:
    // 0x1fdc50: 0x10430004
    ctx->pc = 0x1FDC50u;
    {
        const bool branch_taken_0x1fdc50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1FDC54u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1fdc50) {
            ctx->pc = 0x1FDC64u;
            goto label_1fdc64;
        }
    }
    ctx->pc = 0x1FDC58u;
    // 0x1fdc58: 0x24030003
    ctx->pc = 0x1fdc58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fdc5c: 0x14430007
    ctx->pc = 0x1FDC5Cu;
    {
        const bool branch_taken_0x1fdc5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1fdc5c) {
            ctx->pc = 0x1FDC7Cu;
            goto label_1fdc7c;
        }
    }
    ctx->pc = 0x1FDC64u;
label_1fdc64:
    // 0x1fdc64: 0xc05ae0c
    ctx->pc = 0x1FDC64u;
    SET_GPR_U32(ctx, 31, 0x1FDC6Cu);
    ctx->pc = 0x1FDC68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDC6Cu; }
        else if (ctx->pc != 0x1FDC6Cu) { ctx->pc = 0x1FDC6Cu; }
    }
    if (ctx->pc != 0x1FDC6Cu) { return; }
    ctx->pc = 0x1FDC6Cu;
    // 0x1fdc6c: 0x3c010050
    ctx->pc = 0x1fdc6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fdc70: 0xac200c80
    ctx->pc = 0x1fdc70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3200), GPR_U32(ctx, 0));
    // 0x1fdc74: 0x24020003
    ctx->pc = 0x1fdc74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fdc78: 0xae02000c
    ctx->pc = 0x1fdc78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1fdc7c:
    // 0x1fdc7c: 0x7bbf0010
    ctx->pc = 0x1fdc7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdc80: 0x7bb00000
    ctx->pc = 0x1fdc80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdc84: 0x24020001
    ctx->pc = 0x1fdc84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdc88: 0x3e00008
    ctx->pc = 0x1FDC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDC8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FDC50u: goto label_1fdc50;
            case 0x1FDC64u: goto label_1fdc64;
            case 0x1FDC7Cu: goto label_1fdc7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FDC90u;
}
