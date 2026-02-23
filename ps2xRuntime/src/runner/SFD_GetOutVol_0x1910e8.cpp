#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetOutVol
// Address: 0x1910e8 - 0x19114c
void SFD_GetOutVol_0x1910e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetOutVol");


    ctx->pc = 0x1910e8u;

label_1910e8:
    // 0x1910e8: 0x27bdffe0
    ctx->pc = 0x1910e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1910ec:
    // 0x1910ec: 0xffb00000
    ctx->pc = 0x1910ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1910f0:
    // 0x1910f0: 0xffbf0010
    ctx->pc = 0x1910f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1910f4:
    // 0x1910f4: 0xc064f1e
label_1910f8:
    if (ctx->pc == 0x1910F8u) {
        ctx->pc = 0x1910F8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1910FCu;
        goto label_1910fc;
    }
    ctx->pc = 0x1910F4u;
    SET_GPR_U32(ctx, 31, 0x1910FCu);
    ctx->pc = 0x1910F8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910FCu; }
        else if (ctx->pc != 0x1910FCu) { ctx->pc = 0x1910FCu; }
    }
    if (ctx->pc != 0x1910FCu) { return; }
    ctx->pc = 0x1910FCu;
label_1910fc:
    // 0x1910fc: 0x10400006
label_191100:
    if (ctx->pc == 0x191100u) {
        ctx->pc = 0x191100u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191104u;
        goto label_191104;
    }
    ctx->pc = 0x1910FCu;
    {
        const bool branch_taken_0x1910fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x191100u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1910fc) {
            ctx->pc = 0x191118u;
            goto label_191118;
        }
    }
    ctx->pc = 0x191104u;
label_191104:
    // 0x191104: 0x3c05ff00
    ctx->pc = 0x191104u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
label_191108:
    // 0x191108: 0xc064ea0
label_19110c:
    if (ctx->pc == 0x19110Cu) {
        ctx->pc = 0x19110Cu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 420));
        ctx->pc = 0x191110u;
        goto label_191110;
    }
    ctx->pc = 0x191108u;
    SET_GPR_U32(ctx, 31, 0x191110u);
    ctx->pc = 0x19110Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 420));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191110u; }
        else if (ctx->pc != 0x191110u) { ctx->pc = 0x191110u; }
    }
    if (ctx->pc != 0x191110u) { return; }
    ctx->pc = 0x191110u;
label_191110:
    // 0x191110: 0x1000000a
label_191114:
    if (ctx->pc == 0x191114u) {
        ctx->pc = 0x191114u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191118u;
        goto label_191118;
    }
    ctx->pc = 0x191110u;
    {
        const bool branch_taken_0x191110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x191114u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191110) {
            ctx->pc = 0x19113Cu;
            goto label_19113c;
        }
    }
    ctx->pc = 0x191118u;
label_191118:
    // 0x191118: 0x200202d
    ctx->pc = 0x191118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19111c:
    // 0x19111c: 0xc0674c2
label_191120:
    if (ctx->pc == 0x191120u) {
        ctx->pc = 0x191120u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x191124u;
        goto label_191124;
    }
    ctx->pc = 0x19111Cu;
    SET_GPR_U32(ctx, 31, 0x191124u);
    ctx->pc = 0x191120u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191124u; }
        else if (ctx->pc != 0x191124u) { ctx->pc = 0x191124u; }
    }
    if (ctx->pc != 0x191124u) { return; }
    ctx->pc = 0x191124u;
label_191124:
    // 0x191124: 0x54400003
label_191128:
    if (ctx->pc == 0x191128u) {
        ctx->pc = 0x191128u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 22960)));
        ctx->pc = 0x19112Cu;
        goto label_19112c;
    }
    ctx->pc = 0x191124u;
    {
        const bool branch_taken_0x191124 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x191124) {
            ctx->pc = 0x191128u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 22960)));
            ctx->pc = 0x191134u;
            goto label_191134;
        }
    }
    ctx->pc = 0x19112Cu;
