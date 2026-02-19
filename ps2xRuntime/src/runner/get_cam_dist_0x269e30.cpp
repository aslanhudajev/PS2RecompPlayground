#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_cam_dist
// Address: 0x269e30 - 0x26a36c
void get_cam_dist_0x269e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x269e30u;

    // 0x269e30: 0x240201a0
    ctx->pc = 0x269e30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x269e34: 0x822018
    ctx->pc = 0x269e34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x269e38: 0x3c020034
    ctx->pc = 0x269e38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269e3c: 0x2442eb60
    ctx->pc = 0x269e3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x269e40: 0x822821
    ctx->pc = 0x269e40u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x269e44: 0x3c020036
    ctx->pc = 0x269e44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x269e48: 0x8c42d934
    ctx->pc = 0x269e48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x269e4c: 0x44804000
    ctx->pc = 0x269e4cu;
    *(uint32_t*)&ctx->f[8] = GPR_U32(ctx, 0);
    // 0x269e50: 0x4400004
    ctx->pc = 0x269E50u;
    {
        const bool branch_taken_0x269e50 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x269e50) {
            ctx->pc = 0x269E64u;
            goto label_269e64;
        }
    }
    ctx->pc = 0x269E58u;
    // 0x269e58: 0x3c013e99
    ctx->pc = 0x269e58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16025 << 16));
    // 0x269e5c: 0x3421999a
    ctx->pc = 0x269e5cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x269e60: 0x44814000
    ctx->pc = 0x269e60u;
    *(uint32_t*)&ctx->f[8] = GPR_U32(ctx, 1);
label_269e64:
    // 0x269e64: 0x3c013f0c
    ctx->pc = 0x269e64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16140 << 16));
    // 0x269e68: 0x3421cccd
    ctx->pc = 0x269e68u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x269e6c: 0x44810000
    ctx->pc = 0x269e6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x269e70: 0x3c020034
    ctx->pc = 0x269e70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269e74: 0x8c42cdb8
    ctx->pc = 0x269e74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
    // 0x269e78: 0x4400005
    ctx->pc = 0x269E78u;
    {
        const bool branch_taken_0x269e78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x269E7Cu;
        ctx->f[10] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
        if (branch_taken_0x269e78) {
            ctx->pc = 0x269E90u;
            goto label_269e90;
        }
    }
    ctx->pc = 0x269E80u;
    // 0x269e80: 0x3c013e99
    ctx->pc = 0x269e80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16025 << 16));
    // 0x269e84: 0x3421999a
    ctx->pc = 0x269e84u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x269e88: 0x44810000
    ctx->pc = 0x269e88u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x269e8c: 0x46005280
    ctx->pc = 0x269e8cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
label_269e90:
    // 0x269e90: 0x3c013f19
    ctx->pc = 0x269e90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16153 << 16));
    // 0x269e94: 0x3421999a
    ctx->pc = 0x269e94u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x269e98: 0x44810000
    ctx->pc = 0x269e98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x269e9c: 0x3c020034
    ctx->pc = 0x269e9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269ea0: 0x8c42cdb8
    ctx->pc = 0x269ea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
    // 0x269ea4: 0x4400005
    ctx->pc = 0x269EA4u;
    {
        const bool branch_taken_0x269ea4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x269EA8u;
        ctx->f[9] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
        if (branch_taken_0x269ea4) {
            ctx->pc = 0x269EBCu;
            goto label_269ebc;
        }
    }
    ctx->pc = 0x269EACu;
    // 0x269eac: 0x3c013e99
    ctx->pc = 0x269eacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16025 << 16));
    // 0x269eb0: 0x3421999a
    ctx->pc = 0x269eb0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x269eb4: 0x44810000
    ctx->pc = 0x269eb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x269eb8: 0x46004a40
    ctx->pc = 0x269eb8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_269ebc:
    // 0x269ebc: 0x3c020034
    ctx->pc = 0x269ebcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269ec0: 0x8c42e7f0
    ctx->pc = 0x269ec0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x269ec4: 0x4400004
    ctx->pc = 0x269EC4u;
    {
        const bool branch_taken_0x269ec4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x269EC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269ec4) {
            ctx->pc = 0x269ED8u;
            goto label_269ed8;
        }
    }
    ctx->pc = 0x269ECCu;
    // 0x269ecc: 0x8c42f8fc
    ctx->pc = 0x269eccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x269ed0: 0x14400004
    ctx->pc = 0x269ED0u;
    {
        const bool branch_taken_0x269ed0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x269ED4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269ed0) {
            ctx->pc = 0x269EE4u;
            goto label_269ee4;
        }
    }
    ctx->pc = 0x269ED8u;
label_269ed8:
    // 0x269ed8: 0x44800000
    ctx->pc = 0x269ed8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_269edc:
    // 0x269edc: 0x3e00008
    ctx->pc = 0x269EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269E64u: goto label_269e64;
            case 0x269E90u: goto label_269e90;
            case 0x269EBCu: goto label_269ebc;
            case 0x269ED8u: goto label_269ed8;
            case 0x269EDCu: goto label_269edc;
            case 0x269EE4u: goto label_269ee4;
            case 0x269F14u: goto label_269f14;
            case 0x269F40u: goto label_269f40;
            case 0x269F68u: goto label_269f68;
            case 0x269F78u: goto label_269f78;
            case 0x269F88u: goto label_269f88;
            case 0x269F98u: goto label_269f98;
            case 0x269F9Cu: goto label_269f9c;
            case 0x26A018u: goto label_26a018;
            case 0x26A044u: goto label_26a044;
            case 0x26A070u: goto label_26a070;
            case 0x26A0A8u: goto label_26a0a8;
            case 0x26A0ECu: goto label_26a0ec;
            case 0x26A120u: goto label_26a120;
            case 0x26A15Cu: goto label_26a15c;
            case 0x26A164u: goto label_26a164;
            case 0x26A184u: goto label_26a184;
            case 0x26A1A8u: goto label_26a1a8;
            case 0x26A1ACu: goto label_26a1ac;
            case 0x26A1E4u: goto label_26a1e4;
            case 0x26A208u: goto label_26a208;
            case 0x26A214u: goto label_26a214;
            case 0x26A21Cu: goto label_26a21c;
            case 0x26A254u: goto label_26a254;
            case 0x26A2A4u: goto label_26a2a4;
            case 0x26A2BCu: goto label_26a2bc;
            case 0x26A2C8u: goto label_26a2c8;
            case 0x26A2CCu: goto label_26a2cc;
            case 0x26A2D0u: goto label_26a2d0;
            case 0x26A32Cu: goto label_26a32c;
            case 0x26A334u: goto label_26a334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x269EE4u;
