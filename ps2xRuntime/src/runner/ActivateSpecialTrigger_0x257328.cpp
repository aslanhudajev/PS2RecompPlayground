#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ActivateSpecialTrigger
// Address: 0x257328 - 0x257538
void ActivateSpecialTrigger_0x257328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x257328u;

    // 0x257328: 0x27bdff50
    ctx->pc = 0x257328u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25732c: 0xffbf00a0
    ctx->pc = 0x25732cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x257330: 0xffbe0090
    ctx->pc = 0x257330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x257334: 0xffb70080
    ctx->pc = 0x257334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x257338: 0xffb60070
    ctx->pc = 0x257338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x25733c: 0xffb50060
    ctx->pc = 0x25733cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x257340: 0xffb40050
    ctx->pc = 0x257340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x257344: 0xffb30040
    ctx->pc = 0x257344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x257348: 0xffb20030
    ctx->pc = 0x257348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25734c: 0xffb10020
    ctx->pc = 0x25734cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x257350: 0xffb00010
    ctx->pc = 0x257350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x257354: 0xafa40000
    ctx->pc = 0x257354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x257358: 0xa0b02d
    ctx->pc = 0x257358u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25735c: 0x3c020034
    ctx->pc = 0x25735cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x257360: 0x8c53cd94
    ctx->pc = 0x257360u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x257364: 0x3c020034
    ctx->pc = 0x257364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x257368: 0x8c42cd98
    ctx->pc = 0x257368u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x25736c: 0x18400066
    ctx->pc = 0x25736Cu;
    {
        const bool branch_taken_0x25736c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x257370u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25736c) {
            ctx->pc = 0x257508u;
            goto label_257508;
        }
    }
    ctx->pc = 0x257374u;
    // 0x257374: 0x0
    ctx->pc = 0x257374u;
    // NOP
