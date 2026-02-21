#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _getAllRefs
// Address: 0x2ef698 - 0x2efd48
void _getAllRefs_0x2ef698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ef698u;

    // 0x2ef698: 0x27bdff10
    ctx->pc = 0x2ef698u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2ef69c: 0x3c02003a
    ctx->pc = 0x2ef69cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ef6a0: 0xffb700c0
    ctx->pc = 0x2ef6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x2ef6a4: 0x24423638
    ctx->pc = 0x2ef6a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13880));
    // 0x2ef6a8: 0xffb600b0
    ctx->pc = 0x2ef6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2ef6ac: 0x240b0140
    ctx->pc = 0x2ef6acu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2ef6b0: 0xffb500a0
    ctx->pc = 0x2ef6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x2ef6b4: 0x120b02d
    ctx->pc = 0x2ef6b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6b8: 0xffb40090
    ctx->pc = 0x2ef6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2ef6bc: 0xa0a82d
    ctx->pc = 0x2ef6bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6c0: 0xffb30080
    ctx->pc = 0x2ef6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2ef6c4: 0x80a02d
    ctx->pc = 0x2ef6c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6c8: 0xffb20070
    ctx->pc = 0x2ef6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2ef6cc: 0xe0982d
    ctx->pc = 0x2ef6ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6d0: 0xffb10060
    ctx->pc = 0x2ef6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2ef6d4: 0x24170001
    ctx->pc = 0x2ef6d4u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef6d8: 0xafa60040
    ctx->pc = 0x2ef6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2ef6dc: 0x100882d
    ctx->pc = 0x2ef6dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6e0: 0xffbf00e0
    ctx->pc = 0x2ef6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2ef6e4: 0x902d
    ctx->pc = 0x2ef6e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6e8: 0xffbe00d0
    ctx->pc = 0x2ef6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2ef6ec: 0x30cc0008
    ctx->pc = 0x2ef6ecu;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 6), 8));
    // 0x2ef6f0: 0xffb00050
    ctx->pc = 0x2ef6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2ef6f4: 0x8c430280
    ctx->pc = 0x2ef6f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x2ef6f8: 0x6b2018
    ctx->pc = 0x2ef6f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ef6fc: 0x821821
    ctx->pc = 0x2ef6fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ef700: 0x15800006
    ctx->pc = 0x2EF700u;
    {
        const bool branch_taken_0x2ef700 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x2EF704u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 0));
        if (branch_taken_0x2ef700) {
            ctx->pc = 0x2EF71Cu;
            goto label_2ef71c;
        }
    }
    ctx->pc = 0x2EF708u;
    // 0x2ef708: 0x3c02003a
    ctx->pc = 0x2ef708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ef70c: 0x24040002
    ctx->pc = 0x2ef70cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef710: 0x8c4331bc
    ctx->pc = 0x2ef710u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12732)));
    // 0x2ef714: 0x1464010b
    ctx->pc = 0x2EF714u;
    {
        const bool branch_taken_0x2ef714 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x2EF718u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2ef714) {
            ctx->pc = 0x2EFB44u;
            goto label_2efb44;
        }
    }
    ctx->pc = 0x2EF71Cu;
label_2ef71c:
    // 0x2ef71c: 0x3c02003a
    ctx->pc = 0x2ef71cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ef720: 0x24030003
    ctx->pc = 0x2ef720u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ef724: 0x8c4631ec
    ctx->pc = 0x2ef724u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 12780)));
    // 0x2ef728: 0x14c30075
    ctx->pc = 0x2EF728u;
    {
        const bool branch_taken_0x2ef728 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 3));
        ctx->pc = 0x2EF72Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2ef728) {
            ctx->pc = 0x2EF900u;
            goto label_2ef900;
        }
    }
    ctx->pc = 0x2EF730u;
    // 0x2ef730: 0x24020002
    ctx->pc = 0x2ef730u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef734: 0x52620004
    ctx->pc = 0x2EF734u;
    {
        const bool branch_taken_0x2ef734 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        if (branch_taken_0x2ef734) {
            ctx->pc = 0x2EF738u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x2EF748u;
            goto label_2ef748;
        }
    }
    ctx->pc = 0x2EF73Cu;
    // 0x2ef73c: 0x1580000d
    ctx->pc = 0x2EF73Cu;
    {
        const bool branch_taken_0x2ef73c = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ef73c) {
            ctx->pc = 0x2EF774u;
            goto label_2ef774;
        }
    }
    ctx->pc = 0x2EF744u;
    // 0x2ef744: 0x8e230004
    ctx->pc = 0x2ef744u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2ef748:
    // 0x2ef748: 0x3c02003a
    ctx->pc = 0x2ef748u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ef74c: 0x8e2b0000
    ctx->pc = 0x2ef74cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ef750: 0x282d
    ctx->pc = 0x2ef750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef754: 0x8c443040
    ctx->pc = 0x2ef754u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12352)));
    // 0x2ef758: 0x302d
    ctx->pc = 0x2ef758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef75c: 0xafa30000
    ctx->pc = 0x2ef75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2ef760: 0x382d
    ctx->pc = 0x2ef760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef764: 0xafa00008
    ctx->pc = 0x2ef764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2ef768: 0x24080010
    ctx->pc = 0x2ef768u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ef76c: 0x100000eb
    ctx->pc = 0x2EF76Cu;
    {
        const bool branch_taken_0x2ef76c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EF770u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        if (branch_taken_0x2ef76c) {
            ctx->pc = 0x2EFB1Cu;
            goto label_2efb1c;
        }
    }
    ctx->pc = 0x2EF774u;
