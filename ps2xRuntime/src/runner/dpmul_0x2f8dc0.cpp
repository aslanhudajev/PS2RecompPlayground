#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dpmul
// Address: 0x2f8dc0 - 0x2f9068
void dpmul_0x2f8dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f8dc0u;

    // 0x2f8dc0: 0x27bdff00
    ctx->pc = 0x2f8dc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2f8dc4: 0xffa40060
    ctx->pc = 0x2f8dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x2f8dc8: 0xffa50068
    ctx->pc = 0x2f8dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x2f8dcc: 0x27a40060
    ctx->pc = 0x2f8dccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f8dd0: 0xffb700e0
    ctx->pc = 0x2f8dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x2f8dd4: 0x3a0282d
    ctx->pc = 0x2f8dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8dd8: 0xffb00070
    ctx->pc = 0x2f8dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2f8ddc: 0xffbf00f0
    ctx->pc = 0x2f8ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2f8de0: 0xffb600d0
    ctx->pc = 0x2f8de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2f8de4: 0xffb500c0
    ctx->pc = 0x2f8de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x2f8de8: 0xffb400b0
    ctx->pc = 0x2f8de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2f8dec: 0xffb300a0
    ctx->pc = 0x2f8decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x2f8df0: 0xffb20090
    ctx->pc = 0x2f8df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2f8df4: 0xc0be288
    ctx->pc = 0x2F8DF4u;
    SET_GPR_U32(ctx, 31, 0x2F8DFCu);
    ctx->pc = 0x2F8DF8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    ctx->pc = 0x2F8A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x2f8a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8DFCu; }
    }
    if (ctx->pc != 0x2F8DFCu) { return; }
    ctx->pc = 0x2F8DFCu;
    // 0x2f8dfc: 0x27b00020
    ctx->pc = 0x2f8dfcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f8e00: 0x27a40068
    ctx->pc = 0x2f8e00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 104));
    // 0x2f8e04: 0xc0be288
    ctx->pc = 0x2F8E04u;
    SET_GPR_U32(ctx, 31, 0x2F8E0Cu);
    ctx->pc = 0x2F8E08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x2f8a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8E0Cu; }
    }
    if (ctx->pc != 0x2F8E0Cu) { return; }
    ctx->pc = 0x2F8E0Cu;
    // 0x2f8e0c: 0x8fa40000
    ctx->pc = 0x2f8e0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8e10: 0x2c820002
    ctx->pc = 0x2f8e10u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 2));
    // 0x2f8e14: 0x14400016
    ctx->pc = 0x2F8E14u;
    {
        const bool branch_taken_0x2f8e14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F8E18u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 64));
        if (branch_taken_0x2f8e14) {
            ctx->pc = 0x2F8E70u;
            goto label_2f8e70;
        }
    }
    ctx->pc = 0x2F8E1Cu;
    // 0x2f8e1c: 0x8fa30020
    ctx->pc = 0x2f8e1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8e20: 0x2c620002
    ctx->pc = 0x2f8e20u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x2f8e24: 0x5440001c
    ctx->pc = 0x2F8E24u;
    {
        const bool branch_taken_0x2f8e24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f8e24) {
            ctx->pc = 0x2F8E28u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->pc = 0x2F8E98u;
            goto label_2f8e98;
        }
    }
    ctx->pc = 0x2F8E2Cu;
    // 0x2f8e2c: 0x38820004
    ctx->pc = 0x2f8e2cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 4));
    // 0x2f8e30: 0x14400006
    ctx->pc = 0x2F8E30u;
    {
        const bool branch_taken_0x2f8e30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F8E34u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x2f8e30) {
            ctx->pc = 0x2F8E4Cu;
            goto label_2f8e4c;
        }
    }
    ctx->pc = 0x2F8E38u;
    // 0x2f8e38: 0x38620002
    ctx->pc = 0x2f8e38u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
    // 0x2f8e3c: 0x10400007
    ctx->pc = 0x2F8E3Cu;
    {
        const bool branch_taken_0x2f8e3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8E40u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x2f8e3c) {
            ctx->pc = 0x2F8E5Cu;
            goto label_2f8e5c;
        }
    }
    ctx->pc = 0x2F8E44u;
    // 0x2f8e44: 0x1000000c
    ctx->pc = 0x2F8E44u;
    {
        const bool branch_taken_0x2f8e44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8E48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f8e44) {
            ctx->pc = 0x2F8E78u;
            goto label_2f8e78;
        }
    }
    ctx->pc = 0x2F8E4Cu;
