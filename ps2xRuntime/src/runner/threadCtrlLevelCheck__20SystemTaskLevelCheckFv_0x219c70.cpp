#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: threadCtrlLevelCheck__20SystemTaskLevelCheckFv
// Address: 0x219c70 - 0x219cdc
void threadCtrlLevelCheck__20SystemTaskLevelCheckFv_0x219c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("threadCtrlLevelCheck__20SystemTaskLevelCheckFv");


    ctx->pc = 0x219c70u;

label_219c70:
    // 0x219c70: 0x27bdffc0
    ctx->pc = 0x219c70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_219c74:
    // 0x219c74: 0x7fbf0030
    ctx->pc = 0x219c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_219c78:
    // 0x219c78: 0x7fb20020
    ctx->pc = 0x219c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_219c7c:
    // 0x219c7c: 0x7fb10010
    ctx->pc = 0x219c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_219c80:
    // 0x219c80: 0x7fb00000
    ctx->pc = 0x219c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_219c84:
    // 0x219c84: 0x8c910034
    ctx->pc = 0x219c84u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_219c88:
    // 0x219c88: 0x70809628
    ctx->pc = 0x219c88u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_219c8c:
    // 0x219c8c: 0xae510038
    ctx->pc = 0x219c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 17));
label_219c90:
    // 0x219c90: 0x96300008
    ctx->pc = 0x219c90u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_219c94:
    // 0x219c94: 0x3c020050
    ctx->pc = 0x219c94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_219c98:
    // 0x219c98: 0xc07ce18
label_219c9c:
    if (ctx->pc == 0x219C9Cu) {
        ctx->pc = 0x219C9Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
        ctx->pc = 0x219CA0u;
        goto label_219ca0;
    }
    ctx->pc = 0x219C98u;
    SET_GPR_U32(ctx, 31, 0x219CA0u);
    ctx->pc = 0x219C9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219CA0u; }
        else if (ctx->pc != 0x219CA0u) { ctx->pc = 0x219CA0u; }
    }
    if (ctx->pc != 0x219CA0u) { return; }
    ctx->pc = 0x219CA0u;
label_219ca0:
    // 0x219ca0: 0x202182a
    ctx->pc = 0x219ca0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
label_219ca4:
    // 0x219ca4: 0x14600004
label_219ca8:
    if (ctx->pc == 0x219CA8u) {
        ctx->pc = 0x219CACu;
        goto label_219cac;
    }
    ctx->pc = 0x219CA4u;
    {
        const bool branch_taken_0x219ca4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x219ca4) {
            ctx->pc = 0x219CB8u;
            goto label_219cb8;
        }
    }
    ctx->pc = 0x219CACu;
label_219cac:
    // 0x219cac: 0x8e220000
    ctx->pc = 0x219cacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_219cb0:
    // 0x219cb0: 0x40f809
label_219cb4:
    if (ctx->pc == 0x219CB4u) {
        ctx->pc = 0x219CB4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x219CB8u;
        goto label_219cb8;
    }
    ctx->pc = 0x219CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x219CB8u);
        ctx->pc = 0x219CB4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219C70u: goto label_219c70;
            case 0x219C74u: goto label_219c74;
            case 0x219C78u: goto label_219c78;
            case 0x219C7Cu: goto label_219c7c;
            case 0x219C80u: goto label_219c80;
            case 0x219C84u: goto label_219c84;
            case 0x219C88u: goto label_219c88;
            case 0x219C8Cu: goto label_219c8c;
            case 0x219C90u: goto label_219c90;
            case 0x219C94u: goto label_219c94;
            case 0x219C98u: goto label_219c98;
            case 0x219C9Cu: goto label_219c9c;
            case 0x219CA0u: goto label_219ca0;
            case 0x219CA4u: goto label_219ca4;
            case 0x219CA8u: goto label_219ca8;
            case 0x219CACu: goto label_219cac;
            case 0x219CB0u: goto label_219cb0;
            case 0x219CB4u: goto label_219cb4;
            case 0x219CB8u: goto label_219cb8;
            case 0x219CBCu: goto label_219cbc;
            case 0x219CC0u: goto label_219cc0;
            case 0x219CC4u: goto label_219cc4;
            case 0x219CC8u: goto label_219cc8;
            case 0x219CCCu: goto label_219ccc;
            case 0x219CD0u: goto label_219cd0;
            case 0x219CD4u: goto label_219cd4;
            case 0x219CD8u: goto label_219cd8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x219CB8u; }
            if (ctx->pc != 0x219CB8u) { return; }
        }
    }
    ctx->pc = 0x219CB8u;
label_219cb8:
    // 0x219cb8: 0x8e310010
    ctx->pc = 0x219cb8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_219cbc:
    // 0x219cbc: 0x1620fff3
label_219cc0:
    if (ctx->pc == 0x219CC0u) {
        ctx->pc = 0x219CC4u;
        goto label_219cc4;
    }
    ctx->pc = 0x219CBCu;
    {
        const bool branch_taken_0x219cbc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x219cbc) {
            ctx->pc = 0x219C8Cu;
            goto label_219c8c;
        }
    }
    ctx->pc = 0x219CC4u;
label_219cc4:
    // 0x219cc4: 0x7bbf0030
    ctx->pc = 0x219cc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_219cc8:
    // 0x219cc8: 0x7bb20020
    ctx->pc = 0x219cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_219ccc:
    // 0x219ccc: 0x7bb10010
    ctx->pc = 0x219cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_219cd0:
    // 0x219cd0: 0x7bb00000
    ctx->pc = 0x219cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_219cd4:
    // 0x219cd4: 0x3e00008
label_219cd8:
    if (ctx->pc == 0x219CD8u) {
        ctx->pc = 0x219CD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x219CDCu;
        goto label_fallthrough_0x219cd4;
    }
    ctx->pc = 0x219CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219CD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219C70u: goto label_219c70;
            case 0x219C74u: goto label_219c74;
            case 0x219C78u: goto label_219c78;
            case 0x219C7Cu: goto label_219c7c;
            case 0x219C80u: goto label_219c80;
            case 0x219C84u: goto label_219c84;
            case 0x219C88u: goto label_219c88;
            case 0x219C8Cu: goto label_219c8c;
            case 0x219C90u: goto label_219c90;
            case 0x219C94u: goto label_219c94;
            case 0x219C98u: goto label_219c98;
            case 0x219C9Cu: goto label_219c9c;
            case 0x219CA0u: goto label_219ca0;
            case 0x219CA4u: goto label_219ca4;
            case 0x219CA8u: goto label_219ca8;
            case 0x219CACu: goto label_219cac;
            case 0x219CB0u: goto label_219cb0;
            case 0x219CB4u: goto label_219cb4;
            case 0x219CB8u: goto label_219cb8;
            case 0x219CBCu: goto label_219cbc;
            case 0x219CC0u: goto label_219cc0;
            case 0x219CC4u: goto label_219cc4;
            case 0x219CC8u: goto label_219cc8;
            case 0x219CCCu: goto label_219ccc;
            case 0x219CD0u: goto label_219cd0;
            case 0x219CD4u: goto label_219cd4;
            case 0x219CD8u: goto label_219cd8;
            default: break;
        }
        return;
    }
label_fallthrough_0x219cd4:
    ctx->pc = 0x219CDCu;
}
