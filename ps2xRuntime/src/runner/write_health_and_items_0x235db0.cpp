#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: write_health_and_items
// Address: 0x235db0 - 0x236444
void write_health_and_items_0x235db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x235db0u;

label_235db0:
    // 0x235db0: 0x27bdff40
    ctx->pc = 0x235db0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
label_235db4:
    // 0x235db4: 0xffbf00a0
    ctx->pc = 0x235db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_235db8:
    // 0x235db8: 0xffb70090
    ctx->pc = 0x235db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_235dbc:
    // 0x235dbc: 0xffb60080
    ctx->pc = 0x235dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_235dc0:
    // 0x235dc0: 0xffb50070
    ctx->pc = 0x235dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_235dc4:
    // 0x235dc4: 0xffb40060
    ctx->pc = 0x235dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_235dc8:
    // 0x235dc8: 0xffb30050
    ctx->pc = 0x235dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_235dcc:
    // 0x235dcc: 0xffb20040
    ctx->pc = 0x235dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_235dd0:
    // 0x235dd0: 0xffb10030
    ctx->pc = 0x235dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_235dd4:
    // 0x235dd4: 0xffb00020
    ctx->pc = 0x235dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_235dd8:
    // 0x235dd8: 0xe7b400b0
    ctx->pc = 0x235dd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_235ddc:
    // 0x235ddc: 0x80982d
    ctx->pc = 0x235ddcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235de0:
    // 0x235de0: 0x24032b00
    ctx->pc = 0x235de0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
label_235de4:
    // 0x235de4: 0x2631818
    ctx->pc = 0x235de4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_235de8:
    // 0x235de8: 0x3c020032
    ctx->pc = 0x235de8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_235dec:
    // 0x235dec: 0x24421bc0
    ctx->pc = 0x235decu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
label_235df0:
    // 0x235df0: 0x629021
    ctx->pc = 0x235df0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_235df4:
    // 0x235df4: 0x24160138
    ctx->pc = 0x235df4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 312));
label_235df8:
    // 0x235df8: 0xa82d
    ctx->pc = 0x235df8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235dfc:
    // 0x235dfc: 0x24100001
    ctx->pc = 0x235dfcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_235e00:
    // 0x235e00: 0x3c030032
    ctx->pc = 0x235e00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_235e04:
    // 0x235e04: 0x24631550
    ctx->pc = 0x235e04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5456));
label_235e08:
    // 0x235e08: 0x8e420004
    ctx->pc = 0x235e08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_235e0c:
    // 0x235e0c: 0x21080
    ctx->pc = 0x235e0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_235e10:
    // 0x235e10: 0x431021
    ctx->pc = 0x235e10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_235e14:
    // 0x235e14: 0x3c014779
    ctx->pc = 0x235e14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18297 << 16));
label_235e18:
    // 0x235e18: 0x3421f600
    ctx->pc = 0x235e18u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62976));
label_235e1c:
    // 0x235e1c: 0x44816000
    ctx->pc = 0x235e1cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_235e20:
    // 0x235e20: 0xc0b1448
label_235e24:
    if (ctx->pc == 0x235E24u) {
        ctx->pc = 0x235E24u;
        SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x235E28u;
        goto label_235e28;
    }
    ctx->pc = 0x235E20u;
    SET_GPR_U32(ctx, 31, 0x235E28u);
    ctx->pc = 0x235E24u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2C5120u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontZ_0x2c5120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235E28u; }
    }
    if (ctx->pc != 0x235E28u) { return; }
    ctx->pc = 0x235E28u;
label_235e28:
    // 0x235e28: 0x3c020035
    ctx->pc = 0x235e28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_235e2c:
    // 0x235e2c: 0x8c429b88
    ctx->pc = 0x235e2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941576)));
label_235e30:
    // 0x235e30: 0x14400005
label_235e34:
    if (ctx->pc == 0x235E34u) {
        ctx->pc = 0x235E34u;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x235E38u;
        goto label_235e38;
    }
    ctx->pc = 0x235E30u;
    {
        const bool branch_taken_0x235e30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x235E34u;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x235e30) {
            ctx->pc = 0x235E48u;
            goto label_235e48;
        }
    }
    ctx->pc = 0x235E38u;
label_235e38:
    // 0x235e38: 0x3c020031
    ctx->pc = 0x235e38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_235e3c:
    // 0x235e3c: 0x8c420008
    ctx->pc = 0x235e3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_235e40:
    // 0x235e40: 0x10400003
label_235e44:
    if (ctx->pc == 0x235E44u) {
        ctx->pc = 0x235E44u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x235E48u;
        goto label_235e48;
    }
    ctx->pc = 0x235E40u;
    {
        const bool branch_taken_0x235e40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x235E44u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x235e40) {
            ctx->pc = 0x235E50u;
            goto label_235e50;
        }
    }
    ctx->pc = 0x235E48u;
label_235e48:
    // 0x235e48: 0x24150001
    ctx->pc = 0x235e48u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
label_235e4c:
    // 0x235e4c: 0x3c020031
    ctx->pc = 0x235e4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_235e50:
    // 0x235e50: 0x8c430018
    ctx->pc = 0x235e50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_235e54:
    // 0x235e54: 0x24024010
    ctx->pc = 0x235e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_235e58:
    // 0x235e58: 0x5462003c
label_235e5c:
    if (ctx->pc == 0x235E5Cu) {
        ctx->pc = 0x235E5Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 252)));
        ctx->pc = 0x235E60u;
        goto label_235e60;
    }
    ctx->pc = 0x235E58u;
    {
        const bool branch_taken_0x235e58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x235e58) {
            ctx->pc = 0x235E5Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 252)));
            ctx->pc = 0x235F4Cu;
            goto label_235f4c;
        }
    }
    ctx->pc = 0x235E60u;
label_235e60:
    // 0x235e60: 0x3c020031
    ctx->pc = 0x235e60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_235e64:
    // 0x235e64: 0x8c420034
    ctx->pc = 0x235e64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_235e68:
    // 0x235e68: 0x18400037
label_235e6c:
    if (ctx->pc == 0x235E6Cu) {
        ctx->pc = 0x235E6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x235E70u;
        goto label_235e70;
    }
    ctx->pc = 0x235E68u;
    {
        const bool branch_taken_0x235e68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x235E6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x235e68) {
            ctx->pc = 0x235F48u;
            goto label_235f48;
        }
    }
    ctx->pc = 0x235E70u;
label_235e70:
    // 0x235e70: 0x8e4300fc
    ctx->pc = 0x235e70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 252)));
label_235e74:
    // 0x235e74: 0x14620036
label_235e78:
    if (ctx->pc == 0x235E78u) {
        ctx->pc = 0x235E78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x235E7Cu;
        goto label_235e7c;
    }
    ctx->pc = 0x235E74u;
    {
        const bool branch_taken_0x235e74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x235E78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x235e74) {
            ctx->pc = 0x235F50u;
            goto label_235f50;
        }
    }
    ctx->pc = 0x235E7Cu;
label_235e7c:
    // 0x235e7c: 0x8e432ad4
    ctx->pc = 0x235e7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 10964)));
label_235e80:
    // 0x235e80: 0x24020001
    ctx->pc = 0x235e80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_235e84:
    // 0x235e84: 0x54620031
label_235e88:
    if (ctx->pc == 0x235E88u) {
        ctx->pc = 0x235E88u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 252)));
        ctx->pc = 0x235E8Cu;
        goto label_235e8c;
    }
    ctx->pc = 0x235E84u;
    {
        const bool branch_taken_0x235e84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x235e84) {
            ctx->pc = 0x235E88u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 252)));
            ctx->pc = 0x235F4Cu;
            goto label_235f4c;
        }
    }
    ctx->pc = 0x235E8Cu;
label_235e8c:
    // 0x235e8c: 0x24150001
    ctx->pc = 0x235e8cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
label_235e90:
    // 0x235e90: 0x3c030032
    ctx->pc = 0x235e90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_235e94:
    // 0x235e94: 0x246315d0
    ctx->pc = 0x235e94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5584));
label_235e98:
    // 0x235e98: 0x131040
    ctx->pc = 0x235e98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 1));
label_235e9c:
    // 0x235e9c: 0x431021
    ctx->pc = 0x235e9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_235ea0:
    // 0x235ea0: 0x94500000
    ctx->pc = 0x235ea0u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_235ea4:
    // 0x235ea4: 0x26100006
    ctx->pc = 0x235ea4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 6));
label_235ea8:
    // 0x235ea8: 0x26d40018
    ctx->pc = 0x235ea8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 22), 24));
label_235eac:
    // 0x235eac: 0x3c020038
    ctx->pc = 0x235eacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_235eb0:
    // 0x235eb0: 0x8c44b154
    ctx->pc = 0x235eb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947156)));
label_235eb4:
    // 0x235eb4: 0x200282d
    ctx->pc = 0x235eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235eb8:
    // 0x235eb8: 0x26c60014
    ctx->pc = 0x235eb8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 22), 20));
label_235ebc:
    // 0x235ebc: 0x2407000e
    ctx->pc = 0x235ebcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 14));
label_235ec0:
    // 0x235ec0: 0xc0b0c6a
label_235ec4:
    if (ctx->pc == 0x235EC4u) {
        ctx->pc = 0x235EC4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x235EC8u;
        goto label_235ec8;
    }
    ctx->pc = 0x235EC0u;
    SET_GPR_U32(ctx, 31, 0x235EC8u);
    ctx->pc = 0x235EC4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235EC8u; }
    }
    if (ctx->pc != 0x235EC8u) { return; }
    ctx->pc = 0x235EC8u;
label_235ec8:
    // 0x235ec8: 0x3c020038
    ctx->pc = 0x235ec8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_235ecc:
    // 0x235ecc: 0x26d1002c
    ctx->pc = 0x235eccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 22), 44));
label_235ed0:
    // 0x235ed0: 0x8c44b150
    ctx->pc = 0x235ed0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947152)));
label_235ed4:
    // 0x235ed4: 0x200282d
    ctx->pc = 0x235ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235ed8:
    // 0x235ed8: 0x26c60028
    ctx->pc = 0x235ed8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 22), 40));
label_235edc:
    // 0x235edc: 0x2407000e
    ctx->pc = 0x235edcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 14));
label_235ee0:
    // 0x235ee0: 0xc0b0c6a
label_235ee4:
    if (ctx->pc == 0x235EE4u) {
        ctx->pc = 0x235EE4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x235EE8u;
        goto label_235ee8;
    }
    ctx->pc = 0x235EE0u;
    SET_GPR_U32(ctx, 31, 0x235EE8u);
    ctx->pc = 0x235EE4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235EE8u; }
    }
    if (ctx->pc != 0x235EE8u) { return; }
    ctx->pc = 0x235EE8u;
label_235ee8:
    // 0x235ee8: 0x2610000e
    ctx->pc = 0x235ee8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 14));
label_235eec:
    // 0x235eec: 0x200202d
    ctx->pc = 0x235eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235ef0:
    // 0x235ef0: 0x280282d
    ctx->pc = 0x235ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_235ef4:
    // 0x235ef4: 0x24060001
    ctx->pc = 0x235ef4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_235ef8:
    // 0x235ef8: 0x3c0700ff
    ctx->pc = 0x235ef8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_235efc:
    // 0x235efc: 0x34e7ffff
    ctx->pc = 0x235efcu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_235f00:
    // 0x235f00: 0x3c013f99
    ctx->pc = 0x235f00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16281 << 16));
label_235f04:
    // 0x235f04: 0x3421999a
    ctx->pc = 0x235f04u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
label_235f08:
    // 0x235f08: 0x44816000
    ctx->pc = 0x235f08u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_235f0c:
    // 0x235f0c: 0x3c08003a
    ctx->pc = 0x235f0cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
label_235f10:
    // 0x235f10: 0xc080510
label_235f14:
    if (ctx->pc == 0x235F14u) {
        ctx->pc = 0x235F14u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 31200));
        ctx->pc = 0x235F18u;
        goto label_235f18;
    }
    ctx->pc = 0x235F10u;
    SET_GPR_U32(ctx, 31, 0x235F18u);
    ctx->pc = 0x235F14u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 31200));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235F18u; }
    }
    if (ctx->pc != 0x235F18u) { return; }
    ctx->pc = 0x235F18u;
label_235f18:
    // 0x235f18: 0x200202d
    ctx->pc = 0x235f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235f1c:
    // 0x235f1c: 0x220282d
    ctx->pc = 0x235f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235f20:
    // 0x235f20: 0x24060001
    ctx->pc = 0x235f20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_235f24:
    // 0x235f24: 0x3c0700ff
    ctx->pc = 0x235f24u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_235f28:
    // 0x235f28: 0x34e7ffff
    ctx->pc = 0x235f28u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_235f2c:
    // 0x235f2c: 0x3c013f99
    ctx->pc = 0x235f2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16281 << 16));
label_235f30:
    // 0x235f30: 0x3421999a
    ctx->pc = 0x235f30u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
