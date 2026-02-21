#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: new_iob
// Address: 0x306970 - 0x3069e0
void new_iob_0x306970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x306970u;

    // 0x306970: 0x3c04003e
    ctx->pc = 0x306970u;
    SET_GPR_U32(ctx, 4, ((uint32_t)62 << 16));
    // 0x306974: 0x0
    ctx->pc = 0x306974u;
    // NOP
label_306978:
    // 0x306978: 0x42000039
    ctx->pc = 0x306978u;
    ctx->cop0_status &= ~0x10000; // DI: clear EIE (R5900)
    // 0x30697c: 0x40f
    ctx->pc = 0x30697cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x306980: 0x40026000
    ctx->pc = 0x306980u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x306984: 0x3c030001
    ctx->pc = 0x306984u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x306988: 0x431024
    ctx->pc = 0x306988u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30698c: 0x1440fffa
    ctx->pc = 0x30698Cu;
    {
        const bool branch_taken_0x30698c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x30698c) {
            ctx->pc = 0x306978u;
            goto label_306978;
        }
    }
    ctx->pc = 0x306994u;
    // 0x306994: 0x24836a50
    ctx->pc = 0x306994u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 27216));
    // 0x306998: 0x24640100
    ctx->pc = 0x306998u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 256));
    // 0x30699c: 0x64102b
    ctx->pc = 0x30699cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3069a0: 0x1040000c
    ctx->pc = 0x3069A0u;
    {
        const bool branch_taken_0x3069a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3069A4u;
        SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
        if (branch_taken_0x3069a0) {
            ctx->pc = 0x3069D4u;
            goto label_3069d4;
        }
    }
    ctx->pc = 0x3069A8u;
    // 0x3069a8: 0x8c620004
    ctx->pc = 0x3069a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3069ac: 0x0
    ctx->pc = 0x3069acu;
    // NOP
label_3069b0:
    // 0x3069b0: 0x54400005
    ctx->pc = 0x3069B0u;
    {
        const bool branch_taken_0x3069b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x3069b0) {
            ctx->pc = 0x3069B4u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
            ctx->pc = 0x3069C8u;
            goto label_3069c8;
        }
    }
    ctx->pc = 0x3069B8u;
    // 0x3069b8: 0xac650004
    ctx->pc = 0x3069b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x3069bc: 0x42000038
    ctx->pc = 0x3069bcu;
    ctx->cop0_status |= 0x10000; // EI: set EIE (R5900)
    // 0x3069c0: 0x3e00008
    ctx->pc = 0x3069C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3069C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x306978u: goto label_306978;
            case 0x3069B0u: goto label_3069b0;
            case 0x3069C8u: goto label_3069c8;
            case 0x3069D4u: goto label_3069d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3069C8u;
label_3069c8:
    // 0x3069c8: 0x64102b
    ctx->pc = 0x3069c8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3069cc: 0x5440fff8
    ctx->pc = 0x3069CCu;
    {
        const bool branch_taken_0x3069cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x3069cc) {
            ctx->pc = 0x3069D0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->pc = 0x3069B0u;
            goto label_3069b0;
        }
    }
    ctx->pc = 0x3069D4u;
label_3069d4:
    // 0x3069d4: 0x42000038
    ctx->pc = 0x3069d4u;
    ctx->cop0_status |= 0x10000; // EI: set EIE (R5900)
    // 0x3069d8: 0x3e00008
    ctx->pc = 0x3069D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3069DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x306978u: goto label_306978;
            case 0x3069B0u: goto label_3069b0;
            case 0x3069C8u: goto label_3069c8;
            case 0x3069D4u: goto label_3069d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3069E0u;
}
