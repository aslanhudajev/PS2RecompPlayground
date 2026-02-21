#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbLightDebug
// Address: 0x2a4130 - 0x2a4ad8
void pbLightDebug_0x2a4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a4130u;

label_2a4130:
    // 0x2a4130: 0x27bdffb0
    ctx->pc = 0x2a4130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a4134:
    // 0x2a4134: 0xffbf0030
    ctx->pc = 0x2a4134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2a4138:
    // 0x2a4138: 0xffb10020
    ctx->pc = 0x2a4138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2a413c:
    // 0x2a413c: 0xffb00010
    ctx->pc = 0x2a413cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2a4140:
    // 0x2a4140: 0xe7b40040
    ctx->pc = 0x2a4140u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2a4144:
    // 0x2a4144: 0x3c020036
    ctx->pc = 0x2a4144u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4148:
    // 0x2a4148: 0x8c51dee0
    ctx->pc = 0x2a4148u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
label_2a414c:
    // 0x2a414c: 0x3c020036
    ctx->pc = 0x2a414cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4150:
    // 0x2a4150: 0x8c43e0a0
    ctx->pc = 0x2a4150u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a4154:
    // 0x2a4154: 0x8c620000
    ctx->pc = 0x2a4154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a4158:
    // 0x2a4158: 0x1040025a
label_2a415c:
    if (ctx->pc == 0x2A415Cu) {
        ctx->pc = 0x2A415Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2A4160u;
        goto label_2a4160;
    }
    ctx->pc = 0x2A4158u;
    {
        const bool branch_taken_0x2a4158 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A415Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2a4158) {
            ctx->pc = 0x2A4AC4u;
            goto label_2a4ac4;
        }
    }
    ctx->pc = 0x2A4160u;
label_2a4160:
    // 0x2a4160: 0x8c630004
    ctx->pc = 0x2a4160u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2a4164:
    // 0x2a4164: 0x2c620024
    ctx->pc = 0x2a4164u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 36));
label_2a4168:
    // 0x2a4168: 0x104000d4
label_2a416c:
    if (ctx->pc == 0x2A416Cu) {
        ctx->pc = 0x2A416Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2A4170u;
        goto label_2a4170;
    }
    ctx->pc = 0x2A4168u;
    {
        const bool branch_taken_0x2a4168 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A416Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2a4168) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A4170u;
label_2a4170:
    // 0x2a4170: 0x2442e910
    ctx->pc = 0x2a4170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961424));
label_2a4174:
    // 0x2a4174: 0x31880
    ctx->pc = 0x2a4174u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2a4178:
    // 0x2a4178: 0x621821
    ctx->pc = 0x2a4178u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a417c:
    // 0x2a417c: 0x8c620000
    ctx->pc = 0x2a417cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a4180:
    // 0x2a4180: 0x400008