label_269ee4:
    // 0x269ee4: 0x8c43f8fc
    ctx->pc = 0x269ee4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x269ee8: 0x24020001
    ctx->pc = 0x269ee8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x269eec: 0x54620009
    ctx->pc = 0x269EECu;
    {
        const bool branch_taken_0x269eec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x269eec) {
            ctx->pc = 0x269EF0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->pc = 0x269F14u;
            goto label_269f14;
        }
    }
    ctx->pc = 0x269EF4u;
    // 0x269ef4: 0x3c020034
    ctx->pc = 0x269ef4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269ef8: 0x3c013f0c
    ctx->pc = 0x269ef8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16140 << 16));
    // 0x269efc: 0x3421cccd
    ctx->pc = 0x269efcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x269f00: 0x44810000
    ctx->pc = 0x269f00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x269f04: 0xe440f9fc
    ctx->pc = 0x269f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965756), bits); }
    // 0x269f08: 0x3c020034
    ctx->pc = 0x269f08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269f0c: 0x3e00008
    ctx->pc = 0x269F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269F10u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269E64u: goto label_269e64;
            case 0x269E90u: goto label_269e90;
            case 0x269EBCu: goto label_269ebc;
            case 0x269ED8u: goto label_269ed8;
            case 0x269EDCu: goto label_269edc;
            case 0x269EE4u: goto label_269ee4;
            case 0x269F14u: goto label_269f14;
            case 0x269F40u: goto label_269f40;
            case 0x269F68u: goto label_269f68;
            case 0x269F78u: goto label_269f78;
            case 0x269F88u: goto label_269f88;
            case 0x269F98u: goto label_269f98;
            case 0x269F9Cu: goto label_269f9c;
            case 0x26A018u: goto label_26a018;
            case 0x26A044u: goto label_26a044;
            case 0x26A070u: goto label_26a070;
            case 0x26A0A8u: goto label_26a0a8;
            case 0x26A0ECu: goto label_26a0ec;
            case 0x26A120u: goto label_26a120;
            case 0x26A15Cu: goto label_26a15c;
            case 0x26A164u: goto label_26a164;
            case 0x26A184u: goto label_26a184;
            case 0x26A1A8u: goto label_26a1a8;
            case 0x26A1ACu: goto label_26a1ac;
            case 0x26A1E4u: goto label_26a1e4;
            case 0x26A208u: goto label_26a208;
            case 0x26A214u: goto label_26a214;
            case 0x26A21Cu: goto label_26a21c;
            case 0x26A254u: goto label_26a254;
            case 0x26A2A4u: goto label_26a2a4;
            case 0x26A2BCu: goto label_26a2bc;
            case 0x26A2C8u: goto label_26a2c8;
            case 0x26A2CCu: goto label_26a2cc;
            case 0x26A2D0u: goto label_26a2d0;
            case 0x26A32Cu: goto label_26a32c;
            case 0x26A334u: goto label_26a334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x269F14u;
label_269f14:
    // 0x269f14: 0x3c014b18
    ctx->pc = 0x269f14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)19224 << 16));
    // 0x269f18: 0x34219680
    ctx->pc = 0x269f18u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 38528));
    // 0x269f1c: 0x44813800
    ctx->pc = 0x269f1cu;
    *(uint32_t*)&ctx->f[7] = GPR_U32(ctx, 1);
    // 0x269f20: 0x46003906
    ctx->pc = 0x269f20u;
    ctx->f[4] = FPU_MOV_S(ctx->f[7]);
    // 0x269f24: 0x3c01cb18
    ctx->pc = 0x269f24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51992 << 16));
    // 0x269f28: 0x34219680
    ctx->pc = 0x269f28u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 38528));
    // 0x269f2c: 0x44813000
    ctx->pc = 0x269f2cu;
    *(uint32_t*)&ctx->f[6] = GPR_U32(ctx, 1);
    // 0x269f30: 0x46003006
    ctx->pc = 0x269f30u;
    ctx->f[0] = FPU_MOV_S(ctx->f[6]);
    // 0x269f34: 0x202d
    ctx->pc = 0x269f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f38: 0x3c020034
    ctx->pc = 0x269f38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269f3c: 0x2443f530
    ctx->pc = 0x269f3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294964528));
