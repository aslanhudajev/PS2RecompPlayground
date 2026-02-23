#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _getAllRefs
// Address: 0x15e538 - 0x15ebe8
void _getAllRefs_0x15e538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_getAllRefs");


    ctx->pc = 0x15e538u;

    // 0x15e538: 0x27bdff10
    ctx->pc = 0x15e538u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x15e53c: 0x3c020023
    ctx->pc = 0x15e53cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15e540: 0xffb700c0
    ctx->pc = 0x15e540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x15e544: 0x2442a838
    ctx->pc = 0x15e544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944824));
    // 0x15e548: 0xffb600b0
    ctx->pc = 0x15e548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x15e54c: 0x240b0140
    ctx->pc = 0x15e54cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 320));
    // 0x15e550: 0xffb500a0
    ctx->pc = 0x15e550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x15e554: 0x120b02d
    ctx->pc = 0x15e554u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e558: 0xffb40090
    ctx->pc = 0x15e558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x15e55c: 0xa0a82d
    ctx->pc = 0x15e55cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e560: 0xffb30080
    ctx->pc = 0x15e560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x15e564: 0x80a02d
    ctx->pc = 0x15e564u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e568: 0xffb20070
    ctx->pc = 0x15e568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x15e56c: 0xe0982d
    ctx->pc = 0x15e56cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e570: 0xffb10060
    ctx->pc = 0x15e570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x15e574: 0x24170001
    ctx->pc = 0x15e574u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e578: 0xafa60040
    ctx->pc = 0x15e578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x15e57c: 0x100882d
    ctx->pc = 0x15e57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e580: 0xffbf00e0
    ctx->pc = 0x15e580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x15e584: 0x902d
    ctx->pc = 0x15e584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e588: 0xffbe00d0
    ctx->pc = 0x15e588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x15e58c: 0x30cc0008
    ctx->pc = 0x15e58cu;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 6), 8));
    // 0x15e590: 0xffb00050
    ctx->pc = 0x15e590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x15e594: 0x8c430280
    ctx->pc = 0x15e594u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x15e598: 0x6b2018
    ctx->pc = 0x15e598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x15e59c: 0x821821
    ctx->pc = 0x15e59cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15e5a0: 0x15800006
    ctx->pc = 0x15E5A0u;
    {
        const bool branch_taken_0x15e5a0 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x15E5A4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 0));
        if (branch_taken_0x15e5a0) {
            ctx->pc = 0x15E5BCu;
            goto label_15e5bc;
        }
    }
    ctx->pc = 0x15E5A8u;
    // 0x15e5a8: 0x3c020023
    ctx->pc = 0x15e5a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15e5ac: 0x24040002
    ctx->pc = 0x15e5acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e5b0: 0x8c43a3bc
    ctx->pc = 0x15e5b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943676)));
    // 0x15e5b4: 0x1464010b
    ctx->pc = 0x15E5B4u;
    {
        const bool branch_taken_0x15e5b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x15E5B8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x15e5b4) {
            ctx->pc = 0x15E9E4u;
            goto label_15e9e4;
        }
    }
    ctx->pc = 0x15E5BCu;
label_15e5bc:
    // 0x15e5bc: 0x3c020023
    ctx->pc = 0x15e5bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15e5c0: 0x24030003
    ctx->pc = 0x15e5c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e5c4: 0x8c46a3ec
    ctx->pc = 0x15e5c4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294943724)));
    // 0x15e5c8: 0x14c30075
    ctx->pc = 0x15E5C8u;
    {
        const bool branch_taken_0x15e5c8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 3));
        ctx->pc = 0x15E5CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x15e5c8) {
            ctx->pc = 0x15E7A0u;
            goto label_15e7a0;
        }
    }
    ctx->pc = 0x15E5D0u;
    // 0x15e5d0: 0x24020002
    ctx->pc = 0x15e5d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e5d4: 0x52620004
    ctx->pc = 0x15E5D4u;
    {
        const bool branch_taken_0x15e5d4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        if (branch_taken_0x15e5d4) {
            ctx->pc = 0x15E5D8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x15E5E8u;
            goto label_15e5e8;
        }
    }
    ctx->pc = 0x15E5DCu;
    // 0x15e5dc: 0x1580000d
    ctx->pc = 0x15E5DCu;
    {
        const bool branch_taken_0x15e5dc = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        if (branch_taken_0x15e5dc) {
            ctx->pc = 0x15E614u;
            goto label_15e614;
        }
    }
    ctx->pc = 0x15E5E4u;
    // 0x15e5e4: 0x8e230004
    ctx->pc = 0x15e5e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15e5e8:
    // 0x15e5e8: 0x3c020023
    ctx->pc = 0x15e5e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15e5ec: 0x8e2b0000
    ctx->pc = 0x15e5ecu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15e5f0: 0x282d
    ctx->pc = 0x15e5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e5f4: 0x8c44a240
    ctx->pc = 0x15e5f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943296)));
    // 0x15e5f8: 0x302d
    ctx->pc = 0x15e5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e5fc: 0xafa30000
    ctx->pc = 0x15e5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x15e600: 0x382d
    ctx->pc = 0x15e600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e604: 0xafa00008
    ctx->pc = 0x15e604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x15e608: 0x24080010
    ctx->pc = 0x15e608u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x15e60c: 0x100000eb
    ctx->pc = 0x15E60Cu;
    {
        const bool branch_taken_0x15e60c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E610u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        if (branch_taken_0x15e60c) {
            ctx->pc = 0x15E9BCu;
            goto label_15e9bc;
        }
    }
    ctx->pc = 0x15E614u;
