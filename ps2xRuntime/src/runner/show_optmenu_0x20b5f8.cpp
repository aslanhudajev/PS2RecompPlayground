#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: show_optmenu
// Address: 0x20b5f8 - 0x20c448
void show_optmenu_0x20b5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20b5f8u;

    // 0x20b5f8: 0x27bdfee0
    ctx->pc = 0x20b5f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x20b5fc: 0xffbf0100
    ctx->pc = 0x20b5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x20b600: 0xffbe00f0
    ctx->pc = 0x20b600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x20b604: 0xffb700e0
    ctx->pc = 0x20b604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x20b608: 0xffb600d0
    ctx->pc = 0x20b608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x20b60c: 0xffb500c0
    ctx->pc = 0x20b60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x20b610: 0xffb400b0
    ctx->pc = 0x20b610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x20b614: 0xffb300a0
    ctx->pc = 0x20b614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x20b618: 0xffb20090
    ctx->pc = 0x20b618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x20b61c: 0xffb10080
    ctx->pc = 0x20b61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x20b620: 0xffb00070
    ctx->pc = 0x20b620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x20b624: 0xe7b40110
    ctx->pc = 0x20b624u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x20b628: 0x80a02d
    ctx->pc = 0x20b628u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b62c: 0x3c020036
    ctx->pc = 0x20b62cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x20b630: 0x8c42dee0
    ctx->pc = 0x20b630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x20b634: 0xafa20040
    ctx->pc = 0x20b634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x20b638: 0xafa00044
    ctx->pc = 0x20b638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x20b63c: 0xafa00048
    ctx->pc = 0x20b63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x20b640: 0xafa0004c
    ctx->pc = 0x20b640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x20b644: 0xafa0005c
    ctx->pc = 0x20b644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x20b648: 0xafa00060
    ctx->pc = 0x20b648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x20b64c: 0x8e840088
    ctx->pc = 0x20b64cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x20b650: 0x10800003
    ctx->pc = 0x20B650u;
    {
        const bool branch_taken_0x20b650 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B654u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x20b650) {
            ctx->pc = 0x20B660u;
            goto label_20b660;
        }
    }
    ctx->pc = 0x20B658u;
    // 0x20b658: 0xc0b41e4
    ctx->pc = 0x20B658u;
    SET_GPR_U32(ctx, 31, 0x20B660u);
    ctx->pc = 0x20B65Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B660u; }
    }
    if (ctx->pc != 0x20B660u) { return; }
    ctx->pc = 0x20B660u;
label_20b660:
    // 0x20b660: 0x8e8400e0
    ctx->pc = 0x20b660u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 224)));
    // 0x20b664: 0x50800004
    ctx->pc = 0x20B664u;
    {
        const bool branch_taken_0x20b664 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b664) {
            ctx->pc = 0x20B668u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 220)));
            ctx->pc = 0x20B678u;
            goto label_20b678;
        }
    }
    ctx->pc = 0x20B66Cu;
    // 0x20b66c: 0xc0b0ce8
    ctx->pc = 0x20B66Cu;
    SET_GPR_U32(ctx, 31, 0x20B674u);
    ctx->pc = 0x20B670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B674u; }
    }
    if (ctx->pc != 0x20B674u) { return; }
    ctx->pc = 0x20B674u;
    // 0x20b674: 0x8e8400dc
    ctx->pc = 0x20b674u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 220)));
label_20b678:
    // 0x20b678: 0x50800004
    ctx->pc = 0x20B678u;
    {
        const bool branch_taken_0x20b678 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b678) {
            ctx->pc = 0x20B67Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 32)));
            ctx->pc = 0x20B68Cu;
            goto label_20b68c;
        }
    }
    ctx->pc = 0x20B680u;
    // 0x20b680: 0xc0b0ce8
    ctx->pc = 0x20B680u;
    SET_GPR_U32(ctx, 31, 0x20B688u);
    ctx->pc = 0x20B684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B688u; }
    }
    if (ctx->pc != 0x20B688u) { return; }
    ctx->pc = 0x20B688u;
    // 0x20b688: 0x8e820020
    ctx->pc = 0x20b688u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_20b68c:
    // 0x20b68c: 0x30420040
    ctx->pc = 0x20b68cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x20b690: 0x10400005
    ctx->pc = 0x20B690u;
    {
        const bool branch_taken_0x20b690 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B694u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x20b690) {
            ctx->pc = 0x20B6A8u;
            goto label_20b6a8;
        }
    }
    ctx->pc = 0x20B698u;
    // 0x20b698: 0x24845360
    ctx->pc = 0x20b698u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21344));
    // 0x20b69c: 0xc0b1bb4
    ctx->pc = 0x20B69Cu;
    SET_GPR_U32(ctx, 31, 0x20B6A4u);
    ctx->pc = 0x20B6A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B6A4u; }
    }
    if (ctx->pc != 0x20B6A4u) { return; }
    ctx->pc = 0x20B6A4u;
    // 0x20b6a4: 0xafa2004c
    ctx->pc = 0x20b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_20b6a8:
    // 0x20b6a8: 0x8e820020
    ctx->pc = 0x20b6a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x20b6ac: 0x30420020
    ctx->pc = 0x20b6acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x20b6b0: 0x5040001e
    ctx->pc = 0x20B6B0u;
    {
        const bool branch_taken_0x20b6b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b6b0) {
            ctx->pc = 0x20B6B4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 112)));
            ctx->pc = 0x20B72Cu;
            goto label_20b72c;
        }
    }
    ctx->pc = 0x20B6B8u;
    // 0x20b6b8: 0x8e840070
    ctx->pc = 0x20b6b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x20b6bc: 0x1080000c
    ctx->pc = 0x20B6BCu;
    {
        const bool branch_taken_0x20b6bc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B6C0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x20b6bc) {
            ctx->pc = 0x20B6F0u;
            goto label_20b6f0;
        }
    }
    ctx->pc = 0x20B6C4u;
    // 0x20b6c4: 0x441023
    ctx->pc = 0x20b6c4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20b6c8: 0xafa20060
    ctx->pc = 0x20b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x20b6cc: 0x3c020032
    ctx->pc = 0x20b6ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b6d0: 0x8c42f2f8
    ctx->pc = 0x20b6d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963960)));
    // 0x20b6d4: 0x8fa40060
    ctx->pc = 0x20b6d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20b6d8: 0x82001a
    ctx->pc = 0x20b6d8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x20b6dc: 0x1812
    ctx->pc = 0x20b6dcu;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x20b6e0: 0x50400001
    ctx->pc = 0x20B6E0u;
    {
        const bool branch_taken_0x20b6e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b6e0) {
            ctx->pc = 0x20B6E4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x20B6E8u;
            goto label_20b6e8;
        }
    }
    ctx->pc = 0x20B6E8u;
label_20b6e8:
    // 0x20b6e8: 0x10000012
    ctx->pc = 0x20B6E8u;
    {
        const bool branch_taken_0x20b6e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B6ECu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        if (branch_taken_0x20b6e8) {
            ctx->pc = 0x20B734u;
            goto label_20b734;
        }
    }
    ctx->pc = 0x20B6F0u;
label_20b6f0:
    // 0x20b6f0: 0x3c020032
    ctx->pc = 0x20b6f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b6f4: 0x8e83007c
    ctx->pc = 0x20b6f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x20b6f8: 0x8c44f2f8
    ctx->pc = 0x20b6f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294963960)));
    // 0x20b6fc: 0x64102a
    ctx->pc = 0x20b6fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x20b700: 0x1040000c
    ctx->pc = 0x20B700u;
    {
        const bool branch_taken_0x20b700 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B704u;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x20b700) {
            ctx->pc = 0x20B734u;
            goto label_20b734;
        }
    }
    ctx->pc = 0x20B708u;
    // 0x20b708: 0xafa30060
    ctx->pc = 0x20b708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x20b70c: 0x31200
    ctx->pc = 0x20b70cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 8));
    // 0x20b710: 0x431823
    ctx->pc = 0x20b710u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b714: 0x64001a
    ctx->pc = 0x20b714u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x20b718: 0x1012
    ctx->pc = 0x20b718u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x20b71c: 0x50800001
    ctx->pc = 0x20B71Cu;
    {
        const bool branch_taken_0x20b71c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b71c) {
            ctx->pc = 0x20B720u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x20B724u;
            goto label_20b724;
        }
    }
    ctx->pc = 0x20B724u;
label_20b724:
    // 0x20b724: 0x10000003
    ctx->pc = 0x20B724u;
    {
        const bool branch_taken_0x20b724 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B728u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        if (branch_taken_0x20b724) {
            ctx->pc = 0x20B734u;
            goto label_20b734;
        }
    }
    ctx->pc = 0x20B72Cu;
label_20b72c:
    // 0x20b72c: 0x1440033a
    ctx->pc = 0x20B72Cu;
    {
        const bool branch_taken_0x20b72c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20B730u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        if (branch_taken_0x20b72c) {
            ctx->pc = 0x20C418u;
            goto label_20c418;
        }
    }
    ctx->pc = 0x20B734u;
label_20b734:
    // 0x20b734: 0x8e820080
    ctx->pc = 0x20b734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x20b738: 0x5040001d
    ctx->pc = 0x20B738u;
    {
        const bool branch_taken_0x20b738 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b738) {
            ctx->pc = 0x20B73Cu;
            SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->pc = 0x20B7B0u;
            goto label_20b7b0;
        }
    }
    ctx->pc = 0x20B740u;
    // 0x20b740: 0x8e830070
    ctx->pc = 0x20b740u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x20b744: 0x1060000a
    ctx->pc = 0x20B744u;
    {
        const bool branch_taken_0x20b744 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B748u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x20b744) {
            ctx->pc = 0x20B770u;
            goto label_20b770;
        }
    }
    ctx->pc = 0x20B74Cu;
    // 0x20b74c: 0x641818
    ctx->pc = 0x20b74cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20b750: 0x3c020032
    ctx->pc = 0x20b750u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b754: 0x8c42f2f8
    ctx->pc = 0x20b754u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963960)));
    // 0x20b758: 0x62001a
    ctx->pc = 0x20b758u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x20b75c: 0x1812
    ctx->pc = 0x20b75cu;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x20b760: 0x50400001
    ctx->pc = 0x20B760u;
    {
        const bool branch_taken_0x20b760 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b760) {
            ctx->pc = 0x20B764u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x20B768u;
            goto label_20b768;
        }
    }
    ctx->pc = 0x20B768u;
label_20b768:
    // 0x20b768: 0x10000006
    ctx->pc = 0x20B768u;
    {
        const bool branch_taken_0x20b768 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B76Cu;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x20b768) {
            ctx->pc = 0x20B784u;
            goto label_20b784;
        }
    }
    ctx->pc = 0x20B770u;
label_20b770:
    // 0x20b770: 0x8e82007c
    ctx->pc = 0x20b770u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x20b774: 0x2443fff6
    ctx->pc = 0x20b774u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x20b778: 0x317c2
    ctx->pc = 0x20b778u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
    // 0x20b77c: 0x621021
    ctx->pc = 0x20b77cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b780: 0x21843
    ctx->pc = 0x20b780u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_20b784:
    // 0x20b784: 0x4610004
    ctx->pc = 0x20B784u;
    {
        const bool branch_taken_0x20b784 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20B788u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 6));
        if (branch_taken_0x20b784) {
            ctx->pc = 0x20B798u;
            goto label_20b798;
        }
    }
    ctx->pc = 0x20B78Cu;
    // 0x20b78c: 0x8e820080
    ctx->pc = 0x20b78cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x20b790: 0x10000006
    ctx->pc = 0x20B790u;
    {
        const bool branch_taken_0x20b790 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B794u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x20b790) {
            ctx->pc = 0x20B7ACu;
            goto label_20b7ac;
        }
    }
    ctx->pc = 0x20B798u;
