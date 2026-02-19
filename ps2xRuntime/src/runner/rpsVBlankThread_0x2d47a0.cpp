#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: rpsVBlankThread
// Address: 0x2d47a0 - 0x2d486c
void rpsVBlankThread_0x2d47a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d47a0u;

    // 0x2d47a0: 0x27bdff70
    ctx->pc = 0x2d47a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d47a4: 0xffbf0080
    ctx->pc = 0x2d47a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d47a8: 0xffb50070
    ctx->pc = 0x2d47a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2d47ac: 0xffb40060
    ctx->pc = 0x2d47acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2d47b0: 0xffb30050
    ctx->pc = 0x2d47b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2d47b4: 0xffb20040
    ctx->pc = 0x2d47b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2d47b8: 0xffb10030
    ctx->pc = 0x2d47b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2d47bc: 0xffb00020
    ctx->pc = 0x2d47bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d47c0: 0xafa00008
    ctx->pc = 0x2d47c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2d47c4: 0x24100001
    ctx->pc = 0x2d47c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d47c8: 0xafb00004
    ctx->pc = 0x2d47c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x2d47cc: 0xafa00014
    ctx->pc = 0x2d47ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2d47d0: 0xc0c0d78
    ctx->pc = 0x2D47D0u;
    SET_GPR_U32(ctx, 31, 0x2D47D8u);
    ctx->pc = 0x2D47D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3035E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x3035e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D47D8u; }
    }
    if (ctx->pc != 0x2D47D8u) { return; }
    ctx->pc = 0x2D47D8u;
    // 0x2d47d8: 0x3c03003a
    ctx->pc = 0x2d47d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d47dc: 0xac622390
    ctx->pc = 0x2d47dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9104), GPR_U32(ctx, 2));
    // 0x2d47e0: 0xafa00008
    ctx->pc = 0x2d47e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2d47e4: 0xafb00004
    ctx->pc = 0x2d47e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x2d47e8: 0xafa00014
    ctx->pc = 0x2d47e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2d47ec: 0xc0c0d78
    ctx->pc = 0x2D47ECu;
    SET_GPR_U32(ctx, 31, 0x2D47F4u);
    ctx->pc = 0x2D47F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3035E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x3035e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D47F4u; }
    }
    if (ctx->pc != 0x2D47F4u) { return; }
    ctx->pc = 0x2D47F4u;
    // 0x2d47f4: 0x3c03003a
    ctx->pc = 0x2d47f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d47f8: 0xac622394
    ctx->pc = 0x2d47f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9108), GPR_U32(ctx, 2));
    // 0x2d47fc: 0x24040002
    ctx->pc = 0x2d47fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d4800: 0x3c05002d
    ctx->pc = 0x2d4800u;
    SET_GPR_U32(ctx, 5, ((uint32_t)45 << 16));
    // 0x2d4804: 0x24a54648
    ctx->pc = 0x2d4804u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17992));
    // 0x2d4808: 0xc0c0cb0
    ctx->pc = 0x2D4808u;
    SET_GPR_U32(ctx, 31, 0x2D4810u);
    ctx->pc = 0x2D480Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3032C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddIntcHandler_0x3032c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4810u; }
    }
    if (ctx->pc != 0x2D4810u) { return; }
    ctx->pc = 0x2D4810u;
    // 0x2d4810: 0xc0c102e
    ctx->pc = 0x2D4810u;
    SET_GPR_U32(ctx, 31, 0x2D4818u);
    ctx->pc = 0x2D4814u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x3040B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnableIntc_0x3040b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4818u; }
    }
    if (ctx->pc != 0x2D4818u) { return; }
    ctx->pc = 0x2D4818u;
    // 0x2d4818: 0x3c15003a
    ctx->pc = 0x2d4818u;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
    // 0x2d481c: 0x3c11003a
    ctx->pc = 0x2d481cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2d4820: 0x3c10003a
    ctx->pc = 0x2d4820u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2d4824: 0x24140015
    ctx->pc = 0x2d4824u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d4828: 0x24130016
    ctx->pc = 0x2d4828u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 22));
    // 0x2d482c: 0x3c12003a
    ctx->pc = 0x2d482cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
label_2d4830:
    // 0x2d4830: 0xc0c0d88
    ctx->pc = 0x2D4830u;
    SET_GPR_U32(ctx, 31, 0x2D4838u);
    ctx->pc = 0x2D4834u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 9104)));
    ctx->pc = 0x303620u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x303620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4838u; }
    }
    if (ctx->pc != 0x2D4838u) { return; }
    ctx->pc = 0x2D4838u;
    // 0x2d4838: 0x8e222304
    ctx->pc = 0x2d4838u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8964)));
    // 0x2d483c: 0x24420001
    ctx->pc = 0x2d483cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4840: 0xae222304
    ctx->pc = 0x2d4840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8964), GPR_U32(ctx, 2));
    // 0x2d4844: 0xc0b5162
    ctx->pc = 0x2D4844u;
    SET_GPR_U32(ctx, 31, 0x2D484Cu);
    ctx->pc = 0x2D4848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8956), GPR_U32(ctx, 20));
    ctx->pc = 0x2D4588u;
    {
        const uint32_t __entryPc = ctx->pc;
        serve_io_0x2d4588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D484Cu; }
    }
    if (ctx->pc != 0x2D484Cu) { return; }
    ctx->pc = 0x2D484Cu;
    // 0x2d484c: 0xae1322fc
    ctx->pc = 0x2d484cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8956), GPR_U32(ctx, 19));
    // 0x2d4850: 0x8e422d90
    ctx->pc = 0x2d4850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 11664)));
    // 0x2d4854: 0x1440fff6
    ctx->pc = 0x2D4854u;
    {
        const bool branch_taken_0x2d4854 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d4854) {
            ctx->pc = 0x2D4830u;
            goto label_2d4830;
        }
    }
    ctx->pc = 0x2D485Cu;
    // 0x2d485c: 0xc08103a
    ctx->pc = 0x2D485Cu;
    SET_GPR_U32(ctx, 31, 0x2D4864u);
    ctx->pc = 0x2040E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ControlsUpdate_0x2040e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4864u; }
    }
    if (ctx->pc != 0x2D4864u) { return; }
    ctx->pc = 0x2D4864u;
    // 0x2d4864: 0x1000fff2
    ctx->pc = 0x2D4864u;
    {
        const bool branch_taken_0x2d4864 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d4864) {
            ctx->pc = 0x2D4830u;
            goto label_2d4830;
        }
    }
    ctx->pc = 0x2D486Cu;
}
