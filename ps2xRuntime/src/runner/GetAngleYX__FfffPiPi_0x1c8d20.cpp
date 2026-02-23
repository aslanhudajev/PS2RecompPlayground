#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetAngleYX__FfffPiPi
// Address: 0x1c8d20 - 0x1c8de8
void GetAngleYX__FfffPiPi_0x1c8d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetAngleYX__FfffPiPi");


    ctx->pc = 0x1c8d20u;

    // 0x1c8d20: 0x27bdffc0
    ctx->pc = 0x1c8d20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c8d24: 0x7fbf0030
    ctx->pc = 0x1c8d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1c8d28: 0x7fb10020
    ctx->pc = 0x1c8d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c8d2c: 0x7fb00010
    ctx->pc = 0x1c8d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c8d30: 0xe7b60008
    ctx->pc = 0x1c8d30u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c8d34: 0xe7b50004
    ctx->pc = 0x1c8d34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c8d38: 0xe7b40000
    ctx->pc = 0x1c8d38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c8d3c: 0x46007506
    ctx->pc = 0x1c8d3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x1c8d40: 0x46006d46
    ctx->pc = 0x1c8d40u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1c8d44: 0x70808e28
    ctx->pc = 0x1c8d44u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c8d48: 0x70a08628
    ctx->pc = 0x1c8d48u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c8d4c: 0x46006586
    ctx->pc = 0x1c8d4cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1c8d50: 0xc069e68
    ctx->pc = 0x1C8D50u;
    SET_GPR_U32(ctx, 31, 0x1C8D58u);
    ctx->pc = 0x1C8D54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8D58u; }
        else if (ctx->pc != 0x1C8D58u) { ctx->pc = 0x1C8D58u; }
    }
    if (ctx->pc != 0x1C8D58u) { return; }
    ctx->pc = 0x1C8D58u;
    // 0x1c8d58: 0x2143c
    ctx->pc = 0x1c8d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c8d5c: 0x2143f
    ctx->pc = 0x1c8d5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c8d60: 0xae020000
    ctx->pc = 0x1c8d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c8d64: 0x8e040000
    ctx->pc = 0x1c8d64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8d68: 0x24822000
    ctx->pc = 0x1c8d68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 8192));
    // 0x1c8d6c: 0x30424000
    ctx->pc = 0x1c8d6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x1c8d70: 0x1440000a
    ctx->pc = 0x1C8D70u;
    {
        const bool branch_taken_0x1c8d70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c8d70) {
            ctx->pc = 0x1C8D9Cu;
            goto label_1c8d9c;
        }
    }
    ctx->pc = 0x1C8D78u;
    // 0x1c8d78: 0xc06c26d
    ctx->pc = 0x1C8D78u;
    SET_GPR_U32(ctx, 31, 0x1C8D80u);
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8D80u; }
        else if (ctx->pc != 0x1C8D80u) { ctx->pc = 0x1C8D80u; }
    }
    if (ctx->pc != 0x1C8D80u) { return; }
    ctx->pc = 0x1C8D80u;
    // 0x1c8d80: 0x0
    ctx->pc = 0x1c8d80u;
    // NOP
    // 0x1c8d84: 0x0
    ctx->pc = 0x1c8d84u;
    // NOP
    // 0x1c8d88: 0x4600a343
    ctx->pc = 0x1c8d88u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[0];
    // 0x1c8d8c: 0x0
    ctx->pc = 0x1c8d8cu;
    // NOP
    // 0x1c8d90: 0x0
    ctx->pc = 0x1c8d90u;
    // NOP
    // 0x1c8d94: 0x10000006
    ctx->pc = 0x1C8D94u;
    {
        const bool branch_taken_0x1c8d94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8d94) {
            ctx->pc = 0x1C8DB0u;
            goto label_1c8db0;
        }
    }
    ctx->pc = 0x1C8D9Cu;
label_1c8d9c:
    // 0x1c8d9c: 0xc06c24e
    ctx->pc = 0x1C8D9Cu;
    SET_GPR_U32(ctx, 31, 0x1C8DA4u);
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8DA4u; }
        else if (ctx->pc != 0x1C8DA4u) { ctx->pc = 0x1C8DA4u; }
    }
    if (ctx->pc != 0x1C8DA4u) { return; }
    ctx->pc = 0x1C8DA4u;
    // 0x1c8da4: 0x0
    ctx->pc = 0x1c8da4u;
    // NOP
    // 0x1c8da8: 0x0
    ctx->pc = 0x1c8da8u;
    // NOP
    // 0x1c8dac: 0x4600b343
    ctx->pc = 0x1c8dacu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[13] = ctx->f[22] / ctx->f[0];
label_1c8db0:
    // 0x1c8db0: 0xc069e68
    ctx->pc = 0x1C8DB0u;
    SET_GPR_U32(ctx, 31, 0x1C8DB8u);
    ctx->pc = 0x1C8DB4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8DB8u; }
        else if (ctx->pc != 0x1C8DB8u) { ctx->pc = 0x1C8DB8u; }
    }
    if (ctx->pc != 0x1C8DB8u) { return; }
    ctx->pc = 0x1C8DB8u;
    // 0x1c8db8: 0x21c3c
    ctx->pc = 0x1c8db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c8dbc: 0x31c3f
    ctx->pc = 0x1c8dbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1c8dc0: 0x31823
    ctx->pc = 0x1c8dc0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1c8dc4: 0xae230000
    ctx->pc = 0x1c8dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1c8dc8: 0x7bbf0030
    ctx->pc = 0x1c8dc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8dcc: 0x7bb10020
    ctx->pc = 0x1c8dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8dd0: 0x7bb00010
    ctx->pc = 0x1c8dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8dd4: 0xc7b60008
    ctx->pc = 0x1c8dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c8dd8: 0xc7b50004
    ctx->pc = 0x1c8dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c8ddc: 0xc7b40000
    ctx->pc = 0x1c8ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c8de0: 0x3e00008
    ctx->pc = 0x1C8DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8DE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8D9Cu: goto label_1c8d9c;
            case 0x1C8DB0u: goto label_1c8db0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8DE8u;
}
