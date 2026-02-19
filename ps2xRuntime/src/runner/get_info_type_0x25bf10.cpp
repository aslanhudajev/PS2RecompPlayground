#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_info_type
// Address: 0x25bf10 - 0x25c114
void get_info_type_0x25bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25bf10u;

label_25bf10:
    // 0x25bf10: 0x27bdff30
    ctx->pc = 0x25bf10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x25bf14: 0xffbf00c0
    ctx->pc = 0x25bf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x25bf18: 0xffbe00b0
    ctx->pc = 0x25bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x25bf1c: 0xffb700a0
    ctx->pc = 0x25bf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x25bf20: 0xffb60090
    ctx->pc = 0x25bf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x25bf24: 0xffb50080
    ctx->pc = 0x25bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x25bf28: 0xffb40070
    ctx->pc = 0x25bf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x25bf2c: 0xffb30060
    ctx->pc = 0x25bf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x25bf30: 0xffb20050
    ctx->pc = 0x25bf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x25bf34: 0xffb10040
    ctx->pc = 0x25bf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x25bf38: 0xffb00030
    ctx->pc = 0x25bf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x25bf3c: 0x80802d
    ctx->pc = 0x25bf3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bf40: 0xa0a02d
    ctx->pc = 0x25bf40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bf44: 0xc0a82d
    ctx->pc = 0x25bf44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bf48: 0xe0982d
    ctx->pc = 0x25bf48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bf4c: 0x100b82d
    ctx->pc = 0x25bf4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bf50: 0x8e030000
    ctx->pc = 0x25bf50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25bf54: 0x2402ffff
    ctx->pc = 0x25bf54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25bf58: 0x1462004c
    ctx->pc = 0x25BF58u;
    {
        const bool branch_taken_0x25bf58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25BF5Cu;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25bf58) {
            ctx->pc = 0x25C08Cu;
            goto label_25c08c;
        }
    }
    ctx->pc = 0x25BF60u;
    // 0x25bf60: 0x8e120004
    ctx->pc = 0x25bf60u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25bf64: 0x86030008
    ctx->pc = 0x25bf64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25bf68: 0x3c020032
    ctx->pc = 0x25bf68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25bf6c: 0x24040050
    ctx->pc = 0x25bf6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 80));
    // 0x25bf70: 0x642018
    ctx->pc = 0x25bf70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25bf74: 0x8c42fa60
    ctx->pc = 0x25bf74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965856)));
    // 0x25bf78: 0x822021
    ctx->pc = 0x25bf78u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25bf7c: 0x3a0282d
    ctx->pc = 0x25bf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bf80: 0x27a60004
    ctx->pc = 0x25bf80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x25bf84: 0x27a70008
    ctx->pc = 0x25bf84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 8));
    // 0x25bf88: 0x27a8000c
    ctx->pc = 0x25bf88u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 12));
    // 0x25bf8c: 0xc096fc4
    ctx->pc = 0x25BF8Cu;
    SET_GPR_U32(ctx, 31, 0x25BF94u);
    ctx->pc = 0x25BF90u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x25BF10u;
    goto label_25bf10;
    ctx->pc = 0x25BF94u;
label_25bf94:
    // 0x25bf94: 0x24110001
    ctx->pc = 0x25bf94u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25bf98: 0x232102a
    ctx->pc = 0x25bf98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x25bf9c: 0x10400031
    ctx->pc = 0x25BF9Cu;
    {
        const bool branch_taken_0x25bf9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25BFA0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x25bf9c) {
            ctx->pc = 0x25C064u;
            goto label_25c064;
        }
    }
    ctx->pc = 0x25BFA4u;
    // 0x25bfa4: 0x3c020032
    ctx->pc = 0x25bfa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25bfa8: 0x2456f9f8
    ctx->pc = 0x25bfa8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x25bfac: 0x111040
    ctx->pc = 0x25bfacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 1));
label_25bfb0:
    // 0x25bfb0: 0x2021021
    ctx->pc = 0x25bfb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25bfb4: 0x84430000
    ctx->pc = 0x25bfb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25bfb8: 0x24040050
    ctx->pc = 0x25bfb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 80));
    // 0x25bfbc: 0x642018
    ctx->pc = 0x25bfbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25bfc0: 0x8ec20068
    ctx->pc = 0x25bfc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 104)));
    // 0x25bfc4: 0x822021
    ctx->pc = 0x25bfc4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25bfc8: 0x27a50014
    ctx->pc = 0x25bfc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 20));
    // 0x25bfcc: 0x27a60018
    ctx->pc = 0x25bfccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 24));
    // 0x25bfd0: 0x27a7001c
    ctx->pc = 0x25bfd0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 28));
    // 0x25bfd4: 0x27a80020
    ctx->pc = 0x25bfd4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 32));
    // 0x25bfd8: 0xc096fc4
    ctx->pc = 0x25BFD8u;
    SET_GPR_U32(ctx, 31, 0x25BFE0u);
    ctx->pc = 0x25BFDCu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 36));
    ctx->pc = 0x25BF10u;
    goto label_25bf10;
    ctx->pc = 0x25BFE0u;
