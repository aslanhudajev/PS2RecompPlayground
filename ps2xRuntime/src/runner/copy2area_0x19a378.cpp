#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: copy2area
// Address: 0x19a378 - 0x19a4b0
void copy2area_0x19a378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("copy2area");


    ctx->pc = 0x19a378u;

    // 0x19a378: 0x27bdff60
    ctx->pc = 0x19a378u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19a37c: 0xffb60060
    ctx->pc = 0x19a37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x19a380: 0xffb10010
    ctx->pc = 0x19a380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19a384: 0x160b02d
    ctx->pc = 0x19a384u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a388: 0xffb00000
    ctx->pc = 0x19a388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a38c: 0xa0882d
    ctx->pc = 0x19a38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a390: 0xffbe0080
    ctx->pc = 0x19a390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x19a394: 0x120802d
    ctx->pc = 0x19a394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a398: 0xffb70070
    ctx->pc = 0x19a398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x19a39c: 0x2273821
    ctx->pc = 0x19a39cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x19a3a0: 0xffb50050
    ctx->pc = 0x19a3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x19a3a4: 0x216f021
    ctx->pc = 0x19a3a4u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x19a3a8: 0xffb40040
    ctx->pc = 0x19a3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19a3ac: 0xc0b82d
    ctx->pc = 0x19a3acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3b0: 0xffb20020
    ctx->pc = 0x19a3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19a3b4: 0x80a02d
    ctx->pc = 0x19a3b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3b8: 0xffbf0090
    ctx->pc = 0x19a3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x19a3bc: 0x100902d
    ctx->pc = 0x19a3bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3c0: 0xffb30030
    ctx->pc = 0x19a3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19a3c4: 0x140a82d
    ctx->pc = 0x19a3c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3c8: 0xfe382a
    ctx->pc = 0x19a3c8u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 30)));
    // 0x19a3cc: 0x14e0002c
    ctx->pc = 0x19A3CCu;
    {
        const bool branch_taken_0x19a3cc = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x19A3D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a3cc) {
            ctx->pc = 0x19A480u;
            goto label_19a480;
        }
    }
    ctx->pc = 0x19A3D4u;
    // 0x19a3d4: 0x211102a
    ctx->pc = 0x19a3d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x19a3d8: 0x14400010
    ctx->pc = 0x19A3D8u;
    {
        const bool branch_taken_0x19a3d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19A3DCu;
        SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x19a3d8) {
            ctx->pc = 0x19A41Cu;
            goto label_19a41c;
        }
    }
    ctx->pc = 0x19A3E0u;
    // 0x19a3e0: 0x280202d
    ctx->pc = 0x19a3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3e4: 0x240282d
    ctx->pc = 0x19a3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3e8: 0xc050c90
    ctx->pc = 0x19A3E8u;
    SET_GPR_U32(ctx, 31, 0x19A3F0u);
    ctx->pc = 0x19A3ECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A3F0u; }
        else if (ctx->pc != 0x19A3F0u) { ctx->pc = 0x19A3F0u; }
    }
    if (ctx->pc != 0x19A3F0u) { return; }
    ctx->pc = 0x19A3F0u;
    // 0x19a3f0: 0x2512821
    ctx->pc = 0x19a3f0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x19a3f4: 0x2e0202d
    ctx->pc = 0x19a3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3f8: 0xc050c90
    ctx->pc = 0x19A3F8u;
    SET_GPR_U32(ctx, 31, 0x19A400u);
    ctx->pc = 0x19A3FCu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A400u; }
        else if (ctx->pc != 0x19A400u) { ctx->pc = 0x19A400u; }
    }
    if (ctx->pc != 0x19A400u) { return; }
    ctx->pc = 0x19A400u;
    // 0x19a400: 0x2f02021
    ctx->pc = 0x19a400u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x19a404: 0x2a0282d
    ctx->pc = 0x19a404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a408: 0x912023
    ctx->pc = 0x19a408u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x19a40c: 0xc050c90
    ctx->pc = 0x19A40Cu;
    SET_GPR_U32(ctx, 31, 0x19A414u);
    ctx->pc = 0x19A410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A414u; }
        else if (ctx->pc != 0x19A414u) { ctx->pc = 0x19A414u; }
    }
    if (ctx->pc != 0x19A414u) { return; }
    ctx->pc = 0x19A414u;
    // 0x19a414: 0x1000001a
    ctx->pc = 0x19A414u;
    {
        const bool branch_taken_0x19a414 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A418u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a414) {
            ctx->pc = 0x19A480u;
            goto label_19a480;
        }
    }
    ctx->pc = 0x19A41Cu;
