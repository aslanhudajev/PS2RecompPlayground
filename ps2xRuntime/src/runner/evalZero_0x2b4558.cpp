#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalZero
// Address: 0x2b4558 - 0x2b4684
void evalZero_0x2b4558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4558u;

label_2b4558:
    // 0x2b4558: 0x27bdffe0
    ctx->pc = 0x2b4558u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b455c:
    // 0x2b455c: 0xffbf0010
    ctx->pc = 0x2b455cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b4560:
    // 0x2b4560: 0xffb00000
    ctx->pc = 0x2b4560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b4564:
    // 0x2b4564: 0xa0802d
    ctx->pc = 0x2b4564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b4568:
    // 0x2b4568: 0x2e020021
    ctx->pc = 0x2b4568u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 33));
label_2b456c:
    // 0x2b456c: 0x1040002a
label_2b4570:
    if (ctx->pc == 0x2B4570u) {
        ctx->pc = 0x2B4570u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x2B4574u;
        goto label_2b4574;
    }
    ctx->pc = 0x2B456Cu;
    {
        const bool branch_taken_0x2b456c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4570u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        if (branch_taken_0x2b456c) {
            ctx->pc = 0x2B4618u;
            goto label_2b4618;
        }
    }
    ctx->pc = 0x2B4574u;
label_2b4574:
    // 0x2b4574: 0x3c02003b
    ctx->pc = 0x2b4574u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_2b4578:
    // 0x2b4578: 0x24424680
    ctx->pc = 0x2b4578u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18048));
label_2b457c:
    // 0x2b457c: 0x101880
    ctx->pc = 0x2b457cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
label_2b4580:
    // 0x2b4580: 0x621821
    ctx->pc = 0x2b4580u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b4584:
    // 0x2b4584: 0x8c620000
    ctx->pc = 0x2b4584u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b4588:
    // 0x2b4588: 0x400008
label_2b458c:
    if (ctx->pc == 0x2B458Cu) {
        ctx->pc = 0x2B4590u;
        goto label_2b4590;
    }
    ctx->pc = 0x2B4588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4558u: goto label_2b4558;
            case 0x2B455Cu: goto label_2b455c;
            case 0x2B4560u: goto label_2b4560;
            case 0x2B4564u: goto label_2b4564;
            case 0x2B4568u: goto label_2b4568;
            case 0x2B456Cu: goto label_2b456c;
            case 0x2B4570u: goto label_2b4570;
            case 0x2B4574u: goto label_2b4574;
            case 0x2B4578u: goto label_2b4578;
            case 0x2B457Cu: goto label_2b457c;
            case 0x2B4580u: goto label_2b4580;
            case 0x2B4584u: goto label_2b4584;
            case 0x2B4588u: goto label_2b4588;
            case 0x2B458Cu: goto label_2b458c;
            case 0x2B4590u: goto label_2b4590;
            case 0x2B4594u: goto label_2b4594;
            case 0x2B4598u: goto label_2b4598;
            case 0x2B459Cu: goto label_2b459c;
            case 0x2B45A0u: goto label_2b45a0;
            case 0x2B45A4u: goto label_2b45a4;
            case 0x2B45A8u: goto label_2b45a8;
            case 0x2B45ACu: goto label_2b45ac;
            case 0x2B45B0u: goto label_2b45b0;
            case 0x2B45B4u: goto label_2b45b4;
            case 0x2B45B8u: goto label_2b45b8;
            case 0x2B45BCu: goto label_2b45bc;
            case 0x2B45C0u: goto label_2b45c0;
            case 0x2B45C4u: goto label_2b45c4;
            case 0x2B45C8u: goto label_2b45c8;
            case 0x2B45CCu: goto label_2b45cc;
            case 0x2B45D0u: goto label_2b45d0;
            case 0x2B45D4u: goto label_2b45d4;
            case 0x2B45D8u: goto label_2b45d8;
            case 0x2B45DCu: goto label_2b45dc;
            case 0x2B45E0u: goto label_2b45e0;
            case 0x2B45E4u: goto label_2b45e4;
            case 0x2B45E8u: goto label_2b45e8;
            case 0x2B45ECu: goto label_2b45ec;
            case 0x2B45F0u: goto label_2b45f0;
            case 0x2B45F4u: goto label_2b45f4;
            case 0x2B45F8u: goto label_2b45f8;
            case 0x2B45FCu: goto label_2b45fc;
            case 0x2B4600u: goto label_2b4600;
            case 0x2B4604u: goto label_2b4604;
            case 0x2B4608u: goto label_2b4608;
            case 0x2B460Cu: goto label_2b460c;
            case 0x2B4610u: goto label_2b4610;
            case 0x2B4614u: goto label_2b4614;
            case 0x2B4618u: goto label_2b4618;
            case 0x2B461Cu: goto label_2b461c;
            case 0x2B4620u: goto label_2b4620;
            case 0x2B4624u: goto label_2b4624;
            case 0x2B4628u: goto label_2b4628;
            case 0x2B462Cu: goto label_2b462c;
            case 0x2B4630u: goto label_2b4630;
            case 0x2B4634u: goto label_2b4634;
            case 0x2B4638u: goto label_2b4638;
            case 0x2B463Cu: goto label_2b463c;
            case 0x2B4640u: goto label_2b4640;
            case 0x2B4644u: goto label_2b4644;
            case 0x2B4648u: goto label_2b4648;
            case 0x2B464Cu: goto label_2b464c;
            case 0x2B4650u: goto label_2b4650;
            case 0x2B4654u: goto label_2b4654;
            case 0x2B4658u: goto label_2b4658;
            case 0x2B465Cu: goto label_2b465c;
            case 0x2B4660u: goto label_2b4660;
            case 0x2B4664u: goto label_2b4664;
            case 0x2B4668u: goto label_2b4668;
            case 0x2B466Cu: goto label_2b466c;
            case 0x2B4670u: goto label_2b4670;
            case 0x2B4674u: goto label_2b4674;
            case 0x2B4678u: goto label_2b4678;
            case 0x2B467Cu: goto label_2b467c;
            case 0x2B4680u: goto label_2b4680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4590u;
