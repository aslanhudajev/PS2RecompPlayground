#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _request_end
// Address: 0x157488 - 0x15753c
void _request_end_0x157488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_request_end");


    ctx->pc = 0x157488u;

label_157488:
    // 0x157488: 0x27bdffd0
    ctx->pc = 0x157488u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_15748c:
    // 0x15748c: 0x3c028000
    ctx->pc = 0x15748cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
label_157490:
    // 0x157490: 0xffb10010
    ctx->pc = 0x157490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_157494:
    // 0x157494: 0x3442000a
    ctx->pc = 0x157494u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 10));
label_157498:
    // 0x157498: 0xffbf0020
    ctx->pc = 0x157498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_15749c:
    // 0x15749c: 0x80882d
    ctx->pc = 0x15749cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1574a0:
    // 0x1574a0: 0xffb00000
    ctx->pc = 0x1574a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1574a4:
    // 0x1574a4: 0x8e230020
    ctx->pc = 0x1574a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1574a8:
    // 0x1574a8: 0x10620009
label_1574ac:
    if (ctx->pc == 0x1574ACu) {
        ctx->pc = 0x1574ACu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1574B0u;
        goto label_1574b0;
    }
    ctx->pc = 0x1574A8u;
    {
        const bool branch_taken_0x1574a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1574ACu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x1574a8) {
            ctx->pc = 0x1574D0u;
            goto label_1574d0;
        }
    }
    ctx->pc = 0x1574B0u;
label_1574b0:
    // 0x1574b0: 0x54400015
label_1574b4:
    if (ctx->pc == 0x1574B4u) {
        ctx->pc = 0x1574B4u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x1574B8u;
        goto label_1574b8;
    }
    ctx->pc = 0x1574B0u;
    {
        const bool branch_taken_0x1574b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1574b0) {
            ctx->pc = 0x1574B4u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->pc = 0x157508u;
            goto label_157508;
        }
    }
    ctx->pc = 0x1574B8u;
label_1574b8:
    // 0x1574b8: 0x3c028000
    ctx->pc = 0x1574b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
label_1574bc:
    // 0x1574bc: 0x34420009
    ctx->pc = 0x1574bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 9));
label_1574c0:
    // 0x1574c0: 0x5062000b
label_1574c4:
    if (ctx->pc == 0x1574C4u) {
        ctx->pc = 0x1574C4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x1574C8u;
        goto label_1574c8;
    }
    ctx->pc = 0x1574C0u;
    {
        const bool branch_taken_0x1574c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1574c0) {
            ctx->pc = 0x1574C4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->pc = 0x1574F0u;
            goto label_1574f0;
        }
    }
    ctx->pc = 0x1574C8u;
label_1574c8:
    // 0x1574c8: 0x1000000f
label_1574cc:
    if (ctx->pc == 0x1574CCu) {
        ctx->pc = 0x1574CCu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x1574D0u;
        goto label_1574d0;
    }
    ctx->pc = 0x1574C8u;
    {
        const bool branch_taken_0x1574c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1574CCu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        if (branch_taken_0x1574c8) {
            ctx->pc = 0x157508u;
            goto label_157508;
        }
    }
    ctx->pc = 0x1574D0u;
label_1574d0:
    // 0x1574d0: 0x8e30001c
    ctx->pc = 0x1574d0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1574d4:
    // 0x1574d4: 0x8e02001c
    ctx->pc = 0x1574d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1574d8:
    // 0x1574d8: 0x5040000c
label_1574dc:
    if (ctx->pc == 0x1574DCu) {
        ctx->pc = 0x1574DCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1574E0u;
        goto label_1574e0;
    }
    ctx->pc = 0x1574D8u;
    {
        const bool branch_taken_0x1574d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1574d8) {
            ctx->pc = 0x1574DCu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x15750Cu;
            goto label_15750c;
        }
    }
    ctx->pc = 0x1574E0u;
label_1574e0:
    // 0x1574e0: 0x40f809
