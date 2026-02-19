#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitPsysData
// Address: 0x2113f8 - 0x211444
void InitPsysData_0x2113f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2113f8u;

    // 0x2113f8: 0x27bdffe0
    ctx->pc = 0x2113f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2113fc: 0xffbf0010
    ctx->pc = 0x2113fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x211400: 0xffb00000
    ctx->pc = 0x211400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211404: 0x80802d
    ctx->pc = 0x211404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211408: 0xa0102d
    ctx->pc = 0x211408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21140c: 0xc0482d
    ctx->pc = 0x21140cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211410: 0x202d
    ctx->pc = 0x211410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211414: 0x200282d
    ctx->pc = 0x211414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211418: 0x40302d
    ctx->pc = 0x211418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21141c: 0x24070001
    ctx->pc = 0x21141cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x211420: 0xc0b2dda
    ctx->pc = 0x211420u;
    SET_GPR_U32(ctx, 31, 0x211428u);
    ctx->pc = 0x211424u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CB768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewWorldPsys_0x2cb768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211428u; }
    }
    if (ctx->pc != 0x211428u) { return; }
    ctx->pc = 0x211428u;
    // 0x211428: 0x8e030060
    ctx->pc = 0x211428u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x21142c: 0x34630001
    ctx->pc = 0x21142cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1));
    // 0x211430: 0xae030060
    ctx->pc = 0x211430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x211434: 0xdfbf0010
    ctx->pc = 0x211434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211438: 0xdfb00000
    ctx->pc = 0x211438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21143c: 0x3e00008
    ctx->pc = 0x21143Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211440u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211444u;
}
