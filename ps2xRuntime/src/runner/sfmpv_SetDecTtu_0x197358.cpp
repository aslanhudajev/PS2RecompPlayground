#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_SetDecTtu
// Address: 0x197358 - 0x197470
void sfmpv_SetDecTtu_0x197358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_SetDecTtu");


    ctx->pc = 0x197358u;

    // 0x197358: 0x27bdff80
    ctx->pc = 0x197358u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19735c: 0xffb30060
    ctx->pc = 0x19735cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x197360: 0x80982d
    ctx->pc = 0x197360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197364: 0xffb20050
    ctx->pc = 0x197364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x197368: 0xa0202d
    ctx->pc = 0x197368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19736c: 0xffb10040
    ctx->pc = 0x19736cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x197370: 0xffb00030
    ctx->pc = 0x197370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x197374: 0x3a0282d
    ctx->pc = 0x197374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197378: 0xffbf0070
    ctx->pc = 0x197378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19737c: 0xc065d1c
    ctx->pc = 0x19737Cu;
    SET_GPR_U32(ctx, 31, 0x197384u);
    ctx->pc = 0x197380u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 19), 2732));
    ctx->pc = 0x197470u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_ReadTcode_0x197470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197384u; }
        else if (ctx->pc != 0x197384u) { ctx->pc = 0x197384u; }
    }
    if (ctx->pc != 0x197384u) { return; }
    ctx->pc = 0x197384u;
    // 0x197384: 0x26700b24
    ctx->pc = 0x197384u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 2852));
    // 0x197388: 0x3a0202d
    ctx->pc = 0x197388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19738c: 0x27a50020
    ctx->pc = 0x19738cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x197390: 0x27a60024
    ctx->pc = 0x197390u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
    // 0x197394: 0xc0678c2
    ctx->pc = 0x197394u;
    SET_GPR_U32(ctx, 31, 0x19739Cu);
    ctx->pc = 0x197398u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 19), 2772));
    ctx->pc = 0x19E308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_Tc2Time_0x19e308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19739Cu; }
        else if (ctx->pc != 0x19739Cu) { ctx->pc = 0x19739Cu; }
    }
    if (ctx->pc != 0x19739Cu) { return; }
    ctx->pc = 0x19739Cu;
    // 0x19739c: 0x6ba20007
    ctx->pc = 0x19739cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1973a0: 0x6fa20000
    ctx->pc = 0x1973a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1973a4: 0x6ba3000f
    ctx->pc = 0x1973a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1973a8: 0x6fa30008
    ctx->pc = 0x1973a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1973ac: 0x6ba40017
    ctx->pc = 0x1973acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1973b0: 0x6fa40010
    ctx->pc = 0x1973b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1973b4: 0x8fa50018
    ctx->pc = 0x1973b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1973b8: 0xb2620b2f
    ctx->pc = 0x1973b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2863); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1973bc: 0xb6620b28
    ctx->pc = 0x1973bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2856); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1973c0: 0xb2630b37
    ctx->pc = 0x1973c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2871); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1973c4: 0xb6630b30
    ctx->pc = 0x1973c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2864); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1973c8: 0xb2640b3f
    ctx->pc = 0x1973c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2879); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1973cc: 0xb6640b38
    ctx->pc = 0x1973ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2872); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1973d0: 0xae650b40
    ctx->pc = 0x1973d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2880), GPR_U32(ctx, 5));
    // 0x1973d4: 0x8fa20020
    ctx->pc = 0x1973d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1973d8: 0x24050001
    ctx->pc = 0x1973d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1973dc: 0x8e230020
    ctx->pc = 0x1973dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1973e0: 0x8fa40024
    ctx->pc = 0x1973e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1973e4: 0x431023
    ctx->pc = 0x1973e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1973e8: 0xae020020
    ctx->pc = 0x1973e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1973ec: 0xae040024
    ctx->pc = 0x1973ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x1973f0: 0xae650b24
    ctx->pc = 0x1973f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2852), GPR_U32(ctx, 5));
    // 0x1973f4: 0x8e430020
    ctx->pc = 0x1973f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1973f8: 0x8e020020
    ctx->pc = 0x1973f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1973fc: 0x43102a
    ctx->pc = 0x1973fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x197400: 0x14400015
    ctx->pc = 0x197400u;
    {
        const bool branch_taken_0x197400 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x197404u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x197400) {
            ctx->pc = 0x197458u;
            goto label_197458;
        }
    }
    ctx->pc = 0x197408u;
    // 0x197408: 0x6a620b2b
    ctx->pc = 0x197408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2859); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19740c: 0x6e620b24
    ctx->pc = 0x19740cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2852); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x197410: 0x6a630b33
    ctx->pc = 0x197410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2867); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x197414: 0x6e630b2c
    ctx->pc = 0x197414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2860); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x197418: 0x6a640b3b
    ctx->pc = 0x197418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2875); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19741c: 0x6e640b34
    ctx->pc = 0x19741cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2868); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x197420: 0x6a650b43
    ctx->pc = 0x197420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2883); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x197424: 0x6e650b3c
    ctx->pc = 0x197424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2876); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x197428: 0xb2620adb
    ctx->pc = 0x197428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2779); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19742c: 0xb6620ad4
    ctx->pc = 0x19742cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2772); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197430: 0xb2630ae3
    ctx->pc = 0x197430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2787); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197434: 0xb6630adc
    ctx->pc = 0x197434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2780); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197438: 0xb2640aeb
    ctx->pc = 0x197438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2795); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19743c: 0xb6640ae4
    ctx->pc = 0x19743cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2788); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197440: 0xb2650af3
    ctx->pc = 0x197440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2803); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197444: 0xb6650aec
    ctx->pc = 0x197444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2796); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197448: 0x6a620b4b
    ctx->pc = 0x197448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2891); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19744c: 0x6e620b44
    ctx->pc = 0x19744cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2884); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x197450: 0xb2620afb
    ctx->pc = 0x197450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2811); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197454: 0xb6620af4
    ctx->pc = 0x197454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 2804); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_197458:
    // 0x197458: 0xdfb30060
    ctx->pc = 0x197458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19745c: 0xdfb20050
    ctx->pc = 0x19745cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197460: 0xdfb10040
    ctx->pc = 0x197460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197464: 0xdfb00030
    ctx->pc = 0x197464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197468: 0x3e00008
    ctx->pc = 0x197468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19746Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197458u: goto label_197458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197470u;
}
