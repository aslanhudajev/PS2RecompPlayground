#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterDoDamage
// Address: 0x295030 - 0x2954ac
void CritterDoDamage_0x295030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x295030u;

label_295030:
    // 0x295030: 0x27bdff50
    ctx->pc = 0x295030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_295034:
    // 0x295034: 0xffbf0090
    ctx->pc = 0x295034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_295038:
    // 0x295038: 0xffb70080
    ctx->pc = 0x295038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_29503c:
    // 0x29503c: 0xffb60070
    ctx->pc = 0x29503cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_295040:
    // 0x295040: 0xffb50060
    ctx->pc = 0x295040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_295044:
    // 0x295044: 0xffb40050
    ctx->pc = 0x295044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_295048:
    // 0x295048: 0xffb30040
    ctx->pc = 0x295048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_29504c:
    // 0x29504c: 0xffb20030
    ctx->pc = 0x29504cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_295050:
    // 0x295050: 0xffb10020
    ctx->pc = 0x295050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_295054:
    // 0x295054: 0xffb00010
    ctx->pc = 0x295054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_295058:
    // 0x295058: 0xe7b400a0
    ctx->pc = 0x295058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_29505c:
    // 0x29505c: 0x80982d
    ctx->pc = 0x29505cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_295060:
    // 0x295060: 0xa0a02d
    ctx->pc = 0x295060u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_295064:
    // 0x295064: 0x8e620004
    ctx->pc = 0x295064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_295068:
    // 0x295068: 0x8c430130
    ctx->pc = 0x295068u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_29506c:
    // 0x29506c: 0x24020050
    ctx->pc = 0x29506cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
label_295070:
    // 0x295070: 0x2821018
    ctx->pc = 0x295070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_295074:
    // 0x295074: 0x8c630044
    ctx->pc = 0x295074u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_295078:
    // 0x295078: 0x438021
    ctx->pc = 0x295078u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29507c:
    // 0x29507c: 0x86030000
    ctx->pc = 0x29507cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_295080:
    // 0x295080: 0x2c62000a
    ctx->pc = 0x295080u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 10));
label_295084:
    // 0x295084: 0x104000f7
label_295088:
    if (ctx->pc == 0x295088u) {
        ctx->pc = 0x295088u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29508Cu;
        goto label_29508c;
    }
    ctx->pc = 0x295084u;
    {
        const bool branch_taken_0x295084 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x295088u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295084) {
            ctx->pc = 0x295464u;
            goto label_295464;
        }
    }
    ctx->pc = 0x29508Cu;
label_29508c:
    // 0x29508c: 0x3c02003b
    ctx->pc = 0x29508cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_295090:
    // 0x295090: 0x2442e280
    ctx->pc = 0x295090u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959744));
label_295094:
    // 0x295094: 0x31880
    ctx->pc = 0x295094u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_295098:
    // 0x295098: 0x621821
    ctx->pc = 0x295098u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29509c:
    // 0x29509c: 0x8c620000
    ctx->pc = 0x29509cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2950a0:
    // 0x2950a0: 0x400008