label_235f34:
    // 0x235f34: 0x44816000
    ctx->pc = 0x235f34u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_235f38:
    // 0x235f38: 0x3c08003a
    ctx->pc = 0x235f38u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
label_235f3c:
    // 0x235f3c: 0xc080510
label_235f40:
    if (ctx->pc == 0x235F40u) {
        ctx->pc = 0x235F40u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 31216));
        ctx->pc = 0x235F44u;
        goto label_235f44;
    }
    ctx->pc = 0x235F3Cu;
    SET_GPR_U32(ctx, 31, 0x235F44u);
    ctx->pc = 0x235F40u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 31216));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235F44u; }
    }
    if (ctx->pc != 0x235F44u) { return; }
    ctx->pc = 0x235F44u;
label_235f44:
    // 0x235f44: 0x802d
    ctx->pc = 0x235f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235f48:
    // 0x235f48: 0x8e4300fc
    ctx->pc = 0x235f48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 252)));
label_235f4c:
    // 0x235f4c: 0x24020005
    ctx->pc = 0x235f4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_235f50:
    // 0x235f50: 0x10620003
label_235f54:
    if (ctx->pc == 0x235F54u) {
        ctx->pc = 0x235F54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x235F58u;
        goto label_235f58;
    }
    ctx->pc = 0x235F50u;
    {
        const bool branch_taken_0x235f50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x235F54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x235f50) {
            ctx->pc = 0x235F60u;
            goto label_235f60;
        }
    }
    ctx->pc = 0x235F58u;
label_235f58:
    // 0x235f58: 0x14620022
label_235f5c:
    if (ctx->pc == 0x235F5Cu) {
        ctx->pc = 0x235F60u;
        goto label_235f60;
    }
    ctx->pc = 0x235F58u;
    {
        const bool branch_taken_0x235f58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x235f58) {
            ctx->pc = 0x235FE4u;
            goto label_235fe4;
        }
    }
    ctx->pc = 0x235F60u;
label_235f60:
    // 0x235f60: 0x3c020031
    ctx->pc = 0x235f60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_235f64:
    // 0x235f64: 0x8c430018
    ctx->pc = 0x235f64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_235f68:
    // 0x235f68: 0x2402400d
    ctx->pc = 0x235f68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
label_235f6c:
    // 0x235f6c: 0x1062001d
label_235f70:
    if (ctx->pc == 0x235F70u) {
        ctx->pc = 0x235F70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16403));
        ctx->pc = 0x235F74u;
        goto label_235f74;
    }
    ctx->pc = 0x235F6Cu;
    {
        const bool branch_taken_0x235f6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x235F70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16403));
        if (branch_taken_0x235f6c) {
            ctx->pc = 0x235FE4u;
            goto label_235fe4;
        }
    }
    ctx->pc = 0x235F74u;
label_235f74:
    // 0x235f74: 0x1062001b
label_235f78:
    if (ctx->pc == 0x235F78u) {
        ctx->pc = 0x235F78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16407));
        ctx->pc = 0x235F7Cu;
        goto label_235f7c;
    }
    ctx->pc = 0x235F74u;
    {
        const bool branch_taken_0x235f74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x235F78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16407));
        if (branch_taken_0x235f74) {
            ctx->pc = 0x235FE4u;
            goto label_235fe4;
        }
    }
    ctx->pc = 0x235F7Cu;
label_235f7c:
    // 0x235f7c: 0x10620019
label_235f80:
    if (ctx->pc == 0x235F80u) {
        ctx->pc = 0x235F84u;
        goto label_235f84;
    }
    ctx->pc = 0x235F7Cu;
    {
        const bool branch_taken_0x235f7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x235f7c) {
            ctx->pc = 0x235FE4u;
            goto label_235fe4;
        }
    }
    ctx->pc = 0x235F84u;
label_235f84:
    // 0x235f84: 0x16a00017
label_235f88:
    if (ctx->pc == 0x235F88u) {
        ctx->pc = 0x235F88u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 22), 28));
        ctx->pc = 0x235F8Cu;
        goto label_235f8c;
    }
    ctx->pc = 0x235F84u;
    {
        const bool branch_taken_0x235f84 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x235F88u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 22), 28));
        if (branch_taken_0x235f84) {
            ctx->pc = 0x235FE4u;
            goto label_235fe4;
        }
    }
    ctx->pc = 0x235F8Cu;
label_235f8c:
    // 0x235f8c: 0x24150001
    ctx->pc = 0x235f8cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
label_235f90:
    // 0x235f90: 0xc08d382
label_235f94:
    if (ctx->pc == 0x235F94u) {
        ctx->pc = 0x235F94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235F98u;
        goto label_235f98;
    }
    ctx->pc = 0x235F90u;
    SET_GPR_U32(ctx, 31, 0x235F98u);
    ctx->pc = 0x235F94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_player_display_0x234e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235F98u; }
    }
    if (ctx->pc != 0x235F98u) { return; }
    ctx->pc = 0x235F98u;
label_235f98:
    // 0x235f98: 0x8e4300fc
    ctx->pc = 0x235f98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 252)));
label_235f9c:
    // 0x235f9c: 0x2402000b
    ctx->pc = 0x235f9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
label_235fa0:
    // 0x235fa0: 0x54620010
label_235fa4:
    if (ctx->pc == 0x235FA4u) {
        ctx->pc = 0x235FA4u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235FA8u;
        goto label_235fa8;
    }
    ctx->pc = 0x235FA0u;
    {
        const bool branch_taken_0x235fa0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x235fa0) {
            ctx->pc = 0x235FA4u;
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x235FE4u;
            goto label_235fe4;
        }
    }
    ctx->pc = 0x235FA8u;
label_235fa8:
    // 0x235fa8: 0x3c030032
    ctx->pc = 0x235fa8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_235fac:
    // 0x235fac: 0x246315d8
    ctx->pc = 0x235facu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5592));
label_235fb0:
    // 0x235fb0: 0x131040
    ctx->pc = 0x235fb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 1));
label_235fb4:
    // 0x235fb4: 0x431021
    ctx->pc = 0x235fb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_235fb8:
    // 0x235fb8: 0x94440000
    ctx->pc = 0x235fb8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_235fbc:
    // 0x235fbc: 0x42023
    ctx->pc = 0x235fbcu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_235fc0:
    // 0x235fc0: 0x280282d
    ctx->pc = 0x235fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_235fc4:
    // 0x235fc4: 0x24060001
    ctx->pc = 0x235fc4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_235fc8:
    // 0x235fc8: 0x2e0382d
    ctx->pc = 0x235fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_235fcc:
    // 0x235fcc: 0x3c013f99
    ctx->pc = 0x235fccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16281 << 16));
label_235fd0:
    // 0x235fd0: 0x3421999a
    ctx->pc = 0x235fd0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
label_235fd4:
    // 0x235fd4: 0x44816000
    ctx->pc = 0x235fd4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_235fd8:
    // 0x235fd8: 0x3c08003a
    ctx->pc = 0x235fd8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
label_235fdc:
    // 0x235fdc: 0xc080510
label_235fe0:
    if (ctx->pc == 0x235FE0u) {
        ctx->pc = 0x235FE0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 31232));
        ctx->pc = 0x235FE4u;
        goto label_235fe4;
    }
    ctx->pc = 0x235FDCu;
    SET_GPR_U32(ctx, 31, 0x235FE4u);
    ctx->pc = 0x235FE0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 31232));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235FE4u; }
    }
    if (ctx->pc != 0x235FE4u) { return; }
    ctx->pc = 0x235FE4u;
label_235fe4:
    // 0x235fe4: 0x1200000b
label_235fe8:
    if (ctx->pc == 0x235FE8u) {
        ctx->pc = 0x235FE8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x235FECu;
        goto label_235fec;
    }
    ctx->pc = 0x235FE4u;
    {
        const bool branch_taken_0x235fe4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x235FE8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x235fe4) {
            ctx->pc = 0x236014u;
            goto label_236014;
        }
    }
    ctx->pc = 0x235FECu;
label_235fec:
    // 0x235fec: 0x8c4213dc
    ctx->pc = 0x235fecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5084)));
label_235ff0:
    // 0x235ff0: 0x14400009
label_235ff4:
    if (ctx->pc == 0x235FF4u) {
        ctx->pc = 0x235FF4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235FF8u;
        goto label_235ff8;
    }
    ctx->pc = 0x235FF0u;
    {
        const bool branch_taken_0x235ff0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x235FF4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x235ff0) {
            ctx->pc = 0x236018u;
            goto label_236018;
        }
    }
    ctx->pc = 0x235FF8u;
label_235ff8:
    // 0x235ff8: 0xc08d63c
label_235ffc:
    if (ctx->pc == 0x235FFCu) {
        ctx->pc = 0x235FFCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x236000u;
        goto label_236000;
    }
    ctx->pc = 0x235FF8u;
    SET_GPR_U32(ctx, 31, 0x236000u);
    ctx->pc = 0x235FFCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2358F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        write_gold_0x2358f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236000u; }
    }
    if (ctx->pc != 0x236000u) { return; }
    ctx->pc = 0x236000u;
label_236000:
    // 0x236000: 0x260202d
    ctx->pc = 0x236000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_236004:
    // 0x236004: 0xc08d686
label_236008:
    if (ctx->pc == 0x236008u) {
        ctx->pc = 0x236008u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23600Cu;
        goto label_23600c;
    }
    ctx->pc = 0x236004u;
    SET_GPR_U32(ctx, 31, 0x23600Cu);
    ctx->pc = 0x236008u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x235A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        write_health_0x235a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23600Cu; }
    }
    if (ctx->pc != 0x23600Cu) { return; }
    ctx->pc = 0x23600Cu;
label_23600c:
    // 0x23600c: 0x10000008
label_236010:
    if (ctx->pc == 0x236010u) {
        ctx->pc = 0x236010u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2428)));
        ctx->pc = 0x236014u;
        goto label_236014;
    }
    ctx->pc = 0x23600Cu;
    {
        const bool branch_taken_0x23600c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x236010u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2428)));
        if (branch_taken_0x23600c) {
            ctx->pc = 0x236030u;
            goto label_236030;
        }
    }
    ctx->pc = 0x236014u;
label_236014:
    // 0x236014: 0x260202d
    ctx->pc = 0x236014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_236018:
    // 0x236018: 0xc08d63c
label_23601c:
    if (ctx->pc == 0x23601Cu) {
        ctx->pc = 0x23601Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x236020u;
        goto label_236020;
    }
    ctx->pc = 0x236018u;
    SET_GPR_U32(ctx, 31, 0x236020u);
    ctx->pc = 0x23601Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2358F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        write_gold_0x2358f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236020u; }
    }
    if (ctx->pc != 0x236020u) { return; }
    ctx->pc = 0x236020u;
label_236020:
    // 0x236020: 0x260202d
    ctx->pc = 0x236020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_236024:
    // 0x236024: 0xc08d686
label_236028:
    if (ctx->pc == 0x236028u) {
        ctx->pc = 0x236028u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23602Cu;
        goto label_23602c;
    }
    ctx->pc = 0x236024u;
    SET_GPR_U32(ctx, 31, 0x23602Cu);
    ctx->pc = 0x236028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x235A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        write_health_0x235a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23602Cu; }
    }
    if (ctx->pc != 0x23602Cu) { return; }
    ctx->pc = 0x23602Cu;
label_23602c:
    // 0x23602c: 0x8e42097c
    ctx->pc = 0x23602cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2428)));
label_236030:
    // 0x236030: 0x2443ffff
    ctx->pc = 0x236030u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
label_236034:
    // 0x236034: 0x2c62000a
    ctx->pc = 0x236034u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 10));
label_236038:
    // 0x236038: 0x10400059
label_23603c:
    if (ctx->pc == 0x23603Cu) {
        ctx->pc = 0x23603Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x236040u;
        goto label_236040;
    }
    ctx->pc = 0x236038u;
    {
        const bool branch_taken_0x236038 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23603Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x236038) {
            ctx->pc = 0x2361A0u;
            goto label_2361a0;
        }
    }
    ctx->pc = 0x236040u;
label_236040:
    // 0x236040: 0x24427a20
    ctx->pc = 0x236040u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 31264));
label_236044:
    // 0x236044: 0x31880
    ctx->pc = 0x236044u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_236048:
    // 0x236048: 0x621821
    ctx->pc = 0x236048u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23604c:
    // 0x23604c: 0x8c620000
    ctx->pc = 0x23604cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_236050:
    // 0x236050: 0x400008