label_15e614:
    // 0x15e614: 0x1677001f
    ctx->pc = 0x15E614u;
    {
        const bool branch_taken_0x15e614 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 23));
        ctx->pc = 0x15E618u;
        SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
        if (branch_taken_0x15e614) {
            ctx->pc = 0x15E694u;
            goto label_15e694;
        }
    }
    ctx->pc = 0x15E61Cu;
    // 0x15e61c: 0x8e220004
    ctx->pc = 0x15e61cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15e620: 0x8ec50000
    ctx->pc = 0x15e620u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x15e624: 0x302d
    ctx->pc = 0x15e624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e628: 0x8e2b0000
    ctx->pc = 0x15e628u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15e62c: 0x21043
    ctx->pc = 0x15e62cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15e630: 0x8e04a240
    ctx->pc = 0x15e630u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294943296)));
    // 0x15e634: 0x382d
    ctx->pc = 0x15e634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e638: 0xafa20000
    ctx->pc = 0x15e638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15e63c: 0x24080008
    ctx->pc = 0x15e63cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15e640: 0xafb30008
    ctx->pc = 0x15e640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x15e644: 0x280482d
    ctx->pc = 0x15e644u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e648: 0xafa00010
    ctx->pc = 0x15e648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x15e64c: 0xc057afa
    ctx->pc = 0x15E64Cu;
    SET_GPR_U32(ctx, 31, 0x15E654u);
    ctx->pc = 0x15E650u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15EBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x15ebe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E654u; }
        else if (ctx->pc != 0x15E654u) { ctx->pc = 0x15E654u; }
    }
    if (ctx->pc != 0x15E654u) { return; }
    ctx->pc = 0x15E654u;
    // 0x15e654: 0x8e220014
    ctx->pc = 0x15e654u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15e658: 0x24060001
    ctx->pc = 0x15e658u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e65c: 0x8ec50008
    ctx->pc = 0x15e65cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x15e660: 0x382d
    ctx->pc = 0x15e660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e664: 0x8e2b0010
    ctx->pc = 0x15e664u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15e668: 0x21043
    ctx->pc = 0x15e668u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15e66c: 0x8e04a240
    ctx->pc = 0x15e66cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294943296)));
    // 0x15e670: 0x24080008
    ctx->pc = 0x15e670u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15e674: 0xafa20000
    ctx->pc = 0x15e674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15e678: 0x280482d
    ctx->pc = 0x15e678u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e67c: 0xafb30008
    ctx->pc = 0x15e67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x15e680: 0x2a0502d
    ctx->pc = 0x15e680u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e684: 0xc057afa
    ctx->pc = 0x15E684u;
    SET_GPR_U32(ctx, 31, 0x15E68Cu);
    ctx->pc = 0x15E688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x15EBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x15ebe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E68Cu; }
        else if (ctx->pc != 0x15E68Cu) { ctx->pc = 0x15E68Cu; }
    }
    if (ctx->pc != 0x15E68Cu) { return; }
    ctx->pc = 0x15E68Cu;
    // 0x15e68c: 0x100000d4
    ctx->pc = 0x15E68Cu;
    {
        const bool branch_taken_0x15e68c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E690u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x15e68c) {
            ctx->pc = 0x15E9E0u;
            goto label_15e9e0;
        }
    }
    ctx->pc = 0x15E694u;
