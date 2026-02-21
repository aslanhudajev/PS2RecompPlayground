#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cpy2area
// Address: 0x2de6d8 - 0x2de808
void cpy2area_0x2de6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de6d8u;

    // 0x2de6d8: 0x27bdff70
    ctx->pc = 0x2de6d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2de6dc: 0xffbf0080
    ctx->pc = 0x2de6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2de6e0: 0xffb70070
    ctx->pc = 0x2de6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2de6e4: 0xffb60060
    ctx->pc = 0x2de6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2de6e8: 0xffb50050
    ctx->pc = 0x2de6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2de6ec: 0xffb40040
    ctx->pc = 0x2de6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2de6f0: 0xffb30030
    ctx->pc = 0x2de6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2de6f4: 0xffb20020
    ctx->pc = 0x2de6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2de6f8: 0xffb10010
    ctx->pc = 0x2de6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2de6fc: 0xffb00000
    ctx->pc = 0x2de6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de700: 0x80a02d
    ctx->pc = 0x2de700u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de704: 0xa0802d
    ctx->pc = 0x2de704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de708: 0xc0b82d
    ctx->pc = 0x2de708u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de70c: 0x100982d
    ctx->pc = 0x2de70cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de710: 0x120882d
    ctx->pc = 0x2de710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de714: 0x140b02d
    ctx->pc = 0x2de714u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de718: 0x160a82d
    ctx->pc = 0x2de718u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de71c: 0x2073821
    ctx->pc = 0x2de71cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2de720: 0x2351021
    ctx->pc = 0x2de720u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x2de724: 0xe2382a
    ctx->pc = 0x2de724u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
    // 0x2de728: 0x14e0002c
    ctx->pc = 0x2DE728u;
    {
        const bool branch_taken_0x2de728 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DE72Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2de728) {
            ctx->pc = 0x2DE7DCu;
            goto label_2de7dc;
        }
    }
    ctx->pc = 0x2DE730u;
    // 0x2de730: 0x230102a
    ctx->pc = 0x2de730u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
    // 0x2de734: 0x14400010
    ctx->pc = 0x2DE734u;
    {
        const bool branch_taken_0x2de734 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DE738u;
        SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        if (branch_taken_0x2de734) {
            ctx->pc = 0x2DE778u;
            goto label_2de778;
        }
    }
    ctx->pc = 0x2DE73Cu;
    // 0x2de73c: 0x280202d
    ctx->pc = 0x2de73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de740: 0x260282d
    ctx->pc = 0x2de740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de744: 0xc0bec59
    ctx->pc = 0x2DE744u;
    SET_GPR_U32(ctx, 31, 0x2DE74Cu);
    ctx->pc = 0x2DE748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE74Cu; }
    }
    if (ctx->pc != 0x2DE74Cu) { return; }
    ctx->pc = 0x2DE74Cu;
    // 0x2de74c: 0x2e0202d
    ctx->pc = 0x2de74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de750: 0x2702821
    ctx->pc = 0x2de750u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2de754: 0xc0bec59
    ctx->pc = 0x2DE754u;
    SET_GPR_U32(ctx, 31, 0x2DE75Cu);
    ctx->pc = 0x2DE758u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE75Cu; }
    }
    if (ctx->pc != 0x2DE75Cu) { return; }
    ctx->pc = 0x2DE75Cu;
    // 0x2de75c: 0x2f12021
    ctx->pc = 0x2de75cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x2de760: 0x902023
    ctx->pc = 0x2de760u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2de764: 0x2c0282d
    ctx->pc = 0x2de764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de768: 0xc0bec59
    ctx->pc = 0x2DE768u;
    SET_GPR_U32(ctx, 31, 0x2DE770u);
    ctx->pc = 0x2DE76Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE770u; }
    }
    if (ctx->pc != 0x2DE770u) { return; }
    ctx->pc = 0x2DE770u;
    // 0x2de770: 0x1000001a
    ctx->pc = 0x2DE770u;
    {
        const bool branch_taken_0x2de770 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DE774u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        if (branch_taken_0x2de770) {
            ctx->pc = 0x2DE7DCu;
            goto label_2de7dc;
        }
    }
    ctx->pc = 0x2DE778u;