label_2b4590:
    // 0x2b4590: 0x10000038
label_2b4594:
    if (ctx->pc == 0x2B4594u) {
        ctx->pc = 0x2B4594u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x2B4598u;
        goto label_2b4598;
    }
    ctx->pc = 0x2B4590u;
    {
        const bool branch_taken_0x2b4590 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4594u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        if (branch_taken_0x2b4590) {
            ctx->pc = 0x2B4674u;
            goto label_2b4674;
        }
    }
    ctx->pc = 0x2B4598u;
label_2b4598:
    // 0x2b4598: 0x10000036
label_2b459c:
    if (ctx->pc == 0x2B459Cu) {
        ctx->pc = 0x2B459Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x2B45A0u;
        goto label_2b45a0;
    }
    ctx->pc = 0x2B4598u;
    {
        const bool branch_taken_0x2b4598 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B459Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        if (branch_taken_0x2b4598) {
            ctx->pc = 0x2B4674u;
            goto label_2b4674;
        }
    }
    ctx->pc = 0x2B45A0u;
label_2b45a0:
    // 0x2b45a0: 0x182d
    ctx->pc = 0x2b45a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b45a4:
    // 0x2b45a4: 0x24840010
    ctx->pc = 0x2b45a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
label_2b45a8:
    // 0x2b45a8: 0x31080
    ctx->pc = 0x2b45a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_2b45ac:
    // 0x2b45ac: 0x821021
    ctx->pc = 0x2b45acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2b45b0:
    // 0x2b45b0: 0xac400000
    ctx->pc = 0x2b45b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2b45b4:
    // 0x2b45b4: 0x24630001
    ctx->pc = 0x2b45b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2b45b8:
    // 0x2b45b8: 0x28620004
    ctx->pc = 0x2b45b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
label_2b45bc:
    // 0x2b45bc: 0x1440fffa
