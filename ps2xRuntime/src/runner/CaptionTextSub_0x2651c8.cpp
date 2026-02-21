#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CaptionTextSub
// Address: 0x2651c8 - 0x26549c
void CaptionTextSub_0x2651c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2651c8u;

label_2651c8:
    // 0x2651c8: 0x27bdff60
    ctx->pc = 0x2651c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_2651cc:
    // 0x2651cc: 0xffbf0070
    ctx->pc = 0x2651ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2651d0:
    // 0x2651d0: 0xffb60060
    ctx->pc = 0x2651d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2651d4:
    // 0x2651d4: 0xffb50050
    ctx->pc = 0x2651d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2651d8:
    // 0x2651d8: 0xffb40040
    ctx->pc = 0x2651d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2651dc:
    // 0x2651dc: 0xffb30030
    ctx->pc = 0x2651dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2651e0:
    // 0x2651e0: 0xffb20020
    ctx->pc = 0x2651e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2651e4:
    // 0x2651e4: 0xffb10010
    ctx->pc = 0x2651e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2651e8:
    // 0x2651e8: 0xffb00000
    ctx->pc = 0x2651e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2651ec:
    // 0x2651ec: 0xe7b70098
    ctx->pc = 0x2651ecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2651f0:
    // 0x2651f0: 0xe7b60090
    ctx->pc = 0x2651f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2651f4:
    // 0x2651f4: 0xe7b50088
    ctx->pc = 0x2651f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2651f8:
    // 0x2651f8: 0xe7b40080
    ctx->pc = 0x2651f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2651fc:
    // 0x2651fc: 0x80402d
    ctx->pc = 0x2651fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_265200:
    // 0x265200: 0xa0a02d
    ctx->pc = 0x265200u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_265204:
    // 0x265204: 0x46006546
    ctx->pc = 0x265204u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_265208:
    // 0x265208: 0xe0982d
    ctx->pc = 0x265208u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26520c:
    // 0x26520c: 0xa82d
    ctx->pc = 0x26520cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_265210:
    // 0x265210: 0x3c014200
    ctx->pc = 0x265210u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16896 << 16));
label_265214:
    // 0x265214: 0x4481b000
    ctx->pc = 0x265214u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
label_265218:
    // 0x265218: 0x3c020034
    ctx->pc = 0x265218u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26521c:
    // 0x26521c: 0x8c42e8e8
    ctx->pc = 0x26521cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961384)));
label_265220:
    // 0x265220: 0xc23023
    ctx->pc = 0x265220u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_265224:
    // 0x265224: 0x4486a000
    ctx->pc = 0x265224u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 6);
label_265228:
    // 0x265228: 0x4680a520
    ctx->pc = 0x265228u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
label_26522c:
    // 0x26522c: 0x3c013fe0
    ctx->pc = 0x26522cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16352 << 16));
label_265230:
    // 0x265230: 0x4481b800
    ctx->pc = 0x265230u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 1);
label_265234:
    // 0x265234: 0x15000005
label_265238:
    if (ctx->pc == 0x265238u) {
        ctx->pc = 0x265238u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26523Cu;
        goto label_26523c;
    }
    ctx->pc = 0x265234u;
    {
        const bool branch_taken_0x265234 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x265238u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x265234) {
            ctx->pc = 0x26524Cu;
            goto label_26524c;
        }
    }
    ctx->pc = 0x26523Cu;
label_26523c:
    // 0x26523c: 0x10000089
label_265240:
    if (ctx->pc == 0x265240u) {
        ctx->pc = 0x265240u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x265244u;
        goto label_265244;
    }
    ctx->pc = 0x26523Cu;
    {
        const bool branch_taken_0x26523c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x265240u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x26523c) {
            ctx->pc = 0x265464u;
            goto label_265464;
        }
    }
    ctx->pc = 0x265244u;
label_265244:
    // 0x265244: 0x1000006d
label_265248:
    if (ctx->pc == 0x265248u) {
        ctx->pc = 0x265248u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x26524Cu;
        goto label_26524c;
    }
    ctx->pc = 0x265244u;
    {
        const bool branch_taken_0x265244 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x265248u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x265244) {
            ctx->pc = 0x2653FCu;
            goto label_2653fc;
        }
    }
    ctx->pc = 0x26524Cu;
label_26524c:
    // 0x26524c: 0x44800000
    ctx->pc = 0x26524cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_265250:
    // 0x265250: 0x4600a034
    ctx->pc = 0x265250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_265254:
    // 0x265254: 0x0
    ctx->pc = 0x265254u;
    // NOP
label_265258:
    // 0x265258: 0x45030001
label_26525c:
    if (ctx->pc == 0x26525Cu) {
        ctx->pc = 0x26525Cu;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x265260u;
        goto label_265260;
    }
    ctx->pc = 0x265258u;
    {
        const bool branch_taken_0x265258 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x265258) {
            ctx->pc = 0x26525Cu;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x265260u;
            goto label_265260;
        }
    }
    ctx->pc = 0x265260u;
label_265260:
    // 0x265260: 0x3c020031
    ctx->pc = 0x265260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_265264:
    // 0x265264: 0x8c43f2a4
    ctx->pc = 0x265264u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294963876)));
label_265268:
    // 0x265268: 0x24020001
    ctx->pc = 0x265268u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_26526c:
    // 0x26526c: 0x14620003