label_20b798:
    // 0x20b798: 0x50400005
    ctx->pc = 0x20B798u;
    {
        const bool branch_taken_0x20b798 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b798) {
            ctx->pc = 0x20B79Cu;
            SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->pc = 0x20B7B0u;
            goto label_20b7b0;
        }
    }
    ctx->pc = 0x20B7A0u;
    // 0x20b7a0: 0x8e820080
    ctx->pc = 0x20b7a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x20b7a4: 0x621821
    ctx->pc = 0x20b7a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b7a8: 0xafa30048
    ctx->pc = 0x20b7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_20b7ac:
    // 0x20b7ac: 0x8e880008
    ctx->pc = 0x20b7acu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_20b7b0:
    // 0x20b7b0: 0x5100002e
    ctx->pc = 0x20B7B0u;
    {
        const bool branch_taken_0x20b7b0 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b7b0) {
            ctx->pc = 0x20B7B4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 32)));
            ctx->pc = 0x20B86Cu;
            goto label_20b86c;
        }
    }
    ctx->pc = 0x20B7B8u;
    // 0x20b7b8: 0x8e8200dc
    ctx->pc = 0x20b7b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x20b7bc: 0x5040002b
    ctx->pc = 0x20B7BCu;
    {
        const bool branch_taken_0x20b7bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b7bc) {
            ctx->pc = 0x20B7C0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 32)));
            ctx->pc = 0x20B86Cu;
            goto label_20b86c;
        }
    }
    ctx->pc = 0x20B7C4u;
    // 0x20b7c4: 0x8e820050
    ctx->pc = 0x20b7c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x20b7c8: 0x21fc2
    ctx->pc = 0x20b7c8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x20b7cc: 0x431021
    ctx->pc = 0x20b7ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b7d0: 0x21043
    ctx->pc = 0x20b7d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20b7d4: 0x8e830048
    ctx->pc = 0x20b7d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x20b7d8: 0x439021
    ctx->pc = 0x20b7d8u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b7dc: 0x3c020032
    ctx->pc = 0x20b7dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b7e0: 0x8e83004c
    ctx->pc = 0x20b7e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x20b7e4: 0x8c42d378
    ctx->pc = 0x20b7e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955896)));
    // 0x20b7e8: 0x62f021
    ctx->pc = 0x20b7e8u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b7ec: 0x3c020032
    ctx->pc = 0x20b7ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b7f0: 0x8c43d388
    ctx->pc = 0x20b7f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955912)));
    // 0x20b7f4: 0x10600008
    ctx->pc = 0x20B7F4u;
    {
        const bool branch_taken_0x20b7f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B7F8u;
        SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        if (branch_taken_0x20b7f4) {
            ctx->pc = 0x20B818u;
            goto label_20b818;
        }
    }
    ctx->pc = 0x20B7FCu;
    // 0x20b7fc: 0x3c020032
    ctx->pc = 0x20b7fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b800: 0x2432021
    ctx->pc = 0x20b800u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20b804: 0x3c32821
    ctx->pc = 0x20b804u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x20b808: 0x8c46d36c
    ctx->pc = 0x20b808u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20b80c: 0x382d
    ctx->pc = 0x20b80cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b810: 0xc080510
    ctx->pc = 0x20B810u;
    SET_GPR_U32(ctx, 31, 0x20B818u);
    ctx->pc = 0x20B814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B818u; }
    }
    if (ctx->pc != 0x20B818u) { return; }
    ctx->pc = 0x20B818u;
label_20b818:
    // 0x20b818: 0x3c020032
    ctx->pc = 0x20b818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b81c: 0x2443d3f0
    ctx->pc = 0x20b81cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294956016));
    // 0x20b820: 0x9053d3f0
    ctx->pc = 0x20b820u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294956016)));
    // 0x20b824: 0x139c00
    ctx->pc = 0x20b824u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 19), 16));
    // 0x20b828: 0x90620004
    ctx->pc = 0x20b828u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20b82c: 0x21200
    ctx->pc = 0x20b82cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x20b830: 0x2629825
    ctx->pc = 0x20b830u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x20b834: 0x90670008
    ctx->pc = 0x20b834u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20b838: 0x3c020032
    ctx->pc = 0x20b838u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b83c: 0x240202d
    ctx->pc = 0x20b83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b840: 0x3c0282d
    ctx->pc = 0x20b840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b844: 0x8c46d36c
    ctx->pc = 0x20b844u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20b848: 0x2673825
    ctx->pc = 0x20b848u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x20b84c: 0xc68c0004
    ctx->pc = 0x20b84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20b850: 0xc080510
    ctx->pc = 0x20B850u;
    SET_GPR_U32(ctx, 31, 0x20B858u);
    ctx->pc = 0x20B854u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B858u; }
    }
    if (ctx->pc != 0x20B858u) { return; }
    ctx->pc = 0x20B858u;
    // 0x20b858: 0x8fa3004c
    ctx->pc = 0x20b858u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x20b85c: 0x10600002
    ctx->pc = 0x20B85Cu;
    {
        const bool branch_taken_0x20b85c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B860u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20b85c) {
            ctx->pc = 0x20B868u;
            goto label_20b868;
        }
    }
    ctx->pc = 0x20B864u;
    // 0x20b864: 0xa6230026
    ctx->pc = 0x20b864u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 3));
label_20b868:
    // 0x20b868: 0x8e820020
    ctx->pc = 0x20b868u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_20b86c:
    // 0x20b86c: 0x30420200
    ctx->pc = 0x20b86cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x20b870: 0x8fa4004c
    ctx->pc = 0x20b870u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x20b874: 0x2200b
    ctx->pc = 0x20b874u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
    // 0x20b878: 0xafa4004c
    ctx->pc = 0x20b878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
    // 0x20b87c: 0xc0b1444
    ctx->pc = 0x20B87Cu;
    SET_GPR_U32(ctx, 31, 0x20B884u);
    ctx->pc = 0x20B880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5110u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontFlags_0x2c5110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B884u; }
    }
    if (ctx->pc != 0x20B884u) { return; }
    ctx->pc = 0x20B884u;
    // 0x20b884: 0xafa20050
    ctx->pc = 0x20b884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x20b888: 0x8e9e0010
    ctx->pc = 0x20b888u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x20b88c: 0x3c100032
    ctx->pc = 0x20b88cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x20b890: 0x8e04d36c
    ctx->pc = 0x20b890u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294955884)));
    // 0x20b894: 0xc080570
    ctx->pc = 0x20B894u;
    SET_GPR_U32(ctx, 31, 0x20B89Cu);
    ctx->pc = 0x20B898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2015C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontHeight_0x2015c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B89Cu; }
    }
    if (ctx->pc != 0x20B89Cu) { return; }
    ctx->pc = 0x20B89Cu;
    // 0x20b89c: 0xafa20058
    ctx->pc = 0x20b89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x20b8a0: 0xc0b145e
    ctx->pc = 0x20B8A0u;
    SET_GPR_U32(ctx, 31, 0x20B8A8u);
    ctx->pc = 0x20B8A4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294955884)));
    ctx->pc = 0x2C5178u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFont_0x2c5178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B8A8u; }
    }
    if (ctx->pc != 0x20B8A8u) { return; }
    ctx->pc = 0x20B8A8u;
    // 0x20b8a8: 0x8e820074
    ctx->pc = 0x20b8a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x20b8ac: 0xafa20054
    ctx->pc = 0x20b8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_20b8b0:
    // 0x20b8b0: 0x8fb00060
    ctx->pc = 0x20b8b0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20b8b4: 0x24020024
    ctx->pc = 0x20b8b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
    // 0x20b8b8: 0x8fa30044
    ctx->pc = 0x20b8b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x20b8bc: 0x621018
    ctx->pc = 0x20b8bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20b8c0: 0x8e83001c
    ctx->pc = 0x20b8c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x20b8c4: 0x43b021
    ctx->pc = 0x20b8c4u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b8c8: 0x8ec20000
    ctx->pc = 0x20b8c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x20b8cc: 0x1040012e
    ctx->pc = 0x20B8CCu;
    {
        const bool branch_taken_0x20b8cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B8D0u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 20), 32)));
        if (branch_taken_0x20b8cc) {
            ctx->pc = 0x20BD88u;
            goto label_20bd88;
        }
    }
    ctx->pc = 0x20B8D4u;
    // 0x20b8d4: 0xc6940034
    ctx->pc = 0x20b8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20b8d8: 0x8fb70048
    ctx->pc = 0x20b8d8u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20b8dc: 0x8fb5004c
    ctx->pc = 0x20b8dcu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x20b8e0: 0x8ec20020
    ctx->pc = 0x20b8e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x20b8e4: 0x4410005
    ctx->pc = 0x20B8E4u;
    {
        const bool branch_taken_0x20b8e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20B8E8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20b8e4) {
            ctx->pc = 0x20B8FCu;
            goto label_20b8fc;
        }
    }
    ctx->pc = 0x20B8ECu;
    // 0x20b8ec: 0x24030080
    ctx->pc = 0x20b8ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
    // 0x20b8f0: 0x2402007f
    ctx->pc = 0x20b8f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
    // 0x20b8f4: 0x50102a
    ctx->pc = 0x20b8f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x20b8f8: 0x62800a
    ctx->pc = 0x20b8f8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
label_20b8fc:
    // 0x20b8fc: 0xc0b1444
    ctx->pc = 0x20B8FCu;
    SET_GPR_U32(ctx, 31, 0x20B904u);
    ctx->pc = 0x20B900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5110u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontFlags_0x2c5110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B904u; }
    }
    if (ctx->pc != 0x20B904u) { return; }
    ctx->pc = 0x20B904u;
    // 0x20b904: 0x8fa40044
    ctx->pc = 0x20b904u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x20b908: 0x8fa20054
    ctx->pc = 0x20b908u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x20b90c: 0x1482007f
    ctx->pc = 0x20B90Cu;
    {
        const bool branch_taken_0x20b90c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x20B910u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        if (branch_taken_0x20b90c) {
            ctx->pc = 0x20BB0Cu;
            goto label_20bb0c;
        }
    }
    ctx->pc = 0x20B914u;
    // 0x20b914: 0x8ec20020
    ctx->pc = 0x20b914u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x20b918: 0x440007b
    ctx->pc = 0x20B918u;
    {
        const bool branch_taken_0x20b918 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20B91Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x20b918) {
            ctx->pc = 0x20BB08u;
            goto label_20bb08;
        }
    }
    ctx->pc = 0x20B920u;
    // 0x20b920: 0x8c64d364
    ctx->pc = 0x20b920u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294955876)));
    // 0x20b924: 0x42040
    ctx->pc = 0x20b924u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x20b928: 0x3c020032
    ctx->pc = 0x20b928u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b92c: 0x8c43d368
    ctx->pc = 0x20b92cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955880)));
    // 0x20b930: 0x831821
    ctx->pc = 0x20b930u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20b934: 0x8e82007c
    ctx->pc = 0x20b934u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x20b938: 0x43001a
    ctx->pc = 0x20b938u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x20b93c: 0x1010
    ctx->pc = 0x20b93cu;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x20b940: 0x50600001
    ctx->pc = 0x20B940u;
    {
        const bool branch_taken_0x20b940 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b940) {
            ctx->pc = 0x20B944u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x20B948u;
            goto label_20b948;
        }
    }
    ctx->pc = 0x20B948u;
label_20b948:
    // 0x20b948: 0x40402d
    ctx->pc = 0x20b948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b94c: 0x88202a
    ctx->pc = 0x20b94cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 8)));
    // 0x20b950: 0x10800003
    ctx->pc = 0x20B950u;
    {
        const bool branch_taken_0x20b950 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B954u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20b950) {
            ctx->pc = 0x20B960u;
            goto label_20b960;
        }
    }
    ctx->pc = 0x20B958u;
    // 0x20b958: 0x10000007
    ctx->pc = 0x20B958u;
    {
        const bool branch_taken_0x20b958 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B95Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20b958) {
            ctx->pc = 0x20B978u;
            goto label_20b978;
        }
    }
    ctx->pc = 0x20B960u;
label_20b960:
    // 0x20b960: 0x3c020032
    ctx->pc = 0x20b960u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b964: 0x8c43d364
    ctx->pc = 0x20b964u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955876)));
    // 0x20b968: 0x68102a
    ctx->pc = 0x20b968u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 8)));
    // 0x20b96c: 0x10400002
    ctx->pc = 0x20B96Cu;
    {
        const bool branch_taken_0x20b96c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B970u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x20b96c) {
            ctx->pc = 0x20B978u;
            goto label_20b978;
        }
    }
    ctx->pc = 0x20B974u;
    // 0x20b974: 0x484023
    ctx->pc = 0x20b974u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_20b978:
    // 0x20b978: 0x3c020032
    ctx->pc = 0x20b978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b97c: 0x8c42f2fc
    ctx->pc = 0x20b97cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963964)));
    // 0x20b980: 0x10400027
    ctx->pc = 0x20B980u;
    {
        const bool branch_taken_0x20b980 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B984u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 8));
        if (branch_taken_0x20b980) {
            ctx->pc = 0x20BA20u;
            goto label_20ba20;
        }
    }
    ctx->pc = 0x20B988u;
    // 0x20b988: 0x481023
    ctx->pc = 0x20b988u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20b98c: 0x3c040032
    ctx->pc = 0x20b98cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x20b990: 0x8c83d364
    ctx->pc = 0x20b990u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294955876)));
    // 0x20b994: 0x431021
    ctx->pc = 0x20b994u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b998: 0x2442ffff
    ctx->pc = 0x20b998u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20b99c: 0x43001a
    ctx->pc = 0x20b99cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x20b9a0: 0x1012
    ctx->pc = 0x20b9a0u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x20b9a4: 0x50600001
    ctx->pc = 0x20B9A4u;
    {
        const bool branch_taken_0x20b9a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b9a4) {
            ctx->pc = 0x20B9A8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x20B9ACu;
            goto label_20b9ac;
        }
    }
    ctx->pc = 0x20B9ACu;
