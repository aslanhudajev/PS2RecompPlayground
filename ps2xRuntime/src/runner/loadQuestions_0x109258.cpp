#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: loadQuestions
// Address: 0x109258 - 0x109420
void loadQuestions_0x109258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x109258u;

    // 0x109258: 0x27bdfb70
    ctx->pc = 0x109258u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966128));
    // 0x10925c: 0x3c050001
    ctx->pc = 0x10925cu;
    SET_GPR_S32(ctx, 5, ((uint32_t)1 << 16));
    // 0x109260: 0xffb40440
    ctx->pc = 0x109260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 20));
    // 0x109264: 0x24040040
    ctx->pc = 0x109264u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
    // 0x109268: 0xffb30430
    ctx->pc = 0x109268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 19));
    // 0x10926c: 0x34a59000
    ctx->pc = 0x10926cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)36864);
    // 0x109270: 0xffb20420
    ctx->pc = 0x109270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 18));
    // 0x109274: 0x3c140013
    ctx->pc = 0x109274u;
    SET_GPR_S32(ctx, 20, ((uint32_t)19 << 16));
    // 0x109278: 0xffb10410
    ctx->pc = 0x109278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 17));
    // 0x10927c: 0x902d
    ctx->pc = 0x10927cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109280: 0xffbf0480
    ctx->pc = 0x109280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
    // 0x109284: 0x982d
    ctx->pc = 0x109284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109288: 0xffb70470
    ctx->pc = 0x109288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 23));
    // 0x10928c: 0x882d
    ctx->pc = 0x10928cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109290: 0xffb60460
    ctx->pc = 0x109290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 22));
    // 0x109294: 0xffb50450
    ctx->pc = 0x109294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 21));
    // 0x109298: 0xc04a90c
    ctx->pc = 0x109298u;
    SET_GPR_U32(ctx, 31, 0x1092A0u);
    ctx->pc = 0x10929Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 16));
    ctx->pc = 0x12A430u;
    {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x12a430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1092A0u; }
    }
    if (ctx->pc != 0x1092A0u) { return; }
    ctx->pc = 0x1092A0u;
    // 0x1092a0: 0x3c040017
    ctx->pc = 0x1092a0u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1092a4: 0x3c060001
    ctx->pc = 0x1092a4u;
    SET_GPR_S32(ctx, 6, ((uint32_t)1 << 16));
    // 0x1092a8: 0x24843418
    ctx->pc = 0x1092a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13336));
    // 0x1092ac: 0x40282d
    ctx->pc = 0x1092acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1092b0: 0xaf828364
    ctx->pc = 0x1092b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935396), GPR_U32(ctx, 2));
    // 0x1092b4: 0xc040a1c
    ctx->pc = 0x1092B4u;
    SET_GPR_U32(ctx, 31, 0x1092BCu);
    ctx->pc = 0x1092B8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)36864);
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1092BCu; }
    }
    if (ctx->pc != 0x1092BCu) { return; }
    ctx->pc = 0x1092BCu;
    // 0x1092bc: 0xc043948
    ctx->pc = 0x1092BCu;
    SET_GPR_U32(ctx, 31, 0x1092C4u);
    ctx->pc = 0x1092C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1092C4u; }
    }
    if (ctx->pc != 0x1092C4u) { return; }
    ctx->pc = 0x1092C4u;
    // 0x1092c4: 0x8f828364
    ctx->pc = 0x1092c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935396)));
    // 0x1092c8: 0x86831468
    ctx->pc = 0x1092c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5224)));
    // 0x1092cc: 0x18600049
    ctx->pc = 0x1092CCu;
    {
        const bool branch_taken_0x1092cc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1092D0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935392), GPR_U32(ctx, 2));
        if (branch_taken_0x1092cc) {
            ctx->pc = 0x1093F4u;
            goto label_1093f4;
        }
    }
    ctx->pc = 0x1092D4u;
    // 0x1092d4: 0x3c170013
    ctx->pc = 0x1092d4u;
    SET_GPR_S32(ctx, 23, ((uint32_t)19 << 16));
