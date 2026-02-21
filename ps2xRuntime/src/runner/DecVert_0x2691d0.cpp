#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DecVert
// Address: 0x2691d0 - 0x269248
void DecVert_0x2691d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2691d0u;

    // 0x2691d0: 0x3c020034
    ctx->pc = 0x2691d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2691d4: 0xc440fa18
    ctx->pc = 0x2691d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2691d8: 0x44800800
    ctx->pc = 0x2691d8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2691dc: 0x46000834
    ctx->pc = 0x2691dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2691e0: 0x45000005
    ctx->pc = 0x2691E0u;
    {
        const bool branch_taken_0x2691e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2691e0) {
            ctx->pc = 0x2691F8u;
            goto label_2691f8;
        }
    }
    ctx->pc = 0x2691E8u;
    // 0x2691e8: 0x460c0001
    ctx->pc = 0x2691e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2691ec: 0x46010036
    ctx->pc = 0x2691ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2691f0: 0x10000009
    ctx->pc = 0x2691F0u;
    {
        const bool branch_taken_0x2691f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2691F4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965784), bits); }
        if (branch_taken_0x2691f0) {
            ctx->pc = 0x269218u;
            goto label_269218;
        }
    }
    ctx->pc = 0x2691F8u;
label_2691f8:
    // 0x2691f8: 0x46010034
    ctx->pc = 0x2691f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2691fc: 0x0
    ctx->pc = 0x2691fcu;
    // NOP
    // 0x269200: 0x45020008
    ctx->pc = 0x269200u;
    {
        const bool branch_taken_0x269200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x269200) {
            ctx->pc = 0x269204u;
            SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
            ctx->pc = 0x269224u;
            goto label_269224;
        }
    }
    ctx->pc = 0x269208u;
    // 0x269208: 0x46006000
    ctx->pc = 0x269208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x26920c: 0xe440fa18
    ctx->pc = 0x26920cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965784), bits); }
    // 0x269210: 0x46000836
    ctx->pc = 0x269210u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269214: 0x0
    ctx->pc = 0x269214u;
    // NOP
label_269218:
    // 0x269218: 0x45030001
    ctx->pc = 0x269218u;
    {
        const bool branch_taken_0x269218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269218) {
            ctx->pc = 0x26921Cu;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965784), bits); }
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x269220u;
label_269220:
    // 0x269220: 0x3c020034
    ctx->pc = 0x269220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_269224:
    // 0x269224: 0xc440fa18
    ctx->pc = 0x269224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269228: 0x46000005
    ctx->pc = 0x269228u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x26922c: 0x460c0034
    ctx->pc = 0x26922cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269230: 0x0
    ctx->pc = 0x269230u;
    // NOP
    // 0x269234: 0x45030001
    ctx->pc = 0x269234u;
    {
        const bool branch_taken_0x269234 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269234) {
            ctx->pc = 0x269238u;
            WRITE32(ADD32(GPR_U32(ctx, 2), 4294965784), GPR_U32(ctx, 0));
            ctx->pc = 0x26923Cu;
            goto label_26923c;
        }
    }
    ctx->pc = 0x26923Cu;
label_26923c:
    // 0x26923c: 0x3c020034
    ctx->pc = 0x26923cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269240: 0x3e00008
    ctx->pc = 0x269240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269244u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2691F8u: goto label_2691f8;
            case 0x269218u: goto label_269218;
            case 0x269220u: goto label_269220;
            case 0x269224u: goto label_269224;
            case 0x26923Cu: goto label_26923c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x269248u;
}
