#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: threadCtrlLevelCheck2__20SystemTaskLevelCheckFv
// Address: 0x219d10 - 0x219d98
void threadCtrlLevelCheck2__20SystemTaskLevelCheckFv_0x219d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("threadCtrlLevelCheck2__20SystemTaskLevelCheckFv");


    ctx->pc = 0x219d10u;

label_219d10:
    // 0x219d10: 0x27bdffc0
    ctx->pc = 0x219d10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_219d14:
    // 0x219d14: 0x7fbf0030
    ctx->pc = 0x219d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_219d18:
    // 0x219d18: 0x7fb20020
    ctx->pc = 0x219d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_219d1c:
    // 0x219d1c: 0x7fb10010
    ctx->pc = 0x219d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_219d20:
    // 0x219d20: 0x3c030029
    ctx->pc = 0x219d20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
label_219d24:
    // 0x219d24: 0x7fb00000
    ctx->pc = 0x219d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_219d28:
    // 0x219d28: 0x2463be88
    ctx->pc = 0x219d28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294950536));
label_219d2c:
    // 0x219d2c: 0x8c630008
    ctx->pc = 0x219d2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_219d30:
    // 0x219d30: 0xac830000
    ctx->pc = 0x219d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_219d34:
    // 0x219d34: 0x8c830038
    ctx->pc = 0x219d34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_219d38:
    // 0x219d38: 0x8c720010
    ctx->pc = 0x219d38u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_219d3c:
    // 0x219d3c: 0x12400010
label_219d40:
    if (ctx->pc == 0x219D40u) {
        ctx->pc = 0x219D40u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x219D44u;
        goto label_219d44;
    }
    ctx->pc = 0x219D3Cu;
    {
        const bool branch_taken_0x219d3c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x219D40u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x219d3c) {
            ctx->pc = 0x219D80u;
            goto label_219d80;
        }
    }
    ctx->pc = 0x219D44u;
label_219d44:
    // 0x219d44: 0xae120038
    ctx->pc = 0x219d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 18));
label_219d48:
    // 0x219d48: 0x96510008
    ctx->pc = 0x219d48u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_219d4c:
    // 0x219d4c: 0x3c020050
    ctx->pc = 0x219d4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_219d50:
    // 0x219d50: 0xc07ce18
label_219d54:
    if (ctx->pc == 0x219D54u) {
        ctx->pc = 0x219D54u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
        ctx->pc = 0x219D58u;
        goto label_219d58;
    }
    ctx->pc = 0x219D50u;
    SET_GPR_U32(ctx, 31, 0x219D58u);
    ctx->pc = 0x219D54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219D58u; }
        else if (ctx->pc != 0x219D58u) { ctx->pc = 0x219D58u; }
    }
    if (ctx->pc != 0x219D58u) { return; }
    ctx->pc = 0x219D58u;
label_219d58:
    // 0x219d58: 0x222182a
    ctx->pc = 0x219d58u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_219d5c:
    // 0x219d5c: 0x14600004
label_219d60:
    if (ctx->pc == 0x219D60u) {
        ctx->pc = 0x219D64u;
        goto label_219d64;
    }
    ctx->pc = 0x219D5Cu;
    {
        const bool branch_taken_0x219d5c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x219d5c) {
            ctx->pc = 0x219D70u;
            goto label_219d70;
        }
    }
    ctx->pc = 0x219D64u;
label_219d64:
    // 0x219d64: 0x8e420000
    ctx->pc = 0x219d64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_219d68:
    // 0x219d68: 0x40f809
