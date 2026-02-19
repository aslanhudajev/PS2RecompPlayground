#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitEffects
// Address: 0x279c70 - 0x27a4d0
void InitEffects_0x279c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x279c70u;

    // 0x279c70: 0x27bdfe60
    ctx->pc = 0x279c70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x279c74: 0xffbf0190
    ctx->pc = 0x279c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x279c78: 0xffbe0180
    ctx->pc = 0x279c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 30));
    // 0x279c7c: 0xffb70170
    ctx->pc = 0x279c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x279c80: 0xffb60160
    ctx->pc = 0x279c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x279c84: 0xffb50150
    ctx->pc = 0x279c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x279c88: 0xffb40140
    ctx->pc = 0x279c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x279c8c: 0xffb30130
    ctx->pc = 0x279c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x279c90: 0xffb20120
    ctx->pc = 0x279c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x279c94: 0xffb10110
    ctx->pc = 0x279c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x279c98: 0xffb00100
    ctx->pc = 0x279c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x279c9c: 0x982d
    ctx->pc = 0x279c9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ca0: 0x3c020034
    ctx->pc = 0x279ca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x279ca4: 0x24450eb0
    ctx->pc = 0x279ca4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x279ca8: 0x240300f0
    ctx->pc = 0x279ca8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
    // 0x279cac: 0x0
    ctx->pc = 0x279cacu;
    // NOP
label_279cb0:
    // 0x279cb0: 0x2632018
    ctx->pc = 0x279cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x279cb4: 0x851021
    ctx->pc = 0x279cb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x279cb8: 0xac400014
    ctx->pc = 0x279cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x279cbc: 0xac400018
    ctx->pc = 0x279cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x279cc0: 0xac4000d4
    ctx->pc = 0x279cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
    // 0x279cc4: 0x26730001
    ctx->pc = 0x279cc4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x279cc8: 0x2a620040
    ctx->pc = 0x279cc8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 64));
    // 0x279ccc: 0x1440fff8
    ctx->pc = 0x279CCCu;
    {
        const bool branch_taken_0x279ccc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x279ccc) {
            ctx->pc = 0x279CB0u;
            goto label_279cb0;
        }
    }
    ctx->pc = 0x279CD4u;
    // 0x279cd4: 0x3c020034
    ctx->pc = 0x279cd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x279cd8: 0xac404ab0
    ctx->pc = 0x279cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19120), GPR_U32(ctx, 0));
    // 0x279cdc: 0x3c020034
    ctx->pc = 0x279cdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x279ce0: 0xac405528
    ctx->pc = 0x279ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21800), GPR_U32(ctx, 0));
    // 0x279ce4: 0x3c030034
    ctx->pc = 0x279ce4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x279ce8: 0x24020100
    ctx->pc = 0x279ce8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x279cec: 0xac6200e4
    ctx->pc = 0x279cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 2));
    // 0x279cf0: 0x202d
    ctx->pc = 0x279cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279cf4: 0x3c05003a
    ctx->pc = 0x279cf4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x279cf8: 0x24a52550
    ctx->pc = 0x279cf8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x279cfc: 0xc0b3ec0
    ctx->pc = 0x279CFCu;
    SET_GPR_U32(ctx, 31, 0x279D04u);
    ctx->pc = 0x279D00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D04u; }
    }
    if (ctx->pc != 0x279D04u) { return; }
    ctx->pc = 0x279D04u;
    // 0x279d04: 0x3c100034
    ctx->pc = 0x279d04u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x279d08: 0xae02569c
    ctx->pc = 0x279d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22172), GPR_U32(ctx, 2));
    // 0x279d0c: 0x40202d
    ctx->pc = 0x279d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d10: 0x24050004
    ctx->pc = 0x279d10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x279d14: 0xc0b41b8
    ctx->pc = 0x279D14u;
    SET_GPR_U32(ctx, 31, 0x279D1Cu);
    ctx->pc = 0x279D18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D1Cu; }
    }
    if (ctx->pc != 0x279D1Cu) { return; }
    ctx->pc = 0x279D1Cu;
    // 0x279d1c: 0x3c020038
    ctx->pc = 0x279d1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x279d20: 0x8c44c9a8
    ctx->pc = 0x279d20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294953384)));
    // 0x279d24: 0xc0b400a
    ctx->pc = 0x279D24u;
    SET_GPR_U32(ctx, 31, 0x279D2Cu);
    ctx->pc = 0x279D28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 22172)));
    ctx->pc = 0x2D0028u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeOrder_0x2d0028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D2Cu; }
    }
    if (ctx->pc != 0x279D2Cu) { return; }
    ctx->pc = 0x279D2Cu;
    // 0x279d2c: 0x982d
    ctx->pc = 0x279d2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d30: 0x241e0028
    ctx->pc = 0x279d30u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 40));
    // 0x279d34: 0x3c020034
    ctx->pc = 0x279d34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x279d38: 0x245700e8
    ctx->pc = 0x279d38u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 232));
    // 0x279d3c: 0x3c020034
    ctx->pc = 0x279d3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x279d40: 0x24560108
    ctx->pc = 0x279d40u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 264));
    // 0x279d44: 0x3c020034
    ctx->pc = 0x279d44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x279d48: 0x2455010c
    ctx->pc = 0x279d48u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 268));
    // 0x279d4c: 0x3c140034
    ctx->pc = 0x279d4cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
    // 0x279d50: 0x27e1018
    ctx->pc = 0x279d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x279d54: 0x0
    ctx->pc = 0x279d54u;
    // NOP
