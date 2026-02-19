#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fptoui
// Address: 0x2fa088 - 0x2fa120
void fptoui_0x2fa088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2fa088u;

    // 0x2fa088: 0x27bdffd0
    ctx->pc = 0x2fa088u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fa08c: 0xffbf0020
    ctx->pc = 0x2fa08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fa090: 0x27a40010
    ctx->pc = 0x2fa090u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa094: 0xe7ac0010
    ctx->pc = 0x2fa094u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2fa098: 0xc0be5be
    ctx->pc = 0x2FA098u;
    SET_GPR_U32(ctx, 31, 0x2FA0A0u);
    ctx->pc = 0x2FA09Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F96F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x2f96f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA0A0u; }
    }
    if (ctx->pc != 0x2FA0A0u) { return; }
    ctx->pc = 0x2FA0A0u;
    // 0x2fa0a0: 0x8fa30000
    ctx->pc = 0x2fa0a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa0a4: 0x38620002
    ctx->pc = 0x2fa0a4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
    // 0x2fa0a8: 0x10400003
    ctx->pc = 0x2FA0A8u;
    {
        const bool branch_taken_0x2fa0a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FA0ACu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2fa0a8) {
            ctx->pc = 0x2FA0B8u;
            goto label_2fa0b8;
        }
    }
    ctx->pc = 0x2FA0B0u;
    // 0x2fa0b0: 0x10400003
    ctx->pc = 0x2FA0B0u;
    {
        const bool branch_taken_0x2fa0b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FA0B4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x2fa0b0) {
            ctx->pc = 0x2FA0C0u;
            goto label_2fa0c0;
        }
    }
    ctx->pc = 0x2FA0B8u;
label_2fa0b8:
    // 0x2fa0b8: 0x10000016
    ctx->pc = 0x2FA0B8u;
    {
        const bool branch_taken_0x2fa0b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FA0BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2fa0b8) {
            ctx->pc = 0x2FA114u;
            goto label_2fa114;
        }
    }
    ctx->pc = 0x2FA0C0u;
label_2fa0c0:
    // 0x2fa0c0: 0x14400014
    ctx->pc = 0x2FA0C0u;
    {
        const bool branch_taken_0x2fa0c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FA0C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2fa0c0) {
            ctx->pc = 0x2FA114u;
            goto label_2fa114;
        }
    }
    ctx->pc = 0x2FA0C8u;
    // 0x2fa0c8: 0x38620004
    ctx->pc = 0x2fa0c8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
    // 0x2fa0cc: 0x10400005
    ctx->pc = 0x2FA0CCu;
    {
        const bool branch_taken_0x2fa0cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FA0D0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x2fa0cc) {
            ctx->pc = 0x2FA0E4u;
            goto label_2fa0e4;
        }
    }
    ctx->pc = 0x2FA0D4u;
    // 0x2fa0d4: 0x480fff8
    ctx->pc = 0x2FA0D4u;
    {
        const bool branch_taken_0x2fa0d4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2FA0D8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 32));
        if (branch_taken_0x2fa0d4) {
            ctx->pc = 0x2FA0B8u;
            goto label_2fa0b8;
        }
    }
    ctx->pc = 0x2FA0DCu;
    // 0x2fa0dc: 0x54400004
    ctx->pc = 0x2FA0DCu;
    {
        const bool branch_taken_0x2fa0dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2fa0dc) {
            ctx->pc = 0x2FA0E0u;
            SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 31));
            ctx->pc = 0x2FA0F0u;
            goto label_2fa0f0;
        }
    }
    ctx->pc = 0x2FA0E4u;
label_2fa0e4:
    // 0x2fa0e4: 0x3c02ffff
    ctx->pc = 0x2fa0e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2fa0e8: 0x1000000a
    ctx->pc = 0x2FA0E8u;
    {
        const bool branch_taken_0x2fa0e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FA0ECu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x2fa0e8) {
            ctx->pc = 0x2FA114u;
            goto label_2fa114;
        }
    }
    ctx->pc = 0x2FA0F0u;
label_2fa0f0:
    // 0x2fa0f0: 0x54400005
    ctx->pc = 0x2FA0F0u;
    {
        const bool branch_taken_0x2fa0f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2fa0f0) {
            ctx->pc = 0x2FA0F4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
            ctx->pc = 0x2FA108u;
            goto label_2fa108;
        }
    }
    ctx->pc = 0x2FA0F8u;
    // 0x2fa0f8: 0x8fa3000c
    ctx->pc = 0x2fa0f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2fa0fc: 0x2482ffe2
    ctx->pc = 0x2fa0fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x2fa100: 0x10000004
    ctx->pc = 0x2FA100u;
    {
        const bool branch_taken_0x2fa100 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FA104u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        if (branch_taken_0x2fa100) {
            ctx->pc = 0x2FA114u;
            goto label_2fa114;
        }
    }
    ctx->pc = 0x2FA108u;
label_2fa108:
    // 0x2fa108: 0x8fa3000c
    ctx->pc = 0x2fa108u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2fa10c: 0x441023
    ctx->pc = 0x2fa10cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fa110: 0x431006
    ctx->pc = 0x2fa110u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_2fa114:
    // 0x2fa114: 0xdfbf0020
    ctx->pc = 0x2fa114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa118: 0x3e00008
    ctx->pc = 0x2FA118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA11Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FA0B8u: goto label_2fa0b8;
            case 0x2FA0C0u: goto label_2fa0c0;
            case 0x2FA0E4u: goto label_2fa0e4;
            case 0x2FA0F0u: goto label_2fa0f0;
            case 0x2FA108u: goto label_2fa108;
            case 0x2FA114u: goto label_2fa114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2FA120u;
}
