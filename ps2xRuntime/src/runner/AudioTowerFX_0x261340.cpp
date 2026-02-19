#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTowerFX
// Address: 0x261340 - 0x2613c0
void AudioTowerFX_0x261340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x261340u;

label_261340:
    // 0x261340: 0x2483ffff
    ctx->pc = 0x261340u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967295));
label_261344:
    // 0x261344: 0x2c620015
    ctx->pc = 0x261344u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 21));
label_261348:
    // 0x261348: 0x10400015
label_26134c:
    if (ctx->pc == 0x26134Cu) {
        ctx->pc = 0x26134Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x261350u;
        goto label_261350;
    }
    ctx->pc = 0x261348u;
    {
        const bool branch_taken_0x261348 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26134Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x261348) {
            ctx->pc = 0x2613A0u;
            goto label_2613a0;
        }
    }
    ctx->pc = 0x261350u;
label_261350:
    // 0x261350: 0x3c02003b
    ctx->pc = 0x261350u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_261354:
    // 0x261354: 0x24429720
    ctx->pc = 0x261354u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940448));
label_261358:
    // 0x261358: 0x31880
    ctx->pc = 0x261358u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_26135c:
    // 0x26135c: 0x621821
    ctx->pc = 0x26135cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_261360:
    // 0x261360: 0x8c620000
    ctx->pc = 0x261360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_261364:
    // 0x261364: 0x400008
label_261368:
    if (ctx->pc == 0x261368u) {
        ctx->pc = 0x26136Cu;
        goto label_26136c;
    }
    ctx->pc = 0x261364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x261340u: goto label_261340;
            case 0x261344u: goto label_261344;
            case 0x261348u: goto label_261348;
            case 0x26134Cu: goto label_26134c;
            case 0x261350u: goto label_261350;
            case 0x261354u: goto label_261354;
            case 0x261358u: goto label_261358;
            case 0x26135Cu: goto label_26135c;
            case 0x261360u: goto label_261360;
            case 0x261364u: goto label_261364;
            case 0x261368u: goto label_261368;
            case 0x26136Cu: goto label_26136c;
            case 0x261370u: goto label_261370;
            case 0x261374u: goto label_261374;
            case 0x261378u: goto label_261378;
            case 0x26137Cu: goto label_26137c;
            case 0x261380u: goto label_261380;
            case 0x261384u: goto label_261384;
            case 0x261388u: goto label_261388;
            case 0x26138Cu: goto label_26138c;
            case 0x261390u: goto label_261390;
            case 0x261394u: goto label_261394;
            case 0x261398u: goto label_261398;
            case 0x26139Cu: goto label_26139c;
            case 0x2613A0u: goto label_2613a0;
            case 0x2613A4u: goto label_2613a4;
            case 0x2613A8u: goto label_2613a8;
            case 0x2613ACu: goto label_2613ac;
            case 0x2613B0u: goto label_2613b0;
            case 0x2613B4u: goto label_2613b4;
            case 0x2613B8u: goto label_2613b8;
            case 0x2613BCu: goto label_2613bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26136Cu;
label_26136c:
    // 0x26136c: 0x3c05000e
    ctx->pc = 0x26136cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)14 << 16));
label_261370:
    // 0x261370: 0x1000000b
label_261374:
    if (ctx->pc == 0x261374u) {
        ctx->pc = 0x261374u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 163));
        ctx->pc = 0x261378u;
        goto label_261378;
    }
    ctx->pc = 0x261370u;
    {
        const bool branch_taken_0x261370 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x261374u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 163));
        if (branch_taken_0x261370) {
            ctx->pc = 0x2613A0u;
            goto label_2613a0;
        }
    }
    ctx->pc = 0x261378u;
label_261378:
    // 0x261378: 0x10000009
label_26137c:
    if (ctx->pc == 0x26137Cu) {
        ctx->pc = 0x26137Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x261380u;
        goto label_261380;
    }
    ctx->pc = 0x261378u;
    {
        const bool branch_taken_0x261378 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26137Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 22));
        if (branch_taken_0x261378) {
            ctx->pc = 0x2613A0u;
            goto label_2613a0;
        }
    }
    ctx->pc = 0x261380u;
label_261380:
    // 0x261380: 0x3c05000e
    ctx->pc = 0x261380u;
    SET_GPR_U32(ctx, 5, ((uint32_t)14 << 16));
