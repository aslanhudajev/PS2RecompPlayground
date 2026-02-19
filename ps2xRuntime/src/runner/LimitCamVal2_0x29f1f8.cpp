#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LimitCamVal2
// Address: 0x29f1f8 - 0x29f39c
void LimitCamVal2_0x29f1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29f1f8u;

    // 0x29f1f8: 0x46007146
    ctx->pc = 0x29f1f8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[14]);
    // 0x29f1fc: 0x3c020031
    ctx->pc = 0x29f1fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x29f200: 0xc440ffa8
    ctx->pc = 0x29f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f204: 0x46008102
    ctx->pc = 0x29f204u;
    ctx->f[4] = FPU_MUL_S(ctx->f[16], ctx->f[0]);
    // 0x29f208: 0x10a00017
    ctx->pc = 0x29F208u;
    {
        const bool branch_taken_0x29f208 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F20Cu;
        ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
        if (branch_taken_0x29f208) {
            ctx->pc = 0x29F268u;
            goto label_29f268;
        }
    }
    ctx->pc = 0x29F210u;
    // 0x29f210: 0x3c014049
    ctx->pc = 0x29f210u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x29f214: 0x34210fdb
    ctx->pc = 0x29f214u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f218: 0x44810000
    ctx->pc = 0x29f218u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f21c: 0x460d0034
    ctx->pc = 0x29f21cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f220: 0x45000006
    ctx->pc = 0x29F220u;
    {
        const bool branch_taken_0x29f220 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f220) {
            ctx->pc = 0x29F23Cu;
            goto label_29f23c;
        }
    }
    ctx->pc = 0x29F228u;
    // 0x29f228: 0x3c0140c9
    ctx->pc = 0x29f228u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29f22c: 0x34210fdb
    ctx->pc = 0x29f22cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f230: 0x44810000
    ctx->pc = 0x29f230u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f234: 0x1000000c
    ctx->pc = 0x29F234u;
    {
        const bool branch_taken_0x29f234 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F238u;
        ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x29f234) {
            ctx->pc = 0x29F268u;
            goto label_29f268;
        }
    }
    ctx->pc = 0x29F23Cu;
label_29f23c:
    // 0x29f23c: 0x3c01c049
    ctx->pc = 0x29f23cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x29f240: 0x34210fdb
    ctx->pc = 0x29f240u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f244: 0x44810000
    ctx->pc = 0x29f244u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f248: 0x46006836
    ctx->pc = 0x29f248u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f24c: 0x0
    ctx->pc = 0x29f24cu;
    // NOP
    // 0x29f250: 0x45020006
    ctx->pc = 0x29F250u;
    {
        const bool branch_taken_0x29f250 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f250) {
            ctx->pc = 0x29F254u;
            ctx->f[3] = FPU_ABS_S(ctx->f[13]);
            ctx->pc = 0x29F26Cu;
            goto label_29f26c;
        }
    }
    ctx->pc = 0x29F258u;
    // 0x29f258: 0x3c0140c9
    ctx->pc = 0x29f258u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29f25c: 0x34210fdb
    ctx->pc = 0x29f25cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f260: 0x44810000
    ctx->pc = 0x29f260u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f264: 0x46006b40
    ctx->pc = 0x29f264u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_29f268:
    // 0x29f268: 0x460068c5
    ctx->pc = 0x29f268u;
    ctx->f[3] = FPU_ABS_S(ctx->f[13]);
