#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBClearText
// Address: 0x2c5748 - 0x2c57c0
void MBClearText_0x2c5748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5748u;

    // 0x2c5748: 0x3c03003d
    ctx->pc = 0x2c5748u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c574c: 0x3c05003d
    ctx->pc = 0x2c574cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)61 << 16));
    // 0x2c5750: 0x8ca2c958
    ctx->pc = 0x2c5750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294953304)));
    // 0x2c5754: 0xac62c95c
    ctx->pc = 0x2c5754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953308), GPR_U32(ctx, 2));
    // 0x2c5758: 0x3c03003d
    ctx->pc = 0x2c5758u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c575c: 0x3c04003d
    ctx->pc = 0x2c575cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)61 << 16));
    // 0x2c5760: 0x8c821f70
    ctx->pc = 0x2c5760u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8048)));
    // 0x2c5764: 0xac621f74
    ctx->pc = 0x2c5764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8052), GPR_U32(ctx, 2));
    // 0x2c5768: 0x3c020038
    ctx->pc = 0x2c5768u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c576c: 0x8c42b130
    ctx->pc = 0x2c576cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947120)));
    // 0x2c5770: 0x4430004
    ctx->pc = 0x2C5770u;
    {
        const bool branch_taken_0x2c5770 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2c5770) {
            ctx->pc = 0x2C5774u;
            SET_GPR_U32(ctx, 4, ((uint32_t)61 << 16));
            ctx->pc = 0x2C5784u;
            goto label_2c5784;
        }
    }
    ctx->pc = 0x2C5778u;
    // 0x2c5778: 0xac801f70
    ctx->pc = 0x2c5778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8048), GPR_U32(ctx, 0));
    // 0x2c577c: 0x3e00008
    ctx->pc = 0x2C577Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5780u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294953304), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C5784u: goto label_2c5784;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C5784u;
label_2c5784:
    // 0x2c5784: 0x3c02003d
    ctx->pc = 0x2c5784u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c5788: 0x2442c960
    ctx->pc = 0x2c5788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953312));
    // 0x2c578c: 0x3c030038
    ctx->pc = 0x2c578cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c5790: 0x8c63b130
    ctx->pc = 0x2c5790u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294947120)));
    // 0x2c5794: 0x31880
    ctx->pc = 0x2c5794u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c5798: 0x621021
    ctx->pc = 0x2c5798u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c579c: 0x8c420000
    ctx->pc = 0x2c579cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c57a0: 0xac82c958
    ctx->pc = 0x2c57a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294953304), GPR_U32(ctx, 2));
    // 0x2c57a4: 0x3c04003d
    ctx->pc = 0x2c57a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)61 << 16));
    // 0x2c57a8: 0x3c02003d
    ctx->pc = 0x2c57a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c57ac: 0x24421f78
    ctx->pc = 0x2c57acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8056));
    // 0x2c57b0: 0x621821
    ctx->pc = 0x2c57b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c57b4: 0x8c620000
    ctx->pc = 0x2c57b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c57b8: 0x3e00008
    ctx->pc = 0x2C57B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C57BCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8048), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C5784u: goto label_2c5784;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C57C0u;
}