label_2b45c0:
    if (ctx->pc == 0x2B45C0u) {
        ctx->pc = 0x2B45C4u;
        goto label_2b45c4;
    }
    ctx->pc = 0x2B45BCu;
    {
        const bool branch_taken_0x2b45bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b45bc) {
            ctx->pc = 0x2B45A8u;
            goto label_2b45a8;
        }
    }
    ctx->pc = 0x2B45C4u;
label_2b45c4:
    // 0x2b45c4: 0x1000002c
label_2b45c8:
    if (ctx->pc == 0x2B45C8u) {
        ctx->pc = 0x2B45C8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2B45CCu;
        goto label_2b45cc;
    }
    ctx->pc = 0x2B45C4u;
    {
        const bool branch_taken_0x2b45c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B45C8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2b45c4) {
            ctx->pc = 0x2B4678u;
            goto label_2b4678;
        }
    }
    ctx->pc = 0x2B45CCu;
label_2b45cc:
    // 0x2b45cc: 0x302d
    ctx->pc = 0x2b45ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b45d0:
    // 0x2b45d0: 0x24840010
    ctx->pc = 0x2b45d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
label_2b45d4:
    // 0x2b45d4: 0x182d
    ctx->pc = 0x2b45d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b45d8:
    // 0x2b45d8: 0x62880
    ctx->pc = 0x2b45d8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 2));
label_2b45dc:
    // 0x2b45dc: 0x0
    ctx->pc = 0x2b45dcu;
    // NOP
label_2b45e0:
    // 0x2b45e0: 0x31100
    ctx->pc = 0x2b45e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
label_2b45e4:
    // 0x2b45e4: 0xa21021
    ctx->pc = 0x2b45e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2b45e8:
    // 0x2b45e8: 0x821021
    ctx->pc = 0x2b45e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2b45ec:
    // 0x2b45ec: 0xac400000
    ctx->pc = 0x2b45ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2b45f0:
    // 0x2b45f0: 0x24630001
    ctx->pc = 0x2b45f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2b45f4:
    // 0x2b45f4: 0x28620004
    ctx->pc = 0x2b45f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
label_2b45f8:
    // 0x2b45f8: 0x1440fff9
label_2b45fc:
    if (ctx->pc == 0x2B45FCu) {
        ctx->pc = 0x2B4600u;
        goto label_2b4600;
    }
    ctx->pc = 0x2B45F8u;
    {
        const bool branch_taken_0x2b45f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b45f8) {
            ctx->pc = 0x2B45E0u;
            goto label_2b45e0;
        }
    }
    ctx->pc = 0x2B4600u;
label_2b4600:
    // 0x2b4600: 0x24c60001
    ctx->pc = 0x2b4600u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_2b4604:
    // 0x2b4604: 0x28c20004
    ctx->pc = 0x2b4604u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
label_2b4608:
    // 0x2b4608: 0x1440fff3
label_2b460c:
    if (ctx->pc == 0x2B460Cu) {
        ctx->pc = 0x2B460Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B4610u;
        goto label_2b4610;
    }
    ctx->pc = 0x2B4608u;
    {
        const bool branch_taken_0x2b4608 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B460Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b4608) {
            ctx->pc = 0x2B45D8u;
            goto label_2b45d8;
        }
    }
    ctx->pc = 0x2B4610u;
label_2b4610:
    // 0x2b4610: 0x10000019
label_2b4614:
    if (ctx->pc == 0x2B4614u) {
        ctx->pc = 0x2B4614u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2B4618u;
        goto label_2b4618;
    }
    ctx->pc = 0x2B4610u;
    {
        const bool branch_taken_0x2b4610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4614u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2b4610) {
            ctx->pc = 0x2B4678u;
            goto label_2b4678;
        }
    }
    ctx->pc = 0x2B4618u;
label_2b4618:
    // 0x2b4618: 0x24020020
    ctx->pc = 0x2b4618u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_2b461c:
    // 0x2b461c: 0xac820000
    ctx->pc = 0x2b461cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2b4620:
    // 0x2b4620: 0x3c04003b
    ctx->pc = 0x2b4620u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b4624:
    // 0x2b4624: 0x24844650
    ctx->pc = 0x2b4624u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