label_279d58:
    // 0x279d58: 0x578021
    ctx->pc = 0x279d58u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x279d5c: 0x568821
    ctx->pc = 0x279d5cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x279d60: 0x559021
    ctx->pc = 0x279d60u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x279d64: 0x260202d
    ctx->pc = 0x279d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d68: 0x3c060034
    ctx->pc = 0x279d68u;
    SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
    // 0x279d6c: 0x8cc5cda8
    ctx->pc = 0x279d6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 4294954408)));
    // 0x279d70: 0x200302d
    ctx->pc = 0x279d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d74: 0x8e270000
    ctx->pc = 0x279d74u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x279d78: 0x8e480000
    ctx->pc = 0x279d78u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x279d7c: 0xc09e6e2
    ctx->pc = 0x279D7Cu;
    SET_GPR_U32(ctx, 31, 0x279D84u);
    ctx->pc = 0x279D80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D84u; }
    }
    if (ctx->pc != 0x279D84u) { return; }
    ctx->pc = 0x279D84u;
    // 0x279d84: 0x54400009
    ctx->pc = 0x279D84u;
    {
        const bool branch_taken_0x279d84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x279d84) {
            ctx->pc = 0x279D88u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x279DACu;
            goto label_279dac;
        }
    }
    ctx->pc = 0x279D8Cu;
    // 0x279d8c: 0x260202d
    ctx->pc = 0x279d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d90: 0x8e85cdac
    ctx->pc = 0x279d90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 4294954412)));
    // 0x279d94: 0x200302d
    ctx->pc = 0x279d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d98: 0x8e270000
    ctx->pc = 0x279d98u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x279d9c: 0x8e480000
    ctx->pc = 0x279d9cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x279da0: 0xc09e6e2
    ctx->pc = 0x279DA0u;
    SET_GPR_U32(ctx, 31, 0x279DA8u);
    ctx->pc = 0x279DA4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279DA8u; }
    }
    if (ctx->pc != 0x279DA8u) { return; }
    ctx->pc = 0x279DA8u;
    // 0x279da8: 0x26730001
    ctx->pc = 0x279da8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_279dac:
    // 0x279dac: 0x2e620050
    ctx->pc = 0x279dacu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 80));
    // 0x279db0: 0x1440ffe9
    ctx->pc = 0x279DB0u;
    {
        const bool branch_taken_0x279db0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x279DB4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x279db0) {
            ctx->pc = 0x279D58u;
            goto label_279d58;
        }
    }
    ctx->pc = 0x279DB8u;
    // 0x279db8: 0x2a6200da
    ctx->pc = 0x279db8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 218));
    // 0x279dbc: 0x5040000d
    ctx->pc = 0x279DBCu;
    {
        const bool branch_taken_0x279dbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x279dbc) {
            ctx->pc = 0x279DC0u;
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x279DF4u;
            goto label_279df4;
        }
    }
    ctx->pc = 0x279DC4u;
    // 0x279dc4: 0x260202d
    ctx->pc = 0x279dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_279dc8:
    // 0x279dc8: 0x282d
    ctx->pc = 0x279dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279dcc: 0x302d
    ctx->pc = 0x279dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279dd0: 0x382d
    ctx->pc = 0x279dd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279dd4: 0x402d
    ctx->pc = 0x279dd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279dd8: 0xc09e6e2
    ctx->pc = 0x279DD8u;
    SET_GPR_U32(ctx, 31, 0x279DE0u);
    ctx->pc = 0x279DDCu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279DE0u; }
    }
    if (ctx->pc != 0x279DE0u) { return; }
    ctx->pc = 0x279DE0u;
    // 0x279de0: 0x26730001
    ctx->pc = 0x279de0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x279de4: 0x2a6200da
    ctx->pc = 0x279de4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 218));
    // 0x279de8: 0x1440fff7
    ctx->pc = 0x279DE8u;
    {
        const bool branch_taken_0x279de8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x279DECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279de8) {
            ctx->pc = 0x279DC8u;
            goto label_279dc8;
        }
    }
    ctx->pc = 0x279DF0u;
    // 0x279df0: 0x982d
    ctx->pc = 0x279df0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279df4:
    // 0x279df4: 0x3c020033
    ctx->pc = 0x279df4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x279df8: 0x24554648
    ctx->pc = 0x279df8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 17992));
    // 0x279dfc: 0x3c020033
    ctx->pc = 0x279dfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x279e00: 0x24523c08
    ctx->pc = 0x279e00u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 15368));
    // 0x279e04: 0x3c020034
    ctx->pc = 0x279e04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x279e08: 0x24544ab8
    ctx->pc = 0x279e08u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 19128));
    // 0x279e0c: 0x24160001
    ctx->pc = 0x279e0cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
    // 0x279e10: 0x3c020034
    ctx->pc = 0x279e10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x279e14: 0x245e5530
    ctx->pc = 0x279e14u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 21808));
    // 0x279e18: 0x3c020034
    ctx->pc = 0x279e18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x279e1c: 0x245755e8
    ctx->pc = 0x279e1cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 21992));
    // 0x279e20: 0x131880
    ctx->pc = 0x279e20u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x279e24: 0x0
    ctx->pc = 0x279e24u;
    // NOP
label_279e28:
    // 0x279e28: 0x751021
    ctx->pc = 0x279e28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x279e2c: 0xac400000
    ctx->pc = 0x279e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x279e30: 0x721021
    ctx->pc = 0x279e30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x279e34: 0x8c450000
    ctx->pc = 0x279e34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279e38: 0x10a000a0
    ctx->pc = 0x279E38u;
    {
        const bool branch_taken_0x279e38 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x279E3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x279e38) {
            ctx->pc = 0x27A0BCu;
            goto label_27a0bc;
        }
    }
    ctx->pc = 0x279E40u;
    // 0x279e40: 0x24423d78
    ctx->pc = 0x279e40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15736));
    // 0x279e44: 0x621021
    ctx->pc = 0x279e44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x279e48: 0x8c430000
    ctx->pc = 0x279e48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279e4c: 0x24020004
    ctx->pc = 0x279e4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x279e50: 0x5062000c
    ctx->pc = 0x279E50u;
    {
        const bool branch_taken_0x279e50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x279e50) {
            ctx->pc = 0x279E54u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 972)));
            ctx->pc = 0x279E84u;
            goto label_279e84;
        }
    }
    ctx->pc = 0x279E58u;
    // 0x279e58: 0x8e8203c0
    ctx->pc = 0x279e58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 960)));
    // 0x279e5c: 0x54400009
    ctx->pc = 0x279E5Cu;
    {
        const bool branch_taken_0x279e5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x279e5c) {
            ctx->pc = 0x279E60u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 972)));
            ctx->pc = 0x279E84u;
            goto label_279e84;
        }
    }
    ctx->pc = 0x279E64u;
    // 0x279e64: 0x3c06003b
    ctx->pc = 0x279e64u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x279e68: 0x24040050
    ctx->pc = 0x279e68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 80));
    // 0x279e6c: 0x24c6bce8
    ctx->pc = 0x279e6cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950120));
    // 0x279e70: 0x2407fe00
    ctx->pc = 0x279e70u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x279e74: 0x402d
    ctx->pc = 0x279e74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e78: 0xc09e6e2
    ctx->pc = 0x279E78u;
    SET_GPR_U32(ctx, 31, 0x279E80u);
    ctx->pc = 0x279E7Cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E80u; }
    }
    if (ctx->pc != 0x279E80u) { return; }
    ctx->pc = 0x279E80u;
    // 0x279e80: 0x8e8203cc
    ctx->pc = 0x279e80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 972)));
label_279e84:
    // 0x279e84: 0x5440000e
    ctx->pc = 0x279E84u;
    {
        const bool branch_taken_0x279e84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x279e84) {
            ctx->pc = 0x279E88u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 984)));
            ctx->pc = 0x279EC0u;
            goto label_279ec0;
        }
    }
    ctx->pc = 0x279E8Cu;
    // 0x279e8c: 0x138080
    ctx->pc = 0x279e8cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 19), 2));
    // 0x279e90: 0x2121021
    ctx->pc = 0x279e90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x279e94: 0x3c06003b
    ctx->pc = 0x279e94u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x279e98: 0x24040051
    ctx->pc = 0x279e98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 81));
    // 0x279e9c: 0x8c450000
    ctx->pc = 0x279e9cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279ea0: 0x24c6bcf8
    ctx->pc = 0x279ea0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950136));
    // 0x279ea4: 0x2407fe00
    ctx->pc = 0x279ea4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x279ea8: 0x402d
    ctx->pc = 0x279ea8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279eac: 0xc09e6e2
    ctx->pc = 0x279EACu;
    SET_GPR_U32(ctx, 31, 0x279EB4u);
    ctx->pc = 0x279EB0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279EB4u; }
    }
    if (ctx->pc != 0x279EB4u) { return; }
    ctx->pc = 0x279EB4u;
    // 0x279eb4: 0x2158021
    ctx->pc = 0x279eb4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x279eb8: 0xae160000
    ctx->pc = 0x279eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
    // 0x279ebc: 0x8e8203d8
    ctx->pc = 0x279ebcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 984)));
