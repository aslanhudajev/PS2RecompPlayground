#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFAOAP_SetSpeed
// Address: 0x191150 - 0x191198
void SFAOAP_SetSpeed_0x191150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFAOAP_SetSpeed");


    ctx->pc = 0x191150u;

label_191150:
    // 0x191150: 0x27bdffd0
    ctx->pc = 0x191150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_191154:
    // 0x191154: 0xffb10010
    ctx->pc = 0x191154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_191158:
    // 0x191158: 0xffb00000
    ctx->pc = 0x191158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19115c:
    // 0x19115c: 0xa0882d
    ctx->pc = 0x19115cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_191160:
    // 0x191160: 0x80802d
    ctx->pc = 0x191160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191164:
    // 0x191164: 0xffbf0020
    ctx->pc = 0x191164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_191168:
    // 0x191168: 0xc0674c2
label_19116c:
    if (ctx->pc == 0x19116Cu) {
        ctx->pc = 0x19116Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x191170u;
        goto label_191170;
    }
    ctx->pc = 0x191168u;
    SET_GPR_U32(ctx, 31, 0x191170u);
    ctx->pc = 0x19116Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191170u; }
        else if (ctx->pc != 0x191170u) { ctx->pc = 0x191170u; }
    }
    if (ctx->pc != 0x191170u) { return; }
    ctx->pc = 0x191170u;
label_191170:
    // 0x191170: 0x10400004
label_191174:
    if (ctx->pc == 0x191174u) {
        ctx->pc = 0x191174u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191178u;
        goto label_191178;
    }
    ctx->pc = 0x191170u;
    {
        const bool branch_taken_0x191170 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x191174u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191170) {
            ctx->pc = 0x191184u;
            goto label_191184;
        }
    }
    ctx->pc = 0x191178u;
label_191178:
    // 0x191178: 0x8e0259b4
    ctx->pc = 0x191178u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 22964)));
label_19117c:
    // 0x19117c: 0x40f809
label_191180:
    if (ctx->pc == 0x191180u) {
        ctx->pc = 0x191180u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191184u;
        goto label_191184;
    }
    ctx->pc = 0x19117Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191184u);
        ctx->pc = 0x191180u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191150u: goto label_191150;
            case 0x191154u: goto label_191154;
            case 0x191158u: goto label_191158;
            case 0x19115Cu: goto label_19115c;
            case 0x191160u: goto label_191160;
            case 0x191164u: goto label_191164;
            case 0x191168u: goto label_191168;
            case 0x19116Cu: goto label_19116c;
            case 0x191170u: goto label_191170;
            case 0x191174u: goto label_191174;
            case 0x191178u: goto label_191178;
            case 0x19117Cu: goto label_19117c;
            case 0x191180u: goto label_191180;
            case 0x191184u: goto label_191184;
            case 0x191188u: goto label_191188;
            case 0x19118Cu: goto label_19118c;
            case 0x191190u: goto label_191190;
            case 0x191194u: goto label_191194;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191184u; }
            if (ctx->pc != 0x191184u) { return; }
        }
    }
    ctx->pc = 0x191184u;
label_191184:
    // 0x191184: 0xdfbf0020
    ctx->pc = 0x191184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_191188:
    // 0x191188: 0xdfb10010
    ctx->pc = 0x191188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19118c:
    // 0x19118c: 0xdfb00000
    ctx->pc = 0x19118cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191190:
    // 0x191190: 0x3e00008
label_191194:
    if (ctx->pc == 0x191194u) {
        ctx->pc = 0x191194u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x191198u;
        goto label_fallthrough_0x191190;
    }
    ctx->pc = 0x191190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191194u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191150u: goto label_191150;
            case 0x191154u: goto label_191154;
            case 0x191158u: goto label_191158;
            case 0x19115Cu: goto label_19115c;
            case 0x191160u: goto label_191160;
            case 0x191164u: goto label_191164;
            case 0x191168u: goto label_191168;
            case 0x19116Cu: goto label_19116c;
            case 0x191170u: goto label_191170;
            case 0x191174u: goto label_191174;
            case 0x191178u: goto label_191178;
            case 0x19117Cu: goto label_19117c;
            case 0x191180u: goto label_191180;
            case 0x191184u: goto label_191184;
            case 0x191188u: goto label_191188;
            case 0x19118Cu: goto label_19118c;
            case 0x191190u: goto label_191190;
            case 0x191194u: goto label_191194;
            default: break;
        }
        return;
    }
label_fallthrough_0x191190:
    ctx->pc = 0x191198u;
}
