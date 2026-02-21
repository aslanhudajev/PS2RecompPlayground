#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: modify_boss_ene
// Address: 0x25f138 - 0x25f198
void modify_boss_ene_0x25f138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25f138u;

    // 0x25f138: 0x3c020036
    ctx->pc = 0x25f138u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x25f13c: 0x8c43d934
    ctx->pc = 0x25f13cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x25f140: 0x24020025
    ctx->pc = 0x25f140u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 37));
    // 0x25f144: 0x1062000d
    ctx->pc = 0x25F144u;
    {
        const bool branch_taken_0x25f144 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25F148u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 38));
        if (branch_taken_0x25f144) {
            ctx->pc = 0x25F17Cu;
            goto label_25f17c;
        }
    }
    ctx->pc = 0x25F14Cu;
    // 0x25f14c: 0x10400005
    ctx->pc = 0x25F14Cu;
    {
        const bool branch_taken_0x25f14c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25F150u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
        if (branch_taken_0x25f14c) {
            ctx->pc = 0x25F164u;
            goto label_25f164;
        }
    }
    ctx->pc = 0x25F154u;
    // 0x25f154: 0x5062000d
    ctx->pc = 0x25F154u;
    {
        const bool branch_taken_0x25f154 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x25f154) {
            ctx->pc = 0x25F158u;
            WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x25F18Cu;
            goto label_25f18c;
        }
    }
    ctx->pc = 0x25F15Cu;
label_25f15c:
    // 0x25f15c: 0x3e00008
    ctx->pc = 0x25F15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25F15Cu: goto label_25f15c;
            case 0x25F164u: goto label_25f164;
            case 0x25F17Cu: goto label_25f17c;
            case 0x25F18Cu: goto label_25f18c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25F164u;
label_25f164:
    // 0x25f164: 0x24020029
    ctx->pc = 0x25f164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 41));
    // 0x25f168: 0x1462fffc
    ctx->pc = 0x25F168u;
    {
        const bool branch_taken_0x25f168 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25F16Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x25f168) {
            ctx->pc = 0x25F15Cu;
            goto label_25f15c;
        }
    }
    ctx->pc = 0x25F170u;
    // 0x25f170: 0xa080000e
    ctx->pc = 0x25f170u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x25f174: 0x80bf1c1
    ctx->pc = 0x25F174u;
    ctx->pc = 0x25F178u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939800));
    ctx->pc = 0x2FC704u;
    strcat_0x2fc704(rdram, ctx, runtime); return;
    ctx->pc = 0x25F17Cu;
label_25f17c:
    // 0x25f17c: 0xa080000e
    ctx->pc = 0x25f17cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x25f180: 0x3c05003b
    ctx->pc = 0x25f180u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25f184: 0x80bf1c1
    ctx->pc = 0x25F184u;
    ctx->pc = 0x25F188u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939808));
    ctx->pc = 0x2FC704u;
    strcat_0x2fc704(rdram, ctx, runtime); return;
    ctx->pc = 0x25F18Cu;
label_25f18c:
    // 0x25f18c: 0x3c05003b
    ctx->pc = 0x25f18cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25f190: 0x80bf1c1
    ctx->pc = 0x25F190u;
    ctx->pc = 0x25F194u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939816));
    ctx->pc = 0x2FC704u;
    strcat_0x2fc704(rdram, ctx, runtime); return;
    ctx->pc = 0x25F198u;
}
