#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterTranslate
// Address: 0x297270 - 0x2977b8
void CritterTranslate_0x297270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x297270u;

label_297270:
    // 0x297270: 0x27bdff60
    ctx->pc = 0x297270u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_297274:
    // 0x297274: 0xffbf0080
    ctx->pc = 0x297274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_297278:
    // 0x297278: 0xffb40070
    ctx->pc = 0x297278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_29727c:
    // 0x29727c: 0xffb30060
    ctx->pc = 0x29727cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_297280:
    // 0x297280: 0xffb20050
    ctx->pc = 0x297280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_297284:
    // 0x297284: 0xffb10040
    ctx->pc = 0x297284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_297288:
    // 0x297288: 0xffb00030
    ctx->pc = 0x297288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_29728c:
    // 0x29728c: 0xe7b50098
    ctx->pc = 0x29728cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_297290:
    // 0x297290: 0xe7b40090
    ctx->pc = 0x297290u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_297294:
    // 0x297294: 0x80982d
    ctx->pc = 0x297294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_297298:
    // 0x297298: 0xa0802d
    ctx->pc = 0x297298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29729c:
    // 0x29729c: 0x3c020031
    ctx->pc = 0x29729cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2972a0:
    // 0x2972a0: 0xc6010084
    ctx->pc = 0x2972a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2972a4:
    // 0x2972a4: 0xc440ffa8
    ctx->pc = 0x2972a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2972a8:
    // 0x2972a8: 0x46000d02
    ctx->pc = 0x2972a8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2972ac:
    // 0x2972ac: 0x3c020034
    ctx->pc = 0x2972acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2972b0:
    // 0x2972b0: 0x8c42e7c8
    ctx->pc = 0x2972b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_2972b4:
    // 0x2972b4: 0xc44000b0
    ctx->pc = 0x2972b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2972b8:
    // 0x2972b8: 0x4600a502
    ctx->pc = 0x2972b8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2972bc:
    // 0x2972bc: 0x8e620004
    ctx->pc = 0x2972bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2972c0:
    // 0x2972c0: 0xc45500ac
    ctx->pc = 0x2972c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2972c4:
    // 0x2972c4: 0x44800000
    ctx->pc = 0x2972c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2972c8:
    // 0x2972c8: 0x4600a836
    ctx->pc = 0x2972c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2972cc:
    // 0x2972cc: 0x0
    ctx->pc = 0x2972ccu;
    // NOP
label_2972d0:
    // 0x2972d0: 0x45000003
label_2972d4:
    if (ctx->pc == 0x2972D4u) {
        ctx->pc = 0x2972D4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2972D8u;
        goto label_2972d8;
    }
    ctx->pc = 0x2972D0u;
    {
        const bool branch_taken_0x2972d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2972D4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2972d0) {
            ctx->pc = 0x2972E0u;
            goto label_2972e0;
        }
    }
    ctx->pc = 0x2972D8u;
label_2972d8:
    // 0x2972d8: 0x1000012d
label_2972dc:
    if (ctx->pc == 0x2972DCu) {
        ctx->pc = 0x2972DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2972E0u;
        goto label_2972e0;
    }
    ctx->pc = 0x2972D8u;
    {
        const bool branch_taken_0x2972d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2972DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2972d8) {
            ctx->pc = 0x297790u;
            goto label_297790;
        }
    }
    ctx->pc = 0x2972E0u;
label_2972e0:
    // 0x2972e0: 0x8e030000
    ctx->pc = 0x2972e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2972e4:
    // 0x2972e4: 0x24020038
    ctx->pc = 0x2972e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 56));
label_2972e8:
    // 0x2972e8: 0x54620016
label_2972ec:
    if (ctx->pc == 0x2972ECu) {
        ctx->pc = 0x2972ECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x2972F0u;
        goto label_2972f0;
    }
    ctx->pc = 0x2972E8u;
    {
        const bool branch_taken_0x2972e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2972e8) {
            ctx->pc = 0x2972ECu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->pc = 0x297344u;
            goto label_297344;
        }
    }
    ctx->pc = 0x2972F0u;
label_2972f0:
    // 0x2972f0: 0xc6600240
    ctx->pc = 0x2972f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2972f4:
    // 0x2972f4: 0xc6610040
    ctx->pc = 0x2972f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2972f8:
    // 0x2972f8: 0x46010001
    ctx->pc = 0x2972f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2972fc:
    // 0x2972fc: 0xe7a00010
    ctx->pc = 0x2972fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_297300:
    // 0x297300: 0xc6600244
    ctx->pc = 0x297300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297304:
    // 0x297304: 0xc6610044
    ctx->pc = 0x297304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_297308:
    // 0x297308: 0x46010001
    ctx->pc = 0x297308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_29730c:
    // 0x29730c: 0xe7a00014
    ctx->pc = 0x29730cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_297310:
    // 0x297310: 0xc6600248
    ctx->pc = 0x297310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297314:
    // 0x297314: 0xc6610048
    ctx->pc = 0x297314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_297318:
    // 0x297318: 0x46010001
    ctx->pc = 0x297318u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_29731c:
    // 0x29731c: 0xe7a00018
    ctx->pc = 0x29731cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_297320:
    // 0x297320: 0x27a40010
    ctx->pc = 0x297320u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
label_297324:
    // 0x297324: 0x27a50020
    ctx->pc = 0x297324u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
label_297328:
    // 0x297328: 0xc0a5c78
label_29732c:
    if (ctx->pc == 0x29732Cu) {
        ctx->pc = 0x29732Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
        ctx->pc = 0x297330u;
        goto label_297330;
    }
    ctx->pc = 0x297328u;
    SET_GPR_U32(ctx, 31, 0x297330u);
    ctx->pc = 0x29732Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
    ctx->pc = 0x2971E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetVectorNormalXZ_0x2971e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297330u; }
    }
    if (ctx->pc != 0x297330u) { return; }
    ctx->pc = 0x297330u;
label_297330:
    // 0x297330: 0xc7a00020
    ctx->pc = 0x297330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297334:
    // 0x297334: 0x4600a002
    ctx->pc = 0x297334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_297338:
    // 0x297338: 0xe7a00020
    ctx->pc = 0x297338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_29733c:
    // 0x29733c: 0x10000042
label_297340:
    if (ctx->pc == 0x297340u) {
        ctx->pc = 0x297340u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x297344u;
        goto label_297344;
    }
    ctx->pc = 0x29733Cu;
    {
        const bool branch_taken_0x29733c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x297340u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x29733c) {
            ctx->pc = 0x297448u;
            goto label_297448;
        }
    }
    ctx->pc = 0x297344u;
label_297344:
    // 0x297344: 0x8c42005c
    ctx->pc = 0x297344u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_297348:
    // 0x297348: 0x30420040
    ctx->pc = 0x297348u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
label_29734c:
    // 0x29734c: 0x10400006
label_297350:
    if (ctx->pc == 0x297350u) {
        ctx->pc = 0x297350u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 1088));
        ctx->pc = 0x297354u;
        goto label_297354;
    }
    ctx->pc = 0x29734Cu;
    {
        const bool branch_taken_0x29734c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x297350u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 1088));
        if (branch_taken_0x29734c) {
            ctx->pc = 0x297368u;
            goto label_297368;
        }
    }
    ctx->pc = 0x297354u;
label_297354:
    // 0x297354: 0x27a50028
    ctx->pc = 0x297354u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 40));
label_297358:
    // 0x297358: 0xc0a5c78
label_29735c:
    if (ctx->pc == 0x29735Cu) {
        ctx->pc = 0x29735Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 44));
        ctx->pc = 0x297360u;
        goto label_297360;
    }
    ctx->pc = 0x297358u;
    SET_GPR_U32(ctx, 31, 0x297360u);
    ctx->pc = 0x29735Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 44));
    ctx->pc = 0x2971E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetVectorNormalXZ_0x2971e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297360u; }
    }
    if (ctx->pc != 0x297360u) { return; }
    ctx->pc = 0x297360u;
label_297360:
    // 0x297360: 0x10000006
label_297364:
    if (ctx->pc == 0x297364u) {
        ctx->pc = 0x297364u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x297368u;
        goto label_297368;
    }
    ctx->pc = 0x297360u;
    {
        const bool branch_taken_0x297360 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x297364u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x297360) {
            ctx->pc = 0x29737Cu;
            goto label_29737c;
        }
    }
    ctx->pc = 0x297368u;
label_297368:
    // 0x297368: 0x26640030
    ctx->pc = 0x297368u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 48));
label_29736c:
    // 0x29736c: 0x27a50028
    ctx->pc = 0x29736cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 40));
label_297370:
    // 0x297370: 0xc0a5c78
label_297374:
    if (ctx->pc == 0x297374u) {
        ctx->pc = 0x297374u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 44));
        ctx->pc = 0x297378u;
        goto label_297378;
    }
    ctx->pc = 0x297370u;
    SET_GPR_U32(ctx, 31, 0x297378u);
    ctx->pc = 0x297374u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 44));
    ctx->pc = 0x2971E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetVectorNormalXZ_0x2971e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297378u; }
    }
    if (ctx->pc != 0x297378u) { return; }
    ctx->pc = 0x297378u;
label_297378:
    // 0x297378: 0x8e020000
    ctx->pc = 0x297378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29737c:
    // 0x29737c: 0x2443ffce
    ctx->pc = 0x29737cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967246));