label_2ef774:
    // 0x2ef774: 0x1677001f
    ctx->pc = 0x2EF774u;
    {
        const bool branch_taken_0x2ef774 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 23));
        ctx->pc = 0x2EF778u;
        SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
        if (branch_taken_0x2ef774) {
            ctx->pc = 0x2EF7F4u;
            goto label_2ef7f4;
        }
    }
    ctx->pc = 0x2EF77Cu;
    // 0x2ef77c: 0x8e220004
    ctx->pc = 0x2ef77cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ef780: 0x8ec50000
    ctx->pc = 0x2ef780u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2ef784: 0x302d
    ctx->pc = 0x2ef784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef788: 0x8e2b0000
    ctx->pc = 0x2ef788u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ef78c: 0x21043
    ctx->pc = 0x2ef78cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ef790: 0x8e043040
    ctx->pc = 0x2ef790u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12352)));
    // 0x2ef794: 0x382d
    ctx->pc = 0x2ef794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef798: 0xafa20000
    ctx->pc = 0x2ef798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2ef79c: 0x24080008
    ctx->pc = 0x2ef79cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ef7a0: 0xafb30008
    ctx->pc = 0x2ef7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x2ef7a4: 0x280482d
    ctx->pc = 0x2ef7a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef7a8: 0xafa00010
    ctx->pc = 0x2ef7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2ef7ac: 0xc0bbf52
    ctx->pc = 0x2EF7ACu;
    SET_GPR_U32(ctx, 31, 0x2EF7B4u);
    ctx->pc = 0x2EF7B0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EFD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x2efd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF7B4u; }
    }
    if (ctx->pc != 0x2EF7B4u) { return; }
    ctx->pc = 0x2EF7B4u;
    // 0x2ef7b4: 0x8e220014
    ctx->pc = 0x2ef7b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2ef7b8: 0x24060001
    ctx->pc = 0x2ef7b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef7bc: 0x8ec50008
    ctx->pc = 0x2ef7bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2ef7c0: 0x382d
    ctx->pc = 0x2ef7c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef7c4: 0x8e2b0010
    ctx->pc = 0x2ef7c4u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ef7c8: 0x21043
    ctx->pc = 0x2ef7c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ef7cc: 0x8e043040
    ctx->pc = 0x2ef7ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12352)));
    // 0x2ef7d0: 0x24080008
    ctx->pc = 0x2ef7d0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ef7d4: 0xafa20000
    ctx->pc = 0x2ef7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2ef7d8: 0x280482d
    ctx->pc = 0x2ef7d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef7dc: 0xafb30008
    ctx->pc = 0x2ef7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x2ef7e0: 0x2a0502d
    ctx->pc = 0x2ef7e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef7e4: 0xc0bbf52
    ctx->pc = 0x2EF7E4u;
    SET_GPR_U32(ctx, 31, 0x2EF7ECu);
    ctx->pc = 0x2EF7E8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x2EFD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x2efd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF7ECu; }
    }
    if (ctx->pc != 0x2EF7ECu) { return; }
    ctx->pc = 0x2EF7ECu;
    // 0x2ef7ec: 0x100000d4
    ctx->pc = 0x2EF7ECu;
    {
        const bool branch_taken_0x2ef7ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EF7F0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2ef7ec) {
            ctx->pc = 0x2EFB40u;
            goto label_2efb40;
        }
    }
    ctx->pc = 0x2EF7F4u;
