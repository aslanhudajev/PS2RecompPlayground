#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFBUF_AringGetRead
// Address: 0x1925d0 - 0x19277c
void SFBUF_AringGetRead_0x1925d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFBUF_AringGetRead");


    ctx->pc = 0x1925d0u;

    // 0x1925d0: 0x24020388
    ctx->pc = 0x1925d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x1925d4: 0x27bdff40
    ctx->pc = 0x1925d4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1925d8: 0xa22818
    ctx->pc = 0x1925d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x1925dc: 0xffb50070
    ctx->pc = 0x1925dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1925e0: 0xffbf00b0
    ctx->pc = 0x1925e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1925e4: 0x24830d34
    ctx->pc = 0x1925e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 3380));
    // 0x1925e8: 0xffbe00a0
    ctx->pc = 0x1925e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1925ec: 0xffb70090
    ctx->pc = 0x1925ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1925f0: 0xffb60080
    ctx->pc = 0x1925f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1925f4: 0x651821
    ctx->pc = 0x1925f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1925f8: 0xffb40060
    ctx->pc = 0x1925f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1925fc: 0xffb30050
    ctx->pc = 0x1925fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x192600: 0xffb20040
    ctx->pc = 0x192600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x192604: 0xffb10030
    ctx->pc = 0x192604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x192608: 0xffb00020
    ctx->pc = 0x192608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x19260c: 0x8c620004
    ctx->pc = 0x19260cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x192610: 0x14400006
    ctx->pc = 0x192610u;
    {
        const bool branch_taken_0x192610 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x192614u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x192610) {
            ctx->pc = 0x19262Cu;
            goto label_19262c;
        }
    }
    ctx->pc = 0x192618u;
    // 0x192618: 0x3c05ff00
    ctx->pc = 0x192618u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19261c: 0xc064ea0
    ctx->pc = 0x19261Cu;
    SET_GPR_U32(ctx, 31, 0x192624u);
    ctx->pc = 0x192620u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1025));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192624u; }
        else if (ctx->pc != 0x192624u) { ctx->pc = 0x192624u; }
    }
    if (ctx->pc != 0x192624u) { return; }
    ctx->pc = 0x192624u;
    // 0x192624: 0x1000004a
    ctx->pc = 0x192624u;
    {
        const bool branch_taken_0x192624 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192628u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x192624) {
            ctx->pc = 0x192750u;
            goto label_192750;
        }
    }
    ctx->pc = 0x19262Cu;
