#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fpdiv
// Address: 0x129b98 - 0x129cf8
void fpdiv_0x129b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129b98u;

    // 0x129b98: 0x27bdffb0
    ctx->pc = 0x129b98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x129b9c: 0xffb00030
    ctx->pc = 0x129b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x129ba0: 0x27a40020
    ctx->pc = 0x129ba0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x129ba4: 0xffbf0040
    ctx->pc = 0x129ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x129ba8: 0x3a0282d
    ctx->pc = 0x129ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129bac: 0xe7ac0020
    ctx->pc = 0x129bacu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x129bb0: 0xc04a586
    ctx->pc = 0x129BB0u;
    SET_GPR_U32(ctx, 31, 0x129BB8u);
    ctx->pc = 0x129BB4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x129618u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129BB8u; }
    }
    if (ctx->pc != 0x129BB8u) { return; }
    ctx->pc = 0x129BB8u;
    // 0x129bb8: 0x27b00010
    ctx->pc = 0x129bb8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x129bbc: 0x27a40024
    ctx->pc = 0x129bbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 36));
    // 0x129bc0: 0xc04a586
    ctx->pc = 0x129BC0u;
    SET_GPR_U32(ctx, 31, 0x129BC8u);
    ctx->pc = 0x129BC4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129618u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129BC8u; }
    }
    if (ctx->pc != 0x129BC8u) { return; }
    ctx->pc = 0x129BC8u;
    // 0x129bc8: 0x8fa70000
    ctx->pc = 0x129bc8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129bcc: 0x2ce20002
    ctx->pc = 0x129bccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 2));
    // 0x129bd0: 0x10400003
    ctx->pc = 0x129BD0u;
    {
        const bool branch_taken_0x129bd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x129BD4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x129bd0) {
            ctx->pc = 0x129BE0u;
            goto label_129be0;
        }
    }
    ctx->pc = 0x129BD8u;
    // 0x129bd8: 0x10000041
    ctx->pc = 0x129BD8u;
    {
        const bool branch_taken_0x129bd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129BDCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x129bd8) {
            ctx->pc = 0x129CE0u;
            goto label_129ce0;
        }
    }
    ctx->pc = 0x129BE0u;
label_129be0:
    // 0x129be0: 0x8fa60010
    ctx->pc = 0x129be0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129be4: 0x2cc20002
    ctx->pc = 0x129be4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 2));
    // 0x129be8: 0x1440003d
    ctx->pc = 0x129BE8u;
    {
        const bool branch_taken_0x129be8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x129BECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x129be8) {
            ctx->pc = 0x129CE0u;
            goto label_129ce0;
        }
    }
    ctx->pc = 0x129BF0u;
    // 0x129bf0: 0x8fa20004
    ctx->pc = 0x129bf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x129bf4: 0x38e40004
    ctx->pc = 0x129bf4u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 7), 4));
    // 0x129bf8: 0x8fa30014
    ctx->pc = 0x129bf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x129bfc: 0x431026
    ctx->pc = 0x129bfcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x129c00: 0x10800004
    ctx->pc = 0x129C00u;
    {
        const bool branch_taken_0x129c00 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x129C04u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x129c00) {
            ctx->pc = 0x129C14u;
            goto label_129c14;
        }
    }
    ctx->pc = 0x129C08u;
    // 0x129c08: 0x38e20002
    ctx->pc = 0x129c08u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 7), 2));
    // 0x129c0c: 0x14400006
    ctx->pc = 0x129C0Cu;
    {
        const bool branch_taken_0x129c0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x129C10u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x129c0c) {
            ctx->pc = 0x129C28u;
            goto label_129c28;
        }
    }
    ctx->pc = 0x129C14u;
label_129c14:
    // 0x129c14: 0x14e60032
    ctx->pc = 0x129C14u;
    {
        const bool branch_taken_0x129c14 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 6));
        ctx->pc = 0x129C18u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x129c14) {
            ctx->pc = 0x129CE0u;
            goto label_129ce0;
        }
    }
    ctx->pc = 0x129C1Cu;
    // 0x129c1c: 0x3c020075
    ctx->pc = 0x129c1cu;
    SET_GPR_S32(ctx, 2, ((uint32_t)117 << 16));
    // 0x129c20: 0x1000002f
    ctx->pc = 0x129C20u;
    {
        const bool branch_taken_0x129c20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129C24u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960392));
        if (branch_taken_0x129c20) {
            ctx->pc = 0x129CE0u;
            goto label_129ce0;
        }
    }
    ctx->pc = 0x129C28u;
label_129c28:
    // 0x129c28: 0x14400005
    ctx->pc = 0x129C28u;
    {
        const bool branch_taken_0x129c28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x129C2Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x129c28) {
            ctx->pc = 0x129C40u;
            goto label_129c40;
        }
    }
    ctx->pc = 0x129C30u;
    // 0x129c30: 0xafa0000c
    ctx->pc = 0x129c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x129c34: 0x3a0202d
    ctx->pc = 0x129c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c38: 0x10000029
    ctx->pc = 0x129C38u;
    {
        const bool branch_taken_0x129c38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129C3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x129c38) {
            ctx->pc = 0x129CE0u;
            goto label_129ce0;
        }
    }
    ctx->pc = 0x129C40u;
