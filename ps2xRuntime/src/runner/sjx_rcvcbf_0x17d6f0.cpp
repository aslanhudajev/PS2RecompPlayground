#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sjx_rcvcbf
// Address: 0x17d6f0 - 0x17d790
void sjx_rcvcbf_0x17d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sjx_rcvcbf");


    ctx->pc = 0x17d6f0u;

label_17d6f0:
    // 0x17d6f0: 0x27bdffd0
    ctx->pc = 0x17d6f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_17d6f4:
    // 0x17d6f4: 0xffb00000
    ctx->pc = 0x17d6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17d6f8:
    // 0x17d6f8: 0xffbf0020
    ctx->pc = 0x17d6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17d6fc:
    // 0x17d6fc: 0xa0802d
    ctx->pc = 0x17d6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17d700:
    // 0x17d700: 0x16000008
label_17d704:
    if (ctx->pc == 0x17D704u) {
        ctx->pc = 0x17D704u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->pc = 0x17D708u;
        goto label_17d708;
    }
    ctx->pc = 0x17D700u;
    {
        const bool branch_taken_0x17d700 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x17D704u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        if (branch_taken_0x17d700) {
            ctx->pc = 0x17D724u;
            goto label_17d724;
        }
    }
    ctx->pc = 0x17D708u;
label_17d708:
    // 0x17d708: 0x0
    ctx->pc = 0x17d708u;
    // NOP
label_17d70c:
    // 0x17d70c: 0x0
    ctx->pc = 0x17d70cu;
    // NOP
label_17d710:
    // 0x17d710: 0x0
    ctx->pc = 0x17d710u;
    // NOP
label_17d714:
    // 0x17d714: 0x0
    ctx->pc = 0x17d714u;
    // NOP
label_17d718:
    // 0x17d718: 0x0
    ctx->pc = 0x17d718u;
    // NOP
label_17d71c:
    // 0x17d71c: 0x1000fffa
label_17d720:
    if (ctx->pc == 0x17D720u) {
        ctx->pc = 0x17D724u;
        goto label_17d724;
    }
    ctx->pc = 0x17D71Cu;
    {
        const bool branch_taken_0x17d71c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17d71c) {
            ctx->pc = 0x17D708u;
            goto label_17d708;
        }
    }
    ctx->pc = 0x17D724u;
label_17d724:
    // 0x17d724: 0xc05efbc
label_17d728:
    if (ctx->pc == 0x17D728u) {
        ctx->pc = 0x17D728u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x17D72Cu;
        goto label_17d72c;
    }
    ctx->pc = 0x17D724u;
    SET_GPR_U32(ctx, 31, 0x17D72Cu);
    ctx->pc = 0x17D728u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D72Cu; }
        else if (ctx->pc != 0x17D72Cu) { ctx->pc = 0x17D72Cu; }
    }
    if (ctx->pc != 0x17D72Cu) { return; }
    ctx->pc = 0x17D72Cu;
label_17d72c:
    // 0x17d72c: 0x1a200013
label_17d730:
    if (ctx->pc == 0x17D730u) {
        ctx->pc = 0x17D730u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x17D734u;
        goto label_17d734;
    }
    ctx->pc = 0x17D72Cu;
    {
        const bool branch_taken_0x17d72c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x17D730u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x17d72c) {
            ctx->pc = 0x17D77Cu;
            goto label_17d77c;
        }
    }
    ctx->pc = 0x17D734u;
label_17d734:
    // 0x17d734: 0x0
    ctx->pc = 0x17d734u;
    // NOP
label_17d738:
    // 0x17d738: 0x82020000
    ctx->pc = 0x17d738u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_17d73c:
    // 0x17d73c: 0x5440000d
label_17d740:
    if (ctx->pc == 0x17D740u) {
        ctx->pc = 0x17D740u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x17D744u;
        goto label_17d744;
    }
    ctx->pc = 0x17D73Cu;
    {
        const bool branch_taken_0x17d73c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17d73c) {
            ctx->pc = 0x17D740u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x17D774u;
            goto label_17d774;
        }
    }
    ctx->pc = 0x17D744u;
label_17d744:
    // 0x17d744: 0x8e040004
    ctx->pc = 0x17d744u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17d748:
    // 0x17d748: 0x86030002
    ctx->pc = 0x17d748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_17d74c:
    // 0x17d74c: 0x84820002
    ctx->pc = 0x17d74cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17d750:
    // 0x17d750: 0x54620008
