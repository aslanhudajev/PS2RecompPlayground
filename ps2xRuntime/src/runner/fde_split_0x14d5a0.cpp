#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: fde_split
// Address: 0x14d5a0 - 0x14d714
void fde_split_0x14d5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("fde_split");


    ctx->pc = 0x14d5a0u;

    // 0x14d5a0: 0x27bdffc0
    ctx->pc = 0x14d5a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14d5a4: 0x80782d
    ctx->pc = 0x14d5a4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5a8: 0xffbe0030
    ctx->pc = 0x14d5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x14d5ac: 0x3c04ffff
    ctx->pc = 0x14d5acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x14d5b0: 0xffb00020
    ctx->pc = 0x14d5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x14d5b4: 0x3a0f02d
    ctx->pc = 0x14d5b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5b8: 0xa0602d
    ctx->pc = 0x14d5b8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5bc: 0x3484ffff
    ctx->pc = 0x14d5bcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x14d5c0: 0x8df80004
    ctx->pc = 0x14d5c0u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x14d5c4: 0x482d
    ctx->pc = 0x14d5c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5c8: 0x181140
    ctx->pc = 0x14d5c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 24), 5));
    // 0x14d5cc: 0x210c2
    ctx->pc = 0x14d5ccu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 3));
    // 0x14d5d0: 0x2442000f
    ctx->pc = 0x14d5d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15));
    // 0x14d5d4: 0x21102
    ctx->pc = 0x14d5d4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x14d5d8: 0x21100
    ctx->pc = 0x14d5d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x14d5dc: 0x3a2e823
    ctx->pc = 0x14d5dcu;
    SET_GPR_U32(ctx, 29, SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x14d5e0: 0x13000036
    ctx->pc = 0x14D5E0u;
    {
        const bool branch_taken_0x14d5e0 = (GPR_U32(ctx, 24) == GPR_U32(ctx, 0));
        ctx->pc = 0x14D5E4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14d5e0) {
            ctx->pc = 0x14D6BCu;
            goto label_14d6bc;
        }
    }
    ctx->pc = 0x14D5E8u;
    // 0x14d5e8: 0x3c0dffff
    ctx->pc = 0x14d5e8u;
    SET_GPR_U32(ctx, 13, ((uint32_t)65535 << 16));
    // 0x14d5ec: 0x35adffff
    ctx->pc = 0x14d5ecu;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), 65535));
label_14d5f0:
    // 0x14d5f0: 0x80402d
    ctx->pc = 0x14d5f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5f4: 0x110d0029
    ctx->pc = 0x14D5F4u;
    {
        const bool branch_taken_0x14d5f4 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 13));
        ctx->pc = 0x14D5F8u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 9), 2));
        if (branch_taken_0x14d5f4) {
            ctx->pc = 0x14D69Cu;
            goto label_14d69c;
        }
    }
    ctx->pc = 0x14D5FCu;
    // 0x14d5fc: 0x8de70000
    ctx->pc = 0x14d5fcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x14d600: 0x83080
    ctx->pc = 0x14d600u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 8), 2));
    // 0x14d604: 0x1671021
    ctx->pc = 0x14d604u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x14d608: 0xc71821
    ctx->pc = 0x14d608u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x14d60c: 0x8c440000
    ctx->pc = 0x14d60cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d610: 0x8c650000
    ctx->pc = 0x14d610u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d614: 0x8c820008
    ctx->pc = 0x14d614u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14d618: 0x8ca30008
    ctx->pc = 0x14d618u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14d61c: 0x431023
    ctx->pc = 0x14d61cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d620: 0x441001e
    ctx->pc = 0x14D620u;
    {
        const bool branch_taken_0x14d620 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14D624u;
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14d620) {
            ctx->pc = 0x14D69Cu;
            goto label_14d69c;
        }
    }
    ctx->pc = 0x14D628u;
    // 0x14d628: 0x8d8e0000
    ctx->pc = 0x14d628u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x14d62c: 0x252a0001
    ctx->pc = 0x14d62cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 9), 1));
