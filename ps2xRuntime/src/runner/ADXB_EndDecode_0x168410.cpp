#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_EndDecode
// Address: 0x168410 - 0x16858c
void ADXB_EndDecode_0x168410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_EndDecode");


    ctx->pc = 0x168410u;

    // 0x168410: 0x27bdff50
    ctx->pc = 0x168410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x168414: 0xffb60070
    ctx->pc = 0x168414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x168418: 0xffb50060
    ctx->pc = 0x168418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x16841c: 0xffb40050
    ctx->pc = 0x16841cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x168420: 0xffb30040
    ctx->pc = 0x168420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x168424: 0xffb00010
    ctx->pc = 0x168424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x168428: 0x80982d
    ctx->pc = 0x168428u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16842c: 0xffbf00a0
    ctx->pc = 0x16842cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x168430: 0x26760050
    ctx->pc = 0x168430u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 19), 80));
    // 0x168434: 0xffbe0090
    ctx->pc = 0x168434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x168438: 0xffb70080
    ctx->pc = 0x168438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x16843c: 0xffb20030
    ctx->pc = 0x16843cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x168440: 0xffb10020
    ctx->pc = 0x168440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x168444: 0x8e620044
    ctx->pc = 0x168444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x168448: 0x8e770040
    ctx->pc = 0x168448u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x16844c: 0x8ede0014
    ctx->pc = 0x16844cu;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x168450: 0xafa20000
    ctx->pc = 0x168450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x168454: 0x8ed10010
    ctx->pc = 0x168454u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x168458: 0x8ed20028
    ctx->pc = 0x168458u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x16845c: 0x52200001
    ctx->pc = 0x16845Cu;
    {
        const bool branch_taken_0x16845c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x16845c) {
            ctx->pc = 0x168460u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x168464u;
            goto label_168464;
        }
    }
    ctx->pc = 0x168464u;
label_168464:
    // 0x168464: 0x2519021
    ctx->pc = 0x168464u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x168468: 0x2652ffff
    ctx->pc = 0x168468u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x16846c: 0x8e640008
    ctx->pc = 0x16846cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x168470: 0x251001a
    ctx->pc = 0x168470u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x168474: 0x8ed4000c
    ctx->pc = 0x168474u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x168478: 0x8ed50020
    ctx->pc = 0x168478u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x16847c: 0x8010
    ctx->pc = 0x16847cu;
    SET_GPR_U32(ctx, 16, ctx->hi);
    // 0x168480: 0x9012
    ctx->pc = 0x168480u;
    SET_GPR_U32(ctx, 18, ctx->lo);
    // 0x168484: 0x26100001
    ctx->pc = 0x168484u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x168488: 0xc05d01a
    ctx->pc = 0x168488u;
    SET_GPR_U32(ctx, 31, 0x168490u);
    ctx->pc = 0x16848Cu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->pc = 0x174068u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_GetNumBlk_0x174068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168490u; }
        else if (ctx->pc != 0x168490u) { ctx->pc = 0x168490u; }
    }
    if (ctx->pc != 0x168490u) { return; }
    ctx->pc = 0x168490u;
    // 0x168490: 0x518818
    ctx->pc = 0x168490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)(uint32_t)result); }
    // 0x168494: 0x8ec30008
    ctx->pc = 0x168494u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x168498: 0x7054a018
    ctx->pc = 0x168498u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x16849c: 0x52102a
    ctx->pc = 0x16849cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 18)));
    // 0x1684a0: 0x50600001
    ctx->pc = 0x1684A0u;
    {
        const bool branch_taken_0x1684a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1684a0) {
            ctx->pc = 0x1684A4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1684A8u;
            goto label_1684a8;
        }
    }
    ctx->pc = 0x1684A8u;
