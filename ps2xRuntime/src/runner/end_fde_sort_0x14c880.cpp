#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: end_fde_sort
// Address: 0x14c880 - 0x14cae4
void end_fde_sort_0x14c880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("end_fde_sort");


    ctx->pc = 0x14c880u;

    // 0x14c880: 0x27bdffc0
    ctx->pc = 0x14c880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14c884: 0xffb10010
    ctx->pc = 0x14c884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x14c888: 0xffbf0030
    ctx->pc = 0x14c888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14c88c: 0x80882d
    ctx->pc = 0x14c88cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c890: 0xffb20020
    ctx->pc = 0x14c890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14c894: 0xffb00000
    ctx->pc = 0x14c894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14c898: 0x8e300004
    ctx->pc = 0x14c898u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14c89c: 0x12050003
    ctx->pc = 0x14C89Cu;
    {
        const bool branch_taken_0x14c89c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 5));
        ctx->pc = 0x14C8A0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x14c89c) {
            ctx->pc = 0x14C8ACu;
            goto label_14c8ac;
        }
    }
    ctx->pc = 0x14C8A4u;
    // 0x14c8a4: 0xc050034
    ctx->pc = 0x14C8A4u;
    SET_GPR_U32(ctx, 31, 0x14C8ACu);
    ctx->pc = 0x1400D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        abort_0x1400d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C8ACu; }
        else if (ctx->pc != 0x14C8ACu) { ctx->pc = 0x14C8ACu; }
    }
    if (ctx->pc != 0x14C8ACu) { return; }
    ctx->pc = 0x14C8ACu;
label_14c8ac:
    // 0x14c8ac: 0x220202d
    ctx->pc = 0x14c8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8b0: 0xc053568
    ctx->pc = 0x14C8B0u;
    SET_GPR_U32(ctx, 31, 0x14C8B8u);
    ctx->pc = 0x14C8B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14D5A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fde_split_0x14d5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C8B8u; }
        else if (ctx->pc != 0x14C8B8u) { ctx->pc = 0x14C8B8u; }
    }
    if (ctx->pc != 0x14C8B8u) { return; }
    ctx->pc = 0x14C8B8u;
    // 0x14c8b8: 0x8e220004
    ctx->pc = 0x14c8b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14c8bc: 0x8e23000c
    ctx->pc = 0x14c8bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14c8c0: 0x431021
    ctx->pc = 0x14c8c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c8c4: 0x50500003
    ctx->pc = 0x14C8C4u;
    {
        const bool branch_taken_0x14c8c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        if (branch_taken_0x14c8c4) {
            ctx->pc = 0x14C8C8u;
            SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x14C8D4u;
            goto label_14c8d4;
        }
    }
    ctx->pc = 0x14C8CCu;
    // 0x14c8cc: 0xc050034
    ctx->pc = 0x14C8CCu;
    SET_GPR_U32(ctx, 31, 0x14C8D4u);
    ctx->pc = 0x1400D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        abort_0x1400d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C8D4u; }
        else if (ctx->pc != 0x14C8D4u) { ctx->pc = 0x14C8D4u; }
    }
    if (ctx->pc != 0x14C8D4u) { return; }
    ctx->pc = 0x14C8D4u;
label_14c8d4:
    // 0x14c8d4: 0x8e2b0008
    ctx->pc = 0x14c8d4u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14c8d8: 0x11a00034
    ctx->pc = 0x14C8D8u;
    {
        const bool branch_taken_0x14c8d8 = (GPR_U32(ctx, 13) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C8DCu;
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14c8d8) {
            ctx->pc = 0x14C9ACu;
            goto label_14c9ac;
        }
    }
    ctx->pc = 0x14C8E0u;
    // 0x14c8e0: 0x2daf0002
    ctx->pc = 0x14c8e0u;
    SET_GPR_U32(ctx, 15, SLTU32(GPR_U32(ctx, 13), 2));
    // 0x14c8e4: 0x25c4ffff
    ctx->pc = 0x14c8e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 14), 4294967295));
