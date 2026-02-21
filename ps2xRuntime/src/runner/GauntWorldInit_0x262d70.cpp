#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GauntWorldInit
// Address: 0x262d70 - 0x2633b4
void GauntWorldInit_0x262d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x262d70u;

    // 0x262d70: 0x27bdff60
    ctx->pc = 0x262d70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x262d74: 0xffbf0080
    ctx->pc = 0x262d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x262d78: 0xffb70070
    ctx->pc = 0x262d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x262d7c: 0xffb60060
    ctx->pc = 0x262d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x262d80: 0xffb50050
    ctx->pc = 0x262d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x262d84: 0xffb40040
    ctx->pc = 0x262d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x262d88: 0xffb30030
    ctx->pc = 0x262d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x262d8c: 0xffb20020
    ctx->pc = 0x262d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x262d90: 0xffb10010
    ctx->pc = 0x262d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x262d94: 0xffb00000
    ctx->pc = 0x262d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262d98: 0xe7b40090
    ctx->pc = 0x262d98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x262d9c: 0x3c03003c
    ctx->pc = 0x262d9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x262da0: 0x3c020031
    ctx->pc = 0x262da0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x262da4: 0xc440ffa4
    ctx->pc = 0x262da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262da8: 0xe4603288
    ctx->pc = 0x262da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12936), bits); }
    // 0x262dac: 0x3c02003c
    ctx->pc = 0x262dacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x262db0: 0xac40328c
    ctx->pc = 0x262db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12940), GPR_U32(ctx, 0));
    // 0x262db4: 0x3c020034
    ctx->pc = 0x262db4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262db8: 0xac40e7e4
    ctx->pc = 0x262db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961124), GPR_U32(ctx, 0));
    // 0x262dbc: 0x3c020034
    ctx->pc = 0x262dbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262dc0: 0x3c01c2c8
    ctx->pc = 0x262dc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49864 << 16));
    // 0x262dc4: 0x44810000
    ctx->pc = 0x262dc4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x262dc8: 0xe440e88c
    ctx->pc = 0x262dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961292), bits); }
    // 0x262dcc: 0x3c040032
    ctx->pc = 0x262dccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x262dd0: 0x3c030032
    ctx->pc = 0x262dd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x262dd4: 0x24024650
    ctx->pc = 0x262dd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18000));
    // 0x262dd8: 0xac6207d8
    ctx->pc = 0x262dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2008), GPR_U32(ctx, 2));
    // 0x262ddc: 0xac8207dc
    ctx->pc = 0x262ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2012), GPR_U32(ctx, 2));
    // 0x262de0: 0x3c020033
    ctx->pc = 0x262de0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x262de4: 0x2443c7c8
    ctx->pc = 0x262de4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294952904));
    // 0x262de8: 0xac40c7c8
    ctx->pc = 0x262de8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952904), GPR_U32(ctx, 0));
    // 0x262dec: 0xac600004
    ctx->pc = 0x262decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x262df0: 0xac600008
    ctx->pc = 0x262df0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x262df4: 0x3c020033
    ctx->pc = 0x262df4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x262df8: 0xac40c7d4
    ctx->pc = 0x262df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952916), GPR_U32(ctx, 0));
    // 0x262dfc: 0x3c020036
    ctx->pc = 0x262dfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x262e00: 0x2403ffff
    ctx->pc = 0x262e00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x262e04: 0xac43d938
    ctx->pc = 0x262e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957368), GPR_U32(ctx, 3));
    // 0x262e08: 0x3c040034
    ctx->pc = 0x262e08u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x262e0c: 0xac80e880
    ctx->pc = 0x262e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961280), GPR_U32(ctx, 0));
    // 0x262e10: 0x3c020034
    ctx->pc = 0x262e10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262e14: 0xac40e884
    ctx->pc = 0x262e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961284), GPR_U32(ctx, 0));
    // 0x262e18: 0x3c020034
    ctx->pc = 0x262e18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262e1c: 0xac43e888
    ctx->pc = 0x262e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961288), GPR_U32(ctx, 3));
    // 0x262e20: 0x3c020034
    ctx->pc = 0x262e20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262e24: 0xac43e8a4
    ctx->pc = 0x262e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961316), GPR_U32(ctx, 3));
    // 0x262e28: 0x3c020034
    ctx->pc = 0x262e28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262e2c: 0xac40e810
    ctx->pc = 0x262e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961168), GPR_U32(ctx, 0));
    // 0x262e30: 0x3c020034
    ctx->pc = 0x262e30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262e34: 0xac40e81c
    ctx->pc = 0x262e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961180), GPR_U32(ctx, 0));
    // 0x262e38: 0x3c020036
    ctx->pc = 0x262e38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x262e3c: 0x8c42d934
    ctx->pc = 0x262e3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x262e40: 0x2c42002b
    ctx->pc = 0x262e40u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 43));
    // 0x262e44: 0x10400028
    ctx->pc = 0x262E44u;
    {
        const bool branch_taken_0x262e44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x262E48u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x262e44) {
            ctx->pc = 0x262EE8u;
            goto label_262ee8;
        }
    }
    ctx->pc = 0x262E4Cu;
    // 0x262e4c: 0xac80e880
    ctx->pc = 0x262e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961280), GPR_U32(ctx, 0));
    // 0x262e50: 0x802d
    ctx->pc = 0x262e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e54: 0x24521bc0
    ctx->pc = 0x262e54u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x262e58: 0x24112b00
    ctx->pc = 0x262e58u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x262e5c: 0x24130001
    ctx->pc = 0x262e5cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x262e60: 0x24170005
    ctx->pc = 0x262e60u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 5));
    // 0x262e64: 0x24160003
    ctx->pc = 0x262e64u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 3));
    // 0x262e68: 0x80a02d
    ctx->pc = 0x262e68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e6c: 0x3c150034
    ctx->pc = 0x262e6cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)52 << 16));
    // 0x262e70: 0x2111818
    ctx->pc = 0x262e70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x262e74: 0x0
    ctx->pc = 0x262e74u;
    // NOP
