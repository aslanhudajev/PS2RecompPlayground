#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_SetAdxtHd
// Address: 0x190868 - 0x190918
void sfadxt_SetAdxtHd_0x190868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_SetAdxtHd");


    ctx->pc = 0x190868u;

    // 0x190868: 0x27bdffd0
    ctx->pc = 0x190868u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19086c: 0xffb10010
    ctx->pc = 0x19086cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x190870: 0xffb00000
    ctx->pc = 0x190870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x190874: 0xffbf0020
    ctx->pc = 0x190874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x190878: 0xc0643d2
    ctx->pc = 0x190878u;
    SET_GPR_U32(ctx, 31, 0x190880u);
    ctx->pc = 0x19087Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_GetHd_0x190f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190880u; }
        else if (ctx->pc != 0x190880u) { ctx->pc = 0x190880u; }
    }
    if (ctx->pc != 0x190880u) { return; }
    ctx->pc = 0x190880u;
    // 0x190880: 0x40802d
    ctx->pc = 0x190880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190884: 0x12000020
    ctx->pc = 0x190884u;
    {
        const bool branch_taken_0x190884 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x190888u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x190884) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x19088Cu;
    // 0x19088c: 0x8e020000
    ctx->pc = 0x19088cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190890: 0x5440001e
    ctx->pc = 0x190890u;
    {
        const bool branch_taken_0x190890 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x190890) {
            ctx->pc = 0x190894u;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x19090Cu;
            goto label_19090c;
        }
    }
    ctx->pc = 0x190898u;
    // 0x190898: 0x8e313e20
    ctx->pc = 0x190898u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 17), 15904)));
    // 0x19089c: 0xc064246
    ctx->pc = 0x19089Cu;
    SET_GPR_U32(ctx, 31, 0x1908A4u);
    ctx->pc = 0x1908A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_IsEndDecinfo_0x190918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908A4u; }
        else if (ctx->pc != 0x1908A4u) { ctx->pc = 0x1908A4u; }
    }
    if (ctx->pc != 0x1908A4u) { return; }
    ctx->pc = 0x1908A4u;
    // 0x1908a4: 0x10400018
    ctx->pc = 0x1908A4u;
    {
        const bool branch_taken_0x1908a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1908A8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1908a4) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x1908ACu;
    // 0x1908ac: 0xc05c880
    ctx->pc = 0x1908ACu;
    SET_GPR_U32(ctx, 31, 0x1908B4u);
    ctx->pc = 0x1908B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172200u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetSfreq_0x172200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908B4u; }
        else if (ctx->pc != 0x1908B4u) { ctx->pc = 0x1908B4u; }
    }
    if (ctx->pc != 0x1908B4u) { return; }
    ctx->pc = 0x1908B4u;
    // 0x1908b4: 0xae020010
    ctx->pc = 0x1908b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1908b8: 0xc05c872
    ctx->pc = 0x1908B8u;
    SET_GPR_U32(ctx, 31, 0x1908C0u);
    ctx->pc = 0x1908BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1721C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetNumSmpl_0x1721c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908C0u; }
        else if (ctx->pc != 0x1908C0u) { ctx->pc = 0x1908C0u; }
    }
    if (ctx->pc != 0x1908C0u) { return; }
    ctx->pc = 0x1908C0u;
    // 0x1908c0: 0xae020014
    ctx->pc = 0x1908c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1908c4: 0xc05c88e
    ctx->pc = 0x1908C4u;
    SET_GPR_U32(ctx, 31, 0x1908CCu);
    ctx->pc = 0x1908C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172238u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetNumChan_0x172238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908CCu; }
        else if (ctx->pc != 0x1908CCu) { ctx->pc = 0x1908CCu; }
    }
    if (ctx->pc != 0x1908CCu) { return; }
    ctx->pc = 0x1908CCu;
    // 0x1908cc: 0x8e040010
    ctx->pc = 0x1908ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1908d0: 0x2405ffff
    ctx->pc = 0x1908d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1908d4: 0xae02000c
    ctx->pc = 0x1908d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1908d8: 0x24060001
    ctx->pc = 0x1908d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1908dc: 0x822018
    ctx->pc = 0x1908dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1908e0: 0xae060000
    ctx->pc = 0x1908e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1908e4: 0xae060008
    ctx->pc = 0x1908e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x1908e8: 0x418c0
    ctx->pc = 0x1908e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1908ec: 0x641821
    ctx->pc = 0x1908ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1908f0: 0xa3282a
    ctx->pc = 0x1908f0u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x1908f4: 0x2462000f
    ctx->pc = 0x1908f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 15));
    // 0x1908f8: 0x65100b
    ctx->pc = 0x1908f8u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x1908fc: 0x21103
    ctx->pc = 0x1908fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x190900: 0xae020004
    ctx->pc = 0x190900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x190904: 0xdfbf0020
    ctx->pc = 0x190904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_190908:
    // 0x190908: 0xdfb10010
    ctx->pc = 0x190908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19090c:
    // 0x19090c: 0xdfb00000
    ctx->pc = 0x19090cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190910: 0x3e00008
    ctx->pc = 0x190910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190914u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190908u: goto label_190908;
            case 0x19090Cu: goto label_19090c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x190918u;
}
