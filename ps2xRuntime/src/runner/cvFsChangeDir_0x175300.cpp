#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsChangeDir
// Address: 0x175300 - 0x1753b0
void cvFsChangeDir_0x175300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsChangeDir");


    ctx->pc = 0x175300u;

label_175300:
    // 0x175300: 0x27bdfd70
    ctx->pc = 0x175300u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966640));
label_175304:
    // 0x175304: 0xffb00260
    ctx->pc = 0x175304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_175308:
    // 0x175308: 0xffbf0280
    ctx->pc = 0x175308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
label_17530c:
    // 0x17530c: 0x80802d
    ctx->pc = 0x17530cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175310:
    // 0x175310: 0x16000004
label_175314:
    if (ctx->pc == 0x175314u) {
        ctx->pc = 0x175314u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 17));
        ctx->pc = 0x175318u;
        goto label_175318;
    }
    ctx->pc = 0x175310u;
    {
        const bool branch_taken_0x175310 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x175314u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 17));
        if (branch_taken_0x175310) {
            ctx->pc = 0x175324u;
            goto label_175324;
        }
    }
    ctx->pc = 0x175318u;
label_175318:
    // 0x175318: 0x3c04002c
    ctx->pc = 0x175318u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17531c:
    // 0x17531c: 0x10000019
label_175320:
    if (ctx->pc == 0x175320u) {
        ctx->pc = 0x175320u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945168));
        ctx->pc = 0x175324u;
        goto label_175324;
    }
    ctx->pc = 0x17531Cu;
    {
        const bool branch_taken_0x17531c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175320u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945168));
        if (branch_taken_0x17531c) {
            ctx->pc = 0x175384u;
            goto label_175384;
        }
    }
    ctx->pc = 0x175324u;
label_175324:
    // 0x175324: 0x27b10130
    ctx->pc = 0x175324u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 304));
label_175328:
    // 0x175328: 0x3a0202d
    ctx->pc = 0x175328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17532c:
    // 0x17532c: 0x220282d
    ctx->pc = 0x17532cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_175330:
    // 0x175330: 0xc05d296
label_175334:
    if (ctx->pc == 0x175334u) {
        ctx->pc = 0x175334u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175338u;
        goto label_175338;
    }
    ctx->pc = 0x175330u;
    SET_GPR_U32(ctx, 31, 0x175338u);
    ctx->pc = 0x175334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevName_0x174a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175338u; }
        else if (ctx->pc != 0x175338u) { ctx->pc = 0x175338u; }
    }
    if (ctx->pc != 0x175338u) { return; }
    ctx->pc = 0x175338u;
label_175338:
    // 0x175338: 0x83a20130
    ctx->pc = 0x175338u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_17533c:
    // 0x17533c: 0x14400004
label_175340:
    if (ctx->pc == 0x175340u) {
        ctx->pc = 0x175340u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175344u;
        goto label_175344;
    }
    ctx->pc = 0x17533Cu;
    {
        const bool branch_taken_0x17533c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x175340u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17533c) {
            ctx->pc = 0x175350u;
            goto label_175350;
        }
    }
    ctx->pc = 0x175344u;
label_175344:
    // 0x175344: 0x3c04002c
    ctx->pc = 0x175344u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175348:
    // 0x175348: 0x1000000e
label_17534c:
    if (ctx->pc == 0x17534Cu) {
        ctx->pc = 0x17534Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945168));
        ctx->pc = 0x175350u;
        goto label_175350;
    }
    ctx->pc = 0x175348u;
    {
        const bool branch_taken_0x175348 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17534Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945168));
        if (branch_taken_0x175348) {
            ctx->pc = 0x175384u;
            goto label_175384;
        }
    }
    ctx->pc = 0x175350u;
label_175350:
    // 0x175350: 0x3a0202d
    ctx->pc = 0x175350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175354:
    // 0x175354: 0xc05d208
