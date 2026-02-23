#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: EventCtrl_000__13EventCtrlTaskFv
// Address: 0x1e2d10 - 0x1e2e4c
void EventCtrl_000__13EventCtrlTaskFv_0x1e2d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EventCtrl_000__13EventCtrlTaskFv");


    ctx->pc = 0x1e2d10u;

    // 0x1e2d10: 0x27bdffd0
    ctx->pc = 0x1e2d10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2d14: 0x7fbf0020
    ctx->pc = 0x1e2d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e2d18: 0x7fb10010
    ctx->pc = 0x1e2d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e2d1c: 0x3c020050
    ctx->pc = 0x1e2d1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e2d20: 0x2443dd20
    ctx->pc = 0x1e2d20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294958368));
    // 0x1e2d24: 0x7fb00000
    ctx->pc = 0x1e2d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2d28: 0x70808e28
    ctx->pc = 0x1e2d28u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e2d2c: 0x3c020050
    ctx->pc = 0x1e2d2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e2d30: 0x2444e068
    ctx->pc = 0x1e2d30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294959208));
    // 0x1e2d34: 0x3c010050
    ctx->pc = 0x1e2d34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e2d38: 0x8c22dd30
    ctx->pc = 0x1e2d38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294958384)));
    // 0x1e2d3c: 0x64100001
    ctx->pc = 0x1e2d3cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)1);
    // 0x1e2d40: 0x2102a
    ctx->pc = 0x1e2d40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    // 0x1e2d44: 0x10400004
    ctx->pc = 0x1E2D44u;
    {
        const bool branch_taken_0x1e2d44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E2D48u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e2d44) {
            ctx->pc = 0x1E2D58u;
            goto label_1e2d58;
        }
    }
    ctx->pc = 0x1E2D4Cu;
    // 0x1e2d4c: 0x8c620004
    ctx->pc = 0x1e2d4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e2d50: 0x38420005
    ctx->pc = 0x1e2d50u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 5));
    // 0x1e2d54: 0x2c420001
    ctx->pc = 0x1e2d54u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_1e2d58:
    // 0x1e2d58: 0x1440000b
    ctx->pc = 0x1E2D58u;
    {
        const bool branch_taken_0x1e2d58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e2d58) {
            ctx->pc = 0x1E2D88u;
            goto label_1e2d88;
        }
    }
    ctx->pc = 0x1E2D60u;
    // 0x1e2d60: 0x8c820010
    ctx->pc = 0x1e2d60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e2d64: 0x2102a
    ctx->pc = 0x1e2d64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    // 0x1e2d68: 0x10400004
    ctx->pc = 0x1E2D68u;
    {
        const bool branch_taken_0x1e2d68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e2d68) {
            ctx->pc = 0x1E2D7Cu;
            goto label_1e2d7c;
        }
    }
    ctx->pc = 0x1E2D70u;
    // 0x1e2d70: 0x8c820004
    ctx->pc = 0x1e2d70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e2d74: 0x38420005
    ctx->pc = 0x1e2d74u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 5));
    // 0x1e2d78: 0x2c420001
    ctx->pc = 0x1e2d78u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_1e2d7c:
    // 0x1e2d7c: 0x14400002
    ctx->pc = 0x1E2D7Cu;
    {
        const bool branch_taken_0x1e2d7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e2d7c) {
            ctx->pc = 0x1E2D88u;
            goto label_1e2d88;
        }
    }
    ctx->pc = 0x1E2D84u;
    // 0x1e2d84: 0x70002e28
    ctx->pc = 0x1e2d84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e2d88:
    // 0x1e2d88: 0x14a00006
    ctx->pc = 0x1E2D88u;
    {
        const bool branch_taken_0x1e2d88 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e2d88) {
            ctx->pc = 0x1E2DA4u;
            goto label_1e2da4;
        }
    }
    ctx->pc = 0x1E2D90u;
    // 0x1e2d90: 0xc080a54
    ctx->pc = 0x1E2D90u;
    SET_GPR_U32(ctx, 31, 0x1E2D98u);
    ctx->pc = 0x202950u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_DemoPlay__Fv_0x202950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2D98u; }
        else if (ctx->pc != 0x1E2D98u) { ctx->pc = 0x1E2D98u; }
    }
    if (ctx->pc != 0x1E2D98u) { return; }
    ctx->pc = 0x1E2D98u;
    // 0x1e2d98: 0x14400002
    ctx->pc = 0x1E2D98u;
    {
        const bool branch_taken_0x1e2d98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e2d98) {
            ctx->pc = 0x1E2DA4u;
            goto label_1e2da4;
        }
    }
    ctx->pc = 0x1E2DA0u;
    // 0x1e2da0: 0x70008628
    ctx->pc = 0x1e2da0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e2da4:
    // 0x1e2da4: 0x3c020050
    ctx->pc = 0x1e2da4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e2da8: 0x2444e510
    ctx->pc = 0x1e2da8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x1e2dac: 0xc07ce18
    ctx->pc = 0x1E2DACu;
    SET_GPR_U32(ctx, 31, 0x1E2DB4u);
    ctx->pc = 0x1E2DB0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937388), (uint8_t)GPR_U32(ctx, 16));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2DB4u; }
        else if (ctx->pc != 0x1E2DB4u) { ctx->pc = 0x1E2DB4u; }
    }
    if (ctx->pc != 0x1E2DB4u) { return; }
    ctx->pc = 0x1E2DB4u;
    // 0x1e2db4: 0x28410002
    ctx->pc = 0x1e2db4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 2));
    // 0x1e2db8: 0x1020001f
    ctx->pc = 0x1E2DB8u;
    {
        const bool branch_taken_0x1e2db8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e2db8) {
            ctx->pc = 0x1E2E38u;
            goto label_1e2e38;
        }
    }
    ctx->pc = 0x1E2DC0u;
    // 0x1e2dc0: 0x8f828cf0
    ctx->pc = 0x1e2dc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
    // 0x1e2dc4: 0xae22000c
    ctx->pc = 0x1e2dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1e2dc8: 0xa6200006
    ctx->pc = 0x1e2dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 0));