label_262e78:
    // 0x262e78: 0x721021
    ctx->pc = 0x262e78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x262e7c: 0x8c4200fc
    ctx->pc = 0x262e7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x262e80: 0x50530006
    ctx->pc = 0x262E80u;
    {
        const bool branch_taken_0x262e80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        if (branch_taken_0x262e80) {
            ctx->pc = 0x262E84u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294961280)));
            ctx->pc = 0x262E9Cu;
            goto label_262e9c;
        }
    }
    ctx->pc = 0x262E88u;
    // 0x262e88: 0x50570004
    ctx->pc = 0x262E88u;
    {
        const bool branch_taken_0x262e88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 23));
        if (branch_taken_0x262e88) {
            ctx->pc = 0x262E8Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294961280)));
            ctx->pc = 0x262E9Cu;
            goto label_262e9c;
        }
    }
    ctx->pc = 0x262E90u;
    // 0x262e90: 0x54560012
    ctx->pc = 0x262E90u;
    {
        const bool branch_taken_0x262e90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 22));
        if (branch_taken_0x262e90) {
            ctx->pc = 0x262E94u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x262EDCu;
            goto label_262edc;
        }
    }
    ctx->pc = 0x262E98u;
    // 0x262e98: 0x8e82e880
    ctx->pc = 0x262e98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294961280)));
label_262e9c:
    // 0x262e9c: 0x1440000c
    ctx->pc = 0x262E9Cu;
    {
        const bool branch_taken_0x262e9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x262EA0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x262e9c) {
            ctx->pc = 0x262ED0u;
            goto label_262ed0;
        }
    }
    ctx->pc = 0x262EA4u;
    // 0x262ea4: 0x200202d
    ctx->pc = 0x262ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ea8: 0xc09dad6
    ctx->pc = 0x262EA8u;
    SET_GPR_U32(ctx, 31, 0x262EB0u);
    ctx->pc = 0x262EACu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 4294961136)));
    ctx->pc = 0x276B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasLegendItem_0x276b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262EB0u; }
    }
    if (ctx->pc != 0x262EB0u) { return; }
    ctx->pc = 0x262EB0u;
    // 0x262eb0: 0x10400007
    ctx->pc = 0x262EB0u;
    {
        const bool branch_taken_0x262eb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x262EB4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x262eb0) {
            ctx->pc = 0x262ED0u;
            goto label_262ed0;
        }
    }
    ctx->pc = 0x262EB8u;
    // 0x262eb8: 0x721021
    ctx->pc = 0x262eb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x262ebc: 0xac53080c
    ctx->pc = 0x262ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2060), GPR_U32(ctx, 19));
    // 0x262ec0: 0xae93e880
    ctx->pc = 0x262ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294961280), GPR_U32(ctx, 19));
    // 0x262ec4: 0x3c020034
    ctx->pc = 0x262ec4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262ec8: 0x10000003
    ctx->pc = 0x262EC8u;
    {
        const bool branch_taken_0x262ec8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x262ECCu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961284), GPR_U32(ctx, 0));
        if (branch_taken_0x262ec8) {
            ctx->pc = 0x262ED8u;
            goto label_262ed8;
        }
    }
    ctx->pc = 0x262ED0u;
label_262ed0:
    // 0x262ed0: 0x721021
    ctx->pc = 0x262ed0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x262ed4: 0xac40080c
    ctx->pc = 0x262ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2060), GPR_U32(ctx, 0));
label_262ed8:
    // 0x262ed8: 0x26100001
    ctx->pc = 0x262ed8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_262edc:
    // 0x262edc: 0x2a020004
    ctx->pc = 0x262edcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x262ee0: 0x1440ffe5
    ctx->pc = 0x262EE0u;
    {
        const bool branch_taken_0x262ee0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x262EE4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x262ee0) {
            ctx->pc = 0x262E78u;
            goto label_262e78;
        }
    }
    ctx->pc = 0x262EE8u;
