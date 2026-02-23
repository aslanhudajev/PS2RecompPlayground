#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDofSetRangeNF
// Address: 0x1a58d0 - 0x1a59a0
void nlDofSetRangeNF_0x1a58d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDofSetRangeNF");


    ctx->pc = 0x1a58d0u;

    // 0x1a58d0: 0x8f8489fc
    ctx->pc = 0x1a58d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
    // 0x1a58d4: 0x8f8389f4
    ctx->pc = 0x1a58d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x1a58d8: 0x460c6841
    ctx->pc = 0x1a58d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x1a58dc: 0x24050001
    ctx->pc = 0x1a58dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a58e0: 0x24060004
    ctx->pc = 0x1a58e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a58e4: 0x2484ffff
    ctx->pc = 0x1a58e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a58e8: 0x44840000
    ctx->pc = 0x1a58e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x1a58ec: 0xe46d0000
    ctx->pc = 0x1a58ecu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1a58f0: 0x46800020
    ctx->pc = 0x1a58f0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1a58f4: 0x46000843
    ctx->pc = 0x1a58f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1a58f8: 0x0
    ctx->pc = 0x1a58f8u;
    // NOP
    // 0x1a58fc: 0x0
    ctx->pc = 0x1a58fcu;
    // NOP
    // 0x1a5900: 0x10000009
    ctx->pc = 0x1A5900u;
    {
        const bool branch_taken_0x1a5900 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5900) {
            ctx->pc = 0x1A5928u;
            goto label_1a5928;
        }
    }
    ctx->pc = 0x1A5908u;
label_1a5908:
    // 0x1a5908: 0x8f8389f4
    ctx->pc = 0x1a5908u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x1a590c: 0x24a50001
    ctx->pc = 0x1a590cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a5910: 0x661821
    ctx->pc = 0x1a5910u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a5914: 0xc460fffc
    ctx->pc = 0x1a5914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5918: 0x24c60004
    ctx->pc = 0x1a5918u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x1a591c: 0x46010001
    ctx->pc = 0x1a591cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a5920: 0xe4600000
    ctx->pc = 0x1a5920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1a5924: 0x0
    ctx->pc = 0x1a5924u;
    // NOP
label_1a5928:
    // 0x1a5928: 0x8f8489fc
    ctx->pc = 0x1a5928u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
    // 0x1a592c: 0xa4182a
    ctx->pc = 0x1a592cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
    // 0x1a5930: 0x1460fff5
    ctx->pc = 0x1A5930u;
    {
        const bool branch_taken_0x1a5930 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a5930) {
            ctx->pc = 0x1A5908u;
            goto label_1a5908;
        }
    }
    ctx->pc = 0x1A5938u;
    // 0x1a5938: 0x2484ffff
    ctx->pc = 0x1a5938u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a593c: 0x44840000
    ctx->pc = 0x1a593cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x1a5940: 0x8f8389f8
    ctx->pc = 0x1a5940u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937080)));
    // 0x1a5944: 0x46800020
    ctx->pc = 0x1a5944u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1a5948: 0x24050001
    ctx->pc = 0x1a5948u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a594c: 0x24040004
    ctx->pc = 0x1a594cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a5950: 0xe46e0000
    ctx->pc = 0x1a5950u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1a5954: 0x460e7841
    ctx->pc = 0x1a5954u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[14]);
    // 0x1a5958: 0x46000843
    ctx->pc = 0x1a5958u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1a595c: 0x0
    ctx->pc = 0x1a595cu;
    // NOP
    // 0x1a5960: 0x0
    ctx->pc = 0x1a5960u;
    // NOP
    // 0x1a5964: 0x10000008
    ctx->pc = 0x1A5964u;
    {
        const bool branch_taken_0x1a5964 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5964) {
            ctx->pc = 0x1A5988u;
            goto label_1a5988;
        }
    }
    ctx->pc = 0x1A596Cu;
label_1a596c:
    // 0x1a596c: 0x8f8389f8
    ctx->pc = 0x1a596cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937080)));
    // 0x1a5970: 0x24a50001
    ctx->pc = 0x1a5970u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a5974: 0x641821
    ctx->pc = 0x1a5974u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a5978: 0xc460fffc
    ctx->pc = 0x1a5978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a597c: 0x24840004
    ctx->pc = 0x1a597cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x1a5980: 0x46000800
    ctx->pc = 0x1a5980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a5984: 0xe4600000
    ctx->pc = 0x1a5984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1a5988:
    // 0x1a5988: 0x8f8389fc
    ctx->pc = 0x1a5988u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
    // 0x1a598c: 0xa3182a
    ctx->pc = 0x1a598cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x1a5990: 0x1460fff6
    ctx->pc = 0x1A5990u;
    {
        const bool branch_taken_0x1a5990 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a5990) {
            ctx->pc = 0x1A596Cu;
            goto label_1a596c;
        }
    }
    ctx->pc = 0x1A5998u;
    // 0x1a5998: 0x3e00008
    ctx->pc = 0x1A5998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5908u: goto label_1a5908;
            case 0x1A5928u: goto label_1a5928;
            case 0x1A596Cu: goto label_1a596c;
            case 0x1A5988u: goto label_1a5988;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A59A0u;
}
