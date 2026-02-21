#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: serialPutchar
// Address: 0x10f3b0 - 0x10f3e4
void serialPutchar_0x10f3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10f3b0u;

    // 0x10f3b0: 0x27bdfff0
    ctx->pc = 0x10f3b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f3b4: 0x2402000a
    ctx->pc = 0x10f3b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x10f3b8: 0x14820007
    ctx->pc = 0x10F3B8u;
    {
        const bool branch_taken_0x10f3b8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x10F3BCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x10f3b8) {
            ctx->pc = 0x10F3D8u;
            goto label_10f3d8;
        }
    }
    ctx->pc = 0x10F3C0u;
    // 0x10f3c0: 0xc043cb2
    ctx->pc = 0x10F3C0u;
    SET_GPR_U32(ctx, 31, 0x10F3C8u);
    ctx->pc = 0x10F3C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x10F2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        kputchar_0x10f2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F3C8u; }
    }
    if (ctx->pc != 0x10F3C8u) { return; }
    ctx->pc = 0x10F3C8u;
    // 0x10f3c8: 0xdfbf0000
    ctx->pc = 0x10f3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f3cc: 0x2404000a
    ctx->pc = 0x10f3ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x10f3d0: 0x8043cb2
    ctx->pc = 0x10F3D0u;
    ctx->pc = 0x10F3D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x10F2C8u;
    kputchar_0x10f2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x10F3D8u;
label_10f3d8:
    // 0x10f3d8: 0xdfbf0000
    ctx->pc = 0x10f3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f3dc: 0x8043cb2
    ctx->pc = 0x10F3DCu;
    ctx->pc = 0x10F3E0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x10F2C8u;
    kputchar_0x10f2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x10F3E4u;
}
