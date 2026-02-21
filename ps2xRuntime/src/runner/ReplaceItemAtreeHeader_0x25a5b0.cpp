#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ReplaceItemAtreeHeader
// Address: 0x25a5b0 - 0x25a60c
void ReplaceItemAtreeHeader_0x25a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25a5b0u;

    // 0x25a5b0: 0x27bdffd0
    ctx->pc = 0x25a5b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25a5b4: 0xffbf0020
    ctx->pc = 0x25a5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25a5b8: 0xffb10010
    ctx->pc = 0x25a5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25a5bc: 0xffb00000
    ctx->pc = 0x25a5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25a5c0: 0x80802d
    ctx->pc = 0x25a5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a5c4: 0x8e020080
    ctx->pc = 0x25a5c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x25a5c8: 0x10400003
    ctx->pc = 0x25A5C8u;
    {
        const bool branch_taken_0x25a5c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A5CCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a5c8) {
            ctx->pc = 0x25A5D8u;
            goto label_25a5d8;
        }
    }
    ctx->pc = 0x25A5D0u;
    // 0x25a5d0: 0xc08496c
    ctx->pc = 0x25A5D0u;
    SET_GPR_U32(ctx, 31, 0x25A5D8u);
    ctx->pc = 0x25A5D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 128));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A5D8u; }
    }
    if (ctx->pc != 0x25A5D8u) { return; }
    ctx->pc = 0x25A5D8u;
label_25a5d8:
    // 0x25a5d8: 0x220202d
    ctx->pc = 0x25a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a5dc: 0x26050080
    ctx->pc = 0x25a5dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 128));
    // 0x25a5e0: 0x302d
    ctx->pc = 0x25a5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a5e4: 0xc08476a
    ctx->pc = 0x25A5E4u;
    SET_GPR_U32(ctx, 31, 0x25A5ECu);
    ctx->pc = 0x25A5E8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x211DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInit_0x211da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A5ECu; }
    }
    if (ctx->pc != 0x25A5ECu) { return; }
    ctx->pc = 0x25A5ECu;
    // 0x25a5ec: 0xae020080
    ctx->pc = 0x25a5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x25a5f0: 0x8c440000
    ctx->pc = 0x25a5f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a5f4: 0x8e050070
    ctx->pc = 0x25a5f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x25a5f8: 0xdfbf0020
    ctx->pc = 0x25a5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a5fc: 0xdfb10010
    ctx->pc = 0x25a5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a600: 0xdfb00000
    ctx->pc = 0x25a600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a604: 0x80b3f94
    ctx->pc = 0x25A604u;
    ctx->pc = 0x25A608u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2CFE50u;
    MBNodeSetParent_0x2cfe50(rdram, ctx, runtime); return;
    ctx->pc = 0x25A60Cu;
}
