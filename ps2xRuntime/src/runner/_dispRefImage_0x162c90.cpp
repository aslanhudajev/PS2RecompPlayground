#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _dispRefImage
// Address: 0x162c90 - 0x162da8
void _dispRefImage_0x162c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_dispRefImage");


    ctx->pc = 0x162c90u;

    // 0x162c90: 0x27bdffc0
    ctx->pc = 0x162c90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x162c94: 0xffb00000
    ctx->pc = 0x162c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162c98: 0x3c100023
    ctx->pc = 0x162c98u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x162c9c: 0xffb20020
    ctx->pc = 0x162c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x162ca0: 0x8e06a21c
    ctx->pc = 0x162ca0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294943260)));
    // 0x162ca4: 0x80902d
    ctx->pc = 0x162ca4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ca8: 0xffbf0030
    ctx->pc = 0x162ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x162cac: 0xffb10010
    ctx->pc = 0x162cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x162cb0: 0x24c70020
    ctx->pc = 0x162cb0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 32));
    // 0x162cb4: 0x8cd10040
    ctx->pc = 0x162cb4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x162cb8: 0x24c50010
    ctx->pc = 0x162cb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 16));
    // 0x162cbc: 0xc058abe
    ctx->pc = 0x162CBCu;
    SET_GPR_U32(ctx, 31, 0x162CC4u);
    ctx->pc = 0x162CC0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24));
    ctx->pc = 0x162AF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getPtsDtsFlags_0x162af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162CC4u; }
        else if (ctx->pc != 0x162CC4u) { ctx->pc = 0x162CC4u; }
    }
    if (ctx->pc != 0x162CC4u) { return; }
    ctx->pc = 0x162CC4u;
    // 0x162cc4: 0x8e06a21c
    ctx->pc = 0x162cc4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294943260)));
    // 0x162cc8: 0x3c050023
    ctx->pc = 0x162cc8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x162ccc: 0x24a5a1b8
    ctx->pc = 0x162cccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294943160));
    // 0x162cd0: 0x240202d
    ctx->pc = 0x162cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162cd4: 0xdcc20020
    ctx->pc = 0x162cd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x162cd8: 0x8cc30010
    ctx->pc = 0x162cd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x162cdc: 0x216f8
    ctx->pc = 0x162cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x162ce0: 0x2103f
    ctx->pc = 0x162ce0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x162ce4: 0xae230080
    ctx->pc = 0x162ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x162ce8: 0x3042000f
    ctx->pc = 0x162ce8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x162cec: 0x21080
    ctx->pc = 0x162cecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x162cf0: 0x8e43005c
    ctx->pc = 0x162cf0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x162cf4: 0x451021
    ctx->pc = 0x162cf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x162cf8: 0x9c450000
    ctx->pc = 0x162cf8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162cfc: 0xae2300cc
    ctx->pc = 0x162cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
    // 0x162d00: 0xfe250088
    ctx->pc = 0x162d00u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 5));
    // 0x162d04: 0x8e420060
    ctx->pc = 0x162d04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x162d08: 0xae2200d0
    ctx->pc = 0x162d08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x162d0c: 0x8e430044
    ctx->pc = 0x162d0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x162d10: 0xae2300b4
    ctx->pc = 0x162d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
    // 0x162d14: 0x8e420048
    ctx->pc = 0x162d14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x162d18: 0xae2200b8
    ctx->pc = 0x162d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
    // 0x162d1c: 0x8e43004c
    ctx->pc = 0x162d1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x162d20: 0xae2300bc
    ctx->pc = 0x162d20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
    // 0x162d24: 0x8e420050
    ctx->pc = 0x162d24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x162d28: 0xae2200c0
    ctx->pc = 0x162d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x162d2c: 0x8e430054
    ctx->pc = 0x162d2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x162d30: 0xae2300c4
    ctx->pc = 0x162d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
    // 0x162d34: 0x8e420058
    ctx->pc = 0x162d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x162d38: 0xc058a0c
    ctx->pc = 0x162D38u;
    SET_GPR_U32(ctx, 31, 0x162D40u);
    ctx->pc = 0x162D3Cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
    ctx->pc = 0x162830u;
    {
        const uint32_t __entryPc = ctx->pc;
        _isOutSizeOK_0x162830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D40u; }
        else if (ctx->pc != 0x162D40u) { ctx->pc = 0x162D40u; }
    }
    if (ctx->pc != 0x162D40u) { return; }
    ctx->pc = 0x162D40u;
    // 0x162d40: 0x10400013
    ctx->pc = 0x162D40u;
    {
        const bool branch_taken_0x162d40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x162D44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x162d40) {
            ctx->pc = 0x162D90u;
            goto label_162d90;
        }
    }
    ctx->pc = 0x162D48u;
    // 0x162d48: 0x8e430028
    ctx->pc = 0x162d48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x162d4c: 0x14620011
    ctx->pc = 0x162D4Cu;
    {
        const bool branch_taken_0x162d4c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x162D50u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x162d4c) {
            ctx->pc = 0x162D94u;
            goto label_162d94;
        }
    }
    ctx->pc = 0x162D54u;
    // 0x162d54: 0x8e2200b0
    ctx->pc = 0x162d54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x162d58: 0x10400005
    ctx->pc = 0x162D58u;
    {
        const bool branch_taken_0x162d58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x162d58) {
            ctx->pc = 0x162D70u;
            goto label_162d70;
        }
    }
    ctx->pc = 0x162D60u;
    // 0x162d60: 0xc058d0c
    ctx->pc = 0x162D60u;
    SET_GPR_U32(ctx, 31, 0x162D68u);
    ctx->pc = 0x162D64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163430u;
    {
        const uint32_t __entryPc = ctx->pc;
        _csc_storeRefImage_0x163430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D68u; }
        else if (ctx->pc != 0x162D68u) { ctx->pc = 0x162D68u; }
    }
    if (ctx->pc != 0x162D68u) { return; }
    ctx->pc = 0x162D68u;
    // 0x162d68: 0x10000004
    ctx->pc = 0x162D68u;
    {
        const bool branch_taken_0x162d68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162D6Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x162d68) {
            ctx->pc = 0x162D7Cu;
            goto label_162d7c;
        }
    }
    ctx->pc = 0x162D70u;
