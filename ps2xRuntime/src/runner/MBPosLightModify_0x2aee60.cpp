#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPosLightModify
// Address: 0x2aee60 - 0x2aef00
void MBPosLightModify_0x2aee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aee60u;

    // 0x2aee60: 0x27bdffc0
    ctx->pc = 0x2aee60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2aee64: 0xffbf0020
    ctx->pc = 0x2aee64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2aee68: 0xffb10010
    ctx->pc = 0x2aee68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2aee6c: 0xffb00000
    ctx->pc = 0x2aee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aee70: 0xe7b50038
    ctx->pc = 0x2aee70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2aee74: 0xe7b40030
    ctx->pc = 0x2aee74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2aee78: 0xa0882d
    ctx->pc = 0x2aee78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee7c: 0xc0282d
    ctx->pc = 0x2aee7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee80: 0x46006506
    ctx->pc = 0x2aee80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2aee84: 0x3c020036
    ctx->pc = 0x2aee84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aee88: 0x8c47dee0
    ctx->pc = 0x2aee88u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aee8c: 0x3083ffff
    ctx->pc = 0x2aee8cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 65535));
    // 0x2aee90: 0x2c62000d
    ctx->pc = 0x2aee90u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 13));
    // 0x2aee94: 0x10400009
    ctx->pc = 0x2AEE94u;
    {
        const bool branch_taken_0x2aee94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AEE98u;
        ctx->f[21] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x2aee94) {
            ctx->pc = 0x2AEEBCu;
            goto label_2aeebc;
        }
    }
    ctx->pc = 0x2AEE9Cu;
    // 0x2aee9c: 0x24020050
    ctx->pc = 0x2aee9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x2aeea0: 0x621018
    ctx->pc = 0x2aeea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2aeea4: 0x244202c0
    ctx->pc = 0x2aeea4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 704));
    // 0x2aeea8: 0x8ce3001c
    ctx->pc = 0x2aeea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2aeeac: 0x438021
    ctx->pc = 0x2aeeacu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aeeb0: 0x8e02002c
    ctx->pc = 0x2aeeb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2aeeb4: 0x10440003
    ctx->pc = 0x2AEEB4u;
    {
        const bool branch_taken_0x2aeeb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x2aeeb4) {
            ctx->pc = 0x2AEEC4u;
            goto label_2aeec4;
        }
    }
    ctx->pc = 0x2AEEBCu;
label_2aeebc:
    // 0x2aeebc: 0x10000009
    ctx->pc = 0x2AEEBCu;
    {
        const bool branch_taken_0x2aeebc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AEEC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2aeebc) {
            ctx->pc = 0x2AEEE4u;
            goto label_2aeee4;
        }
    }
    ctx->pc = 0x2AEEC4u;
label_2aeec4:
    // 0x2aeec4: 0xc0b958e
    ctx->pc = 0x2AEEC4u;
    SET_GPR_U32(ctx, 31, 0x2AEECCu);
    ctx->pc = 0x2AEEC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEECCu; }
    }
    if (ctx->pc != 0x2AEECCu) { return; }
    ctx->pc = 0x2AEECCu;
    // 0x2aeecc: 0x26040010
    ctx->pc = 0x2aeeccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
    // 0x2aeed0: 0xc0b958e
    ctx->pc = 0x2AEED0u;
    SET_GPR_U32(ctx, 31, 0x2AEED8u);
    ctx->pc = 0x2AEED4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEED8u; }
    }
    if (ctx->pc != 0x2AEED8u) { return; }
    ctx->pc = 0x2AEED8u;
    // 0x2aeed8: 0xe6140020
    ctx->pc = 0x2aeed8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2aeedc: 0xe6150024
    ctx->pc = 0x2aeedcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2aeee0: 0x102d
    ctx->pc = 0x2aeee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aeee4:
    // 0x2aeee4: 0xdfbf0020
    ctx->pc = 0x2aeee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aeee8: 0xdfb10010
    ctx->pc = 0x2aeee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aeeec: 0xdfb00000
    ctx->pc = 0x2aeeecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aeef0: 0xc7b50038
    ctx->pc = 0x2aeef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2aeef4: 0xc7b40030
    ctx->pc = 0x2aeef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aeef8: 0x3e00008
    ctx->pc = 0x2AEEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEEFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AEEBCu: goto label_2aeebc;
            case 0x2AEEC4u: goto label_2aeec4;
            case 0x2AEEE4u: goto label_2aeee4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AEF00u;
}
