#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DecHorz
// Address: 0x269040 - 0x2690b8
void DecHorz_0x269040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x269040u;

    // 0x269040: 0x3c020034
    ctx->pc = 0x269040u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269044: 0xc440fa14
    ctx->pc = 0x269044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269048: 0x44800800
    ctx->pc = 0x269048u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x26904c: 0x46000834
    ctx->pc = 0x26904cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269050: 0x45000005
    ctx->pc = 0x269050u;
    {
        const bool branch_taken_0x269050 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x269050) {
            ctx->pc = 0x269068u;
            goto label_269068;
        }
    }
    ctx->pc = 0x269058u;
    // 0x269058: 0x460c0001
    ctx->pc = 0x269058u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x26905c: 0x46010036
    ctx->pc = 0x26905cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269060: 0x10000009
    ctx->pc = 0x269060u;
    {
        const bool branch_taken_0x269060 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x269064u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965780), bits); }
        if (branch_taken_0x269060) {
            ctx->pc = 0x269088u;
            goto label_269088;
        }
    }
    ctx->pc = 0x269068u;
label_269068:
    // 0x269068: 0x46010034
    ctx->pc = 0x269068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26906c: 0x0
    ctx->pc = 0x26906cu;
    // NOP
    // 0x269070: 0x45020008
    ctx->pc = 0x269070u;
    {
        const bool branch_taken_0x269070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x269070) {
            ctx->pc = 0x269074u;
            SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
            ctx->pc = 0x269094u;
            goto label_269094;
        }
    }
    ctx->pc = 0x269078u;
    // 0x269078: 0x46006000
    ctx->pc = 0x269078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x26907c: 0xe440fa14
    ctx->pc = 0x26907cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965780), bits); }
    // 0x269080: 0x46000836
    ctx->pc = 0x269080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269084: 0x0
    ctx->pc = 0x269084u;
    // NOP
label_269088:
    // 0x269088: 0x45030001
    ctx->pc = 0x269088u;
    {
        const bool branch_taken_0x269088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269088) {
            ctx->pc = 0x26908Cu;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965780), bits); }
            ctx->pc = 0x269090u;
            goto label_269090;
        }
    }
    ctx->pc = 0x269090u;
label_269090:
    // 0x269090: 0x3c020034
    ctx->pc = 0x269090u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_269094:
    // 0x269094: 0xc440fa14
    ctx->pc = 0x269094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269098: 0x46000005
    ctx->pc = 0x269098u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x26909c: 0x460c0034
    ctx->pc = 0x26909cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2690a0: 0x0
    ctx->pc = 0x2690a0u;
    // NOP
    // 0x2690a4: 0x45030001
    ctx->pc = 0x2690A4u;
    {
        const bool branch_taken_0x2690a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2690a4) {
            ctx->pc = 0x2690A8u;
            WRITE32(ADD32(GPR_U32(ctx, 2), 4294965780), GPR_U32(ctx, 0));
            ctx->pc = 0x2690ACu;
            goto label_2690ac;
        }
    }
    ctx->pc = 0x2690ACu;
label_2690ac:
    // 0x2690ac: 0x3c020034
    ctx->pc = 0x2690acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2690b0: 0x3e00008
    ctx->pc = 0x2690B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2690B4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269068u: goto label_269068;
            case 0x269088u: goto label_269088;
            case 0x269090u: goto label_269090;
            case 0x269094u: goto label_269094;
            case 0x2690ACu: goto label_2690ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2690B8u;
}