label_2a4184:
    if (ctx->pc == 0x2A4184u) {
        ctx->pc = 0x2A4188u;
        goto label_2a4188;
    }
    ctx->pc = 0x2A4180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A4130u: goto label_2a4130;
            case 0x2A4134u: goto label_2a4134;
            case 0x2A4138u: goto label_2a4138;
            case 0x2A413Cu: goto label_2a413c;
            case 0x2A4140u: goto label_2a4140;
            case 0x2A4144u: goto label_2a4144;
            case 0x2A4148u: goto label_2a4148;
            case 0x2A414Cu: goto label_2a414c;
            case 0x2A4150u: goto label_2a4150;
            case 0x2A4154u: goto label_2a4154;
            case 0x2A4158u: goto label_2a4158;
            case 0x2A415Cu: goto label_2a415c;
            case 0x2A4160u: goto label_2a4160;
            case 0x2A4164u: goto label_2a4164;
            case 0x2A4168u: goto label_2a4168;
            case 0x2A416Cu: goto label_2a416c;
            case 0x2A4170u: goto label_2a4170;
            case 0x2A4174u: goto label_2a4174;
            case 0x2A4178u: goto label_2a4178;
            case 0x2A417Cu: goto label_2a417c;
            case 0x2A4180u: goto label_2a4180;
            case 0x2A4184u: goto label_2a4184;
            case 0x2A4188u: goto label_2a4188;
            case 0x2A418Cu: goto label_2a418c;
            case 0x2A4190u: goto label_2a4190;
            case 0x2A4194u: goto label_2a4194;
            case 0x2A4198u: goto label_2a4198;
            case 0x2A419Cu: goto label_2a419c;
            case 0x2A41A0u: goto label_2a41a0;
            case 0x2A41A4u: goto label_2a41a4;
            case 0x2A41A8u: goto label_2a41a8;
            case 0x2A41ACu: goto label_2a41ac;
            case 0x2A41B0u: goto label_2a41b0;
            case 0x2A41B4u: goto label_2a41b4;
            case 0x2A41B8u: goto label_2a41b8;
            case 0x2A41BCu: goto label_2a41bc;
            case 0x2A41C0u: goto label_2a41c0;
            case 0x2A41C4u: goto label_2a41c4;
            case 0x2A41C8u: goto label_2a41c8;
            case 0x2A41CCu: goto label_2a41cc;
            case 0x2A41D0u: goto label_2a41d0;
            case 0x2A41D4u: goto label_2a41d4;
            case 0x2A41D8u: goto label_2a41d8;
            case 0x2A41DCu: goto label_2a41dc;
            case 0x2A41E0u: goto label_2a41e0;
            case 0x2A41E4u: goto label_2a41e4;
            case 0x2A41E8u: goto label_2a41e8;
            case 0x2A41ECu: goto label_2a41ec;
            case 0x2A41F0u: goto label_2a41f0;
            case 0x2A41F4u: goto label_2a41f4;
            case 0x2A41F8u: goto label_2a41f8;
            case 0x2A41FCu: goto label_2a41fc;
            case 0x2A4200u: goto label_2a4200;
            case 0x2A4204u: goto label_2a4204;
            case 0x2A4208u: goto label_2a4208;
            case 0x2A420Cu: goto label_2a420c;
            case 0x2A4210u: goto label_2a4210;
            case 0x2A4214u: goto label_2a4214;
            case 0x2A4218u: goto label_2a4218;
            case 0x2A421Cu: goto label_2a421c;
            case 0x2A4220u: goto label_2a4220;
            case 0x2A4224u: goto label_2a4224;
            case 0x2A4228u: goto label_2a4228;
            case 0x2A422Cu: goto label_2a422c;
            case 0x2A4230u: goto label_2a4230;
            case 0x2A4234u: goto label_2a4234;
            case 0x2A4238u: goto label_2a4238;
            case 0x2A423Cu: goto label_2a423c;
            case 0x2A4240u: goto label_2a4240;
            case 0x2A4244u: goto label_2a4244;
            case 0x2A4248u: goto label_2a4248;
            case 0x2A424Cu: goto label_2a424c;
            case 0x2A4250u: goto label_2a4250;
            case 0x2A4254u: goto label_2a4254;
            case 0x2A4258u: goto label_2a4258;
            case 0x2A425Cu: goto label_2a425c;
            case 0x2A4260u: goto label_2a4260;
            case 0x2A4264u: goto label_2a4264;
            case 0x2A4268u: goto label_2a4268;
            case 0x2A426Cu: goto label_2a426c;
            case 0x2A4270u: goto label_2a4270;
            case 0x2A4274u: goto label_2a4274;
            case 0x2A4278u: goto label_2a4278;
            case 0x2A427Cu: goto label_2a427c;
            case 0x2A4280u: goto label_2a4280;
            case 0x2A4284u: goto label_2a4284;
            case 0x2A4288u: goto label_2a4288;
            case 0x2A428Cu: goto label_2a428c;
            case 0x2A4290u: goto label_2a4290;
            case 0x2A4294u: goto label_2a4294;
            case 0x2A4298u: goto label_2a4298;
            case 0x2A429Cu: goto label_2a429c;
            case 0x2A42A0u: goto label_2a42a0;
            case 0x2A42A4u: goto label_2a42a4;
            case 0x2A42A8u: goto label_2a42a8;
            case 0x2A42ACu: goto label_2a42ac;
            case 0x2A42B0u: goto label_2a42b0;
            case 0x2A42B4u: goto label_2a42b4;
            case 0x2A42B8u: goto label_2a42b8;
            case 0x2A42BCu: goto label_2a42bc;
            case 0x2A42C0u: goto label_2a42c0;
            case 0x2A42C4u: goto label_2a42c4;
            case 0x2A42C8u: goto label_2a42c8;
            case 0x2A42CCu: goto label_2a42cc;
            case 0x2A42D0u: goto label_2a42d0;
            case 0x2A42D4u: goto label_2a42d4;
            case 0x2A42D8u: goto label_2a42d8;
            case 0x2A42DCu: goto label_2a42dc;
            case 0x2A42E0u: goto label_2a42e0;
            case 0x2A42E4u: goto label_2a42e4;
            case 0x2A42E8u: goto label_2a42e8;
            case 0x2A42ECu: goto label_2a42ec;
            case 0x2A42F0u: goto label_2a42f0;
            case 0x2A42F4u: goto label_2a42f4;
            case 0x2A42F8u: goto label_2a42f8;
            case 0x2A42FCu: goto label_2a42fc;
            case 0x2A4300u: goto label_2a4300;
            case 0x2A4304u: goto label_2a4304;
            case 0x2A4308u: goto label_2a4308;
            case 0x2A430Cu: goto label_2a430c;
            case 0x2A4310u: goto label_2a4310;
            case 0x2A4314u: goto label_2a4314;
            case 0x2A4318u: goto label_2a4318;
            case 0x2A431Cu: goto label_2a431c;
            case 0x2A4320u: goto label_2a4320;
            case 0x2A4324u: goto label_2a4324;
            case 0x2A4328u: goto label_2a4328;
            case 0x2A432Cu: goto label_2a432c;
            case 0x2A4330u: goto label_2a4330;
            case 0x2A4334u: goto label_2a4334;
            case 0x2A4338u: goto label_2a4338;
            case 0x2A433Cu: goto label_2a433c;
            case 0x2A4340u: goto label_2a4340;
            case 0x2A4344u: goto label_2a4344;
            case 0x2A4348u: goto label_2a4348;
            case 0x2A434Cu: goto label_2a434c;
            case 0x2A4350u: goto label_2a4350;
            case 0x2A4354u: goto label_2a4354;
            case 0x2A4358u: goto label_2a4358;
            case 0x2A435Cu: goto label_2a435c;
            case 0x2A4360u: goto label_2a4360;
            case 0x2A4364u: goto label_2a4364;
            case 0x2A4368u: goto label_2a4368;
            case 0x2A436Cu: goto label_2a436c;
            case 0x2A4370u: goto label_2a4370;
            case 0x2A4374u: goto label_2a4374;
            case 0x2A4378u: goto label_2a4378;
            case 0x2A437Cu: goto label_2a437c;
            case 0x2A4380u: goto label_2a4380;
            case 0x2A4384u: goto label_2a4384;
            case 0x2A4388u: goto label_2a4388;
            case 0x2A438Cu: goto label_2a438c;
            case 0x2A4390u: goto label_2a4390;
            case 0x2A4394u: goto label_2a4394;
            case 0x2A4398u: goto label_2a4398;
            case 0x2A439Cu: goto label_2a439c;
            case 0x2A43A0u: goto label_2a43a0;
            case 0x2A43A4u: goto label_2a43a4;
            case 0x2A43A8u: goto label_2a43a8;
            case 0x2A43ACu: goto label_2a43ac;
            case 0x2A43B0u: goto label_2a43b0;
            case 0x2A43B4u: goto label_2a43b4;
            case 0x2A43B8u: goto label_2a43b8;
            case 0x2A43BCu: goto label_2a43bc;
            case 0x2A43C0u: goto label_2a43c0;
            case 0x2A43C4u: goto label_2a43c4;
            case 0x2A43C8u: goto label_2a43c8;
            case 0x2A43CCu: goto label_2a43cc;
            case 0x2A43D0u: goto label_2a43d0;
            case 0x2A43D4u: goto label_2a43d4;
            case 0x2A43D8u: goto label_2a43d8;
            case 0x2A43DCu: goto label_2a43dc;
            case 0x2A43E0u: goto label_2a43e0;
            case 0x2A43E4u: goto label_2a43e4;
            case 0x2A43E8u: goto label_2a43e8;
            case 0x2A43ECu: goto label_2a43ec;
            case 0x2A43F0u: goto label_2a43f0;
            case 0x2A43F4u: goto label_2a43f4;
            case 0x2A43F8u: goto label_2a43f8;
            case 0x2A43FCu: goto label_2a43fc;
            case 0x2A4400u: goto label_2a4400;
            case 0x2A4404u: goto label_2a4404;
            case 0x2A4408u: goto label_2a4408;
            case 0x2A440Cu: goto label_2a440c;
            case 0x2A4410u: goto label_2a4410;
            case 0x2A4414u: goto label_2a4414;
            case 0x2A4418u: goto label_2a4418;
            case 0x2A441Cu: goto label_2a441c;
            case 0x2A4420u: goto label_2a4420;
            case 0x2A4424u: goto label_2a4424;
            case 0x2A4428u: goto label_2a4428;
            case 0x2A442Cu: goto label_2a442c;
            case 0x2A4430u: goto label_2a4430;
            case 0x2A4434u: goto label_2a4434;
            case 0x2A4438u: goto label_2a4438;
            case 0x2A443Cu: goto label_2a443c;
            case 0x2A4440u: goto label_2a4440;
            case 0x2A4444u: goto label_2a4444;
            case 0x2A4448u: goto label_2a4448;
            case 0x2A444Cu: goto label_2a444c;
            case 0x2A4450u: goto label_2a4450;
            case 0x2A4454u: goto label_2a4454;
            case 0x2A4458u: goto label_2a4458;
            case 0x2A445Cu: goto label_2a445c;
            case 0x2A4460u: goto label_2a4460;
            case 0x2A4464u: goto label_2a4464;
            case 0x2A4468u: goto label_2a4468;
            case 0x2A446Cu: goto label_2a446c;
            case 0x2A4470u: goto label_2a4470;
            case 0x2A4474u: goto label_2a4474;
            case 0x2A4478u: goto label_2a4478;
            case 0x2A447Cu: goto label_2a447c;
            case 0x2A4480u: goto label_2a4480;
            case 0x2A4484u: goto label_2a4484;
            case 0x2A4488u: goto label_2a4488;
            case 0x2A448Cu: goto label_2a448c;
            case 0x2A4490u: goto label_2a4490;
            case 0x2A4494u: goto label_2a4494;
            case 0x2A4498u: goto label_2a4498;
            case 0x2A449Cu: goto label_2a449c;
            case 0x2A44A0u: goto label_2a44a0;
            case 0x2A44A4u: goto label_2a44a4;
            case 0x2A44A8u: goto label_2a44a8;
            case 0x2A44ACu: goto label_2a44ac;
            case 0x2A44B0u: goto label_2a44b0;
            case 0x2A44B4u: goto label_2a44b4;
            case 0x2A44B8u: goto label_2a44b8;
            case 0x2A44BCu: goto label_2a44bc;
            case 0x2A44C0u: goto label_2a44c0;
            case 0x2A44C4u: goto label_2a44c4;
            case 0x2A44C8u: goto label_2a44c8;
            case 0x2A44CCu: goto label_2a44cc;
            case 0x2A44D0u: goto label_2a44d0;
            case 0x2A44D4u: goto label_2a44d4;
            case 0x2A44D8u: goto label_2a44d8;
            case 0x2A44DCu: goto label_2a44dc;
            case 0x2A44E0u: goto label_2a44e0;
            case 0x2A44E4u: goto label_2a44e4;
            case 0x2A44E8u: goto label_2a44e8;
            case 0x2A44ECu: goto label_2a44ec;
            case 0x2A44F0u: goto label_2a44f0;
            case 0x2A44F4u: goto label_2a44f4;
            case 0x2A44F8u: goto label_2a44f8;
            case 0x2A44FCu: goto label_2a44fc;
            case 0x2A4500u: goto label_2a4500;
            case 0x2A4504u: goto label_2a4504;
            case 0x2A4508u: goto label_2a4508;
            case 0x2A450Cu: goto label_2a450c;
            case 0x2A4510u: goto label_2a4510;
            case 0x2A4514u: goto label_2a4514;
            case 0x2A4518u: goto label_2a4518;
            case 0x2A451Cu: goto label_2a451c;
            case 0x2A4520u: goto label_2a4520;
            case 0x2A4524u: goto label_2a4524;
            case 0x2A4528u: goto label_2a4528;
            case 0x2A452Cu: goto label_2a452c;
            case 0x2A4530u: goto label_2a4530;
            case 0x2A4534u: goto label_2a4534;
            case 0x2A4538u: goto label_2a4538;
            case 0x2A453Cu: goto label_2a453c;
            case 0x2A4540u: goto label_2a4540;
            case 0x2A4544u: goto label_2a4544;
            case 0x2A4548u: goto label_2a4548;
            case 0x2A454Cu: goto label_2a454c;
            case 0x2A4550u: goto label_2a4550;
            case 0x2A4554u: goto label_2a4554;
            case 0x2A4558u: goto label_2a4558;
            case 0x2A455Cu: goto label_2a455c;
            case 0x2A4560u: goto label_2a4560;
            case 0x2A4564u: goto label_2a4564;
            case 0x2A4568u: goto label_2a4568;
            case 0x2A456Cu: goto label_2a456c;
            case 0x2A4570u: goto label_2a4570;
            case 0x2A4574u: goto label_2a4574;
            case 0x2A4578u: goto label_2a4578;
            case 0x2A457Cu: goto label_2a457c;
            case 0x2A4580u: goto label_2a4580;
            case 0x2A4584u: goto label_2a4584;
            case 0x2A4588u: goto label_2a4588;
            case 0x2A458Cu: goto label_2a458c;
            case 0x2A4590u: goto label_2a4590;
            case 0x2A4594u: goto label_2a4594;
            case 0x2A4598u: goto label_2a4598;
            case 0x2A459Cu: goto label_2a459c;
            case 0x2A45A0u: goto label_2a45a0;
            case 0x2A45A4u: goto label_2a45a4;
            case 0x2A45A8u: goto label_2a45a8;
            case 0x2A45ACu: goto label_2a45ac;
            case 0x2A45B0u: goto label_2a45b0;
            case 0x2A45B4u: goto label_2a45b4;
            case 0x2A45B8u: goto label_2a45b8;
            case 0x2A45BCu: goto label_2a45bc;
            case 0x2A45C0u: goto label_2a45c0;
            case 0x2A45C4u: goto label_2a45c4;
            case 0x2A45C8u: goto label_2a45c8;
            case 0x2A45CCu: goto label_2a45cc;
            case 0x2A45D0u: goto label_2a45d0;
            case 0x2A45D4u: goto label_2a45d4;
            case 0x2A45D8u: goto label_2a45d8;
            case 0x2A45DCu: goto label_2a45dc;
            case 0x2A45E0u: goto label_2a45e0;
            case 0x2A45E4u: goto label_2a45e4;
            case 0x2A45E8u: goto label_2a45e8;
            case 0x2A45ECu: goto label_2a45ec;
            case 0x2A45F0u: goto label_2a45f0;
            case 0x2A45F4u: goto label_2a45f4;
            case 0x2A45F8u: goto label_2a45f8;
            case 0x2A45FCu: goto label_2a45fc;
            case 0x2A4600u: goto label_2a4600;
            case 0x2A4604u: goto label_2a4604;
            case 0x2A4608u: goto label_2a4608;
            case 0x2A460Cu: goto label_2a460c;
            case 0x2A4610u: goto label_2a4610;
            case 0x2A4614u: goto label_2a4614;
            case 0x2A4618u: goto label_2a4618;
            case 0x2A461Cu: goto label_2a461c;
            case 0x2A4620u: goto label_2a4620;
            case 0x2A4624u: goto label_2a4624;
            case 0x2A4628u: goto label_2a4628;
            case 0x2A462Cu: goto label_2a462c;
            case 0x2A4630u: goto label_2a4630;
            case 0x2A4634u: goto label_2a4634;
            case 0x2A4638u: goto label_2a4638;
            case 0x2A463Cu: goto label_2a463c;
            case 0x2A4640u: goto label_2a4640;
            case 0x2A4644u: goto label_2a4644;
            case 0x2A4648u: goto label_2a4648;
            case 0x2A464Cu: goto label_2a464c;
            case 0x2A4650u: goto label_2a4650;
            case 0x2A4654u: goto label_2a4654;
            case 0x2A4658u: goto label_2a4658;
            case 0x2A465Cu: goto label_2a465c;
            case 0x2A4660u: goto label_2a4660;
            case 0x2A4664u: goto label_2a4664;
            case 0x2A4668u: goto label_2a4668;
            case 0x2A466Cu: goto label_2a466c;
            case 0x2A4670u: goto label_2a4670;
            case 0x2A4674u: goto label_2a4674;
            case 0x2A4678u: goto label_2a4678;
            case 0x2A467Cu: goto label_2a467c;
            case 0x2A4680u: goto label_2a4680;
            case 0x2A4684u: goto label_2a4684;
            case 0x2A4688u: goto label_2a4688;
            case 0x2A468Cu: goto label_2a468c;
            case 0x2A4690u: goto label_2a4690;
            case 0x2A4694u: goto label_2a4694;
            case 0x2A4698u: goto label_2a4698;
            case 0x2A469Cu: goto label_2a469c;
            case 0x2A46A0u: goto label_2a46a0;
            case 0x2A46A4u: goto label_2a46a4;
            case 0x2A46A8u: goto label_2a46a8;
            case 0x2A46ACu: goto label_2a46ac;
            case 0x2A46B0u: goto label_2a46b0;
            case 0x2A46B4u: goto label_2a46b4;
            case 0x2A46B8u: goto label_2a46b8;
            case 0x2A46BCu: goto label_2a46bc;
            case 0x2A46C0u: goto label_2a46c0;
            case 0x2A46C4u: goto label_2a46c4;
            case 0x2A46C8u: goto label_2a46c8;
            case 0x2A46CCu: goto label_2a46cc;
            case 0x2A46D0u: goto label_2a46d0;
            case 0x2A46D4u: goto label_2a46d4;
            case 0x2A46D8u: goto label_2a46d8;
            case 0x2A46DCu: goto label_2a46dc;
            case 0x2A46E0u: goto label_2a46e0;
            case 0x2A46E4u: goto label_2a46e4;
            case 0x2A46E8u: goto label_2a46e8;
            case 0x2A46ECu: goto label_2a46ec;
            case 0x2A46F0u: goto label_2a46f0;
            case 0x2A46F4u: goto label_2a46f4;
            case 0x2A46F8u: goto label_2a46f8;
            case 0x2A46FCu: goto label_2a46fc;
            case 0x2A4700u: goto label_2a4700;
            case 0x2A4704u: goto label_2a4704;
            case 0x2A4708u: goto label_2a4708;
            case 0x2A470Cu: goto label_2a470c;
            case 0x2A4710u: goto label_2a4710;
            case 0x2A4714u: goto label_2a4714;
            case 0x2A4718u: goto label_2a4718;
            case 0x2A471Cu: goto label_2a471c;
            case 0x2A4720u: goto label_2a4720;
            case 0x2A4724u: goto label_2a4724;
            case 0x2A4728u: goto label_2a4728;
            case 0x2A472Cu: goto label_2a472c;
            case 0x2A4730u: goto label_2a4730;
            case 0x2A4734u: goto label_2a4734;
            case 0x2A4738u: goto label_2a4738;
            case 0x2A473Cu: goto label_2a473c;
            case 0x2A4740u: goto label_2a4740;
            case 0x2A4744u: goto label_2a4744;
            case 0x2A4748u: goto label_2a4748;
            case 0x2A474Cu: goto label_2a474c;
            case 0x2A4750u: goto label_2a4750;
            case 0x2A4754u: goto label_2a4754;
            case 0x2A4758u: goto label_2a4758;
            case 0x2A475Cu: goto label_2a475c;
            case 0x2A4760u: goto label_2a4760;
            case 0x2A4764u: goto label_2a4764;
            case 0x2A4768u: goto label_2a4768;
            case 0x2A476Cu: goto label_2a476c;
            case 0x2A4770u: goto label_2a4770;
            case 0x2A4774u: goto label_2a4774;
            case 0x2A4778u: goto label_2a4778;
            case 0x2A477Cu: goto label_2a477c;
            case 0x2A4780u: goto label_2a4780;
            case 0x2A4784u: goto label_2a4784;
            case 0x2A4788u: goto label_2a4788;
            case 0x2A478Cu: goto label_2a478c;
            case 0x2A4790u: goto label_2a4790;
            case 0x2A4794u: goto label_2a4794;
            case 0x2A4798u: goto label_2a4798;
            case 0x2A479Cu: goto label_2a479c;
            case 0x2A47A0u: goto label_2a47a0;
            case 0x2A47A4u: goto label_2a47a4;
            case 0x2A47A8u: goto label_2a47a8;
            case 0x2A47ACu: goto label_2a47ac;
            case 0x2A47B0u: goto label_2a47b0;
            case 0x2A47B4u: goto label_2a47b4;
            case 0x2A47B8u: goto label_2a47b8;
            case 0x2A47BCu: goto label_2a47bc;
            case 0x2A47C0u: goto label_2a47c0;
            case 0x2A47C4u: goto label_2a47c4;
            case 0x2A47C8u: goto label_2a47c8;
            case 0x2A47CCu: goto label_2a47cc;
            case 0x2A47D0u: goto label_2a47d0;
            case 0x2A47D4u: goto label_2a47d4;
            case 0x2A47D8u: goto label_2a47d8;
            case 0x2A47DCu: goto label_2a47dc;
            case 0x2A47E0u: goto label_2a47e0;
            case 0x2A47E4u: goto label_2a47e4;
            case 0x2A47E8u: goto label_2a47e8;
            case 0x2A47ECu: goto label_2a47ec;
            case 0x2A47F0u: goto label_2a47f0;
            case 0x2A47F4u: goto label_2a47f4;
            case 0x2A47F8u: goto label_2a47f8;
            case 0x2A47FCu: goto label_2a47fc;
            case 0x2A4800u: goto label_2a4800;
            case 0x2A4804u: goto label_2a4804;
            case 0x2A4808u: goto label_2a4808;
            case 0x2A480Cu: goto label_2a480c;
            case 0x2A4810u: goto label_2a4810;
            case 0x2A4814u: goto label_2a4814;
            case 0x2A4818u: goto label_2a4818;
            case 0x2A481Cu: goto label_2a481c;
            case 0x2A4820u: goto label_2a4820;
            case 0x2A4824u: goto label_2a4824;
            case 0x2A4828u: goto label_2a4828;
            case 0x2A482Cu: goto label_2a482c;
            case 0x2A4830u: goto label_2a4830;
            case 0x2A4834u: goto label_2a4834;
            case 0x2A4838u: goto label_2a4838;
            case 0x2A483Cu: goto label_2a483c;
            case 0x2A4840u: goto label_2a4840;
            case 0x2A4844u: goto label_2a4844;
            case 0x2A4848u: goto label_2a4848;
            case 0x2A484Cu: goto label_2a484c;
            case 0x2A4850u: goto label_2a4850;
            case 0x2A4854u: goto label_2a4854;
            case 0x2A4858u: goto label_2a4858;
            case 0x2A485Cu: goto label_2a485c;
            case 0x2A4860u: goto label_2a4860;
            case 0x2A4864u: goto label_2a4864;
            case 0x2A4868u: goto label_2a4868;
            case 0x2A486Cu: goto label_2a486c;
            case 0x2A4870u: goto label_2a4870;
            case 0x2A4874u: goto label_2a4874;
            case 0x2A4878u: goto label_2a4878;
            case 0x2A487Cu: goto label_2a487c;
            case 0x2A4880u: goto label_2a4880;
            case 0x2A4884u: goto label_2a4884;
            case 0x2A4888u: goto label_2a4888;
            case 0x2A488Cu: goto label_2a488c;
            case 0x2A4890u: goto label_2a4890;
            case 0x2A4894u: goto label_2a4894;
            case 0x2A4898u: goto label_2a4898;
            case 0x2A489Cu: goto label_2a489c;
            case 0x2A48A0u: goto label_2a48a0;
            case 0x2A48A4u: goto label_2a48a4;
            case 0x2A48A8u: goto label_2a48a8;
            case 0x2A48ACu: goto label_2a48ac;
            case 0x2A48B0u: goto label_2a48b0;
            case 0x2A48B4u: goto label_2a48b4;
            case 0x2A48B8u: goto label_2a48b8;
            case 0x2A48BCu: goto label_2a48bc;
            case 0x2A48C0u: goto label_2a48c0;
            case 0x2A48C4u: goto label_2a48c4;
            case 0x2A48C8u: goto label_2a48c8;
            case 0x2A48CCu: goto label_2a48cc;
            case 0x2A48D0u: goto label_2a48d0;
            case 0x2A48D4u: goto label_2a48d4;
            case 0x2A48D8u: goto label_2a48d8;
            case 0x2A48DCu: goto label_2a48dc;
            case 0x2A48E0u: goto label_2a48e0;
            case 0x2A48E4u: goto label_2a48e4;
            case 0x2A48E8u: goto label_2a48e8;
            case 0x2A48ECu: goto label_2a48ec;
            case 0x2A48F0u: goto label_2a48f0;
            case 0x2A48F4u: goto label_2a48f4;
            case 0x2A48F8u: goto label_2a48f8;
            case 0x2A48FCu: goto label_2a48fc;
            case 0x2A4900u: goto label_2a4900;
            case 0x2A4904u: goto label_2a4904;
            case 0x2A4908u: goto label_2a4908;
            case 0x2A490Cu: goto label_2a490c;
            case 0x2A4910u: goto label_2a4910;
            case 0x2A4914u: goto label_2a4914;
            case 0x2A4918u: goto label_2a4918;
            case 0x2A491Cu: goto label_2a491c;
            case 0x2A4920u: goto label_2a4920;
            case 0x2A4924u: goto label_2a4924;
            case 0x2A4928u: goto label_2a4928;
            case 0x2A492Cu: goto label_2a492c;
            case 0x2A4930u: goto label_2a4930;
            case 0x2A4934u: goto label_2a4934;
            case 0x2A4938u: goto label_2a4938;
            case 0x2A493Cu: goto label_2a493c;
            case 0x2A4940u: goto label_2a4940;
            case 0x2A4944u: goto label_2a4944;
            case 0x2A4948u: goto label_2a4948;
            case 0x2A494Cu: goto label_2a494c;
            case 0x2A4950u: goto label_2a4950;
            case 0x2A4954u: goto label_2a4954;
            case 0x2A4958u: goto label_2a4958;
            case 0x2A495Cu: goto label_2a495c;
            case 0x2A4960u: goto label_2a4960;
            case 0x2A4964u: goto label_2a4964;
            case 0x2A4968u: goto label_2a4968;
            case 0x2A496Cu: goto label_2a496c;
            case 0x2A4970u: goto label_2a4970;
            case 0x2A4974u: goto label_2a4974;
            case 0x2A4978u: goto label_2a4978;
            case 0x2A497Cu: goto label_2a497c;
            case 0x2A4980u: goto label_2a4980;
            case 0x2A4984u: goto label_2a4984;
            case 0x2A4988u: goto label_2a4988;
            case 0x2A498Cu: goto label_2a498c;
            case 0x2A4990u: goto label_2a4990;
            case 0x2A4994u: goto label_2a4994;
            case 0x2A4998u: goto label_2a4998;
            case 0x2A499Cu: goto label_2a499c;
            case 0x2A49A0u: goto label_2a49a0;
            case 0x2A49A4u: goto label_2a49a4;
            case 0x2A49A8u: goto label_2a49a8;
            case 0x2A49ACu: goto label_2a49ac;
            case 0x2A49B0u: goto label_2a49b0;
            case 0x2A49B4u: goto label_2a49b4;
            case 0x2A49B8u: goto label_2a49b8;
            case 0x2A49BCu: goto label_2a49bc;
            case 0x2A49C0u: goto label_2a49c0;
            case 0x2A49C4u: goto label_2a49c4;
            case 0x2A49C8u: goto label_2a49c8;
            case 0x2A49CCu: goto label_2a49cc;
            case 0x2A49D0u: goto label_2a49d0;
            case 0x2A49D4u: goto label_2a49d4;
            case 0x2A49D8u: goto label_2a49d8;
            case 0x2A49DCu: goto label_2a49dc;
            case 0x2A49E0u: goto label_2a49e0;
            case 0x2A49E4u: goto label_2a49e4;
            case 0x2A49E8u: goto label_2a49e8;
            case 0x2A49ECu: goto label_2a49ec;
            case 0x2A49F0u: goto label_2a49f0;
            case 0x2A49F4u: goto label_2a49f4;
            case 0x2A49F8u: goto label_2a49f8;
            case 0x2A49FCu: goto label_2a49fc;
            case 0x2A4A00u: goto label_2a4a00;
            case 0x2A4A04u: goto label_2a4a04;
            case 0x2A4A08u: goto label_2a4a08;
            case 0x2A4A0Cu: goto label_2a4a0c;
            case 0x2A4A10u: goto label_2a4a10;
            case 0x2A4A14u: goto label_2a4a14;
            case 0x2A4A18u: goto label_2a4a18;
            case 0x2A4A1Cu: goto label_2a4a1c;
            case 0x2A4A20u: goto label_2a4a20;
            case 0x2A4A24u: goto label_2a4a24;
            case 0x2A4A28u: goto label_2a4a28;
            case 0x2A4A2Cu: goto label_2a4a2c;
            case 0x2A4A30u: goto label_2a4a30;
            case 0x2A4A34u: goto label_2a4a34;
            case 0x2A4A38u: goto label_2a4a38;
            case 0x2A4A3Cu: goto label_2a4a3c;
            case 0x2A4A40u: goto label_2a4a40;
            case 0x2A4A44u: goto label_2a4a44;
            case 0x2A4A48u: goto label_2a4a48;
            case 0x2A4A4Cu: goto label_2a4a4c;
            case 0x2A4A50u: goto label_2a4a50;
            case 0x2A4A54u: goto label_2a4a54;
            case 0x2A4A58u: goto label_2a4a58;
            case 0x2A4A5Cu: goto label_2a4a5c;
            case 0x2A4A60u: goto label_2a4a60;
            case 0x2A4A64u: goto label_2a4a64;
            case 0x2A4A68u: goto label_2a4a68;
            case 0x2A4A6Cu: goto label_2a4a6c;
            case 0x2A4A70u: goto label_2a4a70;
            case 0x2A4A74u: goto label_2a4a74;
            case 0x2A4A78u: goto label_2a4a78;
            case 0x2A4A7Cu: goto label_2a4a7c;
            case 0x2A4A80u: goto label_2a4a80;
            case 0x2A4A84u: goto label_2a4a84;
            case 0x2A4A88u: goto label_2a4a88;
            case 0x2A4A8Cu: goto label_2a4a8c;
            case 0x2A4A90u: goto label_2a4a90;
            case 0x2A4A94u: goto label_2a4a94;
            case 0x2A4A98u: goto label_2a4a98;
            case 0x2A4A9Cu: goto label_2a4a9c;
            case 0x2A4AA0u: goto label_2a4aa0;
            case 0x2A4AA4u: goto label_2a4aa4;
            case 0x2A4AA8u: goto label_2a4aa8;
            case 0x2A4AACu: goto label_2a4aac;
            case 0x2A4AB0u: goto label_2a4ab0;
            case 0x2A4AB4u: goto label_2a4ab4;
            case 0x2A4AB8u: goto label_2a4ab8;
            case 0x2A4ABCu: goto label_2a4abc;
            case 0x2A4AC0u: goto label_2a4ac0;
            case 0x2A4AC4u: goto label_2a4ac4;
            case 0x2A4AC8u: goto label_2a4ac8;
            case 0x2A4ACCu: goto label_2a4acc;
            case 0x2A4AD0u: goto label_2a4ad0;
            case 0x2A4AD4u: goto label_2a4ad4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A4188u;
label_2a4188:
    // 0x2a4188: 0x3c020036
    ctx->pc = 0x2a4188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a418c:
    // 0x2a418c: 0x8c42e0a0
    ctx->pc = 0x2a418cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a4190:
    // 0x2a4190: 0xac400004
    ctx->pc = 0x2a4190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2a4194:
    // 0x2a4194: 0x24030001
    ctx->pc = 0x2a4194u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2a4198:
    // 0x2a4198: 0xac430010
    ctx->pc = 0x2a4198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_2a419c:
    // 0x2a419c: 0xac400014
    ctx->pc = 0x2a419cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_2a41a0:
    // 0x2a41a0: 0x100000c6