label_297380:
    // 0x297380: 0x2c620006
    ctx->pc = 0x297380u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 6));
label_297384:
    // 0x297384: 0x1040002c
label_297388:
    if (ctx->pc == 0x297388u) {
        ctx->pc = 0x297388u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x29738Cu;
        goto label_29738c;
    }
    ctx->pc = 0x297384u;
    {
        const bool branch_taken_0x297384 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x297388u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x297384) {
            ctx->pc = 0x297438u;
            goto label_297438;
        }
    }
    ctx->pc = 0x29738Cu;
label_29738c:
    // 0x29738c: 0x2442e330
    ctx->pc = 0x29738cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959920));
label_297390:
    // 0x297390: 0x31880
    ctx->pc = 0x297390u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_297394:
    // 0x297394: 0x621821
    ctx->pc = 0x297394u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_297398:
    // 0x297398: 0x8c620000
    ctx->pc = 0x297398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29739c:
    // 0x29739c: 0x400008
label_2973a0:
    if (ctx->pc == 0x2973A0u) {
        ctx->pc = 0x2973A4u;
        goto label_2973a4;
    }
    ctx->pc = 0x29739Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297270u: goto label_297270;
            case 0x297274u: goto label_297274;
            case 0x297278u: goto label_297278;
            case 0x29727Cu: goto label_29727c;
            case 0x297280u: goto label_297280;
            case 0x297284u: goto label_297284;
            case 0x297288u: goto label_297288;
            case 0x29728Cu: goto label_29728c;
            case 0x297290u: goto label_297290;
            case 0x297294u: goto label_297294;
            case 0x297298u: goto label_297298;
            case 0x29729Cu: goto label_29729c;
            case 0x2972A0u: goto label_2972a0;
            case 0x2972A4u: goto label_2972a4;
            case 0x2972A8u: goto label_2972a8;
            case 0x2972ACu: goto label_2972ac;
            case 0x2972B0u: goto label_2972b0;
            case 0x2972B4u: goto label_2972b4;
            case 0x2972B8u: goto label_2972b8;
            case 0x2972BCu: goto label_2972bc;
            case 0x2972C0u: goto label_2972c0;
            case 0x2972C4u: goto label_2972c4;
            case 0x2972C8u: goto label_2972c8;
            case 0x2972CCu: goto label_2972cc;
            case 0x2972D0u: goto label_2972d0;
            case 0x2972D4u: goto label_2972d4;
            case 0x2972D8u: goto label_2972d8;
            case 0x2972DCu: goto label_2972dc;
            case 0x2972E0u: goto label_2972e0;
            case 0x2972E4u: goto label_2972e4;
            case 0x2972E8u: goto label_2972e8;
            case 0x2972ECu: goto label_2972ec;
            case 0x2972F0u: goto label_2972f0;
            case 0x2972F4u: goto label_2972f4;
            case 0x2972F8u: goto label_2972f8;
            case 0x2972FCu: goto label_2972fc;
            case 0x297300u: goto label_297300;
            case 0x297304u: goto label_297304;
            case 0x297308u: goto label_297308;
            case 0x29730Cu: goto label_29730c;
            case 0x297310u: goto label_297310;
            case 0x297314u: goto label_297314;
            case 0x297318u: goto label_297318;
            case 0x29731Cu: goto label_29731c;
            case 0x297320u: goto label_297320;
            case 0x297324u: goto label_297324;
            case 0x297328u: goto label_297328;
            case 0x29732Cu: goto label_29732c;
            case 0x297330u: goto label_297330;
            case 0x297334u: goto label_297334;
            case 0x297338u: goto label_297338;
            case 0x29733Cu: goto label_29733c;
            case 0x297340u: goto label_297340;
            case 0x297344u: goto label_297344;
            case 0x297348u: goto label_297348;
            case 0x29734Cu: goto label_29734c;
            case 0x297350u: goto label_297350;
            case 0x297354u: goto label_297354;
            case 0x297358u: goto label_297358;
            case 0x29735Cu: goto label_29735c;
            case 0x297360u: goto label_297360;
            case 0x297364u: goto label_297364;
            case 0x297368u: goto label_297368;
            case 0x29736Cu: goto label_29736c;
            case 0x297370u: goto label_297370;
            case 0x297374u: goto label_297374;
            case 0x297378u: goto label_297378;
            case 0x29737Cu: goto label_29737c;
            case 0x297380u: goto label_297380;
            case 0x297384u: goto label_297384;
            case 0x297388u: goto label_297388;
            case 0x29738Cu: goto label_29738c;
            case 0x297390u: goto label_297390;
            case 0x297394u: goto label_297394;
            case 0x297398u: goto label_297398;
            case 0x29739Cu: goto label_29739c;
            case 0x2973A0u: goto label_2973a0;
            case 0x2973A4u: goto label_2973a4;
            case 0x2973A8u: goto label_2973a8;
            case 0x2973ACu: goto label_2973ac;
            case 0x2973B0u: goto label_2973b0;
            case 0x2973B4u: goto label_2973b4;
            case 0x2973B8u: goto label_2973b8;
            case 0x2973BCu: goto label_2973bc;
            case 0x2973C0u: goto label_2973c0;
            case 0x2973C4u: goto label_2973c4;
            case 0x2973C8u: goto label_2973c8;
            case 0x2973CCu: goto label_2973cc;
            case 0x2973D0u: goto label_2973d0;
            case 0x2973D4u: goto label_2973d4;
            case 0x2973D8u: goto label_2973d8;
            case 0x2973DCu: goto label_2973dc;
            case 0x2973E0u: goto label_2973e0;
            case 0x2973E4u: goto label_2973e4;
            case 0x2973E8u: goto label_2973e8;
            case 0x2973ECu: goto label_2973ec;
            case 0x2973F0u: goto label_2973f0;
            case 0x2973F4u: goto label_2973f4;
            case 0x2973F8u: goto label_2973f8;
            case 0x2973FCu: goto label_2973fc;
            case 0x297400u: goto label_297400;
            case 0x297404u: goto label_297404;
            case 0x297408u: goto label_297408;
            case 0x29740Cu: goto label_29740c;
            case 0x297410u: goto label_297410;
            case 0x297414u: goto label_297414;
            case 0x297418u: goto label_297418;
            case 0x29741Cu: goto label_29741c;
            case 0x297420u: goto label_297420;
            case 0x297424u: goto label_297424;
            case 0x297428u: goto label_297428;
            case 0x29742Cu: goto label_29742c;
            case 0x297430u: goto label_297430;
            case 0x297434u: goto label_297434;
            case 0x297438u: goto label_297438;
            case 0x29743Cu: goto label_29743c;
            case 0x297440u: goto label_297440;
            case 0x297444u: goto label_297444;
            case 0x297448u: goto label_297448;
            case 0x29744Cu: goto label_29744c;
            case 0x297450u: goto label_297450;
            case 0x297454u: goto label_297454;
            case 0x297458u: goto label_297458;
            case 0x29745Cu: goto label_29745c;
            case 0x297460u: goto label_297460;
            case 0x297464u: goto label_297464;
            case 0x297468u: goto label_297468;
            case 0x29746Cu: goto label_29746c;
            case 0x297470u: goto label_297470;
            case 0x297474u: goto label_297474;
            case 0x297478u: goto label_297478;
            case 0x29747Cu: goto label_29747c;
            case 0x297480u: goto label_297480;
            case 0x297484u: goto label_297484;
            case 0x297488u: goto label_297488;
            case 0x29748Cu: goto label_29748c;
            case 0x297490u: goto label_297490;
            case 0x297494u: goto label_297494;
            case 0x297498u: goto label_297498;
            case 0x29749Cu: goto label_29749c;
            case 0x2974A0u: goto label_2974a0;
            case 0x2974A4u: goto label_2974a4;
            case 0x2974A8u: goto label_2974a8;
            case 0x2974ACu: goto label_2974ac;
            case 0x2974B0u: goto label_2974b0;
            case 0x2974B4u: goto label_2974b4;
            case 0x2974B8u: goto label_2974b8;
            case 0x2974BCu: goto label_2974bc;
            case 0x2974C0u: goto label_2974c0;
            case 0x2974C4u: goto label_2974c4;
            case 0x2974C8u: goto label_2974c8;
            case 0x2974CCu: goto label_2974cc;
            case 0x2974D0u: goto label_2974d0;
            case 0x2974D4u: goto label_2974d4;
            case 0x2974D8u: goto label_2974d8;
            case 0x2974DCu: goto label_2974dc;
            case 0x2974E0u: goto label_2974e0;
            case 0x2974E4u: goto label_2974e4;
            case 0x2974E8u: goto label_2974e8;
            case 0x2974ECu: goto label_2974ec;
            case 0x2974F0u: goto label_2974f0;
            case 0x2974F4u: goto label_2974f4;
            case 0x2974F8u: goto label_2974f8;
            case 0x2974FCu: goto label_2974fc;
            case 0x297500u: goto label_297500;
            case 0x297504u: goto label_297504;
            case 0x297508u: goto label_297508;
            case 0x29750Cu: goto label_29750c;
            case 0x297510u: goto label_297510;
            case 0x297514u: goto label_297514;
            case 0x297518u: goto label_297518;
            case 0x29751Cu: goto label_29751c;
            case 0x297520u: goto label_297520;
            case 0x297524u: goto label_297524;
            case 0x297528u: goto label_297528;
            case 0x29752Cu: goto label_29752c;
            case 0x297530u: goto label_297530;
            case 0x297534u: goto label_297534;
            case 0x297538u: goto label_297538;
            case 0x29753Cu: goto label_29753c;
            case 0x297540u: goto label_297540;
            case 0x297544u: goto label_297544;
            case 0x297548u: goto label_297548;
            case 0x29754Cu: goto label_29754c;
            case 0x297550u: goto label_297550;
            case 0x297554u: goto label_297554;
            case 0x297558u: goto label_297558;
            case 0x29755Cu: goto label_29755c;
            case 0x297560u: goto label_297560;
            case 0x297564u: goto label_297564;
            case 0x297568u: goto label_297568;
            case 0x29756Cu: goto label_29756c;
            case 0x297570u: goto label_297570;
            case 0x297574u: goto label_297574;
            case 0x297578u: goto label_297578;
            case 0x29757Cu: goto label_29757c;
            case 0x297580u: goto label_297580;
            case 0x297584u: goto label_297584;
            case 0x297588u: goto label_297588;
            case 0x29758Cu: goto label_29758c;
            case 0x297590u: goto label_297590;
            case 0x297594u: goto label_297594;
            case 0x297598u: goto label_297598;
            case 0x29759Cu: goto label_29759c;
            case 0x2975A0u: goto label_2975a0;
            case 0x2975A4u: goto label_2975a4;
            case 0x2975A8u: goto label_2975a8;
            case 0x2975ACu: goto label_2975ac;
            case 0x2975B0u: goto label_2975b0;
            case 0x2975B4u: goto label_2975b4;
            case 0x2975B8u: goto label_2975b8;
            case 0x2975BCu: goto label_2975bc;
            case 0x2975C0u: goto label_2975c0;
            case 0x2975C4u: goto label_2975c4;
            case 0x2975C8u: goto label_2975c8;
            case 0x2975CCu: goto label_2975cc;
            case 0x2975D0u: goto label_2975d0;
            case 0x2975D4u: goto label_2975d4;
            case 0x2975D8u: goto label_2975d8;
            case 0x2975DCu: goto label_2975dc;
            case 0x2975E0u: goto label_2975e0;
            case 0x2975E4u: goto label_2975e4;
            case 0x2975E8u: goto label_2975e8;
            case 0x2975ECu: goto label_2975ec;
            case 0x2975F0u: goto label_2975f0;
            case 0x2975F4u: goto label_2975f4;
            case 0x2975F8u: goto label_2975f8;
            case 0x2975FCu: goto label_2975fc;
            case 0x297600u: goto label_297600;
            case 0x297604u: goto label_297604;
            case 0x297608u: goto label_297608;
            case 0x29760Cu: goto label_29760c;
            case 0x297610u: goto label_297610;
            case 0x297614u: goto label_297614;
            case 0x297618u: goto label_297618;
            case 0x29761Cu: goto label_29761c;
            case 0x297620u: goto label_297620;
            case 0x297624u: goto label_297624;
            case 0x297628u: goto label_297628;
            case 0x29762Cu: goto label_29762c;
            case 0x297630u: goto label_297630;
            case 0x297634u: goto label_297634;
            case 0x297638u: goto label_297638;
            case 0x29763Cu: goto label_29763c;
            case 0x297640u: goto label_297640;
            case 0x297644u: goto label_297644;
            case 0x297648u: goto label_297648;
            case 0x29764Cu: goto label_29764c;
            case 0x297650u: goto label_297650;
            case 0x297654u: goto label_297654;
            case 0x297658u: goto label_297658;
            case 0x29765Cu: goto label_29765c;
            case 0x297660u: goto label_297660;
            case 0x297664u: goto label_297664;
            case 0x297668u: goto label_297668;
            case 0x29766Cu: goto label_29766c;
            case 0x297670u: goto label_297670;
            case 0x297674u: goto label_297674;
            case 0x297678u: goto label_297678;
            case 0x29767Cu: goto label_29767c;
            case 0x297680u: goto label_297680;
            case 0x297684u: goto label_297684;
            case 0x297688u: goto label_297688;
            case 0x29768Cu: goto label_29768c;
            case 0x297690u: goto label_297690;
            case 0x297694u: goto label_297694;
            case 0x297698u: goto label_297698;
            case 0x29769Cu: goto label_29769c;
            case 0x2976A0u: goto label_2976a0;
            case 0x2976A4u: goto label_2976a4;
            case 0x2976A8u: goto label_2976a8;
            case 0x2976ACu: goto label_2976ac;
            case 0x2976B0u: goto label_2976b0;
            case 0x2976B4u: goto label_2976b4;
            case 0x2976B8u: goto label_2976b8;
            case 0x2976BCu: goto label_2976bc;
            case 0x2976C0u: goto label_2976c0;
            case 0x2976C4u: goto label_2976c4;
            case 0x2976C8u: goto label_2976c8;
            case 0x2976CCu: goto label_2976cc;
            case 0x2976D0u: goto label_2976d0;
            case 0x2976D4u: goto label_2976d4;
            case 0x2976D8u: goto label_2976d8;
            case 0x2976DCu: goto label_2976dc;
            case 0x2976E0u: goto label_2976e0;
            case 0x2976E4u: goto label_2976e4;
            case 0x2976E8u: goto label_2976e8;
            case 0x2976ECu: goto label_2976ec;
            case 0x2976F0u: goto label_2976f0;
            case 0x2976F4u: goto label_2976f4;
            case 0x2976F8u: goto label_2976f8;
            case 0x2976FCu: goto label_2976fc;
            case 0x297700u: goto label_297700;
            case 0x297704u: goto label_297704;
            case 0x297708u: goto label_297708;
            case 0x29770Cu: goto label_29770c;
            case 0x297710u: goto label_297710;
            case 0x297714u: goto label_297714;
            case 0x297718u: goto label_297718;
            case 0x29771Cu: goto label_29771c;
            case 0x297720u: goto label_297720;
            case 0x297724u: goto label_297724;
            case 0x297728u: goto label_297728;
            case 0x29772Cu: goto label_29772c;
            case 0x297730u: goto label_297730;
            case 0x297734u: goto label_297734;
            case 0x297738u: goto label_297738;
            case 0x29773Cu: goto label_29773c;
            case 0x297740u: goto label_297740;
            case 0x297744u: goto label_297744;
            case 0x297748u: goto label_297748;
            case 0x29774Cu: goto label_29774c;
            case 0x297750u: goto label_297750;
            case 0x297754u: goto label_297754;
            case 0x297758u: goto label_297758;
            case 0x29775Cu: goto label_29775c;
            case 0x297760u: goto label_297760;
            case 0x297764u: goto label_297764;
            case 0x297768u: goto label_297768;
            case 0x29776Cu: goto label_29776c;
            case 0x297770u: goto label_297770;
            case 0x297774u: goto label_297774;
            case 0x297778u: goto label_297778;
            case 0x29777Cu: goto label_29777c;
            case 0x297780u: goto label_297780;
            case 0x297784u: goto label_297784;
            case 0x297788u: goto label_297788;
            case 0x29778Cu: goto label_29778c;
            case 0x297790u: goto label_297790;
            case 0x297794u: goto label_297794;
            case 0x297798u: goto label_297798;
            case 0x29779Cu: goto label_29779c;
            case 0x2977A0u: goto label_2977a0;
            case 0x2977A4u: goto label_2977a4;
            case 0x2977A8u: goto label_2977a8;
            case 0x2977ACu: goto label_2977ac;
            case 0x2977B0u: goto label_2977b0;
            case 0x2977B4u: goto label_2977b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2973A4u;
