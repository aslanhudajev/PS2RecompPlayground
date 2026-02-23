#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _Error1
// Address: 0x164418 - 0x164444
void ps2__Error1_0x164418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2__Error1");


    ctx->pc = 0x164418u;

    // 0x164418: 0xa0302d
    ctx->pc = 0x164418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16441c: 0x27bdfef0
    ctx->pc = 0x16441cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x164420: 0x80282d
    ctx->pc = 0x164420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164424: 0xffbf0100
    ctx->pc = 0x164424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x164428: 0xc0513ca
    ctx->pc = 0x164428u;
    SET_GPR_U32(ctx, 31, 0x164430u);
    ctx->pc = 0x16442Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x144f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164430u; }
        else if (ctx->pc != 0x164430u) { ctx->pc = 0x164430u; }
    }
    if (ctx->pc != 0x164430u) { return; }
    ctx->pc = 0x164430u;
    // 0x164430: 0xc059112
    ctx->pc = 0x164430u;
    SET_GPR_U32(ctx, 31, 0x164438u);
    ctx->pc = 0x164434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164438u; }
        else if (ctx->pc != 0x164438u) { ctx->pc = 0x164438u; }
    }
    if (ctx->pc != 0x164438u) { return; }
    ctx->pc = 0x164438u;
    // 0x164438: 0xdfbf0100
    ctx->pc = 0x164438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x16443c: 0x3e00008
    ctx->pc = 0x16443Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164440u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164444u;
}
