#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: calc_cam_speed
// Address: 0x2711c0 - 0x271328
void calc_cam_speed_0x2711c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2711c0u;

    // 0x2711c0: 0x3c020034
    ctx->pc = 0x2711c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2711c4: 0xc441f9fc
    ctx->pc = 0x2711c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2711c8: 0x3c013f19
    ctx->pc = 0x2711c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16153 << 16));
    // 0x2711cc: 0x3421999a
    ctx->pc = 0x2711ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x2711d0: 0x44810000
    ctx->pc = 0x2711d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2711d4: 0x46000834
    ctx->pc = 0x2711d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2711d8: 0x0
    ctx->pc = 0x2711d8u;
    // NOP
    // 0x2711dc: 0x45000019
    ctx->pc = 0x2711DCu;
    {
        const bool branch_taken_0x2711dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2711E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2711dc) {
            ctx->pc = 0x271244u;
            goto label_271244;
        }
    }
    ctx->pc = 0x2711E4u;
    // 0x2711e4: 0x24453970
    ctx->pc = 0x2711e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 14704));
    // 0x2711e8: 0x3c030031
    ctx->pc = 0x2711e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2711ec: 0x8c62ffbc
    ctx->pc = 0x2711ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x2711f0: 0x4400005
    ctx->pc = 0x2711F0u;
    {
        const bool branch_taken_0x2711f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2711F4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x2711f0) {
            ctx->pc = 0x271208u;
            goto label_271208;
        }
    }
    ctx->pc = 0x2711F8u;
    // 0x2711f8: 0x44820800
    ctx->pc = 0x2711f8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2711fc: 0x46800860
    ctx->pc = 0x2711fcu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x271200: 0x10000008
    ctx->pc = 0x271200u;
    {
        const bool branch_taken_0x271200 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x271200) {
            ctx->pc = 0x271224u;
            goto label_271224;
        }
    }
    ctx->pc = 0x271208u;
label_271208:
    // 0x271208: 0x8c820000
    ctx->pc = 0x271208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27120c: 0x30430001
    ctx->pc = 0x27120cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x271210: 0x21042
    ctx->pc = 0x271210u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x271214: 0x621825
    ctx->pc = 0x271214u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x271218: 0x44830800
    ctx->pc = 0x271218u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x27121c: 0x46800860
    ctx->pc = 0x27121cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x271220: 0x46010840
    ctx->pc = 0x271220u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_271224:
    // 0x271224: 0x3c013f33
    ctx->pc = 0x271224u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16179 << 16));
    // 0x271228: 0x34213333
    ctx->pc = 0x271228u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 13107));
    // 0x27122c: 0x44810000
    ctx->pc = 0x27122cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x271230: 0x46000802
    ctx->pc = 0x271230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x271234: 0xe4a00000
    ctx->pc = 0x271234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x271238: 0x3c02003c
    ctx->pc = 0x271238u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x27123c: 0x3e00008
    ctx->pc = 0x27123Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271240u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14708), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x271208u: goto label_271208;
            case 0x271224u: goto label_271224;
            case 0x271244u: goto label_271244;
            case 0x27128Cu: goto label_27128c;
            case 0x2712A8u: goto label_2712a8;
            case 0x2712C4u: goto label_2712c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x271244u;
label_271244:
    // 0x271244: 0x3c020034
    ctx->pc = 0x271244u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x271248: 0xc441f9fc
    ctx->pc = 0x271248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27124c: 0x3c013f66
    ctx->pc = 0x27124cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16230 << 16));
    // 0x271250: 0x34216666
    ctx->pc = 0x271250u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x271254: 0x44810000
    ctx->pc = 0x271254u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x271258: 0x46010036
    ctx->pc = 0x271258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27125c: 0x0
    ctx->pc = 0x27125cu;
    // NOP
    // 0x271260: 0x45000018
    ctx->pc = 0x271260u;
    {
        const bool branch_taken_0x271260 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271264u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x271260) {
            ctx->pc = 0x2712C4u;
            goto label_2712c4;
        }
    }
    ctx->pc = 0x271268u;
    // 0x271268: 0x24453970
    ctx->pc = 0x271268u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 14704));
    // 0x27126c: 0x3c030031
    ctx->pc = 0x27126cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x271270: 0x8c62ffbc
    ctx->pc = 0x271270u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x271274: 0x4400005
    ctx->pc = 0x271274u;
    {
        const bool branch_taken_0x271274 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x271278u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x271274) {
            ctx->pc = 0x27128Cu;
            goto label_27128c;
        }
    }
    ctx->pc = 0x27127Cu;
    // 0x27127c: 0x44820800
    ctx->pc = 0x27127cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x271280: 0x46800860
    ctx->pc = 0x271280u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x271284: 0x10000008
    ctx->pc = 0x271284u;
    {
        const bool branch_taken_0x271284 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x271284) {
            ctx->pc = 0x2712A8u;
            goto label_2712a8;
        }
    }
    ctx->pc = 0x27128Cu;
