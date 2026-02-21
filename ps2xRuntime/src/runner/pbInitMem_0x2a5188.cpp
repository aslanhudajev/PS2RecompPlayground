#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitMem
// Address: 0x2a5188 - 0x2a51c0
void pbInitMem_0x2a5188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5188u;

    // 0x2a5188: 0x27bdfff0
    ctx->pc = 0x2a5188u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a518c: 0xffbf0000
    ctx->pc = 0x2a518cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a5190: 0x3c020036
    ctx->pc = 0x2a5190u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a5194: 0x8c43dee0
    ctx->pc = 0x2a5194u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a5198: 0x3c020036
    ctx->pc = 0x2a5198u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a519c: 0x24427fe0
    ctx->pc = 0x2a519cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32736));
    // 0x2a51a0: 0xc0a94aa
    ctx->pc = 0x2A51A0u;
    SET_GPR_U32(ctx, 31, 0x2A51A8u);
    ctx->pc = 0x2A51A4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    ctx->pc = 0x2A52A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSPFreeAll_0x2a52a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A51A8u; }
    }
    if (ctx->pc != 0x2A51A8u) { return; }
    ctx->pc = 0x2A51A8u;
    // 0x2a51a8: 0x3c030036
    ctx->pc = 0x2a51a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2a51ac: 0x24020001
    ctx->pc = 0x2a51acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a51b0: 0xac627f60
    ctx->pc = 0x2a51b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32608), GPR_U32(ctx, 2));
    // 0x2a51b4: 0xdfbf0000
    ctx->pc = 0x2a51b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a51b8: 0x3e00008
    ctx->pc = 0x2A51B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A51BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A51C0u;
}