label_25bfe0:
    // 0x25bfe0: 0x8fa30014
    ctx->pc = 0x25bfe0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x25bfe4: 0x8fa20000
    ctx->pc = 0x25bfe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bfe8: 0x54620001
    ctx->pc = 0x25BFE8u;
    {
        const bool branch_taken_0x25bfe8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25bfe8) {
            ctx->pc = 0x25BFECu;
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x25BFF0u;
            goto label_25bff0;
        }
    }
    ctx->pc = 0x25BFF0u;
label_25bff0:
    // 0x25bff0: 0x8fa30018
    ctx->pc = 0x25bff0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25bff4: 0x8fa20004
    ctx->pc = 0x25bff4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x25bff8: 0x54620001
    ctx->pc = 0x25BFF8u;
    {
        const bool branch_taken_0x25bff8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25bff8) {
            ctx->pc = 0x25BFFCu;
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->pc = 0x25C000u;
            goto label_25c000;
        }
    }
    ctx->pc = 0x25C000u;
label_25c000:
    // 0x25c000: 0x8fa3001c
    ctx->pc = 0x25c000u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x25c004: 0x8fa20008
    ctx->pc = 0x25c004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25c008: 0x54620001
    ctx->pc = 0x25C008u;
    {
        const bool branch_taken_0x25c008 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25c008) {
            ctx->pc = 0x25C00Cu;
            WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
            ctx->pc = 0x25C010u;
            goto label_25c010;
        }
    }
    ctx->pc = 0x25C010u;
label_25c010:
    // 0x25c010: 0x8fa30020
    ctx->pc = 0x25c010u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c014: 0x8fa2000c
    ctx->pc = 0x25c014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x25c018: 0x54620001
    ctx->pc = 0x25C018u;
    {
        const bool branch_taken_0x25c018 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25c018) {
            ctx->pc = 0x25C01Cu;
            WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
            ctx->pc = 0x25C020u;
            goto label_25c020;
        }
    }
    ctx->pc = 0x25C020u;
label_25c020:
    // 0x25c020: 0x8fa40010
    ctx->pc = 0x25c020u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c024: 0x10800009
    ctx->pc = 0x25C024u;
    {
        const bool branch_taken_0x25c024 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C028u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x25c024) {
            ctx->pc = 0x25C04Cu;
            goto label_25c04c;
        }
    }
    ctx->pc = 0x25C02Cu;
    // 0x25c02c: 0x50a00008
    ctx->pc = 0x25C02Cu;
    {
        const bool branch_taken_0x25c02c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x25c02c) {
            ctx->pc = 0x25C030u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
            ctx->pc = 0x25C050u;
            goto label_25c050;
        }
    }
    ctx->pc = 0x25C034u;
    // 0x25c034: 0xc0bf270
    ctx->pc = 0x25C034u;
    SET_GPR_U32(ctx, 31, 0x25C03Cu);
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C03Cu; }
    }
    if (ctx->pc != 0x25C03Cu) { return; }
    ctx->pc = 0x25C03Cu;
    // 0x25c03c: 0x50400006
    ctx->pc = 0x25C03Cu;
    {
        const bool branch_taken_0x25c03c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25c03c) {
            ctx->pc = 0x25C040u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x25C058u;
            goto label_25c058;
        }
    }
    ctx->pc = 0x25C044u;
    // 0x25c044: 0x10000003
    ctx->pc = 0x25C044u;
    {
        const bool branch_taken_0x25c044 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C048u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        if (branch_taken_0x25c044) {
            ctx->pc = 0x25C054u;
            goto label_25c054;
        }
    }
    ctx->pc = 0x25C04Cu;
label_25c04c:
    // 0x25c04c: 0xafa00024
    ctx->pc = 0x25c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_25c050:
    // 0x25c050: 0xafa00010
    ctx->pc = 0x25c050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_25c054:
    // 0x25c054: 0x26310001
    ctx->pc = 0x25c054u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_25c058:
    // 0x25c058: 0x232102a
    ctx->pc = 0x25c058u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x25c05c: 0x5440ffd4
    ctx->pc = 0x25C05Cu;
    {
        const bool branch_taken_0x25c05c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25c05c) {
            ctx->pc = 0x25C060u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x25BFB0u;
            goto label_25bfb0;
        }
    }
    ctx->pc = 0x25C064u;