label_262ee8:
    // 0x262ee8: 0xc0872e4
    ctx->pc = 0x262EE8u;
    SET_GPR_U32(ctx, 31, 0x262EF0u);
    ctx->pc = 0x21CB90u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewWorld_0x21cb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262EF0u; }
    }
    if (ctx->pc != 0x262EF0u) { return; }
    ctx->pc = 0x262EF0u;
    // 0x262ef0: 0x3c030034
    ctx->pc = 0x262ef0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x262ef4: 0x3c020032
    ctx->pc = 0x262ef4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x262ef8: 0xc440fa14
    ctx->pc = 0x262ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262efc: 0x3c014090
    ctx->pc = 0x262efcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16528 << 16));
    // 0x262f00: 0x44810800
    ctx->pc = 0x262f00u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x262f04: 0x46010001
    ctx->pc = 0x262f04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x262f08: 0xc0989f6
    ctx->pc = 0x262F08u;
    SET_GPR_U32(ctx, 31, 0x262F10u);
    ctx->pc = 0x262F0Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961292), bits); }
    ctx->pc = 0x2627D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetEnemyTypes_0x2627d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262F10u; }
    }
    if (ctx->pc != 0x262F10u) { return; }
    ctx->pc = 0x262F10u;
    // 0x262f10: 0x3c020031
    ctx->pc = 0x262f10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x262f14: 0x8c42fff0
    ctx->pc = 0x262f14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967280)));
    // 0x262f18: 0x28420002
    ctx->pc = 0x262f18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x262f1c: 0x10400013
    ctx->pc = 0x262F1Cu;
    {
        const bool branch_taken_0x262f1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x262F20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x262f1c) {
            ctx->pc = 0x262F6Cu;
            goto label_262f6c;
        }
    }
    ctx->pc = 0x262F24u;
    // 0x262f24: 0x8c42d934
    ctx->pc = 0x262f24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x262f28: 0x4410011
    ctx->pc = 0x262F28u;
    {
        const bool branch_taken_0x262f28 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x262F2Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x262f28) {
            ctx->pc = 0x262F70u;
            goto label_262f70;
        }
    }
    ctx->pc = 0x262F30u;
    // 0x262f30: 0x3c020034
    ctx->pc = 0x262f30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262f34: 0x8c43e7f0
    ctx->pc = 0x262f34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x262f38: 0x2402000d
    ctx->pc = 0x262f38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x262f3c: 0x1062000b
    ctx->pc = 0x262F3Cu;
    {
        const bool branch_taken_0x262f3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x262F40u;
        SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
        if (branch_taken_0x262f3c) {
            ctx->pc = 0x262F6Cu;
            goto label_262f6c;
        }
    }
    ctx->pc = 0x262F44u;
    // 0x262f44: 0x8e024640
    ctx->pc = 0x262f44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 17984)));
    // 0x262f48: 0x4430009
    ctx->pc = 0x262F48u;
    {
        const bool branch_taken_0x262f48 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x262f48) {
            ctx->pc = 0x262F4Cu;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x262F70u;
            goto label_262f70;
        }
    }
    ctx->pc = 0x262F50u;
    // 0x262f50: 0x3c04003b
    ctx->pc = 0x262f50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x262f54: 0x24849a58
    ctx->pc = 0x262f54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941272));
    // 0x262f58: 0x282d
    ctx->pc = 0x262f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262f5c: 0x302d
    ctx->pc = 0x262f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262f60: 0xc080d22
    ctx->pc = 0x262F60u;
    SET_GPR_U32(ctx, 31, 0x262F68u);
    ctx->pc = 0x262F64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262F68u; }
    }
    if (ctx->pc != 0x262F68u) { return; }
    ctx->pc = 0x262F68u;
    // 0x262f68: 0xae024640
    ctx->pc = 0x262f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17984), GPR_U32(ctx, 2));
label_262f6c:
    // 0x262f6c: 0x802d
    ctx->pc = 0x262f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262f70:
    // 0x262f70: 0x3c020034
    ctx->pc = 0x262f70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262f74: 0x2454e820
    ctx->pc = 0x262f74u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294961184));
    // 0x262f78: 0x2413001d
    ctx->pc = 0x262f78u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 29));
    // 0x262f7c: 0x3c020033
    ctx->pc = 0x262f7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x262f80: 0x24523d78
    ctx->pc = 0x262f80u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 15736));
    // 0x262f84: 0x3c020034
    ctx->pc = 0x262f84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262f88: 0x2451e860
    ctx->pc = 0x262f88u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294961248));
    // 0x262f8c: 0x101080
    ctx->pc = 0x262f8cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_262f90:
    // 0x262f90: 0x541021
    ctx->pc = 0x262f90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x262f94: 0x8c440000
    ctx->pc = 0x262f94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262f98: 0x10930011
    ctx->pc = 0x262F98u;
    {
        const bool branch_taken_0x262f98 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 19));
        ctx->pc = 0x262F9Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 29));
        if (branch_taken_0x262f98) {
            ctx->pc = 0x262FE0u;
            goto label_262fe0;
        }
    }
    ctx->pc = 0x262FA0u;
    // 0x262fa0: 0x14400005
    ctx->pc = 0x262FA0u;
    {
        const bool branch_taken_0x262fa0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x262FA4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 45));
        if (branch_taken_0x262fa0) {
            ctx->pc = 0x262FB8u;
            goto label_262fb8;
        }
    }
    ctx->pc = 0x262FA8u;
    // 0x262fa8: 0x10400003
    ctx->pc = 0x262FA8u;
    {
        const bool branch_taken_0x262fa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x262FACu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 32));
        if (branch_taken_0x262fa8) {
            ctx->pc = 0x262FB8u;
            goto label_262fb8;
        }
    }
    ctx->pc = 0x262FB0u;
    // 0x262fb0: 0x5040000c
    ctx->pc = 0x262FB0u;
    {
        const bool branch_taken_0x262fb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x262fb0) {
            ctx->pc = 0x262FB4u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x262FE4u;
            goto label_262fe4;
        }
    }
    ctx->pc = 0x262FB8u;
label_262fb8:
    // 0x262fb8: 0x4800009
    ctx->pc = 0x262FB8u;
    {
        const bool branch_taken_0x262fb8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x262FBCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x262fb8) {
            ctx->pc = 0x262FE0u;
            goto label_262fe0;
        }
    }
    ctx->pc = 0x262FC0u;
    // 0x262fc0: 0x521021
    ctx->pc = 0x262fc0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x262fc4: 0x8c420000
    ctx->pc = 0x262fc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262fc8: 0x54400006
    ctx->pc = 0x262FC8u;
    {
        const bool branch_taken_0x262fc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x262fc8) {
            ctx->pc = 0x262FCCu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x262FE4u;
            goto label_262fe4;
        }
    }
    ctx->pc = 0x262FD0u;
    // 0x262fd0: 0x101080
    ctx->pc = 0x262fd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x262fd4: 0x511021
    ctx->pc = 0x262fd4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x262fd8: 0xc08e0bc
    ctx->pc = 0x262FD8u;
    SET_GPR_U32(ctx, 31, 0x262FE0u);
    ctx->pc = 0x262FDCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2382F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadEnemy_0x2382f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262FE0u; }
    }
    if (ctx->pc != 0x262FE0u) { return; }
    ctx->pc = 0x262FE0u;
