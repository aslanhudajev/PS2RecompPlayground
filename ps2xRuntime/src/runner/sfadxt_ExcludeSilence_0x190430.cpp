#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_ExcludeSilence
// Address: 0x190430 - 0x19053c
void sfadxt_ExcludeSilence_0x190430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_ExcludeSilence");


    ctx->pc = 0x190430u;

    // 0x190430: 0x27bdff70
    ctx->pc = 0x190430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x190434: 0xffb60070
    ctx->pc = 0x190434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x190438: 0xffb40050
    ctx->pc = 0x190438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x19043c: 0xe0b02d
    ctx->pc = 0x19043cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190440: 0xffb30040
    ctx->pc = 0x190440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x190444: 0x80a02d
    ctx->pc = 0x190444u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190448: 0xffb10020
    ctx->pc = 0x190448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19044c: 0xffb00010
    ctx->pc = 0x19044cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x190450: 0xc0882d
    ctx->pc = 0x190450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190454: 0xffbf0080
    ctx->pc = 0x190454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x190458: 0xa0802d
    ctx->pc = 0x190458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19045c: 0xffb50060
    ctx->pc = 0x19045cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x190460: 0x26933e20
    ctx->pc = 0x190460u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 20), 15904));
    // 0x190464: 0xffb20030
    ctx->pc = 0x190464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x190468: 0xc064dea
    ctx->pc = 0x190468u;
    SET_GPR_U32(ctx, 31, 0x190470u);
    ctx->pc = 0x19046Cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1937A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFHDS_GetMuxVerNum_0x1937a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190470u; }
        else if (ctx->pc != 0x190470u) { ctx->pc = 0x190470u; }
    }
    if (ctx->pc != 0x190470u) { return; }
    ctx->pc = 0x190470u;
    // 0x190470: 0x2842006c
    ctx->pc = 0x190470u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 108));
    // 0x190474: 0x14400005
    ctx->pc = 0x190474u;
    {
        const bool branch_taken_0x190474 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x190478u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x190474) {
            ctx->pc = 0x19048Cu;
            goto label_19048c;
        }
    }
    ctx->pc = 0x19047Cu;
    // 0x19047c: 0x3c020019
    ctx->pc = 0x19047cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)25 << 16));
    // 0x190480: 0x24420260
    ctx->pc = 0x190480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 608));
    // 0x190484: 0x10000023
    ctx->pc = 0x190484u;
    {
        const bool branch_taken_0x190484 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x190488u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        if (branch_taken_0x190484) {
            ctx->pc = 0x190514u;
            goto label_190514;
        }
    }
    ctx->pc = 0x19048Cu;
label_19048c:
    // 0x19048c: 0x2631ffee
    ctx->pc = 0x19048cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967278));
    // 0x190490: 0x10000003
    ctx->pc = 0x190490u;
    {
        const bool branch_taken_0x190490 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x190494u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 4));
        if (branch_taken_0x190490) {
            ctx->pc = 0x1904A0u;
            goto label_1904a0;
        }
    }
    ctx->pc = 0x190498u;
label_190498:
    // 0x190498: 0x26100012
    ctx->pc = 0x190498u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 18));
    // 0x19049c: 0x26520012
    ctx->pc = 0x19049cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 18));
label_1904a0:
    // 0x1904a0: 0x251102a
    ctx->pc = 0x1904a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 17)));
    // 0x1904a4: 0x10400009
    ctx->pc = 0x1904A4u;
    {
        const bool branch_taken_0x1904a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1904A8u;
        SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
        if (branch_taken_0x1904a4) {
            ctx->pc = 0x1904CCu;
            goto label_1904cc;
        }
    }
    ctx->pc = 0x1904ACu;
    // 0x1904ac: 0x200202d
    ctx->pc = 0x1904acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904b0: 0x24a5d2f8
    ctx->pc = 0x1904b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955768));
    // 0x1904b4: 0xc050c6a
    ctx->pc = 0x1904B4u;
    SET_GPR_U32(ctx, 31, 0x1904BCu);
    ctx->pc = 0x1904B8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 18));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1904BCu; }
        else if (ctx->pc != 0x1904BCu) { ctx->pc = 0x1904BCu; }
    }
    if (ctx->pc != 0x1904BCu) { return; }
    ctx->pc = 0x1904BCu;
    // 0x1904bc: 0x1040fff6
    ctx->pc = 0x1904BCu;
    {
        const bool branch_taken_0x1904bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1904C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)25 << 16));
        if (branch_taken_0x1904bc) {
            ctx->pc = 0x190498u;
            goto label_190498;
        }
    }
    ctx->pc = 0x1904C4u;
    // 0x1904c4: 0x24420260
    ctx->pc = 0x1904c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 608));
    // 0x1904c8: 0xae62003c
    ctx->pc = 0x1904c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