label_269f40:
    // 0x269f40: 0x8c620000
    ctx->pc = 0x269f40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269f44: 0x58400015
    ctx->pc = 0x269F44u;
    {
        const bool branch_taken_0x269f44 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x269f44) {
            ctx->pc = 0x269F48u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x269F9Cu;
            goto label_269f9c;
        }
    }
    ctx->pc = 0x269F4Cu;
    // 0x269f4c: 0xc4610020
    ctx->pc = 0x269f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269f50: 0xc4630024
    ctx->pc = 0x269f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269f54: 0x46040834
    ctx->pc = 0x269f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269f58: 0x0
    ctx->pc = 0x269f58u;
    // NOP
    // 0x269f5c: 0x45000002
    ctx->pc = 0x269F5Cu;
    {
        const bool branch_taken_0x269f5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269F60u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x269f5c) {
            ctx->pc = 0x269F68u;
            goto label_269f68;
        }
    }
    ctx->pc = 0x269F64u;
    // 0x269f64: 0x46000906
    ctx->pc = 0x269f64u;
    ctx->f[4] = FPU_MOV_S(ctx->f[1]);
label_269f68:
    // 0x269f68: 0x46010034
    ctx->pc = 0x269f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269f6c: 0x0
    ctx->pc = 0x269f6cu;
    // NOP
    // 0x269f70: 0x45030001
    ctx->pc = 0x269F70u;
    {
        const bool branch_taken_0x269f70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269f70) {
            ctx->pc = 0x269F74u;
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x269F78u;
            goto label_269f78;
        }
    }
    ctx->pc = 0x269F78u;
label_269f78:
    // 0x269f78: 0x46071034
    ctx->pc = 0x269f78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269f7c: 0x0
    ctx->pc = 0x269f7cu;
    // NOP
    // 0x269f80: 0x45030001
    ctx->pc = 0x269F80u;
    {
        const bool branch_taken_0x269f80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269f80) {
            ctx->pc = 0x269F84u;
            ctx->f[7] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x269F88u;
            goto label_269f88;
        }
    }
    ctx->pc = 0x269F88u;
label_269f88:
    // 0x269f88: 0x46033034
    ctx->pc = 0x269f88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269f8c: 0x0
    ctx->pc = 0x269f8cu;
    // NOP
    // 0x269f90: 0x45030001
    ctx->pc = 0x269F90u;
    {
        const bool branch_taken_0x269f90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269f90) {
            ctx->pc = 0x269F94u;
            ctx->f[6] = FPU_MOV_S(ctx->f[3]);
            ctx->pc = 0x269F98u;
            goto label_269f98;
        }
    }
    ctx->pc = 0x269F98u;
label_269f98:
    // 0x269f98: 0x24840001
    ctx->pc = 0x269f98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_269f9c:
    // 0x269f9c: 0x2882000f
    ctx->pc = 0x269f9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 15));
    // 0x269fa0: 0x1440ffe7
    ctx->pc = 0x269FA0u;
    {
        const bool branch_taken_0x269fa0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x269FA4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x269fa0) {
            ctx->pc = 0x269F40u;
            goto label_269f40;
        }
    }
    ctx->pc = 0x269FA8u;
    // 0x269fa8: 0x46040081
    ctx->pc = 0x269fa8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x269fac: 0x3c040034
    ctx->pc = 0x269facu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x269fb0: 0x3c020034
    ctx->pc = 0x269fb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269fb4: 0x8c43f918
    ctx->pc = 0x269fb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965528)));
    // 0x269fb8: 0x2463003c
    ctx->pc = 0x269fb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 60));
    // 0x269fbc: 0x8c82f91c
    ctx->pc = 0x269fbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294965532)));
    // 0x269fc0: 0x431023
    ctx->pc = 0x269fc0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269fc4: 0x44820000
    ctx->pc = 0x269fc4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x269fc8: 0x46800020
    ctx->pc = 0x269fc8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x269fcc: 0x0
    ctx->pc = 0x269fccu;
    // NOP
    // 0x269fd0: 0x0
    ctx->pc = 0x269fd0u;
    // NOP
    // 0x269fd4: 0x46001083
    ctx->pc = 0x269fd4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x269fd8: 0x46073041
    ctx->pc = 0x269fd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x269fdc: 0x3c040034
    ctx->pc = 0x269fdcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x269fe0: 0x3c020034
    ctx->pc = 0x269fe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269fe4: 0x8c43f924
    ctx->pc = 0x269fe4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965540)));
    // 0x269fe8: 0x2463003c
    ctx->pc = 0x269fe8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 60));
    // 0x269fec: 0x8c82f920
    ctx->pc = 0x269fecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294965536)));
    // 0x269ff0: 0x431023
    ctx->pc = 0x269ff0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269ff4: 0x44820000
    ctx->pc = 0x269ff4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x269ff8: 0x46800020
    ctx->pc = 0x269ff8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x269ffc: 0x0
    ctx->pc = 0x269ffcu;
    // NOP
    // 0x26a000: 0x0
    ctx->pc = 0x26a000u;
    // NOP
    // 0x26a004: 0x46000843
    ctx->pc = 0x26a004u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x26a008: 0x46011034
    ctx->pc = 0x26a008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a00c: 0x0
    ctx->pc = 0x26a00cu;
    // NOP
    // 0x26a010: 0x45030001
    ctx->pc = 0x26A010u;
    {
        const bool branch_taken_0x26a010 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a010) {
            ctx->pc = 0x26A014u;
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x26A018u;
            goto label_26a018;
        }
    }
    ctx->pc = 0x26A018u;
