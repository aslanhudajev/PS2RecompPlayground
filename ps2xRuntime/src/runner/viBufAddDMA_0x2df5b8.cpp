#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufAddDMA
// Address: 0x2df5b8 - 0x2df7d8
void viBufAddDMA_0x2df5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2df5b8u;

    // 0x2df5b8: 0x27bdff70
    ctx->pc = 0x2df5b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2df5bc: 0xffbf0080
    ctx->pc = 0x2df5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2df5c0: 0xffb70070
    ctx->pc = 0x2df5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2df5c4: 0xffb60060
    ctx->pc = 0x2df5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2df5c8: 0xffb50050
    ctx->pc = 0x2df5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2df5cc: 0xffb40040
    ctx->pc = 0x2df5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2df5d0: 0xffb30030
    ctx->pc = 0x2df5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2df5d4: 0xffb20020
    ctx->pc = 0x2df5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2df5d8: 0xffb10010
    ctx->pc = 0x2df5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2df5dc: 0xffb00000
    ctx->pc = 0x2df5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2df5e0: 0x80902d
    ctx->pc = 0x2df5e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df5e4: 0xb82d
    ctx->pc = 0x2df5e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df5e8: 0xc0c0d88
    ctx->pc = 0x2DF5E8u;
    SET_GPR_U32(ctx, 31, 0x2DF5F0u);
    ctx->pc = 0x2DF5ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->pc = 0x303620u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x303620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF5F0u; }
    }
    if (ctx->pc != 0x2DF5F0u) { return; }
    ctx->pc = 0x2DF5F0u;
    // 0x2df5f0: 0x8e420044
    ctx->pc = 0x2df5f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2df5f4: 0x14400005
    ctx->pc = 0x2DF5F4u;
    {
        const bool branch_taken_0x2df5f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DF5F8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2df5f4) {
            ctx->pc = 0x2DF60Cu;
            goto label_2df60c;
        }
    }
    ctx->pc = 0x2DF5FCu;
    // 0x2df5fc: 0xc0b75d2
    ctx->pc = 0x2DF5FCu;
    SET_GPR_U32(ctx, 31, 0x2DF604u);
    ctx->pc = 0x2DF600u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937416));
    ctx->pc = 0x2DD748u;
    {
        const uint32_t __entryPc = ctx->pc;
        ErrMessage_0x2dd748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF604u; }
    }
    if (ctx->pc != 0x2DF604u) { return; }
    ctx->pc = 0x2DF604u;
    // 0x2df604: 0x10000069
    ctx->pc = 0x2DF604u;
    {
        const bool branch_taken_0x2df604 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DF608u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2df604) {
            ctx->pc = 0x2DF7ACu;
            goto label_2df7ac;
        }
    }
    ctx->pc = 0x2DF60Cu;
label_2df60c:
    // 0x2df60c: 0xc0b7c80
    ctx->pc = 0x2DF60Cu;
    SET_GPR_U32(ctx, 31, 0x2DF614u);
    ctx->pc = 0x2DF610u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x2DF200u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x2df200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF614u; }
    }
    if (ctx->pc != 0x2DF614u) { return; }
    ctx->pc = 0x2DF614u;
    // 0x2df614: 0x3c021000
    ctx->pc = 0x2df614u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2df618: 0x3442b400
    ctx->pc = 0x2df618u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46080));
    // 0x2df61c: 0x8c550000
    ctx->pc = 0x2df61cu;
    SET_GPR_U32(ctx, 21, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2df620: 0x3c021000
    ctx->pc = 0x2df620u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2df624: 0x3442b410
    ctx->pc = 0x2df624u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46096));
    // 0x2df628: 0x240202d
    ctx->pc = 0x2df628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df62c: 0x8c450000
    ctx->pc = 0x2df62cu;
    SET_GPR_U32(ctx, 5, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2df630: 0xc0b7c54
    ctx->pc = 0x2DF630u;
    SET_GPR_U32(ctx, 31, 0x2DF638u);
    ctx->pc = 0x2DF150u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFIFOindex_0x2df150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF638u; }
    }
    if (ctx->pc != 0x2DF638u) { return; }
    ctx->pc = 0x2DF638u;
    // 0x2df638: 0x8e460008
    ctx->pc = 0x2df638u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2df63c: 0x461021
    ctx->pc = 0x2df63cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2df640: 0x8e43000c
    ctx->pc = 0x2df640u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2df644: 0x431023
    ctx->pc = 0x2df644u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df648: 0x46001a
    ctx->pc = 0x2df648u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2df64c: 0x2010
    ctx->pc = 0x2df64cu;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x2df650: 0x50c00001
    ctx->pc = 0x2DF650u;
    {
        const bool branch_taken_0x2df650 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x2df650) {
            ctx->pc = 0x2DF654u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DF658u;
            goto label_2df658;
        }
    }
    ctx->pc = 0x2DF658u;
