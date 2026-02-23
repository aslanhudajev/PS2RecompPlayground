#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: fpmul
// Address: 0x14bfa0 - 0x14c194
void fpmul_0x14bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("fpmul");


    ctx->pc = 0x14bfa0u;

    // 0x14bfa0: 0x27bdffa0
    ctx->pc = 0x14bfa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14bfa4: 0xffb00040
    ctx->pc = 0x14bfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x14bfa8: 0x27a40030
    ctx->pc = 0x14bfa8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x14bfac: 0xffbf0050
    ctx->pc = 0x14bfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14bfb0: 0x3a0282d
    ctx->pc = 0x14bfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bfb4: 0xe7ac0030
    ctx->pc = 0x14bfb4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14bfb8: 0xc052f06
    ctx->pc = 0x14BFB8u;
    SET_GPR_U32(ctx, 31, 0x14BFC0u);
    ctx->pc = 0x14BFBCu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->pc = 0x14BC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x14bc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BFC0u; }
        else if (ctx->pc != 0x14BFC0u) { ctx->pc = 0x14BFC0u; }
    }
    if (ctx->pc != 0x14BFC0u) { return; }
    ctx->pc = 0x14BFC0u;
    // 0x14bfc0: 0x27b00010
    ctx->pc = 0x14bfc0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x14bfc4: 0x27a40034
    ctx->pc = 0x14bfc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 52));
    // 0x14bfc8: 0xc052f06
    ctx->pc = 0x14BFC8u;
    SET_GPR_U32(ctx, 31, 0x14BFD0u);
    ctx->pc = 0x14BFCCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14BC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x14bc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BFD0u; }
        else if (ctx->pc != 0x14BFD0u) { ctx->pc = 0x14BFD0u; }
    }
    if (ctx->pc != 0x14BFD0u) { return; }
    ctx->pc = 0x14BFD0u;
    // 0x14bfd0: 0x8fa40000
    ctx->pc = 0x14bfd0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bfd4: 0x2c820002
    ctx->pc = 0x14bfd4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 2));
    // 0x14bfd8: 0x14400016
    ctx->pc = 0x14BFD8u;
    {
        const bool branch_taken_0x14bfd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14BFDCu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x14bfd8) {
            ctx->pc = 0x14C034u;
            goto label_14c034;
        }
    }
    ctx->pc = 0x14BFE0u;
    // 0x14bfe0: 0x8fa30010
    ctx->pc = 0x14bfe0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bfe4: 0x2c620002
    ctx->pc = 0x14bfe4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x14bfe8: 0x5440001c
    ctx->pc = 0x14BFE8u;
    {
        const bool branch_taken_0x14bfe8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x14bfe8) {
            ctx->pc = 0x14BFECu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
            ctx->pc = 0x14C05Cu;
            goto label_14c05c;
        }
    }
    ctx->pc = 0x14BFF0u;
    // 0x14bff0: 0x38820004
    ctx->pc = 0x14bff0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 4));
    // 0x14bff4: 0x14400006
    ctx->pc = 0x14BFF4u;
    {
        const bool branch_taken_0x14bff4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14BFF8u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x14bff4) {
            ctx->pc = 0x14C010u;
            goto label_14c010;
        }
    }
    ctx->pc = 0x14BFFCu;
    // 0x14bffc: 0x38620002
    ctx->pc = 0x14bffcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
    // 0x14c000: 0x10400007
    ctx->pc = 0x14C000u;
    {
        const bool branch_taken_0x14c000 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C004u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x14c000) {
            ctx->pc = 0x14C020u;
            goto label_14c020;
        }
    }
    ctx->pc = 0x14C008u;
    // 0x14c008: 0x1000000c
    ctx->pc = 0x14C008u;
    {
        const bool branch_taken_0x14c008 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C00Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14c008) {
            ctx->pc = 0x14C03Cu;
            goto label_14c03c;
        }
    }
    ctx->pc = 0x14C010u;