label_2b4628:
    // 0x2b4628: 0x24050020
    ctx->pc = 0x2b4628u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_2b462c:
    // 0x2b462c: 0x3c06003b
    ctx->pc = 0x2b462cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2b4630:
    // 0x2b4630: 0x24c60d80
    ctx->pc = 0x2b4630u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
label_2b4634:
    // 0x2b4634: 0xc0ad0d6
label_2b4638:
    if (ctx->pc == 0x2B4638u) {
        ctx->pc = 0x2B4638u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B463Cu;
        goto label_2b463c;
    }
    ctx->pc = 0x2B4634u;
    SET_GPR_U32(ctx, 31, 0x2B463Cu);
    ctx->pc = 0x2B4638u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B463Cu; }
    }
    if (ctx->pc != 0x2B463Cu) { return; }
    ctx->pc = 0x2B463Cu;
label_2b463c:
    // 0x2b463c: 0xc0ad082
label_2b4640:
    if (ctx->pc == 0x2B4640u) {
        ctx->pc = 0x2B4640u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B4644u;
        goto label_2b4644;
    }
    ctx->pc = 0x2B463Cu;
    SET_GPR_U32(ctx, 31, 0x2B4644u);
    ctx->pc = 0x2B4640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4208u;
    {
        const uint32_t __entryPc = ctx->pc;
        typeStr_0x2b4208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4644u; }
    }
    if (ctx->pc != 0x2B4644u) { return; }
    ctx->pc = 0x2B4644u;
label_2b4644:
    // 0x2b4644: 0x3c04003b
    ctx->pc = 0x2b4644u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b4648:
    // 0x2b4648: 0x24844660
    ctx->pc = 0x2b4648u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18016));
label_2b464c:
    // 0x2b464c: 0xc0b4a34
label_2b4650:
    if (ctx->pc == 0x2B4650u) {
        ctx->pc = 0x2B4650u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B4654u;
        goto label_2b4654;
    }
    ctx->pc = 0x2B464Cu;
    SET_GPR_U32(ctx, 31, 0x2B4654u);
    ctx->pc = 0x2B4650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4654u; }
    }
    if (ctx->pc != 0x2B4654u) { return; }
    ctx->pc = 0x2B4654u;
label_2b4654:
    // 0x2b4654: 0x3c04003b
    ctx->pc = 0x2b4654u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b4658:
    // 0x2b4658: 0xc0b4a34
label_2b465c:
    if (ctx->pc == 0x2B465Cu) {
        ctx->pc = 0x2B465Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2B4660u;
        goto label_2b4660;
    }
    ctx->pc = 0x2B4658u;
    SET_GPR_U32(ctx, 31, 0x2B4660u);
    ctx->pc = 0x2B465Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4660u; }
    }
    if (ctx->pc != 0x2B4660u) { return; }
    ctx->pc = 0x2B4660u;
label_2b4660:
    // 0x2b4660: 0x3c020037
    ctx->pc = 0x2b4660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b4664:
    // 0x2b4664: 0x8c4320ac
    ctx->pc = 0x2b4664u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
label_2b4668:
    // 0x2b4668: 0x8c620048
    ctx->pc = 0x2b4668u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b466c:
    // 0x2b466c: 0x34420001
    ctx->pc = 0x2b466cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_2b4670:
    // 0x2b4670: 0xac620048
    ctx->pc = 0x2b4670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2b4674:
    // 0x2b4674: 0xdfbf0010
    ctx->pc = 0x2b4674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b4678:
    // 0x2b4678: 0xdfb00000
    ctx->pc = 0x2b4678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b467c:
    // 0x2b467c: 0x3e00008
