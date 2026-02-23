#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: valChgCtrl__FP4VALM
// Address: 0x1ea970 - 0x1eaa1c
void valChgCtrl__FP4VALM_0x1ea970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("valChgCtrl__FP4VALM");


    ctx->pc = 0x1ea970u;

    // 0x1ea970: 0x8c830000
    ctx->pc = 0x1ea970u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ea974: 0x24020001
    ctx->pc = 0x1ea974u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea978: 0x10620003
    ctx->pc = 0x1EA978u;
    {
        const bool branch_taken_0x1ea978 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1ea978) {
            ctx->pc = 0x1EA988u;
            goto label_1ea988;
        }
    }
    ctx->pc = 0x1EA980u;
    // 0x1ea980: 0x10000021
    ctx->pc = 0x1EA980u;
    {
        const bool branch_taken_0x1ea980 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA984u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ea980) {
            ctx->pc = 0x1EAA08u;
            goto label_1eaa08;
        }
    }
    ctx->pc = 0x1EA988u;
label_1ea988:
    // 0x1ea988: 0xc4810008
    ctx->pc = 0x1ea988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea98c: 0xc4820004
    ctx->pc = 0x1ea98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ea990: 0x44800000
    ctx->pc = 0x1ea990u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1ea994: 0x0
    ctx->pc = 0x1ea994u;
    // NOP
    // 0x1ea998: 0x46020841
    ctx->pc = 0x1ea998u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1ea99c: 0x46000834
    ctx->pc = 0x1ea99cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea9a0: 0x0
    ctx->pc = 0x1ea9a0u;
    // NOP
    // 0x1ea9a4: 0x4500000d
    ctx->pc = 0x1EA9A4u;
    {
        const bool branch_taken_0x1ea9a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea9a4) {
            ctx->pc = 0x1EA9DCu;
            goto label_1ea9dc;
        }
    }
    ctx->pc = 0x1EA9ACu;
    // 0x1ea9ac: 0xc480000c
    ctx->pc = 0x1ea9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea9b0: 0x46000007
    ctx->pc = 0x1ea9b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1ea9b4: 0x46001000
    ctx->pc = 0x1ea9b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ea9b8: 0xe4800004
    ctx->pc = 0x1ea9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1ea9bc: 0xc4810008
    ctx->pc = 0x1ea9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea9c0: 0x46010036
    ctx->pc = 0x1ea9c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea9c4: 0x0
    ctx->pc = 0x1ea9c4u;
    // NOP
    // 0x1ea9c8: 0x45000012
    ctx->pc = 0x1EA9C8u;
    {
        const bool branch_taken_0x1ea9c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA9CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ea9c8) {
            ctx->pc = 0x1EAA14u;
            goto label_1eaa14;
        }
    }
    ctx->pc = 0x1EA9D0u;
    // 0x1ea9d0: 0xe4810004
    ctx->pc = 0x1ea9d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1ea9d4: 0x1000000e
    ctx->pc = 0x1EA9D4u;
    {
        const bool branch_taken_0x1ea9d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA9D8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1ea9d4) {
            ctx->pc = 0x1EAA10u;
            goto label_1eaa10;
        }
    }
    ctx->pc = 0x1EA9DCu;
label_1ea9dc:
    // 0x1ea9dc: 0xc480000c
    ctx->pc = 0x1ea9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea9e0: 0x46001000
    ctx->pc = 0x1ea9e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ea9e4: 0xe4800004
    ctx->pc = 0x1ea9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1ea9e8: 0xc4810008
    ctx->pc = 0x1ea9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea9ec: 0x46010034
    ctx->pc = 0x1ea9ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea9f0: 0x0
    ctx->pc = 0x1ea9f0u;
    // NOP
    // 0x1ea9f4: 0x45010006
    ctx->pc = 0x1EA9F4u;
    {
        const bool branch_taken_0x1ea9f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea9f4) {
            ctx->pc = 0x1EAA10u;
            goto label_1eaa10;
        }
    }
    ctx->pc = 0x1EA9FCu;
    // 0x1ea9fc: 0xe4810004
    ctx->pc = 0x1ea9fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1eaa00: 0x10000003
    ctx->pc = 0x1EAA00u;
    {
        const bool branch_taken_0x1eaa00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EAA04u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1eaa00) {
            ctx->pc = 0x1EAA10u;
            goto label_1eaa10;
        }
    }
    ctx->pc = 0x1EAA08u;
label_1eaa08:
    // 0x1eaa08: 0x10000002
    ctx->pc = 0x1EAA08u;
    {
        const bool branch_taken_0x1eaa08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eaa08) {
            ctx->pc = 0x1EAA14u;
            goto label_1eaa14;
        }
    }
    ctx->pc = 0x1EAA10u;
label_1eaa10:
    // 0x1eaa10: 0x24020001
    ctx->pc = 0x1eaa10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1eaa14:
    // 0x1eaa14: 0x3e00008
    ctx->pc = 0x1EAA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA988u: goto label_1ea988;
            case 0x1EA9DCu: goto label_1ea9dc;
            case 0x1EAA08u: goto label_1eaa08;
            case 0x1EAA10u: goto label_1eaa10;
            case 0x1EAA14u: goto label_1eaa14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EAA1Cu;
}
