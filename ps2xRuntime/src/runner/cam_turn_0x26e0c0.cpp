#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cam_turn
// Address: 0x26e0c0 - 0x26e258
void cam_turn_0x26e0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26e0c0u;

    // 0x26e0c0: 0x44801800
    ctx->pc = 0x26e0c0u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
    // 0x26e0c4: 0x282d
    ctx->pc = 0x26e0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e0c8: 0x460c6881
    ctx->pc = 0x26e0c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x26e0cc: 0x3c014049
    ctx->pc = 0x26e0ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26e0d0: 0x34210fdb
    ctx->pc = 0x26e0d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26e0d4: 0x44810000
    ctx->pc = 0x26e0d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e0d8: 0x46020034
    ctx->pc = 0x26e0d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e0dc: 0x0
    ctx->pc = 0x26e0dcu;
    // NOP
    // 0x26e0e0: 0x45000006
    ctx->pc = 0x26E0E0u;
    {
        const bool branch_taken_0x26e0e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E0E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x26e0e0) {
            ctx->pc = 0x26E0FCu;
            goto label_26e0fc;
        }
    }
    ctx->pc = 0x26E0E8u;
    // 0x26e0e8: 0x3c0140c9
    ctx->pc = 0x26e0e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26e0ec: 0x34210fdb
    ctx->pc = 0x26e0ecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26e0f0: 0x44810000
    ctx->pc = 0x26e0f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e0f4: 0x1000000c
    ctx->pc = 0x26E0F4u;
    {
        const bool branch_taken_0x26e0f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26E0F8u;
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x26e0f4) {
            ctx->pc = 0x26E128u;
            goto label_26e128;
        }
    }
    ctx->pc = 0x26E0FCu;
label_26e0fc:
    // 0x26e0fc: 0x3c01c049
    ctx->pc = 0x26e0fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x26e100: 0x34210fdb
    ctx->pc = 0x26e100u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26e104: 0x44810000
    ctx->pc = 0x26e104u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e108: 0x46001036
    ctx->pc = 0x26e108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e10c: 0x0
    ctx->pc = 0x26e10cu;
    // NOP
    // 0x26e110: 0x45000005
    ctx->pc = 0x26E110u;
    {
        const bool branch_taken_0x26e110 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E114u;
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        if (branch_taken_0x26e110) {
            ctx->pc = 0x26E128u;
            goto label_26e128;
        }
    }
    ctx->pc = 0x26E118u;
    // 0x26e118: 0x3c0140c9
    ctx->pc = 0x26e118u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26e11c: 0x34210fdb
    ctx->pc = 0x26e11cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26e120: 0x44810000
    ctx->pc = 0x26e120u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e124: 0x46001040
    ctx->pc = 0x26e124u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_26e128:
    // 0x26e128: 0x46000886
    ctx->pc = 0x26e128u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x26e12c: 0x46001045
    ctx->pc = 0x26e12cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x26e130: 0x3c013c8e
    ctx->pc = 0x26e130u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15502 << 16));
    // 0x26e134: 0x3421fa36
    ctx->pc = 0x26e134u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x26e138: 0x44810000
    ctx->pc = 0x26e138u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e13c: 0x46000836
    ctx->pc = 0x26e13cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e140: 0x0
    ctx->pc = 0x26e140u;
    // NOP
    // 0x26e144: 0x45000003
    ctx->pc = 0x26E144u;
    {
        const bool branch_taken_0x26e144 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E148u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x26e144) {
            ctx->pc = 0x26E154u;
            goto label_26e154;
        }
    }
    ctx->pc = 0x26E14Cu;
    // 0x26e14c: 0x10000023
    ctx->pc = 0x26E14Cu;
    {
        const bool branch_taken_0x26e14c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26E150u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x26e14c) {
            ctx->pc = 0x26E1DCu;
            goto label_26e1dc;
        }
    }
    ctx->pc = 0x26E154u;
