#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: calcMatrices
// Address: 0x2abd78 - 0x2abdd4
void calcMatrices_0x2abd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2abd78u;

    // 0x2abd78: 0x27bdffe0
    ctx->pc = 0x2abd78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2abd7c: 0xffbf0010
    ctx->pc = 0x2abd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2abd80: 0xffb00000
    ctx->pc = 0x2abd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2abd84: 0x3c020036
    ctx->pc = 0x2abd84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2abd88: 0x8c50dee0
    ctx->pc = 0x2abd88u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2abd8c: 0x8e060004
    ctx->pc = 0x2abd8cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abd90: 0x24c40290
    ctx->pc = 0x2abd90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 656));
    // 0x2abd94: 0x24c50090
    ctx->pc = 0x2abd94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 144));
    // 0x2abd98: 0xc0b94f0
    ctx->pc = 0x2ABD98u;
    SET_GPR_U32(ctx, 31, 0x2ABDA0u);
    ctx->pc = 0x2ABD9Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 528));
    ctx->pc = 0x2E53C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0MulMatrix_0x2e53c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABDA0u; }
    }
    if (ctx->pc != 0x2ABDA0u) { return; }
    ctx->pc = 0x2ABDA0u;
    // 0x2abda0: 0x8e060004
    ctx->pc = 0x2abda0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abda4: 0x24c402d0
    ctx->pc = 0x2abda4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 720));
    // 0x2abda8: 0x24c500d0
    ctx->pc = 0x2abda8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 208));
    // 0x2abdac: 0xc0b94f0
    ctx->pc = 0x2ABDACu;
    SET_GPR_U32(ctx, 31, 0x2ABDB4u);
    ctx->pc = 0x2ABDB0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 656));
    ctx->pc = 0x2E53C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0MulMatrix_0x2e53c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABDB4u; }
    }
    if (ctx->pc != 0x2ABDB4u) { return; }
    ctx->pc = 0x2ABDB4u;
    // 0x2abdb4: 0x8e060004
    ctx->pc = 0x2abdb4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abdb8: 0x24c40310
    ctx->pc = 0x2abdb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 784));
    // 0x2abdbc: 0x24c50150
    ctx->pc = 0x2abdbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 336));
    // 0x2abdc0: 0x24c60290
    ctx->pc = 0x2abdc0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 656));
    // 0x2abdc4: 0xdfbf0010
    ctx->pc = 0x2abdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abdc8: 0xdfb00000
    ctx->pc = 0x2abdc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abdcc: 0x80b94f0
    ctx->pc = 0x2ABDCCu;
    ctx->pc = 0x2ABDD0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2E53C0u;
    sceVu0MulMatrix_0x2e53c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2ABDD4u;
}