label_2a41a4:
    if (ctx->pc == 0x2A41A4u) {
        ctx->pc = 0x2A41A4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
        ctx->pc = 0x2A41A8u;
        goto label_2a41a8;
    }
    ctx->pc = 0x2A41A0u;
    {
        const bool branch_taken_0x2a41a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A41A4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
        if (branch_taken_0x2a41a0) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A41A8u;
label_2a41a8:
    // 0x2a41a8: 0x3c020036
    ctx->pc = 0x2a41a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a41ac:
    // 0x2a41ac: 0x8c43e0a0
    ctx->pc = 0x2a41acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a41b0:
    // 0x2a41b0: 0x24020001
    ctx->pc = 0x2a41b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2a41b4:
    // 0x2a41b4: 0xac620008
    ctx->pc = 0x2a41b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_2a41b8:
    // 0x2a41b8: 0x3c020036
    ctx->pc = 0x2a41b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a41bc:
    // 0x2a41bc: 0x8c42e0a0
    ctx->pc = 0x2a41bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a41c0:
    // 0x2a41c0: 0xac400004
    ctx->pc = 0x2a41c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2a41c4:
    // 0x2a41c4: 0xac400010
    ctx->pc = 0x2a41c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_2a41c8:
    // 0x2a41c8: 0x24030001
    ctx->pc = 0x2a41c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2a41cc:
    // 0x2a41cc: 0xac430014
    ctx->pc = 0x2a41ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_2a41d0:
    // 0x2a41d0: 0x100000ba
label_2a41d4:
    if (ctx->pc == 0x2A41D4u) {
        ctx->pc = 0x2A41D4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
        ctx->pc = 0x2A41D8u;
        goto label_2a41d8;
    }
    ctx->pc = 0x2A41D0u;
    {
        const bool branch_taken_0x2a41d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A41D4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
        if (branch_taken_0x2a41d0) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A41D8u;
label_2a41d8:
    // 0x2a41d8: 0x3c020036
    ctx->pc = 0x2a41d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a41dc:
    // 0x2a41dc: 0x8c42e0a0
    ctx->pc = 0x2a41dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a41e0:
    // 0x2a41e0: 0xac400010
    ctx->pc = 0x2a41e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_2a41e4:
    // 0x2a41e4: 0x100000b5
label_2a41e8:
    if (ctx->pc == 0x2A41E8u) {
        ctx->pc = 0x2A41E8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->pc = 0x2A41ECu;
        goto label_2a41ec;
    }
    ctx->pc = 0x2A41E4u;
    {
        const bool branch_taken_0x2a41e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A41E8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        if (branch_taken_0x2a41e4) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A41ECu;
label_2a41ec:
    // 0x2a41ec: 0x3c020036
    ctx->pc = 0x2a41ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a41f0:
    // 0x2a41f0: 0x8c43e0a0
    ctx->pc = 0x2a41f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a41f4:
    // 0x2a41f4: 0x8c62000c
    ctx->pc = 0x2a41f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a41f8:
    // 0x2a41f8: 0x34420001
    ctx->pc = 0x2a41f8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_2a41fc:
    // 0x2a41fc: 0xac62000c
    ctx->pc = 0x2a41fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2a4200:
    // 0x2a4200: 0x3c020036
    ctx->pc = 0x2a4200u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4204:
    // 0x2a4204: 0x8c43e0a0
    ctx->pc = 0x2a4204u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a4208:
    // 0x2a4208: 0xac600004
    ctx->pc = 0x2a4208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2a420c:
    // 0x2a420c: 0x24020001
    ctx->pc = 0x2a420cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2a4210:
    // 0x2a4210: 0x100000aa
label_2a4214:
    if (ctx->pc == 0x2A4214u) {
        ctx->pc = 0x2A4214u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x2A4218u;
        goto label_2a4218;
    }
    ctx->pc = 0x2A4210u;
    {
        const bool branch_taken_0x2a4210 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4214u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x2a4210) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A4218u;
label_2a4218:
    // 0x2a4218: 0x3c020036
    ctx->pc = 0x2a4218u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a421c:
    // 0x2a421c: 0x8c43e0a0
    ctx->pc = 0x2a421cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a4220:
    // 0x2a4220: 0xac600004
    ctx->pc = 0x2a4220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2a4224:
    // 0x2a4224: 0x8e22001c
    ctx->pc = 0x2a4224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a4228:
    // 0x2a4228: 0x8c4200e0
    ctx->pc = 0x2a4228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 224)));
label_2a422c:
    // 0x2a422c: 0x8c42002c
    ctx->pc = 0x2a422cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2a4230:
    // 0x2a4230: 0x100000a2
label_2a4234:
    if (ctx->pc == 0x2A4234u) {
        ctx->pc = 0x2A4234u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x2A4238u;
        goto label_2a4238;
    }
    ctx->pc = 0x2A4230u;
    {
        const bool branch_taken_0x2a4230 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4234u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x2a4230) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A4238u;
label_2a4238:
    // 0x2a4238: 0x3c020036
    ctx->pc = 0x2a4238u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a423c:
    // 0x2a423c: 0x8c43e0a0
    ctx->pc = 0x2a423cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a4240:
    // 0x2a4240: 0xac600004
    ctx->pc = 0x2a4240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2a4244:
    // 0x2a4244: 0x3c02ffff
    ctx->pc = 0x2a4244u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_2a4248:
    // 0x2a4248: 0x3442ffff
    ctx->pc = 0x2a4248u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_2a424c:
    // 0x2a424c: 0x1000009b
label_2a4250:
    if (ctx->pc == 0x2A4250u) {
        ctx->pc = 0x2A4250u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x2A4254u;
        goto label_2a4254;
    }
    ctx->pc = 0x2A424Cu;
    {
        const bool branch_taken_0x2a424c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4250u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x2a424c) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A4254u;
label_2a4254:
    // 0x2a4254: 0x3c020036
    ctx->pc = 0x2a4254u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4258:
    // 0x2a4258: 0x8c43e0a0
    ctx->pc = 0x2a4258u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a425c:
    // 0x2a425c: 0x24020001
    ctx->pc = 0x2a425cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2a4260:
    // 0x2a4260: 0xac620008
    ctx->pc = 0x2a4260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_2a4264:
    // 0x2a4264: 0x3c020036
    ctx->pc = 0x2a4264u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4268:
    // 0x2a4268: 0x8c43e0a0
    ctx->pc = 0x2a4268u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a426c:
    // 0x2a426c: 0xac600004
    ctx->pc = 0x2a426cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2a4270:
    // 0x2a4270: 0x24020001
    ctx->pc = 0x2a4270u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2a4274:
    // 0x2a4274: 0xac620010
    ctx->pc = 0x2a4274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2a4278:
    // 0x2a4278: 0xac620014
    ctx->pc = 0x2a4278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_2a427c:
    // 0x2a427c: 0x1000008f
label_2a4280:
    if (ctx->pc == 0x2A4280u) {
        ctx->pc = 0x2A4280u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x2A4284u;
        goto label_2a4284;
    }
    ctx->pc = 0x2A427Cu;
    {
        const bool branch_taken_0x2a427c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4280u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x2a427c) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A4284u;
label_2a4284:
    // 0x2a4284: 0x3c020036
    ctx->pc = 0x2a4284u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4288:
    // 0x2a4288: 0x8c42e0a0
    ctx->pc = 0x2a4288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a428c:
    // 0x2a428c: 0xac400004
    ctx->pc = 0x2a428cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2a4290:
    // 0x2a4290: 0xac400010
    ctx->pc = 0x2a4290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_2a4294:
    // 0x2a4294: 0xac400014
    ctx->pc = 0x2a4294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_2a4298:
    // 0x2a4298: 0x24030001
    ctx->pc = 0x2a4298u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2a429c:
    // 0x2a429c: 0x10000087
label_2a42a0:
    if (ctx->pc == 0x2A42A0u) {
        ctx->pc = 0x2A42A0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
        ctx->pc = 0x2A42A4u;
        goto label_2a42a4;
    }
    ctx->pc = 0x2A429Cu;
    {
        const bool branch_taken_0x2a429c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A42A0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
        if (branch_taken_0x2a429c) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A42A4u;
label_2a42a4:
    // 0x2a42a4: 0x3c020036
    ctx->pc = 0x2a42a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a42a8:
    // 0x2a42a8: 0x8c43e0a0
    ctx->pc = 0x2a42a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a42ac:
    // 0x2a42ac: 0x3c0200ff
    ctx->pc = 0x2a42acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
label_2a42b0:
    // 0x2a42b0: 0x10000082
label_2a42b4:
    if (ctx->pc == 0x2A42B4u) {
        ctx->pc = 0x2A42B4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x2A42B8u;
        goto label_2a42b8;
    }
    ctx->pc = 0x2A42B0u;
    {
        const bool branch_taken_0x2a42b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A42B4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        if (branch_taken_0x2a42b0) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A42B8u;
label_2a42b8:
    // 0x2a42b8: 0x3c020036
    ctx->pc = 0x2a42b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a42bc:
    // 0x2a42bc: 0x8c43e0a0
    ctx->pc = 0x2a42bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a42c0:
    // 0x2a42c0: 0x3402ff00
    ctx->pc = 0x2a42c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65280));
label_2a42c4:
    // 0x2a42c4: 0x1000007d
label_2a42c8:
    if (ctx->pc == 0x2A42C8u) {
        ctx->pc = 0x2A42C8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x2A42CCu;
        goto label_2a42cc;
    }
    ctx->pc = 0x2A42C4u;
    {
        const bool branch_taken_0x2a42c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A42C8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        if (branch_taken_0x2a42c4) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A42CCu;
label_2a42cc:
    // 0x2a42cc: 0x3c020036
    ctx->pc = 0x2a42ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a42d0:
    // 0x2a42d0: 0x8c43e0a0
    ctx->pc = 0x2a42d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a42d4:
    // 0x2a42d4: 0x240200ff
    ctx->pc = 0x2a42d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
label_2a42d8:
    // 0x2a42d8: 0x10000078
label_2a42dc:
    if (ctx->pc == 0x2A42DCu) {
        ctx->pc = 0x2A42DCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x2A42E0u;
        goto label_2a42e0;
    }
    ctx->pc = 0x2A42D8u;
    {
        const bool branch_taken_0x2a42d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A42DCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        if (branch_taken_0x2a42d8) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A42E0u;
label_2a42e0:
    // 0x2a42e0: 0x3c020036
    ctx->pc = 0x2a42e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a42e4:
    // 0x2a42e4: 0x8c43e0a0
    ctx->pc = 0x2a42e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a42e8:
    // 0x2a42e8: 0x3c020080
    ctx->pc = 0x2a42e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
label_2a42ec:
    // 0x2a42ec: 0x34428080
    ctx->pc = 0x2a42ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32896));
label_2a42f0:
    // 0x2a42f0: 0x10000072
label_2a42f4:
    if (ctx->pc == 0x2A42F4u) {
        ctx->pc = 0x2A42F4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x2A42F8u;
        goto label_2a42f8;
    }
    ctx->pc = 0x2A42F0u;
    {
        const bool branch_taken_0x2a42f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A42F4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        if (branch_taken_0x2a42f0) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A42F8u;
label_2a42f8:
    // 0x2a42f8: 0x3c020036
    ctx->pc = 0x2a42f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a42fc:
    // 0x2a42fc: 0x8c42e0a0
    ctx->pc = 0x2a42fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a4300:
    // 0x2a4300: 0x1000006e
label_2a4304:
    if (ctx->pc == 0x2A4304u) {
        ctx->pc = 0x2A4304u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x2A4308u;
        goto label_2a4308;
    }
    ctx->pc = 0x2A4300u;
    {
        const bool branch_taken_0x2a4300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4304u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        if (branch_taken_0x2a4300) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A4308u;
label_2a4308:
    // 0x2a4308: 0x3c020036
    ctx->pc = 0x2a4308u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a430c:
    // 0x2a430c: 0x8c43e0a0
    ctx->pc = 0x2a430cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a4310:
    // 0x2a4310: 0x3c0200ff
    ctx->pc = 0x2a4310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
label_2a4314:
    // 0x2a4314: 0x3442ffff
    ctx->pc = 0x2a4314u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_2a4318:
    // 0x2a4318: 0x10000068
label_2a431c:
    if (ctx->pc == 0x2A431Cu) {
        ctx->pc = 0x2A431Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x2A4320u;
        goto label_2a4320;
    }
    ctx->pc = 0x2A4318u;
    {
        const bool branch_taken_0x2a4318 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A431Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        if (branch_taken_0x2a4318) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A4320u;
label_2a4320:
    // 0x2a4320: 0x3c020036
    ctx->pc = 0x2a4320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4324:
    // 0x2a4324: 0x8c43e0a0
    ctx->pc = 0x2a4324u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a4328:
    // 0x2a4328: 0x3c0200ff
    ctx->pc = 0x2a4328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
label_2a432c:
    // 0x2a432c: 0x10000063
label_2a4330:
    if (ctx->pc == 0x2A4330u) {
        ctx->pc = 0x2A4330u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x2A4334u;
        goto label_2a4334;
    }
    ctx->pc = 0x2A432Cu;
    {
        const bool branch_taken_0x2a432c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4330u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x2a432c) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A4334u;
label_2a4334:
    // 0x2a4334: 0x3c020036
    ctx->pc = 0x2a4334u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4338:
    // 0x2a4338: 0x8c43e0a0
    ctx->pc = 0x2a4338u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a433c:
    // 0x2a433c: 0x3402ff00
    ctx->pc = 0x2a433cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65280));
label_2a4340:
    // 0x2a4340: 0x1000005e
label_2a4344:
    if (ctx->pc == 0x2A4344u) {
        ctx->pc = 0x2A4344u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x2A4348u;
        goto label_2a4348;
    }
    ctx->pc = 0x2A4340u;
    {
        const bool branch_taken_0x2a4340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4344u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x2a4340) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A4348u;
label_2a4348:
    // 0x2a4348: 0x3c020036
    ctx->pc = 0x2a4348u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a434c:
    // 0x2a434c: 0x8c43e0a0
    ctx->pc = 0x2a434cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a4350:
    // 0x2a4350: 0x240200ff
    ctx->pc = 0x2a4350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
label_2a4354:
    // 0x2a4354: 0x10000059
label_2a4358:
    if (ctx->pc == 0x2A4358u) {
        ctx->pc = 0x2A4358u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x2A435Cu;
        goto label_2a435c;
    }
    ctx->pc = 0x2A4354u;
    {
        const bool branch_taken_0x2a4354 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4358u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x2a4354) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A435Cu;
label_2a435c:
    // 0x2a435c: 0x3c020036
    ctx->pc = 0x2a435cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4360:
    // 0x2a4360: 0x8c43e0a0
    ctx->pc = 0x2a4360u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a4364:
    // 0x2a4364: 0x3c020080
    ctx->pc = 0x2a4364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
label_2a4368:
    // 0x2a4368: 0x34428080
    ctx->pc = 0x2a4368u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32896));
label_2a436c:
    // 0x2a436c: 0x10000053
label_2a4370:
    if (ctx->pc == 0x2A4370u) {
        ctx->pc = 0x2A4370u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x2A4374u;
        goto label_2a4374;
    }
    ctx->pc = 0x2A436Cu;
    {
        const bool branch_taken_0x2a436c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4370u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x2a436c) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A4374u;
label_2a4374:
    // 0x2a4374: 0x3c020036
    ctx->pc = 0x2a4374u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4378:
    // 0x2a4378: 0x8c42e0a0
    ctx->pc = 0x2a4378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a437c:
    // 0x2a437c: 0x1000004f
label_2a4380:
    if (ctx->pc == 0x2A4380u) {
        ctx->pc = 0x2A4380u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
        ctx->pc = 0x2A4384u;
        goto label_2a4384;
    }
    ctx->pc = 0x2A437Cu;
    {
        const bool branch_taken_0x2a437c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4380u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
        if (branch_taken_0x2a437c) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A4384u;
label_2a4384:
    // 0x2a4384: 0x3c020036
    ctx->pc = 0x2a4384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4388:
    // 0x2a4388: 0x8c43e0a0
    ctx->pc = 0x2a4388u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a438c:
    // 0x2a438c: 0x3c0200ff
    ctx->pc = 0x2a438cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
label_2a4390:
    // 0x2a4390: 0x3442ffff
    ctx->pc = 0x2a4390u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_2a4394:
    // 0x2a4394: 0x10000049
label_2a4398:
    if (ctx->pc == 0x2A4398u) {
        ctx->pc = 0x2A4398u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x2A439Cu;
        goto label_2a439c;
    }
    ctx->pc = 0x2A4394u;
    {
        const bool branch_taken_0x2a4394 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4398u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x2a4394) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A439Cu;
label_2a439c:
    // 0x2a439c: 0x3c020036
    ctx->pc = 0x2a439cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a43a0:
    // 0x2a43a0: 0x8c43e0a0
    ctx->pc = 0x2a43a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a43a4:
    // 0x2a43a4: 0x3c0200ff
    ctx->pc = 0x2a43a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
label_2a43a8:
    // 0x2a43a8: 0x10000044
label_2a43ac:
    if (ctx->pc == 0x2A43ACu) {
        ctx->pc = 0x2A43ACu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x2A43B0u;
        goto label_2a43b0;
    }
    ctx->pc = 0x2A43A8u;
    {
        const bool branch_taken_0x2a43a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A43ACu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        if (branch_taken_0x2a43a8) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A43B0u;
label_2a43b0:
    // 0x2a43b0: 0x3c020036
    ctx->pc = 0x2a43b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a43b4:
    // 0x2a43b4: 0x8c43e0a0
    ctx->pc = 0x2a43b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a43b8:
    // 0x2a43b8: 0x3402ff00
    ctx->pc = 0x2a43b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65280));
label_2a43bc:
    // 0x2a43bc: 0x1000003f
label_2a43c0:
    if (ctx->pc == 0x2A43C0u) {
        ctx->pc = 0x2A43C0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x2A43C4u;
        goto label_2a43c4;
    }
    ctx->pc = 0x2A43BCu;
    {
        const bool branch_taken_0x2a43bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A43C0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        if (branch_taken_0x2a43bc) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A43C4u;
label_2a43c4:
    // 0x2a43c4: 0x3c020036
    ctx->pc = 0x2a43c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a43c8:
    // 0x2a43c8: 0x8c43e0a0
    ctx->pc = 0x2a43c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a43cc:
    // 0x2a43cc: 0x240200ff
    ctx->pc = 0x2a43ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
label_2a43d0:
    // 0x2a43d0: 0x1000003a
label_2a43d4:
    if (ctx->pc == 0x2A43D4u) {
        ctx->pc = 0x2A43D4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x2A43D8u;
        goto label_2a43d8;
    }
    ctx->pc = 0x2A43D0u;
    {
        const bool branch_taken_0x2a43d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A43D4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        if (branch_taken_0x2a43d0) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A43D8u;
label_2a43d8:
    // 0x2a43d8: 0x3c020036
    ctx->pc = 0x2a43d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a43dc:
    // 0x2a43dc: 0x8c43e0a0
    ctx->pc = 0x2a43dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a43e0:
    // 0x2a43e0: 0x3c020080
    ctx->pc = 0x2a43e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
label_2a43e4:
    // 0x2a43e4: 0x34428080
    ctx->pc = 0x2a43e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32896));
label_2a43e8:
    // 0x2a43e8: 0x10000034