label_14c8e8:
    // 0x14c8e8: 0x45040
    ctx->pc = 0x14c8e8u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 4), 1));
    // 0x14c8ec: 0x10000027
    ctx->pc = 0x14C8ECu;
    {
        const bool branch_taken_0x14c8ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C8F0u;
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14c8ec) {
            ctx->pc = 0x14C98Cu;
            goto label_14c98c;
        }
    }
    ctx->pc = 0x14C8F4u;
    // 0x14c8f4: 0x0
    ctx->pc = 0x14c8f4u;
    // NOP
label_14c8f8:
    // 0x14c8f8: 0x246c0002
    ctx->pc = 0x14c8f8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 3), 2));
    // 0x14c8fc: 0x18d102b
    ctx->pc = 0x14c8fcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x14c900: 0x10400013
    ctx->pc = 0x14C900u;
    {
        const bool branch_taken_0x14c900 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C904u;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x14c900) {
            ctx->pc = 0x14C950u;
            goto label_14c950;
        }
    }
    ctx->pc = 0x14C908u;
    // 0x14c908: 0xeb4021
    ctx->pc = 0x14c908u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x14c90c: 0x8d090008
    ctx->pc = 0x14c90cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x14c910: 0x8d030004
    ctx->pc = 0x14c910u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x14c914: 0x8d260008
    ctx->pc = 0x14c914u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x14c918: 0x8c620008
    ctx->pc = 0x14c918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14c91c: 0xc21023
    ctx->pc = 0x14c91cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14c920: 0x1840000c
    ctx->pc = 0x14C920u;
    {
        const bool branch_taken_0x14c920 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14C924u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x14c920) {
            ctx->pc = 0x14C954u;
            goto label_14c954;
        }
    }
    ctx->pc = 0x14C928u;
    // 0x14c928: 0xab1821
    ctx->pc = 0x14c928u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x14c92c: 0x8c640000
    ctx->pc = 0x14c92cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14c930: 0x8c820008
    ctx->pc = 0x14c930u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14c934: 0xc21023
    ctx->pc = 0x14c934u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14c938: 0x18400007
    ctx->pc = 0x14C938u;
    {
        const bool branch_taken_0x14c938 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14C93Cu;
        SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        if (branch_taken_0x14c938) {
            ctx->pc = 0x14C958u;
            goto label_14c958;
        }
    }
    ctx->pc = 0x14C940u;
    // 0x14c940: 0xac690000
    ctx->pc = 0x14c940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x14c944: 0xad040008
    ctx->pc = 0x14c944u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x14c948: 0x1000000f
    ctx->pc = 0x14C948u;
    {
        const bool branch_taken_0x14c948 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C94Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14c948) {
            ctx->pc = 0x14C988u;
            goto label_14c988;
        }
    }
    ctx->pc = 0x14C950u;
label_14c950:
    // 0x14c950: 0x42880
    ctx->pc = 0x14c950u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 2));
label_14c954:
    // 0x14c954: 0xeb3821
    ctx->pc = 0x14c954u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_14c958:
    // 0x14c958: 0xab3021
    ctx->pc = 0x14c958u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x14c95c: 0x8ce40004
    ctx->pc = 0x14c95cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x14c960: 0x8cc50000
    ctx->pc = 0x14c960u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14c964: 0x8c820008
    ctx->pc = 0x14c964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14c968: 0x8ca30008
    ctx->pc = 0x14c968u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14c96c: 0x431023
    ctx->pc = 0x14c96cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c970: 0x1840000a
    ctx->pc = 0x14C970u;
    {
        const bool branch_taken_0x14c970 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x14c970) {
            ctx->pc = 0x14C99Cu;
            goto label_14c99c;
        }
    }
    ctx->pc = 0x14C978u;
    // 0x14c978: 0xacc40000
    ctx->pc = 0x14c978u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x14c97c: 0xace50004
    ctx->pc = 0x14c97cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x14c980: 0x25440001
    ctx->pc = 0x14c980u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 10), 1));
    // 0x14c984: 0x0
    ctx->pc = 0x14c984u;
    // NOP
