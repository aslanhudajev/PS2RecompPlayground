#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InterpPYR
// Address: 0x20f948 - 0x20f9f4
void InterpPYR_0x20f948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20f948u;

    // 0x20f948: 0x382d
    ctx->pc = 0x20f948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f94c: 0x3c014049
    ctx->pc = 0x20f94cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x20f950: 0x34210fdb
    ctx->pc = 0x20f950u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x20f954: 0x44812000
    ctx->pc = 0x20f954u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x20f958: 0x3c0140c9
    ctx->pc = 0x20f958u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x20f95c: 0x34210fdb
    ctx->pc = 0x20f95cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x20f960: 0x44811000
    ctx->pc = 0x20f960u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x20f964: 0x3c01c049
    ctx->pc = 0x20f964u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x20f968: 0x34210fdb
    ctx->pc = 0x20f968u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x20f96c: 0x44811800
    ctx->pc = 0x20f96cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x20f970: 0x71880
    ctx->pc = 0x20f970u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
    // 0x20f974: 0x0
    ctx->pc = 0x20f974u;
    // NOP
label_20f978:
    // 0x20f978: 0x641021
    ctx->pc = 0x20f978u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20f97c: 0xc4410000
    ctx->pc = 0x20f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f980: 0x651821
    ctx->pc = 0x20f980u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20f984: 0xc4600000
    ctx->pc = 0x20f984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f988: 0x46000832
    ctx->pc = 0x20f988u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f98c: 0x0
    ctx->pc = 0x20f98cu;
    // NOP
    // 0x20f990: 0x45030010
    ctx->pc = 0x20F990u;
    {
        const bool branch_taken_0x20f990 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f990) {
            ctx->pc = 0x20F994u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x20F9D4u;
            goto label_20f9d4;
        }
    }
    ctx->pc = 0x20F998u;
    // 0x20f998: 0x46010001
    ctx->pc = 0x20f998u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20f99c: 0x46002034
    ctx->pc = 0x20f99cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f9a0: 0x0
    ctx->pc = 0x20f9a0u;
    // NOP
    // 0x20f9a4: 0x45030001
    ctx->pc = 0x20F9A4u;
    {
        const bool branch_taken_0x20f9a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f9a4) {
            ctx->pc = 0x20F9A8u;
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
            ctx->pc = 0x20F9ACu;
            goto label_20f9ac;
        }
    }
    ctx->pc = 0x20F9ACu;
label_20f9ac:
    // 0x20f9ac: 0x46030036
    ctx->pc = 0x20f9acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f9b0: 0x0
    ctx->pc = 0x20f9b0u;
    // NOP
    // 0x20f9b4: 0x45030001
    ctx->pc = 0x20F9B4u;
    {
        const bool branch_taken_0x20f9b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f9b4) {
            ctx->pc = 0x20F9B8u;
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
            ctx->pc = 0x20F9BCu;
            goto label_20f9bc;
        }
    }
    ctx->pc = 0x20F9BCu;
label_20f9bc:
    // 0x20f9bc: 0x71080
    ctx->pc = 0x20f9bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x20f9c0: 0x461021
    ctx->pc = 0x20f9c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20f9c4: 0x46006002
    ctx->pc = 0x20f9c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x20f9c8: 0x46000800
    ctx->pc = 0x20f9c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20f9cc: 0x10000003
    ctx->pc = 0x20F9CCu;
    {
        const bool branch_taken_0x20f9cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F9D0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        if (branch_taken_0x20f9cc) {
            ctx->pc = 0x20F9DCu;
            goto label_20f9dc;
        }
    }
    ctx->pc = 0x20F9D4u;
label_20f9d4:
    // 0x20f9d4: 0x461021
    ctx->pc = 0x20f9d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20f9d8: 0xe4410000
    ctx->pc = 0x20f9d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20f9dc:
    // 0x20f9dc: 0x24e70001
    ctx->pc = 0x20f9dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x20f9e0: 0x28e20003
    ctx->pc = 0x20f9e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 3));
    // 0x20f9e4: 0x1440ffe4
    ctx->pc = 0x20F9E4u;
    {
        const bool branch_taken_0x20f9e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F9E8u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x20f9e4) {
            ctx->pc = 0x20F978u;
            goto label_20f978;
        }
    }
    ctx->pc = 0x20F9ECu;
    // 0x20f9ec: 0x3e00008
    ctx->pc = 0x20F9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F978u: goto label_20f978;
            case 0x20F9ACu: goto label_20f9ac;
            case 0x20F9BCu: goto label_20f9bc;
            case 0x20F9D4u: goto label_20f9d4;
            case 0x20F9DCu: goto label_20f9dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F9F4u;
}