label_2ef7f4:
    // 0x2ef7f4: 0x1666003d
    ctx->pc = 0x2EF7F4u;
    {
        const bool branch_taken_0x2ef7f4 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 6));
        ctx->pc = 0x2EF7F8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2ef7f4) {
            ctx->pc = 0x2EF8ECu;
            goto label_2ef8ec;
        }
    }
    ctx->pc = 0x2EF7FCu;
    // 0x2ef7fc: 0x8e270004
    ctx->pc = 0x2ef7fcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ef800: 0x140282d
    ctx->pc = 0x2ef800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef804: 0x8e260000
    ctx->pc = 0x2ef804u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ef808: 0x27a40020
    ctx->pc = 0x2ef808u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ef80c: 0x73843
    ctx->pc = 0x2ef80cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x2ef810: 0xc0bc4c4
    ctx->pc = 0x2EF810u;
    SET_GPR_U32(ctx, 31, 0x2EF818u);
    ctx->pc = 0x2EF814u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2F1310u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dualPrimeVector_0x2f1310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF818u; }
    }
    if (ctx->pc != 0x2EF818u) { return; }
    ctx->pc = 0x2EF818u;
    // 0x2ef818: 0x8e220004
    ctx->pc = 0x2ef818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ef81c: 0x282d
    ctx->pc = 0x2ef81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef820: 0x8e2b0000
    ctx->pc = 0x2ef820u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ef824: 0x302d
    ctx->pc = 0x2ef824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef828: 0x21043
    ctx->pc = 0x2ef828u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ef82c: 0x8e043040
    ctx->pc = 0x2ef82cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12352)));
    // 0x2ef830: 0xafa20000
    ctx->pc = 0x2ef830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2ef834: 0x382d
    ctx->pc = 0x2ef834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef838: 0xafb70008
    ctx->pc = 0x2ef838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x2ef83c: 0x24080008
    ctx->pc = 0x2ef83cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ef840: 0xafa00010
    ctx->pc = 0x2ef840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2ef844: 0x280482d
    ctx->pc = 0x2ef844u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef848: 0xc0bbf52
    ctx->pc = 0x2EF848u;
    SET_GPR_U32(ctx, 31, 0x2EF850u);
    ctx->pc = 0x2EF84Cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EFD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x2efd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF850u; }
    }
    if (ctx->pc != 0x2EF850u) { return; }
    ctx->pc = 0x2EF850u;
    // 0x2ef850: 0x8fa20024
    ctx->pc = 0x2ef850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2ef854: 0x24050001
    ctx->pc = 0x2ef854u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef858: 0x8e043040
    ctx->pc = 0x2ef858u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12352)));
    // 0x2ef85c: 0x302d
    ctx->pc = 0x2ef85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef860: 0x8fab0020
    ctx->pc = 0x2ef860u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef864: 0x382d
    ctx->pc = 0x2ef864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef868: 0xafa20000
    ctx->pc = 0x2ef868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2ef86c: 0x24080008
    ctx->pc = 0x2ef86cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ef870: 0xafb70008
    ctx->pc = 0x2ef870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x2ef874: 0x280482d
    ctx->pc = 0x2ef874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef878: 0xafb70010
    ctx->pc = 0x2ef878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x2ef87c: 0xc0bbf52
    ctx->pc = 0x2EF87Cu;
    SET_GPR_U32(ctx, 31, 0x2EF884u);
    ctx->pc = 0x2EF880u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EFD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x2efd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF884u; }
    }
    if (ctx->pc != 0x2EF884u) { return; }
    ctx->pc = 0x2EF884u;
    // 0x2ef884: 0x8e220004
    ctx->pc = 0x2ef884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ef888: 0x24050001
    ctx->pc = 0x2ef888u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef88c: 0x8e2b0000
    ctx->pc = 0x2ef88cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ef890: 0x24060001
    ctx->pc = 0x2ef890u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef894: 0x21043
    ctx->pc = 0x2ef894u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ef898: 0x8e043040
    ctx->pc = 0x2ef898u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12352)));
    // 0x2ef89c: 0xafa20000
    ctx->pc = 0x2ef89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2ef8a0: 0x382d
    ctx->pc = 0x2ef8a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef8a4: 0xafb70008
    ctx->pc = 0x2ef8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x2ef8a8: 0x24080008
    ctx->pc = 0x2ef8a8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ef8ac: 0xafa00010
    ctx->pc = 0x2ef8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2ef8b0: 0x280482d
    ctx->pc = 0x2ef8b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef8b4: 0xc0bbf52
    ctx->pc = 0x2EF8B4u;
    SET_GPR_U32(ctx, 31, 0x2EF8BCu);
    ctx->pc = 0x2EF8B8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EFD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x2efd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF8BCu; }
    }
    if (ctx->pc != 0x2EF8BCu) { return; }
    ctx->pc = 0x2EF8BCu;
    // 0x2ef8bc: 0x8fa2002c
    ctx->pc = 0x2ef8bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2ef8c0: 0x282d
    ctx->pc = 0x2ef8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef8c4: 0x8e043040
    ctx->pc = 0x2ef8c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12352)));
    // 0x2ef8c8: 0x24060001
    ctx->pc = 0x2ef8c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef8cc: 0x8fab0028
    ctx->pc = 0x2ef8ccu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ef8d0: 0x382d
    ctx->pc = 0x2ef8d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef8d4: 0xafa20000
    ctx->pc = 0x2ef8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2ef8d8: 0x24080008
    ctx->pc = 0x2ef8d8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ef8dc: 0xafb70010
    ctx->pc = 0x2ef8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x2ef8e0: 0x280482d
    ctx->pc = 0x2ef8e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef8e4: 0x1000008e
    ctx->pc = 0x2EF8E4u;
    {
        const bool branch_taken_0x2ef8e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EF8E8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
        if (branch_taken_0x2ef8e4) {
            ctx->pc = 0x2EFB20u;
            goto label_2efb20;
        }
    }
    ctx->pc = 0x2EF8ECu;
label_2ef8ec:
    // 0x2ef8ec: 0x260282d
    ctx->pc = 0x2ef8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef8f0: 0xc0bba4a
    ctx->pc = 0x2EF8F0u;
    SET_GPR_U32(ctx, 31, 0x2EF8F8u);
    ctx->pc = 0x2EF8F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942472));
    ctx->pc = 0x2EE928u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x2ee928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF8F8u; }
    }
    if (ctx->pc != 0x2EF8F8u) { return; }
    ctx->pc = 0x2EF8F8u;
    // 0x2ef8f8: 0x10000091
    ctx->pc = 0x2EF8F8u;
    {
        const bool branch_taken_0x2ef8f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EF8FCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2ef8f8) {
            ctx->pc = 0x2EFB40u;
            goto label_2efb40;
        }
    }
    ctx->pc = 0x2EF900u;
