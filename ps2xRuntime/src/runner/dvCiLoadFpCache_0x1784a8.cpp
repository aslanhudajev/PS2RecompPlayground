#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiLoadFpCache
// Address: 0x1784a8 - 0x1785a8
void dvCiLoadFpCache_0x1784a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiLoadFpCache");


    ctx->pc = 0x1784a8u;

    // 0x1784a8: 0x27bdffb0
    ctx->pc = 0x1784a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1784ac: 0x3c02002e
    ctx->pc = 0x1784acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x1784b0: 0xffb30030
    ctx->pc = 0x1784b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1784b4: 0xffb20020
    ctx->pc = 0x1784b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1784b8: 0x2453f840
    ctx->pc = 0x1784b8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294965312));
    // 0x1784bc: 0xffb10010
    ctx->pc = 0x1784bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1784c0: 0xa0902d
    ctx->pc = 0x1784c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784c4: 0xffb00000
    ctx->pc = 0x1784c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1784c8: 0xc0882d
    ctx->pc = 0x1784c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784cc: 0x80802d
    ctx->pc = 0x1784ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784d0: 0xffbf0040
    ctx->pc = 0x1784d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1784d4: 0x260202d
    ctx->pc = 0x1784d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784d8: 0x282d
    ctx->pc = 0x1784d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784dc: 0xc050cfe
    ctx->pc = 0x1784DCu;
    SET_GPR_U32(ctx, 31, 0x1784E4u);
    ctx->pc = 0x1784E0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1784E4u; }
        else if (ctx->pc != 0x1784E4u) { ctx->pc = 0x1784E4u; }
    }
    if (ctx->pc != 0x1784E4u) { return; }
    ctx->pc = 0x1784E4u;
    // 0x1784e4: 0x3c030024
    ctx->pc = 0x1784e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x1784e8: 0x8c629f08
    ctx->pc = 0x1784e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294942472)));
    // 0x1784ec: 0x14400003
    ctx->pc = 0x1784ECu;
    {
        const bool branch_taken_0x1784ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1784ec) {
            ctx->pc = 0x1784FCu;
            goto label_1784fc;
        }
    }
    ctx->pc = 0x1784F4u;
    // 0x1784f4: 0xc05e0b0
    ctx->pc = 0x1784F4u;
    SET_GPR_U32(ctx, 31, 0x1784FCu);
    ctx->pc = 0x1782C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_init_flist_0x1782c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1784FCu; }
        else if (ctx->pc != 0x1784FCu) { ctx->pc = 0x1784FCu; }
    }
    if (ctx->pc != 0x1784FCu) { return; }
    ctx->pc = 0x1784FCu;
label_1784fc:
    // 0x1784fc: 0x12000005
    ctx->pc = 0x1784FCu;
    {
        const bool branch_taken_0x1784fc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1784fc) {
            ctx->pc = 0x178514u;
            goto label_178514;
        }
    }
    ctx->pc = 0x178504u;
    // 0x178504: 0x12400003
    ctx->pc = 0x178504u;
    {
        const bool branch_taken_0x178504 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x178504) {
            ctx->pc = 0x178514u;
            goto label_178514;
        }
    }
    ctx->pc = 0x17850Cu;
    // 0x17850c: 0x16200005
    ctx->pc = 0x17850Cu;
    {
        const bool branch_taken_0x17850c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x178510u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17850c) {
            ctx->pc = 0x178524u;
            goto label_178524;
        }
    }
    ctx->pc = 0x178514u;
label_178514:
    // 0x178514: 0xc05e0b0
    ctx->pc = 0x178514u;
    SET_GPR_U32(ctx, 31, 0x17851Cu);
    ctx->pc = 0x1782C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_init_flist_0x1782c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17851Cu; }
        else if (ctx->pc != 0x17851Cu) { ctx->pc = 0x17851Cu; }
    }
    if (ctx->pc != 0x17851Cu) { return; }
    ctx->pc = 0x17851Cu;
    // 0x17851c: 0x1000001b
    ctx->pc = 0x17851Cu;
    {
        const bool branch_taken_0x17851c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178520u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17851c) {
            ctx->pc = 0x17858Cu;
            goto label_17858c;
        }
    }
    ctx->pc = 0x178524u;
