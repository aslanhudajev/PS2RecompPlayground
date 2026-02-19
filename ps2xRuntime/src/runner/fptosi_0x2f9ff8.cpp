#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fptosi
// Address: 0x2f9ff8 - 0x2fa084
void fptosi_0x2f9ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f9ff8u;

    // 0x2f9ff8: 0x27bdffd0
    ctx->pc = 0x2f9ff8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f9ffc: 0xffbf0020
    ctx->pc = 0x2f9ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fa000: 0x27a40010
    ctx->pc = 0x2fa000u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa004: 0xe7ac0010
    ctx->pc = 0x2fa004u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2fa008: 0xc0be5be
    ctx->pc = 0x2FA008u;
    SET_GPR_U32(ctx, 31, 0x2FA010u);
    ctx->pc = 0x2FA00Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F96F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x2f96f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA010u; }
    }
    if (ctx->pc != 0x2FA010u) { return; }
    ctx->pc = 0x2FA010u;
    // 0x2fa010: 0x8fa30000
    ctx->pc = 0x2fa010u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa014: 0x38620002
    ctx->pc = 0x2fa014u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
    // 0x2fa018: 0x10400003
    ctx->pc = 0x2FA018u;
    {
        const bool branch_taken_0x2fa018 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FA01Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2fa018) {
            ctx->pc = 0x2FA028u;
            goto label_2fa028;
        }
    }
    ctx->pc = 0x2FA020u;
    // 0x2fa020: 0x10400003
    ctx->pc = 0x2FA020u;
    {
        const bool branch_taken_0x2fa020 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FA024u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x2fa020) {
            ctx->pc = 0x2FA030u;
            goto label_2fa030;
        }
    }
    ctx->pc = 0x2FA028u;
label_2fa028:
    // 0x2fa028: 0x10000013
    ctx->pc = 0x2FA028u;
    {
        const bool branch_taken_0x2fa028 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FA02Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2fa028) {
            ctx->pc = 0x2FA078u;
            goto label_2fa078;
        }
    }
    ctx->pc = 0x2FA030u;
label_2fa030:
    // 0x2fa030: 0x10400005
    ctx->pc = 0x2FA030u;
    {
        const bool branch_taken_0x2fa030 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FA034u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x2fa030) {
            ctx->pc = 0x2FA048u;
            goto label_2fa048;
        }
    }
    ctx->pc = 0x2FA038u;
    // 0x2fa038: 0x480fffb
    ctx->pc = 0x2FA038u;
    {
        const bool branch_taken_0x2fa038 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2FA03Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 31));
        if (branch_taken_0x2fa038) {
            ctx->pc = 0x2FA028u;
            goto label_2fa028;
        }
    }
    ctx->pc = 0x2FA040u;
    // 0x2fa040: 0x14400007
    ctx->pc = 0x2FA040u;
    {
        const bool branch_taken_0x2fa040 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FA044u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 30));
        if (branch_taken_0x2fa040) {
            ctx->pc = 0x2FA060u;
            goto label_2fa060;
        }
    }
    ctx->pc = 0x2FA048u;
label_2fa048:
    // 0x2fa048: 0x8fa30004
    ctx->pc = 0x2fa048u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fa04c: 0x3c027fff
    ctx->pc = 0x2fa04cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x2fa050: 0x3442ffff
    ctx->pc = 0x2fa050u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2fa054: 0x3c048000
    ctx->pc = 0x2fa054u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x2fa058: 0x10000007
    ctx->pc = 0x2FA058u;
    {
        const bool branch_taken_0x2fa058 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FA05Cu;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        if (branch_taken_0x2fa058) {
            ctx->pc = 0x2FA078u;
            goto label_2fa078;
        }
    }
    ctx->pc = 0x2FA060u;
label_2fa060:
    // 0x2fa060: 0x8fa2000c
    ctx->pc = 0x2fa060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2fa064: 0x641823
    ctx->pc = 0x2fa064u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fa068: 0x8fa50004
    ctx->pc = 0x2fa068u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fa06c: 0x621006
    ctx->pc = 0x2fa06cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2fa070: 0x22023
    ctx->pc = 0x2fa070u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2fa074: 0x85100b
    ctx->pc = 0x2fa074u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_2fa078:
    // 0x2fa078: 0xdfbf0020
    ctx->pc = 0x2fa078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa07c: 0x3e00008
    ctx->pc = 0x2FA07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA080u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FA028u: goto label_2fa028;
            case 0x2FA030u: goto label_2fa030;
            case 0x2FA048u: goto label_2fa048;
            case 0x2FA060u: goto label_2fa060;
            case 0x2FA078u: goto label_2fa078;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2FA084u;
}
