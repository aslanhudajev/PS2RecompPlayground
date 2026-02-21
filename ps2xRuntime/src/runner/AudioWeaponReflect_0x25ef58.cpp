#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioWeaponReflect
// Address: 0x25ef58 - 0x25efbc
void AudioWeaponReflect_0x25ef58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25ef58u;

    // 0x25ef58: 0x27bdffd0
    ctx->pc = 0x25ef58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25ef5c: 0xffbf0020
    ctx->pc = 0x25ef5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25ef60: 0xffb10010
    ctx->pc = 0x25ef60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25ef64: 0xffb00000
    ctx->pc = 0x25ef64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25ef68: 0x3c100031
    ctx->pc = 0x25ef68u;
    SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
    // 0x25ef6c: 0x3c11003c
    ctx->pc = 0x25ef6cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x25ef70: 0xc6202b10
    ctx->pc = 0x25ef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ef74: 0x3c013f80
    ctx->pc = 0x25ef74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x25ef78: 0x44810800
    ctx->pc = 0x25ef78u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x25ef7c: 0x46010000
    ctx->pc = 0x25ef7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25ef80: 0xc601ffa4
    ctx->pc = 0x25ef80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ef84: 0x46010036
    ctx->pc = 0x25ef84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ef88: 0x0
    ctx->pc = 0x25ef88u;
    // NOP
    // 0x25ef8c: 0x45000006
    ctx->pc = 0x25EF8Cu;
    {
        const bool branch_taken_0x25ef8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25EF90u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 65));
        if (branch_taken_0x25ef8c) {
            ctx->pc = 0x25EFA8u;
            goto label_25efa8;
        }
    }
    ctx->pc = 0x25EF94u;
    // 0x25ef94: 0x2406007f
    ctx->pc = 0x25ef94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25ef98: 0xc088a62
    ctx->pc = 0x25EF98u;
    SET_GPR_U32(ctx, 31, 0x25EFA0u);
    ctx->pc = 0x25EF9Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x222988u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSFX3_0x222988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EFA0u; }
    }
    if (ctx->pc != 0x25EFA0u) { return; }
    ctx->pc = 0x25EFA0u;
    // 0x25efa0: 0xc600ffa4
    ctx->pc = 0x25efa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25efa4: 0xe6202b10
    ctx->pc = 0x25efa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11024), bits); }
label_25efa8:
    // 0x25efa8: 0xdfbf0020
    ctx->pc = 0x25efa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25efac: 0xdfb10010
    ctx->pc = 0x25efacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25efb0: 0xdfb00000
    ctx->pc = 0x25efb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25efb4: 0x3e00008
    ctx->pc = 0x25EFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EFB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25EFA8u: goto label_25efa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25EFBCu;
}
