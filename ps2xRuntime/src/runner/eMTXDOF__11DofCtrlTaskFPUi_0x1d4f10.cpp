#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eMTXDOF__11DofCtrlTaskFPUi
// Address: 0x1d4f10 - 0x1d4f80
void eMTXDOF__11DofCtrlTaskFPUi_0x1d4f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eMTXDOF__11DofCtrlTaskFPUi");


    ctx->pc = 0x1d4f10u;

    // 0x1d4f10: 0x27bdffd0
    ctx->pc = 0x1d4f10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d4f14: 0x7fbf0020
    ctx->pc = 0x1d4f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1d4f18: 0x7fb10010
    ctx->pc = 0x1d4f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d4f1c: 0x7fb00000
    ctx->pc = 0x1d4f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4f20: 0x8cb00008
    ctx->pc = 0x1d4f20u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d4f24: 0x3c020026
    ctx->pc = 0x1d4f24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1d4f28: 0x24425f40
    ctx->pc = 0x1d4f28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 24384));
    // 0x1d4f2c: 0x8e030000
    ctx->pc = 0x1d4f2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d4f30: 0x31880
    ctx->pc = 0x1d4f30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d4f34: 0x431021
    ctx->pc = 0x1d4f34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4f38: 0x8c440000
    ctx->pc = 0x1d4f38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4f3c: 0xc069670
    ctx->pc = 0x1D4F3Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F44u);
    ctx->pc = 0x1D4F40u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A59C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDofSetMatrix_0x1a59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F44u; }
        else if (ctx->pc != 0x1D4F44u) { ctx->pc = 0x1D4F44u; }
    }
    if (ctx->pc != 0x1D4F44u) { return; }
    ctx->pc = 0x1D4F44u;
    // 0x1d4f44: 0xc60c0004
    ctx->pc = 0x1d4f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d4f48: 0x3c024000
    ctx->pc = 0x1d4f48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1d4f4c: 0x44820000
    ctx->pc = 0x1d4f4cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1d4f50: 0x0
    ctx->pc = 0x1d4f50u;
    // NOP
    // 0x1d4f54: 0x46006343
    ctx->pc = 0x1d4f54u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[13] = ctx->f[12] / ctx->f[0];
    // 0x1d4f58: 0x0
    ctx->pc = 0x1d4f58u;
    // NOP
    // 0x1d4f5c: 0x0
    ctx->pc = 0x1d4f5cu;
    // NOP
    // 0x1d4f60: 0xc069690
    ctx->pc = 0x1D4F60u;
    SET_GPR_U32(ctx, 31, 0x1D4F68u);
    ctx->pc = 0x1A5A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDofSetScale_0x1a5a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F68u; }
        else if (ctx->pc != 0x1D4F68u) { ctx->pc = 0x1D4F68u; }
    }
    if (ctx->pc != 0x1D4F68u) { return; }
    ctx->pc = 0x1D4F68u;
    // 0x1d4f68: 0x2622000c
    ctx->pc = 0x1d4f68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 12));
    // 0x1d4f6c: 0x7bbf0020
    ctx->pc = 0x1d4f6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4f70: 0x7bb10010
    ctx->pc = 0x1d4f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4f74: 0x7bb00000
    ctx->pc = 0x1d4f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4f78: 0x3e00008
    ctx->pc = 0x1D4F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4F7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4F80u;
}