label_279ec0:
    // 0x279ec0: 0x5440000e
    ctx->pc = 0x279EC0u;
    {
        const bool branch_taken_0x279ec0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x279ec0) {
            ctx->pc = 0x279EC4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 996)));
            ctx->pc = 0x279EFCu;
            goto label_279efc;
        }
    }
    ctx->pc = 0x279EC8u;
    // 0x279ec8: 0x138080
    ctx->pc = 0x279ec8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 19), 2));
    // 0x279ecc: 0x2121021
    ctx->pc = 0x279eccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x279ed0: 0x3c06003b
    ctx->pc = 0x279ed0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x279ed4: 0x24040052
    ctx->pc = 0x279ed4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 82));
    // 0x279ed8: 0x8c450000
    ctx->pc = 0x279ed8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279edc: 0x24c6bd00
    ctx->pc = 0x279edcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950144));
    // 0x279ee0: 0x2407fe00
    ctx->pc = 0x279ee0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x279ee4: 0x402d
    ctx->pc = 0x279ee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ee8: 0xc09e6e2
    ctx->pc = 0x279EE8u;
    SET_GPR_U32(ctx, 31, 0x279EF0u);
    ctx->pc = 0x279EECu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279EF0u; }
    }
    if (ctx->pc != 0x279EF0u) { return; }
    ctx->pc = 0x279EF0u;
    // 0x279ef0: 0x2158021
    ctx->pc = 0x279ef0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x279ef4: 0xae160000
    ctx->pc = 0x279ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
    // 0x279ef8: 0x8e8203e4
    ctx->pc = 0x279ef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 996)));
label_279efc:
    // 0x279efc: 0x1440000e
    ctx->pc = 0x279EFCu;
    {
        const bool branch_taken_0x279efc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x279F00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x279efc) {
            ctx->pc = 0x279F38u;
            goto label_279f38;
        }
    }
    ctx->pc = 0x279F04u;
    // 0x279f04: 0x138080
    ctx->pc = 0x279f04u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 19), 2));
    // 0x279f08: 0x2121021
    ctx->pc = 0x279f08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x279f0c: 0x24040053
    ctx->pc = 0x279f0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 83));
    // 0x279f10: 0x8c450000
    ctx->pc = 0x279f10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279f14: 0x3c06003b
    ctx->pc = 0x279f14u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x279f18: 0x24c6bd08
    ctx->pc = 0x279f18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950152));
    // 0x279f1c: 0x2407fe00
    ctx->pc = 0x279f1cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x279f20: 0x402d
    ctx->pc = 0x279f20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f24: 0xc09e6e2
    ctx->pc = 0x279F24u;
    SET_GPR_U32(ctx, 31, 0x279F2Cu);
    ctx->pc = 0x279F28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279F2Cu; }
    }
    if (ctx->pc != 0x279F2Cu) { return; }
    ctx->pc = 0x279F2Cu;
    // 0x279f2c: 0x2158021
    ctx->pc = 0x279f2cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x279f30: 0xae160000
    ctx->pc = 0x279f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
    // 0x279f34: 0x2402000b
    ctx->pc = 0x279f34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
label_279f38:
    // 0x279f38: 0x12620003
    ctx->pc = 0x279F38u;
    {
        const bool branch_taken_0x279f38 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x279F3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
        if (branch_taken_0x279f38) {
            ctx->pc = 0x279F48u;
            goto label_279f48;
        }
    }
    ctx->pc = 0x279F40u;
    // 0x279f40: 0x16620014
    ctx->pc = 0x279F40u;
    {
        const bool branch_taken_0x279f40 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x279F44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
        if (branch_taken_0x279f40) {
            ctx->pc = 0x279F94u;
            goto label_279f94;
        }
    }
    ctx->pc = 0x279F48u;
label_279f48:
    // 0x279f48: 0x138080
    ctx->pc = 0x279f48u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 19), 2));
    // 0x279f4c: 0x2128021
    ctx->pc = 0x279f4cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x279f50: 0x24040054
    ctx->pc = 0x279f50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 84));
    // 0x279f54: 0x8e050000
    ctx->pc = 0x279f54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x279f58: 0x3c06003b
    ctx->pc = 0x279f58u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x279f5c: 0x24c6bd10
    ctx->pc = 0x279f5cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950160));
    // 0x279f60: 0x2407fe00
    ctx->pc = 0x279f60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x279f64: 0x402d
    ctx->pc = 0x279f64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f68: 0xc09e6e2
    ctx->pc = 0x279F68u;
    SET_GPR_U32(ctx, 31, 0x279F70u);
    ctx->pc = 0x279F6Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279F70u; }
    }
    if (ctx->pc != 0x279F70u) { return; }
    ctx->pc = 0x279F70u;
    // 0x279f70: 0x24040055
    ctx->pc = 0x279f70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 85));
    // 0x279f74: 0x8e050000
    ctx->pc = 0x279f74u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x279f78: 0x3c06003b
    ctx->pc = 0x279f78u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x279f7c: 0x24c6bd18
    ctx->pc = 0x279f7cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950168));
    // 0x279f80: 0x2407fe00
    ctx->pc = 0x279f80u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x279f84: 0x402d
    ctx->pc = 0x279f84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f88: 0xc09e6e2
    ctx->pc = 0x279F88u;
    SET_GPR_U32(ctx, 31, 0x279F90u);
    ctx->pc = 0x279F8Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279F90u; }
    }
    if (ctx->pc != 0x279F90u) { return; }
    ctx->pc = 0x279F90u;
    // 0x279f90: 0x2402001b
    ctx->pc = 0x279f90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
label_279f94:
    // 0x279f94: 0x16620022
    ctx->pc = 0x279F94u;
    {
        const bool branch_taken_0x279f94 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x279F98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
        if (branch_taken_0x279f94) {
            ctx->pc = 0x27A020u;
            goto label_27a020;
        }
    }
    ctx->pc = 0x279F9Cu;
    // 0x279f9c: 0x24040056
    ctx->pc = 0x279f9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 86));
    // 0x279fa0: 0x8e45006c
    ctx->pc = 0x279fa0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x279fa4: 0x3c06003b
    ctx->pc = 0x279fa4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x279fa8: 0x24c6bd20
    ctx->pc = 0x279fa8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950176));
    // 0x279fac: 0x2407fe00
    ctx->pc = 0x279facu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x279fb0: 0x402d
    ctx->pc = 0x279fb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279fb4: 0xc09e6e2
    ctx->pc = 0x279FB4u;
    SET_GPR_U32(ctx, 31, 0x279FBCu);
    ctx->pc = 0x279FB8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279FBCu; }
    }
    if (ctx->pc != 0x279FBCu) { return; }
    ctx->pc = 0x279FBCu;
    // 0x279fbc: 0x24040057
    ctx->pc = 0x279fbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 87));
    // 0x279fc0: 0x8e45006c
    ctx->pc = 0x279fc0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x279fc4: 0x3c06003b
    ctx->pc = 0x279fc4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x279fc8: 0x24c6bd28
    ctx->pc = 0x279fc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950184));
    // 0x279fcc: 0x2407fe00
    ctx->pc = 0x279fccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x279fd0: 0x402d
    ctx->pc = 0x279fd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279fd4: 0xc09e6e2
    ctx->pc = 0x279FD4u;
    SET_GPR_U32(ctx, 31, 0x279FDCu);
    ctx->pc = 0x279FD8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279FDCu; }
    }
    if (ctx->pc != 0x279FDCu) { return; }
    ctx->pc = 0x279FDCu;
    // 0x279fdc: 0x24040058
    ctx->pc = 0x279fdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 88));
    // 0x279fe0: 0x8e45006c
    ctx->pc = 0x279fe0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x279fe4: 0x3c06003b
    ctx->pc = 0x279fe4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x279fe8: 0x24c6bd30
    ctx->pc = 0x279fe8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950192));
    // 0x279fec: 0x2407fe00
    ctx->pc = 0x279fecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x279ff0: 0x402d
    ctx->pc = 0x279ff0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ff4: 0xc09e6e2
    ctx->pc = 0x279FF4u;
    SET_GPR_U32(ctx, 31, 0x279FFCu);
    ctx->pc = 0x279FF8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279FFCu; }
    }
    if (ctx->pc != 0x279FFCu) { return; }
    ctx->pc = 0x279FFCu;
    // 0x279ffc: 0x24040059
    ctx->pc = 0x279ffcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 89));
    // 0x27a000: 0x8e45006c
    ctx->pc = 0x27a000u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x27a004: 0x3c06003b
    ctx->pc = 0x27a004u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x27a008: 0x24c6bd40
    ctx->pc = 0x27a008u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950208));
    // 0x27a00c: 0x2407fe00
    ctx->pc = 0x27a00cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x27a010: 0x402d
    ctx->pc = 0x27a010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a014: 0xc09e6e2
    ctx->pc = 0x27A014u;
    SET_GPR_U32(ctx, 31, 0x27A01Cu);
    ctx->pc = 0x27A018u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A01Cu; }
    }
    if (ctx->pc != 0x27A01Cu) { return; }
    ctx->pc = 0x27A01Cu;
    // 0x27a01c: 0x2402001e
    ctx->pc = 0x27a01cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
