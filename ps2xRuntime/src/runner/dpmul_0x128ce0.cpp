#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dpmul
// Address: 0x128ce0 - 0x128f88
void dpmul_0x128ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x128ce0u;

    // 0x128ce0: 0x27bdff00
    ctx->pc = 0x128ce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x128ce4: 0xffa40060
    ctx->pc = 0x128ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x128ce8: 0xffa50068
    ctx->pc = 0x128ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x128cec: 0x27a40060
    ctx->pc = 0x128cecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x128cf0: 0xffb700e0
    ctx->pc = 0x128cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x128cf4: 0x3a0282d
    ctx->pc = 0x128cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cf8: 0xffb00070
    ctx->pc = 0x128cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x128cfc: 0xffbf00f0
    ctx->pc = 0x128cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x128d00: 0xffb600d0
    ctx->pc = 0x128d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x128d04: 0xffb500c0
    ctx->pc = 0x128d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x128d08: 0xffb400b0
    ctx->pc = 0x128d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x128d0c: 0xffb300a0
    ctx->pc = 0x128d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x128d10: 0xffb20090
    ctx->pc = 0x128d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x128d14: 0xc04a250
    ctx->pc = 0x128D14u;
    SET_GPR_U32(ctx, 31, 0x128D1Cu);
    ctx->pc = 0x128D18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    ctx->pc = 0x128940u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x128940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D1Cu; }
    }
    if (ctx->pc != 0x128D1Cu) { return; }
    ctx->pc = 0x128D1Cu;
    // 0x128d1c: 0x27b00020
    ctx->pc = 0x128d1cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x128d20: 0x27a40068
    ctx->pc = 0x128d20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 104));
    // 0x128d24: 0xc04a250
    ctx->pc = 0x128D24u;
    SET_GPR_U32(ctx, 31, 0x128D2Cu);
    ctx->pc = 0x128D28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128940u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x128940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D2Cu; }
    }
    if (ctx->pc != 0x128D2Cu) { return; }
    ctx->pc = 0x128D2Cu;
    // 0x128d2c: 0x8fa40000
    ctx->pc = 0x128d2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128d30: 0x2c820002
    ctx->pc = 0x128d30u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 2));
    // 0x128d34: 0x14400016
    ctx->pc = 0x128D34u;
    {
        const bool branch_taken_0x128d34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x128D38u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 64));
        if (branch_taken_0x128d34) {
            ctx->pc = 0x128D90u;
            goto label_128d90;
        }
    }
    ctx->pc = 0x128D3Cu;
    // 0x128d3c: 0x8fa30020
    ctx->pc = 0x128d3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128d40: 0x2c620002
    ctx->pc = 0x128d40u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x128d44: 0x5440001c
    ctx->pc = 0x128D44u;
    {
        const bool branch_taken_0x128d44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x128d44) {
            ctx->pc = 0x128D48u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->pc = 0x128DB8u;
            goto label_128db8;
        }
    }
    ctx->pc = 0x128D4Cu;
    // 0x128d4c: 0x38820004
    ctx->pc = 0x128d4cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 4));
    // 0x128d50: 0x14400006
    ctx->pc = 0x128D50u;
    {
        const bool branch_taken_0x128d50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x128D54u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x128d50) {
            ctx->pc = 0x128D6Cu;
            goto label_128d6c;
        }
    }
    ctx->pc = 0x128D58u;
    // 0x128d58: 0x38620002
    ctx->pc = 0x128d58u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
    // 0x128d5c: 0x10400007
    ctx->pc = 0x128D5Cu;
    {
        const bool branch_taken_0x128d5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x128D60u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x128d5c) {
            ctx->pc = 0x128D7Cu;
            goto label_128d7c;
        }
    }
    ctx->pc = 0x128D64u;
    // 0x128d64: 0x1000000c
    ctx->pc = 0x128D64u;
    {
        const bool branch_taken_0x128d64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128D68u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x128d64) {
            ctx->pc = 0x128D98u;
            goto label_128d98;
        }
    }
    ctx->pc = 0x128D6Cu;
label_128d6c:
    // 0x128d6c: 0x14400006
    ctx->pc = 0x128D6Cu;
    {
        const bool branch_taken_0x128d6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x128D70u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x128d6c) {
            ctx->pc = 0x128D88u;
            goto label_128d88;
        }
    }
    ctx->pc = 0x128D74u;
    // 0x128d74: 0x14400010
    ctx->pc = 0x128D74u;
    {
        const bool branch_taken_0x128d74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x128D78u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x128d74) {
            ctx->pc = 0x128DB8u;
            goto label_128db8;
        }
    }
    ctx->pc = 0x128D7Cu;