label_265270:
    if (ctx->pc == 0x265270u) {
        ctx->pc = 0x265270u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x265274u;
        goto label_265274;
    }
    ctx->pc = 0x26526Cu;
    {
        const bool branch_taken_0x26526c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x265270u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26526c) {
            ctx->pc = 0x26527Cu;
            goto label_26527c;
        }
    }
    ctx->pc = 0x265274u;
label_265274:
    // 0x265274: 0x3c0140b0
    ctx->pc = 0x265274u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16560 << 16));
label_265278:
    // 0x265278: 0x4481b800
    ctx->pc = 0x265278u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 1);
label_26527c:
    // 0x26527c: 0xa0403788
    ctx->pc = 0x26527cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 14216), (uint8_t)GPR_U32(ctx, 0));
label_265280:
    // 0x265280: 0x4615b582
    ctx->pc = 0x265280u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
label_265284:
    // 0x265284: 0x3c10003c
    ctx->pc = 0x265284u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_265288:
    // 0x265288: 0x26043388
    ctx->pc = 0x265288u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 13192));
label_26528c:
    // 0x26528c: 0xc0bf2c1
label_265290:
    if (ctx->pc == 0x265290u) {
        ctx->pc = 0x265290u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265294u;
        goto label_265294;
    }
    ctx->pc = 0x26528Cu;
    SET_GPR_U32(ctx, 31, 0x265294u);
    ctx->pc = 0x265290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265294u; }
    }
    if (ctx->pc != 0x265294u) { return; }
    ctx->pc = 0x265294u;
label_265294:
    // 0x265294: 0x26123388
    ctx->pc = 0x265294u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 13192));
label_265298:
    // 0x265298: 0x240802d
    ctx->pc = 0x265298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26529c:
    // 0x26529c: 0xc0803ca
label_2652a0:
    if (ctx->pc == 0x2652A0u) {
        ctx->pc = 0x2652A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2652A4u;
        goto label_2652a4;
    }
    ctx->pc = 0x26529Cu;
    SET_GPR_U32(ctx, 31, 0x2652A4u);
    ctx->pc = 0x2652A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x200F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontSetShadowColor_0x200f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2652A4u; }
    }
    if (ctx->pc != 0x2652A4u) { return; }
    ctx->pc = 0x2652A4u;
label_2652a4:
    // 0x2652a4: 0x1000004c
label_2652a8:
    if (ctx->pc == 0x2652A8u) {
        ctx->pc = 0x2652A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2652ACu;
        goto label_2652ac;
    }
    ctx->pc = 0x2652A4u;
    {
        const bool branch_taken_0x2652a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2652A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2652a4) {
            ctx->pc = 0x2653D8u;
            goto label_2653d8;
        }
    }
    ctx->pc = 0x2652ACu;
label_2652ac:
    // 0x2652ac: 0x0
    ctx->pc = 0x2652acu;
    // NOP
label_2652b0:
    // 0x2652b0: 0x2e22002f
    ctx->pc = 0x2652b0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 47));
label_2652b4:
    // 0x2652b4: 0x10400040
label_2652b8:
    if (ctx->pc == 0x2652B8u) {
        ctx->pc = 0x2652B8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x2652BCu;
        goto label_2652bc;
    }
    ctx->pc = 0x2652B4u;
    {
        const bool branch_taken_0x2652b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2652B8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x2652b4) {
            ctx->pc = 0x2653B8u;
            goto label_2653b8;
        }
    }
    ctx->pc = 0x2652BCu;
label_2652bc:
    // 0x2652bc: 0x3c02003b
    ctx->pc = 0x2652bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_2652c0:
    // 0x2652c0: 0x24429ef0
    ctx->pc = 0x2652c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294942448));
label_2652c4:
    // 0x2652c4: 0x111880
    ctx->pc = 0x2652c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_2652c8:
    // 0x2652c8: 0x621821
    ctx->pc = 0x2652c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2652cc:
    // 0x2652cc: 0x8c620000
    ctx->pc = 0x2652ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2652d0:
    // 0x2652d0: 0x400008