label_27a020:
    // 0x27a020: 0x16620012
    ctx->pc = 0x27A020u;
    {
        const bool branch_taken_0x27a020 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x27A024u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x27a020) {
            ctx->pc = 0x27A06Cu;
            goto label_27a06c;
        }
    }
    ctx->pc = 0x27A028u;
    // 0x27a028: 0x2404005f
    ctx->pc = 0x27a028u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 95));
    // 0x27a02c: 0x8e450078
    ctx->pc = 0x27a02cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x27a030: 0x3c06003b
    ctx->pc = 0x27a030u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x27a034: 0x24c6bd50
    ctx->pc = 0x27a034u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950224));
    // 0x27a038: 0x2407fe00
    ctx->pc = 0x27a038u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x27a03c: 0x402d
    ctx->pc = 0x27a03cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a040: 0xc09e6e2
    ctx->pc = 0x27A040u;
    SET_GPR_U32(ctx, 31, 0x27A048u);
    ctx->pc = 0x27A044u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A048u; }
    }
    if (ctx->pc != 0x27A048u) { return; }
    ctx->pc = 0x27A048u;
    // 0x27a048: 0x24040060
    ctx->pc = 0x27a048u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x27a04c: 0x8e450078
    ctx->pc = 0x27a04cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x27a050: 0x3c06003b
    ctx->pc = 0x27a050u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x27a054: 0x24c6bd60
    ctx->pc = 0x27a054u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950240));
    // 0x27a058: 0x2407fe00
    ctx->pc = 0x27a058u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x27a05c: 0x402d
    ctx->pc = 0x27a05cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a060: 0xc09e6e2
    ctx->pc = 0x27A060u;
    SET_GPR_U32(ctx, 31, 0x27A068u);
    ctx->pc = 0x27A064u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A068u; }
    }
    if (ctx->pc != 0x27A068u) { return; }
    ctx->pc = 0x27A068u;
    // 0x27a068: 0x138080
    ctx->pc = 0x27a068u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 19), 2));
label_27a06c:
    // 0x27a06c: 0x2128821
    ctx->pc = 0x27a06cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x27a070: 0x8e240000
    ctx->pc = 0x27a070u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27a074: 0x3c05003b
    ctx->pc = 0x27a074u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x27a078: 0x24a5bd70
    ctx->pc = 0x27a078u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950256));
    // 0x27a07c: 0x302d
    ctx->pc = 0x27a07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a080: 0x382d
    ctx->pc = 0x27a080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a084: 0xc09e640
    ctx->pc = 0x27A084u;
    SET_GPR_U32(ctx, 31, 0x27A08Cu);
    ctx->pc = 0x27A088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279900u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCustomEffectSub_0x279900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A08Cu; }
    }
    if (ctx->pc != 0x27A08Cu) { return; }
    ctx->pc = 0x27A08Cu;
    // 0x27a08c: 0x21e1821
    ctx->pc = 0x27a08cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x27a090: 0xac620000
    ctx->pc = 0x27a090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x27a094: 0x8e240000
    ctx->pc = 0x27a094u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27a098: 0x3c05003b
    ctx->pc = 0x27a098u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x27a09c: 0x24a5bd78
    ctx->pc = 0x27a09cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950264));
    // 0x27a0a0: 0x302d
    ctx->pc = 0x27a0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a0a4: 0x382d
    ctx->pc = 0x27a0a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a0a8: 0xc09e640
    ctx->pc = 0x27A0A8u;
    SET_GPR_U32(ctx, 31, 0x27A0B0u);
    ctx->pc = 0x27A0ACu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279900u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCustomEffectSub_0x279900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A0B0u; }
    }
    if (ctx->pc != 0x27A0B0u) { return; }
    ctx->pc = 0x27A0B0u;
    // 0x27a0b0: 0x2178021
    ctx->pc = 0x27a0b0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x27a0b4: 0x10000007
    ctx->pc = 0x27A0B4u;
    {
        const bool branch_taken_0x27a0b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A0B8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x27a0b4) {
            ctx->pc = 0x27A0D4u;
            goto label_27a0d4;
        }
    }
    ctx->pc = 0x27A0BCu;