label_1904cc:
    // 0x1904cc: 0xaed20000
    ctx->pc = 0x1904ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
    // 0x1904d0: 0x280202d
    ctx->pc = 0x1904d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904d4: 0x2a0302d
    ctx->pc = 0x1904d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904d8: 0xc064150
    ctx->pc = 0x1904D8u;
    SET_GPR_U32(ctx, 31, 0x1904E0u);
    ctx->pc = 0x1904DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190540u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_GetNchSfreq_0x190540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1904E0u; }
        else if (ctx->pc != 0x1904E0u) { ctx->pc = 0x1904E0u; }
    }
    if (ctx->pc != 0x1904E0u) { return; }
    ctx->pc = 0x1904E0u;
    // 0x1904e0: 0x1440000d
    ctx->pc = 0x1904E0u;
    {
        const bool branch_taken_0x1904e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1904E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x1904e0) {
            ctx->pc = 0x190518u;
            goto label_190518;
        }
    }
    ctx->pc = 0x1904E8u;
    // 0x1904e8: 0x8fa20000
    ctx->pc = 0x1904e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1904ec: 0x24030012
    ctx->pc = 0x1904ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1904f0: 0x431018
    ctx->pc = 0x1904f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1904f4: 0x7242001a
    ctx->pc = 0x1904f4u;
    { int32_t divisor = GPR_S32(ctx, 2); if (divisor != 0) { ctx->lo1 = (uint32_t)(GPR_S32(ctx, 18) / divisor); ctx->hi1 = (uint32_t)(GPR_S32(ctx, 2) % divisor); } else { ctx->lo1= (GPR_S32(ctx,18) < 0) ? 1 : -1; ctx->hi1=GPR_S32(ctx,2); } }
    // 0x1904f8: 0x50400001
    ctx->pc = 0x1904F8u;
    {
        const bool branch_taken_0x1904f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1904f8) {
            ctx->pc = 0x1904FCu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x190500u;
            goto label_190500;
        }
    }
    ctx->pc = 0x190500u;
label_190500:
    // 0x190500: 0x8e630038
    ctx->pc = 0x190500u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x190504: 0x70002012
    ctx->pc = 0x190504u;
    SET_GPR_U32(ctx, 4, ctx->lo1);
    // 0x190508: 0x42140
    ctx->pc = 0x190508u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x19050c: 0x641821
    ctx->pc = 0x19050cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x190510: 0xae630038
    ctx->pc = 0x190510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
label_190514:
    // 0x190514: 0xdfbf0080
    ctx->pc = 0x190514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_190518:
    // 0x190518: 0xdfb60070
    ctx->pc = 0x190518u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19051c: 0xdfb50060
    ctx->pc = 0x19051cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x190520: 0xdfb40050
    ctx->pc = 0x190520u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x190524: 0xdfb30040
    ctx->pc = 0x190524u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x190528: 0xdfb20030
    ctx->pc = 0x190528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19052c: 0xdfb10020
    ctx->pc = 0x19052cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190530: 0xdfb00010
    ctx->pc = 0x190530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190534: 0x3e00008
    ctx->pc = 0x190534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190538u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19048Cu: goto label_19048c;
            case 0x190498u: goto label_190498;
            case 0x1904A0u: goto label_1904a0;
            case 0x1904CCu: goto label_1904cc;
            case 0x190500u: goto label_190500;
            case 0x190514u: goto label_190514;
            case 0x190518u: goto label_190518;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19053Cu;
}
