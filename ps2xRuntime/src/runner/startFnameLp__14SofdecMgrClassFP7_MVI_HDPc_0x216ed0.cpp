#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: startFnameLp__14SofdecMgrClassFP7_MVI_HDPc
// Address: 0x216ed0 - 0x216ef0
void startFnameLp__14SofdecMgrClassFP7_MVI_HDPc_0x216ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("startFnameLp__14SofdecMgrClassFP7_MVI_HDPc");


    ctx->pc = 0x216ed0u;

    // 0x216ed0: 0x27bdfff0
    ctx->pc = 0x216ed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216ed4: 0x7fbf0000
    ctx->pc = 0x216ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x216ed8: 0x8ca40000
    ctx->pc = 0x216ed8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216edc: 0xc06392e
    ctx->pc = 0x216EDCu;
    SET_GPR_U32(ctx, 31, 0x216EE4u);
    ctx->pc = 0x216EE0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x18E4B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyStartFnameLp_0x18e4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216EE4u; }
        else if (ctx->pc != 0x216EE4u) { ctx->pc = 0x216EE4u; }
    }
    if (ctx->pc != 0x216EE4u) { return; }
    ctx->pc = 0x216EE4u;
    // 0x216ee4: 0x7bbf0000
    ctx->pc = 0x216ee4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216ee8: 0x3e00008
    ctx->pc = 0x216EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216EECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x216EF0u;
}