label_29f26c:
    // 0x29f26c: 0xc48e0000
    ctx->pc = 0x29f26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29f270: 0x460f8842
    ctx->pc = 0x29f270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[17], ctx->f[15]);
    // 0x29f274: 0x3c020031
    ctx->pc = 0x29f274u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x29f278: 0xc440ffa8
    ctx->pc = 0x29f278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f27c: 0x46000842
    ctx->pc = 0x29f27cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29f280: 0x44800000
    ctx->pc = 0x29f280u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29f284: 0x46110034
    ctx->pc = 0x29f284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f288: 0x0
    ctx->pc = 0x29f288u;
    // NOP
    // 0x29f28c: 0x4500000b
    ctx->pc = 0x29F28Cu;
    {
        const bool branch_taken_0x29f28c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29F290u;
        ctx->f[2] = FPU_ABS_S(ctx->f[14]);
        if (branch_taken_0x29f28c) {
            ctx->pc = 0x29F2BCu;
            goto label_29f2bc;
        }
    }
    ctx->pc = 0x29F294u;
    // 0x29f294: 0x46011034
    ctx->pc = 0x29f294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f298: 0x0
    ctx->pc = 0x29f298u;
    // NOP
    // 0x29f29c: 0x45020009
    ctx->pc = 0x29F29Cu;
    {
        const bool branch_taken_0x29f29c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f29c) {
            ctx->pc = 0x29F2A0u;
            ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
            ctx->pc = 0x29F2C4u;
            goto label_29f2c4;
        }
    }
    ctx->pc = 0x29F2A4u;
    // 0x29f2a4: 0x46011834
    ctx->pc = 0x29f2a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f2a8: 0x0
    ctx->pc = 0x29f2a8u;
    // NOP
    // 0x29f2ac: 0x45020005
    ctx->pc = 0x29F2ACu;
    {
        const bool branch_taken_0x29f2ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f2ac) {
            ctx->pc = 0x29F2B0u;
            ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
            ctx->pc = 0x29F2C4u;
            goto label_29f2c4;
        }
    }
    ctx->pc = 0x29F2B4u;
    // 0x29f2b4: 0x10000033
    ctx->pc = 0x29F2B4u;
    {
        const bool branch_taken_0x29f2b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F2B8u;
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x29f2b4) {
            ctx->pc = 0x29F384u;
            goto label_29f384;
        }
    }
    ctx->pc = 0x29F2BCu;
label_29f2bc:
    // 0x29f2bc: 0x46041000
    ctx->pc = 0x29f2bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x29f2c0: 0x3c020031
    ctx->pc = 0x29f2c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_29f2c4:
    // 0x29f2c4: 0xc441ffa8
    ctx->pc = 0x29f2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f2c8: 0x46010002
    ctx->pc = 0x29f2c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29f2cc: 0x46001834
    ctx->pc = 0x29f2ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f2d0: 0x0
    ctx->pc = 0x29f2d0u;
    // NOP
    // 0x29f2d4: 0x45000004
    ctx->pc = 0x29F2D4u;
    {
        const bool branch_taken_0x29f2d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29F2D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x29f2d4) {
            ctx->pc = 0x29F2E8u;
            goto label_29f2e8;
        }
    }
    ctx->pc = 0x29F2DCu;
    // 0x29f2dc: 0xc440ffac
    ctx->pc = 0x29f2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f2e0: 0x10000028
    ctx->pc = 0x29F2E0u;
    {
        const bool branch_taken_0x29f2e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F2E4u;
        ctx->f[14] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x29f2e0) {
            ctx->pc = 0x29F384u;
            goto label_29f384;
        }
    }
    ctx->pc = 0x29F2E8u;
label_29f2e8:
    // 0x29f2e8: 0x0
    ctx->pc = 0x29f2e8u;
    // NOP
    // 0x29f2ec: 0x0
    ctx->pc = 0x29f2ecu;
    // NOP
    // 0x29f2f0: 0x46101043
    ctx->pc = 0x29f2f0u;
    if (ctx->f[16] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[16];
    // 0x29f2f4: 0x0
    ctx->pc = 0x29f2f4u;
    // NOP
    // 0x29f2f8: 0x0
    ctx->pc = 0x29f2f8u;
    // NOP
    // 0x29f2fc: 0x46021803
    ctx->pc = 0x29f2fcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[2];
    // 0x29f300: 0x46010036
    ctx->pc = 0x29f300u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f304: 0x45000010
    ctx->pc = 0x29F304u;
    {
        const bool branch_taken_0x29f304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f304) {
            ctx->pc = 0x29F348u;
            goto label_29f348;
        }
    }
    ctx->pc = 0x29F30Cu;
    // 0x29f30c: 0x44800000
    ctx->pc = 0x29f30cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29f310: 0x460e0034
    ctx->pc = 0x29f310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f314: 0x0
    ctx->pc = 0x29f314u;
    // NOP
    // 0x29f318: 0x45020005
    ctx->pc = 0x29F318u;
    {
        const bool branch_taken_0x29f318 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f318) {
            ctx->pc = 0x29F31Cu;
            ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[4]);
            ctx->pc = 0x29F330u;
            goto label_29f330;
        }
    }
    ctx->pc = 0x29F320u;
    // 0x29f320: 0x46047381
    ctx->pc = 0x29f320u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[4]);
    // 0x29f324: 0x46007034
    ctx->pc = 0x29f324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f328: 0x10000003
    ctx->pc = 0x29F328u;
    {
        const bool branch_taken_0x29f328 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x29f328) {
            ctx->pc = 0x29F338u;
            goto label_29f338;
        }
    }
    ctx->pc = 0x29F330u;