label_2652d4:
    if (ctx->pc == 0x2652D4u) {
        ctx->pc = 0x2652D8u;
        goto label_2652d8;
    }
    ctx->pc = 0x2652D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2651C8u: goto label_2651c8;
            case 0x2651CCu: goto label_2651cc;
            case 0x2651D0u: goto label_2651d0;
            case 0x2651D4u: goto label_2651d4;
            case 0x2651D8u: goto label_2651d8;
            case 0x2651DCu: goto label_2651dc;
            case 0x2651E0u: goto label_2651e0;
            case 0x2651E4u: goto label_2651e4;
            case 0x2651E8u: goto label_2651e8;
            case 0x2651ECu: goto label_2651ec;
            case 0x2651F0u: goto label_2651f0;
            case 0x2651F4u: goto label_2651f4;
            case 0x2651F8u: goto label_2651f8;
            case 0x2651FCu: goto label_2651fc;
            case 0x265200u: goto label_265200;
            case 0x265204u: goto label_265204;
            case 0x265208u: goto label_265208;
            case 0x26520Cu: goto label_26520c;
            case 0x265210u: goto label_265210;
            case 0x265214u: goto label_265214;
            case 0x265218u: goto label_265218;
            case 0x26521Cu: goto label_26521c;
            case 0x265220u: goto label_265220;
            case 0x265224u: goto label_265224;
            case 0x265228u: goto label_265228;
            case 0x26522Cu: goto label_26522c;
            case 0x265230u: goto label_265230;
            case 0x265234u: goto label_265234;
            case 0x265238u: goto label_265238;
            case 0x26523Cu: goto label_26523c;
            case 0x265240u: goto label_265240;
            case 0x265244u: goto label_265244;
            case 0x265248u: goto label_265248;
            case 0x26524Cu: goto label_26524c;
            case 0x265250u: goto label_265250;
            case 0x265254u: goto label_265254;
            case 0x265258u: goto label_265258;
            case 0x26525Cu: goto label_26525c;
            case 0x265260u: goto label_265260;
            case 0x265264u: goto label_265264;
            case 0x265268u: goto label_265268;
            case 0x26526Cu: goto label_26526c;
            case 0x265270u: goto label_265270;
            case 0x265274u: goto label_265274;
            case 0x265278u: goto label_265278;
            case 0x26527Cu: goto label_26527c;
            case 0x265280u: goto label_265280;
            case 0x265284u: goto label_265284;
            case 0x265288u: goto label_265288;
            case 0x26528Cu: goto label_26528c;
            case 0x265290u: goto label_265290;
            case 0x265294u: goto label_265294;
            case 0x265298u: goto label_265298;
            case 0x26529Cu: goto label_26529c;
            case 0x2652A0u: goto label_2652a0;
            case 0x2652A4u: goto label_2652a4;
            case 0x2652A8u: goto label_2652a8;
            case 0x2652ACu: goto label_2652ac;
            case 0x2652B0u: goto label_2652b0;
            case 0x2652B4u: goto label_2652b4;
            case 0x2652B8u: goto label_2652b8;
            case 0x2652BCu: goto label_2652bc;
            case 0x2652C0u: goto label_2652c0;
            case 0x2652C4u: goto label_2652c4;
            case 0x2652C8u: goto label_2652c8;
            case 0x2652CCu: goto label_2652cc;
            case 0x2652D0u: goto label_2652d0;
            case 0x2652D4u: goto label_2652d4;
            case 0x2652D8u: goto label_2652d8;
            case 0x2652DCu: goto label_2652dc;
            case 0x2652E0u: goto label_2652e0;
            case 0x2652E4u: goto label_2652e4;
            case 0x2652E8u: goto label_2652e8;
            case 0x2652ECu: goto label_2652ec;
            case 0x2652F0u: goto label_2652f0;
            case 0x2652F4u: goto label_2652f4;
            case 0x2652F8u: goto label_2652f8;
            case 0x2652FCu: goto label_2652fc;
            case 0x265300u: goto label_265300;
            case 0x265304u: goto label_265304;
            case 0x265308u: goto label_265308;
            case 0x26530Cu: goto label_26530c;
            case 0x265310u: goto label_265310;
            case 0x265314u: goto label_265314;
            case 0x265318u: goto label_265318;
            case 0x26531Cu: goto label_26531c;
            case 0x265320u: goto label_265320;
            case 0x265324u: goto label_265324;
            case 0x265328u: goto label_265328;
            case 0x26532Cu: goto label_26532c;
            case 0x265330u: goto label_265330;
            case 0x265334u: goto label_265334;
            case 0x265338u: goto label_265338;
            case 0x26533Cu: goto label_26533c;
            case 0x265340u: goto label_265340;
            case 0x265344u: goto label_265344;
            case 0x265348u: goto label_265348;
            case 0x26534Cu: goto label_26534c;
            case 0x265350u: goto label_265350;
            case 0x265354u: goto label_265354;
            case 0x265358u: goto label_265358;
            case 0x26535Cu: goto label_26535c;
            case 0x265360u: goto label_265360;
            case 0x265364u: goto label_265364;
            case 0x265368u: goto label_265368;
            case 0x26536Cu: goto label_26536c;
            case 0x265370u: goto label_265370;
            case 0x265374u: goto label_265374;
            case 0x265378u: goto label_265378;
            case 0x26537Cu: goto label_26537c;
            case 0x265380u: goto label_265380;
            case 0x265384u: goto label_265384;
            case 0x265388u: goto label_265388;
            case 0x26538Cu: goto label_26538c;
            case 0x265390u: goto label_265390;
            case 0x265394u: goto label_265394;
            case 0x265398u: goto label_265398;
            case 0x26539Cu: goto label_26539c;
            case 0x2653A0u: goto label_2653a0;
            case 0x2653A4u: goto label_2653a4;
            case 0x2653A8u: goto label_2653a8;
            case 0x2653ACu: goto label_2653ac;
            case 0x2653B0u: goto label_2653b0;
            case 0x2653B4u: goto label_2653b4;
            case 0x2653B8u: goto label_2653b8;
            case 0x2653BCu: goto label_2653bc;
            case 0x2653C0u: goto label_2653c0;
            case 0x2653C4u: goto label_2653c4;
            case 0x2653C8u: goto label_2653c8;
            case 0x2653CCu: goto label_2653cc;
            case 0x2653D0u: goto label_2653d0;
            case 0x2653D4u: goto label_2653d4;
            case 0x2653D8u: goto label_2653d8;
            case 0x2653DCu: goto label_2653dc;
            case 0x2653E0u: goto label_2653e0;
            case 0x2653E4u: goto label_2653e4;
            case 0x2653E8u: goto label_2653e8;
            case 0x2653ECu: goto label_2653ec;
            case 0x2653F0u: goto label_2653f0;
            case 0x2653F4u: goto label_2653f4;
            case 0x2653F8u: goto label_2653f8;
            case 0x2653FCu: goto label_2653fc;
            case 0x265400u: goto label_265400;
            case 0x265404u: goto label_265404;
            case 0x265408u: goto label_265408;
            case 0x26540Cu: goto label_26540c;
            case 0x265410u: goto label_265410;
            case 0x265414u: goto label_265414;
            case 0x265418u: goto label_265418;
            case 0x26541Cu: goto label_26541c;
            case 0x265420u: goto label_265420;
            case 0x265424u: goto label_265424;
            case 0x265428u: goto label_265428;
            case 0x26542Cu: goto label_26542c;
            case 0x265430u: goto label_265430;
            case 0x265434u: goto label_265434;
            case 0x265438u: goto label_265438;
            case 0x26543Cu: goto label_26543c;
            case 0x265440u: goto label_265440;
            case 0x265444u: goto label_265444;
            case 0x265448u: goto label_265448;
            case 0x26544Cu: goto label_26544c;
            case 0x265450u: goto label_265450;
            case 0x265454u: goto label_265454;
            case 0x265458u: goto label_265458;
            case 0x26545Cu: goto label_26545c;
            case 0x265460u: goto label_265460;
            case 0x265464u: goto label_265464;
            case 0x265468u: goto label_265468;
            case 0x26546Cu: goto label_26546c;
            case 0x265470u: goto label_265470;
            case 0x265474u: goto label_265474;
            case 0x265478u: goto label_265478;
            case 0x26547Cu: goto label_26547c;
            case 0x265480u: goto label_265480;
            case 0x265484u: goto label_265484;
            case 0x265488u: goto label_265488;
            case 0x26548Cu: goto label_26548c;
            case 0x265490u: goto label_265490;
            case 0x265494u: goto label_265494;
            case 0x265498u: goto label_265498;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2652D8u;