label_15e694:
    // 0x15e694: 0x1666003d
    ctx->pc = 0x15E694u;
    {
        const bool branch_taken_0x15e694 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 6));
        ctx->pc = 0x15E698u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x15e694) {
            ctx->pc = 0x15E78Cu;
            goto label_15e78c;
        }
    }
    ctx->pc = 0x15E69Cu;
    // 0x15e69c: 0x8e270004
    ctx->pc = 0x15e69cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15e6a0: 0x140282d
    ctx->pc = 0x15e6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e6a4: 0x8e260000
    ctx->pc = 0x15e6a4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15e6a8: 0x27a40020
    ctx->pc = 0x15e6a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x15e6ac: 0x73843
    ctx->pc = 0x15e6acu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x15e6b0: 0xc058066
    ctx->pc = 0x15E6B0u;
    SET_GPR_U32(ctx, 31, 0x15E6B8u);
    ctx->pc = 0x15E6B4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    ctx->pc = 0x160198u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dualPrimeVector_0x160198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6B8u; }
        else if (ctx->pc != 0x15E6B8u) { ctx->pc = 0x15E6B8u; }
    }
    if (ctx->pc != 0x15E6B8u) { return; }
    ctx->pc = 0x15E6B8u;
    // 0x15e6b8: 0x8e220004
    ctx->pc = 0x15e6b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15e6bc: 0x282d
    ctx->pc = 0x15e6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e6c0: 0x8e2b0000
    ctx->pc = 0x15e6c0u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15e6c4: 0x302d
    ctx->pc = 0x15e6c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e6c8: 0x21043
    ctx->pc = 0x15e6c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15e6cc: 0x8e04a240
    ctx->pc = 0x15e6ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294943296)));
    // 0x15e6d0: 0xafa20000
    ctx->pc = 0x15e6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15e6d4: 0x382d
    ctx->pc = 0x15e6d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e6d8: 0xafb70008
    ctx->pc = 0x15e6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x15e6dc: 0x24080008
    ctx->pc = 0x15e6dcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15e6e0: 0xafa00010
    ctx->pc = 0x15e6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x15e6e4: 0x280482d
    ctx->pc = 0x15e6e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e6e8: 0xc057afa
    ctx->pc = 0x15E6E8u;
    SET_GPR_U32(ctx, 31, 0x15E6F0u);
    ctx->pc = 0x15E6ECu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15EBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x15ebe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6F0u; }
        else if (ctx->pc != 0x15E6F0u) { ctx->pc = 0x15E6F0u; }
    }
    if (ctx->pc != 0x15E6F0u) { return; }
    ctx->pc = 0x15E6F0u;
    // 0x15e6f0: 0x8fa20024
    ctx->pc = 0x15e6f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x15e6f4: 0x24050001
    ctx->pc = 0x15e6f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e6f8: 0x8e04a240
    ctx->pc = 0x15e6f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294943296)));
    // 0x15e6fc: 0x302d
    ctx->pc = 0x15e6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e700: 0x8fab0020
    ctx->pc = 0x15e700u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e704: 0x382d
    ctx->pc = 0x15e704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e708: 0xafa20000
    ctx->pc = 0x15e708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15e70c: 0x24080008
    ctx->pc = 0x15e70cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15e710: 0xafb70008
    ctx->pc = 0x15e710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x15e714: 0x280482d
    ctx->pc = 0x15e714u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e718: 0xafb70010
    ctx->pc = 0x15e718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x15e71c: 0xc057afa
    ctx->pc = 0x15E71Cu;
    SET_GPR_U32(ctx, 31, 0x15E724u);
    ctx->pc = 0x15E720u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15EBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x15ebe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E724u; }
        else if (ctx->pc != 0x15E724u) { ctx->pc = 0x15E724u; }
    }
    if (ctx->pc != 0x15E724u) { return; }
    ctx->pc = 0x15E724u;
    // 0x15e724: 0x8e220004
    ctx->pc = 0x15e724u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15e728: 0x24050001
    ctx->pc = 0x15e728u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e72c: 0x8e2b0000
    ctx->pc = 0x15e72cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15e730: 0x24060001
    ctx->pc = 0x15e730u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e734: 0x21043
    ctx->pc = 0x15e734u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15e738: 0x8e04a240
    ctx->pc = 0x15e738u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294943296)));
    // 0x15e73c: 0xafa20000
    ctx->pc = 0x15e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15e740: 0x382d
    ctx->pc = 0x15e740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e744: 0xafb70008
    ctx->pc = 0x15e744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x15e748: 0x24080008
    ctx->pc = 0x15e748u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15e74c: 0xafa00010
    ctx->pc = 0x15e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x15e750: 0x280482d
    ctx->pc = 0x15e750u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e754: 0xc057afa
    ctx->pc = 0x15E754u;
    SET_GPR_U32(ctx, 31, 0x15E75Cu);
    ctx->pc = 0x15E758u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15EBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x15ebe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E75Cu; }
        else if (ctx->pc != 0x15E75Cu) { ctx->pc = 0x15E75Cu; }
    }
    if (ctx->pc != 0x15E75Cu) { return; }
    ctx->pc = 0x15E75Cu;
    // 0x15e75c: 0x8fa2002c
    ctx->pc = 0x15e75cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x15e760: 0x282d
    ctx->pc = 0x15e760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e764: 0x8e04a240
    ctx->pc = 0x15e764u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294943296)));
    // 0x15e768: 0x24060001
    ctx->pc = 0x15e768u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e76c: 0x8fab0028
    ctx->pc = 0x15e76cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15e770: 0x382d
    ctx->pc = 0x15e770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e774: 0xafa20000
    ctx->pc = 0x15e774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15e778: 0x24080008
    ctx->pc = 0x15e778u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15e77c: 0xafb70010
    ctx->pc = 0x15e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x15e780: 0x280482d
    ctx->pc = 0x15e780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e784: 0x1000008e
    ctx->pc = 0x15E784u;
    {
        const bool branch_taken_0x15e784 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E788u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
        if (branch_taken_0x15e784) {
            ctx->pc = 0x15E9C0u;
            goto label_15e9c0;
        }
    }
    ctx->pc = 0x15E78Cu;
label_15e78c:
    // 0x15e78c: 0x260282d
    ctx->pc = 0x15e78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e790: 0xc059106
    ctx->pc = 0x15E790u;
    SET_GPR_U32(ctx, 31, 0x15E798u);
    ctx->pc = 0x15E794u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937312));
    ctx->pc = 0x164418u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x164418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E798u; }
        else if (ctx->pc != 0x15E798u) { ctx->pc = 0x15E798u; }
    }
    if (ctx->pc != 0x15E798u) { return; }
    ctx->pc = 0x15E798u;
    // 0x15e798: 0x10000091
    ctx->pc = 0x15E798u;
    {
        const bool branch_taken_0x15e798 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E79Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x15e798) {
            ctx->pc = 0x15E9E0u;
            goto label_15e9e0;
        }
    }
    ctx->pc = 0x15E7A0u;