label_2973a4:
    // 0x2973a4: 0x4600a007
    ctx->pc = 0x2973a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_2973a8:
    // 0x2973a8: 0xc7a10028
    ctx->pc = 0x2973a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2973ac:
    // 0x2973ac: 0x46010042
    ctx->pc = 0x2973acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2973b0:
    // 0x2973b0: 0xe7a10020
    ctx->pc = 0x2973b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2973b4:
    // 0x2973b4: 0xc7a1002c
    ctx->pc = 0x2973b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2973b8:
    // 0x2973b8: 0x10000024
label_2973bc:
    if (ctx->pc == 0x2973BCu) {
        ctx->pc = 0x2973BCu;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x2973C0u;
        goto label_2973c0;
    }
    ctx->pc = 0x2973B8u;
    {
        const bool branch_taken_0x2973b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2973BCu;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x2973b8) {
            ctx->pc = 0x29744Cu;
            goto label_29744c;
        }
    }
    ctx->pc = 0x2973C0u;
label_2973c0:
    // 0x2973c0: 0x4600a007
    ctx->pc = 0x2973c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_2973c4:
    // 0x2973c4: 0xc7a1002c
    ctx->pc = 0x2973c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2973c8:
    // 0x2973c8: 0x46010002
    ctx->pc = 0x2973c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2973cc:
    // 0x2973cc: 0xe7a00020
    ctx->pc = 0x2973ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2973d0:
    // 0x2973d0: 0x1000001d