label_261384:
    // 0x261384: 0x10000006
label_261388:
    if (ctx->pc == 0x261388u) {
        ctx->pc = 0x261388u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 170));
        ctx->pc = 0x26138Cu;
        goto label_26138c;
    }
    ctx->pc = 0x261384u;
    {
        const bool branch_taken_0x261384 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x261388u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 170));
        if (branch_taken_0x261384) {
            ctx->pc = 0x2613A0u;
            goto label_2613a0;
        }
    }
    ctx->pc = 0x26138Cu;
label_26138c:
    // 0x26138c: 0x3c05000e
    ctx->pc = 0x26138cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)14 << 16));
label_261390:
    // 0x261390: 0x10000003
label_261394:
    if (ctx->pc == 0x261394u) {
        ctx->pc = 0x261394u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 171));
        ctx->pc = 0x261398u;
        goto label_261398;
    }
    ctx->pc = 0x261390u;
    {
        const bool branch_taken_0x261390 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x261394u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 171));
        if (branch_taken_0x261390) {
            ctx->pc = 0x2613A0u;
            goto label_2613a0;
        }
    }
    ctx->pc = 0x261398u;
label_261398:
    // 0x261398: 0x3c05000e
    ctx->pc = 0x261398u;
    SET_GPR_U32(ctx, 5, ((uint32_t)14 << 16));
label_26139c:
    // 0x26139c: 0x34a500a9
    ctx->pc = 0x26139cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 169));
label_2613a0:
    // 0x2613a0: 0x4a00005
label_2613a4:
    if (ctx->pc == 0x2613A4u) {
        ctx->pc = 0x2613A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2613A8u;
        goto label_2613a8;
    }
    ctx->pc = 0x2613A0u;
    {
        const bool branch_taken_0x2613a0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2613A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2613a0) {
            ctx->pc = 0x2613B8u;
            goto label_2613b8;
        }
    }
    ctx->pc = 0x2613A8u;
label_2613a8:
    // 0x2613a8: 0x282d
    ctx->pc = 0x2613a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2613ac:
    // 0x2613ac: 0x240600ff
    ctx->pc = 0x2613acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
label_2613b0:
    // 0x2613b0: 0x8088a26
label_2613b4:
    if (ctx->pc == 0x2613B4u) {
        ctx->pc = 0x2613B4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2613B8u;
        goto label_2613b8;
    }
    ctx->pc = 0x2613B0u;
    ctx->pc = 0x2613B4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x2613B8u;
label_2613b8:
    // 0x2613b8: 0x3e00008
label_2613bc:
    if (ctx->pc == 0x2613BCu) {
        ctx->pc = 0x2613C0u;
        goto label_fallthrough_0x2613b8;
    }
    ctx->pc = 0x2613B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x261340u: goto label_261340;
            case 0x261344u: goto label_261344;
            case 0x261348u: goto label_261348;
            case 0x26134Cu: goto label_26134c;
            case 0x261350u: goto label_261350;
            case 0x261354u: goto label_261354;
            case 0x261358u: goto label_261358;
            case 0x26135Cu: goto label_26135c;
            case 0x261360u: goto label_261360;
            case 0x261364u: goto label_261364;
            case 0x261368u: goto label_261368;
            case 0x26136Cu: goto label_26136c;
            case 0x261370u: goto label_261370;
            case 0x261374u: goto label_261374;
            case 0x261378u: goto label_261378;
            case 0x26137Cu: goto label_26137c;
            case 0x261380u: goto label_261380;
            case 0x261384u: goto label_261384;
            case 0x261388u: goto label_261388;
            case 0x26138Cu: goto label_26138c;
            case 0x261390u: goto label_261390;
            case 0x261394u: goto label_261394;
            case 0x261398u: goto label_261398;
            case 0x26139Cu: goto label_26139c;
            case 0x2613A0u: goto label_2613a0;
            case 0x2613A4u: goto label_2613a4;
            case 0x2613A8u: goto label_2613a8;
            case 0x2613ACu: goto label_2613ac;
            case 0x2613B0u: goto label_2613b0;
            case 0x2613B4u: goto label_2613b4;
            case 0x2613B8u: goto label_2613b8;
            case 0x2613BCu: goto label_2613bc;
            default: break;
        }
        return;
    }
label_fallthrough_0x2613b8:
    ctx->pc = 0x2613C0u;
}