label_15e7a0:
    // 0x15e7a0: 0x3c030023
    ctx->pc = 0x15e7a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x15e7a4: 0x3c050023
    ctx->pc = 0x15e7a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x15e7a8: 0x8c48a24c
    ctx->pc = 0x15e7a8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4294943308)));
    // 0x15e7ac: 0x8c67a258
    ctx->pc = 0x15e7acu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 4294943320)));
    // 0x15e7b0: 0x38c20002
    ctx->pc = 0x15e7b0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), 2));
    // 0x15e7b4: 0x3c040023
    ctx->pc = 0x15e7b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x15e7b8: 0x8ca3a25c
    ctx->pc = 0x15e7b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294943324)));
    // 0x15e7bc: 0x8c86a250
    ctx->pc = 0x15e7bcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 4294943312)));
    // 0x15e7c0: 0x2c570001
    ctx->pc = 0x15e7c0u;
    SET_GPR_U32(ctx, 23, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x15e7c4: 0x3c050023
    ctx->pc = 0x15e7c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x15e7c8: 0x24040002
    ctx->pc = 0x15e7c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e7cc: 0x8ca2a3bc
    ctx->pc = 0x15e7ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294943676)));
    // 0x15e7d0: 0x902d
    ctx->pc = 0x15e7d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e7d4: 0xafa80030
    ctx->pc = 0x15e7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x15e7d8: 0xafa70034
    ctx->pc = 0x15e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    // 0x15e7dc: 0xafa60038
    ctx->pc = 0x15e7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x15e7e0: 0x14440008
    ctx->pc = 0x15E7E0u;
    {
        const bool branch_taken_0x15e7e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x15E7E4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        if (branch_taken_0x15e7e0) {
            ctx->pc = 0x15E804u;
            goto label_15e804;
        }
    }
    ctx->pc = 0x15E7E8u;
    // 0x15e7e8: 0x3c020023
    ctx->pc = 0x15e7e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15e7ec: 0x8c43a35c
    ctx->pc = 0x15e7ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943580)));
    // 0x15e7f0: 0x10600005
    ctx->pc = 0x15E7F0u;
    {
        const bool branch_taken_0x15e7f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E7F4u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x15e7f0) {
            ctx->pc = 0x15E808u;
            goto label_15e808;
        }
    }
    ctx->pc = 0x15E7F8u;
    // 0x15e7f8: 0x8ec20000
    ctx->pc = 0x15e7f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x15e7fc: 0x2e21026
    ctx->pc = 0x15e7fcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x15e800: 0x2902b
    ctx->pc = 0x15e800u;
    SET_GPR_U32(ctx, 18, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_15e804:
    // 0x15e804: 0x241e0001
    ctx->pc = 0x15e804u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
label_15e808:
    // 0x15e808: 0x527e0004
    ctx->pc = 0x15E808u;
    {
        const bool branch_taken_0x15e808 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 30));
        if (branch_taken_0x15e808) {
            ctx->pc = 0x15E80Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->pc = 0x15E81Cu;
            goto label_15e81c;
        }
    }
    ctx->pc = 0x15E810u;
    // 0x15e810: 0x1580000f
    ctx->pc = 0x15E810u;
    {
        const bool branch_taken_0x15e810 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x15E814u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x15e810) {
            ctx->pc = 0x15E850u;
            goto label_15e850;
        }
    }
    ctx->pc = 0x15E818u;
    // 0x15e818: 0x8ec20000
    ctx->pc = 0x15e818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_15e81c:
    // 0x15e81c: 0x1218c0
    ctx->pc = 0x15e81cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 3));
    // 0x15e820: 0x8e240004
    ctx->pc = 0x15e820u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15e824: 0x282d
    ctx->pc = 0x15e824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e828: 0x8e2b0000
    ctx->pc = 0x15e828u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15e82c: 0x21080
    ctx->pc = 0x15e82cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e830: 0x431021
    ctx->pc = 0x15e830u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e834: 0xafa00008
    ctx->pc = 0x15e834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x15e838: 0xafa40000
    ctx->pc = 0x15e838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x15e83c: 0x3a21821
    ctx->pc = 0x15e83cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x15e840: 0x8c640030
    ctx->pc = 0x15e840u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15e844: 0x302d
    ctx->pc = 0x15e844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e848: 0x1000005a
    ctx->pc = 0x15E848u;
    {
        const bool branch_taken_0x15e848 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E84Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        if (branch_taken_0x15e848) {
            ctx->pc = 0x15E9B4u;
            goto label_15e9b4;
        }
    }
    ctx->pc = 0x15E850u;
label_15e850:
    // 0x15e850: 0x16620031
    ctx->pc = 0x15E850u;
    {
        const bool branch_taken_0x15e850 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x15E854u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x15e850) {
            ctx->pc = 0x15E918u;
            goto label_15e918;
        }
    }
    ctx->pc = 0x15E858u;
    // 0x15e858: 0x8ec20000
    ctx->pc = 0x15e858u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x15e85c: 0x1220c0
    ctx->pc = 0x15e85cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 3));
    // 0x15e860: 0x8e230004
    ctx->pc = 0x15e860u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15e864: 0x27b00030
    ctx->pc = 0x15e864u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 48));
    // 0x15e868: 0x8e2b0000
    ctx->pc = 0x15e868u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15e86c: 0x21080
    ctx->pc = 0x15e86cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e870: 0x441021
    ctx->pc = 0x15e870u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15e874: 0xafa30000
    ctx->pc = 0x15e874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x15e878: 0xafa00008
    ctx->pc = 0x15e878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x15e87c: 0x2021021
    ctx->pc = 0x15e87cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15e880: 0x282d
    ctx->pc = 0x15e880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e884: 0x302d
    ctx->pc = 0x15e884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e888: 0x8c440000
    ctx->pc = 0x15e888u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e88c: 0x382d
    ctx->pc = 0x15e88cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e890: 0xafa00010
    ctx->pc = 0x15e890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x15e894: 0x24080008
    ctx->pc = 0x15e894u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15e898: 0x280482d
    ctx->pc = 0x15e898u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e89c: 0xc057afa
    ctx->pc = 0x15E89Cu;
    SET_GPR_U32(ctx, 31, 0x15E8A4u);
    ctx->pc = 0x15E8A0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15EBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x15ebe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E8A4u; }
        else if (ctx->pc != 0x15E8A4u) { ctx->pc = 0x15E8A4u; }
    }
    if (ctx->pc != 0x15E8A4u) { return; }
    ctx->pc = 0x15E8A4u;
    // 0x15e8a4: 0x3c060023
    ctx->pc = 0x15e8a4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x15e8a8: 0x8cc2a3bc
    ctx->pc = 0x15e8a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4294943676)));
    // 0x15e8ac: 0x14530009
    ctx->pc = 0x15E8ACu;
    {
        const bool branch_taken_0x15e8ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x15E8B0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15e8ac) {
            ctx->pc = 0x15E8D4u;
            goto label_15e8d4;
        }
    }
    ctx->pc = 0x15E8B4u;
    // 0x15e8b4: 0x3c020023
    ctx->pc = 0x15e8b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15e8b8: 0x8c43a35c
    ctx->pc = 0x15e8b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943580)));
    // 0x15e8bc: 0x10600006
    ctx->pc = 0x15E8BCu;
    {
        const bool branch_taken_0x15e8bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E8C0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 8)));
        if (branch_taken_0x15e8bc) {
            ctx->pc = 0x15E8D8u;
            goto label_15e8d8;
        }
    }
    ctx->pc = 0x15E8C4u;
    // 0x15e8c4: 0x3c0902d
    ctx->pc = 0x15e8c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e8c8: 0x2e31026
    ctx->pc = 0x15e8c8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x15e8cc: 0x10000002
    ctx->pc = 0x15E8CCu;
    {
        const bool branch_taken_0x15e8cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E8D0u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 0));
        if (branch_taken_0x15e8cc) {
            ctx->pc = 0x15E8D8u;
            goto label_15e8d8;
        }
    }
    ctx->pc = 0x15E8D4u;