label_219d6c:
    if (ctx->pc == 0x219D6Cu) {
        ctx->pc = 0x219D6Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x219D70u;
        goto label_219d70;
    }
    ctx->pc = 0x219D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x219D70u);
        ctx->pc = 0x219D6Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219D10u: goto label_219d10;
            case 0x219D14u: goto label_219d14;
            case 0x219D18u: goto label_219d18;
            case 0x219D1Cu: goto label_219d1c;
            case 0x219D20u: goto label_219d20;
            case 0x219D24u: goto label_219d24;
            case 0x219D28u: goto label_219d28;
            case 0x219D2Cu: goto label_219d2c;
            case 0x219D30u: goto label_219d30;
            case 0x219D34u: goto label_219d34;
            case 0x219D38u: goto label_219d38;
            case 0x219D3Cu: goto label_219d3c;
            case 0x219D40u: goto label_219d40;
            case 0x219D44u: goto label_219d44;
            case 0x219D48u: goto label_219d48;
            case 0x219D4Cu: goto label_219d4c;
            case 0x219D50u: goto label_219d50;
            case 0x219D54u: goto label_219d54;
            case 0x219D58u: goto label_219d58;
            case 0x219D5Cu: goto label_219d5c;
            case 0x219D60u: goto label_219d60;
            case 0x219D64u: goto label_219d64;
            case 0x219D68u: goto label_219d68;
            case 0x219D6Cu: goto label_219d6c;
            case 0x219D70u: goto label_219d70;
            case 0x219D74u: goto label_219d74;
            case 0x219D78u: goto label_219d78;
            case 0x219D7Cu: goto label_219d7c;
            case 0x219D80u: goto label_219d80;
            case 0x219D84u: goto label_219d84;
            case 0x219D88u: goto label_219d88;
            case 0x219D8Cu: goto label_219d8c;
            case 0x219D90u: goto label_219d90;
            case 0x219D94u: goto label_219d94;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x219D70u; }
            if (ctx->pc != 0x219D70u) { return; }
        }
    }
    ctx->pc = 0x219D70u;
label_219d70:
    // 0x219d70: 0x8e520010
    ctx->pc = 0x219d70u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_219d74:
    // 0x219d74: 0x1640fff3
label_219d78:
    if (ctx->pc == 0x219D78u) {
        ctx->pc = 0x219D7Cu;
        goto label_219d7c;
    }
    ctx->pc = 0x219D74u;
    {
        const bool branch_taken_0x219d74 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x219d74) {
            ctx->pc = 0x219D44u;
            goto label_219d44;
        }
    }
    ctx->pc = 0x219D7Cu;
label_219d7c:
    // 0x219d7c: 0x0
    ctx->pc = 0x219d7cu;
    // NOP
label_219d80:
    // 0x219d80: 0x7bbf0030
    ctx->pc = 0x219d80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_219d84:
    // 0x219d84: 0x7bb20020
    ctx->pc = 0x219d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_219d88:
    // 0x219d88: 0x7bb10010
    ctx->pc = 0x219d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_219d8c:
    // 0x219d8c: 0x7bb00000
    ctx->pc = 0x219d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_219d90:
    // 0x219d90: 0x3e00008
label_219d94:
    if (ctx->pc == 0x219D94u) {
        ctx->pc = 0x219D94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x219D98u;
        goto label_fallthrough_0x219d90;
    }
    ctx->pc = 0x219D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219D94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219D10u: goto label_219d10;
            case 0x219D14u: goto label_219d14;
            case 0x219D18u: goto label_219d18;
            case 0x219D1Cu: goto label_219d1c;
            case 0x219D20u: goto label_219d20;
            case 0x219D24u: goto label_219d24;
            case 0x219D28u: goto label_219d28;
            case 0x219D2Cu: goto label_219d2c;
            case 0x219D30u: goto label_219d30;
            case 0x219D34u: goto label_219d34;
            case 0x219D38u: goto label_219d38;
            case 0x219D3Cu: goto label_219d3c;
            case 0x219D40u: goto label_219d40;
            case 0x219D44u: goto label_219d44;
            case 0x219D48u: goto label_219d48;
            case 0x219D4Cu: goto label_219d4c;
            case 0x219D50u: goto label_219d50;
            case 0x219D54u: goto label_219d54;
            case 0x219D58u: goto label_219d58;
            case 0x219D5Cu: goto label_219d5c;
            case 0x219D60u: goto label_219d60;
            case 0x219D64u: goto label_219d64;
            case 0x219D68u: goto label_219d68;
            case 0x219D6Cu: goto label_219d6c;
            case 0x219D70u: goto label_219d70;
            case 0x219D74u: goto label_219d74;
            case 0x219D78u: goto label_219d78;
            case 0x219D7Cu: goto label_219d7c;
            case 0x219D80u: goto label_219d80;
            case 0x219D84u: goto label_219d84;
            case 0x219D88u: goto label_219d88;
            case 0x219D8Cu: goto label_219d8c;
            case 0x219D90u: goto label_219d90;
            case 0x219D94u: goto label_219d94;
            default: break;
        }
        return;
    }
label_fallthrough_0x219d90:
    ctx->pc = 0x219D98u;
}