label_19a41c:
    // 0x19a41c: 0x2d3102a
    ctx->pc = 0x19a41cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 19)));
    // 0x19a420: 0x1440000f
    ctx->pc = 0x19A420u;
    {
        const bool branch_taken_0x19a420 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19A424u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a420) {
            ctx->pc = 0x19A460u;
            goto label_19a460;
        }
    }
    ctx->pc = 0x19A428u;
    // 0x19a428: 0x280202d
    ctx->pc = 0x19a428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a42c: 0xc050c90
    ctx->pc = 0x19A42Cu;
    SET_GPR_U32(ctx, 31, 0x19A434u);
    ctx->pc = 0x19A430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A434u; }
        else if (ctx->pc != 0x19A434u) { ctx->pc = 0x19A434u; }
    }
    if (ctx->pc != 0x19A434u) { return; }
    ctx->pc = 0x19A434u;
    // 0x19a434: 0x2902021
    ctx->pc = 0x19a434u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x19a438: 0x2a0282d
    ctx->pc = 0x19a438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a43c: 0xc050c90
    ctx->pc = 0x19A43Cu;
    SET_GPR_U32(ctx, 31, 0x19A444u);
    ctx->pc = 0x19A440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A444u; }
        else if (ctx->pc != 0x19A444u) { ctx->pc = 0x19A444u; }
    }
    if (ctx->pc != 0x19A444u) { return; }
    ctx->pc = 0x19A444u;
    // 0x19a444: 0x2b12821
    ctx->pc = 0x19a444u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x19a448: 0x2d33023
    ctx->pc = 0x19a448u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x19a44c: 0xb02823
    ctx->pc = 0x19a44cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x19a450: 0xc050c90
    ctx->pc = 0x19A450u;
    SET_GPR_U32(ctx, 31, 0x19A458u);
    ctx->pc = 0x19A454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A458u; }
        else if (ctx->pc != 0x19A458u) { ctx->pc = 0x19A458u; }
    }
    if (ctx->pc != 0x19A458u) { return; }
    ctx->pc = 0x19A458u;
    // 0x19a458: 0x10000009
    ctx->pc = 0x19A458u;
    {
        const bool branch_taken_0x19a458 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A45Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a458) {
            ctx->pc = 0x19A480u;
            goto label_19a480;
        }
    }
    ctx->pc = 0x19A460u;
label_19a460:
    // 0x19a460: 0x280202d
    ctx->pc = 0x19a460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a464: 0xc050c90
    ctx->pc = 0x19A464u;
    SET_GPR_U32(ctx, 31, 0x19A46Cu);
    ctx->pc = 0x19A468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A46Cu; }
        else if (ctx->pc != 0x19A46Cu) { ctx->pc = 0x19A46Cu; }
    }
    if (ctx->pc != 0x19A46Cu) { return; }
    ctx->pc = 0x19A46Cu;
    // 0x19a46c: 0x2902021
    ctx->pc = 0x19a46cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x19a470: 0x2a0282d
    ctx->pc = 0x19a470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a474: 0xc050c90
    ctx->pc = 0x19A474u;
    SET_GPR_U32(ctx, 31, 0x19A47Cu);
    ctx->pc = 0x19A478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A47Cu; }
        else if (ctx->pc != 0x19A47Cu) { ctx->pc = 0x19A47Cu; }
    }
    if (ctx->pc != 0x19A47Cu) { return; }
    ctx->pc = 0x19A47Cu;
    // 0x19a47c: 0x3c0102d
    ctx->pc = 0x19a47cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19a480:
    // 0x19a480: 0xdfbf0090
    ctx->pc = 0x19a480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19a484: 0xdfbe0080
    ctx->pc = 0x19a484u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19a488: 0xdfb70070
    ctx->pc = 0x19a488u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19a48c: 0xdfb60060
    ctx->pc = 0x19a48cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19a490: 0xdfb50050
    ctx->pc = 0x19a490u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a494: 0xdfb40040
    ctx->pc = 0x19a494u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a498: 0xdfb30030
    ctx->pc = 0x19a498u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a49c: 0xdfb20020
    ctx->pc = 0x19a49cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a4a0: 0xdfb10010
    ctx->pc = 0x19a4a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a4a4: 0xdfb00000
    ctx->pc = 0x19a4a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a4a8: 0x3e00008
    ctx->pc = 0x19A4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A4ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A41Cu: goto label_19a41c;
            case 0x19A460u: goto label_19a460;
            case 0x19A480u: goto label_19a480;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19A4B0u;
}
