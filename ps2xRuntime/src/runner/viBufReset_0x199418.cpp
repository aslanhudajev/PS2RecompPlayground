#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: viBufReset
// Address: 0x199418 - 0x199560
void viBufReset_0x199418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("viBufReset");


    ctx->pc = 0x199418u;

    // 0x199418: 0x27bdffc0
    ctx->pc = 0x199418u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19941c: 0x24020001
    ctx->pc = 0x19941cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x199420: 0xffb20020
    ctx->pc = 0x199420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x199424: 0xffb10010
    ctx->pc = 0x199424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x199428: 0x80902d
    ctx->pc = 0x199428u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19942c: 0xffbf0030
    ctx->pc = 0x19942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x199430: 0x882d
    ctx->pc = 0x199430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199434: 0xffb00000
    ctx->pc = 0x199434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199438: 0xae420044
    ctx->pc = 0x199438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x19943c: 0x8e430054
    ctx->pc = 0x19943cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x199440: 0xae40000c
    ctx->pc = 0x199440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x199444: 0xae400010
    ctx->pc = 0x199444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x199448: 0xae400014
    ctx->pc = 0x199448u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x19944c: 0xae400058
    ctx->pc = 0x19944cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x199450: 0x18600011
    ctx->pc = 0x199450u;
    {
        const bool branch_taken_0x199450 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x199454u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
        if (branch_taken_0x199450) {
            ctx->pc = 0x199498u;
            goto label_199498;
        }
    }
    ctx->pc = 0x199458u;
    // 0x199458: 0x8e450050
    ctx->pc = 0x199458u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x19945c: 0x8e470004
    ctx->pc = 0x19945cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_199460:
    // 0x199460: 0x24020018
    ctx->pc = 0x199460u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x199464: 0x2404ffff
    ctx->pc = 0x199464u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x199468: 0x2221818
    ctx->pc = 0x199468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19946c: 0x26310001
    ctx->pc = 0x19946cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x199470: 0x651021
    ctx->pc = 0x199470u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x199474: 0xac400014
    ctx->pc = 0x199474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x199478: 0xac400010
    ctx->pc = 0x199478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x19947c: 0xfc440008
    ctx->pc = 0x19947cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x199480: 0x8e430054
    ctx->pc = 0x199480u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x199484: 0x223182a
    ctx->pc = 0x199484u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x199488: 0x1460fff5
    ctx->pc = 0x199488u;
    {
        const bool branch_taken_0x199488 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x19948Cu;
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        if (branch_taken_0x199488) {
            ctx->pc = 0x199460u;
            goto label_199460;
        }
    }
    ctx->pc = 0x199490u;
    // 0x199490: 0x10000003
    ctx->pc = 0x199490u;
    {
        const bool branch_taken_0x199490 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x199494u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        if (branch_taken_0x199490) {
            ctx->pc = 0x1994A0u;
            goto label_1994a0;
        }
    }
    ctx->pc = 0x199498u;
label_199498:
    // 0x199498: 0x8e470004
    ctx->pc = 0x199498u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19949c: 0x8e420008
    ctx->pc = 0x19949cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1994a0:
    // 0x1994a0: 0x18400011
    ctx->pc = 0x1994A0u;
    {
        const bool branch_taken_0x1994a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1994A4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1994a0) {
            ctx->pc = 0x1994E8u;
            goto label_1994e8;
        }
    }
    ctx->pc = 0x1994A8u;
    // 0x1994a8: 0x3c100fff
    ctx->pc = 0x1994a8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)4095 << 16));
    // 0x1994ac: 0x3610ffff
    ctx->pc = 0x1994acu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 65535));