label_2b4680:
    if (ctx->pc == 0x2B4680u) {
        ctx->pc = 0x2B4680u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2B4684u;
        goto label_fallthrough_0x2b467c;
    }
    ctx->pc = 0x2B467Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4680u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4558u: goto label_2b4558;
            case 0x2B455Cu: goto label_2b455c;
            case 0x2B4560u: goto label_2b4560;
            case 0x2B4564u: goto label_2b4564;
            case 0x2B4568u: goto label_2b4568;
            case 0x2B456Cu: goto label_2b456c;
            case 0x2B4570u: goto label_2b4570;
            case 0x2B4574u: goto label_2b4574;
            case 0x2B4578u: goto label_2b4578;
            case 0x2B457Cu: goto label_2b457c;
            case 0x2B4580u: goto label_2b4580;
            case 0x2B4584u: goto label_2b4584;
            case 0x2B4588u: goto label_2b4588;
            case 0x2B458Cu: goto label_2b458c;
            case 0x2B4590u: goto label_2b4590;
            case 0x2B4594u: goto label_2b4594;
            case 0x2B4598u: goto label_2b4598;
            case 0x2B459Cu: goto label_2b459c;
            case 0x2B45A0u: goto label_2b45a0;
            case 0x2B45A4u: goto label_2b45a4;
            case 0x2B45A8u: goto label_2b45a8;
            case 0x2B45ACu: goto label_2b45ac;
            case 0x2B45B0u: goto label_2b45b0;
            case 0x2B45B4u: goto label_2b45b4;
            case 0x2B45B8u: goto label_2b45b8;
            case 0x2B45BCu: goto label_2b45bc;
            case 0x2B45C0u: goto label_2b45c0;
            case 0x2B45C4u: goto label_2b45c4;
            case 0x2B45C8u: goto label_2b45c8;
            case 0x2B45CCu: goto label_2b45cc;
            case 0x2B45D0u: goto label_2b45d0;
            case 0x2B45D4u: goto label_2b45d4;
            case 0x2B45D8u: goto label_2b45d8;
            case 0x2B45DCu: goto label_2b45dc;
            case 0x2B45E0u: goto label_2b45e0;
            case 0x2B45E4u: goto label_2b45e4;
            case 0x2B45E8u: goto label_2b45e8;
            case 0x2B45ECu: goto label_2b45ec;
            case 0x2B45F0u: goto label_2b45f0;
            case 0x2B45F4u: goto label_2b45f4;
            case 0x2B45F8u: goto label_2b45f8;
            case 0x2B45FCu: goto label_2b45fc;
            case 0x2B4600u: goto label_2b4600;
            case 0x2B4604u: goto label_2b4604;
            case 0x2B4608u: goto label_2b4608;
            case 0x2B460Cu: goto label_2b460c;
            case 0x2B4610u: goto label_2b4610;
            case 0x2B4614u: goto label_2b4614;
            case 0x2B4618u: goto label_2b4618;
            case 0x2B461Cu: goto label_2b461c;
            case 0x2B4620u: goto label_2b4620;
            case 0x2B4624u: goto label_2b4624;
            case 0x2B4628u: goto label_2b4628;
            case 0x2B462Cu: goto label_2b462c;
            case 0x2B4630u: goto label_2b4630;
            case 0x2B4634u: goto label_2b4634;
            case 0x2B4638u: goto label_2b4638;
            case 0x2B463Cu: goto label_2b463c;
            case 0x2B4640u: goto label_2b4640;
            case 0x2B4644u: goto label_2b4644;
            case 0x2B4648u: goto label_2b4648;
            case 0x2B464Cu: goto label_2b464c;
            case 0x2B4650u: goto label_2b4650;
            case 0x2B4654u: goto label_2b4654;
            case 0x2B4658u: goto label_2b4658;
            case 0x2B465Cu: goto label_2b465c;
            case 0x2B4660u: goto label_2b4660;
            case 0x2B4664u: goto label_2b4664;
            case 0x2B4668u: goto label_2b4668;
            case 0x2B466Cu: goto label_2b466c;
            case 0x2B4670u: goto label_2b4670;
            case 0x2B4674u: goto label_2b4674;
            case 0x2B4678u: goto label_2b4678;
            case 0x2B467Cu: goto label_2b467c;
            case 0x2B4680u: goto label_2b4680;
            default: break;
        }
        return;
    }
label_fallthrough_0x2b467c:
    ctx->pc = 0x2B4684u;
}
