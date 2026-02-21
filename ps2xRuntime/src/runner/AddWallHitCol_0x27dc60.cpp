#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddWallHitCol
// Address: 0x27dc60 - 0x27dcc8
void AddWallHitCol_0x27dc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27dc60u;

    // 0x27dc60: 0x27bdffd0
    ctx->pc = 0x27dc60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27dc64: 0xffbf0020
    ctx->pc = 0x27dc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27dc68: 0xffb10010
    ctx->pc = 0x27dc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27dc6c: 0xffb00000
    ctx->pc = 0x27dc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27dc70: 0x80882d
    ctx->pc = 0x27dc70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc74: 0x30a5000f
    ctx->pc = 0x27dc74u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 15));
    // 0x27dc78: 0x3c020034
    ctx->pc = 0x27dc78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27dc7c: 0x24420d68
    ctx->pc = 0x27dc7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3432));
    // 0x27dc80: 0x52880
    ctx->pc = 0x27dc80u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x27dc84: 0xa22821
    ctx->pc = 0x27dc84u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27dc88: 0x8ca40000
    ctx->pc = 0x27dc88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27dc8c: 0x220282d
    ctx->pc = 0x27dc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc90: 0x44806000
    ctx->pc = 0x27dc90u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27dc94: 0x302d
    ctx->pc = 0x27dc94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc98: 0xc09f5fa
    ctx->pc = 0x27DC98u;
    SET_GPR_U32(ctx, 31, 0x27DCA0u);
    ctx->pc = 0x27DC9Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2176));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DCA0u; }
    }
    if (ctx->pc != 0x27DCA0u) { return; }
    ctx->pc = 0x27DCA0u;
    // 0x27dca0: 0x40802d
    ctx->pc = 0x27dca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dca4: 0x24040005
    ctx->pc = 0x27dca4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x27dca8: 0xc097f3c
    ctx->pc = 0x27DCA8u;
    SET_GPR_U32(ctx, 31, 0x27DCB0u);
    ctx->pc = 0x27DCACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25FCF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioEffect_0x25fcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DCB0u; }
    }
    if (ctx->pc != 0x27DCB0u) { return; }
    ctx->pc = 0x27DCB0u;
    // 0x27dcb0: 0x200102d
    ctx->pc = 0x27dcb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dcb4: 0xdfbf0020
    ctx->pc = 0x27dcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27dcb8: 0xdfb10010
    ctx->pc = 0x27dcb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27dcbc: 0xdfb00000
    ctx->pc = 0x27dcbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27dcc0: 0x3e00008
    ctx->pc = 0x27DCC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DCC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27DCC8u;
}