label_2ef900:
    // 0x2ef900: 0x3c03003a
    ctx->pc = 0x2ef900u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2ef904: 0x3c05003a
    ctx->pc = 0x2ef904u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2ef908: 0x8c48304c
    ctx->pc = 0x2ef908u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 12364)));
    // 0x2ef90c: 0x8c673058
    ctx->pc = 0x2ef90cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 12376)));
    // 0x2ef910: 0x38c20002
    ctx->pc = 0x2ef910u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), 2));
    // 0x2ef914: 0x3c04003a
    ctx->pc = 0x2ef914u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2ef918: 0x8ca3305c
    ctx->pc = 0x2ef918u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12380)));
    // 0x2ef91c: 0x8c863050
    ctx->pc = 0x2ef91cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12368)));
    // 0x2ef920: 0x2c570001
    ctx->pc = 0x2ef920u;
    SET_GPR_U32(ctx, 23, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x2ef924: 0x3c05003a
    ctx->pc = 0x2ef924u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2ef928: 0x24040002
    ctx->pc = 0x2ef928u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef92c: 0x8ca231bc
    ctx->pc = 0x2ef92cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12732)));
    // 0x2ef930: 0x902d
    ctx->pc = 0x2ef930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef934: 0xafa80030
    ctx->pc = 0x2ef934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x2ef938: 0xafa70034
    ctx->pc = 0x2ef938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    // 0x2ef93c: 0xafa60038
    ctx->pc = 0x2ef93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x2ef940: 0x14440008
    ctx->pc = 0x2EF940u;
    {
        const bool branch_taken_0x2ef940 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x2EF944u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        if (branch_taken_0x2ef940) {
            ctx->pc = 0x2EF964u;
            goto label_2ef964;
        }
    }
    ctx->pc = 0x2EF948u;
    // 0x2ef948: 0x3c02003a
    ctx->pc = 0x2ef948u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ef94c: 0x8c43315c
    ctx->pc = 0x2ef94cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12636)));
    // 0x2ef950: 0x10600005
    ctx->pc = 0x2EF950u;
    {
        const bool branch_taken_0x2ef950 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EF954u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2ef950) {
            ctx->pc = 0x2EF968u;
            goto label_2ef968;
        }
    }
    ctx->pc = 0x2EF958u;
    // 0x2ef958: 0x8ec20000
    ctx->pc = 0x2ef958u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2ef95c: 0x2e21026
    ctx->pc = 0x2ef95cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2ef960: 0x2902b
    ctx->pc = 0x2ef960u;
    SET_GPR_U32(ctx, 18, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2ef964:
    // 0x2ef964: 0x241e0001
    ctx->pc = 0x2ef964u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
label_2ef968:
    // 0x2ef968: 0x527e0004
    ctx->pc = 0x2EF968u;
    {
        const bool branch_taken_0x2ef968 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 30));
        if (branch_taken_0x2ef968) {
            ctx->pc = 0x2EF96Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->pc = 0x2EF97Cu;
            goto label_2ef97c;
        }
    }
    ctx->pc = 0x2EF970u;
    // 0x2ef970: 0x1580000f
    ctx->pc = 0x2EF970u;
    {
        const bool branch_taken_0x2ef970 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x2EF974u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2ef970) {
            ctx->pc = 0x2EF9B0u;
            goto label_2ef9b0;
        }
    }
    ctx->pc = 0x2EF978u;
    // 0x2ef978: 0x8ec20000
    ctx->pc = 0x2ef978u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2ef97c:
    // 0x2ef97c: 0x1218c0
    ctx->pc = 0x2ef97cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 3));
    // 0x2ef980: 0x8e240004
    ctx->pc = 0x2ef980u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ef984: 0x282d
    ctx->pc = 0x2ef984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef988: 0x8e2b0000
    ctx->pc = 0x2ef988u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ef98c: 0x21080
    ctx->pc = 0x2ef98cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ef990: 0x431021
    ctx->pc = 0x2ef990u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ef994: 0xafa00008
    ctx->pc = 0x2ef994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2ef998: 0xafa40000
    ctx->pc = 0x2ef998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2ef99c: 0x3a21821
    ctx->pc = 0x2ef99cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2ef9a0: 0x8c640030
    ctx->pc = 0x2ef9a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2ef9a4: 0x302d
    ctx->pc = 0x2ef9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9a8: 0x1000005a
    ctx->pc = 0x2EF9A8u;
    {
        const bool branch_taken_0x2ef9a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EF9ACu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        if (branch_taken_0x2ef9a8) {
            ctx->pc = 0x2EFB14u;
            goto label_2efb14;
        }
    }
    ctx->pc = 0x2EF9B0u;
label_2ef9b0:
    // 0x2ef9b0: 0x16620031
    ctx->pc = 0x2EF9B0u;
    {
        const bool branch_taken_0x2ef9b0 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x2EF9B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2ef9b0) {
            ctx->pc = 0x2EFA78u;
            goto label_2efa78;
        }
    }
    ctx->pc = 0x2EF9B8u;
    // 0x2ef9b8: 0x8ec20000
    ctx->pc = 0x2ef9b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2ef9bc: 0x1220c0
    ctx->pc = 0x2ef9bcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 3));
    // 0x2ef9c0: 0x8e230004
    ctx->pc = 0x2ef9c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ef9c4: 0x27b00030
    ctx->pc = 0x2ef9c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ef9c8: 0x8e2b0000
    ctx->pc = 0x2ef9c8u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ef9cc: 0x21080
    ctx->pc = 0x2ef9ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ef9d0: 0x441021
    ctx->pc = 0x2ef9d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ef9d4: 0xafa30000
    ctx->pc = 0x2ef9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2ef9d8: 0xafa00008
    ctx->pc = 0x2ef9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2ef9dc: 0x2021021
    ctx->pc = 0x2ef9dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ef9e0: 0x282d
    ctx->pc = 0x2ef9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9e4: 0x302d
    ctx->pc = 0x2ef9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9e8: 0x8c440000
    ctx->pc = 0x2ef9e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ef9ec: 0x382d
    ctx->pc = 0x2ef9ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9f0: 0xafa00010
    ctx->pc = 0x2ef9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2ef9f4: 0x24080008
    ctx->pc = 0x2ef9f4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ef9f8: 0x280482d
    ctx->pc = 0x2ef9f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9fc: 0xc0bbf52
    ctx->pc = 0x2EF9FCu;
    SET_GPR_U32(ctx, 31, 0x2EFA04u);
    ctx->pc = 0x2EFA00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EFD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x2efd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFA04u; }
    }
    if (ctx->pc != 0x2EFA04u) { return; }
    ctx->pc = 0x2EFA04u;
    // 0x2efa04: 0x3c06003a
    ctx->pc = 0x2efa04u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2efa08: 0x8cc231bc
    ctx->pc = 0x2efa08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12732)));
    // 0x2efa0c: 0x14530009
    ctx->pc = 0x2EFA0Cu;
    {
        const bool branch_taken_0x2efa0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x2EFA10u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2efa0c) {
            ctx->pc = 0x2EFA34u;
            goto label_2efa34;
        }
    }
    ctx->pc = 0x2EFA14u;
    // 0x2efa14: 0x3c02003a
    ctx->pc = 0x2efa14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2efa18: 0x8c43315c
    ctx->pc = 0x2efa18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12636)));
    // 0x2efa1c: 0x10600006
    ctx->pc = 0x2EFA1Cu;
    {
        const bool branch_taken_0x2efa1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFA20u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 8)));
        if (branch_taken_0x2efa1c) {
            ctx->pc = 0x2EFA38u;
            goto label_2efa38;
        }
    }
    ctx->pc = 0x2EFA24u;
    // 0x2efa24: 0x3c0902d
    ctx->pc = 0x2efa24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efa28: 0x2e31026
    ctx->pc = 0x2efa28u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2efa2c: 0x10000002
    ctx->pc = 0x2EFA2Cu;
    {
        const bool branch_taken_0x2efa2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFA30u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 0));
        if (branch_taken_0x2efa2c) {
            ctx->pc = 0x2EFA38u;
            goto label_2efa38;
        }
    }
    ctx->pc = 0x2EFA34u;
