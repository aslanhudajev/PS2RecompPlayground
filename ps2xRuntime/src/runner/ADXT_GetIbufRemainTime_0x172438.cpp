#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetIbufRemainTime
// Address: 0x172438 - 0x1724f4
void ADXT_GetIbufRemainTime_0x172438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetIbufRemainTime");


    ctx->pc = 0x172438u;

label_172438:
    // 0x172438: 0x27bdffb0
    ctx->pc = 0x172438u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_17243c:
    // 0x17243c: 0xffb20020
    ctx->pc = 0x17243cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_172440:
    // 0x172440: 0x80902d
    ctx->pc = 0x172440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_172444:
    // 0x172444: 0xe7b40040
    ctx->pc = 0x172444u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_172448:
    // 0x172448: 0xffbf0030
    ctx->pc = 0x172448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17244c:
    // 0x17244c: 0xffb10010
    ctx->pc = 0x17244cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_172450:
    // 0x172450: 0xc05c752
label_172454:
    if (ctx->pc == 0x172454u) {
        ctx->pc = 0x172454u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x172458u;
        goto label_172458;
    }
    ctx->pc = 0x172450u;
    SET_GPR_U32(ctx, 31, 0x172458u);
    ctx->pc = 0x172454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x171D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetStat_0x171d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172458u; }
        else if (ctx->pc != 0x172458u) { ctx->pc = 0x172458u; }
    }
    if (ctx->pc != 0x172458u) { return; }
    ctx->pc = 0x172458u;
label_172458:
    // 0x172458: 0x4480a000
    ctx->pc = 0x172458u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
label_17245c:
    // 0x17245c: 0x28420002
    ctx->pc = 0x17245cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_172460:
    // 0x172460: 0x1440001d
label_172464:
    if (ctx->pc == 0x172464u) {
        ctx->pc = 0x172464u;
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x172468u;
        goto label_172468;
    }
    ctx->pc = 0x172460u;
    {
        const bool branch_taken_0x172460 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172464u;
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x172460) {
            ctx->pc = 0x1724D8u;
            goto label_1724d8;
        }
    }
    ctx->pc = 0x172468u;
label_172468:
    // 0x172468: 0x8e440014
    ctx->pc = 0x172468u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_17246c:
    // 0x17246c: 0x1080001b
label_172470:
    if (ctx->pc == 0x172470u) {
        ctx->pc = 0x172470u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x172474u;
        goto label_172474;
    }
    ctx->pc = 0x17246Cu;
    {
        const bool branch_taken_0x17246c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x172470u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17246c) {
            ctx->pc = 0x1724DCu;
            goto label_1724dc;
        }
    }
    ctx->pc = 0x172474u;
label_172474:
    // 0x172474: 0x8c830000
    ctx->pc = 0x172474u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_172478:
    // 0x172478: 0x8c620024
    ctx->pc = 0x172478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_17247c:
    // 0x17247c: 0x40f809