label_26a018:
    // 0x26a018: 0x3c013ecc
    ctx->pc = 0x26a018u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16076 << 16));
    // 0x26a01c: 0x3421cccd
    ctx->pc = 0x26a01cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26a020: 0x44810000
    ctx->pc = 0x26a020u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26a024: 0x46001034
    ctx->pc = 0x26a024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a028: 0x45000006
    ctx->pc = 0x26A028u;
    {
        const bool branch_taken_0x26a028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a028) {
            ctx->pc = 0x26A044u;
            goto label_26a044;
        }
    }
    ctx->pc = 0x26A030u;
    // 0x26a030: 0x3c013f6e
    ctx->pc = 0x26a030u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16238 << 16));
    // 0x26a034: 0x3421147b
    ctx->pc = 0x26a034u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 5243));
    // 0x26a038: 0x44811800
    ctx->pc = 0x26a038u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x26a03c: 0x1000001a
    ctx->pc = 0x26A03Cu;
    {
        const bool branch_taken_0x26a03c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26a03c) {
            ctx->pc = 0x26A0A8u;
            goto label_26a0a8;
        }
    }
    ctx->pc = 0x26A044u;
label_26a044:
    // 0x26a044: 0x3c013f00
    ctx->pc = 0x26a044u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x26a048: 0x44810000
    ctx->pc = 0x26a048u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26a04c: 0x46004000
    ctx->pc = 0x26a04cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x26a050: 0x46020036
    ctx->pc = 0x26a050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a054: 0x45000006
    ctx->pc = 0x26A054u;
    {
        const bool branch_taken_0x26a054 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a054) {
            ctx->pc = 0x26A070u;
            goto label_26a070;
        }
    }
    ctx->pc = 0x26A05Cu;
    // 0x26a05c: 0x3c013f7a
    ctx->pc = 0x26a05cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16250 << 16));
    // 0x26a060: 0x3421e148
    ctx->pc = 0x26a060u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 57672));
    // 0x26a064: 0x44811800
    ctx->pc = 0x26a064u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x26a068: 0x1000000f
    ctx->pc = 0x26A068u;
    {
        const bool branch_taken_0x26a068 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26a068) {
            ctx->pc = 0x26A0A8u;
            goto label_26a0a8;
        }
    }
    ctx->pc = 0x26A070u;
label_26a070:
    // 0x26a070: 0x3c01409f
    ctx->pc = 0x26a070u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16543 << 16));
    // 0x26a074: 0x3421fffe
    ctx->pc = 0x26a074u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65534));
    // 0x26a078: 0x44810800
    ctx->pc = 0x26a078u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26a07c: 0x3c013f00
    ctx->pc = 0x26a07cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x26a080: 0x44810000
    ctx->pc = 0x26a080u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26a084: 0x460040c0
    ctx->pc = 0x26a084u;
    ctx->f[3] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x26a088: 0x460218c1
    ctx->pc = 0x26a088u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x26a08c: 0x0
    ctx->pc = 0x26a08cu;
    // NOP
    // 0x26a090: 0x0
    ctx->pc = 0x26a090u;
    // NOP
    // 0x26a094: 0x460118c3
    ctx->pc = 0x26a094u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[1];
    // 0x26a098: 0x3c013f6e
    ctx->pc = 0x26a098u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16238 << 16));
    // 0x26a09c: 0x3421147b
    ctx->pc = 0x26a09cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 5243));
    // 0x26a0a0: 0x44810000
    ctx->pc = 0x26a0a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26a0a4: 0x460018c0
    ctx->pc = 0x26a0a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_26a0a8:
    // 0x26a0a8: 0x3c013f4c
    ctx->pc = 0x26a0a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
    // 0x26a0ac: 0x3421cccd
    ctx->pc = 0x26a0acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26a0b0: 0x44810000
    ctx->pc = 0x26a0b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26a0b4: 0x46020034
    ctx->pc = 0x26a0b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a0b8: 0x0
    ctx->pc = 0x26a0b8u;
    // NOP
    // 0x26a0bc: 0x4500000b
    ctx->pc = 0x26A0BCu;
    {
        const bool branch_taken_0x26a0bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A0C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26a0bc) {
            ctx->pc = 0x26A0ECu;
            goto label_26a0ec;
        }
    }
    ctx->pc = 0x26A0C4u;
    // 0x26a0c4: 0x8c42fa00
    ctx->pc = 0x26a0c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965760)));
    // 0x26a0c8: 0x3c013f88
    ctx->pc = 0x26a0c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16264 << 16));
    // 0x26a0cc: 0x3421f5c3
    ctx->pc = 0x26a0ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62915));
    // 0x26a0d0: 0x44812000
    ctx->pc = 0x26a0d0u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x26a0d4: 0x10400021
    ctx->pc = 0x26A0D4u;
    {
        const bool branch_taken_0x26a0d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A0D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26a0d4) {
            ctx->pc = 0x26A15Cu;
            goto label_26a15c;
        }
    }
    ctx->pc = 0x26A0DCu;
    // 0x26a0dc: 0x3c014040
    ctx->pc = 0x26a0dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x26a0e0: 0x44812000
    ctx->pc = 0x26a0e0u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x26a0e4: 0x1000001f
    ctx->pc = 0x26A0E4u;
    {
        const bool branch_taken_0x26a0e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A0E8u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965756), bits); }
        if (branch_taken_0x26a0e4) {
            ctx->pc = 0x26A164u;
            goto label_26a164;
        }
    }
    ctx->pc = 0x26A0ECu;
label_26a0ec:
    // 0x26a0ec: 0x3c013f19
    ctx->pc = 0x26a0ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16153 << 16));
    // 0x26a0f0: 0x3421999a
    ctx->pc = 0x26a0f0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x26a0f4: 0x44810000
    ctx->pc = 0x26a0f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26a0f8: 0x46004000
    ctx->pc = 0x26a0f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x26a0fc: 0x46001036
    ctx->pc = 0x26a0fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a100: 0x0
    ctx->pc = 0x26a100u;
    // NOP
    // 0x26a104: 0x45000006
    ctx->pc = 0x26A104u;
    {
        const bool branch_taken_0x26a104 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A108u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26a104) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x26A10Cu;
    // 0x26a10c: 0x3c013f82
    ctx->pc = 0x26a10cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16258 << 16));
    // 0x26a110: 0x34218f5c
    ctx->pc = 0x26a110u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 36700));
    // 0x26a114: 0x44812000
    ctx->pc = 0x26a114u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x26a118: 0x10000012
    ctx->pc = 0x26A118u;
    {
        const bool branch_taken_0x26a118 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A11Cu;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965756), bits); }
        if (branch_taken_0x26a118) {
            ctx->pc = 0x26A164u;
            goto label_26a164;
        }
    }
    ctx->pc = 0x26A120u;
