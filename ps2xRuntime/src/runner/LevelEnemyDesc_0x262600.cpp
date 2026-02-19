#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LevelEnemyDesc
// Address: 0x262600 - 0x262668
void LevelEnemyDesc_0x262600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x262600u;

    // 0x262600: 0x282d
    ctx->pc = 0x262600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262604: 0x3c020034
    ctx->pc = 0x262604u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262608: 0x2447e820
    ctx->pc = 0x262608u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294961184));
    // 0x26260c: 0x3c020034
    ctx->pc = 0x26260cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262610: 0x2446e8a8
    ctx->pc = 0x262610u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294961320));
    // 0x262614: 0x51880
    ctx->pc = 0x262614u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
label_262618:
    // 0x262618: 0x671021
    ctx->pc = 0x262618u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x26261c: 0x8c420000
    ctx->pc = 0x26261cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262620: 0x1444000a
    ctx->pc = 0x262620u;
    {
        const bool branch_taken_0x262620 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x262624u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x262620) {
            ctx->pc = 0x26264Cu;
            goto label_26264c;
        }
    }
    ctx->pc = 0x262628u;
    // 0x262628: 0x661021
    ctx->pc = 0x262628u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26262c: 0x8c430000
    ctx->pc = 0x26262cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262630: 0x10600006
    ctx->pc = 0x262630u;
    {
        const bool branch_taken_0x262630 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x262630) {
            ctx->pc = 0x26264Cu;
            goto label_26264c;
        }
    }
    ctx->pc = 0x262638u;
    // 0x262638: 0x80620010
    ctx->pc = 0x262638u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x26263c: 0x10400004
    ctx->pc = 0x26263Cu;
    {
        const bool branch_taken_0x26263c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x262640u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
        if (branch_taken_0x26263c) {
            ctx->pc = 0x262650u;
            goto label_262650;
        }
    }
    ctx->pc = 0x262644u;
    // 0x262644: 0x3e00008
    ctx->pc = 0x262644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262648u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262618u: goto label_262618;
            case 0x26264Cu: goto label_26264c;
            case 0x262650u: goto label_262650;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26264Cu;
label_26264c:
    // 0x26264c: 0x28a20008
    ctx->pc = 0x26264cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
label_262650:
    // 0x262650: 0x1440fff1
    ctx->pc = 0x262650u;
    {
        const bool branch_taken_0x262650 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x262654u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x262650) {
            ctx->pc = 0x262618u;
            goto label_262618;
        }
    }
    ctx->pc = 0x262658u;
    // 0x262658: 0x3c020034
    ctx->pc = 0x262658u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26265c: 0x8c42e7c0
    ctx->pc = 0x26265cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x262660: 0x3e00008
    ctx->pc = 0x262660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262664u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262618u: goto label_262618;
            case 0x26264Cu: goto label_26264c;
            case 0x262650u: goto label_262650;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262668u;
}
