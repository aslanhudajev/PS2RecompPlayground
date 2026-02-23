#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dpdiv
// Address: 0x14b588 - 0x14b6f0
void dpdiv_0x14b588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dpdiv");


    ctx->pc = 0x14b588u;

    // 0x14b588: 0x27bdff90
    ctx->pc = 0x14b588u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14b58c: 0xffa40040
    ctx->pc = 0x14b58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x14b590: 0xffa50048
    ctx->pc = 0x14b590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x14b594: 0x27a40040
    ctx->pc = 0x14b594u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x14b598: 0xffb00050
    ctx->pc = 0x14b598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x14b59c: 0xffbf0060
    ctx->pc = 0x14b59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14b5a0: 0xc052bd0
    ctx->pc = 0x14B5A0u;
    SET_GPR_U32(ctx, 31, 0x14B5A8u);
    ctx->pc = 0x14B5A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14AF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x14af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5A8u; }
        else if (ctx->pc != 0x14B5A8u) { ctx->pc = 0x14B5A8u; }
    }
    if (ctx->pc != 0x14B5A8u) { return; }
    ctx->pc = 0x14B5A8u;
    // 0x14b5a8: 0x27b00020
    ctx->pc = 0x14b5a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x14b5ac: 0x27a40048
    ctx->pc = 0x14b5acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 72));
    // 0x14b5b0: 0xc052bd0
    ctx->pc = 0x14B5B0u;
    SET_GPR_U32(ctx, 31, 0x14B5B8u);
    ctx->pc = 0x14B5B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14AF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x14af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5B8u; }
        else if (ctx->pc != 0x14B5B8u) { ctx->pc = 0x14B5B8u; }
    }
    if (ctx->pc != 0x14B5B8u) { return; }
    ctx->pc = 0x14B5B8u;
    // 0x14b5b8: 0x8fa70000
    ctx->pc = 0x14b5b8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b5bc: 0x2ce20002
    ctx->pc = 0x14b5bcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 2));
    // 0x14b5c0: 0x10400003
    ctx->pc = 0x14B5C0u;
    {
        const bool branch_taken_0x14b5c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B5C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14b5c0) {
            ctx->pc = 0x14B5D0u;
            goto label_14b5d0;
        }
    }
    ctx->pc = 0x14B5C8u;
    // 0x14b5c8: 0x10000043
    ctx->pc = 0x14B5C8u;
    {
        const bool branch_taken_0x14b5c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B5CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14b5c8) {
            ctx->pc = 0x14B6D8u;
            goto label_14b6d8;
        }
    }
    ctx->pc = 0x14B5D0u;
label_14b5d0:
    // 0x14b5d0: 0x8fa60020
    ctx->pc = 0x14b5d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b5d4: 0x2cc20002
    ctx->pc = 0x14b5d4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 2));
    // 0x14b5d8: 0x1440003f
    ctx->pc = 0x14B5D8u;
    {
        const bool branch_taken_0x14b5d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B5DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14b5d8) {
            ctx->pc = 0x14B6D8u;
            goto label_14b6d8;
        }
    }
    ctx->pc = 0x14B5E0u;
    // 0x14b5e0: 0x8fa20004
    ctx->pc = 0x14b5e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14b5e4: 0x38e40004
    ctx->pc = 0x14b5e4u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 7), 4));
    // 0x14b5e8: 0x8fa30024
    ctx->pc = 0x14b5e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x14b5ec: 0x431026
    ctx->pc = 0x14b5ecu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b5f0: 0x10800004
    ctx->pc = 0x14B5F0u;
    {
        const bool branch_taken_0x14b5f0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B5F4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x14b5f0) {
            ctx->pc = 0x14B604u;
            goto label_14b604;
        }
    }
    ctx->pc = 0x14B5F8u;
    // 0x14b5f8: 0x38e20002
    ctx->pc = 0x14b5f8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 7), 2));
    // 0x14b5fc: 0x14400006
    ctx->pc = 0x14B5FCu;
    {
        const bool branch_taken_0x14b5fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B600u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x14b5fc) {
            ctx->pc = 0x14B618u;
            goto label_14b618;
        }
    }
    ctx->pc = 0x14B604u;