label_26a120:
    // 0x26a120: 0x3c01407f
    ctx->pc = 0x26a120u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16511 << 16));
    // 0x26a124: 0x3421ffe7
    ctx->pc = 0x26a124u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65511));
    // 0x26a128: 0x44810800
    ctx->pc = 0x26a128u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26a12c: 0x3c013f19
    ctx->pc = 0x26a12cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16153 << 16));
    // 0x26a130: 0x3421999a
    ctx->pc = 0x26a130u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x26a134: 0x44810000
    ctx->pc = 0x26a134u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26a138: 0x46004000
    ctx->pc = 0x26a138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x26a13c: 0x46001001
    ctx->pc = 0x26a13cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26a140: 0x0
    ctx->pc = 0x26a140u;
    // NOP
    // 0x26a144: 0x0
    ctx->pc = 0x26a144u;
    // NOP
    // 0x26a148: 0x46010003
    ctx->pc = 0x26a148u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x26a14c: 0x3c013f88
    ctx->pc = 0x26a14cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16264 << 16));
    // 0x26a150: 0x3421f5c3
    ctx->pc = 0x26a150u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62915));
    // 0x26a154: 0x44810800
    ctx->pc = 0x26a154u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26a158: 0x46000901
    ctx->pc = 0x26a158u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26a15c:
    // 0x26a15c: 0x3c020034
    ctx->pc = 0x26a15cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26a160: 0xe442f9fc
    ctx->pc = 0x26a160u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965756), bits); }
label_26a164:
    // 0x26a164: 0x3c020034
    ctx->pc = 0x26a164u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26a168: 0x8c42fa00
    ctx->pc = 0x26a168u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965760)));
    // 0x26a16c: 0x10400005
    ctx->pc = 0x26A16Cu;
    {
        const bool branch_taken_0x26a16c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A170u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26a16c) {
            ctx->pc = 0x26A184u;
            goto label_26a184;
        }
    }
    ctx->pc = 0x26A174u;
    // 0x26a174: 0x8c4238e0
    ctx->pc = 0x26a174u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14560)));
    // 0x26a178: 0x4400002
    ctx->pc = 0x26A178u;
    {
        const bool branch_taken_0x26a178 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26A17Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26a178) {
            ctx->pc = 0x26A184u;
            goto label_26a184;
        }
    }
    ctx->pc = 0x26A180u;
    // 0x26a180: 0xac403920
    ctx->pc = 0x26a180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14624), GPR_U32(ctx, 0));
label_26a184:
    // 0x26a184: 0x3c02003c
    ctx->pc = 0x26a184u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26a188: 0x8c423920
    ctx->pc = 0x26a188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14624)));
    // 0x26a18c: 0x10400006
    ctx->pc = 0x26A18Cu;
    {
        const bool branch_taken_0x26a18c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A190u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x26a18c) {
            ctx->pc = 0x26A1A8u;
            goto label_26a1a8;
        }
    }
    ctx->pc = 0x26A194u;
    // 0x26a194: 0x8c6238e0
    ctx->pc = 0x26a194u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 14560)));
    // 0x26a198: 0x4410004
    ctx->pc = 0x26A198u;
    {
        const bool branch_taken_0x26a198 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26A19Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26a198) {
            ctx->pc = 0x26A1ACu;
            goto label_26a1ac;
        }
    }
    ctx->pc = 0x26A1A0u;
    // 0x26a1a0: 0x1000004a
    ctx->pc = 0x26A1A0u;
    {
        const bool branch_taken_0x26a1a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A1A4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 14560), GPR_U32(ctx, 0));
        if (branch_taken_0x26a1a0) {
            ctx->pc = 0x26A2CCu;
            goto label_26a2cc;
        }
    }
    ctx->pc = 0x26A1A8u;
