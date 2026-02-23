#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eSETFOG__11FogCtrlTaskFPUi
// Address: 0x1ea220 - 0x1ea3bc
void eSETFOG__11FogCtrlTaskFPUi_0x1ea220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eSETFOG__11FogCtrlTaskFPUi");


    ctx->pc = 0x1ea220u;

label_1ea220:
    // 0x1ea220: 0x27bdffe0
    ctx->pc = 0x1ea220u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ea224:
    // 0x1ea224: 0x7fbf0010
    ctx->pc = 0x1ea224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1ea228:
    // 0x1ea228: 0x7fb00000
    ctx->pc = 0x1ea228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ea22c:
    // 0x1ea22c: 0x8ca20004
    ctx->pc = 0x1ea22cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ea230:
    // 0x1ea230: 0x2c410009
    ctx->pc = 0x1ea230u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 9));
label_1ea234:
    // 0x1ea234: 0x10200008
label_1ea238:
    if (ctx->pc == 0x1EA238u) {
        ctx->pc = 0x1EA238u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EA23Cu;
        goto label_1ea23c;
    }
    ctx->pc = 0x1EA234u;
    {
        const bool branch_taken_0x1ea234 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA238u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ea234) {
            ctx->pc = 0x1EA258u;
            goto label_1ea258;
        }
    }
    ctx->pc = 0x1EA23Cu;
label_1ea23c:
    // 0x1ea23c: 0x3c03002c
    ctx->pc = 0x1ea23cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
label_1ea240:
    // 0x1ea240: 0x21080
    ctx->pc = 0x1ea240u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1ea244:
    // 0x1ea244: 0x2463f750
    ctx->pc = 0x1ea244u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965072));
label_1ea248:
    // 0x1ea248: 0x431021
    ctx->pc = 0x1ea248u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea24c:
    // 0x1ea24c: 0x8c420000
    ctx->pc = 0x1ea24cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea250:
    // 0x1ea250: 0x400008