label_172480:
    if (ctx->pc == 0x172480u) {
        ctx->pc = 0x172480u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x172484u;
        goto label_172484;
    }
    ctx->pc = 0x17247Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172484u);
        ctx->pc = 0x172480u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172438u: goto label_172438;
            case 0x17243Cu: goto label_17243c;
            case 0x172440u: goto label_172440;
            case 0x172444u: goto label_172444;
            case 0x172448u: goto label_172448;
            case 0x17244Cu: goto label_17244c;
            case 0x172450u: goto label_172450;
            case 0x172454u: goto label_172454;
            case 0x172458u: goto label_172458;
            case 0x17245Cu: goto label_17245c;
            case 0x172460u: goto label_172460;
            case 0x172464u: goto label_172464;
            case 0x172468u: goto label_172468;
            case 0x17246Cu: goto label_17246c;
            case 0x172470u: goto label_172470;
            case 0x172474u: goto label_172474;
            case 0x172478u: goto label_172478;
            case 0x17247Cu: goto label_17247c;
            case 0x172480u: goto label_172480;
            case 0x172484u: goto label_172484;
            case 0x172488u: goto label_172488;
            case 0x17248Cu: goto label_17248c;
            case 0x172490u: goto label_172490;
            case 0x172494u: goto label_172494;
            case 0x172498u: goto label_172498;
            case 0x17249Cu: goto label_17249c;
            case 0x1724A0u: goto label_1724a0;
            case 0x1724A4u: goto label_1724a4;
            case 0x1724A8u: goto label_1724a8;
            case 0x1724ACu: goto label_1724ac;
            case 0x1724B0u: goto label_1724b0;
            case 0x1724B4u: goto label_1724b4;
            case 0x1724B8u: goto label_1724b8;
            case 0x1724BCu: goto label_1724bc;
            case 0x1724C0u: goto label_1724c0;
            case 0x1724C4u: goto label_1724c4;
            case 0x1724C8u: goto label_1724c8;
            case 0x1724CCu: goto label_1724cc;
            case 0x1724D0u: goto label_1724d0;
            case 0x1724D4u: goto label_1724d4;
            case 0x1724D8u: goto label_1724d8;
            case 0x1724DCu: goto label_1724dc;
            case 0x1724E0u: goto label_1724e0;
            case 0x1724E4u: goto label_1724e4;
            case 0x1724E8u: goto label_1724e8;
            case 0x1724ECu: goto label_1724ec;
            case 0x1724F0u: goto label_1724f0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172484u; }
            if (ctx->pc != 0x172484u) { return; }
        }
    }
    ctx->pc = 0x172484u;
label_172484:
    // 0x172484: 0x40882d
    ctx->pc = 0x172484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172488:
    // 0x172488: 0xc05c88e
label_17248c:
    if (ctx->pc == 0x17248Cu) {
        ctx->pc = 0x17248Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172490u;
        goto label_172490;
    }
    ctx->pc = 0x172488u;
    SET_GPR_U32(ctx, 31, 0x172490u);
    ctx->pc = 0x17248Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172238u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetNumChan_0x172238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172490u; }
        else if (ctx->pc != 0x172490u) { ctx->pc = 0x172490u; }
    }
    if (ctx->pc != 0x172490u) { return; }
    ctx->pc = 0x172490u;
label_172490:
    // 0x172490: 0x40802d
    ctx->pc = 0x172490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172494:
    // 0x172494: 0xc05c880
label_172498:
    if (ctx->pc == 0x172498u) {
        ctx->pc = 0x172498u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17249Cu;
        goto label_17249c;
    }
    ctx->pc = 0x172494u;
    SET_GPR_U32(ctx, 31, 0x17249Cu);
    ctx->pc = 0x172498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172200u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetSfreq_0x172200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17249Cu; }
        else if (ctx->pc != 0x17249Cu) { ctx->pc = 0x17249Cu; }
    }
    if (ctx->pc != 0x17249Cu) { return; }
    ctx->pc = 0x17249Cu;
label_17249c:
    // 0x17249c: 0x24030012
    ctx->pc = 0x17249cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
label_1724a0:
    // 0x1724a0: 0x44820800
    ctx->pc = 0x1724a0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_1724a4:
    // 0x1724a4: 0x46800860
    ctx->pc = 0x1724a4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_1724a8:
    // 0x1724a8: 0x2038018
    ctx->pc = 0x1724a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
label_1724ac:
    // 0x1724ac: 0x7230001a
    ctx->pc = 0x1724acu;
    { int32_t divisor = GPR_S32(ctx, 16); if (divisor != 0) { ctx->lo1 = (uint32_t)(GPR_S32(ctx, 17) / divisor); ctx->hi1 = (uint32_t)(GPR_S32(ctx, 16) % divisor); } else { ctx->lo1= (GPR_S32(ctx,17) < 0) ? 1 : -1; ctx->hi1=GPR_S32(ctx,16); } }
label_1724b0:
    // 0x1724b0: 0x52000001
label_1724b4:
    if (ctx->pc == 0x1724B4u) {
        ctx->pc = 0x1724B4u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1724B8u;
        goto label_1724b8;
    }
    ctx->pc = 0x1724B0u;
    {
        const bool branch_taken_0x1724b0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1724b0) {
            ctx->pc = 0x1724B4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1724B8u;
            goto label_1724b8;
        }
    }
    ctx->pc = 0x1724B8u;