label_162d70:
    // 0x162d70: 0xc058a34
    ctx->pc = 0x162D70u;
    SET_GPR_U32(ctx, 31, 0x162D78u);
    ctx->pc = 0x162D74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1628D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _cpr8_0x1628d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D78u; }
        else if (ctx->pc != 0x162D78u) { ctx->pc = 0x162D78u; }
    }
    if (ctx->pc != 0x162D78u) { return; }
    ctx->pc = 0x162D78u;
    // 0x162d78: 0xdfbf0030
    ctx->pc = 0x162d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_162d7c:
    // 0x162d7c: 0xdfb20020
    ctx->pc = 0x162d7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162d80: 0xdfb10010
    ctx->pc = 0x162d80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162d84: 0xdfb00000
    ctx->pc = 0x162d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162d88: 0x8058ab0
    ctx->pc = 0x162D88u;
    ctx->pc = 0x162D8Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x162AC0u;
    _markOutput_0x162ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x162D90u;
label_162d90:
    // 0x162d90: 0xdfbf0030
    ctx->pc = 0x162d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_162d94:
    // 0x162d94: 0xdfb20020
    ctx->pc = 0x162d94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162d98: 0xdfb10010
    ctx->pc = 0x162d98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162d9c: 0xdfb00000
    ctx->pc = 0x162d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162da0: 0x3e00008
    ctx->pc = 0x162DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162DA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162D70u: goto label_162d70;
            case 0x162D7Cu: goto label_162d7c;
            case 0x162D90u: goto label_162d90;
            case 0x162D94u: goto label_162d94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162DA8u;
}
