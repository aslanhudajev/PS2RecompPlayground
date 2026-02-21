#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSetMode
// Address: 0x2217a8 - 0x22191c
void AudioSetMode_0x2217a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2217a8u;

    // 0x2217a8: 0x27bdff60
    ctx->pc = 0x2217a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2217ac: 0xffbf0090
    ctx->pc = 0x2217acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2217b0: 0xffbe0080
    ctx->pc = 0x2217b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2217b4: 0xffb70070
    ctx->pc = 0x2217b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2217b8: 0xffb60060
    ctx->pc = 0x2217b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2217bc: 0xffb50050
    ctx->pc = 0x2217bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2217c0: 0xffb40040
    ctx->pc = 0x2217c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2217c4: 0xffb30030
    ctx->pc = 0x2217c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2217c8: 0xffb20020
    ctx->pc = 0x2217c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2217cc: 0xffb10010
    ctx->pc = 0x2217ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2217d0: 0xffb00000
    ctx->pc = 0x2217d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2217d4: 0x80b02d
    ctx->pc = 0x2217d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217d8: 0x3c020032
    ctx->pc = 0x2217d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2217dc: 0xac40fe28
    ctx->pc = 0x2217dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966824), GPR_U32(ctx, 0));
    // 0x2217e0: 0xf02d
    ctx->pc = 0x2217e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217e4: 0x3c170032
    ctx->pc = 0x2217e4u;
    SET_GPR_U32(ctx, 23, ((uint32_t)50 << 16));
    // 0x2217e8: 0x882d
    ctx->pc = 0x2217e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217ec: 0x0
    ctx->pc = 0x2217ecu;
    // NOP
label_2217f0:
    // 0x2217f0: 0x8ee3fd6c
    ctx->pc = 0x2217f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 4294966636)));
    // 0x2217f4: 0x8c620000
    ctx->pc = 0x2217f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2217f8: 0x222102a
    ctx->pc = 0x2217f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x2217fc: 0x1040000e
    ctx->pc = 0x2217FCu;
    {
        const bool branch_taken_0x2217fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x221800u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9364));
        if (branch_taken_0x2217fc) {
            ctx->pc = 0x221838u;
            goto label_221838;
        }
    }
    ctx->pc = 0x221804u;
    // 0x221804: 0x2228018
    ctx->pc = 0x221804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x221808: 0x8c64000c
    ctx->pc = 0x221808u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x22180c: 0x2042021
    ctx->pc = 0x22180cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x221810: 0x2c0282d
    ctx->pc = 0x221810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221814: 0xc0bf3c0
    ctx->pc = 0x221814u;
    SET_GPR_U32(ctx, 31, 0x22181Cu);
    ctx->pc = 0x221818u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2FCF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x2fcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22181Cu; }
    }
    if (ctx->pc != 0x22181Cu) { return; }
    ctx->pc = 0x22181Cu;
    // 0x22181c: 0x1440fff4
    ctx->pc = 0x22181Cu;
    {
        const bool branch_taken_0x22181c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221820u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x22181c) {
            ctx->pc = 0x2217F0u;
            goto label_2217f0;
        }
    }
    ctx->pc = 0x221824u;
    // 0x221824: 0x8ee2fd6c
    ctx->pc = 0x221824u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 4294966636)));
    // 0x221828: 0x8c42000c
    ctx->pc = 0x221828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22182c: 0x2021021
    ctx->pc = 0x22182cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x221830: 0x3c030032
    ctx->pc = 0x221830u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x221834: 0xac62fe28
    ctx->pc = 0x221834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966824), GPR_U32(ctx, 2));
label_221838:
    // 0x221838: 0x3c030032
    ctx->pc = 0x221838u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22183c: 0x8c62fe28
    ctx->pc = 0x22183cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966824)));
    // 0x221840: 0x14400006
    ctx->pc = 0x221840u;
    {
        const bool branch_taken_0x221840 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221844u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x221840) {
            ctx->pc = 0x22185Cu;
            goto label_22185c;
        }
    }
    ctx->pc = 0x221848u;
    // 0x221848: 0x3c04003a
    ctx->pc = 0x221848u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22184c: 0x248468c8
    ctx->pc = 0x22184cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26824));
    // 0x221850: 0xc0b4976
    ctx->pc = 0x221850u;
    SET_GPR_U32(ctx, 31, 0x221858u);
    ctx->pc = 0x221854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221858u; }
    }
    if (ctx->pc != 0x221858u) { return; }
    ctx->pc = 0x221858u;
    // 0x221858: 0x802d
    ctx->pc = 0x221858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22185c:
    // 0x22185c: 0x882d
    ctx->pc = 0x22185cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221860: 0x3c150032
    ctx->pc = 0x221860u;
    SET_GPR_U32(ctx, 21, ((uint32_t)50 << 16));
    // 0x221864: 0x3c140031
    ctx->pc = 0x221864u;
    SET_GPR_U32(ctx, 20, ((uint32_t)49 << 16));
    // 0x221868: 0x3c130031
    ctx->pc = 0x221868u;
    SET_GPR_U32(ctx, 19, ((uint32_t)49 << 16));
    // 0x22186c: 0x24120001
    ctx->pc = 0x22186cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x221870: 0x8ea2fe28
    ctx->pc = 0x221870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294966824)));
    // 0x221874: 0x0
    ctx->pc = 0x221874u;
    // NOP
