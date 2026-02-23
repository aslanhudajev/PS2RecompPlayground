#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_Init
// Address: 0x19fa50 - 0x19faa4
void SFH_Init_0x19fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_Init");


    ctx->pc = 0x19fa50u;

    // 0x19fa50: 0x27bdffd0
    ctx->pc = 0x19fa50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19fa54: 0xffb10010
    ctx->pc = 0x19fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19fa58: 0xffb00000
    ctx->pc = 0x19fa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19fa5c: 0xa0882d
    ctx->pc = 0x19fa5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa60: 0xffbf0020
    ctx->pc = 0x19fa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19fa64: 0xc067e90
    ctx->pc = 0x19FA64u;
    SET_GPR_U32(ctx, 31, 0x19FA6Cu);
    ctx->pc = 0x19FA68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19FA40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFH_GetSbverStr_0x19fa40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA6Cu; }
        else if (ctx->pc != 0x19FA6Cu) { ctx->pc = 0x19FA6Cu; }
    }
    if (ctx->pc != 0x19FA6Cu) { return; }
    ctx->pc = 0x19FA6Cu;
    // 0x19fa6c: 0x3c030030
    ctx->pc = 0x19fa6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x19fa70: 0x200202d
    ctx->pc = 0x19fa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa74: 0x220282d
    ctx->pc = 0x19fa74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa78: 0xc067f00
    ctx->pc = 0x19FA78u;
    SET_GPR_U32(ctx, 31, 0x19FA80u);
    ctx->pc = 0x19FA7Cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8400), GPR_U32(ctx, 2));
    ctx->pc = 0x19FC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        initLibWork_0x19fc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA80u; }
        else if (ctx->pc != 0x19FA80u) { ctx->pc = 0x19FA80u; }
    }
    if (ctx->pc != 0x19FA80u) { return; }
    ctx->pc = 0x19FA80u;
    // 0x19fa80: 0x200282d
    ctx->pc = 0x19fa80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa84: 0x220302d
    ctx->pc = 0x19fa84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa88: 0x3c040030
    ctx->pc = 0x19fa88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)48 << 16));
    // 0x19fa8c: 0xdfbf0020
    ctx->pc = 0x19fa8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fa90: 0xdfb10010
    ctx->pc = 0x19fa90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fa94: 0x248420d8
    ctx->pc = 0x19fa94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8408));
    // 0x19fa98: 0xdfb00000
    ctx->pc = 0x19fa98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fa9c: 0x8067ef0
    ctx->pc = 0x19FA9Cu;
    ctx->pc = 0x19FAA0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x19FBC0u;
    initObjInf_0x19fbc0(rdram, ctx, runtime); return;
    ctx->pc = 0x19FAA4u;
}
