#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DispBulletInit__Fv
// Address: 0x213bb0 - 0x213c20
void DispBulletInit__Fv_0x213bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DispBulletInit__Fv");


    ctx->pc = 0x213bb0u;

    // 0x213bb0: 0x3c030052
    ctx->pc = 0x213bb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x213bb4: 0x2468c910
    ctx->pc = 0x213bb4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 4294953232));
    // 0x213bb8: 0x3c030052
    ctx->pc = 0x213bb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x213bbc: 0x70002e28
    ctx->pc = 0x213bbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x213bc0: 0x2469c830
    ctx->pc = 0x213bc0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 3), 4294953008));
label_213bc4:
    // 0x213bc4: 0x71003628
    ctx->pc = 0x213bc4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x213bc8: 0x71203e28
    ctx->pc = 0x213bc8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x213bcc: 0x70002628
    ctx->pc = 0x213bccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_213bd0:
    // 0x213bd0: 0xc4e00000
    ctx->pc = 0x213bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213bd4: 0x24840001
    ctx->pc = 0x213bd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x213bd8: 0x28830009
    ctx->pc = 0x213bd8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 9));
    // 0x213bdc: 0xe4c00000
    ctx->pc = 0x213bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x213be0: 0xc4e00004
    ctx->pc = 0x213be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213be4: 0xe4c00004
    ctx->pc = 0x213be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x213be8: 0xc4e00008
    ctx->pc = 0x213be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213bec: 0xe4c00008
    ctx->pc = 0x213becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x213bf0: 0xacc00018
    ctx->pc = 0x213bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x213bf4: 0xacc0001c
    ctx->pc = 0x213bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x213bf8: 0x24c60024
    ctx->pc = 0x213bf8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 36));
    // 0x213bfc: 0x1460fff4
    ctx->pc = 0x213BFCu;
    {
        const bool branch_taken_0x213bfc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x213C00u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 12));
        if (branch_taken_0x213bfc) {
            ctx->pc = 0x213BD0u;
            goto label_213bd0;
        }
    }
    ctx->pc = 0x213C04u;
    // 0x213c04: 0x24a50001
    ctx->pc = 0x213c04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x213c08: 0x28a30002
    ctx->pc = 0x213c08u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 2));
    // 0x213c0c: 0x25080144
    ctx->pc = 0x213c0cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 324));
    // 0x213c10: 0x1460ffec
    ctx->pc = 0x213C10u;
    {
        const bool branch_taken_0x213c10 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x213C14u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 108));
        if (branch_taken_0x213c10) {
            ctx->pc = 0x213BC4u;
            goto label_213bc4;
        }
    }
    ctx->pc = 0x213C18u;
    // 0x213c18: 0x3e00008
    ctx->pc = 0x213C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213BC4u: goto label_213bc4;
            case 0x213BD0u: goto label_213bd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213C20u;
}