label_14c988:
    // 0x14c988: 0x45040
    ctx->pc = 0x14c988u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 4), 1));
label_14c98c:
    // 0x14c98c: 0x25420001
    ctx->pc = 0x14c98cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 10), 1));
    // 0x14c990: 0x4d102b
    ctx->pc = 0x14c990u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x14c994: 0x1440ffd8
    ctx->pc = 0x14C994u;
    {
        const bool branch_taken_0x14c994 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C998u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14c994) {
            ctx->pc = 0x14C8F8u;
            goto label_14c8f8;
        }
    }
    ctx->pc = 0x14C99Cu;
label_14c99c:
    // 0x14c99c: 0x15c0ffd2
    ctx->pc = 0x14C99Cu;
    {
        const bool branch_taken_0x14c99c = (GPR_U32(ctx, 14) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C9A0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 14), 4294967295));
        if (branch_taken_0x14c99c) {
            ctx->pc = 0x14C8E8u;
            goto label_14c8e8;
        }
    }
    ctx->pc = 0x14C9A4u;
    // 0x14c9a4: 0x10000002
    ctx->pc = 0x14C9A4u;
    {
        const bool branch_taken_0x14c9a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x14c9a4) {
            ctx->pc = 0x14C9B0u;
            goto label_14c9b0;
        }
    }
    ctx->pc = 0x14C9ACu;
label_14c9ac:
    // 0x14c9ac: 0x240f0001
    ctx->pc = 0x14c9acu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 1));
label_14c9b0:
    // 0x14c9b0: 0x15e00041
    ctx->pc = 0x14C9B0u;
    {
        const bool branch_taken_0x14c9b0 = (GPR_U32(ctx, 15) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C9B4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14c9b0) {
            ctx->pc = 0x14CAB8u;
            goto label_14cab8;
        }
    }
    ctx->pc = 0x14C9B8u;
    // 0x14c9b8: 0xd1080
    ctx->pc = 0x14c9b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 13), 2));
    // 0x14c9bc: 0x24100001
    ctx->pc = 0x14c9bcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c9c0: 0x4b7021
    ctx->pc = 0x14c9c0u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x14c9c4: 0x25cefffc
    ctx->pc = 0x14c9c4u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 4294967292));
label_14c9c8:
    // 0x14c9c8: 0x25adffff
    ctx->pc = 0x14c9c8u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x14c9cc: 0x8d620000
    ctx->pc = 0x14c9ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x14c9d0: 0x8dc30000
    ctx->pc = 0x14c9d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x14c9d4: 0xad630000
    ctx->pc = 0x14c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x14c9d8: 0xadc20000
    ctx->pc = 0x14c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x14c9dc: 0x20d102b
    ctx->pc = 0x14c9dcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x14c9e0: 0x10400031
    ctx->pc = 0x14C9E0u;
    {
        const bool branch_taken_0x14c9e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C9E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14c9e0) {
            ctx->pc = 0x14CAA8u;
            goto label_14caa8;
        }
    }
    ctx->pc = 0x14C9E8u;
    // 0x14c9e8: 0x502d
    ctx->pc = 0x14c9e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9ec: 0x2daf0002
    ctx->pc = 0x14c9ecu;
    SET_GPR_U32(ctx, 15, SLTU32(GPR_U32(ctx, 13), 2));
    // 0x14c9f0: 0x254c0002
    ctx->pc = 0x14c9f0u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 10), 2));
    // 0x14c9f4: 0x0
    ctx->pc = 0x14c9f4u;
    // NOP