label_236054:
    if (ctx->pc == 0x236054u) {
        ctx->pc = 0x236058u;
        goto label_236058;
    }
    ctx->pc = 0x236050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x235DB0u: goto label_235db0;
            case 0x235DB4u: goto label_235db4;
            case 0x235DB8u: goto label_235db8;
            case 0x235DBCu: goto label_235dbc;
            case 0x235DC0u: goto label_235dc0;
            case 0x235DC4u: goto label_235dc4;
            case 0x235DC8u: goto label_235dc8;
            case 0x235DCCu: goto label_235dcc;
            case 0x235DD0u: goto label_235dd0;
            case 0x235DD4u: goto label_235dd4;
            case 0x235DD8u: goto label_235dd8;
            case 0x235DDCu: goto label_235ddc;
            case 0x235DE0u: goto label_235de0;
            case 0x235DE4u: goto label_235de4;
            case 0x235DE8u: goto label_235de8;
            case 0x235DECu: goto label_235dec;
            case 0x235DF0u: goto label_235df0;
            case 0x235DF4u: goto label_235df4;
            case 0x235DF8u: goto label_235df8;
            case 0x235DFCu: goto label_235dfc;
            case 0x235E00u: goto label_235e00;
            case 0x235E04u: goto label_235e04;
            case 0x235E08u: goto label_235e08;
            case 0x235E0Cu: goto label_235e0c;
            case 0x235E10u: goto label_235e10;
            case 0x235E14u: goto label_235e14;
            case 0x235E18u: goto label_235e18;
            case 0x235E1Cu: goto label_235e1c;
            case 0x235E20u: goto label_235e20;
            case 0x235E24u: goto label_235e24;
            case 0x235E28u: goto label_235e28;
            case 0x235E2Cu: goto label_235e2c;
            case 0x235E30u: goto label_235e30;
            case 0x235E34u: goto label_235e34;
            case 0x235E38u: goto label_235e38;
            case 0x235E3Cu: goto label_235e3c;
            case 0x235E40u: goto label_235e40;
            case 0x235E44u: goto label_235e44;
            case 0x235E48u: goto label_235e48;
            case 0x235E4Cu: goto label_235e4c;
            case 0x235E50u: goto label_235e50;
            case 0x235E54u: goto label_235e54;
            case 0x235E58u: goto label_235e58;
            case 0x235E5Cu: goto label_235e5c;
            case 0x235E60u: goto label_235e60;
            case 0x235E64u: goto label_235e64;
            case 0x235E68u: goto label_235e68;
            case 0x235E6Cu: goto label_235e6c;
            case 0x235E70u: goto label_235e70;
            case 0x235E74u: goto label_235e74;
            case 0x235E78u: goto label_235e78;
            case 0x235E7Cu: goto label_235e7c;
            case 0x235E80u: goto label_235e80;
            case 0x235E84u: goto label_235e84;
            case 0x235E88u: goto label_235e88;
            case 0x235E8Cu: goto label_235e8c;
            case 0x235E90u: goto label_235e90;
            case 0x235E94u: goto label_235e94;
            case 0x235E98u: goto label_235e98;
            case 0x235E9Cu: goto label_235e9c;
            case 0x235EA0u: goto label_235ea0;
            case 0x235EA4u: goto label_235ea4;
            case 0x235EA8u: goto label_235ea8;
            case 0x235EACu: goto label_235eac;
            case 0x235EB0u: goto label_235eb0;
            case 0x235EB4u: goto label_235eb4;
            case 0x235EB8u: goto label_235eb8;
            case 0x235EBCu: goto label_235ebc;
            case 0x235EC0u: goto label_235ec0;
            case 0x235EC4u: goto label_235ec4;
            case 0x235EC8u: goto label_235ec8;
            case 0x235ECCu: goto label_235ecc;
            case 0x235ED0u: goto label_235ed0;
            case 0x235ED4u: goto label_235ed4;
            case 0x235ED8u: goto label_235ed8;
            case 0x235EDCu: goto label_235edc;
            case 0x235EE0u: goto label_235ee0;
            case 0x235EE4u: goto label_235ee4;
            case 0x235EE8u: goto label_235ee8;
            case 0x235EECu: goto label_235eec;
            case 0x235EF0u: goto label_235ef0;
            case 0x235EF4u: goto label_235ef4;
            case 0x235EF8u: goto label_235ef8;
            case 0x235EFCu: goto label_235efc;
            case 0x235F00u: goto label_235f00;
            case 0x235F04u: goto label_235f04;
            case 0x235F08u: goto label_235f08;
            case 0x235F0Cu: goto label_235f0c;
            case 0x235F10u: goto label_235f10;
            case 0x235F14u: goto label_235f14;
            case 0x235F18u: goto label_235f18;
            case 0x235F1Cu: goto label_235f1c;
            case 0x235F20u: goto label_235f20;
            case 0x235F24u: goto label_235f24;
            case 0x235F28u: goto label_235f28;
            case 0x235F2Cu: goto label_235f2c;
            case 0x235F30u: goto label_235f30;
            case 0x235F34u: goto label_235f34;
            case 0x235F38u: goto label_235f38;
            case 0x235F3Cu: goto label_235f3c;
            case 0x235F40u: goto label_235f40;
            case 0x235F44u: goto label_235f44;
            case 0x235F48u: goto label_235f48;
            case 0x235F4Cu: goto label_235f4c;
            case 0x235F50u: goto label_235f50;
            case 0x235F54u: goto label_235f54;
            case 0x235F58u: goto label_235f58;
            case 0x235F5Cu: goto label_235f5c;
            case 0x235F60u: goto label_235f60;
            case 0x235F64u: goto label_235f64;
            case 0x235F68u: goto label_235f68;
            case 0x235F6Cu: goto label_235f6c;
            case 0x235F70u: goto label_235f70;
            case 0x235F74u: goto label_235f74;
            case 0x235F78u: goto label_235f78;
            case 0x235F7Cu: goto label_235f7c;
            case 0x235F80u: goto label_235f80;
            case 0x235F84u: goto label_235f84;
            case 0x235F88u: goto label_235f88;
            case 0x235F8Cu: goto label_235f8c;
            case 0x235F90u: goto label_235f90;
            case 0x235F94u: goto label_235f94;
            case 0x235F98u: goto label_235f98;
            case 0x235F9Cu: goto label_235f9c;
            case 0x235FA0u: goto label_235fa0;
            case 0x235FA4u: goto label_235fa4;
            case 0x235FA8u: goto label_235fa8;
            case 0x235FACu: goto label_235fac;
            case 0x235FB0u: goto label_235fb0;
            case 0x235FB4u: goto label_235fb4;
            case 0x235FB8u: goto label_235fb8;
            case 0x235FBCu: goto label_235fbc;
            case 0x235FC0u: goto label_235fc0;
            case 0x235FC4u: goto label_235fc4;
            case 0x235FC8u: goto label_235fc8;
            case 0x235FCCu: goto label_235fcc;
            case 0x235FD0u: goto label_235fd0;
            case 0x235FD4u: goto label_235fd4;
            case 0x235FD8u: goto label_235fd8;
            case 0x235FDCu: goto label_235fdc;
            case 0x235FE0u: goto label_235fe0;
            case 0x235FE4u: goto label_235fe4;
            case 0x235FE8u: goto label_235fe8;
            case 0x235FECu: goto label_235fec;
            case 0x235FF0u: goto label_235ff0;
            case 0x235FF4u: goto label_235ff4;
            case 0x235FF8u: goto label_235ff8;
            case 0x235FFCu: goto label_235ffc;
            case 0x236000u: goto label_236000;
            case 0x236004u: goto label_236004;
            case 0x236008u: goto label_236008;
            case 0x23600Cu: goto label_23600c;
            case 0x236010u: goto label_236010;
            case 0x236014u: goto label_236014;
            case 0x236018u: goto label_236018;
            case 0x23601Cu: goto label_23601c;
            case 0x236020u: goto label_236020;
            case 0x236024u: goto label_236024;
            case 0x236028u: goto label_236028;
            case 0x23602Cu: goto label_23602c;
            case 0x236030u: goto label_236030;
            case 0x236034u: goto label_236034;
            case 0x236038u: goto label_236038;
            case 0x23603Cu: goto label_23603c;
            case 0x236040u: goto label_236040;
            case 0x236044u: goto label_236044;
            case 0x236048u: goto label_236048;
            case 0x23604Cu: goto label_23604c;
            case 0x236050u: goto label_236050;
            case 0x236054u: goto label_236054;
            case 0x236058u: goto label_236058;
            case 0x23605Cu: goto label_23605c;
            case 0x236060u: goto label_236060;
            case 0x236064u: goto label_236064;
            case 0x236068u: goto label_236068;
            case 0x23606Cu: goto label_23606c;
            case 0x236070u: goto label_236070;
            case 0x236074u: goto label_236074;
            case 0x236078u: goto label_236078;
            case 0x23607Cu: goto label_23607c;
            case 0x236080u: goto label_236080;
            case 0x236084u: goto label_236084;
            case 0x236088u: goto label_236088;
            case 0x23608Cu: goto label_23608c;
            case 0x236090u: goto label_236090;
            case 0x236094u: goto label_236094;
            case 0x236098u: goto label_236098;
            case 0x23609Cu: goto label_23609c;
            case 0x2360A0u: goto label_2360a0;
            case 0x2360A4u: goto label_2360a4;
            case 0x2360A8u: goto label_2360a8;
            case 0x2360ACu: goto label_2360ac;
            case 0x2360B0u: goto label_2360b0;
            case 0x2360B4u: goto label_2360b4;
            case 0x2360B8u: goto label_2360b8;
            case 0x2360BCu: goto label_2360bc;
            case 0x2360C0u: goto label_2360c0;
            case 0x2360C4u: goto label_2360c4;
            case 0x2360C8u: goto label_2360c8;
            case 0x2360CCu: goto label_2360cc;
            case 0x2360D0u: goto label_2360d0;
            case 0x2360D4u: goto label_2360d4;
            case 0x2360D8u: goto label_2360d8;
            case 0x2360DCu: goto label_2360dc;
            case 0x2360E0u: goto label_2360e0;
            case 0x2360E4u: goto label_2360e4;
            case 0x2360E8u: goto label_2360e8;
            case 0x2360ECu: goto label_2360ec;
            case 0x2360F0u: goto label_2360f0;
            case 0x2360F4u: goto label_2360f4;
            case 0x2360F8u: goto label_2360f8;
            case 0x2360FCu: goto label_2360fc;
            case 0x236100u: goto label_236100;
            case 0x236104u: goto label_236104;
            case 0x236108u: goto label_236108;
            case 0x23610Cu: goto label_23610c;
            case 0x236110u: goto label_236110;
            case 0x236114u: goto label_236114;
            case 0x236118u: goto label_236118;
            case 0x23611Cu: goto label_23611c;
            case 0x236120u: goto label_236120;
            case 0x236124u: goto label_236124;
            case 0x236128u: goto label_236128;
            case 0x23612Cu: goto label_23612c;
            case 0x236130u: goto label_236130;
            case 0x236134u: goto label_236134;
            case 0x236138u: goto label_236138;
            case 0x23613Cu: goto label_23613c;
            case 0x236140u: goto label_236140;
            case 0x236144u: goto label_236144;
            case 0x236148u: goto label_236148;
            case 0x23614Cu: goto label_23614c;
            case 0x236150u: goto label_236150;
            case 0x236154u: goto label_236154;
            case 0x236158u: goto label_236158;
            case 0x23615Cu: goto label_23615c;
            case 0x236160u: goto label_236160;
            case 0x236164u: goto label_236164;
            case 0x236168u: goto label_236168;
            case 0x23616Cu: goto label_23616c;
            case 0x236170u: goto label_236170;
            case 0x236174u: goto label_236174;
            case 0x236178u: goto label_236178;
            case 0x23617Cu: goto label_23617c;
            case 0x236180u: goto label_236180;
            case 0x236184u: goto label_236184;
            case 0x236188u: goto label_236188;
            case 0x23618Cu: goto label_23618c;
            case 0x236190u: goto label_236190;
            case 0x236194u: goto label_236194;
            case 0x236198u: goto label_236198;
            case 0x23619Cu: goto label_23619c;
            case 0x2361A0u: goto label_2361a0;
            case 0x2361A4u: goto label_2361a4;
            case 0x2361A8u: goto label_2361a8;
            case 0x2361ACu: goto label_2361ac;
            case 0x2361B0u: goto label_2361b0;
            case 0x2361B4u: goto label_2361b4;
            case 0x2361B8u: goto label_2361b8;
            case 0x2361BCu: goto label_2361bc;
            case 0x2361C0u: goto label_2361c0;
            case 0x2361C4u: goto label_2361c4;
            case 0x2361C8u: goto label_2361c8;
            case 0x2361CCu: goto label_2361cc;
            case 0x2361D0u: goto label_2361d0;
            case 0x2361D4u: goto label_2361d4;
            case 0x2361D8u: goto label_2361d8;
            case 0x2361DCu: goto label_2361dc;
            case 0x2361E0u: goto label_2361e0;
            case 0x2361E4u: goto label_2361e4;
            case 0x2361E8u: goto label_2361e8;
            case 0x2361ECu: goto label_2361ec;
            case 0x2361F0u: goto label_2361f0;
            case 0x2361F4u: goto label_2361f4;
            case 0x2361F8u: goto label_2361f8;
            case 0x2361FCu: goto label_2361fc;
            case 0x236200u: goto label_236200;
            case 0x236204u: goto label_236204;
            case 0x236208u: goto label_236208;
            case 0x23620Cu: goto label_23620c;
            case 0x236210u: goto label_236210;
            case 0x236214u: goto label_236214;
            case 0x236218u: goto label_236218;
            case 0x23621Cu: goto label_23621c;
            case 0x236220u: goto label_236220;
            case 0x236224u: goto label_236224;
            case 0x236228u: goto label_236228;
            case 0x23622Cu: goto label_23622c;
            case 0x236230u: goto label_236230;
            case 0x236234u: goto label_236234;
            case 0x236238u: goto label_236238;
            case 0x23623Cu: goto label_23623c;
            case 0x236240u: goto label_236240;
            case 0x236244u: goto label_236244;
            case 0x236248u: goto label_236248;
            case 0x23624Cu: goto label_23624c;
            case 0x236250u: goto label_236250;
            case 0x236254u: goto label_236254;
            case 0x236258u: goto label_236258;
            case 0x23625Cu: goto label_23625c;
            case 0x236260u: goto label_236260;
            case 0x236264u: goto label_236264;
            case 0x236268u: goto label_236268;
            case 0x23626Cu: goto label_23626c;
            case 0x236270u: goto label_236270;
            case 0x236274u: goto label_236274;
            case 0x236278u: goto label_236278;
            case 0x23627Cu: goto label_23627c;
            case 0x236280u: goto label_236280;
            case 0x236284u: goto label_236284;
            case 0x236288u: goto label_236288;
            case 0x23628Cu: goto label_23628c;
            case 0x236290u: goto label_236290;
            case 0x236294u: goto label_236294;
            case 0x236298u: goto label_236298;
            case 0x23629Cu: goto label_23629c;
            case 0x2362A0u: goto label_2362a0;
            case 0x2362A4u: goto label_2362a4;
            case 0x2362A8u: goto label_2362a8;
            case 0x2362ACu: goto label_2362ac;
            case 0x2362B0u: goto label_2362b0;
            case 0x2362B4u: goto label_2362b4;
            case 0x2362B8u: goto label_2362b8;
            case 0x2362BCu: goto label_2362bc;
            case 0x2362C0u: goto label_2362c0;
            case 0x2362C4u: goto label_2362c4;
            case 0x2362C8u: goto label_2362c8;
            case 0x2362CCu: goto label_2362cc;
            case 0x2362D0u: goto label_2362d0;
            case 0x2362D4u: goto label_2362d4;
            case 0x2362D8u: goto label_2362d8;
            case 0x2362DCu: goto label_2362dc;
            case 0x2362E0u: goto label_2362e0;
            case 0x2362E4u: goto label_2362e4;
            case 0x2362E8u: goto label_2362e8;
            case 0x2362ECu: goto label_2362ec;
            case 0x2362F0u: goto label_2362f0;
            case 0x2362F4u: goto label_2362f4;
            case 0x2362F8u: goto label_2362f8;
            case 0x2362FCu: goto label_2362fc;
            case 0x236300u: goto label_236300;
            case 0x236304u: goto label_236304;
            case 0x236308u: goto label_236308;
            case 0x23630Cu: goto label_23630c;
            case 0x236310u: goto label_236310;
            case 0x236314u: goto label_236314;
            case 0x236318u: goto label_236318;
            case 0x23631Cu: goto label_23631c;
            case 0x236320u: goto label_236320;
            case 0x236324u: goto label_236324;
            case 0x236328u: goto label_236328;
            case 0x23632Cu: goto label_23632c;
            case 0x236330u: goto label_236330;
            case 0x236334u: goto label_236334;
            case 0x236338u: goto label_236338;
            case 0x23633Cu: goto label_23633c;
            case 0x236340u: goto label_236340;
            case 0x236344u: goto label_236344;
            case 0x236348u: goto label_236348;
            case 0x23634Cu: goto label_23634c;
            case 0x236350u: goto label_236350;
            case 0x236354u: goto label_236354;
            case 0x236358u: goto label_236358;
            case 0x23635Cu: goto label_23635c;
            case 0x236360u: goto label_236360;
            case 0x236364u: goto label_236364;
            case 0x236368u: goto label_236368;
            case 0x23636Cu: goto label_23636c;
            case 0x236370u: goto label_236370;
            case 0x236374u: goto label_236374;
            case 0x236378u: goto label_236378;
            case 0x23637Cu: goto label_23637c;
            case 0x236380u: goto label_236380;
            case 0x236384u: goto label_236384;
            case 0x236388u: goto label_236388;
            case 0x23638Cu: goto label_23638c;
            case 0x236390u: goto label_236390;
            case 0x236394u: goto label_236394;
            case 0x236398u: goto label_236398;
            case 0x23639Cu: goto label_23639c;
            case 0x2363A0u: goto label_2363a0;
            case 0x2363A4u: goto label_2363a4;
            case 0x2363A8u: goto label_2363a8;
            case 0x2363ACu: goto label_2363ac;
            case 0x2363B0u: goto label_2363b0;
            case 0x2363B4u: goto label_2363b4;
            case 0x2363B8u: goto label_2363b8;
            case 0x2363BCu: goto label_2363bc;
            case 0x2363C0u: goto label_2363c0;
            case 0x2363C4u: goto label_2363c4;
            case 0x2363C8u: goto label_2363c8;
            case 0x2363CCu: goto label_2363cc;
            case 0x2363D0u: goto label_2363d0;
            case 0x2363D4u: goto label_2363d4;
            case 0x2363D8u: goto label_2363d8;
            case 0x2363DCu: goto label_2363dc;
            case 0x2363E0u: goto label_2363e0;
            case 0x2363E4u: goto label_2363e4;
            case 0x2363E8u: goto label_2363e8;
            case 0x2363ECu: goto label_2363ec;
            case 0x2363F0u: goto label_2363f0;
            case 0x2363F4u: goto label_2363f4;
            case 0x2363F8u: goto label_2363f8;
            case 0x2363FCu: goto label_2363fc;
            case 0x236400u: goto label_236400;
            case 0x236404u: goto label_236404;
            case 0x236408u: goto label_236408;
            case 0x23640Cu: goto label_23640c;
            case 0x236410u: goto label_236410;
            case 0x236414u: goto label_236414;
            case 0x236418u: goto label_236418;
            case 0x23641Cu: goto label_23641c;
            case 0x236420u: goto label_236420;
            case 0x236424u: goto label_236424;
            case 0x236428u: goto label_236428;
            case 0x23642Cu: goto label_23642c;
            case 0x236430u: goto label_236430;
            case 0x236434u: goto label_236434;
            case 0x236438u: goto label_236438;
            case 0x23643Cu: goto label_23643c;
            case 0x236440u: goto label_236440;
            default: break;
        }
        return;
    }
    ctx->pc = 0x236058u;