label_175358:
    if (ctx->pc == 0x175358u) {
        ctx->pc = 0x175358u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17535Cu;
        goto label_17535c;
    }
    ctx->pc = 0x175354u;
    SET_GPR_U32(ctx, 31, 0x17535Cu);
    ctx->pc = 0x175358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174820u;
    {
        const uint32_t __entryPc = ctx->pc;
        variousProc_0x174820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17535Cu; }
        else if (ctx->pc != 0x17535Cu) { ctx->pc = 0x17535Cu; }
    }
    if (ctx->pc != 0x17535Cu) { return; }
    ctx->pc = 0x17535Cu;
label_17535c:
    // 0x17535c: 0x40802d
    ctx->pc = 0x17535cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175360:
    // 0x175360: 0x56000005
label_175364:
    if (ctx->pc == 0x175364u) {
        ctx->pc = 0x175364u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->pc = 0x175368u;
        goto label_175368;
    }
    ctx->pc = 0x175360u;
    {
        const bool branch_taken_0x175360 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x175360) {
            ctx->pc = 0x175364u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->pc = 0x175378u;
            goto label_175378;
        }
    }
    ctx->pc = 0x175368u;
label_175368:
    // 0x175368: 0x3c04002c
    ctx->pc = 0x175368u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17536c:
    // 0x17536c: 0xc05d076
label_175370:
    if (ctx->pc == 0x175370u) {
        ctx->pc = 0x175370u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945248));
        ctx->pc = 0x175374u;
        goto label_175374;
    }
    ctx->pc = 0x17536Cu;
    SET_GPR_U32(ctx, 31, 0x175374u);
    ctx->pc = 0x175370u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945248));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175374u; }
        else if (ctx->pc != 0x175374u) { ctx->pc = 0x175374u; }
    }
    if (ctx->pc != 0x175374u) { return; }
    ctx->pc = 0x175374u;
label_175374:
    // 0x175374: 0x8e02003c
    ctx->pc = 0x175374u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_175378:
    // 0x175378: 0x14400006
label_17537c:
    if (ctx->pc == 0x17537Cu) {
        ctx->pc = 0x17537Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x175380u;
        goto label_175380;
    }
    ctx->pc = 0x175378u;
    {
        const bool branch_taken_0x175378 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17537Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x175378) {
            ctx->pc = 0x175394u;
            goto label_175394;
        }
    }
    ctx->pc = 0x175380u;
label_175380:
    // 0x175380: 0x2484aa08
    ctx->pc = 0x175380u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945288));
label_175384:
    // 0x175384: 0xc05d076
label_175388:
    if (ctx->pc == 0x175388u) {
        ctx->pc = 0x17538Cu;
        goto label_17538c;
    }
    ctx->pc = 0x175384u;
    SET_GPR_U32(ctx, 31, 0x17538Cu);
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17538Cu; }
        else if (ctx->pc != 0x17538Cu) { ctx->pc = 0x17538Cu; }
    }
    if (ctx->pc != 0x17538Cu) { return; }
    ctx->pc = 0x17538Cu;
label_17538c:
    // 0x17538c: 0x10000003
label_175390:
    if (ctx->pc == 0x175390u) {
        ctx->pc = 0x175390u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x175394u;
        goto label_175394;
    }
    ctx->pc = 0x17538Cu;
    {
        const bool branch_taken_0x17538c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175390u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x17538c) {
            ctx->pc = 0x17539Cu;
            goto label_17539c;
        }
    }
    ctx->pc = 0x175394u;
label_175394:
    // 0x175394: 0x40f809
