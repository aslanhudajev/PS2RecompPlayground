#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalForceFloat
// Address: 0x2b4938 - 0x2b49ac
void evalForceFloat_0x2b4938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4938u;

    // 0x2b4938: 0x27bdffd0
    ctx->pc = 0x2b4938u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b493c: 0xffbf0020
    ctx->pc = 0x2b493cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b4940: 0xffb10010
    ctx->pc = 0x2b4940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b4944: 0xffb00000
    ctx->pc = 0x2b4944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4948: 0x80882d
    ctx->pc = 0x2b4948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b494c: 0x3c100037
    ctx->pc = 0x2b494cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
    // 0x2b4950: 0x8e0220b0
    ctx->pc = 0x2b4950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8368)));
    // 0x2b4954: 0x3c03ffff
    ctx->pc = 0x2b4954u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2b4958: 0x3463fff1
    ctx->pc = 0x2b4958u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65521));
    // 0x2b495c: 0x431024
    ctx->pc = 0x2b495cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b4960: 0xc0ad1d2
    ctx->pc = 0x2B4960u;
    SET_GPR_U32(ctx, 31, 0x2B4968u);
    ctx->pc = 0x2B4964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8368), GPR_U32(ctx, 2));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4968u; }
    }
    if (ctx->pc != 0x2B4968u) { return; }
    ctx->pc = 0x2B4968u;
    // 0x2b4968: 0xc0be822
    ctx->pc = 0x2B4968u;
    SET_GPR_U32(ctx, 31, 0x2B4970u);
    ctx->pc = 0x2B496Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2FA088u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2fa088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4970u; }
    }
    if (ctx->pc != 0x2B4970u) { return; }
    ctx->pc = 0x2B4970u;
    // 0x2b4970: 0xae220010
    ctx->pc = 0x2b4970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2b4974: 0x8e0220b0
    ctx->pc = 0x2b4974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8368)));
    // 0x2b4978: 0x3042000e
    ctx->pc = 0x2b4978u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 14));
    // 0x2b497c: 0x10400004
    ctx->pc = 0x2B497Cu;
    {
        const bool branch_taken_0x2b497c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4980u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b497c) {
            ctx->pc = 0x2B4990u;
            goto label_2b4990;
        }
    }
    ctx->pc = 0x2B4984u;
    // 0x2b4984: 0xae220000
    ctx->pc = 0x2b4984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2b4988: 0x10000003
    ctx->pc = 0x2B4988u;
    {
        const bool branch_taken_0x2b4988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B498Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b4988) {
            ctx->pc = 0x2B4998u;
            goto label_2b4998;
        }
    }
    ctx->pc = 0x2B4990u;
label_2b4990:
    // 0x2b4990: 0xae200000
    ctx->pc = 0x2b4990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2b4994: 0x102d
    ctx->pc = 0x2b4994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4998:
    // 0x2b4998: 0xdfbf0020
    ctx->pc = 0x2b4998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b499c: 0xdfb10010
    ctx->pc = 0x2b499cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b49a0: 0xdfb00000
    ctx->pc = 0x2b49a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b49a4: 0x3e00008
    ctx->pc = 0x2B49A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B49A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4990u: goto label_2b4990;
            case 0x2B4998u: goto label_2b4998;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B49ACu;
}