label_2950a4:
    if (ctx->pc == 0x2950A4u) {
        ctx->pc = 0x2950A8u;
        goto label_2950a8;
    }
    ctx->pc = 0x2950A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x295030u: goto label_295030;
            case 0x295034u: goto label_295034;
            case 0x295038u: goto label_295038;
            case 0x29503Cu: goto label_29503c;
            case 0x295040u: goto label_295040;
            case 0x295044u: goto label_295044;
            case 0x295048u: goto label_295048;
            case 0x29504Cu: goto label_29504c;
            case 0x295050u: goto label_295050;
            case 0x295054u: goto label_295054;
            case 0x295058u: goto label_295058;
            case 0x29505Cu: goto label_29505c;
            case 0x295060u: goto label_295060;
            case 0x295064u: goto label_295064;
            case 0x295068u: goto label_295068;
            case 0x29506Cu: goto label_29506c;
            case 0x295070u: goto label_295070;
            case 0x295074u: goto label_295074;
            case 0x295078u: goto label_295078;
            case 0x29507Cu: goto label_29507c;
            case 0x295080u: goto label_295080;
            case 0x295084u: goto label_295084;
            case 0x295088u: goto label_295088;
            case 0x29508Cu: goto label_29508c;
            case 0x295090u: goto label_295090;
            case 0x295094u: goto label_295094;
            case 0x295098u: goto label_295098;
            case 0x29509Cu: goto label_29509c;
            case 0x2950A0u: goto label_2950a0;
            case 0x2950A4u: goto label_2950a4;
            case 0x2950A8u: goto label_2950a8;
            case 0x2950ACu: goto label_2950ac;
            case 0x2950B0u: goto label_2950b0;
            case 0x2950B4u: goto label_2950b4;
            case 0x2950B8u: goto label_2950b8;
            case 0x2950BCu: goto label_2950bc;
            case 0x2950C0u: goto label_2950c0;
            case 0x2950C4u: goto label_2950c4;
            case 0x2950C8u: goto label_2950c8;
            case 0x2950CCu: goto label_2950cc;
            case 0x2950D0u: goto label_2950d0;
            case 0x2950D4u: goto label_2950d4;
            case 0x2950D8u: goto label_2950d8;
            case 0x2950DCu: goto label_2950dc;
            case 0x2950E0u: goto label_2950e0;
            case 0x2950E4u: goto label_2950e4;
            case 0x2950E8u: goto label_2950e8;
            case 0x2950ECu: goto label_2950ec;
            case 0x2950F0u: goto label_2950f0;
            case 0x2950F4u: goto label_2950f4;
            case 0x2950F8u: goto label_2950f8;
            case 0x2950FCu: goto label_2950fc;
            case 0x295100u: goto label_295100;
            case 0x295104u: goto label_295104;
            case 0x295108u: goto label_295108;
            case 0x29510Cu: goto label_29510c;
            case 0x295110u: goto label_295110;
            case 0x295114u: goto label_295114;
            case 0x295118u: goto label_295118;
            case 0x29511Cu: goto label_29511c;
            case 0x295120u: goto label_295120;
            case 0x295124u: goto label_295124;
            case 0x295128u: goto label_295128;
            case 0x29512Cu: goto label_29512c;
            case 0x295130u: goto label_295130;
            case 0x295134u: goto label_295134;
            case 0x295138u: goto label_295138;
            case 0x29513Cu: goto label_29513c;
            case 0x295140u: goto label_295140;
            case 0x295144u: goto label_295144;
            case 0x295148u: goto label_295148;
            case 0x29514Cu: goto label_29514c;
            case 0x295150u: goto label_295150;
            case 0x295154u: goto label_295154;
            case 0x295158u: goto label_295158;
            case 0x29515Cu: goto label_29515c;
            case 0x295160u: goto label_295160;
            case 0x295164u: goto label_295164;
            case 0x295168u: goto label_295168;
            case 0x29516Cu: goto label_29516c;
            case 0x295170u: goto label_295170;
            case 0x295174u: goto label_295174;
            case 0x295178u: goto label_295178;
            case 0x29517Cu: goto label_29517c;
            case 0x295180u: goto label_295180;
            case 0x295184u: goto label_295184;
            case 0x295188u: goto label_295188;
            case 0x29518Cu: goto label_29518c;
            case 0x295190u: goto label_295190;
            case 0x295194u: goto label_295194;
            case 0x295198u: goto label_295198;
            case 0x29519Cu: goto label_29519c;
            case 0x2951A0u: goto label_2951a0;
            case 0x2951A4u: goto label_2951a4;
            case 0x2951A8u: goto label_2951a8;
            case 0x2951ACu: goto label_2951ac;
            case 0x2951B0u: goto label_2951b0;
            case 0x2951B4u: goto label_2951b4;
            case 0x2951B8u: goto label_2951b8;
            case 0x2951BCu: goto label_2951bc;
            case 0x2951C0u: goto label_2951c0;
            case 0x2951C4u: goto label_2951c4;
            case 0x2951C8u: goto label_2951c8;
            case 0x2951CCu: goto label_2951cc;
            case 0x2951D0u: goto label_2951d0;
            case 0x2951D4u: goto label_2951d4;
            case 0x2951D8u: goto label_2951d8;
            case 0x2951DCu: goto label_2951dc;
            case 0x2951E0u: goto label_2951e0;
            case 0x2951E4u: goto label_2951e4;
            case 0x2951E8u: goto label_2951e8;
            case 0x2951ECu: goto label_2951ec;
            case 0x2951F0u: goto label_2951f0;
            case 0x2951F4u: goto label_2951f4;
            case 0x2951F8u: goto label_2951f8;
            case 0x2951FCu: goto label_2951fc;
            case 0x295200u: goto label_295200;
            case 0x295204u: goto label_295204;
            case 0x295208u: goto label_295208;
            case 0x29520Cu: goto label_29520c;
            case 0x295210u: goto label_295210;
            case 0x295214u: goto label_295214;
            case 0x295218u: goto label_295218;
            case 0x29521Cu: goto label_29521c;
            case 0x295220u: goto label_295220;
            case 0x295224u: goto label_295224;
            case 0x295228u: goto label_295228;
            case 0x29522Cu: goto label_29522c;
            case 0x295230u: goto label_295230;
            case 0x295234u: goto label_295234;
            case 0x295238u: goto label_295238;
            case 0x29523Cu: goto label_29523c;
            case 0x295240u: goto label_295240;
            case 0x295244u: goto label_295244;
            case 0x295248u: goto label_295248;
            case 0x29524Cu: goto label_29524c;
            case 0x295250u: goto label_295250;
            case 0x295254u: goto label_295254;
            case 0x295258u: goto label_295258;
            case 0x29525Cu: goto label_29525c;
            case 0x295260u: goto label_295260;
            case 0x295264u: goto label_295264;
            case 0x295268u: goto label_295268;
            case 0x29526Cu: goto label_29526c;
            case 0x295270u: goto label_295270;
            case 0x295274u: goto label_295274;
            case 0x295278u: goto label_295278;
            case 0x29527Cu: goto label_29527c;
            case 0x295280u: goto label_295280;
            case 0x295284u: goto label_295284;
            case 0x295288u: goto label_295288;
            case 0x29528Cu: goto label_29528c;
            case 0x295290u: goto label_295290;
            case 0x295294u: goto label_295294;
            case 0x295298u: goto label_295298;
            case 0x29529Cu: goto label_29529c;
            case 0x2952A0u: goto label_2952a0;
            case 0x2952A4u: goto label_2952a4;
            case 0x2952A8u: goto label_2952a8;
            case 0x2952ACu: goto label_2952ac;
            case 0x2952B0u: goto label_2952b0;
            case 0x2952B4u: goto label_2952b4;
            case 0x2952B8u: goto label_2952b8;
            case 0x2952BCu: goto label_2952bc;
            case 0x2952C0u: goto label_2952c0;
            case 0x2952C4u: goto label_2952c4;
            case 0x2952C8u: goto label_2952c8;
            case 0x2952CCu: goto label_2952cc;
            case 0x2952D0u: goto label_2952d0;
            case 0x2952D4u: goto label_2952d4;
            case 0x2952D8u: goto label_2952d8;
            case 0x2952DCu: goto label_2952dc;
            case 0x2952E0u: goto label_2952e0;
            case 0x2952E4u: goto label_2952e4;
            case 0x2952E8u: goto label_2952e8;
            case 0x2952ECu: goto label_2952ec;
            case 0x2952F0u: goto label_2952f0;
            case 0x2952F4u: goto label_2952f4;
            case 0x2952F8u: goto label_2952f8;
            case 0x2952FCu: goto label_2952fc;
            case 0x295300u: goto label_295300;
            case 0x295304u: goto label_295304;
            case 0x295308u: goto label_295308;
            case 0x29530Cu: goto label_29530c;
            case 0x295310u: goto label_295310;
            case 0x295314u: goto label_295314;
            case 0x295318u: goto label_295318;
            case 0x29531Cu: goto label_29531c;
            case 0x295320u: goto label_295320;
            case 0x295324u: goto label_295324;
            case 0x295328u: goto label_295328;
            case 0x29532Cu: goto label_29532c;
            case 0x295330u: goto label_295330;
            case 0x295334u: goto label_295334;
            case 0x295338u: goto label_295338;
            case 0x29533Cu: goto label_29533c;
            case 0x295340u: goto label_295340;
            case 0x295344u: goto label_295344;
            case 0x295348u: goto label_295348;
            case 0x29534Cu: goto label_29534c;
            case 0x295350u: goto label_295350;
            case 0x295354u: goto label_295354;
            case 0x295358u: goto label_295358;
            case 0x29535Cu: goto label_29535c;
            case 0x295360u: goto label_295360;
            case 0x295364u: goto label_295364;
            case 0x295368u: goto label_295368;
            case 0x29536Cu: goto label_29536c;
            case 0x295370u: goto label_295370;
            case 0x295374u: goto label_295374;
            case 0x295378u: goto label_295378;
            case 0x29537Cu: goto label_29537c;
            case 0x295380u: goto label_295380;
            case 0x295384u: goto label_295384;
            case 0x295388u: goto label_295388;
            case 0x29538Cu: goto label_29538c;
            case 0x295390u: goto label_295390;
            case 0x295394u: goto label_295394;
            case 0x295398u: goto label_295398;
            case 0x29539Cu: goto label_29539c;
            case 0x2953A0u: goto label_2953a0;
            case 0x2953A4u: goto label_2953a4;
            case 0x2953A8u: goto label_2953a8;
            case 0x2953ACu: goto label_2953ac;
            case 0x2953B0u: goto label_2953b0;
            case 0x2953B4u: goto label_2953b4;
            case 0x2953B8u: goto label_2953b8;
            case 0x2953BCu: goto label_2953bc;
            case 0x2953C0u: goto label_2953c0;
            case 0x2953C4u: goto label_2953c4;
            case 0x2953C8u: goto label_2953c8;
            case 0x2953CCu: goto label_2953cc;
            case 0x2953D0u: goto label_2953d0;
            case 0x2953D4u: goto label_2953d4;
            case 0x2953D8u: goto label_2953d8;
            case 0x2953DCu: goto label_2953dc;
            case 0x2953E0u: goto label_2953e0;
            case 0x2953E4u: goto label_2953e4;
            case 0x2953E8u: goto label_2953e8;
            case 0x2953ECu: goto label_2953ec;
            case 0x2953F0u: goto label_2953f0;
            case 0x2953F4u: goto label_2953f4;
            case 0x2953F8u: goto label_2953f8;
            case 0x2953FCu: goto label_2953fc;
            case 0x295400u: goto label_295400;
            case 0x295404u: goto label_295404;
            case 0x295408u: goto label_295408;
            case 0x29540Cu: goto label_29540c;
            case 0x295410u: goto label_295410;
            case 0x295414u: goto label_295414;
            case 0x295418u: goto label_295418;
            case 0x29541Cu: goto label_29541c;
            case 0x295420u: goto label_295420;
            case 0x295424u: goto label_295424;
            case 0x295428u: goto label_295428;
            case 0x29542Cu: goto label_29542c;
            case 0x295430u: goto label_295430;
            case 0x295434u: goto label_295434;
            case 0x295438u: goto label_295438;
            case 0x29543Cu: goto label_29543c;
            case 0x295440u: goto label_295440;
            case 0x295444u: goto label_295444;
            case 0x295448u: goto label_295448;
            case 0x29544Cu: goto label_29544c;
            case 0x295450u: goto label_295450;
            case 0x295454u: goto label_295454;
            case 0x295458u: goto label_295458;
            case 0x29545Cu: goto label_29545c;
            case 0x295460u: goto label_295460;
            case 0x295464u: goto label_295464;
            case 0x295468u: goto label_295468;
            case 0x29546Cu: goto label_29546c;
            case 0x295470u: goto label_295470;
            case 0x295474u: goto label_295474;
            case 0x295478u: goto label_295478;
            case 0x29547Cu: goto label_29547c;
            case 0x295480u: goto label_295480;
            case 0x295484u: goto label_295484;
            case 0x295488u: goto label_295488;
            case 0x29548Cu: goto label_29548c;
            case 0x295490u: goto label_295490;
            case 0x295494u: goto label_295494;
            case 0x295498u: goto label_295498;
            case 0x29549Cu: goto label_29549c;
            case 0x2954A0u: goto label_2954a0;
            case 0x2954A4u: goto label_2954a4;
            case 0x2954A8u: goto label_2954a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2950A8u;
label_2950a8:
    // 0x2950a8: 0x122000f4
label_2950ac:
    if (ctx->pc == 0x2950ACu) {
        ctx->pc = 0x2950ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x2950B0u;
        goto label_2950b0;
    }
    ctx->pc = 0x2950A8u;
    {
        const bool branch_taken_0x2950a8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2950ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2950a8) {
            ctx->pc = 0x29547Cu;
            goto label_29547c;
        }
    }
    ctx->pc = 0x2950B0u;
label_2950b0:
    // 0x2950b0: 0x8c42d7d8
    ctx->pc = 0x2950b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957016)));
label_2950b4:
    // 0x2950b4: 0x184000f1
label_2950b8:
    if (ctx->pc == 0x2950B8u) {
        ctx->pc = 0x2950B8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2950BCu;
        goto label_2950bc;
    }
    ctx->pc = 0x2950B4u;
    {
        const bool branch_taken_0x2950b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2950B8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2950b4) {
            ctx->pc = 0x29547Cu;
            goto label_29547c;
        }
    }
    ctx->pc = 0x2950BCu;
label_2950bc:
    // 0x2950bc: 0x3c17003a
    ctx->pc = 0x2950bcu;
    SET_GPR_U32(ctx, 23, ((uint32_t)58 << 16));
label_2950c0:
    // 0x2950c0: 0x3c020036
    ctx->pc = 0x2950c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2950c4:
    // 0x2950c4: 0x2456d758
    ctx->pc = 0x2950c4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294956888));
label_2950c8:
    // 0x2950c8: 0x3c150036
    ctx->pc = 0x2950c8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)54 << 16));
label_2950cc:
    // 0x2950cc: 0x260202d
    ctx->pc = 0x2950ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2950d0:
    // 0x2950d0: 0x280282d
    ctx->pc = 0x2950d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2950d4:
    // 0x2950d4: 0x302d
    ctx->pc = 0x2950d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2950d8:
    // 0x2950d8: 0xc0a520a