label_128d7c:
    // 0x128d7c: 0x3c020075
    ctx->pc = 0x128d7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)117 << 16));
    // 0x128d80: 0x10000074
    ctx->pc = 0x128D80u;
    {
        const bool branch_taken_0x128d80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128D84u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960368));
        if (branch_taken_0x128d80) {
            ctx->pc = 0x128F54u;
            goto label_128f54;
        }
    }
    ctx->pc = 0x128D88u;
label_128d88:
    // 0x128d88: 0x14400008
    ctx->pc = 0x128D88u;
    {
        const bool branch_taken_0x128d88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x128D8Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x128d88) {
            ctx->pc = 0x128DACu;
            goto label_128dac;
        }
    }
    ctx->pc = 0x128D90u;
label_128d90:
    // 0x128d90: 0x8fa20004
    ctx->pc = 0x128d90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x128d94: 0x3a0202d
    ctx->pc = 0x128d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_128d98:
    // 0x128d98: 0x8fa30024
    ctx->pc = 0x128d98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x128d9c: 0x431026
    ctx->pc = 0x128d9cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128da0: 0x2102b
    ctx->pc = 0x128da0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x128da4: 0x1000006b
    ctx->pc = 0x128DA4u;
    {
        const bool branch_taken_0x128da4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128DA8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x128da4) {
            ctx->pc = 0x128F54u;
            goto label_128f54;
        }
    }
    ctx->pc = 0x128DACu;
label_128dac:
    // 0x128dac: 0x14400008
    ctx->pc = 0x128DACu;
    {
        const bool branch_taken_0x128dac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x128DB0u;
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x128dac) {
            ctx->pc = 0x128DD0u;
            goto label_128dd0;
        }
    }
    ctx->pc = 0x128DB4u;
    // 0x128db4: 0x8fa30024
    ctx->pc = 0x128db4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_128db8:
    // 0x128db8: 0x200202d
    ctx->pc = 0x128db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128dbc: 0x8fa20004
    ctx->pc = 0x128dbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x128dc0: 0x431026
    ctx->pc = 0x128dc0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128dc4: 0x2102b
    ctx->pc = 0x128dc4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x128dc8: 0x10000062
    ctx->pc = 0x128DC8u;
    {
        const bool branch_taken_0x128dc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128DCCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x128dc8) {
            ctx->pc = 0x128F54u;
            goto label_128f54;
        }
    }
    ctx->pc = 0x128DD0u;