label_29f330:
    // 0x29f330: 0x460e0034
    ctx->pc = 0x29f330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f334: 0x0
    ctx->pc = 0x29f334u;
    // NOP
label_29f338:
    // 0x29f338: 0x45030009
    ctx->pc = 0x29F338u;
    {
        const bool branch_taken_0x29f338 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f338) {
            ctx->pc = 0x29F33Cu;
            ctx->f[14] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x29F360u;
            goto label_29f360;
        }
    }
    ctx->pc = 0x29F340u;
    // 0x29f340: 0x10000007
    ctx->pc = 0x29F340u;
    {
        const bool branch_taken_0x29f340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x29f340) {
            ctx->pc = 0x29F360u;
            goto label_29f360;
        }
    }
    ctx->pc = 0x29F348u;
label_29f348:
    // 0x29f348: 0x44800000
    ctx->pc = 0x29f348u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29f34c: 0x460d0034
    ctx->pc = 0x29f34cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f350: 0x0
    ctx->pc = 0x29f350u;
    // NOP
    // 0x29f354: 0x45020002
    ctx->pc = 0x29F354u;
    {
        const bool branch_taken_0x29f354 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f354) {
            ctx->pc = 0x29F358u;
            ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[4]);
            ctx->pc = 0x29F360u;
            goto label_29f360;
        }
    }
    ctx->pc = 0x29F35Cu;
    // 0x29f35c: 0x46047380
    ctx->pc = 0x29f35cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[4]);
label_29f360:
    // 0x29f360: 0x46057034
    ctx->pc = 0x29f360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f364: 0x45000003
    ctx->pc = 0x29F364u;
    {
        const bool branch_taken_0x29f364 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f364) {
            ctx->pc = 0x29F374u;
            goto label_29f374;
        }
    }
    ctx->pc = 0x29F36Cu;
    // 0x29f36c: 0x10000005
    ctx->pc = 0x29F36Cu;
    {
        const bool branch_taken_0x29f36c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F370u;
        ctx->f[14] = FPU_MOV_S(ctx->f[5]);
        if (branch_taken_0x29f36c) {
            ctx->pc = 0x29F384u;
            goto label_29f384;
        }
    }
    ctx->pc = 0x29F374u;
label_29f374:
    // 0x29f374: 0x460e7834
    ctx->pc = 0x29f374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f378: 0x0
    ctx->pc = 0x29f378u;
    // NOP
    // 0x29f37c: 0x45030001
    ctx->pc = 0x29F37Cu;
    {
        const bool branch_taken_0x29f37c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f37c) {
            ctx->pc = 0x29F380u;
            ctx->f[14] = FPU_MOV_S(ctx->f[15]);
            ctx->pc = 0x29F384u;
            goto label_29f384;
        }
    }
    ctx->pc = 0x29F384u;
label_29f384:
    // 0x29f384: 0xe48e0000
    ctx->pc = 0x29f384u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x29f388: 0x3c020031
    ctx->pc = 0x29f388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x29f38c: 0xc440ffa8
    ctx->pc = 0x29f38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f390: 0x46007002
    ctx->pc = 0x29f390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x29f394: 0x3e00008
    ctx->pc = 0x29F394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F398u;
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29F23Cu: goto label_29f23c;
            case 0x29F268u: goto label_29f268;
            case 0x29F26Cu: goto label_29f26c;
            case 0x29F2BCu: goto label_29f2bc;
            case 0x29F2C4u: goto label_29f2c4;
            case 0x29F2E8u: goto label_29f2e8;
            case 0x29F330u: goto label_29f330;
            case 0x29F338u: goto label_29f338;
            case 0x29F348u: goto label_29f348;
            case 0x29F360u: goto label_29f360;
            case 0x29F374u: goto label_29f374;
            case 0x29F384u: goto label_29f384;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29F39Cu;
}