label_20b9ac:
    // 0x20b9ac: 0x2604007f
    ctx->pc = 0x20b9acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 127));
    // 0x20b9b0: 0x21fc2
    ctx->pc = 0x20b9b0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x20b9b4: 0x431021
    ctx->pc = 0x20b9b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b9b8: 0x21043
    ctx->pc = 0x20b9b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20b9bc: 0x828023
    ctx->pc = 0x20b9bcu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20b9c0: 0x2a030100
    ctx->pc = 0x20b9c0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 256));
    // 0x20b9c4: 0x240200ff
    ctx->pc = 0x20b9c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x20b9c8: 0x43800a
    ctx->pc = 0x20b9c8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    // 0x20b9cc: 0x3c020031
    ctx->pc = 0x20b9ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20b9d0: 0x8c43f28c
    ctx->pc = 0x20b9d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294963852)));
    // 0x20b9d4: 0x28620001
    ctx->pc = 0x20b9d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 1));
    // 0x20b9d8: 0x62b80a
    ctx->pc = 0x20b9d8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 23, GPR_U32(ctx, 3));
    // 0x20b9dc: 0xa82d
    ctx->pc = 0x20b9dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b9e0: 0x382d
    ctx->pc = 0x20b9e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b9e4: 0x8e840030
    ctx->pc = 0x20b9e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x20b9e8: 0x71080
    ctx->pc = 0x20b9e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x20b9ec: 0x0
    ctx->pc = 0x20b9ecu;
    // NOP
label_20b9f0:
    // 0x20b9f0: 0x3a21821
    ctx->pc = 0x20b9f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x20b9f4: 0x441021
    ctx->pc = 0x20b9f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20b9f8: 0x8c420000
    ctx->pc = 0x20b9f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b9fc: 0xac620000
    ctx->pc = 0x20b9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x20ba00: 0x24e70001
    ctx->pc = 0x20ba00u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x20ba04: 0x28e20003
    ctx->pc = 0x20ba04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 3));
    // 0x20ba08: 0x1440fff9
    ctx->pc = 0x20BA08u;
    {
        const bool branch_taken_0x20ba08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20BA0Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x20ba08) {
            ctx->pc = 0x20B9F0u;
            goto label_20b9f0;
        }
    }
    ctx->pc = 0x20BA10u;
    // 0x20ba10: 0xc0b1444
    ctx->pc = 0x20BA10u;
    SET_GPR_U32(ctx, 31, 0x20BA18u);
    ctx->pc = 0x20BA14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16384));
    ctx->pc = 0x2C5110u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontFlags_0x2c5110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BA18u; }
    }
    if (ctx->pc != 0x20BA18u) { return; }
    ctx->pc = 0x20BA18u;
    // 0x20ba18: 0x10000039
    ctx->pc = 0x20BA18u;
    {
        const bool branch_taken_0x20ba18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BA1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294966783));
        if (branch_taken_0x20ba18) {
            ctx->pc = 0x20BB00u;
            goto label_20bb00;
        }
    }
    ctx->pc = 0x20BA20u;
label_20ba20:
    // 0x20ba20: 0x382d
    ctx->pc = 0x20ba20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba24: 0x27ac0010
    ctx->pc = 0x20ba24u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 29), 16));
    // 0x20ba28: 0x8e8b0030
    ctx->pc = 0x20ba28u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x20ba2c: 0x8e8a002c
    ctx->pc = 0x20ba2cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x20ba30: 0x3c020032
    ctx->pc = 0x20ba30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20ba34: 0x8c49d364
    ctx->pc = 0x20ba34u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 4294955876)));
    // 0x20ba38: 0x702d
    ctx->pc = 0x20ba38u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba3c: 0x240d00ff
    ctx->pc = 0x20ba3cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 255));
label_20ba40:
    // 0x20ba40: 0x72080
    ctx->pc = 0x20ba40u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), 2));
    // 0x20ba44: 0x1843021
    ctx->pc = 0x20ba44u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x20ba48: 0x8b1021
    ctx->pc = 0x20ba48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x20ba4c: 0x8a2821
    ctx->pc = 0x20ba4cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x20ba50: 0x8c420000
    ctx->pc = 0x20ba50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ba54: 0x8ca30000
    ctx->pc = 0x20ba54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20ba58: 0x431023
    ctx->pc = 0x20ba58u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20ba5c: 0xacc20000
    ctx->pc = 0x20ba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x20ba60: 0x3a42021
    ctx->pc = 0x20ba60u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x20ba64: 0x1021818
    ctx->pc = 0x20ba64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20ba68: 0x691021
    ctx->pc = 0x20ba68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x20ba6c: 0x2442ffff
    ctx->pc = 0x20ba6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20ba70: 0x49001a
    ctx->pc = 0x20ba70u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x20ba74: 0x1012
    ctx->pc = 0x20ba74u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x20ba78: 0x512e0001
    ctx->pc = 0x20BA78u;
    {
        const bool branch_taken_0x20ba78 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 14));
        if (branch_taken_0x20ba78) {
            ctx->pc = 0x20BA7Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x20BA80u;
            goto label_20ba80;
        }
    }
    ctx->pc = 0x20BA80u;
label_20ba80:
    // 0x20ba80: 0x8ca30000
    ctx->pc = 0x20ba80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20ba84: 0x431021
    ctx->pc = 0x20ba84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20ba88: 0x4400005
    ctx->pc = 0x20BA88u;
    {
        const bool branch_taken_0x20ba88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20BA8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x20ba88) {
            ctx->pc = 0x20BAA0u;
            goto label_20baa0;
        }
    }
    ctx->pc = 0x20BA90u;
    // 0x20ba90: 0x40182d
    ctx->pc = 0x20ba90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba94: 0x28620100
    ctx->pc = 0x20ba94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 256));
    // 0x20ba98: 0x10000002
    ctx->pc = 0x20BA98u;
    {
        const bool branch_taken_0x20ba98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BA9Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 13));
        if (branch_taken_0x20ba98) {
            ctx->pc = 0x20BAA4u;
            goto label_20baa4;
        }
    }
    ctx->pc = 0x20BAA0u;
label_20baa0:
    // 0x20baa0: 0x182d
    ctx->pc = 0x20baa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20baa4:
    // 0x20baa4: 0x24e70001
    ctx->pc = 0x20baa4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x20baa8: 0x28e20003
    ctx->pc = 0x20baa8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 3));
    // 0x20baac: 0x1440ffe4
    ctx->pc = 0x20BAACu;
    {
        const bool branch_taken_0x20baac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20BAB0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x20baac) {
            ctx->pc = 0x20BA40u;
            goto label_20ba40;
        }
    }
    ctx->pc = 0x20BAB4u;
    // 0x20bab4: 0x44880000
    ctx->pc = 0x20bab4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 8);
    // 0x20bab8: 0x46800020
    ctx->pc = 0x20bab8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20babc: 0x3c020032
    ctx->pc = 0x20babcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20bac0: 0xc441d364
    ctx->pc = 0x20bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bac4: 0x46800860
    ctx->pc = 0x20bac4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x20bac8: 0x0
    ctx->pc = 0x20bac8u;
    // NOP
    // 0x20bacc: 0x0
    ctx->pc = 0x20baccu;
    // NOP
    // 0x20bad0: 0x46010003
    ctx->pc = 0x20bad0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x20bad4: 0x3c020031
    ctx->pc = 0x20bad4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20bad8: 0xc441f294
    ctx->pc = 0x20bad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20badc: 0x46010002
    ctx->pc = 0x20badcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20bae0: 0x3c013f80
    ctx->pc = 0x20bae0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x20bae4: 0x44810800
    ctx->pc = 0x20bae4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x20bae8: 0x46010000
    ctx->pc = 0x20bae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20baec: 0xc6810034
    ctx->pc = 0x20baecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20baf0: 0x46010002
    ctx->pc = 0x20baf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20baf4: 0x4600a502
    ctx->pc = 0x20baf4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x20baf8: 0xa82d
    ctx->pc = 0x20baf8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bafc: 0x2402fdff
    ctx->pc = 0x20bafcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294966783));
label_20bb00:
    // 0x20bb00: 0x1000002a
    ctx->pc = 0x20BB00u;
    {
        const bool branch_taken_0x20bb00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BB04u;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x20bb00) {
            ctx->pc = 0x20BBACu;
            goto label_20bbac;
        }
    }
    ctx->pc = 0x20BB08u;
label_20bb08:
    // 0x20bb08: 0x8fa30044
    ctx->pc = 0x20bb08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_20bb0c:
    // 0x20bb0c: 0x31027
    ctx->pc = 0x20bb0cu;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x20bb10: 0x8fa40054
    ctx->pc = 0x20bb10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x20bb14: 0x14440012
    ctx->pc = 0x20BB14u;
    {
        const bool branch_taken_0x20bb14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x20BB18u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20bb14) {
            ctx->pc = 0x20BB60u;
            goto label_20bb60;
        }
    }
    ctx->pc = 0x20BB1Cu;
    // 0x20bb1c: 0x8ec20020
    ctx->pc = 0x20bb1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x20bb20: 0x8fa3005c
    ctx->pc = 0x20bb20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x20bb24: 0x14620010
    ctx->pc = 0x20BB24u;
    {
        const bool branch_taken_0x20bb24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20BB28u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x20bb24) {
            ctx->pc = 0x20BB68u;
            goto label_20bb68;
        }
    }
    ctx->pc = 0x20BB2Cu;
    // 0x20bb2c: 0x382d
    ctx->pc = 0x20bb2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bb30: 0x8e84002c
    ctx->pc = 0x20bb30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x20bb34: 0x71080
    ctx->pc = 0x20bb34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
label_20bb38:
    // 0x20bb38: 0x3a21821
    ctx->pc = 0x20bb38u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x20bb3c: 0x441021
    ctx->pc = 0x20bb3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20bb40: 0x8c420000
    ctx->pc = 0x20bb40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20bb44: 0xac620000
    ctx->pc = 0x20bb44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x20bb48: 0x24e70001
    ctx->pc = 0x20bb48u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x20bb4c: 0x28e20003
    ctx->pc = 0x20bb4cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 3));
    // 0x20bb50: 0x1440fff9
    ctx->pc = 0x20BB50u;
    {
        const bool branch_taken_0x20bb50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20BB54u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x20bb50) {
            ctx->pc = 0x20BB38u;
            goto label_20bb38;
        }
    }
    ctx->pc = 0x20BB58u;
    // 0x20bb58: 0x10000014
    ctx->pc = 0x20BB58u;
    {
        const bool branch_taken_0x20bb58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BB5Cu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20bb58) {
            ctx->pc = 0x20BBACu;
            goto label_20bbac;
        }
    }
    ctx->pc = 0x20BB60u;
label_20bb60:
    // 0x20bb60: 0x240500ff
    ctx->pc = 0x20bb60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x20bb64: 0x0
    ctx->pc = 0x20bb64u;
    // NOP
label_20bb68:
    // 0x20bb68: 0x12a00007
    ctx->pc = 0x20BB68u;
    {
        const bool branch_taken_0x20bb68 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BB6Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x20bb68) {
            ctx->pc = 0x20BB88u;
            goto label_20bb88;
        }
    }
    ctx->pc = 0x20BB70u;
    // 0x20bb70: 0x56e00006
    ctx->pc = 0x20BB70u;
    {
        const bool branch_taken_0x20bb70 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        if (branch_taken_0x20bb70) {
            ctx->pc = 0x20BB74u;
            SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
            ctx->pc = 0x20BB8Cu;
            goto label_20bb8c;
        }
    }
    ctx->pc = 0x20BB78u;
    // 0x20bb78: 0x71080
    ctx->pc = 0x20bb78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x20bb7c: 0x3a21021
    ctx->pc = 0x20bb7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x20bb80: 0x10000006
    ctx->pc = 0x20BB80u;
    {
        const bool branch_taken_0x20bb80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BB84u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x20bb80) {
            ctx->pc = 0x20BB9Cu;
            goto label_20bb9c;
        }
    }
    ctx->pc = 0x20BB88u;
label_20bb88:
    // 0x20bb88: 0x3a32021
    ctx->pc = 0x20bb88u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_20bb8c:
    // 0x20bb8c: 0x8e820028
    ctx->pc = 0x20bb8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x20bb90: 0x621821
    ctx->pc = 0x20bb90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20bb94: 0x8c620000
    ctx->pc = 0x20bb94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20bb98: 0xac820000
    ctx->pc = 0x20bb98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_20bb9c:
    // 0x20bb9c: 0x24e70001
    ctx->pc = 0x20bb9cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x20bba0: 0x28e20003
    ctx->pc = 0x20bba0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 3));
    // 0x20bba4: 0x1440fff0
    ctx->pc = 0x20BBA4u;
    {
        const bool branch_taken_0x20bba4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20bba4) {
            ctx->pc = 0x20BB68u;
            goto label_20bb68;
        }
    }
    ctx->pc = 0x20BBACu;