label_257378:
    // 0x257378: 0x866300d8
    ctx->pc = 0x257378u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x25737c: 0x2402ffff
    ctx->pc = 0x25737cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x257380: 0x1062005b
    ctx->pc = 0x257380u;
    {
        const bool branch_taken_0x257380 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x257384u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 33024));
        if (branch_taken_0x257380) {
            ctx->pc = 0x2574F0u;
            goto label_2574f0;
        }
    }
    ctx->pc = 0x257388u;
    // 0x257388: 0x5440005a
    ctx->pc = 0x257388u;
    {
        const bool branch_taken_0x257388 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x257388) {
            ctx->pc = 0x25738Cu;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
            ctx->pc = 0x2574F4u;
            goto label_2574f4;
        }
    }
    ctx->pc = 0x257390u;
    // 0x257390: 0x8e620000
    ctx->pc = 0x257390u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x257394: 0x8c430000
    ctx->pc = 0x257394u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257398: 0x24020005
    ctx->pc = 0x257398u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x25739c: 0x54620055
    ctx->pc = 0x25739Cu;
    {
        const bool branch_taken_0x25739c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25739c) {
            ctx->pc = 0x2573A0u;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
            ctx->pc = 0x2574F4u;
            goto label_2574f4;
        }
    }
    ctx->pc = 0x2573A4u;
    // 0x2573a4: 0x926200f6
    ctx->pc = 0x2573a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 246)));
    // 0x2573a8: 0x8fa30000
    ctx->pc = 0x2573a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2573ac: 0x54430051
    ctx->pc = 0x2573ACu;
    {
        const bool branch_taken_0x2573ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2573ac) {
            ctx->pc = 0x2573B0u;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
            ctx->pc = 0x2574F4u;
            goto label_2574f4;
        }
    }
    ctx->pc = 0x2573B4u;
    // 0x2573b4: 0x1260004e
    ctx->pc = 0x2573B4u;
    {
        const bool branch_taken_0x2573b4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2573B8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2573b4) {
            ctx->pc = 0x2574F0u;
            goto label_2574f0;
        }
    }
    ctx->pc = 0x2573BCu;
    // 0x2573bc: 0x24150002
    ctx->pc = 0x2573bcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2573c0: 0x3c140034
    ctx->pc = 0x2573c0u;
    SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
    // 0x2573c4: 0x3c02003c
    ctx->pc = 0x2573c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2573c8: 0x245e25f8
    ctx->pc = 0x2573c8u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 9720));
    // 0x2573cc: 0x964200d8
    ctx->pc = 0x2573ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_2573d0:
    // 0x2573d0: 0x34420400
    ctx->pc = 0x2573d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1024));
    // 0x2573d4: 0xa64200d8
    ctx->pc = 0x2573d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 216), (uint16_t)GPR_U32(ctx, 2));
    // 0x2573d8: 0xa25500dc
    ctx->pc = 0x2573d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 220), (uint8_t)GPR_U32(ctx, 21));
    // 0x2573dc: 0xa25500de
    ctx->pc = 0x2573dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 21));
    // 0x2573e0: 0x8e5000f0
    ctx->pc = 0x2573e0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2573e4: 0x1200003c
    ctx->pc = 0x2573E4u;
    {
        const bool branch_taken_0x2573e4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2573E8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 47));
        if (branch_taken_0x2573e4) {
            ctx->pc = 0x2574D8u;
            goto label_2574d8;
        }
    }
    ctx->pc = 0x2573ECu;
    // 0x2573ec: 0xa2110016
    ctx->pc = 0x2573ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 17));
    // 0x2573f0: 0x8e020010
    ctx->pc = 0x2573f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2573f4: 0x3c030200
    ctx->pc = 0x2573f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x2573f8: 0x431024
    ctx->pc = 0x2573f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2573fc: 0x10400015
    ctx->pc = 0x2573FCu;
    {
        const bool branch_taken_0x2573fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2573fc) {
            ctx->pc = 0x257454u;
            goto label_257454;
        }
    }
    ctx->pc = 0x257404u;
    // 0x257404: 0xc099218
    ctx->pc = 0x257404u;
    SET_GPR_U32(ctx, 31, 0x25740Cu);
    ctx->pc = 0x257408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x264860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWobjWanim_0x264860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25740Cu; }
    }
    if (ctx->pc != 0x25740Cu) { return; }
    ctx->pc = 0x25740Cu;
    // 0x25740c: 0x40202d
    ctx->pc = 0x25740cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257410: 0xa2110017
    ctx->pc = 0x257410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 17));
    // 0x257414: 0xa2110016
    ctx->pc = 0x257414u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 17));
    // 0x257418: 0x8e030010
    ctx->pc = 0x257418u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25741c: 0x3c020020
    ctx->pc = 0x25741cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x257420: 0x621825
    ctx->pc = 0x257420u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x257424: 0x12c0002f
    ctx->pc = 0x257424u;
    {
        const bool branch_taken_0x257424 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x257428u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        if (branch_taken_0x257424) {
            ctx->pc = 0x2574E4u;
            goto label_2574e4;
        }
    }
    ctx->pc = 0x25742Cu;
    // 0x25742c: 0x3c020080
    ctx->pc = 0x25742cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
    // 0x257430: 0x621025
    ctx->pc = 0x257430u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x257434: 0x1080002b
    ctx->pc = 0x257434u;
    {
        const bool branch_taken_0x257434 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x257438u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x257434) {
            ctx->pc = 0x2574E4u;
            goto label_2574e4;
        }
    }
    ctx->pc = 0x25743Cu;
    // 0x25743c: 0x84820002
    ctx->pc = 0x25743cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x257440: 0x2442ffff
    ctx->pc = 0x257440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x257444: 0x44820000
    ctx->pc = 0x257444u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x257448: 0x46800020
    ctx->pc = 0x257448u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x25744c: 0x10000025
    ctx->pc = 0x25744Cu;
    {
        const bool branch_taken_0x25744c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257450u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        if (branch_taken_0x25744c) {
            ctx->pc = 0x2574E4u;
            goto label_2574e4;
        }
    }
    ctx->pc = 0x257454u;
label_257454:
    // 0x257454: 0x12c00023
    ctx->pc = 0x257454u;
    {
        const bool branch_taken_0x257454 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x257458u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294955448)));
        if (branch_taken_0x257454) {
            ctx->pc = 0x2574E4u;
            goto label_2574e4;
        }
    }
    ctx->pc = 0x25745Cu;
    // 0x25745c: 0x18400021
    ctx->pc = 0x25745Cu;
    {
        const bool branch_taken_0x25745c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x257460u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25745c) {
            ctx->pc = 0x2574E4u;
            goto label_2574e4;
        }
    }
    ctx->pc = 0x257464u;
    // 0x257464: 0x3c020034
    ctx->pc = 0x257464u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x257468: 0x8c42cf60
    ctx->pc = 0x257468u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954848)));
    // 0x25746c: 0x1050000d
    ctx->pc = 0x25746Cu;
    {
        const bool branch_taken_0x25746c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x257470u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25746c) {
            ctx->pc = 0x2574A4u;
            goto label_2574a4;
        }
    }
    ctx->pc = 0x257474u;
    // 0x257474: 0x8c44d1b8
    ctx->pc = 0x257474u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294955448)));
    // 0x257478: 0x3c020034
    ctx->pc = 0x257478u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25747c: 0x2445cf60
    ctx->pc = 0x25747cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294954848));
    // 0x257480: 0x24630001
    ctx->pc = 0x257480u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x257484: 0x0
    ctx->pc = 0x257484u;
    // NOP