label_221878:
    // 0x221878: 0x8c420010
    ctx->pc = 0x221878u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x22187c: 0x222102a
    ctx->pc = 0x22187cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x221880: 0x1040000e
    ctx->pc = 0x221880u;
    {
        const bool branch_taken_0x221880 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x221884u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x221880) {
            ctx->pc = 0x2218BCu;
            goto label_2218bc;
        }
    }
    ctx->pc = 0x221888u;
    // 0x221888: 0x282d
    ctx->pc = 0x221888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22188c: 0x302d
    ctx->pc = 0x22188cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221890: 0xc088468
    ctx->pc = 0x221890u;
    SET_GPR_U32(ctx, 31, 0x221898u);
    ctx->pc = 0x221894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2211A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLoadBank_0x2211a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221898u; }
    }
    if (ctx->pc != 0x221898u) { return; }
    ctx->pc = 0x221898u;
    // 0x221898: 0x40802d
    ctx->pc = 0x221898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22189c: 0x26220001
    ctx->pc = 0x22189cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2218a0: 0x50880b
    ctx->pc = 0x2218a0u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
    // 0x2218a4: 0x8e82f184
    ctx->pc = 0x2218a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294963588)));
    // 0x2218a8: 0x1040fff3
    ctx->pc = 0x2218A8u;
    {
        const bool branch_taken_0x2218a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2218ACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294966824)));
        if (branch_taken_0x2218a8) {
            ctx->pc = 0x221878u;
            goto label_221878;
        }
    }
    ctx->pc = 0x2218B0u;
    // 0x2218b0: 0x9662f1b0
    ctx->pc = 0x2218b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294963632)));
    // 0x2218b4: 0x1452fff0
    ctx->pc = 0x2218B4u;
    {
        const bool branch_taken_0x2218b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x2218B8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294966824)));
        if (branch_taken_0x2218b4) {
            ctx->pc = 0x221878u;
            goto label_221878;
        }
    }
    ctx->pc = 0x2218BCu;
label_2218bc:
    // 0x2218bc: 0x1600000b
    ctx->pc = 0x2218BCu;
    {
        const bool branch_taken_0x2218bc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2218C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2218bc) {
            ctx->pc = 0x2218ECu;
            goto label_2218ec;
        }
    }
    ctx->pc = 0x2218C4u;
    // 0x2218c4: 0x3c04003a
    ctx->pc = 0x2218c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2218c8: 0xc0b492e
    ctx->pc = 0x2218C8u;
    SET_GPR_U32(ctx, 31, 0x2218D0u);
    ctx->pc = 0x2218CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26856));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2218D0u; }
    }
    if (ctx->pc != 0x2218D0u) { return; }
    ctx->pc = 0x2218D0u;
    // 0x2218d0: 0xc088dfe
    ctx->pc = 0x2218D0u;
    SET_GPR_U32(ctx, 31, 0x2218D8u);
    ctx->pc = 0x2218D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2237F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_init_0x2237f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2218D8u; }
    }
    if (ctx->pc != 0x2218D8u) { return; }
    ctx->pc = 0x2218D8u;
    // 0x2218d8: 0x27de0001
    ctx->pc = 0x2218d8u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
    // 0x2218dc: 0x2bc20002
    ctx->pc = 0x2218dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 30), 2));
    // 0x2218e0: 0x1440ffc3
    ctx->pc = 0x2218E0u;
    {
        const bool branch_taken_0x2218e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2218E4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2218e0) {
            ctx->pc = 0x2217F0u;
            goto label_2217f0;
        }
    }
    ctx->pc = 0x2218E8u;
    // 0x2218e8: 0x200102d
    ctx->pc = 0x2218e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2218ec:
    // 0x2218ec: 0xdfbf0090
    ctx->pc = 0x2218ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2218f0: 0xdfbe0080
    ctx->pc = 0x2218f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2218f4: 0xdfb70070
    ctx->pc = 0x2218f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2218f8: 0xdfb60060
    ctx->pc = 0x2218f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2218fc: 0xdfb50050
    ctx->pc = 0x2218fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221900: 0xdfb40040
    ctx->pc = 0x221900u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221904: 0xdfb30030
    ctx->pc = 0x221904u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221908: 0xdfb20020
    ctx->pc = 0x221908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22190c: 0xdfb10010
    ctx->pc = 0x22190cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221910: 0xdfb00000
    ctx->pc = 0x221910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221914: 0x3e00008
    ctx->pc = 0x221914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221918u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2217F0u: goto label_2217f0;
            case 0x221838u: goto label_221838;
            case 0x22185Cu: goto label_22185c;
            case 0x221878u: goto label_221878;
            case 0x2218BCu: goto label_2218bc;
            case 0x2218ECu: goto label_2218ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22191Cu;
}
