#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: draw_shop_screen
// Address: 0x28bd48 - 0x28be2c
void draw_shop_screen_0x28bd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28bd48u;

    // 0x28bd48: 0x27bdffb0
    ctx->pc = 0x28bd48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28bd4c: 0xffbf0040
    ctx->pc = 0x28bd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28bd50: 0xffb30030
    ctx->pc = 0x28bd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28bd54: 0xffb20020
    ctx->pc = 0x28bd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28bd58: 0xffb10010
    ctx->pc = 0x28bd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28bd5c: 0xffb00000
    ctx->pc = 0x28bd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28bd60: 0x80902d
    ctx->pc = 0x28bd60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd64: 0x8e4300fc
    ctx->pc = 0x28bd64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x28bd68: 0x24020001
    ctx->pc = 0x28bd68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bd6c: 0x10620003
    ctx->pc = 0x28BD6Cu;
    {
        const bool branch_taken_0x28bd6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28BD70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x28bd6c) {
            ctx->pc = 0x28BD7Cu;
            goto label_28bd7c;
        }
    }
    ctx->pc = 0x28BD74u;
    // 0x28bd74: 0x14620027
    ctx->pc = 0x28BD74u;
    {
        const bool branch_taken_0x28bd74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x28BD78u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x28bd74) {
            ctx->pc = 0x28BE14u;
            goto label_28be14;
        }
    }
    ctx->pc = 0x28BD7Cu;
label_28bd7c:
    // 0x28bd7c: 0x3c100035
    ctx->pc = 0x28bd7cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x28bd80: 0x2610b4c8
    ctx->pc = 0x28bd80u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x28bd84: 0x8e420000
    ctx->pc = 0x28bd84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28bd88: 0x24110018
    ctx->pc = 0x28bd88u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28bd8c: 0x511018
    ctx->pc = 0x28bd8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28bd90: 0x2021021
    ctx->pc = 0x28bd90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28bd94: 0x8c44000c
    ctx->pc = 0x28bd94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28bd98: 0xc0b0ce8
    ctx->pc = 0x28BD98u;
    SET_GPR_U32(ctx, 31, 0x28BDA0u);
    ctx->pc = 0x28BD9Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BDA0u; }
    }
    if (ctx->pc != 0x28BDA0u) { return; }
    ctx->pc = 0x28BDA0u;
    // 0x28bda0: 0x8e420000
    ctx->pc = 0x28bda0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28bda4: 0x511818
    ctx->pc = 0x28bda4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28bda8: 0x701021
    ctx->pc = 0x28bda8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28bdac: 0x8c440010
    ctx->pc = 0x28bdacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28bdb0: 0xc0b0ce8
    ctx->pc = 0x28BDB0u;
    SET_GPR_U32(ctx, 31, 0x28BDB8u);
    ctx->pc = 0x28BDB4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BDB8u; }
    }
    if (ctx->pc != 0x28BDB8u) { return; }
    ctx->pc = 0x28BDB8u;
    // 0x28bdb8: 0x3c020035
    ctx->pc = 0x28bdb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28bdbc: 0x8c42b52c
    ctx->pc = 0x28bdbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948140)));
    // 0x28bdc0: 0x18400013
    ctx->pc = 0x28BDC0u;
    {
        const bool branch_taken_0x28bdc0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28BDC4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28bdc0) {
            ctx->pc = 0x28BE10u;
            goto label_28be10;
        }
    }
    ctx->pc = 0x28BDC8u;
    // 0x28bdc8: 0x3c020035
    ctx->pc = 0x28bdc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28bdcc: 0x2453b530
    ctx->pc = 0x28bdccu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294948144));
    // 0x28bdd0: 0x3c110035
    ctx->pc = 0x28bdd0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)53 << 16));
    // 0x28bdd4: 0x101880
    ctx->pc = 0x28bdd4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
label_28bdd8:
    // 0x28bdd8: 0x8e420000
    ctx->pc = 0x28bdd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28bddc: 0x21200
    ctx->pc = 0x28bddcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x28bde0: 0x621821
    ctx->pc = 0x28bde0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28bde4: 0x731821
    ctx->pc = 0x28bde4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x28bde8: 0x8c640000
    ctx->pc = 0x28bde8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28bdec: 0x50800004
    ctx->pc = 0x28BDECu;
    {
        const bool branch_taken_0x28bdec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x28bdec) {
            ctx->pc = 0x28BDF0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x28BE00u;
            goto label_28be00;
        }
    }
    ctx->pc = 0x28BDF4u;
    // 0x28bdf4: 0xc0b0ce8
    ctx->pc = 0x28BDF4u;
    SET_GPR_U32(ctx, 31, 0x28BDFCu);
    ctx->pc = 0x28BDF8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BDFCu; }
    }
    if (ctx->pc != 0x28BDFCu) { return; }
    ctx->pc = 0x28BDFCu;
    // 0x28bdfc: 0x26100001
    ctx->pc = 0x28bdfcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_28be00:
    // 0x28be00: 0x8e22b52c
    ctx->pc = 0x28be00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294948140)));
    // 0x28be04: 0x202102a
    ctx->pc = 0x28be04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x28be08: 0x1440fff3
    ctx->pc = 0x28BE08u;
    {
        const bool branch_taken_0x28be08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28BE0Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x28be08) {
            ctx->pc = 0x28BDD8u;
            goto label_28bdd8;
        }
    }
    ctx->pc = 0x28BE10u;
label_28be10:
    // 0x28be10: 0xdfbf0040
    ctx->pc = 0x28be10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28be14:
    // 0x28be14: 0xdfb30030
    ctx->pc = 0x28be14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28be18: 0xdfb20020
    ctx->pc = 0x28be18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28be1c: 0xdfb10010
    ctx->pc = 0x28be1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28be20: 0xdfb00000
    ctx->pc = 0x28be20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28be24: 0x3e00008
    ctx->pc = 0x28BE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BE28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28BD7Cu: goto label_28bd7c;
            case 0x28BDD8u: goto label_28bdd8;
            case 0x28BE00u: goto label_28be00;
            case 0x28BE10u: goto label_28be10;
            case 0x28BE14u: goto label_28be14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28BE2Cu;
}