label_20bbac:
    // 0x20bbac: 0x12a00003
    ctx->pc = 0x20BBACu;
    {
        const bool branch_taken_0x20bbac = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BBB0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 512));
        if (branch_taken_0x20bbac) {
            ctx->pc = 0x20BBBCu;
            goto label_20bbbc;
        }
    }
    ctx->pc = 0x20BBB4u;
    // 0x20bbb4: 0x12e00005
    ctx->pc = 0x20BBB4u;
    {
        const bool branch_taken_0x20bbb4 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BBB8u;
        SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x20bbb4) {
            ctx->pc = 0x20BBCCu;
            goto label_20bbcc;
        }
    }
    ctx->pc = 0x20BBBCu;
label_20bbbc:
    // 0x20bbbc: 0x10400003
    ctx->pc = 0x20BBBCu;
    {
        const bool branch_taken_0x20bbbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BBC0u;
        SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x20bbbc) {
            ctx->pc = 0x20BBCCu;
            goto label_20bbcc;
        }
    }
    ctx->pc = 0x20BBC4u;
    // 0x20bbc4: 0x10000007
    ctx->pc = 0x20BBC4u;
    {
        const bool branch_taken_0x20bbc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BBC8u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 22), 16)));
        if (branch_taken_0x20bbc4) {
            ctx->pc = 0x20BBE4u;
            goto label_20bbe4;
        }
    }
    ctx->pc = 0x20BBCCu;
label_20bbcc:
    // 0x20bbcc: 0x139c00
    ctx->pc = 0x20bbccu;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 19), 16));
    // 0x20bbd0: 0x93a20004
    ctx->pc = 0x20bbd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20bbd4: 0x21200
    ctx->pc = 0x20bbd4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x20bbd8: 0x2629825
    ctx->pc = 0x20bbd8u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x20bbdc: 0x93a20008
    ctx->pc = 0x20bbdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20bbe0: 0x2629825
    ctx->pc = 0x20bbe0u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_20bbe4:
    // 0x20bbe4: 0xc0b1434
    ctx->pc = 0x20BBE4u;
    SET_GPR_U32(ctx, 31, 0x20BBECu);
    ctx->pc = 0x20BBE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C50D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontAlpha_0x2c50d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBECu; }
    }
    if (ctx->pc != 0x20BBECu) { return; }
    ctx->pc = 0x20BBECu;
    // 0x20bbec: 0xc0b144c
    ctx->pc = 0x20BBECu;
    SET_GPR_U32(ctx, 31, 0x20BBF4u);
    ctx->pc = 0x20BBF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBF4u; }
    }
    if (ctx->pc != 0x20BBF4u) { return; }
    ctx->pc = 0x20BBF4u;
    // 0x20bbf4: 0x4600a306
    ctx->pc = 0x20bbf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20bbf8: 0xc0b1414
    ctx->pc = 0x20BBF8u;
    SET_GPR_U32(ctx, 31, 0x20BC00u);
    ctx->pc = 0x20BBFCu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2C5050u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontScale_0x2c5050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC00u; }
    }
    if (ctx->pc != 0x20BC00u) { return; }
    ctx->pc = 0x20BC00u;
    // 0x20bc00: 0xc68c0034
    ctx->pc = 0x20bc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20bc04: 0xc0b1426
    ctx->pc = 0x20BC04u;
    SET_GPR_U32(ctx, 31, 0x20BC0Cu);
    ctx->pc = 0x20BC08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C5098u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontScaleSpace_0x2c5098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC0Cu; }
    }
    if (ctx->pc != 0x20BC0Cu) { return; }
    ctx->pc = 0x20BC0Cu;
    // 0x20bc0c: 0x8fa4005c
    ctx->pc = 0x20bc0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x20bc10: 0x54800007
    ctx->pc = 0x20BC10u;
    {
        const bool branch_taken_0x20bc10 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x20bc10) {
            ctx->pc = 0x20BC14u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->pc = 0x20BC30u;
            goto label_20bc30;
        }
    }
    ctx->pc = 0x20BC18u;
    // 0x20bc18: 0x52400014
    ctx->pc = 0x20BC18u;
    {
        const bool branch_taken_0x20bc18 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x20bc18) {
            ctx->pc = 0x20BC1Cu;
            SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->pc = 0x20BC6Cu;
            goto label_20bc6c;
        }
    }
    ctx->pc = 0x20BC20u;
    // 0x20bc20: 0x8ec20020
    ctx->pc = 0x20bc20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x20bc24: 0x58400011
    ctx->pc = 0x20BC24u;
    {
        const bool branch_taken_0x20bc24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20bc24) {
            ctx->pc = 0x20BC28u;
            SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->pc = 0x20BC6Cu;
            goto label_20bc6c;
        }
    }
    ctx->pc = 0x20BC2Cu;
    // 0x20bc2c: 0x8ec40000
    ctx->pc = 0x20bc2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20bc30:
    // 0x20bc30: 0x3c020032
    ctx->pc = 0x20bc30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20bc34: 0x8c45d36c
    ctx->pc = 0x20bc34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20bc38: 0xc080552
    ctx->pc = 0x20BC38u;
    SET_GPR_U32(ctx, 31, 0x20BC40u);
    ctx->pc = 0x20BC3Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC40u; }
    }
    if (ctx->pc != 0x20BC40u) { return; }
    ctx->pc = 0x20BC40u;
    // 0x20bc40: 0x8e83000c
    ctx->pc = 0x20bc40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x20bc44: 0x439021
    ctx->pc = 0x20bc44u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20bc48: 0x3c04003a
    ctx->pc = 0x20bc48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x20bc4c: 0x24845370
    ctx->pc = 0x20bc4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21360));
    // 0x20bc50: 0x3c030032
    ctx->pc = 0x20bc50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20bc54: 0x8c65d36c
    ctx->pc = 0x20bc54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294955884)));
    // 0x20bc58: 0xc080552
    ctx->pc = 0x20BC58u;
    SET_GPR_U32(ctx, 31, 0x20BC60u);
    ctx->pc = 0x20BC5Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC60u; }
    }
    if (ctx->pc != 0x20BC60u) { return; }
    ctx->pc = 0x20BC60u;
    // 0x20bc60: 0x2429021
    ctx->pc = 0x20bc60u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x20bc64: 0x10000002
    ctx->pc = 0x20BC64u;
    {
        const bool branch_taken_0x20bc64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BC68u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 22), 12)));
        if (branch_taken_0x20bc64) {
            ctx->pc = 0x20BC70u;
            goto label_20bc70;
        }
    }
    ctx->pc = 0x20BC6Cu;
label_20bc6c:
    // 0x20bc6c: 0x8ed00000
    ctx->pc = 0x20bc6cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20bc70:
    // 0x20bc70: 0x240202d
    ctx->pc = 0x20bc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bc74: 0x3c0282d
    ctx->pc = 0x20bc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bc78: 0xc0b135a
    ctx->pc = 0x20BC78u;
    SET_GPR_U32(ctx, 31, 0x20BC80u);
    ctx->pc = 0x20BC7Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C4D68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawText_0x2c4d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC80u; }
    }
    if (ctx->pc != 0x20BC80u) { return; }
    ctx->pc = 0x20BC80u;
    // 0x20bc80: 0x12e00003
    ctx->pc = 0x20BC80u;
    {
        const bool branch_taken_0x20bc80 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BC84u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20bc80) {
            ctx->pc = 0x20BC90u;
            goto label_20bc90;
        }
    }
    ctx->pc = 0x20BC88u;
    // 0x20bc88: 0x10000003
    ctx->pc = 0x20BC88u;
    {
        const bool branch_taken_0x20bc88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BC8Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 23));
        if (branch_taken_0x20bc88) {
            ctx->pc = 0x20BC98u;
            goto label_20bc98;
        }
    }
    ctx->pc = 0x20BC90u;
label_20bc90:
    // 0x20bc90: 0x56a00001
    ctx->pc = 0x20BC90u;
    {
        const bool branch_taken_0x20bc90 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x20bc90) {
            ctx->pc = 0x20BC94u;
            WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 21));
            ctx->pc = 0x20BC98u;
            goto label_20bc98;
        }
    }
    ctx->pc = 0x20BC98u;
label_20bc98:
    // 0x20bc98: 0x3c130032
    ctx->pc = 0x20bc98u;
    SET_GPR_U32(ctx, 19, ((uint32_t)50 << 16));
    // 0x20bc9c: 0x200202d
    ctx->pc = 0x20bc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bca0: 0x8e65d36c
    ctx->pc = 0x20bca0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 4294955884)));
    // 0x20bca4: 0xc080552
    ctx->pc = 0x20BCA4u;
    SET_GPR_U32(ctx, 31, 0x20BCACu);
    ctx->pc = 0x20BCA8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BCACu; }
    }
    if (ctx->pc != 0x20BCACu) { return; }
    ctx->pc = 0x20BCACu;
    // 0x20bcac: 0x8ec3001c
    ctx->pc = 0x20bcacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x20bcb0: 0x18600015
    ctx->pc = 0x20BCB0u;
    {
        const bool branch_taken_0x20bcb0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x20BCB4u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        if (branch_taken_0x20bcb0) {
            ctx->pc = 0x20BD08u;
            goto label_20bd08;
        }
    }
    ctx->pc = 0x20BCB8u;
    // 0x20bcb8: 0x8fa4005c
    ctx->pc = 0x20bcb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x20bcbc: 0x24820001
    ctx->pc = 0x20bcbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20bcc0: 0x54620012
    ctx->pc = 0x20BCC0u;
    {
        const bool branch_taken_0x20bcc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20bcc0) {
            ctx->pc = 0x20BCC4u;
            WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 30));
            ctx->pc = 0x20BD0Cu;
            goto label_20bd0c;
        }
    }
    ctx->pc = 0x20BCC8u;
    // 0x20bcc8: 0x240202d
    ctx->pc = 0x20bcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bccc: 0x3c0282d
    ctx->pc = 0x20bcccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bcd0: 0x3c10003a
    ctx->pc = 0x20bcd0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x20bcd4: 0xc0b135a
    ctx->pc = 0x20BCD4u;
    SET_GPR_U32(ctx, 31, 0x20BCDCu);
    ctx->pc = 0x20BCD8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 21368));
    ctx->pc = 0x2C4D68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawText_0x2c4d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BCDCu; }
    }
    if (ctx->pc != 0x20BCDCu) { return; }
    ctx->pc = 0x20BCDCu;
    // 0x20bcdc: 0x40882d
    ctx->pc = 0x20bcdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bce0: 0x26045378
    ctx->pc = 0x20bce0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 21368));
    // 0x20bce4: 0x8e65d36c
    ctx->pc = 0x20bce4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 4294955884)));
    // 0x20bce8: 0xc080552
    ctx->pc = 0x20BCE8u;
    SET_GPR_U32(ctx, 31, 0x20BCF0u);
    ctx->pc = 0x20BCECu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BCF0u; }
    }
    if (ctx->pc != 0x20BCF0u) { return; }
    ctx->pc = 0x20BCF0u;
    // 0x20bcf0: 0x12e00003
    ctx->pc = 0x20BCF0u;
    {
        const bool branch_taken_0x20bcf0 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BCF4u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        if (branch_taken_0x20bcf0) {
            ctx->pc = 0x20BD00u;
            goto label_20bd00;
        }
    }
    ctx->pc = 0x20BCF8u;
    // 0x20bcf8: 0x10000003
    ctx->pc = 0x20BCF8u;
    {
        const bool branch_taken_0x20bcf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BCFCu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 23));
        if (branch_taken_0x20bcf8) {
            ctx->pc = 0x20BD08u;
            goto label_20bd08;
        }
    }
    ctx->pc = 0x20BD00u;
label_20bd00:
    // 0x20bd00: 0x56a00001
    ctx->pc = 0x20BD00u;
    {
        const bool branch_taken_0x20bd00 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x20bd00) {
            ctx->pc = 0x20BD04u;
            WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 21));
            ctx->pc = 0x20BD08u;
            goto label_20bd08;
        }
    }
    ctx->pc = 0x20BD08u;
label_20bd08:
    // 0x20bd08: 0xaede0014
    ctx->pc = 0x20bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 30));
