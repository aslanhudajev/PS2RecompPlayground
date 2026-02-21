#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FindScrollMessageList
// Address: 0x201cc8 - 0x201cf4
void FindScrollMessageList_0x201cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201cc8u;

    // 0x201cc8: 0x27bdfff0
    ctx->pc = 0x201cc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201ccc: 0xffbf0000
    ctx->pc = 0x201cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201cd0: 0x24020044
    ctx->pc = 0x201cd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 68));
    // 0x201cd4: 0x821018
    ctx->pc = 0x201cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x201cd8: 0x3c040031
    ctx->pc = 0x201cd8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x201cdc: 0x2484f6f0
    ctx->pc = 0x201cdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964976));
    // 0x201ce0: 0xc0806f2
    ctx->pc = 0x201CE0u;
    SET_GPR_U32(ctx, 31, 0x201CE8u);
    ctx->pc = 0x201CE4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x201BC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindStringMessageListSub_0x201bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201CE8u; }
    }
    if (ctx->pc != 0x201CE8u) { return; }
    ctx->pc = 0x201CE8u;
    // 0x201ce8: 0xdfbf0000
    ctx->pc = 0x201ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201cec: 0x3e00008
    ctx->pc = 0x201CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201CF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201CF4u;
}
