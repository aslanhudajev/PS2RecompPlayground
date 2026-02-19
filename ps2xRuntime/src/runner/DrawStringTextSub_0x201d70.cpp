#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DrawStringTextSub
// Address: 0x201d70 - 0x201e9c
void DrawStringTextSub_0x201d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201d70u;

    // 0x201d70: 0x27bdff20
    ctx->pc = 0x201d70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x201d74: 0xffbf00c0
    ctx->pc = 0x201d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x201d78: 0xffb700b0
    ctx->pc = 0x201d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x201d7c: 0xffb600a0
    ctx->pc = 0x201d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x201d80: 0xffb50090
    ctx->pc = 0x201d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x201d84: 0xffb40080
    ctx->pc = 0x201d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x201d88: 0xffb30070
    ctx->pc = 0x201d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x201d8c: 0xffb20060
    ctx->pc = 0x201d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x201d90: 0xffb10050
    ctx->pc = 0x201d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x201d94: 0xffb00040
    ctx->pc = 0x201d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x201d98: 0xe7b500d8
    ctx->pc = 0x201d98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x201d9c: 0xe7b400d0
    ctx->pc = 0x201d9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x201da0: 0xc0b82d
    ctx->pc = 0x201da0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201da4: 0xe0882d
    ctx->pc = 0x201da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201da8: 0x100982d
    ctx->pc = 0x201da8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201dac: 0x120a82d
    ctx->pc = 0x201dacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201db0: 0x140b02d
    ctx->pc = 0x201db0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201db4: 0x6610003
    ctx->pc = 0x201DB4u;
    {
        const bool branch_taken_0x201db4 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x201DB8u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x201db4) {
            ctx->pc = 0x201DC4u;
            goto label_201dc4;
        }
    }
    ctx->pc = 0x201DBCu;
    // 0x201dbc: 0x3c020031
    ctx->pc = 0x201dbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x201dc0: 0x8c53f288
    ctx->pc = 0x201dc0u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294963848)));
label_201dc4:
    // 0x201dc4: 0x8c830018
    ctx->pc = 0x201dc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x201dc8: 0x24020014
    ctx->pc = 0x201dc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x201dcc: 0xa21018
    ctx->pc = 0x201dccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x201dd0: 0x431021
    ctx->pc = 0x201dd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201dd4: 0x3c030031
    ctx->pc = 0x201dd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x201dd8: 0xc441000c
    ctx->pc = 0x201dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201ddc: 0xc460f27c
    ctx->pc = 0x201ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201de0: 0x46000d02
    ctx->pc = 0x201de0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x201de4: 0xc4550010
    ctx->pc = 0x201de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x201de8: 0x2a0202d
    ctx->pc = 0x201de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201dec: 0xc080570
    ctx->pc = 0x201DECu;
    SET_GPR_U32(ctx, 31, 0x201DF4u);
    ctx->pc = 0x201DF0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2015C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontHeight_0x2015c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201DF4u; }
    }
    if (ctx->pc != 0x201DF4u) { return; }
    ctx->pc = 0x201DF4u;
    // 0x201df4: 0x2629821
    ctx->pc = 0x201df4u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x201df8: 0x3c040031
    ctx->pc = 0x201df8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x201dfc: 0x2484f2a8
    ctx->pc = 0x201dfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963880));
    // 0x201e00: 0x3c050031
    ctx->pc = 0x201e00u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x201e04: 0x24a5fb78
    ctx->pc = 0x201e04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966136));
    // 0x201e08: 0xc0803e0
    ctx->pc = 0x201E08u;
    SET_GPR_U32(ctx, 31, 0x201E10u);
    ctx->pc = 0x201E0Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x200F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixMLineText_0x200f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201E10u; }
    }
    if (ctx->pc != 0x201E10u) { return; }
    ctx->pc = 0x201E10u;
    // 0x201e10: 0x40902d
    ctx->pc = 0x201e10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e14: 0x1a400011
    ctx->pc = 0x201E14u;
    {
        const bool branch_taken_0x201e14 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x201E18u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x201e14) {
            ctx->pc = 0x201E5Cu;
            goto label_201e5c;
        }
    }
    ctx->pc = 0x201E1Cu;
    // 0x201e1c: 0x0
    ctx->pc = 0x201e1cu;
    // NOP
label_201e20:
    // 0x201e20: 0x101080
    ctx->pc = 0x201e20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x201e24: 0x3a21021
    ctx->pc = 0x201e24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x201e28: 0x2e0202d
    ctx->pc = 0x201e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e2c: 0x220282d
    ctx->pc = 0x201e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e30: 0x2a0302d
    ctx->pc = 0x201e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e34: 0x2c0382d
    ctx->pc = 0x201e34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e38: 0x4600a306
    ctx->pc = 0x201e38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x201e3c: 0x4600ab46
    ctx->pc = 0x201e3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x201e40: 0xc08041c
    ctx->pc = 0x201E40u;
    SET_GPR_U32(ctx, 31, 0x201E48u);
    ctx->pc = 0x201E44u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x201070u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextSub_0x201070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201E48u; }
    }
    if (ctx->pc != 0x201E48u) { return; }
    ctx->pc = 0x201E48u;
    // 0x201e48: 0x54a00a
    ctx->pc = 0x201e48u;
    if (GPR_U32(ctx, 20) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 2));
    // 0x201e4c: 0x26100001
    ctx->pc = 0x201e4cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x201e50: 0x212102a
    ctx->pc = 0x201e50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x201e54: 0x1440fff2
    ctx->pc = 0x201E54u;
    {
        const bool branch_taken_0x201e54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x201E58u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        if (branch_taken_0x201e54) {
            ctx->pc = 0x201E20u;
            goto label_201e20;
        }
    }
    ctx->pc = 0x201E5Cu;
label_201e5c:
    // 0x201e5c: 0x3c020031
    ctx->pc = 0x201e5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x201e60: 0xac51f284
    ctx->pc = 0x201e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963844), GPR_U32(ctx, 17));
    // 0x201e64: 0x280102d
    ctx->pc = 0x201e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e68: 0xdfbf00c0
    ctx->pc = 0x201e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x201e6c: 0xdfb700b0
    ctx->pc = 0x201e6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x201e70: 0xdfb600a0
    ctx->pc = 0x201e70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x201e74: 0xdfb50090
    ctx->pc = 0x201e74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x201e78: 0xdfb40080
    ctx->pc = 0x201e78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x201e7c: 0xdfb30070
    ctx->pc = 0x201e7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x201e80: 0xdfb20060
    ctx->pc = 0x201e80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x201e84: 0xdfb10050
    ctx->pc = 0x201e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x201e88: 0xdfb00040
    ctx->pc = 0x201e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201e8c: 0xc7b500d8
    ctx->pc = 0x201e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x201e90: 0xc7b400d0
    ctx->pc = 0x201e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x201e94: 0x3e00008
    ctx->pc = 0x201E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201E98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201DC4u: goto label_201dc4;
            case 0x201E20u: goto label_201e20;
            case 0x201E5Cu: goto label_201e5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201E9Cu;
}