label_236058:
    // 0x236058: 0x16a00051
label_23605c:
    if (ctx->pc == 0x23605Cu) {
        ctx->pc = 0x23605Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x236060u;
        goto label_236060;
    }
    ctx->pc = 0x236058u;
    {
        const bool branch_taken_0x236058 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x23605Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x236058) {
            ctx->pc = 0x2361A0u;
            goto label_2361a0;
        }
    }
    ctx->pc = 0x236060u;
label_236060:
    // 0x236060: 0x244215d8
    ctx->pc = 0x236060u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5592));
label_236064:
    // 0x236064: 0x131840
    ctx->pc = 0x236064u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 1));
label_236068:
    // 0x236068: 0x621821
    ctx->pc = 0x236068u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23606c:
    // 0x23606c: 0x94640000
    ctx->pc = 0x23606cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_236070:
    // 0x236070: 0x42023
    ctx->pc = 0x236070u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_236074:
    // 0x236074: 0x24050153
    ctx->pc = 0x236074u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 339));
label_236078:
    // 0x236078: 0x24060007
    ctx->pc = 0x236078u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
label_23607c:
    // 0x23607c: 0x2e0382d
    ctx->pc = 0x23607cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_236080:
    // 0x236080: 0x3c013f2a
    ctx->pc = 0x236080u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16170 << 16));
label_236084:
    // 0x236084: 0x3421c083
    ctx->pc = 0x236084u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49283));
label_236088:
    // 0x236088: 0x44816000
    ctx->pc = 0x236088u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_23608c:
    // 0x23608c: 0xc080510
label_236090:
    if (ctx->pc == 0x236090u) {
        ctx->pc = 0x236090u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 18), 2460));
        ctx->pc = 0x236094u;
        goto label_236094;
    }
    ctx->pc = 0x23608Cu;
    SET_GPR_U32(ctx, 31, 0x236094u);
    ctx->pc = 0x236090u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 18), 2460));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236094u; }
    }
    if (ctx->pc != 0x236094u) { return; }
    ctx->pc = 0x236094u;
label_236094:
    // 0x236094: 0x10000042
label_236098:
    if (ctx->pc == 0x236098u) {
        ctx->pc = 0x23609Cu;
        goto label_23609c;
    }
    ctx->pc = 0x236094u;
    {
        const bool branch_taken_0x236094 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x236094) {
            ctx->pc = 0x2361A0u;
            goto label_2361a0;
        }
    }
    ctx->pc = 0x23609Cu;
label_23609c:
    // 0x23609c: 0x3c020031
    ctx->pc = 0x23609cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2360a0:
    // 0x2360a0: 0x8c440008
    ctx->pc = 0x2360a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2360a4:
    // 0x2360a4: 0x10800018
label_2360a8:
    if (ctx->pc == 0x2360A8u) {
        ctx->pc = 0x2360A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2360ACu;
        goto label_2360ac;
    }
    ctx->pc = 0x2360A4u;
    {
        const bool branch_taken_0x2360a4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2360A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2360a4) {
            ctx->pc = 0x236108u;
            goto label_236108;
        }
    }
    ctx->pc = 0x2360ACu;
label_2360ac:
    // 0x2360ac: 0x8e4300fc
    ctx->pc = 0x2360acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 252)));
label_2360b0:
    // 0x2360b0: 0x14620015
label_2360b4:
    if (ctx->pc == 0x2360B4u) {
        ctx->pc = 0x2360B8u;
        goto label_2360b8;
    }
    ctx->pc = 0x2360B0u;
    {
        const bool branch_taken_0x2360b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2360b0) {
            ctx->pc = 0x236108u;
            goto label_236108;
        }
    }
    ctx->pc = 0x2360B8u;
label_2360b8:
    // 0x2360b8: 0x24150001
    ctx->pc = 0x2360b8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
label_2360bc:
    // 0x2360bc: 0x14950005
label_2360c0:
    if (ctx->pc == 0x2360C0u) {
        ctx->pc = 0x2360C0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x2360C4u;
        goto label_2360c4;
    }
    ctx->pc = 0x2360BCu;
    {
        const bool branch_taken_0x2360bc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 21));
        ctx->pc = 0x2360C0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x2360bc) {
            ctx->pc = 0x2360D4u;
            goto label_2360d4;
        }
    }
    ctx->pc = 0x2360C4u;
label_2360c4:
    // 0x2360c4: 0xc08d6d6
label_2360c8:
    if (ctx->pc == 0x2360C8u) {
        ctx->pc = 0x2360C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2360CCu;
        goto label_2360cc;
    }
    ctx->pc = 0x2360C4u;
    SET_GPR_U32(ctx, 31, 0x2360CCu);
    ctx->pc = 0x2360C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x235B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        debug_player_pos_0x235b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2360CCu; }
    }
    if (ctx->pc != 0x2360CCu) { return; }
    ctx->pc = 0x2360CCu;
label_2360cc:
    // 0x2360cc: 0x1000000e
label_2360d0:
    if (ctx->pc == 0x2360D0u) {
        ctx->pc = 0x2360D4u;
        goto label_2360d4;
    }
    ctx->pc = 0x2360CCu;
    {
        const bool branch_taken_0x2360cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2360cc) {
            ctx->pc = 0x236108u;
            goto label_236108;
        }
    }
    ctx->pc = 0x2360D4u;
label_2360d4:
    // 0x2360d4: 0x246315d0
    ctx->pc = 0x2360d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5584));
label_2360d8:
    // 0x2360d8: 0x131040
    ctx->pc = 0x2360d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 1));
label_2360dc:
    // 0x2360dc: 0x431021
    ctx->pc = 0x2360dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2360e0:
    // 0x2360e0: 0x94440000
    ctx->pc = 0x2360e0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2360e4:
    // 0x2360e4: 0x24840008
    ctx->pc = 0x2360e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
label_2360e8:
    // 0x2360e8: 0x24050154
    ctx->pc = 0x2360e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 340));
label_2360ec:
    // 0x2360ec: 0x24060001
    ctx->pc = 0x2360ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_2360f0:
    // 0x2360f0: 0x3c0700ff
    ctx->pc = 0x2360f0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2360f4:
    // 0x2360f4: 0x34e7ffff
    ctx->pc = 0x2360f4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2360f8:
    // 0x2360f8: 0x3c08003a
    ctx->pc = 0x2360f8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