label_262fe0:
    // 0x262fe0: 0x26100001
    ctx->pc = 0x262fe0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_262fe4:
    // 0x262fe4: 0x2a020008
    ctx->pc = 0x262fe4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x262fe8: 0x1440ffe9
    ctx->pc = 0x262FE8u;
    {
        const bool branch_taken_0x262fe8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x262FECu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x262fe8) {
            ctx->pc = 0x262F90u;
            goto label_262f90;
        }
    }
    ctx->pc = 0x262FF0u;
    // 0x262ff0: 0xc0b4fa0
    ctx->pc = 0x262FF0u;
    SET_GPR_U32(ctx, 31, 0x262FF8u);
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262FF8u; }
    }
    if (ctx->pc != 0x262FF8u) { return; }
    ctx->pc = 0x262FF8u;
    // 0x262ff8: 0x40882d
    ctx->pc = 0x262ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ffc: 0x3c020031
    ctx->pc = 0x262ffcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x263000: 0x8c420018
    ctx->pc = 0x263000u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x263004: 0x30428000
    ctx->pc = 0x263004u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x263008: 0x14400004
    ctx->pc = 0x263008u;
    {
        const bool branch_taken_0x263008 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26300Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x263008) {
            ctx->pc = 0x26301Cu;
            goto label_26301c;
        }
    }
    ctx->pc = 0x263010u;
    // 0x263010: 0xc093e54
    ctx->pc = 0x263010u;
    SET_GPR_U32(ctx, 31, 0x263018u);
    ctx->pc = 0x24F950u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWeapons_0x24f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263018u; }
    }
    if (ctx->pc != 0x263018u) { return; }
    ctx->pc = 0x263018u;
    // 0x263018: 0x3c020034
    ctx->pc = 0x263018u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26301c:
    // 0x26301c: 0xc093e68
    ctx->pc = 0x26301Cu;
    SET_GPR_U32(ctx, 31, 0x263024u);
    ctx->pc = 0x263020u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961352)));
    ctx->pc = 0x24F9A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadPowerups_0x24f9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263024u; }
    }
    if (ctx->pc != 0x263024u) { return; }
    ctx->pc = 0x263024u;
    // 0x263024: 0xc0b4fa0
    ctx->pc = 0x263024u;
    SET_GPR_U32(ctx, 31, 0x26302Cu);
    ctx->pc = 0x263028u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26302Cu; }
    }
    if (ctx->pc != 0x26302Cu) { return; }
    ctx->pc = 0x26302Cu;
    // 0x26302c: 0x2221023
    ctx->pc = 0x26302cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263030: 0x8e033280
    ctx->pc = 0x263030u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12928)));
    // 0x263034: 0x431021
    ctx->pc = 0x263034u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263038: 0xc0b4fa0
    ctx->pc = 0x263038u;
    SET_GPR_U32(ctx, 31, 0x263040u);
    ctx->pc = 0x26303Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12928), GPR_U32(ctx, 2));
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263040u; }
    }
    if (ctx->pc != 0x263040u) { return; }
    ctx->pc = 0x263040u;
    // 0x263040: 0xc093e06
    ctx->pc = 0x263040u;
    SET_GPR_U32(ctx, 31, 0x263048u);
    ctx->pc = 0x263044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24F818u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadItems_0x24f818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263048u; }
    }
    if (ctx->pc != 0x263048u) { return; }
    ctx->pc = 0x263048u;
    // 0x263048: 0xc0b4fa0
    ctx->pc = 0x263048u;
    SET_GPR_U32(ctx, 31, 0x263050u);
    ctx->pc = 0x26304Cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263050u; }
    }
    if (ctx->pc != 0x263050u) { return; }
    ctx->pc = 0x263050u;
    // 0x263050: 0x2221023
    ctx->pc = 0x263050u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263054: 0xae023284
    ctx->pc = 0x263054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12932), GPR_U32(ctx, 2));
    // 0x263058: 0x3c020032
    ctx->pc = 0x263058u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26305c: 0x2442f9f8
    ctx->pc = 0x26305cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x263060: 0x8c440080
    ctx->pc = 0x263060u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x263064: 0x10800003
    ctx->pc = 0x263064u;
    {
        const bool branch_taken_0x263064 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x263064) {
            ctx->pc = 0x263074u;
            goto label_263074;
        }
    }
    ctx->pc = 0x26306Cu;
    // 0x26306c: 0xc084c42
    ctx->pc = 0x26306Cu;
    SET_GPR_U32(ctx, 31, 0x263074u);
    ctx->pc = 0x263070u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 132)));
    ctx->pc = 0x213108u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitTexMods_0x213108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263074u; }
    }
    if (ctx->pc != 0x263074u) { return; }
    ctx->pc = 0x263074u;
label_263074:
    // 0x263074: 0xc08e12a
    ctx->pc = 0x263074u;
    SET_GPR_U32(ctx, 31, 0x26307Cu);
    ctx->pc = 0x263078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2384A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupEnemyTexMods_0x2384a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26307Cu; }
    }
    if (ctx->pc != 0x26307Cu) { return; }
    ctx->pc = 0x26307Cu;
    // 0x26307c: 0xc093e7c
    ctx->pc = 0x26307Cu;
    SET_GPR_U32(ctx, 31, 0x263084u);
    ctx->pc = 0x24F9F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupWeaponPowerupTexMods_0x24f9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263084u; }
    }
    if (ctx->pc != 0x263084u) { return; }
    ctx->pc = 0x263084u;
    // 0x263084: 0xc093e3c
    ctx->pc = 0x263084u;
    SET_GPR_U32(ctx, 31, 0x26308Cu);
    ctx->pc = 0x24F8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupItemTexMods_0x24f8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26308Cu; }
    }
    if (ctx->pc != 0x26308Cu) { return; }
    ctx->pc = 0x26308Cu;
    // 0x26308c: 0x0
    ctx->pc = 0x26308cu;
    // NOP