label_2f8e4c:
    // 0x2f8e4c: 0x14400006
    ctx->pc = 0x2F8E4Cu;
    {
        const bool branch_taken_0x2f8e4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F8E50u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x2f8e4c) {
            ctx->pc = 0x2F8E68u;
            goto label_2f8e68;
        }
    }
    ctx->pc = 0x2F8E54u;
    // 0x2f8e54: 0x14400010
    ctx->pc = 0x2F8E54u;
    {
        const bool branch_taken_0x2f8e54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F8E58u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x2f8e54) {
            ctx->pc = 0x2F8E98u;
            goto label_2f8e98;
        }
    }
    ctx->pc = 0x2F8E5Cu;
label_2f8e5c:
    // 0x2f8e5c: 0x3c02003e
    ctx->pc = 0x2f8e5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2f8e60: 0x10000074
    ctx->pc = 0x2F8E60u;
    {
        const bool branch_taken_0x2f8e60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8E64u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 15864));
        if (branch_taken_0x2f8e60) {
            ctx->pc = 0x2F9034u;
            goto label_2f9034;
        }
    }
    ctx->pc = 0x2F8E68u;
label_2f8e68:
    // 0x2f8e68: 0x14400008
    ctx->pc = 0x2F8E68u;
    {
        const bool branch_taken_0x2f8e68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F8E6Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2f8e68) {
            ctx->pc = 0x2F8E8Cu;
            goto label_2f8e8c;
        }
    }
    ctx->pc = 0x2F8E70u;
label_2f8e70:
    // 0x2f8e70: 0x8fa20004
    ctx->pc = 0x2f8e70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f8e74: 0x3a0202d
    ctx->pc = 0x2f8e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f8e78:
    // 0x2f8e78: 0x8fa30024
    ctx->pc = 0x2f8e78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2f8e7c: 0x431026
    ctx->pc = 0x2f8e7cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f8e80: 0x2102b
    ctx->pc = 0x2f8e80u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2f8e84: 0x1000006b
    ctx->pc = 0x2F8E84u;
    {
        const bool branch_taken_0x2f8e84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8E88u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x2f8e84) {
            ctx->pc = 0x2F9034u;
            goto label_2f9034;
        }
    }
    ctx->pc = 0x2F8E8Cu;
label_2f8e8c:
    // 0x2f8e8c: 0x14400008
    ctx->pc = 0x2F8E8Cu;
    {
        const bool branch_taken_0x2f8e8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F8E90u;
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2f8e8c) {
            ctx->pc = 0x2F8EB0u;
            goto label_2f8eb0;
        }
    }
    ctx->pc = 0x2F8E94u;
    // 0x2f8e94: 0x8fa30024
    ctx->pc = 0x2f8e94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2f8e98:
    // 0x2f8e98: 0x200202d
    ctx->pc = 0x2f8e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8e9c: 0x8fa20004
    ctx->pc = 0x2f8e9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f8ea0: 0x431026
    ctx->pc = 0x2f8ea0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f8ea4: 0x2102b
    ctx->pc = 0x2f8ea4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2f8ea8: 0x10000062
    ctx->pc = 0x2F8EA8u;
    {
        const bool branch_taken_0x2f8ea8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8EACu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x2f8ea8) {
            ctx->pc = 0x2F9034u;
            goto label_2f9034;
        }
    }
    ctx->pc = 0x2F8EB0u;