label_1994b0:
    // 0x1994b0: 0x8e420000
    ctx->pc = 0x1994b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1994b4: 0x112ac0
    ctx->pc = 0x1994b4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 11));
    // 0x1994b8: 0x112100
    ctx->pc = 0x1994b8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 4));
    // 0x1994bc: 0x24060003
    ctx->pc = 0x1994bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1994c0: 0xa22821
    ctx->pc = 0x1994c0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1994c4: 0xe42021
    ctx->pc = 0x1994c4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1994c8: 0xb02824
    ctx->pc = 0x1994c8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1994cc: 0xc0664de
    ctx->pc = 0x1994CCu;
    SET_GPR_U32(ctx, 31, 0x1994D4u);
    ctx->pc = 0x1994D0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x199378u;
    {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x199378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1994D4u; }
        else if (ctx->pc != 0x1994D4u) { ctx->pc = 0x1994D4u; }
    }
    if (ctx->pc != 0x1994D4u) { return; }
    ctx->pc = 0x1994D4u;
    // 0x1994d4: 0x26310001
    ctx->pc = 0x1994d4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1994d8: 0x8e420008
    ctx->pc = 0x1994d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1994dc: 0x222102a
    ctx->pc = 0x1994dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1994e0: 0x1440fff3
    ctx->pc = 0x1994E0u;
    {
        const bool branch_taken_0x1994e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1994E4u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        if (branch_taken_0x1994e0) {
            ctx->pc = 0x1994B0u;
            goto label_1994b0;
        }
    }
    ctx->pc = 0x1994E8u;
label_1994e8:
    // 0x1994e8: 0x3c100fff
    ctx->pc = 0x1994e8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)4095 << 16));
    // 0x1994ec: 0x112100
    ctx->pc = 0x1994ecu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 4));
    // 0x1994f0: 0x3610ffff
    ctx->pc = 0x1994f0u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 65535));
    // 0x1994f4: 0xe42021
    ctx->pc = 0x1994f4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1994f8: 0xf02824
    ctx->pc = 0x1994f8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x1994fc: 0x24060002
    ctx->pc = 0x1994fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x199500: 0xc0664de
    ctx->pc = 0x199500u;
    SET_GPR_U32(ctx, 31, 0x199508u);
    ctx->pc = 0x199504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199378u;
    {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x199378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199508u; }
        else if (ctx->pc != 0x199508u) { ctx->pc = 0x199508u; }
    }
    if (ctx->pc != 0x199508u) { return; }
    ctx->pc = 0x199508u;
    // 0x199508: 0x3c021000
    ctx->pc = 0x199508u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x19950c: 0x8e440000
    ctx->pc = 0x19950cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x199510: 0x3442b420
    ctx->pc = 0x199510u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46112));
    // 0x199514: 0x8e450004
    ctx->pc = 0x199514u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x199518: 0xac400000
    ctx->pc = 0x199518u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x19951c: 0x3c031000
    ctx->pc = 0x19951cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x199520: 0x902024
    ctx->pc = 0x199520u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x199524: 0x3463b410
    ctx->pc = 0x199524u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46096));
    // 0x199528: 0x3c021000
    ctx->pc = 0x199528u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x19952c: 0xac640000
    ctx->pc = 0x19952cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x199530: 0xb02824
    ctx->pc = 0x199530u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x199534: 0x3442b430
    ctx->pc = 0x199534u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46128));
    // 0x199538: 0xac450000
    ctx->pc = 0x199538u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x19953c: 0xc0664c4
    ctx->pc = 0x19953Cu;
    SET_GPR_U32(ctx, 31, 0x199544u);
    ctx->pc = 0x199540u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x199310u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x199310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199544u; }
        else if (ctx->pc != 0x199544u) { ctx->pc = 0x199544u; }
    }
    if (ctx->pc != 0x199544u) { return; }
    ctx->pc = 0x199544u;
    // 0x199544: 0xdfbf0030
    ctx->pc = 0x199544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199548: 0x24020001
    ctx->pc = 0x199548u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19954c: 0xdfb20020
    ctx->pc = 0x19954cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199550: 0xdfb10010
    ctx->pc = 0x199550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199554: 0xdfb00000
    ctx->pc = 0x199554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199558: 0x3e00008
    ctx->pc = 0x199558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19955Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199460u: goto label_199460;
            case 0x199498u: goto label_199498;
            case 0x1994A0u: goto label_1994a0;
            case 0x1994B0u: goto label_1994b0;
            case 0x1994E8u: goto label_1994e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199560u;
}