label_1092d8:
    // 0x1092d8: 0x8f848360
    ctx->pc = 0x1092d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935392)));
    // 0x1092dc: 0xc040ab0
    ctx->pc = 0x1092DCu;
    SET_GPR_U32(ctx, 31, 0x1092E4u);
    ctx->pc = 0x1092E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        readLine_0x102ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1092E4u; }
    }
    if (ctx->pc != 0x1092E4u) { return; }
    ctx->pc = 0x1092E4u;
    // 0x1092e4: 0x24040a28
    ctx->pc = 0x1092e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2600));
    // 0x1092e8: 0x26e314a0
    ctx->pc = 0x1092e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 23), 5280));
    // 0x1092ec: 0x2242018
    ctx->pc = 0x1092ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1092f0: 0xaf828360
    ctx->pc = 0x1092f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935392), GPR_U32(ctx, 2));
    // 0x1092f4: 0x3a0282d
    ctx->pc = 0x1092f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1092f8: 0xc04ae67
    ctx->pc = 0x1092F8u;
    SET_GPR_U32(ctx, 31, 0x109300u);
    ctx->pc = 0x1092FCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->pc = 0x12B99Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x12b99c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109300u; }
    }
    if (ctx->pc != 0x109300u) { return; }
    ctx->pc = 0x109300u;
    // 0x109300: 0x26831468
    ctx->pc = 0x109300u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 5224));
    // 0x109304: 0x84620002
    ctx->pc = 0x109304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x109308: 0x18400034
    ctx->pc = 0x109308u;
    {
        const bool branch_taken_0x109308 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10930Cu;
        SET_GPR_S32(ctx, 21, ((uint32_t)19 << 16));
        if (branch_taken_0x109308) {
            ctx->pc = 0x1093DCu;
            goto label_1093dc;
        }
    }
    ctx->pc = 0x109310u;
    // 0x109310: 0x26360001
    ctx->pc = 0x109310u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 17), 1));
    // 0x109314: 0x0
    ctx->pc = 0x109314u;
    // NOP
label_109318:
    // 0x109318: 0x8f848360
    ctx->pc = 0x109318u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935392)));
    // 0x10931c: 0xc040ab0
    ctx->pc = 0x10931Cu;
    SET_GPR_U32(ctx, 31, 0x109324u);
    ctx->pc = 0x109320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        readLine_0x102ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109324u; }
    }
    if (ctx->pc != 0x109324u) { return; }
    ctx->pc = 0x109324u;
    // 0x109324: 0x240401f4
    ctx->pc = 0x109324u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 500));
    // 0x109328: 0x24030a28
    ctx->pc = 0x109328u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2600));
    // 0x10932c: 0x2442018
    ctx->pc = 0x10932cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x109330: 0x72231818
    ctx->pc = 0x109330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x109334: 0x26a61504
    ctx->pc = 0x109334u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 5380));
    // 0x109338: 0xaf828360
    ctx->pc = 0x109338u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935392), GPR_U32(ctx, 2));
    // 0x10933c: 0x3a0282d
    ctx->pc = 0x10933cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109340: 0x862021
    ctx->pc = 0x109340u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x109344: 0xc04ae67
    ctx->pc = 0x109344u;
    SET_GPR_U32(ctx, 31, 0x10934Cu);
    ctx->pc = 0x109348u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x12B99Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x12b99c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10934Cu; }
    }
    if (ctx->pc != 0x10934Cu) { return; }
    ctx->pc = 0x10934Cu;
    // 0x10934c: 0x26831468
    ctx->pc = 0x10934cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 5224));
    // 0x109350: 0x84620004
    ctx->pc = 0x109350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x109354: 0x1840001a
    ctx->pc = 0x109354u;
    {
        const bool branch_taken_0x109354 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x109358u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x109354) {
            ctx->pc = 0x1093C0u;
            goto label_1093c0;
        }
    }
    ctx->pc = 0x10935Cu;
    // 0x10935c: 0x8f848360
    ctx->pc = 0x10935cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935392)));
