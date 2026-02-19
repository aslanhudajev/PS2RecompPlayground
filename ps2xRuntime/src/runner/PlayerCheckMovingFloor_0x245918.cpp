#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerCheckMovingFloor
// Address: 0x245918 - 0x2459fc
void PlayerCheckMovingFloor_0x245918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x245918u;

    // 0x245918: 0x27bdffb0
    ctx->pc = 0x245918u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24591c: 0xffbf0040
    ctx->pc = 0x24591cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x245920: 0xffb30030
    ctx->pc = 0x245920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x245924: 0xffb20020
    ctx->pc = 0x245924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x245928: 0xffb10010
    ctx->pc = 0x245928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24592c: 0xffb00000
    ctx->pc = 0x24592cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245930: 0x80882d
    ctx->pc = 0x245930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245934: 0xa0802d
    ctx->pc = 0x245934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245938: 0xc0982d
    ctx->pc = 0x245938u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24593c: 0x12000010
    ctx->pc = 0x24593Cu;
    {
        const bool branch_taken_0x24593c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x245940u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24593c) {
            ctx->pc = 0x245980u;
            goto label_245980;
        }
    }
    ctx->pc = 0x245944u;
    // 0x245944: 0x8e020028
    ctx->pc = 0x245944u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x245948: 0x1040000d
    ctx->pc = 0x245948u;
    {
        const bool branch_taken_0x245948 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x245948) {
            ctx->pc = 0x245980u;
            goto label_245980;
        }
    }
    ctx->pc = 0x245950u;
    // 0x245950: 0x8e020010
    ctx->pc = 0x245950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x245954: 0x30421000
    ctx->pc = 0x245954u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x245958: 0x10400009
    ctx->pc = 0x245958u;
    {
        const bool branch_taken_0x245958 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x245958) {
            ctx->pc = 0x245980u;
            goto label_245980;
        }
    }
    ctx->pc = 0x245960u;
    // 0x245960: 0xc08ca04
    ctx->pc = 0x245960u;
    SET_GPR_U32(ctx, 31, 0x245968u);
    ctx->pc = 0x245964u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x232810u;
    {
        const uint32_t __entryPc = ctx->pc;
        OtherPlayerOnOtherMovingObject_0x232810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245968u; }
    }
    if (ctx->pc != 0x245968u) { return; }
    ctx->pc = 0x245968u;
    // 0x245968: 0x50400003
    ctx->pc = 0x245968u;
    {
        const bool branch_taken_0x245968 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x245968) {
            ctx->pc = 0x24596Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->pc = 0x245978u;
            goto label_245978;
        }
    }
    ctx->pc = 0x245970u;
    // 0x245970: 0x10000003
    ctx->pc = 0x245970u;
    {
        const bool branch_taken_0x245970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x245974u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x245970) {
            ctx->pc = 0x245980u;
            goto label_245980;
        }
    }
    ctx->pc = 0x245978u;
label_245978:
    // 0x245978: 0xc0b3f94
    ctx->pc = 0x245978u;
    SET_GPR_U32(ctx, 31, 0x245980u);
    ctx->pc = 0x24597Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245980u; }
    }
    if (ctx->pc != 0x245980u) { return; }
    ctx->pc = 0x245980u;
label_245980:
    // 0x245980: 0x12400002
    ctx->pc = 0x245980u;
    {
        const bool branch_taken_0x245980 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x245984u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x245980) {
            ctx->pc = 0x24598Cu;
            goto label_24598c;
        }
    }
    ctx->pc = 0x245988u;
    // 0x245988: 0x8e22089c
    ctx->pc = 0x245988u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2204)));
label_24598c:
    // 0x24598c: 0x50400006
    ctx->pc = 0x24598Cu;
    {
        const bool branch_taken_0x24598c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24598c) {
            ctx->pc = 0x245990u;
            SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
            ctx->pc = 0x2459A8u;
            goto label_2459a8;
        }
    }
    ctx->pc = 0x245994u;
    // 0x245994: 0x8c420010
    ctx->pc = 0x245994u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x245998: 0x30421000
    ctx->pc = 0x245998u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x24599c: 0x54400006
    ctx->pc = 0x24599Cu;
    {
        const bool branch_taken_0x24599c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24599c) {
            ctx->pc = 0x2459A0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2204)));
            ctx->pc = 0x2459B8u;
            goto label_2459b8;
        }
    }
    ctx->pc = 0x2459A4u;
    // 0x2459a4: 0x3c020033
    ctx->pc = 0x2459a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_2459a8:
    // 0x2459a8: 0x8e240080
    ctx->pc = 0x2459a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2459ac: 0xc0b3f94
    ctx->pc = 0x2459ACu;
    SET_GPR_U32(ctx, 31, 0x2459B4u);
    ctx->pc = 0x2459B0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294952896)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2459B4u; }
    }
    if (ctx->pc != 0x2459B4u) { return; }
    ctx->pc = 0x2459B4u;
    // 0x2459b4: 0x8e22089c
    ctx->pc = 0x2459b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2204)));
label_2459b8:
    // 0x2459b8: 0x12020004
    ctx->pc = 0x2459B8u;
    {
        const bool branch_taken_0x2459b8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x2459b8) {
            ctx->pc = 0x2459CCu;
            goto label_2459cc;
        }
    }
    ctx->pc = 0x2459C0u;
    // 0x2459c0: 0x9622093c
    ctx->pc = 0x2459c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2364)));
    // 0x2459c4: 0x34420001
    ctx->pc = 0x2459c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2459c8: 0xa622093c
    ctx->pc = 0x2459c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2364), (uint16_t)GPR_U32(ctx, 2));
label_2459cc:
    // 0x2459cc: 0x12400003
    ctx->pc = 0x2459CCu;
    {
        const bool branch_taken_0x2459cc = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2459D0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 2204), GPR_U32(ctx, 16));
        if (branch_taken_0x2459cc) {
            ctx->pc = 0x2459DCu;
            goto label_2459dc;
        }
    }
    ctx->pc = 0x2459D4u;
    // 0x2459d4: 0xae600000
    ctx->pc = 0x2459d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2459d8: 0xae600008
    ctx->pc = 0x2459d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_2459dc:
    // 0x2459dc: 0x240102d
    ctx->pc = 0x2459dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2459e0: 0xdfbf0040
    ctx->pc = 0x2459e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2459e4: 0xdfb30030
    ctx->pc = 0x2459e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2459e8: 0xdfb20020
    ctx->pc = 0x2459e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2459ec: 0xdfb10010
    ctx->pc = 0x2459ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2459f0: 0xdfb00000
    ctx->pc = 0x2459f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2459f4: 0x3e00008
    ctx->pc = 0x2459F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2459F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245978u: goto label_245978;
            case 0x245980u: goto label_245980;
            case 0x24598Cu: goto label_24598c;
            case 0x2459A8u: goto label_2459a8;
            case 0x2459B8u: goto label_2459b8;
            case 0x2459CCu: goto label_2459cc;
            case 0x2459DCu: goto label_2459dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2459FCu;
}