label_2950dc:
    if (ctx->pc == 0x2950DCu) {
        ctx->pc = 0x2950DCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 23), 9408));
        ctx->pc = 0x2950E0u;
        goto label_2950e0;
    }
    ctx->pc = 0x2950D8u;
    SET_GPR_U32(ctx, 31, 0x2950E0u);
    ctx->pc = 0x2950DCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 23), 9408));
    ctx->pc = 0x294828u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoDamageFX_0x294828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2950E0u; }
    }
    if (ctx->pc != 0x2950E0u) { return; }
    ctx->pc = 0x2950E0u;
label_2950e0:
    // 0x2950e0: 0x40882d
    ctx->pc = 0x2950e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2950e4:
    // 0x2950e4: 0x622000c
label_2950e8:
    if (ctx->pc == 0x2950E8u) {
        ctx->pc = 0x2950E8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x2950ECu;
        goto label_2950ec;
    }
    ctx->pc = 0x2950E4u;
    {
        const bool branch_taken_0x2950e4 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2950e4) {
            ctx->pc = 0x2950E8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x295118u;
            goto label_295118;
        }
    }
    ctx->pc = 0x2950ECu;
label_2950ec:
    // 0x2950ec: 0xc09ead0
label_2950f0:
    if (ctx->pc == 0x2950F0u) {
        ctx->pc = 0x2950F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2950F4u;
        goto label_2950f4;
    }
    ctx->pc = 0x2950ECu;
    SET_GPR_U32(ctx, 31, 0x2950F4u);
    ctx->pc = 0x2950F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27AB40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxGetNode_0x27ab40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2950F4u; }
    }
    if (ctx->pc != 0x2950F4u) { return; }
    ctx->pc = 0x2950F4u;
label_2950f4:
    // 0x2950f4: 0x40802d
    ctx->pc = 0x2950f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2950f8:
    // 0x2950f8: 0x121080
    ctx->pc = 0x2950f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_2950fc:
    // 0x2950fc: 0x561021
    ctx->pc = 0x2950fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_295100:
    // 0x295100: 0xc094db0
label_295104:
    if (ctx->pc == 0x295104u) {
        ctx->pc = 0x295104u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x295108u;
        goto label_295108;
    }
    ctx->pc = 0x295100u;
    SET_GPR_U32(ctx, 31, 0x295108u);
    ctx->pc = 0x295104u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2536C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemGetNode_0x2536c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295108u; }
    }
    if (ctx->pc != 0x295108u) { return; }
    ctx->pc = 0x295108u;
label_295108:
    // 0x295108: 0x200202d
    ctx->pc = 0x295108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29510c:
    // 0x29510c: 0xc0b3f94
label_295110:
    if (ctx->pc == 0x295110u) {
        ctx->pc = 0x295110u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295114u;
        goto label_295114;
    }
    ctx->pc = 0x29510Cu;
    SET_GPR_U32(ctx, 31, 0x295114u);
    ctx->pc = 0x295110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295114u; }
    }
    if (ctx->pc != 0x295114u) { return; }
    ctx->pc = 0x295114u;
label_295114:
    // 0x295114: 0x26520001
    ctx->pc = 0x295114u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_295118:
    // 0x295118: 0x8ea2d7d8
    ctx->pc = 0x295118u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294957016)));
label_29511c:
    // 0x29511c: 0x242102a
    ctx->pc = 0x29511cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_295120:
    // 0x295120: 0x1440ffeb
label_295124:
    if (ctx->pc == 0x295124u) {
        ctx->pc = 0x295124u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295128u;
        goto label_295128;
    }
    ctx->pc = 0x295120u;
    {
        const bool branch_taken_0x295120 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x295124u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295120) {
            ctx->pc = 0x2950D0u;
            goto label_2950d0;
        }
    }
    ctx->pc = 0x295128u;
label_295128:
    // 0x295128: 0x100000d5
label_29512c:
    if (ctx->pc == 0x29512Cu) {
        ctx->pc = 0x29512Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x295130u;
        goto label_295130;
    }
    ctx->pc = 0x295128u;
    {
        const bool branch_taken_0x295128 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29512Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x295128) {
            ctx->pc = 0x295480u;
            goto label_295480;
        }
    }
    ctx->pc = 0x295130u;
label_295130:
    // 0x295130: 0x122000d2
label_295134:
    if (ctx->pc == 0x295134u) {
        ctx->pc = 0x295134u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x295138u;
        goto label_295138;
    }
    ctx->pc = 0x295130u;
    {
        const bool branch_taken_0x295130 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x295134u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x295130) {
            ctx->pc = 0x29547Cu;
            goto label_29547c;
        }
    }
    ctx->pc = 0x295138u;
label_295138:
    // 0x295138: 0x8c42d7d8
    ctx->pc = 0x295138u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957016)));
label_29513c:
    // 0x29513c: 0x104000d0
label_295140:
    if (ctx->pc == 0x295140u) {
        ctx->pc = 0x295140u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x295144u;
        goto label_295144;
    }
    ctx->pc = 0x29513Cu;
    {
        const bool branch_taken_0x29513c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x295140u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x29513c) {
            ctx->pc = 0x295480u;
            goto label_295480;
        }
    }
    ctx->pc = 0x295144u;
label_295144:
    // 0x295144: 0xc0a7224
label_295148:
    if (ctx->pc == 0x295148u) {
        ctx->pc = 0x295148u;
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 304)));
        ctx->pc = 0x29514Cu;
        goto label_29514c;
    }
    ctx->pc = 0x295144u;
    SET_GPR_U32(ctx, 31, 0x29514Cu);
    ctx->pc = 0x295148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 304)));
    ctx->pc = 0x29C890u;
    {
        const uint32_t __entryPc = ctx->pc;
        SafeRockNearestTarget_0x29c890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29514Cu; }
    }
    if (ctx->pc != 0x29514Cu) { return; }
    ctx->pc = 0x29514Cu;
label_29514c:
    // 0x29514c: 0x3c120036
    ctx->pc = 0x29514cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)54 << 16));
label_295150:
    // 0x295150: 0x44000ca
label_295154:
    if (ctx->pc == 0x295154u) {
        ctx->pc = 0x295154u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294957020), GPR_U32(ctx, 2));
        ctx->pc = 0x295158u;
        goto label_295158;
    }
    ctx->pc = 0x295150u;
    {
        const bool branch_taken_0x295150 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x295154u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294957020), GPR_U32(ctx, 2));
        if (branch_taken_0x295150) {
            ctx->pc = 0x29547Cu;
            goto label_29547c;
        }
    }
    ctx->pc = 0x295158u;
label_295158:
    // 0x295158: 0x260202d
    ctx->pc = 0x295158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29515c:
    // 0x29515c: 0x280282d
    ctx->pc = 0x29515cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_295160:
    // 0x295160: 0x302d
    ctx->pc = 0x295160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295164:
    // 0x295164: 0x3c07003a
    ctx->pc = 0x295164u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
label_295168:
    // 0x295168: 0xc0a520a
label_29516c:
    if (ctx->pc == 0x29516Cu) {
        ctx->pc = 0x29516Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 9408));
        ctx->pc = 0x295170u;
        goto label_295170;
    }
    ctx->pc = 0x295168u;
    SET_GPR_U32(ctx, 31, 0x295170u);
    ctx->pc = 0x29516Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 9408));
    ctx->pc = 0x294828u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoDamageFX_0x294828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295170u; }
    }
    if (ctx->pc != 0x295170u) { return; }
    ctx->pc = 0x295170u;
label_295170:
    // 0x295170: 0x40882d
    ctx->pc = 0x295170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295174:
    // 0x295174: 0x62000c2
label_295178:
    if (ctx->pc == 0x295178u) {
        ctx->pc = 0x295178u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x29517Cu;
        goto label_29517c;
    }
    ctx->pc = 0x295174u;
    {
        const bool branch_taken_0x295174 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x295178u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x295174) {
            ctx->pc = 0x295480u;
            goto label_295480;
        }
    }
    ctx->pc = 0x29517Cu;
label_29517c:
    // 0x29517c: 0xc09ead0
label_295180:
    if (ctx->pc == 0x295180u) {
        ctx->pc = 0x295180u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295184u;
        goto label_295184;
    }
    ctx->pc = 0x29517Cu;
    SET_GPR_U32(ctx, 31, 0x295184u);
    ctx->pc = 0x295180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27AB40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxGetNode_0x27ab40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295184u; }
    }
    if (ctx->pc != 0x295184u) { return; }
    ctx->pc = 0x295184u;
label_295184:
    // 0x295184: 0x40802d
    ctx->pc = 0x295184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295188:
    // 0x295188: 0x3c030036
    ctx->pc = 0x295188u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
label_29518c:
    // 0x29518c: 0x2463d758
    ctx->pc = 0x29518cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294956888));
label_295190:
    // 0x295190: 0x8e42d7dc
    ctx->pc = 0x295190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294957020)));
label_295194:
    // 0x295194: 0x21080
    ctx->pc = 0x295194u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_295198:
    // 0x295198: 0x431021
    ctx->pc = 0x295198u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29519c:
    // 0x29519c: 0xc094db0
label_2951a0:
    if (ctx->pc == 0x2951A0u) {
        ctx->pc = 0x2951A0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2951A4u;
        goto label_2951a4;
    }
    ctx->pc = 0x29519Cu;
    SET_GPR_U32(ctx, 31, 0x2951A4u);
    ctx->pc = 0x2951A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2536C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemGetNode_0x2536c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2951A4u; }
    }
    if (ctx->pc != 0x2951A4u) { return; }
    ctx->pc = 0x2951A4u;
label_2951a4:
    // 0x2951a4: 0x200202d
    ctx->pc = 0x2951a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2951a8:
    // 0x2951a8: 0xc0b3f94
