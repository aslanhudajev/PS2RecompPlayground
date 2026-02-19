#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _d2b
// Address: 0x302d90 - 0x302f0c
void _d2b_0x302d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x302d90u;

    // 0x302d90: 0x27bdff80
    ctx->pc = 0x302d90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x302d94: 0xffb00010
    ctx->pc = 0x302d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x302d98: 0xa0802d
    ctx->pc = 0x302d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302d9c: 0xffb50060
    ctx->pc = 0x302d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x302da0: 0xffb40050
    ctx->pc = 0x302da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x302da4: 0xe0a82d
    ctx->pc = 0x302da4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302da8: 0xffb30040
    ctx->pc = 0x302da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x302dac: 0xc0a02d
    ctx->pc = 0x302dacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302db0: 0xffb20030
    ctx->pc = 0x302db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x302db4: 0xffb10020
    ctx->pc = 0x302db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x302db8: 0xffbf0070
    ctx->pc = 0x302db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x302dbc: 0xc0c0808
    ctx->pc = 0x302DBCu;
    SET_GPR_U32(ctx, 31, 0x302DC4u);
    ctx->pc = 0x302DC0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x302020u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x302020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302DC4u; }
    }
    if (ctx->pc != 0x302DC4u) { return; }
    ctx->pc = 0x302DC4u;
    // 0x302dc4: 0x40882d
    ctx->pc = 0x302dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302dc8: 0x10283f
    ctx->pc = 0x302dc8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x302dcc: 0x3c027fff
    ctx->pc = 0x302dccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x302dd0: 0x3c03000f
    ctx->pc = 0x302dd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15 << 16));
    // 0x302dd4: 0x3442ffff
    ctx->pc = 0x302dd4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x302dd8: 0x3c04ffff
    ctx->pc = 0x302dd8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x302ddc: 0x4203e
    ctx->pc = 0x302ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x302de0: 0xa21024
    ctx->pc = 0x302de0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x302de4: 0x2048024
    ctx->pc = 0x302de4u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x302de8: 0x2103c
    ctx->pc = 0x302de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x302dec: 0x3463ffff
    ctx->pc = 0x302decu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x302df0: 0x2028025
    ctx->pc = 0x302df0u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x302df4: 0xa32824
    ctx->pc = 0x302df4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x302df8: 0x26330014
    ctx->pc = 0x302df8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 20));
    // 0x302dfc: 0x10953e
    ctx->pc = 0x302dfcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x302e00: 0x12400004
    ctx->pc = 0x302E00u;
    {
        const bool branch_taken_0x302e00 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x302E04u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x302e00) {
            ctx->pc = 0x302E14u;
            goto label_302e14;
        }
    }
    ctx->pc = 0x302E08u;
    // 0x302e08: 0x3c020010
    ctx->pc = 0x302e08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x302e0c: 0xa21025
    ctx->pc = 0x302e0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x302e10: 0xafa20004
    ctx->pc = 0x302e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_302e14:
    // 0x302e14: 0x10103c
    ctx->pc = 0x302e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x302e18: 0x2103f
    ctx->pc = 0x302e18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x302e1c: 0x10400019
    ctx->pc = 0x302E1Cu;
    {
        const bool branch_taken_0x302e1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x302E20u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x302e1c) {
            ctx->pc = 0x302E84u;
            goto label_302e84;
        }
    }
    ctx->pc = 0x302E24u;
    // 0x302e24: 0xc0c08f8
    ctx->pc = 0x302E24u;
    SET_GPR_U32(ctx, 31, 0x302E2Cu);
    ctx->pc = 0x302E28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3023E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lo0bits_0x3023e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302E2Cu; }
    }
    if (ctx->pc != 0x302E2Cu) { return; }
    ctx->pc = 0x302E2Cu;
    // 0x302e2c: 0x40282d
    ctx->pc = 0x302e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302e30: 0x10a0000a
    ctx->pc = 0x302E30u;
    {
        const bool branch_taken_0x302e30 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x302E34u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x302e30) {
            ctx->pc = 0x302E5Cu;
            goto label_302e5c;
        }
    }
    ctx->pc = 0x302E38u;
    // 0x302e38: 0x52023
    ctx->pc = 0x302e38u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x302e3c: 0x8fa30000
    ctx->pc = 0x302e3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302e40: 0x821004
    ctx->pc = 0x302e40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x302e44: 0x621825
    ctx->pc = 0x302e44u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x302e48: 0xae230014
    ctx->pc = 0x302e48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x302e4c: 0x8fa20004
    ctx->pc = 0x302e4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x302e50: 0xa21006
    ctx->pc = 0x302e50u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x302e54: 0x10000003
    ctx->pc = 0x302E54u;
    {
        const bool branch_taken_0x302e54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x302E58u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x302e54) {
            ctx->pc = 0x302E64u;
            goto label_302e64;
        }
    }
    ctx->pc = 0x302E5Cu;