label_263090:
    // 0x263090: 0xc08bc64
    ctx->pc = 0x263090u;
    SET_GPR_U32(ctx, 31, 0x263098u);
    ctx->pc = 0x263094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22F190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupPlayerTexMods_0x22f190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263098u; }
    }
    if (ctx->pc != 0x263098u) { return; }
    ctx->pc = 0x263098u;
    // 0x263098: 0x26100001
    ctx->pc = 0x263098u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x26309c: 0x2a020004
    ctx->pc = 0x26309cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x2630a0: 0x1440fffb
    ctx->pc = 0x2630A0u;
    {
        const bool branch_taken_0x2630a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2630a0) {
            ctx->pc = 0x263090u;
            goto label_263090;
        }
    }
    ctx->pc = 0x2630A8u;
    // 0x2630a8: 0xc09e71c
    ctx->pc = 0x2630A8u;
    SET_GPR_U32(ctx, 31, 0x2630B0u);
    ctx->pc = 0x279C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffects_0x279c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630B0u; }
    }
    if (ctx->pc != 0x2630B0u) { return; }
    ctx->pc = 0x2630B0u;
    // 0x2630b0: 0xc093eec
    ctx->pc = 0x2630B0u;
    SET_GPR_U32(ctx, 31, 0x2630B8u);
    ctx->pc = 0x24FBB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitItemInfoData_0x24fbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630B8u; }
    }
    if (ctx->pc != 0x2630B8u) { return; }
    ctx->pc = 0x2630B8u;
    // 0x2630b8: 0xc0a4882
    ctx->pc = 0x2630B8u;
    SET_GPR_U32(ctx, 31, 0x2630C0u);
    ctx->pc = 0x292208u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitAllMoves_0x292208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630C0u; }
    }
    if (ctx->pc != 0x2630C0u) { return; }
    ctx->pc = 0x2630C0u;
    // 0x2630c0: 0x3c04003b
    ctx->pc = 0x2630c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2630c4: 0xc0989bc
    ctx->pc = 0x2630C4u;
    SET_GPR_U32(ctx, 31, 0x2630CCu);
    ctx->pc = 0x2630C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941280));
    ctx->pc = 0x2626F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InLevel_0x2626f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630CCu; }
    }
    if (ctx->pc != 0x2630CCu) { return; }
    ctx->pc = 0x2630CCu;
    // 0x2630cc: 0x10400017
    ctx->pc = 0x2630CCu;
    {
        const bool branch_taken_0x2630cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2630D0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x2630cc) {
            ctx->pc = 0x26312Cu;
            goto label_26312c;
        }
    }
    ctx->pc = 0x2630D4u;
    // 0x2630d4: 0x24020004
    ctx->pc = 0x2630d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2630d8: 0xac623214
    ctx->pc = 0x2630d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12820), GPR_U32(ctx, 2));
    // 0x2630dc: 0x3c03003c
    ctx->pc = 0x2630dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2630e0: 0x3c02003b
    ctx->pc = 0x2630e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2630e4: 0x24479a68
    ctx->pc = 0x2630e4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294941288));
    // 0x2630e8: 0x24663238
    ctx->pc = 0x2630e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 12856));
    // 0x2630ec: 0x68e40007
    ctx->pc = 0x2630ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2630f0: 0x6ce40000
    ctx->pc = 0x2630f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2630f4: 0x88e5000b
    ctx->pc = 0x2630f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 5, (GPR_U32(ctx, 5) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x2630f8: 0x98e50008
    ctx->pc = 0x2630f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 5, (GPR_U32(ctx, 5) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x2630fc: 0xb0c40007
    ctx->pc = 0x2630fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x263100: 0xb4c40000
    ctx->pc = 0x263100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x263104: 0xa8c5000b
    ctx->pc = 0x263104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 5) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x263108: 0xb8c50008
    ctx->pc = 0x263108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 5) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26310c: 0x80e4000c
    ctx->pc = 0x26310cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x263110: 0x80e5000d
    ctx->pc = 0x263110u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
    // 0x263114: 0xa0c4000c
    ctx->pc = 0x263114u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x263118: 0xa0c5000d
    ctx->pc = 0x263118u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 13), (uint8_t)GPR_U32(ctx, 5));
    // 0x26311c: 0x80e4000e
    ctx->pc = 0x26311cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x263120: 0xa0c4000e
    ctx->pc = 0x263120u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 14), (uint8_t)GPR_U32(ctx, 4));
    // 0x263124: 0x1000001b
    ctx->pc = 0x263124u;
    {
        const bool branch_taken_0x263124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x263128u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x263124) {
            ctx->pc = 0x263194u;
            goto label_263194;
        }
    }
    ctx->pc = 0x26312Cu;
label_26312c:
    // 0x26312c: 0x3c04003b
    ctx->pc = 0x26312cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x263130: 0xc0989bc
    ctx->pc = 0x263130u;
    SET_GPR_U32(ctx, 31, 0x263138u);
    ctx->pc = 0x263134u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941304));
    ctx->pc = 0x2626F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InLevel_0x2626f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263138u; }
    }
    if (ctx->pc != 0x263138u) { return; }
    ctx->pc = 0x263138u;
    // 0x263138: 0x10400013
    ctx->pc = 0x263138u;
    {
        const bool branch_taken_0x263138 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26313Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x263138) {
            ctx->pc = 0x263188u;
            goto label_263188;
        }
    }
    ctx->pc = 0x263140u;
    // 0x263140: 0x24020004
    ctx->pc = 0x263140u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x263144: 0xac623214
    ctx->pc = 0x263144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12820), GPR_U32(ctx, 2));
    // 0x263148: 0x3c03003c
    ctx->pc = 0x263148u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26314c: 0x3c02003b
    ctx->pc = 0x26314cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x263150: 0x24479a80
    ctx->pc = 0x263150u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294941312));
    // 0x263154: 0x24663238
    ctx->pc = 0x263154u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 12856));
    // 0x263158: 0x68e40007
    ctx->pc = 0x263158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x26315c: 0x6ce40000
    ctx->pc = 0x26315cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x263160: 0x88e5000b
    ctx->pc = 0x263160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 5, (GPR_U32(ctx, 5) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x263164: 0x98e50008
    ctx->pc = 0x263164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 5, (GPR_U32(ctx, 5) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x263168: 0xb0c40007
    ctx->pc = 0x263168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26316c: 0xb4c40000
    ctx->pc = 0x26316cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x263170: 0xa8c5000b
    ctx->pc = 0x263170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 5) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x263174: 0xb8c50008
    ctx->pc = 0x263174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 5) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x263178: 0x80e4000c
    ctx->pc = 0x263178u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x26317c: 0xa0c4000c
    ctx->pc = 0x26317cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x263180: 0x10000004
    ctx->pc = 0x263180u;
    {
        const bool branch_taken_0x263180 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x263184u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x263180) {
            ctx->pc = 0x263194u;
            goto label_263194;
        }
    }
    ctx->pc = 0x263188u;