label_1684a8:
    // 0x1684a8: 0x223001a
    ctx->pc = 0x1684a8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1684ac: 0xae7400a4
    ctx->pc = 0x1684acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 20));
    // 0x1684b0: 0x8812
    ctx->pc = 0x1684b0u;
    SET_GPR_U32(ctx, 17, ctx->lo);
    // 0x1684b4: 0x2308023
    ctx->pc = 0x1684b4u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1684b8: 0x222800b
    ctx->pc = 0x1684b8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 17));
    // 0x1684bc: 0x2b0a821
    ctx->pc = 0x1684bcu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1684c0: 0x2b7102a
    ctx->pc = 0x1684c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 23)));
    // 0x1684c4: 0x14400025
    ctx->pc = 0x1684C4u;
    {
        const bool branch_taken_0x1684c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1684C8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 16));
        if (branch_taken_0x1684c4) {
            ctx->pc = 0x16855Cu;
            goto label_16855c;
        }
    }
    ctx->pc = 0x1684CCu;
    // 0x1684cc: 0x8ec30008
    ctx->pc = 0x1684ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1684d0: 0x24020002
    ctx->pc = 0x1684d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1684d4: 0x14620011
    ctx->pc = 0x1684D4u;
    {
        const bool branch_taken_0x1684d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1684D8u;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
        if (branch_taken_0x1684d4) {
            ctx->pc = 0x16851Cu;
            goto label_16851c;
        }
    }
    ctx->pc = 0x1684DCu;
    // 0x1684dc: 0x3c0202d
    ctx->pc = 0x1684dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684e0: 0x2e0282d
    ctx->pc = 0x1684e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684e4: 0x2a0382d
    ctx->pc = 0x1684e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684e8: 0x8fa60000
    ctx->pc = 0x1684e8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1684ec: 0xdfbf00a0
    ctx->pc = 0x1684ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1684f0: 0xdfbe0090
    ctx->pc = 0x1684f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1684f4: 0xdfb70080
    ctx->pc = 0x1684f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1684f8: 0xdfb60070
    ctx->pc = 0x1684f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1684fc: 0xdfb50060
    ctx->pc = 0x1684fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x168500: 0xdfb40050
    ctx->pc = 0x168500u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x168504: 0xdfb30040
    ctx->pc = 0x168504u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168508: 0xdfb20030
    ctx->pc = 0x168508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16850c: 0xdfb10020
    ctx->pc = 0x16850cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168510: 0xdfb00010
    ctx->pc = 0x168510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168514: 0x805a0e4
    ctx->pc = 0x168514u;
    ctx->pc = 0x168518u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
    ctx->pc = 0x168390u;
    ADXB_CopyExtraBufSte_0x168390(rdram, ctx, runtime); return;
    ctx->pc = 0x16851Cu;
label_16851c:
    // 0x16851c: 0x3c0202d
    ctx->pc = 0x16851cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168520: 0x2e0282d
    ctx->pc = 0x168520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168524: 0x2a0382d
    ctx->pc = 0x168524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168528: 0x8fa60000
    ctx->pc = 0x168528u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16852c: 0xdfbf00a0
    ctx->pc = 0x16852cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x168530: 0xdfbe0090
    ctx->pc = 0x168530u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x168534: 0xdfb70080
    ctx->pc = 0x168534u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x168538: 0xdfb60070
    ctx->pc = 0x168538u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16853c: 0xdfb50060
    ctx->pc = 0x16853cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x168540: 0xdfb40050
    ctx->pc = 0x168540u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x168544: 0xdfb30040
    ctx->pc = 0x168544u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168548: 0xdfb20030
    ctx->pc = 0x168548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16854c: 0xdfb10020
    ctx->pc = 0x16854cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168550: 0xdfb00010
    ctx->pc = 0x168550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168554: 0x805a100
    ctx->pc = 0x168554u;
    ctx->pc = 0x168558u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
    ctx->pc = 0x168400u;
    ADXB_CopyExtraBufMono_0x168400(rdram, ctx, runtime); return;
    ctx->pc = 0x16855Cu;
label_16855c:
    // 0x16855c: 0xdfbf00a0
    ctx->pc = 0x16855cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x168560: 0xdfbe0090
    ctx->pc = 0x168560u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x168564: 0xdfb70080
    ctx->pc = 0x168564u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x168568: 0xdfb60070
    ctx->pc = 0x168568u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16856c: 0xdfb50060
    ctx->pc = 0x16856cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x168570: 0xdfb40050
    ctx->pc = 0x168570u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x168574: 0xdfb30040
    ctx->pc = 0x168574u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168578: 0xdfb20030
    ctx->pc = 0x168578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16857c: 0xdfb10020
    ctx->pc = 0x16857cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168580: 0xdfb00010
    ctx->pc = 0x168580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168584: 0x3e00008
    ctx->pc = 0x168584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168588u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168464u: goto label_168464;
            case 0x1684A8u: goto label_1684a8;
            case 0x16851Cu: goto label_16851c;
            case 0x16855Cu: goto label_16855c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16858Cu;
}