label_20bd0c:
    // 0x20bd0c: 0xaed20018
    ctx->pc = 0x20bd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 18));
    // 0x20bd10: 0xc0b1434
    ctx->pc = 0x20BD10u;
    SET_GPR_U32(ctx, 31, 0x20BD18u);
    ctx->pc = 0x20BD14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C50D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontAlpha_0x2c50d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BD18u; }
    }
    if (ctx->pc != 0x20BD18u) { return; }
    ctx->pc = 0x20BD18u;
    // 0x20bd18: 0x8fa20044
    ctx->pc = 0x20bd18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x20bd1c: 0x8fa30054
    ctx->pc = 0x20bd1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x20bd20: 0x54430009
    ctx->pc = 0x20BD20u;
    {
        const bool branch_taken_0x20bd20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x20bd20) {
            ctx->pc = 0x20BD24u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 12)));
            ctx->pc = 0x20BD48u;
            goto label_20bd48;
        }
    }
    ctx->pc = 0x20BD28u;
    // 0x20bd28: 0x3c020032
    ctx->pc = 0x20bd28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20bd2c: 0x8c42f2fc
    ctx->pc = 0x20bd2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963964)));
    // 0x20bd30: 0x10400004
    ctx->pc = 0x20BD30u;
    {
        const bool branch_taken_0x20bd30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BD34u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        if (branch_taken_0x20bd30) {
            ctx->pc = 0x20BD44u;
            goto label_20bd44;
        }
    }
    ctx->pc = 0x20BD38u;
    // 0x20bd38: 0x42027
    ctx->pc = 0x20bd38u;
    SET_GPR_U32(ctx, 4, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x20bd3c: 0x1000fedc
    ctx->pc = 0x20BD3Cu;
    {
        const bool branch_taken_0x20bd3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BD40u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        if (branch_taken_0x20bd3c) {
            ctx->pc = 0x20B8B0u;
            goto label_20b8b0;
        }
    }
    ctx->pc = 0x20BD44u;
label_20bd44:
    // 0x20bd44: 0x8ec2000c
    ctx->pc = 0x20bd44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_20bd48:
    // 0x20bd48: 0x10400005
    ctx->pc = 0x20BD48u;
    {
        const bool branch_taken_0x20bd48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BD4Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 92)));
        if (branch_taken_0x20bd48) {
            ctx->pc = 0x20BD60u;
            goto label_20bd60;
        }
    }
    ctx->pc = 0x20BD50u;
    // 0x20bd50: 0x14400003
    ctx->pc = 0x20BD50u;
    {
        const bool branch_taken_0x20bd50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20BD54u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20bd50) {
            ctx->pc = 0x20BD60u;
            goto label_20bd60;
        }
    }
    ctx->pc = 0x20BD58u;
    // 0x20bd58: 0x1000fed5
    ctx->pc = 0x20BD58u;
    {
        const bool branch_taken_0x20bd58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BD5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
        if (branch_taken_0x20bd58) {
            ctx->pc = 0x20B8B0u;
            goto label_20b8b0;
        }
    }
    ctx->pc = 0x20BD60u;
label_20bd60:
    // 0x20bd60: 0x12200004
    ctx->pc = 0x20BD60u;
    {
        const bool branch_taken_0x20bd60 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BD64u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        if (branch_taken_0x20bd60) {
            ctx->pc = 0x20BD74u;
            goto label_20bd74;
        }
    }
    ctx->pc = 0x20BD68u;
    // 0x20bd68: 0x8ec20008
    ctx->pc = 0x20bd68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x20bd6c: 0x821021
    ctx->pc = 0x20bd6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20bd70: 0x3c2f021
    ctx->pc = 0x20bd70u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_20bd74:
    // 0x20bd74: 0x8fa20044
    ctx->pc = 0x20bd74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x20bd78: 0x24420001
    ctx->pc = 0x20bd78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20bd7c: 0xafa20044
    ctx->pc = 0x20bd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x20bd80: 0x1000fecb
    ctx->pc = 0x20BD80u;
    {
        const bool branch_taken_0x20bd80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BD84u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        if (branch_taken_0x20bd80) {
            ctx->pc = 0x20B8B0u;
            goto label_20b8b0;
        }
    }
    ctx->pc = 0x20BD88u;
label_20bd88:
    // 0x20bd88: 0x3c013f80
    ctx->pc = 0x20bd88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x20bd8c: 0x44816000
    ctx->pc = 0x20bd8cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x20bd90: 0xc0b1414
    ctx->pc = 0x20BD90u;
    SET_GPR_U32(ctx, 31, 0x20BD98u);
    ctx->pc = 0x20BD94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C5050u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontScale_0x2c5050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BD98u; }
    }
    if (ctx->pc != 0x20BD98u) { return; }
    ctx->pc = 0x20BD98u;
    // 0x20bd98: 0xc0b1444
    ctx->pc = 0x20BD98u;
    SET_GPR_U32(ctx, 31, 0x20BDA0u);
    ctx->pc = 0x20BD9Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x2C5110u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontFlags_0x2c5110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BDA0u; }
    }
    if (ctx->pc != 0x20BDA0u) { return; }
    ctx->pc = 0x20BDA0u;
    // 0x20bda0: 0x8e820020
    ctx->pc = 0x20bda0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x20bda4: 0x30420010
    ctx->pc = 0x20bda4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x20bda8: 0x50400026
    ctx->pc = 0x20BDA8u;
    {
        const bool branch_taken_0x20bda8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20bda8) {
            ctx->pc = 0x20BDACu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 136)));
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BDB0u;
    // 0x20bdb0: 0x8e860078
    ctx->pc = 0x20bdb0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x20bdb4: 0x4c00022
    ctx->pc = 0x20BDB4u;
    {
        const bool branch_taken_0x20bdb4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x20BDB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
        if (branch_taken_0x20bdb4) {
            ctx->pc = 0x20BE40u;
            goto label_20be40;
        }
    }
    ctx->pc = 0x20BDBCu;
    // 0x20bdbc: 0xc21018
    ctx->pc = 0x20bdbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20bdc0: 0x2452006a
    ctx->pc = 0x20bdc0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 106));
    // 0x20bdc4: 0x3c020032
    ctx->pc = 0x20bdc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20bdc8: 0x8e83004c
    ctx->pc = 0x20bdc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x20bdcc: 0x8c42d37c
    ctx->pc = 0x20bdccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955900)));
    // 0x20bdd0: 0x62f021
    ctx->pc = 0x20bdd0u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20bdd4: 0x3c10003c
    ctx->pc = 0x20bdd4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x20bdd8: 0x2604c518
    ctx->pc = 0x20bdd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294952216));
    // 0x20bddc: 0x3c05003a
    ctx->pc = 0x20bddcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x20bde0: 0x24a55380
    ctx->pc = 0x20bde0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 21376));
    // 0x20bde4: 0xc0b6252
    ctx->pc = 0x20BDE4u;
    SET_GPR_U32(ctx, 31, 0x20BDECu);
    ctx->pc = 0x20BDE8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BDECu; }
    }
    if (ctx->pc != 0x20BDECu) { return; }
    ctx->pc = 0x20BDECu;
    // 0x20bdec: 0x3c020032
    ctx->pc = 0x20bdecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20bdf0: 0x2443d3f0
    ctx->pc = 0x20bdf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294956016));
    // 0x20bdf4: 0x9053d3f0
    ctx->pc = 0x20bdf4u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294956016)));
    // 0x20bdf8: 0x139c00
    ctx->pc = 0x20bdf8u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 19), 16));
    // 0x20bdfc: 0x90620004
    ctx->pc = 0x20bdfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20be00: 0x21200
    ctx->pc = 0x20be00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x20be04: 0x2629825
    ctx->pc = 0x20be04u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x20be08: 0x90670008
    ctx->pc = 0x20be08u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20be0c: 0x3c020032
    ctx->pc = 0x20be0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20be10: 0x3c030032
    ctx->pc = 0x20be10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20be14: 0x122023
    ctx->pc = 0x20be14u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x20be18: 0x3c0282d
    ctx->pc = 0x20be18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20be1c: 0x8c46d36c
    ctx->pc = 0x20be1cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20be20: 0x2673825
    ctx->pc = 0x20be20u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x20be24: 0xc46cf308
    ctx->pc = 0x20be24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20be28: 0xc080510
    ctx->pc = 0x20BE28u;
    SET_GPR_U32(ctx, 31, 0x20BE30u);
    ctx->pc = 0x20BE2Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 4294952216));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BE30u; }
    }
    if (ctx->pc != 0x20BE30u) { return; }
    ctx->pc = 0x20BE30u;
    // 0x20be30: 0x8fa3004c
    ctx->pc = 0x20be30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x20be34: 0x10600002
    ctx->pc = 0x20BE34u;
    {
        const bool branch_taken_0x20be34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BE38u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20be34) {
            ctx->pc = 0x20BE40u;
            goto label_20be40;
        }
    }
    ctx->pc = 0x20BE3Cu;
    // 0x20be3c: 0xa6230026
    ctx->pc = 0x20be3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 3));
label_20be40:
    // 0x20be40: 0x8e820088
    ctx->pc = 0x20be40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_20be44:
    // 0x20be44: 0x50400068
    ctx->pc = 0x20BE44u;
    {
        const bool branch_taken_0x20be44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20be44) {
            ctx->pc = 0x20BE48u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 224)));
            ctx->pc = 0x20BFE8u;
            goto label_20bfe8;
        }
    }
    ctx->pc = 0x20BE4Cu;
    // 0x20be4c: 0x8e820074
    ctx->pc = 0x20be4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x20be50: 0x30420001
    ctx->pc = 0x20be50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x20be54: 0x4480a000
    ctx->pc = 0x20be54u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x20be58: 0x10400004
    ctx->pc = 0x20BE58u;
    {
        const bool branch_taken_0x20be58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BE5Cu;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 20), 12)));
        if (branch_taken_0x20be58) {
            ctx->pc = 0x20BE6Cu;
            goto label_20be6c;
        }
    }
    ctx->pc = 0x20BE60u;
    // 0x20be60: 0x3c014049
    ctx->pc = 0x20be60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x20be64: 0x34210fdb
    ctx->pc = 0x20be64u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x20be68: 0x4481a000
    ctx->pc = 0x20be68u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_20be6c:
    // 0x20be6c: 0x6430008
    ctx->pc = 0x20BE6Cu;
    {
        const bool branch_taken_0x20be6c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x20be6c) {
            ctx->pc = 0x20BE70u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 116)));
            ctx->pc = 0x20BE90u;
            goto label_20be90;
        }
    }
    ctx->pc = 0x20BE74u;
    // 0x20be74: 0x129023
    ctx->pc = 0x20be74u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x20be78: 0x8e820014
    ctx->pc = 0x20be78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x20be7c: 0x21fc2
    ctx->pc = 0x20be7cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x20be80: 0x431021
    ctx->pc = 0x20be80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20be84: 0x21043
    ctx->pc = 0x20be84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20be88: 0x2429023
    ctx->pc = 0x20be88u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x20be8c: 0x8e830074
    ctx->pc = 0x20be8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_20be90:
    // 0x20be90: 0x8e84001c
    ctx->pc = 0x20be90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x20be94: 0x24020024
    ctx->pc = 0x20be94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
    // 0x20be98: 0x621818
    ctx->pc = 0x20be98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20be9c: 0x641821
    ctx->pc = 0x20be9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20bea0: 0x8fa40058
    ctx->pc = 0x20bea0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20bea4: 0x417c2
    ctx->pc = 0x20bea4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 31));
    // 0x20bea8: 0x821021
    ctx->pc = 0x20bea8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20beac: 0x21043
    ctx->pc = 0x20beacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20beb0: 0x8c630014
    ctx->pc = 0x20beb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x20beb4: 0x43f021
    ctx->pc = 0x20beb4u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20beb8: 0x8e8200d8
    ctx->pc = 0x20beb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x20bebc: 0x14400008
    ctx->pc = 0x20BEBCu;
    {
        const bool branch_taken_0x20bebc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20BEC0u;
        SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
        if (branch_taken_0x20bebc) {
            ctx->pc = 0x20BEE0u;
            goto label_20bee0;
        }
    }
    ctx->pc = 0x20BEC4u;
    // 0x20bec4: 0x8e8200d4
    ctx->pc = 0x20bec4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x20bec8: 0x53c20025
    ctx->pc = 0x20BEC8u;
    {
        const bool branch_taken_0x20bec8 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 2));
        if (branch_taken_0x20bec8) {
            ctx->pc = 0x20BECCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->pc = 0x20BF60u;
            goto label_20bf60;
        }
    }
    ctx->pc = 0x20BED0u;
    // 0x20bed0: 0x40f02d
    ctx->pc = 0x20bed0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bed4: 0x24020001
    ctx->pc = 0x20bed4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bed8: 0x10000020
    ctx->pc = 0x20BED8u;
    {
        const bool branch_taken_0x20bed8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BEDCu;
        WRITE32(ADD32(GPR_U32(ctx, 20), 216), GPR_U32(ctx, 2));
        if (branch_taken_0x20bed8) {
            ctx->pc = 0x20BF5Cu;
            goto label_20bf5c;
        }
    }
    ctx->pc = 0x20BEE0u;