label_26a1a8:
    // 0x26a1a8: 0x3c02003c
    ctx->pc = 0x26a1a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26a1ac:
    // 0x26a1ac: 0x8c4238e0
    ctx->pc = 0x26a1acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14560)));
    // 0x26a1b0: 0x1040001a
    ctx->pc = 0x26A1B0u;
    {
        const bool branch_taken_0x26a1b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x26a1b0) {
            ctx->pc = 0x26A21Cu;
            goto label_26a21c;
        }
    }
    ctx->pc = 0x26A1B8u;
    // 0x26a1b8: 0x441000a
    ctx->pc = 0x26A1B8u;
    {
        const bool branch_taken_0x26a1b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26A1BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26a1b8) {
            ctx->pc = 0x26A1E4u;
            goto label_26a1e4;
        }
    }
    ctx->pc = 0x26A1C0u;
    // 0x26a1c0: 0x3c013f0c
    ctx->pc = 0x26a1c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16140 << 16));
    // 0x26a1c4: 0x3421cccd
    ctx->pc = 0x26a1c4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26a1c8: 0x44810000
    ctx->pc = 0x26a1c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26a1cc: 0x46004000
    ctx->pc = 0x26a1ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x26a1d0: 0x46020036
    ctx->pc = 0x26a1d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a1d4: 0x0
    ctx->pc = 0x26a1d4u;
    // NOP
    // 0x26a1d8: 0x4503003c
    ctx->pc = 0x26A1D8u;
    {
        const bool branch_taken_0x26a1d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a1d8) {
            ctx->pc = 0x26A1DCu;
            WRITE32(ADD32(GPR_U32(ctx, 2), 14560), GPR_U32(ctx, 0));
            ctx->pc = 0x26A2CCu;
            goto label_26a2cc;
        }
    }
    ctx->pc = 0x26A1E0u;
    // 0x26a1e0: 0x3c02003c
    ctx->pc = 0x26a1e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26a1e4:
    // 0x26a1e4: 0x8c4238e0
    ctx->pc = 0x26a1e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14560)));
    // 0x26a1e8: 0x5840000a
    ctx->pc = 0x26A1E8u;
    {
        const bool branch_taken_0x26a1e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26a1e8) {
            ctx->pc = 0x26A1ECu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26A214u;
            goto label_26a214;
        }
    }
    ctx->pc = 0x26A1F0u;
    // 0x26a1f0: 0x460a1036
    ctx->pc = 0x26a1f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a1f4: 0x0
    ctx->pc = 0x26a1f4u;
    // NOP
    // 0x26a1f8: 0x45000003
    ctx->pc = 0x26A1F8u;
    {
        const bool branch_taken_0x26a1f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A1FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26a1f8) {
            ctx->pc = 0x26A208u;
            goto label_26a208;
        }
    }
    ctx->pc = 0x26A200u;
    // 0x26a200: 0x10000032
    ctx->pc = 0x26A200u;
    {
        const bool branch_taken_0x26a200 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A204u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 14560), GPR_U32(ctx, 0));
        if (branch_taken_0x26a200) {
            ctx->pc = 0x26A2CCu;
            goto label_26a2cc;
        }
    }
    ctx->pc = 0x26A208u;
label_26a208:
    // 0x26a208: 0x8c4238e0
    ctx->pc = 0x26a208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14560)));
    // 0x26a20c: 0x1c40002e
    ctx->pc = 0x26A20Cu;
    {
        const bool branch_taken_0x26a20c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x26A210u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26a20c) {
            ctx->pc = 0x26A2C8u;
            goto label_26a2c8;
        }
    }
    ctx->pc = 0x26A214u;
label_26a214:
    // 0x26a214: 0x1000002d
    ctx->pc = 0x26A214u;
    {
        const bool branch_taken_0x26a214 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A218u;
        ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        if (branch_taken_0x26a214) {
            ctx->pc = 0x26A2CCu;
            goto label_26a2cc;
        }
    }
    ctx->pc = 0x26A21Cu;
label_26a21c:
    // 0x26a21c: 0x3c013f00
    ctx->pc = 0x26a21cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x26a220: 0x44810000
    ctx->pc = 0x26a220u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26a224: 0x46004000
    ctx->pc = 0x26a224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x26a228: 0x46001034
    ctx->pc = 0x26a228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a22c: 0x0
    ctx->pc = 0x26a22cu;
    // NOP
    // 0x26a230: 0x45000008
    ctx->pc = 0x26A230u;
    {
        const bool branch_taken_0x26a230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A234u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26a230) {
            ctx->pc = 0x26A254u;
            goto label_26a254;
        }
    }
    ctx->pc = 0x26A238u;
    // 0x26a238: 0x8c423920
    ctx->pc = 0x26a238u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14624)));
    // 0x26a23c: 0x14400005
    ctx->pc = 0x26A23Cu;
    {
        const bool branch_taken_0x26a23c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26A240u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26a23c) {
            ctx->pc = 0x26A254u;
            goto label_26a254;
        }
    }
    ctx->pc = 0x26A244u;
    // 0x26a244: 0x2403ffff
    ctx->pc = 0x26a244u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a248: 0xac4338e0
    ctx->pc = 0x26a248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14560), GPR_U32(ctx, 3));
    // 0x26a24c: 0xc4a000d0
    ctx->pc = 0x26a24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a250: 0x46001942
    ctx->pc = 0x26a250u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_26a254:
    // 0x26a254: 0x46024834
    ctx->pc = 0x26a254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a258: 0x0
    ctx->pc = 0x26a258u;
    // NOP
    // 0x26a25c: 0x45010017
    ctx->pc = 0x26A25Cu;
    {
        const bool branch_taken_0x26a25c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A260u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26a25c) {
            ctx->pc = 0x26A2BCu;
            goto label_26a2bc;
        }
    }
    ctx->pc = 0x26A264u;
    // 0x26a264: 0x3c020034
    ctx->pc = 0x26a264u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26a268: 0x8c42f940
    ctx->pc = 0x26a268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965568)));
    // 0x26a26c: 0x14400018
    ctx->pc = 0x26A26Cu;
    {
        const bool branch_taken_0x26a26c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26A270u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26a26c) {
            ctx->pc = 0x26A2D0u;
            goto label_26a2d0;
        }
    }
    ctx->pc = 0x26A274u;
    // 0x26a274: 0x3c020034
    ctx->pc = 0x26a274u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26a278: 0x8c42cdb8
    ctx->pc = 0x26a278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
    // 0x26a27c: 0x4410009
    ctx->pc = 0x26A27Cu;
    {
        const bool branch_taken_0x26a27c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26A280u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x26a27c) {
            ctx->pc = 0x26A2A4u;
            goto label_26a2a4;
        }
    }
    ctx->pc = 0x26A284u;
    // 0x26a284: 0x3c020034
    ctx->pc = 0x26a284u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26a288: 0xc440f904
    ctx->pc = 0x26a288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a28c: 0x46000834
    ctx->pc = 0x26a28cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a290: 0x0
    ctx->pc = 0x26a290u;
    // NOP
    // 0x26a294: 0x45010009
    ctx->pc = 0x26A294u;
    {
        const bool branch_taken_0x26a294 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A298u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26a294) {
            ctx->pc = 0x26A2BCu;
            goto label_26a2bc;
        }
    }
    ctx->pc = 0x26A29Cu;
    // 0x26a29c: 0x1000000c
    ctx->pc = 0x26A29Cu;
    {
        const bool branch_taken_0x26a29c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A2A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26a29c) {
            ctx->pc = 0x26A2D0u;
            goto label_26a2d0;
        }
    }
    ctx->pc = 0x26A2A4u;