label_2652d8:
    // 0x2652d8: 0x3c03003c
    ctx->pc = 0x2652d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2652dc:
    // 0x2652dc: 0x24623788
    ctx->pc = 0x2652dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 14216));
label_2652e0:
    // 0x2652e0: 0x2a21021
    ctx->pc = 0x2652e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2652e4:
    // 0x2652e4: 0x3c0141f0
    ctx->pc = 0x2652e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
label_2652e8:
    // 0x2652e8: 0x44810000
    ctx->pc = 0x2652e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2652ec:
    // 0x2652ec: 0x4600a501
    ctx->pc = 0x2652ecu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2652f0:
    // 0x2652f0: 0x44800000
    ctx->pc = 0x2652f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2652f4:
    // 0x2652f4: 0x4600a034
    ctx->pc = 0x2652f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2652f8:
    // 0x2652f8: 0x0
    ctx->pc = 0x2652f8u;
    // NOP
label_2652fc:
    // 0x2652fc: 0x45010034
label_265300:
    if (ctx->pc == 0x265300u) {
        ctx->pc = 0x265300u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x265304u;
        goto label_265304;
    }
    ctx->pc = 0x2652FCu;
    {
        const bool branch_taken_0x2652fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x265300u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x2652fc) {
            ctx->pc = 0x2653D0u;
            goto label_2653d0;
        }
    }
    ctx->pc = 0x265304u;
label_265304:
    // 0x265304: 0xa82d
    ctx->pc = 0x265304u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_265308:
    // 0x265308: 0xa0603788
    ctx->pc = 0x265308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 14216), (uint8_t)GPR_U32(ctx, 0));
label_26530c:
    // 0x26530c: 0x82420000
    ctx->pc = 0x26530cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_265310:
    // 0x265310: 0x26430001
    ctx->pc = 0x265310u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 1));
label_265314:
    // 0x265314: 0x3842000a
    ctx->pc = 0x265314u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 10));
label_265318:
    // 0x265318: 0x60802d
    ctx->pc = 0x265318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26531c:
    // 0x26531c: 0x242800b
    ctx->pc = 0x26531cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 18));
label_265320:
    // 0x265320: 0x1000002b
label_265324:
    if (ctx->pc == 0x265324u) {
        ctx->pc = 0x265324u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265328u;
        goto label_265328;
    }
    ctx->pc = 0x265320u;
    {
        const bool branch_taken_0x265320 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x265324u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x265320) {
            ctx->pc = 0x2653D0u;
            goto label_2653d0;
        }
    }
    ctx->pc = 0x265328u;
label_265328:
    // 0x265328: 0x3c02003c
    ctx->pc = 0x265328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26532c:
    // 0x26532c: 0x24503788
    ctx->pc = 0x26532cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 14216));
label_265330:
    // 0x265330: 0x2b01021
    ctx->pc = 0x265330u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_265334:
    // 0x265334: 0x1aa0000f
