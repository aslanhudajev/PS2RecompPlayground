#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: loop__9McchkTaskFv
// Address: 0x1f43a0 - 0x1f4ae8
void loop__9McchkTaskFv_0x1f43a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("loop__9McchkTaskFv");


    ctx->pc = 0x1f43a0u;

label_1f43a0:
    // 0x1f43a0: 0x27bdffe0
    ctx->pc = 0x1f43a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f43a4:
    // 0x1f43a4: 0x7fbf0010
    ctx->pc = 0x1f43a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1f43a8:
    // 0x1f43a8: 0x7fb00000
    ctx->pc = 0x1f43a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f43ac:
    // 0x1f43ac: 0x8c830004
    ctx->pc = 0x1f43acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f43b0:
    // 0x1f43b0: 0x2c610025
    ctx->pc = 0x1f43b0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 37));
label_1f43b4:
    // 0x1f43b4: 0x10200008
label_1f43b8:
    if (ctx->pc == 0x1F43B8u) {
        ctx->pc = 0x1F43B8u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F43BCu;
        goto label_1f43bc;
    }
    ctx->pc = 0x1F43B4u;
    {
        const bool branch_taken_0x1f43b4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F43B8u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f43b4) {
            ctx->pc = 0x1F43D8u;
            goto label_1f43d8;
        }
    }
    ctx->pc = 0x1F43BCu;
label_1f43bc:
    // 0x1f43bc: 0x3c04002c
    ctx->pc = 0x1f43bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1f43c0:
    // 0x1f43c0: 0x31880
    ctx->pc = 0x1f43c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1f43c4:
    // 0x1f43c4: 0x2484fa30
    ctx->pc = 0x1f43c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965808));
label_1f43c8:
    // 0x1f43c8: 0x641821
    ctx->pc = 0x1f43c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f43cc:
    // 0x1f43cc: 0x8c630000
    ctx->pc = 0x1f43ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f43d0:
    // 0x1f43d0: 0x600008
label_1f43d4:
    if (ctx->pc == 0x1F43D4u) {
        ctx->pc = 0x1F43D8u;
        goto label_1f43d8;
    }
    ctx->pc = 0x1F43D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F43A0u: goto label_1f43a0;
            case 0x1F43A4u: goto label_1f43a4;
            case 0x1F43A8u: goto label_1f43a8;
            case 0x1F43ACu: goto label_1f43ac;
            case 0x1F43B0u: goto label_1f43b0;
            case 0x1F43B4u: goto label_1f43b4;
            case 0x1F43B8u: goto label_1f43b8;
            case 0x1F43BCu: goto label_1f43bc;
            case 0x1F43C0u: goto label_1f43c0;
            case 0x1F43C4u: goto label_1f43c4;
            case 0x1F43C8u: goto label_1f43c8;
            case 0x1F43CCu: goto label_1f43cc;
            case 0x1F43D0u: goto label_1f43d0;
            case 0x1F43D4u: goto label_1f43d4;
            case 0x1F43D8u: goto label_1f43d8;
            case 0x1F43DCu: goto label_1f43dc;
            case 0x1F43E0u: goto label_1f43e0;
            case 0x1F43E4u: goto label_1f43e4;
            case 0x1F43E8u: goto label_1f43e8;
            case 0x1F43ECu: goto label_1f43ec;
            case 0x1F43F0u: goto label_1f43f0;
            case 0x1F43F4u: goto label_1f43f4;
            case 0x1F43F8u: goto label_1f43f8;
            case 0x1F43FCu: goto label_1f43fc;
            case 0x1F4400u: goto label_1f4400;
            case 0x1F4404u: goto label_1f4404;
            case 0x1F4408u: goto label_1f4408;
            case 0x1F440Cu: goto label_1f440c;
            case 0x1F4410u: goto label_1f4410;
            case 0x1F4414u: goto label_1f4414;
            case 0x1F4418u: goto label_1f4418;
            case 0x1F441Cu: goto label_1f441c;
            case 0x1F4420u: goto label_1f4420;
            case 0x1F4424u: goto label_1f4424;
            case 0x1F4428u: goto label_1f4428;
            case 0x1F442Cu: goto label_1f442c;
            case 0x1F4430u: goto label_1f4430;
            case 0x1F4434u: goto label_1f4434;
            case 0x1F4438u: goto label_1f4438;
            case 0x1F443Cu: goto label_1f443c;
            case 0x1F4440u: goto label_1f4440;
            case 0x1F4444u: goto label_1f4444;
            case 0x1F4448u: goto label_1f4448;
            case 0x1F444Cu: goto label_1f444c;
            case 0x1F4450u: goto label_1f4450;
            case 0x1F4454u: goto label_1f4454;
            case 0x1F4458u: goto label_1f4458;
            case 0x1F445Cu: goto label_1f445c;
            case 0x1F4460u: goto label_1f4460;
            case 0x1F4464u: goto label_1f4464;
            case 0x1F4468u: goto label_1f4468;
            case 0x1F446Cu: goto label_1f446c;
            case 0x1F4470u: goto label_1f4470;
            case 0x1F4474u: goto label_1f4474;
            case 0x1F4478u: goto label_1f4478;
            case 0x1F447Cu: goto label_1f447c;
            case 0x1F4480u: goto label_1f4480;
            case 0x1F4484u: goto label_1f4484;
            case 0x1F4488u: goto label_1f4488;
            case 0x1F448Cu: goto label_1f448c;
            case 0x1F4490u: goto label_1f4490;
            case 0x1F4494u: goto label_1f4494;
            case 0x1F4498u: goto label_1f4498;
            case 0x1F449Cu: goto label_1f449c;
            case 0x1F44A0u: goto label_1f44a0;
            case 0x1F44A4u: goto label_1f44a4;
            case 0x1F44A8u: goto label_1f44a8;
            case 0x1F44ACu: goto label_1f44ac;
            case 0x1F44B0u: goto label_1f44b0;
            case 0x1F44B4u: goto label_1f44b4;
            case 0x1F44B8u: goto label_1f44b8;
            case 0x1F44BCu: goto label_1f44bc;
            case 0x1F44C0u: goto label_1f44c0;
            case 0x1F44C4u: goto label_1f44c4;
            case 0x1F44C8u: goto label_1f44c8;
            case 0x1F44CCu: goto label_1f44cc;
            case 0x1F44D0u: goto label_1f44d0;
            case 0x1F44D4u: goto label_1f44d4;
            case 0x1F44D8u: goto label_1f44d8;
            case 0x1F44DCu: goto label_1f44dc;
            case 0x1F44E0u: goto label_1f44e0;
            case 0x1F44E4u: goto label_1f44e4;
            case 0x1F44E8u: goto label_1f44e8;
            case 0x1F44ECu: goto label_1f44ec;
            case 0x1F44F0u: goto label_1f44f0;
            case 0x1F44F4u: goto label_1f44f4;
            case 0x1F44F8u: goto label_1f44f8;
            case 0x1F44FCu: goto label_1f44fc;
            case 0x1F4500u: goto label_1f4500;
            case 0x1F4504u: goto label_1f4504;
            case 0x1F4508u: goto label_1f4508;
            case 0x1F450Cu: goto label_1f450c;
            case 0x1F4510u: goto label_1f4510;
            case 0x1F4514u: goto label_1f4514;
            case 0x1F4518u: goto label_1f4518;
            case 0x1F451Cu: goto label_1f451c;
            case 0x1F4520u: goto label_1f4520;
            case 0x1F4524u: goto label_1f4524;
            case 0x1F4528u: goto label_1f4528;
            case 0x1F452Cu: goto label_1f452c;
            case 0x1F4530u: goto label_1f4530;
            case 0x1F4534u: goto label_1f4534;
            case 0x1F4538u: goto label_1f4538;
            case 0x1F453Cu: goto label_1f453c;
            case 0x1F4540u: goto label_1f4540;
            case 0x1F4544u: goto label_1f4544;
            case 0x1F4548u: goto label_1f4548;
            case 0x1F454Cu: goto label_1f454c;
            case 0x1F4550u: goto label_1f4550;
            case 0x1F4554u: goto label_1f4554;
            case 0x1F4558u: goto label_1f4558;
            case 0x1F455Cu: goto label_1f455c;
            case 0x1F4560u: goto label_1f4560;
            case 0x1F4564u: goto label_1f4564;
            case 0x1F4568u: goto label_1f4568;
            case 0x1F456Cu: goto label_1f456c;
            case 0x1F4570u: goto label_1f4570;
            case 0x1F4574u: goto label_1f4574;
            case 0x1F4578u: goto label_1f4578;
            case 0x1F457Cu: goto label_1f457c;
            case 0x1F4580u: goto label_1f4580;
            case 0x1F4584u: goto label_1f4584;
            case 0x1F4588u: goto label_1f4588;
            case 0x1F458Cu: goto label_1f458c;
            case 0x1F4590u: goto label_1f4590;
            case 0x1F4594u: goto label_1f4594;
            case 0x1F4598u: goto label_1f4598;
            case 0x1F459Cu: goto label_1f459c;
            case 0x1F45A0u: goto label_1f45a0;
            case 0x1F45A4u: goto label_1f45a4;
            case 0x1F45A8u: goto label_1f45a8;
            case 0x1F45ACu: goto label_1f45ac;
            case 0x1F45B0u: goto label_1f45b0;
            case 0x1F45B4u: goto label_1f45b4;
            case 0x1F45B8u: goto label_1f45b8;
            case 0x1F45BCu: goto label_1f45bc;
            case 0x1F45C0u: goto label_1f45c0;
            case 0x1F45C4u: goto label_1f45c4;
            case 0x1F45C8u: goto label_1f45c8;
            case 0x1F45CCu: goto label_1f45cc;
            case 0x1F45D0u: goto label_1f45d0;
            case 0x1F45D4u: goto label_1f45d4;
            case 0x1F45D8u: goto label_1f45d8;
            case 0x1F45DCu: goto label_1f45dc;
            case 0x1F45E0u: goto label_1f45e0;
            case 0x1F45E4u: goto label_1f45e4;
            case 0x1F45E8u: goto label_1f45e8;
            case 0x1F45ECu: goto label_1f45ec;
            case 0x1F45F0u: goto label_1f45f0;
            case 0x1F45F4u: goto label_1f45f4;
            case 0x1F45F8u: goto label_1f45f8;
            case 0x1F45FCu: goto label_1f45fc;
            case 0x1F4600u: goto label_1f4600;
            case 0x1F4604u: goto label_1f4604;
            case 0x1F4608u: goto label_1f4608;
            case 0x1F460Cu: goto label_1f460c;
            case 0x1F4610u: goto label_1f4610;
            case 0x1F4614u: goto label_1f4614;
            case 0x1F4618u: goto label_1f4618;
            case 0x1F461Cu: goto label_1f461c;
            case 0x1F4620u: goto label_1f4620;
            case 0x1F4624u: goto label_1f4624;
            case 0x1F4628u: goto label_1f4628;
            case 0x1F462Cu: goto label_1f462c;
            case 0x1F4630u: goto label_1f4630;
            case 0x1F4634u: goto label_1f4634;
            case 0x1F4638u: goto label_1f4638;
            case 0x1F463Cu: goto label_1f463c;
            case 0x1F4640u: goto label_1f4640;
            case 0x1F4644u: goto label_1f4644;
            case 0x1F4648u: goto label_1f4648;
            case 0x1F464Cu: goto label_1f464c;
            case 0x1F4650u: goto label_1f4650;
            case 0x1F4654u: goto label_1f4654;
            case 0x1F4658u: goto label_1f4658;
            case 0x1F465Cu: goto label_1f465c;
            case 0x1F4660u: goto label_1f4660;
            case 0x1F4664u: goto label_1f4664;
            case 0x1F4668u: goto label_1f4668;
            case 0x1F466Cu: goto label_1f466c;
            case 0x1F4670u: goto label_1f4670;
            case 0x1F4674u: goto label_1f4674;
            case 0x1F4678u: goto label_1f4678;
            case 0x1F467Cu: goto label_1f467c;
            case 0x1F4680u: goto label_1f4680;
            case 0x1F4684u: goto label_1f4684;
            case 0x1F4688u: goto label_1f4688;
            case 0x1F468Cu: goto label_1f468c;
            case 0x1F4690u: goto label_1f4690;
            case 0x1F4694u: goto label_1f4694;
            case 0x1F4698u: goto label_1f4698;
            case 0x1F469Cu: goto label_1f469c;
            case 0x1F46A0u: goto label_1f46a0;
            case 0x1F46A4u: goto label_1f46a4;
            case 0x1F46A8u: goto label_1f46a8;
            case 0x1F46ACu: goto label_1f46ac;
            case 0x1F46B0u: goto label_1f46b0;
            case 0x1F46B4u: goto label_1f46b4;
            case 0x1F46B8u: goto label_1f46b8;
            case 0x1F46BCu: goto label_1f46bc;
            case 0x1F46C0u: goto label_1f46c0;
            case 0x1F46C4u: goto label_1f46c4;
            case 0x1F46C8u: goto label_1f46c8;
            case 0x1F46CCu: goto label_1f46cc;
            case 0x1F46D0u: goto label_1f46d0;
            case 0x1F46D4u: goto label_1f46d4;
            case 0x1F46D8u: goto label_1f46d8;
            case 0x1F46DCu: goto label_1f46dc;
            case 0x1F46E0u: goto label_1f46e0;
            case 0x1F46E4u: goto label_1f46e4;
            case 0x1F46E8u: goto label_1f46e8;
            case 0x1F46ECu: goto label_1f46ec;
            case 0x1F46F0u: goto label_1f46f0;
            case 0x1F46F4u: goto label_1f46f4;
            case 0x1F46F8u: goto label_1f46f8;
            case 0x1F46FCu: goto label_1f46fc;
            case 0x1F4700u: goto label_1f4700;
            case 0x1F4704u: goto label_1f4704;
            case 0x1F4708u: goto label_1f4708;
            case 0x1F470Cu: goto label_1f470c;
            case 0x1F4710u: goto label_1f4710;
            case 0x1F4714u: goto label_1f4714;
            case 0x1F4718u: goto label_1f4718;
            case 0x1F471Cu: goto label_1f471c;
            case 0x1F4720u: goto label_1f4720;
            case 0x1F4724u: goto label_1f4724;
            case 0x1F4728u: goto label_1f4728;
            case 0x1F472Cu: goto label_1f472c;
            case 0x1F4730u: goto label_1f4730;
            case 0x1F4734u: goto label_1f4734;
            case 0x1F4738u: goto label_1f4738;
            case 0x1F473Cu: goto label_1f473c;
            case 0x1F4740u: goto label_1f4740;
            case 0x1F4744u: goto label_1f4744;
            case 0x1F4748u: goto label_1f4748;
            case 0x1F474Cu: goto label_1f474c;
            case 0x1F4750u: goto label_1f4750;
            case 0x1F4754u: goto label_1f4754;
            case 0x1F4758u: goto label_1f4758;
            case 0x1F475Cu: goto label_1f475c;
            case 0x1F4760u: goto label_1f4760;
            case 0x1F4764u: goto label_1f4764;
            case 0x1F4768u: goto label_1f4768;
            case 0x1F476Cu: goto label_1f476c;
            case 0x1F4770u: goto label_1f4770;
            case 0x1F4774u: goto label_1f4774;
            case 0x1F4778u: goto label_1f4778;
            case 0x1F477Cu: goto label_1f477c;
            case 0x1F4780u: goto label_1f4780;
            case 0x1F4784u: goto label_1f4784;
            case 0x1F4788u: goto label_1f4788;
            case 0x1F478Cu: goto label_1f478c;
            case 0x1F4790u: goto label_1f4790;
            case 0x1F4794u: goto label_1f4794;
            case 0x1F4798u: goto label_1f4798;
            case 0x1F479Cu: goto label_1f479c;
            case 0x1F47A0u: goto label_1f47a0;
            case 0x1F47A4u: goto label_1f47a4;
            case 0x1F47A8u: goto label_1f47a8;
            case 0x1F47ACu: goto label_1f47ac;
            case 0x1F47B0u: goto label_1f47b0;
            case 0x1F47B4u: goto label_1f47b4;
            case 0x1F47B8u: goto label_1f47b8;
            case 0x1F47BCu: goto label_1f47bc;
            case 0x1F47C0u: goto label_1f47c0;
            case 0x1F47C4u: goto label_1f47c4;
            case 0x1F47C8u: goto label_1f47c8;
            case 0x1F47CCu: goto label_1f47cc;
            case 0x1F47D0u: goto label_1f47d0;
            case 0x1F47D4u: goto label_1f47d4;
            case 0x1F47D8u: goto label_1f47d8;
            case 0x1F47DCu: goto label_1f47dc;
            case 0x1F47E0u: goto label_1f47e0;
            case 0x1F47E4u: goto label_1f47e4;
            case 0x1F47E8u: goto label_1f47e8;
            case 0x1F47ECu: goto label_1f47ec;
            case 0x1F47F0u: goto label_1f47f0;
            case 0x1F47F4u: goto label_1f47f4;
            case 0x1F47F8u: goto label_1f47f8;
            case 0x1F47FCu: goto label_1f47fc;
            case 0x1F4800u: goto label_1f4800;
            case 0x1F4804u: goto label_1f4804;
            case 0x1F4808u: goto label_1f4808;
            case 0x1F480Cu: goto label_1f480c;
            case 0x1F4810u: goto label_1f4810;
            case 0x1F4814u: goto label_1f4814;
            case 0x1F4818u: goto label_1f4818;
            case 0x1F481Cu: goto label_1f481c;
            case 0x1F4820u: goto label_1f4820;
            case 0x1F4824u: goto label_1f4824;
            case 0x1F4828u: goto label_1f4828;
            case 0x1F482Cu: goto label_1f482c;
            case 0x1F4830u: goto label_1f4830;
            case 0x1F4834u: goto label_1f4834;
            case 0x1F4838u: goto label_1f4838;
            case 0x1F483Cu: goto label_1f483c;
            case 0x1F4840u: goto label_1f4840;
            case 0x1F4844u: goto label_1f4844;
            case 0x1F4848u: goto label_1f4848;
            case 0x1F484Cu: goto label_1f484c;
            case 0x1F4850u: goto label_1f4850;
            case 0x1F4854u: goto label_1f4854;
            case 0x1F4858u: goto label_1f4858;
            case 0x1F485Cu: goto label_1f485c;
            case 0x1F4860u: goto label_1f4860;
            case 0x1F4864u: goto label_1f4864;
            case 0x1F4868u: goto label_1f4868;
            case 0x1F486Cu: goto label_1f486c;
            case 0x1F4870u: goto label_1f4870;
            case 0x1F4874u: goto label_1f4874;
            case 0x1F4878u: goto label_1f4878;
            case 0x1F487Cu: goto label_1f487c;
            case 0x1F4880u: goto label_1f4880;
            case 0x1F4884u: goto label_1f4884;
            case 0x1F4888u: goto label_1f4888;
            case 0x1F488Cu: goto label_1f488c;
            case 0x1F4890u: goto label_1f4890;
            case 0x1F4894u: goto label_1f4894;
            case 0x1F4898u: goto label_1f4898;
            case 0x1F489Cu: goto label_1f489c;
            case 0x1F48A0u: goto label_1f48a0;
            case 0x1F48A4u: goto label_1f48a4;
            case 0x1F48A8u: goto label_1f48a8;
            case 0x1F48ACu: goto label_1f48ac;
            case 0x1F48B0u: goto label_1f48b0;
            case 0x1F48B4u: goto label_1f48b4;
            case 0x1F48B8u: goto label_1f48b8;
            case 0x1F48BCu: goto label_1f48bc;
            case 0x1F48C0u: goto label_1f48c0;
            case 0x1F48C4u: goto label_1f48c4;
            case 0x1F48C8u: goto label_1f48c8;
            case 0x1F48CCu: goto label_1f48cc;
            case 0x1F48D0u: goto label_1f48d0;
            case 0x1F48D4u: goto label_1f48d4;
            case 0x1F48D8u: goto label_1f48d8;
            case 0x1F48DCu: goto label_1f48dc;
            case 0x1F48E0u: goto label_1f48e0;
            case 0x1F48E4u: goto label_1f48e4;
            case 0x1F48E8u: goto label_1f48e8;
            case 0x1F48ECu: goto label_1f48ec;
            case 0x1F48F0u: goto label_1f48f0;
            case 0x1F48F4u: goto label_1f48f4;
            case 0x1F48F8u: goto label_1f48f8;
            case 0x1F48FCu: goto label_1f48fc;
            case 0x1F4900u: goto label_1f4900;
            case 0x1F4904u: goto label_1f4904;
            case 0x1F4908u: goto label_1f4908;
            case 0x1F490Cu: goto label_1f490c;
            case 0x1F4910u: goto label_1f4910;
            case 0x1F4914u: goto label_1f4914;
            case 0x1F4918u: goto label_1f4918;
            case 0x1F491Cu: goto label_1f491c;
            case 0x1F4920u: goto label_1f4920;
            case 0x1F4924u: goto label_1f4924;
            case 0x1F4928u: goto label_1f4928;
            case 0x1F492Cu: goto label_1f492c;
            case 0x1F4930u: goto label_1f4930;
            case 0x1F4934u: goto label_1f4934;
            case 0x1F4938u: goto label_1f4938;
            case 0x1F493Cu: goto label_1f493c;
            case 0x1F4940u: goto label_1f4940;
            case 0x1F4944u: goto label_1f4944;
            case 0x1F4948u: goto label_1f4948;
            case 0x1F494Cu: goto label_1f494c;
            case 0x1F4950u: goto label_1f4950;
            case 0x1F4954u: goto label_1f4954;
            case 0x1F4958u: goto label_1f4958;
            case 0x1F495Cu: goto label_1f495c;
            case 0x1F4960u: goto label_1f4960;
            case 0x1F4964u: goto label_1f4964;
            case 0x1F4968u: goto label_1f4968;
            case 0x1F496Cu: goto label_1f496c;
            case 0x1F4970u: goto label_1f4970;
            case 0x1F4974u: goto label_1f4974;
            case 0x1F4978u: goto label_1f4978;
            case 0x1F497Cu: goto label_1f497c;
            case 0x1F4980u: goto label_1f4980;
            case 0x1F4984u: goto label_1f4984;
            case 0x1F4988u: goto label_1f4988;
            case 0x1F498Cu: goto label_1f498c;
            case 0x1F4990u: goto label_1f4990;
            case 0x1F4994u: goto label_1f4994;
            case 0x1F4998u: goto label_1f4998;
            case 0x1F499Cu: goto label_1f499c;
            case 0x1F49A0u: goto label_1f49a0;
            case 0x1F49A4u: goto label_1f49a4;
            case 0x1F49A8u: goto label_1f49a8;
            case 0x1F49ACu: goto label_1f49ac;
            case 0x1F49B0u: goto label_1f49b0;
            case 0x1F49B4u: goto label_1f49b4;
            case 0x1F49B8u: goto label_1f49b8;
            case 0x1F49BCu: goto label_1f49bc;
            case 0x1F49C0u: goto label_1f49c0;
            case 0x1F49C4u: goto label_1f49c4;
            case 0x1F49C8u: goto label_1f49c8;
            case 0x1F49CCu: goto label_1f49cc;
            case 0x1F49D0u: goto label_1f49d0;
            case 0x1F49D4u: goto label_1f49d4;
            case 0x1F49D8u: goto label_1f49d8;
            case 0x1F49DCu: goto label_1f49dc;
            case 0x1F49E0u: goto label_1f49e0;
            case 0x1F49E4u: goto label_1f49e4;
            case 0x1F49E8u: goto label_1f49e8;
            case 0x1F49ECu: goto label_1f49ec;
            case 0x1F49F0u: goto label_1f49f0;
            case 0x1F49F4u: goto label_1f49f4;
            case 0x1F49F8u: goto label_1f49f8;
            case 0x1F49FCu: goto label_1f49fc;
            case 0x1F4A00u: goto label_1f4a00;
            case 0x1F4A04u: goto label_1f4a04;
            case 0x1F4A08u: goto label_1f4a08;
            case 0x1F4A0Cu: goto label_1f4a0c;
            case 0x1F4A10u: goto label_1f4a10;
            case 0x1F4A14u: goto label_1f4a14;
            case 0x1F4A18u: goto label_1f4a18;
            case 0x1F4A1Cu: goto label_1f4a1c;
            case 0x1F4A20u: goto label_1f4a20;
            case 0x1F4A24u: goto label_1f4a24;
            case 0x1F4A28u: goto label_1f4a28;
            case 0x1F4A2Cu: goto label_1f4a2c;
            case 0x1F4A30u: goto label_1f4a30;
            case 0x1F4A34u: goto label_1f4a34;
            case 0x1F4A38u: goto label_1f4a38;
            case 0x1F4A3Cu: goto label_1f4a3c;
            case 0x1F4A40u: goto label_1f4a40;
            case 0x1F4A44u: goto label_1f4a44;
            case 0x1F4A48u: goto label_1f4a48;
            case 0x1F4A4Cu: goto label_1f4a4c;
            case 0x1F4A50u: goto label_1f4a50;
            case 0x1F4A54u: goto label_1f4a54;
            case 0x1F4A58u: goto label_1f4a58;
            case 0x1F4A5Cu: goto label_1f4a5c;
            case 0x1F4A60u: goto label_1f4a60;
            case 0x1F4A64u: goto label_1f4a64;
            case 0x1F4A68u: goto label_1f4a68;
            case 0x1F4A6Cu: goto label_1f4a6c;
            case 0x1F4A70u: goto label_1f4a70;
            case 0x1F4A74u: goto label_1f4a74;
            case 0x1F4A78u: goto label_1f4a78;
            case 0x1F4A7Cu: goto label_1f4a7c;
            case 0x1F4A80u: goto label_1f4a80;
            case 0x1F4A84u: goto label_1f4a84;
            case 0x1F4A88u: goto label_1f4a88;
            case 0x1F4A8Cu: goto label_1f4a8c;
            case 0x1F4A90u: goto label_1f4a90;
            case 0x1F4A94u: goto label_1f4a94;
            case 0x1F4A98u: goto label_1f4a98;
            case 0x1F4A9Cu: goto label_1f4a9c;
            case 0x1F4AA0u: goto label_1f4aa0;
            case 0x1F4AA4u: goto label_1f4aa4;
            case 0x1F4AA8u: goto label_1f4aa8;
            case 0x1F4AACu: goto label_1f4aac;
            case 0x1F4AB0u: goto label_1f4ab0;
            case 0x1F4AB4u: goto label_1f4ab4;
            case 0x1F4AB8u: goto label_1f4ab8;
            case 0x1F4ABCu: goto label_1f4abc;
            case 0x1F4AC0u: goto label_1f4ac0;
            case 0x1F4AC4u: goto label_1f4ac4;
            case 0x1F4AC8u: goto label_1f4ac8;
            case 0x1F4ACCu: goto label_1f4acc;
            case 0x1F4AD0u: goto label_1f4ad0;
            case 0x1F4AD4u: goto label_1f4ad4;
            case 0x1F4AD8u: goto label_1f4ad8;
            case 0x1F4ADCu: goto label_1f4adc;
            case 0x1F4AE0u: goto label_1f4ae0;
            case 0x1F4AE4u: goto label_1f4ae4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F43D8u;