label_2df658:
    // 0x2df658: 0x831821
    ctx->pc = 0x2df658u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2df65c: 0x66001a
    ctx->pc = 0x2df65cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2df660: 0x3810
    ctx->pc = 0x2df660u;
    SET_GPR_U32(ctx, 7, ctx->hi);
    // 0x2df664: 0x50c00001
    ctx->pc = 0x2DF664u;
    {
        const bool branch_taken_0x2df664 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x2df664) {
            ctx->pc = 0x2DF668u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DF66Cu;
            goto label_2df66c;
        }
    }
    ctx->pc = 0x2DF66Cu;
label_2df66c:
    // 0x2df66c: 0xae47000c
    ctx->pc = 0x2df66cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 7));
    // 0x2df670: 0x8e420010
    ctx->pc = 0x2df670u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2df674: 0x442823
    ctx->pc = 0x2df674u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2df678: 0xae450010
    ctx->pc = 0x2df678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 5));
    // 0x2df67c: 0xe58021
    ctx->pc = 0x2df67cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2df680: 0x206001a
    ctx->pc = 0x2df680u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2df684: 0x1010
    ctx->pc = 0x2df684u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x2df688: 0x50c00001
    ctx->pc = 0x2DF688u;
    {
        const bool branch_taken_0x2df688 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x2df688) {
            ctx->pc = 0x2DF68Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DF690u;
            goto label_2df690;
        }
    }
    ctx->pc = 0x2DF690u;
label_2df690:
    // 0x2df690: 0x40802d
    ctx->pc = 0x2df690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df694: 0x8e440014
    ctx->pc = 0x2df694u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2df698: 0x248307ff
    ctx->pc = 0x2df698u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2047));
    // 0x2df69c: 0x2402ffff
    ctx->pc = 0x2df69cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2df6a0: 0x44102a
    ctx->pc = 0x2df6a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2df6a4: 0x82180b
    ctx->pc = 0x2df6a4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x2df6a8: 0x39ac3
    ctx->pc = 0x2df6a8u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 11));
    // 0x2df6ac: 0x1312c0
    ctx->pc = 0x2df6acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 11));
    // 0x2df6b0: 0x822023
    ctx->pc = 0x2df6b0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2df6b4: 0x1a600012
    ctx->pc = 0x2DF6B4u;
    {
        const bool branch_taken_0x2df6b4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2DF6B8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
        if (branch_taken_0x2df6b4) {
            ctx->pc = 0x2DF700u;
            goto label_2df700;
        }
    }
    ctx->pc = 0x2DF6BCu;
    // 0x2df6bc: 0xe51021
    ctx->pc = 0x2df6bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2df6c0: 0x24c3ffff
    ctx->pc = 0x2df6c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2df6c4: 0x431021
    ctx->pc = 0x2df6c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df6c8: 0x46001a
    ctx->pc = 0x2df6c8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2df6cc: 0x2810
    ctx->pc = 0x2df6ccu;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x2df6d0: 0x50c00001
    ctx->pc = 0x2DF6D0u;
    {
        const bool branch_taken_0x2df6d0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x2df6d0) {
            ctx->pc = 0x2DF6D4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DF6D8u;
            goto label_2df6d8;
        }
    }
    ctx->pc = 0x2DF6D8u;