label_265338:
    if (ctx->pc == 0x265338u) {
        ctx->pc = 0x265338u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x26533Cu;
        goto label_26533c;
    }
    ctx->pc = 0x265334u;
    {
        const bool branch_taken_0x265334 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x265338u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x265334) {
            ctx->pc = 0x265374u;
            goto label_265374;
        }
    }
    ctx->pc = 0x26533Cu;
label_26533c:
    // 0x26533c: 0x200202d
    ctx->pc = 0x26533cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_265340:
    // 0x265340: 0x280282d
    ctx->pc = 0x265340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_265344:
    // 0x265344: 0xc080552
label_265348:
    if (ctx->pc == 0x265348u) {
        ctx->pc = 0x265348u;
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x26534Cu;
        goto label_26534c;
    }
    ctx->pc = 0x265344u;
    SET_GPR_U32(ctx, 31, 0x26534Cu);
    ctx->pc = 0x265348u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26534Cu; }
    }
    if (ctx->pc != 0x26534Cu) { return; }
    ctx->pc = 0x26534Cu;
label_26534c:
    // 0x26534c: 0x21043
    ctx->pc = 0x26534cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_265350:
    // 0x265350: 0x24040100
    ctx->pc = 0x265350u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 256));
label_265354:
    // 0x265354: 0x822023
    ctx->pc = 0x265354u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_265358:
    // 0x265358: 0x260282d
    ctx->pc = 0x265358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26535c:
    // 0x26535c: 0x36860100
    ctx->pc = 0x26535cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 20), 256));
label_265360:
    // 0x265360: 0x3c0700ff
    ctx->pc = 0x265360u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_265364:
    // 0x265364: 0x34e7ffff
    ctx->pc = 0x265364u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_265368:
    // 0x265368: 0x4600ab06
    ctx->pc = 0x265368u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_26536c:
    // 0x26536c: 0xc080510
label_265370:
    if (ctx->pc == 0x265370u) {
        ctx->pc = 0x265370u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265374u;
        goto label_265374;
    }
    ctx->pc = 0x26536Cu;
    SET_GPR_U32(ctx, 31, 0x265374u);
    ctx->pc = 0x265370u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265374u; }
    }
    if (ctx->pc != 0x265374u) { return; }
    ctx->pc = 0x265374u;
label_265374:
    // 0x265374: 0xa82d
    ctx->pc = 0x265374u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_265378:
    // 0x265378: 0x3c02003c
    ctx->pc = 0x265378u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26537c:
    // 0x26537c: 0xa0403788
    ctx->pc = 0x26537cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 14216), (uint8_t)GPR_U32(ctx, 0));
label_265380:
    // 0x265380: 0x44930000
    ctx->pc = 0x265380u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 19);
label_265384:
    // 0x265384: 0x46800020
    ctx->pc = 0x265384u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_265388:
    // 0x265388: 0x46160000
    ctx->pc = 0x265388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_26538c:
    // 0x26538c: 0x46000064
    ctx->pc = 0x26538cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_265390:
    // 0x265390: 0x44130800
    ctx->pc = 0x265390u;
    SET_GPR_U32(ctx, 19, *(uint32_t*)&ctx->f[1]);
label_265394:
    // 0x265394: 0x1000000e
label_265398:
    if (ctx->pc == 0x265398u) {
        ctx->pc = 0x265398u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26539Cu;
        goto label_26539c;
    }
    ctx->pc = 0x265394u;
    {
        const bool branch_taken_0x265394 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x265398u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x265394) {
            ctx->pc = 0x2653D0u;
            goto label_2653d0;
        }
    }
    ctx->pc = 0x26539Cu;
label_26539c:
    // 0x26539c: 0x3c0140a0
    ctx->pc = 0x26539cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
label_2653a0:
    // 0x2653a0: 0x44810000
    ctx->pc = 0x2653a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2653a4:
    // 0x2653a4: 0x1000000a
label_2653a8:
    if (ctx->pc == 0x2653A8u) {
        ctx->pc = 0x2653A8u;
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x2653ACu;
        goto label_2653ac;
    }
    ctx->pc = 0x2653A4u;
    {
        const bool branch_taken_0x2653a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2653A8u;
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x2653a4) {
            ctx->pc = 0x2653D0u;
            goto label_2653d0;
        }
    }
    ctx->pc = 0x2653ACu;
label_2653ac:
    // 0x2653ac: 0x3c014000
    ctx->pc = 0x2653acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_2653b0:
    // 0x2653b0: 0x44810000
    ctx->pc = 0x2653b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2653b4:
    // 0x2653b4: 0x4600a501
    ctx->pc = 0x2653b4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2653b8:
    // 0x2653b8: 0x4617a501
    ctx->pc = 0x2653b8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
label_2653bc:
    // 0x2653bc: 0x3c02003c
    ctx->pc = 0x2653bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2653c0:
    // 0x2653c0: 0x24423788
    ctx->pc = 0x2653c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14216));
label_2653c4:
    // 0x2653c4: 0x2a21021
    ctx->pc = 0x2653c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2653c8:
    // 0x2653c8: 0xa0510000
    ctx->pc = 0x2653c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
label_2653cc:
    // 0x2653cc: 0x26b50001
    ctx->pc = 0x2653ccu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_2653d0:
    // 0x2653d0: 0x1220ff9c