label_2f8eb0:
    // 0x2f8eb0: 0x3c16ffff
    ctx->pc = 0x2f8eb0u;
    SET_GPR_U32(ctx, 22, ((uint32_t)65535 << 16));
    // 0x2f8eb4: 0x16b03e
    ctx->pc = 0x2f8eb4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x2f8eb8: 0xdfb20030
    ctx->pc = 0x2f8eb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8ebc: 0x2768024
    ctx->pc = 0x2f8ebcu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x2f8ec0: 0x256a824
    ctx->pc = 0x2f8ec0u;
    SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x2f8ec4: 0x13983e
    ctx->pc = 0x2f8ec4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x2f8ec8: 0x12903e
    ctx->pc = 0x2f8ec8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x2f8ecc: 0x200282d
    ctx->pc = 0x2f8eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8ed0: 0xc0bdf62
    ctx->pc = 0x2F8ED0u;
    SET_GPR_U32(ctx, 31, 0x2F8ED8u);
    ctx->pc = 0x2F8ED4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F7D88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x2f7d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8ED8u; }
    }
    if (ctx->pc != 0x2F8ED8u) { return; }
    ctx->pc = 0x2F8ED8u;
    // 0x2f8ed8: 0x40a02d
    ctx->pc = 0x2f8ed8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8edc: 0x200282d
    ctx->pc = 0x2f8edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8ee0: 0xc0bdf62
    ctx->pc = 0x2F8EE0u;
    SET_GPR_U32(ctx, 31, 0x2F8EE8u);
    ctx->pc = 0x2F8EE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F7D88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x2f7d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8EE8u; }
    }
    if (ctx->pc != 0x2F8EE8u) { return; }
    ctx->pc = 0x2F8EE8u;
    // 0x2f8ee8: 0x40882d
    ctx->pc = 0x2f8ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8eec: 0x2a0202d
    ctx->pc = 0x2f8eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8ef0: 0xc0bdf62
    ctx->pc = 0x2F8EF0u;
    SET_GPR_U32(ctx, 31, 0x2F8EF8u);
    ctx->pc = 0x2F8EF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F7D88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x2f7d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8EF8u; }
    }
    if (ctx->pc != 0x2F8EF8u) { return; }
    ctx->pc = 0x2F8EF8u;
    // 0x2f8ef8: 0x40802d
    ctx->pc = 0x2f8ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8efc: 0x240202d
    ctx->pc = 0x2f8efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8f00: 0xc0bdf62
    ctx->pc = 0x2F8F00u;
    SET_GPR_U32(ctx, 31, 0x2F8F08u);
    ctx->pc = 0x2F8F04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F7D88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x2f7d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F08u; }
    }
    if (ctx->pc != 0x2F8F08u) { return; }
    ctx->pc = 0x2F8F08u;
    // 0x2f8f08: 0x230802d
    ctx->pc = 0x2f8f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2f8f0c: 0x8fa50008
    ctx->pc = 0x2f8f0cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f8f10: 0x10203c
    ctx->pc = 0x2f8f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2f8f14: 0x211882b
    ctx->pc = 0x2f8f14u;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2f8f18: 0x284202d
    ctx->pc = 0x2f8f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2f8f1c: 0x10803e
    ctx->pc = 0x2f8f1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x2f8f20: 0x8fa70028
    ctx->pc = 0x2f8f20u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f8f24: 0x2168024
    ctx->pc = 0x2f8f24u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x2f8f28: 0x8fa30004
    ctx->pc = 0x2f8f28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f8f2c: 0x11883c
    ctx->pc = 0x2f8f2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2f8f30: 0x8fa60024
    ctx->pc = 0x2f8f30u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2f8f34: 0x94a02b
    ctx->pc = 0x2f8f34u;
    SET_GPR_U32(ctx, 20, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2f8f38: 0x202802d
    ctx->pc = 0x2f8f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2f8f3c: 0xa72821
    ctx->pc = 0x2f8f3cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2f8f40: 0x661826
    ctx->pc = 0x2f8f40u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2f8f44: 0x2348825
    ctx->pc = 0x2f8f44u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2f8f48: 0x24a50004
    ctx->pc = 0x2f8f48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2f8f4c: 0x230882d
    ctx->pc = 0x2f8f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2f8f50: 0x3182b
    ctx->pc = 0x2f8f50u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2f8f54: 0x2402ffff
    ctx->pc = 0x2f8f54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f8f58: 0x210fa
    ctx->pc = 0x2f8f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2f8f5c: 0xafa30044
    ctx->pc = 0x2f8f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x2f8f60: 0x51102b
    ctx->pc = 0x2f8f60u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f8f64: 0x10400011
    ctx->pc = 0x2F8F64u;
    {
        const bool branch_taken_0x2f8f64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8F68u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        if (branch_taken_0x2f8f64) {
            ctx->pc = 0x2F8FACu;
            goto label_2f8fac;
        }
    }
    ctx->pc = 0x2F8F6Cu;
    // 0x2f8f6c: 0x34068000
    ctx->pc = 0x2f8f6cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 32768));
    // 0x2f8f70: 0x6343c
    ctx->pc = 0x2f8f70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2f8f74: 0x2403ffff
    ctx->pc = 0x2f8f74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f8f78: 0x318fa
    ctx->pc = 0x2f8f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x2f8f7c: 0x32220001
    ctx->pc = 0x2f8f7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
