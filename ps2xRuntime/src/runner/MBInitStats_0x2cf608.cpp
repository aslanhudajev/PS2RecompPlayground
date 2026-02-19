#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBInitStats
// Address: 0x2cf608 - 0x2cf67c
void MBInitStats_0x2cf608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cf608u;

    // 0x2cf608: 0x3c03003a
    ctx->pc = 0x2cf608u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2cf60c: 0x24620c20
    ctx->pc = 0x2cf60cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 3104));
    // 0x2cf610: 0xac600c20
    ctx->pc = 0x2cf610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3104), GPR_U32(ctx, 0));
    // 0x2cf614: 0xac400004
    ctx->pc = 0x2cf614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2cf618: 0xac400008
    ctx->pc = 0x2cf618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2cf61c: 0xac40000c
    ctx->pc = 0x2cf61cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2cf620: 0xac400010
    ctx->pc = 0x2cf620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2cf624: 0xac400014
    ctx->pc = 0x2cf624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2cf628: 0xac400018
    ctx->pc = 0x2cf628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2cf62c: 0xac40001c
    ctx->pc = 0x2cf62cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2cf630: 0xac400024
    ctx->pc = 0x2cf630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2cf634: 0xac400020
    ctx->pc = 0x2cf634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2cf638: 0xac400028
    ctx->pc = 0x2cf638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2cf63c: 0xac40002c
    ctx->pc = 0x2cf63cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x2cf640: 0x3c03003a
    ctx->pc = 0x2cf640u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2cf644: 0x24620c50
    ctx->pc = 0x2cf644u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 3152));
    // 0x2cf648: 0xac600c50
    ctx->pc = 0x2cf648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3152), GPR_U32(ctx, 0));
    // 0x2cf64c: 0xac400004
    ctx->pc = 0x2cf64cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2cf650: 0xac400008
    ctx->pc = 0x2cf650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2cf654: 0xac40000c
    ctx->pc = 0x2cf654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2cf658: 0xac400010
    ctx->pc = 0x2cf658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2cf65c: 0xac400014
    ctx->pc = 0x2cf65cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2cf660: 0xac400018
    ctx->pc = 0x2cf660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2cf664: 0xac40001c
    ctx->pc = 0x2cf664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2cf668: 0xac400024
    ctx->pc = 0x2cf668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2cf66c: 0xac400028
    ctx->pc = 0x2cf66cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2cf670: 0xac40002c
    ctx->pc = 0x2cf670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x2cf674: 0x3e00008
    ctx->pc = 0x2CF674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF678u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF67Cu;
}
