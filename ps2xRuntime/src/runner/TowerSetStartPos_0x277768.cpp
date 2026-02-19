#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TowerSetStartPos
// Address: 0x277768 - 0x2777ac
void TowerSetStartPos_0x277768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x277768u;

    // 0x277768: 0x27bdffe0
    ctx->pc = 0x277768u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27776c: 0xffbf0010
    ctx->pc = 0x27776cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x277770: 0x3c020032
    ctx->pc = 0x277770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x277774: 0x8c42071c
    ctx->pc = 0x277774u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1820)));
    // 0x277778: 0x4400009
    ctx->pc = 0x277778u;
    {
        const bool branch_taken_0x277778 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27777Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x277778) {
            ctx->pc = 0x2777A0u;
            goto label_2777a0;
        }
    }
    ctx->pc = 0x277780u;
    // 0x277780: 0x3a0202d
    ctx->pc = 0x277780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277784: 0x302d
    ctx->pc = 0x277784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277788: 0xc085298
    ctx->pc = 0x277788u;
    SET_GPR_U32(ctx, 31, 0x277790u);
    ctx->pc = 0x27778Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x214A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAvgPos_0x214a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277790u; }
    }
    if (ctx->pc != 0x277790u) { return; }
    ctx->pc = 0x277790u;
    // 0x277790: 0xc094268
    ctx->pc = 0x277790u;
    SET_GPR_U32(ctx, 31, 0x277798u);
    ctx->pc = 0x277794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2509A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClosestStartPos_0x2509a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277798u; }
    }
    if (ctx->pc != 0x277798u) { return; }
    ctx->pc = 0x277798u;
    // 0x277798: 0x3c030034
    ctx->pc = 0x277798u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27779c: 0xac62fa88
    ctx->pc = 0x27779cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965896), GPR_U32(ctx, 2));
label_2777a0:
    // 0x2777a0: 0xdfbf0010
    ctx->pc = 0x2777a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2777a4: 0x3e00008
    ctx->pc = 0x2777A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2777A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2777A0u: goto label_2777a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2777ACu;
}