label_2653d4:
    if (ctx->pc == 0x2653D4u) {
        ctx->pc = 0x2653D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2653D8u;
        goto label_2653d8;
    }
    ctx->pc = 0x2653D0u;
    {
        const bool branch_taken_0x2653d0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2653D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2653d0) {
            ctx->pc = 0x265244u;
            goto label_265244;
        }
    }
    ctx->pc = 0x2653D8u;
label_2653d8:
    // 0x2653d8: 0x8c430018
    ctx->pc = 0x2653d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2653dc:
    // 0x2653dc: 0x34028002
    ctx->pc = 0x2653dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32770));
label_2653e0:
    // 0x2653e0: 0x10620007
label_2653e4:
    if (ctx->pc == 0x2653E4u) {
        ctx->pc = 0x2653E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2653E8u;
        goto label_2653e8;
    }
    ctx->pc = 0x2653E0u;
    {
        const bool branch_taken_0x2653e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2653E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2653e0) {
            ctx->pc = 0x265400u;
            goto label_265400;
        }
    }
    ctx->pc = 0x2653E8u;
label_2653e8:
    // 0x2653e8: 0x44800000
    ctx->pc = 0x2653e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2653ec:
    // 0x2653ec: 0x46140034
    ctx->pc = 0x2653ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2653f0:
    // 0x2653f0: 0x0
    ctx->pc = 0x2653f0u;
    // NOP
label_2653f4:
    // 0x2653f4: 0x4503ffae
label_2653f8:
    if (ctx->pc == 0x2653F8u) {
        ctx->pc = 0x2653F8u;
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x2653FCu;
        goto label_2653fc;
    }
    ctx->pc = 0x2653F4u;
    {
        const bool branch_taken_0x2653f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2653f4) {
            ctx->pc = 0x2653F8u;
            SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x2652B0u;
            goto label_2652b0;
        }
    }
    ctx->pc = 0x2653FCu;
label_2653fc:
    // 0x2653fc: 0x3c02003c
    ctx->pc = 0x2653fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_265400:
    // 0x265400: 0x24423788
    ctx->pc = 0x265400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14216));
label_265404:
    // 0x265404: 0x2a21021
    ctx->pc = 0x265404u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_265408:
    // 0x265408: 0x1aa00015
label_26540c:
    if (ctx->pc == 0x26540Cu) {
        ctx->pc = 0x26540Cu;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x265410u;
        goto label_265410;
    }
    ctx->pc = 0x265408u;
    {
        const bool branch_taken_0x265408 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x26540Cu;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x265408) {
            ctx->pc = 0x265460u;
            goto label_265460;
        }
    }
    ctx->pc = 0x265410u;
label_265410:
    // 0x265410: 0x200202d
    ctx->pc = 0x265410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_265414:
    // 0x265414: 0xc0bf20c
label_265418:
    if (ctx->pc == 0x265418u) {
        ctx->pc = 0x265418u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x26541Cu;
        goto label_26541c;
    }
    ctx->pc = 0x265414u;
    SET_GPR_U32(ctx, 31, 0x26541Cu);
    ctx->pc = 0x265418u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x2FC830u;
    {
        const uint32_t __entryPc = ctx->pc;
        strchr_0x2fc830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26541Cu; }
    }
    if (ctx->pc != 0x26541Cu) { return; }
    ctx->pc = 0x26541Cu;
label_26541c:
    // 0x26541c: 0x54400001
label_265420:
    if (ctx->pc == 0x265420u) {
        ctx->pc = 0x265420u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x265424u;
        goto label_265424;
    }
    ctx->pc = 0x26541Cu;
    {
        const bool branch_taken_0x26541c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x26541c) {
            ctx->pc = 0x265420u;
            WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x265424u;
            goto label_265424;
        }
    }
    ctx->pc = 0x265424u;
label_265424:
    // 0x265424: 0x200202d
    ctx->pc = 0x265424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_265428:
    // 0x265428: 0x280282d
    ctx->pc = 0x265428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26542c:
    // 0x26542c: 0xc080552
label_265430:
    if (ctx->pc == 0x265430u) {
        ctx->pc = 0x265430u;
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x265434u;
        goto label_265434;
    }
    ctx->pc = 0x26542Cu;
    SET_GPR_U32(ctx, 31, 0x265434u);
    ctx->pc = 0x265430u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265434u; }
    }
    if (ctx->pc != 0x265434u) { return; }
    ctx->pc = 0x265434u;
label_265434:
    // 0x265434: 0x21043
    ctx->pc = 0x265434u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_265438:
    // 0x265438: 0x24040100
    ctx->pc = 0x265438u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 256));
label_26543c:
    // 0x26543c: 0x822023
    ctx->pc = 0x26543cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_265440:
    // 0x265440: 0x260282d
    ctx->pc = 0x265440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_265444:
    // 0x265444: 0x36860100
    ctx->pc = 0x265444u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 20), 256));
label_265448:
    // 0x265448: 0x3c0700ff
    ctx->pc = 0x265448u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_26544c:
    // 0x26544c: 0x34e7ffff
    ctx->pc = 0x26544cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_265450:
    // 0x265450: 0x4600ab06
    ctx->pc = 0x265450u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_265454:
    // 0x265454: 0x3c08003c
    ctx->pc = 0x265454u;
    SET_GPR_U32(ctx, 8, ((uint32_t)60 << 16));
label_265458:
    // 0x265458: 0xc080510