label_175398:
    if (ctx->pc == 0x175398u) {
        ctx->pc = 0x175398u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17539Cu;
        goto label_17539c;
    }
    ctx->pc = 0x175394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17539Cu);
        ctx->pc = 0x175398u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175300u: goto label_175300;
            case 0x175304u: goto label_175304;
            case 0x175308u: goto label_175308;
            case 0x17530Cu: goto label_17530c;
            case 0x175310u: goto label_175310;
            case 0x175314u: goto label_175314;
            case 0x175318u: goto label_175318;
            case 0x17531Cu: goto label_17531c;
            case 0x175320u: goto label_175320;
            case 0x175324u: goto label_175324;
            case 0x175328u: goto label_175328;
            case 0x17532Cu: goto label_17532c;
            case 0x175330u: goto label_175330;
            case 0x175334u: goto label_175334;
            case 0x175338u: goto label_175338;
            case 0x17533Cu: goto label_17533c;
            case 0x175340u: goto label_175340;
            case 0x175344u: goto label_175344;
            case 0x175348u: goto label_175348;
            case 0x17534Cu: goto label_17534c;
            case 0x175350u: goto label_175350;
            case 0x175354u: goto label_175354;
            case 0x175358u: goto label_175358;
            case 0x17535Cu: goto label_17535c;
            case 0x175360u: goto label_175360;
            case 0x175364u: goto label_175364;
            case 0x175368u: goto label_175368;
            case 0x17536Cu: goto label_17536c;
            case 0x175370u: goto label_175370;
            case 0x175374u: goto label_175374;
            case 0x175378u: goto label_175378;
            case 0x17537Cu: goto label_17537c;
            case 0x175380u: goto label_175380;
            case 0x175384u: goto label_175384;
            case 0x175388u: goto label_175388;
            case 0x17538Cu: goto label_17538c;
            case 0x175390u: goto label_175390;
            case 0x175394u: goto label_175394;
            case 0x175398u: goto label_175398;
            case 0x17539Cu: goto label_17539c;
            case 0x1753A0u: goto label_1753a0;
            case 0x1753A4u: goto label_1753a4;
            case 0x1753A8u: goto label_1753a8;
            case 0x1753ACu: goto label_1753ac;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17539Cu; }
            if (ctx->pc != 0x17539Cu) { return; }
        }
    }
    ctx->pc = 0x17539Cu;
label_17539c:
    // 0x17539c: 0xdfbf0280
    ctx->pc = 0x17539cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_1753a0:
    // 0x1753a0: 0xdfb10270
    ctx->pc = 0x1753a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1753a4:
    // 0x1753a4: 0xdfb00260
    ctx->pc = 0x1753a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_1753a8:
    // 0x1753a8: 0x3e00008
label_1753ac:
    if (ctx->pc == 0x1753ACu) {
        ctx->pc = 0x1753ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x1753B0u;
        goto label_fallthrough_0x1753a8;
    }
    ctx->pc = 0x1753A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1753ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175300u: goto label_175300;
            case 0x175304u: goto label_175304;
            case 0x175308u: goto label_175308;
            case 0x17530Cu: goto label_17530c;
            case 0x175310u: goto label_175310;
            case 0x175314u: goto label_175314;
            case 0x175318u: goto label_175318;
            case 0x17531Cu: goto label_17531c;
            case 0x175320u: goto label_175320;
            case 0x175324u: goto label_175324;
            case 0x175328u: goto label_175328;
            case 0x17532Cu: goto label_17532c;
            case 0x175330u: goto label_175330;
            case 0x175334u: goto label_175334;
            case 0x175338u: goto label_175338;
            case 0x17533Cu: goto label_17533c;
            case 0x175340u: goto label_175340;
            case 0x175344u: goto label_175344;
            case 0x175348u: goto label_175348;
            case 0x17534Cu: goto label_17534c;
            case 0x175350u: goto label_175350;
            case 0x175354u: goto label_175354;
            case 0x175358u: goto label_175358;
            case 0x17535Cu: goto label_17535c;
            case 0x175360u: goto label_175360;
            case 0x175364u: goto label_175364;
            case 0x175368u: goto label_175368;
            case 0x17536Cu: goto label_17536c;
            case 0x175370u: goto label_175370;
            case 0x175374u: goto label_175374;
            case 0x175378u: goto label_175378;
            case 0x17537Cu: goto label_17537c;
            case 0x175380u: goto label_175380;
            case 0x175384u: goto label_175384;
            case 0x175388u: goto label_175388;
            case 0x17538Cu: goto label_17538c;
            case 0x175390u: goto label_175390;
            case 0x175394u: goto label_175394;
            case 0x175398u: goto label_175398;
            case 0x17539Cu: goto label_17539c;
            case 0x1753A0u: goto label_1753a0;
            case 0x1753A4u: goto label_1753a4;
            case 0x1753A8u: goto label_1753a8;
            case 0x1753ACu: goto label_1753ac;
            default: break;
        }
        return;
    }
label_fallthrough_0x1753a8:
    ctx->pc = 0x1753B0u;
}