label_128dd0:
    // 0x128dd0: 0x3c16ffff
    ctx->pc = 0x128dd0u;
    SET_GPR_U32(ctx, 22, ((uint32_t)65535 << 16));
    // 0x128dd4: 0x16b03e
    ctx->pc = 0x128dd4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x128dd8: 0xdfb20030
    ctx->pc = 0x128dd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128ddc: 0x2768024
    ctx->pc = 0x128ddcu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x128de0: 0x256a824
    ctx->pc = 0x128de0u;
    SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x128de4: 0x13983e
    ctx->pc = 0x128de4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x128de8: 0x12903e
    ctx->pc = 0x128de8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x128dec: 0x200282d
    ctx->pc = 0x128decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128df0: 0xc049f28
    ctx->pc = 0x128DF0u;
    SET_GPR_U32(ctx, 31, 0x128DF8u);
    ctx->pc = 0x128DF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x127CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x127ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128DF8u; }
    }
    if (ctx->pc != 0x128DF8u) { return; }
    ctx->pc = 0x128DF8u;
    // 0x128df8: 0x40a02d
    ctx->pc = 0x128df8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128dfc: 0x200282d
    ctx->pc = 0x128dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e00: 0xc049f28
    ctx->pc = 0x128E00u;
    SET_GPR_U32(ctx, 31, 0x128E08u);
    ctx->pc = 0x128E04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x127CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x127ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128E08u; }
    }
    if (ctx->pc != 0x128E08u) { return; }
    ctx->pc = 0x128E08u;
    // 0x128e08: 0x40882d
    ctx->pc = 0x128e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e0c: 0x2a0202d
    ctx->pc = 0x128e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e10: 0xc049f28
    ctx->pc = 0x128E10u;
    SET_GPR_U32(ctx, 31, 0x128E18u);
    ctx->pc = 0x128E14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x127CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x127ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128E18u; }
    }
    if (ctx->pc != 0x128E18u) { return; }
    ctx->pc = 0x128E18u;
    // 0x128e18: 0x40802d
    ctx->pc = 0x128e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e1c: 0x240202d
    ctx->pc = 0x128e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e20: 0xc049f28
    ctx->pc = 0x128E20u;
    SET_GPR_U32(ctx, 31, 0x128E28u);
    ctx->pc = 0x128E24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x127CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x127ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128E28u; }
    }
    if (ctx->pc != 0x128E28u) { return; }
    ctx->pc = 0x128E28u;
    // 0x128e28: 0x230802d
    ctx->pc = 0x128e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x128e2c: 0x8fa50008
    ctx->pc = 0x128e2cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x128e30: 0x10203c
    ctx->pc = 0x128e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x128e34: 0x211882b
    ctx->pc = 0x128e34u;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x128e38: 0x284202d
    ctx->pc = 0x128e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x128e3c: 0x10803e
    ctx->pc = 0x128e3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x128e40: 0x8fa70028
    ctx->pc = 0x128e40u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x128e44: 0x2168024
    ctx->pc = 0x128e44u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x128e48: 0x8fa30004
    ctx->pc = 0x128e48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x128e4c: 0x11883c
    ctx->pc = 0x128e4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x128e50: 0x8fa60024
    ctx->pc = 0x128e50u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x128e54: 0x94a02b
    ctx->pc = 0x128e54u;
    SET_GPR_U32(ctx, 20, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x128e58: 0x202802d
    ctx->pc = 0x128e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x128e5c: 0xa72821
    ctx->pc = 0x128e5cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x128e60: 0x661826
    ctx->pc = 0x128e60u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x128e64: 0x2348825
    ctx->pc = 0x128e64u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x128e68: 0x24a50004
    ctx->pc = 0x128e68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x128e6c: 0x230882d
    ctx->pc = 0x128e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x128e70: 0x3182b
    ctx->pc = 0x128e70u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x128e74: 0x2402ffff
    ctx->pc = 0x128e74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128e78: 0x210fa
    ctx->pc = 0x128e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x128e7c: 0xafa30044
    ctx->pc = 0x128e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x128e80: 0x51102b
    ctx->pc = 0x128e80u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x128e84: 0x10400011
    ctx->pc = 0x128E84u;
    {
        const bool branch_taken_0x128e84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x128E88u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        if (branch_taken_0x128e84) {
            ctx->pc = 0x128ECCu;
            goto label_128ecc;
        }
    }
    ctx->pc = 0x128E8Cu;
    // 0x128e8c: 0x34068000
    ctx->pc = 0x128e8cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 32768));
    // 0x128e90: 0x6343c
    ctx->pc = 0x128e90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x128e94: 0x2403ffff
    ctx->pc = 0x128e94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128e98: 0x318fa
    ctx->pc = 0x128e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x128e9c: 0x32220001
    ctx->pc = 0x128e9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
label_128ea0:
    // 0x128ea0: 0x2103c
    ctx->pc = 0x128ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x128ea4: 0x2103f
    ctx->pc = 0x128ea4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x128ea8: 0x10400003
    ctx->pc = 0x128EA8u;
    {
        const bool branch_taken_0x128ea8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x128EACu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x128ea8) {
            ctx->pc = 0x128EB8u;
            goto label_128eb8;
        }
    }
    ctx->pc = 0x128EB0u;
    // 0x128eb0: 0x4207a
    ctx->pc = 0x128eb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x128eb4: 0x862025
    ctx->pc = 0x128eb4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_128eb8:
    // 0x128eb8: 0x11887a
    ctx->pc = 0x128eb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x128ebc: 0x71102b
    ctx->pc = 0x128ebcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x128ec0: 0x1440fff7
    ctx->pc = 0x128EC0u;
    {
        const bool branch_taken_0x128ec0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x128EC4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x128ec0) {
            ctx->pc = 0x128EA0u;
            goto label_128ea0;
        }
    }
    ctx->pc = 0x128EC8u;
    // 0x128ec8: 0xafa50048
    ctx->pc = 0x128ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_128ecc:
    // 0x128ecc: 0x2402ffff
    ctx->pc = 0x128eccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128ed0: 0x2113a
    ctx->pc = 0x128ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x128ed4: 0x51102b
    ctx->pc = 0x128ed4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x128ed8: 0x14400011
    ctx->pc = 0x128ED8u;
    {
        const bool branch_taken_0x128ed8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x128EDCu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 255));
        if (branch_taken_0x128ed8) {
            ctx->pc = 0x128F20u;
            goto label_128f20;
        }
    }
    ctx->pc = 0x128EE0u;
    // 0x128ee0: 0x8fa50048
    ctx->pc = 0x128ee0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128ee4: 0x34088000
    ctx->pc = 0x128ee4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 0), 32768));
    // 0x128ee8: 0x8443c
    ctx->pc = 0x128ee8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x128eec: 0x24070001
    ctx->pc = 0x128eecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x128ef0: 0x2406ffff
    ctx->pc = 0x128ef0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128ef4: 0x6313a
    ctx->pc = 0x128ef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_128ef8:
    // 0x128ef8: 0x118878
    ctx->pc = 0x128ef8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x128efc: 0x881824
    ctx->pc = 0x128efcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x128f00: 0x2271025
    ctx->pc = 0x128f00u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x128f04: 0x24a5ffff
    ctx->pc = 0x128f04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x128f08: 0x43880b
    ctx->pc = 0x128f08u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
    // 0x128f0c: 0xd1102b
    ctx->pc = 0x128f0cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x128f10: 0x1040fff9
    ctx->pc = 0x128F10u;
    {
        const bool branch_taken_0x128f10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x128F14u;
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        if (branch_taken_0x128f10) {
            ctx->pc = 0x128EF8u;
            goto label_128ef8;
        }
    }
    ctx->pc = 0x128F18u;
    // 0x128f18: 0xafa50048
    ctx->pc = 0x128f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x128f1c: 0x322300ff
    ctx->pc = 0x128f1cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 255));
