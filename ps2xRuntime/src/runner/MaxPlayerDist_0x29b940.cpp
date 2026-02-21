#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MaxPlayerDist
// Address: 0x29b940 - 0x29b9ac
void MaxPlayerDist_0x29b940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29b940u;

    // 0x29b940: 0x80382d
    ctx->pc = 0x29b940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b944: 0x44800800
    ctx->pc = 0x29b944u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x29b948: 0x84e20136
    ctx->pc = 0x29b948u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 310)));
    // 0x29b94c: 0x1840000e
    ctx->pc = 0x29B94Cu;
    {
        const bool branch_taken_0x29b94c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29B950u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29b94c) {
            ctx->pc = 0x29B988u;
            goto label_29b988;
        }
    }
    ctx->pc = 0x29B954u;
    // 0x29b954: 0x24050030
    ctx->pc = 0x29b954u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    // 0x29b958: 0x40202d
    ctx->pc = 0x29b958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b95c: 0x653018
    ctx->pc = 0x29b95cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_29b960:
    // 0x29b960: 0xc71021
    ctx->pc = 0x29b960u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29b964: 0xc4400148
    ctx->pc = 0x29b964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b968: 0x46000834
    ctx->pc = 0x29b968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b96c: 0x0
    ctx->pc = 0x29b96cu;
    // NOP
    // 0x29b970: 0x45030001
    ctx->pc = 0x29B970u;
    {
        const bool branch_taken_0x29b970 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b970) {
            ctx->pc = 0x29B974u;
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x29B978u;
            goto label_29b978;
        }
    }
    ctx->pc = 0x29B978u;
label_29b978:
    // 0x29b978: 0x24630001
    ctx->pc = 0x29b978u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x29b97c: 0x64102a
    ctx->pc = 0x29b97cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x29b980: 0x1440fff7
    ctx->pc = 0x29B980u;
    {
        const bool branch_taken_0x29b980 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29B984u;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x29b980) {
            ctx->pc = 0x29B960u;
            goto label_29b960;
        }
    }
    ctx->pc = 0x29B988u;
label_29b988:
    // 0x29b988: 0x44800000
    ctx->pc = 0x29b988u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29b98c: 0x46000836
    ctx->pc = 0x29b98cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b990: 0x45000004
    ctx->pc = 0x29B990u;
    {
        const bool branch_taken_0x29b990 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b990) {
            ctx->pc = 0x29B9A4u;
            goto label_29b9a4;
        }
    }
    ctx->pc = 0x29B998u;
    // 0x29b998: 0x3c016258
    ctx->pc = 0x29b998u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25176 << 16));
    // 0x29b99c: 0x3421d727
    ctx->pc = 0x29b99cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
    // 0x29b9a0: 0x44810800
    ctx->pc = 0x29b9a0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_29b9a4:
    // 0x29b9a4: 0x3e00008
    ctx->pc = 0x29B9A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B9A8u;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29B960u: goto label_29b960;
            case 0x29B978u: goto label_29b978;
            case 0x29B988u: goto label_29b988;
            case 0x29B9A4u: goto label_29b9a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29B9ACu;
}