label_27a0bc:
    // 0x27a0bc: 0x131080
    ctx->pc = 0x27a0bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x27a0c0: 0x5e1821
    ctx->pc = 0x27a0c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x27a0c4: 0x2404ffff
    ctx->pc = 0x27a0c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a0c8: 0xac640000
    ctx->pc = 0x27a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x27a0cc: 0x571021
    ctx->pc = 0x27a0ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x27a0d0: 0xac440000
    ctx->pc = 0x27a0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_27a0d4:
    // 0x27a0d4: 0x26730001
    ctx->pc = 0x27a0d4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x27a0d8: 0x2a62002d
    ctx->pc = 0x27a0d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 45));
    // 0x27a0dc: 0x1440ff52
    ctx->pc = 0x27A0DCu;
    {
        const bool branch_taken_0x27a0dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27A0E0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x27a0dc) {
            ctx->pc = 0x279E28u;
            goto label_279e28;
        }
    }
    ctx->pc = 0x27A0E4u;
    // 0x27a0e4: 0x3c020034
    ctx->pc = 0x27a0e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27a0e8: 0x8c42e7f0
    ctx->pc = 0x27a0e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x27a0ec: 0x2442fffb
    ctx->pc = 0x27a0ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x27a0f0: 0x2c420002
    ctx->pc = 0x27a0f0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x27a0f4: 0x10400013
    ctx->pc = 0x27A0F4u;
    {
        const bool branch_taken_0x27a0f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A0F8u;
        SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
        if (branch_taken_0x27a0f4) {
            ctx->pc = 0x27A144u;
            goto label_27a144;
        }
    }
    ctx->pc = 0x27A0FCu;
    // 0x27a0fc: 0x8e04cda0
    ctx->pc = 0x27a0fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954400)));
    // 0x27a100: 0x3c05003b
    ctx->pc = 0x27a100u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x27a104: 0x24a5bd70
    ctx->pc = 0x27a104u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950256));
    // 0x27a108: 0x302d
    ctx->pc = 0x27a108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a10c: 0x382d
    ctx->pc = 0x27a10cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a110: 0xc09e640
    ctx->pc = 0x27A110u;
    SET_GPR_U32(ctx, 31, 0x27A118u);
    ctx->pc = 0x27A114u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279900u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCustomEffectSub_0x279900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A118u; }
    }
    if (ctx->pc != 0x27A118u) { return; }
    ctx->pc = 0x27A118u;
    // 0x27a118: 0x3c030034
    ctx->pc = 0x27a118u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27a11c: 0xac625530
    ctx->pc = 0x27a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21808), GPR_U32(ctx, 2));
    // 0x27a120: 0x8e04cda0
    ctx->pc = 0x27a120u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954400)));
    // 0x27a124: 0x3c05003b
    ctx->pc = 0x27a124u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x27a128: 0x24a5bd78
    ctx->pc = 0x27a128u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950264));
    // 0x27a12c: 0x302d
    ctx->pc = 0x27a12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a130: 0x382d
    ctx->pc = 0x27a130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a134: 0xc09e640
    ctx->pc = 0x27A134u;
    SET_GPR_U32(ctx, 31, 0x27A13Cu);
    ctx->pc = 0x27A138u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279900u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCustomEffectSub_0x279900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A13Cu; }
    }
    if (ctx->pc != 0x27A13Cu) { return; }
    ctx->pc = 0x27A13Cu;
    // 0x27a13c: 0x3c030034
    ctx->pc = 0x27a13cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27a140: 0xac6255e8
    ctx->pc = 0x27a140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21992), GPR_U32(ctx, 2));
label_27a144:
    // 0x27a144: 0x3c020036
    ctx->pc = 0x27a144u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x27a148: 0x8c42d934
    ctx->pc = 0x27a148u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x27a14c: 0x4400021
    ctx->pc = 0x27A14Cu;
    {
        const bool branch_taken_0x27a14c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27A150u;
        SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
        if (branch_taken_0x27a14c) {
            ctx->pc = 0x27A1D4u;
            goto label_27a1d4;
        }
    }
    ctx->pc = 0x27A154u;
    // 0x27a154: 0x2404005a
    ctx->pc = 0x27a154u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 90));
    // 0x27a158: 0x8e05cda4
    ctx->pc = 0x27a158u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294954404)));
    // 0x27a15c: 0x3c06003b
    ctx->pc = 0x27a15cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x27a160: 0x24c6bd80
    ctx->pc = 0x27a160u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950272));
    // 0x27a164: 0x382d
    ctx->pc = 0x27a164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a168: 0x402d
    ctx->pc = 0x27a168u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a16c: 0xc09e6e2
    ctx->pc = 0x27A16Cu;
    SET_GPR_U32(ctx, 31, 0x27A174u);
    ctx->pc = 0x27A170u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A174u; }
    }
    if (ctx->pc != 0x27A174u) { return; }
    ctx->pc = 0x27A174u;
    // 0x27a174: 0x2404005b
    ctx->pc = 0x27a174u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 91));
    // 0x27a178: 0x8e05cda4
    ctx->pc = 0x27a178u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294954404)));
    // 0x27a17c: 0x3c06003b
    ctx->pc = 0x27a17cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x27a180: 0x24c6bd90
    ctx->pc = 0x27a180u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950288));
    // 0x27a184: 0x382d
    ctx->pc = 0x27a184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a188: 0x402d
    ctx->pc = 0x27a188u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a18c: 0xc09e6e2
    ctx->pc = 0x27A18Cu;
    SET_GPR_U32(ctx, 31, 0x27A194u);
    ctx->pc = 0x27A190u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A194u; }
    }
    if (ctx->pc != 0x27A194u) { return; }
    ctx->pc = 0x27A194u;
    // 0x27a194: 0x2404005d
    ctx->pc = 0x27a194u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 93));
    // 0x27a198: 0x8e05cda4
    ctx->pc = 0x27a198u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294954404)));
    // 0x27a19c: 0x3c06003b
    ctx->pc = 0x27a19cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x27a1a0: 0x24c6bda0
    ctx->pc = 0x27a1a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950304));
    // 0x27a1a4: 0x382d
    ctx->pc = 0x27a1a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a1a8: 0x402d
    ctx->pc = 0x27a1a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a1ac: 0xc09e6e2
    ctx->pc = 0x27A1ACu;
    SET_GPR_U32(ctx, 31, 0x27A1B4u);
    ctx->pc = 0x27A1B0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A1B4u; }
    }
    if (ctx->pc != 0x27A1B4u) { return; }
    ctx->pc = 0x27A1B4u;
    // 0x27a1b4: 0x2404005c
    ctx->pc = 0x27a1b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 92));
    // 0x27a1b8: 0x8e05cda4
    ctx->pc = 0x27a1b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294954404)));
    // 0x27a1bc: 0x3c06003b
    ctx->pc = 0x27a1bcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x27a1c0: 0x24c6bdb0
    ctx->pc = 0x27a1c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950320));
    // 0x27a1c4: 0x382d
    ctx->pc = 0x27a1c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a1c8: 0x402d
    ctx->pc = 0x27a1c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a1cc: 0xc09e6e2
    ctx->pc = 0x27A1CCu;
    SET_GPR_U32(ctx, 31, 0x27A1D4u);
    ctx->pc = 0x27A1D0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A1D4u; }
    }
    if (ctx->pc != 0x27A1D4u) { return; }
    ctx->pc = 0x27A1D4u;