label_128f20:
    // 0x128f20: 0x24020080
    ctx->pc = 0x128f20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x128f24: 0x54620008
    ctx->pc = 0x128F24u;
    {
        const bool branch_taken_0x128f24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x128f24) {
            ctx->pc = 0x128F28u;
            WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
            ctx->pc = 0x128F48u;
            goto label_128f48;
        }
    }
    ctx->pc = 0x128F2Cu;
    // 0x128f2c: 0x32220100
    ctx->pc = 0x128f2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 256));
    // 0x128f30: 0x10400003
    ctx->pc = 0x128F30u;
    {
        const bool branch_taken_0x128f30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x128F34u;
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)128);
        if (branch_taken_0x128f30) {
            ctx->pc = 0x128F40u;
            goto label_128f40;
        }
    }
    ctx->pc = 0x128F38u;
    // 0x128f38: 0x10000002
    ctx->pc = 0x128F38u;
    {
        const bool branch_taken_0x128f38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128F3Cu;
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)128);
        if (branch_taken_0x128f38) {
            ctx->pc = 0x128F44u;
            goto label_128f44;
        }
    }
    ctx->pc = 0x128F40u;
label_128f40:
    // 0x128f40: 0x44880b
    ctx->pc = 0x128f40u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
label_128f44:
    // 0x128f44: 0xffb10050
    ctx->pc = 0x128f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_128f48:
    // 0x128f48: 0x24020003
    ctx->pc = 0x128f48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x128f4c: 0xaee20000
    ctx->pc = 0x128f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x128f50: 0x2e0202d
    ctx->pc = 0x128f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_128f54:
    // 0x128f54: 0xc04a204
    ctx->pc = 0x128F54u;
    SET_GPR_U32(ctx, 31, 0x128F5Cu);
    ctx->pc = 0x128810u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x128810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128F5Cu; }
    }
    if (ctx->pc != 0x128F5Cu) { return; }
    ctx->pc = 0x128F5Cu;
    // 0x128f5c: 0xdfbf00f0
    ctx->pc = 0x128f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x128f60: 0xdfb700e0
    ctx->pc = 0x128f60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x128f64: 0xdfb600d0
    ctx->pc = 0x128f64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x128f68: 0xdfb500c0
    ctx->pc = 0x128f68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x128f6c: 0xdfb400b0
    ctx->pc = 0x128f6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x128f70: 0xdfb300a0
    ctx->pc = 0x128f70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x128f74: 0xdfb20090
    ctx->pc = 0x128f74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x128f78: 0xdfb10080
    ctx->pc = 0x128f78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x128f7c: 0xdfb00070
    ctx->pc = 0x128f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x128f80: 0x3e00008
    ctx->pc = 0x128F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128F84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x128D6Cu: goto label_128d6c;
            case 0x128D7Cu: goto label_128d7c;
            case 0x128D88u: goto label_128d88;
            case 0x128D90u: goto label_128d90;
            case 0x128D98u: goto label_128d98;
            case 0x128DACu: goto label_128dac;
            case 0x128DB8u: goto label_128db8;
            case 0x128DD0u: goto label_128dd0;
            case 0x128EA0u: goto label_128ea0;
            case 0x128EB8u: goto label_128eb8;
            case 0x128ECCu: goto label_128ecc;
            case 0x128EF8u: goto label_128ef8;
            case 0x128F20u: goto label_128f20;
            case 0x128F40u: goto label_128f40;
            case 0x128F44u: goto label_128f44;
            case 0x128F48u: goto label_128f48;
            case 0x128F54u: goto label_128f54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128F88u;
}
