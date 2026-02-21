#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterNewInst
// Address: 0x293d40 - 0x293ed0
void CritterNewInst_0x293d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x293d40u;

    // 0x293d40: 0x27bdff90
    ctx->pc = 0x293d40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x293d44: 0xffbf0060
    ctx->pc = 0x293d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x293d48: 0xffb50050
    ctx->pc = 0x293d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x293d4c: 0xffb40040
    ctx->pc = 0x293d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x293d50: 0xffb30030
    ctx->pc = 0x293d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x293d54: 0xffb20020
    ctx->pc = 0x293d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x293d58: 0xffb10010
    ctx->pc = 0x293d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x293d5c: 0xffb00000
    ctx->pc = 0x293d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x293d60: 0x80382d
    ctx->pc = 0x293d60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d64: 0xa0802d
    ctx->pc = 0x293d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d68: 0x3c040036
    ctx->pc = 0x293d68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x293d6c: 0x2484d4c8
    ctx->pc = 0x293d6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956232));
    // 0x293d70: 0x101880
    ctx->pc = 0x293d70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x293d74: 0x24020018
    ctx->pc = 0x293d74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x293d78: 0xe21018
    ctx->pc = 0x293d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x293d7c: 0x621821
    ctx->pc = 0x293d7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x293d80: 0x641821
    ctx->pc = 0x293d80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x293d84: 0x8c740000
    ctx->pc = 0x293d84u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x293d88: 0x16800008
    ctx->pc = 0x293D88u;
    {
        const bool branch_taken_0x293d88 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x293D8Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x293d88) {
            ctx->pc = 0x293DACu;
            goto label_293dac;
        }
    }
    ctx->pc = 0x293D90u;
    // 0x293d90: 0x3c04003b
    ctx->pc = 0x293d90u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x293d94: 0x2484e1f8
    ctx->pc = 0x293d94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959608));
    // 0x293d98: 0xe0282d
    ctx->pc = 0x293d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d9c: 0xc0b492e
    ctx->pc = 0x293D9Cu;
    SET_GPR_U32(ctx, 31, 0x293DA4u);
    ctx->pc = 0x293DA0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293DA4u; }
    }
    if (ctx->pc != 0x293DA4u) { return; }
    ctx->pc = 0x293DA4u;
label_293da4:
    // 0x293da4: 0x10000041
    ctx->pc = 0x293DA4u;
    {
        const bool branch_taken_0x293da4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x293DA8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x293da4) {
            ctx->pc = 0x293EACu;
            goto label_293eac;
        }
    }
    ctx->pc = 0x293DACu;