label_109360:
    // 0x109360: 0xc040ab0
    ctx->pc = 0x109360u;
    SET_GPR_U32(ctx, 31, 0x109368u);
    ctx->pc = 0x109364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        readLine_0x102ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109368u; }
    }
    if (ctx->pc != 0x109368u) { return; }
    ctx->pc = 0x109368u;
    // 0x109368: 0x240301f4
    ctx->pc = 0x109368u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 500));
    // 0x10936c: 0x24060a28
    ctx->pc = 0x10936cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2600));
    // 0x109370: 0x2431818
    ctx->pc = 0x109370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x109374: 0x24040064
    ctx->pc = 0x109374u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 100));
    // 0x109378: 0x2642018
    ctx->pc = 0x109378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x10937c: 0x26a71504
    ctx->pc = 0x10937cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 21), 5380));
    // 0x109380: 0x72263018
    ctx->pc = 0x109380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x109384: 0xaf828360
    ctx->pc = 0x109384u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935392), GPR_U32(ctx, 2));
    // 0x109388: 0x3a0282d
    ctx->pc = 0x109388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10938c: 0x26730001
    ctx->pc = 0x10938cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x109390: 0x671821
    ctx->pc = 0x109390u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x109394: 0x24840064
    ctx->pc = 0x109394u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 100));
    // 0x109398: 0xc33021
    ctx->pc = 0x109398u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x10939c: 0xc04ae67
    ctx->pc = 0x10939Cu;
    SET_GPR_U32(ctx, 31, 0x1093A4u);
    ctx->pc = 0x1093A0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->pc = 0x12B99Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x12b99c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1093A4u; }
    }
    if (ctx->pc != 0x1093A4u) { return; }
    ctx->pc = 0x1093A4u;
    // 0x1093a4: 0x26831468
    ctx->pc = 0x1093a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 5224));
    // 0x1093a8: 0x84620004
    ctx->pc = 0x1093a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1093ac: 0x262102a
    ctx->pc = 0x1093acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x1093b0: 0x1440ffeb
    ctx->pc = 0x1093B0u;
    {
        const bool branch_taken_0x1093b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1093B4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935392)));
        if (branch_taken_0x1093b0) {
            ctx->pc = 0x109360u;
            goto label_109360;
        }
    }
    ctx->pc = 0x1093B8u;
    // 0x1093b8: 0x10000002
    ctx->pc = 0x1093B8u;
    {
        const bool branch_taken_0x1093b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1093BCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1093b8) {
            ctx->pc = 0x1093C4u;
            goto label_1093c4;
        }
    }
    ctx->pc = 0x1093C0u;
label_1093c0:
    // 0x1093c0: 0x200902d
    ctx->pc = 0x1093c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1093c4:
    // 0x1093c4: 0x84620002
    ctx->pc = 0x1093c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1093c8: 0x242102a
    ctx->pc = 0x1093c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x1093cc: 0x1440ffd2
    ctx->pc = 0x1093CCu;
    {
        const bool branch_taken_0x1093cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1093D0u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1093cc) {
            ctx->pc = 0x109318u;
            goto label_109318;
        }
    }
    ctx->pc = 0x1093D4u;
    // 0x1093d4: 0x10000003
    ctx->pc = 0x1093D4u;
    {
        const bool branch_taken_0x1093d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1093D8u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5224)));
        if (branch_taken_0x1093d4) {
            ctx->pc = 0x1093E4u;
            goto label_1093e4;
        }
    }
    ctx->pc = 0x1093DCu;
label_1093dc:
    // 0x1093dc: 0x26360001
    ctx->pc = 0x1093dcu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1093e0: 0x86821468
    ctx->pc = 0x1093e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5224)));
label_1093e4:
    // 0x1093e4: 0x2c0882d
    ctx->pc = 0x1093e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1093e8: 0x222102a
    ctx->pc = 0x1093e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1093ec: 0x1440ffba
    ctx->pc = 0x1093ECu;
    {
        const bool branch_taken_0x1093ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1093F0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1093ec) {
            ctx->pc = 0x1092D8u;
            goto label_1092d8;
        }
    }
    ctx->pc = 0x1093F4u;
label_1093f4:
    // 0x1093f4: 0xdfbf0480
    ctx->pc = 0x1093f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x1093f8: 0xdfb70470
    ctx->pc = 0x1093f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x1093fc: 0xdfb60460
    ctx->pc = 0x1093fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x109400: 0xdfb50450
    ctx->pc = 0x109400u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x109404: 0xdfb40440
    ctx->pc = 0x109404u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x109408: 0xdfb30430
    ctx->pc = 0x109408u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x10940c: 0xdfb20420
    ctx->pc = 0x10940cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x109410: 0xdfb10410
    ctx->pc = 0x109410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x109414: 0xdfb00400
    ctx->pc = 0x109414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x109418: 0x3e00008
    ctx->pc = 0x109418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10941Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1168));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1092D8u: goto label_1092d8;
            case 0x109318u: goto label_109318;
            case 0x109360u: goto label_109360;
            case 0x1093C0u: goto label_1093c0;
            case 0x1093C4u: goto label_1093c4;
            case 0x1093DCu: goto label_1093dc;
            case 0x1093E4u: goto label_1093e4;
            case 0x1093F4u: goto label_1093f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x109420u;
}