label_2a43ec:
    if (ctx->pc == 0x2A43ECu) {
        ctx->pc = 0x2A43ECu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x2A43F0u;
        goto label_2a43f0;
    }
    ctx->pc = 0x2A43E8u;
    {
        const bool branch_taken_0x2a43e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A43ECu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        if (branch_taken_0x2a43e8) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A43F0u;
label_2a43f0:
    // 0x2a43f0: 0x3c020036
    ctx->pc = 0x2a43f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a43f4:
    // 0x2a43f4: 0x8c42e0a0
    ctx->pc = 0x2a43f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a43f8:
    // 0x2a43f8: 0x10000030
label_2a43fc:
    if (ctx->pc == 0x2A43FCu) {
        ctx->pc = 0x2A43FCu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x2A4400u;
        goto label_2a4400;
    }
    ctx->pc = 0x2A43F8u;
    {
        const bool branch_taken_0x2a43f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A43FCu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        if (branch_taken_0x2a43f8) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A4400u;
label_2a4400:
    // 0x2a4400: 0x3c020036
    ctx->pc = 0x2a4400u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4404:
    // 0x2a4404: 0x8c43e0a0
    ctx->pc = 0x2a4404u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a4408:
    // 0x2a4408: 0x3c0200ff
    ctx->pc = 0x2a4408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
label_2a440c:
    // 0x2a440c: 0x3442ffff
    ctx->pc = 0x2a440cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_2a4410:
    // 0x2a4410: 0x1000002a
label_2a4414:
    if (ctx->pc == 0x2A4414u) {
        ctx->pc = 0x2A4414u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x2A4418u;
        goto label_2a4418;
    }
    ctx->pc = 0x2A4410u;
    {
        const bool branch_taken_0x2a4410 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4414u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        if (branch_taken_0x2a4410) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A4418u;
label_2a4418:
    // 0x2a4418: 0x3c020036
    ctx->pc = 0x2a4418u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a441c:
    // 0x2a441c: 0x3c013f80
    ctx->pc = 0x2a441cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2a4420:
    // 0x2a4420: 0x44810000
    ctx->pc = 0x2a4420u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a4424:
    // 0x2a4424: 0x10000005
label_2a4428:
    if (ctx->pc == 0x2A4428u) {
        ctx->pc = 0x2A4428u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
        ctx->pc = 0x2A442Cu;
        goto label_2a442c;
    }
    ctx->pc = 0x2A4424u;
    {
        const bool branch_taken_0x2a4424 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4428u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
        if (branch_taken_0x2a4424) {
            ctx->pc = 0x2A443Cu;
            goto label_2a443c;
        }
    }
    ctx->pc = 0x2A442Cu;
label_2a442c:
    // 0x2a442c: 0x3c020036
    ctx->pc = 0x2a442cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4430:
    // 0x2a4430: 0x8c42e0a0
    ctx->pc = 0x2a4430u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a4434:
    // 0x2a4434: 0x3c01bf80
    ctx->pc = 0x2a4434u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
label_2a4438:
    // 0x2a4438: 0x44810000
    ctx->pc = 0x2a4438u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a443c:
    // 0x2a443c: 0xe4400030
    ctx->pc = 0x2a443cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_2a4440:
    // 0x2a4440: 0xac400034
    ctx->pc = 0x2a4440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_2a4444:
    // 0x2a4444: 0x1000001d
label_2a4448:
    if (ctx->pc == 0x2A4448u) {
        ctx->pc = 0x2A4448u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
        ctx->pc = 0x2A444Cu;
        goto label_2a444c;
    }
    ctx->pc = 0x2A4444u;
    {
        const bool branch_taken_0x2a4444 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4448u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
        if (branch_taken_0x2a4444) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A444Cu;
label_2a444c:
    // 0x2a444c: 0x3c020036
    ctx->pc = 0x2a444cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4450:
    // 0x2a4450: 0x8c42e0a0
    ctx->pc = 0x2a4450u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a4454:
    // 0x2a4454: 0x3c013f80
    ctx->pc = 0x2a4454u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2a4458:
    // 0x2a4458: 0x44810000
    ctx->pc = 0x2a4458u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a445c:
    // 0x2a445c: 0x10000006
label_2a4460:
    if (ctx->pc == 0x2A4460u) {
        ctx->pc = 0x2A4460u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x2A4464u;
        goto label_2a4464;
    }
    ctx->pc = 0x2A445Cu;
    {
        const bool branch_taken_0x2a445c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4460u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        if (branch_taken_0x2a445c) {
            ctx->pc = 0x2A4478u;
            goto label_2a4478;
        }
    }
    ctx->pc = 0x2A4464u;
label_2a4464:
    // 0x2a4464: 0x3c020036
    ctx->pc = 0x2a4464u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4468:
    // 0x2a4468: 0x8c42e0a0
    ctx->pc = 0x2a4468u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a446c:
    // 0x2a446c: 0xac400030
    ctx->pc = 0x2a446cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_2a4470:
    // 0x2a4470: 0x3c01bf80
    ctx->pc = 0x2a4470u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
label_2a4474:
    // 0x2a4474: 0x44810000
    ctx->pc = 0x2a4474u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a4478:
    // 0x2a4478: 0xe4400034
    ctx->pc = 0x2a4478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_2a447c:
    // 0x2a447c: 0x1000000f
label_2a4480:
    if (ctx->pc == 0x2A4480u) {
        ctx->pc = 0x2A4480u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
        ctx->pc = 0x2A4484u;
        goto label_2a4484;
    }
    ctx->pc = 0x2A447Cu;
    {
        const bool branch_taken_0x2a447c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4480u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
        if (branch_taken_0x2a447c) {
            ctx->pc = 0x2A44BCu;
            goto label_2a44bc;
        }
    }
    ctx->pc = 0x2A4484u;
label_2a4484:
    // 0x2a4484: 0x3c020036
    ctx->pc = 0x2a4484u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4488:
    // 0x2a4488: 0x8c42e0a0
    ctx->pc = 0x2a4488u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a448c:
    // 0x2a448c: 0xac400030
    ctx->pc = 0x2a448cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_2a4490:
    // 0x2a4490: 0x3c013f80
    ctx->pc = 0x2a4490u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2a4494:
    // 0x2a4494: 0x44810000
    ctx->pc = 0x2a4494u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a4498:
    // 0x2a4498: 0x10000007
label_2a449c:
    if (ctx->pc == 0x2A449Cu) {
        ctx->pc = 0x2A449Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x2A44A0u;
        goto label_2a44a0;
    }
    ctx->pc = 0x2A4498u;
    {
        const bool branch_taken_0x2a4498 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A449Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
        if (branch_taken_0x2a4498) {
            ctx->pc = 0x2A44B8u;
            goto label_2a44b8;
        }
    }
    ctx->pc = 0x2A44A0u;
label_2a44a0:
    // 0x2a44a0: 0x3c020036
    ctx->pc = 0x2a44a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a44a4:
    // 0x2a44a4: 0x8c42e0a0
    ctx->pc = 0x2a44a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a44a8:
    // 0x2a44a8: 0xac400030
    ctx->pc = 0x2a44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_2a44ac:
    // 0x2a44ac: 0xac400034
    ctx->pc = 0x2a44acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_2a44b0:
    // 0x2a44b0: 0x3c01bf80
    ctx->pc = 0x2a44b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
label_2a44b4:
    // 0x2a44b4: 0x44810000
    ctx->pc = 0x2a44b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a44b8:
    // 0x2a44b8: 0xe4400038
    ctx->pc = 0x2a44b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_2a44bc:
    // 0x2a44bc: 0x3c020036
    ctx->pc = 0x2a44bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a44c0:
    // 0x2a44c0: 0x8c42e0a0
    ctx->pc = 0x2a44c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a44c4:
    // 0x2a44c4: 0x8c420008
    ctx->pc = 0x2a44c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2a44c8:
    // 0x2a44c8: 0x10400028
label_2a44cc:
    if (ctx->pc == 0x2A44CCu) {
        ctx->pc = 0x2A44CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x2A44D0u;
        goto label_2a44d0;
    }
    ctx->pc = 0x2A44C8u;
    {
        const bool branch_taken_0x2a44c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A44CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a44c8) {
            ctx->pc = 0x2A456Cu;
            goto label_2a456c;
        }
    }
    ctx->pc = 0x2A44D0u;
label_2a44d0:
    // 0x2a44d0: 0x3c100036
    ctx->pc = 0x2a44d0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
label_2a44d4:
    // 0x2a44d4: 0xc0be862
label_2a44d8:
    if (ctx->pc == 0x2A44D8u) {
        ctx->pc = 0x2A44D8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294959424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2A44DCu;
        goto label_2a44dc;
    }
    ctx->pc = 0x2A44D4u;
    SET_GPR_U32(ctx, 31, 0x2A44DCu);
    ctx->pc = 0x2A44D8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294959424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A44DCu; }
    }
    if (ctx->pc != 0x2A44DCu) { return; }
    ctx->pc = 0x2A44DCu;
label_2a44dc:
    // 0x2a44dc: 0x3c01003b
    ctx->pc = 0x2a44dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)59 << 16));
label_2a44e0:
    // 0x2a44e0: 0xdc25e9a0
    ctx->pc = 0x2a44e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294961568)));
label_2a44e4:
    // 0x2a44e4: 0xc0be340
label_2a44e8:
    if (ctx->pc == 0x2A44E8u) {
        ctx->pc = 0x2A44E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A44ECu;
        goto label_2a44ec;
    }
    ctx->pc = 0x2A44E4u;
    SET_GPR_U32(ctx, 31, 0x2A44ECu);
    ctx->pc = 0x2A44E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A44ECu; }
    }
    if (ctx->pc != 0x2A44ECu) { return; }
    ctx->pc = 0x2A44ECu;
label_2a44ec:
    // 0x2a44ec: 0xc0be564
label_2a44f0:
    if (ctx->pc == 0x2A44F0u) {
        ctx->pc = 0x2A44F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A44F4u;
        goto label_2a44f4;
    }
    ctx->pc = 0x2A44ECu;
    SET_GPR_U32(ctx, 31, 0x2A44F4u);
    ctx->pc = 0x2A44F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A44F4u; }
    }
    if (ctx->pc != 0x2A44F4u) { return; }
    ctx->pc = 0x2A44F4u;
label_2a44f4:
    // 0x2a44f4: 0xe600e140
    ctx->pc = 0x2a44f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294959424), bits); }
label_2a44f8:
    // 0x2a44f8: 0xc0be862
label_2a44fc:
    if (ctx->pc == 0x2A44FCu) {
        ctx->pc = 0x2A44FCu;
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2A4500u;
        goto label_2a4500;
    }
    ctx->pc = 0x2A44F8u;
    SET_GPR_U32(ctx, 31, 0x2A4500u);
    ctx->pc = 0x2A44FCu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4500u; }
    }
    if (ctx->pc != 0x2A4500u) { return; }
    ctx->pc = 0x2A4500u;
label_2a4500:
    // 0x2a4500: 0x3c01003b
    ctx->pc = 0x2a4500u;
    SET_GPR_U32(ctx, 1, ((uint32_t)59 << 16));
label_2a4504:
    // 0x2a4504: 0xdc25e9a8
    ctx->pc = 0x2a4504u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294961576)));
label_2a4508:
    // 0x2a4508: 0xc0be4ba
label_2a450c:
    if (ctx->pc == 0x2A450Cu) {
        ctx->pc = 0x2A450Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A4510u;
        goto label_2a4510;
    }
    ctx->pc = 0x2A4508u;
    SET_GPR_U32(ctx, 31, 0x2A4510u);
    ctx->pc = 0x2A450Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4510u; }
    }
    if (ctx->pc != 0x2A4510u) { return; }
    ctx->pc = 0x2A4510u;
label_2a4510:
    // 0x2a4510: 0x5840000b
label_2a4514:
    if (ctx->pc == 0x2A4514u) {
        ctx->pc = 0x2A4514u;
        SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
        ctx->pc = 0x2A4518u;
        goto label_2a4518;
    }
    ctx->pc = 0x2A4510u;
    {
        const bool branch_taken_0x2a4510 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a4510) {
            ctx->pc = 0x2A4514u;
            SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
            ctx->pc = 0x2A4540u;
            goto label_2a4540;
        }
    }
    ctx->pc = 0x2A4518u;
label_2a4518:
    // 0x2a4518: 0xc0be862
label_2a451c:
    if (ctx->pc == 0x2A451Cu) {
        ctx->pc = 0x2A451Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294959424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2A4520u;
        goto label_2a4520;
    }
    ctx->pc = 0x2A4518u;
    SET_GPR_U32(ctx, 31, 0x2A4520u);
    ctx->pc = 0x2A451Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294959424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4520u; }
    }
    if (ctx->pc != 0x2A4520u) { return; }
    ctx->pc = 0x2A4520u;
label_2a4520:
    // 0x2a4520: 0x3c01003b
    ctx->pc = 0x2a4520u;
    SET_GPR_U32(ctx, 1, ((uint32_t)59 << 16));
label_2a4524:
    // 0x2a4524: 0xdc25e9b0
    ctx->pc = 0x2a4524u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294961584)));
label_2a4528:
    // 0x2a4528: 0xc0be356
label_2a452c:
    if (ctx->pc == 0x2A452Cu) {
        ctx->pc = 0x2A452Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A4530u;
        goto label_2a4530;
    }
    ctx->pc = 0x2A4528u;
    SET_GPR_U32(ctx, 31, 0x2A4530u);
    ctx->pc = 0x2A452Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4530u; }
    }
    if (ctx->pc != 0x2A4530u) { return; }
    ctx->pc = 0x2A4530u;
label_2a4530:
    // 0x2a4530: 0xc0be564
label_2a4534:
    if (ctx->pc == 0x2A4534u) {
        ctx->pc = 0x2A4534u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A4538u;
        goto label_2a4538;
    }
    ctx->pc = 0x2A4530u;
    SET_GPR_U32(ctx, 31, 0x2A4538u);
    ctx->pc = 0x2A4534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4538u; }
    }
    if (ctx->pc != 0x2A4538u) { return; }
    ctx->pc = 0x2A4538u;
label_2a4538:
    // 0x2a4538: 0xe600e140
    ctx->pc = 0x2a4538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294959424), bits); }
label_2a453c:
    // 0x2a453c: 0x3c100036
    ctx->pc = 0x2a453cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
label_2a4540:
    // 0x2a4540: 0xc0b9dce
label_2a4544:
    if (ctx->pc == 0x2A4544u) {
        ctx->pc = 0x2A4544u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294959424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2A4548u;
        goto label_2a4548;
    }
    ctx->pc = 0x2A4540u;
    SET_GPR_U32(ctx, 31, 0x2A4548u);
    ctx->pc = 0x2A4544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294959424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4548u; }
    }
    if (ctx->pc != 0x2A4548u) { return; }
    ctx->pc = 0x2A4548u;
label_2a4548:
    // 0x2a4548: 0x46000506
    ctx->pc = 0x2a4548u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2a454c:
    // 0x2a454c: 0xc0b9e4a
label_2a4550:
    if (ctx->pc == 0x2A4550u) {
        ctx->pc = 0x2A4550u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294959424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2A4554u;
        goto label_2a4554;
    }
    ctx->pc = 0x2A454Cu;
    SET_GPR_U32(ctx, 31, 0x2A4554u);
    ctx->pc = 0x2A4550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294959424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4554u; }
    }
    if (ctx->pc != 0x2A4554u) { return; }
    ctx->pc = 0x2A4554u;
label_2a4554:
    // 0x2a4554: 0x3c020036
    ctx->pc = 0x2a4554u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4558:
    // 0x2a4558: 0x8c42e0a0
    ctx->pc = 0x2a4558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a455c:
    // 0x2a455c: 0xe4400030
    ctx->pc = 0x2a455cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_2a4560:
    // 0x2a4560: 0xac400034
    ctx->pc = 0x2a4560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_2a4564:
    // 0x2a4564: 0xe4540038
    ctx->pc = 0x2a4564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_2a4568:
    // 0x2a4568: 0x3c020036
    ctx->pc = 0x2a4568u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a456c:
    // 0x2a456c: 0x8c43e0a0
    ctx->pc = 0x2a456cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a4570:
    // 0x2a4570: 0x8c62000c
    ctx->pc = 0x2a4570u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a4574:
    // 0x2a4574: 0x10400008
label_2a4578:
    if (ctx->pc == 0x2A4578u) {
        ctx->pc = 0x2A4578u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x2A457Cu;
        goto label_2a457c;
    }
    ctx->pc = 0x2A4574u;
    {
        const bool branch_taken_0x2a4574 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4578u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a4574) {
            ctx->pc = 0x2A4598u;
            goto label_2a4598;
        }
    }
    ctx->pc = 0x2A457Cu;
label_2a457c:
    // 0x2a457c: 0x8c42e120
    ctx->pc = 0x2a457cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959392)));
label_2a4580:
    // 0x2a4580: 0xc4400010
    ctx->pc = 0x2a4580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a4584:
    // 0x2a4584: 0xe4600050
    ctx->pc = 0x2a4584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
label_2a4588:
    // 0x2a4588: 0xc4400014
    ctx->pc = 0x2a4588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a458c:
    // 0x2a458c: 0xe4600054
    ctx->pc = 0x2a458cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
label_2a4590:
    // 0x2a4590: 0xc4400018
    ctx->pc = 0x2a4590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a4594:
    // 0x2a4594: 0xe4600058
    ctx->pc = 0x2a4594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
label_2a4598:
    // 0x2a4598: 0x3c020036
    ctx->pc = 0x2a4598u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a459c:
    // 0x2a459c: 0x8c43e0a0
    ctx->pc = 0x2a459cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a45a0:
    // 0x2a45a0: 0x8c620010
    ctx->pc = 0x2a45a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2a45a4:
    // 0x2a45a4: 0x5040003a
label_2a45a8:
    if (ctx->pc == 0x2A45A8u) {
        ctx->pc = 0x2A45A8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2A45ACu;
        goto label_2a45ac;
    }
    ctx->pc = 0x2A45A4u;
    {
        const bool branch_taken_0x2a45a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a45a4) {
            ctx->pc = 0x2A45A8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->pc = 0x2A4690u;
            goto label_2a4690;
        }
    }
    ctx->pc = 0x2A45ACu;
label_2a45ac:
    // 0x2a45ac: 0x8c650028
    ctx->pc = 0x2a45acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2a45b0:
    // 0x2a45b0: 0x9063002a
    ctx->pc = 0x2a45b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 42)));
label_2a45b4:
    // 0x2a45b4: 0x4600005
label_2a45b8:
    if (ctx->pc == 0x2A45B8u) {
        ctx->pc = 0x2A45B8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2A45BCu;
        goto label_2a45bc;
    }
    ctx->pc = 0x2A45B4u;
    {
        const bool branch_taken_0x2a45b4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A45B8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        if (branch_taken_0x2a45b4) {
            ctx->pc = 0x2A45CCu;
            goto label_2a45cc;
        }
    }
    ctx->pc = 0x2A45BCu;
label_2a45bc:
    // 0x2a45bc: 0x44830800
    ctx->pc = 0x2a45bcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_2a45c0:
    // 0x2a45c0: 0x46800860
    ctx->pc = 0x2a45c0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a45c4:
    // 0x2a45c4: 0x10000007
label_2a45c8:
    if (ctx->pc == 0x2A45C8u) {
        ctx->pc = 0x2A45CCu;
        goto label_2a45cc;
    }
    ctx->pc = 0x2A45C4u;
    {
        const bool branch_taken_0x2a45c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a45c4) {
            ctx->pc = 0x2A45E4u;
            goto label_2a45e4;
        }
    }
    ctx->pc = 0x2A45CCu;
label_2a45cc:
    // 0x2a45cc: 0x30620001
    ctx->pc = 0x2a45ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_2a45d0:
    // 0x2a45d0: 0x31842
    ctx->pc = 0x2a45d0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
label_2a45d4:
    // 0x2a45d4: 0x431025
    ctx->pc = 0x2a45d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a45d8:
    // 0x2a45d8: 0x44820800
    ctx->pc = 0x2a45d8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2a45dc:
    // 0x2a45dc: 0x46800860
    ctx->pc = 0x2a45dcu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a45e0:
    // 0x2a45e0: 0x46010840
    ctx->pc = 0x2a45e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a45e4:
    // 0x2a45e4: 0x3c013b80
    ctx->pc = 0x2a45e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
label_2a45e8:
    // 0x2a45e8: 0x34218081
    ctx->pc = 0x2a45e8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
label_2a45ec:
    // 0x2a45ec: 0x44810000
    ctx->pc = 0x2a45ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a45f0:
    // 0x2a45f0: 0x46000802
    ctx->pc = 0x2a45f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a45f4:
    // 0x2a45f4: 0xe48000d0
    ctx->pc = 0x2a45f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
label_2a45f8:
    // 0x2a45f8: 0x51202
    ctx->pc = 0x2a45f8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 8));
label_2a45fc:
    // 0x2a45fc: 0x304300ff
    ctx->pc = 0x2a45fcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
label_2a4600:
    // 0x2a4600: 0x4600005
label_2a4604:
    if (ctx->pc == 0x2A4604u) {
        ctx->pc = 0x2A4604u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2A4608u;
        goto label_2a4608;
    }
    ctx->pc = 0x2A4600u;
    {
        const bool branch_taken_0x2a4600 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A4604u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        if (branch_taken_0x2a4600) {
            ctx->pc = 0x2A4618u;
            goto label_2a4618;
        }
    }
    ctx->pc = 0x2A4608u;
