#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutAll__16CPutEntryControlFv
// Address: 0x216300 - 0x216348
void PutAll__16CPutEntryControlFv_0x216300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutAll__16CPutEntryControlFv");


    ctx->pc = 0x216300u;

label_216300:
    // 0x216300: 0x27bdffe0
    ctx->pc = 0x216300u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_216304:
    // 0x216304: 0x7fbf0010
    ctx->pc = 0x216304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_216308:
    // 0x216308: 0x7fb00000
    ctx->pc = 0x216308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21630c:
    // 0x21630c: 0x8c900000
    ctx->pc = 0x21630cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_216310:
    // 0x216310: 0x12000009
label_216314:
    if (ctx->pc == 0x216314u) {
        ctx->pc = 0x216318u;
        goto label_216318;
    }
    ctx->pc = 0x216310u;
    {
        const bool branch_taken_0x216310 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x216310) {
            ctx->pc = 0x216338u;
            goto label_216338;
        }
    }
    ctx->pc = 0x216318u;
label_216318:
    // 0x216318: 0x8e190004
    ctx->pc = 0x216318u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21631c:
    // 0x21631c: 0x8f390008
    ctx->pc = 0x21631cu;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_216320:
    // 0x216320: 0x320f809
label_216324:
    if (ctx->pc == 0x216324u) {
        ctx->pc = 0x216324u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x216328u;
        goto label_216328;
    }
    ctx->pc = 0x216320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x216328u);
        ctx->pc = 0x216324u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216300u: goto label_216300;
            case 0x216304u: goto label_216304;
            case 0x216308u: goto label_216308;
            case 0x21630Cu: goto label_21630c;
            case 0x216310u: goto label_216310;
            case 0x216314u: goto label_216314;
            case 0x216318u: goto label_216318;
            case 0x21631Cu: goto label_21631c;
            case 0x216320u: goto label_216320;
            case 0x216324u: goto label_216324;
            case 0x216328u: goto label_216328;
            case 0x21632Cu: goto label_21632c;
            case 0x216330u: goto label_216330;
            case 0x216334u: goto label_216334;
            case 0x216338u: goto label_216338;
            case 0x21633Cu: goto label_21633c;
            case 0x216340u: goto label_216340;
            case 0x216344u: goto label_216344;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x216328u; }
            if (ctx->pc != 0x216328u) { return; }
        }
    }
    ctx->pc = 0x216328u;
label_216328:
    // 0x216328: 0x8e100000
    ctx->pc = 0x216328u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21632c:
    // 0x21632c: 0x1600fffa
label_216330:
    if (ctx->pc == 0x216330u) {
        ctx->pc = 0x216334u;
        goto label_216334;
    }
    ctx->pc = 0x21632Cu;
    {
        const bool branch_taken_0x21632c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x21632c) {
            ctx->pc = 0x216318u;
            goto label_216318;
        }
    }
    ctx->pc = 0x216334u;
label_216334:
    // 0x216334: 0x0
    ctx->pc = 0x216334u;
    // NOP
label_216338:
    // 0x216338: 0x7bbf0010
    ctx->pc = 0x216338u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21633c:
    // 0x21633c: 0x7bb00000
    ctx->pc = 0x21633cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_216340:
    // 0x216340: 0x3e00008
label_216344:
    if (ctx->pc == 0x216344u) {
        ctx->pc = 0x216344u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x216348u;
        goto label_fallthrough_0x216340;
    }
    ctx->pc = 0x216340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216344u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216300u: goto label_216300;
            case 0x216304u: goto label_216304;
            case 0x216308u: goto label_216308;
            case 0x21630Cu: goto label_21630c;
            case 0x216310u: goto label_216310;
            case 0x216314u: goto label_216314;
            case 0x216318u: goto label_216318;
            case 0x21631Cu: goto label_21631c;
            case 0x216320u: goto label_216320;
            case 0x216324u: goto label_216324;
            case 0x216328u: goto label_216328;
            case 0x21632Cu: goto label_21632c;
            case 0x216330u: goto label_216330;
            case 0x216334u: goto label_216334;
            case 0x216338u: goto label_216338;
            case 0x21633Cu: goto label_21633c;
            case 0x216340u: goto label_216340;
            case 0x216344u: goto label_216344;
            default: break;
        }
        return;
    }
label_fallthrough_0x216340:
    ctx->pc = 0x216348u;
}
