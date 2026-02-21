#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cpy2area
// Address: 0x11a798 - 0x11a8d0
void cpy2area_0x11a798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a798u;

    // 0x11a798: 0x27bdff60
    ctx->pc = 0x11a798u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11a79c: 0xffb60060
    ctx->pc = 0x11a79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11a7a0: 0xffb10010
    ctx->pc = 0x11a7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a7a4: 0x160b02d
    ctx->pc = 0x11a7a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7a8: 0xffb00000
    ctx->pc = 0x11a7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a7ac: 0xa0882d
    ctx->pc = 0x11a7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7b0: 0xffbe0080
    ctx->pc = 0x11a7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x11a7b4: 0x120802d
    ctx->pc = 0x11a7b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7b8: 0xffb70070
    ctx->pc = 0x11a7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x11a7bc: 0x2273821
    ctx->pc = 0x11a7bcu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x11a7c0: 0xffb50050
    ctx->pc = 0x11a7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11a7c4: 0x216f021
    ctx->pc = 0x11a7c4u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x11a7c8: 0xffb40040
    ctx->pc = 0x11a7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11a7cc: 0xc0b82d
    ctx->pc = 0x11a7ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7d0: 0xffb20020
    ctx->pc = 0x11a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a7d4: 0x80a02d
    ctx->pc = 0x11a7d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7d8: 0xffbf0090
    ctx->pc = 0x11a7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11a7dc: 0x100902d
    ctx->pc = 0x11a7dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7e0: 0xffb30030
    ctx->pc = 0x11a7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11a7e4: 0x140a82d
    ctx->pc = 0x11a7e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7e8: 0xfe382a
    ctx->pc = 0x11a7e8u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 30)));
    // 0x11a7ec: 0x14e0002c
    ctx->pc = 0x11A7ECu;
    {
        const bool branch_taken_0x11a7ec = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x11A7F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11a7ec) {
            ctx->pc = 0x11A8A0u;
            goto label_11a8a0;
        }
    }
    ctx->pc = 0x11A7F4u;
    // 0x11a7f4: 0x211102a
    ctx->pc = 0x11a7f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x11a7f8: 0x14400010
    ctx->pc = 0x11A7F8u;
    {
        const bool branch_taken_0x11a7f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11A7FCu;
        SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x11a7f8) {
            ctx->pc = 0x11A83Cu;
            goto label_11a83c;
        }
    }
    ctx->pc = 0x11A800u;
    // 0x11a800: 0x280202d
    ctx->pc = 0x11a800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a804: 0x240282d
    ctx->pc = 0x11a804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a808: 0xc04ac33
    ctx->pc = 0x11A808u;
    SET_GPR_U32(ctx, 31, 0x11A810u);
    ctx->pc = 0x11A80Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A810u; }
    }
    if (ctx->pc != 0x11A810u) { return; }
    ctx->pc = 0x11A810u;
    // 0x11a810: 0x2512821
    ctx->pc = 0x11a810u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x11a814: 0x2e0202d
    ctx->pc = 0x11a814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a818: 0xc04ac33
    ctx->pc = 0x11A818u;
    SET_GPR_U32(ctx, 31, 0x11A820u);
    ctx->pc = 0x11A81Cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A820u; }
    }
    if (ctx->pc != 0x11A820u) { return; }
    ctx->pc = 0x11A820u;
    // 0x11a820: 0x2f02021
    ctx->pc = 0x11a820u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x11a824: 0x2a0282d
    ctx->pc = 0x11a824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a828: 0x912023
    ctx->pc = 0x11a828u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x11a82c: 0xc04ac33
    ctx->pc = 0x11A82Cu;
    SET_GPR_U32(ctx, 31, 0x11A834u);
    ctx->pc = 0x11A830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A834u; }
    }
    if (ctx->pc != 0x11A834u) { return; }
    ctx->pc = 0x11A834u;
    // 0x11a834: 0x1000001a
    ctx->pc = 0x11A834u;
    {
        const bool branch_taken_0x11a834 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A838u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11a834) {
            ctx->pc = 0x11A8A0u;
            goto label_11a8a0;
        }
    }
    ctx->pc = 0x11A83Cu;