label_129c40:
    // 0x129c40: 0x14400005
    ctx->pc = 0x129C40u;
    {
        const bool branch_taken_0x129c40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x129C44u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x129c40) {
            ctx->pc = 0x129C58u;
            goto label_129c58;
        }
    }
    ctx->pc = 0x129C48u;
    // 0x129c48: 0x24020004
    ctx->pc = 0x129c48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x129c4c: 0x3a0202d
    ctx->pc = 0x129c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c50: 0x10000023
    ctx->pc = 0x129C50u;
    {
        const bool branch_taken_0x129c50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129C54u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x129c50) {
            ctx->pc = 0x129CE0u;
            goto label_129ce0;
        }
    }
    ctx->pc = 0x129C58u;
label_129c58:
    // 0x129c58: 0x8fa20018
    ctx->pc = 0x129c58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x129c5c: 0x8fa4000c
    ctx->pc = 0x129c5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x129c60: 0x8fa8001c
    ctx->pc = 0x129c60u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x129c64: 0x621023
    ctx->pc = 0x129c64u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x129c68: 0x88302b
    ctx->pc = 0x129c68u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x129c6c: 0x10c00005
    ctx->pc = 0x129C6Cu;
    {
        const bool branch_taken_0x129c6c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x129C70u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x129c6c) {
            ctx->pc = 0x129C84u;
            goto label_129c84;
        }
    }
    ctx->pc = 0x129C74u;
    // 0x129c74: 0x2442ffff
    ctx->pc = 0x129c74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x129c78: 0x42040
    ctx->pc = 0x129c78u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x129c7c: 0xafa20008
    ctx->pc = 0x129c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x129c80: 0x88302b
    ctx->pc = 0x129c80u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_129c84:
    // 0x129c84: 0x3c024000
    ctx->pc = 0x129c84u;
    SET_GPR_S32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x129c88: 0x10000002
    ctx->pc = 0x129C88u;
    {
        const bool branch_taken_0x129c88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129C8Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x129c88) {
            ctx->pc = 0x129C94u;
            goto label_129c94;
        }
    }
    ctx->pc = 0x129C90u;
label_129c90:
    // 0x129c90: 0x88302b
    ctx->pc = 0x129c90u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_129c94:
    // 0x129c94: 0x54c00004
    ctx->pc = 0x129C94u;
    {
        const bool branch_taken_0x129c94 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x129c94) {
            ctx->pc = 0x129C98u;
            SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
            ctx->pc = 0x129CA8u;
            goto label_129ca8;
        }
    }
    ctx->pc = 0x129C9Cu;
    // 0x129c9c: 0xe23825
    ctx->pc = 0x129c9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x129ca0: 0x882023
    ctx->pc = 0x129ca0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x129ca4: 0x21042
    ctx->pc = 0x129ca4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_129ca8:
    // 0x129ca8: 0x1440fff9
    ctx->pc = 0x129CA8u;
    {
        const bool branch_taken_0x129ca8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x129CACu;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x129ca8) {
            ctx->pc = 0x129C90u;
            goto label_129c90;
        }
    }
    ctx->pc = 0x129CB0u;
    // 0x129cb0: 0x30e3007f
    ctx->pc = 0x129cb0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 7), 127));
    // 0x129cb4: 0x24020040
    ctx->pc = 0x129cb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x129cb8: 0x54620008
    ctx->pc = 0x129CB8u;
    {
        const bool branch_taken_0x129cb8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x129cb8) {
            ctx->pc = 0x129CBCu;
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
            ctx->pc = 0x129CDCu;
            goto label_129cdc;
        }
    }
    ctx->pc = 0x129CC0u;
    // 0x129cc0: 0x30e20080
    ctx->pc = 0x129cc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 128));
    // 0x129cc4: 0x10400003
    ctx->pc = 0x129CC4u;
    {
        const bool branch_taken_0x129cc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x129CC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 64));
        if (branch_taken_0x129cc4) {
            ctx->pc = 0x129CD4u;
            goto label_129cd4;
        }
    }
    ctx->pc = 0x129CCCu;
    // 0x129ccc: 0x10000002
    ctx->pc = 0x129CCCu;
    {
        const bool branch_taken_0x129ccc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129CD0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 64));
        if (branch_taken_0x129ccc) {
            ctx->pc = 0x129CD8u;
            goto label_129cd8;
        }
    }
    ctx->pc = 0x129CD4u;
label_129cd4:
    // 0x129cd4: 0x44380b
    ctx->pc = 0x129cd4u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
label_129cd8:
    // 0x129cd8: 0xaca7000c
    ctx->pc = 0x129cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
label_129cdc:
    // 0x129cdc: 0xa0202d
    ctx->pc = 0x129cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_129ce0:
    // 0x129ce0: 0xc04a542
    ctx->pc = 0x129CE0u;
    SET_GPR_U32(ctx, 31, 0x129CE8u);
    ctx->pc = 0x129508u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x129508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129CE8u; }
    }
    if (ctx->pc != 0x129CE8u) { return; }
    ctx->pc = 0x129CE8u;
    // 0x129ce8: 0xdfbf0040
    ctx->pc = 0x129ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129cec: 0xdfb00030
    ctx->pc = 0x129cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129cf0: 0x3e00008
    ctx->pc = 0x129CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129CF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129BE0u: goto label_129be0;
            case 0x129C14u: goto label_129c14;
            case 0x129C28u: goto label_129c28;
            case 0x129C40u: goto label_129c40;
            case 0x129C58u: goto label_129c58;
            case 0x129C84u: goto label_129c84;
            case 0x129C90u: goto label_129c90;
            case 0x129C94u: goto label_129c94;
            case 0x129CA8u: goto label_129ca8;
            case 0x129CD4u: goto label_129cd4;
            case 0x129CD8u: goto label_129cd8;
            case 0x129CDCu: goto label_129cdc;
            case 0x129CE0u: goto label_129ce0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129CF8u;
}