label_302e5c:
    // 0x302e5c: 0x8fa20000
    ctx->pc = 0x302e5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302e60: 0xae220014
    ctx->pc = 0x302e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_302e64:
    // 0x302e64: 0x8fa20004
    ctx->pc = 0x302e64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x302e68: 0x24030001
    ctx->pc = 0x302e68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x302e6c: 0x24040002
    ctx->pc = 0x302e6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x302e70: 0x82180b
    ctx->pc = 0x302e70u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x302e74: 0xae620004
    ctx->pc = 0x302e74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x302e78: 0x60802d
    ctx->pc = 0x302e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302e7c: 0x10000009
    ctx->pc = 0x302E7Cu;
    {
        const bool branch_taken_0x302e7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x302E80u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        if (branch_taken_0x302e7c) {
            ctx->pc = 0x302EA4u;
            goto label_302ea4;
        }
    }
    ctx->pc = 0x302E84u;
label_302e84:
    // 0x302e84: 0x37a40004
    ctx->pc = 0x302e84u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 29), 4));
    // 0x302e88: 0xc0c08f8
    ctx->pc = 0x302E88u;
    SET_GPR_U32(ctx, 31, 0x302E90u);
    ctx->pc = 0x302E8Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x3023E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lo0bits_0x3023e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302E90u; }
    }
    if (ctx->pc != 0x302E90u) { return; }
    ctx->pc = 0x302E90u;
    // 0x302e90: 0x8fa40004
    ctx->pc = 0x302e90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x302e94: 0x24030001
    ctx->pc = 0x302e94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x302e98: 0xae230010
    ctx->pc = 0x302e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x302e9c: 0x24450020
    ctx->pc = 0x302e9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 32));
    // 0x302ea0: 0xae240014
    ctx->pc = 0x302ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_302ea4:
    // 0x302ea4: 0x12400006
    ctx->pc = 0x302EA4u;
    {
        const bool branch_taken_0x302ea4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x302EA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294966221));
        if (branch_taken_0x302ea4) {
            ctx->pc = 0x302EC0u;
            goto label_302ec0;
        }
    }
    ctx->pc = 0x302EACu;
    // 0x302eac: 0x24030035
    ctx->pc = 0x302eacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 53));
    // 0x302eb0: 0x2421021
    ctx->pc = 0x302eb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x302eb4: 0x651823
    ctx->pc = 0x302eb4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x302eb8: 0x10000009
    ctx->pc = 0x302EB8u;
    {
        const bool branch_taken_0x302eb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x302EBCu;
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x302eb8) {
            ctx->pc = 0x302EE0u;
            goto label_302ee0;
        }
    }
    ctx->pc = 0x302EC0u;
label_302ec0:
    // 0x302ec0: 0x24a3fbce
    ctx->pc = 0x302ec0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x302ec4: 0x101080
    ctx->pc = 0x302ec4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x302ec8: 0xae830000
    ctx->pc = 0x302ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x302ecc: 0x531021
    ctx->pc = 0x302eccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x302ed0: 0xc0c08d6
    ctx->pc = 0x302ED0u;
    SET_GPR_U32(ctx, 31, 0x302ED8u);
    ctx->pc = 0x302ED4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->pc = 0x302358u;
    {
        const uint32_t __entryPc = ctx->pc;
        _hi0bits_0x302358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302ED8u; }
    }
    if (ctx->pc != 0x302ED8u) { return; }
    ctx->pc = 0x302ED8u;
    // 0x302ed8: 0x101940
    ctx->pc = 0x302ed8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 5));
    // 0x302edc: 0x621823
    ctx->pc = 0x302edcu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_302ee0:
    // 0x302ee0: 0xaea30000
    ctx->pc = 0x302ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x302ee4: 0x220102d
    ctx->pc = 0x302ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302ee8: 0xdfbf0070
    ctx->pc = 0x302ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x302eec: 0xdfb50060
    ctx->pc = 0x302eecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x302ef0: 0xdfb40050
    ctx->pc = 0x302ef0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x302ef4: 0xdfb30040
    ctx->pc = 0x302ef4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x302ef8: 0xdfb20030
    ctx->pc = 0x302ef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302efc: 0xdfb10020
    ctx->pc = 0x302efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302f00: 0xdfb00010
    ctx->pc = 0x302f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302f04: 0x3e00008
    ctx->pc = 0x302F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302F08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x302E14u: goto label_302e14;
            case 0x302E5Cu: goto label_302e5c;
            case 0x302E64u: goto label_302e64;
            case 0x302E84u: goto label_302e84;
            case 0x302EA4u: goto label_302ea4;
            case 0x302EC0u: goto label_302ec0;
            case 0x302EE0u: goto label_302ee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x302F0Cu;
}