label_2efa34:
    // 0x2efa34: 0x8ec30008
    ctx->pc = 0x2efa34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2efa38:
    // 0x2efa38: 0x31080
    ctx->pc = 0x2efa38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2efa3c: 0x8e260014
    ctx->pc = 0x2efa3cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2efa40: 0x1218c0
    ctx->pc = 0x2efa40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 3));
    // 0x2efa44: 0x8e2b0010
    ctx->pc = 0x2efa44u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2efa48: 0x431021
    ctx->pc = 0x2efa48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2efa4c: 0x282d
    ctx->pc = 0x2efa4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efa50: 0x2021021
    ctx->pc = 0x2efa50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2efa54: 0x24070008
    ctx->pc = 0x2efa54u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2efa58: 0x8c440000
    ctx->pc = 0x2efa58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2efa5c: 0x24080008
    ctx->pc = 0x2efa5cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2efa60: 0xafa60000
    ctx->pc = 0x2efa60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2efa64: 0x280482d
    ctx->pc = 0x2efa64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efa68: 0x302d
    ctx->pc = 0x2efa68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efa6c: 0xafa00008
    ctx->pc = 0x2efa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2efa70: 0x1000002b
    ctx->pc = 0x2EFA70u;
    {
        const bool branch_taken_0x2efa70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFA74u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        if (branch_taken_0x2efa70) {
            ctx->pc = 0x2EFB20u;
            goto label_2efb20;
        }
    }
    ctx->pc = 0x2EFA78u;
label_2efa78:
    // 0x2efa78: 0x1662002d
    ctx->pc = 0x2EFA78u;
    {
        const bool branch_taken_0x2efa78 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x2EFA7Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2efa78) {
            ctx->pc = 0x2EFB30u;
            goto label_2efb30;
        }
    }
    ctx->pc = 0x2EFA80u;
    // 0x2efa80: 0x3c02003a
    ctx->pc = 0x2efa80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2efa84: 0x3c0902d
    ctx->pc = 0x2efa84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efa88: 0x8c43315c
    ctx->pc = 0x2efa88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12636)));
    // 0x2efa8c: 0x140282d
    ctx->pc = 0x2efa8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efa90: 0x8e260000
    ctx->pc = 0x2efa90u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2efa94: 0x27a40020
    ctx->pc = 0x2efa94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2efa98: 0x8e270004
    ctx->pc = 0x2efa98u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2efa9c: 0xc0bc4c4
    ctx->pc = 0x2EFA9Cu;
    SET_GPR_U32(ctx, 31, 0x2EFAA4u);
    ctx->pc = 0x2EFAA0u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 0));
    ctx->pc = 0x2F1310u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dualPrimeVector_0x2f1310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFAA4u; }
    }
    if (ctx->pc != 0x2EFAA4u) { return; }
    ctx->pc = 0x2EFAA4u;
    // 0x2efaa4: 0x27b00030
    ctx->pc = 0x2efaa4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2efaa8: 0x171080
    ctx->pc = 0x2efaa8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 2));
    // 0x2efaac: 0x8e230004
    ctx->pc = 0x2efaacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2efab0: 0x2021021
    ctx->pc = 0x2efab0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2efab4: 0x8c440000
    ctx->pc = 0x2efab4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2efab8: 0x282d
    ctx->pc = 0x2efab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efabc: 0x8e2b0000
    ctx->pc = 0x2efabcu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2efac0: 0x302d
    ctx->pc = 0x2efac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efac4: 0xafa30000
    ctx->pc = 0x2efac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2efac8: 0x382d
    ctx->pc = 0x2efac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efacc: 0xafa00008
    ctx->pc = 0x2efaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2efad0: 0x24080010
    ctx->pc = 0x2efad0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2efad4: 0xafa00010
    ctx->pc = 0x2efad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2efad8: 0x280482d
    ctx->pc = 0x2efad8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efadc: 0xc0bbf52
    ctx->pc = 0x2EFADCu;
    SET_GPR_U32(ctx, 31, 0x2EFAE4u);
    ctx->pc = 0x2EFAE0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EFD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x2efd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFAE4u; }
    }
    if (ctx->pc != 0x2EFAE4u) { return; }
    ctx->pc = 0x2EFAE4u;
    // 0x2efae4: 0x1218c0
    ctx->pc = 0x2efae4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 3));
    // 0x2efae8: 0x8fa40024
    ctx->pc = 0x2efae8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2efaec: 0x24620004
    ctx->pc = 0x2efaecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4));
    // 0x2efaf0: 0xafbe0010
    ctx->pc = 0x2efaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 30));
    // 0x2efaf4: 0x77100b
    ctx->pc = 0x2efaf4u;
    if (GPR_U32(ctx, 23) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x2efaf8: 0xafa40000
    ctx->pc = 0x2efaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2efafc: 0x2028021
    ctx->pc = 0x2efafcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2efb00: 0x8fab0020
    ctx->pc = 0x2efb00u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2efb04: 0x8e040000
    ctx->pc = 0x2efb04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2efb08: 0x282d
    ctx->pc = 0x2efb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb0c: 0xafa00008
    ctx->pc = 0x2efb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2efb10: 0x302d
    ctx->pc = 0x2efb10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2efb14:
    // 0x2efb14: 0x382d
    ctx->pc = 0x2efb14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb18: 0x24080010
    ctx->pc = 0x2efb18u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
label_2efb1c:
    // 0x2efb1c: 0x280482d
    ctx->pc = 0x2efb1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2efb20:
    // 0x2efb20: 0xc0bbf52
    ctx->pc = 0x2EFB20u;
    SET_GPR_U32(ctx, 31, 0x2EFB28u);
    ctx->pc = 0x2EFB24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EFD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x2efd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFB28u; }
    }
    if (ctx->pc != 0x2EFB28u) { return; }
    ctx->pc = 0x2EFB28u;
    // 0x2efb28: 0x10000005
    ctx->pc = 0x2EFB28u;
    {
        const bool branch_taken_0x2efb28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFB2Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2efb28) {
            ctx->pc = 0x2EFB40u;
            goto label_2efb40;
        }
    }
    ctx->pc = 0x2EFB30u;