label_1f43d8:
    // 0x1f43d8: 0x2403ffff
    ctx->pc = 0x1f43d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f43dc:
    // 0x1f43dc: 0xaf838e40
    ctx->pc = 0x1f43dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 3));
label_1f43e0:
    // 0x1f43e0: 0xaf808e3c
    ctx->pc = 0x1f43e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
label_1f43e4:
    // 0x1f43e4: 0xae000034
    ctx->pc = 0x1f43e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1f43e8:
    // 0x1f43e8: 0x24030003
    ctx->pc = 0x1f43e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_1f43ec:
    // 0x1f43ec: 0x100001ba
label_1f43f0:
    if (ctx->pc == 0x1F43F0u) {
        ctx->pc = 0x1F43F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F43F4u;
        goto label_1f43f4;
    }
    ctx->pc = 0x1F43ECu;
    {
        const bool branch_taken_0x1f43ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F43F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f43ec) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F43F4u;
label_1f43f4:
    // 0x1f43f4: 0xae000008
    ctx->pc = 0x1f43f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1f43f8:
    // 0x1f43f8: 0x24020004
    ctx->pc = 0x1f43f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1f43fc:
    // 0x1f43fc: 0xae020004
    ctx->pc = 0x1f43fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f4400:
    // 0x1f4400: 0x2402ffff
    ctx->pc = 0x1f4400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f4404:
    // 0x1f4404: 0xaf808e3c
    ctx->pc = 0x1f4404u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
label_1f4408:
    // 0x1f4408: 0xaf828e40
    ctx->pc = 0x1f4408u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
label_1f440c:
    // 0x1f440c: 0x8e020004
    ctx->pc = 0x1f440cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4410:
    // 0x1f4410: 0x24420001
    ctx->pc = 0x1f4410u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f4414:
    // 0x1f4414: 0xae020004
    ctx->pc = 0x1f4414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f4418:
    // 0x1f4418: 0x70002628
    ctx->pc = 0x1f4418u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f441c:
    // 0x1f441c: 0x70002e28
    ctx->pc = 0x1f441cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f4420:
    // 0x1f4420: 0x26060010
    ctx->pc = 0x1f4420u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 16));
label_1f4424:
    // 0x1f4424: 0x26070014
    ctx->pc = 0x1f4424u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 20));
label_1f4428:
    // 0x1f4428: 0xc07ddd8
label_1f442c:
    if (ctx->pc == 0x1F442Cu) {
        ctx->pc = 0x1F442Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x1F4430u;
        goto label_1f4430;
    }
    ctx->pc = 0x1F4428u;
    SET_GPR_U32(ctx, 31, 0x1F4430u);
    ctx->pc = 0x1F442Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 24));
    ctx->pc = 0x1F7760u;
    {
        const uint32_t __entryPc = ctx->pc;
        McGetInfo__FiiPiPiPi_0x1f7760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4430u; }
        else if (ctx->pc != 0x1F4430u) { ctx->pc = 0x1F4430u; }
    }
    if (ctx->pc != 0x1F4430u) { return; }
    ctx->pc = 0x1F4430u;
label_1f4430:
    // 0x1f4430: 0x3c020050
    ctx->pc = 0x1f4430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f4434:
    // 0x1f4434: 0xc074dac
label_1f4438:
    if (ctx->pc == 0x1F4438u) {
        ctx->pc = 0x1F4438u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
        ctx->pc = 0x1F443Cu;
        goto label_1f443c;
    }
    ctx->pc = 0x1F4434u;
    SET_GPR_U32(ctx, 31, 0x1F443Cu);
    ctx->pc = 0x1F4438u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
    ctx->pc = 0x1D36B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        synch__14SysCfgMgrClassFv_0x1d36b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F443Cu; }
        else if (ctx->pc != 0x1F443Cu) { ctx->pc = 0x1F443Cu; }
    }
    if (ctx->pc != 0x1F443Cu) { return; }
    ctx->pc = 0x1F443Cu;
label_1f443c:
    // 0x1f443c: 0x8e020004
    ctx->pc = 0x1f443cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4440:
    // 0x1f4440: 0x24420001
    ctx->pc = 0x1f4440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f4444:
    // 0x1f4444: 0xae020004
    ctx->pc = 0x1f4444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f4448:
    // 0x1f4448: 0xc07de28
label_1f444c:
    if (ctx->pc == 0x1F444Cu) {
        ctx->pc = 0x1F4450u;
        goto label_1f4450;
    }
    ctx->pc = 0x1F4448u;
    SET_GPR_U32(ctx, 31, 0x1F4450u);
    ctx->pc = 0x1F78A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_mccheckrun__Fv_0x1f78a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4450u; }
        else if (ctx->pc != 0x1F4450u) { ctx->pc = 0x1F4450u; }
    }
    if (ctx->pc != 0x1F4450u) { return; }
    ctx->pc = 0x1F4450u;
label_1f4450:
    // 0x1f4450: 0x3c010050
    ctx->pc = 0x1f4450u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f4454:
    // 0x1f4454: 0x8c23fe8c
    ctx->pc = 0x1f4454u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f4458:
    // 0x1f4458: 0x1060019f
label_1f445c:
    if (ctx->pc == 0x1F445Cu) {
        ctx->pc = 0x1F4460u;
        goto label_1f4460;
    }
    ctx->pc = 0x1F4458u;
    {
        const bool branch_taken_0x1f4458 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f4458) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4460u;
label_1f4460:
    // 0x1f4460: 0x8e040010
    ctx->pc = 0x1f4460u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f4464:
    // 0x1f4464: 0x24030002
    ctx->pc = 0x1f4464u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1f4468:
    // 0x1f4468: 0x10830003
