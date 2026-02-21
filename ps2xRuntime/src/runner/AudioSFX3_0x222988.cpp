#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSFX3
// Address: 0x222988 - 0x222a50
void AudioSFX3_0x222988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x222988u;

    // 0x222988: 0x27bdffa0
    ctx->pc = 0x222988u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22298c: 0xffbf0040
    ctx->pc = 0x22298cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x222990: 0xffb30030
    ctx->pc = 0x222990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x222994: 0xffb20020
    ctx->pc = 0x222994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x222998: 0xffb10010
    ctx->pc = 0x222998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22299c: 0xffb00000
    ctx->pc = 0x22299cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2229a0: 0xe7b40050
    ctx->pc = 0x2229a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2229a4: 0x80882d
    ctx->pc = 0x2229a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2229a8: 0xa0802d
    ctx->pc = 0x2229a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2229ac: 0xc0902d
    ctx->pc = 0x2229acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2229b0: 0x3c020031
    ctx->pc = 0x2229b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2229b4: 0x8c420018
    ctx->pc = 0x2229b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2229b8: 0x30428000
    ctx->pc = 0x2229b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x2229bc: 0x10400005
    ctx->pc = 0x2229BCu;
    {
        const bool branch_taken_0x2229bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2229C0u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2229bc) {
            ctx->pc = 0x2229D4u;
            goto label_2229d4;
        }
    }
    ctx->pc = 0x2229C4u;
    // 0x2229c4: 0x3c020032
    ctx->pc = 0x2229c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2229c8: 0x8c42fd60
    ctx->pc = 0x2229c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966624)));
    // 0x2229cc: 0x10400018
    ctx->pc = 0x2229CCu;
    {
        const bool branch_taken_0x2229cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2229D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2229cc) {
            ctx->pc = 0x222A30u;
            goto label_222a30;
        }
    }
    ctx->pc = 0x2229D4u;
label_2229d4:
    // 0x2229d4: 0x6200016
    ctx->pc = 0x2229D4u;
    {
        const bool branch_taken_0x2229d4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2229D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2229d4) {
            ctx->pc = 0x222A30u;
            goto label_222a30;
        }
    }
    ctx->pc = 0x2229DCu;
    // 0x2229dc: 0xc088682
    ctx->pc = 0x2229DCu;
    SET_GPR_U32(ctx, 31, 0x2229E4u);
    ctx->pc = 0x2229E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioVolMul_0x221a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2229E4u; }
    }
    if (ctx->pc != 0x2229E4u) { return; }
    ctx->pc = 0x2229E4u;
    // 0x2229e4: 0x46000506
    ctx->pc = 0x2229e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2229e8: 0x44800000
    ctx->pc = 0x2229e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2229ec: 0x4600a036
    ctx->pc = 0x2229ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2229f0: 0x0
    ctx->pc = 0x2229f0u;
    // NOP
    // 0x2229f4: 0x4501000e
    ctx->pc = 0x2229F4u;
    {
        const bool branch_taken_0x2229f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2229F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2229f4) {
            ctx->pc = 0x222A30u;
            goto label_222a30;
        }
    }
    ctx->pc = 0x2229FCu;
    // 0x2229fc: 0xc088648
    ctx->pc = 0x2229FCu;
    SET_GPR_U32(ctx, 31, 0x222A04u);
    ctx->pc = 0x222A00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222A04u; }
    }
    if (ctx->pc != 0x222A04u) { return; }
    ctx->pc = 0x222A04u;
    // 0x222a04: 0x44920000
    ctx->pc = 0x222a04u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 18);
    // 0x222a08: 0x46800020
    ctx->pc = 0x222a08u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x222a0c: 0x46140002
    ctx->pc = 0x222a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x222a10: 0x2404ffff
    ctx->pc = 0x222a10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222a14: 0x220282d
    ctx->pc = 0x222a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a18: 0x46000064
    ctx->pc = 0x222a18u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x222a1c: 0x44060800
    ctx->pc = 0x222a1cu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x222a20: 0x200382d
    ctx->pc = 0x222a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a24: 0x40402d
    ctx->pc = 0x222a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a28: 0xc088958
    ctx->pc = 0x222A28u;
    SET_GPR_U32(ctx, 31, 0x222A30u);
    ctx->pc = 0x222A2Cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x222560u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrack4_0x222560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222A30u; }
    }
    if (ctx->pc != 0x222A30u) { return; }
    ctx->pc = 0x222A30u;
label_222a30:
    // 0x222a30: 0xdfbf0040
    ctx->pc = 0x222a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x222a34: 0xdfb30030
    ctx->pc = 0x222a34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222a38: 0xdfb20020
    ctx->pc = 0x222a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222a3c: 0xdfb10010
    ctx->pc = 0x222a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222a40: 0xdfb00000
    ctx->pc = 0x222a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222a44: 0xc7b40050
    ctx->pc = 0x222a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x222a48: 0x3e00008
    ctx->pc = 0x222A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222A4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2229D4u: goto label_2229d4;
            case 0x222A30u: goto label_222a30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222A50u;
}
