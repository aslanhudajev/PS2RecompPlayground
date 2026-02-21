#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_enemy
// Address: 0x238ca8 - 0x238edc
void init_enemy_0x238ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x238ca8u;

    // 0x238ca8: 0x27bdff70
    ctx->pc = 0x238ca8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x238cac: 0xffbf0070
    ctx->pc = 0x238cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x238cb0: 0xffb60060
    ctx->pc = 0x238cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x238cb4: 0xffb50050
    ctx->pc = 0x238cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x238cb8: 0xffb40040
    ctx->pc = 0x238cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x238cbc: 0xffb30030
    ctx->pc = 0x238cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x238cc0: 0xffb20020
    ctx->pc = 0x238cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x238cc4: 0xffb10010
    ctx->pc = 0x238cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x238cc8: 0xffb00000
    ctx->pc = 0x238cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238ccc: 0xe7b40080
    ctx->pc = 0x238cccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x238cd0: 0x80b02d
    ctx->pc = 0x238cd0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cd4: 0xa0982d
    ctx->pc = 0x238cd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cd8: 0xc0a02d
    ctx->pc = 0x238cd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cdc: 0xe0902d
    ctx->pc = 0x238cdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ce0: 0x100a82d
    ctx->pc = 0x238ce0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ce4: 0x240303b0
    ctx->pc = 0x238ce4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x238ce8: 0x2c31818
    ctx->pc = 0x238ce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x238cec: 0x3c020033
    ctx->pc = 0x238cecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x238cf0: 0x2442dfd0
    ctx->pc = 0x238cf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x238cf4: 0x628821
    ctx->pc = 0x238cf4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238cf8: 0xae340000
    ctx->pc = 0x238cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x238cfc: 0xae200234
    ctx->pc = 0x238cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 0));
    // 0x238d00: 0x3c020033
    ctx->pc = 0x238d00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x238d04: 0x2442d638
    ctx->pc = 0x238d04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956600));
    // 0x238d08: 0x141880
    ctx->pc = 0x238d08u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
    // 0x238d0c: 0x621021
    ctx->pc = 0x238d0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238d10: 0xc4400000
    ctx->pc = 0x238d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238d14: 0xe6200238
    ctx->pc = 0x238d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
    // 0x238d18: 0xae20023c
    ctx->pc = 0x238d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 0));
    // 0x238d1c: 0xae200240
    ctx->pc = 0x238d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 0));
    // 0x238d20: 0x3c020033
    ctx->pc = 0x238d20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x238d24: 0x2442d6c0
    ctx->pc = 0x238d24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956736));
    // 0x238d28: 0x621821
    ctx->pc = 0x238d28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238d2c: 0xc4600000
    ctx->pc = 0x238d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238d30: 0xe6200244
    ctx->pc = 0x238d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
    // 0x238d34: 0xae200248
    ctx->pc = 0x238d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 0));
    // 0x238d38: 0xae200254
    ctx->pc = 0x238d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 0));
    // 0x238d3c: 0xae200258
    ctx->pc = 0x238d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 0));
    // 0x238d40: 0xae20025c
    ctx->pc = 0x238d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 0));
    // 0x238d44: 0x24100001
    ctx->pc = 0x238d44u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x238d48: 0xae3000c8
    ctx->pc = 0x238d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 16));
    // 0x238d4c: 0xa62002e8
    ctx->pc = 0x238d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 744), (uint16_t)GPR_U32(ctx, 0));
    // 0x238d50: 0x220202d
    ctx->pc = 0x238d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d54: 0x280282d
    ctx->pc = 0x238d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d58: 0xc08e154
    ctx->pc = 0x238D58u;
    SET_GPR_U32(ctx, 31, 0x238D60u);
    ctx->pc = 0x238D5Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238550u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetEnemyObj_0x238550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D60u; }
    }
    if (ctx->pc != 0x238D60u) { return; }
    ctx->pc = 0x238D60u;
    // 0x238d60: 0x2a430004
    ctx->pc = 0x238d60u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), 4));
    // 0x238d64: 0x24020002
    ctx->pc = 0x238d64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x238d68: 0x43900a
    ctx->pc = 0x238d68u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 2));
    // 0x238d6c: 0x3aa20012
    ctx->pc = 0x238d6cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 21), 18));
    // 0x238d70: 0x202900a
    ctx->pc = 0x238d70u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 16));
    // 0x238d74: 0x280202d
    ctx->pc = 0x238d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d78: 0xc08e01a
    ctx->pc = 0x238D78u;
    SET_GPR_U32(ctx, 31, 0x238D80u);
    ctx->pc = 0x238D7Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238068u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_enemy_health_0x238068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D80u; }
    }
    if (ctx->pc != 0x238D80u) { return; }
    ctx->pc = 0x238D80u;
    // 0x238d80: 0x46000506
    ctx->pc = 0x238d80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x238d84: 0x26240010
    ctx->pc = 0x238d84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    // 0x238d88: 0x26250240
    ctx->pc = 0x238d88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 576));
    // 0x238d8c: 0xc080d02
    ctx->pc = 0x238D8Cu;
    SET_GPR_U32(ctx, 31, 0x238D94u);
    ctx->pc = 0x238D90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 564));
    ctx->pc = 0x203408u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetObjWorldMat_0x203408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D94u; }
    }
    if (ctx->pc != 0x238D94u) { return; }
    ctx->pc = 0x238D94u;
    // 0x238d94: 0x8e220070
    ctx->pc = 0x238d94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x238d98: 0x1040001f
    ctx->pc = 0x238D98u;
    {
        const bool branch_taken_0x238d98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x238D9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x238d98) {
            ctx->pc = 0x238E18u;
            goto label_238e18;
        }
    }
    ctx->pc = 0x238DA0u;
    // 0x238da0: 0xc6600000
    ctx->pc = 0x238da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238da4: 0xe6200040
    ctx->pc = 0x238da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x238da8: 0xc6600004
    ctx->pc = 0x238da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238dac: 0xe6200044
    ctx->pc = 0x238dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x238db0: 0xc6600008
    ctx->pc = 0x238db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238db4: 0xe6200048
    ctx->pc = 0x238db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x238db8: 0x260202d
    ctx->pc = 0x238db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238dbc: 0xc44ce88c
    ctx->pc = 0x238dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238dc0: 0x3c013dcc
    ctx->pc = 0x238dc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x238dc4: 0x3421cccd
    ctx->pc = 0x238dc4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x238dc8: 0x44816800
    ctx->pc = 0x238dc8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x238dcc: 0xc087b5c
    ctx->pc = 0x238DCCu;
    SET_GPR_U32(ctx, 31, 0x238DD4u);
    ctx->pc = 0x238DD0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x21ED70u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorPos_0x21ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DD4u; }
    }
    if (ctx->pc != 0x238DD4u) { return; }
    ctx->pc = 0x238DD4u;
    // 0x238dd4: 0xe6200044
    ctx->pc = 0x238dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x238dd8: 0x8e240070
    ctx->pc = 0x238dd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x238ddc: 0x24050002
    ctx->pc = 0x238ddcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x238de0: 0xc0b41e4
    ctx->pc = 0x238DE0u;
    SET_GPR_U32(ctx, 31, 0x238DE8u);
    ctx->pc = 0x238DE4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DE8u; }
    }
    if (ctx->pc != 0x238DE8u) { return; }
    ctx->pc = 0x238DE8u;
    // 0x238de8: 0xe6340214
    ctx->pc = 0x238de8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 532), bits); }
    // 0x238dec: 0x2c0202d
    ctx->pc = 0x238decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238df0: 0x4600a306
    ctx->pc = 0x238df0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x238df4: 0xc08e27e
    ctx->pc = 0x238DF4u;
    SET_GPR_U32(ctx, 31, 0x238DFCu);
    ctx->pc = 0x238DF8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2389F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_enemy_vars_0x2389f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DFCu; }
    }
    if (ctx->pc != 0x238DFCu) { return; }
    ctx->pc = 0x238DFCu;
    // 0x238dfc: 0x2402001e
    ctx->pc = 0x238dfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x238e00: 0x52820001
    ctx->pc = 0x238E00u;
    {
        const bool branch_taken_0x238e00 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        if (branch_taken_0x238e00) {
            ctx->pc = 0x238E04u;
            WRITE16(ADD32(GPR_U32(ctx, 17), 538), (uint16_t)GPR_U32(ctx, 18));
            ctx->pc = 0x238E08u;
            goto label_238e08;
        }
    }
    ctx->pc = 0x238E08u;