label_19262c:
    // 0x19262c: 0x24700010
    ctx->pc = 0x19262cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 16));
    // 0x192630: 0xc064f3a
    ctx->pc = 0x192630u;
    SET_GPR_U32(ctx, 31, 0x192638u);
    ctx->pc = 0x192634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192638u; }
        else if (ctx->pc != 0x192638u) { ctx->pc = 0x192638u; }
    }
    if (ctx->pc != 0x192638u) { return; }
    ctx->pc = 0x192638u;
    // 0x192638: 0x8e02001c
    ctx->pc = 0x192638u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x19263c: 0x3a0202d
    ctx->pc = 0x19263cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192640: 0x8e17000c
    ctx->pc = 0x192640u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x192644: 0x8e1e0014
    ctx->pc = 0x192644u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x192648: 0x8e050018
    ctx->pc = 0x192648u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19264c: 0xafa20004
    ctx->pc = 0x19264cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x192650: 0x8e030020
    ctx->pc = 0x192650u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x192654: 0xafa30008
    ctx->pc = 0x192654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x192658: 0x8e14002c
    ctx->pc = 0x192658u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x19265c: 0x8e130028
    ctx->pc = 0x19265cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x192660: 0x8e110008
    ctx->pc = 0x192660u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x192664: 0x8e120010
    ctx->pc = 0x192664u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x192668: 0x8e160024
    ctx->pc = 0x192668u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19266c: 0xc064f44
    ctx->pc = 0x19266Cu;
    SET_GPR_U32(ctx, 31, 0x192674u);
    ctx->pc = 0x192670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192674u; }
        else if (ctx->pc != 0x192674u) { ctx->pc = 0x192674u; }
    }
    if (ctx->pc != 0x192674u) { return; }
    ctx->pc = 0x192674u;
    // 0x192674: 0xaeb10000
    ctx->pc = 0x192674u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x192678: 0x293102a
    ctx->pc = 0x192678u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 19)));
    // 0x19267c: 0xaeb20008
    ctx->pc = 0x19267cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
    // 0x192680: 0xaeb70004
    ctx->pc = 0x192680u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 23));
    // 0x192684: 0xaeb30024
    ctx->pc = 0x192684u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 19));
    // 0x192688: 0xaeb40028
    ctx->pc = 0x192688u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 20));
    // 0x19268c: 0x14400006
    ctx->pc = 0x19268Cu;
    {
        const bool branch_taken_0x19268c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x192690u;
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19268c) {
            ctx->pc = 0x1926A8u;
            goto label_1926a8;
        }
    }
    ctx->pc = 0x192694u;
    // 0x192694: 0xaea00020
    ctx->pc = 0x192694u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
    // 0x192698: 0xaea0000c
    ctx->pc = 0x192698u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x19269c: 0xaea00014
    ctx->pc = 0x19269cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x1926a0: 0x10000014
    ctx->pc = 0x1926A0u;
    {
        const bool branch_taken_0x1926a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1926A4u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
        if (branch_taken_0x1926a0) {
            ctx->pc = 0x1926F4u;
            goto label_1926f4;
        }
    }
    ctx->pc = 0x1926A8u;
label_1926a8:
    // 0x1926a8: 0x8fa30008
    ctx->pc = 0x1926a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1926ac: 0x2c3102a
    ctx->pc = 0x1926acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 3)));
    // 0x1926b0: 0x50400013
    ctx->pc = 0x1926B0u;
    {
        const bool branch_taken_0x1926b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1926b0) {
            ctx->pc = 0x1926B4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->pc = 0x192700u;
            goto label_192700;
        }
    }
    ctx->pc = 0x1926B8u;
    // 0x1926b8: 0x761023
    ctx->pc = 0x1926b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1926bc: 0x2ae30009
    ctx->pc = 0x1926bcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 23), 9));
    // 0x1926c0: 0xaea2000c
    ctx->pc = 0x1926c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x1926c4: 0x14600003
    ctx->pc = 0x1926C4u;
    {
        const bool branch_taken_0x1926c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1926C8u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
        if (branch_taken_0x1926c4) {
            ctx->pc = 0x1926D4u;
            goto label_1926d4;
        }
    }
    ctx->pc = 0x1926CCu;
    // 0x1926cc: 0x161040
    ctx->pc = 0x1926ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
    // 0x1926d0: 0x3c21021
    ctx->pc = 0x1926d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1926d4:
    // 0x1926d4: 0x10600003
    ctx->pc = 0x1926D4u;
    {
        const bool branch_taken_0x1926d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1926D8u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x1926d4) {
            ctx->pc = 0x1926E4u;
            goto label_1926e4;
        }
    }
    ctx->pc = 0x1926DCu;
    // 0x1926dc: 0x10000003
    ctx->pc = 0x1926DCu;
    {
        const bool branch_taken_0x1926dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1926E0u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        if (branch_taken_0x1926dc) {
            ctx->pc = 0x1926ECu;
            goto label_1926ec;
        }
    }
    ctx->pc = 0x1926E4u;
label_1926e4:
    // 0x1926e4: 0x161040
    ctx->pc = 0x1926e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
    // 0x1926e8: 0xa21021
    ctx->pc = 0x1926e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1926ec:
    // 0x1926ec: 0xaea20018
    ctx->pc = 0x1926ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x1926f0: 0xaea00020
    ctx->pc = 0x1926f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