label_1f446c:
    if (ctx->pc == 0x1F446Cu) {
        ctx->pc = 0x1F446Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1F4470u;
        goto label_1f4470;
    }
    ctx->pc = 0x1F4468u;
    {
        const bool branch_taken_0x1f4468 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1F446Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x1f4468) {
            ctx->pc = 0x1F4478u;
            goto label_1f4478;
        }
    }
    ctx->pc = 0x1F4470u;
label_1f4470:
    // 0x1f4470: 0x10000199
label_1f4474:
    if (ctx->pc == 0x1F4474u) {
        ctx->pc = 0x1F4474u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4478u;
        goto label_1f4478;
    }
    ctx->pc = 0x1F4470u;
    {
        const bool branch_taken_0x1f4470 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4474u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4470) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4478u;
label_1f4478:
    // 0x1f4478: 0x8e040018
    ctx->pc = 0x1f4478u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1f447c:
    // 0x1f447c: 0x24030001
    ctx->pc = 0x1f447cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f4480:
    // 0x1f4480: 0x10830003
label_1f4484:
    if (ctx->pc == 0x1F4484u) {
        ctx->pc = 0x1F4484u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x1F4488u;
        goto label_1f4488;
    }
    ctx->pc = 0x1F4480u;
    {
        const bool branch_taken_0x1f4480 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1F4484u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
        if (branch_taken_0x1f4480) {
            ctx->pc = 0x1F4490u;
            goto label_1f4490;
        }
    }
    ctx->pc = 0x1F4488u;
label_1f4488:
    // 0x1f4488: 0x10000193
label_1f448c:
    if (ctx->pc == 0x1F448Cu) {
        ctx->pc = 0x1F448Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4490u;
        goto label_1f4490;
    }
    ctx->pc = 0x1F4488u;
    {
        const bool branch_taken_0x1f4488 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F448Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4488) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4490u;
label_1f4490:
    // 0x1f4490: 0x8e020004
    ctx->pc = 0x1f4490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4494:
    // 0x1f4494: 0x24420001
    ctx->pc = 0x1f4494u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f4498:
    // 0x1f4498: 0xae020004
    ctx->pc = 0x1f4498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f449c:
    // 0x1f449c: 0xc07de28
label_1f44a0:
    if (ctx->pc == 0x1F44A0u) {
        ctx->pc = 0x1F44A4u;
        goto label_1f44a4;
    }
    ctx->pc = 0x1F449Cu;
    SET_GPR_U32(ctx, 31, 0x1F44A4u);
    ctx->pc = 0x1F78A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_mccheckrun__Fv_0x1f78a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F44A4u; }
        else if (ctx->pc != 0x1F44A4u) { ctx->pc = 0x1F44A4u; }
    }
    if (ctx->pc != 0x1F44A4u) { return; }
    ctx->pc = 0x1F44A4u;
label_1f44a4:
    // 0x1f44a4: 0x3c010050
    ctx->pc = 0x1f44a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f44a8:
    // 0x1f44a8: 0x8c23fe8c
    ctx->pc = 0x1f44a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f44ac:
    // 0x1f44ac: 0x1060018a
label_1f44b0:
    if (ctx->pc == 0x1F44B0u) {
        ctx->pc = 0x1F44B4u;
        goto label_1f44b4;
    }
    ctx->pc = 0x1F44ACu;
    {
        const bool branch_taken_0x1f44ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f44ac) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F44B4u;
label_1f44b4:
    // 0x1f44b4: 0x3c020027
    ctx->pc = 0x1f44b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_1f44b8:
    // 0x1f44b8: 0x2604000c
    ctx->pc = 0x1f44b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
label_1f44bc:
    // 0x1f44bc: 0x70002e28
    ctx->pc = 0x1f44bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f44c0:
    // 0x1f44c0: 0x70003628
    ctx->pc = 0x1f44c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f44c4:
    // 0x1f44c4: 0x2447ccd0
    ctx->pc = 0x1f44c4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294954192));
label_1f44c8:
    // 0x1f44c8: 0xc07dd74
label_1f44cc:
    if (ctx->pc == 0x1F44CCu) {
        ctx->pc = 0x1F44CCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F44D0u;
        goto label_1f44d0;
    }
    ctx->pc = 0x1F44C8u;
    SET_GPR_U32(ctx, 31, 0x1F44D0u);
    ctx->pc = 0x1F44CCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1F75D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        McSyncOpen__FPiiiPCci_0x1f75d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F44D0u; }
        else if (ctx->pc != 0x1F44D0u) { ctx->pc = 0x1F44D0u; }
    }
    if (ctx->pc != 0x1F44D0u) { return; }
    ctx->pc = 0x1F44D0u;
label_1f44d0:
    // 0x1f44d0: 0x8e020004
    ctx->pc = 0x1f44d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f44d4:
    // 0x1f44d4: 0x24420001
    ctx->pc = 0x1f44d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f44d8:
    // 0x1f44d8: 0xae020004
    ctx->pc = 0x1f44d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f44dc:
    // 0x1f44dc: 0xc07de28
label_1f44e0:
    if (ctx->pc == 0x1F44E0u) {
        ctx->pc = 0x1F44E4u;
        goto label_1f44e4;
    }
    ctx->pc = 0x1F44DCu;
    SET_GPR_U32(ctx, 31, 0x1F44E4u);
    ctx->pc = 0x1F78A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_mccheckrun__Fv_0x1f78a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F44E4u; }
        else if (ctx->pc != 0x1F44E4u) { ctx->pc = 0x1F44E4u; }
    }
    if (ctx->pc != 0x1F44E4u) { return; }
    ctx->pc = 0x1F44E4u;
label_1f44e4:
    // 0x1f44e4: 0x3c010050
    ctx->pc = 0x1f44e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f44e8:
    // 0x1f44e8: 0x8c23fe8c
    ctx->pc = 0x1f44e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f44ec:
    // 0x1f44ec: 0x1060017a
label_1f44f0:
    if (ctx->pc == 0x1F44F0u) {
        ctx->pc = 0x1F44F0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        ctx->pc = 0x1F44F4u;
        goto label_1f44f4;
    }
    ctx->pc = 0x1F44ECu;
    {
        const bool branch_taken_0x1f44ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F44F0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1f44ec) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F44F4u;
label_1f44f4:
    // 0x1f44f4: 0x8c23fe88
    ctx->pc = 0x1f44f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966920)));
label_1f44f8:
    // 0x1f44f8: 0x4600004
label_1f44fc:
    if (ctx->pc == 0x1F44FCu) {
        ctx->pc = 0x1F44FCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4500u;
        goto label_1f4500;
    }
    ctx->pc = 0x1F44F8u;
    {
        const bool branch_taken_0x1f44f8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1F44FCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x1f44f8) {
            ctx->pc = 0x1F450Cu;
            goto label_1f450c;
        }
    }
    ctx->pc = 0x1F4500u;
label_1f4500:
    // 0x1f4500: 0x24030009
    ctx->pc = 0x1f4500u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
label_1f4504:
    // 0x1f4504: 0x10000174
label_1f4508:
    if (ctx->pc == 0x1F4508u) {
        ctx->pc = 0x1F4508u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F450Cu;
        goto label_1f450c;
    }
    ctx->pc = 0x1F4504u;
    {
        const bool branch_taken_0x1f4504 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4508u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4504) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F450Cu;
label_1f450c:
    // 0x1f450c: 0x8e030014
    ctx->pc = 0x1f450cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1f4510:
    // 0x1f4510: 0x28630024
    ctx->pc = 0x1f4510u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 36));
label_1f4514:
    // 0x1f4514: 0x14600004
label_1f4518:
    if (ctx->pc == 0x1F4518u) {
        ctx->pc = 0x1F4518u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 23));
        ctx->pc = 0x1F451Cu;
        goto label_1f451c;
    }
    ctx->pc = 0x1F4514u;
    {
        const bool branch_taken_0x1f4514 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F4518u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x1f4514) {
            ctx->pc = 0x1F4528u;
            goto label_1f4528;
        }
    }
    ctx->pc = 0x1F451Cu;
label_1f451c:
    // 0x1f451c: 0x2403001f
    ctx->pc = 0x1f451cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
label_1f4520:
    // 0x1f4520: 0x1000016d
label_1f4524:
    if (ctx->pc == 0x1F4524u) {
        ctx->pc = 0x1F4524u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4528u;
        goto label_1f4528;
    }
    ctx->pc = 0x1F4520u;
    {
        const bool branch_taken_0x1f4520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4524u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4520) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4528u;
label_1f4528:
    // 0x1f4528: 0x1000016b
label_1f452c:
    if (ctx->pc == 0x1F452Cu) {
        ctx->pc = 0x1F452Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4530u;
        goto label_1f4530;
    }
    ctx->pc = 0x1F4528u;
    {
        const bool branch_taken_0x1f4528 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F452Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4528) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4530u;
label_1f4530:
    // 0x1f4530: 0x2402ffff
    ctx->pc = 0x1f4530u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f4534:
    // 0x1f4534: 0xaf808e3c
    ctx->pc = 0x1f4534u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
label_1f4538:
    // 0x1f4538: 0xaf828e40
    ctx->pc = 0x1f4538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
label_1f453c:
    // 0x1f453c: 0x8e020004
    ctx->pc = 0x1f453cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4540:
    // 0x1f4540: 0x24420001
    ctx->pc = 0x1f4540u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f4544:
    // 0x1f4544: 0xae020004
    ctx->pc = 0x1f4544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f4548:
    // 0x1f4548: 0x3c020051
    ctx->pc = 0x1f4548u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1f454c:
    // 0x1f454c: 0xc086370
label_1f4550:
    if (ctx->pc == 0x1F4550u) {
        ctx->pc = 0x1F4550u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
        ctx->pc = 0x1F4554u;
        goto label_1f4554;
    }
    ctx->pc = 0x1F454Cu;
    SET_GPR_U32(ctx, 31, 0x1F4554u);
    ctx->pc = 0x1F4550u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkRemain__13EntryDatClassFv_0x218dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4554u; }
        else if (ctx->pc != 0x1F4554u) { ctx->pc = 0x1F4554u; }
    }
    if (ctx->pc != 0x1F4554u) { return; }
    ctx->pc = 0x1F4554u;
label_1f4554:
    // 0x1f4554: 0x14400160
label_1f4558:
    if (ctx->pc == 0x1F4558u) {
        ctx->pc = 0x1F455Cu;
        goto label_1f455c;
    }
    ctx->pc = 0x1F4554u;
    {
        const bool branch_taken_0x1f4554 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f4554) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F455Cu;
label_1f455c:
    // 0x1f455c: 0xc07e284
label_1f4560:
    if (ctx->pc == 0x1F4560u) {
        ctx->pc = 0x1F4564u;
        goto label_1f4564;
    }
    ctx->pc = 0x1F455Cu;
    SET_GPR_U32(ctx, 31, 0x1F4564u);
    ctx->pc = 0x1F8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        McchkFadeInStart__Fv_0x1f8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4564u; }
        else if (ctx->pc != 0x1F4564u) { ctx->pc = 0x1F4564u; }
    }
    if (ctx->pc != 0x1F4564u) { return; }
    ctx->pc = 0x1F4564u;
label_1f4564:
    // 0x1f4564: 0x24020001
    ctx->pc = 0x1f4564u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f4568:
    // 0x1f4568: 0xae020034
    ctx->pc = 0x1f4568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1f456c:
    // 0x1f456c: 0x8e020004
    ctx->pc = 0x1f456cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4570:
    // 0x1f4570: 0x24420001
    ctx->pc = 0x1f4570u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f4574:
    // 0x1f4574: 0xae020004
    ctx->pc = 0x1f4574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f4578:
    // 0x1f4578: 0xc07de4c
label_1f457c:
    if (ctx->pc == 0x1F457Cu) {
        ctx->pc = 0x1F4580u;
        goto label_1f4580;
    }
    ctx->pc = 0x1F4578u;
    SET_GPR_U32(ctx, 31, 0x1F4580u);
    ctx->pc = 0x1F7930u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_mccheck__Fv_0x1f7930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4580u; }
        else if (ctx->pc != 0x1F4580u) { ctx->pc = 0x1F4580u; }
    }
    if (ctx->pc != 0x1F4580u) { return; }
    ctx->pc = 0x1F4580u;
label_1f4580:
    // 0x1f4580: 0x3c010050
    ctx->pc = 0x1f4580u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f4584:
    // 0x1f4584: 0x8c23fe8c
    ctx->pc = 0x1f4584u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f4588:
    // 0x1f4588: 0x10600153
label_1f458c:
    if (ctx->pc == 0x1F458Cu) {
        ctx->pc = 0x1F4590u;
        goto label_1f4590;
    }
    ctx->pc = 0x1F4588u;
    {
        const bool branch_taken_0x1f4588 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f4588) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4590u;
label_1f4590:
    // 0x1f4590: 0x24020001
    ctx->pc = 0x1f4590u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f4594:
    // 0x1f4594: 0xaf828e3c
    ctx->pc = 0x1f4594u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 2));
label_1f4598:
    // 0x1f4598: 0x8e020004
    ctx->pc = 0x1f4598u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f459c:
    // 0x1f459c: 0x24420001
    ctx->pc = 0x1f459cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f45a0:
    // 0x1f45a0: 0xae020004
    ctx->pc = 0x1f45a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f45a4:
    // 0x1f45a4: 0xc07de4c
label_1f45a8:
    if (ctx->pc == 0x1F45A8u) {
        ctx->pc = 0x1F45ACu;
        goto label_1f45ac;
    }
    ctx->pc = 0x1F45A4u;
    SET_GPR_U32(ctx, 31, 0x1F45ACu);
    ctx->pc = 0x1F7930u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_mccheck__Fv_0x1f7930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45ACu; }
        else if (ctx->pc != 0x1F45ACu) { ctx->pc = 0x1F45ACu; }
    }
    if (ctx->pc != 0x1F45ACu) { return; }
    ctx->pc = 0x1F45ACu;
label_1f45ac:
    // 0x1f45ac: 0x8f848e40
    ctx->pc = 0x1f45acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938176)));
label_1f45b0:
    // 0x1f45b0: 0x24030001
    ctx->pc = 0x1f45b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f45b4:
    // 0x1f45b4: 0x10830007
label_1f45b8:
    if (ctx->pc == 0x1F45B8u) {
        ctx->pc = 0x1F45B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1F45BCu;
        goto label_1f45bc;
    }
    ctx->pc = 0x1F45B4u;
    {
        const bool branch_taken_0x1f45b4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1F45B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1f45b4) {
            ctx->pc = 0x1F45D4u;
            goto label_1f45d4;
        }
    }
    ctx->pc = 0x1F45BCu;
label_1f45bc:
    // 0x1f45bc: 0x10800003
label_1f45c0:
    if (ctx->pc == 0x1F45C0u) {
        ctx->pc = 0x1F45C0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x1F45C4u;
        goto label_1f45c4;
    }
    ctx->pc = 0x1F45BCu;
    {
        const bool branch_taken_0x1f45bc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F45C0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
        if (branch_taken_0x1f45bc) {
            ctx->pc = 0x1F45CCu;
            goto label_1f45cc;
        }
    }
    ctx->pc = 0x1F45C4u;
label_1f45c4:
    // 0x1f45c4: 0x10000145
label_1f45c8:
    if (ctx->pc == 0x1F45C8u) {
        ctx->pc = 0x1F45C8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1F45CCu;
        goto label_1f45cc;
    }
    ctx->pc = 0x1F45C4u;
    {
        const bool branch_taken_0x1f45c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F45C8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1f45c4) {
            ctx->pc = 0x1F4ADCu;
            goto label_1f4adc;
        }
    }
    ctx->pc = 0x1F45CCu;
label_1f45cc:
    // 0x1f45cc: 0x10000142
label_1f45d0:
    if (ctx->pc == 0x1F45D0u) {
        ctx->pc = 0x1F45D0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F45D4u;
        goto label_1f45d4;
    }
    ctx->pc = 0x1F45CCu;
    {
        const bool branch_taken_0x1f45cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F45D0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f45cc) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F45D4u;
label_1f45d4:
    // 0x1f45d4: 0x10000140
label_1f45d8:
    if (ctx->pc == 0x1F45D8u) {
        ctx->pc = 0x1F45D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F45DCu;
        goto label_1f45dc;
    }
    ctx->pc = 0x1F45D4u;
    {
        const bool branch_taken_0x1f45d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F45D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f45d4) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F45DCu;
