#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: initialiseMem
// Address: 0x108178 - 0x1081cc
void initialiseMem_0x108178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108178u;

    // 0x108178: 0x27bdfff0
    ctx->pc = 0x108178u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10817c: 0x24040040
    ctx->pc = 0x10817cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
    // 0x108180: 0xffbf0000
    ctx->pc = 0x108180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108184: 0xc04a90c
    ctx->pc = 0x108184u;
    SET_GPR_U32(ctx, 31, 0x10818Cu);
    ctx->pc = 0x108188u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32 << 16));
    ctx->pc = 0x12A430u;
    {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x12a430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10818Cu; }
    }
    if (ctx->pc != 0x10818Cu) { return; }
    ctx->pc = 0x10818Cu;
    // 0x10818c: 0x14400006
    ctx->pc = 0x10818Cu;
    {
        const bool branch_taken_0x10818c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x108190u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934712), GPR_U32(ctx, 2));
        if (branch_taken_0x10818c) {
            ctx->pc = 0x1081A8u;
            goto label_1081a8;
        }
    }
    ctx->pc = 0x108194u;
    // 0x108194: 0x3c040017
    ctx->pc = 0x108194u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x108198: 0xc04ace4
    ctx->pc = 0x108198u;
    SET_GPR_U32(ctx, 31, 0x1081A0u);
    ctx->pc = 0x10819Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13144));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1081A0u; }
    }
    if (ctx->pc != 0x1081A0u) { return; }
    ctx->pc = 0x1081A0u;
    // 0x1081a0: 0xc049d20
    ctx->pc = 0x1081A0u;
    SET_GPR_U32(ctx, 31, 0x1081A8u);
    ctx->pc = 0x1081A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x127480u;
    {
        const uint32_t __entryPc = ctx->pc;
        exit_0x127480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1081A8u; }
    }
    if (ctx->pc != 0x1081A8u) { return; }
    ctx->pc = 0x1081A8u;
label_1081a8:
    // 0x1081a8: 0x3c040017
    ctx->pc = 0x1081a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1081ac: 0x40282d
    ctx->pc = 0x1081acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081b0: 0xc04ace4
    ctx->pc = 0x1081B0u;
    SET_GPR_U32(ctx, 31, 0x1081B8u);
    ctx->pc = 0x1081B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13192));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1081B8u; }
    }
    if (ctx->pc != 0x1081B8u) { return; }
    ctx->pc = 0x1081B8u;
    // 0x1081b8: 0x8f8480b8
    ctx->pc = 0x1081b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934712)));
    // 0x1081bc: 0x3c050020
    ctx->pc = 0x1081bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)32 << 16));
    // 0x1081c0: 0xdfbf0000
    ctx->pc = 0x1081c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1081c4: 0x804239e
    ctx->pc = 0x1081C4u;
    ctx->pc = 0x1081C8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x108E78u;
    gfxMemInit_0x108e78(rdram, ctx, runtime); return;
    ctx->pc = 0x1081CCu;
}