label_1e2dcc:
    // 0x1e2dcc: 0x8e22000c
    ctx->pc = 0x1e2dccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e2dd0: 0x8c420000
    ctx->pc = 0x1e2dd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2dd4: 0xae220008
    ctx->pc = 0x1e2dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1e2dd8: 0x8e23000c
    ctx->pc = 0x1e2dd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e2ddc: 0x8e220010
    ctx->pc = 0x1e2ddcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e2de0: 0x10620003
    ctx->pc = 0x1E2DE0u;
    {
        const bool branch_taken_0x1e2de0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e2de0) {
            ctx->pc = 0x1E2DF0u;
            goto label_1e2df0;
        }
    }
    ctx->pc = 0x1E2DE8u;
    // 0x1e2de8: 0xae230010
    ctx->pc = 0x1e2de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1e2dec: 0x0
    ctx->pc = 0x1e2decu;
    // NOP
label_1e2df0:
    // 0x1e2df0: 0x8e250008
    ctx->pc = 0x1e2df0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e2df4: 0x3c020027
    ctx->pc = 0x1e2df4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e2df8: 0x2442a2a0
    ctx->pc = 0x1e2df8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294943392));
    // 0x1e2dfc: 0x72202628
    ctx->pc = 0x1e2dfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e2e00: 0x51840
    ctx->pc = 0x1e2e00u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1e2e04: 0x651821
    ctx->pc = 0x1e2e04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e2e08: 0x31880
    ctx->pc = 0x1e2e08u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e2e0c: 0xc071b74
    ctx->pc = 0x1E2E0Cu;
    SET_GPR_U32(ctx, 31, 0x1E2E14u);
    ctx->pc = 0x1E2E10u;
    SET_GPR_U32(ctx, 25, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1C6DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ptmf_scall_0x1c6dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2E14u; }
        else if (ctx->pc != 0x1E2E14u) { ctx->pc = 0x1E2E14u; }
    }
    if (ctx->pc != 0x1E2E14u) { return; }
    ctx->pc = 0x1E2E14u;
    // 0x1e2e14: 0x8e23000c
    ctx->pc = 0x1e2e14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e2e18: 0xaf838cf0
    ctx->pc = 0x1e2e18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937840), GPR_U32(ctx, 3));
    // 0x1e2e1c: 0x82230004
    ctx->pc = 0x1e2e1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e2e20: 0x14600005
    ctx->pc = 0x1E2E20u;
    {
        const bool branch_taken_0x1e2e20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e2e20) {
            ctx->pc = 0x1E2E38u;
            goto label_1e2e38;
        }
    }
    ctx->pc = 0x1E2E28u;
    // 0x1e2e28: 0x86230006
    ctx->pc = 0x1e2e28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1e2e2c: 0x1060ffe7
    ctx->pc = 0x1E2E2Cu;
    {
        const bool branch_taken_0x1e2e2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e2e2c) {
            ctx->pc = 0x1E2DCCu;
            goto label_1e2dcc;
        }
    }
    ctx->pc = 0x1E2E34u;
    // 0x1e2e34: 0x0
    ctx->pc = 0x1e2e34u;
    // NOP
label_1e2e38:
    // 0x1e2e38: 0x7bbf0020
    ctx->pc = 0x1e2e38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2e3c: 0x7bb10010
    ctx->pc = 0x1e2e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2e40: 0x7bb00000
    ctx->pc = 0x1e2e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2e44: 0x3e00008
    ctx->pc = 0x1E2E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2E48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2D58u: goto label_1e2d58;
            case 0x1E2D7Cu: goto label_1e2d7c;
            case 0x1E2D88u: goto label_1e2d88;
            case 0x1E2DA4u: goto label_1e2da4;
            case 0x1E2DCCu: goto label_1e2dcc;
            case 0x1E2DF0u: goto label_1e2df0;
            case 0x1E2E38u: goto label_1e2e38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2E4Cu;
}