label_2360fc:
    // 0x2360fc: 0x25087a10
    ctx->pc = 0x2360fcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 31248));
label_236100:
    // 0x236100: 0xc0804c8
label_236104:
    if (ctx->pc == 0x236104u) {
        ctx->pc = 0x236104u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 18), 6684)));
        ctx->pc = 0x236108u;
        goto label_236108;
    }
    ctx->pc = 0x236100u;
    SET_GPR_U32(ctx, 31, 0x236108u);
    ctx->pc = 0x236104u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 18), 6684)));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236108u; }
    }
    if (ctx->pc != 0x236108u) { return; }
    ctx->pc = 0x236108u;
label_236108:
    // 0x236108: 0x16a00010
label_23610c:
    if (ctx->pc == 0x23610Cu) {
        ctx->pc = 0x23610Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x236110u;
        goto label_236110;
    }
    ctx->pc = 0x236108u;
    {
        const bool branch_taken_0x236108 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x23610Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x236108) {
            ctx->pc = 0x23614Cu;
            goto label_23614c;
        }
    }
    ctx->pc = 0x236110u;
label_236110:
    // 0x236110: 0x3c020032
    ctx->pc = 0x236110u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_236114:
    // 0x236114: 0x244215d8
    ctx->pc = 0x236114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5592));
label_236118:
    // 0x236118: 0x131840
    ctx->pc = 0x236118u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 1));
label_23611c:
    // 0x23611c: 0x621821
    ctx->pc = 0x23611cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_236120:
    // 0x236120: 0x94640000
    ctx->pc = 0x236120u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_236124:
    // 0x236124: 0x42023
    ctx->pc = 0x236124u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_236128:
    // 0x236128: 0x24050153
    ctx->pc = 0x236128u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 339));
label_23612c:
    // 0x23612c: 0x24060007
    ctx->pc = 0x23612cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
label_236130:
    // 0x236130: 0x2e0382d
    ctx->pc = 0x236130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_236134:
    // 0x236134: 0x3c013f2a
    ctx->pc = 0x236134u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16170 << 16));
label_236138:
    // 0x236138: 0x3421c083
    ctx->pc = 0x236138u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49283));
label_23613c:
    // 0x23613c: 0x44816000
    ctx->pc = 0x23613cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_236140:
    // 0x236140: 0xc080510
label_236144:
    if (ctx->pc == 0x236144u) {
        ctx->pc = 0x236144u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 18), 2460));
        ctx->pc = 0x236148u;
        goto label_236148;
    }
    ctx->pc = 0x236140u;
    SET_GPR_U32(ctx, 31, 0x236148u);
    ctx->pc = 0x236144u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 18), 2460));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236148u; }
    }
    if (ctx->pc != 0x236148u) { return; }
    ctx->pc = 0x236148u;
label_236148:
    // 0x236148: 0x3c020035
    ctx->pc = 0x236148u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_23614c:
    // 0x23614c: 0x8c429b88
    ctx->pc = 0x23614cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941576)));
label_236150:
    // 0x236150: 0x14400003
label_236154:
    if (ctx->pc == 0x236154u) {
        ctx->pc = 0x236154u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x236158u;
        goto label_236158;
    }
    ctx->pc = 0x236150u;
    {
        const bool branch_taken_0x236150 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x236154u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x236150) {
            ctx->pc = 0x236160u;
            goto label_236160;
        }
    }
    ctx->pc = 0x236158u;
label_236158:
    // 0x236158: 0x16a00011
label_23615c:
    if (ctx->pc == 0x23615Cu) {
        ctx->pc = 0x236160u;
        goto label_236160;
    }
    ctx->pc = 0x236158u;
    {
        const bool branch_taken_0x236158 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x236158) {
            ctx->pc = 0x2361A0u;
            goto label_2361a0;
        }
    }
    ctx->pc = 0x236160u;
label_236160:
    // 0x236160: 0x3c05003a
    ctx->pc = 0x236160u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_236164:
    // 0x236164: 0x24a57a18
    ctx->pc = 0x236164u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31256));
label_236168:
    // 0x236168: 0xc0b6252
label_23616c:
    if (ctx->pc == 0x23616Cu) {
        ctx->pc = 0x23616Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 10944)));
        ctx->pc = 0x236170u;
        goto label_236170;
    }
    ctx->pc = 0x236168u;
    SET_GPR_U32(ctx, 31, 0x236170u);
    ctx->pc = 0x23616Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 10944)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236170u; }
    }
    if (ctx->pc != 0x236170u) { return; }
    ctx->pc = 0x236170u;
label_236170:
    // 0x236170: 0x3c030032
    ctx->pc = 0x236170u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_236174:
    // 0x236174: 0x246315d8
    ctx->pc = 0x236174u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5592));
label_236178:
    // 0x236178: 0x131040
    ctx->pc = 0x236178u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 1));
label_23617c:
    // 0x23617c: 0x431021
    ctx->pc = 0x23617cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_236180:
    // 0x236180: 0x94440000
    ctx->pc = 0x236180u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_236184:
    // 0x236184: 0x42023
    ctx->pc = 0x236184u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_236188:
    // 0x236188: 0x26c5000e
    ctx->pc = 0x236188u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 22), 14));
label_23618c:
    // 0x23618c: 0x24060001
    ctx->pc = 0x23618cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_236190:
    // 0x236190: 0x3c0700ff
    ctx->pc = 0x236190u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_236194:
    // 0x236194: 0x34e7ffff
    ctx->pc = 0x236194u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_236198:
    // 0x236198: 0xc0804c8
label_23619c:
    if (ctx->pc == 0x23619Cu) {
        ctx->pc = 0x23619Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2361A0u;
        goto label_2361a0;
    }
    ctx->pc = 0x236198u;
    SET_GPR_U32(ctx, 31, 0x2361A0u);
    ctx->pc = 0x23619Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2361A0u; }
    }
    if (ctx->pc != 0x2361A0u) { return; }
    ctx->pc = 0x2361A0u;
label_2361a0:
    // 0x2361a0: 0xc08db32
label_2361a4:
    if (ctx->pc == 0x2361A4u) {
        ctx->pc = 0x2361A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2361A8u;
        goto label_2361a8;
    }
    ctx->pc = 0x2361A0u;
    SET_GPR_U32(ctx, 31, 0x2361A8u);
    ctx->pc = 0x2361A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236CC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        del_item_blits_0x236cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2361A8u; }
    }
    if (ctx->pc != 0x2361A8u) { return; }
    ctx->pc = 0x2361A8u;
label_2361a8:
    // 0x2361a8: 0x8e4300fc
    ctx->pc = 0x2361a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 252)));
label_2361ac:
    // 0x2361ac: 0x24020002
    ctx->pc = 0x2361acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2361b0:
    // 0x2361b0: 0x50620052
label_2361b4:
    if (ctx->pc == 0x2361B4u) {
        ctx->pc = 0x2361B4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2361B8u;
        goto label_2361b8;
    }
    ctx->pc = 0x2361B0u;
    {
        const bool branch_taken_0x2361b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2361b0) {
            ctx->pc = 0x2361B4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x2362FCu;
            goto label_2362fc;
        }
    }
    ctx->pc = 0x2361B8u;
label_2361b8:
    // 0x2361b8: 0x8e42097c
    ctx->pc = 0x2361b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2428)));
label_2361bc:
    // 0x2361bc: 0x1040004e
label_2361c0:
    if (ctx->pc == 0x2361C0u) {
        ctx->pc = 0x2361C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x2361C4u;
        goto label_2361c4;
    }
    ctx->pc = 0x2361BCu;
    {
        const bool branch_taken_0x2361bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2361C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2361bc) {
            ctx->pc = 0x2362F8u;
            goto label_2362f8;
        }
    }
    ctx->pc = 0x2361C4u;
label_2361c4:
    // 0x2361c4: 0x8c4213dc
    ctx->pc = 0x2361c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5084)));
label_2361c8:
    // 0x2361c8: 0x5440004c
label_2361cc:
    if (ctx->pc == 0x2361CCu) {
        ctx->pc = 0x2361CCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2361D0u;
        goto label_2361d0;
    }
    ctx->pc = 0x2361C8u;
    {
        const bool branch_taken_0x2361c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2361c8) {
            ctx->pc = 0x2361CCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x2362FCu;
            goto label_2362fc;
        }
    }
    ctx->pc = 0x2361D0u;
label_2361d0:
    // 0x2361d0: 0x8e421a14
    ctx->pc = 0x2361d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 6676)));
label_2361d4:
    // 0x2361d4: 0x18400020
label_2361d8:
    if (ctx->pc == 0x2361D8u) {
        ctx->pc = 0x2361D8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 22), 15));
        ctx->pc = 0x2361DCu;
        goto label_2361dc;
    }
    ctx->pc = 0x2361D4u;
    {
        const bool branch_taken_0x2361d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2361D8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 22), 15));
        if (branch_taken_0x2361d4) {
            ctx->pc = 0x236258u;
            goto label_236258;
        }
    }
    ctx->pc = 0x2361DCu;
label_2361dc:
    // 0x2361dc: 0x3c03003c
    ctx->pc = 0x2361dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2361e0:
    // 0x2361e0: 0x3c020032
    ctx->pc = 0x2361e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2361e4:
    // 0x2361e4: 0x244215d0
    ctx->pc = 0x2361e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5584));
label_2361e8:
    // 0x2361e8: 0x138040
    ctx->pc = 0x2361e8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 19), 1));
label_2361ec:
    // 0x2361ec: 0x2028021
    ctx->pc = 0x2361ecu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2361f0:
    // 0x2361f0: 0x96050000
    ctx->pc = 0x2361f0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2361f4:
    // 0x2361f4: 0x8c641b00
    ctx->pc = 0x2361f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 6912)));
label_2361f8:
    // 0x2361f8: 0x24a50008
    ctx->pc = 0x2361f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
label_2361fc:
    // 0x2361fc: 0x26c6000b
    ctx->pc = 0x2361fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 22), 11));
label_236200:
    // 0x236200: 0x2407ffff
    ctx->pc = 0x236200u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
label_236204:
    // 0x236204: 0xc0b0c6a
label_236208:
    if (ctx->pc == 0x236208u) {
        ctx->pc = 0x236208u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x23620Cu;
        goto label_23620c;
    }
    ctx->pc = 0x236204u;
    SET_GPR_U32(ctx, 31, 0x23620Cu);
    ctx->pc = 0x236208u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23620Cu; }
    }
    if (ctx->pc != 0x23620Cu) { return; }
    ctx->pc = 0x23620Cu;
label_23620c:
    // 0x23620c: 0x3c01477a
    ctx->pc = 0x23620cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)18298 << 16));
label_236210:
    // 0x236210: 0x44816000
    ctx->pc = 0x236210u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_236214:
    // 0x236214: 0xc0b0dd6
label_236218:
    if (ctx->pc == 0x236218u) {
        ctx->pc = 0x236218u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23621Cu;
        goto label_23621c;
    }
    ctx->pc = 0x236214u;
    SET_GPR_U32(ctx, 31, 0x23621Cu);
    ctx->pc = 0x236218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23621Cu; }
    }
    if (ctx->pc != 0x23621Cu) { return; }
    ctx->pc = 0x23621Cu;
label_23621c:
    // 0x23621c: 0x3a0202d
    ctx->pc = 0x23621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_236220:
    // 0x236220: 0x3c05003a
    ctx->pc = 0x236220u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_236224:
    // 0x236224: 0x24a57990
    ctx->pc = 0x236224u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31120));
label_236228:
    // 0x236228: 0xc0b6252
label_23622c:
    if (ctx->pc == 0x23622Cu) {
        ctx->pc = 0x23622Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 6676)));
        ctx->pc = 0x236230u;
        goto label_236230;
    }
    ctx->pc = 0x236228u;
    SET_GPR_U32(ctx, 31, 0x236230u);
    ctx->pc = 0x23622Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 6676)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236230u; }
    }
    if (ctx->pc != 0x236230u) { return; }
    ctx->pc = 0x236230u;
label_236230:
    // 0x236230: 0x96040000
    ctx->pc = 0x236230u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_236234:
    // 0x236234: 0x2484001a
    ctx->pc = 0x236234u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26));
label_236238:
    // 0x236238: 0x280282d
    ctx->pc = 0x236238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23623c:
    // 0x23623c: 0x24060004
    ctx->pc = 0x23623cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
label_236240:
    // 0x236240: 0x2e0382d
    ctx->pc = 0x236240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_236244:
    // 0x236244: 0x3c013f4c
    ctx->pc = 0x236244u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
label_236248:
    // 0x236248: 0x3421cccd
    ctx->pc = 0x236248u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_23624c:
    // 0x23624c: 0x44816000
    ctx->pc = 0x23624cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_236250:
    // 0x236250: 0xc080510
