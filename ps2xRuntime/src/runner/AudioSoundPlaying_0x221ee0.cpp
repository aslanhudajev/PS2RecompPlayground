#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSoundPlaying
// Address: 0x221ee0 - 0x221f90
void AudioSoundPlaying_0x221ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x221ee0u;

    // 0x221ee0: 0x302d
    ctx->pc = 0x221ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ee4: 0x3c020032
    ctx->pc = 0x221ee4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221ee8: 0x2448fe38
    ctx->pc = 0x221ee8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294966840));
    // 0x221eec: 0x24070014
    ctx->pc = 0x221eecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 20));
    // 0x221ef0: 0x3c020032
    ctx->pc = 0x221ef0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221ef4: 0x2449fe40
    ctx->pc = 0x221ef4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x221ef8: 0xc71818
    ctx->pc = 0x221ef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x221efc: 0x0
    ctx->pc = 0x221efcu;
    // NOP
label_221f00:
    // 0x221f00: 0x681021
    ctx->pc = 0x221f00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x221f04: 0x8c420000
    ctx->pc = 0x221f04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221f08: 0x5444001c
    ctx->pc = 0x221F08u;
    {
        const bool branch_taken_0x221f08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x221f08) {
            ctx->pc = 0x221F0Cu;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x221F7Cu;
            goto label_221f7c;
        }
    }
    ctx->pc = 0x221F10u;
    // 0x221f10: 0x3c03003a
    ctx->pc = 0x221f10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x221f14: 0x246522f8
    ctx->pc = 0x221f14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 8952));
    // 0x221f18: 0x8c6222f8
    ctx->pc = 0x221f18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x221f1c: 0x4400006
    ctx->pc = 0x221F1Cu;
    {
        const bool branch_taken_0x221f1c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x221f1c) {
            ctx->pc = 0x221F38u;
            goto label_221f38;
        }
    }
    ctx->pc = 0x221F24u;
    // 0x221f24: 0x8c6222f8
    ctx->pc = 0x221f24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x221f28: 0x44820800
    ctx->pc = 0x221f28u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x221f2c: 0x46800860
    ctx->pc = 0x221f2cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x221f30: 0x1000000a
    ctx->pc = 0x221F30u;
    {
        const bool branch_taken_0x221f30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x221F34u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x221f30) {
            ctx->pc = 0x221F5Cu;
            goto label_221f5c;
        }
    }
    ctx->pc = 0x221F38u;
label_221f38:
    // 0x221f38: 0x8ca30000
    ctx->pc = 0x221f38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x221f3c: 0x30630001
    ctx->pc = 0x221f3cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x221f40: 0x8ca20000
    ctx->pc = 0x221f40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x221f44: 0x21042
    ctx->pc = 0x221f44u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x221f48: 0x621825
    ctx->pc = 0x221f48u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221f4c: 0x44830800
    ctx->pc = 0x221f4cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x221f50: 0x46800860
    ctx->pc = 0x221f50u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x221f54: 0x46010840
    ctx->pc = 0x221f54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x221f58: 0xc71818
    ctx->pc = 0x221f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_221f5c:
    // 0x221f5c: 0x691021
    ctx->pc = 0x221f5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x221f60: 0xc4400000
    ctx->pc = 0x221f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221f64: 0x46000834
    ctx->pc = 0x221f64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221f68: 0x0
    ctx->pc = 0x221f68u;
    // NOP
    // 0x221f6c: 0x45000003
    ctx->pc = 0x221F6Cu;
    {
        const bool branch_taken_0x221f6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221F70u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x221f6c) {
            ctx->pc = 0x221F7Cu;
            goto label_221f7c;
        }
    }
    ctx->pc = 0x221F74u;
    // 0x221f74: 0x3e00008
    ctx->pc = 0x221F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221F78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221F00u: goto label_221f00;
            case 0x221F38u: goto label_221f38;
            case 0x221F5Cu: goto label_221f5c;
            case 0x221F7Cu: goto label_221f7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x221F7Cu;
label_221f7c:
    // 0x221f7c: 0x28c2000c
    ctx->pc = 0x221f7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 12));
    // 0x221f80: 0x1440ffdf
    ctx->pc = 0x221F80u;
    {
        const bool branch_taken_0x221f80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221F84u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x221f80) {
            ctx->pc = 0x221F00u;
            goto label_221f00;
        }
    }
    ctx->pc = 0x221F88u;
    // 0x221f88: 0x3e00008
    ctx->pc = 0x221F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221F8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221F00u: goto label_221f00;
            case 0x221F38u: goto label_221f38;
            case 0x221F5Cu: goto label_221f5c;
            case 0x221F7Cu: goto label_221f7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x221F90u;
}