label_2973d4:
    if (ctx->pc == 0x2973D4u) {
        ctx->pc = 0x2973D4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2973D8u;
        goto label_2973d8;
    }
    ctx->pc = 0x2973D0u;
    {
        const bool branch_taken_0x2973d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2973D4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2973d0) {
            ctx->pc = 0x297448u;
            goto label_297448;
        }
    }
    ctx->pc = 0x2973D8u;
label_2973d8:
    // 0x2973d8: 0xc7a0002c
    ctx->pc = 0x2973d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2973dc:
    // 0x2973dc: 0x4600a002
    ctx->pc = 0x2973dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2973e0:
    // 0x2973e0: 0xe7a00020
    ctx->pc = 0x2973e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2973e4:
    // 0x2973e4: 0x4600a007
    ctx->pc = 0x2973e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_2973e8:
    // 0x2973e8: 0xc7a10028
    ctx->pc = 0x2973e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2973ec:
    // 0x2973ec: 0x10000017
label_2973f0:
    if (ctx->pc == 0x2973F0u) {
        ctx->pc = 0x2973F0u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x2973F4u;
        goto label_2973f4;
    }
    ctx->pc = 0x2973ECu;
    {
        const bool branch_taken_0x2973ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2973F0u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x2973ec) {
            ctx->pc = 0x29744Cu;
            goto label_29744c;
        }
    }
    ctx->pc = 0x2973F4u;
label_2973f4:
    // 0x2973f4: 0xc7a00028
    ctx->pc = 0x2973f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2973f8:
    // 0x2973f8: 0x4600a002
    ctx->pc = 0x2973f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2973fc:
    // 0x2973fc: 0xe7a00020
    ctx->pc = 0x2973fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_297400:
    // 0x297400: 0xc7a0002c
    ctx->pc = 0x297400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297404:
    // 0x297404: 0x4600a002
    ctx->pc = 0x297404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_297408:
    // 0x297408: 0xe7a00024
    ctx->pc = 0x297408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_29740c:
    // 0x29740c: 0x4600a007
    ctx->pc = 0x29740cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_297410:
    // 0x297410: 0xc7a1002c
    ctx->pc = 0x297410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_297414:
    // 0x297414: 0x46010002
    ctx->pc = 0x297414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_297418:
    // 0x297418: 0xc7a10020
    ctx->pc = 0x297418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29741c:
    // 0x29741c: 0x46010000
    ctx->pc = 0x29741cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_297420:
    // 0x297420: 0xe7a00020
    ctx->pc = 0x297420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_297424:
    // 0x297424: 0xc7a00028
    ctx->pc = 0x297424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297428:
    // 0x297428: 0x4600a002
    ctx->pc = 0x297428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_29742c:
    // 0x29742c: 0xc7a10024
    ctx->pc = 0x29742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_297430:
    // 0x297430: 0x10000006
label_297434:
    if (ctx->pc == 0x297434u) {
        ctx->pc = 0x297434u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x297438u;
        goto label_297438;
    }
    ctx->pc = 0x297430u;
    {
        const bool branch_taken_0x297430 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x297434u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x297430) {
            ctx->pc = 0x29744Cu;
            goto label_29744c;
        }
    }
    ctx->pc = 0x297438u;
label_297438:
    // 0x297438: 0xc7a00028
    ctx->pc = 0x297438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29743c:
    // 0x29743c: 0x4600a002
    ctx->pc = 0x29743cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_297440:
    // 0x297440: 0xe7a00020
    ctx->pc = 0x297440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_297444:
    // 0x297444: 0xc7a0002c
    ctx->pc = 0x297444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297448:
    // 0x297448: 0x4600a002
    ctx->pc = 0x297448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_29744c:
    // 0x29744c: 0xe7a00024
    ctx->pc = 0x29744cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_297450:
    // 0x297450: 0xc7a00020
    ctx->pc = 0x297450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297454:
    // 0x297454: 0xafa00014
    ctx->pc = 0x297454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_297458:
    // 0x297458: 0xc7a70024
    ctx->pc = 0x297458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_29745c:
    // 0x29745c: 0x3c020031
    ctx->pc = 0x29745cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_297460:
    // 0x297460: 0xc6640510
    ctx->pc = 0x297460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_297464:
    // 0x297464: 0xc441ffa8
    ctx->pc = 0x297464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_297468:
    // 0x297468: 0x460120c2
    ctx->pc = 0x297468u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_29746c:
    // 0x29746c: 0x460018c0
    ctx->pc = 0x29746cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_297470:
    // 0x297470: 0xe7a30010
    ctx->pc = 0x297470u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_297474:
    // 0x297474: 0xc6660514
    ctx->pc = 0x297474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_297478:
    // 0x297478: 0x46013082
    ctx->pc = 0x297478u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_29747c:
    // 0x29747c: 0xc7a80014
    ctx->pc = 0x29747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_297480:
    // 0x297480: 0x46081080
    ctx->pc = 0x297480u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
label_297484:
    // 0x297484: 0xe7a20014
    ctx->pc = 0x297484u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_297488:
    // 0x297488: 0xc6650518
    ctx->pc = 0x297488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_29748c:
    // 0x29748c: 0x46012842
    ctx->pc = 0x29748cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_297490:
    // 0x297490: 0x46070840
    ctx->pc = 0x297490u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_297494:
    // 0x297494: 0xe7a10018
    ctx->pc = 0x297494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_297498:
    // 0x297498: 0xc6600040
    ctx->pc = 0x297498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29749c:
    // 0x29749c: 0x46030000
    ctx->pc = 0x29749cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2974a0:
    // 0x2974a0: 0xe7a00000
    ctx->pc = 0x2974a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2974a4:
    // 0x2974a4: 0xc6600044
    ctx->pc = 0x2974a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2974a8:
    // 0x2974a8: 0x46020000
    ctx->pc = 0x2974a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2974ac:
    // 0x2974ac: 0xe7a00004
    ctx->pc = 0x2974acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2974b0:
    // 0x2974b0: 0xc6600048
    ctx->pc = 0x2974b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2974b4:
    // 0x2974b4: 0x46010000
    ctx->pc = 0x2974b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2974b8:
    // 0x2974b8: 0xe7a00008
    ctx->pc = 0x2974b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2974bc:
    // 0x2974bc: 0x3c013f4c
    ctx->pc = 0x2974bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
label_2974c0:
    // 0x2974c0: 0x3421cccd
    ctx->pc = 0x2974c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_2974c4:
    // 0x2974c4: 0x44810000
    ctx->pc = 0x2974c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2974c8:
    // 0x2974c8: 0x46002102
    ctx->pc = 0x2974c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2974cc:
    // 0x2974cc: 0xe6640510
    ctx->pc = 0x2974ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1296), bits); }
label_2974d0:
    // 0x2974d0: 0x46003182
    ctx->pc = 0x2974d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_2974d4:
    // 0x2974d4: 0xe6660514
    ctx->pc = 0x2974d4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1300), bits); }
label_2974d8:
    // 0x2974d8: 0x46002942
    ctx->pc = 0x2974d8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_2974dc:
    // 0x2974dc: 0x46002105
    ctx->pc = 0x2974dcu;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
label_2974e0:
    // 0x2974e0: 0x3c013c23
    ctx->pc = 0x2974e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
label_2974e4:
    // 0x2974e4: 0x3421d70a
    ctx->pc = 0x2974e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
label_2974e8:
    // 0x2974e8: 0x44810000
    ctx->pc = 0x2974e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2974ec:
    // 0x2974ec: 0x46002034
    ctx->pc = 0x2974ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2974f0:
    // 0x2974f0: 0x0
    ctx->pc = 0x2974f0u;
    // NOP
label_2974f4:
    // 0x2974f4: 0x45000002
label_2974f8:
    if (ctx->pc == 0x2974F8u) {
        ctx->pc = 0x2974F8u;
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1304), bits); }
        ctx->pc = 0x2974FCu;
        goto label_2974fc;
    }
    ctx->pc = 0x2974F4u;
    {
        const bool branch_taken_0x2974f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2974F8u;
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1304), bits); }
        if (branch_taken_0x2974f4) {
            ctx->pc = 0x297500u;
            goto label_297500;
        }
    }
    ctx->pc = 0x2974FCu;
label_2974fc:
    // 0x2974fc: 0xe6680510
    ctx->pc = 0x2974fcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1296), bits); }
label_297500:
    // 0x297500: 0xc6600514
    ctx->pc = 0x297500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297504:
    // 0x297504: 0x46000005
    ctx->pc = 0x297504u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_297508:
    // 0x297508: 0x3c013c23
    ctx->pc = 0x297508u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
label_29750c:
    // 0x29750c: 0x3421d70a
    ctx->pc = 0x29750cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
label_297510:
    // 0x297510: 0x44810800
    ctx->pc = 0x297510u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_297514:
    // 0x297514: 0x46010034
    ctx->pc = 0x297514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_297518:
    // 0x297518: 0x0
    ctx->pc = 0x297518u;
    // NOP
label_29751c:
    // 0x29751c: 0x45030001
label_297520:
    if (ctx->pc == 0x297520u) {
        ctx->pc = 0x297520u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 1300), GPR_U32(ctx, 0));
        ctx->pc = 0x297524u;
        goto label_297524;
    }
    ctx->pc = 0x29751Cu;
    {
        const bool branch_taken_0x29751c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29751c) {
            ctx->pc = 0x297520u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 1300), GPR_U32(ctx, 0));
            ctx->pc = 0x297524u;
            goto label_297524;
        }
    }
    ctx->pc = 0x297524u;
