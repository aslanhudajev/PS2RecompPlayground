#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetAngleXY__FfffPiPi
// Address: 0x1c8df0 - 0x1c8eb8
void GetAngleXY__FfffPiPi_0x1c8df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetAngleXY__FfffPiPi");


    ctx->pc = 0x1c8df0u;

    // 0x1c8df0: 0x27bdffc0
    ctx->pc = 0x1c8df0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c8df4: 0x7fbf0030
    ctx->pc = 0x1c8df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1c8df8: 0x7fb10020
    ctx->pc = 0x1c8df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c8dfc: 0x7fb00010
    ctx->pc = 0x1c8dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c8e00: 0xe7b60008
    ctx->pc = 0x1c8e00u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c8e04: 0xe7b50004
    ctx->pc = 0x1c8e04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c8e08: 0xe7b40000
    ctx->pc = 0x1c8e08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c8e0c: 0x46007546
    ctx->pc = 0x1c8e0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x1c8e10: 0x46006d07
    ctx->pc = 0x1c8e10u;
    ctx->f[20] = FPU_NEG_S(ctx->f[13]);
    // 0x1c8e14: 0x46006586
    ctx->pc = 0x1c8e14u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1c8e18: 0x70808e28
    ctx->pc = 0x1c8e18u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c8e1c: 0x70a08628
    ctx->pc = 0x1c8e1cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c8e20: 0x4600a306
    ctx->pc = 0x1c8e20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c8e24: 0xc069e68
    ctx->pc = 0x1C8E24u;
    SET_GPR_U32(ctx, 31, 0x1C8E2Cu);
    ctx->pc = 0x1C8E28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8E2Cu; }
        else if (ctx->pc != 0x1C8E2Cu) { ctx->pc = 0x1C8E2Cu; }
    }
    if (ctx->pc != 0x1C8E2Cu) { return; }
    ctx->pc = 0x1C8E2Cu;
    // 0x1c8e2c: 0x2143c
    ctx->pc = 0x1c8e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c8e30: 0x2143f
    ctx->pc = 0x1c8e30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c8e34: 0xae220000
    ctx->pc = 0x1c8e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1c8e38: 0x8e240000
    ctx->pc = 0x1c8e38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c8e3c: 0x24822000
    ctx->pc = 0x1c8e3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 8192));
    // 0x1c8e40: 0x30424000
    ctx->pc = 0x1c8e40u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x1c8e44: 0x1440000a
    ctx->pc = 0x1C8E44u;
    {
        const bool branch_taken_0x1c8e44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c8e44) {
            ctx->pc = 0x1C8E70u;
            goto label_1c8e70;
        }
    }
    ctx->pc = 0x1C8E4Cu;
    // 0x1c8e4c: 0xc06c26d
    ctx->pc = 0x1C8E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C8E54u);
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8E54u; }
        else if (ctx->pc != 0x1C8E54u) { ctx->pc = 0x1C8E54u; }
    }
    if (ctx->pc != 0x1C8E54u) { return; }
    ctx->pc = 0x1C8E54u;
    // 0x1c8e54: 0x0
    ctx->pc = 0x1c8e54u;
    // NOP
    // 0x1c8e58: 0x0
    ctx->pc = 0x1c8e58u;
    // NOP
    // 0x1c8e5c: 0x4600ab43
    ctx->pc = 0x1c8e5cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[13] = ctx->f[21] / ctx->f[0];
    // 0x1c8e60: 0x0
    ctx->pc = 0x1c8e60u;
    // NOP
    // 0x1c8e64: 0x0
    ctx->pc = 0x1c8e64u;
    // NOP
    // 0x1c8e68: 0x10000006
    ctx->pc = 0x1C8E68u;
    {
        const bool branch_taken_0x1c8e68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8e68) {
            ctx->pc = 0x1C8E84u;
            goto label_1c8e84;
        }
    }
    ctx->pc = 0x1C8E70u;
label_1c8e70:
    // 0x1c8e70: 0xc06c24e
    ctx->pc = 0x1C8E70u;
    SET_GPR_U32(ctx, 31, 0x1C8E78u);
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8E78u; }
        else if (ctx->pc != 0x1C8E78u) { ctx->pc = 0x1C8E78u; }
    }
    if (ctx->pc != 0x1C8E78u) { return; }
    ctx->pc = 0x1C8E78u;
    // 0x1c8e78: 0x0
    ctx->pc = 0x1c8e78u;
    // NOP
    // 0x1c8e7c: 0x0
    ctx->pc = 0x1c8e7cu;
    // NOP
    // 0x1c8e80: 0x4600a343
    ctx->pc = 0x1c8e80u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[0];
label_1c8e84:
    // 0x1c8e84: 0xc069e68
    ctx->pc = 0x1C8E84u;
    SET_GPR_U32(ctx, 31, 0x1C8E8Cu);
    ctx->pc = 0x1C8E88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8E8Cu; }
        else if (ctx->pc != 0x1C8E8Cu) { ctx->pc = 0x1C8E8Cu; }
    }
    if (ctx->pc != 0x1C8E8Cu) { return; }
    ctx->pc = 0x1C8E8Cu;
    // 0x1c8e8c: 0x21c3c
    ctx->pc = 0x1c8e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c8e90: 0x31c3f
    ctx->pc = 0x1c8e90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1c8e94: 0xae030000
    ctx->pc = 0x1c8e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1c8e98: 0x7bbf0030
    ctx->pc = 0x1c8e98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8e9c: 0x7bb10020
    ctx->pc = 0x1c8e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8ea0: 0x7bb00010
    ctx->pc = 0x1c8ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8ea4: 0xc7b60008
    ctx->pc = 0x1c8ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c8ea8: 0xc7b50004
    ctx->pc = 0x1c8ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c8eac: 0xc7b40000
    ctx->pc = 0x1c8eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c8eb0: 0x3e00008
    ctx->pc = 0x1C8EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8EB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8E70u: goto label_1c8e70;
            case 0x1C8E84u: goto label_1c8e84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8EB8u;
}