label_238e08:
    // 0x238e08: 0xc6200044
    ctx->pc = 0x238e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238e0c: 0xc6210230
    ctx->pc = 0x238e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238e10: 0x46010000
    ctx->pc = 0x238e10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x238e14: 0xe6200044
    ctx->pc = 0x238e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_238e18:
    // 0x238e18: 0x26300010
    ctx->pc = 0x238e18u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
    // 0x238e1c: 0xc080ce2
    ctx->pc = 0x238E1Cu;
    SET_GPR_U32(ctx, 31, 0x238E24u);
    ctx->pc = 0x238E20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203388u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjWorldMat_0x203388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E24u; }
    }
    if (ctx->pc != 0x238E24u) { return; }
    ctx->pc = 0x238E24u;
    // 0x238e24: 0x200202d
    ctx->pc = 0x238e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e28: 0x26250240
    ctx->pc = 0x238e28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 576));
    // 0x238e2c: 0xc080cd4
    ctx->pc = 0x238E2Cu;
    SET_GPR_U32(ctx, 31, 0x238E34u);
    ctx->pc = 0x238E30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 564));
    ctx->pc = 0x203350u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjOffsets_0x203350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E34u; }
    }
    if (ctx->pc != 0x238E34u) { return; }
    ctx->pc = 0x238E34u;
    // 0x238e34: 0xc6200044
    ctx->pc = 0x238e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238e38: 0xe62002a8
    ctx->pc = 0x238e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 680), bits); }
    // 0x238e3c: 0x8e2301f0
    ctx->pc = 0x238e3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x238e40: 0x5060000d
    ctx->pc = 0x238E40u;
    {
        const bool branch_taken_0x238e40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x238e40) {
            ctx->pc = 0x238E44u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->pc = 0x238E78u;
            goto label_238e78;
        }
    }
    ctx->pc = 0x238E48u;
    // 0x238e48: 0x8e220070
    ctx->pc = 0x238e48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x238e4c: 0xc4400030
    ctx->pc = 0x238e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238e50: 0xe4600030
    ctx->pc = 0x238e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x238e54: 0x8e2301f0
    ctx->pc = 0x238e54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x238e58: 0x8e220070
    ctx->pc = 0x238e58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x238e5c: 0xc4400034
    ctx->pc = 0x238e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238e60: 0xe4600034
    ctx->pc = 0x238e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x238e64: 0x8e2301f0
    ctx->pc = 0x238e64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x238e68: 0x8e220070
    ctx->pc = 0x238e68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x238e6c: 0xc4400038
    ctx->pc = 0x238e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238e70: 0xe4600038
    ctx->pc = 0x238e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x238e74: 0x8e220080
    ctx->pc = 0x238e74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_238e78:
    // 0x238e78: 0x1040000e
    ctx->pc = 0x238E78u;
    {
        const bool branch_taken_0x238e78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x238E7Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x238e78) {
            ctx->pc = 0x238EB4u;
            goto label_238eb4;
        }
    }
    ctx->pc = 0x238E80u;
    // 0x238e80: 0x26240080
    ctx->pc = 0x238e80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 128));
    // 0x238e84: 0x282d
    ctx->pc = 0x238e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e88: 0x24060002
    ctx->pc = 0x238e88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x238e8c: 0xdfb60060
    ctx->pc = 0x238e8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x238e90: 0xdfb50050
    ctx->pc = 0x238e90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x238e94: 0xdfb40040
    ctx->pc = 0x238e94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238e98: 0xdfb30030
    ctx->pc = 0x238e98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238e9c: 0xdfb20020
    ctx->pc = 0x238e9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238ea0: 0xdfb10010
    ctx->pc = 0x238ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238ea4: 0xdfb00000
    ctx->pc = 0x238ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238ea8: 0xc7b40080
    ctx->pc = 0x238ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x238eac: 0x8084a96
    ctx->pc = 0x238EACu;
    ctx->pc = 0x238EB0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x212A58u;
    AnimateATree_0x212a58(rdram, ctx, runtime); return;
    ctx->pc = 0x238EB4u;
label_238eb4:
    // 0x238eb4: 0xdfb60060
    ctx->pc = 0x238eb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x238eb8: 0xdfb50050
    ctx->pc = 0x238eb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x238ebc: 0xdfb40040
    ctx->pc = 0x238ebcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238ec0: 0xdfb30030
    ctx->pc = 0x238ec0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238ec4: 0xdfb20020
    ctx->pc = 0x238ec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238ec8: 0xdfb10010
    ctx->pc = 0x238ec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238ecc: 0xdfb00000
    ctx->pc = 0x238eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238ed0: 0xc7b40080
    ctx->pc = 0x238ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x238ed4: 0x3e00008
    ctx->pc = 0x238ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238ED8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238E08u: goto label_238e08;
            case 0x238E18u: goto label_238e18;
            case 0x238E78u: goto label_238e78;
            case 0x238EB4u: goto label_238eb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238EDCu;
}
