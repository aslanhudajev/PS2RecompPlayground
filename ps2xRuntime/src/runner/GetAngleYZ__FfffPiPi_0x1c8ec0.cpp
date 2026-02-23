#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetAngleYZ__FfffPiPi
// Address: 0x1c8ec0 - 0x1c8f88
void GetAngleYZ__FfffPiPi_0x1c8ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetAngleYZ__FfffPiPi");


    ctx->pc = 0x1c8ec0u;

    // 0x1c8ec0: 0x27bdffc0
    ctx->pc = 0x1c8ec0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c8ec4: 0x7fbf0030
    ctx->pc = 0x1c8ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1c8ec8: 0x7fb10020
    ctx->pc = 0x1c8ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c8ecc: 0x7fb00010
    ctx->pc = 0x1c8eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c8ed0: 0xe7b60008
    ctx->pc = 0x1c8ed0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c8ed4: 0xe7b50004
    ctx->pc = 0x1c8ed4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c8ed8: 0xe7b40000
    ctx->pc = 0x1c8ed8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c8edc: 0x46007507
    ctx->pc = 0x1c8edcu;
    ctx->f[20] = FPU_NEG_S(ctx->f[14]);
    // 0x1c8ee0: 0x46006586
    ctx->pc = 0x1c8ee0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1c8ee4: 0x46006d46
    ctx->pc = 0x1c8ee4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1c8ee8: 0x70808e28
    ctx->pc = 0x1c8ee8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c8eec: 0x70a08628
    ctx->pc = 0x1c8eecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c8ef0: 0x4600a306
    ctx->pc = 0x1c8ef0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c8ef4: 0xc069e68
    ctx->pc = 0x1C8EF4u;
    SET_GPR_U32(ctx, 31, 0x1C8EFCu);
    ctx->pc = 0x1C8EF8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8EFCu; }
        else if (ctx->pc != 0x1C8EFCu) { ctx->pc = 0x1C8EFCu; }
    }
    if (ctx->pc != 0x1C8EFCu) { return; }
    ctx->pc = 0x1C8EFCu;
    // 0x1c8efc: 0x2143c
    ctx->pc = 0x1c8efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c8f00: 0x2143f
    ctx->pc = 0x1c8f00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c8f04: 0xae220000
    ctx->pc = 0x1c8f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1c8f08: 0x8e240000
    ctx->pc = 0x1c8f08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c8f0c: 0x24822000
    ctx->pc = 0x1c8f0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 8192));
    // 0x1c8f10: 0x30424000
    ctx->pc = 0x1c8f10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x1c8f14: 0x1440000a
    ctx->pc = 0x1C8F14u;
    {
        const bool branch_taken_0x1c8f14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c8f14) {
            ctx->pc = 0x1C8F40u;
            goto label_1c8f40;
        }
    }
    ctx->pc = 0x1C8F1Cu;
    // 0x1c8f1c: 0xc06c26d
    ctx->pc = 0x1C8F1Cu;
    SET_GPR_U32(ctx, 31, 0x1C8F24u);
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F24u; }
        else if (ctx->pc != 0x1C8F24u) { ctx->pc = 0x1C8F24u; }
    }
    if (ctx->pc != 0x1C8F24u) { return; }
    ctx->pc = 0x1C8F24u;
    // 0x1c8f24: 0x0
    ctx->pc = 0x1c8f24u;
    // NOP
    // 0x1c8f28: 0x0
    ctx->pc = 0x1c8f28u;
    // NOP
    // 0x1c8f2c: 0x4600b343
    ctx->pc = 0x1c8f2cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[13] = ctx->f[22] / ctx->f[0];
    // 0x1c8f30: 0x0
    ctx->pc = 0x1c8f30u;
    // NOP
    // 0x1c8f34: 0x0
    ctx->pc = 0x1c8f34u;
    // NOP
    // 0x1c8f38: 0x10000006
    ctx->pc = 0x1C8F38u;
    {
        const bool branch_taken_0x1c8f38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8f38) {
            ctx->pc = 0x1C8F54u;
            goto label_1c8f54;
        }
    }
    ctx->pc = 0x1C8F40u;
label_1c8f40:
    // 0x1c8f40: 0xc06c24e
    ctx->pc = 0x1C8F40u;
    SET_GPR_U32(ctx, 31, 0x1C8F48u);
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F48u; }
        else if (ctx->pc != 0x1C8F48u) { ctx->pc = 0x1C8F48u; }
    }
    if (ctx->pc != 0x1C8F48u) { return; }
    ctx->pc = 0x1C8F48u;
    // 0x1c8f48: 0x0
    ctx->pc = 0x1c8f48u;
    // NOP
    // 0x1c8f4c: 0x0
    ctx->pc = 0x1c8f4cu;
    // NOP
    // 0x1c8f50: 0x4600a343
    ctx->pc = 0x1c8f50u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[0];
label_1c8f54:
    // 0x1c8f54: 0xc069e68
    ctx->pc = 0x1C8F54u;
    SET_GPR_U32(ctx, 31, 0x1C8F5Cu);
    ctx->pc = 0x1C8F58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F5Cu; }
        else if (ctx->pc != 0x1C8F5Cu) { ctx->pc = 0x1C8F5Cu; }
    }
    if (ctx->pc != 0x1C8F5Cu) { return; }
    ctx->pc = 0x1C8F5Cu;
    // 0x1c8f5c: 0x21c3c
    ctx->pc = 0x1c8f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c8f60: 0x31c3f
    ctx->pc = 0x1c8f60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1c8f64: 0xae030000
    ctx->pc = 0x1c8f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1c8f68: 0x7bbf0030
    ctx->pc = 0x1c8f68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8f6c: 0x7bb10020
    ctx->pc = 0x1c8f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8f70: 0x7bb00010
    ctx->pc = 0x1c8f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8f74: 0xc7b60008
    ctx->pc = 0x1c8f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c8f78: 0xc7b50004
    ctx->pc = 0x1c8f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c8f7c: 0xc7b40000
    ctx->pc = 0x1c8f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c8f80: 0x3e00008
    ctx->pc = 0x1C8F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8F40u: goto label_1c8f40;
            case 0x1C8F54u: goto label_1c8f54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8F88u;
}