label_26e154:
    // 0x26e154: 0x8c62ffbc
    ctx->pc = 0x26e154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26e158: 0x4400005
    ctx->pc = 0x26E158u;
    {
        const bool branch_taken_0x26e158 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26E15Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26e158) {
            ctx->pc = 0x26E170u;
            goto label_26e170;
        }
    }
    ctx->pc = 0x26E160u;
    // 0x26e160: 0x44821800
    ctx->pc = 0x26e160u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x26e164: 0x468018e0
    ctx->pc = 0x26e164u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x26e168: 0x10000008
    ctx->pc = 0x26E168u;
    {
        const bool branch_taken_0x26e168 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26e168) {
            ctx->pc = 0x26E18Cu;
            goto label_26e18c;
        }
    }
    ctx->pc = 0x26E170u;
label_26e170:
    // 0x26e170: 0x8c820000
    ctx->pc = 0x26e170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26e174: 0x30430001
    ctx->pc = 0x26e174u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26e178: 0x21042
    ctx->pc = 0x26e178u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26e17c: 0x621825
    ctx->pc = 0x26e17cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26e180: 0x44831800
    ctx->pc = 0x26e180u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
    // 0x26e184: 0x468018e0
    ctx->pc = 0x26e184u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x26e188: 0x460318c0
    ctx->pc = 0x26e188u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_26e18c:
    // 0x26e18c: 0x3c013c8e
    ctx->pc = 0x26e18cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15502 << 16));
    // 0x26e190: 0x3421fa36
    ctx->pc = 0x26e190u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x26e194: 0x44810000
    ctx->pc = 0x26e194u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e198: 0x460018c2
    ctx->pc = 0x26e198u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x26e19c: 0x44800000
    ctx->pc = 0x26e19cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26e1a0: 0x46020036
    ctx->pc = 0x26e1a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e1a4: 0x0
    ctx->pc = 0x26e1a4u;
    // NOP
    // 0x26e1a8: 0x45020007
    ctx->pc = 0x26E1A8u;
    {
        const bool branch_taken_0x26e1a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e1a8) {
            ctx->pc = 0x26E1ACu;
            ctx->f[0] = FPU_NEG_S(ctx->f[3]);
            ctx->pc = 0x26E1C8u;
            goto label_26e1c8;
        }
    }
    ctx->pc = 0x26E1B0u;
    // 0x26e1b0: 0x46031036
    ctx->pc = 0x26e1b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e1b4: 0x0
    ctx->pc = 0x26e1b4u;
    // NOP
    // 0x26e1b8: 0x45030001
    ctx->pc = 0x26E1B8u;
    {
        const bool branch_taken_0x26e1b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e1b8) {
            ctx->pc = 0x26E1BCu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x26E1C0u;
            goto label_26e1c0;
        }
    }
    ctx->pc = 0x26E1C0u;
label_26e1c0:
    // 0x26e1c0: 0x10000006
    ctx->pc = 0x26E1C0u;
    {
        const bool branch_taken_0x26e1c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26E1C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x26e1c0) {
            ctx->pc = 0x26E1DCu;
            goto label_26e1dc;
        }
    }
    ctx->pc = 0x26E1C8u;
label_26e1c8:
    // 0x26e1c8: 0x46020036
    ctx->pc = 0x26e1c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e1cc: 0x0
    ctx->pc = 0x26e1ccu;
    // NOP
    // 0x26e1d0: 0x45030001
    ctx->pc = 0x26E1D0u;
    {
        const bool branch_taken_0x26e1d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e1d0) {
            ctx->pc = 0x26E1D4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x26E1D8u;
            goto label_26e1d8;
        }
    }
    ctx->pc = 0x26E1D8u;
label_26e1d8:
    // 0x26e1d8: 0x2402ffff
    ctx->pc = 0x26e1d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_26e1dc:
    // 0x26e1dc: 0x10a00003
    ctx->pc = 0x26E1DCu;
    {
        const bool branch_taken_0x26e1dc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x26e1dc) {
            ctx->pc = 0x26E1ECu;
            goto label_26e1ec;
        }
    }
    ctx->pc = 0x26E1E4u;
    // 0x26e1e4: 0x10000004
    ctx->pc = 0x26E1E4u;
    {
        const bool branch_taken_0x26e1e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26E1E8u;
        ctx->f[12] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x26e1e4) {
            ctx->pc = 0x26E1F8u;
            goto label_26e1f8;
        }
    }
    ctx->pc = 0x26E1ECu;