label_19112c:
    // 0x19112c: 0x10000003
label_191130:
    if (ctx->pc == 0x191130u) {
        ctx->pc = 0x191130u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191134u;
        goto label_191134;
    }
    ctx->pc = 0x19112Cu;
    {
        const bool branch_taken_0x19112c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x191130u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19112c) {
            ctx->pc = 0x19113Cu;
            goto label_19113c;
        }
    }
    ctx->pc = 0x191134u;
label_191134:
    // 0x191134: 0x40f809
label_191138:
    if (ctx->pc == 0x191138u) {
        ctx->pc = 0x191138u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19113Cu;
        goto label_19113c;
    }
    ctx->pc = 0x191134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19113Cu);
        ctx->pc = 0x191138u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1910E8u: goto label_1910e8;
            case 0x1910ECu: goto label_1910ec;
            case 0x1910F0u: goto label_1910f0;
            case 0x1910F4u: goto label_1910f4;
            case 0x1910F8u: goto label_1910f8;
            case 0x1910FCu: goto label_1910fc;
            case 0x191100u: goto label_191100;
            case 0x191104u: goto label_191104;
            case 0x191108u: goto label_191108;
            case 0x19110Cu: goto label_19110c;
            case 0x191110u: goto label_191110;
            case 0x191114u: goto label_191114;
            case 0x191118u: goto label_191118;
            case 0x19111Cu: goto label_19111c;
            case 0x191120u: goto label_191120;
            case 0x191124u: goto label_191124;
            case 0x191128u: goto label_191128;
            case 0x19112Cu: goto label_19112c;
            case 0x191130u: goto label_191130;
            case 0x191134u: goto label_191134;
            case 0x191138u: goto label_191138;
            case 0x19113Cu: goto label_19113c;
            case 0x191140u: goto label_191140;
            case 0x191144u: goto label_191144;
            case 0x191148u: goto label_191148;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19113Cu; }
            if (ctx->pc != 0x19113Cu) { return; }
        }
    }
    ctx->pc = 0x19113Cu;
label_19113c:
    // 0x19113c: 0xdfbf0010
    ctx->pc = 0x19113cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_191140:
    // 0x191140: 0xdfb00000
    ctx->pc = 0x191140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191144:
    // 0x191144: 0x3e00008
label_191148:
    if (ctx->pc == 0x191148u) {
        ctx->pc = 0x191148u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x19114Cu;
        goto label_fallthrough_0x191144;
    }
    ctx->pc = 0x191144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191148u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1910E8u: goto label_1910e8;
            case 0x1910ECu: goto label_1910ec;
            case 0x1910F0u: goto label_1910f0;
            case 0x1910F4u: goto label_1910f4;
            case 0x1910F8u: goto label_1910f8;
            case 0x1910FCu: goto label_1910fc;
            case 0x191100u: goto label_191100;
            case 0x191104u: goto label_191104;
            case 0x191108u: goto label_191108;
            case 0x19110Cu: goto label_19110c;
            case 0x191110u: goto label_191110;
            case 0x191114u: goto label_191114;
            case 0x191118u: goto label_191118;
            case 0x19111Cu: goto label_19111c;
            case 0x191120u: goto label_191120;
            case 0x191124u: goto label_191124;
            case 0x191128u: goto label_191128;
            case 0x19112Cu: goto label_19112c;
            case 0x191130u: goto label_191130;
            case 0x191134u: goto label_191134;
            case 0x191138u: goto label_191138;
            case 0x19113Cu: goto label_19113c;
            case 0x191140u: goto label_191140;
            case 0x191144u: goto label_191144;
            case 0x191148u: goto label_191148;
            default: break;
        }
        return;
    }
label_fallthrough_0x191144:
    ctx->pc = 0x19114Cu;
}
