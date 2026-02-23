#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrl__13FcvEffectTaskFv
// Address: 0x1e13a0 - 0x1e140c
void ctrl__13FcvEffectTaskFv_0x1e13a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrl__13FcvEffectTaskFv");


    ctx->pc = 0x1e13a0u;

    // 0x1e13a0: 0x27bdffe0
    ctx->pc = 0x1e13a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e13a4: 0x7fbf0010
    ctx->pc = 0x1e13a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e13a8: 0x7fb00000
    ctx->pc = 0x1e13a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e13ac: 0x70808628
    ctx->pc = 0x1e13acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e13b0: 0xc60c0040
    ctx->pc = 0x1e13b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e13b4: 0xc0783bc
    ctx->pc = 0x1E13B4u;
    SET_GPR_U32(ctx, 31, 0x1E13BCu);
    ctx->pc = 0x1E13B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 76));
    ctx->pc = 0x1E0EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ctrl__9FcvEffectFf_0x1e0ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E13BCu; }
        else if (ctx->pc != 0x1E13BCu) { ctx->pc = 0x1E13BCu; }
    }
    if (ctx->pc != 0x1E13BCu) { return; }
    ctx->pc = 0x1E13BCu;
    // 0x1e13bc: 0x3c020050
    ctx->pc = 0x1e13bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e13c0: 0xc07ce18
    ctx->pc = 0x1E13C0u;
    SET_GPR_U32(ctx, 31, 0x1E13C8u);
    ctx->pc = 0x1E13C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E13C8u; }
        else if (ctx->pc != 0x1E13C8u) { ctx->pc = 0x1E13C8u; }
    }
    if (ctx->pc != 0x1E13C8u) { return; }
    ctx->pc = 0x1E13C8u;
    // 0x1e13c8: 0x1c40000c
    ctx->pc = 0x1E13C8u;
    {
        const bool branch_taken_0x1e13c8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e13c8) {
            ctx->pc = 0x1E13FCu;
            goto label_1e13fc;
        }
    }
    ctx->pc = 0x1E13D0u;
    // 0x1e13d0: 0xc6010048
    ctx->pc = 0x1e13d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e13d4: 0xc6000040
    ctx->pc = 0x1e13d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e13d8: 0x46010040
    ctx->pc = 0x1e13d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e13dc: 0xe6010040
    ctx->pc = 0x1e13dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1e13e0: 0xc6000044
    ctx->pc = 0x1e13e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e13e4: 0x46000834
    ctx->pc = 0x1e13e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e13e8: 0x0
    ctx->pc = 0x1e13e8u;
    // NOP
    // 0x1e13ec: 0x45010003
    ctx->pc = 0x1E13ECu;
    {
        const bool branch_taken_0x1e13ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e13ec) {
            ctx->pc = 0x1E13FCu;
            goto label_1e13fc;
        }
    }
    ctx->pc = 0x1E13F4u;
    // 0x1e13f4: 0xc06898c
    ctx->pc = 0x1E13F4u;
    SET_GPR_U32(ctx, 31, 0x1E13FCu);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E13FCu; }
        else if (ctx->pc != 0x1E13FCu) { ctx->pc = 0x1E13FCu; }
    }
    if (ctx->pc != 0x1E13FCu) { return; }
    ctx->pc = 0x1E13FCu;
label_1e13fc:
    // 0x1e13fc: 0x7bbf0010
    ctx->pc = 0x1e13fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1400: 0x7bb00000
    ctx->pc = 0x1e1400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1404: 0x3e00008
    ctx->pc = 0x1E1404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1408u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E13FCu: goto label_1e13fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E140Cu;
}