label_263188:
    // 0x263188: 0x3c02003c
    ctx->pc = 0x263188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26318c: 0xac403214
    ctx->pc = 0x26318cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12820), GPR_U32(ctx, 0));
    // 0x263190: 0x3c02003c
    ctx->pc = 0x263190u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_263194:
    // 0x263194: 0x8c423214
    ctx->pc = 0x263194u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12820)));
    // 0x263198: 0x18400035
    ctx->pc = 0x263198u;
    {
        const bool branch_taken_0x263198 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26319Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x263198) {
            ctx->pc = 0x263270u;
            goto label_263270;
        }
    }
    ctx->pc = 0x2631A0u;
    // 0x2631a0: 0x3c17003c
    ctx->pc = 0x2631a0u;
    SET_GPR_U32(ctx, 23, ((uint32_t)60 << 16));
    // 0x2631a4: 0x2e0102d
    ctx->pc = 0x2631a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2631a8: 0x245131c0
    ctx->pc = 0x2631a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 12736));
    // 0x2631ac: 0x3c16003b
    ctx->pc = 0x2631acu;
    SET_GPR_U32(ctx, 22, ((uint32_t)59 << 16));
    // 0x2631b0: 0x3c15003c
    ctx->pc = 0x2631b0u;
    SET_GPR_U32(ctx, 21, ((uint32_t)60 << 16));
    // 0x2631b4: 0x3c02003c
    ctx->pc = 0x2631b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2631b8: 0x24543218
    ctx->pc = 0x2631b8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 12824));
    // 0x2631bc: 0x3c02003c
    ctx->pc = 0x2631bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2631c0: 0x24533228
    ctx->pc = 0x2631c0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 12840));
    // 0x2631c4: 0x3c120031
    ctx->pc = 0x2631c4u;
    SET_GPR_U32(ctx, 18, ((uint32_t)49 << 16));
    // 0x2631c8: 0x3c0140a0
    ctx->pc = 0x2631c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x2631cc: 0x4481a000
    ctx->pc = 0x2631ccu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2631d0: 0x220202d
    ctx->pc = 0x2631d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2631d4: 0x0
    ctx->pc = 0x2631d4u;
    // NOP
label_2631d8:
    // 0x2631d8: 0x26c59a90
    ctx->pc = 0x2631d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 22), 4294941328));
    // 0x2631dc: 0x26a63238
    ctx->pc = 0x2631dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 12856));
    // 0x2631e0: 0xc0b6252
    ctx->pc = 0x2631E0u;
    SET_GPR_U32(ctx, 31, 0x2631E8u);
    ctx->pc = 0x2631E4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2631E8u; }
    }
    if (ctx->pc != 0x2631E8u) { return; }
    ctx->pc = 0x2631E8u;
    // 0x2631e8: 0xc0870d4
    ctx->pc = 0x2631E8u;
    SET_GPR_U32(ctx, 31, 0x2631F0u);
    ctx->pc = 0x2631ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21C350u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWorldObject_0x21c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2631F0u; }
    }
    if (ctx->pc != 0x2631F0u) { return; }
    ctx->pc = 0x2631F0u;
    // 0x2631f0: 0x40202d
    ctx->pc = 0x2631f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2631f4: 0x101080
    ctx->pc = 0x2631f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2631f8: 0x541021
    ctx->pc = 0x2631f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2631fc: 0x10800008
    ctx->pc = 0x2631FCu;
    {
        const bool branch_taken_0x2631fc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x263200u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x2631fc) {
            ctx->pc = 0x263220u;
            goto label_263220;
        }
    }
    ctx->pc = 0x263204u;
    // 0x263204: 0x8c840028
    ctx->pc = 0x263204u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x263208: 0x10800005
    ctx->pc = 0x263208u;
    {
        const bool branch_taken_0x263208 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x26320Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x263208) {
            ctx->pc = 0x263220u;
            goto label_263220;
        }
    }
    ctx->pc = 0x263210u;
    // 0x263210: 0xc0b41b8
    ctx->pc = 0x263210u;
    SET_GPR_U32(ctx, 31, 0x263218u);
    ctx->pc = 0x263214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263218u; }
    }
    if (ctx->pc != 0x263218u) { return; }
    ctx->pc = 0x263218u;
    // 0x263218: 0x10000005
    ctx->pc = 0x263218u;
    {
        const bool branch_taken_0x263218 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x263218) {
            ctx->pc = 0x263230u;
            goto label_263230;
        }
    }
    ctx->pc = 0x263220u;
label_263220:
    // 0x263220: 0x3c04003b
    ctx->pc = 0x263220u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x263224: 0x24849a98
    ctx->pc = 0x263224u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941336));
    // 0x263228: 0xc0b492e
    ctx->pc = 0x263228u;
    SET_GPR_U32(ctx, 31, 0x263230u);
    ctx->pc = 0x26322Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 23), 12736));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263230u; }
    }
    if (ctx->pc != 0x263230u) { return; }
    ctx->pc = 0x263230u;