label_2951ac:
    if (ctx->pc == 0x2951ACu) {
        ctx->pc = 0x2951ACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2951B0u;
        goto label_2951b0;
    }
    ctx->pc = 0x2951A8u;
    SET_GPR_U32(ctx, 31, 0x2951B0u);
    ctx->pc = 0x2951ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2951B0u; }
    }
    if (ctx->pc != 0x2951B0u) { return; }
    ctx->pc = 0x2951B0u;
label_2951b0:
    // 0x2951b0: 0xc0a4fb4
label_2951b4:
    if (ctx->pc == 0x2951B4u) {
        ctx->pc = 0x2951B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2951B8u;
        goto label_2951b8;
    }
    ctx->pc = 0x2951B0u;
    SET_GPR_U32(ctx, 31, 0x2951B8u);
    ctx->pc = 0x2951B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x293ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CriterSfxNumFrames_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2951B8u; }
    }
    if (ctx->pc != 0x2951B8u) { return; }
    ctx->pc = 0x2951B8u;
label_2951b8:
    // 0x2951b8: 0x3c030036
    ctx->pc = 0x2951b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
label_2951bc:
    // 0x2951bc: 0x2463d798
    ctx->pc = 0x2951bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294956952));
label_2951c0:
    // 0x2951c0: 0x8e44d7dc
    ctx->pc = 0x2951c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4294957020)));
label_2951c4:
    // 0x2951c4: 0x42080
    ctx->pc = 0x2951c4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_2951c8:
    // 0x2951c8: 0x832021
    ctx->pc = 0x2951c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2951cc:
    // 0x2951cc: 0x2442ffff
    ctx->pc = 0x2951ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2951d0:
    // 0x2951d0: 0x44820000
    ctx->pc = 0x2951d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_2951d4:
    // 0x2951d4: 0x46800020
    ctx->pc = 0x2951d4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2951d8:
    // 0x2951d8: 0x3c013d08
    ctx->pc = 0x2951d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
label_2951dc:
    // 0x2951dc: 0x34218880
    ctx->pc = 0x2951dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34944));
label_2951e0:
    // 0x2951e0: 0x44810800
    ctx->pc = 0x2951e0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2951e4:
    // 0x2951e4: 0x46010002
    ctx->pc = 0x2951e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2951e8:
    // 0x2951e8: 0x100000a4
label_2951ec:
    if (ctx->pc == 0x2951ECu) {
        ctx->pc = 0x2951ECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x2951F0u;
        goto label_2951f0;
    }
    ctx->pc = 0x2951E8u;
    {
        const bool branch_taken_0x2951e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2951ECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x2951e8) {
            ctx->pc = 0x29547Cu;
            goto label_29547c;
        }
    }
    ctx->pc = 0x2951F0u;
label_2951f0:
    // 0x2951f0: 0x122000a2
label_2951f4:
    if (ctx->pc == 0x2951F4u) {
        ctx->pc = 0x2951F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2951F8u;
        goto label_2951f8;
    }
    ctx->pc = 0x2951F0u;
    {
        const bool branch_taken_0x2951f0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2951F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2951f0) {
            ctx->pc = 0x29547Cu;
            goto label_29547c;
        }
    }
    ctx->pc = 0x2951F8u;
label_2951f8:
    // 0x2951f8: 0x280282d
    ctx->pc = 0x2951f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2951fc:
    // 0x2951fc: 0x302d
    ctx->pc = 0x2951fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295200:
    // 0x295200: 0xc0a520a
label_295204:
    if (ctx->pc == 0x295204u) {
        ctx->pc = 0x295204u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 576));
        ctx->pc = 0x295208u;
        goto label_295208;
    }
    ctx->pc = 0x295200u;
    SET_GPR_U32(ctx, 31, 0x295208u);
    ctx->pc = 0x295204u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 576));
    ctx->pc = 0x294828u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoDamageFX_0x294828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295208u; }
    }
    if (ctx->pc != 0x295208u) { return; }
    ctx->pc = 0x295208u;
label_295208:
    // 0x295208: 0x1000009d
label_29520c:
    if (ctx->pc == 0x29520Cu) {
        ctx->pc = 0x29520Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x295210u;
        goto label_295210;
    }
    ctx->pc = 0x295208u;
    {
        const bool branch_taken_0x295208 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29520Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x295208) {
            ctx->pc = 0x295480u;
            goto label_295480;
        }
    }
    ctx->pc = 0x295210u;
label_295210:
    // 0x295210: 0x260202d
    ctx->pc = 0x295210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_295214:
    // 0x295214: 0x200282d
    ctx->pc = 0x295214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_295218:
    // 0x295218: 0xc0a6f12
label_29521c:
    if (ctx->pc == 0x29521Cu) {
        ctx->pc = 0x29521Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x295220u;
        goto label_295220;
    }
    ctx->pc = 0x295218u;
    SET_GPR_U32(ctx, 31, 0x295220u);
    ctx->pc = 0x29521Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x29BC48u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterNodePlayerCollide_0x29bc48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295220u; }
    }
    if (ctx->pc != 0x295220u) { return; }
    ctx->pc = 0x295220u;
label_295220:
    // 0x295220: 0x260202d
    ctx->pc = 0x295220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_295224:
    // 0x295224: 0xc0a728e
label_295228:
    if (ctx->pc == 0x295228u) {
        ctx->pc = 0x295228u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29522Cu;
        goto label_29522c;
    }
    ctx->pc = 0x295224u;
    SET_GPR_U32(ctx, 31, 0x29522Cu);
    ctx->pc = 0x295228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29CA38u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterNodeEnemyCollide_0x29ca38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29522Cu; }
    }
    if (ctx->pc != 0x29522Cu) { return; }
    ctx->pc = 0x29522Cu;
label_29522c:
    // 0x29522c: 0x12200005
label_295230:
    if (ctx->pc == 0x295230u) {
        ctx->pc = 0x295230u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295234u;
        goto label_295234;
    }
    ctx->pc = 0x29522Cu;
    {
        const bool branch_taken_0x29522c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x295230u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29522c) {
            ctx->pc = 0x295244u;
            goto label_295244;
        }
    }
    ctx->pc = 0x295234u;
label_295234:
    // 0x295234: 0x280282d
    ctx->pc = 0x295234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_295238:
    // 0x295238: 0x24060001
    ctx->pc = 0x295238u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_29523c:
    // 0x29523c: 0xc0a520a
label_295240:
    if (ctx->pc == 0x295240u) {
        ctx->pc = 0x295240u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295244u;
        goto label_295244;
    }
    ctx->pc = 0x29523Cu;
    SET_GPR_U32(ctx, 31, 0x295244u);
    ctx->pc = 0x295240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x294828u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoDamageFX_0x294828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295244u; }
    }
    if (ctx->pc != 0x295244u) { return; }
    ctx->pc = 0x295244u;
label_295244:
    // 0x295244: 0x8e6400e0
    ctx->pc = 0x295244u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_295248:
    // 0x295248: 0x5480003f
label_29524c:
    if (ctx->pc == 0x29524Cu) {
        ctx->pc = 0x29524Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x295250u;
        goto label_295250;
    }
    ctx->pc = 0x295248u;
    {
        const bool branch_taken_0x295248 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x295248) {
            ctx->pc = 0x29524Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x295348u;
            goto label_295348;
        }
    }
    ctx->pc = 0x295250u;
label_295250:
    // 0x295250: 0x10000041
label_295254:
    if (ctx->pc == 0x295254u) {
        ctx->pc = 0x295254u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x295258u;
        goto label_295258;
    }
    ctx->pc = 0x295250u;
    {
        const bool branch_taken_0x295250 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295254u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x295250) {
            ctx->pc = 0x295358u;
            goto label_295358;
        }
    }
    ctx->pc = 0x295258u;
label_295258:
    // 0x295258: 0x260202d
    ctx->pc = 0x295258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29525c:
    // 0x29525c: 0xc0a6fbe
label_295260:
    if (ctx->pc == 0x295260u) {
        ctx->pc = 0x295260u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295264u;
        goto label_295264;
    }
    ctx->pc = 0x29525Cu;
    SET_GPR_U32(ctx, 31, 0x295264u);
    ctx->pc = 0x295260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29BEF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterFirePlayerCollide_0x29bef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295264u; }
    }
    if (ctx->pc != 0x295264u) { return; }
    ctx->pc = 0x295264u;
label_295264:
    // 0x295264: 0x12200005
label_295268:
    if (ctx->pc == 0x295268u) {
        ctx->pc = 0x295268u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29526Cu;
        goto label_29526c;
    }
    ctx->pc = 0x295264u;
    {
        const bool branch_taken_0x295264 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x295268u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295264) {
            ctx->pc = 0x29527Cu;
            goto label_29527c;
        }
    }
    ctx->pc = 0x29526Cu;
label_29526c:
    // 0x29526c: 0x280282d
    ctx->pc = 0x29526cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_295270:
    // 0x295270: 0x24060001
    ctx->pc = 0x295270u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_295274:
    // 0x295274: 0xc0a520a
label_295278:
    if (ctx->pc == 0x295278u) {
        ctx->pc = 0x295278u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29527Cu;
        goto label_29527c;
    }
    ctx->pc = 0x295274u;
    SET_GPR_U32(ctx, 31, 0x29527Cu);
    ctx->pc = 0x295278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x294828u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoDamageFX_0x294828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29527Cu; }
    }
    if (ctx->pc != 0x29527Cu) { return; }
    ctx->pc = 0x29527Cu;
