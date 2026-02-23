#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iRotateThreadReadyQueue
// Address: 0x1558b0 - 0x15592c
void iRotateThreadReadyQueue_0x1558b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iRotateThreadReadyQueue");


    ctx->pc = 0x1558b0u;

    // 0x1558b0: 0x27bdffe0
    ctx->pc = 0x1558b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1558b4: 0xffb00000
    ctx->pc = 0x1558b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1558b8: 0x80802d
    ctx->pc = 0x1558b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1558bc: 0x2e020080
    ctx->pc = 0x1558bcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 128));
    // 0x1558c0: 0x10400005
    ctx->pc = 0x1558C0u;
    {
        const bool branch_taken_0x1558c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1558C4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x1558c0) {
            ctx->pc = 0x1558D8u;
            goto label_1558d8;
        }
    }
    ctx->pc = 0x1558C8u;
    // 0x1558c8: 0x3c020023
    ctx->pc = 0x1558c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1558cc: 0x8c43a020
    ctx->pc = 0x1558ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294942752)));
    // 0x1558d0: 0x14600003
    ctx->pc = 0x1558D0u;
    {
        const bool branch_taken_0x1558d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1558D4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)45 << 16));
        if (branch_taken_0x1558d0) {
            ctx->pc = 0x1558E0u;
            goto label_1558e0;
        }
    }
    ctx->pc = 0x1558D8u;
label_1558d8:
    // 0x1558d8: 0x10000010
    ctx->pc = 0x1558D8u;
    {
        const bool branch_taken_0x1558d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1558DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1558d8) {
            ctx->pc = 0x15591Cu;
            goto label_15591c;
        }
    }
    ctx->pc = 0x1558E0u;
label_1558e0:
    // 0x1558e0: 0x3c05002d
    ctx->pc = 0x1558e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)45 << 16));
    // 0x1558e4: 0x24636fe8
    ctx->pc = 0x1558e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 28648));
    // 0x1558e8: 0x8ca46fe0
    ctx->pc = 0x1558e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 28640)));
    // 0x1558ec: 0x8c620004
    ctx->pc = 0x1558ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1558f0: 0x24070001
    ctx->pc = 0x1558f0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1558f4: 0x304201ff
    ctx->pc = 0x1558f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x1558f8: 0x23040
    ctx->pc = 0x1558f8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1558fc: 0x24420001
    ctx->pc = 0x1558fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x155900: 0x662821
    ctx->pc = 0x155900u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x155904: 0xac620004
    ctx->pc = 0x155904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x155908: 0xa0a70008
    ctx->pc = 0x155908u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x15590c: 0xa0182d
    ctx->pc = 0x15590cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155910: 0xc055244
    ctx->pc = 0x155910u;
    SET_GPR_U32(ctx, 31, 0x155918u);
    ctx->pc = 0x155914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->pc = 0x154910u;
    {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x154910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155918u; }
        else if (ctx->pc != 0x155918u) { ctx->pc = 0x155918u; }
    }
    if (ctx->pc != 0x155918u) { return; }
    ctx->pc = 0x155918u;
    // 0x155918: 0x200102d
    ctx->pc = 0x155918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15591c:
    // 0x15591c: 0xdfbf0010
    ctx->pc = 0x15591cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155920: 0xdfb00000
    ctx->pc = 0x155920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155924: 0x3e00008
    ctx->pc = 0x155924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155928u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1558D8u: goto label_1558d8;
            case 0x1558E0u: goto label_1558e0;
            case 0x15591Cu: goto label_15591c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15592Cu;
}