label_11a83c:
    // 0x11a83c: 0x2d3102a
    ctx->pc = 0x11a83cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 19)));
    // 0x11a840: 0x1440000f
    ctx->pc = 0x11A840u;
    {
        const bool branch_taken_0x11a840 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11A844u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11a840) {
            ctx->pc = 0x11A880u;
            goto label_11a880;
        }
    }
    ctx->pc = 0x11A848u;
    // 0x11a848: 0x280202d
    ctx->pc = 0x11a848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a84c: 0xc04ac33
    ctx->pc = 0x11A84Cu;
    SET_GPR_U32(ctx, 31, 0x11A854u);
    ctx->pc = 0x11A850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A854u; }
    }
    if (ctx->pc != 0x11A854u) { return; }
    ctx->pc = 0x11A854u;
    // 0x11a854: 0x2902021
    ctx->pc = 0x11a854u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x11a858: 0x2a0282d
    ctx->pc = 0x11a858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a85c: 0xc04ac33
    ctx->pc = 0x11A85Cu;
    SET_GPR_U32(ctx, 31, 0x11A864u);
    ctx->pc = 0x11A860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A864u; }
    }
    if (ctx->pc != 0x11A864u) { return; }
    ctx->pc = 0x11A864u;
    // 0x11a864: 0x2b12821
    ctx->pc = 0x11a864u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x11a868: 0x2d33023
    ctx->pc = 0x11a868u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x11a86c: 0xb02823
    ctx->pc = 0x11a86cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x11a870: 0xc04ac33
    ctx->pc = 0x11A870u;
    SET_GPR_U32(ctx, 31, 0x11A878u);
    ctx->pc = 0x11A874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A878u; }
    }
    if (ctx->pc != 0x11A878u) { return; }
    ctx->pc = 0x11A878u;
    // 0x11a878: 0x10000009
    ctx->pc = 0x11A878u;
    {
        const bool branch_taken_0x11a878 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A87Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11a878) {
            ctx->pc = 0x11A8A0u;
            goto label_11a8a0;
        }
    }
    ctx->pc = 0x11A880u;
label_11a880:
    // 0x11a880: 0x280202d
    ctx->pc = 0x11a880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a884: 0xc04ac33
    ctx->pc = 0x11A884u;
    SET_GPR_U32(ctx, 31, 0x11A88Cu);
    ctx->pc = 0x11A888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A88Cu; }
    }
    if (ctx->pc != 0x11A88Cu) { return; }
    ctx->pc = 0x11A88Cu;
    // 0x11a88c: 0x2902021
    ctx->pc = 0x11a88cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x11a890: 0x2a0282d
    ctx->pc = 0x11a890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a894: 0xc04ac33
    ctx->pc = 0x11A894u;
    SET_GPR_U32(ctx, 31, 0x11A89Cu);
    ctx->pc = 0x11A898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A89Cu; }
    }
    if (ctx->pc != 0x11A89Cu) { return; }
    ctx->pc = 0x11A89Cu;
    // 0x11a89c: 0x3c0102d
    ctx->pc = 0x11a89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_11a8a0:
    // 0x11a8a0: 0xdfbf0090
    ctx->pc = 0x11a8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11a8a4: 0xdfbe0080
    ctx->pc = 0x11a8a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11a8a8: 0xdfb70070
    ctx->pc = 0x11a8a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11a8ac: 0xdfb60060
    ctx->pc = 0x11a8acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a8b0: 0xdfb50050
    ctx->pc = 0x11a8b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a8b4: 0xdfb40040
    ctx->pc = 0x11a8b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a8b8: 0xdfb30030
    ctx->pc = 0x11a8b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a8bc: 0xdfb20020
    ctx->pc = 0x11a8bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a8c0: 0xdfb10010
    ctx->pc = 0x11a8c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a8c4: 0xdfb00000
    ctx->pc = 0x11a8c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a8c8: 0x3e00008
    ctx->pc = 0x11A8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A8CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A83Cu: goto label_11a83c;
            case 0x11A880u: goto label_11a880;
            case 0x11A8A0u: goto label_11a8a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A8D0u;
}