label_26e1ec:
    // 0x26e1ec: 0x58400002
    ctx->pc = 0x26E1ECu;
    {
        const bool branch_taken_0x26e1ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26e1ec) {
            ctx->pc = 0x26E1F0u;
            ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
            ctx->pc = 0x26E1F8u;
            goto label_26e1f8;
        }
    }
    ctx->pc = 0x26E1F4u;
    // 0x26e1f4: 0x46036300
    ctx->pc = 0x26e1f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
label_26e1f8:
    // 0x26e1f8: 0x3c014049
    ctx->pc = 0x26e1f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26e1fc: 0x34210fdb
    ctx->pc = 0x26e1fcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26e200: 0x44810000
    ctx->pc = 0x26e200u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e204: 0x460c0034
    ctx->pc = 0x26e204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e208: 0x45000006
    ctx->pc = 0x26E208u;
    {
        const bool branch_taken_0x26e208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e208) {
            ctx->pc = 0x26E224u;
            goto label_26e224;
        }
    }
    ctx->pc = 0x26E210u;
    // 0x26e210: 0x3c0140c9
    ctx->pc = 0x26e210u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26e214: 0x34210fdb
    ctx->pc = 0x26e214u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26e218: 0x44810000
    ctx->pc = 0x26e218u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e21c: 0x3e00008
    ctx->pc = 0x26E21Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E220u;
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E0FCu: goto label_26e0fc;
            case 0x26E128u: goto label_26e128;
            case 0x26E154u: goto label_26e154;
            case 0x26E170u: goto label_26e170;
            case 0x26E18Cu: goto label_26e18c;
            case 0x26E1C0u: goto label_26e1c0;
            case 0x26E1C8u: goto label_26e1c8;
            case 0x26E1D8u: goto label_26e1d8;
            case 0x26E1DCu: goto label_26e1dc;
            case 0x26E1ECu: goto label_26e1ec;
            case 0x26E1F8u: goto label_26e1f8;
            case 0x26E224u: goto label_26e224;
            case 0x26E250u: goto label_26e250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E224u;
label_26e224:
    // 0x26e224: 0x3c01c049
    ctx->pc = 0x26e224u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x26e228: 0x34210fdb
    ctx->pc = 0x26e228u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26e22c: 0x44810000
    ctx->pc = 0x26e22cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e230: 0x46006036
    ctx->pc = 0x26e230u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e234: 0x45000006
    ctx->pc = 0x26E234u;
    {
        const bool branch_taken_0x26e234 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e234) {
            ctx->pc = 0x26E250u;
            goto label_26e250;
        }
    }
    ctx->pc = 0x26E23Cu;
    // 0x26e23c: 0x3c0140c9
    ctx->pc = 0x26e23cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26e240: 0x34210fdb
    ctx->pc = 0x26e240u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26e244: 0x44810000
    ctx->pc = 0x26e244u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e248: 0x3e00008
    ctx->pc = 0x26E248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E24Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E0FCu: goto label_26e0fc;
            case 0x26E128u: goto label_26e128;
            case 0x26E154u: goto label_26e154;
            case 0x26E170u: goto label_26e170;
            case 0x26E18Cu: goto label_26e18c;
            case 0x26E1C0u: goto label_26e1c0;
            case 0x26E1C8u: goto label_26e1c8;
            case 0x26E1D8u: goto label_26e1d8;
            case 0x26E1DCu: goto label_26e1dc;
            case 0x26E1ECu: goto label_26e1ec;
            case 0x26E1F8u: goto label_26e1f8;
            case 0x26E224u: goto label_26e224;
            case 0x26E250u: goto label_26e250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E250u;
label_26e250:
    // 0x26e250: 0x3e00008
    ctx->pc = 0x26E250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E254u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E0FCu: goto label_26e0fc;
            case 0x26E128u: goto label_26e128;
            case 0x26E154u: goto label_26e154;
            case 0x26E170u: goto label_26e170;
            case 0x26E18Cu: goto label_26e18c;
            case 0x26E1C0u: goto label_26e1c0;
            case 0x26E1C8u: goto label_26e1c8;
            case 0x26E1D8u: goto label_26e1d8;
            case 0x26E1DCu: goto label_26e1dc;
            case 0x26E1ECu: goto label_26e1ec;
            case 0x26E1F8u: goto label_26e1f8;
            case 0x26E224u: goto label_26e224;
            case 0x26E250u: goto label_26e250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E258u;
}