label_1f45dc:
    // 0x1f45dc: 0x8e030008
    ctx->pc = 0x1f45dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f45e0:
    // 0x1f45e0: 0x24630001
    ctx->pc = 0x1f45e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1f45e4:
    // 0x1f45e4: 0xae030008
    ctx->pc = 0x1f45e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1f45e8:
    // 0x1f45e8: 0x8e030008
    ctx->pc = 0x1f45e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f45ec:
    // 0x1f45ec: 0x28610005
    ctx->pc = 0x1f45ecu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 5));
label_1f45f0:
    // 0x1f45f0: 0x10200004
label_1f45f4:
    if (ctx->pc == 0x1F45F4u) {
        ctx->pc = 0x1F45F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F45F8u;
        goto label_1f45f8;
    }
    ctx->pc = 0x1F45F0u;
    {
        const bool branch_taken_0x1f45f0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F45F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f45f0) {
            ctx->pc = 0x1F4604u;
            goto label_1f4604;
        }
    }
    ctx->pc = 0x1F45F8u;
label_1f45f8:
    // 0x1f45f8: 0x24030004
    ctx->pc = 0x1f45f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1f45fc:
    // 0x1f45fc: 0x10000136
label_1f4600:
    if (ctx->pc == 0x1F4600u) {
        ctx->pc = 0x1F4600u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4604u;
        goto label_1f4604;
    }
    ctx->pc = 0x1F45FCu;
    {
        const bool branch_taken_0x1f45fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4600u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f45fc) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4604u;
label_1f4604:
    // 0x1f4604: 0xaf838e3c
    ctx->pc = 0x1f4604u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 3));
label_1f4608:
    // 0x1f4608: 0x2403ffff
    ctx->pc = 0x1f4608u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f460c:
    // 0x1f460c: 0xaf838e40
    ctx->pc = 0x1f460cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 3));
label_1f4610:
    // 0x1f4610: 0x8e030004
    ctx->pc = 0x1f4610u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4614:
    // 0x1f4614: 0x24630001
    ctx->pc = 0x1f4614u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1f4618:
    // 0x1f4618: 0x1000012f
label_1f461c:
    if (ctx->pc == 0x1F461Cu) {
        ctx->pc = 0x1F461Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4620u;
        goto label_1f4620;
    }
    ctx->pc = 0x1F4618u;
    {
        const bool branch_taken_0x1f4618 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F461Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4618) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4620u;
label_1f4620:
    // 0x1f4620: 0xc07deb4
label_1f4624:
    if (ctx->pc == 0x1F4624u) {
        ctx->pc = 0x1F4628u;
        goto label_1f4628;
    }
    ctx->pc = 0x1F4620u;
    SET_GPR_U32(ctx, 31, 0x1F4628u);
    ctx->pc = 0x1F7AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_200__Fv_0x1f7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4628u; }
        else if (ctx->pc != 0x1F4628u) { ctx->pc = 0x1F4628u; }
    }
    if (ctx->pc != 0x1F4628u) { return; }
    ctx->pc = 0x1F4628u;
label_1f4628:
    // 0x1f4628: 0x8f848e40
    ctx->pc = 0x1f4628u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938176)));
label_1f462c:
    // 0x1f462c: 0x24030001
    ctx->pc = 0x1f462cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f4630:
    // 0x1f4630: 0x1083000a
label_1f4634:
    if (ctx->pc == 0x1F4634u) {
        ctx->pc = 0x1F4634u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1F4638u;
        goto label_1f4638;
    }
    ctx->pc = 0x1F4630u;
    {
        const bool branch_taken_0x1f4630 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1F4634u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1f4630) {
            ctx->pc = 0x1F465Cu;
            goto label_1f465c;
        }
    }
    ctx->pc = 0x1F4638u;
label_1f4638:
    // 0x1f4638: 0x10800003
label_1f463c:
    if (ctx->pc == 0x1F463Cu) {
        ctx->pc = 0x1F463Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x1F4640u;
        goto label_1f4640;
    }
    ctx->pc = 0x1F4638u;
    {
        const bool branch_taken_0x1f4638 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F463Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
        if (branch_taken_0x1f4638) {
            ctx->pc = 0x1F4648u;
            goto label_1f4648;
        }
    }
    ctx->pc = 0x1F4640u;
label_1f4640:
    // 0x1f4640: 0x10000125
label_1f4644:
    if (ctx->pc == 0x1F4644u) {
        ctx->pc = 0x1F4648u;
        goto label_1f4648;
    }
    ctx->pc = 0x1F4640u;
    {
        const bool branch_taken_0x1f4640 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f4640) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4648u;
label_1f4648:
    // 0x1f4648: 0xae030004
    ctx->pc = 0x1f4648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1f464c:
    // 0x1f464c: 0x2403ffff
    ctx->pc = 0x1f464cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f4650:
    // 0x1f4650: 0xaf808e3c
    ctx->pc = 0x1f4650u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
label_1f4654:
    // 0x1f4654: 0x10000120
label_1f4658:
    if (ctx->pc == 0x1F4658u) {
        ctx->pc = 0x1F4658u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 3));
        ctx->pc = 0x1F465Cu;
        goto label_1f465c;
    }
    ctx->pc = 0x1F4654u;
    {
        const bool branch_taken_0x1f4654 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4658u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4654) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F465Cu;
label_1f465c:
    // 0x1f465c: 0xae030004
    ctx->pc = 0x1f465cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1f4660:
    // 0x1f4660: 0x2403ffff
    ctx->pc = 0x1f4660u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f4664:
    // 0x1f4664: 0xaf808e3c
    ctx->pc = 0x1f4664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
label_1f4668:
    // 0x1f4668: 0x1000011b
label_1f466c:
    if (ctx->pc == 0x1F466Cu) {
        ctx->pc = 0x1F466Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4670u;
        goto label_1f4670;
    }
    ctx->pc = 0x1F4668u;
    {
        const bool branch_taken_0x1f4668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F466Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4668) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4670u;
label_1f4670:
    // 0x1f4670: 0x24030022
    ctx->pc = 0x1f4670u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
label_1f4674:
    // 0x1f4674: 0x10000118
label_1f4678:
    if (ctx->pc == 0x1F4678u) {
        ctx->pc = 0x1F4678u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F467Cu;
        goto label_1f467c;
    }
    ctx->pc = 0x1F4674u;
    {
        const bool branch_taken_0x1f4674 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4678u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4674) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F467Cu;
label_1f467c:
    // 0x1f467c: 0x2402ffff
    ctx->pc = 0x1f467cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f4680:
    // 0x1f4680: 0xaf808e3c
    ctx->pc = 0x1f4680u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
label_1f4684:
    // 0x1f4684: 0xaf828e40
    ctx->pc = 0x1f4684u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
label_1f4688:
    // 0x1f4688: 0x8e020004
    ctx->pc = 0x1f4688u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f468c:
    // 0x1f468c: 0x24420001
    ctx->pc = 0x1f468cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f4690:
    // 0x1f4690: 0xae020004
    ctx->pc = 0x1f4690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f4694:
    // 0x1f4694: 0x3c020051
    ctx->pc = 0x1f4694u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1f4698:
    // 0x1f4698: 0xc086370
label_1f469c:
    if (ctx->pc == 0x1F469Cu) {
        ctx->pc = 0x1F469Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
        ctx->pc = 0x1F46A0u;
        goto label_1f46a0;
    }
    ctx->pc = 0x1F4698u;
    SET_GPR_U32(ctx, 31, 0x1F46A0u);
    ctx->pc = 0x1F469Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkRemain__13EntryDatClassFv_0x218dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F46A0u; }
        else if (ctx->pc != 0x1F46A0u) { ctx->pc = 0x1F46A0u; }
    }
    if (ctx->pc != 0x1F46A0u) { return; }
    ctx->pc = 0x1F46A0u;
label_1f46a0:
    // 0x1f46a0: 0x1440010d
label_1f46a4:
    if (ctx->pc == 0x1F46A4u) {
        ctx->pc = 0x1F46A8u;
        goto label_1f46a8;
    }
    ctx->pc = 0x1F46A0u;
    {
        const bool branch_taken_0x1f46a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f46a0) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F46A8u;
label_1f46a8:
    // 0x1f46a8: 0xc07e284
label_1f46ac:
    if (ctx->pc == 0x1F46ACu) {
        ctx->pc = 0x1F46B0u;
        goto label_1f46b0;
    }
    ctx->pc = 0x1F46A8u;
    SET_GPR_U32(ctx, 31, 0x1F46B0u);
    ctx->pc = 0x1F8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        McchkFadeInStart__Fv_0x1f8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F46B0u; }
        else if (ctx->pc != 0x1F46B0u) { ctx->pc = 0x1F46B0u; }
    }
    if (ctx->pc != 0x1F46B0u) { return; }
    ctx->pc = 0x1F46B0u;
label_1f46b0:
    // 0x1f46b0: 0x24020001
    ctx->pc = 0x1f46b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f46b4:
    // 0x1f46b4: 0xae020034
    ctx->pc = 0x1f46b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1f46b8:
    // 0x1f46b8: 0x8e020004
    ctx->pc = 0x1f46b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f46bc:
    // 0x1f46bc: 0x24420001
    ctx->pc = 0x1f46bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f46c0:
    // 0x1f46c0: 0xae020004
    ctx->pc = 0x1f46c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f46c4:
    // 0x1f46c4: 0xc07e10c
label_1f46c8:
    if (ctx->pc == 0x1F46C8u) {
        ctx->pc = 0x1F46CCu;
        goto label_1f46cc;
    }
    ctx->pc = 0x1F46C4u;
    SET_GPR_U32(ctx, 31, 0x1F46CCu);
    ctx->pc = 0x1F8430u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_bootmcempty__Fv_0x1f8430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F46CCu; }
        else if (ctx->pc != 0x1F46CCu) { ctx->pc = 0x1F46CCu; }
    }
    if (ctx->pc != 0x1F46CCu) { return; }
    ctx->pc = 0x1F46CCu;
label_1f46cc:
    // 0x1f46cc: 0x3c010050
    ctx->pc = 0x1f46ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f46d0:
    // 0x1f46d0: 0x8c23fe8c
    ctx->pc = 0x1f46d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f46d4:
    // 0x1f46d4: 0x10600100
label_1f46d8:
    if (ctx->pc == 0x1F46D8u) {
        ctx->pc = 0x1F46DCu;
        goto label_1f46dc;
    }
    ctx->pc = 0x1F46D4u;
    {
        const bool branch_taken_0x1f46d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f46d4) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F46DCu;
label_1f46dc:
    // 0x1f46dc: 0x24020001
    ctx->pc = 0x1f46dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f46e0:
    // 0x1f46e0: 0xaf828e3c
    ctx->pc = 0x1f46e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 2));
label_1f46e4:
    // 0x1f46e4: 0x8e020004
    ctx->pc = 0x1f46e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f46e8:
    // 0x1f46e8: 0x24420001
    ctx->pc = 0x1f46e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f46ec:
    // 0x1f46ec: 0xae020004
    ctx->pc = 0x1f46ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f46f0:
    // 0x1f46f0: 0xc07e10c
label_1f46f4:
    if (ctx->pc == 0x1F46F4u) {
        ctx->pc = 0x1F46F8u;
        goto label_1f46f8;
    }
    ctx->pc = 0x1F46F0u;
    SET_GPR_U32(ctx, 31, 0x1F46F8u);
    ctx->pc = 0x1F8430u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_bootmcempty__Fv_0x1f8430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F46F8u; }
        else if (ctx->pc != 0x1F46F8u) { ctx->pc = 0x1F46F8u; }
    }
    if (ctx->pc != 0x1F46F8u) { return; }
    ctx->pc = 0x1F46F8u;
label_1f46f8:
    // 0x1f46f8: 0x8f848e40
    ctx->pc = 0x1f46f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938176)));
label_1f46fc:
    // 0x1f46fc: 0x24030001
    ctx->pc = 0x1f46fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f4700:
    // 0x1f4700: 0x10830007
label_1f4704:
    if (ctx->pc == 0x1F4704u) {
        ctx->pc = 0x1F4704u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1F4708u;
        goto label_1f4708;
    }
    ctx->pc = 0x1F4700u;
    {
        const bool branch_taken_0x1f4700 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1F4704u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1f4700) {
            ctx->pc = 0x1F4720u;
            goto label_1f4720;
        }
    }
    ctx->pc = 0x1F4708u;
label_1f4708:
    // 0x1f4708: 0x10800003
label_1f470c:
    if (ctx->pc == 0x1F470Cu) {
        ctx->pc = 0x1F470Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x1F4710u;
        goto label_1f4710;
    }
    ctx->pc = 0x1F4708u;
    {
        const bool branch_taken_0x1f4708 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F470Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
        if (branch_taken_0x1f4708) {
            ctx->pc = 0x1F4718u;
            goto label_1f4718;
        }
    }
    ctx->pc = 0x1F4710u;
label_1f4710:
    // 0x1f4710: 0x10000005
label_1f4714:
    if (ctx->pc == 0x1F4714u) {
        ctx->pc = 0x1F4714u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        ctx->pc = 0x1F4718u;
        goto label_1f4718;
    }
    ctx->pc = 0x1F4710u;
    {
        const bool branch_taken_0x1f4710 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4714u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1f4710) {
            ctx->pc = 0x1F4728u;
            goto label_1f4728;
        }
    }
    ctx->pc = 0x1F4718u;
label_1f4718:
    // 0x1f4718: 0x100000ef
label_1f471c:
    if (ctx->pc == 0x1F471Cu) {
        ctx->pc = 0x1F471Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4720u;
        goto label_1f4720;
    }
    ctx->pc = 0x1F4718u;
    {
        const bool branch_taken_0x1f4718 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F471Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4718) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4720u;
label_1f4720:
    // 0x1f4720: 0x100000ed
label_1f4724:
    if (ctx->pc == 0x1F4724u) {
        ctx->pc = 0x1F4724u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4728u;
        goto label_1f4728;
    }
    ctx->pc = 0x1F4720u;
    {
        const bool branch_taken_0x1f4720 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4724u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4720) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4728u;
label_1f4728:
    // 0x1f4728: 0x8c23fe8c
    ctx->pc = 0x1f4728u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f472c:
    // 0x1f472c: 0x106000ea
label_1f4730:
    if (ctx->pc == 0x1F4730u) {
        ctx->pc = 0x1F4734u;
        goto label_1f4734;
    }
    ctx->pc = 0x1F472Cu;
    {
        const bool branch_taken_0x1f472c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f472c) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4734u;
label_1f4734:
    // 0x1f4734: 0x8e040010
    ctx->pc = 0x1f4734u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f4738:
    // 0x1f4738: 0x24030002
    ctx->pc = 0x1f4738u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1f473c:
    // 0x1f473c: 0x1483000c
label_1f4740:
    if (ctx->pc == 0x1F4740u) {
        ctx->pc = 0x1F4740u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1F4744u;
        goto label_1f4744;
    }
    ctx->pc = 0x1F473Cu;
    {
        const bool branch_taken_0x1f473c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1F4740u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1f473c) {
            ctx->pc = 0x1F4770u;
            goto label_1f4770;
        }
    }
    ctx->pc = 0x1F4744u;
label_1f4744:
    // 0x1f4744: 0x70002628
    ctx->pc = 0x1f4744u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f4748:
    // 0x1f4748: 0x70002e28
    ctx->pc = 0x1f4748u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f474c:
    // 0x1f474c: 0x26060010
    ctx->pc = 0x1f474cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 16));
label_1f4750:
    // 0x1f4750: 0x26070014
    ctx->pc = 0x1f4750u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 20));
label_1f4754:
    // 0x1f4754: 0xc07ddd8
label_1f4758:
    if (ctx->pc == 0x1F4758u) {
        ctx->pc = 0x1F4758u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x1F475Cu;
        goto label_1f475c;
    }
    ctx->pc = 0x1F4754u;
    SET_GPR_U32(ctx, 31, 0x1F475Cu);
    ctx->pc = 0x1F4758u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 24));
    ctx->pc = 0x1F7760u;
    {
        const uint32_t __entryPc = ctx->pc;
        McGetInfo__FiiPiPiPi_0x1f7760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F475Cu; }
        else if (ctx->pc != 0x1F475Cu) { ctx->pc = 0x1F475Cu; }
    }
    if (ctx->pc != 0x1F475Cu) { return; }
    ctx->pc = 0x1F475Cu;
label_1f475c:
    // 0x1f475c: 0x3c020050
    ctx->pc = 0x1f475cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f4760:
    // 0x1f4760: 0xc074dac
