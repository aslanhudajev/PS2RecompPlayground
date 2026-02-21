#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TransGetYawPitch
// Address: 0x2162a0 - 0x21638c
void TransGetYawPitch_0x2162a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2162a0u;

    // 0x2162a0: 0x5080001f
    ctx->pc = 0x2162A0u;
    {
        const bool branch_taken_0x2162a0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2162a0) {
            ctx->pc = 0x2162A4u;
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x216320u;
            goto label_216320;
        }
    }
    ctx->pc = 0x2162A8u;
    // 0x2162a8: 0xc4810024
    ctx->pc = 0x2162a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2162ac: 0x3c014049
    ctx->pc = 0x2162acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2162b0: 0x34210fdb
    ctx->pc = 0x2162b0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2162b4: 0x44810000
    ctx->pc = 0x2162b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2162b8: 0x46000841
    ctx->pc = 0x2162b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2162bc: 0x46010034
    ctx->pc = 0x2162bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2162c0: 0x0
    ctx->pc = 0x2162c0u;
    // NOP
    // 0x2162c4: 0x45020006
    ctx->pc = 0x2162C4u;
    {
        const bool branch_taken_0x2162c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2162c4) {
            ctx->pc = 0x2162C8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2162E0u;
            goto label_2162e0;
        }
    }
    ctx->pc = 0x2162CCu;
    // 0x2162cc: 0x3c0140c9
    ctx->pc = 0x2162ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2162d0: 0x34210fdb
    ctx->pc = 0x2162d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2162d4: 0x44810000
    ctx->pc = 0x2162d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2162d8: 0x10000010
    ctx->pc = 0x2162D8u;
    {
        const bool branch_taken_0x2162d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2162DCu;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2162d8) {
            ctx->pc = 0x21631Cu;
            goto label_21631c;
        }
    }
    ctx->pc = 0x2162E0u;
label_2162e0:
    // 0x2162e0: 0x3c014049
    ctx->pc = 0x2162e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2162e4: 0x34210fdb
    ctx->pc = 0x2162e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2162e8: 0x44810800
    ctx->pc = 0x2162e8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2162ec: 0x46010041
    ctx->pc = 0x2162ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2162f0: 0x3c01c049
    ctx->pc = 0x2162f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2162f4: 0x34210fdb
    ctx->pc = 0x2162f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2162f8: 0x44810000
    ctx->pc = 0x2162f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2162fc: 0x46000836
    ctx->pc = 0x2162fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216300: 0x0
    ctx->pc = 0x216300u;
    // NOP
    // 0x216304: 0x45020006
    ctx->pc = 0x216304u;
    {
        const bool branch_taken_0x216304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x216304) {
            ctx->pc = 0x216308u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
            ctx->pc = 0x216320u;
            goto label_216320;
        }
    }
    ctx->pc = 0x21630Cu;
    // 0x21630c: 0x3c0140c9
    ctx->pc = 0x21630cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x216310: 0x34210fdb
    ctx->pc = 0x216310u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x216314: 0x44810000
    ctx->pc = 0x216314u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x216318: 0x46000840
    ctx->pc = 0x216318u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_21631c:
    // 0x21631c: 0xe4a10000
    ctx->pc = 0x21631cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_216320:
    // 0x216320: 0x50800004
    ctx->pc = 0x216320u;
    {
        const bool branch_taken_0x216320 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x216320) {
            ctx->pc = 0x216324u;
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x216334u;
            goto label_216334;
        }
    }
    ctx->pc = 0x216328u;
    // 0x216328: 0xc4800020
    ctx->pc = 0x216328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21632c: 0x46000007
    ctx->pc = 0x21632cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x216330: 0xe4c00000
    ctx->pc = 0x216330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_216334:
    // 0x216334: 0x3c020031
    ctx->pc = 0x216334u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x216338: 0x8c42002c
    ctx->pc = 0x216338u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x21633c: 0x28420002
    ctx->pc = 0x21633cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x216340: 0x14400010
    ctx->pc = 0x216340u;
    {
        const bool branch_taken_0x216340 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x216344u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x216340) {
            ctx->pc = 0x216384u;
            goto label_216384;
        }
    }
    ctx->pc = 0x216348u;
    // 0x216348: 0x8c42e7c8
    ctx->pc = 0x216348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x21634c: 0x8c420060
    ctx->pc = 0x21634cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x216350: 0xc4400008
    ctx->pc = 0x216350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216354: 0x46000007
    ctx->pc = 0x216354u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x216358: 0xc4c10000
    ctx->pc = 0x216358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21635c: 0x46000834
    ctx->pc = 0x21635cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216360: 0x0
    ctx->pc = 0x216360u;
    // NOP
    // 0x216364: 0x45010006
    ctx->pc = 0x216364u;
    {
        const bool branch_taken_0x216364 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x216368u;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x216364) {
            ctx->pc = 0x216380u;
            goto label_216380;
        }
    }
    ctx->pc = 0x21636Cu;
    // 0x21636c: 0x3c020034
    ctx->pc = 0x21636cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x216370: 0x8c42e7c8
    ctx->pc = 0x216370u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x216374: 0x8c420060
    ctx->pc = 0x216374u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x216378: 0xc4400008
    ctx->pc = 0x216378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21637c: 0x46000007
    ctx->pc = 0x21637cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_216380:
    // 0x216380: 0xe4c00000
    ctx->pc = 0x216380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_216384:
    // 0x216384: 0x3e00008
    ctx->pc = 0x216384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2162E0u: goto label_2162e0;
            case 0x21631Cu: goto label_21631c;
            case 0x216320u: goto label_216320;
            case 0x216334u: goto label_216334;
            case 0x216380u: goto label_216380;
            case 0x216384u: goto label_216384;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21638Cu;
}