label_29527c:
    // 0x29527c: 0x8e6400e0
    ctx->pc = 0x29527cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_295280:
    // 0x295280: 0x10800009
label_295284:
    if (ctx->pc == 0x295284u) {
        ctx->pc = 0x295284u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x295288u;
        goto label_295288;
    }
    ctx->pc = 0x295280u;
    {
        const bool branch_taken_0x295280 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x295284u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x295280) {
            ctx->pc = 0x2952A8u;
            goto label_2952a8;
        }
    }
    ctx->pc = 0x295288u;
label_295288:
    // 0x295288: 0xc60c0008
    ctx->pc = 0x295288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_29528c:
    // 0x29528c: 0xc60d000c
    ctx->pc = 0x29528cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_295290:
    // 0x295290: 0xc60e001c
    ctx->pc = 0x295290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_295294:
    // 0x295294: 0xc60f0014
    ctx->pc = 0x295294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_295298:
    // 0x295298: 0xc09fef8
label_29529c:
    if (ctx->pc == 0x29529Cu) {
        ctx->pc = 0x29529Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2952A0u;
        goto label_2952a0;
    }
    ctx->pc = 0x295298u;
    SET_GPR_U32(ctx, 31, 0x2952A0u);
    ctx->pc = 0x29529Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27FBE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DmgFxConeUpdate_0x27fbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2952A0u; }
    }
    if (ctx->pc != 0x2952A0u) { return; }
    ctx->pc = 0x2952A0u;
label_2952a0:
    // 0x2952a0: 0x10000077
label_2952a4:
    if (ctx->pc == 0x2952A4u) {
        ctx->pc = 0x2952A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2952A8u;
        goto label_2952a8;
    }
    ctx->pc = 0x2952A0u;
    {
        const bool branch_taken_0x2952a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2952A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x2952a0) {
            ctx->pc = 0x295480u;
            goto label_295480;
        }
    }
    ctx->pc = 0x2952A8u;
label_2952a8:
    // 0x2952a8: 0xdc420e28
    ctx->pc = 0x2952a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
label_2952ac:
    // 0x2952ac: 0x30420010
    ctx->pc = 0x2952acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
label_2952b0:
    // 0x2952b0: 0x10400072
label_2952b4:
    if (ctx->pc == 0x2952B4u) {
        ctx->pc = 0x2952B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2952B8u;
        goto label_2952b8;
    }
    ctx->pc = 0x2952B0u;
    {
        const bool branch_taken_0x2952b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2952B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2952b0) {
            ctx->pc = 0x29547Cu;
            goto label_29547c;
        }
    }
    ctx->pc = 0x2952B8u;
label_2952b8:
    // 0x2952b8: 0x8c420008
    ctx->pc = 0x2952b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2952bc:
    // 0x2952bc: 0x1040006f
label_2952c0:
    if (ctx->pc == 0x2952C0u) {
        ctx->pc = 0x2952C0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2952C4u;
        goto label_2952c4;
    }
    ctx->pc = 0x2952BCu;
    {
        const bool branch_taken_0x2952bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2952C0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 32));
        if (branch_taken_0x2952bc) {
            ctx->pc = 0x29547Cu;
            goto label_29547c;
        }
    }
    ctx->pc = 0x2952C4u;
label_2952c4:
    // 0x2952c4: 0xc60c0008
    ctx->pc = 0x2952c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2952c8:
    // 0x2952c8: 0xc60d000c
    ctx->pc = 0x2952c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2952cc:
    // 0x2952cc: 0xc60e001c
    ctx->pc = 0x2952ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2952d0:
    // 0x2952d0: 0xc60f0014
    ctx->pc = 0x2952d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_2952d4:
    // 0x2952d4: 0x8e6400dc
    ctx->pc = 0x2952d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_2952d8:
    // 0x2952d8: 0xc09ff52
label_2952dc:
    if (ctx->pc == 0x2952DCu) {
        ctx->pc = 0x2952DCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2952E0u;
        goto label_2952e0;
    }
    ctx->pc = 0x2952D8u;
    SET_GPR_U32(ctx, 31, 0x2952E0u);
    ctx->pc = 0x2952DCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27FD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        DmgFxConeAdd_0x27fd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2952E0u; }
    }
    if (ctx->pc != 0x2952E0u) { return; }
    ctx->pc = 0x2952E0u;
label_2952e0:
    // 0x2952e0: 0x10000066
label_2952e4:
    if (ctx->pc == 0x2952E4u) {
        ctx->pc = 0x2952E4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x2952E8u;
        goto label_2952e8;
    }
    ctx->pc = 0x2952E0u;
    {
        const bool branch_taken_0x2952e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2952E4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 2));
        if (branch_taken_0x2952e0) {
            ctx->pc = 0x29547Cu;
            goto label_29547c;
        }
    }
    ctx->pc = 0x2952E8u;
label_2952e8:
    // 0x2952e8: 0x12200064
label_2952ec:
    if (ctx->pc == 0x2952ECu) {
        ctx->pc = 0x2952ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2952F0u;
        goto label_2952f0;
    }
    ctx->pc = 0x2952E8u;
    {
        const bool branch_taken_0x2952e8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2952ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2952e8) {
            ctx->pc = 0x29547Cu;
            goto label_29547c;
        }
    }
    ctx->pc = 0x2952F0u;
label_2952f0:
    // 0x2952f0: 0x280282d
    ctx->pc = 0x2952f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2952f4:
    // 0x2952f4: 0x302d
    ctx->pc = 0x2952f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2952f8:
    // 0x2952f8: 0xc0a520a
label_2952fc:
    if (ctx->pc == 0x2952FCu) {
        ctx->pc = 0x2952FCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 1040));
        ctx->pc = 0x295300u;
        goto label_295300;
    }
    ctx->pc = 0x2952F8u;
    SET_GPR_U32(ctx, 31, 0x295300u);
    ctx->pc = 0x2952FCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 1040));
    ctx->pc = 0x294828u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoDamageFX_0x294828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295300u; }
    }
    if (ctx->pc != 0x295300u) { return; }
    ctx->pc = 0x295300u;
label_295300:
    // 0x295300: 0x1000005f
label_295304:
    if (ctx->pc == 0x295304u) {
        ctx->pc = 0x295304u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x295308u;
        goto label_295308;
    }
    ctx->pc = 0x295300u;
    {
        const bool branch_taken_0x295300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295304u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x295300) {
            ctx->pc = 0x295480u;
            goto label_295480;
        }
    }
    ctx->pc = 0x295308u;
label_295308:
    // 0x295308: 0x24020001
    ctx->pc = 0x295308u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_29530c:
    // 0x29530c: 0x14c20021
label_295310:
    if (ctx->pc == 0x295310u) {
        ctx->pc = 0x295310u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x295314u;
        goto label_295314;
    }
    ctx->pc = 0x29530Cu;
    {
        const bool branch_taken_0x29530c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x295310u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x29530c) {
            ctx->pc = 0x295394u;
            goto label_295394;
        }
    }
    ctx->pc = 0x295314u;
label_295314:
    // 0x295314: 0x260202d
    ctx->pc = 0x295314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_295318:
    // 0x295318: 0xc0a7066
label_29531c:
    if (ctx->pc == 0x29531Cu) {
        ctx->pc = 0x29531Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295320u;
        goto label_295320;
    }
    ctx->pc = 0x295318u;
    SET_GPR_U32(ctx, 31, 0x295320u);
    ctx->pc = 0x29531Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29C198u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGrabPlayer_0x29c198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295320u; }
    }
    if (ctx->pc != 0x295320u) { return; }
    ctx->pc = 0x295320u;
label_295320:
    // 0x295320: 0x12200005
label_295324:
    if (ctx->pc == 0x295324u) {
        ctx->pc = 0x295324u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295328u;
        goto label_295328;
    }
    ctx->pc = 0x295320u;
    {
        const bool branch_taken_0x295320 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x295324u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295320) {
            ctx->pc = 0x295338u;
            goto label_295338;
        }
    }
    ctx->pc = 0x295328u;
label_295328:
    // 0x295328: 0x280282d
    ctx->pc = 0x295328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29532c:
    // 0x29532c: 0x302d
    ctx->pc = 0x29532cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295330:
    // 0x295330: 0xc0a520a
label_295334:
    if (ctx->pc == 0x295334u) {
        ctx->pc = 0x295334u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 1040));
        ctx->pc = 0x295338u;
        goto label_295338;
    }
    ctx->pc = 0x295330u;
    SET_GPR_U32(ctx, 31, 0x295338u);
    ctx->pc = 0x295334u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 1040));
    ctx->pc = 0x294828u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoDamageFX_0x294828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295338u; }
    }
    if (ctx->pc != 0x295338u) { return; }
    ctx->pc = 0x295338u;
label_295338:
    // 0x295338: 0x8e6400e0
    ctx->pc = 0x295338u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_29533c:
    // 0x29533c: 0x10800006
label_295340:
    if (ctx->pc == 0x295340u) {
        ctx->pc = 0x295340u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x295344u;
        goto label_295344;
    }
    ctx->pc = 0x29533Cu;
    {
        const bool branch_taken_0x29533c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x295340u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x29533c) {
            ctx->pc = 0x295358u;
            goto label_295358;
        }
    }
    ctx->pc = 0x295344u;
