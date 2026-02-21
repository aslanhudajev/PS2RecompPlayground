#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: serialPutchar
// Address: 0x304990 - 0x3049c4
void serialPutchar_0x304990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x304990u;

    // 0x304990: 0x27bdfff0
    ctx->pc = 0x304990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304994: 0x2402000a
    ctx->pc = 0x304994u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x304998: 0x14820007
    ctx->pc = 0x304998u;
    {
        const bool branch_taken_0x304998 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x30499Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x304998) {
            ctx->pc = 0x3049B8u;
            goto label_3049b8;
        }
    }
    ctx->pc = 0x3049A0u;
    // 0x3049a0: 0xc0c122a
    ctx->pc = 0x3049A0u;
    SET_GPR_U32(ctx, 31, 0x3049A8u);
    ctx->pc = 0x3049A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x3048A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        kputchar_0x3048a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3049A8u; }
    }
    if (ctx->pc != 0x3049A8u) { return; }
    ctx->pc = 0x3049A8u;
    // 0x3049a8: 0xdfbf0000
    ctx->pc = 0x3049a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3049ac: 0x2404000a
    ctx->pc = 0x3049acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x3049b0: 0x80c122a
    ctx->pc = 0x3049B0u;
    ctx->pc = 0x3049B4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x3048A8u;
    kputchar_0x3048a8(rdram, ctx, runtime); return;
    ctx->pc = 0x3049B8u;
label_3049b8:
    // 0x3049b8: 0xdfbf0000
    ctx->pc = 0x3049b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3049bc: 0x80c122a
    ctx->pc = 0x3049BCu;
    ctx->pc = 0x3049C0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x3048A8u;
    kputchar_0x3048a8(rdram, ctx, runtime); return;
    ctx->pc = 0x3049C4u;
}