label_263230:
    // 0x263230: 0x3c014120
    ctx->pc = 0x263230u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x263234: 0x44816000
    ctx->pc = 0x263234u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x263238: 0xc0b5c06
    ctx->pc = 0x263238u;
    SET_GPR_U32(ctx, 31, 0x263240u);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263240u; }
    }
    if (ctx->pc != 0x263240u) { return; }
    ctx->pc = 0x263240u;
    // 0x263240: 0x101080
    ctx->pc = 0x263240u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x263244: 0x531021
    ctx->pc = 0x263244u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x263248: 0xc641ffa4
    ctx->pc = 0x263248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26324c: 0x46140840
    ctx->pc = 0x26324cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x263250: 0x46000840
    ctx->pc = 0x263250u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x263254: 0xe4410000
    ctx->pc = 0x263254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x263258: 0x26100001
    ctx->pc = 0x263258u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x26325c: 0x3c02003c
    ctx->pc = 0x26325cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x263260: 0x8c423214
    ctx->pc = 0x263260u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12820)));
    // 0x263264: 0x202102a
    ctx->pc = 0x263264u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x263268: 0x1440ffdb
    ctx->pc = 0x263268u;
    {
        const bool branch_taken_0x263268 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26326Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x263268) {
            ctx->pc = 0x2631D8u;
            goto label_2631d8;
        }
    }
    ctx->pc = 0x263270u;
label_263270:
    // 0x263270: 0xc098cee
    ctx->pc = 0x263270u;
    SET_GPR_U32(ctx, 31, 0x263278u);
    ctx->pc = 0x2633B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        world_update_0x2633b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263278u; }
    }
    if (ctx->pc != 0x263278u) { return; }
    ctx->pc = 0x263278u;
    // 0x263278: 0xc094c82
    ctx->pc = 0x263278u;
    SET_GPR_U32(ctx, 31, 0x263280u);
    ctx->pc = 0x253208u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddItemInstList_0x253208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263280u; }
    }
    if (ctx->pc != 0x263280u) { return; }
    ctx->pc = 0x263280u;
    // 0x263280: 0xc0942c4
    ctx->pc = 0x263280u;
    SET_GPR_U32(ctx, 31, 0x263288u);
    ctx->pc = 0x250B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddLocatorInstList_0x250b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263288u; }
    }
    if (ctx->pc != 0x263288u) { return; }
    ctx->pc = 0x263288u;
    // 0x263288: 0x3c020036
    ctx->pc = 0x263288u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x26328c: 0x8c42d934
    ctx->pc = 0x26328cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x263290: 0x4400009
    ctx->pc = 0x263290u;
    {
        const bool branch_taken_0x263290 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x263290) {
            ctx->pc = 0x2632B8u;
            goto label_2632b8;
        }
    }
    ctx->pc = 0x263298u;
    // 0x263298: 0x3c014120
    ctx->pc = 0x263298u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x26329c: 0x44816000
    ctx->pc = 0x26329cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2632a0: 0x3c014170
    ctx->pc = 0x2632a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
    // 0x2632a4: 0x44816800
    ctx->pc = 0x2632a4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2632a8: 0xc09ffd4
    ctx->pc = 0x2632A8u;
    SET_GPR_U32(ctx, 31, 0x2632B0u);
    ctx->pc = 0x27FF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitDynGrid_0x27ff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2632B0u; }
    }
    if (ctx->pc != 0x2632B0u) { return; }
    ctx->pc = 0x2632B0u;
    // 0x2632b0: 0x10000007
    ctx->pc = 0x2632B0u;
    {
        const bool branch_taken_0x2632b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2632b0) {
            ctx->pc = 0x2632D0u;
            goto label_2632d0;
        }
    }
    ctx->pc = 0x2632B8u;
label_2632b8:
    // 0x2632b8: 0x3c014040
    ctx->pc = 0x2632b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x2632bc: 0x44816000
    ctx->pc = 0x2632bcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2632c0: 0x3c014170
    ctx->pc = 0x2632c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
    // 0x2632c4: 0x44816800
    ctx->pc = 0x2632c4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2632c8: 0xc09ffd4
    ctx->pc = 0x2632C8u;
    SET_GPR_U32(ctx, 31, 0x2632D0u);
    ctx->pc = 0x27FF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitDynGrid_0x27ff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2632D0u; }
    }
    if (ctx->pc != 0x2632D0u) { return; }
    ctx->pc = 0x2632D0u;
label_2632d0:
    // 0x2632d0: 0xc0a005c
    ctx->pc = 0x2632D0u;
    SET_GPR_U32(ctx, 31, 0x2632D8u);
    ctx->pc = 0x280170u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupDynGrid_0x280170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2632D8u; }
    }
    if (ctx->pc != 0x2632D8u) { return; }
    ctx->pc = 0x2632D8u;
    // 0x2632d8: 0xc087d8c
    ctx->pc = 0x2632D8u;
    SET_GPR_U32(ctx, 31, 0x2632E0u);
    ctx->pc = 0x21F630u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateDynobjGrid_0x21f630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2632E0u; }
    }
    if (ctx->pc != 0x2632E0u) { return; }
    ctx->pc = 0x2632E0u;
    // 0x2632e0: 0xc096940
    ctx->pc = 0x2632E0u;
    SET_GPR_U32(ctx, 31, 0x2632E8u);
    ctx->pc = 0x25A500u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoEnemyPickupItems_0x25a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2632E8u; }
    }
    if (ctx->pc != 0x2632E8u) { return; }
    ctx->pc = 0x2632E8u;
    // 0x2632e8: 0x3c020034
    ctx->pc = 0x2632e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2632ec: 0xac40e8fc
    ctx->pc = 0x2632ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961404), GPR_U32(ctx, 0));
    // 0x2632f0: 0x3c020034
    ctx->pc = 0x2632f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2632f4: 0xac40e9b0
    ctx->pc = 0x2632f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961584), GPR_U32(ctx, 0));
    // 0x2632f8: 0x3c020034
    ctx->pc = 0x2632f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2632fc: 0xac40e8cc
    ctx->pc = 0x2632fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961356), GPR_U32(ctx, 0));
    // 0x263300: 0x3c020034
    ctx->pc = 0x263300u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x263304: 0x8c43e7f0
    ctx->pc = 0x263304u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x263308: 0x2402000d
    ctx->pc = 0x263308u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x26330c: 0x14620004
    ctx->pc = 0x26330Cu;
    {
        const bool branch_taken_0x26330c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x263310u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26330c) {
            ctx->pc = 0x263320u;
            goto label_263320;
        }
    }
    ctx->pc = 0x263314u;
    // 0x263314: 0xc09d19c
    ctx->pc = 0x263314u;
    SET_GPR_U32(ctx, 31, 0x26331Cu);
    ctx->pc = 0x274670u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerInit_0x274670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26331Cu; }
    }
    if (ctx->pc != 0x26331Cu) { return; }
    ctx->pc = 0x26331Cu;
    // 0x26331c: 0x3c020031
    ctx->pc = 0x26331cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_263320:
    // 0x263320: 0x8c430018
    ctx->pc = 0x263320u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x263324: 0x24024010
    ctx->pc = 0x263324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
    // 0x263328: 0x10620003
    ctx->pc = 0x263328u;
    {
        const bool branch_taken_0x263328 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x26332Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16396));
        if (branch_taken_0x263328) {
            ctx->pc = 0x263338u;
            goto label_263338;
        }
    }
    ctx->pc = 0x263330u;
    // 0x263330: 0x14620007
    ctx->pc = 0x263330u;
    {
        const bool branch_taken_0x263330 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x263330) {
            ctx->pc = 0x263350u;
            goto label_263350;
        }
    }
    ctx->pc = 0x263338u;