label_295344:
    // 0x295344: 0xc60c000c
    ctx->pc = 0x295344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_295348:
    // 0x295348: 0xc09fef4
label_29534c:
    if (ctx->pc == 0x29534Cu) {
        ctx->pc = 0x29534Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x295350u;
        goto label_295350;
    }
    ctx->pc = 0x295348u;
    SET_GPR_U32(ctx, 31, 0x295350u);
    ctx->pc = 0x29534Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27FBD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DmgFxCircleUpdate_0x27fbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295350u; }
    }
    if (ctx->pc != 0x295350u) { return; }
    ctx->pc = 0x295350u;
label_295350:
    // 0x295350: 0x1000004b
label_295354:
    if (ctx->pc == 0x295354u) {
        ctx->pc = 0x295354u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x295358u;
        goto label_295358;
    }
    ctx->pc = 0x295350u;
    {
        const bool branch_taken_0x295350 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295354u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x295350) {
            ctx->pc = 0x295480u;
            goto label_295480;
        }
    }
    ctx->pc = 0x295358u;
label_295358:
    // 0x295358: 0xdc420e28
    ctx->pc = 0x295358u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
label_29535c:
    // 0x29535c: 0x30420010
    ctx->pc = 0x29535cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
label_295360:
    // 0x295360: 0x10400046
label_295364:
    if (ctx->pc == 0x295364u) {
        ctx->pc = 0x295364u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x295368u;
        goto label_295368;
    }
    ctx->pc = 0x295360u;
    {
        const bool branch_taken_0x295360 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x295364u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x295360) {
            ctx->pc = 0x29547Cu;
            goto label_29547c;
        }
    }
    ctx->pc = 0x295368u;
label_295368:
    // 0x295368: 0x8c420008
    ctx->pc = 0x295368u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_29536c:
    // 0x29536c: 0x10400043
label_295370:
    if (ctx->pc == 0x295370u) {
        ctx->pc = 0x295370u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x295374u;
        goto label_295374;
    }
    ctx->pc = 0x29536Cu;
    {
        const bool branch_taken_0x29536c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x295370u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 32));
        if (branch_taken_0x29536c) {
            ctx->pc = 0x29547Cu;
            goto label_29547c;
        }
    }
    ctx->pc = 0x295374u;
label_295374:
    // 0x295374: 0xc60c000c
    ctx->pc = 0x295374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_295378:
    // 0x295378: 0xc60d001c
    ctx->pc = 0x295378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_29537c:
    // 0x29537c: 0xc60e0014
    ctx->pc = 0x29537cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_295380:
    // 0x295380: 0x8e6400dc
    ctx->pc = 0x295380u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_295384:
    // 0x295384: 0xc09ff46
label_295388:
    if (ctx->pc == 0x295388u) {
        ctx->pc = 0x295388u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29538Cu;
        goto label_29538c;
    }
    ctx->pc = 0x295384u;
    SET_GPR_U32(ctx, 31, 0x29538Cu);
    ctx->pc = 0x295388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27FD18u;
    {
        const uint32_t __entryPc = ctx->pc;
        DmgFxCircleAdd_0x27fd18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29538Cu; }
    }
    if (ctx->pc != 0x29538Cu) { return; }
    ctx->pc = 0x29538Cu;
label_29538c:
    // 0x29538c: 0x1000003b
label_295390:
    if (ctx->pc == 0x295390u) {
        ctx->pc = 0x295390u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x295394u;
        goto label_295394;
    }
    ctx->pc = 0x29538Cu;
    {
        const bool branch_taken_0x29538c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295390u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 2));
        if (branch_taken_0x29538c) {
            ctx->pc = 0x29547Cu;
            goto label_29547c;
        }
    }
    ctx->pc = 0x295394u;
label_295394:
    // 0x295394: 0x14c2003a
label_295398:
    if (ctx->pc == 0x295398u) {
        ctx->pc = 0x295398u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x29539Cu;
        goto label_29539c;
    }
    ctx->pc = 0x295394u;
    {
        const bool branch_taken_0x295394 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x295398u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x295394) {
            ctx->pc = 0x295480u;
            goto label_295480;
        }
    }
    ctx->pc = 0x29539Cu;
label_29539c:
    // 0x29539c: 0x260202d
    ctx->pc = 0x29539cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2953a0:
    // 0x2953a0: 0xc0a7092
label_2953a4:
    if (ctx->pc == 0x2953A4u) {
        ctx->pc = 0x2953A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2953A8u;
        goto label_2953a8;
    }
    ctx->pc = 0x2953A0u;
    SET_GPR_U32(ctx, 31, 0x2953A8u);
    ctx->pc = 0x2953A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29C248u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterReleasePlayer_0x29c248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2953A8u; }
    }
    if (ctx->pc != 0x2953A8u) { return; }
    ctx->pc = 0x2953A8u;
label_2953a8:
    // 0x2953a8: 0x10000035
label_2953ac:
    if (ctx->pc == 0x2953ACu) {
        ctx->pc = 0x2953ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2953B0u;
        goto label_2953b0;
    }
    ctx->pc = 0x2953A8u;
    {
        const bool branch_taken_0x2953a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2953ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x2953a8) {
            ctx->pc = 0x295480u;
            goto label_295480;
        }
    }
    ctx->pc = 0x2953B0u;
label_2953b0:
    // 0x2953b0: 0x12200032
label_2953b4:
    if (ctx->pc == 0x2953B4u) {
        ctx->pc = 0x2953B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2953B8u;
        goto label_2953b8;
    }
    ctx->pc = 0x2953B0u;
    {
        const bool branch_taken_0x2953b0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2953B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2953b0) {
            ctx->pc = 0x29547Cu;
            goto label_29547c;
        }
    }
    ctx->pc = 0x2953B8u;
label_2953b8:
    // 0x2953b8: 0x280282d
    ctx->pc = 0x2953b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2953bc:
    // 0x2953bc: 0x24060001
    ctx->pc = 0x2953bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_2953c0:
    // 0x2953c0: 0xc0a520a
label_2953c4:
    if (ctx->pc == 0x2953C4u) {
        ctx->pc = 0x2953C4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2953C8u;
        goto label_2953c8;
    }
    ctx->pc = 0x2953C0u;
    SET_GPR_U32(ctx, 31, 0x2953C8u);
    ctx->pc = 0x2953C4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x294828u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoDamageFX_0x294828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2953C8u; }
    }
    if (ctx->pc != 0x2953C8u) { return; }
    ctx->pc = 0x2953C8u;
label_2953c8:
    // 0x2953c8: 0x1000002d
label_2953cc:
    if (ctx->pc == 0x2953CCu) {
        ctx->pc = 0x2953CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2953D0u;
        goto label_2953d0;
    }
    ctx->pc = 0x2953C8u;
    {
        const bool branch_taken_0x2953c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2953CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x2953c8) {
            ctx->pc = 0x295480u;
            goto label_295480;
        }
    }
    ctx->pc = 0x2953D0u;
label_2953d0:
    // 0x2953d0: 0x1220002b
label_2953d4:
    if (ctx->pc == 0x2953D4u) {
        ctx->pc = 0x2953D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2953D8u;
        goto label_2953d8;
    }
    ctx->pc = 0x2953D0u;
    {
        const bool branch_taken_0x2953d0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2953D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x2953d0) {
            ctx->pc = 0x295480u;
            goto label_295480;
        }
    }
    ctx->pc = 0x2953D8u;
label_2953d8:
    // 0x2953d8: 0xc0ba00a
label_2953dc:
    if (ctx->pc == 0x2953DCu) {
        ctx->pc = 0x2953DCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2953E0u;
        goto label_2953e0;
    }
    ctx->pc = 0x2953D8u;
    SET_GPR_U32(ctx, 31, 0x2953E0u);
    ctx->pc = 0x2953DCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E8028u;
    {
        const uint32_t __entryPc = ctx->pc;
        acosf_0x2e8028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2953E0u; }
    }
    if (ctx->pc != 0x2953E0u) { return; }
    ctx->pc = 0x2953E0u;
label_2953e0:
    // 0x2953e0: 0x46000506
    ctx->pc = 0x2953e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2953e4:
    // 0x2953e4: 0xc6600440
    ctx->pc = 0x2953e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2953e8:
    // 0x2953e8: 0xe7a00000
    ctx->pc = 0x2953e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2953ec:
    // 0x2953ec: 0xc6600444
    ctx->pc = 0x2953ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2953f0:
    // 0x2953f0: 0xe7a00004
    ctx->pc = 0x2953f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2953f4:
    // 0x2953f4: 0xc6600448
    ctx->pc = 0x2953f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2953f8:
    // 0x2953f8: 0xe7a00008
    ctx->pc = 0x2953f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2953fc:
    // 0x2953fc: 0x3a0202d
    ctx->pc = 0x2953fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_295400:
    // 0x295400: 0x3a0282d
    ctx->pc = 0x295400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_295404:
    // 0x295404: 0xc0b57e6
label_295408:
    if (ctx->pc == 0x295408u) {
        ctx->pc = 0x295408u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x29540Cu;
        goto label_29540c;
    }
    ctx->pc = 0x295404u;
    SET_GPR_U32(ctx, 31, 0x29540Cu);
    ctx->pc = 0x295408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29540Cu; }
    }
    if (ctx->pc != 0x29540Cu) { return; }
    ctx->pc = 0x29540Cu;