label_17d754:
    if (ctx->pc == 0x17D754u) {
        ctx->pc = 0x17D754u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x17D758u;
        goto label_17d758;
    }
    ctx->pc = 0x17D750u;
    {
        const bool branch_taken_0x17d750 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x17d750) {
            ctx->pc = 0x17D754u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x17D774u;
            goto label_17d774;
        }
    }
    ctx->pc = 0x17D758u;
label_17d758:
    // 0x17d758: 0x8c840004
    ctx->pc = 0x17d758u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_17d75c:
    // 0x17d75c: 0x26060008
    ctx->pc = 0x17d75cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 8));
label_17d760:
    // 0x17d760: 0x8c830000
    ctx->pc = 0x17d760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17d764:
    // 0x17d764: 0x8c620020
    ctx->pc = 0x17d764u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_17d768:
    // 0x17d768: 0x40f809
label_17d76c:
    if (ctx->pc == 0x17D76Cu) {
        ctx->pc = 0x17D76Cu;
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->pc = 0x17D770u;
        goto label_17d770;
    }
    ctx->pc = 0x17D768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D770u);
        ctx->pc = 0x17D76Cu;
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D6F0u: goto label_17d6f0;
            case 0x17D6F4u: goto label_17d6f4;
            case 0x17D6F8u: goto label_17d6f8;
            case 0x17D6FCu: goto label_17d6fc;
            case 0x17D700u: goto label_17d700;
            case 0x17D704u: goto label_17d704;
            case 0x17D708u: goto label_17d708;
            case 0x17D70Cu: goto label_17d70c;
            case 0x17D710u: goto label_17d710;
            case 0x17D714u: goto label_17d714;
            case 0x17D718u: goto label_17d718;
            case 0x17D71Cu: goto label_17d71c;
            case 0x17D720u: goto label_17d720;
            case 0x17D724u: goto label_17d724;
            case 0x17D728u: goto label_17d728;
            case 0x17D72Cu: goto label_17d72c;
            case 0x17D730u: goto label_17d730;
            case 0x17D734u: goto label_17d734;
            case 0x17D738u: goto label_17d738;
            case 0x17D73Cu: goto label_17d73c;
            case 0x17D740u: goto label_17d740;
            case 0x17D744u: goto label_17d744;
            case 0x17D748u: goto label_17d748;
            case 0x17D74Cu: goto label_17d74c;
            case 0x17D750u: goto label_17d750;
            case 0x17D754u: goto label_17d754;
            case 0x17D758u: goto label_17d758;
            case 0x17D75Cu: goto label_17d75c;
            case 0x17D760u: goto label_17d760;
            case 0x17D764u: goto label_17d764;
            case 0x17D768u: goto label_17d768;
            case 0x17D76Cu: goto label_17d76c;
            case 0x17D770u: goto label_17d770;
            case 0x17D774u: goto label_17d774;
            case 0x17D778u: goto label_17d778;
            case 0x17D77Cu: goto label_17d77c;
            case 0x17D780u: goto label_17d780;
            case 0x17D784u: goto label_17d784;
            case 0x17D788u: goto label_17d788;
            case 0x17D78Cu: goto label_17d78c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17D770u; }
            if (ctx->pc != 0x17D770u) { return; }
        }
    }
    ctx->pc = 0x17D770u;
label_17d770:
    // 0x17d770: 0x2631ffff
    ctx->pc = 0x17d770u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_17d774:
    // 0x17d774: 0x1620fff0
label_17d778:
    if (ctx->pc == 0x17D778u) {
        ctx->pc = 0x17D778u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x17D77Cu;
        goto label_17d77c;
    }
    ctx->pc = 0x17D774u;
    {
        const bool branch_taken_0x17d774 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x17D778u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x17d774) {
            ctx->pc = 0x17D738u;
            goto label_17d738;
        }
    }
    ctx->pc = 0x17D77Cu;
label_17d77c:
    // 0x17d77c: 0xdfbf0020
    ctx->pc = 0x17d77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17d780:
    // 0x17d780: 0xdfb10010
    ctx->pc = 0x17d780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17d784:
    // 0x17d784: 0xdfb00000
    ctx->pc = 0x17d784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d788:
    // 0x17d788: 0x805efc2
label_17d78c:
    if (ctx->pc == 0x17D78Cu) {
        ctx->pc = 0x17D78Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x17D790u;
        goto label_fallthrough_0x17d788;
    }
    ctx->pc = 0x17D788u;
    ctx->pc = 0x17D78Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17BF08u;
    SJCRS_Unlock_0x17bf08(rdram, ctx, runtime); return;
label_fallthrough_0x17d788:
    ctx->pc = 0x17D790u;
}