label_1574e4:
    if (ctx->pc == 0x1574E4u) {
        ctx->pc = 0x1574E4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x1574E8u;
        goto label_1574e8;
    }
    ctx->pc = 0x1574E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1574E8u);
        ctx->pc = 0x1574E4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157488u: goto label_157488;
            case 0x15748Cu: goto label_15748c;
            case 0x157490u: goto label_157490;
            case 0x157494u: goto label_157494;
            case 0x157498u: goto label_157498;
            case 0x15749Cu: goto label_15749c;
            case 0x1574A0u: goto label_1574a0;
            case 0x1574A4u: goto label_1574a4;
            case 0x1574A8u: goto label_1574a8;
            case 0x1574ACu: goto label_1574ac;
            case 0x1574B0u: goto label_1574b0;
            case 0x1574B4u: goto label_1574b4;
            case 0x1574B8u: goto label_1574b8;
            case 0x1574BCu: goto label_1574bc;
            case 0x1574C0u: goto label_1574c0;
            case 0x1574C4u: goto label_1574c4;
            case 0x1574C8u: goto label_1574c8;
            case 0x1574CCu: goto label_1574cc;
            case 0x1574D0u: goto label_1574d0;
            case 0x1574D4u: goto label_1574d4;
            case 0x1574D8u: goto label_1574d8;
            case 0x1574DCu: goto label_1574dc;
            case 0x1574E0u: goto label_1574e0;
            case 0x1574E4u: goto label_1574e4;
            case 0x1574E8u: goto label_1574e8;
            case 0x1574ECu: goto label_1574ec;
            case 0x1574F0u: goto label_1574f0;
            case 0x1574F4u: goto label_1574f4;
            case 0x1574F8u: goto label_1574f8;
            case 0x1574FCu: goto label_1574fc;
            case 0x157500u: goto label_157500;
            case 0x157504u: goto label_157504;
            case 0x157508u: goto label_157508;
            case 0x15750Cu: goto label_15750c;
            case 0x157510u: goto label_157510;
            case 0x157514u: goto label_157514;
            case 0x157518u: goto label_157518;
            case 0x15751Cu: goto label_15751c;
            case 0x157520u: goto label_157520;
            case 0x157524u: goto label_157524;
            case 0x157528u: goto label_157528;
            case 0x15752Cu: goto label_15752c;
            case 0x157530u: goto label_157530;
            case 0x157534u: goto label_157534;
            case 0x157538u: goto label_157538;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1574E8u; }
            if (ctx->pc != 0x1574E8u) { return; }
        }
    }
    ctx->pc = 0x1574E8u;
label_1574e8:
    // 0x1574e8: 0x10000007
label_1574ec:
    if (ctx->pc == 0x1574ECu) {
        ctx->pc = 0x1574ECu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x1574F0u;
        goto label_1574f0;
    }
    ctx->pc = 0x1574E8u;
    {
        const bool branch_taken_0x1574e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1574ECu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        if (branch_taken_0x1574e8) {
            ctx->pc = 0x157508u;
            goto label_157508;
        }
    }
    ctx->pc = 0x1574F0u;
label_1574f0:
    // 0x1574f0: 0x8e30001c
    ctx->pc = 0x1574f0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1574f4:
    // 0x1574f4: 0xae020024
    ctx->pc = 0x1574f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1574f8:
    // 0x1574f8: 0x8e230028
    ctx->pc = 0x1574f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1574fc:
    // 0x1574fc: 0xae030014
    ctx->pc = 0x1574fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_157500:
    // 0x157500: 0x8e22002c
    ctx->pc = 0x157500u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_157504:
    // 0x157504: 0xae020018
    ctx->pc = 0x157504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_157508:
    // 0x157508: 0x8e040008
    ctx->pc = 0x157508u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15750c:
    // 0x15750c: 0x4800003
label_157510:
    if (ctx->pc == 0x157510u) {
        ctx->pc = 0x157514u;
        goto label_157514;
    }
    ctx->pc = 0x15750Cu;
    {
        const bool branch_taken_0x15750c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x15750c) {
            ctx->pc = 0x15751Cu;
            goto label_15751c;
        }
    }
    ctx->pc = 0x157514u;
label_157514:
    // 0x157514: 0xc055244