label_26545c:
    if (ctx->pc == 0x26545Cu) {
        ctx->pc = 0x26545Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 14216));
        ctx->pc = 0x265460u;
        goto label_265460;
    }
    ctx->pc = 0x265458u;
    SET_GPR_U32(ctx, 31, 0x265460u);
    ctx->pc = 0x26545Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 14216));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265460u; }
    }
    if (ctx->pc != 0x265460u) { return; }
    ctx->pc = 0x265460u;
label_265460:
    // 0x265460: 0x2c0102d
    ctx->pc = 0x265460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_265464:
    // 0x265464: 0xdfbf0070
    ctx->pc = 0x265464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_265468:
    // 0x265468: 0xdfb60060
    ctx->pc = 0x265468u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_26546c:
    // 0x26546c: 0xdfb50050
    ctx->pc = 0x26546cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_265470:
    // 0x265470: 0xdfb40040
    ctx->pc = 0x265470u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_265474:
    // 0x265474: 0xdfb30030
    ctx->pc = 0x265474u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_265478:
    // 0x265478: 0xdfb20020
    ctx->pc = 0x265478u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26547c:
    // 0x26547c: 0xdfb10010
    ctx->pc = 0x26547cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_265480:
    // 0x265480: 0xdfb00000
    ctx->pc = 0x265480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_265484:
    // 0x265484: 0xc7b70098
    ctx->pc = 0x265484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_265488:
    // 0x265488: 0xc7b60090
    ctx->pc = 0x265488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_26548c:
    // 0x26548c: 0xc7b50088
    ctx->pc = 0x26548cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_265490:
    // 0x265490: 0xc7b40080
    ctx->pc = 0x265490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_265494:
    // 0x265494: 0x3e00008