label_1ea254:
    if (ctx->pc == 0x1EA254u) {
        ctx->pc = 0x1EA258u;
        goto label_1ea258;
    }
    ctx->pc = 0x1EA250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA220u: goto label_1ea220;
            case 0x1EA224u: goto label_1ea224;
            case 0x1EA228u: goto label_1ea228;
            case 0x1EA22Cu: goto label_1ea22c;
            case 0x1EA230u: goto label_1ea230;
            case 0x1EA234u: goto label_1ea234;
            case 0x1EA238u: goto label_1ea238;
            case 0x1EA23Cu: goto label_1ea23c;
            case 0x1EA240u: goto label_1ea240;
            case 0x1EA244u: goto label_1ea244;
            case 0x1EA248u: goto label_1ea248;
            case 0x1EA24Cu: goto label_1ea24c;
            case 0x1EA250u: goto label_1ea250;
            case 0x1EA254u: goto label_1ea254;
            case 0x1EA258u: goto label_1ea258;
            case 0x1EA25Cu: goto label_1ea25c;
            case 0x1EA260u: goto label_1ea260;
            case 0x1EA264u: goto label_1ea264;
            case 0x1EA268u: goto label_1ea268;
            case 0x1EA26Cu: goto label_1ea26c;
            case 0x1EA270u: goto label_1ea270;
            case 0x1EA274u: goto label_1ea274;
            case 0x1EA278u: goto label_1ea278;
            case 0x1EA27Cu: goto label_1ea27c;
            case 0x1EA280u: goto label_1ea280;
            case 0x1EA284u: goto label_1ea284;
            case 0x1EA288u: goto label_1ea288;
            case 0x1EA28Cu: goto label_1ea28c;
            case 0x1EA290u: goto label_1ea290;
            case 0x1EA294u: goto label_1ea294;
            case 0x1EA298u: goto label_1ea298;
            case 0x1EA29Cu: goto label_1ea29c;
            case 0x1EA2A0u: goto label_1ea2a0;
            case 0x1EA2A4u: goto label_1ea2a4;
            case 0x1EA2A8u: goto label_1ea2a8;
            case 0x1EA2ACu: goto label_1ea2ac;
            case 0x1EA2B0u: goto label_1ea2b0;
            case 0x1EA2B4u: goto label_1ea2b4;
            case 0x1EA2B8u: goto label_1ea2b8;
            case 0x1EA2BCu: goto label_1ea2bc;
            case 0x1EA2C0u: goto label_1ea2c0;
            case 0x1EA2C4u: goto label_1ea2c4;
            case 0x1EA2C8u: goto label_1ea2c8;
            case 0x1EA2CCu: goto label_1ea2cc;
            case 0x1EA2D0u: goto label_1ea2d0;
            case 0x1EA2D4u: goto label_1ea2d4;
            case 0x1EA2D8u: goto label_1ea2d8;
            case 0x1EA2DCu: goto label_1ea2dc;
            case 0x1EA2E0u: goto label_1ea2e0;
            case 0x1EA2E4u: goto label_1ea2e4;
            case 0x1EA2E8u: goto label_1ea2e8;
            case 0x1EA2ECu: goto label_1ea2ec;
            case 0x1EA2F0u: goto label_1ea2f0;
            case 0x1EA2F4u: goto label_1ea2f4;
            case 0x1EA2F8u: goto label_1ea2f8;
            case 0x1EA2FCu: goto label_1ea2fc;
            case 0x1EA300u: goto label_1ea300;
            case 0x1EA304u: goto label_1ea304;
            case 0x1EA308u: goto label_1ea308;
            case 0x1EA30Cu: goto label_1ea30c;
            case 0x1EA310u: goto label_1ea310;
            case 0x1EA314u: goto label_1ea314;
            case 0x1EA318u: goto label_1ea318;
            case 0x1EA31Cu: goto label_1ea31c;
            case 0x1EA320u: goto label_1ea320;
            case 0x1EA324u: goto label_1ea324;
            case 0x1EA328u: goto label_1ea328;
            case 0x1EA32Cu: goto label_1ea32c;
            case 0x1EA330u: goto label_1ea330;
            case 0x1EA334u: goto label_1ea334;
            case 0x1EA338u: goto label_1ea338;
            case 0x1EA33Cu: goto label_1ea33c;
            case 0x1EA340u: goto label_1ea340;
            case 0x1EA344u: goto label_1ea344;
            case 0x1EA348u: goto label_1ea348;
            case 0x1EA34Cu: goto label_1ea34c;
            case 0x1EA350u: goto label_1ea350;
            case 0x1EA354u: goto label_1ea354;
            case 0x1EA358u: goto label_1ea358;
            case 0x1EA35Cu: goto label_1ea35c;
            case 0x1EA360u: goto label_1ea360;
            case 0x1EA364u: goto label_1ea364;
            case 0x1EA368u: goto label_1ea368;
            case 0x1EA36Cu: goto label_1ea36c;
            case 0x1EA370u: goto label_1ea370;
            case 0x1EA374u: goto label_1ea374;
            case 0x1EA378u: goto label_1ea378;
            case 0x1EA37Cu: goto label_1ea37c;
            case 0x1EA380u: goto label_1ea380;
            case 0x1EA384u: goto label_1ea384;
            case 0x1EA388u: goto label_1ea388;
            case 0x1EA38Cu: goto label_1ea38c;
            case 0x1EA390u: goto label_1ea390;
            case 0x1EA394u: goto label_1ea394;
            case 0x1EA398u: goto label_1ea398;
            case 0x1EA39Cu: goto label_1ea39c;
            case 0x1EA3A0u: goto label_1ea3a0;
            case 0x1EA3A4u: goto label_1ea3a4;
            case 0x1EA3A8u: goto label_1ea3a8;
            case 0x1EA3ACu: goto label_1ea3ac;
            case 0x1EA3B0u: goto label_1ea3b0;
            case 0x1EA3B4u: goto label_1ea3b4;
            case 0x1EA3B8u: goto label_1ea3b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EA258u;