label_27128c:
    // 0x27128c: 0x8c820000
    ctx->pc = 0x27128cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x271290: 0x30430001
    ctx->pc = 0x271290u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x271294: 0x21042
    ctx->pc = 0x271294u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x271298: 0x621825
    ctx->pc = 0x271298u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27129c: 0x44830800
    ctx->pc = 0x27129cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x2712a0: 0x46800860
    ctx->pc = 0x2712a0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2712a4: 0x46010840
    ctx->pc = 0x2712a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2712a8:
    // 0x2712a8: 0x3c013e80
    ctx->pc = 0x2712a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16000 << 16));
    // 0x2712ac: 0x44810000
    ctx->pc = 0x2712acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2712b0: 0x46000802
    ctx->pc = 0x2712b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2712b4: 0xe4a00000
    ctx->pc = 0x2712b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2712b8: 0x3c02003c
    ctx->pc = 0x2712b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2712bc: 0x3e00008
    ctx->pc = 0x2712BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2712C0u;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14708), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x271208u: goto label_271208;
            case 0x271224u: goto label_271224;
            case 0x271244u: goto label_271244;
            case 0x27128Cu: goto label_27128c;
            case 0x2712A8u: goto label_2712a8;
            case 0x2712C4u: goto label_2712c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2712C4u;
label_2712c4:
    // 0x2712c4: 0x3c03003c
    ctx->pc = 0x2712c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2712c8: 0x3c020034
    ctx->pc = 0x2712c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2712cc: 0x3c013f66
    ctx->pc = 0x2712ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16230 << 16));
    // 0x2712d0: 0x34216666
    ctx->pc = 0x2712d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x2712d4: 0x44810800
    ctx->pc = 0x2712d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2712d8: 0xc440f9fc
    ctx->pc = 0x2712d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2712dc: 0x46000841
    ctx->pc = 0x2712dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2712e0: 0x3c013fc0
    ctx->pc = 0x2712e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x2712e4: 0x34210002
    ctx->pc = 0x2712e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2));
    // 0x2712e8: 0x44810000
    ctx->pc = 0x2712e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2712ec: 0x46000802
    ctx->pc = 0x2712ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2712f0: 0x3c013e80
    ctx->pc = 0x2712f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16000 << 16));
    // 0x2712f4: 0x44811000
    ctx->pc = 0x2712f4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2712f8: 0x46020000
    ctx->pc = 0x2712f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2712fc: 0xe4603970
    ctx->pc = 0x2712fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14704), bits); }
    // 0x271300: 0x3c02003c
    ctx->pc = 0x271300u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x271304: 0x460c6801
    ctx->pc = 0x271304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x271308: 0x46000842
    ctx->pc = 0x271308u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27130c: 0x3c014055
    ctx->pc = 0x27130cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16469 << 16));
    // 0x271310: 0x34215555
    ctx->pc = 0x271310u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 21845));
    // 0x271314: 0x44810000
    ctx->pc = 0x271314u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x271318: 0x46000842
    ctx->pc = 0x271318u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27131c: 0x46016841
    ctx->pc = 0x27131cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x271320: 0x3e00008
    ctx->pc = 0x271320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271324u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14708), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x271208u: goto label_271208;
            case 0x271224u: goto label_271224;
            case 0x271244u: goto label_271244;
            case 0x27128Cu: goto label_27128c;
            case 0x2712A8u: goto label_2712a8;
            case 0x2712C4u: goto label_2712c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x271328u;
}