label_236254:
    if (ctx->pc == 0x236254u) {
        ctx->pc = 0x236254u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x236258u;
        goto label_236258;
    }
    ctx->pc = 0x236250u;
    SET_GPR_U32(ctx, 31, 0x236258u);
    ctx->pc = 0x236254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236258u; }
    }
    if (ctx->pc != 0x236258u) { return; }
    ctx->pc = 0x236258u;
label_236258:
    // 0x236258: 0x8e421a18
    ctx->pc = 0x236258u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 6680)));
label_23625c:
    // 0x23625c: 0x18400026
label_236260:
    if (ctx->pc == 0x236260u) {
        ctx->pc = 0x236260u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x236264u;
        goto label_236264;
    }
    ctx->pc = 0x23625Cu;
    {
        const bool branch_taken_0x23625c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x236260u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x23625c) {
            ctx->pc = 0x2362F8u;
            goto label_2362f8;
        }
    }
    ctx->pc = 0x236264u;
label_236264:
    // 0x236264: 0x21080
    ctx->pc = 0x236264u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_236268:
    // 0x236268: 0x2421021
    ctx->pc = 0x236268u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_23626c:
    // 0x23626c: 0x8c432a9c
    ctx->pc = 0x23626cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10908)));
label_236270:
    // 0x236270: 0x3c02003c
    ctx->pc = 0x236270u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_236274:
    // 0x236274: 0x24421b08
    ctx->pc = 0x236274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6920));
label_236278:
    // 0x236278: 0x31880
    ctx->pc = 0x236278u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_23627c:
    // 0x23627c: 0x621821
    ctx->pc = 0x23627cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_236280:
    // 0x236280: 0x3c020032
    ctx->pc = 0x236280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_236284:
    // 0x236284: 0x244215d0
    ctx->pc = 0x236284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5584));
label_236288:
    // 0x236288: 0x138040
    ctx->pc = 0x236288u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 19), 1));
label_23628c:
    // 0x23628c: 0x2028021
    ctx->pc = 0x23628cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_236290:
    // 0x236290: 0x96050000
    ctx->pc = 0x236290u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_236294:
    // 0x236294: 0x8c640000
    ctx->pc = 0x236294u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_236298:
    // 0x236298: 0x24a50066
    ctx->pc = 0x236298u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 102));
label_23629c:
    // 0x23629c: 0x26c6000b
    ctx->pc = 0x23629cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 22), 11));
label_2362a0:
    // 0x2362a0: 0x2407ffff
    ctx->pc = 0x2362a0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2362a4:
    // 0x2362a4: 0xc0b0c6a
label_2362a8:
    if (ctx->pc == 0x2362A8u) {
        ctx->pc = 0x2362A8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2362ACu;
        goto label_2362ac;
    }
    ctx->pc = 0x2362A4u;
    SET_GPR_U32(ctx, 31, 0x2362ACu);
    ctx->pc = 0x2362A8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2362ACu; }
    }
    if (ctx->pc != 0x2362ACu) { return; }
    ctx->pc = 0x2362ACu;
label_2362ac:
    // 0x2362ac: 0x3c01477a
    ctx->pc = 0x2362acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)18298 << 16));
label_2362b0:
    // 0x2362b0: 0x44816000
    ctx->pc = 0x2362b0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_2362b4:
    // 0x2362b4: 0xc0b0dd6
label_2362b8:
    if (ctx->pc == 0x2362B8u) {
        ctx->pc = 0x2362B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2362BCu;
        goto label_2362bc;
    }
    ctx->pc = 0x2362B4u;
    SET_GPR_U32(ctx, 31, 0x2362BCu);
    ctx->pc = 0x2362B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2362BCu; }
    }
    if (ctx->pc != 0x2362BCu) { return; }
    ctx->pc = 0x2362BCu;
label_2362bc:
    // 0x2362bc: 0x3a0202d
    ctx->pc = 0x2362bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2362c0:
    // 0x2362c0: 0x3c05003a
    ctx->pc = 0x2362c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_2362c4:
    // 0x2362c4: 0x24a57990
    ctx->pc = 0x2362c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31120));
label_2362c8:
    // 0x2362c8: 0xc0b6252
label_2362cc:
    if (ctx->pc == 0x2362CCu) {
        ctx->pc = 0x2362CCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 6680)));
        ctx->pc = 0x2362D0u;
        goto label_2362d0;
    }
    ctx->pc = 0x2362C8u;
    SET_GPR_U32(ctx, 31, 0x2362D0u);
    ctx->pc = 0x2362CCu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 6680)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2362D0u; }
    }
    if (ctx->pc != 0x2362D0u) { return; }
    ctx->pc = 0x2362D0u;
label_2362d0:
    // 0x2362d0: 0x96040000
    ctx->pc = 0x2362d0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2362d4:
    // 0x2362d4: 0x2484005c
    ctx->pc = 0x2362d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 92));
label_2362d8:
    // 0x2362d8: 0x280282d
    ctx->pc = 0x2362d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2362dc:
    // 0x2362dc: 0x24060004
    ctx->pc = 0x2362dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
label_2362e0:
    // 0x2362e0: 0x2e0382d
    ctx->pc = 0x2362e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2362e4:
    // 0x2362e4: 0x3c013f4c
    ctx->pc = 0x2362e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
label_2362e8:
    // 0x2362e8: 0x3421cccd
    ctx->pc = 0x2362e8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_2362ec:
    // 0x2362ec: 0x44816000
    ctx->pc = 0x2362ecu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_2362f0:
    // 0x2362f0: 0xc080510
label_2362f4:
    if (ctx->pc == 0x2362F4u) {
        ctx->pc = 0x2362F4u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2362F8u;
        goto label_2362f8;
    }
    ctx->pc = 0x2362F0u;
    SET_GPR_U32(ctx, 31, 0x2362F8u);
    ctx->pc = 0x2362F4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2362F8u; }
    }
    if (ctx->pc != 0x2362F8u) { return; }
    ctx->pc = 0x2362F8u;
label_2362f8:
    // 0x2362f8: 0xc6411a10
    ctx->pc = 0x2362f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2362fc:
    // 0x2362fc: 0x44800000
    ctx->pc = 0x2362fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_236300:
    // 0x236300: 0x46010034
    ctx->pc = 0x236300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_236304:
    // 0x236304: 0x0
    ctx->pc = 0x236304u;
    // NOP
label_236308:
    // 0x236308: 0x4500003e
label_23630c:
    if (ctx->pc == 0x23630Cu) {
        ctx->pc = 0x23630Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x236310u;
        goto label_236310;
    }
    ctx->pc = 0x236308u;
    {
        const bool branch_taken_0x236308 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23630Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x236308) {
            ctx->pc = 0x236404u;
            goto label_236404;
        }
    }
    ctx->pc = 0x236310u;
label_236310:
    // 0x236310: 0x8c421038
    ctx->pc = 0x236310u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4152)));
label_236314:
    // 0x236314: 0x1440003b
label_236318:
    if (ctx->pc == 0x236318u) {
        ctx->pc = 0x236318u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x23631Cu;
        goto label_23631c;
    }
    ctx->pc = 0x236314u;
    {
        const bool branch_taken_0x236314 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x236318u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x236314) {
            ctx->pc = 0x236404u;
            goto label_236404;
        }
    }
    ctx->pc = 0x23631Cu;
label_23631c:
    // 0x23631c: 0x8c430018
    ctx->pc = 0x23631cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_236320:
    // 0x236320: 0x24024010
    ctx->pc = 0x236320u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_236324:
    // 0x236324: 0x14620010
label_236328:
    if (ctx->pc == 0x236328u) {
        ctx->pc = 0x236328u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x23632Cu;
        goto label_23632c;
    }
    ctx->pc = 0x236324u;
    {
        const bool branch_taken_0x236324 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x236328u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x236324) {
            ctx->pc = 0x236368u;
            goto label_236368;
        }
    }
    ctx->pc = 0x23632Cu;
label_23632c:
    // 0x23632c: 0x8e42080c
    ctx->pc = 0x23632cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2060)));
label_236330:
    // 0x236330: 0x1040000d
label_236334:
    if (ctx->pc == 0x236334u) {
        ctx->pc = 0x236334u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x236338u;
        goto label_236338;
    }
    ctx->pc = 0x236330u;
    {
        const bool branch_taken_0x236330 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x236334u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x236330) {
            ctx->pc = 0x236368u;
            goto label_236368;
        }
    }
    ctx->pc = 0x236338u;
label_236338:
    // 0x236338: 0x8c43e7f0
    ctx->pc = 0x236338u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_23633c:
    // 0x23633c: 0x2402000d
    ctx->pc = 0x23633cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_236340:
    // 0x236340: 0x10620009
label_236344:
    if (ctx->pc == 0x236344u) {
        ctx->pc = 0x236344u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x236348u;
        goto label_236348;
    }
    ctx->pc = 0x236340u;
    {
        const bool branch_taken_0x236340 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x236344u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x236340) {
            ctx->pc = 0x236368u;
            goto label_236368;
        }
    }
    ctx->pc = 0x236348u;
label_236348:
    // 0x236348: 0x24631b30
    ctx->pc = 0x236348u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6960));
label_23634c:
    // 0x23634c: 0x131080
    ctx->pc = 0x23634cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
label_236350:
    // 0x236350: 0x431021
    ctx->pc = 0x236350u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_236354:
    // 0x236354: 0x8c440000
    ctx->pc = 0x236354u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_236358:
    // 0x236358: 0xc0b0ce8
label_23635c:
    if (ctx->pc == 0x23635Cu) {
        ctx->pc = 0x23635Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x236360u;
        goto label_236360;
    }
    ctx->pc = 0x236358u;
    SET_GPR_U32(ctx, 31, 0x236360u);
    ctx->pc = 0x23635Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236360u; }
    }
    if (ctx->pc != 0x236360u) { return; }
    ctx->pc = 0x236360u;
label_236360:
    // 0x236360: 0x10000008
label_236364:
    if (ctx->pc == 0x236364u) {
        ctx->pc = 0x236364u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x236368u;
        goto label_236368;
    }
    ctx->pc = 0x236360u;
    {
        const bool branch_taken_0x236360 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x236364u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x236360) {
            ctx->pc = 0x236384u;
            goto label_236384;
        }
    }
    ctx->pc = 0x236368u;
label_236368:
    // 0x236368: 0x24631b30
    ctx->pc = 0x236368u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6960));
label_23636c:
    // 0x23636c: 0x131080
    ctx->pc = 0x23636cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
label_236370:
    // 0x236370: 0x431021
    ctx->pc = 0x236370u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_236374:
    // 0x236374: 0x8c440000
    ctx->pc = 0x236374u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_236378:
    // 0x236378: 0xc0b0ce8
label_23637c:
    if (ctx->pc == 0x23637Cu) {
        ctx->pc = 0x23637Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x236380u;
        goto label_236380;
    }
    ctx->pc = 0x236378u;
    SET_GPR_U32(ctx, 31, 0x236380u);
    ctx->pc = 0x23637Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236380u; }
    }
    if (ctx->pc != 0x236380u) { return; }
    ctx->pc = 0x236380u;
label_236380:
    // 0x236380: 0x3c020031
    ctx->pc = 0x236380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_236384:
    // 0x236384: 0x8c420018
    ctx->pc = 0x236384u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_236388:
    // 0x236388: 0x2442bff1
    ctx->pc = 0x236388u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950897));
label_23638c:
    // 0x23638c: 0x2c420002
    ctx->pc = 0x23638cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_236390:
    // 0x236390: 0x1040000d
label_236394:
    if (ctx->pc == 0x236394u) {
        ctx->pc = 0x236394u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x236398u;
        goto label_236398;
    }
    ctx->pc = 0x236390u;
    {
        const bool branch_taken_0x236390 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x236394u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x236390) {
            ctx->pc = 0x2363C8u;
            goto label_2363c8;
        }
    }
    ctx->pc = 0x236398u;
label_236398:
    // 0x236398: 0x96421a26
    ctx->pc = 0x236398u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6694)));
label_23639c:
    // 0x23639c: 0x30421000
    ctx->pc = 0x23639cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
label_2363a0:
    // 0x2363a0: 0x10400008
label_2363a4:
    if (ctx->pc == 0x2363A4u) {
        ctx->pc = 0x2363A4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6944));
        ctx->pc = 0x2363A8u;
        goto label_2363a8;
    }
    ctx->pc = 0x2363A0u;
    {
        const bool branch_taken_0x2363a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2363A4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6944));
        if (branch_taken_0x2363a0) {
            ctx->pc = 0x2363C4u;
            goto label_2363c4;
        }
    }
    ctx->pc = 0x2363A8u;
label_2363a8:
    // 0x2363a8: 0x131080
    ctx->pc = 0x2363a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
label_2363ac:
    // 0x2363ac: 0x431021
    ctx->pc = 0x2363acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2363b0:
    // 0x2363b0: 0x8c440000
    ctx->pc = 0x2363b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2363b4:
    // 0x2363b4: 0xc0b0ce8