label_2a4608:
    // 0x2a4608: 0x44830800
    ctx->pc = 0x2a4608u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_2a460c:
    // 0x2a460c: 0x46800860
    ctx->pc = 0x2a460cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a4610:
    // 0x2a4610: 0x10000007
label_2a4614:
    if (ctx->pc == 0x2A4614u) {
        ctx->pc = 0x2A4618u;
        goto label_2a4618;
    }
    ctx->pc = 0x2A4610u;
    {
        const bool branch_taken_0x2a4610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a4610) {
            ctx->pc = 0x2A4630u;
            goto label_2a4630;
        }
    }
    ctx->pc = 0x2A4618u;
label_2a4618:
    // 0x2a4618: 0x30620001
    ctx->pc = 0x2a4618u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_2a461c:
    // 0x2a461c: 0x31842
    ctx->pc = 0x2a461cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
label_2a4620:
    // 0x2a4620: 0x431025
    ctx->pc = 0x2a4620u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a4624:
    // 0x2a4624: 0x44820800
    ctx->pc = 0x2a4624u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2a4628:
    // 0x2a4628: 0x46800860
    ctx->pc = 0x2a4628u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a462c:
    // 0x2a462c: 0x46010840
    ctx->pc = 0x2a462cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a4630:
    // 0x2a4630: 0x3c013b80
    ctx->pc = 0x2a4630u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
label_2a4634:
    // 0x2a4634: 0x34218081
    ctx->pc = 0x2a4634u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
label_2a4638:
    // 0x2a4638: 0x44810000
    ctx->pc = 0x2a4638u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a463c:
    // 0x2a463c: 0x46000802
    ctx->pc = 0x2a463cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a4640:
    // 0x2a4640: 0xe48000d4
    ctx->pc = 0x2a4640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_2a4644:
    // 0x2a4644: 0x30a300ff
    ctx->pc = 0x2a4644u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 255));
label_2a4648:
    // 0x2a4648: 0x4600005
label_2a464c:
    if (ctx->pc == 0x2A464Cu) {
        ctx->pc = 0x2A464Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2A4650u;
        goto label_2a4650;
    }
    ctx->pc = 0x2A4648u;
    {
        const bool branch_taken_0x2a4648 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A464Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        if (branch_taken_0x2a4648) {
            ctx->pc = 0x2A4660u;
            goto label_2a4660;
        }
    }
    ctx->pc = 0x2A4650u;
label_2a4650:
    // 0x2a4650: 0x44830800
    ctx->pc = 0x2a4650u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_2a4654:
    // 0x2a4654: 0x46800860
    ctx->pc = 0x2a4654u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a4658:
    // 0x2a4658: 0x10000007
label_2a465c:
    if (ctx->pc == 0x2A465Cu) {
        ctx->pc = 0x2A4660u;
        goto label_2a4660;
    }
    ctx->pc = 0x2A4658u;
    {
        const bool branch_taken_0x2a4658 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a4658) {
            ctx->pc = 0x2A4678u;
            goto label_2a4678;
        }
    }
    ctx->pc = 0x2A4660u;
label_2a4660:
    // 0x2a4660: 0x30620001
    ctx->pc = 0x2a4660u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_2a4664:
    // 0x2a4664: 0x31842
    ctx->pc = 0x2a4664u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
label_2a4668:
    // 0x2a4668: 0x431025
    ctx->pc = 0x2a4668u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a466c:
    // 0x2a466c: 0x44820800
    ctx->pc = 0x2a466cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2a4670:
    // 0x2a4670: 0x46800860
    ctx->pc = 0x2a4670u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a4674:
    // 0x2a4674: 0x46010840
    ctx->pc = 0x2a4674u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a4678:
    // 0x2a4678: 0x3c013b80
    ctx->pc = 0x2a4678u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
label_2a467c:
    // 0x2a467c: 0x34218081
    ctx->pc = 0x2a467cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
label_2a4680:
    // 0x2a4680: 0x44810000
    ctx->pc = 0x2a4680u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a4684:
    // 0x2a4684: 0x46000802
    ctx->pc = 0x2a4684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a4688:
    // 0x2a4688: 0x10000006
label_2a468c:
    if (ctx->pc == 0x2A468Cu) {
        ctx->pc = 0x2A468Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
        ctx->pc = 0x2A4690u;
        goto label_2a4690;
    }
    ctx->pc = 0x2A4688u;
    {
        const bool branch_taken_0x2a4688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A468Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
        if (branch_taken_0x2a4688) {
            ctx->pc = 0x2A46A4u;
            goto label_2a46a4;
        }
    }
    ctx->pc = 0x2A4690u;
label_2a4690:
    // 0x2a4690: 0xac4000d0
    ctx->pc = 0x2a4690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 0));
label_2a4694:
    // 0x2a4694: 0x8e22001c
    ctx->pc = 0x2a4694u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a4698:
    // 0x2a4698: 0xac4000d4
    ctx->pc = 0x2a4698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
label_2a469c:
    // 0x2a469c: 0x8e22001c
    ctx->pc = 0x2a469cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a46a0:
    // 0x2a46a0: 0xac4000d8
    ctx->pc = 0x2a46a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
label_2a46a4:
    // 0x2a46a4: 0x3c020036
    ctx->pc = 0x2a46a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a46a8:
    // 0x2a46a8: 0x8c44e0a0
    ctx->pc = 0x2a46a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a46ac:
    // 0x2a46ac: 0x8c820014
    ctx->pc = 0x2a46acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2a46b0:
    // 0x2a46b0: 0x10400046
label_2a46b4:
    if (ctx->pc == 0x2A46B4u) {
        ctx->pc = 0x2A46B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A46B8u;
        goto label_2a46b8;
    }
    ctx->pc = 0x2A46B0u;
    {
        const bool branch_taken_0x2a46b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A46B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2a46b0) {
            ctx->pc = 0x2A47CCu;
            goto label_2a47cc;
        }
    }
    ctx->pc = 0x2A46B8u;
label_2a46b8:
    // 0x2a46b8: 0x8e23001c
    ctx->pc = 0x2a46b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a46bc:
    // 0x2a46bc: 0xac6200c4
    ctx->pc = 0x2a46bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 2));
label_2a46c0:
    // 0x2a46c0: 0x24860030
    ctx->pc = 0x2a46c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 48));
label_2a46c4:
    // 0x2a46c4: 0x8e27001c
    ctx->pc = 0x2a46c4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a46c8:
    // 0x2a46c8: 0x9083002e
    ctx->pc = 0x2a46c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2a46cc:
    // 0x2a46cc: 0x4600005
label_2a46d0:
    if (ctx->pc == 0x2A46D0u) {
        ctx->pc = 0x2A46D0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->pc = 0x2A46D4u;
        goto label_2a46d4;
    }
    ctx->pc = 0x2A46CCu;
    {
        const bool branch_taken_0x2a46cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A46D0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 44)));
        if (branch_taken_0x2a46cc) {
            ctx->pc = 0x2A46E4u;
            goto label_2a46e4;
        }
    }
    ctx->pc = 0x2A46D4u;
label_2a46d4:
    // 0x2a46d4: 0x44830800
    ctx->pc = 0x2a46d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_2a46d8:
    // 0x2a46d8: 0x46800860
    ctx->pc = 0x2a46d8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a46dc:
    // 0x2a46dc: 0x10000007
label_2a46e0:
    if (ctx->pc == 0x2A46E0u) {
        ctx->pc = 0x2A46E4u;
        goto label_2a46e4;
    }
    ctx->pc = 0x2A46DCu;
    {
        const bool branch_taken_0x2a46dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a46dc) {
            ctx->pc = 0x2A46FCu;
            goto label_2a46fc;
        }
    }
    ctx->pc = 0x2A46E4u;
label_2a46e4:
    // 0x2a46e4: 0x30620001
    ctx->pc = 0x2a46e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_2a46e8:
    // 0x2a46e8: 0x31842
    ctx->pc = 0x2a46e8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
label_2a46ec:
    // 0x2a46ec: 0x431025
    ctx->pc = 0x2a46ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a46f0:
    // 0x2a46f0: 0x44820800
    ctx->pc = 0x2a46f0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2a46f4:
    // 0x2a46f4: 0x46800860
    ctx->pc = 0x2a46f4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a46f8:
    // 0x2a46f8: 0x46010840
    ctx->pc = 0x2a46f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a46fc:
    // 0x2a46fc: 0x3c013b80
    ctx->pc = 0x2a46fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
label_2a4700:
    // 0x2a4700: 0x34218081
    ctx->pc = 0x2a4700u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
label_2a4704:
    // 0x2a4704: 0x44810000
    ctx->pc = 0x2a4704u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a4708:
    // 0x2a4708: 0x46000802
    ctx->pc = 0x2a4708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a470c:
    // 0x2a470c: 0xe4e000f0
    ctx->pc = 0x2a470cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 240), bits); }
label_2a4710:
    // 0x2a4710: 0x51202
    ctx->pc = 0x2a4710u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 8));
label_2a4714:
    // 0x2a4714: 0x304300ff
    ctx->pc = 0x2a4714u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
label_2a4718:
    // 0x2a4718: 0x4600005
label_2a471c:
    if (ctx->pc == 0x2A471Cu) {
        ctx->pc = 0x2A471Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2A4720u;
        goto label_2a4720;
    }
    ctx->pc = 0x2A4718u;
    {
        const bool branch_taken_0x2a4718 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A471Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        if (branch_taken_0x2a4718) {
            ctx->pc = 0x2A4730u;
            goto label_2a4730;
        }
    }
    ctx->pc = 0x2A4720u;
label_2a4720:
    // 0x2a4720: 0x44830800
    ctx->pc = 0x2a4720u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_2a4724:
    // 0x2a4724: 0x46800860
    ctx->pc = 0x2a4724u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a4728:
    // 0x2a4728: 0x10000007
label_2a472c:
    if (ctx->pc == 0x2A472Cu) {
        ctx->pc = 0x2A4730u;
        goto label_2a4730;
    }
    ctx->pc = 0x2A4728u;
    {
        const bool branch_taken_0x2a4728 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a4728) {
            ctx->pc = 0x2A4748u;
            goto label_2a4748;
        }
    }
    ctx->pc = 0x2A4730u;
label_2a4730:
    // 0x2a4730: 0x30620001
    ctx->pc = 0x2a4730u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_2a4734:
    // 0x2a4734: 0x31842
    ctx->pc = 0x2a4734u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
label_2a4738:
    // 0x2a4738: 0x431025
    ctx->pc = 0x2a4738u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a473c:
    // 0x2a473c: 0x44820800
    ctx->pc = 0x2a473cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2a4740:
    // 0x2a4740: 0x46800860
    ctx->pc = 0x2a4740u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a4744:
    // 0x2a4744: 0x46010840
    ctx->pc = 0x2a4744u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a4748:
    // 0x2a4748: 0x3c013b80
    ctx->pc = 0x2a4748u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
label_2a474c:
    // 0x2a474c: 0x34218081
    ctx->pc = 0x2a474cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
label_2a4750:
    // 0x2a4750: 0x44810000
    ctx->pc = 0x2a4750u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a4754:
    // 0x2a4754: 0x46000802
    ctx->pc = 0x2a4754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a4758:
    // 0x2a4758: 0xe48000f4
    ctx->pc = 0x2a4758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
label_2a475c:
    // 0x2a475c: 0x30a300ff
    ctx->pc = 0x2a475cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 255));
label_2a4760:
    // 0x2a4760: 0x4600005
label_2a4764:
    if (ctx->pc == 0x2A4764u) {
        ctx->pc = 0x2A4764u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2A4768u;
        goto label_2a4768;
    }
    ctx->pc = 0x2A4760u;
    {
        const bool branch_taken_0x2a4760 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A4764u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        if (branch_taken_0x2a4760) {
            ctx->pc = 0x2A4778u;
            goto label_2a4778;
        }
    }
    ctx->pc = 0x2A4768u;
label_2a4768:
    // 0x2a4768: 0x44830800
    ctx->pc = 0x2a4768u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_2a476c:
    // 0x2a476c: 0x46800860
    ctx->pc = 0x2a476cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a4770:
    // 0x2a4770: 0x10000007
label_2a4774:
    if (ctx->pc == 0x2A4774u) {
        ctx->pc = 0x2A4778u;
        goto label_2a4778;
    }
    ctx->pc = 0x2A4770u;
    {
        const bool branch_taken_0x2a4770 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a4770) {
            ctx->pc = 0x2A4790u;
            goto label_2a4790;
        }
    }
    ctx->pc = 0x2A4778u;
label_2a4778:
    // 0x2a4778: 0x30620001
    ctx->pc = 0x2a4778u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_2a477c:
    // 0x2a477c: 0x31842
    ctx->pc = 0x2a477cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
label_2a4780:
    // 0x2a4780: 0x431025
    ctx->pc = 0x2a4780u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a4784:
    // 0x2a4784: 0x44820800
    ctx->pc = 0x2a4784u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2a4788:
    // 0x2a4788: 0x46800860
    ctx->pc = 0x2a4788u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a478c:
    // 0x2a478c: 0x46010840
    ctx->pc = 0x2a478cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a4790:
    // 0x2a4790: 0x3c013b80
    ctx->pc = 0x2a4790u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
label_2a4794:
    // 0x2a4794: 0x34218081
    ctx->pc = 0x2a4794u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
label_2a4798:
    // 0x2a4798: 0x44810000
    ctx->pc = 0x2a4798u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a479c:
    // 0x2a479c: 0x46000802
    ctx->pc = 0x2a479cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a47a0:
    // 0x2a47a0: 0xe48000f8
    ctx->pc = 0x2a47a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
label_2a47a4:
    // 0x2a47a4: 0x8e22001c
    ctx->pc = 0x2a47a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a47a8:
    // 0x2a47a8: 0xc4c00000
    ctx->pc = 0x2a47a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a47ac:
    // 0x2a47ac: 0xe4400100
    ctx->pc = 0x2a47acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
label_2a47b0:
    // 0x2a47b0: 0x8e22001c
    ctx->pc = 0x2a47b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a47b4:
    // 0x2a47b4: 0xc4c00004
    ctx->pc = 0x2a47b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a47b8:
    // 0x2a47b8: 0xe4400104
    ctx->pc = 0x2a47b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_2a47bc:
    // 0x2a47bc: 0x8e22001c
    ctx->pc = 0x2a47bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a47c0:
    // 0x2a47c0: 0xc4c00008
    ctx->pc = 0x2a47c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a47c4:
    // 0x2a47c4: 0x10000009
label_2a47c8:
    if (ctx->pc == 0x2A47C8u) {
        ctx->pc = 0x2A47C8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
        ctx->pc = 0x2A47CCu;
        goto label_2a47cc;
    }
    ctx->pc = 0x2A47C4u;
    {
        const bool branch_taken_0x2a47c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A47C8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
        if (branch_taken_0x2a47c4) {
            ctx->pc = 0x2A47ECu;
            goto label_2a47ec;
        }
    }
    ctx->pc = 0x2A47CCu;
label_2a47cc:
    // 0x2a47cc: 0x8e22001c
    ctx->pc = 0x2a47ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a47d0:
    // 0x2a47d0: 0xac4000c4
    ctx->pc = 0x2a47d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 0));
label_2a47d4:
    // 0x2a47d4: 0x8e22001c
    ctx->pc = 0x2a47d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a47d8:
    // 0x2a47d8: 0xac4000f0
    ctx->pc = 0x2a47d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
label_2a47dc:
    // 0x2a47dc: 0x8e22001c
    ctx->pc = 0x2a47dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a47e0:
    // 0x2a47e0: 0xac4000f4
    ctx->pc = 0x2a47e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 0));
label_2a47e4:
    // 0x2a47e4: 0x8e22001c
    ctx->pc = 0x2a47e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a47e8:
    // 0x2a47e8: 0xac4000f8
    ctx->pc = 0x2a47e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 0));
label_2a47ec:
    // 0x2a47ec: 0x3c020036
    ctx->pc = 0x2a47ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a47f0:
    // 0x2a47f0: 0x8c43e0a0
    ctx->pc = 0x2a47f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a47f4:
    // 0x2a47f4: 0x8c620024
    ctx->pc = 0x2a47f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2a47f8:
    // 0x2a47f8: 0x10400009
label_2a47fc:
    if (ctx->pc == 0x2A47FCu) {
        ctx->pc = 0x2A47FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x2A4800u;
        goto label_2a4800;
    }
    ctx->pc = 0x2A47F8u;
    {
        const bool branch_taken_0x2a47f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A47FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a47f8) {
            ctx->pc = 0x2A4820u;
            goto label_2a4820;
        }
    }
    ctx->pc = 0x2A4800u;
label_2a4800:
    // 0x2a4800: 0xac600024
    ctx->pc = 0x2a4800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_2a4804:
    // 0x2a4804: 0xac600020
    ctx->pc = 0x2a4804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_2a4808:
    // 0x2a4808: 0xc0abade
label_2a480c:
    if (ctx->pc == 0x2A480Cu) {
        ctx->pc = 0x2A480Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x2A4810u;
        goto label_2a4810;
    }
    ctx->pc = 0x2A4808u;
    SET_GPR_U32(ctx, 31, 0x2A4810u);
    ctx->pc = 0x2A480Cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    ctx->pc = 0x2AEB78u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPosLightDeleteAll_0x2aeb78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4810u; }
    }
    if (ctx->pc != 0x2A4810u) { return; }
    ctx->pc = 0x2A4810u;
label_2a4810:
    // 0x2a4810: 0x3c04003b
    ctx->pc = 0x2a4810u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2a4814:
    // 0x2a4814: 0xc0b4a34
label_2a4818:
    if (ctx->pc == 0x2A4818u) {
        ctx->pc = 0x2A4818u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961288));
        ctx->pc = 0x2A481Cu;
        goto label_2a481c;
    }
    ctx->pc = 0x2A4814u;
    SET_GPR_U32(ctx, 31, 0x2A481Cu);
    ctx->pc = 0x2A4818u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961288));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A481Cu; }
    }
    if (ctx->pc != 0x2A481Cu) { return; }
    ctx->pc = 0x2A481Cu;
label_2a481c:
    // 0x2a481c: 0x3c020036
    ctx->pc = 0x2a481cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4820:
    // 0x2a4820: 0x8c44e0a0
    ctx->pc = 0x2a4820u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a4824:
    // 0x2a4824: 0x8c830020
    ctx->pc = 0x2a4824u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2a4828:
    // 0x2a4828: 0x10600018
label_2a482c:
    if (ctx->pc == 0x2A482Cu) {
        ctx->pc = 0x2A482Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x2A4830u;
        goto label_2a4830;
    }
    ctx->pc = 0x2A4828u;
    {
        const bool branch_taken_0x2a4828 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A482Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a4828) {
            ctx->pc = 0x2A488Cu;
            goto label_2a488c;
        }
    }
    ctx->pc = 0x2A4830u;
label_2a4830:
    // 0x2a4830: 0x3c02ffff
    ctx->pc = 0x2a4830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_2a4834:
    // 0x2a4834: 0x3442ffff
    ctx->pc = 0x2a4834u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_2a4838:
    // 0x2a4838: 0x50620001