label_1724b8:
    // 0x1724b8: 0x70008812
    ctx->pc = 0x1724b8u;
    SET_GPR_U32(ctx, 17, ctx->lo1);
label_1724bc:
    // 0x1724bc: 0x118940
    ctx->pc = 0x1724bcu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 5));
label_1724c0:
    // 0x1724c0: 0x44910000
    ctx->pc = 0x1724c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
label_1724c4:
    // 0x1724c4: 0x46800020
    ctx->pc = 0x1724c4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1724c8:
    // 0x1724c8: 0x0
    ctx->pc = 0x1724c8u;
    // NOP
label_1724cc:
    // 0x1724cc: 0x0
    ctx->pc = 0x1724ccu;
    // NOP
label_1724d0:
    // 0x1724d0: 0x46010503
    ctx->pc = 0x1724d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
label_1724d4:
    // 0x1724d4: 0x4600a006
    ctx->pc = 0x1724d4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1724d8:
    // 0x1724d8: 0xdfbf0030
    ctx->pc = 0x1724d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1724dc:
    // 0x1724dc: 0xdfb20020
    ctx->pc = 0x1724dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1724e0:
    // 0x1724e0: 0xdfb10010
    ctx->pc = 0x1724e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1724e4:
    // 0x1724e4: 0xdfb00000
    ctx->pc = 0x1724e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1724e8:
    // 0x1724e8: 0xc7b40040
    ctx->pc = 0x1724e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1724ec:
    // 0x1724ec: 0x3e00008
label_1724f0:
    if (ctx->pc == 0x1724F0u) {
        ctx->pc = 0x1724F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1724F4u;
        goto label_fallthrough_0x1724ec;
    }
    ctx->pc = 0x1724ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1724F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172438u: goto label_172438;
            case 0x17243Cu: goto label_17243c;
            case 0x172440u: goto label_172440;
            case 0x172444u: goto label_172444;
            case 0x172448u: goto label_172448;
            case 0x17244Cu: goto label_17244c;
            case 0x172450u: goto label_172450;
            case 0x172454u: goto label_172454;
            case 0x172458u: goto label_172458;
            case 0x17245Cu: goto label_17245c;
            case 0x172460u: goto label_172460;
            case 0x172464u: goto label_172464;
            case 0x172468u: goto label_172468;
            case 0x17246Cu: goto label_17246c;
            case 0x172470u: goto label_172470;
            case 0x172474u: goto label_172474;
            case 0x172478u: goto label_172478;
            case 0x17247Cu: goto label_17247c;
            case 0x172480u: goto label_172480;
            case 0x172484u: goto label_172484;
            case 0x172488u: goto label_172488;
            case 0x17248Cu: goto label_17248c;
            case 0x172490u: goto label_172490;
            case 0x172494u: goto label_172494;
            case 0x172498u: goto label_172498;
            case 0x17249Cu: goto label_17249c;
            case 0x1724A0u: goto label_1724a0;
            case 0x1724A4u: goto label_1724a4;
            case 0x1724A8u: goto label_1724a8;
            case 0x1724ACu: goto label_1724ac;
            case 0x1724B0u: goto label_1724b0;
            case 0x1724B4u: goto label_1724b4;
            case 0x1724B8u: goto label_1724b8;
            case 0x1724BCu: goto label_1724bc;
            case 0x1724C0u: goto label_1724c0;
            case 0x1724C4u: goto label_1724c4;
            case 0x1724C8u: goto label_1724c8;
            case 0x1724CCu: goto label_1724cc;
            case 0x1724D0u: goto label_1724d0;
            case 0x1724D4u: goto label_1724d4;
            case 0x1724D8u: goto label_1724d8;
            case 0x1724DCu: goto label_1724dc;
            case 0x1724E0u: goto label_1724e0;
            case 0x1724E4u: goto label_1724e4;
            case 0x1724E8u: goto label_1724e8;
            case 0x1724ECu: goto label_1724ec;
            case 0x1724F0u: goto label_1724f0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1724ec:
    ctx->pc = 0x1724F4u;
}
