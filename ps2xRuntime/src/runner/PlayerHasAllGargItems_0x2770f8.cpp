#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerHasAllGargItems
// Address: 0x2770f8 - 0x277174
void PlayerHasAllGargItems_0x2770f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2770f8u;

    // 0x2770f8: 0x24022b00
    ctx->pc = 0x2770f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2770fc: 0x822018
    ctx->pc = 0x2770fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x277100: 0x3c020032
    ctx->pc = 0x277100u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x277104: 0x24421bc0
    ctx->pc = 0x277104u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x277108: 0x823021
    ctx->pc = 0x277108u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27710c: 0x8cc200fc
    ctx->pc = 0x27710cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 252)));
    // 0x277110: 0x14400003
    ctx->pc = 0x277110u;
    {
        const bool branch_taken_0x277110 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x277114u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x277110) {
            ctx->pc = 0x277120u;
            goto label_277120;
        }
    }
    ctx->pc = 0x277118u;
    // 0x277118: 0x3e00008
    ctx->pc = 0x277118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27711Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x277120u: goto label_277120;
            case 0x277150u: goto label_277150;
            case 0x277158u: goto label_277158;
            default: break;
        }
        return;
    }
    ctx->pc = 0x277120u;
label_277120:
    // 0x277120: 0x8cc30104
    ctx->pc = 0x277120u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x277124: 0x8c421540
    ctx->pc = 0x277124u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5440)));
    // 0x277128: 0x10620009
    ctx->pc = 0x277128u;
    {
        const bool branch_taken_0x277128 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x27712Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x277128) {
            ctx->pc = 0x277150u;
            goto label_277150;
        }
    }
    ctx->pc = 0x277130u;
    // 0x277130: 0x8cc2000c
    ctx->pc = 0x277130u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x277134: 0x240400b4
    ctx->pc = 0x277134u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 180));
    // 0x277138: 0x441018
    ctx->pc = 0x277138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27713c: 0x621821
    ctx->pc = 0x27713cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x277140: 0xc31821
    ctx->pc = 0x277140u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x277144: 0x84640d04
    ctx->pc = 0x277144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 3332)));
    // 0x277148: 0x4810003
    ctx->pc = 0x277148u;
    {
        const bool branch_taken_0x277148 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x27714Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x277148) {
            ctx->pc = 0x277158u;
            goto label_277158;
        }
    }
    ctx->pc = 0x277150u;
label_277150:
    // 0x277150: 0x3e00008
    ctx->pc = 0x277150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277154u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x277120u: goto label_277120;
            case 0x277150u: goto label_277150;
            case 0x277158u: goto label_277158;
            default: break;
        }
        return;
    }
    ctx->pc = 0x277158u;
label_277158:
    // 0x277158: 0x2442fc08
    ctx->pc = 0x277158u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966280));
    // 0x27715c: 0x51880
    ctx->pc = 0x27715cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x277160: 0x621821
    ctx->pc = 0x277160u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x277164: 0x8c620000
    ctx->pc = 0x277164u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x277168: 0x821026
    ctx->pc = 0x277168u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27716c: 0x3e00008
    ctx->pc = 0x27716Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277170u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x277120u: goto label_277120;
            case 0x277150u: goto label_277150;
            case 0x277158u: goto label_277158;
            default: break;
        }
        return;
    }
    ctx->pc = 0x277174u;
}