label_2a483c:
    if (ctx->pc == 0x2A483Cu) {
        ctx->pc = 0x2A483Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x2A4840u;
        goto label_2a4840;
    }
    ctx->pc = 0x2A4838u;
    {
        const bool branch_taken_0x2a4838 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2a4838) {
            ctx->pc = 0x2A483Cu;
            WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
            ctx->pc = 0x2A4840u;
            goto label_2a4840;
        }
    }
    ctx->pc = 0x2A4840u;
label_2a4840:
    // 0x2a4840: 0x3c100036
    ctx->pc = 0x2a4840u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
label_2a4844:
    // 0x2a4844: 0x8e02e0a0
    ctx->pc = 0x2a4844u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294959264)));
label_2a4848:
    // 0x2a4848: 0xc0abb18
label_2a484c:
    if (ctx->pc == 0x2A484Cu) {
        ctx->pc = 0x2A484Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->pc = 0x2A4850u;
        goto label_2a4850;
    }
    ctx->pc = 0x2A4848u;
    SET_GPR_U32(ctx, 31, 0x2A4850u);
    ctx->pc = 0x2A484Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->pc = 0x2AEC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPosLightDelete_0x2aec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4850u; }
    }
    if (ctx->pc != 0x2A4850u) { return; }
    ctx->pc = 0x2A4850u;
label_2a4850:
    // 0x2a4850: 0x10400004
label_2a4854:
    if (ctx->pc == 0x2A4854u) {
        ctx->pc = 0x2A4854u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294959264)));
        ctx->pc = 0x2A4858u;
        goto label_2a4858;
    }
    ctx->pc = 0x2A4850u;
    {
        const bool branch_taken_0x2a4850 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4854u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294959264)));
        if (branch_taken_0x2a4850) {
            ctx->pc = 0x2A4864u;
            goto label_2a4864;
        }
    }
    ctx->pc = 0x2A4858u;
label_2a4858:
    // 0x2a4858: 0x3c02003b
    ctx->pc = 0x2a4858u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_2a485c:
    // 0x2a485c: 0x10000003
label_2a4860:
    if (ctx->pc == 0x2A4860u) {
        ctx->pc = 0x2A4860u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294961344));
        ctx->pc = 0x2A4864u;
        goto label_2a4864;
    }
    ctx->pc = 0x2A485Cu;
    {
        const bool branch_taken_0x2a485c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4860u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294961344));
        if (branch_taken_0x2a485c) {
            ctx->pc = 0x2A486Cu;
            goto label_2a486c;
        }
    }
    ctx->pc = 0x2A4864u;
label_2a4864:
    // 0x2a4864: 0x3c02003b
    ctx->pc = 0x2a4864u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_2a4868:
    // 0x2a4868: 0x2446e8d8
    ctx->pc = 0x2a4868u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294961368));
label_2a486c:
    // 0x2a486c: 0x3c04003b
    ctx->pc = 0x2a486cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2a4870:
    // 0x2a4870: 0x2484e8a0
    ctx->pc = 0x2a4870u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961312));
label_2a4874:
    // 0x2a4874: 0xc0b4a34
label_2a4878:
    if (ctx->pc == 0x2A4878u) {
        ctx->pc = 0x2A4878u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->pc = 0x2A487Cu;
        goto label_2a487c;
    }
    ctx->pc = 0x2A4874u;
    SET_GPR_U32(ctx, 31, 0x2A487Cu);
    ctx->pc = 0x2A4878u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A487Cu; }
    }
    if (ctx->pc != 0x2A487Cu) { return; }
    ctx->pc = 0x2A487Cu;
label_2a487c:
    // 0x2a487c: 0x3c020036
    ctx->pc = 0x2a487cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4880:
    // 0x2a4880: 0x8c42e0a0
    ctx->pc = 0x2a4880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a4884:
    // 0x2a4884: 0xac400020
    ctx->pc = 0x2a4884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_2a4888:
    // 0x2a4888: 0x3c020036
    ctx->pc = 0x2a4888u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a488c:
    // 0x2a488c: 0x8c43e0a0
    ctx->pc = 0x2a488cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a4890:
    // 0x2a4890: 0x8c620018
    ctx->pc = 0x2a4890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2a4894:
    // 0x2a4894: 0x10400046
label_2a4898:
    if (ctx->pc == 0x2A4898u) {
        ctx->pc = 0x2A4898u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x2A489Cu;
        goto label_2a489c;
    }
    ctx->pc = 0x2A4894u;
    {
        const bool branch_taken_0x2a4894 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4898u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a4894) {
            ctx->pc = 0x2A49B0u;
            goto label_2a49b0;
        }
    }
    ctx->pc = 0x2A489Cu;
label_2a489c:
    // 0x2a489c: 0x8c650040
    ctx->pc = 0x2a489cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2a48a0:
    // 0x2a48a0: 0x90630042
    ctx->pc = 0x2a48a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 66)));
label_2a48a4:
    // 0x2a48a4: 0x4600005
label_2a48a8:
    if (ctx->pc == 0x2A48A8u) {
        ctx->pc = 0x2A48A8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2A48ACu;
        goto label_2a48ac;
    }
    ctx->pc = 0x2A48A4u;
    {
        const bool branch_taken_0x2a48a4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A48A8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2a48a4) {
            ctx->pc = 0x2A48BCu;
            goto label_2a48bc;
        }
    }
    ctx->pc = 0x2A48ACu;
label_2a48ac:
    // 0x2a48ac: 0x44830800
    ctx->pc = 0x2a48acu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_2a48b0:
    // 0x2a48b0: 0x46800860
    ctx->pc = 0x2a48b0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a48b4:
    // 0x2a48b4: 0x10000006
label_2a48b8:
    if (ctx->pc == 0x2A48B8u) {
        ctx->pc = 0x2A48BCu;
        goto label_2a48bc;
    }
    ctx->pc = 0x2A48B4u;
    {
        const bool branch_taken_0x2a48b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a48b4) {
            ctx->pc = 0x2A48D0u;
            goto label_2a48d0;
        }
    }
    ctx->pc = 0x2A48BCu;
label_2a48bc:
    // 0x2a48bc: 0x31842
    ctx->pc = 0x2a48bcu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
label_2a48c0:
    // 0x2a48c0: 0x431025
    ctx->pc = 0x2a48c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a48c4:
    // 0x2a48c4: 0x44820800
    ctx->pc = 0x2a48c4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2a48c8:
    // 0x2a48c8: 0x46800860
    ctx->pc = 0x2a48c8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a48cc:
    // 0x2a48cc: 0x46010840
    ctx->pc = 0x2a48ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a48d0:
    // 0x2a48d0: 0x3c013b80
    ctx->pc = 0x2a48d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
label_2a48d4:
    // 0x2a48d4: 0x34218081
    ctx->pc = 0x2a48d4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
label_2a48d8:
    // 0x2a48d8: 0x44810000
    ctx->pc = 0x2a48d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a48dc:
    // 0x2a48dc: 0x46000802
    ctx->pc = 0x2a48dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a48e0:
    // 0x2a48e0: 0x51202
    ctx->pc = 0x2a48e0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 8));
label_2a48e4:
    // 0x2a48e4: 0x304300ff
    ctx->pc = 0x2a48e4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
label_2a48e8:
    // 0x2a48e8: 0x4600005
label_2a48ec:
    if (ctx->pc == 0x2A48ECu) {
        ctx->pc = 0x2A48ECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x2A48F0u;
        goto label_2a48f0;
    }
    ctx->pc = 0x2A48E8u;
    {
        const bool branch_taken_0x2a48e8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A48ECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        if (branch_taken_0x2a48e8) {
            ctx->pc = 0x2A4900u;
            goto label_2a4900;
        }
    }
    ctx->pc = 0x2A48F0u;
label_2a48f0:
    // 0x2a48f0: 0x44830800
    ctx->pc = 0x2a48f0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_2a48f4:
    // 0x2a48f4: 0x46800860
    ctx->pc = 0x2a48f4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a48f8:
    // 0x2a48f8: 0x10000007
label_2a48fc:
    if (ctx->pc == 0x2A48FCu) {
        ctx->pc = 0x2A4900u;
        goto label_2a4900;
    }
    ctx->pc = 0x2A48F8u;
    {
        const bool branch_taken_0x2a48f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a48f8) {
            ctx->pc = 0x2A4918u;
            goto label_2a4918;
        }
    }
    ctx->pc = 0x2A4900u;
label_2a4900:
    // 0x2a4900: 0x30620001
    ctx->pc = 0x2a4900u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_2a4904:
    // 0x2a4904: 0x31842
    ctx->pc = 0x2a4904u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
label_2a4908:
    // 0x2a4908: 0x431025
    ctx->pc = 0x2a4908u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a490c:
    // 0x2a490c: 0x44820800
    ctx->pc = 0x2a490cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2a4910:
    // 0x2a4910: 0x46800860
    ctx->pc = 0x2a4910u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a4914:
    // 0x2a4914: 0x46010840
    ctx->pc = 0x2a4914u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a4918:
    // 0x2a4918: 0x3c013b80
    ctx->pc = 0x2a4918u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
label_2a491c:
    // 0x2a491c: 0x34218081
    ctx->pc = 0x2a491cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
label_2a4920:
    // 0x2a4920: 0x44810000
    ctx->pc = 0x2a4920u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a4924:
    // 0x2a4924: 0x46000802
    ctx->pc = 0x2a4924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a4928:
    // 0x2a4928: 0x30a300ff
    ctx->pc = 0x2a4928u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 255));
label_2a492c:
    // 0x2a492c: 0x4600005
label_2a4930:
    if (ctx->pc == 0x2A4930u) {
        ctx->pc = 0x2A4930u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->pc = 0x2A4934u;
        goto label_2a4934;
    }
    ctx->pc = 0x2A492Cu;
    {
        const bool branch_taken_0x2a492c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A4930u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        if (branch_taken_0x2a492c) {
            ctx->pc = 0x2A4944u;
            goto label_2a4944;
        }
    }
    ctx->pc = 0x2A4934u;
label_2a4934:
    // 0x2a4934: 0x44830800
    ctx->pc = 0x2a4934u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_2a4938:
    // 0x2a4938: 0x46800860
    ctx->pc = 0x2a4938u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a493c:
    // 0x2a493c: 0x10000007
label_2a4940:
    if (ctx->pc == 0x2A4940u) {
        ctx->pc = 0x2A4944u;
        goto label_2a4944;
    }
    ctx->pc = 0x2A493Cu;
    {
        const bool branch_taken_0x2a493c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a493c) {
            ctx->pc = 0x2A495Cu;
            goto label_2a495c;
        }
    }
    ctx->pc = 0x2A4944u;
label_2a4944:
    // 0x2a4944: 0x30620001
    ctx->pc = 0x2a4944u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_2a4948:
    // 0x2a4948: 0x31842
    ctx->pc = 0x2a4948u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
label_2a494c:
    // 0x2a494c: 0x431025
    ctx->pc = 0x2a494cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a4950:
    // 0x2a4950: 0x44820800
    ctx->pc = 0x2a4950u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2a4954:
    // 0x2a4954: 0x46800860
    ctx->pc = 0x2a4954u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a4958:
    // 0x2a4958: 0x46010840
    ctx->pc = 0x2a4958u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a495c:
    // 0x2a495c: 0x3c013b80
    ctx->pc = 0x2a495cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
label_2a4960:
    // 0x2a4960: 0x34218081
    ctx->pc = 0x2a4960u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
label_2a4964:
    // 0x2a4964: 0x44810000
    ctx->pc = 0x2a4964u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a4968:
    // 0x2a4968: 0x46000802
    ctx->pc = 0x2a4968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a496c:
    // 0x2a496c: 0xe7a00008
    ctx->pc = 0x2a496cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2a4970:
    // 0x2a4970: 0x3c100036
    ctx->pc = 0x2a4970u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
label_2a4974:
    // 0x2a4974: 0x8e02e0a0
    ctx->pc = 0x2a4974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294959264)));
label_2a4978:
    // 0x2a4978: 0x24440050
    ctx->pc = 0x2a4978u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
label_2a497c:
    // 0x2a497c: 0x3a0282d
    ctx->pc = 0x2a497cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a4980:
    // 0x2a4980: 0xc44c0060
    ctx->pc = 0x2a4980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a4984:
    // 0x2a4984: 0xc0abb54
label_2a4988:
    if (ctx->pc == 0x2A4988u) {
        ctx->pc = 0x2A4988u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x2A498Cu;
        goto label_2a498c;
    }
    ctx->pc = 0x2A4984u;
    SET_GPR_U32(ctx, 31, 0x2A498Cu);
    ctx->pc = 0x2A4988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2AED50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPosLightNew_0x2aed50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A498Cu; }
    }
    if (ctx->pc != 0x2A498Cu) { return; }
    ctx->pc = 0x2A498Cu;
label_2a498c:
    // 0x2a498c: 0x40882d
    ctx->pc = 0x2a498cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4990:
    // 0x2a4990: 0x3c04003b
    ctx->pc = 0x2a4990u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2a4994:
    // 0x2a4994: 0x2484e8e8
    ctx->pc = 0x2a4994u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961384));
label_2a4998:
    // 0x2a4998: 0xc0b4a34
label_2a499c:
    if (ctx->pc == 0x2A499Cu) {
        ctx->pc = 0x2A499Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A49A0u;
        goto label_2a49a0;
    }
    ctx->pc = 0x2A4998u;
    SET_GPR_U32(ctx, 31, 0x2A49A0u);
    ctx->pc = 0x2A499Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A49A0u; }
    }
    if (ctx->pc != 0x2A49A0u) { return; }
    ctx->pc = 0x2A49A0u;
label_2a49a0:
    // 0x2a49a0: 0x8e02e0a0
    ctx->pc = 0x2a49a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294959264)));
label_2a49a4:
    // 0x2a49a4: 0xac51001c
    ctx->pc = 0x2a49a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 17));
label_2a49a8:
    // 0x2a49a8: 0xac400018
    ctx->pc = 0x2a49a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_2a49ac:
    // 0x2a49ac: 0x3c020036
    ctx->pc = 0x2a49acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a49b0:
    // 0x2a49b0: 0x8c43e0a0
    ctx->pc = 0x2a49b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959264)));
label_2a49b4:
    // 0x2a49b4: 0x8c62001c
    ctx->pc = 0x2a49b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2a49b8:
    // 0x2a49b8: 0x10400042
label_2a49bc:
    if (ctx->pc == 0x2A49BCu) {
        ctx->pc = 0x2A49BCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2A49C0u;
        goto label_2a49c0;
    }
    ctx->pc = 0x2A49B8u;
    {
        const bool branch_taken_0x2a49b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A49BCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2a49b8) {
            ctx->pc = 0x2A4AC4u;
            goto label_2a4ac4;
        }
    }
    ctx->pc = 0x2A49C0u;
label_2a49c0:
    // 0x2a49c0: 0x8c650040
    ctx->pc = 0x2a49c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2a49c4:
    // 0x2a49c4: 0x90630042
    ctx->pc = 0x2a49c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 66)));
label_2a49c8:
    // 0x2a49c8: 0x4600005
label_2a49cc:
    if (ctx->pc == 0x2A49CCu) {
        ctx->pc = 0x2A49CCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2A49D0u;
        goto label_2a49d0;
    }
    ctx->pc = 0x2A49C8u;
    {
        const bool branch_taken_0x2a49c8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A49CCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2a49c8) {
            ctx->pc = 0x2A49E0u;
            goto label_2a49e0;
        }
    }
    ctx->pc = 0x2A49D0u;
label_2a49d0:
    // 0x2a49d0: 0x44830800
    ctx->pc = 0x2a49d0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_2a49d4:
    // 0x2a49d4: 0x46800860
    ctx->pc = 0x2a49d4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a49d8:
    // 0x2a49d8: 0x10000006
label_2a49dc:
    if (ctx->pc == 0x2A49DCu) {
        ctx->pc = 0x2A49E0u;
        goto label_2a49e0;
    }
    ctx->pc = 0x2A49D8u;
    {
        const bool branch_taken_0x2a49d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a49d8) {
            ctx->pc = 0x2A49F4u;
            goto label_2a49f4;
        }
    }
    ctx->pc = 0x2A49E0u;
label_2a49e0:
    // 0x2a49e0: 0x31842
    ctx->pc = 0x2a49e0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
label_2a49e4:
    // 0x2a49e4: 0x431025
    ctx->pc = 0x2a49e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a49e8:
    // 0x2a49e8: 0x44820800
    ctx->pc = 0x2a49e8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2a49ec:
    // 0x2a49ec: 0x46800860
    ctx->pc = 0x2a49ecu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a49f0:
    // 0x2a49f0: 0x46010840
    ctx->pc = 0x2a49f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a49f4:
    // 0x2a49f4: 0x3c013b80
    ctx->pc = 0x2a49f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
label_2a49f8:
    // 0x2a49f8: 0x34218081
    ctx->pc = 0x2a49f8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
label_2a49fc:
    // 0x2a49fc: 0x44810000
    ctx->pc = 0x2a49fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a4a00:
    // 0x2a4a00: 0x46000802
    ctx->pc = 0x2a4a00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a4a04:
    // 0x2a4a04: 0x51202
    ctx->pc = 0x2a4a04u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 8));
label_2a4a08:
    // 0x2a4a08: 0x304300ff
    ctx->pc = 0x2a4a08u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
label_2a4a0c:
    // 0x2a4a0c: 0x4600005
label_2a4a10:
    if (ctx->pc == 0x2A4A10u) {
        ctx->pc = 0x2A4A10u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x2A4A14u;
        goto label_2a4a14;
    }
    ctx->pc = 0x2A4A0Cu;
    {
        const bool branch_taken_0x2a4a0c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A4A10u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        if (branch_taken_0x2a4a0c) {
            ctx->pc = 0x2A4A24u;
            goto label_2a4a24;
        }
    }
    ctx->pc = 0x2A4A14u;
label_2a4a14:
    // 0x2a4a14: 0x44830800
    ctx->pc = 0x2a4a14u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_2a4a18:
    // 0x2a4a18: 0x46800860
    ctx->pc = 0x2a4a18u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a4a1c:
    // 0x2a4a1c: 0x10000007
label_2a4a20:
    if (ctx->pc == 0x2A4A20u) {
        ctx->pc = 0x2A4A24u;
        goto label_2a4a24;
    }
    ctx->pc = 0x2A4A1Cu;
    {
        const bool branch_taken_0x2a4a1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a4a1c) {
            ctx->pc = 0x2A4A3Cu;
            goto label_2a4a3c;
        }
    }
    ctx->pc = 0x2A4A24u;
label_2a4a24:
    // 0x2a4a24: 0x30620001
    ctx->pc = 0x2a4a24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_2a4a28:
    // 0x2a4a28: 0x31842
    ctx->pc = 0x2a4a28u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
label_2a4a2c:
    // 0x2a4a2c: 0x431025
    ctx->pc = 0x2a4a2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a4a30:
    // 0x2a4a30: 0x44820800
    ctx->pc = 0x2a4a30u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2a4a34:
    // 0x2a4a34: 0x46800860
    ctx->pc = 0x2a4a34u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a4a38:
    // 0x2a4a38: 0x46010840
    ctx->pc = 0x2a4a38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a4a3c:
    // 0x2a4a3c: 0x3c013b80
    ctx->pc = 0x2a4a3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
label_2a4a40:
    // 0x2a4a40: 0x34218081
    ctx->pc = 0x2a4a40u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
