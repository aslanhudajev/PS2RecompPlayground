#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

// Function: pbDmaScheduleWait
// Address: 0x2a68c8 - 0x2a69f0
void pbDmaScheduleWait_0x2a68c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a68c8u;

    // 0x2a68c8: 0x27bdffb0
    ctx->pc = 0x2a68c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a68cc: 0xffbf0040
    ctx->pc = 0x2a68ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a68d0: 0xffbe0030
    ctx->pc = 0x2a68d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x2a68d4: 0xffb00020
    ctx->pc = 0x2a68d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a68d8: 0x3a0f02d
    ctx->pc = 0x2a68d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a68dc: 0xafc40000
    ctx->pc = 0x2a68dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a68e0: 0xafc50004
    ctx->pc = 0x2a68e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x2a68e4: 0xafc60008
    ctx->pc = 0x2a68e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x2a68e8: 0x3c100036
    ctx->pc = 0x2a68e8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a68ec: 0x8e10dee0
    ctx->pc = 0x2a68ecu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294958816)));
    // 0x2a68f0: 0xafc00018
    ctx->pc = 0x2a68f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
    // 0x2a68f4: 0x8fc20000
    ctx->pc = 0x2a68f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a68f8: 0x34430c00
    ctx->pc = 0x2a68f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 3072));
    // 0x2a68fc: 0xafc30000
    ctx->pc = 0x2a68fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x2a6900: 0x27c20018
    ctx->pc = 0x2a6900u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 24));
    // 0x2a6904: 0x8fc40000
    ctx->pc = 0x2a6904u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6908: 0x8fc50004
    ctx->pc = 0x2a6908u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a690c: 0x8fc60008
    ctx->pc = 0x2a690cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6910: 0x40382d
    ctx->pc = 0x2a6910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6914: 0xc0a99a8
    ctx->pc = 0x2A6914u;
    SET_GPR_U32(ctx, 31, 0x2A691Cu);
    ctx->pc = 0x2A66A0u;
    pbDmaSchedule_0x2a66a0(rdram, ctx, runtime);
    if (ctx->pc != 0x2A691Cu) { return; }
    ctx->pc = 0x2A691Cu;

    //! THIS IS A WORKAROUND
    //* Simulate DMA complete: set done flag and release the record so next pbDmaSchedule doesn't hit "using in-use rec"
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), 1u);
    {
        uint32_t rec_index = SRL32(READ32(ADD32(GPR_U32(ctx, 30), 0)), 12);
        uint32_t record_base = ((uint32_t)60 << 16) + 18408u;  // 0x3c47e8, same as pbDmaSchedule
        uint32_t record_addr = ADD32(record_base, SLL32(rec_index, 4));
        WRITE32(ADD32(record_addr, 4), 0u);  // clear record+4 so record is no longer "in use"
    }
    // 0x2a691c: 0xafc00014
    ctx->pc = 0x2a691cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 0));
    // 0x2a6920: 0xc0abc02
    ctx->pc = 0x2A6920u;
    SET_GPR_U32(ctx, 31, 0x2A6928u);
    ctx->pc = 0x2AF008u;
    pbGetCPUTime_0x2af008(rdram, ctx, runtime);
    if (ctx->pc != 0x2A6928u) { return; }
    ctx->pc = 0x2A6928u;
    // 0x2a6928: 0xafc20010
    ctx->pc = 0x2a6928u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x2a692c: 0x0
    ctx->pc = 0x2a692cu;
    // NOP
label_2a6930:
    // 0x2a6930: 0x8fc20018
    ctx->pc = 0x2a6930u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a6934: 0x10400003
    ctx->pc = 0x2A6934u;
    {
        const bool branch_taken_0x2a6934 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6934) {
            ctx->pc = 0x2A6944u;
            goto label_2a6944;
        }
    }
    ctx->pc = 0x2A693Cu;
    // 0x2a693c: 0x10000025
    ctx->pc = 0x2A693Cu;
    {
        const bool branch_taken_0x2a693c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a693c) {
            ctx->pc = 0x2A69D4u;
            goto label_2a69d4;
        }
    }
    ctx->pc = 0x2A6944u;