label_27a1d4:
    // 0x27a1d4: 0x3c020034
    ctx->pc = 0x27a1d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27a1d8: 0x24434ab8
    ctx->pc = 0x27a1d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 19128));
    // 0x27a1dc: 0x8c6203d8
    ctx->pc = 0x27a1dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 984)));
    // 0x27a1e0: 0x14400008
    ctx->pc = 0x27A1E0u;
    {
        const bool branch_taken_0x27a1e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27A1E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x27a1e0) {
            ctx->pc = 0x27A204u;
            goto label_27a204;
        }
    }
    ctx->pc = 0x27A1E8u;
    // 0x27a1e8: 0x686203d3
    ctx->pc = 0x27a1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 979); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x27a1ec: 0x6c6203cc
    ctx->pc = 0x27a1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 972); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x27a1f0: 0x8c6403d4
    ctx->pc = 0x27a1f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 980)));
    // 0x27a1f4: 0xb06203df
    ctx->pc = 0x27a1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 991); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27a1f8: 0xb46203d8
    ctx->pc = 0x27a1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 984); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27a1fc: 0xac6403e0
    ctx->pc = 0x27a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 992), GPR_U32(ctx, 4));
    // 0x27a200: 0x3c020034
    ctx->pc = 0x27a200u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_27a204:
    // 0x27a204: 0x24434ab8
    ctx->pc = 0x27a204u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 19128));
    // 0x27a208: 0x8c6203e4
    ctx->pc = 0x27a208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 996)));
    // 0x27a20c: 0x54400008
    ctx->pc = 0x27A20Cu;
    {
        const bool branch_taken_0x27a20c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27a20c) {
            ctx->pc = 0x27A210u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x27A230u;
            goto label_27a230;
        }
    }
    ctx->pc = 0x27A214u;
    // 0x27a214: 0x686203d3
    ctx->pc = 0x27a214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 979); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x27a218: 0x6c6203cc
    ctx->pc = 0x27a218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 972); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x27a21c: 0x8c6403d4
    ctx->pc = 0x27a21cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 980)));
    // 0x27a220: 0xb06203eb
    ctx->pc = 0x27a220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 1003); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27a224: 0xb46203e4
    ctx->pc = 0x27a224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 996); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27a228: 0xac6403ec
    ctx->pc = 0x27a228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1004), GPR_U32(ctx, 4));
    // 0x27a22c: 0x3c04003b
    ctx->pc = 0x27a22cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_27a230:
    // 0x27a230: 0xc0989bc
    ctx->pc = 0x27A230u;
    SET_GPR_U32(ctx, 31, 0x27A238u);
    ctx->pc = 0x27A234u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950336));
    ctx->pc = 0x2626F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InLevel_0x2626f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A238u; }
    }
    if (ctx->pc != 0x27A238u) { return; }
    ctx->pc = 0x27A238u;
    // 0x27a238: 0x14400006
    ctx->pc = 0x27A238u;
    {
        const bool branch_taken_0x27a238 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27A23Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x27a238) {
            ctx->pc = 0x27A254u;
            goto label_27a254;
        }
    }
    ctx->pc = 0x27A240u;
    // 0x27a240: 0x3c04003b
    ctx->pc = 0x27a240u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x27a244: 0xc0989bc
    ctx->pc = 0x27A244u;
    SET_GPR_U32(ctx, 31, 0x27A24Cu);
    ctx->pc = 0x27A248u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950344));
    ctx->pc = 0x2626F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InLevel_0x2626f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A24Cu; }
    }
    if (ctx->pc != 0x27A24Cu) { return; }
    ctx->pc = 0x27A24Cu;
    // 0x27a24c: 0x10400009
    ctx->pc = 0x27A24Cu;
    {
        const bool branch_taken_0x27a24c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A250u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x27a24c) {
            ctx->pc = 0x27A274u;
            goto label_27a274;
        }
    }
    ctx->pc = 0x27A254u;
label_27a254:
    // 0x27a254: 0x2404001e
    ctx->pc = 0x27a254u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
    // 0x27a258: 0x8c45cda4
    ctx->pc = 0x27a258u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954404)));
    // 0x27a25c: 0x3c06003b
    ctx->pc = 0x27a25cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x27a260: 0x24c6bdd0
    ctx->pc = 0x27a260u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950352));
    // 0x27a264: 0x382d
    ctx->pc = 0x27a264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a268: 0x402d
    ctx->pc = 0x27a268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a26c: 0xc09e6e2
    ctx->pc = 0x27A26Cu;
    SET_GPR_U32(ctx, 31, 0x27A274u);
    ctx->pc = 0x27A270u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A274u; }
    }
    if (ctx->pc != 0x27A274u) { return; }
    ctx->pc = 0x27A274u;
label_27a274:
    // 0x27a274: 0x3c020034
    ctx->pc = 0x27a274u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27a278: 0x2404005e
    ctx->pc = 0x27a278u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
    // 0x27a27c: 0x8c45cda0
    ctx->pc = 0x27a27cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954400)));
    // 0x27a280: 0x3c10003b
    ctx->pc = 0x27a280u;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
    // 0x27a284: 0x2606bde0
    ctx->pc = 0x27a284u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4294950368));
    // 0x27a288: 0x2407fe00
    ctx->pc = 0x27a288u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x27a28c: 0x402d
    ctx->pc = 0x27a28cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a290: 0xc09e6e2
    ctx->pc = 0x27A290u;
    SET_GPR_U32(ctx, 31, 0x27A298u);
    ctx->pc = 0x27A294u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A298u; }
    }
    if (ctx->pc != 0x27A298u) { return; }
    ctx->pc = 0x27A298u;
    // 0x27a298: 0x1440000a
    ctx->pc = 0x27A298u;
    {
        const bool branch_taken_0x27a298 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27A29Cu;
        SET_GPR_U32(ctx, 17, ((uint32_t)51 << 16));
        if (branch_taken_0x27a298) {
            ctx->pc = 0x27A2C4u;
            goto label_27a2c4;
        }
    }
    ctx->pc = 0x27A2A0u;
    // 0x27a2a0: 0x3c020034
    ctx->pc = 0x27a2a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27a2a4: 0x2404005e
    ctx->pc = 0x27a2a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
    // 0x27a2a8: 0x8c45cda4
    ctx->pc = 0x27a2a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954404)));
    // 0x27a2ac: 0x2606bde0
    ctx->pc = 0x27a2acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4294950368));
    // 0x27a2b0: 0x2407fe00
    ctx->pc = 0x27a2b0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x27a2b4: 0x402d
    ctx->pc = 0x27a2b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a2b8: 0xc09e6e2
    ctx->pc = 0x27A2B8u;
    SET_GPR_U32(ctx, 31, 0x27A2C0u);
    ctx->pc = 0x27A2BCu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEffect_0x279b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A2C0u; }
    }
    if (ctx->pc != 0x27A2C0u) { return; }
    ctx->pc = 0x27A2C0u;
    // 0x27a2c0: 0x3c110033
    ctx->pc = 0x27a2c0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)51 << 16));