label_2a4a44:
    // 0x2a4a44: 0x44810000
    ctx->pc = 0x2a4a44u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a4a48:
    // 0x2a4a48: 0x46000802
    ctx->pc = 0x2a4a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a4a4c:
    // 0x2a4a4c: 0x30a300ff
    ctx->pc = 0x2a4a4cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 255));
label_2a4a50:
    // 0x2a4a50: 0x4600005
label_2a4a54:
    if (ctx->pc == 0x2A4A54u) {
        ctx->pc = 0x2A4A54u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->pc = 0x2A4A58u;
        goto label_2a4a58;
    }
    ctx->pc = 0x2A4A50u;
    {
        const bool branch_taken_0x2a4a50 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A4A54u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        if (branch_taken_0x2a4a50) {
            ctx->pc = 0x2A4A68u;
            goto label_2a4a68;
        }
    }
    ctx->pc = 0x2A4A58u;
label_2a4a58:
    // 0x2a4a58: 0x44830800
    ctx->pc = 0x2a4a58u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_2a4a5c:
    // 0x2a4a5c: 0x46800860
    ctx->pc = 0x2a4a5cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a4a60:
    // 0x2a4a60: 0x10000007
label_2a4a64:
    if (ctx->pc == 0x2A4A64u) {
        ctx->pc = 0x2A4A68u;
        goto label_2a4a68;
    }
    ctx->pc = 0x2A4A60u;
    {
        const bool branch_taken_0x2a4a60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a4a60) {
            ctx->pc = 0x2A4A80u;
            goto label_2a4a80;
        }
    }
    ctx->pc = 0x2A4A68u;
label_2a4a68:
    // 0x2a4a68: 0x30620001
    ctx->pc = 0x2a4a68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_2a4a6c:
    // 0x2a4a6c: 0x31842
    ctx->pc = 0x2a4a6cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
label_2a4a70:
    // 0x2a4a70: 0x431025
    ctx->pc = 0x2a4a70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a4a74:
    // 0x2a4a74: 0x44820800
    ctx->pc = 0x2a4a74u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2a4a78:
    // 0x2a4a78: 0x46800860
    ctx->pc = 0x2a4a78u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2a4a7c:
    // 0x2a4a7c: 0x46010840
    ctx->pc = 0x2a4a7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a4a80:
    // 0x2a4a80: 0x3c013b80
    ctx->pc = 0x2a4a80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
label_2a4a84:
    // 0x2a4a84: 0x34218081
    ctx->pc = 0x2a4a84u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
label_2a4a88:
    // 0x2a4a88: 0x44810000
    ctx->pc = 0x2a4a88u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2a4a8c:
    // 0x2a4a8c: 0x46000802
    ctx->pc = 0x2a4a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a4a90:
    // 0x2a4a90: 0xe7a00008
    ctx->pc = 0x2a4a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2a4a94:
    // 0x2a4a94: 0x3c100036
    ctx->pc = 0x2a4a94u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
label_2a4a98:
    // 0x2a4a98: 0x8e02e0a0
    ctx->pc = 0x2a4a98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294959264)));
label_2a4a9c:
    // 0x2a4a9c: 0x8c44001c
    ctx->pc = 0x2a4a9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2a4aa0:
    // 0x2a4aa0: 0x24450050
    ctx->pc = 0x2a4aa0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 80));
label_2a4aa4:
    // 0x2a4aa4: 0x3a0302d
    ctx->pc = 0x2a4aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a4aa8:
    // 0x2a4aa8: 0xc44c0060
    ctx->pc = 0x2a4aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a4aac:
    // 0x2a4aac: 0xc0abb98
label_2a4ab0:
    if (ctx->pc == 0x2A4AB0u) {
        ctx->pc = 0x2A4AB0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x2A4AB4u;
        goto label_2a4ab4;
    }
    ctx->pc = 0x2A4AACu;
    SET_GPR_U32(ctx, 31, 0x2A4AB4u);
    ctx->pc = 0x2A4AB0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2AEE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPosLightModify_0x2aee60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4AB4u; }
    }
    if (ctx->pc != 0x2A4AB4u) { return; }
    ctx->pc = 0x2A4AB4u;
label_2a4ab4:
    // 0x2a4ab4: 0x10400002
label_2a4ab8:
    if (ctx->pc == 0x2A4AB8u) {
        ctx->pc = 0x2A4AB8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294959264)));
        ctx->pc = 0x2A4ABCu;
        goto label_2a4abc;
    }
    ctx->pc = 0x2A4AB4u;
    {
        const bool branch_taken_0x2a4ab4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4AB8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294959264)));
        if (branch_taken_0x2a4ab4) {
            ctx->pc = 0x2A4AC0u;
            goto label_2a4ac0;
        }
    }
    ctx->pc = 0x2A4ABCu;
label_2a4abc:
    // 0x2a4abc: 0xac40001c
    ctx->pc = 0x2a4abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_2a4ac0:
    // 0x2a4ac0: 0xdfbf0030
    ctx->pc = 0x2a4ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a4ac4:
    // 0x2a4ac4: 0xdfb10020
    ctx->pc = 0x2a4ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a4ac8:
    // 0x2a4ac8: 0xdfb00010
    ctx->pc = 0x2a4ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a4acc:
    // 0x2a4acc: 0xc7b40040
    ctx->pc = 0x2a4accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a4ad0:
    // 0x2a4ad0: 0x3e00008