label_293dac:
    // 0x293dac: 0x8e820138
    ctx->pc = 0x293dacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 312)));
    // 0x293db0: 0x1040003e
    ctx->pc = 0x293DB0u;
    {
        const bool branch_taken_0x293db0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x293DB4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x293db0) {
            ctx->pc = 0x293EACu;
            goto label_293eac;
        }
    }
    ctx->pc = 0x293DB8u;
    // 0x293db8: 0xc0a4f04
    ctx->pc = 0x293DB8u;
    SET_GPR_U32(ctx, 31, 0x293DC0u);
    ctx->pc = 0x293C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterEmptyInst_0x293c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293DC0u; }
    }
    if (ctx->pc != 0x293DC0u) { return; }
    ctx->pc = 0x293DC0u;
    // 0x293dc0: 0x40902d
    ctx->pc = 0x293dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293dc4: 0x1240fff7
    ctx->pc = 0x293DC4u;
    {
        const bool branch_taken_0x293dc4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x293DC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x293dc4) {
            ctx->pc = 0x293DA4u;
            goto label_293da4;
        }
    }
    ctx->pc = 0x293DCCu;
    // 0x293dcc: 0xc0a4cfe
    ctx->pc = 0x293DCCu;
    SET_GPR_U32(ctx, 31, 0x293DD4u);
    ctx->pc = 0x293DD0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2933F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitInst_0x2933f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293DD4u; }
    }
    if (ctx->pc != 0x293DD4u) { return; }
    ctx->pc = 0x293DD4u;
    // 0x293dd4: 0x240202d
    ctx->pc = 0x293dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293dd8: 0x220282d
    ctx->pc = 0x293dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ddc: 0xc0a4dd6
    ctx->pc = 0x293DDCu;
    SET_GPR_U32(ctx, 31, 0x293DE4u);
    ctx->pc = 0x293DE0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x293758u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitGeo_0x293758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293DE4u; }
    }
    if (ctx->pc != 0x293DE4u) { return; }
    ctx->pc = 0x293DE4u;
    // 0x293de4: 0x240202d
    ctx->pc = 0x293de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293de8: 0xc0a4aaa
    ctx->pc = 0x293DE8u;
    SET_GPR_U32(ctx, 31, 0x293DF0u);
    ctx->pc = 0x293DECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x292AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterAddAnimInsts_0x292aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293DF0u; }
    }
    if (ctx->pc != 0x293DF0u) { return; }
    ctx->pc = 0x293DF0u;
    // 0x293df0: 0xc0a4b04
    ctx->pc = 0x293DF0u;
    SET_GPR_U32(ctx, 31, 0x293DF8u);
    ctx->pc = 0x293DF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x292C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitColnodes_0x292c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293DF8u; }
    }
    if (ctx->pc != 0x293DF8u) { return; }
    ctx->pc = 0x293DF8u;
    // 0x293df8: 0xc0a4d86
    ctx->pc = 0x293DF8u;
    SET_GPR_U32(ctx, 31, 0x293E00u);
    ctx->pc = 0x293DFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x293618u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterAddHealthMeter_0x293618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293E00u; }
    }
    if (ctx->pc != 0x293E00u) { return; }
    ctx->pc = 0x293E00u;
    // 0x293e00: 0x240982d
    ctx->pc = 0x293e00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e04: 0x8691011c
    ctx->pc = 0x293e04u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x293e08: 0x620001b
    ctx->pc = 0x293E08u;
    {
        const bool branch_taken_0x293e08 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x293E0Cu;
        WRITE8(ADD32(GPR_U32(ctx, 18), 1158), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x293e08) {
            ctx->pc = 0x293E78u;
            goto label_293e78;
        }
    }
    ctx->pc = 0x293E10u;
    // 0x293e10: 0x24150140
    ctx->pc = 0x293e10u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 320));
    // 0x293e14: 0x0
    ctx->pc = 0x293e14u;
    // NOP