label_27a2c4:
    // 0x27a2c4: 0x3c04003b
    ctx->pc = 0x27a2c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x27a2c8: 0x2484bdf0
    ctx->pc = 0x27a2c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950384));
    // 0x27a2cc: 0x282d
    ctx->pc = 0x27a2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a2d0: 0x8e264974
    ctx->pc = 0x27a2d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 18804)));
    // 0x27a2d4: 0xc0382d
    ctx->pc = 0x27a2d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a2d8: 0xc0b1b56
    ctx->pc = 0x27A2D8u;
    SET_GPR_U32(ctx, 31, 0x27A2E0u);
    ctx->pc = 0x27A2DCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Sub_0x2c6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A2E0u; }
    }
    if (ctx->pc != 0x27A2E0u) { return; }
    ctx->pc = 0x27A2E0u;
    // 0x27a2e0: 0x3c030034
    ctx->pc = 0x27a2e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27a2e4: 0xac6254f0
    ctx->pc = 0x27a2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21744), GPR_U32(ctx, 2));
    // 0x27a2e8: 0x3c100033
    ctx->pc = 0x27a2e8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
    // 0x27a2ec: 0x3c04003b
    ctx->pc = 0x27a2ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x27a2f0: 0x2484be00
    ctx->pc = 0x27a2f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x27a2f4: 0x282d
    ctx->pc = 0x27a2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a2f8: 0x8e064970
    ctx->pc = 0x27a2f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 18800)));
    // 0x27a2fc: 0xc0382d
    ctx->pc = 0x27a2fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a300: 0xc0b1b56
    ctx->pc = 0x27A300u;
    SET_GPR_U32(ctx, 31, 0x27A308u);
    ctx->pc = 0x27A304u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Sub_0x2c6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A308u; }
    }
    if (ctx->pc != 0x27A308u) { return; }
    ctx->pc = 0x27A308u;
    // 0x27a308: 0x3c030034
    ctx->pc = 0x27a308u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27a30c: 0xac6254f4
    ctx->pc = 0x27a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21748), GPR_U32(ctx, 2));
    // 0x27a310: 0x3c04003b
    ctx->pc = 0x27a310u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x27a314: 0x2484be10
    ctx->pc = 0x27a314u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950416));
    // 0x27a318: 0x282d
    ctx->pc = 0x27a318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a31c: 0x8e064970
    ctx->pc = 0x27a31cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 18800)));
    // 0x27a320: 0xc0382d
    ctx->pc = 0x27a320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a324: 0xc0b1b56
    ctx->pc = 0x27A324u;
    SET_GPR_U32(ctx, 31, 0x27A32Cu);
    ctx->pc = 0x27A328u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Sub_0x2c6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A32Cu; }
    }
    if (ctx->pc != 0x27A32Cu) { return; }
    ctx->pc = 0x27A32Cu;
    // 0x27a32c: 0x3c030034
    ctx->pc = 0x27a32cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27a330: 0xac6254f8
    ctx->pc = 0x27a330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21752), GPR_U32(ctx, 2));
    // 0x27a334: 0x3c100034
    ctx->pc = 0x27a334u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x27a338: 0x8e04cda8
    ctx->pc = 0x27a338u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954408)));
    // 0x27a33c: 0x3c05003b
    ctx->pc = 0x27a33cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x27a340: 0x24a5be20
    ctx->pc = 0x27a340u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950432));
    // 0x27a344: 0xc084c62
    ctx->pc = 0x27A344u;
    SET_GPR_U32(ctx, 31, 0x27A34Cu);
    ctx->pc = 0x27A348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213188u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindTexMod_0x213188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A34Cu; }
    }
    if (ctx->pc != 0x27A34Cu) { return; }
    ctx->pc = 0x27A34Cu;
    // 0x27a34c: 0x3c030034
    ctx->pc = 0x27a34cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27a350: 0xac625514
    ctx->pc = 0x27a350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21780), GPR_U32(ctx, 2));
    // 0x27a354: 0x3c04003b
    ctx->pc = 0x27a354u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x27a358: 0x2484be30
    ctx->pc = 0x27a358u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950448));
    // 0x27a35c: 0x282d
    ctx->pc = 0x27a35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a360: 0x8e264974
    ctx->pc = 0x27a360u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 18804)));
    // 0x27a364: 0xc0382d
    ctx->pc = 0x27a364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a368: 0xc0b1b56
    ctx->pc = 0x27A368u;
    SET_GPR_U32(ctx, 31, 0x27A370u);
    ctx->pc = 0x27A36Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Sub_0x2c6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A370u; }
    }
    if (ctx->pc != 0x27A370u) { return; }
    ctx->pc = 0x27A370u;
    // 0x27a370: 0x3c030034
    ctx->pc = 0x27a370u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27a374: 0xac625518
    ctx->pc = 0x27a374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21784), GPR_U32(ctx, 2));
    // 0x27a378: 0x3c020032
    ctx->pc = 0x27a378u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x27a37c: 0x8c420818
    ctx->pc = 0x27a37cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2072)));
    // 0x27a380: 0x10400004
    ctx->pc = 0x27A380u;
    {
        const bool branch_taken_0x27a380 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A384u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954408)));
        if (branch_taken_0x27a380) {
            ctx->pc = 0x27A394u;
            goto label_27a394;
        }
    }
    ctx->pc = 0x27A388u;
    // 0x27a388: 0x3c05003b
    ctx->pc = 0x27a388u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x27a38c: 0x10000005
    ctx->pc = 0x27A38Cu;
    {
        const bool branch_taken_0x27a38c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A390u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950456));
        if (branch_taken_0x27a38c) {
            ctx->pc = 0x27A3A4u;
            goto label_27a3a4;
        }
    }
    ctx->pc = 0x27A394u;
label_27a394:
    // 0x27a394: 0x3c020034
    ctx->pc = 0x27a394u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27a398: 0x8c44cda8
    ctx->pc = 0x27a398u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954408)));
    // 0x27a39c: 0x3c05003b
    ctx->pc = 0x27a39cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x27a3a0: 0x24a5be48
    ctx->pc = 0x27a3a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950472));
label_27a3a4:
    // 0x27a3a4: 0xc084c62
    ctx->pc = 0x27A3A4u;
    SET_GPR_U32(ctx, 31, 0x27A3ACu);
    ctx->pc = 0x27A3A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213188u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindTexMod_0x213188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A3ACu; }
    }
    if (ctx->pc != 0x27A3ACu) { return; }
    ctx->pc = 0x27A3ACu;
    // 0x27a3ac: 0x3c030034
    ctx->pc = 0x27a3acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27a3b0: 0xac625500
    ctx->pc = 0x27a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21760), GPR_U32(ctx, 2));
    // 0x27a3b4: 0x3c110034
    ctx->pc = 0x27a3b4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
    // 0x27a3b8: 0x8e24cda8
    ctx->pc = 0x27a3b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294954408)));
    // 0x27a3bc: 0x3c05003b
    ctx->pc = 0x27a3bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x27a3c0: 0x24a5be58
    ctx->pc = 0x27a3c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950488));
    // 0x27a3c4: 0xc084c62
    ctx->pc = 0x27A3C4u;
    SET_GPR_U32(ctx, 31, 0x27A3CCu);
    ctx->pc = 0x27A3C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213188u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindTexMod_0x213188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A3CCu; }
    }
    if (ctx->pc != 0x27A3CCu) { return; }
    ctx->pc = 0x27A3CCu;
    // 0x27a3cc: 0x3c100034
    ctx->pc = 0x27a3ccu;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x27a3d0: 0x26105500
    ctx->pc = 0x27a3d0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 21760));
    // 0x27a3d4: 0xae020004
    ctx->pc = 0x27a3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x27a3d8: 0x8e24cda8
    ctx->pc = 0x27a3d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294954408)));
    // 0x27a3dc: 0x3c05003b
    ctx->pc = 0x27a3dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x27a3e0: 0x24a5be68
    ctx->pc = 0x27a3e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950504));
    // 0x27a3e4: 0xc084c62
    ctx->pc = 0x27A3E4u;
    SET_GPR_U32(ctx, 31, 0x27A3ECu);
    ctx->pc = 0x27A3E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213188u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindTexMod_0x213188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A3ECu; }
    }
    if (ctx->pc != 0x27A3ECu) { return; }
    ctx->pc = 0x27A3ECu;
    // 0x27a3ec: 0xae020008
    ctx->pc = 0x27a3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x27a3f0: 0x8e24cda8
    ctx->pc = 0x27a3f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294954408)));
    // 0x27a3f4: 0x3c05003b
    ctx->pc = 0x27a3f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x27a3f8: 0x24a5be20
    ctx->pc = 0x27a3f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950432));
    // 0x27a3fc: 0xc084c62
    ctx->pc = 0x27A3FCu;
    SET_GPR_U32(ctx, 31, 0x27A404u);
    ctx->pc = 0x27A400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213188u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindTexMod_0x213188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A404u; }
    }
    if (ctx->pc != 0x27A404u) { return; }
    ctx->pc = 0x27A404u;
    // 0x27a404: 0xae02000c
    ctx->pc = 0x27a404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x27a408: 0x8e24cda8
    ctx->pc = 0x27a408u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294954408)));
    // 0x27a40c: 0x3c05003b
    ctx->pc = 0x27a40cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x27a410: 0x24a5be78
    ctx->pc = 0x27a410u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950520));
    // 0x27a414: 0xc084c62
    ctx->pc = 0x27A414u;
    SET_GPR_U32(ctx, 31, 0x27A41Cu);
    ctx->pc = 0x27A418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213188u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindTexMod_0x213188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A41Cu; }
    }
    if (ctx->pc != 0x27A41Cu) { return; }
    ctx->pc = 0x27A41Cu;
    // 0x27a41c: 0xae020010
    ctx->pc = 0x27a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x27a420: 0x3c020033
    ctx->pc = 0x27a420u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x27a424: 0x8c443c7c
    ctx->pc = 0x27a424u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15484)));
    // 0x27a428: 0x10800007
    ctx->pc = 0x27A428u;
    {
        const bool branch_taken_0x27a428 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A42Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x27a428) {
            ctx->pc = 0x27A448u;
            goto label_27a448;
        }
    }
    ctx->pc = 0x27A430u;
    // 0x27a430: 0x24a5be88
    ctx->pc = 0x27a430u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950536));
    // 0x27a434: 0xc084c62
    ctx->pc = 0x27A434u;
    SET_GPR_U32(ctx, 31, 0x27A43Cu);
    ctx->pc = 0x27A438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213188u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindTexMod_0x213188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A43Cu; }
    }
    if (ctx->pc != 0x27A43Cu) { return; }
    ctx->pc = 0x27A43Cu;
    // 0x27a43c: 0x3c030034
    ctx->pc = 0x27a43cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27a440: 0x10000003
    ctx->pc = 0x27A440u;
    {
        const bool branch_taken_0x27a440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A444u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 21788), GPR_U32(ctx, 2));
        if (branch_taken_0x27a440) {
            ctx->pc = 0x27A450u;
            goto label_27a450;
        }
    }
    ctx->pc = 0x27A448u;
