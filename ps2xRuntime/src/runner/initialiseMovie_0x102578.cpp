#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: initialiseMovie
// Address: 0x102578 - 0x1025cc
void initialiseMovie_0x102578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102578u;

    // 0x102578: 0x27bdfff0
    ctx->pc = 0x102578u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10257c: 0x24040040
    ctx->pc = 0x10257cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
    // 0x102580: 0xffbf0000
    ctx->pc = 0x102580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102584: 0xc04a90c
    ctx->pc = 0x102584u;
    SET_GPR_U32(ctx, 31, 0x10258Cu);
    ctx->pc = 0x102588u;
    SET_GPR_U32(ctx, 5, ((uint32_t)192 << 16));
    ctx->pc = 0x12A430u;
    {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x12a430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10258Cu; }
    }
    if (ctx->pc != 0x10258Cu) { return; }
    ctx->pc = 0x10258Cu;
    // 0x10258c: 0x14400006
    ctx->pc = 0x10258Cu;
    {
        const bool branch_taken_0x10258c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x102590u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934712), GPR_U32(ctx, 2));
        if (branch_taken_0x10258c) {
            ctx->pc = 0x1025A8u;
            goto label_1025a8;
        }
    }
    ctx->pc = 0x102594u;
    // 0x102594: 0x3c040017
    ctx->pc = 0x102594u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x102598: 0xc04ace4
    ctx->pc = 0x102598u;
    SET_GPR_U32(ctx, 31, 0x1025A0u);
    ctx->pc = 0x10259Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11816));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1025A0u; }
    }
    if (ctx->pc != 0x1025A0u) { return; }
    ctx->pc = 0x1025A0u;
    // 0x1025a0: 0xc049d20
    ctx->pc = 0x1025A0u;
    SET_GPR_U32(ctx, 31, 0x1025A8u);
    ctx->pc = 0x1025A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x127480u;
    {
        const uint32_t __entryPc = ctx->pc;
        exit_0x127480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1025A8u; }
    }
    if (ctx->pc != 0x1025A8u) { return; }
    ctx->pc = 0x1025A8u;
label_1025a8:
    // 0x1025a8: 0x3c040017
    ctx->pc = 0x1025a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1025ac: 0x40282d
    ctx->pc = 0x1025acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025b0: 0xc04ace4
    ctx->pc = 0x1025B0u;
    SET_GPR_U32(ctx, 31, 0x1025B8u);
    ctx->pc = 0x1025B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11848));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1025B8u; }
    }
    if (ctx->pc != 0x1025B8u) { return; }
    ctx->pc = 0x1025B8u;
    // 0x1025b8: 0x8f8480b8
    ctx->pc = 0x1025b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934712)));
    // 0x1025bc: 0x3c0500c0
    ctx->pc = 0x1025bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)192 << 16));
    // 0x1025c0: 0xdfbf0000
    ctx->pc = 0x1025c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1025c4: 0x80462c6
    ctx->pc = 0x1025C4u;
    ctx->pc = 0x1025C8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x118B18u;
    movplayInit_0x118b18(rdram, ctx, runtime); return;
    ctx->pc = 0x1025CCu;
}