label_14c010:
    // 0x14c010: 0x14400006
    ctx->pc = 0x14C010u;
    {
        const bool branch_taken_0x14c010 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C014u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x14c010) {
            ctx->pc = 0x14C02Cu;
            goto label_14c02c;
        }
    }
    ctx->pc = 0x14C018u;
    // 0x14c018: 0x14400010
    ctx->pc = 0x14C018u;
    {
        const bool branch_taken_0x14c018 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C01Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        if (branch_taken_0x14c018) {
            ctx->pc = 0x14C05Cu;
            goto label_14c05c;
        }
    }
    ctx->pc = 0x14C020u;
label_14c020:
    // 0x14c020: 0x3c02002d
    ctx->pc = 0x14c020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x14c024: 0x10000055
    ctx->pc = 0x14C024u;
    {
        const bool branch_taken_0x14c024 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C028u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 26880));
        if (branch_taken_0x14c024) {
            ctx->pc = 0x14C17Cu;
            goto label_14c17c;
        }
    }
    ctx->pc = 0x14C02Cu;
label_14c02c:
    // 0x14c02c: 0x14400008
    ctx->pc = 0x14C02Cu;
    {
        const bool branch_taken_0x14c02c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C030u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x14c02c) {
            ctx->pc = 0x14C050u;
            goto label_14c050;
        }
    }
    ctx->pc = 0x14C034u;
label_14c034:
    // 0x14c034: 0x8fa20004
    ctx->pc = 0x14c034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14c038: 0x3a0202d
    ctx->pc = 0x14c038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_14c03c:
    // 0x14c03c: 0x8fa30014
    ctx->pc = 0x14c03cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x14c040: 0x431026
    ctx->pc = 0x14c040u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c044: 0x2102b
    ctx->pc = 0x14c044u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14c048: 0x1000004c
    ctx->pc = 0x14C048u;
    {
        const bool branch_taken_0x14c048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C04Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x14c048) {
            ctx->pc = 0x14C17Cu;
            goto label_14c17c;
        }
    }
    ctx->pc = 0x14C050u;
label_14c050:
    // 0x14c050: 0x14400008
    ctx->pc = 0x14C050u;
    {
        const bool branch_taken_0x14c050 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C054u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        if (branch_taken_0x14c050) {
            ctx->pc = 0x14C074u;
            goto label_14c074;
        }
    }
    ctx->pc = 0x14C058u;
    // 0x14c058: 0x8fa30014
    ctx->pc = 0x14c058u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_14c05c:
    // 0x14c05c: 0x200202d
    ctx->pc = 0x14c05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c060: 0x8fa20004
    ctx->pc = 0x14c060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14c064: 0x431026
    ctx->pc = 0x14c064u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c068: 0x2102b
    ctx->pc = 0x14c068u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14c06c: 0x10000043
    ctx->pc = 0x14C06Cu;
    {
        const bool branch_taken_0x14c06c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C070u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x14c06c) {
            ctx->pc = 0x14C17Cu;
            goto label_14c17c;
        }
    }
    ctx->pc = 0x14C074u;