label_263338:
    // 0x263338: 0x3c020034
    ctx->pc = 0x263338u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26333c: 0x44806000
    ctx->pc = 0x26333cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x263340: 0xc098b46
    ctx->pc = 0x263340u;
    SET_GPR_U32(ctx, 31, 0x263348u);
    ctx->pc = 0x263344u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961128)));
    ctx->pc = 0x262D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        FogFadeIn_0x262d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263348u; }
    }
    if (ctx->pc != 0x263348u) { return; }
    ctx->pc = 0x263348u;
    // 0x263348: 0x10000008
    ctx->pc = 0x263348u;
    {
        const bool branch_taken_0x263348 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26334Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x263348) {
            ctx->pc = 0x26336Cu;
            goto label_26336c;
        }
    }
    ctx->pc = 0x263350u;
label_263350:
    // 0x263350: 0xc098b54
    ctx->pc = 0x263350u;
    SET_GPR_U32(ctx, 31, 0x263358u);
    ctx->pc = 0x262D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        FogOff_0x262d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263358u; }
    }
    if (ctx->pc != 0x263358u) { return; }
    ctx->pc = 0x263358u;
    // 0x263358: 0x3c020035
    ctx->pc = 0x263358u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x26335c: 0x3c013f80
    ctx->pc = 0x26335cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x263360: 0x44810000
    ctx->pc = 0x263360u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x263364: 0xe44096bc
    ctx->pc = 0x263364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294940348), bits); }
    // 0x263368: 0x3c020031
    ctx->pc = 0x263368u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_26336c:
    // 0x26336c: 0x8c420018
    ctx->pc = 0x26336cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x263370: 0x30428000
    ctx->pc = 0x263370u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x263374: 0x14400004
    ctx->pc = 0x263374u;
    {
        const bool branch_taken_0x263374 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x263378u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x263374) {
            ctx->pc = 0x263388u;
            goto label_263388;
        }
    }
    ctx->pc = 0x26337Cu;
    // 0x26337c: 0x3c03003c
    ctx->pc = 0x26337cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x263380: 0x24020001
    ctx->pc = 0x263380u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x263384: 0xac623258
    ctx->pc = 0x263384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12888), GPR_U32(ctx, 2));
label_263388:
    // 0x263388: 0xdfb70070
    ctx->pc = 0x263388u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26338c: 0xdfb60060
    ctx->pc = 0x26338cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x263390: 0xdfb50050
    ctx->pc = 0x263390u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x263394: 0xdfb40040
    ctx->pc = 0x263394u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263398: 0xdfb30030
    ctx->pc = 0x263398u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26339c: 0xdfb20020
    ctx->pc = 0x26339cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2633a0: 0xdfb10010
    ctx->pc = 0x2633a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2633a4: 0xdfb00000
    ctx->pc = 0x2633a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2633a8: 0xc7b40090
    ctx->pc = 0x2633a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2633ac: 0x3e00008
    ctx->pc = 0x2633ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2633B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262E78u: goto label_262e78;
            case 0x262E9Cu: goto label_262e9c;
            case 0x262ED0u: goto label_262ed0;
            case 0x262ED8u: goto label_262ed8;
            case 0x262EDCu: goto label_262edc;
            case 0x262EE8u: goto label_262ee8;
            case 0x262F6Cu: goto label_262f6c;
            case 0x262F70u: goto label_262f70;
            case 0x262F90u: goto label_262f90;
            case 0x262FB8u: goto label_262fb8;
            case 0x262FE0u: goto label_262fe0;
            case 0x262FE4u: goto label_262fe4;
            case 0x26301Cu: goto label_26301c;
            case 0x263074u: goto label_263074;
            case 0x263090u: goto label_263090;
            case 0x26312Cu: goto label_26312c;
            case 0x263188u: goto label_263188;
            case 0x263194u: goto label_263194;
            case 0x2631D8u: goto label_2631d8;
            case 0x263220u: goto label_263220;
            case 0x263230u: goto label_263230;
            case 0x263270u: goto label_263270;
            case 0x2632B8u: goto label_2632b8;
            case 0x2632D0u: goto label_2632d0;
            case 0x263320u: goto label_263320;
            case 0x263338u: goto label_263338;
            case 0x263350u: goto label_263350;
            case 0x26336Cu: goto label_26336c;
            case 0x263388u: goto label_263388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2633B4u;
}