label_2a4ad4:
    if (ctx->pc == 0x2A4AD4u) {
        ctx->pc = 0x2A4AD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2A4AD8u;
        goto label_fallthrough_0x2a4ad0;
    }
    ctx->pc = 0x2A4AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4AD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A4130u: goto label_2a4130;
            case 0x2A4134u: goto label_2a4134;
            case 0x2A4138u: goto label_2a4138;
            case 0x2A413Cu: goto label_2a413c;
            case 0x2A4140u: goto label_2a4140;
            case 0x2A4144u: goto label_2a4144;
            case 0x2A4148u: goto label_2a4148;
            case 0x2A414Cu: goto label_2a414c;
            case 0x2A4150u: goto label_2a4150;
            case 0x2A4154u: goto label_2a4154;
            case 0x2A4158u: goto label_2a4158;
            case 0x2A415Cu: goto label_2a415c;
            case 0x2A4160u: goto label_2a4160;
            case 0x2A4164u: goto label_2a4164;
            case 0x2A4168u: goto label_2a4168;
            case 0x2A416Cu: goto label_2a416c;
            case 0x2A4170u: goto label_2a4170;
            case 0x2A4174u: goto label_2a4174;
            case 0x2A4178u: goto label_2a4178;
            case 0x2A417Cu: goto label_2a417c;
            case 0x2A4180u: goto label_2a4180;
            case 0x2A4184u: goto label_2a4184;
            case 0x2A4188u: goto label_2a4188;
            case 0x2A418Cu: goto label_2a418c;
            case 0x2A4190u: goto label_2a4190;
            case 0x2A4194u: goto label_2a4194;
            case 0x2A4198u: goto label_2a4198;
            case 0x2A419Cu: goto label_2a419c;
            case 0x2A41A0u: goto label_2a41a0;
            case 0x2A41A4u: goto label_2a41a4;
            case 0x2A41A8u: goto label_2a41a8;
            case 0x2A41ACu: goto label_2a41ac;
            case 0x2A41B0u: goto label_2a41b0;
            case 0x2A41B4u: goto label_2a41b4;
            case 0x2A41B8u: goto label_2a41b8;
            case 0x2A41BCu: goto label_2a41bc;
            case 0x2A41C0u: goto label_2a41c0;
            case 0x2A41C4u: goto label_2a41c4;
            case 0x2A41C8u: goto label_2a41c8;
            case 0x2A41CCu: goto label_2a41cc;
            case 0x2A41D0u: goto label_2a41d0;
            case 0x2A41D4u: goto label_2a41d4;
            case 0x2A41D8u: goto label_2a41d8;
            case 0x2A41DCu: goto label_2a41dc;
            case 0x2A41E0u: goto label_2a41e0;
            case 0x2A41E4u: goto label_2a41e4;
            case 0x2A41E8u: goto label_2a41e8;
            case 0x2A41ECu: goto label_2a41ec;
            case 0x2A41F0u: goto label_2a41f0;
            case 0x2A41F4u: goto label_2a41f4;
            case 0x2A41F8u: goto label_2a41f8;
            case 0x2A41FCu: goto label_2a41fc;
            case 0x2A4200u: goto label_2a4200;
            case 0x2A4204u: goto label_2a4204;
            case 0x2A4208u: goto label_2a4208;
            case 0x2A420Cu: goto label_2a420c;
            case 0x2A4210u: goto label_2a4210;
            case 0x2A4214u: goto label_2a4214;
            case 0x2A4218u: goto label_2a4218;
            case 0x2A421Cu: goto label_2a421c;
            case 0x2A4220u: goto label_2a4220;
            case 0x2A4224u: goto label_2a4224;
            case 0x2A4228u: goto label_2a4228;
            case 0x2A422Cu: goto label_2a422c;
            case 0x2A4230u: goto label_2a4230;
            case 0x2A4234u: goto label_2a4234;
            case 0x2A4238u: goto label_2a4238;
            case 0x2A423Cu: goto label_2a423c;
            case 0x2A4240u: goto label_2a4240;
            case 0x2A4244u: goto label_2a4244;
            case 0x2A4248u: goto label_2a4248;
            case 0x2A424Cu: goto label_2a424c;
            case 0x2A4250u: goto label_2a4250;
            case 0x2A4254u: goto label_2a4254;
            case 0x2A4258u: goto label_2a4258;
            case 0x2A425Cu: goto label_2a425c;
            case 0x2A4260u: goto label_2a4260;
            case 0x2A4264u: goto label_2a4264;
            case 0x2A4268u: goto label_2a4268;
            case 0x2A426Cu: goto label_2a426c;
            case 0x2A4270u: goto label_2a4270;
            case 0x2A4274u: goto label_2a4274;
            case 0x2A4278u: goto label_2a4278;
            case 0x2A427Cu: goto label_2a427c;
            case 0x2A4280u: goto label_2a4280;
            case 0x2A4284u: goto label_2a4284;
            case 0x2A4288u: goto label_2a4288;
            case 0x2A428Cu: goto label_2a428c;
            case 0x2A4290u: goto label_2a4290;
            case 0x2A4294u: goto label_2a4294;
            case 0x2A4298u: goto label_2a4298;
            case 0x2A429Cu: goto label_2a429c;
            case 0x2A42A0u: goto label_2a42a0;
            case 0x2A42A4u: goto label_2a42a4;
            case 0x2A42A8u: goto label_2a42a8;
            case 0x2A42ACu: goto label_2a42ac;
            case 0x2A42B0u: goto label_2a42b0;
            case 0x2A42B4u: goto label_2a42b4;
            case 0x2A42B8u: goto label_2a42b8;
            case 0x2A42BCu: goto label_2a42bc;
            case 0x2A42C0u: goto label_2a42c0;
            case 0x2A42C4u: goto label_2a42c4;
            case 0x2A42C8u: goto label_2a42c8;
            case 0x2A42CCu: goto label_2a42cc;
            case 0x2A42D0u: goto label_2a42d0;
            case 0x2A42D4u: goto label_2a42d4;
            case 0x2A42D8u: goto label_2a42d8;
            case 0x2A42DCu: goto label_2a42dc;
            case 0x2A42E0u: goto label_2a42e0;
            case 0x2A42E4u: goto label_2a42e4;
            case 0x2A42E8u: goto label_2a42e8;
            case 0x2A42ECu: goto label_2a42ec;
            case 0x2A42F0u: goto label_2a42f0;
            case 0x2A42F4u: goto label_2a42f4;
            case 0x2A42F8u: goto label_2a42f8;
            case 0x2A42FCu: goto label_2a42fc;
            case 0x2A4300u: goto label_2a4300;
            case 0x2A4304u: goto label_2a4304;
            case 0x2A4308u: goto label_2a4308;
            case 0x2A430Cu: goto label_2a430c;
            case 0x2A4310u: goto label_2a4310;
            case 0x2A4314u: goto label_2a4314;
            case 0x2A4318u: goto label_2a4318;
            case 0x2A431Cu: goto label_2a431c;
            case 0x2A4320u: goto label_2a4320;
            case 0x2A4324u: goto label_2a4324;
            case 0x2A4328u: goto label_2a4328;
            case 0x2A432Cu: goto label_2a432c;
            case 0x2A4330u: goto label_2a4330;
            case 0x2A4334u: goto label_2a4334;
            case 0x2A4338u: goto label_2a4338;
            case 0x2A433Cu: goto label_2a433c;
            case 0x2A4340u: goto label_2a4340;
            case 0x2A4344u: goto label_2a4344;
            case 0x2A4348u: goto label_2a4348;
            case 0x2A434Cu: goto label_2a434c;
            case 0x2A4350u: goto label_2a4350;
            case 0x2A4354u: goto label_2a4354;
            case 0x2A4358u: goto label_2a4358;
            case 0x2A435Cu: goto label_2a435c;
            case 0x2A4360u: goto label_2a4360;
            case 0x2A4364u: goto label_2a4364;
            case 0x2A4368u: goto label_2a4368;
            case 0x2A436Cu: goto label_2a436c;
            case 0x2A4370u: goto label_2a4370;
            case 0x2A4374u: goto label_2a4374;
            case 0x2A4378u: goto label_2a4378;
            case 0x2A437Cu: goto label_2a437c;
            case 0x2A4380u: goto label_2a4380;
            case 0x2A4384u: goto label_2a4384;
            case 0x2A4388u: goto label_2a4388;
            case 0x2A438Cu: goto label_2a438c;
            case 0x2A4390u: goto label_2a4390;
            case 0x2A4394u: goto label_2a4394;
            case 0x2A4398u: goto label_2a4398;
            case 0x2A439Cu: goto label_2a439c;
            case 0x2A43A0u: goto label_2a43a0;
            case 0x2A43A4u: goto label_2a43a4;
            case 0x2A43A8u: goto label_2a43a8;
            case 0x2A43ACu: goto label_2a43ac;
            case 0x2A43B0u: goto label_2a43b0;
            case 0x2A43B4u: goto label_2a43b4;
            case 0x2A43B8u: goto label_2a43b8;
            case 0x2A43BCu: goto label_2a43bc;
            case 0x2A43C0u: goto label_2a43c0;
            case 0x2A43C4u: goto label_2a43c4;
            case 0x2A43C8u: goto label_2a43c8;
            case 0x2A43CCu: goto label_2a43cc;
            case 0x2A43D0u: goto label_2a43d0;
            case 0x2A43D4u: goto label_2a43d4;
            case 0x2A43D8u: goto label_2a43d8;
            case 0x2A43DCu: goto label_2a43dc;
            case 0x2A43E0u: goto label_2a43e0;
            case 0x2A43E4u: goto label_2a43e4;
            case 0x2A43E8u: goto label_2a43e8;
            case 0x2A43ECu: goto label_2a43ec;
            case 0x2A43F0u: goto label_2a43f0;
            case 0x2A43F4u: goto label_2a43f4;
            case 0x2A43F8u: goto label_2a43f8;
            case 0x2A43FCu: goto label_2a43fc;
            case 0x2A4400u: goto label_2a4400;
            case 0x2A4404u: goto label_2a4404;
            case 0x2A4408u: goto label_2a4408;
            case 0x2A440Cu: goto label_2a440c;
            case 0x2A4410u: goto label_2a4410;
            case 0x2A4414u: goto label_2a4414;
            case 0x2A4418u: goto label_2a4418;
            case 0x2A441Cu: goto label_2a441c;
            case 0x2A4420u: goto label_2a4420;
            case 0x2A4424u: goto label_2a4424;
            case 0x2A4428u: goto label_2a4428;
            case 0x2A442Cu: goto label_2a442c;
            case 0x2A4430u: goto label_2a4430;
            case 0x2A4434u: goto label_2a4434;
            case 0x2A4438u: goto label_2a4438;
            case 0x2A443Cu: goto label_2a443c;
            case 0x2A4440u: goto label_2a4440;
            case 0x2A4444u: goto label_2a4444;
            case 0x2A4448u: goto label_2a4448;
            case 0x2A444Cu: goto label_2a444c;
            case 0x2A4450u: goto label_2a4450;
            case 0x2A4454u: goto label_2a4454;
            case 0x2A4458u: goto label_2a4458;
            case 0x2A445Cu: goto label_2a445c;
            case 0x2A4460u: goto label_2a4460;
            case 0x2A4464u: goto label_2a4464;
            case 0x2A4468u: goto label_2a4468;
            case 0x2A446Cu: goto label_2a446c;
            case 0x2A4470u: goto label_2a4470;
            case 0x2A4474u: goto label_2a4474;
            case 0x2A4478u: goto label_2a4478;
            case 0x2A447Cu: goto label_2a447c;
            case 0x2A4480u: goto label_2a4480;
            case 0x2A4484u: goto label_2a4484;
            case 0x2A4488u: goto label_2a4488;
            case 0x2A448Cu: goto label_2a448c;
            case 0x2A4490u: goto label_2a4490;
            case 0x2A4494u: goto label_2a4494;
            case 0x2A4498u: goto label_2a4498;
            case 0x2A449Cu: goto label_2a449c;
            case 0x2A44A0u: goto label_2a44a0;
            case 0x2A44A4u: goto label_2a44a4;
            case 0x2A44A8u: goto label_2a44a8;
            case 0x2A44ACu: goto label_2a44ac;
            case 0x2A44B0u: goto label_2a44b0;
            case 0x2A44B4u: goto label_2a44b4;
            case 0x2A44B8u: goto label_2a44b8;
            case 0x2A44BCu: goto label_2a44bc;
            case 0x2A44C0u: goto label_2a44c0;
            case 0x2A44C4u: goto label_2a44c4;
            case 0x2A44C8u: goto label_2a44c8;
            case 0x2A44CCu: goto label_2a44cc;
            case 0x2A44D0u: goto label_2a44d0;
            case 0x2A44D4u: goto label_2a44d4;
            case 0x2A44D8u: goto label_2a44d8;
            case 0x2A44DCu: goto label_2a44dc;
            case 0x2A44E0u: goto label_2a44e0;
            case 0x2A44E4u: goto label_2a44e4;
            case 0x2A44E8u: goto label_2a44e8;
            case 0x2A44ECu: goto label_2a44ec;
            case 0x2A44F0u: goto label_2a44f0;
            case 0x2A44F4u: goto label_2a44f4;
            case 0x2A44F8u: goto label_2a44f8;
            case 0x2A44FCu: goto label_2a44fc;
            case 0x2A4500u: goto label_2a4500;
            case 0x2A4504u: goto label_2a4504;
            case 0x2A4508u: goto label_2a4508;
            case 0x2A450Cu: goto label_2a450c;
            case 0x2A4510u: goto label_2a4510;
            case 0x2A4514u: goto label_2a4514;
            case 0x2A4518u: goto label_2a4518;
            case 0x2A451Cu: goto label_2a451c;
            case 0x2A4520u: goto label_2a4520;
            case 0x2A4524u: goto label_2a4524;
            case 0x2A4528u: goto label_2a4528;
            case 0x2A452Cu: goto label_2a452c;
            case 0x2A4530u: goto label_2a4530;
            case 0x2A4534u: goto label_2a4534;
            case 0x2A4538u: goto label_2a4538;
            case 0x2A453Cu: goto label_2a453c;
            case 0x2A4540u: goto label_2a4540;
            case 0x2A4544u: goto label_2a4544;
            case 0x2A4548u: goto label_2a4548;
            case 0x2A454Cu: goto label_2a454c;
            case 0x2A4550u: goto label_2a4550;
            case 0x2A4554u: goto label_2a4554;
            case 0x2A4558u: goto label_2a4558;
            case 0x2A455Cu: goto label_2a455c;
            case 0x2A4560u: goto label_2a4560;
            case 0x2A4564u: goto label_2a4564;
            case 0x2A4568u: goto label_2a4568;
            case 0x2A456Cu: goto label_2a456c;
            case 0x2A4570u: goto label_2a4570;
            case 0x2A4574u: goto label_2a4574;
            case 0x2A4578u: goto label_2a4578;
            case 0x2A457Cu: goto label_2a457c;
            case 0x2A4580u: goto label_2a4580;
            case 0x2A4584u: goto label_2a4584;
            case 0x2A4588u: goto label_2a4588;
            case 0x2A458Cu: goto label_2a458c;
            case 0x2A4590u: goto label_2a4590;
            case 0x2A4594u: goto label_2a4594;
            case 0x2A4598u: goto label_2a4598;
            case 0x2A459Cu: goto label_2a459c;
            case 0x2A45A0u: goto label_2a45a0;
            case 0x2A45A4u: goto label_2a45a4;
            case 0x2A45A8u: goto label_2a45a8;
            case 0x2A45ACu: goto label_2a45ac;
            case 0x2A45B0u: goto label_2a45b0;
            case 0x2A45B4u: goto label_2a45b4;
            case 0x2A45B8u: goto label_2a45b8;
            case 0x2A45BCu: goto label_2a45bc;
            case 0x2A45C0u: goto label_2a45c0;
            case 0x2A45C4u: goto label_2a45c4;
            case 0x2A45C8u: goto label_2a45c8;
            case 0x2A45CCu: goto label_2a45cc;
            case 0x2A45D0u: goto label_2a45d0;
            case 0x2A45D4u: goto label_2a45d4;
            case 0x2A45D8u: goto label_2a45d8;
            case 0x2A45DCu: goto label_2a45dc;
            case 0x2A45E0u: goto label_2a45e0;
            case 0x2A45E4u: goto label_2a45e4;
            case 0x2A45E8u: goto label_2a45e8;
            case 0x2A45ECu: goto label_2a45ec;
            case 0x2A45F0u: goto label_2a45f0;
            case 0x2A45F4u: goto label_2a45f4;
            case 0x2A45F8u: goto label_2a45f8;
            case 0x2A45FCu: goto label_2a45fc;
            case 0x2A4600u: goto label_2a4600;
            case 0x2A4604u: goto label_2a4604;
            case 0x2A4608u: goto label_2a4608;
            case 0x2A460Cu: goto label_2a460c;
            case 0x2A4610u: goto label_2a4610;
            case 0x2A4614u: goto label_2a4614;
            case 0x2A4618u: goto label_2a4618;
            case 0x2A461Cu: goto label_2a461c;
            case 0x2A4620u: goto label_2a4620;
            case 0x2A4624u: goto label_2a4624;
            case 0x2A4628u: goto label_2a4628;
            case 0x2A462Cu: goto label_2a462c;
            case 0x2A4630u: goto label_2a4630;
            case 0x2A4634u: goto label_2a4634;
            case 0x2A4638u: goto label_2a4638;
            case 0x2A463Cu: goto label_2a463c;
            case 0x2A4640u: goto label_2a4640;
            case 0x2A4644u: goto label_2a4644;
            case 0x2A4648u: goto label_2a4648;
            case 0x2A464Cu: goto label_2a464c;
            case 0x2A4650u: goto label_2a4650;
            case 0x2A4654u: goto label_2a4654;
            case 0x2A4658u: goto label_2a4658;
            case 0x2A465Cu: goto label_2a465c;
            case 0x2A4660u: goto label_2a4660;
            case 0x2A4664u: goto label_2a4664;
            case 0x2A4668u: goto label_2a4668;
            case 0x2A466Cu: goto label_2a466c;
            case 0x2A4670u: goto label_2a4670;
            case 0x2A4674u: goto label_2a4674;
            case 0x2A4678u: goto label_2a4678;
            case 0x2A467Cu: goto label_2a467c;
            case 0x2A4680u: goto label_2a4680;
            case 0x2A4684u: goto label_2a4684;
            case 0x2A4688u: goto label_2a4688;
            case 0x2A468Cu: goto label_2a468c;
            case 0x2A4690u: goto label_2a4690;
            case 0x2A4694u: goto label_2a4694;
            case 0x2A4698u: goto label_2a4698;
            case 0x2A469Cu: goto label_2a469c;
            case 0x2A46A0u: goto label_2a46a0;
            case 0x2A46A4u: goto label_2a46a4;
            case 0x2A46A8u: goto label_2a46a8;
            case 0x2A46ACu: goto label_2a46ac;
            case 0x2A46B0u: goto label_2a46b0;
            case 0x2A46B4u: goto label_2a46b4;
            case 0x2A46B8u: goto label_2a46b8;
            case 0x2A46BCu: goto label_2a46bc;
            case 0x2A46C0u: goto label_2a46c0;
            case 0x2A46C4u: goto label_2a46c4;
            case 0x2A46C8u: goto label_2a46c8;
            case 0x2A46CCu: goto label_2a46cc;
            case 0x2A46D0u: goto label_2a46d0;
            case 0x2A46D4u: goto label_2a46d4;
            case 0x2A46D8u: goto label_2a46d8;
            case 0x2A46DCu: goto label_2a46dc;
            case 0x2A46E0u: goto label_2a46e0;
            case 0x2A46E4u: goto label_2a46e4;
            case 0x2A46E8u: goto label_2a46e8;
            case 0x2A46ECu: goto label_2a46ec;
            case 0x2A46F0u: goto label_2a46f0;
            case 0x2A46F4u: goto label_2a46f4;
            case 0x2A46F8u: goto label_2a46f8;
            case 0x2A46FCu: goto label_2a46fc;
            case 0x2A4700u: goto label_2a4700;
            case 0x2A4704u: goto label_2a4704;
            case 0x2A4708u: goto label_2a4708;
            case 0x2A470Cu: goto label_2a470c;
            case 0x2A4710u: goto label_2a4710;
            case 0x2A4714u: goto label_2a4714;
            case 0x2A4718u: goto label_2a4718;
            case 0x2A471Cu: goto label_2a471c;
            case 0x2A4720u: goto label_2a4720;
            case 0x2A4724u: goto label_2a4724;
            case 0x2A4728u: goto label_2a4728;
            case 0x2A472Cu: goto label_2a472c;
            case 0x2A4730u: goto label_2a4730;
            case 0x2A4734u: goto label_2a4734;
            case 0x2A4738u: goto label_2a4738;
            case 0x2A473Cu: goto label_2a473c;
            case 0x2A4740u: goto label_2a4740;
            case 0x2A4744u: goto label_2a4744;
            case 0x2A4748u: goto label_2a4748;
            case 0x2A474Cu: goto label_2a474c;
            case 0x2A4750u: goto label_2a4750;
            case 0x2A4754u: goto label_2a4754;
            case 0x2A4758u: goto label_2a4758;
            case 0x2A475Cu: goto label_2a475c;
            case 0x2A4760u: goto label_2a4760;
            case 0x2A4764u: goto label_2a4764;
            case 0x2A4768u: goto label_2a4768;
            case 0x2A476Cu: goto label_2a476c;
            case 0x2A4770u: goto label_2a4770;
            case 0x2A4774u: goto label_2a4774;
            case 0x2A4778u: goto label_2a4778;
            case 0x2A477Cu: goto label_2a477c;
            case 0x2A4780u: goto label_2a4780;
            case 0x2A4784u: goto label_2a4784;
            case 0x2A4788u: goto label_2a4788;
            case 0x2A478Cu: goto label_2a478c;
            case 0x2A4790u: goto label_2a4790;
            case 0x2A4794u: goto label_2a4794;
            case 0x2A4798u: goto label_2a4798;
            case 0x2A479Cu: goto label_2a479c;
            case 0x2A47A0u: goto label_2a47a0;
            case 0x2A47A4u: goto label_2a47a4;
            case 0x2A47A8u: goto label_2a47a8;
            case 0x2A47ACu: goto label_2a47ac;
            case 0x2A47B0u: goto label_2a47b0;
            case 0x2A47B4u: goto label_2a47b4;
            case 0x2A47B8u: goto label_2a47b8;
            case 0x2A47BCu: goto label_2a47bc;
            case 0x2A47C0u: goto label_2a47c0;
            case 0x2A47C4u: goto label_2a47c4;
            case 0x2A47C8u: goto label_2a47c8;
            case 0x2A47CCu: goto label_2a47cc;
            case 0x2A47D0u: goto label_2a47d0;
            case 0x2A47D4u: goto label_2a47d4;
            case 0x2A47D8u: goto label_2a47d8;
            case 0x2A47DCu: goto label_2a47dc;
            case 0x2A47E0u: goto label_2a47e0;
            case 0x2A47E4u: goto label_2a47e4;
            case 0x2A47E8u: goto label_2a47e8;
            case 0x2A47ECu: goto label_2a47ec;
            case 0x2A47F0u: goto label_2a47f0;
            case 0x2A47F4u: goto label_2a47f4;
            case 0x2A47F8u: goto label_2a47f8;
            case 0x2A47FCu: goto label_2a47fc;
            case 0x2A4800u: goto label_2a4800;
            case 0x2A4804u: goto label_2a4804;
            case 0x2A4808u: goto label_2a4808;
            case 0x2A480Cu: goto label_2a480c;
            case 0x2A4810u: goto label_2a4810;
            case 0x2A4814u: goto label_2a4814;
            case 0x2A4818u: goto label_2a4818;
            case 0x2A481Cu: goto label_2a481c;
            case 0x2A4820u: goto label_2a4820;
            case 0x2A4824u: goto label_2a4824;
            case 0x2A4828u: goto label_2a4828;
            case 0x2A482Cu: goto label_2a482c;
            case 0x2A4830u: goto label_2a4830;
            case 0x2A4834u: goto label_2a4834;
            case 0x2A4838u: goto label_2a4838;
            case 0x2A483Cu: goto label_2a483c;
            case 0x2A4840u: goto label_2a4840;
            case 0x2A4844u: goto label_2a4844;
            case 0x2A4848u: goto label_2a4848;
            case 0x2A484Cu: goto label_2a484c;
            case 0x2A4850u: goto label_2a4850;
            case 0x2A4854u: goto label_2a4854;
            case 0x2A4858u: goto label_2a4858;
            case 0x2A485Cu: goto label_2a485c;
            case 0x2A4860u: goto label_2a4860;
            case 0x2A4864u: goto label_2a4864;
            case 0x2A4868u: goto label_2a4868;
            case 0x2A486Cu: goto label_2a486c;
            case 0x2A4870u: goto label_2a4870;
            case 0x2A4874u: goto label_2a4874;
            case 0x2A4878u: goto label_2a4878;
            case 0x2A487Cu: goto label_2a487c;
            case 0x2A4880u: goto label_2a4880;
            case 0x2A4884u: goto label_2a4884;
            case 0x2A4888u: goto label_2a4888;
            case 0x2A488Cu: goto label_2a488c;
            case 0x2A4890u: goto label_2a4890;
            case 0x2A4894u: goto label_2a4894;
            case 0x2A4898u: goto label_2a4898;
            case 0x2A489Cu: goto label_2a489c;
            case 0x2A48A0u: goto label_2a48a0;
            case 0x2A48A4u: goto label_2a48a4;
            case 0x2A48A8u: goto label_2a48a8;
            case 0x2A48ACu: goto label_2a48ac;
            case 0x2A48B0u: goto label_2a48b0;
            case 0x2A48B4u: goto label_2a48b4;
            case 0x2A48B8u: goto label_2a48b8;
            case 0x2A48BCu: goto label_2a48bc;
            case 0x2A48C0u: goto label_2a48c0;
            case 0x2A48C4u: goto label_2a48c4;
            case 0x2A48C8u: goto label_2a48c8;
            case 0x2A48CCu: goto label_2a48cc;
            case 0x2A48D0u: goto label_2a48d0;
            case 0x2A48D4u: goto label_2a48d4;
            case 0x2A48D8u: goto label_2a48d8;
            case 0x2A48DCu: goto label_2a48dc;
            case 0x2A48E0u: goto label_2a48e0;
            case 0x2A48E4u: goto label_2a48e4;
            case 0x2A48E8u: goto label_2a48e8;
            case 0x2A48ECu: goto label_2a48ec;
            case 0x2A48F0u: goto label_2a48f0;
            case 0x2A48F4u: goto label_2a48f4;
            case 0x2A48F8u: goto label_2a48f8;
            case 0x2A48FCu: goto label_2a48fc;
            case 0x2A4900u: goto label_2a4900;
            case 0x2A4904u: goto label_2a4904;
            case 0x2A4908u: goto label_2a4908;
            case 0x2A490Cu: goto label_2a490c;
            case 0x2A4910u: goto label_2a4910;
            case 0x2A4914u: goto label_2a4914;
            case 0x2A4918u: goto label_2a4918;
            case 0x2A491Cu: goto label_2a491c;
            case 0x2A4920u: goto label_2a4920;
            case 0x2A4924u: goto label_2a4924;
            case 0x2A4928u: goto label_2a4928;
            case 0x2A492Cu: goto label_2a492c;
            case 0x2A4930u: goto label_2a4930;
            case 0x2A4934u: goto label_2a4934;
            case 0x2A4938u: goto label_2a4938;
            case 0x2A493Cu: goto label_2a493c;
            case 0x2A4940u: goto label_2a4940;
            case 0x2A4944u: goto label_2a4944;
            case 0x2A4948u: goto label_2a4948;
            case 0x2A494Cu: goto label_2a494c;
            case 0x2A4950u: goto label_2a4950;
            case 0x2A4954u: goto label_2a4954;
            case 0x2A4958u: goto label_2a4958;
            case 0x2A495Cu: goto label_2a495c;
            case 0x2A4960u: goto label_2a4960;
            case 0x2A4964u: goto label_2a4964;
            case 0x2A4968u: goto label_2a4968;
            case 0x2A496Cu: goto label_2a496c;
            case 0x2A4970u: goto label_2a4970;
            case 0x2A4974u: goto label_2a4974;
            case 0x2A4978u: goto label_2a4978;
            case 0x2A497Cu: goto label_2a497c;
            case 0x2A4980u: goto label_2a4980;
            case 0x2A4984u: goto label_2a4984;
            case 0x2A4988u: goto label_2a4988;
            case 0x2A498Cu: goto label_2a498c;
            case 0x2A4990u: goto label_2a4990;
            case 0x2A4994u: goto label_2a4994;
            case 0x2A4998u: goto label_2a4998;
            case 0x2A499Cu: goto label_2a499c;
            case 0x2A49A0u: goto label_2a49a0;
            case 0x2A49A4u: goto label_2a49a4;
            case 0x2A49A8u: goto label_2a49a8;
            case 0x2A49ACu: goto label_2a49ac;
            case 0x2A49B0u: goto label_2a49b0;
            case 0x2A49B4u: goto label_2a49b4;
            case 0x2A49B8u: goto label_2a49b8;
            case 0x2A49BCu: goto label_2a49bc;
            case 0x2A49C0u: goto label_2a49c0;
            case 0x2A49C4u: goto label_2a49c4;
            case 0x2A49C8u: goto label_2a49c8;
            case 0x2A49CCu: goto label_2a49cc;
            case 0x2A49D0u: goto label_2a49d0;
            case 0x2A49D4u: goto label_2a49d4;
            case 0x2A49D8u: goto label_2a49d8;
            case 0x2A49DCu: goto label_2a49dc;
            case 0x2A49E0u: goto label_2a49e0;
            case 0x2A49E4u: goto label_2a49e4;
            case 0x2A49E8u: goto label_2a49e8;
            case 0x2A49ECu: goto label_2a49ec;
            case 0x2A49F0u: goto label_2a49f0;
            case 0x2A49F4u: goto label_2a49f4;
            case 0x2A49F8u: goto label_2a49f8;
            case 0x2A49FCu: goto label_2a49fc;
            case 0x2A4A00u: goto label_2a4a00;
            case 0x2A4A04u: goto label_2a4a04;
            case 0x2A4A08u: goto label_2a4a08;
            case 0x2A4A0Cu: goto label_2a4a0c;
            case 0x2A4A10u: goto label_2a4a10;
            case 0x2A4A14u: goto label_2a4a14;
            case 0x2A4A18u: goto label_2a4a18;
            case 0x2A4A1Cu: goto label_2a4a1c;
            case 0x2A4A20u: goto label_2a4a20;
            case 0x2A4A24u: goto label_2a4a24;
            case 0x2A4A28u: goto label_2a4a28;
            case 0x2A4A2Cu: goto label_2a4a2c;
            case 0x2A4A30u: goto label_2a4a30;
            case 0x2A4A34u: goto label_2a4a34;
            case 0x2A4A38u: goto label_2a4a38;
            case 0x2A4A3Cu: goto label_2a4a3c;
            case 0x2A4A40u: goto label_2a4a40;
            case 0x2A4A44u: goto label_2a4a44;
            case 0x2A4A48u: goto label_2a4a48;
            case 0x2A4A4Cu: goto label_2a4a4c;
            case 0x2A4A50u: goto label_2a4a50;
            case 0x2A4A54u: goto label_2a4a54;
            case 0x2A4A58u: goto label_2a4a58;
            case 0x2A4A5Cu: goto label_2a4a5c;
            case 0x2A4A60u: goto label_2a4a60;
            case 0x2A4A64u: goto label_2a4a64;
            case 0x2A4A68u: goto label_2a4a68;
            case 0x2A4A6Cu: goto label_2a4a6c;
            case 0x2A4A70u: goto label_2a4a70;
            case 0x2A4A74u: goto label_2a4a74;
            case 0x2A4A78u: goto label_2a4a78;
            case 0x2A4A7Cu: goto label_2a4a7c;
            case 0x2A4A80u: goto label_2a4a80;
            case 0x2A4A84u: goto label_2a4a84;
            case 0x2A4A88u: goto label_2a4a88;
            case 0x2A4A8Cu: goto label_2a4a8c;
            case 0x2A4A90u: goto label_2a4a90;
            case 0x2A4A94u: goto label_2a4a94;
            case 0x2A4A98u: goto label_2a4a98;
            case 0x2A4A9Cu: goto label_2a4a9c;
            case 0x2A4AA0u: goto label_2a4aa0;
            case 0x2A4AA4u: goto label_2a4aa4;
            case 0x2A4AA8u: goto label_2a4aa8;
            case 0x2A4AACu: goto label_2a4aac;
            case 0x2A4AB0u: goto label_2a4ab0;
            case 0x2A4AB4u: goto label_2a4ab4;
            case 0x2A4AB8u: goto label_2a4ab8;
            case 0x2A4ABCu: goto label_2a4abc;
            case 0x2A4AC0u: goto label_2a4ac0;
            case 0x2A4AC4u: goto label_2a4ac4;
            case 0x2A4AC8u: goto label_2a4ac8;
            case 0x2A4ACCu: goto label_2a4acc;
            case 0x2A4AD0u: goto label_2a4ad0;
            case 0x2A4AD4u: goto label_2a4ad4;
            default: break;
        }
        return;
    }
label_fallthrough_0x2a4ad0:
    ctx->pc = 0x2A4AD8u;
}
