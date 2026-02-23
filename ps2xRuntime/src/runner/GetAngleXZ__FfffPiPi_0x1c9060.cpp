#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetAngleXZ__FfffPiPi
// Address: 0x1c9060 - 0x1c9128
void GetAngleXZ__FfffPiPi_0x1c9060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetAngleXZ__FfffPiPi");


    ctx->pc = 0x1c9060u;

    // 0x1c9060: 0x27bdffc0
    ctx->pc = 0x1c9060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c9064: 0x7fbf0030
    ctx->pc = 0x1c9064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1c9068: 0x7fb10020
    ctx->pc = 0x1c9068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c906c: 0x7fb00010
    ctx->pc = 0x1c906cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c9070: 0xe7b60008
    ctx->pc = 0x1c9070u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c9074: 0xe7b50004
    ctx->pc = 0x1c9074u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c9078: 0xe7b40000
    ctx->pc = 0x1c9078u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c907c: 0x46007506
    ctx->pc = 0x1c907cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x1c9080: 0x46006586
    ctx->pc = 0x1c9080u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1c9084: 0x70808e28
    ctx->pc = 0x1c9084u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c9088: 0x70a08628
    ctx->pc = 0x1c9088u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c908c: 0x46006d46
    ctx->pc = 0x1c908cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1c9090: 0xc069e68
    ctx->pc = 0x1C9090u;
    SET_GPR_U32(ctx, 31, 0x1C9098u);
    ctx->pc = 0x1C9094u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9098u; }
        else if (ctx->pc != 0x1C9098u) { ctx->pc = 0x1C9098u; }
    }
    if (ctx->pc != 0x1C9098u) { return; }
    ctx->pc = 0x1C9098u;
    // 0x1c9098: 0x2143c
    ctx->pc = 0x1c9098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c909c: 0x2143f
    ctx->pc = 0x1c909cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c90a0: 0xae220000
    ctx->pc = 0x1c90a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1c90a4: 0x8e240000
    ctx->pc = 0x1c90a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c90a8: 0x24822000
    ctx->pc = 0x1c90a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 8192));
    // 0x1c90ac: 0x30424000
    ctx->pc = 0x1c90acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x1c90b0: 0x1440000a
    ctx->pc = 0x1C90B0u;
    {
        const bool branch_taken_0x1c90b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c90b0) {
            ctx->pc = 0x1C90DCu;
            goto label_1c90dc;
        }
    }
    ctx->pc = 0x1C90B8u;
    // 0x1c90b8: 0xc06c26d
    ctx->pc = 0x1C90B8u;
    SET_GPR_U32(ctx, 31, 0x1C90C0u);
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C90C0u; }
        else if (ctx->pc != 0x1C90C0u) { ctx->pc = 0x1C90C0u; }
    }
    if (ctx->pc != 0x1C90C0u) { return; }
    ctx->pc = 0x1C90C0u;
    // 0x1c90c0: 0x0
    ctx->pc = 0x1c90c0u;
    // NOP
    // 0x1c90c4: 0x0
    ctx->pc = 0x1c90c4u;
    // NOP
    // 0x1c90c8: 0x4600ab43
    ctx->pc = 0x1c90c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[13] = ctx->f[21] / ctx->f[0];
    // 0x1c90cc: 0x0
    ctx->pc = 0x1c90ccu;
    // NOP
    // 0x1c90d0: 0x0
    ctx->pc = 0x1c90d0u;
    // NOP
    // 0x1c90d4: 0x10000006
    ctx->pc = 0x1C90D4u;
    {
        const bool branch_taken_0x1c90d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c90d4) {
            ctx->pc = 0x1C90F0u;
            goto label_1c90f0;
        }
    }
    ctx->pc = 0x1C90DCu;
label_1c90dc:
    // 0x1c90dc: 0xc06c24e
    ctx->pc = 0x1C90DCu;
    SET_GPR_U32(ctx, 31, 0x1C90E4u);
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C90E4u; }
        else if (ctx->pc != 0x1C90E4u) { ctx->pc = 0x1C90E4u; }
    }
    if (ctx->pc != 0x1C90E4u) { return; }
    ctx->pc = 0x1C90E4u;
    // 0x1c90e4: 0x0
    ctx->pc = 0x1c90e4u;
    // NOP
    // 0x1c90e8: 0x0
    ctx->pc = 0x1c90e8u;
    // NOP
    // 0x1c90ec: 0x4600a343
    ctx->pc = 0x1c90ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[0];
label_1c90f0:
    // 0x1c90f0: 0xc069e68
    ctx->pc = 0x1C90F0u;
    SET_GPR_U32(ctx, 31, 0x1C90F8u);
    ctx->pc = 0x1C90F4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C90F8u; }
        else if (ctx->pc != 0x1C90F8u) { ctx->pc = 0x1C90F8u; }
    }
    if (ctx->pc != 0x1C90F8u) { return; }
    ctx->pc = 0x1C90F8u;
    // 0x1c90f8: 0x21c3c
    ctx->pc = 0x1c90f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c90fc: 0x31c3f
    ctx->pc = 0x1c90fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1c9100: 0x31823
    ctx->pc = 0x1c9100u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1c9104: 0xae030000
    ctx->pc = 0x1c9104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1c9108: 0x7bbf0030
    ctx->pc = 0x1c9108u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c910c: 0x7bb10020
    ctx->pc = 0x1c910cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9110: 0x7bb00010
    ctx->pc = 0x1c9110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9114: 0xc7b60008
    ctx->pc = 0x1c9114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c9118: 0xc7b50004
    ctx->pc = 0x1c9118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c911c: 0xc7b40000
    ctx->pc = 0x1c911cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c9120: 0x3e00008
    ctx->pc = 0x1C9120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9124u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C90DCu: goto label_1c90dc;
            case 0x1C90F0u: goto label_1c90f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C9128u;
}