label_1ea258:
    // 0x1ea258: 0x8e030008
    ctx->pc = 0x1ea258u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ea25c:
    // 0x1ea25c: 0x3c010050
    ctx->pc = 0x1ea25cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea260:
    // 0x1ea260: 0x2602000c
    ctx->pc = 0x1ea260u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
label_1ea264:
    // 0x1ea264: 0xc4600000
    ctx->pc = 0x1ea264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea268:
    // 0x1ea268: 0xe4200ce0
    ctx->pc = 0x1ea268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 3296), bits); }
label_1ea26c:
    // 0x1ea26c: 0x1000004f
label_1ea270:
    if (ctx->pc == 0x1EA270u) {
        ctx->pc = 0x1EA270u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->pc = 0x1EA274u;
        goto label_1ea274;
    }
    ctx->pc = 0x1EA26Cu;
    {
        const bool branch_taken_0x1ea26c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA270u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        if (branch_taken_0x1ea26c) {
            ctx->pc = 0x1EA3ACu;
            goto label_1ea3ac;
        }
    }
    ctx->pc = 0x1EA274u;
label_1ea274:
    // 0x1ea274: 0x8e030008
    ctx->pc = 0x1ea274u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ea278:
    // 0x1ea278: 0x3c010050
    ctx->pc = 0x1ea278u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea27c:
    // 0x1ea27c: 0x2602000c
    ctx->pc = 0x1ea27cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
label_1ea280:
    // 0x1ea280: 0xc4600000
    ctx->pc = 0x1ea280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea284:
    // 0x1ea284: 0xe4200ce4
    ctx->pc = 0x1ea284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 3300), bits); }
label_1ea288:
    // 0x1ea288: 0x10000048
label_1ea28c:
    if (ctx->pc == 0x1EA28Cu) {
        ctx->pc = 0x1EA28Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->pc = 0x1EA290u;
        goto label_1ea290;
    }
    ctx->pc = 0x1EA288u;
    {
        const bool branch_taken_0x1ea288 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA28Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        if (branch_taken_0x1ea288) {
            ctx->pc = 0x1EA3ACu;
            goto label_1ea3ac;
        }
    }
    ctx->pc = 0x1EA290u;
label_1ea290:
    // 0x1ea290: 0x8e030008
    ctx->pc = 0x1ea290u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ea294:
    // 0x1ea294: 0x3c010050
    ctx->pc = 0x1ea294u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea298:
    // 0x1ea298: 0x2602000c
    ctx->pc = 0x1ea298u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
label_1ea29c:
    // 0x1ea29c: 0x44830000
    ctx->pc = 0x1ea29cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1ea2a0:
    // 0x1ea2a0: 0xac230cd4
    ctx->pc = 0x1ea2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3284), GPR_U32(ctx, 3));
label_1ea2a4:
    // 0x1ea2a4: 0x46800020
    ctx->pc = 0x1ea2a4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea2a8:
    // 0x1ea2a8: 0x10000040
label_1ea2ac:
    if (ctx->pc == 0x1EA2ACu) {
        ctx->pc = 0x1EA2ACu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->pc = 0x1EA2B0u;
        goto label_1ea2b0;
    }
    ctx->pc = 0x1EA2A8u;
    {
        const bool branch_taken_0x1ea2a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA2ACu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        if (branch_taken_0x1ea2a8) {
            ctx->pc = 0x1EA3ACu;
            goto label_1ea3ac;
        }
    }
    ctx->pc = 0x1EA2B0u;
label_1ea2b0:
    // 0x1ea2b0: 0x8e030008
    ctx->pc = 0x1ea2b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ea2b4:
    // 0x1ea2b4: 0x3c010050
    ctx->pc = 0x1ea2b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea2b8:
    // 0x1ea2b8: 0x2602000c
    ctx->pc = 0x1ea2b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