label_20bee0:
    // 0x20bee0: 0x8e8400d8
    ctx->pc = 0x20bee0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x20bee4: 0x8ca7d384
    ctx->pc = 0x20bee4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 4294955908)));
    // 0x20bee8: 0x87102a
    ctx->pc = 0x20bee8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
    // 0x20beec: 0x10400019
    ctx->pc = 0x20BEECu;
    {
        const bool branch_taken_0x20beec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BEF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x20beec) {
            ctx->pc = 0x20BF54u;
            goto label_20bf54;
        }
    }
    ctx->pc = 0x20BEF4u;
    // 0x20bef4: 0x8c43c508
    ctx->pc = 0x20bef4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294952200)));
    // 0x20bef8: 0x831821
    ctx->pc = 0x20bef8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20befc: 0xae8300d8
    ctx->pc = 0x20befcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 216), GPR_U32(ctx, 3));
    // 0x20bf00: 0x8e8400d4
    ctx->pc = 0x20bf00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x20bf04: 0x3c41023
    ctx->pc = 0x20bf04u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x20bf08: 0x431018
    ctx->pc = 0x20bf08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20bf0c: 0x47001a
    ctx->pc = 0x20bf0cu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x20bf10: 0x1012
    ctx->pc = 0x20bf10u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x20bf14: 0x50e00001
    ctx->pc = 0x20BF14u;
    {
        const bool branch_taken_0x20bf14 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x20bf14) {
            ctx->pc = 0x20BF18u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x20BF1Cu;
            goto label_20bf1c;
        }
    }
    ctx->pc = 0x20BF1Cu;
label_20bf1c:
    // 0x20bf1c: 0x44f021
    ctx->pc = 0x20bf1cu;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20bf20: 0x44830000
    ctx->pc = 0x20bf20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x20bf24: 0x46800020
    ctx->pc = 0x20bf24u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20bf28: 0x3c014049
    ctx->pc = 0x20bf28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x20bf2c: 0x34210fdb
    ctx->pc = 0x20bf2cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x20bf30: 0x44810800
    ctx->pc = 0x20bf30u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x20bf34: 0x46010002
    ctx->pc = 0x20bf34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20bf38: 0xc4a1d384
    ctx->pc = 0x20bf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294955908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bf3c: 0x46800860
    ctx->pc = 0x20bf3cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x20bf40: 0x0
    ctx->pc = 0x20bf40u;
    // NOP
    // 0x20bf44: 0x0
    ctx->pc = 0x20bf44u;
    // NOP
    // 0x20bf48: 0x46010003
    ctx->pc = 0x20bf48u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x20bf4c: 0x10000003
    ctx->pc = 0x20BF4Cu;
    {
        const bool branch_taken_0x20bf4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BF50u;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x20bf4c) {
            ctx->pc = 0x20BF5Cu;
            goto label_20bf5c;
        }
    }
    ctx->pc = 0x20BF54u;
label_20bf54:
    // 0x20bf54: 0xae9e00d4
    ctx->pc = 0x20bf54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 212), GPR_U32(ctx, 30));
    // 0x20bf58: 0xae8000d8
    ctx->pc = 0x20bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 216), GPR_U32(ctx, 0));
label_20bf5c:
    // 0x20bf5c: 0x8e820040
    ctx->pc = 0x20bf5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20bf60:
    // 0x20bf60: 0x2421021
    ctx->pc = 0x20bf60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x20bf64: 0x44820000
    ctx->pc = 0x20bf64u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x20bf68: 0x46800020
    ctx->pc = 0x20bf68u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20bf6c: 0xe7a00020
    ctx->pc = 0x20bf6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x20bf70: 0x449e0000
    ctx->pc = 0x20bf70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 30);
    // 0x20bf74: 0x46800020
    ctx->pc = 0x20bf74u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20bf78: 0xe7a00024
    ctx->pc = 0x20bf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x20bf7c: 0x3c020032
    ctx->pc = 0x20bf7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20bf80: 0xc440f300
    ctx->pc = 0x20bf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bf84: 0xe7a00028
    ctx->pc = 0x20bf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x20bf88: 0x8e840088
    ctx->pc = 0x20bf88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x20bf8c: 0x24840030
    ctx->pc = 0x20bf8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 48));
    // 0x20bf90: 0xc0b10ec
    ctx->pc = 0x20BF90u;
    SET_GPR_U32(ctx, 31, 0x20BF98u);
    ctx->pc = 0x20BF94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2C43B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBScreenToWorld_0x2c43b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BF98u; }
    }
    if (ctx->pc != 0x20BF98u) { return; }
    ctx->pc = 0x20BF98u;
    // 0x20bf98: 0xc680003c
    ctx->pc = 0x20bf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bf9c: 0x8e820088
    ctx->pc = 0x20bf9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x20bfa0: 0xe4400040
    ctx->pc = 0x20bfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x20bfa4: 0x8e820088
    ctx->pc = 0x20bfa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x20bfa8: 0xe4400044
    ctx->pc = 0x20bfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x20bfac: 0x8e820088
    ctx->pc = 0x20bfacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x20bfb0: 0xe4400048
    ctx->pc = 0x20bfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x20bfb4: 0x8fa20040
    ctx->pc = 0x20bfb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20bfb8: 0x8c440004
    ctx->pc = 0x20bfb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20bfbc: 0x24840250
    ctx->pc = 0x20bfbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 592));
    // 0x20bfc0: 0xc0b549e
    ctx->pc = 0x20BFC0u;
    SET_GPR_U32(ctx, 31, 0x20BFC8u);
    ctx->pc = 0x20BFC4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 136)));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BFC8u; }
    }
    if (ctx->pc != 0x20BFC8u) { return; }
    ctx->pc = 0x20BFC8u;
    // 0x20bfc8: 0x4600a306
    ctx->pc = 0x20bfc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20bfcc: 0xc0b5660
    ctx->pc = 0x20BFCCu;
    SET_GPR_U32(ctx, 31, 0x20BFD4u);
    ctx->pc = 0x20BFD0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 136)));
    ctx->pc = 0x2D5980u;
    {
        const uint32_t __entryPc = ctx->pc;
        PitchMat3_0x2d5980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BFD4u; }
    }
    if (ctx->pc != 0x20BFD4u) { return; }
    ctx->pc = 0x20BFD4u;
    // 0x20bfd4: 0x2684008c
    ctx->pc = 0x20bfd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 140));
    // 0x20bfd8: 0x282d
    ctx->pc = 0x20bfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bfdc: 0xc084a96
    ctx->pc = 0x20BFDCu;
    SET_GPR_U32(ctx, 31, 0x20BFE4u);
    ctx->pc = 0x20BFE0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATree_0x212a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BFE4u; }
    }
    if (ctx->pc != 0x20BFE4u) { return; }
    ctx->pc = 0x20BFE4u;
    // 0x20bfe4: 0x8e8400e0
    ctx->pc = 0x20bfe4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_20bfe8:
    // 0x20bfe8: 0x10800009
    ctx->pc = 0x20BFE8u;
    {
        const bool branch_taken_0x20bfe8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BFECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x20bfe8) {
            ctx->pc = 0x20C010u;
            goto label_20c010;
        }
    }
    ctx->pc = 0x20BFF0u;
    // 0x20bff0: 0x8e83007c
    ctx->pc = 0x20bff0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x20bff4: 0x318c3
    ctx->pc = 0x20bff4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x20bff8: 0x62001a
    ctx->pc = 0x20bff8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x20bffc: 0x3010
    ctx->pc = 0x20bffcu;
    SET_GPR_U32(ctx, 6, ctx->hi);
    // 0x20c000: 0x50400001
    ctx->pc = 0x20C000u;
    {
        const bool branch_taken_0x20c000 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20c000) {
            ctx->pc = 0x20C004u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x20C008u;
            goto label_20c008;
        }
    }
    ctx->pc = 0x20C008u;
label_20c008:
    // 0x20c008: 0xc0b0ed6
    ctx->pc = 0x20C008u;
    SET_GPR_U32(ctx, 31, 0x20C010u);
    ctx->pc = 0x20C00Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 228)));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C010u; }
    }
    if (ctx->pc != 0x20C010u) { return; }
    ctx->pc = 0x20C010u;
label_20c010:
    // 0x20c010: 0x8e820020
    ctx->pc = 0x20c010u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x20c014: 0x3042000f
    ctx->pc = 0x20c014u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x20c018: 0x104000ff
    ctx->pc = 0x20C018u;
    {
        const bool branch_taken_0x20c018 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C01Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        if (branch_taken_0x20c018) {
            ctx->pc = 0x20C418u;
            goto label_20c418;
        }
    }
    ctx->pc = 0x20C020u;
    // 0x20c020: 0x8e820070
    ctx->pc = 0x20c020u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x20c024: 0x544000fd
    ctx->pc = 0x20C024u;
    {
        const bool branch_taken_0x20c024 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20c024) {
            ctx->pc = 0x20C028u;
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->pc = 0x20C41Cu;
            goto label_20c41c;
        }
    }
    ctx->pc = 0x20C02Cu;
    // 0x20c02c: 0x182d
    ctx->pc = 0x20c02cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c030: 0x382d
    ctx->pc = 0x20c030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c034: 0x8e840020
    ctx->pc = 0x20c034u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_20c038:
    // 0x20c038: 0xe41007
    ctx->pc = 0x20c038u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x20c03c: 0x30420001
    ctx->pc = 0x20c03cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x20c040: 0x621821
    ctx->pc = 0x20c040u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20c044: 0x24e70001
    ctx->pc = 0x20c044u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x20c048: 0x28e20004
    ctx->pc = 0x20c048u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 4));
    // 0x20c04c: 0x1440fffa
    ctx->pc = 0x20C04Cu;
    {
        const bool branch_taken_0x20c04c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20c04c) {
            ctx->pc = 0x20C038u;
            goto label_20c038;
        }
    }
    ctx->pc = 0x20C054u;
    // 0x20c054: 0x24630001
    ctx->pc = 0x20c054u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x20c058: 0x24020200
    ctx->pc = 0x20c058u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
    // 0x20c05c: 0x43001a
    ctx->pc = 0x20c05cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x20c060: 0x1012
    ctx->pc = 0x20c060u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x20c064: 0x50600001
    ctx->pc = 0x20C064u;
    {
        const bool branch_taken_0x20c064 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20c064) {
            ctx->pc = 0x20C068u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20C06Cu;
label_20c06c:
    // 0x20c06c: 0x40b82d
    ctx->pc = 0x20c06cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c070: 0x902d
    ctx->pc = 0x20c070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c074: 0x8e9e0024
    ctx->pc = 0x20c074u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x20c078: 0x3c020032
    ctx->pc = 0x20c078u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c07c: 0xc44cf304
    ctx->pc = 0x20c07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20c080: 0x3c014200
    ctx->pc = 0x20c080u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16896 << 16));
    // 0x20c084: 0x44810000
    ctx->pc = 0x20c084u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x20c088: 0x46006002
    ctx->pc = 0x20c088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x20c08c: 0x46000064
    ctx->pc = 0x20c08cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x20c090: 0x44150800
    ctx->pc = 0x20c090u;
    SET_GPR_U32(ctx, 21, *(uint32_t*)&ctx->f[1]);
    // 0x20c094: 0x3c020032
    ctx->pc = 0x20c094u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c098: 0x2443d3f0
    ctx->pc = 0x20c098u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294956016));
    // 0x20c09c: 0x9053d3f0
    ctx->pc = 0x20c09cu;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294956016)));
    // 0x20c0a0: 0x139c00
    ctx->pc = 0x20c0a0u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 19), 16));
    // 0x20c0a4: 0x90620004
    ctx->pc = 0x20c0a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20c0a8: 0x21200
    ctx->pc = 0x20c0a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x20c0ac: 0x2629825
    ctx->pc = 0x20c0acu;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x20c0b0: 0x90620008
    ctx->pc = 0x20c0b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20c0b4: 0x2629825
    ctx->pc = 0x20c0b4u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x20c0b8: 0x8e820020
    ctx->pc = 0x20c0b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x20c0bc: 0x30420001
    ctx->pc = 0x20c0bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x20c0c0: 0x1040002f
    ctx->pc = 0x20C0C0u;
    {
        const bool branch_taken_0x20c0c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C0C4u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20c0c0) {
            ctx->pc = 0x20C180u;
            goto label_20c180;
        }
    }
    ctx->pc = 0x20C0C8u;
    // 0x20c0c8: 0x3c020032
    ctx->pc = 0x20c0c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c0cc: 0x8c43d38c
    ctx->pc = 0x20c0ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955916)));
    // 0x20c0d0: 0x1060000a
    ctx->pc = 0x20C0D0u;
    {
        const bool branch_taken_0x20c0d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C0D4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20c0d0) {
            ctx->pc = 0x20C0FCu;
            goto label_20c0fc;
        }
    }
    ctx->pc = 0x20C0D8u;
    // 0x20c0d8: 0x2432021
    ctx->pc = 0x20c0d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20c0dc: 0x3c020032
    ctx->pc = 0x20c0dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c0e0: 0x42023
    ctx->pc = 0x20c0e0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x20c0e4: 0x3c32821
    ctx->pc = 0x20c0e4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x20c0e8: 0x8c46d36c
    ctx->pc = 0x20c0e8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20c0ec: 0x382d
    ctx->pc = 0x20c0ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c0f0: 0x3c08003a
    ctx->pc = 0x20c0f0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x20c0f4: 0xc080510
    ctx->pc = 0x20C0F4u;
    SET_GPR_U32(ctx, 31, 0x20C0FCu);
    ctx->pc = 0x20C0F8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 21392));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C0FCu; }
    }
    if (ctx->pc != 0x20C0FCu) { return; }
    ctx->pc = 0x20C0FCu;