label_1f4764:
    if (ctx->pc == 0x1F4764u) {
        ctx->pc = 0x1F4764u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
        ctx->pc = 0x1F4768u;
        goto label_1f4768;
    }
    ctx->pc = 0x1F4760u;
    SET_GPR_U32(ctx, 31, 0x1F4768u);
    ctx->pc = 0x1F4764u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
    ctx->pc = 0x1D36B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        synch__14SysCfgMgrClassFv_0x1d36b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4768u; }
        else if (ctx->pc != 0x1F4768u) { ctx->pc = 0x1F4768u; }
    }
    if (ctx->pc != 0x1F4768u) { return; }
    ctx->pc = 0x1F4768u;
label_1f4768:
    // 0x1f4768: 0x100000db
label_1f476c:
    if (ctx->pc == 0x1F476Cu) {
        ctx->pc = 0x1F4770u;
        goto label_1f4770;
    }
    ctx->pc = 0x1F4768u;
    {
        const bool branch_taken_0x1f4768 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f4768) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4770u;
label_1f4770:
    // 0x1f4770: 0x100000d9
label_1f4774:
    if (ctx->pc == 0x1F4774u) {
        ctx->pc = 0x1F4774u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4778u;
        goto label_1f4778;
    }
    ctx->pc = 0x1F4770u;
    {
        const bool branch_taken_0x1f4770 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4774u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4770) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4778u;
label_1f4778:
    // 0x1f4778: 0x2402ffff
    ctx->pc = 0x1f4778u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f477c:
    // 0x1f477c: 0xaf808e3c
    ctx->pc = 0x1f477cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
label_1f4780:
    // 0x1f4780: 0xaf828e40
    ctx->pc = 0x1f4780u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
label_1f4784:
    // 0x1f4784: 0x8e020004
    ctx->pc = 0x1f4784u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4788:
    // 0x1f4788: 0x24420001
    ctx->pc = 0x1f4788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f478c:
    // 0x1f478c: 0xae020004
    ctx->pc = 0x1f478cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f4790:
    // 0x1f4790: 0x3c020051
    ctx->pc = 0x1f4790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1f4794:
    // 0x1f4794: 0xc086370
label_1f4798:
    if (ctx->pc == 0x1F4798u) {
        ctx->pc = 0x1F4798u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
        ctx->pc = 0x1F479Cu;
        goto label_1f479c;
    }
    ctx->pc = 0x1F4794u;
    SET_GPR_U32(ctx, 31, 0x1F479Cu);
    ctx->pc = 0x1F4798u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkRemain__13EntryDatClassFv_0x218dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F479Cu; }
        else if (ctx->pc != 0x1F479Cu) { ctx->pc = 0x1F479Cu; }
    }
    if (ctx->pc != 0x1F479Cu) { return; }
    ctx->pc = 0x1F479Cu;
label_1f479c:
    // 0x1f479c: 0x144000ce
label_1f47a0:
    if (ctx->pc == 0x1F47A0u) {
        ctx->pc = 0x1F47A4u;
        goto label_1f47a4;
    }
    ctx->pc = 0x1F479Cu;
    {
        const bool branch_taken_0x1f479c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f479c) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F47A4u;
label_1f47a4:
    // 0x1f47a4: 0xc07e284
label_1f47a8:
    if (ctx->pc == 0x1F47A8u) {
        ctx->pc = 0x1F47ACu;
        goto label_1f47ac;
    }
    ctx->pc = 0x1F47A4u;
    SET_GPR_U32(ctx, 31, 0x1F47ACu);
    ctx->pc = 0x1F8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        McchkFadeInStart__Fv_0x1f8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F47ACu; }
        else if (ctx->pc != 0x1F47ACu) { ctx->pc = 0x1F47ACu; }
    }
    if (ctx->pc != 0x1F47ACu) { return; }
    ctx->pc = 0x1F47ACu;
label_1f47ac:
    // 0x1f47ac: 0x24020001
    ctx->pc = 0x1f47acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f47b0:
    // 0x1f47b0: 0xae020034
    ctx->pc = 0x1f47b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1f47b4:
    // 0x1f47b4: 0x8f828be4
    ctx->pc = 0x1f47b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
label_1f47b8:
    // 0x1f47b8: 0xae020030
    ctx->pc = 0x1f47b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f47bc:
    // 0x1f47bc: 0x8e020004
    ctx->pc = 0x1f47bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f47c0:
    // 0x1f47c0: 0x24420001
    ctx->pc = 0x1f47c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f47c4:
    // 0x1f47c4: 0xae020004
    ctx->pc = 0x1f47c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f47c8:
    // 0x1f47c8: 0xc07ded8
label_1f47cc:
    if (ctx->pc == 0x1F47CCu) {
        ctx->pc = 0x1F47D0u;
        goto label_1f47d0;
    }
    ctx->pc = 0x1F47C8u;
    SET_GPR_U32(ctx, 31, 0x1F47D0u);
    ctx->pc = 0x1F7B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_nowloading__Fv_0x1f7b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F47D0u; }
        else if (ctx->pc != 0x1F47D0u) { ctx->pc = 0x1F47D0u; }
    }
    if (ctx->pc != 0x1F47D0u) { return; }
    ctx->pc = 0x1F47D0u;
label_1f47d0:
    // 0x1f47d0: 0x3c010050
    ctx->pc = 0x1f47d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f47d4:
    // 0x1f47d4: 0x8c23fe8c
    ctx->pc = 0x1f47d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f47d8:
    // 0x1f47d8: 0x106000bf
label_1f47dc:
    if (ctx->pc == 0x1F47DCu) {
        ctx->pc = 0x1F47E0u;
        goto label_1f47e0;
    }
    ctx->pc = 0x1F47D8u;
    {
        const bool branch_taken_0x1f47d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f47d8) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F47E0u;
label_1f47e0:
    // 0x1f47e0: 0x8e050038
    ctx->pc = 0x1f47e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1f47e4:
    // 0x1f47e4: 0xc07ddac
label_1f47e8:
    if (ctx->pc == 0x1F47E8u) {
        ctx->pc = 0x1F47E8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x1F47ECu;
        goto label_1f47ec;
    }
    ctx->pc = 0x1F47E4u;
    SET_GPR_U32(ctx, 31, 0x1F47ECu);
    ctx->pc = 0x1F47E8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1F76B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        McSyncReadGameData__FiP14tagUSER_BACKUP_0x1f76b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F47ECu; }
        else if (ctx->pc != 0x1F47ECu) { ctx->pc = 0x1F47ECu; }
    }
    if (ctx->pc != 0x1F47ECu) { return; }
    ctx->pc = 0x1F47ECu;
label_1f47ec:
    // 0x1f47ec: 0x8e020004
    ctx->pc = 0x1f47ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f47f0:
    // 0x1f47f0: 0x24420001
    ctx->pc = 0x1f47f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f47f4:
    // 0x1f47f4: 0xae020004
    ctx->pc = 0x1f47f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f47f8:
    // 0x1f47f8: 0xc07ded8
label_1f47fc:
    if (ctx->pc == 0x1F47FCu) {
        ctx->pc = 0x1F4800u;
        goto label_1f4800;
    }
    ctx->pc = 0x1F47F8u;
    SET_GPR_U32(ctx, 31, 0x1F4800u);
    ctx->pc = 0x1F7B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_nowloading__Fv_0x1f7b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4800u; }
        else if (ctx->pc != 0x1F4800u) { ctx->pc = 0x1F4800u; }
    }
    if (ctx->pc != 0x1F4800u) { return; }
    ctx->pc = 0x1F4800u;
label_1f4800:
    // 0x1f4800: 0x3c010050
    ctx->pc = 0x1f4800u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f4804:
    // 0x1f4804: 0x8c23fe8c
    ctx->pc = 0x1f4804u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f4808:
    // 0x1f4808: 0x106000b3
label_1f480c:
    if (ctx->pc == 0x1F480Cu) {
        ctx->pc = 0x1F480Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        ctx->pc = 0x1F4810u;
        goto label_1f4810;
    }
    ctx->pc = 0x1F4808u;
    {
        const bool branch_taken_0x1f4808 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F480Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1f4808) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4810u;
label_1f4810:
    // 0x1f4810: 0x8c23fe88
    ctx->pc = 0x1f4810u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966920)));
label_1f4814:
    // 0x1f4814: 0x4610004
label_1f4818:
    if (ctx->pc == 0x1F4818u) {
        ctx->pc = 0x1F4818u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x1F481Cu;
        goto label_1f481c;
    }
    ctx->pc = 0x1F4814u;
    {
        const bool branch_taken_0x1f4814 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F4818u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
        if (branch_taken_0x1f4814) {
            ctx->pc = 0x1F4828u;
            goto label_1f4828;
        }
    }
    ctx->pc = 0x1F481Cu;
label_1f481c:
    // 0x1f481c: 0x2403001b
    ctx->pc = 0x1f481cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 27));
label_1f4820:
    // 0x1f4820: 0x100000ad
label_1f4824:
    if (ctx->pc == 0x1F4824u) {
        ctx->pc = 0x1F4824u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4828u;
        goto label_1f4828;
    }
    ctx->pc = 0x1F4820u;
    {
        const bool branch_taken_0x1f4820 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4824u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4820) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4828u;
label_1f4828:
    // 0x1f4828: 0xc07dd94
label_1f482c:
    if (ctx->pc == 0x1F482Cu) {
        ctx->pc = 0x1F4830u;
        goto label_1f4830;
    }
    ctx->pc = 0x1F4828u;
    SET_GPR_U32(ctx, 31, 0x1F4830u);
    ctx->pc = 0x1F7650u;
    {
        const uint32_t __entryPc = ctx->pc;
        McSyncClose__FPi_0x1f7650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4830u; }
        else if (ctx->pc != 0x1F4830u) { ctx->pc = 0x1F4830u; }
    }
    if (ctx->pc != 0x1F4830u) { return; }
    ctx->pc = 0x1F4830u;
label_1f4830:
    // 0x1f4830: 0x8e020004
    ctx->pc = 0x1f4830u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4834:
    // 0x1f4834: 0x24420001
    ctx->pc = 0x1f4834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f4838:
    // 0x1f4838: 0xae020004
    ctx->pc = 0x1f4838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f483c:
    // 0x1f483c: 0xc07ded8
label_1f4840:
    if (ctx->pc == 0x1F4840u) {
        ctx->pc = 0x1F4844u;
        goto label_1f4844;
    }
    ctx->pc = 0x1F483Cu;
    SET_GPR_U32(ctx, 31, 0x1F4844u);
    ctx->pc = 0x1F7B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_nowloading__Fv_0x1f7b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4844u; }
        else if (ctx->pc != 0x1F4844u) { ctx->pc = 0x1F4844u; }
    }
    if (ctx->pc != 0x1F4844u) { return; }
    ctx->pc = 0x1F4844u;
label_1f4844:
    // 0x1f4844: 0x3c010050
    ctx->pc = 0x1f4844u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f4848:
    // 0x1f4848: 0x8c23fe8c
    ctx->pc = 0x1f4848u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f484c:
    // 0x1f484c: 0x106000a2
label_1f4850:
    if (ctx->pc == 0x1F4850u) {
        ctx->pc = 0x1F4850u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        ctx->pc = 0x1F4854u;
        goto label_1f4854;
    }
    ctx->pc = 0x1F484Cu;
    {
        const bool branch_taken_0x1f484c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4850u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1f484c) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4854u;
label_1f4854:
    // 0x1f4854: 0x8c23fe88
    ctx->pc = 0x1f4854u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966920)));
label_1f4858:
    // 0x1f4858: 0x10600003
label_1f485c:
    if (ctx->pc == 0x1F485Cu) {
        ctx->pc = 0x1F485Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 27));
        ctx->pc = 0x1F4860u;
        goto label_1f4860;
    }
    ctx->pc = 0x1F4858u;
    {
        const bool branch_taken_0x1f4858 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F485Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 27));
        if (branch_taken_0x1f4858) {
            ctx->pc = 0x1F4868u;
            goto label_1f4868;
        }
    }
    ctx->pc = 0x1F4860u;
label_1f4860:
    // 0x1f4860: 0x1000009d
label_1f4864:
    if (ctx->pc == 0x1F4864u) {
        ctx->pc = 0x1F4864u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4868u;
        goto label_1f4868;
    }
    ctx->pc = 0x1F4860u;
    {
        const bool branch_taken_0x1f4860 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4864u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4860) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4868u;
label_1f4868:
    // 0x1f4868: 0xc07ddc8
label_1f486c:
    if (ctx->pc == 0x1F486Cu) {
        ctx->pc = 0x1F486Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x1F4870u;
        goto label_1f4870;
    }
    ctx->pc = 0x1F4868u;
    SET_GPR_U32(ctx, 31, 0x1F4870u);
    ctx->pc = 0x1F486Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->pc = 0x1F7720u;
    {
        const uint32_t __entryPc = ctx->pc;
        McCheckGameData__FP14tagUSER_BACKUP_0x1f7720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4870u; }
        else if (ctx->pc != 0x1F4870u) { ctx->pc = 0x1F4870u; }
    }
    if (ctx->pc != 0x1F4870u) { return; }
    ctx->pc = 0x1F4870u;
label_1f4870:
    // 0x1f4870: 0x14400003
label_1f4874:
    if (ctx->pc == 0x1F4874u) {
        ctx->pc = 0x1F4874u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 27));
        ctx->pc = 0x1F4878u;
        goto label_1f4878;
    }
    ctx->pc = 0x1F4870u;
    {
        const bool branch_taken_0x1f4870 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F4874u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 27));
        if (branch_taken_0x1f4870) {
            ctx->pc = 0x1F4880u;
            goto label_1f4880;
        }
    }
    ctx->pc = 0x1F4878u;
label_1f4878:
    // 0x1f4878: 0x10000097
label_1f487c:
    if (ctx->pc == 0x1F487Cu) {
        ctx->pc = 0x1F487Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4880u;
        goto label_1f4880;
    }
    ctx->pc = 0x1F4878u;
    {
        const bool branch_taken_0x1f4878 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F487Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4878) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4880u;
label_1f4880:
    // 0x1f4880: 0x8e050038
    ctx->pc = 0x1f4880u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1f4884:
    // 0x1f4884: 0x3c020050
    ctx->pc = 0x1f4884u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f4888:
    // 0x1f4888: 0x2444fec0
    ctx->pc = 0x1f4888u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966976));
label_1f488c:
    // 0x1f488c: 0xc06ac12
label_1f4890:
    if (ctx->pc == 0x1F4890u) {
        ctx->pc = 0x1F4890u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 756));
        ctx->pc = 0x1F4894u;
        goto label_1f4894;
    }
    ctx->pc = 0x1F488Cu;
    SET_GPR_U32(ctx, 31, 0x1F4894u);
    ctx->pc = 0x1F4890u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 756));
    ctx->pc = 0x1AB048u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB048_0x1ab048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4894u; }
        else if (ctx->pc != 0x1F4894u) { ctx->pc = 0x1F4894u; }
    }
    if (ctx->pc != 0x1F4894u) { return; }
    ctx->pc = 0x1F4894u;
label_1f4894:
    // 0x1f4894: 0x3c020050
    ctx->pc = 0x1f4894u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f4898:
    // 0x1f4898: 0xc074ddc
label_1f489c:
    if (ctx->pc == 0x1F489Cu) {
        ctx->pc = 0x1F489Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
        ctx->pc = 0x1F48A0u;
        goto label_1f48a0;
    }
    ctx->pc = 0x1F4898u;
    SET_GPR_U32(ctx, 31, 0x1F48A0u);
    ctx->pc = 0x1F489Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
    ctx->pc = 0x1D3770u;
    {
        const uint32_t __entryPc = ctx->pc;
        setLang__14SysCfgMgrClassFv_0x1d3770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F48A0u; }
        else if (ctx->pc != 0x1F48A0u) { ctx->pc = 0x1F48A0u; }
    }
    if (ctx->pc != 0x1F48A0u) { return; }
    ctx->pc = 0x1F48A0u;
label_1f48a0:
    // 0x1f48a0: 0x8e020004
    ctx->pc = 0x1f48a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f48a4:
    // 0x1f48a4: 0x24420001
    ctx->pc = 0x1f48a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f48a8:
    // 0x1f48a8: 0xae020004
    ctx->pc = 0x1f48a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f48ac:
    // 0x1f48ac: 0xc07ded8
label_1f48b0:
    if (ctx->pc == 0x1F48B0u) {
        ctx->pc = 0x1F48B4u;
        goto label_1f48b4;
    }
    ctx->pc = 0x1F48ACu;
    SET_GPR_U32(ctx, 31, 0x1F48B4u);
    ctx->pc = 0x1F7B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_nowloading__Fv_0x1f7b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F48B4u; }
        else if (ctx->pc != 0x1F48B4u) { ctx->pc = 0x1F48B4u; }
    }
    if (ctx->pc != 0x1F48B4u) { return; }
    ctx->pc = 0x1F48B4u;