label_1ea2bc:
    // 0x1ea2bc: 0x44830000
    ctx->pc = 0x1ea2bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1ea2c0:
    // 0x1ea2c0: 0xac230cd8
    ctx->pc = 0x1ea2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3288), GPR_U32(ctx, 3));
label_1ea2c4:
    // 0x1ea2c4: 0x46800020
    ctx->pc = 0x1ea2c4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea2c8:
    // 0x1ea2c8: 0x10000038
label_1ea2cc:
    if (ctx->pc == 0x1EA2CCu) {
        ctx->pc = 0x1EA2CCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->pc = 0x1EA2D0u;
        goto label_1ea2d0;
    }
    ctx->pc = 0x1EA2C8u;
    {
        const bool branch_taken_0x1ea2c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA2CCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        if (branch_taken_0x1ea2c8) {
            ctx->pc = 0x1EA3ACu;
            goto label_1ea3ac;
        }
    }
    ctx->pc = 0x1EA2D0u;
label_1ea2d0:
    // 0x1ea2d0: 0x8e030008
    ctx->pc = 0x1ea2d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ea2d4:
    // 0x1ea2d4: 0x3c010050
    ctx->pc = 0x1ea2d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea2d8:
    // 0x1ea2d8: 0x2602000c
    ctx->pc = 0x1ea2d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
label_1ea2dc:
    // 0x1ea2dc: 0x44830000
    ctx->pc = 0x1ea2dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1ea2e0:
    // 0x1ea2e0: 0xac230cdc
    ctx->pc = 0x1ea2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3292), GPR_U32(ctx, 3));
label_1ea2e4:
    // 0x1ea2e4: 0x46800020
    ctx->pc = 0x1ea2e4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea2e8:
    // 0x1ea2e8: 0x10000030
label_1ea2ec:
    if (ctx->pc == 0x1EA2ECu) {
        ctx->pc = 0x1EA2ECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
        ctx->pc = 0x1EA2F0u;
        goto label_1ea2f0;
    }
    ctx->pc = 0x1EA2E8u;
    {
        const bool branch_taken_0x1ea2e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA2ECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
        if (branch_taken_0x1ea2e8) {
            ctx->pc = 0x1EA3ACu;
            goto label_1ea3ac;
        }
    }
    ctx->pc = 0x1EA2F0u;
label_1ea2f0:
    // 0x1ea2f0: 0x8e030008
    ctx->pc = 0x1ea2f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ea2f4:
    // 0x1ea2f4: 0x3c010050
    ctx->pc = 0x1ea2f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea2f8:
    // 0x1ea2f8: 0x26020014
    ctx->pc = 0x1ea2f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 20));
label_1ea2fc:
    // 0x1ea2fc: 0x44830000
    ctx->pc = 0x1ea2fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1ea300:
    // 0x1ea300: 0xac230cd4
    ctx->pc = 0x1ea300u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3284), GPR_U32(ctx, 3));
label_1ea304:
    // 0x1ea304: 0x46800020
    ctx->pc = 0x1ea304u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea308:
    // 0x1ea308: 0x3c010050
    ctx->pc = 0x1ea308u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea30c:
    // 0x1ea30c: 0xe4800028
    ctx->pc = 0x1ea30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_1ea310:
    // 0x1ea310: 0x8e03000c
    ctx->pc = 0x1ea310u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ea314:
    // 0x1ea314: 0x44830000
    ctx->pc = 0x1ea314u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1ea318:
    // 0x1ea318: 0xac230cd8
    ctx->pc = 0x1ea318u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3288), GPR_U32(ctx, 3));
label_1ea31c:
    // 0x1ea31c: 0x46800020
    ctx->pc = 0x1ea31cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea320:
    // 0x1ea320: 0x3c010050
    ctx->pc = 0x1ea320u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea324:
    // 0x1ea324: 0xe4800038
    ctx->pc = 0x1ea324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_1ea328:
    // 0x1ea328: 0x8e030010
    ctx->pc = 0x1ea328u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ea32c:
    // 0x1ea32c: 0x44830000
    ctx->pc = 0x1ea32cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1ea330:
    // 0x1ea330: 0xac230cdc
    ctx->pc = 0x1ea330u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3292), GPR_U32(ctx, 3));