label_29540c:
    // 0x29540c: 0x3a0202d
    ctx->pc = 0x29540cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_295410:
    // 0x295410: 0x3a0282d
    ctx->pc = 0x295410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_295414:
    // 0x295414: 0xc0b580a
label_295418:
    if (ctx->pc == 0x295418u) {
        ctx->pc = 0x295418u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x29541Cu;
        goto label_29541c;
    }
    ctx->pc = 0x295414u;
    SET_GPR_U32(ctx, 31, 0x29541Cu);
    ctx->pc = 0x295418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D6028u;
    {
        const uint32_t __entryPc = ctx->pc;
        PitchVec3_0x2d6028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29541Cu; }
    }
    if (ctx->pc != 0x29541Cu) { return; }
    ctx->pc = 0x29541Cu;
label_29541c:
    // 0x29541c: 0xc7a00000
    ctx->pc = 0x29541cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295420:
    // 0x295420: 0xc6010030
    ctx->pc = 0x295420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295424:
    // 0x295424: 0x46010002
    ctx->pc = 0x295424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_295428:
    // 0x295428: 0xe7a00000
    ctx->pc = 0x295428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_29542c:
    // 0x29542c: 0xc7a00004
    ctx->pc = 0x29542cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295430:
    // 0x295430: 0xc6010030
    ctx->pc = 0x295430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295434:
    // 0x295434: 0x46010002
    ctx->pc = 0x295434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_295438:
    // 0x295438: 0xe7a00004
    ctx->pc = 0x295438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_29543c:
    // 0x29543c: 0xc7a00008
    ctx->pc = 0x29543cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295440:
    // 0x295440: 0xc6010030
    ctx->pc = 0x295440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295444:
    // 0x295444: 0x46010002
    ctx->pc = 0x295444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_295448:
    // 0x295448: 0xe7a00008
    ctx->pc = 0x295448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_29544c:
    // 0x29544c: 0x26640410
    ctx->pc = 0x29544cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 1040));
label_295450:
    // 0x295450: 0x3a0282d
    ctx->pc = 0x295450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_295454:
    // 0x295454: 0xc0a7b38
label_295458:
    if (ctx->pc == 0x295458u) {
        ctx->pc = 0x295458u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x29545Cu;
        goto label_29545c;
    }
    ctx->pc = 0x295454u;
    SET_GPR_U32(ctx, 31, 0x29545Cu);
    ctx->pc = 0x295458u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x29ECE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossSpewCoins_0x29ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29545Cu; }
    }
    if (ctx->pc != 0x29545Cu) { return; }
    ctx->pc = 0x29545Cu;
label_29545c:
    // 0x29545c: 0x10000008
label_295460:
    if (ctx->pc == 0x295460u) {
        ctx->pc = 0x295460u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x295464u;
        goto label_295464;
    }
    ctx->pc = 0x29545Cu;
    {
        const bool branch_taken_0x29545c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295460u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x29545c) {
            ctx->pc = 0x295480u;
            goto label_295480;
        }
    }
    ctx->pc = 0x295464u;
label_295464:
    // 0x295464: 0x12200005
label_295468:
    if (ctx->pc == 0x295468u) {
        ctx->pc = 0x295468u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29546Cu;
        goto label_29546c;
    }
    ctx->pc = 0x295464u;
    {
        const bool branch_taken_0x295464 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x295468u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295464) {
            ctx->pc = 0x29547Cu;
            goto label_29547c;
        }
    }
    ctx->pc = 0x29546Cu;
label_29546c:
    // 0x29546c: 0x280282d
    ctx->pc = 0x29546cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_295470:
    // 0x295470: 0x24060001
    ctx->pc = 0x295470u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_295474:
    // 0x295474: 0xc0a520a
label_295478:
    if (ctx->pc == 0x295478u) {
        ctx->pc = 0x295478u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29547Cu;
        goto label_29547c;
    }
    ctx->pc = 0x295474u;
    SET_GPR_U32(ctx, 31, 0x29547Cu);
    ctx->pc = 0x295478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x294828u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoDamageFX_0x294828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29547Cu; }
    }
    if (ctx->pc != 0x29547Cu) { return; }
    ctx->pc = 0x29547Cu;
label_29547c:
    // 0x29547c: 0xdfbf0090
    ctx->pc = 0x29547cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_295480:
    // 0x295480: 0xdfb70080
    ctx->pc = 0x295480u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_295484:
    // 0x295484: 0xdfb60070
    ctx->pc = 0x295484u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_295488:
    // 0x295488: 0xdfb50060
    ctx->pc = 0x295488u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_29548c:
    // 0x29548c: 0xdfb40050
    ctx->pc = 0x29548cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_295490:
    // 0x295490: 0xdfb30040
    ctx->pc = 0x295490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_295494:
    // 0x295494: 0xdfb20030
    ctx->pc = 0x295494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_295498:
    // 0x295498: 0xdfb10020
    ctx->pc = 0x295498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29549c:
    // 0x29549c: 0xdfb00010
    ctx->pc = 0x29549cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2954a0:
    // 0x2954a0: 0xc7b400a0
    ctx->pc = 0x2954a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2954a4:
    // 0x2954a4: 0x3e00008
