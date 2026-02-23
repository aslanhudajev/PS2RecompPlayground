#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFUO_ExecServer
// Address: 0x19f4d0 - 0x19f514
void SFUO_ExecServer_0x19f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFUO_ExecServer");


    ctx->pc = 0x19f4d0u;

    // 0x19f4d0: 0x27bdffd0
    ctx->pc = 0x19f4d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f4d4: 0xffb00000
    ctx->pc = 0x19f4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f4d8: 0xffb10010
    ctx->pc = 0x19f4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f4dc: 0xffbf0020
    ctx->pc = 0x19f4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f4e0: 0xc067d46
    ctx->pc = 0x19F4E0u;
    SET_GPR_U32(ctx, 31, 0x19F4E8u);
    ctx->pc = 0x19F4E4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfuo_ChkTermFlg_0x19f518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F4E8u; }
        else if (ctx->pc != 0x19F4E8u) { ctx->pc = 0x19F4E8u; }
    }
    if (ctx->pc != 0x19F4E8u) { return; }
    ctx->pc = 0x19F4E8u;
    // 0x19f4e8: 0xc067d86
    ctx->pc = 0x19F4E8u;
    SET_GPR_U32(ctx, 31, 0x19F4F0u);
    ctx->pc = 0x19F4ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F618u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfuo_OutputServer_0x19f618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F4F0u; }
        else if (ctx->pc != 0x19F4F0u) { ctx->pc = 0x19F4F0u; }
    }
    if (ctx->pc != 0x19F4F0u) { return; }
    ctx->pc = 0x19F4F0u;
    // 0x19f4f0: 0x40882d
    ctx->pc = 0x19f4f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4f4: 0xc067d66
    ctx->pc = 0x19F4F4u;
    SET_GPR_U32(ctx, 31, 0x19F4FCu);
    ctx->pc = 0x19F4F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F598u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfuo_ChkPrepFlg_0x19f598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F4FCu; }
        else if (ctx->pc != 0x19F4FCu) { ctx->pc = 0x19F4FCu; }
    }
    if (ctx->pc != 0x19F4FCu) { return; }
    ctx->pc = 0x19F4FCu;
    // 0x19f4fc: 0x220102d
    ctx->pc = 0x19f4fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f500: 0xdfbf0020
    ctx->pc = 0x19f500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f504: 0xdfb10010
    ctx->pc = 0x19f504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f508: 0xdfb00000
    ctx->pc = 0x19f508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f50c: 0x3e00008
    ctx->pc = 0x19F50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F510u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F514u;
}