label_2de778:
    // 0x2de778: 0x2b2102a
    ctx->pc = 0x2de778u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 18)));
    // 0x2de77c: 0x1440000f
    ctx->pc = 0x2DE77Cu;
    {
        const bool branch_taken_0x2de77c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DE780u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2de77c) {
            ctx->pc = 0x2DE7BCu;
            goto label_2de7bc;
        }
    }
    ctx->pc = 0x2DE784u;
    // 0x2de784: 0x260282d
    ctx->pc = 0x2de784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de788: 0xc0bec59
    ctx->pc = 0x2DE788u;
    SET_GPR_U32(ctx, 31, 0x2DE790u);
    ctx->pc = 0x2DE78Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE790u; }
    }
    if (ctx->pc != 0x2DE790u) { return; }
    ctx->pc = 0x2DE790u;
    // 0x2de790: 0x2912021
    ctx->pc = 0x2de790u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2de794: 0x2c0282d
    ctx->pc = 0x2de794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de798: 0xc0bec59
    ctx->pc = 0x2DE798u;
    SET_GPR_U32(ctx, 31, 0x2DE7A0u);
    ctx->pc = 0x2DE79Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE7A0u; }
    }
    if (ctx->pc != 0x2DE7A0u) { return; }
    ctx->pc = 0x2DE7A0u;
    // 0x2de7a0: 0x2d02821
    ctx->pc = 0x2de7a0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2de7a4: 0x2e0202d
    ctx->pc = 0x2de7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de7a8: 0xb12823
    ctx->pc = 0x2de7a8u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2de7ac: 0xc0bec59
    ctx->pc = 0x2DE7ACu;
    SET_GPR_U32(ctx, 31, 0x2DE7B4u);
    ctx->pc = 0x2DE7B0u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE7B4u; }
    }
    if (ctx->pc != 0x2DE7B4u) { return; }
    ctx->pc = 0x2DE7B4u;
    // 0x2de7b4: 0x10000009
    ctx->pc = 0x2DE7B4u;
    {
        const bool branch_taken_0x2de7b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DE7B8u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        if (branch_taken_0x2de7b4) {
            ctx->pc = 0x2DE7DCu;
            goto label_2de7dc;
        }
    }
    ctx->pc = 0x2DE7BCu;
label_2de7bc:
    // 0x2de7bc: 0x260282d
    ctx->pc = 0x2de7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de7c0: 0xc0bec59
    ctx->pc = 0x2DE7C0u;
    SET_GPR_U32(ctx, 31, 0x2DE7C8u);
    ctx->pc = 0x2DE7C4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE7C8u; }
    }
    if (ctx->pc != 0x2DE7C8u) { return; }
    ctx->pc = 0x2DE7C8u;
    // 0x2de7c8: 0x2912021
    ctx->pc = 0x2de7c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2de7cc: 0x2c0282d
    ctx->pc = 0x2de7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de7d0: 0xc0bec59
    ctx->pc = 0x2DE7D0u;
    SET_GPR_U32(ctx, 31, 0x2DE7D8u);
    ctx->pc = 0x2DE7D4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE7D8u; }
    }
    if (ctx->pc != 0x2DE7D8u) { return; }
    ctx->pc = 0x2DE7D8u;
    // 0x2de7d8: 0x2351021
    ctx->pc = 0x2de7d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_2de7dc:
    // 0x2de7dc: 0xdfbf0080
    ctx->pc = 0x2de7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2de7e0: 0xdfb70070
    ctx->pc = 0x2de7e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2de7e4: 0xdfb60060
    ctx->pc = 0x2de7e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2de7e8: 0xdfb50050
    ctx->pc = 0x2de7e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de7ec: 0xdfb40040
    ctx->pc = 0x2de7ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de7f0: 0xdfb30030
    ctx->pc = 0x2de7f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de7f4: 0xdfb20020
    ctx->pc = 0x2de7f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de7f8: 0xdfb10010
    ctx->pc = 0x2de7f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de7fc: 0xdfb00000
    ctx->pc = 0x2de7fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de800: 0x3e00008
    ctx->pc = 0x2DE800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE804u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE778u: goto label_2de778;
            case 0x2DE7BCu: goto label_2de7bc;
            case 0x2DE7DCu: goto label_2de7dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DE808u;
}