label_1ea334:
    // 0x1ea334: 0x46800020
    ctx->pc = 0x1ea334u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea338:
    // 0x1ea338: 0x1000001c
label_1ea33c:
    if (ctx->pc == 0x1EA33Cu) {
        ctx->pc = 0x1EA33Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
        ctx->pc = 0x1EA340u;
        goto label_1ea340;
    }
    ctx->pc = 0x1EA338u;
    {
        const bool branch_taken_0x1ea338 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA33Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
        if (branch_taken_0x1ea338) {
            ctx->pc = 0x1EA3ACu;
            goto label_1ea3ac;
        }
    }
    ctx->pc = 0x1EA340u;
label_1ea340:
    // 0x1ea340: 0x8e030008
    ctx->pc = 0x1ea340u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ea344:
    // 0x1ea344: 0x3c010050
    ctx->pc = 0x1ea344u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea348:
    // 0x1ea348: 0x26020010
    ctx->pc = 0x1ea348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 16));
label_1ea34c:
    // 0x1ea34c: 0xac230ce8
    ctx->pc = 0x1ea34cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3304), GPR_U32(ctx, 3));
label_1ea350:
    // 0x1ea350: 0x8e03000c
    ctx->pc = 0x1ea350u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ea354:
    // 0x1ea354: 0x3c010050
    ctx->pc = 0x1ea354u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea358:
    // 0x1ea358: 0x10000014
label_1ea35c:
    if (ctx->pc == 0x1EA35Cu) {
        ctx->pc = 0x1EA35Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 3308), GPR_U32(ctx, 3));
        ctx->pc = 0x1EA360u;
        goto label_1ea360;
    }
    ctx->pc = 0x1EA358u;
    {
        const bool branch_taken_0x1ea358 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA35Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 3308), GPR_U32(ctx, 3));
        if (branch_taken_0x1ea358) {
            ctx->pc = 0x1EA3ACu;
            goto label_1ea3ac;
        }
    }
    ctx->pc = 0x1EA360u;
label_1ea360:
    // 0x1ea360: 0x8e030008
    ctx->pc = 0x1ea360u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ea364:
    // 0x1ea364: 0x3c010050
    ctx->pc = 0x1ea364u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea368:
    // 0x1ea368: 0x2602000c
    ctx->pc = 0x1ea368u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
label_1ea36c:
    // 0x1ea36c: 0xc4600000
    ctx->pc = 0x1ea36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea370:
    // 0x1ea370: 0xe4200cf0
    ctx->pc = 0x1ea370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 3312), bits); }
label_1ea374:
    // 0x1ea374: 0x8e030008
    ctx->pc = 0x1ea374u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ea378:
    // 0x1ea378: 0x3c010050
    ctx->pc = 0x1ea378u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea37c:
    // 0x1ea37c: 0xc4600004
    ctx->pc = 0x1ea37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea380:
    // 0x1ea380: 0xe4200cf4
    ctx->pc = 0x1ea380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 3316), bits); }
label_1ea384:
    // 0x1ea384: 0x8e030008
    ctx->pc = 0x1ea384u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ea388:
    // 0x1ea388: 0x3c010050
    ctx->pc = 0x1ea388u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea38c:
    // 0x1ea38c: 0xc4600008
    ctx->pc = 0x1ea38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea390:
    // 0x1ea390: 0x10000006
label_1ea394:
    if (ctx->pc == 0x1EA394u) {
        ctx->pc = 0x1EA394u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 3320), bits); }
        ctx->pc = 0x1EA398u;
        goto label_1ea398;
    }
    ctx->pc = 0x1EA390u;
    {
        const bool branch_taken_0x1ea390 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA394u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 3320), bits); }
        if (branch_taken_0x1ea390) {
            ctx->pc = 0x1EA3ACu;
            goto label_1ea3ac;
        }
    }
    ctx->pc = 0x1EA398u;
