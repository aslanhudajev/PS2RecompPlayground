#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gun_teaching__FiP11Gun_Act_tag
// Address: 0x1eb920 - 0x1eb9d4
void gun_teaching__FiP11Gun_Act_tag_0x1eb920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gun_teaching__FiP11Gun_Act_tag");


    ctx->pc = 0x1eb920u;

    // 0x1eb920: 0x27bdffe0
    ctx->pc = 0x1eb920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eb924: 0x7fbf0010
    ctx->pc = 0x1eb924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1eb928: 0x7fb00000
    ctx->pc = 0x1eb928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eb92c: 0x24020001
    ctx->pc = 0x1eb92cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb930: 0xaf828db0
    ctx->pc = 0x1eb930u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 2));
    // 0x1eb934: 0x8ca3001c
    ctx->pc = 0x1eb934u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1eb938: 0x2402ffff
    ctx->pc = 0x1eb938u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eb93c: 0x1062001d
    ctx->pc = 0x1EB93Cu;
    {
        const bool branch_taken_0x1eb93c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1EB940u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb93c) {
            ctx->pc = 0x1EB9B4u;
            goto label_1eb9b4;
        }
    }
    ctx->pc = 0x1EB944u;
    // 0x1eb944: 0x8f838dd4
    ctx->pc = 0x1eb944u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938068)));
    // 0x1eb948: 0x8f828d24
    ctx->pc = 0x1eb948u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937892)));
    // 0x1eb94c: 0x24630001
    ctx->pc = 0x1eb94cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1eb950: 0x10400019
    ctx->pc = 0x1EB950u;
    {
        const bool branch_taken_0x1eb950 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB954u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938068), GPR_U32(ctx, 3));
        if (branch_taken_0x1eb950) {
            ctx->pc = 0x1EB9B8u;
            goto label_1eb9b8;
        }
    }
    ctx->pc = 0x1EB958u;
    // 0x1eb958: 0xc07b510
    ctx->pc = 0x1EB958u;
    SET_GPR_U32(ctx, 31, 0x1EB960u);
    ctx->pc = 0x1EB95Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->pc = 0x1ED440u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetUsbGunBuffer__Fi_0x1ed440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB960u; }
        else if (ctx->pc != 0x1EB960u) { ctx->pc = 0x1EB960u; }
    }
    if (ctx->pc != 0x1EB960u) { return; }
    ctx->pc = 0x1EB960u;
    // 0x1eb960: 0x9442000a
    ctx->pc = 0x1eb960u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1eb964: 0x30420001
    ctx->pc = 0x1eb964u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1eb968: 0x14400004
    ctx->pc = 0x1EB968u;
    {
        const bool branch_taken_0x1eb968 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eb968) {
            ctx->pc = 0x1EB97Cu;
            goto label_1eb97c;
        }
    }
    ctx->pc = 0x1EB970u;
    // 0x1eb970: 0x8f828dd8
    ctx->pc = 0x1eb970u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1eb974: 0x24420001
    ctx->pc = 0x1eb974u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eb978: 0xaf828dd8
    ctx->pc = 0x1eb978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938072), GPR_U32(ctx, 2));
label_1eb97c:
    // 0x1eb97c: 0x8f828dd8
    ctx->pc = 0x1eb97cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1eb980: 0x28420004
    ctx->pc = 0x1eb980u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x1eb984: 0x1440000c
    ctx->pc = 0x1EB984u;
    {
        const bool branch_taken_0x1eb984 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eb984) {
            ctx->pc = 0x1EB9B8u;
            goto label_1eb9b8;
        }
    }
    ctx->pc = 0x1EB98Cu;
    // 0x1eb98c: 0xaf808d24
    ctx->pc = 0x1eb98cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937892), GPR_U32(ctx, 0));
    // 0x1eb990: 0xaf808d28
    ctx->pc = 0x1eb990u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937896), GPR_U32(ctx, 0));
    // 0x1eb994: 0x8e050000
    ctx->pc = 0x1eb994u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1eb998: 0xc07b660
    ctx->pc = 0x1EB998u;
    SET_GPR_U32(ctx, 31, 0x1EB9A0u);
    ctx->pc = 0x1EB99Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->pc = 0x1ED980u;
    {
        const uint32_t __entryPc = ctx->pc;
        trans_ctrl_data__Fii_0x1ed980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB9A0u; }
        else if (ctx->pc != 0x1EB9A0u) { ctx->pc = 0x1EB9A0u; }
    }
    if (ctx->pc != 0x1EB9A0u) { return; }
    ctx->pc = 0x1EB9A0u;
    // 0x1eb9a0: 0x24020004
    ctx->pc = 0x1eb9a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eb9a4: 0xaf828dcc
    ctx->pc = 0x1eb9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
    // 0x1eb9a8: 0x24020001
    ctx->pc = 0x1eb9a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb9ac: 0x10000002
    ctx->pc = 0x1EB9ACu;
    {
        const bool branch_taken_0x1eb9ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB9B0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938092), GPR_U32(ctx, 2));
        if (branch_taken_0x1eb9ac) {
            ctx->pc = 0x1EB9B8u;
            goto label_1eb9b8;
        }
    }
    ctx->pc = 0x1EB9B4u;
label_1eb9b4:
    // 0x1eb9b4: 0xaf808dd4
    ctx->pc = 0x1eb9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938068), GPR_U32(ctx, 0));
label_1eb9b8:
    // 0x1eb9b8: 0x8f828dd4
    ctx->pc = 0x1eb9b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938068)));
    // 0x1eb9bc: 0x7bbf0010
    ctx->pc = 0x1eb9bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb9c0: 0x7bb00000
    ctx->pc = 0x1eb9c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb9c4: 0x28420008
    ctx->pc = 0x1eb9c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 8));
    // 0x1eb9c8: 0x38420001
    ctx->pc = 0x1eb9c8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x1eb9cc: 0x3e00008
    ctx->pc = 0x1EB9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB9D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB97Cu: goto label_1eb97c;
            case 0x1EB9B4u: goto label_1eb9b4;
            case 0x1EB9B8u: goto label_1eb9b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB9D4u;
}