label_178524:
    // 0x178524: 0xc05dfec
    ctx->pc = 0x178524u;
    SET_GPR_U32(ctx, 31, 0x17852Cu);
    ctx->pc = 0x178528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_flist_0x177fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17852Cu; }
        else if (ctx->pc != 0x17852Cu) { ctx->pc = 0x17852Cu; }
    }
    if (ctx->pc != 0x17852Cu) { return; }
    ctx->pc = 0x17852Cu;
    // 0x17852c: 0x5440000b
    ctx->pc = 0x17852Cu;
    {
        const bool branch_taken_0x17852c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17852c) {
            ctx->pc = 0x178530u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 137));
            ctx->pc = 0x17855Cu;
            goto label_17855c;
        }
    }
    ctx->pc = 0x178534u;
    // 0x178534: 0x3c04002c
    ctx->pc = 0x178534u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x178538: 0x200282d
    ctx->pc = 0x178538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17853c: 0xc05114a
    ctx->pc = 0x17853Cu;
    SET_GPR_U32(ctx, 31, 0x178544u);
    ctx->pc = 0x178540u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948128));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178544u; }
        else if (ctx->pc != 0x178544u) { ctx->pc = 0x178544u; }
    }
    if (ctx->pc != 0x178544u) { return; }
    ctx->pc = 0x178544u;
    // 0x178544: 0x3c05002c
    ctx->pc = 0x178544u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x178548: 0x202d
    ctx->pc = 0x178548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17854c: 0xc05dd3c
    ctx->pc = 0x17854Cu;
    SET_GPR_U32(ctx, 31, 0x178554u);
    ctx->pc = 0x178550u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948168));
    ctx->pc = 0x1774F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_call_errfn_0x1774f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178554u; }
        else if (ctx->pc != 0x178554u) { ctx->pc = 0x178554u; }
    }
    if (ctx->pc != 0x178554u) { return; }
    ctx->pc = 0x178554u;
    // 0x178554: 0x1000000d
    ctx->pc = 0x178554u;
    {
        const bool branch_taken_0x178554 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178558u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178554) {
            ctx->pc = 0x17858Cu;
            goto label_17858c;
        }
    }
    ctx->pc = 0x17855Cu;
label_17855c:
    // 0x17855c: 0x260282d
    ctx->pc = 0x17855cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178560: 0x230001a
    ctx->pc = 0x178560u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x178564: 0x52000001
    ctx->pc = 0x178564u;
    {
        const bool branch_taken_0x178564 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x178564) {
            ctx->pc = 0x178568u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x17856Cu;
            goto label_17856c;
        }
    }
    ctx->pc = 0x17856Cu;
label_17856c:
    // 0x17856c: 0x240202d
    ctx->pc = 0x17856cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178570: 0x3012
    ctx->pc = 0x178570u;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x178574: 0xc05df9e
    ctx->pc = 0x178574u;
    SET_GPR_U32(ctx, 31, 0x17857Cu);
    ctx->pc = 0x178578u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 129));
    ctx->pc = 0x177E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        analysis_flist_0x177e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17857Cu; }
        else if (ctx->pc != 0x17857Cu) { ctx->pc = 0x17857Cu; }
    }
    if (ctx->pc != 0x17857Cu) { return; }
    ctx->pc = 0x17857Cu;
    // 0x17857c: 0x240202d
    ctx->pc = 0x17857cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178580: 0xc05e028
    ctx->pc = 0x178580u;
    SET_GPR_U32(ctx, 31, 0x178588u);
    ctx->pc = 0x178584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1780A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        search_fstate_0x1780a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178588u; }
        else if (ctx->pc != 0x178588u) { ctx->pc = 0x178588u; }
    }
    if (ctx->pc != 0x178588u) { return; }
    ctx->pc = 0x178588u;
    // 0x178588: 0x501018
    ctx->pc = 0x178588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_17858c:
    // 0x17858c: 0xdfbf0040
    ctx->pc = 0x17858cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178590: 0xdfb30030
    ctx->pc = 0x178590u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178594: 0xdfb20020
    ctx->pc = 0x178594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178598: 0xdfb10010
    ctx->pc = 0x178598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17859c: 0xdfb00000
    ctx->pc = 0x17859cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1785a0: 0x3e00008
    ctx->pc = 0x1785A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1785A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1784FCu: goto label_1784fc;
            case 0x178514u: goto label_178514;
            case 0x178524u: goto label_178524;
            case 0x17855Cu: goto label_17855c;
            case 0x17856Cu: goto label_17856c;
            case 0x17858Cu: goto label_17858c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1785A8u;
}