label_14b604:
    // 0x14b604: 0x14e60034
    ctx->pc = 0x14B604u;
    {
        const bool branch_taken_0x14b604 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 6));
        ctx->pc = 0x14B608u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14b604) {
            ctx->pc = 0x14B6D8u;
            goto label_14b6d8;
        }
    }
    ctx->pc = 0x14B60Cu;
    // 0x14b60c: 0x3c02002d
    ctx->pc = 0x14b60cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x14b610: 0x10000031
    ctx->pc = 0x14B610u;
    {
        const bool branch_taken_0x14b610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B614u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 26856));
        if (branch_taken_0x14b610) {
            ctx->pc = 0x14B6D8u;
            goto label_14b6d8;
        }
    }
    ctx->pc = 0x14B618u;
label_14b618:
    // 0x14b618: 0x14400005
    ctx->pc = 0x14B618u;
    {
        const bool branch_taken_0x14b618 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B61Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x14b618) {
            ctx->pc = 0x14B630u;
            goto label_14b630;
        }
    }
    ctx->pc = 0x14B620u;
    // 0x14b620: 0xffa00010
    ctx->pc = 0x14b620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x14b624: 0x3a0202d
    ctx->pc = 0x14b624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b628: 0x1000002b
    ctx->pc = 0x14B628u;
    {
        const bool branch_taken_0x14b628 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B62Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x14b628) {
            ctx->pc = 0x14B6D8u;
            goto label_14b6d8;
        }
    }
    ctx->pc = 0x14B630u;
label_14b630:
    // 0x14b630: 0x14400005
    ctx->pc = 0x14B630u;
    {
        const bool branch_taken_0x14b630 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B634u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x14b630) {
            ctx->pc = 0x14B648u;
            goto label_14b648;
        }
    }
    ctx->pc = 0x14B638u;
    // 0x14b638: 0x24020004
    ctx->pc = 0x14b638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x14b63c: 0x3a0202d
    ctx->pc = 0x14b63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b640: 0x10000025
    ctx->pc = 0x14B640u;
    {
        const bool branch_taken_0x14b640 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B644u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x14b640) {
            ctx->pc = 0x14B6D8u;
            goto label_14b6d8;
        }
    }
    ctx->pc = 0x14B648u;
label_14b648:
    // 0x14b648: 0x8fa20028
    ctx->pc = 0x14b648u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b64c: 0xdfa40010
    ctx->pc = 0x14b64cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b650: 0xdfa80030
    ctx->pc = 0x14b650u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b654: 0x621023
    ctx->pc = 0x14b654u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b658: 0x88302b
    ctx->pc = 0x14b658u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x14b65c: 0x10c00005
    ctx->pc = 0x14B65Cu;
    {
        const bool branch_taken_0x14b65c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B660u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x14b65c) {
            ctx->pc = 0x14B674u;
            goto label_14b674;
        }
    }
    ctx->pc = 0x14B664u;
    // 0x14b664: 0x2442ffff
    ctx->pc = 0x14b664u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14b668: 0x42078
    ctx->pc = 0x14b668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x14b66c: 0xafa20008
    ctx->pc = 0x14b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x14b670: 0x88302b
    ctx->pc = 0x14b670u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_14b674:
    // 0x14b674: 0x34028000
    ctx->pc = 0x14b674u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x14b678: 0x2137c
    ctx->pc = 0x14b678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x14b67c: 0x10000003
    ctx->pc = 0x14B67Cu;
    {
        const bool branch_taken_0x14b67c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B680u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14b67c) {
            ctx->pc = 0x14B68Cu;
            goto label_14b68c;
        }
    }
    ctx->pc = 0x14B684u;
    // 0x14b684: 0x0
    ctx->pc = 0x14b684u;
    // NOP