label_1f48b4:
    // 0x1f48b4: 0x8e040030
    ctx->pc = 0x1f48b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f48b8:
    // 0x1f48b8: 0x8f838be4
    ctx->pc = 0x1f48b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
label_1f48bc:
    // 0x1f48bc: 0x641823
    ctx->pc = 0x1f48bcu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f48c0:
    // 0x1f48c0: 0x2c630096
    ctx->pc = 0x1f48c0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 150));
label_1f48c4:
    // 0x1f48c4: 0x14600084
label_1f48c8:
    if (ctx->pc == 0x1F48C8u) {
        ctx->pc = 0x1F48CCu;
        goto label_1f48cc;
    }
    ctx->pc = 0x1F48C4u;
    {
        const bool branch_taken_0x1f48c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f48c4) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F48CCu;
label_1f48cc:
    // 0x1f48cc: 0x24020064
    ctx->pc = 0x1f48ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
label_1f48d0:
    // 0x1f48d0: 0xae020020
    ctx->pc = 0x1f48d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1f48d4:
    // 0x1f48d4: 0x8e020004
    ctx->pc = 0x1f48d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f48d8:
    // 0x1f48d8: 0x24420001
    ctx->pc = 0x1f48d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f48dc:
    // 0x1f48dc: 0xae020004
    ctx->pc = 0x1f48dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f48e0:
    // 0x1f48e0: 0xc07defc
label_1f48e4:
    if (ctx->pc == 0x1F48E4u) {
        ctx->pc = 0x1F48E8u;
        goto label_1f48e8;
    }
    ctx->pc = 0x1F48E0u;
    SET_GPR_U32(ctx, 31, 0x1F48E8u);
    ctx->pc = 0x1F7BF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_loadcomplete__Fv_0x1f7bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F48E8u; }
        else if (ctx->pc != 0x1F48E8u) { ctx->pc = 0x1F48E8u; }
    }
    if (ctx->pc != 0x1F48E8u) { return; }
    ctx->pc = 0x1F48E8u;
label_1f48e8:
    // 0x1f48e8: 0x8e030020
    ctx->pc = 0x1f48e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1f48ec:
    // 0x1f48ec: 0x2463ffff
    ctx->pc = 0x1f48ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f48f0:
    // 0x1f48f0: 0x1c600079
label_1f48f4:
    if (ctx->pc == 0x1F48F4u) {
        ctx->pc = 0x1F48F4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->pc = 0x1F48F8u;
        goto label_1f48f8;
    }
    ctx->pc = 0x1F48F0u;
    {
        const bool branch_taken_0x1f48f0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1F48F4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        if (branch_taken_0x1f48f0) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F48F8u;
label_1f48f8:
    // 0x1f48f8: 0x2403001f
    ctx->pc = 0x1f48f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
label_1f48fc:
    // 0x1f48fc: 0x10000076
label_1f4900:
    if (ctx->pc == 0x1F4900u) {
        ctx->pc = 0x1F4900u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4904u;
        goto label_1f4904;
    }
    ctx->pc = 0x1F48FCu;
    {
        const bool branch_taken_0x1f48fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4900u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f48fc) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4904u;
label_1f4904:
    // 0x1f4904: 0x2402ffff
    ctx->pc = 0x1f4904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f4908:
    // 0x1f4908: 0xaf808e3c
    ctx->pc = 0x1f4908u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
label_1f490c:
    // 0x1f490c: 0xaf828e40
    ctx->pc = 0x1f490cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
label_1f4910:
    // 0x1f4910: 0x8e020004
    ctx->pc = 0x1f4910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4914:
    // 0x1f4914: 0x24420001
    ctx->pc = 0x1f4914u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f4918:
    // 0x1f4918: 0xae020004
    ctx->pc = 0x1f4918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f491c:
    // 0x1f491c: 0xc07ded8
label_1f4920:
    if (ctx->pc == 0x1F4920u) {
        ctx->pc = 0x1F4924u;
        goto label_1f4924;
    }
    ctx->pc = 0x1F491Cu;
    SET_GPR_U32(ctx, 31, 0x1F4924u);
    ctx->pc = 0x1F7B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_nowloading__Fv_0x1f7b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4924u; }
        else if (ctx->pc != 0x1F4924u) { ctx->pc = 0x1F4924u; }
    }
    if (ctx->pc != 0x1F4924u) { return; }
    ctx->pc = 0x1F4924u;
label_1f4924:
    // 0x1f4924: 0x8e040030
    ctx->pc = 0x1f4924u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f4928:
    // 0x1f4928: 0x8f838be4
    ctx->pc = 0x1f4928u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
label_1f492c:
    // 0x1f492c: 0x641823
    ctx->pc = 0x1f492cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f4930:
    // 0x1f4930: 0x2c630096
    ctx->pc = 0x1f4930u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 150));
label_1f4934:
    // 0x1f4934: 0x14600068
label_1f4938:
    if (ctx->pc == 0x1F4938u) {
        ctx->pc = 0x1F4938u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1F493Cu;
        goto label_1f493c;
    }
    ctx->pc = 0x1F4934u;
    {
        const bool branch_taken_0x1f4934 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F4938u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 29));
        if (branch_taken_0x1f4934) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F493Cu;
label_1f493c:
    // 0x1f493c: 0x10000066
label_1f4940:
    if (ctx->pc == 0x1F4940u) {
        ctx->pc = 0x1F4940u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4944u;
        goto label_1f4944;
    }
    ctx->pc = 0x1F493Cu;
    {
        const bool branch_taken_0x1f493c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4940u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f493c) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4944u;
label_1f4944:
    // 0x1f4944: 0x2403ffff
    ctx->pc = 0x1f4944u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f4948:
    // 0x1f4948: 0xaf838e40
    ctx->pc = 0x1f4948u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 3));
label_1f494c:
    // 0x1f494c: 0x3c010050
    ctx->pc = 0x1f494cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f4950:
    // 0x1f4950: 0x8c23fe8c
    ctx->pc = 0x1f4950u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f4954:
    // 0x1f4954: 0x10600060
label_1f4958:
    if (ctx->pc == 0x1F4958u) {
        ctx->pc = 0x1F4958u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
        ctx->pc = 0x1F495Cu;
        goto label_1f495c;
    }
    ctx->pc = 0x1F4954u;
    {
        const bool branch_taken_0x1f4954 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4958u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
        if (branch_taken_0x1f4954) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F495Cu;
label_1f495c:
    // 0x1f495c: 0x24020001
    ctx->pc = 0x1f495cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f4960:
    // 0x1f4960: 0xaf828e3c
    ctx->pc = 0x1f4960u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 2));
label_1f4964:
    // 0x1f4964: 0x8e020004
    ctx->pc = 0x1f4964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4968:
    // 0x1f4968: 0x24420001
    ctx->pc = 0x1f4968u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f496c:
    // 0x1f496c: 0xae020004
    ctx->pc = 0x1f496cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f4970:
    // 0x1f4970: 0xc07df20
label_1f4974:
    if (ctx->pc == 0x1F4974u) {
        ctx->pc = 0x1F4978u;
        goto label_1f4978;
    }
    ctx->pc = 0x1F4970u;
    SET_GPR_U32(ctx, 31, 0x1F4978u);
    ctx->pc = 0x1F7C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_autoloadfailed__Fv_0x1f7c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4978u; }
        else if (ctx->pc != 0x1F4978u) { ctx->pc = 0x1F4978u; }
    }
    if (ctx->pc != 0x1F4978u) { return; }
    ctx->pc = 0x1F4978u;
label_1f4978:
    // 0x1f4978: 0x8f848e40
    ctx->pc = 0x1f4978u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938176)));
label_1f497c:
    // 0x1f497c: 0x24030001
    ctx->pc = 0x1f497cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f4980:
    // 0x1f4980: 0x10830007
label_1f4984:
    if (ctx->pc == 0x1F4984u) {
        ctx->pc = 0x1F4984u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1F4988u;
        goto label_1f4988;
    }
    ctx->pc = 0x1F4980u;
    {
        const bool branch_taken_0x1f4980 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1F4984u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1f4980) {
            ctx->pc = 0x1F49A0u;
            goto label_1f49a0;
        }
    }
    ctx->pc = 0x1F4988u;
label_1f4988:
    // 0x1f4988: 0x10800003
label_1f498c:
    if (ctx->pc == 0x1F498Cu) {
        ctx->pc = 0x1F498Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x1F4990u;
        goto label_1f4990;
    }
    ctx->pc = 0x1F4988u;
    {
        const bool branch_taken_0x1f4988 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F498Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
        if (branch_taken_0x1f4988) {
            ctx->pc = 0x1F4998u;
            goto label_1f4998;
        }
    }
    ctx->pc = 0x1F4990u;
label_1f4990:
    // 0x1f4990: 0x10000005
label_1f4994:
    if (ctx->pc == 0x1F4994u) {
        ctx->pc = 0x1F4994u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        ctx->pc = 0x1F4998u;
        goto label_1f4998;
    }
    ctx->pc = 0x1F4990u;
    {
        const bool branch_taken_0x1f4990 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4994u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1f4990) {
            ctx->pc = 0x1F49A8u;
            goto label_1f49a8;
        }
    }
    ctx->pc = 0x1F4998u;
label_1f4998:
    // 0x1f4998: 0x1000004f
label_1f499c:
    if (ctx->pc == 0x1F499Cu) {
        ctx->pc = 0x1F499Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F49A0u;
        goto label_1f49a0;
    }
    ctx->pc = 0x1F4998u;
    {
        const bool branch_taken_0x1f4998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F499Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4998) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F49A0u;
label_1f49a0:
    // 0x1f49a0: 0x1000004d
label_1f49a4:
    if (ctx->pc == 0x1F49A4u) {
        ctx->pc = 0x1F49A4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F49A8u;
        goto label_1f49a8;
    }
    ctx->pc = 0x1F49A0u;
    {
        const bool branch_taken_0x1f49a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F49A4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f49a0) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F49A8u;
label_1f49a8:
    // 0x1f49a8: 0x8c23fe8c
    ctx->pc = 0x1f49a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f49ac:
    // 0x1f49ac: 0x1060004a
label_1f49b0:
    if (ctx->pc == 0x1F49B0u) {
        ctx->pc = 0x1F49B4u;
        goto label_1f49b4;
    }
    ctx->pc = 0x1F49ACu;
    {
        const bool branch_taken_0x1f49ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f49ac) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F49B4u;
label_1f49b4:
    // 0x1f49b4: 0x8e040010
    ctx->pc = 0x1f49b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f49b8:
    // 0x1f49b8: 0x24030002
    ctx->pc = 0x1f49b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1f49bc:
    // 0x1f49bc: 0x1483000c
label_1f49c0:
    if (ctx->pc == 0x1F49C0u) {
        ctx->pc = 0x1F49C0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1F49C4u;
        goto label_1f49c4;
    }
    ctx->pc = 0x1F49BCu;
    {
        const bool branch_taken_0x1f49bc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1F49C0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1f49bc) {
            ctx->pc = 0x1F49F0u;
            goto label_1f49f0;
        }
    }
    ctx->pc = 0x1F49C4u;
label_1f49c4:
    // 0x1f49c4: 0x70002628
    ctx->pc = 0x1f49c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f49c8:
    // 0x1f49c8: 0x70002e28
    ctx->pc = 0x1f49c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f49cc:
    // 0x1f49cc: 0x26060010
    ctx->pc = 0x1f49ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 16));
label_1f49d0:
    // 0x1f49d0: 0x26070014
    ctx->pc = 0x1f49d0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 20));
label_1f49d4:
    // 0x1f49d4: 0xc07ddd8
label_1f49d8:
    if (ctx->pc == 0x1F49D8u) {
        ctx->pc = 0x1F49D8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x1F49DCu;
        goto label_1f49dc;
    }
    ctx->pc = 0x1F49D4u;
    SET_GPR_U32(ctx, 31, 0x1F49DCu);
    ctx->pc = 0x1F49D8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 24));
    ctx->pc = 0x1F7760u;
    {
        const uint32_t __entryPc = ctx->pc;
        McGetInfo__FiiPiPiPi_0x1f7760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F49DCu; }
        else if (ctx->pc != 0x1F49DCu) { ctx->pc = 0x1F49DCu; }
    }
    if (ctx->pc != 0x1F49DCu) { return; }
    ctx->pc = 0x1F49DCu;
label_1f49dc:
    // 0x1f49dc: 0x3c020050
    ctx->pc = 0x1f49dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f49e0:
    // 0x1f49e0: 0xc074dac
label_1f49e4:
    if (ctx->pc == 0x1F49E4u) {
        ctx->pc = 0x1F49E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
        ctx->pc = 0x1F49E8u;
        goto label_1f49e8;
    }
    ctx->pc = 0x1F49E0u;
    SET_GPR_U32(ctx, 31, 0x1F49E8u);
    ctx->pc = 0x1F49E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
    ctx->pc = 0x1D36B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        synch__14SysCfgMgrClassFv_0x1d36b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F49E8u; }
        else if (ctx->pc != 0x1F49E8u) { ctx->pc = 0x1F49E8u; }
    }
    if (ctx->pc != 0x1F49E8u) { return; }
    ctx->pc = 0x1F49E8u;
label_1f49e8:
    // 0x1f49e8: 0x1000003b
label_1f49ec:
    if (ctx->pc == 0x1F49ECu) {
        ctx->pc = 0x1F49F0u;
        goto label_1f49f0;
    }
    ctx->pc = 0x1F49E8u;
    {
        const bool branch_taken_0x1f49e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f49e8) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F49F0u;
label_1f49f0:
    // 0x1f49f0: 0x10000039
label_1f49f4:
    if (ctx->pc == 0x1F49F4u) {
        ctx->pc = 0x1F49F4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F49F8u;
        goto label_1f49f8;
    }
    ctx->pc = 0x1F49F0u;
    {
        const bool branch_taken_0x1f49f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F49F4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f49f0) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F49F8u;
label_1f49f8:
    // 0x1f49f8: 0x2402ffff
    ctx->pc = 0x1f49f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f49fc:
    // 0x1f49fc: 0xaf828e40
    ctx->pc = 0x1f49fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
label_1f4a00:
    // 0x1f4a00: 0x3c020050
    ctx->pc = 0x1f4a00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f4a04:
    // 0x1f4a04: 0x2444fe80
    ctx->pc = 0x1f4a04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
label_1f4a08:
    // 0x1f4a08: 0xc074ddc
label_1f4a0c:
    if (ctx->pc == 0x1F4A0Cu) {
        ctx->pc = 0x1F4A0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
        ctx->pc = 0x1F4A10u;
        goto label_1f4a10;
    }
    ctx->pc = 0x1F4A08u;
    SET_GPR_U32(ctx, 31, 0x1F4A10u);
    ctx->pc = 0x1F4A0Cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
    ctx->pc = 0x1D3770u;
    {
        const uint32_t __entryPc = ctx->pc;
        setLang__14SysCfgMgrClassFv_0x1d3770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A10u; }
        else if (ctx->pc != 0x1F4A10u) { ctx->pc = 0x1F4A10u; }
    }
    if (ctx->pc != 0x1F4A10u) { return; }
    ctx->pc = 0x1F4A10u;
label_1f4a10:
    // 0x1f4a10: 0x24030001
    ctx->pc = 0x1f4a10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f4a14:
    // 0x1f4a14: 0x3c010050
    ctx->pc = 0x1f4a14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f4a18:
    // 0x1f4a18: 0xac23fe80
    ctx->pc = 0x1f4a18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966912), GPR_U32(ctx, 3));
label_1f4a1c:
    // 0x1f4a1c: 0x8e030034
    ctx->pc = 0x1f4a1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1f4a20:
    // 0x1f4a20: 0x10600009
label_1f4a24:
    if (ctx->pc == 0x1F4A24u) {
        ctx->pc = 0x1F4A24u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x1F4A28u;
        goto label_1f4a28;
    }
    ctx->pc = 0x1F4A20u;
    {
        const bool branch_taken_0x1f4a20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4A24u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
        if (branch_taken_0x1f4a20) {
            ctx->pc = 0x1F4A48u;
            goto label_1f4a48;
        }
    }
    ctx->pc = 0x1F4A28u;
label_1f4a28:
    // 0x1f4a28: 0xc07e2a0