label_2efb30:
    // 0x2efb30: 0x260282d
    ctx->pc = 0x2efb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb34: 0xc0bba4a
    ctx->pc = 0x2EFB34u;
    SET_GPR_U32(ctx, 31, 0x2EFB3Cu);
    ctx->pc = 0x2EFB38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942504));
    ctx->pc = 0x2EE928u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x2ee928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFB3Cu; }
    }
    if (ctx->pc != 0x2EFB3Cu) { return; }
    ctx->pc = 0x2EFB3Cu;
    // 0x2efb3c: 0x24120001
    ctx->pc = 0x2efb3cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_2efb40:
    // 0x2efb40: 0x8fa30040
    ctx->pc = 0x2efb40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2efb44:
    // 0x2efb44: 0x30620004
    ctx->pc = 0x2efb44u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
    // 0x2efb48: 0x10400073
    ctx->pc = 0x2EFB48u;
    {
        const bool branch_taken_0x2efb48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFB4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2efb48) {
            ctx->pc = 0x2EFD18u;
            goto label_2efd18;
        }
    }
    ctx->pc = 0x2EFB50u;
    // 0x2efb50: 0x24040003
    ctx->pc = 0x2efb50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2efb54: 0x8c4331ec
    ctx->pc = 0x2efb54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12780)));
    // 0x2efb58: 0x1464002b
    ctx->pc = 0x2EFB58u;
    {
        const bool branch_taken_0x2efb58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x2EFB5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2efb58) {
            ctx->pc = 0x2EFC08u;
            goto label_2efc08;
        }
    }
    ctx->pc = 0x2EFB60u;
    // 0x2efb60: 0x24020002
    ctx->pc = 0x2efb60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2efb64: 0x16620009
    ctx->pc = 0x2EFB64u;
    {
        const bool branch_taken_0x2efb64 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x2EFB68u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2efb64) {
            ctx->pc = 0x2EFB8Cu;
            goto label_2efb8c;
        }
    }
    ctx->pc = 0x2EFB6Cu;
    // 0x2efb6c: 0x8e23000c
    ctx->pc = 0x2efb6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2efb70: 0x3c02003a
    ctx->pc = 0x2efb70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2efb74: 0x8e2b0008
    ctx->pc = 0x2efb74u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2efb78: 0x280482d
    ctx->pc = 0x2efb78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb7c: 0x8c443044
    ctx->pc = 0x2efb7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12356)));
    // 0x2efb80: 0x2a0502d
    ctx->pc = 0x2efb80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb84: 0x1000002e
    ctx->pc = 0x2EFB84u;
    {
        const bool branch_taken_0x2efb84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFB88u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x2efb84) {
            ctx->pc = 0x2EFC40u;
            goto label_2efc40;
        }
    }
    ctx->pc = 0x2EFB8Cu;
label_2efb8c:
    // 0x2efb8c: 0x8e22000c
    ctx->pc = 0x2efb8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2efb90: 0x3c10003a
    ctx->pc = 0x2efb90u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2efb94: 0x8ec50004
    ctx->pc = 0x2efb94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2efb98: 0x302d
    ctx->pc = 0x2efb98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb9c: 0x8e2b0008
    ctx->pc = 0x2efb9cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2efba0: 0x21043
    ctx->pc = 0x2efba0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2efba4: 0x8e043044
    ctx->pc = 0x2efba4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12356)));
    // 0x2efba8: 0x382d
    ctx->pc = 0x2efba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efbac: 0xafa20000
    ctx->pc = 0x2efbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2efbb0: 0x24080008
    ctx->pc = 0x2efbb0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2efbb4: 0xafb70008
    ctx->pc = 0x2efbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x2efbb8: 0x280482d
    ctx->pc = 0x2efbb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efbbc: 0xafb20010
    ctx->pc = 0x2efbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x2efbc0: 0xc0bbf52
    ctx->pc = 0x2EFBC0u;
    SET_GPR_U32(ctx, 31, 0x2EFBC8u);
    ctx->pc = 0x2EFBC4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EFD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x2efd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFBC8u; }
    }
    if (ctx->pc != 0x2EFBC8u) { return; }
    ctx->pc = 0x2EFBC8u;
    // 0x2efbc8: 0x8e22001c
    ctx->pc = 0x2efbc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2efbcc: 0x280482d
    ctx->pc = 0x2efbccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efbd0: 0x8ec5000c
    ctx->pc = 0x2efbd0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x2efbd4: 0x2a0502d
    ctx->pc = 0x2efbd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efbd8: 0x8e2b0018
    ctx->pc = 0x2efbd8u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2efbdc: 0x21043
    ctx->pc = 0x2efbdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2efbe0: 0x8e043044
    ctx->pc = 0x2efbe0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12356)));
    // 0x2efbe4: 0x24060001
    ctx->pc = 0x2efbe4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efbe8: 0xafa20000
    ctx->pc = 0x2efbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2efbec: 0x382d
    ctx->pc = 0x2efbecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efbf0: 0xafb70008
    ctx->pc = 0x2efbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x2efbf4: 0x24080008
    ctx->pc = 0x2efbf4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2efbf8: 0xc0bbf52
    ctx->pc = 0x2EFBF8u;
    SET_GPR_U32(ctx, 31, 0x2EFC00u);
    ctx->pc = 0x2EFBFCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    ctx->pc = 0x2EFD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x2efd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC00u; }
    }
    if (ctx->pc != 0x2EFC00u) { return; }
    ctx->pc = 0x2EFC00u;
    // 0x2efc00: 0x10000046
    ctx->pc = 0x2EFC00u;
    {
        const bool branch_taken_0x2efc00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFC04u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x2efc00) {
            ctx->pc = 0x2EFD1Cu;
            goto label_2efd1c;
        }
    }
    ctx->pc = 0x2EFC08u;