label_25c064:
    // 0x25c064: 0x8fa20000
    ctx->pc = 0x25c064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c068: 0xae820000
    ctx->pc = 0x25c068u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x25c06c: 0x8fa20004
    ctx->pc = 0x25c06cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x25c070: 0xaea20000
    ctx->pc = 0x25c070u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x25c074: 0x8fa20008
    ctx->pc = 0x25c074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25c078: 0xae620000
    ctx->pc = 0x25c078u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x25c07c: 0x8fa2000c
    ctx->pc = 0x25c07cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x25c080: 0xaee20000
    ctx->pc = 0x25c080u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x25c084: 0x10000016
    ctx->pc = 0x25C084u;
    {
        const bool branch_taken_0x25c084 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C088u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x25c084) {
            ctx->pc = 0x25C0E0u;
            goto label_25c0e0;
        }
    }
    ctx->pc = 0x25C08Cu;
label_25c08c:
    // 0x25c08c: 0x8e020000
    ctx->pc = 0x25c08cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c090: 0xae820000
    ctx->pc = 0x25c090u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x25c094: 0x8e020004
    ctx->pc = 0x25c094u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25c098: 0xaea20000
    ctx->pc = 0x25c098u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x25c09c: 0x86020040
    ctx->pc = 0x25c09cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25c0a0: 0xae620000
    ctx->pc = 0x25c0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x25c0a4: 0x8e030000
    ctx->pc = 0x25c0a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c0a8: 0x24020001
    ctx->pc = 0x25c0a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c0ac: 0x14620004
    ctx->pc = 0x25C0ACu;
    {
        const bool branch_taken_0x25c0ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25C0B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x25c0ac) {
            ctx->pc = 0x25C0C0u;
            goto label_25c0c0;
        }
    }
    ctx->pc = 0x25C0B4u;
    // 0x25c0b4: 0x8e030004
    ctx->pc = 0x25c0b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25c0b8: 0x50620007
    ctx->pc = 0x25C0B8u;
    {
        const bool branch_taken_0x25c0b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x25c0b8) {
            ctx->pc = 0x25C0BCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->pc = 0x25C0D8u;
            goto label_25c0d8;
        }
    }
    ctx->pc = 0x25C0C0u;
label_25c0c0:
    // 0x25c0c0: 0xc6600000
    ctx->pc = 0x25c0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c0c4: 0x46800020
    ctx->pc = 0x25c0c4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x25c0c8: 0x46000005
    ctx->pc = 0x25c0c8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x25c0cc: 0x46000064
    ctx->pc = 0x25c0ccu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x25c0d0: 0xe6610000
    ctx->pc = 0x25c0d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x25c0d4: 0x8e02003c
    ctx->pc = 0x25c0d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_25c0d8:
    // 0x25c0d8: 0xaee20000
    ctx->pc = 0x25c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x25c0dc: 0x26020028
    ctx->pc = 0x25c0dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 40));
label_25c0e0:
    // 0x25c0e0: 0xafc20000
    ctx->pc = 0x25c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x25c0e4: 0xdfbf00c0
    ctx->pc = 0x25c0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25c0e8: 0xdfbe00b0
    ctx->pc = 0x25c0e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25c0ec: 0xdfb700a0
    ctx->pc = 0x25c0ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25c0f0: 0xdfb60090
    ctx->pc = 0x25c0f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25c0f4: 0xdfb50080
    ctx->pc = 0x25c0f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25c0f8: 0xdfb40070
    ctx->pc = 0x25c0f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25c0fc: 0xdfb30060
    ctx->pc = 0x25c0fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25c100: 0xdfb20050
    ctx->pc = 0x25c100u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c104: 0xdfb10040
    ctx->pc = 0x25c104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25c108: 0xdfb00030
    ctx->pc = 0x25c108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c10c: 0x3e00008
    ctx->pc = 0x25C10Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C110u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25BF10u: goto label_25bf10;
            case 0x25BF94u: goto label_25bf94;
            case 0x25BFB0u: goto label_25bfb0;
            case 0x25BFE0u: goto label_25bfe0;
            case 0x25BFF0u: goto label_25bff0;
            case 0x25C000u: goto label_25c000;
            case 0x25C010u: goto label_25c010;
            case 0x25C020u: goto label_25c020;
            case 0x25C04Cu: goto label_25c04c;
            case 0x25C050u: goto label_25c050;
            case 0x25C054u: goto label_25c054;
            case 0x25C058u: goto label_25c058;
            case 0x25C064u: goto label_25c064;
            case 0x25C08Cu: goto label_25c08c;
            case 0x25C0C0u: goto label_25c0c0;
            case 0x25C0D8u: goto label_25c0d8;
            case 0x25C0E0u: goto label_25c0e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25C114u;
}