label_15e8d4:
    // 0x15e8d4: 0x8ec30008
    ctx->pc = 0x15e8d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_15e8d8:
    // 0x15e8d8: 0x31080
    ctx->pc = 0x15e8d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x15e8dc: 0x8e260014
    ctx->pc = 0x15e8dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15e8e0: 0x1218c0
    ctx->pc = 0x15e8e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 3));
    // 0x15e8e4: 0x8e2b0010
    ctx->pc = 0x15e8e4u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15e8e8: 0x431021
    ctx->pc = 0x15e8e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e8ec: 0x282d
    ctx->pc = 0x15e8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e8f0: 0x2021021
    ctx->pc = 0x15e8f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15e8f4: 0x24070008
    ctx->pc = 0x15e8f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15e8f8: 0x8c440000
    ctx->pc = 0x15e8f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e8fc: 0x24080008
    ctx->pc = 0x15e8fcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15e900: 0xafa60000
    ctx->pc = 0x15e900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x15e904: 0x280482d
    ctx->pc = 0x15e904u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e908: 0x302d
    ctx->pc = 0x15e908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e90c: 0xafa00008
    ctx->pc = 0x15e90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x15e910: 0x1000002b
    ctx->pc = 0x15E910u;
    {
        const bool branch_taken_0x15e910 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E914u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        if (branch_taken_0x15e910) {
            ctx->pc = 0x15E9C0u;
            goto label_15e9c0;
        }
    }
    ctx->pc = 0x15E918u;
label_15e918:
    // 0x15e918: 0x1662002d
    ctx->pc = 0x15E918u;
    {
        const bool branch_taken_0x15e918 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x15E91Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x15e918) {
            ctx->pc = 0x15E9D0u;
            goto label_15e9d0;
        }
    }
    ctx->pc = 0x15E920u;
    // 0x15e920: 0x3c020023
    ctx->pc = 0x15e920u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15e924: 0x3c0902d
    ctx->pc = 0x15e924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e928: 0x8c43a35c
    ctx->pc = 0x15e928u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943580)));
    // 0x15e92c: 0x140282d
    ctx->pc = 0x15e92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e930: 0x8e260000
    ctx->pc = 0x15e930u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15e934: 0x27a40020
    ctx->pc = 0x15e934u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x15e938: 0x8e270004
    ctx->pc = 0x15e938u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15e93c: 0xc058066
    ctx->pc = 0x15E93Cu;
    SET_GPR_U32(ctx, 31, 0x15E944u);
    ctx->pc = 0x15E940u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 0));
    ctx->pc = 0x160198u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dualPrimeVector_0x160198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E944u; }
        else if (ctx->pc != 0x15E944u) { ctx->pc = 0x15E944u; }
    }
    if (ctx->pc != 0x15E944u) { return; }
    ctx->pc = 0x15E944u;
    // 0x15e944: 0x27b00030
    ctx->pc = 0x15e944u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 48));
    // 0x15e948: 0x171080
    ctx->pc = 0x15e948u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 2));
    // 0x15e94c: 0x8e230004
    ctx->pc = 0x15e94cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15e950: 0x2021021
    ctx->pc = 0x15e950u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15e954: 0x8c440000
    ctx->pc = 0x15e954u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e958: 0x282d
    ctx->pc = 0x15e958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e95c: 0x8e2b0000
    ctx->pc = 0x15e95cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15e960: 0x302d
    ctx->pc = 0x15e960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e964: 0xafa30000
    ctx->pc = 0x15e964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x15e968: 0x382d
    ctx->pc = 0x15e968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e96c: 0xafa00008
    ctx->pc = 0x15e96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x15e970: 0x24080010
    ctx->pc = 0x15e970u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x15e974: 0xafa00010
    ctx->pc = 0x15e974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x15e978: 0x280482d
    ctx->pc = 0x15e978u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e97c: 0xc057afa
    ctx->pc = 0x15E97Cu;
    SET_GPR_U32(ctx, 31, 0x15E984u);
    ctx->pc = 0x15E980u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15EBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x15ebe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E984u; }
        else if (ctx->pc != 0x15E984u) { ctx->pc = 0x15E984u; }
    }
    if (ctx->pc != 0x15E984u) { return; }
    ctx->pc = 0x15E984u;
    // 0x15e984: 0x1218c0
    ctx->pc = 0x15e984u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 3));
    // 0x15e988: 0x8fa40024
    ctx->pc = 0x15e988u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x15e98c: 0x24620004
    ctx->pc = 0x15e98cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4));
    // 0x15e990: 0xafbe0010
    ctx->pc = 0x15e990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 30));
    // 0x15e994: 0x77100b
    ctx->pc = 0x15e994u;
    if (GPR_U32(ctx, 23) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x15e998: 0xafa40000
    ctx->pc = 0x15e998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x15e99c: 0x2028021
    ctx->pc = 0x15e99cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15e9a0: 0x8fab0020
    ctx->pc = 0x15e9a0u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e9a4: 0x8e040000
    ctx->pc = 0x15e9a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e9a8: 0x282d
    ctx->pc = 0x15e9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e9ac: 0xafa00008
    ctx->pc = 0x15e9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x15e9b0: 0x302d
    ctx->pc = 0x15e9b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e9b4:
    // 0x15e9b4: 0x382d
    ctx->pc = 0x15e9b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e9b8: 0x24080010
    ctx->pc = 0x15e9b8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
label_15e9bc:
    // 0x15e9bc: 0x280482d
    ctx->pc = 0x15e9bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15e9c0:
    // 0x15e9c0: 0xc057afa
    ctx->pc = 0x15E9C0u;
    SET_GPR_U32(ctx, 31, 0x15E9C8u);
    ctx->pc = 0x15E9C4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15EBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x15ebe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E9C8u; }
        else if (ctx->pc != 0x15E9C8u) { ctx->pc = 0x15E9C8u; }
    }
    if (ctx->pc != 0x15E9C8u) { return; }
    ctx->pc = 0x15E9C8u;
    // 0x15e9c8: 0x10000005
    ctx->pc = 0x15E9C8u;
    {
        const bool branch_taken_0x15e9c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E9CCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x15e9c8) {
            ctx->pc = 0x15E9E0u;
            goto label_15e9e0;
        }
    }
    ctx->pc = 0x15E9D0u;