label_2efc08:
    // 0x2efc08: 0x16620016
    ctx->pc = 0x2EFC08u;
    {
        const bool branch_taken_0x2efc08 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x2EFC0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2efc08) {
            ctx->pc = 0x2EFC64u;
            goto label_2efc64;
        }
    }
    ctx->pc = 0x2EFC10u;
    // 0x2efc10: 0x8ec20004
    ctx->pc = 0x2efc10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2efc14: 0x10400003
    ctx->pc = 0x2EFC14u;
    {
        const bool branch_taken_0x2efc14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFC18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2efc14) {
            ctx->pc = 0x2EFC24u;
            goto label_2efc24;
        }
    }
    ctx->pc = 0x2EFC1Cu;
    // 0x2efc1c: 0x10000003
    ctx->pc = 0x2EFC1Cu;
    {
        const bool branch_taken_0x2efc1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFC20u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12380)));
        if (branch_taken_0x2efc1c) {
            ctx->pc = 0x2EFC2Cu;
            goto label_2efc2c;
        }
    }
    ctx->pc = 0x2EFC24u;
label_2efc24:
    // 0x2efc24: 0x3c02003a
    ctx->pc = 0x2efc24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2efc28: 0x8c443050
    ctx->pc = 0x2efc28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12368)));
label_2efc2c:
    // 0x2efc2c: 0x8e22000c
    ctx->pc = 0x2efc2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2efc30: 0x280482d
    ctx->pc = 0x2efc30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc34: 0x8e2b0008
    ctx->pc = 0x2efc34u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2efc38: 0x2a0502d
    ctx->pc = 0x2efc38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc3c: 0xafa20000
    ctx->pc = 0x2efc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2efc40:
    // 0x2efc40: 0x282d
    ctx->pc = 0x2efc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc44: 0xafb20010
    ctx->pc = 0x2efc44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x2efc48: 0x302d
    ctx->pc = 0x2efc48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc4c: 0xafa00008
    ctx->pc = 0x2efc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2efc50: 0x382d
    ctx->pc = 0x2efc50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc54: 0xc0bbf52
    ctx->pc = 0x2EFC54u;
    SET_GPR_U32(ctx, 31, 0x2EFC5Cu);
    ctx->pc = 0x2EFC58u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2EFD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x2efd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC5Cu; }
    }
    if (ctx->pc != 0x2EFC5Cu) { return; }
    ctx->pc = 0x2EFC5Cu;
    // 0x2efc5c: 0x1000002f
    ctx->pc = 0x2EFC5Cu;
    {
        const bool branch_taken_0x2efc5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFC60u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x2efc5c) {
            ctx->pc = 0x2EFD1Cu;
            goto label_2efd1c;
        }
    }
    ctx->pc = 0x2EFC64u;
label_2efc64:
    // 0x2efc64: 0x16620029
    ctx->pc = 0x2EFC64u;
    {
        const bool branch_taken_0x2efc64 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x2EFC68u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2efc64) {
            ctx->pc = 0x2EFD0Cu;
            goto label_2efd0c;
        }
    }
    ctx->pc = 0x2EFC6Cu;
    // 0x2efc6c: 0x8ec20004
    ctx->pc = 0x2efc6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2efc70: 0x10400003
    ctx->pc = 0x2EFC70u;
    {
        const bool branch_taken_0x2efc70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFC74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2efc70) {
            ctx->pc = 0x2EFC80u;
            goto label_2efc80;
        }
    }
    ctx->pc = 0x2EFC78u;
    // 0x2efc78: 0x10000003
    ctx->pc = 0x2EFC78u;
    {
        const bool branch_taken_0x2efc78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFC7Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12380)));
        if (branch_taken_0x2efc78) {
            ctx->pc = 0x2EFC88u;
            goto label_2efc88;
        }
    }
    ctx->pc = 0x2EFC80u;
label_2efc80:
    // 0x2efc80: 0x3c02003a
    ctx->pc = 0x2efc80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2efc84: 0x8c443050
    ctx->pc = 0x2efc84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12368)));
