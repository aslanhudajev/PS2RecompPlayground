#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: supplement_crt0
// Address: 0x15c9d0 - 0x15ca18
void supplement_crt0_0x15c9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("supplement_crt0");


    ctx->pc = 0x15c9d0u;

    // 0x15c9d0: 0x27bdffb0
    ctx->pc = 0x15c9d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15c9d4: 0x24020001
    ctx->pc = 0x15c9d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c9d8: 0xffbf0040
    ctx->pc = 0x15c9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15c9dc: 0x3a0202d
    ctx->pc = 0x15c9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c9e0: 0xafa20028
    ctx->pc = 0x15c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x15c9e4: 0xafa20004
    ctx->pc = 0x15c9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x15c9e8: 0xafa20008
    ctx->pc = 0x15c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x15c9ec: 0xc055238
    ctx->pc = 0x15C9ECu;
    SET_GPR_U32(ctx, 31, 0x15C9F4u);
    ctx->pc = 0x15C9F0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->pc = 0x1548E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x1548e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C9F4u; }
        else if (ctx->pc != 0x15C9F4u) { ctx->pc = 0x15C9F4u; }
    }
    if (ctx->pc != 0x15C9F4u) { return; }
    ctx->pc = 0x15C9F4u;
    // 0x15c9f4: 0x3c030023
    ctx->pc = 0x15c9f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x15c9f8: 0x27a40020
    ctx->pc = 0x15c9f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x15c9fc: 0xc055238
    ctx->pc = 0x15C9FCu;
    SET_GPR_U32(ctx, 31, 0x15CA04u);
    ctx->pc = 0x15CA00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942952), GPR_U32(ctx, 2));
    ctx->pc = 0x1548E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x1548e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA04u; }
        else if (ctx->pc != 0x15CA04u) { ctx->pc = 0x15CA04u; }
    }
    if (ctx->pc != 0x15CA04u) { return; }
    ctx->pc = 0x15CA04u;
    // 0x15ca04: 0x3c030023
    ctx->pc = 0x15ca04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x15ca08: 0xdfbf0040
    ctx->pc = 0x15ca08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15ca0c: 0xac62a0ec
    ctx->pc = 0x15ca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942956), GPR_U32(ctx, 2));
    // 0x15ca10: 0x3e00008
    ctx->pc = 0x15CA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CA14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CA18u;
}