label_157518:
    if (ctx->pc == 0x157518u) {
        ctx->pc = 0x15751Cu;
        goto label_15751c;
    }
    ctx->pc = 0x157514u;
    SET_GPR_U32(ctx, 31, 0x15751Cu);
    ctx->pc = 0x154910u;
    {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x154910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15751Cu; }
        else if (ctx->pc != 0x15751Cu) { ctx->pc = 0x15751Cu; }
    }
    if (ctx->pc != 0x15751Cu) { return; }
    ctx->pc = 0x15751Cu;
label_15751c:
    // 0x15751c: 0xc055cfe
label_157520:
    if (ctx->pc == 0x157520u) {
        ctx->pc = 0x157520u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x157524u;
        goto label_157524;
    }
    ctx->pc = 0x15751Cu;
    SET_GPR_U32(ctx, 31, 0x157524u);
    ctx->pc = 0x157520u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1573F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceRpcFreePacket_0x1573f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157524u; }
        else if (ctx->pc != 0x157524u) { ctx->pc = 0x157524u; }
    }
    if (ctx->pc != 0x157524u) { return; }
    ctx->pc = 0x157524u;
label_157524:
    // 0x157524: 0xae000000
    ctx->pc = 0x157524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_157528:
    // 0x157528: 0xdfbf0020
    ctx->pc = 0x157528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15752c:
    // 0x15752c: 0xdfb10010
    ctx->pc = 0x15752cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_157530:
    // 0x157530: 0xdfb00000
    ctx->pc = 0x157530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157534:
    // 0x157534: 0x3e00008
label_157538:
    if (ctx->pc == 0x157538u) {
        ctx->pc = 0x157538u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x15753Cu;
        goto label_fallthrough_0x157534;
    }
    ctx->pc = 0x157534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157538u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157488u: goto label_157488;
            case 0x15748Cu: goto label_15748c;
            case 0x157490u: goto label_157490;
            case 0x157494u: goto label_157494;
            case 0x157498u: goto label_157498;
            case 0x15749Cu: goto label_15749c;
            case 0x1574A0u: goto label_1574a0;
            case 0x1574A4u: goto label_1574a4;
            case 0x1574A8u: goto label_1574a8;
            case 0x1574ACu: goto label_1574ac;
            case 0x1574B0u: goto label_1574b0;
            case 0x1574B4u: goto label_1574b4;
            case 0x1574B8u: goto label_1574b8;
            case 0x1574BCu: goto label_1574bc;
            case 0x1574C0u: goto label_1574c0;
            case 0x1574C4u: goto label_1574c4;
            case 0x1574C8u: goto label_1574c8;
            case 0x1574CCu: goto label_1574cc;
            case 0x1574D0u: goto label_1574d0;
            case 0x1574D4u: goto label_1574d4;
            case 0x1574D8u: goto label_1574d8;
            case 0x1574DCu: goto label_1574dc;
            case 0x1574E0u: goto label_1574e0;
            case 0x1574E4u: goto label_1574e4;
            case 0x1574E8u: goto label_1574e8;
            case 0x1574ECu: goto label_1574ec;
            case 0x1574F0u: goto label_1574f0;
            case 0x1574F4u: goto label_1574f4;
            case 0x1574F8u: goto label_1574f8;
            case 0x1574FCu: goto label_1574fc;
            case 0x157500u: goto label_157500;
            case 0x157504u: goto label_157504;
            case 0x157508u: goto label_157508;
            case 0x15750Cu: goto label_15750c;
            case 0x157510u: goto label_157510;
            case 0x157514u: goto label_157514;
            case 0x157518u: goto label_157518;
            case 0x15751Cu: goto label_15751c;
            case 0x157520u: goto label_157520;
            case 0x157524u: goto label_157524;
            case 0x157528u: goto label_157528;
            case 0x15752Cu: goto label_15752c;
            case 0x157530u: goto label_157530;
            case 0x157534u: goto label_157534;
            case 0x157538u: goto label_157538;
            default: break;
        }
        return;
    }
label_fallthrough_0x157534:
    ctx->pc = 0x15753Cu;
}