label_20c0fc:
    // 0x20c0fc: 0x3c020032
    ctx->pc = 0x20c0fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c100: 0x3c030032
    ctx->pc = 0x20c100u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20c104: 0x122023
    ctx->pc = 0x20c104u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x20c108: 0x3c0282d
    ctx->pc = 0x20c108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c10c: 0x8c46d36c
    ctx->pc = 0x20c10cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20c110: 0x260382d
    ctx->pc = 0x20c110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c114: 0xc46cf304
    ctx->pc = 0x20c114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20c118: 0x3c08003a
    ctx->pc = 0x20c118u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x20c11c: 0xc080510
    ctx->pc = 0x20C11Cu;
    SET_GPR_U32(ctx, 31, 0x20C124u);
    ctx->pc = 0x20C120u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 21392));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C124u; }
    }
    if (ctx->pc != 0x20C124u) { return; }
    ctx->pc = 0x20C124u;
    // 0x20c124: 0x40882d
    ctx->pc = 0x20c124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c128: 0x8fa2004c
    ctx->pc = 0x20c128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x20c12c: 0x54400001
    ctx->pc = 0x20C12Cu;
    {
        const bool branch_taken_0x20c12c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20c12c) {
            ctx->pc = 0x20C130u;
            WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 2));
            ctx->pc = 0x20C134u;
            goto label_20c134;
        }
    }
    ctx->pc = 0x20C134u;
label_20c134:
    // 0x20c134: 0x3c020032
    ctx->pc = 0x20c134u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c138: 0x3c030032
    ctx->pc = 0x20c138u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20c13c: 0x3c04003a
    ctx->pc = 0x20c13cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x20c140: 0x24845390
    ctx->pc = 0x20c140u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21392));
    // 0x20c144: 0x8c45d36c
    ctx->pc = 0x20c144u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20c148: 0xc080552
    ctx->pc = 0x20C148u;
    SET_GPR_U32(ctx, 31, 0x20C150u);
    ctx->pc = 0x20C14Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C150u; }
    }
    if (ctx->pc != 0x20C150u) { return; }
    ctx->pc = 0x20C150u;
    // 0x20c150: 0x21fc2
    ctx->pc = 0x20c150u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x20c154: 0x621821
    ctx->pc = 0x20c154u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20c158: 0x31843
    ctx->pc = 0x20c158u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x20c15c: 0x2438023
    ctx->pc = 0x20c15cu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20c160: 0x2158023
    ctx->pc = 0x20c160u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x20c164: 0x3c020038
    ctx->pc = 0x20c164u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x20c168: 0x8c44b150
    ctx->pc = 0x20c168u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947152)));
    // 0x20c16c: 0x2605fffc
    ctx->pc = 0x20c16cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x20c170: 0x3c0302d
    ctx->pc = 0x20c170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c174: 0x2a0382d
    ctx->pc = 0x20c174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c178: 0xc0b0c6a
    ctx->pc = 0x20C178u;
    SET_GPR_U32(ctx, 31, 0x20C180u);
    ctx->pc = 0x20C17Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C180u; }
    }
    if (ctx->pc != 0x20C180u) { return; }
    ctx->pc = 0x20C180u;
label_20c180:
    // 0x20c180: 0x8e820020
    ctx->pc = 0x20c180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x20c184: 0x30420004
    ctx->pc = 0x20c184u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x20c188: 0x10400038
    ctx->pc = 0x20C188u;
    {
        const bool branch_taken_0x20c188 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C18Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x20c188) {
            ctx->pc = 0x20C26Cu;
            goto label_20c26c;
        }
    }
    ctx->pc = 0x20C190u;
    // 0x20c190: 0x8c45d38c
    ctx->pc = 0x20c190u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294955916)));
    // 0x20c194: 0x10a0000c
    ctx->pc = 0x20C194u;
    {
        const bool branch_taken_0x20c194 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C198u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        if (branch_taken_0x20c194) {
            ctx->pc = 0x20C1C8u;
            goto label_20c1c8;
        }
    }
    ctx->pc = 0x20C19Cu;
    // 0x20c19c: 0x2452021
    ctx->pc = 0x20c19cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x20c1a0: 0x3c020032
    ctx->pc = 0x20c1a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c1a4: 0x3c030032
    ctx->pc = 0x20c1a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20c1a8: 0x42023
    ctx->pc = 0x20c1a8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x20c1ac: 0x3c52821
    ctx->pc = 0x20c1acu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
    // 0x20c1b0: 0x8c46d36c
    ctx->pc = 0x20c1b0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20c1b4: 0x382d
    ctx->pc = 0x20c1b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c1b8: 0xc46cf304
    ctx->pc = 0x20c1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20c1bc: 0x3c08003a
    ctx->pc = 0x20c1bcu;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x20c1c0: 0xc080510
    ctx->pc = 0x20C1C0u;
    SET_GPR_U32(ctx, 31, 0x20C1C8u);
    ctx->pc = 0x20C1C4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 21400));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C1C8u; }
    }
    if (ctx->pc != 0x20C1C8u) { return; }
    ctx->pc = 0x20C1C8u;
label_20c1c8:
    // 0x20c1c8: 0x3c020032
    ctx->pc = 0x20c1c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c1cc: 0x3c030032
    ctx->pc = 0x20c1ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20c1d0: 0x122023
    ctx->pc = 0x20c1d0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x20c1d4: 0x3c0282d
    ctx->pc = 0x20c1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c1d8: 0x8c46d36c
    ctx->pc = 0x20c1d8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20c1dc: 0x260382d
    ctx->pc = 0x20c1dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c1e0: 0xc46cf304
    ctx->pc = 0x20c1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20c1e4: 0x3c08003a
    ctx->pc = 0x20c1e4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x20c1e8: 0xc080510
    ctx->pc = 0x20C1E8u;
    SET_GPR_U32(ctx, 31, 0x20C1F0u);
    ctx->pc = 0x20C1ECu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 21400));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C1F0u; }
    }
    if (ctx->pc != 0x20C1F0u) { return; }
    ctx->pc = 0x20C1F0u;
    // 0x20c1f0: 0x8fa3004c
    ctx->pc = 0x20c1f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x20c1f4: 0x10600002
    ctx->pc = 0x20C1F4u;
    {
        const bool branch_taken_0x20c1f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C1F8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20c1f4) {
            ctx->pc = 0x20C200u;
            goto label_20c200;
        }
    }
    ctx->pc = 0x20C1FCu;
    // 0x20c1fc: 0xa6230026
    ctx->pc = 0x20c1fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 3));
label_20c200:
    // 0x20c200: 0x3c020032
    ctx->pc = 0x20c200u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c204: 0x3c030032
    ctx->pc = 0x20c204u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20c208: 0x3c04003a
    ctx->pc = 0x20c208u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x20c20c: 0x24845398
    ctx->pc = 0x20c20cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21400));
    // 0x20c210: 0x8c45d36c
    ctx->pc = 0x20c210u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20c214: 0xc080552
    ctx->pc = 0x20C214u;
    SET_GPR_U32(ctx, 31, 0x20C21Cu);
    ctx->pc = 0x20C218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C21Cu; }
    }
    if (ctx->pc != 0x20C21Cu) { return; }
    ctx->pc = 0x20C21Cu;
    // 0x20c21c: 0x21fc2
    ctx->pc = 0x20c21cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x20c220: 0x621821
    ctx->pc = 0x20c220u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20c224: 0x31843
    ctx->pc = 0x20c224u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x20c228: 0x2438023
    ctx->pc = 0x20c228u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20c22c: 0x2158023
    ctx->pc = 0x20c22cu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x20c230: 0x2610fffc
    ctx->pc = 0x20c230u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x20c234: 0x3c020038
    ctx->pc = 0x20c234u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x20c238: 0x8c44b144
    ctx->pc = 0x20c238u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947140)));
    // 0x20c23c: 0x2152823
    ctx->pc = 0x20c23cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x20c240: 0x3c0302d
    ctx->pc = 0x20c240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c244: 0x2a0382d
    ctx->pc = 0x20c244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c248: 0xc0b0c6a
    ctx->pc = 0x20C248u;
    SET_GPR_U32(ctx, 31, 0x20C250u);
    ctx->pc = 0x20C24Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C250u; }
    }
    if (ctx->pc != 0x20C250u) { return; }
    ctx->pc = 0x20C250u;
    // 0x20c250: 0x3c020038
    ctx->pc = 0x20c250u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x20c254: 0x8c44b140
    ctx->pc = 0x20c254u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947136)));
    // 0x20c258: 0x200282d
    ctx->pc = 0x20c258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c25c: 0x3c0302d
    ctx->pc = 0x20c25cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c260: 0x2a0382d
    ctx->pc = 0x20c260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c264: 0xc0b0c6a
    ctx->pc = 0x20C264u;
    SET_GPR_U32(ctx, 31, 0x20C26Cu);
    ctx->pc = 0x20C268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C26Cu; }
    }
    if (ctx->pc != 0x20C26Cu) { return; }
    ctx->pc = 0x20C26Cu;
label_20c26c:
    // 0x20c26c: 0x8e830020
    ctx->pc = 0x20c26cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x20c270: 0x30620002
    ctx->pc = 0x20c270u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
    // 0x20c274: 0x10400035
    ctx->pc = 0x20C274u;
    {
        const bool branch_taken_0x20c274 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C278u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 258));
        if (branch_taken_0x20c274) {
            ctx->pc = 0x20C34Cu;
            goto label_20c34c;
        }
    }
    ctx->pc = 0x20C27Cu;
    // 0x20c27c: 0x24020102
    ctx->pc = 0x20c27cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 258));
    // 0x20c280: 0x14620004
    ctx->pc = 0x20C280u;
    {
        const bool branch_taken_0x20c280 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20C284u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x20c280) {
            ctx->pc = 0x20C294u;
            goto label_20c294;
        }
    }
    ctx->pc = 0x20C288u;
    // 0x20c288: 0x3c02003a
    ctx->pc = 0x20c288u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x20c28c: 0x10000002
    ctx->pc = 0x20C28Cu;
    {
        const bool branch_taken_0x20c28c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C290u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 21408));
        if (branch_taken_0x20c28c) {
            ctx->pc = 0x20C298u;
            goto label_20c298;
        }
    }
    ctx->pc = 0x20C294u;
label_20c294:
    // 0x20c294: 0x245053a8
    ctx->pc = 0x20c294u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 21416));
label_20c298:
    // 0x20c298: 0x3c020032
    ctx->pc = 0x20c298u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c29c: 0x8c45d38c
    ctx->pc = 0x20c29cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294955916)));
    // 0x20c2a0: 0x10a0000b
    ctx->pc = 0x20C2A0u;
    {
        const bool branch_taken_0x20c2a0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C2A4u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        if (branch_taken_0x20c2a0) {
            ctx->pc = 0x20C2D0u;
            goto label_20c2d0;
        }
    }
    ctx->pc = 0x20C2A8u;
    // 0x20c2a8: 0x2452021
    ctx->pc = 0x20c2a8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x20c2ac: 0x3c020032
    ctx->pc = 0x20c2acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c2b0: 0x3c030032
    ctx->pc = 0x20c2b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20c2b4: 0x42023
    ctx->pc = 0x20c2b4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x20c2b8: 0x3c52821
    ctx->pc = 0x20c2b8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
    // 0x20c2bc: 0x8c46d36c
    ctx->pc = 0x20c2bcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20c2c0: 0x382d
    ctx->pc = 0x20c2c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c2c4: 0xc46cf304
    ctx->pc = 0x20c2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20c2c8: 0xc080510
    ctx->pc = 0x20C2C8u;
    SET_GPR_U32(ctx, 31, 0x20C2D0u);
    ctx->pc = 0x20C2CCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C2D0u; }
    }
    if (ctx->pc != 0x20C2D0u) { return; }
    ctx->pc = 0x20C2D0u;