label_14d630:
    // 0x14d630: 0x8d840004
    ctx->pc = 0x14d630u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x14d634: 0xc71021
    ctx->pc = 0x14d634u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x14d638: 0x8c450000
    ctx->pc = 0x14d638u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d63c: 0x2061821
    ctx->pc = 0x14d63cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x14d640: 0x41080
    ctx->pc = 0x14d640u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x14d644: 0x8c680000
    ctx->pc = 0x14d644u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d648: 0x4e1021
    ctx->pc = 0x14d648u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x14d64c: 0x24840001
    ctx->pc = 0x14d64cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x14d650: 0xac450000
    ctx->pc = 0x14d650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x14d654: 0xad840004
    ctx->pc = 0x14d654u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 4));
    // 0x14d658: 0x8de70000
    ctx->pc = 0x14d658u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x14d65c: 0xc71021
    ctx->pc = 0x14d65cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x14d660: 0x110d000f
    ctx->pc = 0x14D660u;
    {
        const bool branch_taken_0x14d660 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 13));
        ctx->pc = 0x14D664u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x14d660) {
            ctx->pc = 0x14D6A0u;
            goto label_14d6a0;
        }
    }
    ctx->pc = 0x14D668u;
    // 0x14d668: 0x81080
    ctx->pc = 0x14d668u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 2));
    // 0x14d66c: 0x3271821
    ctx->pc = 0x14d66cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x14d670: 0x40302d
    ctx->pc = 0x14d670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d674: 0x8c650000
    ctx->pc = 0x14d674u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d678: 0xc71021
    ctx->pc = 0x14d678u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x14d67c: 0x8c440000
    ctx->pc = 0x14d67cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d680: 0x8ca30008
    ctx->pc = 0x14d680u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14d684: 0x8c820008
    ctx->pc = 0x14d684u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14d688: 0x621823
    ctx->pc = 0x14d688u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d68c: 0x460ffe8
    ctx->pc = 0x14D68Cu;
    {
        const bool branch_taken_0x14d68c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x14D690u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14d68c) {
            ctx->pc = 0x14D630u;
            goto label_14d630;
        }
    }
    ctx->pc = 0x14D694u;
    // 0x14d694: 0x10000004
    ctx->pc = 0x14D694u;
    {
        const bool branch_taken_0x14d694 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14D698u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
        if (branch_taken_0x14d694) {
            ctx->pc = 0x14D6A8u;
            goto label_14d6a8;
        }
    }
    ctx->pc = 0x14D69Cu;
label_14d69c:
    // 0x14d69c: 0x252a0001
    ctx->pc = 0x14d69cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 9), 1));
label_14d6a0:
    // 0x14d6a0: 0x120202d
    ctx->pc = 0x14d6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d6a4: 0x20b1821
    ctx->pc = 0x14d6a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
label_14d6a8:
    // 0x14d6a8: 0x140482d
    ctx->pc = 0x14d6a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d6ac: 0x138102b
    ctx->pc = 0x14d6acu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 9), GPR_U32(ctx, 24)));
    // 0x14d6b0: 0x1440ffcf
    ctx->pc = 0x14D6B0u;
    {
        const bool branch_taken_0x14d6b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14D6B4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        if (branch_taken_0x14d6b0) {
            ctx->pc = 0x14D5F0u;
            goto label_14d5f0;
        }
    }
    ctx->pc = 0x14D6B8u;
    // 0x14d6b8: 0x482d
    ctx->pc = 0x14d6b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d6bc:
    // 0x14d6bc: 0x1300000f
    ctx->pc = 0x14D6BCu;
    {
        const bool branch_taken_0x14d6bc = (GPR_U32(ctx, 24) == GPR_U32(ctx, 0));
        ctx->pc = 0x14D6C0u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14d6bc) {
            ctx->pc = 0x14D6FCu;
            goto label_14d6fc;
        }
    }
    ctx->pc = 0x14D6C4u;
    // 0x14d6c4: 0x8de70000
    ctx->pc = 0x14d6c4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x14d6c8: 0x91080
    ctx->pc = 0x14d6c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 2));
    // 0x14d6cc: 0x0
    ctx->pc = 0x14d6ccu;
    // NOP
label_14d6d0:
    // 0x14d6d0: 0x471021
    ctx->pc = 0x14d6d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x14d6d4: 0x8c430000
    ctx->pc = 0x14d6d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d6d8: 0x10600004
    ctx->pc = 0x14D6D8u;
    {
        const bool branch_taken_0x14d6d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x14D6DCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 2));
        if (branch_taken_0x14d6d8) {
            ctx->pc = 0x14D6ECu;
            goto label_14d6ec;
        }
    }
    ctx->pc = 0x14D6E0u;
    // 0x14d6e0: 0x471021
    ctx->pc = 0x14d6e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x14d6e4: 0x25080001
    ctx->pc = 0x14d6e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x14d6e8: 0xac430000
    ctx->pc = 0x14d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_14d6ec:
    // 0x14d6ec: 0x25290001
    ctx->pc = 0x14d6ecu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x14d6f0: 0x138102b
    ctx->pc = 0x14d6f0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 9), GPR_U32(ctx, 24)));
    // 0x14d6f4: 0x1440fff6
    ctx->pc = 0x14D6F4u;
    {
        const bool branch_taken_0x14d6f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14D6F8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 2));
        if (branch_taken_0x14d6f4) {
            ctx->pc = 0x14D6D0u;
            goto label_14d6d0;
        }
    }
    ctx->pc = 0x14D6FCu;
label_14d6fc:
    // 0x14d6fc: 0xade80004
    ctx->pc = 0x14d6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 8));
    // 0x14d700: 0x3c0e82d
    ctx->pc = 0x14d700u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d704: 0xdfbe0030
    ctx->pc = 0x14d704u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d708: 0xdfb00020
    ctx->pc = 0x14d708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d70c: 0x3e00008
    ctx->pc = 0x14D70Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D710u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D5F0u: goto label_14d5f0;
            case 0x14D630u: goto label_14d630;
            case 0x14D69Cu: goto label_14d69c;
            case 0x14D6A0u: goto label_14d6a0;
            case 0x14D6A8u: goto label_14d6a8;
            case 0x14D6BCu: goto label_14d6bc;
            case 0x14D6D0u: goto label_14d6d0;
            case 0x14D6ECu: goto label_14d6ec;
            case 0x14D6FCu: goto label_14d6fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14D714u;
}
