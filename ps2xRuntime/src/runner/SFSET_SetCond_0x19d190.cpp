#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFSET_SetCond
// Address: 0x19d190 - 0x19d1dc
void SFSET_SetCond_0x19d190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFSET_SetCond");


    ctx->pc = 0x19d190u;

    // 0x19d190: 0x27bdffc0
    ctx->pc = 0x19d190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19d194: 0xffb20020
    ctx->pc = 0x19d194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19d198: 0xffb10010
    ctx->pc = 0x19d198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19d19c: 0x80902d
    ctx->pc = 0x19d19cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d1a0: 0xffb00000
    ctx->pc = 0x19d1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d1a4: 0xc0882d
    ctx->pc = 0x19d1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d1a8: 0xffbf0030
    ctx->pc = 0x19d1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19d1ac: 0xc067478
    ctx->pc = 0x19D1ACu;
    SET_GPR_U32(ctx, 31, 0x19D1B4u);
    ctx->pc = 0x19D1B0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfset_IsCondValid_0x19d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D1B4u; }
        else if (ctx->pc != 0x19D1B4u) { ctx->pc = 0x19D1B4u; }
    }
    if (ctx->pc != 0x19D1B4u) { return; }
    ctx->pc = 0x19D1B4u;
    // 0x19d1b4: 0x10400003
    ctx->pc = 0x19D1B4u;
    {
        const bool branch_taken_0x19d1b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D1B8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x19d1b4) {
            ctx->pc = 0x19D1C4u;
            goto label_19d1c4;
        }
    }
    ctx->pc = 0x19D1BCu;
    // 0x19d1bc: 0x2421021
    ctx->pc = 0x19d1bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19d1c0: 0xac510994
    ctx->pc = 0x19d1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2452), GPR_U32(ctx, 17));
label_19d1c4:
    // 0x19d1c4: 0xdfbf0030
    ctx->pc = 0x19d1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d1c8: 0xdfb20020
    ctx->pc = 0x19d1c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d1cc: 0xdfb10010
    ctx->pc = 0x19d1ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d1d0: 0xdfb00000
    ctx->pc = 0x19d1d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d1d4: 0x3e00008
    ctx->pc = 0x19D1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D1D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D1C4u: goto label_19d1c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D1DCu;
}