label_14c9f8:
    // 0x14c9f8: 0x18d102b
    ctx->pc = 0x14c9f8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x14c9fc: 0x10400014
    ctx->pc = 0x14C9FCu;
    {
        const bool branch_taken_0x14c9fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CA00u;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x14c9fc) {
            ctx->pc = 0x14CA50u;
            goto label_14ca50;
        }
    }
    ctx->pc = 0x14CA04u;
    // 0x14ca04: 0xeb4021
    ctx->pc = 0x14ca04u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x14ca08: 0x8d090008
    ctx->pc = 0x14ca08u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x14ca0c: 0x8d030004
    ctx->pc = 0x14ca0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x14ca10: 0x8d260008
    ctx->pc = 0x14ca10u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x14ca14: 0x8c620008
    ctx->pc = 0x14ca14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14ca18: 0xc21023
    ctx->pc = 0x14ca18u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14ca1c: 0x1840000d
    ctx->pc = 0x14CA1Cu;
    {
        const bool branch_taken_0x14ca1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14CA20u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x14ca1c) {
            ctx->pc = 0x14CA54u;
            goto label_14ca54;
        }
    }
    ctx->pc = 0x14CA24u;
    // 0x14ca24: 0xab1821
    ctx->pc = 0x14ca24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x14ca28: 0x8c640000
    ctx->pc = 0x14ca28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ca2c: 0x8c820008
    ctx->pc = 0x14ca2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14ca30: 0xc21023
    ctx->pc = 0x14ca30u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14ca34: 0x18400008
    ctx->pc = 0x14CA34u;
    {
        const bool branch_taken_0x14ca34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14CA38u;
        SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        if (branch_taken_0x14ca34) {
            ctx->pc = 0x14CA58u;
            goto label_14ca58;
        }
    }
    ctx->pc = 0x14CA3Cu;
    // 0x14ca3c: 0xac690000
    ctx->pc = 0x14ca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x14ca40: 0xad040008
    ctx->pc = 0x14ca40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x14ca44: 0x10000010
    ctx->pc = 0x14CA44u;
    {
        const bool branch_taken_0x14ca44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CA48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14ca44) {
            ctx->pc = 0x14CA88u;
            goto label_14ca88;
        }
    }
    ctx->pc = 0x14CA4Cu;
    // 0x14ca4c: 0x0
    ctx->pc = 0x14ca4cu;
    // NOP
label_14ca50:
    // 0x14ca50: 0x42880
    ctx->pc = 0x14ca50u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 2));
label_14ca54:
    // 0x14ca54: 0xeb3821
    ctx->pc = 0x14ca54u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_14ca58:
    // 0x14ca58: 0xab3021
    ctx->pc = 0x14ca58u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x14ca5c: 0x8ce40004
    ctx->pc = 0x14ca5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x14ca60: 0x8cc50000
    ctx->pc = 0x14ca60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14ca64: 0x8c820008
    ctx->pc = 0x14ca64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14ca68: 0x8ca30008
    ctx->pc = 0x14ca68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14ca6c: 0x431023
    ctx->pc = 0x14ca6cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ca70: 0x1840000e
    ctx->pc = 0x14CA70u;
    {
        const bool branch_taken_0x14ca70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x14ca70) {
            ctx->pc = 0x14CAACu;
            goto label_14caac;
        }
    }
    ctx->pc = 0x14CA78u;
    // 0x14ca78: 0xacc40000
    ctx->pc = 0x14ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x14ca7c: 0xace50004
    ctx->pc = 0x14ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x14ca80: 0x25440001
    ctx->pc = 0x14ca80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 10), 1));
    // 0x14ca84: 0x0
    ctx->pc = 0x14ca84u;
    // NOP