label_26a2a4:
    // 0x26a2a4: 0x3c0142a0
    ctx->pc = 0x26a2a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17056 << 16));
    // 0x26a2a8: 0x44810000
    ctx->pc = 0x26a2a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26a2ac: 0x46000834
    ctx->pc = 0x26a2acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a2b0: 0x0
    ctx->pc = 0x26a2b0u;
    // NOP
    // 0x26a2b4: 0x45000005
    ctx->pc = 0x26A2B4u;
    {
        const bool branch_taken_0x26a2b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A2B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26a2b4) {
            ctx->pc = 0x26A2CCu;
            goto label_26a2cc;
        }
    }
    ctx->pc = 0x26A2BCu;
label_26a2bc:
    // 0x26a2bc: 0x24030001
    ctx->pc = 0x26a2bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a2c0: 0xac4338e0
    ctx->pc = 0x26a2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14560), GPR_U32(ctx, 3));
    // 0x26a2c4: 0xc4a000d0
    ctx->pc = 0x26a2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a2c8:
    // 0x26a2c8: 0x46002142
    ctx->pc = 0x26a2c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_26a2cc:
    // 0x26a2cc: 0x3c020034
    ctx->pc = 0x26a2ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26a2d0:
    // 0x26a2d0: 0xc440f900
    ctx->pc = 0x26a2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a2d4: 0x46002834
    ctx->pc = 0x26a2d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a2d8: 0x0
    ctx->pc = 0x26a2d8u;
    // NOP
    // 0x26a2dc: 0x4501feff
    ctx->pc = 0x26A2DCu;
    {
        const bool branch_taken_0x26a2dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A2E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26a2dc) {
            ctx->pc = 0x269EDCu;
            goto label_269edc;
        }
    }
    ctx->pc = 0x26A2E4u;
    // 0x26a2e4: 0x8c42cdb8
    ctx->pc = 0x26a2e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
    // 0x26a2e8: 0x4410012
    ctx->pc = 0x26A2E8u;
    {
        const bool branch_taken_0x26a2e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26A2ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26a2e8) {
            ctx->pc = 0x26A334u;
            goto label_26a334;
        }
    }
    ctx->pc = 0x26A2F0u;
    // 0x26a2f0: 0xc440f904
    ctx->pc = 0x26a2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a2f4: 0x46050034
    ctx->pc = 0x26a2f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a2f8: 0x0
    ctx->pc = 0x26a2f8u;
    // NOP
    // 0x26a2fc: 0x4500000b
    ctx->pc = 0x26A2FCu;
    {
        const bool branch_taken_0x26a2fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A300u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26a2fc) {
            ctx->pc = 0x26A32Cu;
            goto label_26a32c;
        }
    }
    ctx->pc = 0x26A304u;
    // 0x26a304: 0x8c42fa00
    ctx->pc = 0x26a304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965760)));
    // 0x26a308: 0x14400008
    ctx->pc = 0x26A308u;
    {
        const bool branch_taken_0x26a308 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x26a308) {
            ctx->pc = 0x26A32Cu;
            goto label_26a32c;
        }
    }
    ctx->pc = 0x26A310u;
    // 0x26a310: 0x46002801
    ctx->pc = 0x26a310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x26a314: 0x3c013dcc
    ctx->pc = 0x26a314u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x26a318: 0x3421cccd
    ctx->pc = 0x26a318u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26a31c: 0x44810800
    ctx->pc = 0x26a31cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26a320: 0x46010002
    ctx->pc = 0x26a320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a324: 0x3e00008
    ctx->pc = 0x26A324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A328u;
        ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269E64u: goto label_269e64;
            case 0x269E90u: goto label_269e90;
            case 0x269EBCu: goto label_269ebc;
            case 0x269ED8u: goto label_269ed8;
            case 0x269EDCu: goto label_269edc;
            case 0x269EE4u: goto label_269ee4;
            case 0x269F14u: goto label_269f14;
            case 0x269F40u: goto label_269f40;
            case 0x269F68u: goto label_269f68;
            case 0x269F78u: goto label_269f78;
            case 0x269F88u: goto label_269f88;
            case 0x269F98u: goto label_269f98;
            case 0x269F9Cu: goto label_269f9c;
            case 0x26A018u: goto label_26a018;
            case 0x26A044u: goto label_26a044;
            case 0x26A070u: goto label_26a070;
            case 0x26A0A8u: goto label_26a0a8;
            case 0x26A0ECu: goto label_26a0ec;
            case 0x26A120u: goto label_26a120;
            case 0x26A15Cu: goto label_26a15c;
            case 0x26A164u: goto label_26a164;
            case 0x26A184u: goto label_26a184;
            case 0x26A1A8u: goto label_26a1a8;
            case 0x26A1ACu: goto label_26a1ac;
            case 0x26A1E4u: goto label_26a1e4;
            case 0x26A208u: goto label_26a208;
            case 0x26A214u: goto label_26a214;
            case 0x26A21Cu: goto label_26a21c;
            case 0x26A254u: goto label_26a254;
            case 0x26A2A4u: goto label_26a2a4;
            case 0x26A2BCu: goto label_26a2bc;
            case 0x26A2C8u: goto label_26a2c8;
            case 0x26A2CCu: goto label_26a2cc;
            case 0x26A2D0u: goto label_26a2d0;
            case 0x26A32Cu: goto label_26a32c;
            case 0x26A334u: goto label_26a334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26A32Cu;