label_2df6d8:
    // 0x2df6d8: 0x51900
    ctx->pc = 0x2df6d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
    // 0x2df6dc: 0x8e440004
    ctx->pc = 0x2df6dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2df6e0: 0x52ac0
    ctx->pc = 0x2df6e0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 11));
    // 0x2df6e4: 0x8e420000
    ctx->pc = 0x2df6e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2df6e8: 0x642021
    ctx->pc = 0x2df6e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2df6ec: 0xa22821
    ctx->pc = 0x2df6ecu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2df6f0: 0x24060003
    ctx->pc = 0x2df6f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2df6f4: 0xc0b7c9c
    ctx->pc = 0x2DF6F4u;
    SET_GPR_U32(ctx, 31, 0x2DF6FCu);
    ctx->pc = 0x2DF6F8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x2DF270u;
    {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x2df270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF6FCu; }
    }
    if (ctx->pc != 0x2DF6FCu) { return; }
    ctx->pc = 0x2DF6FCu;
    // 0x2df6fc: 0x24170001
    ctx->pc = 0x2df6fcu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
label_2df700:
    // 0x2df700: 0x200882d
    ctx->pc = 0x2df700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df704: 0x1a60001a
    ctx->pc = 0x2DF704u;
    {
        const bool branch_taken_0x2df704 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2DF708u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2df704) {
            ctx->pc = 0x2DF770u;
            goto label_2df770;
        }
    }
    ctx->pc = 0x2DF70Cu;
    // 0x2df70c: 0x2674ffff
    ctx->pc = 0x2df70cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2df710: 0x24160003
    ctx->pc = 0x2df710u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2df714: 0x0
    ctx->pc = 0x2df714u;
    // NOP
label_2df718:
    // 0x2df718: 0x2143026
    ctx->pc = 0x2df718u;
    SET_GPR_U32(ctx, 6, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2df71c: 0x111900
    ctx->pc = 0x2df71cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 4));
    // 0x2df720: 0x8e440004
    ctx->pc = 0x2df720u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2df724: 0x1112c0
    ctx->pc = 0x2df724u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 11));
    // 0x2df728: 0x8e450000
    ctx->pc = 0x2df728u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2df72c: 0x642021
    ctx->pc = 0x2df72cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2df730: 0x452821
    ctx->pc = 0x2df730u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2df734: 0x2c0102d
    ctx->pc = 0x2df734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df738: 0x6100a
    ctx->pc = 0x2df738u;
    if (GPR_U32(ctx, 6) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x2df73c: 0x40302d
    ctx->pc = 0x2df73cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df740: 0xc0b7c9c
    ctx->pc = 0x2DF740u;
    SET_GPR_U32(ctx, 31, 0x2DF748u);
    ctx->pc = 0x2DF744u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x2DF270u;
    {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x2df270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF748u; }
    }
    if (ctx->pc != 0x2DF748u) { return; }
    ctx->pc = 0x2DF748u;
    // 0x2df748: 0x26230001
    ctx->pc = 0x2df748u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2df74c: 0x8e420008
    ctx->pc = 0x2df74cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2df750: 0x62001a
    ctx->pc = 0x2df750u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2df754: 0x1810
    ctx->pc = 0x2df754u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x2df758: 0x50400001
    ctx->pc = 0x2DF758u;
    {
        const bool branch_taken_0x2df758 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2df758) {
            ctx->pc = 0x2DF75Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DF760u;
            goto label_2df760;
        }
    }
    ctx->pc = 0x2DF760u;