label_297524:
    // 0x297524: 0xc6600518
    ctx->pc = 0x297524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297528:
    // 0x297528: 0x46000005
    ctx->pc = 0x297528u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_29752c:
    // 0x29752c: 0x3c013c23
    ctx->pc = 0x29752cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
label_297530:
    // 0x297530: 0x3421d70a
    ctx->pc = 0x297530u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
label_297534:
    // 0x297534: 0x44810800
    ctx->pc = 0x297534u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_297538:
    // 0x297538: 0x46010034
    ctx->pc = 0x297538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29753c:
    // 0x29753c: 0x0
    ctx->pc = 0x29753cu;
    // NOP
label_297540:
    // 0x297540: 0x45030001
label_297544:
    if (ctx->pc == 0x297544u) {
        ctx->pc = 0x297544u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 1304), GPR_U32(ctx, 0));
        ctx->pc = 0x297548u;
        goto label_297548;
    }
    ctx->pc = 0x297540u;
    {
        const bool branch_taken_0x297540 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x297540) {
            ctx->pc = 0x297544u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 1304), GPR_U32(ctx, 0));
            ctx->pc = 0x297548u;
            goto label_297548;
        }
    }
    ctx->pc = 0x297548u;
label_297548:
    // 0x297548: 0xc6620514
    ctx->pc = 0x297548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29754c:
    // 0x29754c: 0x44801800
    ctx->pc = 0x29754cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
label_297550:
    // 0x297550: 0x46021834
    ctx->pc = 0x297550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_297554:
    // 0x297554: 0x0
    ctx->pc = 0x297554u;
    // NOP
label_297558:
    // 0x297558: 0x4500000b
label_29755c:
    if (ctx->pc == 0x29755Cu) {
        ctx->pc = 0x29755Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x297560u;
        goto label_297560;
    }
    ctx->pc = 0x297558u;
    {
        const bool branch_taken_0x297558 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29755Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x297558) {
            ctx->pc = 0x297588u;
            goto label_297588;
        }
    }
    ctx->pc = 0x297560u;
label_297560:
    // 0x297560: 0xc440ffa8
    ctx->pc = 0x297560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297564:
    // 0x297564: 0x3c0142c8
    ctx->pc = 0x297564u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
label_297568:
    // 0x297568: 0x44810800
    ctx->pc = 0x297568u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_29756c:
    // 0x29756c: 0x46010002
    ctx->pc = 0x29756cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_297570:
    // 0x297570: 0x46001001
    ctx->pc = 0x297570u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_297574:
    // 0x297574: 0x46030034
    ctx->pc = 0x297574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_297578:
    // 0x297578: 0x0
    ctx->pc = 0x297578u;
    // NOP
label_29757c:
    // 0x29757c: 0x45000002
label_297580:
    if (ctx->pc == 0x297580u) {
        ctx->pc = 0x297580u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1300), bits); }
        ctx->pc = 0x297584u;
        goto label_297584;
    }
    ctx->pc = 0x29757Cu;
    {
        const bool branch_taken_0x29757c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x297580u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1300), bits); }
        if (branch_taken_0x29757c) {
            ctx->pc = 0x297588u;
            goto label_297588;
        }
    }
    ctx->pc = 0x297584u;
label_297584:
    // 0x297584: 0xe6630514
    ctx->pc = 0x297584u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1300), bits); }
label_297588:
    // 0x297588: 0x8e620004
    ctx->pc = 0x297588u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_29758c:
    // 0x29758c: 0x8c420120
    ctx->pc = 0x29758cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_297590:
    // 0x297590: 0x84430020
    ctx->pc = 0x297590u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_297594:
    // 0x297594: 0x24020004
    ctx->pc = 0x297594u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_297598:
    // 0x297598: 0x1462004a
label_29759c:
    if (ctx->pc == 0x29759Cu) {
        ctx->pc = 0x29759Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2975A0u;
        goto label_2975a0;
    }
    ctx->pc = 0x297598u;
    {
        const bool branch_taken_0x297598 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x29759Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x297598) {
            ctx->pc = 0x2976C4u;
            goto label_2976c4;
        }
    }
    ctx->pc = 0x2975A0u;
label_2975a0:
    // 0x2975a0: 0xc7a10000
    ctx->pc = 0x2975a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2975a4:
    // 0x2975a4: 0xc66004e0
    ctx->pc = 0x2975a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2975a8:
    // 0x2975a8: 0x46000b01
    ctx->pc = 0x2975a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2975ac:
    // 0x2975ac: 0xe7ac0010
    ctx->pc = 0x2975acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2975b0:
    // 0x2975b0: 0xc7a00004
    ctx->pc = 0x2975b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2975b4:
    // 0x2975b4: 0xc66104e4
    ctx->pc = 0x2975b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2975b8:
    // 0x2975b8: 0x46010001
    ctx->pc = 0x2975b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2975bc:
    // 0x2975bc: 0xe7a00014
    ctx->pc = 0x2975bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2975c0:
    // 0x2975c0: 0xc7a10008
    ctx->pc = 0x2975c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2975c4:
    // 0x2975c4: 0xc66004e8
    ctx->pc = 0x2975c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2975c8:
    // 0x2975c8: 0x46000b41
    ctx->pc = 0x2975c8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2975cc:
    // 0x2975cc: 0xe7ad0018
    ctx->pc = 0x2975ccu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2975d0:
    // 0x2975d0: 0x8e630008
    ctx->pc = 0x2975d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2975d4:
    // 0x2975d4: 0x24020001
    ctx->pc = 0x2975d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2975d8:
    // 0x2975d8: 0x5062002e
label_2975dc:
    if (ctx->pc == 0x2975DCu) {
        ctx->pc = 0x2975DCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2975E0u;
        goto label_2975e0;
    }
    ctx->pc = 0x2975D8u;
    {
        const bool branch_taken_0x2975d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2975d8) {
            ctx->pc = 0x2975DCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x297694u;
            goto label_297694;
        }
    }
    ctx->pc = 0x2975E0u;
label_2975e0:
    // 0x2975e0: 0xc0b5c34
label_2975e4:
    if (ctx->pc == 0x2975E4u) {
        ctx->pc = 0x2975E8u;
        goto label_2975e8;
    }
    ctx->pc = 0x2975E0u;
    SET_GPR_U32(ctx, 31, 0x2975E8u);
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2975E8u; }
    }
    if (ctx->pc != 0x2975E8u) { return; }
    ctx->pc = 0x2975E8u;
label_2975e8:
    // 0x2975e8: 0xe66004f0
    ctx->pc = 0x2975e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1264), bits); }
label_2975ec:
    // 0x2975ec: 0x8e620004
    ctx->pc = 0x2975ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2975f0:
    // 0x2975f0: 0x8c42005c
    ctx->pc = 0x2975f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2975f4:
    // 0x2975f4: 0x30420020
    ctx->pc = 0x2975f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
label_2975f8:
    // 0x2975f8: 0x10400019
label_2975fc:
    if (ctx->pc == 0x2975FCu) {
        ctx->pc = 0x297600u;
        goto label_297600;
    }
    ctx->pc = 0x2975F8u;
    {
        const bool branch_taken_0x2975f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2975f8) {
            ctx->pc = 0x297660u;
            goto label_297660;
        }
    }
    ctx->pc = 0x297600u;
label_297600:
    // 0x297600: 0xc7a00010
    ctx->pc = 0x297600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297604:
    // 0x297604: 0x4600a834
    ctx->pc = 0x297604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_297608:
    // 0x297608: 0x0
    ctx->pc = 0x297608u;
    // NOP
label_29760c:
    // 0x29760c: 0x45030001
label_297610:
    if (ctx->pc == 0x297610u) {
        ctx->pc = 0x297610u;
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->pc = 0x297614u;
        goto label_297614;
    }
    ctx->pc = 0x29760Cu;
    {
        const bool branch_taken_0x29760c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29760c) {
            ctx->pc = 0x297610u;
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->pc = 0x297614u;
            goto label_297614;
        }
    }
    ctx->pc = 0x297614u;
label_297614:
    // 0x297614: 0x4600a847
    ctx->pc = 0x297614u;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
label_297618:
    // 0x297618: 0xc7a00010
    ctx->pc = 0x297618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29761c:
    // 0x29761c: 0x46010034
    ctx->pc = 0x29761cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_297620:
    // 0x297620: 0x0
    ctx->pc = 0x297620u;
    // NOP
label_297624:
    // 0x297624: 0x45030001
label_297628:
    if (ctx->pc == 0x297628u) {
        ctx->pc = 0x297628u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->pc = 0x29762Cu;
        goto label_29762c;
    }
    ctx->pc = 0x297624u;
    {
        const bool branch_taken_0x297624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x297624) {
            ctx->pc = 0x297628u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->pc = 0x29762Cu;
            goto label_29762c;
        }
    }
    ctx->pc = 0x29762Cu;
label_29762c:
    // 0x29762c: 0xc7a00018
    ctx->pc = 0x29762cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297630:
    // 0x297630: 0x4600a834
    ctx->pc = 0x297630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_297634:
    // 0x297634: 0x0
    ctx->pc = 0x297634u;
    // NOP
label_297638:
    // 0x297638: 0x45030001