label_265498:
    if (ctx->pc == 0x265498u) {
        ctx->pc = 0x265498u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x26549Cu;
        goto label_fallthrough_0x265494;
    }
    ctx->pc = 0x265494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265498u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2651C8u: goto label_2651c8;
            case 0x2651CCu: goto label_2651cc;
            case 0x2651D0u: goto label_2651d0;
            case 0x2651D4u: goto label_2651d4;
            case 0x2651D8u: goto label_2651d8;
            case 0x2651DCu: goto label_2651dc;
            case 0x2651E0u: goto label_2651e0;
            case 0x2651E4u: goto label_2651e4;
            case 0x2651E8u: goto label_2651e8;
            case 0x2651ECu: goto label_2651ec;
            case 0x2651F0u: goto label_2651f0;
            case 0x2651F4u: goto label_2651f4;
            case 0x2651F8u: goto label_2651f8;
            case 0x2651FCu: goto label_2651fc;
            case 0x265200u: goto label_265200;
            case 0x265204u: goto label_265204;
            case 0x265208u: goto label_265208;
            case 0x26520Cu: goto label_26520c;
            case 0x265210u: goto label_265210;
            case 0x265214u: goto label_265214;
            case 0x265218u: goto label_265218;
            case 0x26521Cu: goto label_26521c;
            case 0x265220u: goto label_265220;
            case 0x265224u: goto label_265224;
            case 0x265228u: goto label_265228;
            case 0x26522Cu: goto label_26522c;
            case 0x265230u: goto label_265230;
            case 0x265234u: goto label_265234;
            case 0x265238u: goto label_265238;
            case 0x26523Cu: goto label_26523c;
            case 0x265240u: goto label_265240;
            case 0x265244u: goto label_265244;
            case 0x265248u: goto label_265248;
            case 0x26524Cu: goto label_26524c;
            case 0x265250u: goto label_265250;
            case 0x265254u: goto label_265254;
            case 0x265258u: goto label_265258;
            case 0x26525Cu: goto label_26525c;
            case 0x265260u: goto label_265260;
            case 0x265264u: goto label_265264;
            case 0x265268u: goto label_265268;
            case 0x26526Cu: goto label_26526c;
            case 0x265270u: goto label_265270;
            case 0x265274u: goto label_265274;
            case 0x265278u: goto label_265278;
            case 0x26527Cu: goto label_26527c;
            case 0x265280u: goto label_265280;
            case 0x265284u: goto label_265284;
            case 0x265288u: goto label_265288;
            case 0x26528Cu: goto label_26528c;
            case 0x265290u: goto label_265290;
            case 0x265294u: goto label_265294;
            case 0x265298u: goto label_265298;
            case 0x26529Cu: goto label_26529c;
            case 0x2652A0u: goto label_2652a0;
            case 0x2652A4u: goto label_2652a4;
            case 0x2652A8u: goto label_2652a8;
            case 0x2652ACu: goto label_2652ac;
            case 0x2652B0u: goto label_2652b0;
            case 0x2652B4u: goto label_2652b4;
            case 0x2652B8u: goto label_2652b8;
            case 0x2652BCu: goto label_2652bc;
            case 0x2652C0u: goto label_2652c0;
            case 0x2652C4u: goto label_2652c4;
            case 0x2652C8u: goto label_2652c8;
            case 0x2652CCu: goto label_2652cc;
            case 0x2652D0u: goto label_2652d0;
            case 0x2652D4u: goto label_2652d4;
            case 0x2652D8u: goto label_2652d8;
            case 0x2652DCu: goto label_2652dc;
            case 0x2652E0u: goto label_2652e0;
            case 0x2652E4u: goto label_2652e4;
            case 0x2652E8u: goto label_2652e8;
            case 0x2652ECu: goto label_2652ec;
            case 0x2652F0u: goto label_2652f0;
            case 0x2652F4u: goto label_2652f4;
            case 0x2652F8u: goto label_2652f8;
            case 0x2652FCu: goto label_2652fc;
            case 0x265300u: goto label_265300;
            case 0x265304u: goto label_265304;
            case 0x265308u: goto label_265308;
            case 0x26530Cu: goto label_26530c;
            case 0x265310u: goto label_265310;
            case 0x265314u: goto label_265314;
            case 0x265318u: goto label_265318;
            case 0x26531Cu: goto label_26531c;
            case 0x265320u: goto label_265320;
            case 0x265324u: goto label_265324;
            case 0x265328u: goto label_265328;
            case 0x26532Cu: goto label_26532c;
            case 0x265330u: goto label_265330;
            case 0x265334u: goto label_265334;
            case 0x265338u: goto label_265338;
            case 0x26533Cu: goto label_26533c;
            case 0x265340u: goto label_265340;
            case 0x265344u: goto label_265344;
            case 0x265348u: goto label_265348;
            case 0x26534Cu: goto label_26534c;
            case 0x265350u: goto label_265350;
            case 0x265354u: goto label_265354;
            case 0x265358u: goto label_265358;
            case 0x26535Cu: goto label_26535c;
            case 0x265360u: goto label_265360;
            case 0x265364u: goto label_265364;
            case 0x265368u: goto label_265368;
            case 0x26536Cu: goto label_26536c;
            case 0x265370u: goto label_265370;
            case 0x265374u: goto label_265374;
            case 0x265378u: goto label_265378;
            case 0x26537Cu: goto label_26537c;
            case 0x265380u: goto label_265380;
            case 0x265384u: goto label_265384;
            case 0x265388u: goto label_265388;
            case 0x26538Cu: goto label_26538c;
            case 0x265390u: goto label_265390;
            case 0x265394u: goto label_265394;
            case 0x265398u: goto label_265398;
            case 0x26539Cu: goto label_26539c;
            case 0x2653A0u: goto label_2653a0;
            case 0x2653A4u: goto label_2653a4;
            case 0x2653A8u: goto label_2653a8;
            case 0x2653ACu: goto label_2653ac;
            case 0x2653B0u: goto label_2653b0;
            case 0x2653B4u: goto label_2653b4;
            case 0x2653B8u: goto label_2653b8;
            case 0x2653BCu: goto label_2653bc;
            case 0x2653C0u: goto label_2653c0;
            case 0x2653C4u: goto label_2653c4;
            case 0x2653C8u: goto label_2653c8;
            case 0x2653CCu: goto label_2653cc;
            case 0x2653D0u: goto label_2653d0;
            case 0x2653D4u: goto label_2653d4;
            case 0x2653D8u: goto label_2653d8;
            case 0x2653DCu: goto label_2653dc;
            case 0x2653E0u: goto label_2653e0;
            case 0x2653E4u: goto label_2653e4;
            case 0x2653E8u: goto label_2653e8;
            case 0x2653ECu: goto label_2653ec;
            case 0x2653F0u: goto label_2653f0;
            case 0x2653F4u: goto label_2653f4;
            case 0x2653F8u: goto label_2653f8;
            case 0x2653FCu: goto label_2653fc;
            case 0x265400u: goto label_265400;
            case 0x265404u: goto label_265404;
            case 0x265408u: goto label_265408;
            case 0x26540Cu: goto label_26540c;
            case 0x265410u: goto label_265410;
            case 0x265414u: goto label_265414;
            case 0x265418u: goto label_265418;
            case 0x26541Cu: goto label_26541c;
            case 0x265420u: goto label_265420;
            case 0x265424u: goto label_265424;
            case 0x265428u: goto label_265428;
            case 0x26542Cu: goto label_26542c;
            case 0x265430u: goto label_265430;
            case 0x265434u: goto label_265434;
            case 0x265438u: goto label_265438;
            case 0x26543Cu: goto label_26543c;
            case 0x265440u: goto label_265440;
            case 0x265444u: goto label_265444;
            case 0x265448u: goto label_265448;
            case 0x26544Cu: goto label_26544c;
            case 0x265450u: goto label_265450;
            case 0x265454u: goto label_265454;
            case 0x265458u: goto label_265458;
            case 0x26545Cu: goto label_26545c;
            case 0x265460u: goto label_265460;
            case 0x265464u: goto label_265464;
            case 0x265468u: goto label_265468;
            case 0x26546Cu: goto label_26546c;
            case 0x265470u: goto label_265470;
            case 0x265474u: goto label_265474;
            case 0x265478u: goto label_265478;
            case 0x26547Cu: goto label_26547c;
            case 0x265480u: goto label_265480;
            case 0x265484u: goto label_265484;
            case 0x265488u: goto label_265488;
            case 0x26548Cu: goto label_26548c;
            case 0x265490u: goto label_265490;
            case 0x265494u: goto label_265494;
            case 0x265498u: goto label_265498;
            default: break;
        }
        return;
    }
label_fallthrough_0x265494:
    ctx->pc = 0x26549Cu;
}