label_14ca88:
    // 0x14ca88: 0x41840
    ctx->pc = 0x14ca88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x14ca8c: 0x60502d
    ctx->pc = 0x14ca8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca90: 0x25420001
    ctx->pc = 0x14ca90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 10), 1));
    // 0x14ca94: 0x4d102b
    ctx->pc = 0x14ca94u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x14ca98: 0x1440ffd7
    ctx->pc = 0x14CA98u;
    {
        const bool branch_taken_0x14ca98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14CA9Cu;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 10), 2));
        if (branch_taken_0x14ca98) {
            ctx->pc = 0x14C9F8u;
            goto label_14c9f8;
        }
    }
    ctx->pc = 0x14CAA0u;
    // 0x14caa0: 0x10000002
    ctx->pc = 0x14CAA0u;
    {
        const bool branch_taken_0x14caa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x14caa0) {
            ctx->pc = 0x14CAACu;
            goto label_14caac;
        }
    }
    ctx->pc = 0x14CAA8u;
label_14caa8:
    // 0x14caa8: 0x2daf0002
    ctx->pc = 0x14caa8u;
    SET_GPR_U32(ctx, 15, SLTU32(GPR_U32(ctx, 13), 2));
label_14caac:
    // 0x14caac: 0x11e0ffc6
    ctx->pc = 0x14CAACu;
    {
        const bool branch_taken_0x14caac = (GPR_U32(ctx, 15) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CAB0u;
        SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 4294967292));
        if (branch_taken_0x14caac) {
            ctx->pc = 0x14C9C8u;
            goto label_14c9c8;
        }
    }
    ctx->pc = 0x14CAB4u;
    // 0x14cab4: 0x240282d
    ctx->pc = 0x14cab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14cab8:
    // 0x14cab8: 0xc0531e0
    ctx->pc = 0x14CAB8u;
    SET_GPR_U32(ctx, 31, 0x14CAC0u);
    ctx->pc = 0x14CABCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14C780u;
    {
        const uint32_t __entryPc = ctx->pc;
        fde_merge_0x14c780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAC0u; }
        else if (ctx->pc != 0x14CAC0u) { ctx->pc = 0x14CAC0u; }
    }
    if (ctx->pc != 0x14CAC0u) { return; }
    ctx->pc = 0x14CAC0u;
    // 0x14cac0: 0xc0509aa
    ctx->pc = 0x14CAC0u;
    SET_GPR_U32(ctx, 31, 0x14CAC8u);
    ctx->pc = 0x14CAC4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x1426A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        free_0x1426a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAC8u; }
        else if (ctx->pc != 0x14CAC8u) { ctx->pc = 0x14CAC8u; }
    }
    if (ctx->pc != 0x14CAC8u) { return; }
    ctx->pc = 0x14CAC8u;
    // 0x14cac8: 0x8e220000
    ctx->pc = 0x14cac8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14cacc: 0xdfbf0030
    ctx->pc = 0x14caccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14cad0: 0xdfb20020
    ctx->pc = 0x14cad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14cad4: 0xdfb10010
    ctx->pc = 0x14cad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cad8: 0xdfb00000
    ctx->pc = 0x14cad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cadc: 0x3e00008
    ctx->pc = 0x14CADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CAE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C8ACu: goto label_14c8ac;
            case 0x14C8D4u: goto label_14c8d4;
            case 0x14C8E8u: goto label_14c8e8;
            case 0x14C8F8u: goto label_14c8f8;
            case 0x14C950u: goto label_14c950;
            case 0x14C954u: goto label_14c954;
            case 0x14C958u: goto label_14c958;
            case 0x14C988u: goto label_14c988;
            case 0x14C98Cu: goto label_14c98c;
            case 0x14C99Cu: goto label_14c99c;
            case 0x14C9ACu: goto label_14c9ac;
            case 0x14C9B0u: goto label_14c9b0;
            case 0x14C9C8u: goto label_14c9c8;
            case 0x14C9F8u: goto label_14c9f8;
            case 0x14CA50u: goto label_14ca50;
            case 0x14CA54u: goto label_14ca54;
            case 0x14CA58u: goto label_14ca58;
            case 0x14CA88u: goto label_14ca88;
            case 0x14CAA8u: goto label_14caa8;
            case 0x14CAACu: goto label_14caac;
            case 0x14CAB8u: goto label_14cab8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CAE4u;
}