label_20c2d0:
    // 0x20c2d0: 0x3c020032
    ctx->pc = 0x20c2d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c2d4: 0x3c030032
    ctx->pc = 0x20c2d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20c2d8: 0x122023
    ctx->pc = 0x20c2d8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x20c2dc: 0x3c0282d
    ctx->pc = 0x20c2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c2e0: 0x8c46d36c
    ctx->pc = 0x20c2e0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20c2e4: 0x260382d
    ctx->pc = 0x20c2e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c2e8: 0xc46cf304
    ctx->pc = 0x20c2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20c2ec: 0xc080510
    ctx->pc = 0x20C2ECu;
    SET_GPR_U32(ctx, 31, 0x20C2F4u);
    ctx->pc = 0x20C2F0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C2F4u; }
    }
    if (ctx->pc != 0x20C2F4u) { return; }
    ctx->pc = 0x20C2F4u;
    // 0x20c2f4: 0x8fa4004c
    ctx->pc = 0x20c2f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x20c2f8: 0x10800002
    ctx->pc = 0x20C2F8u;
    {
        const bool branch_taken_0x20c2f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C2FCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20c2f8) {
            ctx->pc = 0x20C304u;
            goto label_20c304;
        }
    }
    ctx->pc = 0x20C300u;
    // 0x20c300: 0xa6240026
    ctx->pc = 0x20c300u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 4));
label_20c304:
    // 0x20c304: 0x3c020032
    ctx->pc = 0x20c304u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c308: 0x3c030032
    ctx->pc = 0x20c308u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20c30c: 0x200202d
    ctx->pc = 0x20c30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c310: 0x8c45d36c
    ctx->pc = 0x20c310u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20c314: 0xc080552
    ctx->pc = 0x20C314u;
    SET_GPR_U32(ctx, 31, 0x20C31Cu);
    ctx->pc = 0x20C318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C31Cu; }
    }
    if (ctx->pc != 0x20C31Cu) { return; }
    ctx->pc = 0x20C31Cu;
    // 0x20c31c: 0x21fc2
    ctx->pc = 0x20c31cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x20c320: 0x621821
    ctx->pc = 0x20c320u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20c324: 0x31843
    ctx->pc = 0x20c324u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x20c328: 0x2438023
    ctx->pc = 0x20c328u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20c32c: 0x2158023
    ctx->pc = 0x20c32cu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x20c330: 0x3c020038
    ctx->pc = 0x20c330u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x20c334: 0x8c44b154
    ctx->pc = 0x20c334u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947156)));
    // 0x20c338: 0x2605fffc
    ctx->pc = 0x20c338u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x20c33c: 0x3c0302d
    ctx->pc = 0x20c33cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c340: 0x2a0382d
    ctx->pc = 0x20c340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c344: 0xc0b0c6a
    ctx->pc = 0x20C344u;
    SET_GPR_U32(ctx, 31, 0x20C34Cu);
    ctx->pc = 0x20C348u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C34Cu; }
    }
    if (ctx->pc != 0x20C34Cu) { return; }
    ctx->pc = 0x20C34Cu;
label_20c34c:
    // 0x20c34c: 0x8e820020
    ctx->pc = 0x20c34cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x20c350: 0x30420008
    ctx->pc = 0x20c350u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x20c354: 0x1040002f
    ctx->pc = 0x20C354u;
    {
        const bool branch_taken_0x20c354 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C358u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x20c354) {
            ctx->pc = 0x20C414u;
            goto label_20c414;
        }
    }
    ctx->pc = 0x20C35Cu;
    // 0x20c35c: 0x245053b0
    ctx->pc = 0x20c35cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 21424));
    // 0x20c360: 0x3c020032
    ctx->pc = 0x20c360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c364: 0x8c45d38c
    ctx->pc = 0x20c364u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294955916)));
    // 0x20c368: 0x10a0000b
    ctx->pc = 0x20C368u;
    {
        const bool branch_taken_0x20c368 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C36Cu;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        if (branch_taken_0x20c368) {
            ctx->pc = 0x20C398u;
            goto label_20c398;
        }
    }
    ctx->pc = 0x20C370u;
    // 0x20c370: 0x2452021
    ctx->pc = 0x20c370u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x20c374: 0x3c020032
    ctx->pc = 0x20c374u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c378: 0x3c030032
    ctx->pc = 0x20c378u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20c37c: 0x42023
    ctx->pc = 0x20c37cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x20c380: 0x3c52821
    ctx->pc = 0x20c380u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
    // 0x20c384: 0x8c46d36c
    ctx->pc = 0x20c384u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20c388: 0x382d
    ctx->pc = 0x20c388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c38c: 0xc46cf304
    ctx->pc = 0x20c38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20c390: 0xc080510
    ctx->pc = 0x20C390u;
    SET_GPR_U32(ctx, 31, 0x20C398u);
    ctx->pc = 0x20C394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C398u; }
    }
    if (ctx->pc != 0x20C398u) { return; }
    ctx->pc = 0x20C398u;
label_20c398:
    // 0x20c398: 0x3c020032
    ctx->pc = 0x20c398u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c39c: 0x3c030032
    ctx->pc = 0x20c39cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20c3a0: 0x122023
    ctx->pc = 0x20c3a0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x20c3a4: 0x3c0282d
    ctx->pc = 0x20c3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c3a8: 0x8c46d36c
    ctx->pc = 0x20c3a8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20c3ac: 0x260382d
    ctx->pc = 0x20c3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c3b0: 0xc46cf304
    ctx->pc = 0x20c3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20c3b4: 0xc080510
    ctx->pc = 0x20C3B4u;
    SET_GPR_U32(ctx, 31, 0x20C3BCu);
    ctx->pc = 0x20C3B8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3BCu; }
    }
    if (ctx->pc != 0x20C3BCu) { return; }
    ctx->pc = 0x20C3BCu;
    // 0x20c3bc: 0x40882d
    ctx->pc = 0x20c3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c3c0: 0x8fa2004c
    ctx->pc = 0x20c3c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x20c3c4: 0x54400001
    ctx->pc = 0x20C3C4u;
    {
        const bool branch_taken_0x20c3c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20c3c4) {
            ctx->pc = 0x20C3C8u;
            WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 2));
            ctx->pc = 0x20C3CCu;
            goto label_20c3cc;
        }
    }
    ctx->pc = 0x20C3CCu;
label_20c3cc:
    // 0x20c3cc: 0x3c020032
    ctx->pc = 0x20c3ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c3d0: 0x3c030032
    ctx->pc = 0x20c3d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20c3d4: 0x200202d
    ctx->pc = 0x20c3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c3d8: 0x8c45d36c
    ctx->pc = 0x20c3d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20c3dc: 0xc080552
    ctx->pc = 0x20C3DCu;
    SET_GPR_U32(ctx, 31, 0x20C3E4u);
    ctx->pc = 0x20C3E0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3E4u; }
    }
    if (ctx->pc != 0x20C3E4u) { return; }
    ctx->pc = 0x20C3E4u;
    // 0x20c3e4: 0x21fc2
    ctx->pc = 0x20c3e4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x20c3e8: 0x621821
    ctx->pc = 0x20c3e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20c3ec: 0x31843
    ctx->pc = 0x20c3ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x20c3f0: 0x2438023
    ctx->pc = 0x20c3f0u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20c3f4: 0x2158023
    ctx->pc = 0x20c3f4u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x20c3f8: 0x3c020038
    ctx->pc = 0x20c3f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x20c3fc: 0x8c44b148
    ctx->pc = 0x20c3fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947144)));
    // 0x20c400: 0x2605fffc
    ctx->pc = 0x20c400u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x20c404: 0x3c0302d
    ctx->pc = 0x20c404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c408: 0x2a0382d
    ctx->pc = 0x20c408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c40c: 0xc0b0c6a
    ctx->pc = 0x20C40Cu;
    SET_GPR_U32(ctx, 31, 0x20C414u);
    ctx->pc = 0x20C410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C414u; }
    }
    if (ctx->pc != 0x20C414u) { return; }
    ctx->pc = 0x20C414u;
label_20c414:
    // 0x20c414: 0xdfbf0100
    ctx->pc = 0x20c414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_20c418:
    // 0x20c418: 0xdfbe00f0
    ctx->pc = 0x20c418u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_20c41c:
    // 0x20c41c: 0xdfb700e0
    ctx->pc = 0x20c41cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x20c420: 0xdfb600d0
    ctx->pc = 0x20c420u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20c424: 0xdfb500c0
    ctx->pc = 0x20c424u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20c428: 0xdfb400b0
    ctx->pc = 0x20c428u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20c42c: 0xdfb300a0
    ctx->pc = 0x20c42cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20c430: 0xdfb20090
    ctx->pc = 0x20c430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20c434: 0xdfb10080
    ctx->pc = 0x20c434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20c438: 0xdfb00070
    ctx->pc = 0x20c438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20c43c: 0xc7b40110
    ctx->pc = 0x20c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20c440: 0x3e00008
    ctx->pc = 0x20C440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C444u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B660u: goto label_20b660;
            case 0x20B678u: goto label_20b678;
            case 0x20B68Cu: goto label_20b68c;
            case 0x20B6A8u: goto label_20b6a8;
            case 0x20B6E8u: goto label_20b6e8;
            case 0x20B6F0u: goto label_20b6f0;
            case 0x20B724u: goto label_20b724;
            case 0x20B72Cu: goto label_20b72c;
            case 0x20B734u: goto label_20b734;
            case 0x20B768u: goto label_20b768;
            case 0x20B770u: goto label_20b770;
            case 0x20B784u: goto label_20b784;
            case 0x20B798u: goto label_20b798;
            case 0x20B7ACu: goto label_20b7ac;
            case 0x20B7B0u: goto label_20b7b0;
            case 0x20B818u: goto label_20b818;
            case 0x20B868u: goto label_20b868;
            case 0x20B86Cu: goto label_20b86c;
            case 0x20B8B0u: goto label_20b8b0;
            case 0x20B8FCu: goto label_20b8fc;
            case 0x20B948u: goto label_20b948;
            case 0x20B960u: goto label_20b960;
            case 0x20B978u: goto label_20b978;
            case 0x20B9ACu: goto label_20b9ac;
            case 0x20B9F0u: goto label_20b9f0;
            case 0x20BA20u: goto label_20ba20;
            case 0x20BA40u: goto label_20ba40;
            case 0x20BA80u: goto label_20ba80;
            case 0x20BAA0u: goto label_20baa0;
            case 0x20BAA4u: goto label_20baa4;
            case 0x20BB00u: goto label_20bb00;
            case 0x20BB08u: goto label_20bb08;
            case 0x20BB0Cu: goto label_20bb0c;
            case 0x20BB38u: goto label_20bb38;
            case 0x20BB60u: goto label_20bb60;
            case 0x20BB68u: goto label_20bb68;
            case 0x20BB88u: goto label_20bb88;
            case 0x20BB8Cu: goto label_20bb8c;
            case 0x20BB9Cu: goto label_20bb9c;
            case 0x20BBACu: goto label_20bbac;
            case 0x20BBBCu: goto label_20bbbc;
            case 0x20BBCCu: goto label_20bbcc;
            case 0x20BBE4u: goto label_20bbe4;
            case 0x20BC30u: goto label_20bc30;
            case 0x20BC6Cu: goto label_20bc6c;
            case 0x20BC70u: goto label_20bc70;
            case 0x20BC90u: goto label_20bc90;
            case 0x20BC98u: goto label_20bc98;
            case 0x20BD00u: goto label_20bd00;
            case 0x20BD08u: goto label_20bd08;
            case 0x20BD0Cu: goto label_20bd0c;
            case 0x20BD44u: goto label_20bd44;
            case 0x20BD48u: goto label_20bd48;
            case 0x20BD60u: goto label_20bd60;
            case 0x20BD74u: goto label_20bd74;
            case 0x20BD88u: goto label_20bd88;
            case 0x20BE40u: goto label_20be40;
            case 0x20BE44u: goto label_20be44;
            case 0x20BE6Cu: goto label_20be6c;
            case 0x20BE90u: goto label_20be90;
            case 0x20BEE0u: goto label_20bee0;
            case 0x20BF1Cu: goto label_20bf1c;
            case 0x20BF54u: goto label_20bf54;
            case 0x20BF5Cu: goto label_20bf5c;
            case 0x20BF60u: goto label_20bf60;
            case 0x20BFE8u: goto label_20bfe8;
            case 0x20C008u: goto label_20c008;
            case 0x20C010u: goto label_20c010;
            case 0x20C038u: goto label_20c038;
            case 0x20C06Cu: goto label_20c06c;
            case 0x20C0FCu: goto label_20c0fc;
            case 0x20C134u: goto label_20c134;
            case 0x20C180u: goto label_20c180;
            case 0x20C1C8u: goto label_20c1c8;
            case 0x20C200u: goto label_20c200;
            case 0x20C26Cu: goto label_20c26c;
            case 0x20C294u: goto label_20c294;
            case 0x20C298u: goto label_20c298;
            case 0x20C2D0u: goto label_20c2d0;
            case 0x20C304u: goto label_20c304;
            case 0x20C34Cu: goto label_20c34c;
            case 0x20C398u: goto label_20c398;
            case 0x20C3CCu: goto label_20c3cc;
            case 0x20C414u: goto label_20c414;
            case 0x20C418u: goto label_20c418;
            case 0x20C41Cu: goto label_20c41c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C448u;
}
