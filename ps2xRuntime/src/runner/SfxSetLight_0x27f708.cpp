#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SfxSetLight
// Address: 0x27f708 - 0x27f780
void SfxSetLight_0x27f708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27f708u;

    // 0x27f708: 0x480001b
    ctx->pc = 0x27F708u;
    {
        const bool branch_taken_0x27f708 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27F70Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x27f708) {
            ctx->pc = 0x27F778u;
            goto label_27f778;
        }
    }
    ctx->pc = 0x27F710u;
    // 0x27f710: 0x24630eb0
    ctx->pc = 0x27f710u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x27f714: 0x240200f0
    ctx->pc = 0x27f714u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27f718: 0x821018
    ctx->pc = 0x27f718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27f71c: 0x431021
    ctx->pc = 0x27f71cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f720: 0x10a00008
    ctx->pc = 0x27F720u;
    {
        const bool branch_taken_0x27f720 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x27F724u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        if (branch_taken_0x27f720) {
            ctx->pc = 0x27F744u;
            goto label_27f744;
        }
    }
    ctx->pc = 0x27F728u;
    // 0x27f728: 0xc4a00000
    ctx->pc = 0x27f728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f72c: 0xe4400000
    ctx->pc = 0x27f72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x27f730: 0xc4a00004
    ctx->pc = 0x27f730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f734: 0xe4400004
    ctx->pc = 0x27f734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x27f738: 0xc4a00008
    ctx->pc = 0x27f738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f73c: 0x3e00008
    ctx->pc = 0x27F73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F740u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F744u: goto label_27f744;
            case 0x27F778u: goto label_27f778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27F744u;
label_27f744:
    // 0x27f744: 0x3c030034
    ctx->pc = 0x27f744u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27f748: 0x24630eb0
    ctx->pc = 0x27f748u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x27f74c: 0x240200f0
    ctx->pc = 0x27f74cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27f750: 0x821018
    ctx->pc = 0x27f750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27f754: 0x431021
    ctx->pc = 0x27f754u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f758: 0x3c03003a
    ctx->pc = 0x27f758u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x27f75c: 0x246424d0
    ctx->pc = 0x27f75cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 9424));
    // 0x27f760: 0xc46024d0
    ctx->pc = 0x27f760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 9424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f764: 0xe4400000
    ctx->pc = 0x27f764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x27f768: 0xc4800004
    ctx->pc = 0x27f768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f76c: 0xe4400004
    ctx->pc = 0x27f76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x27f770: 0xc4800008
    ctx->pc = 0x27f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f774: 0xe4400008
    ctx->pc = 0x27f774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_27f778:
    // 0x27f778: 0x3e00008
    ctx->pc = 0x27F778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F744u: goto label_27f744;
            case 0x27F778u: goto label_27f778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27F780u;
}