label_257488:
    // 0x257488: 0x64102a
    ctx->pc = 0x257488u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x25748c: 0x10400015
    ctx->pc = 0x25748Cu;
    {
        const bool branch_taken_0x25748c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x257490u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x25748c) {
            ctx->pc = 0x2574E4u;
            goto label_2574e4;
        }
    }
    ctx->pc = 0x257494u;
    // 0x257494: 0x451021
    ctx->pc = 0x257494u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x257498: 0x8c420000
    ctx->pc = 0x257498u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25749c: 0x5450fffa
    ctx->pc = 0x25749Cu;
    {
        const bool branch_taken_0x25749c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x25749c) {
            ctx->pc = 0x2574A0u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x257488u;
            goto label_257488;
        }
    }
    ctx->pc = 0x2574A4u;
label_2574a4:
    // 0x2574a4: 0x8e82d1b8
    ctx->pc = 0x2574a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294955448)));
    // 0x2574a8: 0x62102a
    ctx->pc = 0x2574a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2574ac: 0x1040000d
    ctx->pc = 0x2574ACu;
    {
        const bool branch_taken_0x2574ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2574B0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2574ac) {
            ctx->pc = 0x2574E4u;
            goto label_2574e4;
        }
    }
    ctx->pc = 0x2574B4u;
    // 0x2574b4: 0x3c04003c
    ctx->pc = 0x2574b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2574b8: 0x24841ef0
    ctx->pc = 0x2574b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2574bc: 0x441821
    ctx->pc = 0x2574bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2574c0: 0x5e1021
    ctx->pc = 0x2574c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2574c4: 0xc4400000
    ctx->pc = 0x2574c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2574c8: 0xe4600000
    ctx->pc = 0x2574c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2574cc: 0x8e020028
    ctx->pc = 0x2574ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2574d0: 0x10000004
    ctx->pc = 0x2574D0u;
    {
        const bool branch_taken_0x2574d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2574D4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
        if (branch_taken_0x2574d0) {
            ctx->pc = 0x2574E4u;
            goto label_2574e4;
        }
    }
    ctx->pc = 0x2574D8u;
label_2574d8:
    // 0x2574d8: 0x3c04003b
    ctx->pc = 0x2574d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2574dc: 0xc0b492e
    ctx->pc = 0x2574DCu;
    SET_GPR_U32(ctx, 31, 0x2574E4u);
    ctx->pc = 0x2574E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937368));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2574E4u; }
    }
    if (ctx->pc != 0x2574E4u) { return; }
    ctx->pc = 0x2574E4u;
label_2574e4:
    // 0x2574e4: 0x8e5200f8
    ctx->pc = 0x2574e4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x2574e8: 0x5640ffb9
    ctx->pc = 0x2574E8u;
    {
        const bool branch_taken_0x2574e8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x2574e8) {
            ctx->pc = 0x2574ECu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
            ctx->pc = 0x2573D0u;
            goto label_2573d0;
        }
    }
    ctx->pc = 0x2574F0u;
label_2574f0:
    // 0x2574f0: 0x26f70001
    ctx->pc = 0x2574f0u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
label_2574f4:
    // 0x2574f4: 0x3c020034
    ctx->pc = 0x2574f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2574f8: 0x8c42cd98
    ctx->pc = 0x2574f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x2574fc: 0x2e2102a
    ctx->pc = 0x2574fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 2)));
    // 0x257500: 0x1440ff9d
    ctx->pc = 0x257500u;
    {
        const bool branch_taken_0x257500 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x257504u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 272));
        if (branch_taken_0x257500) {
            ctx->pc = 0x257378u;
            goto label_257378;
        }
    }
    ctx->pc = 0x257508u;
label_257508:
    // 0x257508: 0xdfbf00a0
    ctx->pc = 0x257508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25750c: 0xdfbe0090
    ctx->pc = 0x25750cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x257510: 0xdfb70080
    ctx->pc = 0x257510u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257514: 0xdfb60070
    ctx->pc = 0x257514u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x257518: 0xdfb50060
    ctx->pc = 0x257518u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25751c: 0xdfb40050
    ctx->pc = 0x25751cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x257520: 0xdfb30040
    ctx->pc = 0x257520u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257524: 0xdfb20030
    ctx->pc = 0x257524u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257528: 0xdfb10020
    ctx->pc = 0x257528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25752c: 0xdfb00010
    ctx->pc = 0x25752cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257530: 0x3e00008
    ctx->pc = 0x257530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257534u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x257378u: goto label_257378;
            case 0x2573D0u: goto label_2573d0;
            case 0x257454u: goto label_257454;
            case 0x257488u: goto label_257488;
            case 0x2574A4u: goto label_2574a4;
            case 0x2574D8u: goto label_2574d8;
            case 0x2574E4u: goto label_2574e4;
            case 0x2574F0u: goto label_2574f0;
            case 0x2574F4u: goto label_2574f4;
            case 0x257508u: goto label_257508;
            default: break;
        }
        return;
    }
    ctx->pc = 0x257538u;
}