label_2954a8:
    if (ctx->pc == 0x2954A8u) {
        ctx->pc = 0x2954A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2954ACu;
        goto label_fallthrough_0x2954a4;
    }
    ctx->pc = 0x2954A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2954A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x295030u: goto label_295030;
            case 0x295034u: goto label_295034;
            case 0x295038u: goto label_295038;
            case 0x29503Cu: goto label_29503c;
            case 0x295040u: goto label_295040;
            case 0x295044u: goto label_295044;
            case 0x295048u: goto label_295048;
            case 0x29504Cu: goto label_29504c;
            case 0x295050u: goto label_295050;
            case 0x295054u: goto label_295054;
            case 0x295058u: goto label_295058;
            case 0x29505Cu: goto label_29505c;
            case 0x295060u: goto label_295060;
            case 0x295064u: goto label_295064;
            case 0x295068u: goto label_295068;
            case 0x29506Cu: goto label_29506c;
            case 0x295070u: goto label_295070;
            case 0x295074u: goto label_295074;
            case 0x295078u: goto label_295078;
            case 0x29507Cu: goto label_29507c;
            case 0x295080u: goto label_295080;
            case 0x295084u: goto label_295084;
            case 0x295088u: goto label_295088;
            case 0x29508Cu: goto label_29508c;
            case 0x295090u: goto label_295090;
            case 0x295094u: goto label_295094;
            case 0x295098u: goto label_295098;
            case 0x29509Cu: goto label_29509c;
            case 0x2950A0u: goto label_2950a0;
            case 0x2950A4u: goto label_2950a4;
            case 0x2950A8u: goto label_2950a8;
            case 0x2950ACu: goto label_2950ac;
            case 0x2950B0u: goto label_2950b0;
            case 0x2950B4u: goto label_2950b4;
            case 0x2950B8u: goto label_2950b8;
            case 0x2950BCu: goto label_2950bc;
            case 0x2950C0u: goto label_2950c0;
            case 0x2950C4u: goto label_2950c4;
            case 0x2950C8u: goto label_2950c8;
            case 0x2950CCu: goto label_2950cc;
            case 0x2950D0u: goto label_2950d0;
            case 0x2950D4u: goto label_2950d4;
            case 0x2950D8u: goto label_2950d8;
            case 0x2950DCu: goto label_2950dc;
            case 0x2950E0u: goto label_2950e0;
            case 0x2950E4u: goto label_2950e4;
            case 0x2950E8u: goto label_2950e8;
            case 0x2950ECu: goto label_2950ec;
            case 0x2950F0u: goto label_2950f0;
            case 0x2950F4u: goto label_2950f4;
            case 0x2950F8u: goto label_2950f8;
            case 0x2950FCu: goto label_2950fc;
            case 0x295100u: goto label_295100;
            case 0x295104u: goto label_295104;
            case 0x295108u: goto label_295108;
            case 0x29510Cu: goto label_29510c;
            case 0x295110u: goto label_295110;
            case 0x295114u: goto label_295114;
            case 0x295118u: goto label_295118;
            case 0x29511Cu: goto label_29511c;
            case 0x295120u: goto label_295120;
            case 0x295124u: goto label_295124;
            case 0x295128u: goto label_295128;
            case 0x29512Cu: goto label_29512c;
            case 0x295130u: goto label_295130;
            case 0x295134u: goto label_295134;
            case 0x295138u: goto label_295138;
            case 0x29513Cu: goto label_29513c;
            case 0x295140u: goto label_295140;
            case 0x295144u: goto label_295144;
            case 0x295148u: goto label_295148;
            case 0x29514Cu: goto label_29514c;
            case 0x295150u: goto label_295150;
            case 0x295154u: goto label_295154;
            case 0x295158u: goto label_295158;
            case 0x29515Cu: goto label_29515c;
            case 0x295160u: goto label_295160;
            case 0x295164u: goto label_295164;
            case 0x295168u: goto label_295168;
            case 0x29516Cu: goto label_29516c;
            case 0x295170u: goto label_295170;
            case 0x295174u: goto label_295174;
            case 0x295178u: goto label_295178;
            case 0x29517Cu: goto label_29517c;
            case 0x295180u: goto label_295180;
            case 0x295184u: goto label_295184;
            case 0x295188u: goto label_295188;
            case 0x29518Cu: goto label_29518c;
            case 0x295190u: goto label_295190;
            case 0x295194u: goto label_295194;
            case 0x295198u: goto label_295198;
            case 0x29519Cu: goto label_29519c;
            case 0x2951A0u: goto label_2951a0;
            case 0x2951A4u: goto label_2951a4;
            case 0x2951A8u: goto label_2951a8;
            case 0x2951ACu: goto label_2951ac;
            case 0x2951B0u: goto label_2951b0;
            case 0x2951B4u: goto label_2951b4;
            case 0x2951B8u: goto label_2951b8;
            case 0x2951BCu: goto label_2951bc;
            case 0x2951C0u: goto label_2951c0;
            case 0x2951C4u: goto label_2951c4;
            case 0x2951C8u: goto label_2951c8;
            case 0x2951CCu: goto label_2951cc;
            case 0x2951D0u: goto label_2951d0;
            case 0x2951D4u: goto label_2951d4;
            case 0x2951D8u: goto label_2951d8;
            case 0x2951DCu: goto label_2951dc;
            case 0x2951E0u: goto label_2951e0;
            case 0x2951E4u: goto label_2951e4;
            case 0x2951E8u: goto label_2951e8;
            case 0x2951ECu: goto label_2951ec;
            case 0x2951F0u: goto label_2951f0;
            case 0x2951F4u: goto label_2951f4;
            case 0x2951F8u: goto label_2951f8;
            case 0x2951FCu: goto label_2951fc;
            case 0x295200u: goto label_295200;
            case 0x295204u: goto label_295204;
            case 0x295208u: goto label_295208;
            case 0x29520Cu: goto label_29520c;
            case 0x295210u: goto label_295210;
            case 0x295214u: goto label_295214;
            case 0x295218u: goto label_295218;
            case 0x29521Cu: goto label_29521c;
            case 0x295220u: goto label_295220;
            case 0x295224u: goto label_295224;
            case 0x295228u: goto label_295228;
            case 0x29522Cu: goto label_29522c;
            case 0x295230u: goto label_295230;
            case 0x295234u: goto label_295234;
            case 0x295238u: goto label_295238;
            case 0x29523Cu: goto label_29523c;
            case 0x295240u: goto label_295240;
            case 0x295244u: goto label_295244;
            case 0x295248u: goto label_295248;
            case 0x29524Cu: goto label_29524c;
            case 0x295250u: goto label_295250;
            case 0x295254u: goto label_295254;
            case 0x295258u: goto label_295258;
            case 0x29525Cu: goto label_29525c;
            case 0x295260u: goto label_295260;
            case 0x295264u: goto label_295264;
            case 0x295268u: goto label_295268;
            case 0x29526Cu: goto label_29526c;
            case 0x295270u: goto label_295270;
            case 0x295274u: goto label_295274;
            case 0x295278u: goto label_295278;
            case 0x29527Cu: goto label_29527c;
            case 0x295280u: goto label_295280;
            case 0x295284u: goto label_295284;
            case 0x295288u: goto label_295288;
            case 0x29528Cu: goto label_29528c;
            case 0x295290u: goto label_295290;
            case 0x295294u: goto label_295294;
            case 0x295298u: goto label_295298;
            case 0x29529Cu: goto label_29529c;
            case 0x2952A0u: goto label_2952a0;
            case 0x2952A4u: goto label_2952a4;
            case 0x2952A8u: goto label_2952a8;
            case 0x2952ACu: goto label_2952ac;
            case 0x2952B0u: goto label_2952b0;
            case 0x2952B4u: goto label_2952b4;
            case 0x2952B8u: goto label_2952b8;
            case 0x2952BCu: goto label_2952bc;
            case 0x2952C0u: goto label_2952c0;
            case 0x2952C4u: goto label_2952c4;
            case 0x2952C8u: goto label_2952c8;
            case 0x2952CCu: goto label_2952cc;
            case 0x2952D0u: goto label_2952d0;
            case 0x2952D4u: goto label_2952d4;
            case 0x2952D8u: goto label_2952d8;
            case 0x2952DCu: goto label_2952dc;
            case 0x2952E0u: goto label_2952e0;
            case 0x2952E4u: goto label_2952e4;
            case 0x2952E8u: goto label_2952e8;
            case 0x2952ECu: goto label_2952ec;
            case 0x2952F0u: goto label_2952f0;
            case 0x2952F4u: goto label_2952f4;
            case 0x2952F8u: goto label_2952f8;
            case 0x2952FCu: goto label_2952fc;
            case 0x295300u: goto label_295300;
            case 0x295304u: goto label_295304;
            case 0x295308u: goto label_295308;
            case 0x29530Cu: goto label_29530c;
            case 0x295310u: goto label_295310;
            case 0x295314u: goto label_295314;
            case 0x295318u: goto label_295318;
            case 0x29531Cu: goto label_29531c;
            case 0x295320u: goto label_295320;
            case 0x295324u: goto label_295324;
            case 0x295328u: goto label_295328;
            case 0x29532Cu: goto label_29532c;
            case 0x295330u: goto label_295330;
            case 0x295334u: goto label_295334;
            case 0x295338u: goto label_295338;
            case 0x29533Cu: goto label_29533c;
            case 0x295340u: goto label_295340;
            case 0x295344u: goto label_295344;
            case 0x295348u: goto label_295348;
            case 0x29534Cu: goto label_29534c;
            case 0x295350u: goto label_295350;
            case 0x295354u: goto label_295354;
            case 0x295358u: goto label_295358;
            case 0x29535Cu: goto label_29535c;
            case 0x295360u: goto label_295360;
            case 0x295364u: goto label_295364;
            case 0x295368u: goto label_295368;
            case 0x29536Cu: goto label_29536c;
            case 0x295370u: goto label_295370;
            case 0x295374u: goto label_295374;
            case 0x295378u: goto label_295378;
            case 0x29537Cu: goto label_29537c;
            case 0x295380u: goto label_295380;
            case 0x295384u: goto label_295384;
            case 0x295388u: goto label_295388;
            case 0x29538Cu: goto label_29538c;
            case 0x295390u: goto label_295390;
            case 0x295394u: goto label_295394;
            case 0x295398u: goto label_295398;
            case 0x29539Cu: goto label_29539c;
            case 0x2953A0u: goto label_2953a0;
            case 0x2953A4u: goto label_2953a4;
            case 0x2953A8u: goto label_2953a8;
            case 0x2953ACu: goto label_2953ac;
            case 0x2953B0u: goto label_2953b0;
            case 0x2953B4u: goto label_2953b4;
            case 0x2953B8u: goto label_2953b8;
            case 0x2953BCu: goto label_2953bc;
            case 0x2953C0u: goto label_2953c0;
            case 0x2953C4u: goto label_2953c4;
            case 0x2953C8u: goto label_2953c8;
            case 0x2953CCu: goto label_2953cc;
            case 0x2953D0u: goto label_2953d0;
            case 0x2953D4u: goto label_2953d4;
            case 0x2953D8u: goto label_2953d8;
            case 0x2953DCu: goto label_2953dc;
            case 0x2953E0u: goto label_2953e0;
            case 0x2953E4u: goto label_2953e4;
            case 0x2953E8u: goto label_2953e8;
            case 0x2953ECu: goto label_2953ec;
            case 0x2953F0u: goto label_2953f0;
            case 0x2953F4u: goto label_2953f4;
            case 0x2953F8u: goto label_2953f8;
            case 0x2953FCu: goto label_2953fc;
            case 0x295400u: goto label_295400;
            case 0x295404u: goto label_295404;
            case 0x295408u: goto label_295408;
            case 0x29540Cu: goto label_29540c;
            case 0x295410u: goto label_295410;
            case 0x295414u: goto label_295414;
            case 0x295418u: goto label_295418;
            case 0x29541Cu: goto label_29541c;
            case 0x295420u: goto label_295420;
            case 0x295424u: goto label_295424;
            case 0x295428u: goto label_295428;
            case 0x29542Cu: goto label_29542c;
            case 0x295430u: goto label_295430;
            case 0x295434u: goto label_295434;
            case 0x295438u: goto label_295438;
            case 0x29543Cu: goto label_29543c;
            case 0x295440u: goto label_295440;
            case 0x295444u: goto label_295444;
            case 0x295448u: goto label_295448;
            case 0x29544Cu: goto label_29544c;
            case 0x295450u: goto label_295450;
            case 0x295454u: goto label_295454;
            case 0x295458u: goto label_295458;
            case 0x29545Cu: goto label_29545c;
            case 0x295460u: goto label_295460;
            case 0x295464u: goto label_295464;
            case 0x295468u: goto label_295468;
            case 0x29546Cu: goto label_29546c;
            case 0x295470u: goto label_295470;
            case 0x295474u: goto label_295474;
            case 0x295478u: goto label_295478;
            case 0x29547Cu: goto label_29547c;
            case 0x295480u: goto label_295480;
            case 0x295484u: goto label_295484;
            case 0x295488u: goto label_295488;
            case 0x29548Cu: goto label_29548c;
            case 0x295490u: goto label_295490;
            case 0x295494u: goto label_295494;
            case 0x295498u: goto label_295498;
            case 0x29549Cu: goto label_29549c;
            case 0x2954A0u: goto label_2954a0;
            case 0x2954A4u: goto label_2954a4;
            case 0x2954A8u: goto label_2954a8;
            default: break;
        }
        return;
    }
label_fallthrough_0x2954a4:
    ctx->pc = 0x2954ACu;
}
