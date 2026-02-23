#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTRN_CallTrtTrif
// Address: 0x19f328 - 0x19f378
void SFTRN_CallTrtTrif_0x19f328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTRN_CallTrtTrif");


    ctx->pc = 0x19f328u;

label_19f328:
    // 0x19f328: 0x240206e0
    ctx->pc = 0x19f328u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1760));
label_19f32c:
    // 0x19f32c: 0x27bdfff0
    ctx->pc = 0x19f32cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_19f330:
    // 0x19f330: 0xa21818
    ctx->pc = 0x19f330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
label_19f334:
    // 0x19f334: 0xffbf0000
    ctx->pc = 0x19f334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19f338:
    // 0x19f338: 0x642821
    ctx->pc = 0x19f338u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19f33c:
    // 0x19f33c: 0xc0182d
    ctx->pc = 0x19f33cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19f340:
    // 0x19f340: 0x8ca63020
    ctx->pc = 0x19f340u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 12320)));
label_19f344:
    // 0x19f344: 0x14c00003
label_19f348:
    if (ctx->pc == 0x19F348u) {
        ctx->pc = 0x19F348u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x19F34Cu;
        goto label_19f34c;
    }
    ctx->pc = 0x19F344u;
    {
        const bool branch_taken_0x19f344 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x19F348u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x19f344) {
            ctx->pc = 0x19F354u;
            goto label_19f354;
        }
    }
    ctx->pc = 0x19F34Cu;
label_19f34c:
    // 0x19f34c: 0x10000007
label_19f350:
    if (ctx->pc == 0x19F350u) {
        ctx->pc = 0x19F350u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19F354u;
        goto label_19f354;
    }
    ctx->pc = 0x19F34Cu;
    {
        const bool branch_taken_0x19f34c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F350u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19f34c) {
            ctx->pc = 0x19F36Cu;
            goto label_19f36c;
        }
    }
    ctx->pc = 0x19F354u;
label_19f354:
    // 0x19f354: 0xe0282d
    ctx->pc = 0x19f354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19f358:
    // 0x19f358: 0x661821
    ctx->pc = 0x19f358u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_19f35c:
    // 0x19f35c: 0x382d
    ctx->pc = 0x19f35cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f360:
    // 0x19f360: 0x8c620000
    ctx->pc = 0x19f360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19f364:
    // 0x19f364: 0x40f809
label_19f368:
    if (ctx->pc == 0x19F368u) {
        ctx->pc = 0x19F368u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19F36Cu;
        goto label_19f36c;
    }
    ctx->pc = 0x19F364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F36Cu);
        ctx->pc = 0x19F368u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F328u: goto label_19f328;
            case 0x19F32Cu: goto label_19f32c;
            case 0x19F330u: goto label_19f330;
            case 0x19F334u: goto label_19f334;
            case 0x19F338u: goto label_19f338;
            case 0x19F33Cu: goto label_19f33c;
            case 0x19F340u: goto label_19f340;
            case 0x19F344u: goto label_19f344;
            case 0x19F348u: goto label_19f348;
            case 0x19F34Cu: goto label_19f34c;
            case 0x19F350u: goto label_19f350;
            case 0x19F354u: goto label_19f354;
            case 0x19F358u: goto label_19f358;
            case 0x19F35Cu: goto label_19f35c;
            case 0x19F360u: goto label_19f360;
            case 0x19F364u: goto label_19f364;
            case 0x19F368u: goto label_19f368;
            case 0x19F36Cu: goto label_19f36c;
            case 0x19F370u: goto label_19f370;
            case 0x19F374u: goto label_19f374;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            const uint32_t __entryPc = ctx->pc;
            if (jumpTarget == 0x195968u) {
                SET_GPR_U32(ctx, 2, 0u);
                ctx->pc = 0x19F36Cu;
            } else {
                auto targetFn = runtime->lookupFunction(jumpTarget);
                targetFn(rdram, ctx, runtime);
            }
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19F36Cu; }
            if (ctx->pc != 0x19F36Cu) { return; }
        }
    }
    ctx->pc = 0x19F36Cu;
label_19f36c:
    // 0x19f36c: 0xdfbf0000
    ctx->pc = 0x19f36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f370:
    // 0x19f370: 0x3e00008
label_19f374:
    if (ctx->pc == 0x19F374u) {
        ctx->pc = 0x19F374u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x19F378u;
        goto label_fallthrough_0x19f370;
    }
    ctx->pc = 0x19F370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F374u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F328u: goto label_19f328;
            case 0x19F32Cu: goto label_19f32c;
            case 0x19F330u: goto label_19f330;
            case 0x19F334u: goto label_19f334;
            case 0x19F338u: goto label_19f338;
            case 0x19F33Cu: goto label_19f33c;
            case 0x19F340u: goto label_19f340;
            case 0x19F344u: goto label_19f344;
            case 0x19F348u: goto label_19f348;
            case 0x19F34Cu: goto label_19f34c;
            case 0x19F350u: goto label_19f350;
            case 0x19F354u: goto label_19f354;
            case 0x19F358u: goto label_19f358;
            case 0x19F35Cu: goto label_19f35c;
            case 0x19F360u: goto label_19f360;
            case 0x19F364u: goto label_19f364;
            case 0x19F368u: goto label_19f368;
            case 0x19F36Cu: goto label_19f36c;
            case 0x19F370u: goto label_19f370;
            case 0x19F374u: goto label_19f374;
            default: break;
        }
        return;
    }
label_fallthrough_0x19f370:
    ctx->pc = 0x19F378u;
}