label_29763c:
    if (ctx->pc == 0x29763Cu) {
        ctx->pc = 0x29763Cu;
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->pc = 0x297640u;
        goto label_297640;
    }
    ctx->pc = 0x297638u;
    {
        const bool branch_taken_0x297638 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x297638) {
            ctx->pc = 0x29763Cu;
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->pc = 0x297640u;
            goto label_297640;
        }
    }
    ctx->pc = 0x297640u;
label_297640:
    // 0x297640: 0x4600a847
    ctx->pc = 0x297640u;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
label_297644:
    // 0x297644: 0xc7a00018
    ctx->pc = 0x297644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297648:
    // 0x297648: 0x46010034
    ctx->pc = 0x297648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29764c:
    // 0x29764c: 0x0
    ctx->pc = 0x29764cu;
    // NOP
label_297650:
    // 0x297650: 0x4503000f
label_297654:
    if (ctx->pc == 0x297654u) {
        ctx->pc = 0x297654u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->pc = 0x297658u;
        goto label_297658;
    }
    ctx->pc = 0x297650u;
    {
        const bool branch_taken_0x297650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x297650) {
            ctx->pc = 0x297654u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->pc = 0x297690u;
            goto label_297690;
        }
    }
    ctx->pc = 0x297658u;
label_297658:
    // 0x297658: 0x1000000e
label_29765c:
    if (ctx->pc == 0x29765Cu) {
        ctx->pc = 0x29765Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x297660u;
        goto label_297660;
    }
    ctx->pc = 0x297658u;
    {
        const bool branch_taken_0x297658 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29765Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x297658) {
            ctx->pc = 0x297694u;
            goto label_297694;
        }
    }
    ctx->pc = 0x297660u;
label_297660:
    // 0x297660: 0x4600a834
    ctx->pc = 0x297660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_297664:
    // 0x297664: 0x0
    ctx->pc = 0x297664u;
    // NOP
label_297668:
    // 0x297668: 0x45000009
label_29766c:
    if (ctx->pc == 0x29766Cu) {
        ctx->pc = 0x29766Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x297670u;
        goto label_297670;
    }
    ctx->pc = 0x297668u;
    {
        const bool branch_taken_0x297668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29766Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x297668) {
            ctx->pc = 0x297690u;
            goto label_297690;
        }
    }
    ctx->pc = 0x297670u;
label_297670:
    // 0x297670: 0x0
    ctx->pc = 0x297670u;
    // NOP
label_297674:
    // 0x297674: 0x0
    ctx->pc = 0x297674u;
    // NOP
label_297678:
    // 0x297678: 0x4600a803
    ctx->pc = 0x297678u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[0];
label_29767c:
    // 0x29767c: 0x46010042
    ctx->pc = 0x29767cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_297680:
    // 0x297680: 0xe7a10010
    ctx->pc = 0x297680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_297684:
    // 0x297684: 0xc7a10018
    ctx->pc = 0x297684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_297688:
    // 0x297688: 0x46010002
    ctx->pc = 0x297688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_29768c:
    // 0x29768c: 0xe7a00018
    ctx->pc = 0x29768cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_297690:
    // 0x297690: 0xc66004e0
    ctx->pc = 0x297690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297694:
    // 0x297694: 0xc7a10010
    ctx->pc = 0x297694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_297698:
    // 0x297698: 0x46010000
    ctx->pc = 0x297698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_29769c:
    // 0x29769c: 0xe6600040
    ctx->pc = 0x29769cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
label_2976a0:
    // 0x2976a0: 0xc66004e4
    ctx->pc = 0x2976a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2976a4:
    // 0x2976a4: 0xc7a10014
    ctx->pc = 0x2976a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2976a8:
    // 0x2976a8: 0x46010000
    ctx->pc = 0x2976a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2976ac:
    // 0x2976ac: 0xe6600044
    ctx->pc = 0x2976acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_2976b0:
    // 0x2976b0: 0xc66004e8
    ctx->pc = 0x2976b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2976b4:
    // 0x2976b4: 0xc7a10018
    ctx->pc = 0x2976b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2976b8:
    // 0x2976b8: 0x46010000
    ctx->pc = 0x2976b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2976bc:
    // 0x2976bc: 0x10000033
label_2976c0:
    if (ctx->pc == 0x2976C0u) {
        ctx->pc = 0x2976C0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
        ctx->pc = 0x2976C4u;
        goto label_2976c4;
    }
    ctx->pc = 0x2976BCu;
    {
        const bool branch_taken_0x2976bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2976C0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
        if (branch_taken_0x2976bc) {
            ctx->pc = 0x29778Cu;
            goto label_29778c;
        }
    }
    ctx->pc = 0x2976C4u;
label_2976c4:
    // 0x2976c4: 0xc6610040
    ctx->pc = 0x2976c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2976c8:
    // 0x2976c8: 0x46010001
    ctx->pc = 0x2976c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2976cc:
    // 0x2976cc: 0xe7a00010
    ctx->pc = 0x2976ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2976d0:
    // 0x2976d0: 0xc7a00004
    ctx->pc = 0x2976d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2976d4:
    // 0x2976d4: 0xc6610044
    ctx->pc = 0x2976d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2976d8:
    // 0x2976d8: 0x46010001
    ctx->pc = 0x2976d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2976dc:
    // 0x2976dc: 0xe7a00014
    ctx->pc = 0x2976dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2976e0:
    // 0x2976e0: 0xc7a00008
    ctx->pc = 0x2976e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2976e4:
    // 0x2976e4: 0xc6610048
    ctx->pc = 0x2976e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2976e8:
    // 0x2976e8: 0x46010001
    ctx->pc = 0x2976e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2976ec:
    // 0x2976ec: 0xe7a00018
    ctx->pc = 0x2976ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2976f0:
    // 0x2976f0: 0x27b10010
    ctx->pc = 0x2976f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 16));
label_2976f4:
    // 0x2976f4: 0x260202d
    ctx->pc = 0x2976f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2976f8:
    // 0x2976f8: 0x220282d
    ctx->pc = 0x2976f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2976fc:
    // 0x2976fc: 0xc0a7364
label_297700:
    if (ctx->pc == 0x297700u) {
        ctx->pc = 0x297700u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x297704u;
        goto label_297704;
    }
    ctx->pc = 0x2976FCu;
    SET_GPR_U32(ctx, 31, 0x297704u);
    ctx->pc = 0x297700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29CD90u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterCollideWorld_0x29cd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297704u; }
    }
    if (ctx->pc != 0x297704u) { return; }
    ctx->pc = 0x297704u;
label_297704:
    // 0x297704: 0x40802d
    ctx->pc = 0x297704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_297708:
    // 0x297708: 0x260202d
    ctx->pc = 0x297708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29770c:
    // 0x29770c: 0x220282d
    ctx->pc = 0x29770cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_297710:
    // 0x297710: 0xc0a7544
label_297714:
    if (ctx->pc == 0x297714u) {
        ctx->pc = 0x297714u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x297718u;
        goto label_297718;
    }
    ctx->pc = 0x297710u;
    SET_GPR_U32(ctx, 31, 0x297718u);
    ctx->pc = 0x297714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29D510u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterCollideItems_0x29d510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297718u; }
    }
    if (ctx->pc != 0x297718u) { return; }
    ctx->pc = 0x297718u;
label_297718:
    // 0x297718: 0x2028021
    ctx->pc = 0x297718u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_29771c:
    // 0x29771c: 0x260202d
    ctx->pc = 0x29771cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_297720:
    // 0x297720: 0x220282d
    ctx->pc = 0x297720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_297724:
    // 0x297724: 0xc0a749e
label_297728:
    if (ctx->pc == 0x297728u) {
        ctx->pc = 0x297728u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29772Cu;
        goto label_29772c;
    }
    ctx->pc = 0x297724u;
    SET_GPR_U32(ctx, 31, 0x29772Cu);
    ctx->pc = 0x297728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29D278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterCollidePlayers_0x29d278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29772Cu; }
    }
    if (ctx->pc != 0x29772Cu) { return; }
    ctx->pc = 0x29772Cu;
label_29772c:
    // 0x29772c: 0x2028021
    ctx->pc = 0x29772cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_297730:
    // 0x297730: 0x40902d
    ctx->pc = 0x297730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_297734:
    // 0x297734: 0x260202d
    ctx->pc = 0x297734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_297738:
    // 0x297738: 0x220282d
    ctx->pc = 0x297738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29773c:
    // 0x29773c: 0xc0a75f4
label_297740:
    if (ctx->pc == 0x297740u) {
        ctx->pc = 0x297740u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x297744u;
        goto label_297744;
    }
    ctx->pc = 0x29773Cu;
    SET_GPR_U32(ctx, 31, 0x297744u);
    ctx->pc = 0x297740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29D7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterCollideEnemies_0x29d7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297744u; }
    }
    if (ctx->pc != 0x297744u) { return; }
    ctx->pc = 0x297744u;
label_297744:
    // 0x297744: 0x260202d
    ctx->pc = 0x297744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_297748:
    // 0x297748: 0x220282d
    ctx->pc = 0x297748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29774c:
    // 0x29774c: 0xc0a76a4
