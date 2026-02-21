#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: enemy_update
// Address: 0x23a6f8 - 0x23a7a8
void enemy_update_0x23a6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23a6f8u;

    // 0x23a6f8: 0x27bdffb0
    ctx->pc = 0x23a6f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23a6fc: 0xffbf0040
    ctx->pc = 0x23a6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x23a700: 0xffb30030
    ctx->pc = 0x23a700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23a704: 0xffb20020
    ctx->pc = 0x23a704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23a708: 0xffb10010
    ctx->pc = 0x23a708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23a70c: 0xffb00000
    ctx->pc = 0x23a70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a710: 0x3c020031
    ctx->pc = 0x23a710u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x23a714: 0x3c030031
    ctx->pc = 0x23a714u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x23a718: 0x8c42ff9c
    ctx->pc = 0x23a718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x23a71c: 0x8c630024
    ctx->pc = 0x23a71cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x23a720: 0x431025
    ctx->pc = 0x23a720u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23a724: 0x1440001a
    ctx->pc = 0x23A724u;
    {
        const bool branch_taken_0x23a724 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23A728u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x23a724) {
            ctx->pc = 0x23A790u;
            goto label_23a790;
        }
    }
    ctx->pc = 0x23A72Cu;
    // 0x23a72c: 0x3c02003c
    ctx->pc = 0x23a72cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x23a730: 0x8c421bb0
    ctx->pc = 0x23a730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7088)));
    // 0x23a734: 0x18400016
    ctx->pc = 0x23A734u;
    {
        const bool branch_taken_0x23a734 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23A738u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23a734) {
            ctx->pc = 0x23A790u;
            goto label_23a790;
        }
    }
    ctx->pc = 0x23A73Cu;
    // 0x23a73c: 0x3c02003c
    ctx->pc = 0x23a73cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x23a740: 0x24531b90
    ctx->pc = 0x23a740u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 7056));
    // 0x23a744: 0x3c020033
    ctx->pc = 0x23a744u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23a748: 0x24523c08
    ctx->pc = 0x23a748u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 15368));
    // 0x23a74c: 0x3c11003c
    ctx->pc = 0x23a74cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x23a750: 0x101080
    ctx->pc = 0x23a750u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x23a754: 0x0
    ctx->pc = 0x23a754u;
    // NOP
label_23a758:
    // 0x23a758: 0x531021
    ctx->pc = 0x23a758u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23a75c: 0x8c420000
    ctx->pc = 0x23a75cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a760: 0x21080
    ctx->pc = 0x23a760u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x23a764: 0x521021
    ctx->pc = 0x23a764u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23a768: 0x8c440000
    ctx->pc = 0x23a768u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a76c: 0x10800003
    ctx->pc = 0x23A76Cu;
    {
        const bool branch_taken_0x23a76c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A770u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x23a76c) {
            ctx->pc = 0x23A77Cu;
            goto label_23a77c;
        }
    }
    ctx->pc = 0x23A774u;
    // 0x23a774: 0xc084cc4
    ctx->pc = 0x23A774u;
    SET_GPR_U32(ctx, 31, 0x23A77Cu);
    ctx->pc = 0x213310u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexMods_0x213310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A77Cu; }
    }
    if (ctx->pc != 0x23A77Cu) { return; }
    ctx->pc = 0x23A77Cu;
label_23a77c:
    // 0x23a77c: 0x8e221bb0
    ctx->pc = 0x23a77cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7088)));
    // 0x23a780: 0x202102a
    ctx->pc = 0x23a780u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x23a784: 0x1440fff4
    ctx->pc = 0x23A784u;
    {
        const bool branch_taken_0x23a784 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23A788u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x23a784) {
            ctx->pc = 0x23A758u;
            goto label_23a758;
        }
    }
    ctx->pc = 0x23A78Cu;
    // 0x23a78c: 0xdfbf0040
    ctx->pc = 0x23a78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23a790:
    // 0x23a790: 0xdfb30030
    ctx->pc = 0x23a790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a794: 0xdfb20020
    ctx->pc = 0x23a794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a798: 0xdfb10010
    ctx->pc = 0x23a798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a79c: 0xdfb00000
    ctx->pc = 0x23a79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a7a0: 0x3e00008
    ctx->pc = 0x23A7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A7A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23A758u: goto label_23a758;
            case 0x23A77Cu: goto label_23a77c;
            case 0x23A790u: goto label_23a790;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23A7A8u;
}