label_1ea398:
    // 0x1ea398: 0x86020008
    ctx->pc = 0x1ea398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1ea39c:
    // 0x1ea39c: 0x3c010050
    ctx->pc = 0x1ea39cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea3a0:
    // 0x1ea3a0: 0xc07aaa4
label_1ea3a4:
    if (ctx->pc == 0x1EA3A4u) {
        ctx->pc = 0x1EA3A4u;
        WRITE16(ADD32(GPR_U32(ctx, 1), 3324), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1EA3A8u;
        goto label_1ea3a8;
    }
    ctx->pc = 0x1EA3A0u;
    SET_GPR_U32(ctx, 31, 0x1EA3A8u);
    ctx->pc = 0x1EA3A4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3324), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1EAA90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FogOff__Fv_0x1eaa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA3A8u; }
        else if (ctx->pc != 0x1EA3A8u) { ctx->pc = 0x1EA3A8u; }
    }
    if (ctx->pc != 0x1EA3A8u) { return; }
    ctx->pc = 0x1EA3A8u;
label_1ea3a8:
    // 0x1ea3a8: 0x2602000c
    ctx->pc = 0x1ea3a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
label_1ea3ac:
    // 0x1ea3ac: 0x7bbf0010
    ctx->pc = 0x1ea3acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ea3b0:
    // 0x1ea3b0: 0x7bb00000
    ctx->pc = 0x1ea3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea3b4:
    // 0x1ea3b4: 0x3e00008
