#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dtx_create_rmt
// Address: 0x176d40 - 0x176da8
void dtx_create_rmt_0x176d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dtx_create_rmt");


    ctx->pc = 0x176d40u;

    // 0x176d40: 0x27bdffd0
    ctx->pc = 0x176d40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x176d44: 0x3c03002e
    ctx->pc = 0x176d44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x176d48: 0xac64f640
    ctx->pc = 0x176d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964800), GPR_U32(ctx, 4));
    // 0x176d4c: 0x2462f640
    ctx->pc = 0x176d4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294964800));
    // 0x176d50: 0xffb00010
    ctx->pc = 0x176d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x176d54: 0x3c040024
    ctx->pc = 0x176d54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x176d58: 0xffbf0020
    ctx->pc = 0x176d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x176d5c: 0x3c10002e
    ctx->pc = 0x176d5cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)46 << 16));
    // 0x176d60: 0xac450004
    ctx->pc = 0x176d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x176d64: 0x2609f740
    ctx->pc = 0x176d64u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 4294965056));
    // 0x176d68: 0xac460008
    ctx->pc = 0x176d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x176d6c: 0x24848ff0
    ctx->pc = 0x176d6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938608));
    // 0x176d70: 0xac47000c
    ctx->pc = 0x176d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x176d74: 0x24050002
    ctx->pc = 0x176d74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x176d78: 0x40382d
    ctx->pc = 0x176d78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d7c: 0xafa00000
    ctx->pc = 0x176d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x176d80: 0x302d
    ctx->pc = 0x176d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d84: 0x24080010
    ctx->pc = 0x176d84u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x176d88: 0x240a0004
    ctx->pc = 0x176d88u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x176d8c: 0xc055e72
    ctx->pc = 0x176D8Cu;
    SET_GPR_U32(ctx, 31, 0x176D94u);
    ctx->pc = 0x176D90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1579C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x1579c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D94u; }
        else if (ctx->pc != 0x176D94u) { ctx->pc = 0x176D94u; }
    }
    if (ctx->pc != 0x176D94u) { return; }
    ctx->pc = 0x176D94u;
    // 0x176d94: 0x8e02f740
    ctx->pc = 0x176d94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294965056)));
    // 0x176d98: 0xdfbf0020
    ctx->pc = 0x176d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176d9c: 0xdfb00010
    ctx->pc = 0x176d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176da0: 0x3e00008
    ctx->pc = 0x176DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176DA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176DA8u;
}