label_2363b8:
    if (ctx->pc == 0x2363B8u) {
        ctx->pc = 0x2363B8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2363BCu;
        goto label_2363bc;
    }
    ctx->pc = 0x2363B4u;
    SET_GPR_U32(ctx, 31, 0x2363BCu);
    ctx->pc = 0x2363B8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2363BCu; }
    }
    if (ctx->pc != 0x2363BCu) { return; }
    ctx->pc = 0x2363BCu;
label_2363bc:
    // 0x2363bc: 0x10000009
label_2363c0:
    if (ctx->pc == 0x2363C0u) {
        ctx->pc = 0x2363C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2363C4u;
        goto label_2363c4;
    }
    ctx->pc = 0x2363BCu;
    {
        const bool branch_taken_0x2363bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2363C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2363bc) {
            ctx->pc = 0x2363E4u;
            goto label_2363e4;
        }
    }
    ctx->pc = 0x2363C4u;
label_2363c4:
    // 0x2363c4: 0x3c03003c
    ctx->pc = 0x2363c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2363c8:
    // 0x2363c8: 0x24631b20
    ctx->pc = 0x2363c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6944));
label_2363cc:
    // 0x2363cc: 0x131080
    ctx->pc = 0x2363ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
label_2363d0:
    // 0x2363d0: 0x431021
    ctx->pc = 0x2363d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2363d4:
    // 0x2363d4: 0x8c440000
    ctx->pc = 0x2363d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2363d8:
    // 0x2363d8: 0xc0b0ce8
label_2363dc:
    if (ctx->pc == 0x2363DCu) {
        ctx->pc = 0x2363DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2363E0u;
        goto label_2363e0;
    }
    ctx->pc = 0x2363D8u;
    SET_GPR_U32(ctx, 31, 0x2363E0u);
    ctx->pc = 0x2363DCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2363E0u; }
    }
    if (ctx->pc != 0x2363E0u) { return; }
    ctx->pc = 0x2363E0u;
label_2363e0:
    // 0x2363e0: 0x3c020031
    ctx->pc = 0x2363e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2363e4:
    // 0x2363e4: 0x8c430018
    ctx->pc = 0x2363e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2363e8:
    // 0x2363e8: 0x24024010
    ctx->pc = 0x2363e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_2363ec:
    // 0x2363ec: 0x14620007
label_2363f0:
    if (ctx->pc == 0x2363F0u) {
        ctx->pc = 0x2363F4u;
        goto label_2363f4;
    }
    ctx->pc = 0x2363ECu;
    {
        const bool branch_taken_0x2363ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2363ec) {
            ctx->pc = 0x23640Cu;
            goto label_23640c;
        }
    }
    ctx->pc = 0x2363F4u;
label_2363f4:
    // 0x2363f4: 0xc08d502
label_2363f8:
    if (ctx->pc == 0x2363F8u) {
        ctx->pc = 0x2363F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2363FCu;
        goto label_2363fc;
    }
    ctx->pc = 0x2363F4u;
    SET_GPR_U32(ctx, 31, 0x2363FCu);
    ctx->pc = 0x2363F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x235408u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_power_meter_0x235408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2363FCu; }
    }
    if (ctx->pc != 0x2363FCu) { return; }
    ctx->pc = 0x2363FCu;
label_2363fc:
    // 0x2363fc: 0x10000003
label_236400:
    if (ctx->pc == 0x236400u) {
        ctx->pc = 0x236404u;
        goto label_236404;
    }
    ctx->pc = 0x2363FCu;
    {
        const bool branch_taken_0x2363fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2363fc) {
            ctx->pc = 0x23640Cu;
            goto label_23640c;
        }
    }
    ctx->pc = 0x236404u;
label_236404:
    // 0x236404: 0xc08d4e6
label_236408:
    if (ctx->pc == 0x236408u) {
        ctx->pc = 0x236408u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23640Cu;
        goto label_23640c;
    }
    ctx->pc = 0x236404u;
    SET_GPR_U32(ctx, 31, 0x23640Cu);
    ctx->pc = 0x236408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x235398u;
    {
        const uint32_t __entryPc = ctx->pc;
        hide_power_meter_0x235398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23640Cu; }
    }
    if (ctx->pc != 0x23640Cu) { return; }
    ctx->pc = 0x23640Cu;
label_23640c:
    // 0x23640c: 0xc0b1448
label_236410:
    if (ctx->pc == 0x236410u) {
        ctx->pc = 0x236410u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x236414u;
        goto label_236414;
    }
    ctx->pc = 0x23640Cu;
    SET_GPR_U32(ctx, 31, 0x236414u);
    ctx->pc = 0x236410u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2C5120u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontZ_0x2c5120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236414u; }
    }
    if (ctx->pc != 0x236414u) { return; }
    ctx->pc = 0x236414u;
label_236414:
    // 0x236414: 0xdfbf00a0
    ctx->pc = 0x236414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_236418:
    // 0x236418: 0xdfb70090
    ctx->pc = 0x236418u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23641c:
    // 0x23641c: 0xdfb60080
    ctx->pc = 0x23641cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_236420:
    // 0x236420: 0xdfb50070
    ctx->pc = 0x236420u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_236424:
    // 0x236424: 0xdfb40060
    ctx->pc = 0x236424u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_236428:
    // 0x236428: 0xdfb30050
    ctx->pc = 0x236428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23642c:
    // 0x23642c: 0xdfb20040
    ctx->pc = 0x23642cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_236430:
    // 0x236430: 0xdfb10030
    ctx->pc = 0x236430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_236434:
    // 0x236434: 0xdfb00020
    ctx->pc = 0x236434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236438:
    // 0x236438: 0xc7b400b0
    ctx->pc = 0x236438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23643c:
    // 0x23643c: 0x3e00008
