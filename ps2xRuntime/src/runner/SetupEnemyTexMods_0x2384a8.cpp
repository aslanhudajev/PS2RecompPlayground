#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetupEnemyTexMods
// Address: 0x2384a8 - 0x238550
void SetupEnemyTexMods_0x2384a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2384a8u;

    // 0x2384a8: 0x27bdffa0
    ctx->pc = 0x2384a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2384ac: 0xffbf0050
    ctx->pc = 0x2384acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2384b0: 0xffb40040
    ctx->pc = 0x2384b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2384b4: 0xffb30030
    ctx->pc = 0x2384b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2384b8: 0xffb20020
    ctx->pc = 0x2384b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2384bc: 0xffb10010
    ctx->pc = 0x2384bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2384c0: 0xffb00000
    ctx->pc = 0x2384c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2384c4: 0x3c02003c
    ctx->pc = 0x2384c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2384c8: 0x8c421bb0
    ctx->pc = 0x2384c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7088)));
    // 0x2384cc: 0x18400018
    ctx->pc = 0x2384CCu;
    {
        const bool branch_taken_0x2384cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2384D0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2384cc) {
            ctx->pc = 0x238530u;
            goto label_238530;
        }
    }
    ctx->pc = 0x2384D4u;
    // 0x2384d4: 0x3c02003c
    ctx->pc = 0x2384d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2384d8: 0x24541b90
    ctx->pc = 0x2384d8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 7056));
    // 0x2384dc: 0x3c020033
    ctx->pc = 0x2384dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2384e0: 0x24533cc0
    ctx->pc = 0x2384e0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 15552));
    // 0x2384e4: 0x3c020033
    ctx->pc = 0x2384e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2384e8: 0x24523c08
    ctx->pc = 0x2384e8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 15368));
    // 0x2384ec: 0x3c11003c
    ctx->pc = 0x2384ecu;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x2384f0: 0x101080
    ctx->pc = 0x2384f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2384f4: 0x0
    ctx->pc = 0x2384f4u;
    // NOP
label_2384f8:
    // 0x2384f8: 0x541021
    ctx->pc = 0x2384f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2384fc: 0x8c420000
    ctx->pc = 0x2384fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x238500: 0x21880
    ctx->pc = 0x238500u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x238504: 0x721021
    ctx->pc = 0x238504u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x238508: 0x8c440000
    ctx->pc = 0x238508u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23850c: 0x10800003
    ctx->pc = 0x23850Cu;
    {
        const bool branch_taken_0x23850c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x238510u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        if (branch_taken_0x23850c) {
            ctx->pc = 0x23851Cu;
            goto label_23851c;
        }
    }
    ctx->pc = 0x238514u;
    // 0x238514: 0xc084c42
    ctx->pc = 0x238514u;
    SET_GPR_U32(ctx, 31, 0x23851Cu);
    ctx->pc = 0x238518u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x213108u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitTexMods_0x213108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23851Cu; }
    }
    if (ctx->pc != 0x23851Cu) { return; }
    ctx->pc = 0x23851Cu;
label_23851c:
    // 0x23851c: 0x26100001
    ctx->pc = 0x23851cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x238520: 0x8e221bb0
    ctx->pc = 0x238520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7088)));
    // 0x238524: 0x202102a
    ctx->pc = 0x238524u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x238528: 0x1440fff3
    ctx->pc = 0x238528u;
    {
        const bool branch_taken_0x238528 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23852Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x238528) {
            ctx->pc = 0x2384F8u;
            goto label_2384f8;
        }
    }
    ctx->pc = 0x238530u;
label_238530:
    // 0x238530: 0xdfbf0050
    ctx->pc = 0x238530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x238534: 0xdfb40040
    ctx->pc = 0x238534u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238538: 0xdfb30030
    ctx->pc = 0x238538u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23853c: 0xdfb20020
    ctx->pc = 0x23853cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238540: 0xdfb10010
    ctx->pc = 0x238540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238544: 0xdfb00000
    ctx->pc = 0x238544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238548: 0x3e00008
    ctx->pc = 0x238548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23854Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2384F8u: goto label_2384f8;
            case 0x23851Cu: goto label_23851c;
            case 0x238530u: goto label_238530;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238550u;
}