label_15e9d0:
    // 0x15e9d0: 0x260282d
    ctx->pc = 0x15e9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e9d4: 0xc059106
    ctx->pc = 0x15E9D4u;
    SET_GPR_U32(ctx, 31, 0x15E9DCu);
    ctx->pc = 0x15E9D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937344));
    ctx->pc = 0x164418u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x164418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E9DCu; }
        else if (ctx->pc != 0x15E9DCu) { ctx->pc = 0x15E9DCu; }
    }
    if (ctx->pc != 0x15E9DCu) { return; }
    ctx->pc = 0x15E9DCu;
    // 0x15e9dc: 0x24120001
    ctx->pc = 0x15e9dcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_15e9e0:
    // 0x15e9e0: 0x8fa30040
    ctx->pc = 0x15e9e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15e9e4:
    // 0x15e9e4: 0x30620004
    ctx->pc = 0x15e9e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
    // 0x15e9e8: 0x10400073
    ctx->pc = 0x15E9E8u;
    {
        const bool branch_taken_0x15e9e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E9ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x15e9e8) {
            ctx->pc = 0x15EBB8u;
            goto label_15ebb8;
        }
    }
    ctx->pc = 0x15E9F0u;
    // 0x15e9f0: 0x24040003
    ctx->pc = 0x15e9f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e9f4: 0x8c43a3ec
    ctx->pc = 0x15e9f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943724)));
    // 0x15e9f8: 0x1464002b
    ctx->pc = 0x15E9F8u;
    {
        const bool branch_taken_0x15e9f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x15E9FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x15e9f8) {
            ctx->pc = 0x15EAA8u;
            goto label_15eaa8;
        }
    }
    ctx->pc = 0x15EA00u;
    // 0x15ea00: 0x24020002
    ctx->pc = 0x15ea00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ea04: 0x16620009
    ctx->pc = 0x15EA04u;
    {
        const bool branch_taken_0x15ea04 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x15EA08u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x15ea04) {
            ctx->pc = 0x15EA2Cu;
            goto label_15ea2c;
        }
    }
    ctx->pc = 0x15EA0Cu;
    // 0x15ea0c: 0x8e23000c
    ctx->pc = 0x15ea0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15ea10: 0x3c020023
    ctx->pc = 0x15ea10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15ea14: 0x8e2b0008
    ctx->pc = 0x15ea14u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15ea18: 0x280482d
    ctx->pc = 0x15ea18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ea1c: 0x8c44a244
    ctx->pc = 0x15ea1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943300)));
    // 0x15ea20: 0x2a0502d
    ctx->pc = 0x15ea20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ea24: 0x1000002e
    ctx->pc = 0x15EA24u;
    {
        const bool branch_taken_0x15ea24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EA28u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x15ea24) {
            ctx->pc = 0x15EAE0u;
            goto label_15eae0;
        }
    }
    ctx->pc = 0x15EA2Cu;
label_15ea2c:
    // 0x15ea2c: 0x8e22000c
    ctx->pc = 0x15ea2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15ea30: 0x3c100023
    ctx->pc = 0x15ea30u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x15ea34: 0x8ec50004
    ctx->pc = 0x15ea34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x15ea38: 0x302d
    ctx->pc = 0x15ea38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ea3c: 0x8e2b0008
    ctx->pc = 0x15ea3cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15ea40: 0x21043
    ctx->pc = 0x15ea40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15ea44: 0x8e04a244
    ctx->pc = 0x15ea44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294943300)));
    // 0x15ea48: 0x382d
    ctx->pc = 0x15ea48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ea4c: 0xafa20000
    ctx->pc = 0x15ea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15ea50: 0x24080008
    ctx->pc = 0x15ea50u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15ea54: 0xafb70008
    ctx->pc = 0x15ea54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x15ea58: 0x280482d
    ctx->pc = 0x15ea58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ea5c: 0xafb20010
    ctx->pc = 0x15ea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x15ea60: 0xc057afa
    ctx->pc = 0x15EA60u;
    SET_GPR_U32(ctx, 31, 0x15EA68u);
    ctx->pc = 0x15EA64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15EBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x15ebe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA68u; }
        else if (ctx->pc != 0x15EA68u) { ctx->pc = 0x15EA68u; }
    }
    if (ctx->pc != 0x15EA68u) { return; }
    ctx->pc = 0x15EA68u;
    // 0x15ea68: 0x8e22001c
    ctx->pc = 0x15ea68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x15ea6c: 0x280482d
    ctx->pc = 0x15ea6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ea70: 0x8ec5000c
    ctx->pc = 0x15ea70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x15ea74: 0x2a0502d
    ctx->pc = 0x15ea74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ea78: 0x8e2b0018
    ctx->pc = 0x15ea78u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15ea7c: 0x21043
    ctx->pc = 0x15ea7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15ea80: 0x8e04a244
    ctx->pc = 0x15ea80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294943300)));
    // 0x15ea84: 0x24060001
    ctx->pc = 0x15ea84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ea88: 0xafa20000
    ctx->pc = 0x15ea88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15ea8c: 0x382d
    ctx->pc = 0x15ea8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ea90: 0xafb70008
    ctx->pc = 0x15ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x15ea94: 0x24080008
    ctx->pc = 0x15ea94u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15ea98: 0xc057afa
    ctx->pc = 0x15EA98u;
    SET_GPR_U32(ctx, 31, 0x15EAA0u);
    ctx->pc = 0x15EA9Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    ctx->pc = 0x15EBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x15ebe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EAA0u; }
        else if (ctx->pc != 0x15EAA0u) { ctx->pc = 0x15EAA0u; }
    }
    if (ctx->pc != 0x15EAA0u) { return; }
    ctx->pc = 0x15EAA0u;
    // 0x15eaa0: 0x10000046
    ctx->pc = 0x15EAA0u;
    {
        const bool branch_taken_0x15eaa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EAA4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x15eaa0) {
            ctx->pc = 0x15EBBCu;
            goto label_15ebbc;
        }
    }
    ctx->pc = 0x15EAA8u;