label_2a6944:
    // 0x2a6944: 0x8fc20010
    ctx->pc = 0x2a6944u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6948: 0xafc2000c
    ctx->pc = 0x2a6948u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x2a694c: 0xc0abc02
    ctx->pc = 0x2A694Cu;
    SET_GPR_U32(ctx, 31, 0x2A6954u);
    ctx->pc = 0x2AF008u;
    pbGetCPUTime_0x2af008(rdram, ctx, runtime);
    if (ctx->pc != 0x2A6954u) { return; }
    ctx->pc = 0x2A6954u;
    // 0x2a6954: 0xafc20010
    ctx->pc = 0x2a6954u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x2a6958: 0x8fc20010
    ctx->pc = 0x2a6958u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a695c: 0x8fc3000c
    ctx->pc = 0x2a695cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6960: 0x431023
    ctx->pc = 0x2a6960u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6964: 0xafc2000c
    ctx->pc = 0x2a6964u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x2a6968: 0x8fc2000c
    ctx->pc = 0x2a6968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a696c: 0x3c03002d
    ctx->pc = 0x2a696cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)45 << 16));
    // 0x2a6970: 0x3463c6bf
    ctx->pc = 0x2a6970u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 50879));
    // 0x2a6974: 0x62102b
    ctx->pc = 0x2a6974u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6978: 0x14400005
    ctx->pc = 0x2A6978u;
    {
        const bool branch_taken_0x2a6978 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a6978) {
            ctx->pc = 0x2A6990u;
            goto label_2a6990;
        }
    }
    ctx->pc = 0x2A6980u;
    // 0x2a6980: 0x8fc20014
    ctx->pc = 0x2a6980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6984: 0x8fc3000c
    ctx->pc = 0x2a6984u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6988: 0x431021
    ctx->pc = 0x2a6988u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a698c: 0xafc20014
    ctx->pc = 0x2a698cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_2a6990:
    // 0x2a6990: 0x8fc20014
    ctx->pc = 0x2a6990u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6994: 0x3c0311e1
    ctx->pc = 0x2a6994u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4577 << 16));
    // 0x2a6998: 0x3463a300
    ctx->pc = 0x2a6998u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 41728));
    // 0x2a699c: 0x62102b
    ctx->pc = 0x2a699cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a69a0: 0x1040000a
    ctx->pc = 0x2A69A0u;
    {
        const bool branch_taken_0x2a69a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a69a0) {
            ctx->pc = 0x2A69CCu;
            goto label_2a69cc;
        }
    }
    ctx->pc = 0x2A69A8u;
    // 0x2a69a8: 0x8fc30000
    ctx->pc = 0x2a69a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a69ac: 0x31302
    ctx->pc = 0x2a69acu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 12));
    // 0x2a69b0: 0x24030040
    ctx->pc = 0x2a69b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a69b4: 0x431004
    ctx->pc = 0x2a69b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2a69b8: 0x40202d
    ctx->pc = 0x2a69b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a69bc: 0x3c05003b
    ctx->pc = 0x2a69bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2a69c0: 0x24a5eba0
    ctx->pc = 0x2a69c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294962080));
    // 0x2a69c4: 0xc0a9df2
    ctx->pc = 0x2A69C4u;
    SET_GPR_U32(ctx, 31, 0x2A69CCu);
    ctx->pc = 0x2A77C8u;
    pbPathTimeout_0x2a77c8(rdram, ctx, runtime);
    if (ctx->pc != 0x2A69CCu) { return; }
    ctx->pc = 0x2A69CCu;
label_2a69cc:
    // 0x2a69cc: 0x1000ffd8
    ctx->pc = 0x2A69CCu;
    {
        const bool branch_taken_0x2a69cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a69cc) {
            ctx->pc = 0x2A6930u;
            goto label_2a6930;
        }
    }
    ctx->pc = 0x2A69D4u;
label_2a69d4:
    // 0x2a69d4: 0x3c0e82d
    ctx->pc = 0x2a69d4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a69d8: 0xdfbf0040
    ctx->pc = 0x2a69d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a69dc: 0xdfbe0030
    ctx->pc = 0x2a69dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a69e0: 0xdfb00020
    ctx->pc = 0x2a69e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a69e4: 0x27bd0050
    ctx->pc = 0x2a69e4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a69e8: 0x3e00008
    ctx->pc = 0x2A69E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A6930u: goto label_2a6930;
            case 0x2A6944u: goto label_2a6944;
            case 0x2A6990u: goto label_2a6990;
            case 0x2A69CCu: goto label_2a69cc;
            case 0x2A69D4u: goto label_2a69d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A69F0u;
}