label_2f8f80:
    // 0x2f8f80: 0x2103c
    ctx->pc = 0x2f8f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f8f84: 0x2103f
    ctx->pc = 0x2f8f84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f8f88: 0x10400003
    ctx->pc = 0x2F8F88u;
    {
        const bool branch_taken_0x2f8f88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8F8Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x2f8f88) {
            ctx->pc = 0x2F8F98u;
            goto label_2f8f98;
        }
    }
    ctx->pc = 0x2F8F90u;
    // 0x2f8f90: 0x4207a
    ctx->pc = 0x2f8f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x2f8f94: 0x862025
    ctx->pc = 0x2f8f94u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2f8f98:
    // 0x2f8f98: 0x11887a
    ctx->pc = 0x2f8f98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x2f8f9c: 0x71102b
    ctx->pc = 0x2f8f9cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2f8fa0: 0x1440fff7
    ctx->pc = 0x2F8FA0u;
    {
        const bool branch_taken_0x2f8fa0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F8FA4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2f8fa0) {
            ctx->pc = 0x2F8F80u;
            goto label_2f8f80;
        }
    }
    ctx->pc = 0x2F8FA8u;
    // 0x2f8fa8: 0xafa50048
    ctx->pc = 0x2f8fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_2f8fac:
    // 0x2f8fac: 0x2402ffff
    ctx->pc = 0x2f8facu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f8fb0: 0x2113a
    ctx->pc = 0x2f8fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2f8fb4: 0x51102b
    ctx->pc = 0x2f8fb4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f8fb8: 0x14400011
    ctx->pc = 0x2F8FB8u;
    {
        const bool branch_taken_0x2f8fb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F8FBCu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 255));
        if (branch_taken_0x2f8fb8) {
            ctx->pc = 0x2F9000u;
            goto label_2f9000;
        }
    }
    ctx->pc = 0x2F8FC0u;
    // 0x2f8fc0: 0x8fa50048
    ctx->pc = 0x2f8fc0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8fc4: 0x34088000
    ctx->pc = 0x2f8fc4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 0), 32768));
    // 0x2f8fc8: 0x8443c
    ctx->pc = 0x2f8fc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x2f8fcc: 0x24070001
    ctx->pc = 0x2f8fccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8fd0: 0x2406ffff
    ctx->pc = 0x2f8fd0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f8fd4: 0x6313a
    ctx->pc = 0x2f8fd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_2f8fd8:
    // 0x2f8fd8: 0x118878
    ctx->pc = 0x2f8fd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x2f8fdc: 0x881824
    ctx->pc = 0x2f8fdcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2f8fe0: 0x2271025
    ctx->pc = 0x2f8fe0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2f8fe4: 0x24a5ffff
    ctx->pc = 0x2f8fe4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2f8fe8: 0x43880b
    ctx->pc = 0x2f8fe8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
    // 0x2f8fec: 0xd1102b
    ctx->pc = 0x2f8fecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2f8ff0: 0x1040fff9
    ctx->pc = 0x2F8FF0u;
    {
        const bool branch_taken_0x2f8ff0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8FF4u;
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        if (branch_taken_0x2f8ff0) {
            ctx->pc = 0x2F8FD8u;
            goto label_2f8fd8;
        }
    }
    ctx->pc = 0x2F8FF8u;
    // 0x2f8ff8: 0xafa50048
    ctx->pc = 0x2f8ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x2f8ffc: 0x322300ff
    ctx->pc = 0x2f8ffcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 255));