label_15eaa8:
    // 0x15eaa8: 0x16620016
    ctx->pc = 0x15EAA8u;
    {
        const bool branch_taken_0x15eaa8 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x15EAACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x15eaa8) {
            ctx->pc = 0x15EB04u;
            goto label_15eb04;
        }
    }
    ctx->pc = 0x15EAB0u;
    // 0x15eab0: 0x8ec20004
    ctx->pc = 0x15eab0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x15eab4: 0x10400003
    ctx->pc = 0x15EAB4u;
    {
        const bool branch_taken_0x15eab4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EAB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x15eab4) {
            ctx->pc = 0x15EAC4u;
            goto label_15eac4;
        }
    }
    ctx->pc = 0x15EABCu;
    // 0x15eabc: 0x10000003
    ctx->pc = 0x15EABCu;
    {
        const bool branch_taken_0x15eabc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EAC0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943324)));
        if (branch_taken_0x15eabc) {
            ctx->pc = 0x15EACCu;
            goto label_15eacc;
        }
    }
    ctx->pc = 0x15EAC4u;
label_15eac4:
    // 0x15eac4: 0x3c020023
    ctx->pc = 0x15eac4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15eac8: 0x8c44a250
    ctx->pc = 0x15eac8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943312)));
label_15eacc:
    // 0x15eacc: 0x8e22000c
    ctx->pc = 0x15eaccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15ead0: 0x280482d
    ctx->pc = 0x15ead0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ead4: 0x8e2b0008
    ctx->pc = 0x15ead4u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15ead8: 0x2a0502d
    ctx->pc = 0x15ead8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eadc: 0xafa20000
    ctx->pc = 0x15eadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_15eae0:
    // 0x15eae0: 0x282d
    ctx->pc = 0x15eae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eae4: 0xafb20010
    ctx->pc = 0x15eae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x15eae8: 0x302d
    ctx->pc = 0x15eae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eaec: 0xafa00008
    ctx->pc = 0x15eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x15eaf0: 0x382d
    ctx->pc = 0x15eaf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eaf4: 0xc057afa
    ctx->pc = 0x15EAF4u;
    SET_GPR_U32(ctx, 31, 0x15EAFCu);
    ctx->pc = 0x15EAF8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x15EBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x15ebe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EAFCu; }
        else if (ctx->pc != 0x15EAFCu) { ctx->pc = 0x15EAFCu; }
    }
    if (ctx->pc != 0x15EAFCu) { return; }
    ctx->pc = 0x15EAFCu;
    // 0x15eafc: 0x1000002f
    ctx->pc = 0x15EAFCu;
    {
        const bool branch_taken_0x15eafc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EB00u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x15eafc) {
            ctx->pc = 0x15EBBCu;
            goto label_15ebbc;
        }
    }
    ctx->pc = 0x15EB04u;
label_15eb04:
    // 0x15eb04: 0x16620029
    ctx->pc = 0x15EB04u;
    {
        const bool branch_taken_0x15eb04 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x15EB08u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x15eb04) {
            ctx->pc = 0x15EBACu;
            goto label_15ebac;
        }
    }
    ctx->pc = 0x15EB0Cu;
    // 0x15eb0c: 0x8ec20004
    ctx->pc = 0x15eb0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x15eb10: 0x10400003
    ctx->pc = 0x15EB10u;
    {
        const bool branch_taken_0x15eb10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EB14u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x15eb10) {
            ctx->pc = 0x15EB20u;
            goto label_15eb20;
        }
    }
    ctx->pc = 0x15EB18u;
    // 0x15eb18: 0x10000003
    ctx->pc = 0x15EB18u;
    {
        const bool branch_taken_0x15eb18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EB1Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943324)));
        if (branch_taken_0x15eb18) {
            ctx->pc = 0x15EB28u;
            goto label_15eb28;
        }
    }
    ctx->pc = 0x15EB20u;
label_15eb20:
    // 0x15eb20: 0x3c020023
    ctx->pc = 0x15eb20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15eb24: 0x8c44a250
    ctx->pc = 0x15eb24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943312)));
label_15eb28:
    // 0x15eb28: 0x8e22000c
    ctx->pc = 0x15eb28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15eb2c: 0x282d
    ctx->pc = 0x15eb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb30: 0x8e2b0008
    ctx->pc = 0x15eb30u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15eb34: 0x302d
    ctx->pc = 0x15eb34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb38: 0xafa20000
    ctx->pc = 0x15eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15eb3c: 0x382d
    ctx->pc = 0x15eb3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb40: 0xafa00008
    ctx->pc = 0x15eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x15eb44: 0x24080008
    ctx->pc = 0x15eb44u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15eb48: 0xafb20010
    ctx->pc = 0x15eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x15eb4c: 0x280482d
    ctx->pc = 0x15eb4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb50: 0xc057afa
    ctx->pc = 0x15EB50u;
    SET_GPR_U32(ctx, 31, 0x15EB58u);
    ctx->pc = 0x15EB54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15EBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x15ebe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EB58u; }
        else if (ctx->pc != 0x15EB58u) { ctx->pc = 0x15EB58u; }
    }
    if (ctx->pc != 0x15EB58u) { return; }
    ctx->pc = 0x15EB58u;
    // 0x15eb58: 0x8ec2000c
    ctx->pc = 0x15eb58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x15eb5c: 0x10400003
    ctx->pc = 0x15EB5Cu;
    {
        const bool branch_taken_0x15eb5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EB60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x15eb5c) {
            ctx->pc = 0x15EB6Cu;
            goto label_15eb6c;
        }
    }
    ctx->pc = 0x15EB64u;
    // 0x15eb64: 0x10000003
    ctx->pc = 0x15EB64u;
    {
        const bool branch_taken_0x15eb64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EB68u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943324)));
        if (branch_taken_0x15eb64) {
            ctx->pc = 0x15EB74u;
            goto label_15eb74;
        }
    }
    ctx->pc = 0x15EB6Cu;