label_236440:
    if (ctx->pc == 0x236440u) {
        ctx->pc = 0x236440u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x236444u;
        goto label_fallthrough_0x23643c;
    }
    ctx->pc = 0x23643Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236440u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x235DB0u: goto label_235db0;
            case 0x235DB4u: goto label_235db4;
            case 0x235DB8u: goto label_235db8;
            case 0x235DBCu: goto label_235dbc;
            case 0x235DC0u: goto label_235dc0;
            case 0x235DC4u: goto label_235dc4;
            case 0x235DC8u: goto label_235dc8;
            case 0x235DCCu: goto label_235dcc;
            case 0x235DD0u: goto label_235dd0;
            case 0x235DD4u: goto label_235dd4;
            case 0x235DD8u: goto label_235dd8;
            case 0x235DDCu: goto label_235ddc;
            case 0x235DE0u: goto label_235de0;
            case 0x235DE4u: goto label_235de4;
            case 0x235DE8u: goto label_235de8;
            case 0x235DECu: goto label_235dec;
            case 0x235DF0u: goto label_235df0;
            case 0x235DF4u: goto label_235df4;
            case 0x235DF8u: goto label_235df8;
            case 0x235DFCu: goto label_235dfc;
            case 0x235E00u: goto label_235e00;
            case 0x235E04u: goto label_235e04;
            case 0x235E08u: goto label_235e08;
            case 0x235E0Cu: goto label_235e0c;
            case 0x235E10u: goto label_235e10;
            case 0x235E14u: goto label_235e14;
            case 0x235E18u: goto label_235e18;
            case 0x235E1Cu: goto label_235e1c;
            case 0x235E20u: goto label_235e20;
            case 0x235E24u: goto label_235e24;
            case 0x235E28u: goto label_235e28;
            case 0x235E2Cu: goto label_235e2c;
            case 0x235E30u: goto label_235e30;
            case 0x235E34u: goto label_235e34;
            case 0x235E38u: goto label_235e38;
            case 0x235E3Cu: goto label_235e3c;
            case 0x235E40u: goto label_235e40;
            case 0x235E44u: goto label_235e44;
            case 0x235E48u: goto label_235e48;
            case 0x235E4Cu: goto label_235e4c;
            case 0x235E50u: goto label_235e50;
            case 0x235E54u: goto label_235e54;
            case 0x235E58u: goto label_235e58;
            case 0x235E5Cu: goto label_235e5c;
            case 0x235E60u: goto label_235e60;
            case 0x235E64u: goto label_235e64;
            case 0x235E68u: goto label_235e68;
            case 0x235E6Cu: goto label_235e6c;
            case 0x235E70u: goto label_235e70;
            case 0x235E74u: goto label_235e74;
            case 0x235E78u: goto label_235e78;
            case 0x235E7Cu: goto label_235e7c;
            case 0x235E80u: goto label_235e80;
            case 0x235E84u: goto label_235e84;
            case 0x235E88u: goto label_235e88;
            case 0x235E8Cu: goto label_235e8c;
            case 0x235E90u: goto label_235e90;
            case 0x235E94u: goto label_235e94;
            case 0x235E98u: goto label_235e98;
            case 0x235E9Cu: goto label_235e9c;
            case 0x235EA0u: goto label_235ea0;
            case 0x235EA4u: goto label_235ea4;
            case 0x235EA8u: goto label_235ea8;
            case 0x235EACu: goto label_235eac;
            case 0x235EB0u: goto label_235eb0;
            case 0x235EB4u: goto label_235eb4;
            case 0x235EB8u: goto label_235eb8;
            case 0x235EBCu: goto label_235ebc;
            case 0x235EC0u: goto label_235ec0;
            case 0x235EC4u: goto label_235ec4;
            case 0x235EC8u: goto label_235ec8;
            case 0x235ECCu: goto label_235ecc;
            case 0x235ED0u: goto label_235ed0;
            case 0x235ED4u: goto label_235ed4;
            case 0x235ED8u: goto label_235ed8;
            case 0x235EDCu: goto label_235edc;
            case 0x235EE0u: goto label_235ee0;
            case 0x235EE4u: goto label_235ee4;
            case 0x235EE8u: goto label_235ee8;
            case 0x235EECu: goto label_235eec;
            case 0x235EF0u: goto label_235ef0;
            case 0x235EF4u: goto label_235ef4;
            case 0x235EF8u: goto label_235ef8;
            case 0x235EFCu: goto label_235efc;
            case 0x235F00u: goto label_235f00;
            case 0x235F04u: goto label_235f04;
            case 0x235F08u: goto label_235f08;
            case 0x235F0Cu: goto label_235f0c;
            case 0x235F10u: goto label_235f10;
            case 0x235F14u: goto label_235f14;
            case 0x235F18u: goto label_235f18;
            case 0x235F1Cu: goto label_235f1c;
            case 0x235F20u: goto label_235f20;
            case 0x235F24u: goto label_235f24;
            case 0x235F28u: goto label_235f28;
            case 0x235F2Cu: goto label_235f2c;
            case 0x235F30u: goto label_235f30;
            case 0x235F34u: goto label_235f34;
            case 0x235F38u: goto label_235f38;
            case 0x235F3Cu: goto label_235f3c;
            case 0x235F40u: goto label_235f40;
            case 0x235F44u: goto label_235f44;
            case 0x235F48u: goto label_235f48;
            case 0x235F4Cu: goto label_235f4c;
            case 0x235F50u: goto label_235f50;
            case 0x235F54u: goto label_235f54;
            case 0x235F58u: goto label_235f58;
            case 0x235F5Cu: goto label_235f5c;
            case 0x235F60u: goto label_235f60;
            case 0x235F64u: goto label_235f64;
            case 0x235F68u: goto label_235f68;
            case 0x235F6Cu: goto label_235f6c;
            case 0x235F70u: goto label_235f70;
            case 0x235F74u: goto label_235f74;
            case 0x235F78u: goto label_235f78;
            case 0x235F7Cu: goto label_235f7c;
            case 0x235F80u: goto label_235f80;
            case 0x235F84u: goto label_235f84;
            case 0x235F88u: goto label_235f88;
            case 0x235F8Cu: goto label_235f8c;
            case 0x235F90u: goto label_235f90;
            case 0x235F94u: goto label_235f94;
            case 0x235F98u: goto label_235f98;
            case 0x235F9Cu: goto label_235f9c;
            case 0x235FA0u: goto label_235fa0;
            case 0x235FA4u: goto label_235fa4;
            case 0x235FA8u: goto label_235fa8;
            case 0x235FACu: goto label_235fac;
            case 0x235FB0u: goto label_235fb0;
            case 0x235FB4u: goto label_235fb4;
            case 0x235FB8u: goto label_235fb8;
            case 0x235FBCu: goto label_235fbc;
            case 0x235FC0u: goto label_235fc0;
            case 0x235FC4u: goto label_235fc4;
            case 0x235FC8u: goto label_235fc8;
            case 0x235FCCu: goto label_235fcc;
            case 0x235FD0u: goto label_235fd0;
            case 0x235FD4u: goto label_235fd4;
            case 0x235FD8u: goto label_235fd8;
            case 0x235FDCu: goto label_235fdc;
            case 0x235FE0u: goto label_235fe0;
            case 0x235FE4u: goto label_235fe4;
            case 0x235FE8u: goto label_235fe8;
            case 0x235FECu: goto label_235fec;
            case 0x235FF0u: goto label_235ff0;
            case 0x235FF4u: goto label_235ff4;
            case 0x235FF8u: goto label_235ff8;
            case 0x235FFCu: goto label_235ffc;
            case 0x236000u: goto label_236000;
            case 0x236004u: goto label_236004;
            case 0x236008u: goto label_236008;
            case 0x23600Cu: goto label_23600c;
            case 0x236010u: goto label_236010;
            case 0x236014u: goto label_236014;
            case 0x236018u: goto label_236018;
            case 0x23601Cu: goto label_23601c;
            case 0x236020u: goto label_236020;
            case 0x236024u: goto label_236024;
            case 0x236028u: goto label_236028;
            case 0x23602Cu: goto label_23602c;
            case 0x236030u: goto label_236030;
            case 0x236034u: goto label_236034;
            case 0x236038u: goto label_236038;
            case 0x23603Cu: goto label_23603c;
            case 0x236040u: goto label_236040;
            case 0x236044u: goto label_236044;
            case 0x236048u: goto label_236048;
            case 0x23604Cu: goto label_23604c;
            case 0x236050u: goto label_236050;
            case 0x236054u: goto label_236054;
            case 0x236058u: goto label_236058;
            case 0x23605Cu: goto label_23605c;
            case 0x236060u: goto label_236060;
            case 0x236064u: goto label_236064;
            case 0x236068u: goto label_236068;
            case 0x23606Cu: goto label_23606c;
            case 0x236070u: goto label_236070;
            case 0x236074u: goto label_236074;
            case 0x236078u: goto label_236078;
            case 0x23607Cu: goto label_23607c;
            case 0x236080u: goto label_236080;
            case 0x236084u: goto label_236084;
            case 0x236088u: goto label_236088;
            case 0x23608Cu: goto label_23608c;
            case 0x236090u: goto label_236090;
            case 0x236094u: goto label_236094;
            case 0x236098u: goto label_236098;
            case 0x23609Cu: goto label_23609c;
            case 0x2360A0u: goto label_2360a0;
            case 0x2360A4u: goto label_2360a4;
            case 0x2360A8u: goto label_2360a8;
            case 0x2360ACu: goto label_2360ac;
            case 0x2360B0u: goto label_2360b0;
            case 0x2360B4u: goto label_2360b4;
            case 0x2360B8u: goto label_2360b8;
            case 0x2360BCu: goto label_2360bc;
            case 0x2360C0u: goto label_2360c0;
            case 0x2360C4u: goto label_2360c4;
            case 0x2360C8u: goto label_2360c8;
            case 0x2360CCu: goto label_2360cc;
            case 0x2360D0u: goto label_2360d0;
            case 0x2360D4u: goto label_2360d4;
            case 0x2360D8u: goto label_2360d8;
            case 0x2360DCu: goto label_2360dc;
            case 0x2360E0u: goto label_2360e0;
            case 0x2360E4u: goto label_2360e4;
            case 0x2360E8u: goto label_2360e8;
            case 0x2360ECu: goto label_2360ec;
            case 0x2360F0u: goto label_2360f0;
            case 0x2360F4u: goto label_2360f4;
            case 0x2360F8u: goto label_2360f8;
            case 0x2360FCu: goto label_2360fc;
            case 0x236100u: goto label_236100;
            case 0x236104u: goto label_236104;
            case 0x236108u: goto label_236108;
            case 0x23610Cu: goto label_23610c;
            case 0x236110u: goto label_236110;
            case 0x236114u: goto label_236114;
            case 0x236118u: goto label_236118;
            case 0x23611Cu: goto label_23611c;
            case 0x236120u: goto label_236120;
            case 0x236124u: goto label_236124;
            case 0x236128u: goto label_236128;
            case 0x23612Cu: goto label_23612c;
            case 0x236130u: goto label_236130;
            case 0x236134u: goto label_236134;
            case 0x236138u: goto label_236138;
            case 0x23613Cu: goto label_23613c;
            case 0x236140u: goto label_236140;
            case 0x236144u: goto label_236144;
            case 0x236148u: goto label_236148;
            case 0x23614Cu: goto label_23614c;
            case 0x236150u: goto label_236150;
            case 0x236154u: goto label_236154;
            case 0x236158u: goto label_236158;
            case 0x23615Cu: goto label_23615c;
            case 0x236160u: goto label_236160;
            case 0x236164u: goto label_236164;
            case 0x236168u: goto label_236168;
            case 0x23616Cu: goto label_23616c;
            case 0x236170u: goto label_236170;
            case 0x236174u: goto label_236174;
            case 0x236178u: goto label_236178;
            case 0x23617Cu: goto label_23617c;
            case 0x236180u: goto label_236180;
            case 0x236184u: goto label_236184;
            case 0x236188u: goto label_236188;
            case 0x23618Cu: goto label_23618c;
            case 0x236190u: goto label_236190;
            case 0x236194u: goto label_236194;
            case 0x236198u: goto label_236198;
            case 0x23619Cu: goto label_23619c;
            case 0x2361A0u: goto label_2361a0;
            case 0x2361A4u: goto label_2361a4;
            case 0x2361A8u: goto label_2361a8;
            case 0x2361ACu: goto label_2361ac;
            case 0x2361B0u: goto label_2361b0;
            case 0x2361B4u: goto label_2361b4;
            case 0x2361B8u: goto label_2361b8;
            case 0x2361BCu: goto label_2361bc;
            case 0x2361C0u: goto label_2361c0;
            case 0x2361C4u: goto label_2361c4;
            case 0x2361C8u: goto label_2361c8;
            case 0x2361CCu: goto label_2361cc;
            case 0x2361D0u: goto label_2361d0;
            case 0x2361D4u: goto label_2361d4;
            case 0x2361D8u: goto label_2361d8;
            case 0x2361DCu: goto label_2361dc;
            case 0x2361E0u: goto label_2361e0;
            case 0x2361E4u: goto label_2361e4;
            case 0x2361E8u: goto label_2361e8;
            case 0x2361ECu: goto label_2361ec;
            case 0x2361F0u: goto label_2361f0;
            case 0x2361F4u: goto label_2361f4;
            case 0x2361F8u: goto label_2361f8;
            case 0x2361FCu: goto label_2361fc;
            case 0x236200u: goto label_236200;
            case 0x236204u: goto label_236204;
            case 0x236208u: goto label_236208;
            case 0x23620Cu: goto label_23620c;
            case 0x236210u: goto label_236210;
            case 0x236214u: goto label_236214;
            case 0x236218u: goto label_236218;
            case 0x23621Cu: goto label_23621c;
            case 0x236220u: goto label_236220;
            case 0x236224u: goto label_236224;
            case 0x236228u: goto label_236228;
            case 0x23622Cu: goto label_23622c;
            case 0x236230u: goto label_236230;
            case 0x236234u: goto label_236234;
            case 0x236238u: goto label_236238;
            case 0x23623Cu: goto label_23623c;
            case 0x236240u: goto label_236240;
            case 0x236244u: goto label_236244;
            case 0x236248u: goto label_236248;
            case 0x23624Cu: goto label_23624c;
            case 0x236250u: goto label_236250;
            case 0x236254u: goto label_236254;
            case 0x236258u: goto label_236258;
            case 0x23625Cu: goto label_23625c;
            case 0x236260u: goto label_236260;
            case 0x236264u: goto label_236264;
            case 0x236268u: goto label_236268;
            case 0x23626Cu: goto label_23626c;
            case 0x236270u: goto label_236270;
            case 0x236274u: goto label_236274;
            case 0x236278u: goto label_236278;
            case 0x23627Cu: goto label_23627c;
            case 0x236280u: goto label_236280;
            case 0x236284u: goto label_236284;
            case 0x236288u: goto label_236288;
            case 0x23628Cu: goto label_23628c;
            case 0x236290u: goto label_236290;
            case 0x236294u: goto label_236294;
            case 0x236298u: goto label_236298;
            case 0x23629Cu: goto label_23629c;
            case 0x2362A0u: goto label_2362a0;
            case 0x2362A4u: goto label_2362a4;
            case 0x2362A8u: goto label_2362a8;
            case 0x2362ACu: goto label_2362ac;
            case 0x2362B0u: goto label_2362b0;
            case 0x2362B4u: goto label_2362b4;
            case 0x2362B8u: goto label_2362b8;
            case 0x2362BCu: goto label_2362bc;
            case 0x2362C0u: goto label_2362c0;
            case 0x2362C4u: goto label_2362c4;
            case 0x2362C8u: goto label_2362c8;
            case 0x2362CCu: goto label_2362cc;
            case 0x2362D0u: goto label_2362d0;
            case 0x2362D4u: goto label_2362d4;
            case 0x2362D8u: goto label_2362d8;
            case 0x2362DCu: goto label_2362dc;
            case 0x2362E0u: goto label_2362e0;
            case 0x2362E4u: goto label_2362e4;
            case 0x2362E8u: goto label_2362e8;
            case 0x2362ECu: goto label_2362ec;
            case 0x2362F0u: goto label_2362f0;
            case 0x2362F4u: goto label_2362f4;
            case 0x2362F8u: goto label_2362f8;
            case 0x2362FCu: goto label_2362fc;
            case 0x236300u: goto label_236300;
            case 0x236304u: goto label_236304;
            case 0x236308u: goto label_236308;
            case 0x23630Cu: goto label_23630c;
            case 0x236310u: goto label_236310;
            case 0x236314u: goto label_236314;
            case 0x236318u: goto label_236318;
            case 0x23631Cu: goto label_23631c;
            case 0x236320u: goto label_236320;
            case 0x236324u: goto label_236324;
            case 0x236328u: goto label_236328;
            case 0x23632Cu: goto label_23632c;
            case 0x236330u: goto label_236330;
            case 0x236334u: goto label_236334;
            case 0x236338u: goto label_236338;
            case 0x23633Cu: goto label_23633c;
            case 0x236340u: goto label_236340;
            case 0x236344u: goto label_236344;
            case 0x236348u: goto label_236348;
            case 0x23634Cu: goto label_23634c;
            case 0x236350u: goto label_236350;
            case 0x236354u: goto label_236354;
            case 0x236358u: goto label_236358;
            case 0x23635Cu: goto label_23635c;
            case 0x236360u: goto label_236360;
            case 0x236364u: goto label_236364;
            case 0x236368u: goto label_236368;
            case 0x23636Cu: goto label_23636c;
            case 0x236370u: goto label_236370;
            case 0x236374u: goto label_236374;
            case 0x236378u: goto label_236378;
            case 0x23637Cu: goto label_23637c;
            case 0x236380u: goto label_236380;
            case 0x236384u: goto label_236384;
            case 0x236388u: goto label_236388;
            case 0x23638Cu: goto label_23638c;
            case 0x236390u: goto label_236390;
            case 0x236394u: goto label_236394;
            case 0x236398u: goto label_236398;
            case 0x23639Cu: goto label_23639c;
            case 0x2363A0u: goto label_2363a0;
            case 0x2363A4u: goto label_2363a4;
            case 0x2363A8u: goto label_2363a8;
            case 0x2363ACu: goto label_2363ac;
            case 0x2363B0u: goto label_2363b0;
            case 0x2363B4u: goto label_2363b4;
            case 0x2363B8u: goto label_2363b8;
            case 0x2363BCu: goto label_2363bc;
            case 0x2363C0u: goto label_2363c0;
            case 0x2363C4u: goto label_2363c4;
            case 0x2363C8u: goto label_2363c8;
            case 0x2363CCu: goto label_2363cc;
            case 0x2363D0u: goto label_2363d0;
            case 0x2363D4u: goto label_2363d4;
            case 0x2363D8u: goto label_2363d8;
            case 0x2363DCu: goto label_2363dc;
            case 0x2363E0u: goto label_2363e0;
            case 0x2363E4u: goto label_2363e4;
            case 0x2363E8u: goto label_2363e8;
            case 0x2363ECu: goto label_2363ec;
            case 0x2363F0u: goto label_2363f0;
            case 0x2363F4u: goto label_2363f4;
            case 0x2363F8u: goto label_2363f8;
            case 0x2363FCu: goto label_2363fc;
            case 0x236400u: goto label_236400;
            case 0x236404u: goto label_236404;
            case 0x236408u: goto label_236408;
            case 0x23640Cu: goto label_23640c;
            case 0x236410u: goto label_236410;
            case 0x236414u: goto label_236414;
            case 0x236418u: goto label_236418;
            case 0x23641Cu: goto label_23641c;
            case 0x236420u: goto label_236420;
            case 0x236424u: goto label_236424;
            case 0x236428u: goto label_236428;
            case 0x23642Cu: goto label_23642c;
            case 0x236430u: goto label_236430;
            case 0x236434u: goto label_236434;
            case 0x236438u: goto label_236438;
            case 0x23643Cu: goto label_23643c;
            case 0x236440u: goto label_236440;
            default: break;
        }
        return;
    }
label_fallthrough_0x23643c:
    ctx->pc = 0x236444u;
}