label_297750:
    if (ctx->pc == 0x297750u) {
        ctx->pc = 0x297750u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x297754u;
        goto label_297754;
    }
    ctx->pc = 0x29774Cu;
    SET_GPR_U32(ctx, 31, 0x297754u);
    ctx->pc = 0x297750u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x29DA90u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterCollideCritters_0x29da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297754u; }
    }
    if (ctx->pc != 0x297754u) { return; }
    ctx->pc = 0x297754u;
label_297754:
    // 0x297754: 0xc6600040
    ctx->pc = 0x297754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297758:
    // 0x297758: 0xc7a10010
    ctx->pc = 0x297758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29775c:
    // 0x29775c: 0x46010000
    ctx->pc = 0x29775cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_297760:
    // 0x297760: 0xe6600040
    ctx->pc = 0x297760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
label_297764:
    // 0x297764: 0xc6600044
    ctx->pc = 0x297764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297768:
    // 0x297768: 0xc7a10014
    ctx->pc = 0x297768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29776c:
    // 0x29776c: 0x46010000
    ctx->pc = 0x29776cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_297770:
    // 0x297770: 0xe6600044
    ctx->pc = 0x297770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_297774:
    // 0x297774: 0xc6600048
    ctx->pc = 0x297774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297778:
    // 0x297778: 0xc7a10018
    ctx->pc = 0x297778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29777c:
    // 0x29777c: 0x46010000
    ctx->pc = 0x29777cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_297780:
    // 0x297780: 0xe6600048
    ctx->pc = 0x297780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
label_297784:
    // 0x297784: 0x24020001
    ctx->pc = 0x297784u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_297788:
    // 0x297788: 0x52a00b
    ctx->pc = 0x297788u;
    if (GPR_U32(ctx, 18) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 2));
label_29778c:
    // 0x29778c: 0x280102d
    ctx->pc = 0x29778cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_297790:
    // 0x297790: 0xdfbf0080
    ctx->pc = 0x297790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_297794:
    // 0x297794: 0xdfb40070
    ctx->pc = 0x297794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_297798:
    // 0x297798: 0xdfb30060
    ctx->pc = 0x297798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_29779c:
    // 0x29779c: 0xdfb20050
    ctx->pc = 0x29779cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2977a0:
    // 0x2977a0: 0xdfb10040
    ctx->pc = 0x2977a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2977a4:
    // 0x2977a4: 0xdfb00030
    ctx->pc = 0x2977a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2977a8:
    // 0x2977a8: 0xc7b50098
    ctx->pc = 0x2977a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2977ac:
    // 0x2977ac: 0xc7b40090
    ctx->pc = 0x2977acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2977b0:
    // 0x2977b0: 0x3e00008