label_1f4a2c:
    if (ctx->pc == 0x1F4A2Cu) {
        ctx->pc = 0x1F4A30u;
        goto label_1f4a30;
    }
    ctx->pc = 0x1F4A28u;
    SET_GPR_U32(ctx, 31, 0x1F4A30u);
    ctx->pc = 0x1F8A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        McchkFadeOutStart__Fv_0x1f8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A30u; }
        else if (ctx->pc != 0x1F4A30u) { ctx->pc = 0x1F4A30u; }
    }
    if (ctx->pc != 0x1F4A30u) { return; }
    ctx->pc = 0x1F4A30u;
label_1f4a30:
    // 0x1f4a30: 0xae000034
    ctx->pc = 0x1f4a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1f4a34:
    // 0x1f4a34: 0x24030013
    ctx->pc = 0x1f4a34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 19));
label_1f4a38:
    // 0x1f4a38: 0xae030020
    ctx->pc = 0x1f4a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1f4a3c:
    // 0x1f4a3c: 0x24030020
    ctx->pc = 0x1f4a3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
label_1f4a40:
    // 0x1f4a40: 0x10000025
label_1f4a44:
    if (ctx->pc == 0x1F4A44u) {
        ctx->pc = 0x1F4A44u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4A48u;
        goto label_1f4a48;
    }
    ctx->pc = 0x1F4A40u;
    {
        const bool branch_taken_0x1f4a40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4A44u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4a40) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4A48u;
label_1f4a48:
    // 0x1f4a48: 0x10000023
label_1f4a4c:
    if (ctx->pc == 0x1F4A4Cu) {
        ctx->pc = 0x1F4A4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4A50u;
        goto label_1f4a50;
    }
    ctx->pc = 0x1F4A48u;
    {
        const bool branch_taken_0x1f4a48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4A4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4a48) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4A50u;
label_1f4a50:
    // 0x1f4a50: 0x8e030020
    ctx->pc = 0x1f4a50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1f4a54:
    // 0x1f4a54: 0x2463ffff
    ctx->pc = 0x1f4a54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f4a58:
    // 0x1f4a58: 0x461001f
label_1f4a5c:
    if (ctx->pc == 0x1F4A5Cu) {
        ctx->pc = 0x1F4A5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4A60u;
        goto label_1f4a60;
    }
    ctx->pc = 0x1F4A58u;
    {
        const bool branch_taken_0x1f4a58 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F4A5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4a58) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4A60u;
label_1f4a60:
    // 0x1f4a60: 0x8e030004
    ctx->pc = 0x1f4a60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4a64:
    // 0x1f4a64: 0x24630001
    ctx->pc = 0x1f4a64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1f4a68:
    // 0x1f4a68: 0xae030004
    ctx->pc = 0x1f4a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1f4a6c:
    // 0x1f4a6c: 0x24030001
    ctx->pc = 0x1f4a6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f4a70:
    // 0x1f4a70: 0x10000019
label_1f4a74:
    if (ctx->pc == 0x1F4A74u) {
        ctx->pc = 0x1F4A74u;
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937492), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1F4A78u;
        goto label_1f4a78;
    }
    ctx->pc = 0x1F4A70u;
    {
        const bool branch_taken_0x1f4a70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4A74u;
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937492), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1f4a70) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4A78u;
label_1f4a78:
    // 0x1f4a78: 0x2402ffff
    ctx->pc = 0x1f4a78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f4a7c:
    // 0x1f4a7c: 0xaf828e40
    ctx->pc = 0x1f4a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
label_1f4a80:
    // 0x1f4a80: 0x3c020050
    ctx->pc = 0x1f4a80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f4a84:
    // 0x1f4a84: 0x2444fe80
    ctx->pc = 0x1f4a84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
label_1f4a88:
    // 0x1f4a88: 0xc074e0c
label_1f4a8c:
    if (ctx->pc == 0x1F4A8Cu) {
        ctx->pc = 0x1F4A8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
        ctx->pc = 0x1F4A90u;
        goto label_1f4a90;
    }
    ctx->pc = 0x1F4A88u;
    SET_GPR_U32(ctx, 31, 0x1F4A90u);
    ctx->pc = 0x1F4A8Cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
    ctx->pc = 0x1D3830u;
    {
        const uint32_t __entryPc = ctx->pc;
        clrAll__14SysCfgMgrClassFv_0x1d3830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A90u; }
        else if (ctx->pc != 0x1F4A90u) { ctx->pc = 0x1F4A90u; }
    }
    if (ctx->pc != 0x1F4A90u) { return; }
    ctx->pc = 0x1F4A90u;
label_1f4a90:
    // 0x1f4a90: 0x3c010050
    ctx->pc = 0x1f4a90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f4a94:
    // 0x1f4a94: 0xc07e2a0
label_1f4a98:
    if (ctx->pc == 0x1F4A98u) {
        ctx->pc = 0x1F4A98u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966912), GPR_U32(ctx, 0));
        ctx->pc = 0x1F4A9Cu;
        goto label_1f4a9c;
    }
    ctx->pc = 0x1F4A94u;
    SET_GPR_U32(ctx, 31, 0x1F4A9Cu);
    ctx->pc = 0x1F4A98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966912), GPR_U32(ctx, 0));
    ctx->pc = 0x1F8A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        McchkFadeOutStart__Fv_0x1f8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A9Cu; }
        else if (ctx->pc != 0x1F4A9Cu) { ctx->pc = 0x1F4A9Cu; }
    }
    if (ctx->pc != 0x1F4A9Cu) { return; }
    ctx->pc = 0x1F4A9Cu;
label_1f4a9c:
    // 0x1f4a9c: 0xae000034
    ctx->pc = 0x1f4a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1f4aa0:
    // 0x1f4aa0: 0x24030013
    ctx->pc = 0x1f4aa0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 19));
label_1f4aa4:
    // 0x1f4aa4: 0xae030020
    ctx->pc = 0x1f4aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1f4aa8:
    // 0x1f4aa8: 0x8e030004
    ctx->pc = 0x1f4aa8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4aac:
    // 0x1f4aac: 0x24630001
    ctx->pc = 0x1f4aacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1f4ab0:
    // 0x1f4ab0: 0xae030004
    ctx->pc = 0x1f4ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1f4ab4:
    // 0x1f4ab4: 0x8e030020
    ctx->pc = 0x1f4ab4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1f4ab8:
    // 0x1f4ab8: 0x2463ffff
    ctx->pc = 0x1f4ab8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f4abc:
    // 0x1f4abc: 0x4610006
label_1f4ac0:
    if (ctx->pc == 0x1F4AC0u) {
        ctx->pc = 0x1F4AC0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4AC4u;
        goto label_1f4ac4;
    }
    ctx->pc = 0x1F4ABCu;
    {
        const bool branch_taken_0x1f4abc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F4AC0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4abc) {
            ctx->pc = 0x1F4AD8u;
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4AC4u;
label_1f4ac4:
    // 0x1f4ac4: 0x24030001
    ctx->pc = 0x1f4ac4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f4ac8:
    // 0x1f4ac8: 0xa3838b94
    ctx->pc = 0x1f4ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937492), (uint8_t)GPR_U32(ctx, 3));
label_1f4acc:
    // 0x1f4acc: 0x8e030004
    ctx->pc = 0x1f4accu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4ad0:
    // 0x1f4ad0: 0x24630001
    ctx->pc = 0x1f4ad0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1f4ad4:
    // 0x1f4ad4: 0xae030004
    ctx->pc = 0x1f4ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1f4ad8:
    // 0x1f4ad8: 0x7bbf0010
    ctx->pc = 0x1f4ad8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4adc:
    // 0x1f4adc: 0x7bb00000
    ctx->pc = 0x1f4adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4ae0:
    // 0x1f4ae0: 0x3e00008