label_2f9000:
    // 0x2f9000: 0x24020080
    ctx->pc = 0x2f9000u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x2f9004: 0x54620008
    ctx->pc = 0x2F9004u;
    {
        const bool branch_taken_0x2f9004 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2f9004) {
            ctx->pc = 0x2F9008u;
            WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
            ctx->pc = 0x2F9028u;
            goto label_2f9028;
        }
    }
    ctx->pc = 0x2F900Cu;
    // 0x2f900c: 0x32220100
    ctx->pc = 0x2f900cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 256));
    // 0x2f9010: 0x10400003
    ctx->pc = 0x2F9010u;
    {
        const bool branch_taken_0x2f9010 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9014u;
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)128);
        if (branch_taken_0x2f9010) {
            ctx->pc = 0x2F9020u;
            goto label_2f9020;
        }
    }
    ctx->pc = 0x2F9018u;
    // 0x2f9018: 0x10000002
    ctx->pc = 0x2F9018u;
    {
        const bool branch_taken_0x2f9018 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F901Cu;
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)128);
        if (branch_taken_0x2f9018) {
            ctx->pc = 0x2F9024u;
            goto label_2f9024;
        }
    }
    ctx->pc = 0x2F9020u;
label_2f9020:
    // 0x2f9020: 0x44880b
    ctx->pc = 0x2f9020u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
label_2f9024:
    // 0x2f9024: 0xffb10050
    ctx->pc = 0x2f9024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_2f9028:
    // 0x2f9028: 0x24020003
    ctx->pc = 0x2f9028u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f902c: 0xaee20000
    ctx->pc = 0x2f902cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x2f9030: 0x2e0202d
    ctx->pc = 0x2f9030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f9034:
    // 0x2f9034: 0xc0be23c
    ctx->pc = 0x2F9034u;
    SET_GPR_U32(ctx, 31, 0x2F903Cu);
    ctx->pc = 0x2F88F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x2f88f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F903Cu; }
    }
    if (ctx->pc != 0x2F903Cu) { return; }
    ctx->pc = 0x2F903Cu;
    // 0x2f903c: 0xdfbf00f0
    ctx->pc = 0x2f903cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2f9040: 0xdfb700e0
    ctx->pc = 0x2f9040u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2f9044: 0xdfb600d0
    ctx->pc = 0x2f9044u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2f9048: 0xdfb500c0
    ctx->pc = 0x2f9048u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f904c: 0xdfb400b0
    ctx->pc = 0x2f904cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f9050: 0xdfb300a0
    ctx->pc = 0x2f9050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f9054: 0xdfb20090
    ctx->pc = 0x2f9054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f9058: 0xdfb10080
    ctx->pc = 0x2f9058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f905c: 0xdfb00070
    ctx->pc = 0x2f905cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f9060: 0x3e00008
    ctx->pc = 0x2F9060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9064u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F8E4Cu: goto label_2f8e4c;
            case 0x2F8E5Cu: goto label_2f8e5c;
            case 0x2F8E68u: goto label_2f8e68;
            case 0x2F8E70u: goto label_2f8e70;
            case 0x2F8E78u: goto label_2f8e78;
            case 0x2F8E8Cu: goto label_2f8e8c;
            case 0x2F8E98u: goto label_2f8e98;
            case 0x2F8EB0u: goto label_2f8eb0;
            case 0x2F8F80u: goto label_2f8f80;
            case 0x2F8F98u: goto label_2f8f98;
            case 0x2F8FACu: goto label_2f8fac;
            case 0x2F8FD8u: goto label_2f8fd8;
            case 0x2F9000u: goto label_2f9000;
            case 0x2F9020u: goto label_2f9020;
            case 0x2F9024u: goto label_2f9024;
            case 0x2F9028u: goto label_2f9028;
            case 0x2F9034u: goto label_2f9034;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F9068u;
}