label_1ea3b8:
    if (ctx->pc == 0x1EA3B8u) {
        ctx->pc = 0x1EA3B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EA3BCu;
        goto label_fallthrough_0x1ea3b4;
    }
    ctx->pc = 0x1EA3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA3B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA220u: goto label_1ea220;
            case 0x1EA224u: goto label_1ea224;
            case 0x1EA228u: goto label_1ea228;
            case 0x1EA22Cu: goto label_1ea22c;
            case 0x1EA230u: goto label_1ea230;
            case 0x1EA234u: goto label_1ea234;
            case 0x1EA238u: goto label_1ea238;
            case 0x1EA23Cu: goto label_1ea23c;
            case 0x1EA240u: goto label_1ea240;
            case 0x1EA244u: goto label_1ea244;
            case 0x1EA248u: goto label_1ea248;
            case 0x1EA24Cu: goto label_1ea24c;
            case 0x1EA250u: goto label_1ea250;
            case 0x1EA254u: goto label_1ea254;
            case 0x1EA258u: goto label_1ea258;
            case 0x1EA25Cu: goto label_1ea25c;
            case 0x1EA260u: goto label_1ea260;
            case 0x1EA264u: goto label_1ea264;
            case 0x1EA268u: goto label_1ea268;
            case 0x1EA26Cu: goto label_1ea26c;
            case 0x1EA270u: goto label_1ea270;
            case 0x1EA274u: goto label_1ea274;
            case 0x1EA278u: goto label_1ea278;
            case 0x1EA27Cu: goto label_1ea27c;
            case 0x1EA280u: goto label_1ea280;
            case 0x1EA284u: goto label_1ea284;
            case 0x1EA288u: goto label_1ea288;
            case 0x1EA28Cu: goto label_1ea28c;
            case 0x1EA290u: goto label_1ea290;
            case 0x1EA294u: goto label_1ea294;
            case 0x1EA298u: goto label_1ea298;
            case 0x1EA29Cu: goto label_1ea29c;
            case 0x1EA2A0u: goto label_1ea2a0;
            case 0x1EA2A4u: goto label_1ea2a4;
            case 0x1EA2A8u: goto label_1ea2a8;
            case 0x1EA2ACu: goto label_1ea2ac;
            case 0x1EA2B0u: goto label_1ea2b0;
            case 0x1EA2B4u: goto label_1ea2b4;
            case 0x1EA2B8u: goto label_1ea2b8;
            case 0x1EA2BCu: goto label_1ea2bc;
            case 0x1EA2C0u: goto label_1ea2c0;
            case 0x1EA2C4u: goto label_1ea2c4;
            case 0x1EA2C8u: goto label_1ea2c8;
            case 0x1EA2CCu: goto label_1ea2cc;
            case 0x1EA2D0u: goto label_1ea2d0;
            case 0x1EA2D4u: goto label_1ea2d4;
            case 0x1EA2D8u: goto label_1ea2d8;
            case 0x1EA2DCu: goto label_1ea2dc;
            case 0x1EA2E0u: goto label_1ea2e0;
            case 0x1EA2E4u: goto label_1ea2e4;
            case 0x1EA2E8u: goto label_1ea2e8;
            case 0x1EA2ECu: goto label_1ea2ec;
            case 0x1EA2F0u: goto label_1ea2f0;
            case 0x1EA2F4u: goto label_1ea2f4;
            case 0x1EA2F8u: goto label_1ea2f8;
            case 0x1EA2FCu: goto label_1ea2fc;
            case 0x1EA300u: goto label_1ea300;
            case 0x1EA304u: goto label_1ea304;
            case 0x1EA308u: goto label_1ea308;
            case 0x1EA30Cu: goto label_1ea30c;
            case 0x1EA310u: goto label_1ea310;
            case 0x1EA314u: goto label_1ea314;
            case 0x1EA318u: goto label_1ea318;
            case 0x1EA31Cu: goto label_1ea31c;
            case 0x1EA320u: goto label_1ea320;
            case 0x1EA324u: goto label_1ea324;
            case 0x1EA328u: goto label_1ea328;
            case 0x1EA32Cu: goto label_1ea32c;
            case 0x1EA330u: goto label_1ea330;
            case 0x1EA334u: goto label_1ea334;
            case 0x1EA338u: goto label_1ea338;
            case 0x1EA33Cu: goto label_1ea33c;
            case 0x1EA340u: goto label_1ea340;
            case 0x1EA344u: goto label_1ea344;
            case 0x1EA348u: goto label_1ea348;
            case 0x1EA34Cu: goto label_1ea34c;
            case 0x1EA350u: goto label_1ea350;
            case 0x1EA354u: goto label_1ea354;
            case 0x1EA358u: goto label_1ea358;
            case 0x1EA35Cu: goto label_1ea35c;
            case 0x1EA360u: goto label_1ea360;
            case 0x1EA364u: goto label_1ea364;
            case 0x1EA368u: goto label_1ea368;
            case 0x1EA36Cu: goto label_1ea36c;
            case 0x1EA370u: goto label_1ea370;
            case 0x1EA374u: goto label_1ea374;
            case 0x1EA378u: goto label_1ea378;
            case 0x1EA37Cu: goto label_1ea37c;
            case 0x1EA380u: goto label_1ea380;
            case 0x1EA384u: goto label_1ea384;
            case 0x1EA388u: goto label_1ea388;
            case 0x1EA38Cu: goto label_1ea38c;
            case 0x1EA390u: goto label_1ea390;
            case 0x1EA394u: goto label_1ea394;
            case 0x1EA398u: goto label_1ea398;
            case 0x1EA39Cu: goto label_1ea39c;
            case 0x1EA3A0u: goto label_1ea3a0;
            case 0x1EA3A4u: goto label_1ea3a4;
            case 0x1EA3A8u: goto label_1ea3a8;
            case 0x1EA3ACu: goto label_1ea3ac;
            case 0x1EA3B0u: goto label_1ea3b0;
            case 0x1EA3B4u: goto label_1ea3b4;
            case 0x1EA3B8u: goto label_1ea3b8;
            default: break;
        }
        return;
    }
label_fallthrough_0x1ea3b4:
    ctx->pc = 0x1EA3BCu;
}
