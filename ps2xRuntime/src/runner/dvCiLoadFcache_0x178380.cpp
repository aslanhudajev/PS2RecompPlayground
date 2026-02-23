#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiLoadFcache
// Address: 0x178380 - 0x1784a4
void dvCiLoadFcache_0x178380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiLoadFcache");


    ctx->pc = 0x178380u;

    // 0x178380: 0x27bdffa0
    ctx->pc = 0x178380u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x178384: 0x3c02002e
    ctx->pc = 0x178384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x178388: 0xffb40040
    ctx->pc = 0x178388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x17838c: 0xffb20020
    ctx->pc = 0x17838cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x178390: 0x2454f840
    ctx->pc = 0x178390u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294965312));
    // 0x178394: 0xffb10010
    ctx->pc = 0x178394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x178398: 0xa0902d
    ctx->pc = 0x178398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17839c: 0xffb00000
    ctx->pc = 0x17839cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1783a0: 0x80882d
    ctx->pc = 0x1783a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783a4: 0xffb30030
    ctx->pc = 0x1783a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1783a8: 0xc0802d
    ctx->pc = 0x1783a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783ac: 0xffbf0050
    ctx->pc = 0x1783acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1783b0: 0xe0982d
    ctx->pc = 0x1783b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783b4: 0x280202d
    ctx->pc = 0x1783b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783b8: 0x282d
    ctx->pc = 0x1783b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783bc: 0xc050cfe
    ctx->pc = 0x1783BCu;
    SET_GPR_U32(ctx, 31, 0x1783C4u);
    ctx->pc = 0x1783C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783C4u; }
        else if (ctx->pc != 0x1783C4u) { ctx->pc = 0x1783C4u; }
    }
    if (ctx->pc != 0x1783C4u) { return; }
    ctx->pc = 0x1783C4u;
    // 0x1783c4: 0x3c030024
    ctx->pc = 0x1783c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x1783c8: 0x8c629f08
    ctx->pc = 0x1783c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294942472)));
    // 0x1783cc: 0x14400003
    ctx->pc = 0x1783CCu;
    {
        const bool branch_taken_0x1783cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1783cc) {
            ctx->pc = 0x1783DCu;
            goto label_1783dc;
        }
    }
    ctx->pc = 0x1783D4u;
    // 0x1783d4: 0xc05e0b0
    ctx->pc = 0x1783D4u;
    SET_GPR_U32(ctx, 31, 0x1783DCu);
    ctx->pc = 0x1782C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_init_flist_0x1782c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783DCu; }
        else if (ctx->pc != 0x1783DCu) { ctx->pc = 0x1783DCu; }
    }
    if (ctx->pc != 0x1783DCu) { return; }
    ctx->pc = 0x1783DCu;
label_1783dc:
    // 0x1783dc: 0x12200005
    ctx->pc = 0x1783DCu;
    {
        const bool branch_taken_0x1783dc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x1783dc) {
            ctx->pc = 0x1783F4u;
            goto label_1783f4;
        }
    }
    ctx->pc = 0x1783E4u;
    // 0x1783e4: 0x12400003
    ctx->pc = 0x1783E4u;
    {
        const bool branch_taken_0x1783e4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1783e4) {
            ctx->pc = 0x1783F4u;
            goto label_1783f4;
        }
    }
    ctx->pc = 0x1783ECu;
    // 0x1783ec: 0x16000005
    ctx->pc = 0x1783ECu;
    {
        const bool branch_taken_0x1783ec = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1783F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1783ec) {
            ctx->pc = 0x178404u;
            goto label_178404;
        }
    }
    ctx->pc = 0x1783F4u;
label_1783f4:
    // 0x1783f4: 0xc05e0b0
    ctx->pc = 0x1783F4u;
    SET_GPR_U32(ctx, 31, 0x1783FCu);
    ctx->pc = 0x1782C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_init_flist_0x1782c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783FCu; }
        else if (ctx->pc != 0x1783FCu) { ctx->pc = 0x1783FCu; }
    }
    if (ctx->pc != 0x1783FCu) { return; }
    ctx->pc = 0x1783FCu;
    // 0x1783fc: 0x10000021
    ctx->pc = 0x1783FCu;
    {
        const bool branch_taken_0x1783fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178400u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1783fc) {
            ctx->pc = 0x178484u;
            goto label_178484;
        }
    }
    ctx->pc = 0x178404u;
