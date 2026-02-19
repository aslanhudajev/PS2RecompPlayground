#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cmd_sem_init
// Address: 0x2f5110 - 0x2f51a4
void cmd_sem_init_0x2f5110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f5110u;

    // 0x2f5110: 0x27bdffb0
    ctx->pc = 0x2f5110u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f5114: 0x2403ffff
    ctx->pc = 0x2f5114u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f5118: 0xffb10030
    ctx->pc = 0x2f5118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2f511c: 0x3c11003a
    ctx->pc = 0x2f511cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f5120: 0xffbf0040
    ctx->pc = 0x2f5120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f5124: 0x8e223ab0
    ctx->pc = 0x2f5124u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 15024)));
    // 0x2f5128: 0x10430007
    ctx->pc = 0x2F5128u;
    {
        const bool branch_taken_0x2f5128 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2F512Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        if (branch_taken_0x2f5128) {
            ctx->pc = 0x2F5148u;
            goto label_2f5148;
        }
    }
    ctx->pc = 0x2F5130u;
    // 0x2f5130: 0x3c10003a
    ctx->pc = 0x2f5130u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f5134: 0x8e023ab4
    ctx->pc = 0x2f5134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 15028)));
    // 0x2f5138: 0x14430016
    ctx->pc = 0x2F5138u;
    {
        const bool branch_taken_0x2f5138 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2F513Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2f5138) {
            ctx->pc = 0x2F5194u;
            goto label_2f5194;
        }
    }
    ctx->pc = 0x2F5140u;
    // 0x2f5140: 0x10000003
    ctx->pc = 0x2F5140u;
    {
        const bool branch_taken_0x2f5140 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F5144u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f5140) {
            ctx->pc = 0x2F5150u;
            goto label_2f5150;
        }
    }
    ctx->pc = 0x2F5148u;
label_2f5148:
    // 0x2f5148: 0x3c10003a
    ctx->pc = 0x2f5148u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f514c: 0x24020001
    ctx->pc = 0x2f514cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2f5150:
    // 0x2f5150: 0xafa00014
    ctx->pc = 0x2f5150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2f5154: 0xafa20004
    ctx->pc = 0x2f5154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2f5158: 0x3a0202d
    ctx->pc = 0x2f5158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f515c: 0xc0c0d78
    ctx->pc = 0x2F515Cu;
    SET_GPR_U32(ctx, 31, 0x2F5164u);
    ctx->pc = 0x2F5160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x3035E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x3035e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5164u; }
    }
    if (ctx->pc != 0x2F5164u) { return; }
    ctx->pc = 0x2F5164u;
    // 0x2f5164: 0x3a0202d
    ctx->pc = 0x2f5164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5168: 0xc0c0d78
    ctx->pc = 0x2F5168u;
    SET_GPR_U32(ctx, 31, 0x2F5170u);
    ctx->pc = 0x2F516Cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15024), GPR_U32(ctx, 2));
    ctx->pc = 0x3035E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x3035e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5170u; }
    }
    if (ctx->pc != 0x2F5170u) { return; }
    ctx->pc = 0x2F5170u;
    // 0x2f5170: 0xae023ab4
    ctx->pc = 0x2f5170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15028), GPR_U32(ctx, 2));
    // 0x2f5174: 0x3a0202d
    ctx->pc = 0x2f5174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5178: 0xc0c0d78
    ctx->pc = 0x2F5178u;
    SET_GPR_U32(ctx, 31, 0x2F5180u);
    ctx->pc = 0x2F517Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x3035E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x3035e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5180u; }
    }
    if (ctx->pc != 0x2F5180u) { return; }
    ctx->pc = 0x2F5180u;
    // 0x2f5180: 0x3c03003a
    ctx->pc = 0x2f5180u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f5184: 0xac623ab8
    ctx->pc = 0x2f5184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15032), GPR_U32(ctx, 2));
    // 0x2f5188: 0x3c02003a
    ctx->pc = 0x2f5188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f518c: 0xac403abc
    ctx->pc = 0x2f518cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15036), GPR_U32(ctx, 0));
    // 0x2f5190: 0xdfbf0040
    ctx->pc = 0x2f5190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f5194:
    // 0x2f5194: 0xdfb10030
    ctx->pc = 0x2f5194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f5198: 0xdfb00020
    ctx->pc = 0x2f5198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f519c: 0x3e00008
    ctx->pc = 0x2F519Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F51A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F5148u: goto label_2f5148;
            case 0x2F5150u: goto label_2f5150;
            case 0x2F5194u: goto label_2f5194;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F51A4u;
}