label_2df760:
    // 0x2df760: 0x26100001
    ctx->pc = 0x2df760u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2df764: 0x213102a
    ctx->pc = 0x2df764u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 19)));
    // 0x2df768: 0x1440ffeb
    ctx->pc = 0x2DF768u;
    {
        const bool branch_taken_0x2df768 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DF76Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2df768) {
            ctx->pc = 0x2DF718u;
            goto label_2df718;
        }
    }
    ctx->pc = 0x2DF770u;
label_2df770:
    // 0x2df770: 0x8e420010
    ctx->pc = 0x2df770u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2df774: 0x2621021
    ctx->pc = 0x2df774u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2df778: 0x10400009
    ctx->pc = 0x2DF778u;
    {
        const bool branch_taken_0x2df778 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DF77Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2df778) {
            ctx->pc = 0x2DF7A0u;
            goto label_2df7a0;
        }
    }
    ctx->pc = 0x2DF780u;
    // 0x2df780: 0x12e00005
    ctx->pc = 0x2DF780u;
    {
        const bool branch_taken_0x2df780 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DF784u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
        if (branch_taken_0x2df780) {
            ctx->pc = 0x2DF798u;
            goto label_2df798;
        }
    }
    ctx->pc = 0x2DF788u;
    // 0x2df788: 0x3442ffff
    ctx->pc = 0x2df788u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2df78c: 0x2a2a824
    ctx->pc = 0x2df78cu;
    SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2df790: 0x3c023000
    ctx->pc = 0x2df790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)12288 << 16));
    // 0x2df794: 0x2a2a825
    ctx->pc = 0x2df794u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2df798:
    // 0x2df798: 0xc0b7c80
    ctx->pc = 0x2DF798u;
    SET_GPR_U32(ctx, 31, 0x2DF7A0u);
    ctx->pc = 0x2DF79Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 21), 256));
    ctx->pc = 0x2DF200u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x2df200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF7A0u; }
    }
    if (ctx->pc != 0x2DF7A0u) { return; }
    ctx->pc = 0x2DF7A0u;
label_2df7a0:
    // 0x2df7a0: 0xc0c0d80
    ctx->pc = 0x2DF7A0u;
    SET_GPR_U32(ctx, 31, 0x2DF7A8u);
    ctx->pc = 0x2DF7A4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->pc = 0x303600u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x303600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF7A8u; }
    }
    if (ctx->pc != 0x2DF7A8u) { return; }
    ctx->pc = 0x2DF7A8u;
    // 0x2df7a8: 0x24020001
    ctx->pc = 0x2df7a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2df7ac:
    // 0x2df7ac: 0xdfbf0080
    ctx->pc = 0x2df7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2df7b0: 0xdfb70070
    ctx->pc = 0x2df7b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2df7b4: 0xdfb60060
    ctx->pc = 0x2df7b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2df7b8: 0xdfb50050
    ctx->pc = 0x2df7b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2df7bc: 0xdfb40040
    ctx->pc = 0x2df7bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2df7c0: 0xdfb30030
    ctx->pc = 0x2df7c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df7c4: 0xdfb20020
    ctx->pc = 0x2df7c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df7c8: 0xdfb10010
    ctx->pc = 0x2df7c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df7cc: 0xdfb00000
    ctx->pc = 0x2df7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df7d0: 0x3e00008
    ctx->pc = 0x2DF7D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF7D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DF60Cu: goto label_2df60c;
            case 0x2DF658u: goto label_2df658;
            case 0x2DF66Cu: goto label_2df66c;
            case 0x2DF690u: goto label_2df690;
            case 0x2DF6D8u: goto label_2df6d8;
            case 0x2DF700u: goto label_2df700;
            case 0x2DF718u: goto label_2df718;
            case 0x2DF760u: goto label_2df760;
            case 0x2DF770u: goto label_2df770;
            case 0x2DF798u: goto label_2df798;
            case 0x2DF7A0u: goto label_2df7a0;
            case 0x2DF7ACu: goto label_2df7ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DF7D8u;
}