label_26a32c:
    // 0x26a32c: 0x3e00008
    ctx->pc = 0x26A32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A330u;
        ctx->f[0] = FPU_MOV_S(ctx->f[5]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269E64u: goto label_269e64;
            case 0x269E90u: goto label_269e90;
            case 0x269EBCu: goto label_269ebc;
            case 0x269ED8u: goto label_269ed8;
            case 0x269EDCu: goto label_269edc;
            case 0x269EE4u: goto label_269ee4;
            case 0x269F14u: goto label_269f14;
            case 0x269F40u: goto label_269f40;
            case 0x269F68u: goto label_269f68;
            case 0x269F78u: goto label_269f78;
            case 0x269F88u: goto label_269f88;
            case 0x269F98u: goto label_269f98;
            case 0x269F9Cu: goto label_269f9c;
            case 0x26A018u: goto label_26a018;
            case 0x26A044u: goto label_26a044;
            case 0x26A070u: goto label_26a070;
            case 0x26A0A8u: goto label_26a0a8;
            case 0x26A0ECu: goto label_26a0ec;
            case 0x26A120u: goto label_26a120;
            case 0x26A15Cu: goto label_26a15c;
            case 0x26A164u: goto label_26a164;
            case 0x26A184u: goto label_26a184;
            case 0x26A1A8u: goto label_26a1a8;
            case 0x26A1ACu: goto label_26a1ac;
            case 0x26A1E4u: goto label_26a1e4;
            case 0x26A208u: goto label_26a208;
            case 0x26A214u: goto label_26a214;
            case 0x26A21Cu: goto label_26a21c;
            case 0x26A254u: goto label_26a254;
            case 0x26A2A4u: goto label_26a2a4;
            case 0x26A2BCu: goto label_26a2bc;
            case 0x26A2C8u: goto label_26a2c8;
            case 0x26A2CCu: goto label_26a2cc;
            case 0x26A2D0u: goto label_26a2d0;
            case 0x26A32Cu: goto label_26a32c;
            case 0x26A334u: goto label_26a334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26A334u;
label_26a334:
    // 0x26a334: 0x3c0142a0
    ctx->pc = 0x26a334u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17056 << 16));
    // 0x26a338: 0x44810000
    ctx->pc = 0x26a338u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26a33c: 0x46050034
    ctx->pc = 0x26a33cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a340: 0x0
    ctx->pc = 0x26a340u;
    // NOP
    // 0x26a344: 0x4502fee5
    ctx->pc = 0x26A344u;
    {
        const bool branch_taken_0x26a344 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a344) {
            ctx->pc = 0x26A348u;
            ctx->f[0] = FPU_MOV_S(ctx->f[5]);
            ctx->pc = 0x269EDCu;
            goto label_269edc;
        }
    }
    ctx->pc = 0x26A34Cu;
    // 0x26a34c: 0xc4a100d0
    ctx->pc = 0x26a34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a350: 0x46010001
    ctx->pc = 0x26a350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26a354: 0x3c013d4c
    ctx->pc = 0x26a354u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15692 << 16));
    // 0x26a358: 0x3421cccd
    ctx->pc = 0x26a358u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26a35c: 0x44811000
    ctx->pc = 0x26a35cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x26a360: 0x46020002
    ctx->pc = 0x26a360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x26a364: 0x3e00008
    ctx->pc = 0x26A364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A368u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269E64u: goto label_269e64;
            case 0x269E90u: goto label_269e90;
            case 0x269EBCu: goto label_269ebc;
            case 0x269ED8u: goto label_269ed8;
            case 0x269EDCu: goto label_269edc;
            case 0x269EE4u: goto label_269ee4;
            case 0x269F14u: goto label_269f14;
            case 0x269F40u: goto label_269f40;
            case 0x269F68u: goto label_269f68;
            case 0x269F78u: goto label_269f78;
            case 0x269F88u: goto label_269f88;
            case 0x269F98u: goto label_269f98;
            case 0x269F9Cu: goto label_269f9c;
            case 0x26A018u: goto label_26a018;
            case 0x26A044u: goto label_26a044;
            case 0x26A070u: goto label_26a070;
            case 0x26A0A8u: goto label_26a0a8;
            case 0x26A0ECu: goto label_26a0ec;
            case 0x26A120u: goto label_26a120;
            case 0x26A15Cu: goto label_26a15c;
            case 0x26A164u: goto label_26a164;
            case 0x26A184u: goto label_26a184;
            case 0x26A1A8u: goto label_26a1a8;
            case 0x26A1ACu: goto label_26a1ac;
            case 0x26A1E4u: goto label_26a1e4;
            case 0x26A208u: goto label_26a208;
            case 0x26A214u: goto label_26a214;
            case 0x26A21Cu: goto label_26a21c;
            case 0x26A254u: goto label_26a254;
            case 0x26A2A4u: goto label_26a2a4;
            case 0x26A2BCu: goto label_26a2bc;
            case 0x26A2C8u: goto label_26a2c8;
            case 0x26A2CCu: goto label_26a2cc;
            case 0x26A2D0u: goto label_26a2d0;
            case 0x26A32Cu: goto label_26a32c;
            case 0x26A334u: goto label_26a334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26A36Cu;
}
