#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerAttackType
// Address: 0x2779a8 - 0x277a80
void PlayerAttackType_0x2779a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2779a8u;

    // 0x2779a8: 0x2482ffe0
    ctx->pc = 0x2779a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x2779ac: 0x2c420052
    ctx->pc = 0x2779acu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 82));
    // 0x2779b0: 0x10400024
    ctx->pc = 0x2779B0u;
    {
        const bool branch_taken_0x2779b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2779B4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 39));
        if (branch_taken_0x2779b0) {
            ctx->pc = 0x277A44u;
            goto label_277a44;
        }
    }
    ctx->pc = 0x2779B8u;
    // 0x2779b8: 0x1440002f
    ctx->pc = 0x2779B8u;
    {
        const bool branch_taken_0x2779b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2779BCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2779b8) {
            ctx->pc = 0x277A78u;
            goto label_277a78;
        }
    }
    ctx->pc = 0x2779C0u;
    // 0x2779c0: 0x2c82002c
    ctx->pc = 0x2779c0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 44));
    // 0x2779c4: 0x1440002c
    ctx->pc = 0x2779C4u;
    {
        const bool branch_taken_0x2779c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2779C8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2779c4) {
            ctx->pc = 0x277A78u;
            goto label_277a78;
        }
    }
    ctx->pc = 0x2779CCu;
    // 0x2779cc: 0x2c82003c
    ctx->pc = 0x2779ccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 60));
    // 0x2779d0: 0x14400029
    ctx->pc = 0x2779D0u;
    {
        const bool branch_taken_0x2779d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2779D4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2779d0) {
            ctx->pc = 0x277A78u;
            goto label_277a78;
        }
    }
    ctx->pc = 0x2779D8u;
    // 0x2779d8: 0x2c82003e
    ctx->pc = 0x2779d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 62));
    // 0x2779dc: 0x14400026
    ctx->pc = 0x2779DCu;
    {
        const bool branch_taken_0x2779dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2779E0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x2779dc) {
            ctx->pc = 0x277A78u;
            goto label_277a78;
        }
    }
    ctx->pc = 0x2779E4u;
    // 0x2779e4: 0x2c820047
    ctx->pc = 0x2779e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 71));
    // 0x2779e8: 0x14400023
    ctx->pc = 0x2779E8u;
    {
        const bool branch_taken_0x2779e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2779ECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x2779e8) {
            ctx->pc = 0x277A78u;
            goto label_277a78;
        }
    }
    ctx->pc = 0x2779F0u;
    // 0x2779f0: 0x2c82004f
    ctx->pc = 0x2779f0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 79));
    // 0x2779f4: 0x14400020
    ctx->pc = 0x2779F4u;
    {
        const bool branch_taken_0x2779f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2779F8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x2779f4) {
            ctx->pc = 0x277A78u;
            goto label_277a78;
        }
    }
    ctx->pc = 0x2779FCu;
    // 0x2779fc: 0x2c820056
    ctx->pc = 0x2779fcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 86));
    // 0x277a00: 0x1440001d
    ctx->pc = 0x277A00u;
    {
        const bool branch_taken_0x277a00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x277A04u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x277a00) {
            ctx->pc = 0x277A78u;
            goto label_277a78;
        }
    }
    ctx->pc = 0x277A08u;
    // 0x277a08: 0x2c820058
    ctx->pc = 0x277a08u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 88));
    // 0x277a0c: 0x1440001a
    ctx->pc = 0x277A0Cu;
    {
        const bool branch_taken_0x277a0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x277A10u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x277a0c) {
            ctx->pc = 0x277A78u;
            goto label_277a78;
        }
    }
    ctx->pc = 0x277A14u;
    // 0x277a14: 0x2c82005b
    ctx->pc = 0x277a14u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 91));
    // 0x277a18: 0x54400017
    ctx->pc = 0x277A18u;
    {
        const bool branch_taken_0x277a18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x277a18) {
            ctx->pc = 0x277A1Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
            ctx->pc = 0x277A78u;
            goto label_277a78;
        }
    }
    ctx->pc = 0x277A20u;
    // 0x277a20: 0x2c820063
    ctx->pc = 0x277a20u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 99));
    // 0x277a24: 0x14400014
    ctx->pc = 0x277A24u;
    {
        const bool branch_taken_0x277a24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x277A28u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x277a24) {
            ctx->pc = 0x277A78u;
            goto label_277a78;
        }
    }
    ctx->pc = 0x277A2Cu;
    // 0x277a2c: 0x2405000b
    ctx->pc = 0x277a2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11));
    // 0x277a30: 0x2403000a
    ctx->pc = 0x277a30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x277a34: 0x2402006a
    ctx->pc = 0x277a34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 106));
    // 0x277a38: 0x44102b
    ctx->pc = 0x277a38u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x277a3c: 0x1000000e
    ctx->pc = 0x277A3Cu;
    {
        const bool branch_taken_0x277a3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x277A40u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        if (branch_taken_0x277a3c) {
            ctx->pc = 0x277A78u;
            goto label_277a78;
        }
    }
    ctx->pc = 0x277A44u;
label_277a44:
    // 0x277a44: 0x2482ff78
    ctx->pc = 0x277a44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967160));
    // 0x277a48: 0x2c42000c
    ctx->pc = 0x277a48u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 12));
    // 0x277a4c: 0x1440000a
    ctx->pc = 0x277A4Cu;
    {
        const bool branch_taken_0x277a4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x277A50u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x277a4c) {
            ctx->pc = 0x277A78u;
            goto label_277a78;
        }
    }
    ctx->pc = 0x277A54u;
    // 0x277a54: 0x2482ff89
    ctx->pc = 0x277a54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967177));
    // 0x277a58: 0x2c420003
    ctx->pc = 0x277a58u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x277a5c: 0x14400006
    ctx->pc = 0x277A5Cu;
    {
        const bool branch_taken_0x277a5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x277A60u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x277a5c) {
            ctx->pc = 0x277A78u;
            goto label_277a78;
        }
    }
    ctx->pc = 0x277A64u;
    // 0x277a64: 0x2482fffc
    ctx->pc = 0x277a64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x277a68: 0x2c420004
    ctx->pc = 0x277a68u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 4));
    // 0x277a6c: 0x14400002
    ctx->pc = 0x277A6Cu;
    {
        const bool branch_taken_0x277a6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x277A70u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x277a6c) {
            ctx->pc = 0x277A78u;
            goto label_277a78;
        }
    }
    ctx->pc = 0x277A74u;
    // 0x277a74: 0x2c450001
    ctx->pc = 0x277a74u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 2), 1));
label_277a78:
    // 0x277a78: 0x3e00008
    ctx->pc = 0x277A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277A7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x277A44u: goto label_277a44;
            case 0x277A78u: goto label_277a78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x277A80u;
}