label_2977b4:
    if (ctx->pc == 0x2977B4u) {
        ctx->pc = 0x2977B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2977B8u;
        goto label_fallthrough_0x2977b0;
    }
    ctx->pc = 0x2977B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2977B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297270u: goto label_297270;
            case 0x297274u: goto label_297274;
            case 0x297278u: goto label_297278;
            case 0x29727Cu: goto label_29727c;
            case 0x297280u: goto label_297280;
            case 0x297284u: goto label_297284;
            case 0x297288u: goto label_297288;
            case 0x29728Cu: goto label_29728c;
            case 0x297290u: goto label_297290;
            case 0x297294u: goto label_297294;
            case 0x297298u: goto label_297298;
            case 0x29729Cu: goto label_29729c;
            case 0x2972A0u: goto label_2972a0;
            case 0x2972A4u: goto label_2972a4;
            case 0x2972A8u: goto label_2972a8;
            case 0x2972ACu: goto label_2972ac;
            case 0x2972B0u: goto label_2972b0;
            case 0x2972B4u: goto label_2972b4;
            case 0x2972B8u: goto label_2972b8;
            case 0x2972BCu: goto label_2972bc;
            case 0x2972C0u: goto label_2972c0;
            case 0x2972C4u: goto label_2972c4;
            case 0x2972C8u: goto label_2972c8;
            case 0x2972CCu: goto label_2972cc;
            case 0x2972D0u: goto label_2972d0;
            case 0x2972D4u: goto label_2972d4;
            case 0x2972D8u: goto label_2972d8;
            case 0x2972DCu: goto label_2972dc;
            case 0x2972E0u: goto label_2972e0;
            case 0x2972E4u: goto label_2972e4;
            case 0x2972E8u: goto label_2972e8;
            case 0x2972ECu: goto label_2972ec;
            case 0x2972F0u: goto label_2972f0;
            case 0x2972F4u: goto label_2972f4;
            case 0x2972F8u: goto label_2972f8;
            case 0x2972FCu: goto label_2972fc;
            case 0x297300u: goto label_297300;
            case 0x297304u: goto label_297304;
            case 0x297308u: goto label_297308;
            case 0x29730Cu: goto label_29730c;
            case 0x297310u: goto label_297310;
            case 0x297314u: goto label_297314;
            case 0x297318u: goto label_297318;
            case 0x29731Cu: goto label_29731c;
            case 0x297320u: goto label_297320;
            case 0x297324u: goto label_297324;
            case 0x297328u: goto label_297328;
            case 0x29732Cu: goto label_29732c;
            case 0x297330u: goto label_297330;
            case 0x297334u: goto label_297334;
            case 0x297338u: goto label_297338;
            case 0x29733Cu: goto label_29733c;
            case 0x297340u: goto label_297340;
            case 0x297344u: goto label_297344;
            case 0x297348u: goto label_297348;
            case 0x29734Cu: goto label_29734c;
            case 0x297350u: goto label_297350;
            case 0x297354u: goto label_297354;
            case 0x297358u: goto label_297358;
            case 0x29735Cu: goto label_29735c;
            case 0x297360u: goto label_297360;
            case 0x297364u: goto label_297364;
            case 0x297368u: goto label_297368;
            case 0x29736Cu: goto label_29736c;
            case 0x297370u: goto label_297370;
            case 0x297374u: goto label_297374;
            case 0x297378u: goto label_297378;
            case 0x29737Cu: goto label_29737c;
            case 0x297380u: goto label_297380;
            case 0x297384u: goto label_297384;
            case 0x297388u: goto label_297388;
            case 0x29738Cu: goto label_29738c;
            case 0x297390u: goto label_297390;
            case 0x297394u: goto label_297394;
            case 0x297398u: goto label_297398;
            case 0x29739Cu: goto label_29739c;
            case 0x2973A0u: goto label_2973a0;
            case 0x2973A4u: goto label_2973a4;
            case 0x2973A8u: goto label_2973a8;
            case 0x2973ACu: goto label_2973ac;
            case 0x2973B0u: goto label_2973b0;
            case 0x2973B4u: goto label_2973b4;
            case 0x2973B8u: goto label_2973b8;
            case 0x2973BCu: goto label_2973bc;
            case 0x2973C0u: goto label_2973c0;
            case 0x2973C4u: goto label_2973c4;
            case 0x2973C8u: goto label_2973c8;
            case 0x2973CCu: goto label_2973cc;
            case 0x2973D0u: goto label_2973d0;
            case 0x2973D4u: goto label_2973d4;
            case 0x2973D8u: goto label_2973d8;
            case 0x2973DCu: goto label_2973dc;
            case 0x2973E0u: goto label_2973e0;
            case 0x2973E4u: goto label_2973e4;
            case 0x2973E8u: goto label_2973e8;
            case 0x2973ECu: goto label_2973ec;
            case 0x2973F0u: goto label_2973f0;
            case 0x2973F4u: goto label_2973f4;
            case 0x2973F8u: goto label_2973f8;
            case 0x2973FCu: goto label_2973fc;
            case 0x297400u: goto label_297400;
            case 0x297404u: goto label_297404;
            case 0x297408u: goto label_297408;
            case 0x29740Cu: goto label_29740c;
            case 0x297410u: goto label_297410;
            case 0x297414u: goto label_297414;
            case 0x297418u: goto label_297418;
            case 0x29741Cu: goto label_29741c;
            case 0x297420u: goto label_297420;
            case 0x297424u: goto label_297424;
            case 0x297428u: goto label_297428;
            case 0x29742Cu: goto label_29742c;
            case 0x297430u: goto label_297430;
            case 0x297434u: goto label_297434;
            case 0x297438u: goto label_297438;
            case 0x29743Cu: goto label_29743c;
            case 0x297440u: goto label_297440;
            case 0x297444u: goto label_297444;
            case 0x297448u: goto label_297448;
            case 0x29744Cu: goto label_29744c;
            case 0x297450u: goto label_297450;
            case 0x297454u: goto label_297454;
            case 0x297458u: goto label_297458;
            case 0x29745Cu: goto label_29745c;
            case 0x297460u: goto label_297460;
            case 0x297464u: goto label_297464;
            case 0x297468u: goto label_297468;
            case 0x29746Cu: goto label_29746c;
            case 0x297470u: goto label_297470;
            case 0x297474u: goto label_297474;
            case 0x297478u: goto label_297478;
            case 0x29747Cu: goto label_29747c;
            case 0x297480u: goto label_297480;
            case 0x297484u: goto label_297484;
            case 0x297488u: goto label_297488;
            case 0x29748Cu: goto label_29748c;
            case 0x297490u: goto label_297490;
            case 0x297494u: goto label_297494;
            case 0x297498u: goto label_297498;
            case 0x29749Cu: goto label_29749c;
            case 0x2974A0u: goto label_2974a0;
            case 0x2974A4u: goto label_2974a4;
            case 0x2974A8u: goto label_2974a8;
            case 0x2974ACu: goto label_2974ac;
            case 0x2974B0u: goto label_2974b0;
            case 0x2974B4u: goto label_2974b4;
            case 0x2974B8u: goto label_2974b8;
            case 0x2974BCu: goto label_2974bc;
            case 0x2974C0u: goto label_2974c0;
            case 0x2974C4u: goto label_2974c4;
            case 0x2974C8u: goto label_2974c8;
            case 0x2974CCu: goto label_2974cc;
            case 0x2974D0u: goto label_2974d0;
            case 0x2974D4u: goto label_2974d4;
            case 0x2974D8u: goto label_2974d8;
            case 0x2974DCu: goto label_2974dc;
            case 0x2974E0u: goto label_2974e0;
            case 0x2974E4u: goto label_2974e4;
            case 0x2974E8u: goto label_2974e8;
            case 0x2974ECu: goto label_2974ec;
            case 0x2974F0u: goto label_2974f0;
            case 0x2974F4u: goto label_2974f4;
            case 0x2974F8u: goto label_2974f8;
            case 0x2974FCu: goto label_2974fc;
            case 0x297500u: goto label_297500;
            case 0x297504u: goto label_297504;
            case 0x297508u: goto label_297508;
            case 0x29750Cu: goto label_29750c;
            case 0x297510u: goto label_297510;
            case 0x297514u: goto label_297514;
            case 0x297518u: goto label_297518;
            case 0x29751Cu: goto label_29751c;
            case 0x297520u: goto label_297520;
            case 0x297524u: goto label_297524;
            case 0x297528u: goto label_297528;
            case 0x29752Cu: goto label_29752c;
            case 0x297530u: goto label_297530;
            case 0x297534u: goto label_297534;
            case 0x297538u: goto label_297538;
            case 0x29753Cu: goto label_29753c;
            case 0x297540u: goto label_297540;
            case 0x297544u: goto label_297544;
            case 0x297548u: goto label_297548;
            case 0x29754Cu: goto label_29754c;
            case 0x297550u: goto label_297550;
            case 0x297554u: goto label_297554;
            case 0x297558u: goto label_297558;
            case 0x29755Cu: goto label_29755c;
            case 0x297560u: goto label_297560;
            case 0x297564u: goto label_297564;
            case 0x297568u: goto label_297568;
            case 0x29756Cu: goto label_29756c;
            case 0x297570u: goto label_297570;
            case 0x297574u: goto label_297574;
            case 0x297578u: goto label_297578;
            case 0x29757Cu: goto label_29757c;
            case 0x297580u: goto label_297580;
            case 0x297584u: goto label_297584;
            case 0x297588u: goto label_297588;
            case 0x29758Cu: goto label_29758c;
            case 0x297590u: goto label_297590;
            case 0x297594u: goto label_297594;
            case 0x297598u: goto label_297598;
            case 0x29759Cu: goto label_29759c;
            case 0x2975A0u: goto label_2975a0;
            case 0x2975A4u: goto label_2975a4;
            case 0x2975A8u: goto label_2975a8;
            case 0x2975ACu: goto label_2975ac;
            case 0x2975B0u: goto label_2975b0;
            case 0x2975B4u: goto label_2975b4;
            case 0x2975B8u: goto label_2975b8;
            case 0x2975BCu: goto label_2975bc;
            case 0x2975C0u: goto label_2975c0;
            case 0x2975C4u: goto label_2975c4;
            case 0x2975C8u: goto label_2975c8;
            case 0x2975CCu: goto label_2975cc;
            case 0x2975D0u: goto label_2975d0;
            case 0x2975D4u: goto label_2975d4;
            case 0x2975D8u: goto label_2975d8;
            case 0x2975DCu: goto label_2975dc;
            case 0x2975E0u: goto label_2975e0;
            case 0x2975E4u: goto label_2975e4;
            case 0x2975E8u: goto label_2975e8;
            case 0x2975ECu: goto label_2975ec;
            case 0x2975F0u: goto label_2975f0;
            case 0x2975F4u: goto label_2975f4;
            case 0x2975F8u: goto label_2975f8;
            case 0x2975FCu: goto label_2975fc;
            case 0x297600u: goto label_297600;
            case 0x297604u: goto label_297604;
            case 0x297608u: goto label_297608;
            case 0x29760Cu: goto label_29760c;
            case 0x297610u: goto label_297610;
            case 0x297614u: goto label_297614;
            case 0x297618u: goto label_297618;
            case 0x29761Cu: goto label_29761c;
            case 0x297620u: goto label_297620;
            case 0x297624u: goto label_297624;
            case 0x297628u: goto label_297628;
            case 0x29762Cu: goto label_29762c;
            case 0x297630u: goto label_297630;
            case 0x297634u: goto label_297634;
            case 0x297638u: goto label_297638;
            case 0x29763Cu: goto label_29763c;
            case 0x297640u: goto label_297640;
            case 0x297644u: goto label_297644;
            case 0x297648u: goto label_297648;
            case 0x29764Cu: goto label_29764c;
            case 0x297650u: goto label_297650;
            case 0x297654u: goto label_297654;
            case 0x297658u: goto label_297658;
            case 0x29765Cu: goto label_29765c;
            case 0x297660u: goto label_297660;
            case 0x297664u: goto label_297664;
            case 0x297668u: goto label_297668;
            case 0x29766Cu: goto label_29766c;
            case 0x297670u: goto label_297670;
            case 0x297674u: goto label_297674;
            case 0x297678u: goto label_297678;
            case 0x29767Cu: goto label_29767c;
            case 0x297680u: goto label_297680;
            case 0x297684u: goto label_297684;
            case 0x297688u: goto label_297688;
            case 0x29768Cu: goto label_29768c;
            case 0x297690u: goto label_297690;
            case 0x297694u: goto label_297694;
            case 0x297698u: goto label_297698;
            case 0x29769Cu: goto label_29769c;
            case 0x2976A0u: goto label_2976a0;
            case 0x2976A4u: goto label_2976a4;
            case 0x2976A8u: goto label_2976a8;
            case 0x2976ACu: goto label_2976ac;
            case 0x2976B0u: goto label_2976b0;
            case 0x2976B4u: goto label_2976b4;
            case 0x2976B8u: goto label_2976b8;
            case 0x2976BCu: goto label_2976bc;
            case 0x2976C0u: goto label_2976c0;
            case 0x2976C4u: goto label_2976c4;
            case 0x2976C8u: goto label_2976c8;
            case 0x2976CCu: goto label_2976cc;
            case 0x2976D0u: goto label_2976d0;
            case 0x2976D4u: goto label_2976d4;
            case 0x2976D8u: goto label_2976d8;
            case 0x2976DCu: goto label_2976dc;
            case 0x2976E0u: goto label_2976e0;
            case 0x2976E4u: goto label_2976e4;
            case 0x2976E8u: goto label_2976e8;
            case 0x2976ECu: goto label_2976ec;
            case 0x2976F0u: goto label_2976f0;
            case 0x2976F4u: goto label_2976f4;
            case 0x2976F8u: goto label_2976f8;
            case 0x2976FCu: goto label_2976fc;
            case 0x297700u: goto label_297700;
            case 0x297704u: goto label_297704;
            case 0x297708u: goto label_297708;
            case 0x29770Cu: goto label_29770c;
            case 0x297710u: goto label_297710;
            case 0x297714u: goto label_297714;
            case 0x297718u: goto label_297718;
            case 0x29771Cu: goto label_29771c;
            case 0x297720u: goto label_297720;
            case 0x297724u: goto label_297724;
            case 0x297728u: goto label_297728;
            case 0x29772Cu: goto label_29772c;
            case 0x297730u: goto label_297730;
            case 0x297734u: goto label_297734;
            case 0x297738u: goto label_297738;
            case 0x29773Cu: goto label_29773c;
            case 0x297740u: goto label_297740;
            case 0x297744u: goto label_297744;
            case 0x297748u: goto label_297748;
            case 0x29774Cu: goto label_29774c;
            case 0x297750u: goto label_297750;
            case 0x297754u: goto label_297754;
            case 0x297758u: goto label_297758;
            case 0x29775Cu: goto label_29775c;
            case 0x297760u: goto label_297760;
            case 0x297764u: goto label_297764;
            case 0x297768u: goto label_297768;
            case 0x29776Cu: goto label_29776c;
            case 0x297770u: goto label_297770;
            case 0x297774u: goto label_297774;
            case 0x297778u: goto label_297778;
            case 0x29777Cu: goto label_29777c;
            case 0x297780u: goto label_297780;
            case 0x297784u: goto label_297784;
            case 0x297788u: goto label_297788;
            case 0x29778Cu: goto label_29778c;
            case 0x297790u: goto label_297790;
            case 0x297794u: goto label_297794;
            case 0x297798u: goto label_297798;
            case 0x29779Cu: goto label_29779c;
            case 0x2977A0u: goto label_2977a0;
            case 0x2977A4u: goto label_2977a4;
            case 0x2977A8u: goto label_2977a8;
            case 0x2977ACu: goto label_2977ac;
            case 0x2977B0u: goto label_2977b0;
            case 0x2977B4u: goto label_2977b4;
            default: break;
        }
        return;
    }
label_fallthrough_0x2977b0:
    ctx->pc = 0x2977B8u;
}