label_1926f4:
    // 0x1926f4: 0xaea00010
    ctx->pc = 0x1926f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x1926f8: 0x10000013
    ctx->pc = 0x1926F8u;
    {
        const bool branch_taken_0x1926f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1926FCu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 0));
        if (branch_taken_0x1926f8) {
            ctx->pc = 0x192748u;
            goto label_192748;
        }
    }
    ctx->pc = 0x192700u;
label_192700:
    // 0x192700: 0x761023
    ctx->pc = 0x192700u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x192704: 0x2ae30009
    ctx->pc = 0x192704u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 23), 9));
    // 0x192708: 0xaea2000c
    ctx->pc = 0x192708u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x19270c: 0x14600003
    ctx->pc = 0x19270Cu;
    {
        const bool branch_taken_0x19270c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x192710u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
        if (branch_taken_0x19270c) {
            ctx->pc = 0x19271Cu;
            goto label_19271c;
        }
    }
    ctx->pc = 0x192714u;
    // 0x192714: 0x161040
    ctx->pc = 0x192714u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
    // 0x192718: 0x3c21021
    ctx->pc = 0x192718u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_19271c:
    // 0x19271c: 0x10600003
    ctx->pc = 0x19271Cu;
    {
        const bool branch_taken_0x19271c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x192720u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x19271c) {
            ctx->pc = 0x19272Cu;
            goto label_19272c;
        }
    }
    ctx->pc = 0x192724u;
    // 0x192724: 0x10000003
    ctx->pc = 0x192724u;
    {
        const bool branch_taken_0x192724 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192728u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        if (branch_taken_0x192724) {
            ctx->pc = 0x192734u;
            goto label_192734;
        }
    }
    ctx->pc = 0x19272Cu;
label_19272c:
    // 0x19272c: 0x161040
    ctx->pc = 0x19272cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
    // 0x192730: 0xa21021
    ctx->pc = 0x192730u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_192734:
    // 0x192734: 0xaea50020
    ctx->pc = 0x192734u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 5));
    // 0x192738: 0xaea20018
    ctx->pc = 0x192738u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x19273c: 0x8fa20008
    ctx->pc = 0x19273cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192740: 0xaebe001c
    ctx->pc = 0x192740u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 30));
    // 0x192744: 0xaea20010
    ctx->pc = 0x192744u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_192748:
    // 0x192748: 0x102d
    ctx->pc = 0x192748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19274c: 0xdfbf00b0
    ctx->pc = 0x19274cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_192750:
    // 0x192750: 0xdfbe00a0
    ctx->pc = 0x192750u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x192754: 0xdfb70090
    ctx->pc = 0x192754u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x192758: 0xdfb60080
    ctx->pc = 0x192758u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19275c: 0xdfb50070
    ctx->pc = 0x19275cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x192760: 0xdfb40060
    ctx->pc = 0x192760u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192764: 0xdfb30050
    ctx->pc = 0x192764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192768: 0xdfb20040
    ctx->pc = 0x192768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19276c: 0xdfb10030
    ctx->pc = 0x19276cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192770: 0xdfb00020
    ctx->pc = 0x192770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192774: 0x3e00008
    ctx->pc = 0x192774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192778u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19262Cu: goto label_19262c;
            case 0x1926A8u: goto label_1926a8;
            case 0x1926D4u: goto label_1926d4;
            case 0x1926E4u: goto label_1926e4;
            case 0x1926ECu: goto label_1926ec;
            case 0x1926F4u: goto label_1926f4;
            case 0x192700u: goto label_192700;
            case 0x19271Cu: goto label_19271c;
            case 0x19272Cu: goto label_19272c;
            case 0x192734u: goto label_192734;
            case 0x192748u: goto label_192748;
            case 0x192750u: goto label_192750;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19277Cu;
}