label_1f4ae4:
    if (ctx->pc == 0x1F4AE4u) {
        ctx->pc = 0x1F4AE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F4AE8u;
        goto label_fallthrough_0x1f4ae0;
    }
    ctx->pc = 0x1F4AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4AE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F43A0u: goto label_1f43a0;
            case 0x1F43A4u: goto label_1f43a4;
            case 0x1F43A8u: goto label_1f43a8;
            case 0x1F43ACu: goto label_1f43ac;
            case 0x1F43B0u: goto label_1f43b0;
            case 0x1F43B4u: goto label_1f43b4;
            case 0x1F43B8u: goto label_1f43b8;
            case 0x1F43BCu: goto label_1f43bc;
            case 0x1F43C0u: goto label_1f43c0;
            case 0x1F43C4u: goto label_1f43c4;
            case 0x1F43C8u: goto label_1f43c8;
            case 0x1F43CCu: goto label_1f43cc;
            case 0x1F43D0u: goto label_1f43d0;
            case 0x1F43D4u: goto label_1f43d4;
            case 0x1F43D8u: goto label_1f43d8;
            case 0x1F43DCu: goto label_1f43dc;
            case 0x1F43E0u: goto label_1f43e0;
            case 0x1F43E4u: goto label_1f43e4;
            case 0x1F43E8u: goto label_1f43e8;
            case 0x1F43ECu: goto label_1f43ec;
            case 0x1F43F0u: goto label_1f43f0;
            case 0x1F43F4u: goto label_1f43f4;
            case 0x1F43F8u: goto label_1f43f8;
            case 0x1F43FCu: goto label_1f43fc;
            case 0x1F4400u: goto label_1f4400;
            case 0x1F4404u: goto label_1f4404;
            case 0x1F4408u: goto label_1f4408;
            case 0x1F440Cu: goto label_1f440c;
            case 0x1F4410u: goto label_1f4410;
            case 0x1F4414u: goto label_1f4414;
            case 0x1F4418u: goto label_1f4418;
            case 0x1F441Cu: goto label_1f441c;
            case 0x1F4420u: goto label_1f4420;
            case 0x1F4424u: goto label_1f4424;
            case 0x1F4428u: goto label_1f4428;
            case 0x1F442Cu: goto label_1f442c;
            case 0x1F4430u: goto label_1f4430;
            case 0x1F4434u: goto label_1f4434;
            case 0x1F4438u: goto label_1f4438;
            case 0x1F443Cu: goto label_1f443c;
            case 0x1F4440u: goto label_1f4440;
            case 0x1F4444u: goto label_1f4444;
            case 0x1F4448u: goto label_1f4448;
            case 0x1F444Cu: goto label_1f444c;
            case 0x1F4450u: goto label_1f4450;
            case 0x1F4454u: goto label_1f4454;
            case 0x1F4458u: goto label_1f4458;
            case 0x1F445Cu: goto label_1f445c;
            case 0x1F4460u: goto label_1f4460;
            case 0x1F4464u: goto label_1f4464;
            case 0x1F4468u: goto label_1f4468;
            case 0x1F446Cu: goto label_1f446c;
            case 0x1F4470u: goto label_1f4470;
            case 0x1F4474u: goto label_1f4474;
            case 0x1F4478u: goto label_1f4478;
            case 0x1F447Cu: goto label_1f447c;
            case 0x1F4480u: goto label_1f4480;
            case 0x1F4484u: goto label_1f4484;
            case 0x1F4488u: goto label_1f4488;
            case 0x1F448Cu: goto label_1f448c;
            case 0x1F4490u: goto label_1f4490;
            case 0x1F4494u: goto label_1f4494;
            case 0x1F4498u: goto label_1f4498;
            case 0x1F449Cu: goto label_1f449c;
            case 0x1F44A0u: goto label_1f44a0;
            case 0x1F44A4u: goto label_1f44a4;
            case 0x1F44A8u: goto label_1f44a8;
            case 0x1F44ACu: goto label_1f44ac;
            case 0x1F44B0u: goto label_1f44b0;
            case 0x1F44B4u: goto label_1f44b4;
            case 0x1F44B8u: goto label_1f44b8;
            case 0x1F44BCu: goto label_1f44bc;
            case 0x1F44C0u: goto label_1f44c0;
            case 0x1F44C4u: goto label_1f44c4;
            case 0x1F44C8u: goto label_1f44c8;
            case 0x1F44CCu: goto label_1f44cc;
            case 0x1F44D0u: goto label_1f44d0;
            case 0x1F44D4u: goto label_1f44d4;
            case 0x1F44D8u: goto label_1f44d8;
            case 0x1F44DCu: goto label_1f44dc;
            case 0x1F44E0u: goto label_1f44e0;
            case 0x1F44E4u: goto label_1f44e4;
            case 0x1F44E8u: goto label_1f44e8;
            case 0x1F44ECu: goto label_1f44ec;
            case 0x1F44F0u: goto label_1f44f0;
            case 0x1F44F4u: goto label_1f44f4;
            case 0x1F44F8u: goto label_1f44f8;
            case 0x1F44FCu: goto label_1f44fc;
            case 0x1F4500u: goto label_1f4500;
            case 0x1F4504u: goto label_1f4504;
            case 0x1F4508u: goto label_1f4508;
            case 0x1F450Cu: goto label_1f450c;
            case 0x1F4510u: goto label_1f4510;
            case 0x1F4514u: goto label_1f4514;
            case 0x1F4518u: goto label_1f4518;
            case 0x1F451Cu: goto label_1f451c;
            case 0x1F4520u: goto label_1f4520;
            case 0x1F4524u: goto label_1f4524;
            case 0x1F4528u: goto label_1f4528;
            case 0x1F452Cu: goto label_1f452c;
            case 0x1F4530u: goto label_1f4530;
            case 0x1F4534u: goto label_1f4534;
            case 0x1F4538u: goto label_1f4538;
            case 0x1F453Cu: goto label_1f453c;
            case 0x1F4540u: goto label_1f4540;
            case 0x1F4544u: goto label_1f4544;
            case 0x1F4548u: goto label_1f4548;
            case 0x1F454Cu: goto label_1f454c;
            case 0x1F4550u: goto label_1f4550;
            case 0x1F4554u: goto label_1f4554;
            case 0x1F4558u: goto label_1f4558;
            case 0x1F455Cu: goto label_1f455c;
            case 0x1F4560u: goto label_1f4560;
            case 0x1F4564u: goto label_1f4564;
            case 0x1F4568u: goto label_1f4568;
            case 0x1F456Cu: goto label_1f456c;
            case 0x1F4570u: goto label_1f4570;
            case 0x1F4574u: goto label_1f4574;
            case 0x1F4578u: goto label_1f4578;
            case 0x1F457Cu: goto label_1f457c;
            case 0x1F4580u: goto label_1f4580;
            case 0x1F4584u: goto label_1f4584;
            case 0x1F4588u: goto label_1f4588;
            case 0x1F458Cu: goto label_1f458c;
            case 0x1F4590u: goto label_1f4590;
            case 0x1F4594u: goto label_1f4594;
            case 0x1F4598u: goto label_1f4598;
            case 0x1F459Cu: goto label_1f459c;
            case 0x1F45A0u: goto label_1f45a0;
            case 0x1F45A4u: goto label_1f45a4;
            case 0x1F45A8u: goto label_1f45a8;
            case 0x1F45ACu: goto label_1f45ac;
            case 0x1F45B0u: goto label_1f45b0;
            case 0x1F45B4u: goto label_1f45b4;
            case 0x1F45B8u: goto label_1f45b8;
            case 0x1F45BCu: goto label_1f45bc;
            case 0x1F45C0u: goto label_1f45c0;
            case 0x1F45C4u: goto label_1f45c4;
            case 0x1F45C8u: goto label_1f45c8;
            case 0x1F45CCu: goto label_1f45cc;
            case 0x1F45D0u: goto label_1f45d0;
            case 0x1F45D4u: goto label_1f45d4;
            case 0x1F45D8u: goto label_1f45d8;
            case 0x1F45DCu: goto label_1f45dc;
            case 0x1F45E0u: goto label_1f45e0;
            case 0x1F45E4u: goto label_1f45e4;
            case 0x1F45E8u: goto label_1f45e8;
            case 0x1F45ECu: goto label_1f45ec;
            case 0x1F45F0u: goto label_1f45f0;
            case 0x1F45F4u: goto label_1f45f4;
            case 0x1F45F8u: goto label_1f45f8;
            case 0x1F45FCu: goto label_1f45fc;
            case 0x1F4600u: goto label_1f4600;
            case 0x1F4604u: goto label_1f4604;
            case 0x1F4608u: goto label_1f4608;
            case 0x1F460Cu: goto label_1f460c;
            case 0x1F4610u: goto label_1f4610;
            case 0x1F4614u: goto label_1f4614;
            case 0x1F4618u: goto label_1f4618;
            case 0x1F461Cu: goto label_1f461c;
            case 0x1F4620u: goto label_1f4620;
            case 0x1F4624u: goto label_1f4624;
            case 0x1F4628u: goto label_1f4628;
            case 0x1F462Cu: goto label_1f462c;
            case 0x1F4630u: goto label_1f4630;
            case 0x1F4634u: goto label_1f4634;
            case 0x1F4638u: goto label_1f4638;
            case 0x1F463Cu: goto label_1f463c;
            case 0x1F4640u: goto label_1f4640;
            case 0x1F4644u: goto label_1f4644;
            case 0x1F4648u: goto label_1f4648;
            case 0x1F464Cu: goto label_1f464c;
            case 0x1F4650u: goto label_1f4650;
            case 0x1F4654u: goto label_1f4654;
            case 0x1F4658u: goto label_1f4658;
            case 0x1F465Cu: goto label_1f465c;
            case 0x1F4660u: goto label_1f4660;
            case 0x1F4664u: goto label_1f4664;
            case 0x1F4668u: goto label_1f4668;
            case 0x1F466Cu: goto label_1f466c;
            case 0x1F4670u: goto label_1f4670;
            case 0x1F4674u: goto label_1f4674;
            case 0x1F4678u: goto label_1f4678;
            case 0x1F467Cu: goto label_1f467c;
            case 0x1F4680u: goto label_1f4680;
            case 0x1F4684u: goto label_1f4684;
            case 0x1F4688u: goto label_1f4688;
            case 0x1F468Cu: goto label_1f468c;
            case 0x1F4690u: goto label_1f4690;
            case 0x1F4694u: goto label_1f4694;
            case 0x1F4698u: goto label_1f4698;
            case 0x1F469Cu: goto label_1f469c;
            case 0x1F46A0u: goto label_1f46a0;
            case 0x1F46A4u: goto label_1f46a4;
            case 0x1F46A8u: goto label_1f46a8;
            case 0x1F46ACu: goto label_1f46ac;
            case 0x1F46B0u: goto label_1f46b0;
            case 0x1F46B4u: goto label_1f46b4;
            case 0x1F46B8u: goto label_1f46b8;
            case 0x1F46BCu: goto label_1f46bc;
            case 0x1F46C0u: goto label_1f46c0;
            case 0x1F46C4u: goto label_1f46c4;
            case 0x1F46C8u: goto label_1f46c8;
            case 0x1F46CCu: goto label_1f46cc;
            case 0x1F46D0u: goto label_1f46d0;
            case 0x1F46D4u: goto label_1f46d4;
            case 0x1F46D8u: goto label_1f46d8;
            case 0x1F46DCu: goto label_1f46dc;
            case 0x1F46E0u: goto label_1f46e0;
            case 0x1F46E4u: goto label_1f46e4;
            case 0x1F46E8u: goto label_1f46e8;
            case 0x1F46ECu: goto label_1f46ec;
            case 0x1F46F0u: goto label_1f46f0;
            case 0x1F46F4u: goto label_1f46f4;
            case 0x1F46F8u: goto label_1f46f8;
            case 0x1F46FCu: goto label_1f46fc;
            case 0x1F4700u: goto label_1f4700;
            case 0x1F4704u: goto label_1f4704;
            case 0x1F4708u: goto label_1f4708;
            case 0x1F470Cu: goto label_1f470c;
            case 0x1F4710u: goto label_1f4710;
            case 0x1F4714u: goto label_1f4714;
            case 0x1F4718u: goto label_1f4718;
            case 0x1F471Cu: goto label_1f471c;
            case 0x1F4720u: goto label_1f4720;
            case 0x1F4724u: goto label_1f4724;
            case 0x1F4728u: goto label_1f4728;
            case 0x1F472Cu: goto label_1f472c;
            case 0x1F4730u: goto label_1f4730;
            case 0x1F4734u: goto label_1f4734;
            case 0x1F4738u: goto label_1f4738;
            case 0x1F473Cu: goto label_1f473c;
            case 0x1F4740u: goto label_1f4740;
            case 0x1F4744u: goto label_1f4744;
            case 0x1F4748u: goto label_1f4748;
            case 0x1F474Cu: goto label_1f474c;
            case 0x1F4750u: goto label_1f4750;
            case 0x1F4754u: goto label_1f4754;
            case 0x1F4758u: goto label_1f4758;
            case 0x1F475Cu: goto label_1f475c;
            case 0x1F4760u: goto label_1f4760;
            case 0x1F4764u: goto label_1f4764;
            case 0x1F4768u: goto label_1f4768;
            case 0x1F476Cu: goto label_1f476c;
            case 0x1F4770u: goto label_1f4770;
            case 0x1F4774u: goto label_1f4774;
            case 0x1F4778u: goto label_1f4778;
            case 0x1F477Cu: goto label_1f477c;
            case 0x1F4780u: goto label_1f4780;
            case 0x1F4784u: goto label_1f4784;
            case 0x1F4788u: goto label_1f4788;
            case 0x1F478Cu: goto label_1f478c;
            case 0x1F4790u: goto label_1f4790;
            case 0x1F4794u: goto label_1f4794;
            case 0x1F4798u: goto label_1f4798;
            case 0x1F479Cu: goto label_1f479c;
            case 0x1F47A0u: goto label_1f47a0;
            case 0x1F47A4u: goto label_1f47a4;
            case 0x1F47A8u: goto label_1f47a8;
            case 0x1F47ACu: goto label_1f47ac;
            case 0x1F47B0u: goto label_1f47b0;
            case 0x1F47B4u: goto label_1f47b4;
            case 0x1F47B8u: goto label_1f47b8;
            case 0x1F47BCu: goto label_1f47bc;
            case 0x1F47C0u: goto label_1f47c0;
            case 0x1F47C4u: goto label_1f47c4;
            case 0x1F47C8u: goto label_1f47c8;
            case 0x1F47CCu: goto label_1f47cc;
            case 0x1F47D0u: goto label_1f47d0;
            case 0x1F47D4u: goto label_1f47d4;
            case 0x1F47D8u: goto label_1f47d8;
            case 0x1F47DCu: goto label_1f47dc;
            case 0x1F47E0u: goto label_1f47e0;
            case 0x1F47E4u: goto label_1f47e4;
            case 0x1F47E8u: goto label_1f47e8;
            case 0x1F47ECu: goto label_1f47ec;
            case 0x1F47F0u: goto label_1f47f0;
            case 0x1F47F4u: goto label_1f47f4;
            case 0x1F47F8u: goto label_1f47f8;
            case 0x1F47FCu: goto label_1f47fc;
            case 0x1F4800u: goto label_1f4800;
            case 0x1F4804u: goto label_1f4804;
            case 0x1F4808u: goto label_1f4808;
            case 0x1F480Cu: goto label_1f480c;
            case 0x1F4810u: goto label_1f4810;
            case 0x1F4814u: goto label_1f4814;
            case 0x1F4818u: goto label_1f4818;
            case 0x1F481Cu: goto label_1f481c;
            case 0x1F4820u: goto label_1f4820;
            case 0x1F4824u: goto label_1f4824;
            case 0x1F4828u: goto label_1f4828;
            case 0x1F482Cu: goto label_1f482c;
            case 0x1F4830u: goto label_1f4830;
            case 0x1F4834u: goto label_1f4834;
            case 0x1F4838u: goto label_1f4838;
            case 0x1F483Cu: goto label_1f483c;
            case 0x1F4840u: goto label_1f4840;
            case 0x1F4844u: goto label_1f4844;
            case 0x1F4848u: goto label_1f4848;
            case 0x1F484Cu: goto label_1f484c;
            case 0x1F4850u: goto label_1f4850;
            case 0x1F4854u: goto label_1f4854;
            case 0x1F4858u: goto label_1f4858;
            case 0x1F485Cu: goto label_1f485c;
            case 0x1F4860u: goto label_1f4860;
            case 0x1F4864u: goto label_1f4864;
            case 0x1F4868u: goto label_1f4868;
            case 0x1F486Cu: goto label_1f486c;
            case 0x1F4870u: goto label_1f4870;
            case 0x1F4874u: goto label_1f4874;
            case 0x1F4878u: goto label_1f4878;
            case 0x1F487Cu: goto label_1f487c;
            case 0x1F4880u: goto label_1f4880;
            case 0x1F4884u: goto label_1f4884;
            case 0x1F4888u: goto label_1f4888;
            case 0x1F488Cu: goto label_1f488c;
            case 0x1F4890u: goto label_1f4890;
            case 0x1F4894u: goto label_1f4894;
            case 0x1F4898u: goto label_1f4898;
            case 0x1F489Cu: goto label_1f489c;
            case 0x1F48A0u: goto label_1f48a0;
            case 0x1F48A4u: goto label_1f48a4;
            case 0x1F48A8u: goto label_1f48a8;
            case 0x1F48ACu: goto label_1f48ac;
            case 0x1F48B0u: goto label_1f48b0;
            case 0x1F48B4u: goto label_1f48b4;
            case 0x1F48B8u: goto label_1f48b8;
            case 0x1F48BCu: goto label_1f48bc;
            case 0x1F48C0u: goto label_1f48c0;
            case 0x1F48C4u: goto label_1f48c4;
            case 0x1F48C8u: goto label_1f48c8;
            case 0x1F48CCu: goto label_1f48cc;
            case 0x1F48D0u: goto label_1f48d0;
            case 0x1F48D4u: goto label_1f48d4;
            case 0x1F48D8u: goto label_1f48d8;
            case 0x1F48DCu: goto label_1f48dc;
            case 0x1F48E0u: goto label_1f48e0;
            case 0x1F48E4u: goto label_1f48e4;
            case 0x1F48E8u: goto label_1f48e8;
            case 0x1F48ECu: goto label_1f48ec;
            case 0x1F48F0u: goto label_1f48f0;
            case 0x1F48F4u: goto label_1f48f4;
            case 0x1F48F8u: goto label_1f48f8;
            case 0x1F48FCu: goto label_1f48fc;
            case 0x1F4900u: goto label_1f4900;
            case 0x1F4904u: goto label_1f4904;
            case 0x1F4908u: goto label_1f4908;
            case 0x1F490Cu: goto label_1f490c;
            case 0x1F4910u: goto label_1f4910;
            case 0x1F4914u: goto label_1f4914;
            case 0x1F4918u: goto label_1f4918;
            case 0x1F491Cu: goto label_1f491c;
            case 0x1F4920u: goto label_1f4920;
            case 0x1F4924u: goto label_1f4924;
            case 0x1F4928u: goto label_1f4928;
            case 0x1F492Cu: goto label_1f492c;
            case 0x1F4930u: goto label_1f4930;
            case 0x1F4934u: goto label_1f4934;
            case 0x1F4938u: goto label_1f4938;
            case 0x1F493Cu: goto label_1f493c;
            case 0x1F4940u: goto label_1f4940;
            case 0x1F4944u: goto label_1f4944;
            case 0x1F4948u: goto label_1f4948;
            case 0x1F494Cu: goto label_1f494c;
            case 0x1F4950u: goto label_1f4950;
            case 0x1F4954u: goto label_1f4954;
            case 0x1F4958u: goto label_1f4958;
            case 0x1F495Cu: goto label_1f495c;
            case 0x1F4960u: goto label_1f4960;
            case 0x1F4964u: goto label_1f4964;
            case 0x1F4968u: goto label_1f4968;
            case 0x1F496Cu: goto label_1f496c;
            case 0x1F4970u: goto label_1f4970;
            case 0x1F4974u: goto label_1f4974;
            case 0x1F4978u: goto label_1f4978;
            case 0x1F497Cu: goto label_1f497c;
            case 0x1F4980u: goto label_1f4980;
            case 0x1F4984u: goto label_1f4984;
            case 0x1F4988u: goto label_1f4988;
            case 0x1F498Cu: goto label_1f498c;
            case 0x1F4990u: goto label_1f4990;
            case 0x1F4994u: goto label_1f4994;
            case 0x1F4998u: goto label_1f4998;
            case 0x1F499Cu: goto label_1f499c;
            case 0x1F49A0u: goto label_1f49a0;
            case 0x1F49A4u: goto label_1f49a4;
            case 0x1F49A8u: goto label_1f49a8;
            case 0x1F49ACu: goto label_1f49ac;
            case 0x1F49B0u: goto label_1f49b0;
            case 0x1F49B4u: goto label_1f49b4;
            case 0x1F49B8u: goto label_1f49b8;
            case 0x1F49BCu: goto label_1f49bc;
            case 0x1F49C0u: goto label_1f49c0;
            case 0x1F49C4u: goto label_1f49c4;
            case 0x1F49C8u: goto label_1f49c8;
            case 0x1F49CCu: goto label_1f49cc;
            case 0x1F49D0u: goto label_1f49d0;
            case 0x1F49D4u: goto label_1f49d4;
            case 0x1F49D8u: goto label_1f49d8;
            case 0x1F49DCu: goto label_1f49dc;
            case 0x1F49E0u: goto label_1f49e0;
            case 0x1F49E4u: goto label_1f49e4;
            case 0x1F49E8u: goto label_1f49e8;
            case 0x1F49ECu: goto label_1f49ec;
            case 0x1F49F0u: goto label_1f49f0;
            case 0x1F49F4u: goto label_1f49f4;
            case 0x1F49F8u: goto label_1f49f8;
            case 0x1F49FCu: goto label_1f49fc;
            case 0x1F4A00u: goto label_1f4a00;
            case 0x1F4A04u: goto label_1f4a04;
            case 0x1F4A08u: goto label_1f4a08;
            case 0x1F4A0Cu: goto label_1f4a0c;
            case 0x1F4A10u: goto label_1f4a10;
            case 0x1F4A14u: goto label_1f4a14;
            case 0x1F4A18u: goto label_1f4a18;
            case 0x1F4A1Cu: goto label_1f4a1c;
            case 0x1F4A20u: goto label_1f4a20;
            case 0x1F4A24u: goto label_1f4a24;
            case 0x1F4A28u: goto label_1f4a28;
            case 0x1F4A2Cu: goto label_1f4a2c;
            case 0x1F4A30u: goto label_1f4a30;
            case 0x1F4A34u: goto label_1f4a34;
            case 0x1F4A38u: goto label_1f4a38;
            case 0x1F4A3Cu: goto label_1f4a3c;
            case 0x1F4A40u: goto label_1f4a40;
            case 0x1F4A44u: goto label_1f4a44;
            case 0x1F4A48u: goto label_1f4a48;
            case 0x1F4A4Cu: goto label_1f4a4c;
            case 0x1F4A50u: goto label_1f4a50;
            case 0x1F4A54u: goto label_1f4a54;
            case 0x1F4A58u: goto label_1f4a58;
            case 0x1F4A5Cu: goto label_1f4a5c;
            case 0x1F4A60u: goto label_1f4a60;
            case 0x1F4A64u: goto label_1f4a64;
            case 0x1F4A68u: goto label_1f4a68;
            case 0x1F4A6Cu: goto label_1f4a6c;
            case 0x1F4A70u: goto label_1f4a70;
            case 0x1F4A74u: goto label_1f4a74;
            case 0x1F4A78u: goto label_1f4a78;
            case 0x1F4A7Cu: goto label_1f4a7c;
            case 0x1F4A80u: goto label_1f4a80;
            case 0x1F4A84u: goto label_1f4a84;
            case 0x1F4A88u: goto label_1f4a88;
            case 0x1F4A8Cu: goto label_1f4a8c;
            case 0x1F4A90u: goto label_1f4a90;
            case 0x1F4A94u: goto label_1f4a94;
            case 0x1F4A98u: goto label_1f4a98;
            case 0x1F4A9Cu: goto label_1f4a9c;
            case 0x1F4AA0u: goto label_1f4aa0;
            case 0x1F4AA4u: goto label_1f4aa4;
            case 0x1F4AA8u: goto label_1f4aa8;
            case 0x1F4AACu: goto label_1f4aac;
            case 0x1F4AB0u: goto label_1f4ab0;
            case 0x1F4AB4u: goto label_1f4ab4;
            case 0x1F4AB8u: goto label_1f4ab8;
            case 0x1F4ABCu: goto label_1f4abc;
            case 0x1F4AC0u: goto label_1f4ac0;
            case 0x1F4AC4u: goto label_1f4ac4;
            case 0x1F4AC8u: goto label_1f4ac8;
            case 0x1F4ACCu: goto label_1f4acc;
            case 0x1F4AD0u: goto label_1f4ad0;
            case 0x1F4AD4u: goto label_1f4ad4;
            case 0x1F4AD8u: goto label_1f4ad8;
            case 0x1F4ADCu: goto label_1f4adc;
            case 0x1F4AE0u: goto label_1f4ae0;
            case 0x1F4AE4u: goto label_1f4ae4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f4ae0:
    ctx->pc = 0x1F4AE8u;
}