label_14c074:
    // 0x14c074: 0x8fa2001c
    ctx->pc = 0x14c074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x14c078: 0x8fa30008
    ctx->pc = 0x14c078u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14c07c: 0x820019
    ctx->pc = 0x14c07cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_U32(ctx, 0, (uint32_t)result); }
    // 0x14c080: 0x8fa60014
    ctx->pc = 0x14c080u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x14c084: 0x8fa20004
    ctx->pc = 0x14c084u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14c088: 0x461026
    ctx->pc = 0x14c088u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14c08c: 0x2812
    ctx->pc = 0x14c08cu;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x14c090: 0x2010
    ctx->pc = 0x14c090u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x14c094: 0x5283c
    ctx->pc = 0x14c094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x14c098: 0x4203c
    ctx->pc = 0x14c098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x14c09c: 0x5283e
    ctx->pc = 0x14c09cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x14c0a0: 0x2102b
    ctx->pc = 0x14c0a0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14c0a4: 0x852025
    ctx->pc = 0x14c0a4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14c0a8: 0xafa20024
    ctx->pc = 0x14c0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x14c0ac: 0x8fa50018
    ctx->pc = 0x14c0acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c0b0: 0x651821
    ctx->pc = 0x14c0b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14c0b4: 0x24630002
    ctx->pc = 0x14c0b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x14c0b8: 0x4283c
    ctx->pc = 0x14c0b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x14c0bc: 0x5283f
    ctx->pc = 0x14c0bcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x14c0c0: 0x4203f
    ctx->pc = 0x14c0c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x14c0c4: 0x481000c
    ctx->pc = 0x14C0C4u;
    {
        const bool branch_taken_0x14c0c4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x14C0C8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        if (branch_taken_0x14c0c4) {
            ctx->pc = 0x14C0F8u;
            goto label_14c0f8;
        }
    }
    ctx->pc = 0x14C0CCu;
    // 0x14c0cc: 0x3c068000
    ctx->pc = 0x14c0ccu;
    SET_GPR_U32(ctx, 6, ((uint32_t)32768 << 16));
    // 0x14c0d0: 0x30820001
    ctx->pc = 0x14c0d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
    // 0x14c0d4: 0x0
    ctx->pc = 0x14c0d4u;
    // NOP
label_14c0d8:
    // 0x14c0d8: 0x10400003
    ctx->pc = 0x14C0D8u;
    {
        const bool branch_taken_0x14c0d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C0DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x14c0d8) {
            ctx->pc = 0x14C0E8u;
            goto label_14c0e8;
        }
    }
    ctx->pc = 0x14C0E0u;
    // 0x14c0e0: 0x52842
    ctx->pc = 0x14c0e0u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 1));
    // 0x14c0e4: 0xa62825
    ctx->pc = 0x14c0e4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_14c0e8:
    // 0x14c0e8: 0x42042
    ctx->pc = 0x14c0e8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 1));
    // 0x14c0ec: 0x480fffa
    ctx->pc = 0x14C0ECu;
    {
        const bool branch_taken_0x14c0ec = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x14C0F0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x14c0ec) {
            ctx->pc = 0x14C0D8u;
            goto label_14c0d8;
        }
    }
    ctx->pc = 0x14C0F4u;
    // 0x14c0f4: 0xafa30028
    ctx->pc = 0x14c0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_14c0f8:
    // 0x14c0f8: 0x3c023fff
    ctx->pc = 0x14c0f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16383 << 16));
    // 0x14c0fc: 0x3442ffff
    ctx->pc = 0x14c0fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x14c100: 0x44102b
    ctx->pc = 0x14c100u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14c104: 0x14400010
    ctx->pc = 0x14C104u;
    {
        const bool branch_taken_0x14c104 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C108u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 127));
        if (branch_taken_0x14c104) {
            ctx->pc = 0x14C148u;
            goto label_14c148;
        }
    }
    ctx->pc = 0x14C10Cu;
    // 0x14c10c: 0x3c073fff
    ctx->pc = 0x14c10cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)16383 << 16));
    // 0x14c110: 0x8fa60028
    ctx->pc = 0x14c110u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c114: 0x3c088000
    ctx->pc = 0x14c114u;
    SET_GPR_U32(ctx, 8, ((uint32_t)32768 << 16));
    // 0x14c118: 0x34e7ffff
    ctx->pc = 0x14c118u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x14c11c: 0x0
    ctx->pc = 0x14c11cu;
    // NOP