label_2efc88:
    // 0x2efc88: 0x8e22000c
    ctx->pc = 0x2efc88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2efc8c: 0x282d
    ctx->pc = 0x2efc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc90: 0x8e2b0008
    ctx->pc = 0x2efc90u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2efc94: 0x302d
    ctx->pc = 0x2efc94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc98: 0xafa20000
    ctx->pc = 0x2efc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2efc9c: 0x382d
    ctx->pc = 0x2efc9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efca0: 0xafa00008
    ctx->pc = 0x2efca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2efca4: 0x24080008
    ctx->pc = 0x2efca4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2efca8: 0xafb20010
    ctx->pc = 0x2efca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x2efcac: 0x280482d
    ctx->pc = 0x2efcacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efcb0: 0xc0bbf52
    ctx->pc = 0x2EFCB0u;
    SET_GPR_U32(ctx, 31, 0x2EFCB8u);
    ctx->pc = 0x2EFCB4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EFD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x2efd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFCB8u; }
    }
    if (ctx->pc != 0x2EFCB8u) { return; }
    ctx->pc = 0x2EFCB8u;
    // 0x2efcb8: 0x8ec2000c
    ctx->pc = 0x2efcb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x2efcbc: 0x10400003
    ctx->pc = 0x2EFCBCu;
    {
        const bool branch_taken_0x2efcbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFCC0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2efcbc) {
            ctx->pc = 0x2EFCCCu;
            goto label_2efccc;
        }
    }
    ctx->pc = 0x2EFCC4u;
    // 0x2efcc4: 0x10000003
    ctx->pc = 0x2EFCC4u;
    {
        const bool branch_taken_0x2efcc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFCC8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12380)));
        if (branch_taken_0x2efcc4) {
            ctx->pc = 0x2EFCD4u;
            goto label_2efcd4;
        }
    }
    ctx->pc = 0x2EFCCCu;
label_2efccc:
    // 0x2efccc: 0x3c02003a
    ctx->pc = 0x2efcccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2efcd0: 0x8c443050
    ctx->pc = 0x2efcd0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12368)));
label_2efcd4:
    // 0x2efcd4: 0x8e22001c
    ctx->pc = 0x2efcd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2efcd8: 0x280482d
    ctx->pc = 0x2efcd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efcdc: 0x8e2b0018
    ctx->pc = 0x2efcdcu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2efce0: 0x2a0502d
    ctx->pc = 0x2efce0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efce4: 0xafa20000
    ctx->pc = 0x2efce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2efce8: 0x282d
    ctx->pc = 0x2efce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efcec: 0xafb20010
    ctx->pc = 0x2efcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x2efcf0: 0x302d
    ctx->pc = 0x2efcf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efcf4: 0xafa00008
    ctx->pc = 0x2efcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2efcf8: 0x24070008
    ctx->pc = 0x2efcf8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2efcfc: 0xc0bbf52
    ctx->pc = 0x2EFCFCu;
    SET_GPR_U32(ctx, 31, 0x2EFD04u);
    ctx->pc = 0x2EFD00u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2EFD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x2efd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD04u; }
    }
    if (ctx->pc != 0x2EFD04u) { return; }
    ctx->pc = 0x2EFD04u;
    // 0x2efd04: 0x10000005
    ctx->pc = 0x2EFD04u;
    {
        const bool branch_taken_0x2efd04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EFD08u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x2efd04) {
            ctx->pc = 0x2EFD1Cu;
            goto label_2efd1c;
        }
    }
    ctx->pc = 0x2EFD0Cu;
label_2efd0c:
    // 0x2efd0c: 0x260282d
    ctx->pc = 0x2efd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd10: 0xc0bba4a
    ctx->pc = 0x2EFD10u;
    SET_GPR_U32(ctx, 31, 0x2EFD18u);
    ctx->pc = 0x2EFD14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942536));
    ctx->pc = 0x2EE928u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x2ee928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD18u; }
    }
    if (ctx->pc != 0x2EFD18u) { return; }
    ctx->pc = 0x2EFD18u;
label_2efd18:
    // 0x2efd18: 0xdfbf00e0
    ctx->pc = 0x2efd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2efd1c:
    // 0x2efd1c: 0xdfbe00d0
    ctx->pc = 0x2efd1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2efd20: 0xdfb700c0
    ctx->pc = 0x2efd20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2efd24: 0xdfb600b0
    ctx->pc = 0x2efd24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2efd28: 0xdfb500a0
    ctx->pc = 0x2efd28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2efd2c: 0xdfb40090
    ctx->pc = 0x2efd2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2efd30: 0xdfb30080
    ctx->pc = 0x2efd30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2efd34: 0xdfb20070
    ctx->pc = 0x2efd34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2efd38: 0xdfb10060
    ctx->pc = 0x2efd38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2efd3c: 0xdfb00050
    ctx->pc = 0x2efd3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2efd40: 0x3e00008
    ctx->pc = 0x2EFD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFD44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EF71Cu: goto label_2ef71c;
            case 0x2EF748u: goto label_2ef748;
            case 0x2EF774u: goto label_2ef774;
            case 0x2EF7F4u: goto label_2ef7f4;
            case 0x2EF8ECu: goto label_2ef8ec;
            case 0x2EF900u: goto label_2ef900;
            case 0x2EF964u: goto label_2ef964;
            case 0x2EF968u: goto label_2ef968;
            case 0x2EF97Cu: goto label_2ef97c;
            case 0x2EF9B0u: goto label_2ef9b0;
            case 0x2EFA34u: goto label_2efa34;
            case 0x2EFA38u: goto label_2efa38;
            case 0x2EFA78u: goto label_2efa78;
            case 0x2EFB14u: goto label_2efb14;
            case 0x2EFB1Cu: goto label_2efb1c;
            case 0x2EFB20u: goto label_2efb20;
            case 0x2EFB30u: goto label_2efb30;
            case 0x2EFB40u: goto label_2efb40;
            case 0x2EFB44u: goto label_2efb44;
            case 0x2EFB8Cu: goto label_2efb8c;
            case 0x2EFC08u: goto label_2efc08;
            case 0x2EFC24u: goto label_2efc24;
            case 0x2EFC2Cu: goto label_2efc2c;
            case 0x2EFC40u: goto label_2efc40;
            case 0x2EFC64u: goto label_2efc64;
            case 0x2EFC80u: goto label_2efc80;
            case 0x2EFC88u: goto label_2efc88;
            case 0x2EFCCCu: goto label_2efccc;
            case 0x2EFCD4u: goto label_2efcd4;
            case 0x2EFD0Cu: goto label_2efd0c;
            case 0x2EFD18u: goto label_2efd18;
            case 0x2EFD1Cu: goto label_2efd1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2EFD48u;
}
