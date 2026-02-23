#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlaGetCreditData
// Address: 0x1c7c00 - 0x1c7c84
void nlaGetCreditData_0x1c7c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlaGetCreditData");


    ctx->pc = 0x1c7c00u;

    // 0x1c7c00: 0x27bdffe0
    ctx->pc = 0x1c7c00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7c04: 0x7fbf0010
    ctx->pc = 0x1c7c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c7c08: 0x3c020030
    ctx->pc = 0x1c7c08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c7c0c: 0x7fb00000
    ctx->pc = 0x1c7c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7c10: 0x24455c18
    ctx->pc = 0x1c7c10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 23576));
    // 0x1c7c14: 0x90a30000
    ctx->pc = 0x1c7c14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c7c18: 0x70808628
    ctx->pc = 0x1c7c18u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c7c1c: 0x3c020050
    ctx->pc = 0x1c7c1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1c7c20: 0xac830000
    ctx->pc = 0x1c7c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1c7c24: 0x90a30003
    ctx->pc = 0x1c7c24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1c7c28: 0xac830004
    ctx->pc = 0x1c7c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1c7c2c: 0x90a30004
    ctx->pc = 0x1c7c2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c7c30: 0xac830008
    ctx->pc = 0x1c7c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1c7c34: 0x90a30007
    ctx->pc = 0x1c7c34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x1c7c38: 0xac83000c
    ctx->pc = 0x1c7c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1c7c3c: 0xc0750bc
    ctx->pc = 0x1C7C3Cu;
    SET_GPR_U32(ctx, 31, 0x1C7C44u);
    ctx->pc = 0x1C7C40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
    ctx->pc = 0x1D42F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        IsFreePlay__11CreditClassFv_0x1d42f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C44u; }
        else if (ctx->pc != 0x1C7C44u) { ctx->pc = 0x1C7C44u; }
    }
    if (ctx->pc != 0x1C7C44u) { return; }
    ctx->pc = 0x1C7C44u;
    // 0x1c7c44: 0x24030001
    ctx->pc = 0x1c7c44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7c48: 0x2180a
    ctx->pc = 0x1c7c48u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x1c7c4c: 0xae030020
    ctx->pc = 0x1c7c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1c7c50: 0xae000024
    ctx->pc = 0x1c7c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c7c54: 0x24030001
    ctx->pc = 0x1c7c54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7c58: 0xae030028
    ctx->pc = 0x1c7c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1c7c5c: 0x3c01002d
    ctx->pc = 0x1c7c5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)45 << 16));
    // 0x1c7c60: 0x8c2359c8
    ctx->pc = 0x1c7c60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 22984)));
    // 0x1c7c64: 0xae03002c
    ctx->pc = 0x1c7c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1c7c68: 0x3c01002d
    ctx->pc = 0x1c7c68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)45 << 16));
    // 0x1c7c6c: 0x8c2359cc
    ctx->pc = 0x1c7c6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 22988)));
    // 0x1c7c70: 0xae030030
    ctx->pc = 0x1c7c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x1c7c74: 0x7bbf0010
    ctx->pc = 0x1c7c74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7c78: 0x7bb00000
    ctx->pc = 0x1c7c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7c7c: 0x3e00008
    ctx->pc = 0x1C7C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7C80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7C84u;
}