label_14c120:
    // 0x14c120: 0x42040
    ctx->pc = 0x14c120u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x14c124: 0xa81824
    ctx->pc = 0x14c124u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x14c128: 0x34820001
    ctx->pc = 0x14c128u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 1));
    // 0x14c12c: 0x24c6ffff
    ctx->pc = 0x14c12cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x14c130: 0x43200b
    ctx->pc = 0x14c130u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    // 0x14c134: 0xe4102b
    ctx->pc = 0x14c134u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x14c138: 0x1040fff9
    ctx->pc = 0x14C138u;
    {
        const bool branch_taken_0x14c138 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C13Cu;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x14c138) {
            ctx->pc = 0x14C120u;
            goto label_14c120;
        }
    }
    ctx->pc = 0x14C140u;
    // 0x14c140: 0xafa60028
    ctx->pc = 0x14c140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x14c144: 0x3083007f
    ctx->pc = 0x14c144u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 127));
label_14c148:
    // 0x14c148: 0x24020040
    ctx->pc = 0x14c148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x14c14c: 0x54620008
    ctx->pc = 0x14C14Cu;
    {
        const bool branch_taken_0x14c14c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x14c14c) {
            ctx->pc = 0x14C150u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
            ctx->pc = 0x14C170u;
            goto label_14c170;
        }
    }
    ctx->pc = 0x14C154u;
    // 0x14c154: 0x30820080
    ctx->pc = 0x14c154u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 128));
    // 0x14c158: 0x10400003
    ctx->pc = 0x14C158u;
    {
        const bool branch_taken_0x14c158 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C15Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x14c158) {
            ctx->pc = 0x14C168u;
            goto label_14c168;
        }
    }
    ctx->pc = 0x14C160u;
    // 0x14c160: 0x10000002
    ctx->pc = 0x14C160u;
    {
        const bool branch_taken_0x14c160 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C164u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x14c160) {
            ctx->pc = 0x14C16Cu;
            goto label_14c16c;
        }
    }
    ctx->pc = 0x14C168u;
label_14c168:
    // 0x14c168: 0x45200b
    ctx->pc = 0x14c168u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_14c16c:
    // 0x14c16c: 0xafa4002c
    ctx->pc = 0x14c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_14c170:
    // 0x14c170: 0x24020003
    ctx->pc = 0x14c170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c174: 0xad220000
    ctx->pc = 0x14c174u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x14c178: 0x120202d
    ctx->pc = 0x14c178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_14c17c:
    // 0x14c17c: 0xc052ec2
    ctx->pc = 0x14C17Cu;
    SET_GPR_U32(ctx, 31, 0x14C184u);
    ctx->pc = 0x14BB08u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x14bb08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C184u; }
        else if (ctx->pc != 0x14C184u) { ctx->pc = 0x14C184u; }
    }
    if (ctx->pc != 0x14C184u) { return; }
    ctx->pc = 0x14C184u;
    // 0x14c184: 0xdfbf0050
    ctx->pc = 0x14c184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14c188: 0xdfb00040
    ctx->pc = 0x14c188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14c18c: 0x3e00008
    ctx->pc = 0x14C18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C190u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C010u: goto label_14c010;
            case 0x14C020u: goto label_14c020;
            case 0x14C02Cu: goto label_14c02c;
            case 0x14C034u: goto label_14c034;
            case 0x14C03Cu: goto label_14c03c;
            case 0x14C050u: goto label_14c050;
            case 0x14C05Cu: goto label_14c05c;
            case 0x14C074u: goto label_14c074;
            case 0x14C0D8u: goto label_14c0d8;
            case 0x14C0E8u: goto label_14c0e8;
            case 0x14C0F8u: goto label_14c0f8;
            case 0x14C120u: goto label_14c120;
            case 0x14C148u: goto label_14c148;
            case 0x14C168u: goto label_14c168;
            case 0x14C16Cu: goto label_14c16c;
            case 0x14C170u: goto label_14c170;
            case 0x14C17Cu: goto label_14c17c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14C194u;
}