label_15eb6c:
    // 0x15eb6c: 0x3c020023
    ctx->pc = 0x15eb6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15eb70: 0x8c44a250
    ctx->pc = 0x15eb70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943312)));
label_15eb74:
    // 0x15eb74: 0x8e22001c
    ctx->pc = 0x15eb74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x15eb78: 0x280482d
    ctx->pc = 0x15eb78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb7c: 0x8e2b0018
    ctx->pc = 0x15eb7cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15eb80: 0x2a0502d
    ctx->pc = 0x15eb80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb84: 0xafa20000
    ctx->pc = 0x15eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15eb88: 0x282d
    ctx->pc = 0x15eb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb8c: 0xafb20010
    ctx->pc = 0x15eb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x15eb90: 0x302d
    ctx->pc = 0x15eb90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb94: 0xafa00008
    ctx->pc = 0x15eb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x15eb98: 0x24070008
    ctx->pc = 0x15eb98u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15eb9c: 0xc057afa
    ctx->pc = 0x15EB9Cu;
    SET_GPR_U32(ctx, 31, 0x15EBA4u);
    ctx->pc = 0x15EBA0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x15EBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x15ebe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBA4u; }
        else if (ctx->pc != 0x15EBA4u) { ctx->pc = 0x15EBA4u; }
    }
    if (ctx->pc != 0x15EBA4u) { return; }
    ctx->pc = 0x15EBA4u;
    // 0x15eba4: 0x10000005
    ctx->pc = 0x15EBA4u;
    {
        const bool branch_taken_0x15eba4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EBA8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x15eba4) {
            ctx->pc = 0x15EBBCu;
            goto label_15ebbc;
        }
    }
    ctx->pc = 0x15EBACu;
label_15ebac:
    // 0x15ebac: 0x260282d
    ctx->pc = 0x15ebacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ebb0: 0xc059106
    ctx->pc = 0x15EBB0u;
    SET_GPR_U32(ctx, 31, 0x15EBB8u);
    ctx->pc = 0x15EBB4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937376));
    ctx->pc = 0x164418u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x164418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBB8u; }
        else if (ctx->pc != 0x15EBB8u) { ctx->pc = 0x15EBB8u; }
    }
    if (ctx->pc != 0x15EBB8u) { return; }
    ctx->pc = 0x15EBB8u;
label_15ebb8:
    // 0x15ebb8: 0xdfbf00e0
    ctx->pc = 0x15ebb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_15ebbc:
    // 0x15ebbc: 0xdfbe00d0
    ctx->pc = 0x15ebbcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15ebc0: 0xdfb700c0
    ctx->pc = 0x15ebc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15ebc4: 0xdfb600b0
    ctx->pc = 0x15ebc4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15ebc8: 0xdfb500a0
    ctx->pc = 0x15ebc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15ebcc: 0xdfb40090
    ctx->pc = 0x15ebccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15ebd0: 0xdfb30080
    ctx->pc = 0x15ebd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ebd4: 0xdfb20070
    ctx->pc = 0x15ebd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15ebd8: 0xdfb10060
    ctx->pc = 0x15ebd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15ebdc: 0xdfb00050
    ctx->pc = 0x15ebdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15ebe0: 0x3e00008
    ctx->pc = 0x15EBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EBE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E5BCu: goto label_15e5bc;
            case 0x15E5E8u: goto label_15e5e8;
            case 0x15E614u: goto label_15e614;
            case 0x15E694u: goto label_15e694;
            case 0x15E78Cu: goto label_15e78c;
            case 0x15E7A0u: goto label_15e7a0;
            case 0x15E804u: goto label_15e804;
            case 0x15E808u: goto label_15e808;
            case 0x15E81Cu: goto label_15e81c;
            case 0x15E850u: goto label_15e850;
            case 0x15E8D4u: goto label_15e8d4;
            case 0x15E8D8u: goto label_15e8d8;
            case 0x15E918u: goto label_15e918;
            case 0x15E9B4u: goto label_15e9b4;
            case 0x15E9BCu: goto label_15e9bc;
            case 0x15E9C0u: goto label_15e9c0;
            case 0x15E9D0u: goto label_15e9d0;
            case 0x15E9E0u: goto label_15e9e0;
            case 0x15E9E4u: goto label_15e9e4;
            case 0x15EA2Cu: goto label_15ea2c;
            case 0x15EAA8u: goto label_15eaa8;
            case 0x15EAC4u: goto label_15eac4;
            case 0x15EACCu: goto label_15eacc;
            case 0x15EAE0u: goto label_15eae0;
            case 0x15EB04u: goto label_15eb04;
            case 0x15EB20u: goto label_15eb20;
            case 0x15EB28u: goto label_15eb28;
            case 0x15EB6Cu: goto label_15eb6c;
            case 0x15EB74u: goto label_15eb74;
            case 0x15EBACu: goto label_15ebac;
            case 0x15EBB8u: goto label_15ebb8;
            case 0x15EBBCu: goto label_15ebbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15EBE8u;
}