label_14b688:
    // 0x14b688: 0x88302b
    ctx->pc = 0x14b688u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_14b68c:
    // 0x14b68c: 0x54c00004
    ctx->pc = 0x14B68Cu;
    {
        const bool branch_taken_0x14b68c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x14b68c) {
            ctx->pc = 0x14B690u;
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
            ctx->pc = 0x14B6A0u;
            goto label_14b6a0;
        }
    }
    ctx->pc = 0x14B694u;
    // 0x14b694: 0xe23825
    ctx->pc = 0x14b694u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x14b698: 0x88202f
    ctx->pc = 0x14b698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x14b69c: 0x2107a
    ctx->pc = 0x14b69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_14b6a0:
    // 0x14b6a0: 0x1440fff9
    ctx->pc = 0x14B6A0u;
    {
        const bool branch_taken_0x14b6a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B6A4u;
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        if (branch_taken_0x14b6a0) {
            ctx->pc = 0x14B688u;
            goto label_14b688;
        }
    }
    ctx->pc = 0x14B6A8u;
    // 0x14b6a8: 0x30e300ff
    ctx->pc = 0x14b6a8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 7), 255));
    // 0x14b6ac: 0x24020080
    ctx->pc = 0x14b6acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x14b6b0: 0x54620008
    ctx->pc = 0x14B6B0u;
    {
        const bool branch_taken_0x14b6b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x14b6b0) {
            ctx->pc = 0x14B6B4u;
            WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
            ctx->pc = 0x14B6D4u;
            goto label_14b6d4;
        }
    }
    ctx->pc = 0x14B6B8u;
    // 0x14b6b8: 0x30e20100
    ctx->pc = 0x14b6b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 256));
    // 0x14b6bc: 0x10400003
    ctx->pc = 0x14B6BCu;
    {
        const bool branch_taken_0x14b6bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B6C0u;
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)128);
        if (branch_taken_0x14b6bc) {
            ctx->pc = 0x14B6CCu;
            goto label_14b6cc;
        }
    }
    ctx->pc = 0x14B6C4u;
    // 0x14b6c4: 0x10000002
    ctx->pc = 0x14B6C4u;
    {
        const bool branch_taken_0x14b6c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B6C8u;
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)128);
        if (branch_taken_0x14b6c4) {
            ctx->pc = 0x14B6D0u;
            goto label_14b6d0;
        }
    }
    ctx->pc = 0x14B6CCu;
label_14b6cc:
    // 0x14b6cc: 0x44380b
    ctx->pc = 0x14b6ccu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
label_14b6d0:
    // 0x14b6d0: 0xfca70010
    ctx->pc = 0x14b6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_14b6d4:
    // 0x14b6d4: 0xa0202d
    ctx->pc = 0x14b6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14b6d8:
    // 0x14b6d8: 0xc052b84
    ctx->pc = 0x14B6D8u;
    SET_GPR_U32(ctx, 31, 0x14B6E0u);
    ctx->pc = 0x14AE10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x14ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B6E0u; }
        else if (ctx->pc != 0x14B6E0u) { ctx->pc = 0x14B6E0u; }
    }
    if (ctx->pc != 0x14B6E0u) { return; }
    ctx->pc = 0x14B6E0u;
    // 0x14b6e0: 0xdfbf0060
    ctx->pc = 0x14b6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14b6e4: 0xdfb00050
    ctx->pc = 0x14b6e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b6e8: 0x3e00008
    ctx->pc = 0x14B6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B6ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14B5D0u: goto label_14b5d0;
            case 0x14B604u: goto label_14b604;
            case 0x14B618u: goto label_14b618;
            case 0x14B630u: goto label_14b630;
            case 0x14B648u: goto label_14b648;
            case 0x14B674u: goto label_14b674;
            case 0x14B688u: goto label_14b688;
            case 0x14B68Cu: goto label_14b68c;
            case 0x14B6A0u: goto label_14b6a0;
            case 0x14B6CCu: goto label_14b6cc;
            case 0x14B6D0u: goto label_14b6d0;
            case 0x14B6D4u: goto label_14b6d4;
            case 0x14B6D8u: goto label_14b6d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B6F0u;
}