label_27a448:
    // 0x27a448: 0x3c020034
    ctx->pc = 0x27a448u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27a44c: 0xac40551c
    ctx->pc = 0x27a44cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21788), GPR_U32(ctx, 0));
label_27a450:
    // 0x27a450: 0x3c020033
    ctx->pc = 0x27a450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x27a454: 0x8c443c34
    ctx->pc = 0x27a454u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15412)));
    // 0x27a458: 0x10800006
    ctx->pc = 0x27A458u;
    {
        const bool branch_taken_0x27a458 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A45Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x27a458) {
            ctx->pc = 0x27A474u;
            goto label_27a474;
        }
    }
    ctx->pc = 0x27A460u;
    // 0x27a460: 0x24a5be98
    ctx->pc = 0x27a460u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950552));
    // 0x27a464: 0xc084c62
    ctx->pc = 0x27A464u;
    SET_GPR_U32(ctx, 31, 0x27A46Cu);
    ctx->pc = 0x27A468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213188u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindTexMod_0x213188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A46Cu; }
    }
    if (ctx->pc != 0x27A46Cu) { return; }
    ctx->pc = 0x27A46Cu;
    // 0x27a46c: 0x1000000b
    ctx->pc = 0x27A46Cu;
    {
        const bool branch_taken_0x27a46c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A470u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x27a46c) {
            ctx->pc = 0x27A49Cu;
            goto label_27a49c;
        }
    }
    ctx->pc = 0x27A474u;
label_27a474:
    // 0x27a474: 0x3c020033
    ctx->pc = 0x27a474u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x27a478: 0x8c443c1c
    ctx->pc = 0x27a478u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15388)));
    // 0x27a47c: 0x10800005
    ctx->pc = 0x27A47Cu;
    {
        const bool branch_taken_0x27a47c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A480u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950552));
        if (branch_taken_0x27a47c) {
            ctx->pc = 0x27A494u;
            goto label_27a494;
        }
    }
    ctx->pc = 0x27A484u;
    // 0x27a484: 0xc084c62
    ctx->pc = 0x27A484u;
    SET_GPR_U32(ctx, 31, 0x27A48Cu);
    ctx->pc = 0x27A488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213188u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindTexMod_0x213188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A48Cu; }
    }
    if (ctx->pc != 0x27A48Cu) { return; }
    ctx->pc = 0x27A48Cu;
    // 0x27a48c: 0x10000003
    ctx->pc = 0x27A48Cu;
    {
        const bool branch_taken_0x27a48c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A490u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x27a48c) {
            ctx->pc = 0x27A49Cu;
            goto label_27a49c;
        }
    }
    ctx->pc = 0x27A494u;
label_27a494:
    // 0x27a494: 0x3c030034
    ctx->pc = 0x27a494u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27a498: 0x2402ffff
    ctx->pc = 0x27a498u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_27a49c:
    // 0x27a49c: 0xac625520
    ctx->pc = 0x27a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21792), GPR_U32(ctx, 2));
    // 0x27a4a0: 0xdfbf0190
    ctx->pc = 0x27a4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x27a4a4: 0xdfbe0180
    ctx->pc = 0x27a4a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x27a4a8: 0xdfb70170
    ctx->pc = 0x27a4a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x27a4ac: 0xdfb60160
    ctx->pc = 0x27a4acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x27a4b0: 0xdfb50150
    ctx->pc = 0x27a4b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x27a4b4: 0xdfb40140
    ctx->pc = 0x27a4b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x27a4b8: 0xdfb30130
    ctx->pc = 0x27a4b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x27a4bc: 0xdfb20120
    ctx->pc = 0x27a4bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27a4c0: 0xdfb10110
    ctx->pc = 0x27a4c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27a4c4: 0xdfb00100
    ctx->pc = 0x27a4c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27a4c8: 0x3e00008
    ctx->pc = 0x27A4C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A4CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279CB0u: goto label_279cb0;
            case 0x279D58u: goto label_279d58;
            case 0x279DACu: goto label_279dac;
            case 0x279DC8u: goto label_279dc8;
            case 0x279DF4u: goto label_279df4;
            case 0x279E28u: goto label_279e28;
            case 0x279E84u: goto label_279e84;
            case 0x279EC0u: goto label_279ec0;
            case 0x279EFCu: goto label_279efc;
            case 0x279F38u: goto label_279f38;
            case 0x279F48u: goto label_279f48;
            case 0x279F94u: goto label_279f94;
            case 0x27A020u: goto label_27a020;
            case 0x27A06Cu: goto label_27a06c;
            case 0x27A0BCu: goto label_27a0bc;
            case 0x27A0D4u: goto label_27a0d4;
            case 0x27A144u: goto label_27a144;
            case 0x27A1D4u: goto label_27a1d4;
            case 0x27A204u: goto label_27a204;
            case 0x27A230u: goto label_27a230;
            case 0x27A254u: goto label_27a254;
            case 0x27A274u: goto label_27a274;
            case 0x27A2C4u: goto label_27a2c4;
            case 0x27A394u: goto label_27a394;
            case 0x27A3A4u: goto label_27a3a4;
            case 0x27A448u: goto label_27a448;
            case 0x27A450u: goto label_27a450;
            case 0x27A474u: goto label_27a474;
            case 0x27A494u: goto label_27a494;
            case 0x27A49Cu: goto label_27a49c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A4D0u;
}