label_293e18:
    // 0x293e18: 0x8e820130
    ctx->pc = 0x293e18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x293e1c: 0x2358818
    ctx->pc = 0x293e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x293e20: 0x8c420014
    ctx->pc = 0x293e20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x293e24: 0xc0a4f04
    ctx->pc = 0x293E24u;
    SET_GPR_U32(ctx, 31, 0x293E2Cu);
    ctx->pc = 0x293E28u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->pc = 0x293C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterEmptyInst_0x293c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293E2Cu; }
    }
    if (ctx->pc != 0x293E2Cu) { return; }
    ctx->pc = 0x293E2Cu;
    // 0x293e2c: 0x40802d
    ctx->pc = 0x293e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e30: 0x200202d
    ctx->pc = 0x293e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e34: 0xc0a4cfe
    ctx->pc = 0x293E34u;
    SET_GPR_U32(ctx, 31, 0x293E3Cu);
    ctx->pc = 0x293E38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2933F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitInst_0x2933f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293E3Cu; }
    }
    if (ctx->pc != 0x293E3Cu) { return; }
    ctx->pc = 0x293E3Cu;
    // 0x293e3c: 0x200202d
    ctx->pc = 0x293e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e40: 0xc0a4e98
    ctx->pc = 0x293E40u;
    SET_GPR_U32(ctx, 31, 0x293E48u);
    ctx->pc = 0x293E44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x293A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitChild_0x293a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293E48u; }
    }
    if (ctx->pc != 0x293E48u) { return; }
    ctx->pc = 0x293E48u;
    // 0x293e48: 0xc0a4b04
    ctx->pc = 0x293E48u;
    SET_GPR_U32(ctx, 31, 0x293E50u);
    ctx->pc = 0x293E4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x292C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitColnodes_0x292c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293E50u; }
    }
    if (ctx->pc != 0x293E50u) { return; }
    ctx->pc = 0x293E50u;
    // 0x293e50: 0xc0a4d86
    ctx->pc = 0x293E50u;
    SET_GPR_U32(ctx, 31, 0x293E58u);
    ctx->pc = 0x293E54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x293618u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterAddHealthMeter_0x293618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293E58u; }
    }
    if (ctx->pc != 0x293E58u) { return; }
    ctx->pc = 0x293E58u;
    // 0x293e58: 0xae700b60
    ctx->pc = 0x293e58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2912), GPR_U32(ctx, 16));
    // 0x293e5c: 0xae120b64
    ctx->pc = 0x293e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2916), GPR_U32(ctx, 18));
    // 0x293e60: 0x200982d
    ctx->pc = 0x293e60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e64: 0x8631011c
    ctx->pc = 0x293e64u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x293e68: 0x92420486
    ctx->pc = 0x293e68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1158)));
    // 0x293e6c: 0x24420001
    ctx->pc = 0x293e6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x293e70: 0x621ffe9
    ctx->pc = 0x293E70u;
    {
        const bool branch_taken_0x293e70 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x293E74u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 1158), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x293e70) {
            ctx->pc = 0x293E18u;
            goto label_293e18;
        }
    }
    ctx->pc = 0x293E78u;
label_293e78:
    // 0x293e78: 0x8e420004
    ctx->pc = 0x293e78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x293e7c: 0x8c420120
    ctx->pc = 0x293e7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x293e80: 0x84430020
    ctx->pc = 0x293e80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x293e84: 0x24020008
    ctx->pc = 0x293e84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x293e88: 0x14620008
    ctx->pc = 0x293E88u;
    {
        const bool branch_taken_0x293e88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x293E8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x293e88) {
            ctx->pc = 0x293EACu;
            goto label_293eac;
        }
    }
    ctx->pc = 0x293E90u;
    // 0x293e90: 0x26440040
    ctx->pc = 0x293e90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 64));
    // 0x293e94: 0x3c014120
    ctx->pc = 0x293e94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x293e98: 0x44816000
    ctx->pc = 0x293e98u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x293e9c: 0xc093f7c
    ctx->pc = 0x293E9Cu;
    SET_GPR_U32(ctx, 31, 0x293EA4u);
    ctx->pc = 0x293EA0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24FDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindClosestWaypoint_0x24fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293EA4u; }
    }
    if (ctx->pc != 0x293EA4u) { return; }
    ctx->pc = 0x293EA4u;
    // 0x293ea4: 0xae420b5c
    ctx->pc = 0x293ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2908), GPR_U32(ctx, 2));
    // 0x293ea8: 0x240102d
    ctx->pc = 0x293ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_293eac:
    // 0x293eac: 0xdfbf0060
    ctx->pc = 0x293eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293eb0: 0xdfb50050
    ctx->pc = 0x293eb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293eb4: 0xdfb40040
    ctx->pc = 0x293eb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293eb8: 0xdfb30030
    ctx->pc = 0x293eb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293ebc: 0xdfb20020
    ctx->pc = 0x293ebcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293ec0: 0xdfb10010
    ctx->pc = 0x293ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293ec4: 0xdfb00000
    ctx->pc = 0x293ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293ec8: 0x3e00008
    ctx->pc = 0x293EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293ECCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x293DA4u: goto label_293da4;
            case 0x293DACu: goto label_293dac;
            case 0x293E18u: goto label_293e18;
            case 0x293E78u: goto label_293e78;
            case 0x293EACu: goto label_293eac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x293ED0u;
}
