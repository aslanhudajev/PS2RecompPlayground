#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: find_closest_milestone
// Address: 0x2379e0 - 0x237ae8
void find_closest_milestone_0x2379e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2379e0u;

    // 0x2379e0: 0x27bdff80
    ctx->pc = 0x2379e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2379e4: 0xffbf0060
    ctx->pc = 0x2379e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2379e8: 0xffb40050
    ctx->pc = 0x2379e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2379ec: 0xffb30040
    ctx->pc = 0x2379ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2379f0: 0xffb20030
    ctx->pc = 0x2379f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2379f4: 0xffb10020
    ctx->pc = 0x2379f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2379f8: 0xffb00010
    ctx->pc = 0x2379f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2379fc: 0xe7b40070
    ctx->pc = 0x2379fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x237a00: 0x80902d
    ctx->pc = 0x237a00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a04: 0x2413ffff
    ctx->pc = 0x237a04u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237a08: 0x3c0147c3
    ctx->pc = 0x237a08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x237a0c: 0x34215000
    ctx->pc = 0x237a0cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x237a10: 0x4481a000
    ctx->pc = 0x237a10u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x237a14: 0x3c020034
    ctx->pc = 0x237a14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x237a18: 0x24518b80
    ctx->pc = 0x237a18u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294937472));
    // 0x237a1c: 0x3c020034
    ctx->pc = 0x237a1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x237a20: 0x8c42c380
    ctx->pc = 0x237a20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
    // 0x237a24: 0x18400026
    ctx->pc = 0x237A24u;
    {
        const bool branch_taken_0x237a24 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x237A28u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x237a24) {
            ctx->pc = 0x237AC0u;
            goto label_237ac0;
        }
    }
    ctx->pc = 0x237A2Cu;
    // 0x237a2c: 0x3c140034
    ctx->pc = 0x237a2cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
label_237a30:
    // 0x237a30: 0xc6430000
    ctx->pc = 0x237a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x237a34: 0xc6200030
    ctx->pc = 0x237a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237a38: 0x460018c1
    ctx->pc = 0x237a38u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x237a3c: 0xe7a30000
    ctx->pc = 0x237a3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x237a40: 0xc6420004
    ctx->pc = 0x237a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x237a44: 0xc6200034
    ctx->pc = 0x237a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237a48: 0x46001081
    ctx->pc = 0x237a48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x237a4c: 0xe7a20004
    ctx->pc = 0x237a4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x237a50: 0xc6400008
    ctx->pc = 0x237a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237a54: 0xc6210038
    ctx->pc = 0x237a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237a58: 0x46010001
    ctx->pc = 0x237a58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x237a5c: 0xe7a00008
    ctx->pc = 0x237a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x237a60: 0x460318c2
    ctx->pc = 0x237a60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x237a64: 0x46021082
    ctx->pc = 0x237a64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x237a68: 0x460218c0
    ctx->pc = 0x237a68u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x237a6c: 0x46000002
    ctx->pc = 0x237a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x237a70: 0x46001b00
    ctx->pc = 0x237a70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x237a74: 0x0
    ctx->pc = 0x237a74u;
    // NOP
    // 0x237a78: 0x0
    ctx->pc = 0x237a78u;
    // NOP
    // 0x237a7c: 0x460c0004
    ctx->pc = 0x237a7cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x237a80: 0x46000032
    ctx->pc = 0x237a80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237a84: 0x45010003
    ctx->pc = 0x237A84u;
    {
        const bool branch_taken_0x237a84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x237a84) {
            ctx->pc = 0x237A94u;
            goto label_237a94;
        }
    }
    ctx->pc = 0x237A8Cu;
    // 0x237a8c: 0xc0ba284
    ctx->pc = 0x237A8Cu;
    SET_GPR_U32(ctx, 31, 0x237A94u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237A94u; }
    }
    if (ctx->pc != 0x237A94u) { return; }
    ctx->pc = 0x237A94u;
label_237a94:
    // 0x237a94: 0x46140034
    ctx->pc = 0x237a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237a98: 0x0
    ctx->pc = 0x237a98u;
    // NOP
    // 0x237a9c: 0x45020004
    ctx->pc = 0x237A9Cu;
    {
        const bool branch_taken_0x237a9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x237a9c) {
            ctx->pc = 0x237AA0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x237AB0u;
            goto label_237ab0;
        }
    }
    ctx->pc = 0x237AA4u;
    // 0x237aa4: 0x200982d
    ctx->pc = 0x237aa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237aa8: 0x46000506
    ctx->pc = 0x237aa8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x237aac: 0x26100001
    ctx->pc = 0x237aacu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_237ab0:
    // 0x237ab0: 0x8e82c380
    ctx->pc = 0x237ab0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294951808)));
    // 0x237ab4: 0x202102a
    ctx->pc = 0x237ab4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x237ab8: 0x1440ffdd
    ctx->pc = 0x237AB8u;
    {
        const bool branch_taken_0x237ab8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x237ABCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 112));
        if (branch_taken_0x237ab8) {
            ctx->pc = 0x237A30u;
            goto label_237a30;
        }
    }
    ctx->pc = 0x237AC0u;
label_237ac0:
    // 0x237ac0: 0x260102d
    ctx->pc = 0x237ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ac4: 0xdfbf0060
    ctx->pc = 0x237ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x237ac8: 0xdfb40050
    ctx->pc = 0x237ac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x237acc: 0xdfb30040
    ctx->pc = 0x237accu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237ad0: 0xdfb20030
    ctx->pc = 0x237ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237ad4: 0xdfb10020
    ctx->pc = 0x237ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237ad8: 0xdfb00010
    ctx->pc = 0x237ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237adc: 0xc7b40070
    ctx->pc = 0x237adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x237ae0: 0x3e00008
    ctx->pc = 0x237AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237AE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x237A30u: goto label_237a30;
            case 0x237A94u: goto label_237a94;
            case 0x237AB0u: goto label_237ab0;
            case 0x237AC0u: goto label_237ac0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x237AE8u;
}