label_178404:
    // 0x178404: 0xc05dfec
    ctx->pc = 0x178404u;
    SET_GPR_U32(ctx, 31, 0x17840Cu);
    ctx->pc = 0x178408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_flist_0x177fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17840Cu; }
        else if (ctx->pc != 0x17840Cu) { ctx->pc = 0x17840Cu; }
    }
    if (ctx->pc != 0x17840Cu) { return; }
    ctx->pc = 0x17840Cu;
    // 0x17840c: 0x5440000b
    ctx->pc = 0x17840Cu;
    {
        const bool branch_taken_0x17840c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17840c) {
            ctx->pc = 0x178410u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 19), 9));
            ctx->pc = 0x17843Cu;
            goto label_17843c;
        }
    }
    ctx->pc = 0x178414u;
    // 0x178414: 0x3c04002c
    ctx->pc = 0x178414u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x178418: 0x220282d
    ctx->pc = 0x178418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17841c: 0xc05114a
    ctx->pc = 0x17841Cu;
    SET_GPR_U32(ctx, 31, 0x178424u);
    ctx->pc = 0x178420u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948128));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178424u; }
        else if (ctx->pc != 0x178424u) { ctx->pc = 0x178424u; }
    }
    if (ctx->pc != 0x178424u) { return; }
    ctx->pc = 0x178424u;
    // 0x178424: 0x3c05002c
    ctx->pc = 0x178424u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x178428: 0x202d
    ctx->pc = 0x178428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17842c: 0xc05dd3c
    ctx->pc = 0x17842Cu;
    SET_GPR_U32(ctx, 31, 0x178434u);
    ctx->pc = 0x178430u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948168));
    ctx->pc = 0x1774F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_call_errfn_0x1774f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178434u; }
        else if (ctx->pc != 0x178434u) { ctx->pc = 0x178434u; }
    }
    if (ctx->pc != 0x178434u) { return; }
    ctx->pc = 0x178434u;
    // 0x178434: 0x10000013
    ctx->pc = 0x178434u;
    {
        const bool branch_taken_0x178434 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178438u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178434) {
            ctx->pc = 0x178484u;
            goto label_178484;
        }
    }
    ctx->pc = 0x17843Cu;
label_17843c:
    // 0x17843c: 0x280282d
    ctx->pc = 0x17843cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178440: 0x211001b
    ctx->pc = 0x178440u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 16) / divisor; ctx->hi = GPR_U32(ctx, 17) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,16); } }
    // 0x178444: 0x52200001
    ctx->pc = 0x178444u;
    {
        const bool branch_taken_0x178444 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x178444) {
            ctx->pc = 0x178448u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x17844Cu;
            goto label_17844c;
        }
    }
    ctx->pc = 0x17844Cu;
label_17844c:
    // 0x17844c: 0x240202d
    ctx->pc = 0x17844cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178450: 0x260382d
    ctx->pc = 0x178450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178454: 0x8012
    ctx->pc = 0x178454u;
    SET_GPR_U32(ctx, 16, ctx->lo);
    // 0x178458: 0xc05df9e
    ctx->pc = 0x178458u;
    SET_GPR_U32(ctx, 31, 0x178460u);
    ctx->pc = 0x17845Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        analysis_flist_0x177e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178460u; }
        else if (ctx->pc != 0x178460u) { ctx->pc = 0x178460u; }
    }
    if (ctx->pc != 0x178460u) { return; }
    ctx->pc = 0x178460u;
    // 0x178460: 0x240202d
    ctx->pc = 0x178460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178464: 0xc05e028
    ctx->pc = 0x178464u;
    SET_GPR_U32(ctx, 31, 0x17846Cu);
    ctx->pc = 0x178468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1780A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        search_fstate_0x1780a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17846Cu; }
        else if (ctx->pc != 0x17846Cu) { ctx->pc = 0x17846Cu; }
    }
    if (ctx->pc != 0x17846Cu) { return; }
    ctx->pc = 0x17846Cu;
    // 0x17846c: 0x26630001
    ctx->pc = 0x17846cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 1));
    // 0x178470: 0x1080c0
    ctx->pc = 0x178470u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 3));
    // 0x178474: 0x431018
    ctx->pc = 0x178474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x178478: 0x52200001
    ctx->pc = 0x178478u;
    {
        const bool branch_taken_0x178478 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x178478) {
            ctx->pc = 0x17847Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x178480u;
            goto label_178480;
        }
    }
    ctx->pc = 0x178480u;
label_178480:
    // 0x178480: 0x2021021
    ctx->pc = 0x178480u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_178484:
    // 0x178484: 0xdfbf0050
    ctx->pc = 0x178484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178488: 0xdfb40040
    ctx->pc = 0x178488u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17848c: 0xdfb30030
    ctx->pc = 0x17848cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178490: 0xdfb20020
    ctx->pc = 0x178490u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178494: 0xdfb10010
    ctx->pc = 0x178494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178498: 0xdfb00000
    ctx->pc = 0x178498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17849c: 0x3e00008
    ctx->pc = 0x17849Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1784A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1783DCu: goto label_1783dc;
            case 0x1783F4u: goto label_1783f4;
            case 0x178404u: goto label_178404;
            case 0x17843Cu: goto label_17843c;
            case 0x17844Cu: goto label_17844c;
            case 0x178480u: goto label_178480;
            case 0x178484u: goto label_178484;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1784A4u;
}
