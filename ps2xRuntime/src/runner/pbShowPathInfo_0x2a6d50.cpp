#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbShowPathInfo
// Address: 0x2a6d50 - 0x2a77c4
void pbShowPathInfo_0x2a6d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a6d50u;

    // 0x2a6d50: 0x27bdffa0
    ctx->pc = 0x2a6d50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a6d54: 0xffbf0050
    ctx->pc = 0x2a6d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a6d58: 0xffbe0040
    ctx->pc = 0x2a6d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2a6d5c: 0xffb00030
    ctx->pc = 0x2a6d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2a6d60: 0x3a0f02d
    ctx->pc = 0x2a6d60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6d64: 0xafc40000
    ctx->pc = 0x2a6d64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a6d68: 0x3c100036
    ctx->pc = 0x2a6d68u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a6d6c: 0x8e10dee0
    ctx->pc = 0x2a6d6cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294958816)));
    // 0x2a6d70: 0x3c021001
    ctx->pc = 0x2a6d70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a6d74: 0x8c428000
    ctx->pc = 0x2a6d74u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294934528))); // MMIO: 0x10008000
    // 0x2a6d78: 0xafc20004
    ctx->pc = 0x2a6d78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a6d7c: 0x3c021001
    ctx->pc = 0x2a6d7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a6d80: 0x8c429000
    ctx->pc = 0x2a6d80u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294938624))); // MMIO: 0x10009000
    // 0x2a6d84: 0xafc20008
    ctx->pc = 0x2a6d84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x2a6d88: 0x3c021001
    ctx->pc = 0x2a6d88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a6d8c: 0x8c42a000
    ctx->pc = 0x2a6d8cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942720))); // MMIO: 0x1000a000
    // 0x2a6d90: 0xafc2000c
    ctx->pc = 0x2a6d90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x2a6d94: 0x3c021000
    ctx->pc = 0x2a6d94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2a6d98: 0x8c423800
    ctx->pc = 0x2a6d98u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 14336))); // MMIO: 0x10003800
    // 0x2a6d9c: 0xafc20010
    ctx->pc = 0x2a6d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x2a6da0: 0x3c021000
    ctx->pc = 0x2a6da0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2a6da4: 0x8c423c00
    ctx->pc = 0x2a6da4u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 15360))); // MMIO: 0x10003c00
    // 0x2a6da8: 0xafc20014
    ctx->pc = 0x2a6da8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x2a6dac: 0xc0ace26
    ctx->pc = 0x2A6DACu;
    SET_GPR_U32(ctx, 31, 0x2A6DB4u);
    ctx->pc = 0x2B3898u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVuStat_0x2b3898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6DB4u; }
    }
    if (ctx->pc != 0x2A6DB4u) { return; }
    ctx->pc = 0x2A6DB4u;
    // 0x2a6db4: 0xafc20018
    ctx->pc = 0x2a6db4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x2a6db8: 0xc0ace42
    ctx->pc = 0x2A6DB8u;
    SET_GPR_U32(ctx, 31, 0x2A6DC0u);
    ctx->pc = 0x2B3908u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVuFBRST_0x2b3908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6DC0u; }
    }
    if (ctx->pc != 0x2A6DC0u) { return; }
    ctx->pc = 0x2A6DC0u;
    // 0x2a6dc0: 0xafc2001c
    ctx->pc = 0x2a6dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x2a6dc4: 0x3c021000
    ctx->pc = 0x2a6dc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2a6dc8: 0x8c423020
    ctx->pc = 0x2a6dc8u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 12320))); // MMIO: 0x10003020
    // 0x2a6dcc: 0xafc20020
    ctx->pc = 0x2a6dccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x2a6dd0: 0x3c021200
    ctx->pc = 0x2a6dd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4608 << 16));
    // 0x2a6dd4: 0xdc421000
    ctx->pc = 0x2a6dd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4096)));
    // 0x2a6dd8: 0x2183c
    ctx->pc = 0x2a6dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a6ddc: 0x3183f
    ctx->pc = 0x2a6ddcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a6de0: 0xafc30024
    ctx->pc = 0x2a6de0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 3));
    // 0x2a6de4: 0x202d
    ctx->pc = 0x2a6de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6de8: 0x3c05003b
    ctx->pc = 0x2a6de8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2a6dec: 0x24a5ec10
    ctx->pc = 0x2a6decu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294962192));
    // 0x2a6df0: 0x8fc60000
    ctx->pc = 0x2a6df0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6df4: 0xc0a9aec
    ctx->pc = 0x2A6DF4u;
    SET_GPR_U32(ctx, 31, 0x2A6DFCu);
    ctx->pc = 0x2A6BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        showDmaInfo_0x2a6bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6DFCu; }
    }
    if (ctx->pc != 0x2A6DFCu) { return; }
    ctx->pc = 0x2A6DFCu;
    // 0x2a6dfc: 0x24040001
    ctx->pc = 0x2a6dfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6e00: 0x3c05003b
    ctx->pc = 0x2a6e00u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2a6e04: 0x24a5ec10
    ctx->pc = 0x2a6e04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294962192));
    // 0x2a6e08: 0x8fc60000
    ctx->pc = 0x2a6e08u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6e0c: 0xc0a9aec
    ctx->pc = 0x2A6E0Cu;
    SET_GPR_U32(ctx, 31, 0x2A6E14u);
    ctx->pc = 0x2A6BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        showDmaInfo_0x2a6bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E14u; }
    }
    if (ctx->pc != 0x2A6E14u) { return; }
    ctx->pc = 0x2A6E14u;
    // 0x2a6e14: 0x24040002
    ctx->pc = 0x2a6e14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6e18: 0x3c05003b
    ctx->pc = 0x2a6e18u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2a6e1c: 0x24a5ec10
    ctx->pc = 0x2a6e1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294962192));
    // 0x2a6e20: 0x8fc60000
    ctx->pc = 0x2a6e20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6e24: 0xc0a9aec
    ctx->pc = 0x2A6E24u;
    SET_GPR_U32(ctx, 31, 0x2A6E2Cu);
    ctx->pc = 0x2A6BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        showDmaInfo_0x2a6bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E2Cu; }
    }
    if (ctx->pc != 0x2A6E2Cu) { return; }
    ctx->pc = 0x2A6E2Cu;
    // 0x2a6e2c: 0x3c04003b
    ctx->pc = 0x2a6e2cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6e30: 0x2484ec18
    ctx->pc = 0x2a6e30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962200));
    // 0x2a6e34: 0x8fc50000
    ctx->pc = 0x2a6e34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6e38: 0xc0b4a34
    ctx->pc = 0x2A6E38u;
    SET_GPR_U32(ctx, 31, 0x2A6E40u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E40u; }
    }
    if (ctx->pc != 0x2A6E40u) { return; }
    ctx->pc = 0x2A6E40u;
    // 0x2a6e40: 0x8fc30018
    ctx->pc = 0x2a6e40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a6e44: 0x30620080
    ctx->pc = 0x2a6e44u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 128));
    // 0x2a6e48: 0x10400007
    ctx->pc = 0x2A6E48u;
    {
        const bool branch_taken_0x2a6e48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6e48) {
            ctx->pc = 0x2A6E68u;
            goto label_2a6e68;
        }
    }
    ctx->pc = 0x2A6E50u;
    // 0x2a6e50: 0x3c04003b
    ctx->pc = 0x2a6e50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6e54: 0x2484ec28
    ctx->pc = 0x2a6e54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962216));
    // 0x2a6e58: 0xc0b4a34
    ctx->pc = 0x2A6E58u;
    SET_GPR_U32(ctx, 31, 0x2A6E60u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E60u; }
    }
    if (ctx->pc != 0x2A6E60u) { return; }
    ctx->pc = 0x2A6E60u;
    // 0x2a6e60: 0x10000005
    ctx->pc = 0x2A6E60u;
    {
        const bool branch_taken_0x2a6e60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6e60) {
            ctx->pc = 0x2A6E78u;
            goto label_2a6e78;
        }
    }
    ctx->pc = 0x2A6E68u;
label_2a6e68:
    // 0x2a6e68: 0x3c04003b
    ctx->pc = 0x2a6e68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6e6c: 0x2484ebf8
    ctx->pc = 0x2a6e6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962168));
    // 0x2a6e70: 0xc0b4a34
    ctx->pc = 0x2A6E70u;
    SET_GPR_U32(ctx, 31, 0x2A6E78u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E78u; }
    }
    if (ctx->pc != 0x2A6E78u) { return; }
    ctx->pc = 0x2A6E78u;
label_2a6e78:
    // 0x2a6e78: 0x3c04003b
    ctx->pc = 0x2a6e78u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6e7c: 0x2484ec38
    ctx->pc = 0x2a6e7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962232));
    // 0x2a6e80: 0xc0b4a34
    ctx->pc = 0x2A6E80u;
    SET_GPR_U32(ctx, 31, 0x2A6E88u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E88u; }
    }
    if (ctx->pc != 0x2A6E88u) { return; }
    ctx->pc = 0x2A6E88u;
    // 0x2a6e88: 0x3c04003b
    ctx->pc = 0x2a6e88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6e8c: 0x2484ec40
    ctx->pc = 0x2a6e8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962240));
    // 0x2a6e90: 0x8fc50000
    ctx->pc = 0x2a6e90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6e94: 0xc0b4a34
    ctx->pc = 0x2A6E94u;
    SET_GPR_U32(ctx, 31, 0x2A6E9Cu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E9Cu; }
    }
    if (ctx->pc != 0x2A6E9Cu) { return; }
    ctx->pc = 0x2A6E9Cu;
    // 0x2a6e9c: 0xafc00028
    ctx->pc = 0x2a6e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
    // 0x2a6ea0: 0x8fc30018
    ctx->pc = 0x2a6ea0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a6ea4: 0x30620001
    ctx->pc = 0x2a6ea4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2a6ea8: 0x10400007
    ctx->pc = 0x2A6EA8u;
    {
        const bool branch_taken_0x2a6ea8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6ea8) {
            ctx->pc = 0x2A6EC8u;
            goto label_2a6ec8;
        }
    }
    ctx->pc = 0x2A6EB0u;
    // 0x2a6eb0: 0x3c04003b
    ctx->pc = 0x2a6eb0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6eb4: 0x2484ebc8
    ctx->pc = 0x2a6eb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962120));
    // 0x2a6eb8: 0xc0b4a34
    ctx->pc = 0x2A6EB8u;
    SET_GPR_U32(ctx, 31, 0x2A6EC0u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6EC0u; }
    }
    if (ctx->pc != 0x2A6EC0u) { return; }
    ctx->pc = 0x2A6EC0u;
    // 0x2a6ec0: 0x10000007
    ctx->pc = 0x2A6EC0u;
    {
        const bool branch_taken_0x2a6ec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6ec0) {
            ctx->pc = 0x2A6EE0u;
            goto label_2a6ee0;
        }
    }
    ctx->pc = 0x2A6EC8u;
label_2a6ec8:
    // 0x2a6ec8: 0x3c04003b
    ctx->pc = 0x2a6ec8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6ecc: 0x2484ebf8
    ctx->pc = 0x2a6eccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962168));
    // 0x2a6ed0: 0xc0b4a34
    ctx->pc = 0x2A6ED0u;
    SET_GPR_U32(ctx, 31, 0x2A6ED8u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6ED8u; }
    }
    if (ctx->pc != 0x2A6ED8u) { return; }
    ctx->pc = 0x2A6ED8u;
    // 0x2a6ed8: 0x24020001
    ctx->pc = 0x2a6ed8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6edc: 0xafc20028
    ctx->pc = 0x2a6edcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
label_2a6ee0:
    // 0x2a6ee0: 0x8fc30018
    ctx->pc = 0x2a6ee0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a6ee4: 0x30620002
    ctx->pc = 0x2a6ee4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
    // 0x2a6ee8: 0x10400006
    ctx->pc = 0x2A6EE8u;
    {
        const bool branch_taken_0x2a6ee8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6ee8) {
            ctx->pc = 0x2A6F04u;
            goto label_2a6f04;
        }
    }
    ctx->pc = 0x2A6EF0u;
    // 0x2a6ef0: 0x3c04003b
    ctx->pc = 0x2a6ef0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6ef4: 0x2484ec50
    ctx->pc = 0x2a6ef4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962256));
    // 0x2a6ef8: 0xc0b4a34
    ctx->pc = 0x2A6EF8u;
    SET_GPR_U32(ctx, 31, 0x2A6F00u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6F00u; }
    }
    if (ctx->pc != 0x2A6F00u) { return; }
    ctx->pc = 0x2A6F00u;
    // 0x2a6f00: 0xafc00028
    ctx->pc = 0x2a6f00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a6f04:
    // 0x2a6f04: 0x8fc30018
    ctx->pc = 0x2a6f04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a6f08: 0x30620004
    ctx->pc = 0x2a6f08u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
    // 0x2a6f0c: 0x10400006
    ctx->pc = 0x2A6F0Cu;
    {
        const bool branch_taken_0x2a6f0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6f0c) {
            ctx->pc = 0x2A6F28u;
            goto label_2a6f28;
        }
    }
    ctx->pc = 0x2A6F14u;
    // 0x2a6f14: 0x3c04003b
    ctx->pc = 0x2a6f14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6f18: 0x2484ec68
    ctx->pc = 0x2a6f18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962280));
    // 0x2a6f1c: 0xc0b4a34
    ctx->pc = 0x2A6F1Cu;
    SET_GPR_U32(ctx, 31, 0x2A6F24u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6F24u; }
    }
    if (ctx->pc != 0x2A6F24u) { return; }
    ctx->pc = 0x2A6F24u;
    // 0x2a6f24: 0xafc00028
    ctx->pc = 0x2a6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a6f28:
    // 0x2a6f28: 0x8fc30018
    ctx->pc = 0x2a6f28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a6f2c: 0x30620008
    ctx->pc = 0x2a6f2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
    // 0x2a6f30: 0x10400006
    ctx->pc = 0x2A6F30u;
    {
        const bool branch_taken_0x2a6f30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6f30) {
            ctx->pc = 0x2A6F4Cu;
            goto label_2a6f4c;
        }
    }
    ctx->pc = 0x2A6F38u;
    // 0x2a6f38: 0x3c04003b
    ctx->pc = 0x2a6f38u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6f3c: 0x2484ec80
    ctx->pc = 0x2a6f3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962304));
    // 0x2a6f40: 0xc0b4a34
    ctx->pc = 0x2A6F40u;
    SET_GPR_U32(ctx, 31, 0x2A6F48u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6F48u; }
    }
    if (ctx->pc != 0x2A6F48u) { return; }
    ctx->pc = 0x2A6F48u;
    // 0x2a6f48: 0xafc00028
    ctx->pc = 0x2a6f48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a6f4c:
    // 0x2a6f4c: 0x8fc20028
    ctx->pc = 0x2a6f4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x2a6f50: 0x10400005
    ctx->pc = 0x2A6F50u;
    {
        const bool branch_taken_0x2a6f50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6f50) {
            ctx->pc = 0x2A6F68u;
            goto label_2a6f68;
        }
    }
    ctx->pc = 0x2A6F58u;
    // 0x2a6f58: 0x3c04003b
    ctx->pc = 0x2a6f58u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6f5c: 0x2484eca0
    ctx->pc = 0x2a6f5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962336));
    // 0x2a6f60: 0xc0b4a34
    ctx->pc = 0x2A6F60u;
    SET_GPR_U32(ctx, 31, 0x2A6F68u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6F68u; }
    }
    if (ctx->pc != 0x2A6F68u) { return; }
    ctx->pc = 0x2A6F68u;
label_2a6f68:
    // 0x2a6f68: 0x3c04003b
    ctx->pc = 0x2a6f68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6f6c: 0x2484ec38
    ctx->pc = 0x2a6f6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962232));
    // 0x2a6f70: 0xc0b4a34
    ctx->pc = 0x2A6F70u;
    SET_GPR_U32(ctx, 31, 0x2A6F78u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6F78u; }
    }
    if (ctx->pc != 0x2A6F78u) { return; }
    ctx->pc = 0x2A6F78u;
    // 0x2a6f78: 0x3c04003b
    ctx->pc = 0x2a6f78u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6f7c: 0x2484ecc0
    ctx->pc = 0x2a6f7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962368));
    // 0x2a6f80: 0x8fc50000
    ctx->pc = 0x2a6f80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6f84: 0xc0b4a34
    ctx->pc = 0x2A6F84u;
    SET_GPR_U32(ctx, 31, 0x2A6F8Cu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6F8Cu; }
    }
    if (ctx->pc != 0x2A6F8Cu) { return; }
    ctx->pc = 0x2A6F8Cu;
    // 0x2a6f8c: 0x24020001
    ctx->pc = 0x2a6f8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6f90: 0xafc20028
    ctx->pc = 0x2a6f90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
    // 0x2a6f94: 0x8fc30014
    ctx->pc = 0x2a6f94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6f98: 0x30620003
    ctx->pc = 0x2a6f98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
    // 0x2a6f9c: 0x14400005
    ctx->pc = 0x2A6F9Cu;
    {
        const bool branch_taken_0x2a6f9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a6f9c) {
            ctx->pc = 0x2A6FB4u;
            goto label_2a6fb4;
        }
    }
    ctx->pc = 0x2A6FA4u;
    // 0x2a6fa4: 0x3c04003b
    ctx->pc = 0x2a6fa4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6fa8: 0x2484ebf8
    ctx->pc = 0x2a6fa8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962168));
    // 0x2a6fac: 0xc0b4a34
    ctx->pc = 0x2A6FACu;
    SET_GPR_U32(ctx, 31, 0x2A6FB4u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6FB4u; }
    }
    if (ctx->pc != 0x2A6FB4u) { return; }
    ctx->pc = 0x2A6FB4u;
label_2a6fb4:
    // 0x2a6fb4: 0x8fc30014
    ctx->pc = 0x2a6fb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6fb8: 0x30620003
    ctx->pc = 0x2a6fb8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
    // 0x2a6fbc: 0x24030001
    ctx->pc = 0x2a6fbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6fc0: 0x14430005
    ctx->pc = 0x2A6FC0u;
    {
        const bool branch_taken_0x2a6fc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2a6fc0) {
            ctx->pc = 0x2A6FD8u;
            goto label_2a6fd8;
        }
    }
    ctx->pc = 0x2A6FC8u;
    // 0x2a6fc8: 0x3c04003b
    ctx->pc = 0x2a6fc8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6fcc: 0x2484ecd0
    ctx->pc = 0x2a6fccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962384));
    // 0x2a6fd0: 0xc0b4a34
    ctx->pc = 0x2A6FD0u;
    SET_GPR_U32(ctx, 31, 0x2A6FD8u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6FD8u; }
    }
    if (ctx->pc != 0x2A6FD8u) { return; }
    ctx->pc = 0x2A6FD8u;
label_2a6fd8:
    // 0x2a6fd8: 0x8fc30014
    ctx->pc = 0x2a6fd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6fdc: 0x30620003
    ctx->pc = 0x2a6fdcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
    // 0x2a6fe0: 0x24030002
    ctx->pc = 0x2a6fe0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6fe4: 0x14430005
    ctx->pc = 0x2A6FE4u;
    {
        const bool branch_taken_0x2a6fe4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2a6fe4) {
            ctx->pc = 0x2A6FFCu;
            goto label_2a6ffc;
        }
    }
    ctx->pc = 0x2A6FECu;
    // 0x2a6fec: 0x3c04003b
    ctx->pc = 0x2a6fecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6ff0: 0x2484ecf0
    ctx->pc = 0x2a6ff0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962416));
    // 0x2a6ff4: 0xc0b4a34
    ctx->pc = 0x2A6FF4u;
    SET_GPR_U32(ctx, 31, 0x2A6FFCu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6FFCu; }
    }
    if (ctx->pc != 0x2A6FFCu) { return; }
    ctx->pc = 0x2A6FFCu;
label_2a6ffc:
    // 0x2a6ffc: 0x8fc30014
    ctx->pc = 0x2a6ffcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7000: 0x30620003
    ctx->pc = 0x2a7000u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
    // 0x2a7004: 0x24030003
    ctx->pc = 0x2a7004u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a7008: 0x14430005
    ctx->pc = 0x2A7008u;
    {
        const bool branch_taken_0x2a7008 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2a7008) {
            ctx->pc = 0x2A7020u;
            goto label_2a7020;
        }
    }
    ctx->pc = 0x2A7010u;
    // 0x2a7010: 0x3c04003b
    ctx->pc = 0x2a7010u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7014: 0x2484ed10
    ctx->pc = 0x2a7014u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962448));
    // 0x2a7018: 0xc0b4a34
    ctx->pc = 0x2A7018u;
    SET_GPR_U32(ctx, 31, 0x2A7020u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7020u; }
    }
    if (ctx->pc != 0x2A7020u) { return; }
    ctx->pc = 0x2A7020u;
label_2a7020:
    // 0x2a7020: 0x8fc30014
    ctx->pc = 0x2a7020u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7024: 0x31082
    ctx->pc = 0x2a7024u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 2));
    // 0x2a7028: 0x30430001
    ctx->pc = 0x2a7028u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a702c: 0x10600006
    ctx->pc = 0x2A702Cu;
    {
        const bool branch_taken_0x2a702c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a702c) {
            ctx->pc = 0x2A7048u;
            goto label_2a7048;
        }
    }
    ctx->pc = 0x2A7034u;
    // 0x2a7034: 0x3c04003b
    ctx->pc = 0x2a7034u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7038: 0x2484ed30
    ctx->pc = 0x2a7038u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962480));
    // 0x2a703c: 0xc0b4a34
    ctx->pc = 0x2A703Cu;
    SET_GPR_U32(ctx, 31, 0x2A7044u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7044u; }
    }
    if (ctx->pc != 0x2A7044u) { return; }
    ctx->pc = 0x2A7044u;
    // 0x2a7044: 0xafc00028
    ctx->pc = 0x2a7044u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a7048:
    // 0x2a7048: 0x8fc30014
    ctx->pc = 0x2a7048u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a704c: 0x310c2
    ctx->pc = 0x2a704cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 3));
    // 0x2a7050: 0x30430001
    ctx->pc = 0x2a7050u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a7054: 0x10600006
    ctx->pc = 0x2A7054u;
    {
        const bool branch_taken_0x2a7054 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7054) {
            ctx->pc = 0x2A7070u;
            goto label_2a7070;
        }
    }
    ctx->pc = 0x2A705Cu;
    // 0x2a705c: 0x3c04003b
    ctx->pc = 0x2a705cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7060: 0x2484ed58
    ctx->pc = 0x2a7060u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962520));
    // 0x2a7064: 0xc0b4a34
    ctx->pc = 0x2A7064u;
    SET_GPR_U32(ctx, 31, 0x2A706Cu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A706Cu; }
    }
    if (ctx->pc != 0x2A706Cu) { return; }
    ctx->pc = 0x2A706Cu;
    // 0x2a706c: 0xafc00028
    ctx->pc = 0x2a706cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a7070:
    // 0x2a7070: 0x8fc30014
    ctx->pc = 0x2a7070u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7074: 0x31182
    ctx->pc = 0x2a7074u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 6));
    // 0x2a7078: 0x30430001
    ctx->pc = 0x2a7078u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a707c: 0x10600006
    ctx->pc = 0x2A707Cu;
    {
        const bool branch_taken_0x2a707c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a707c) {
            ctx->pc = 0x2A7098u;
            goto label_2a7098;
        }
    }
    ctx->pc = 0x2A7084u;
    // 0x2a7084: 0x3c04003b
    ctx->pc = 0x2a7084u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7088: 0x2484ed78
    ctx->pc = 0x2a7088u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962552));
    // 0x2a708c: 0xc0b4a34
    ctx->pc = 0x2A708Cu;
    SET_GPR_U32(ctx, 31, 0x2A7094u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7094u; }
    }
    if (ctx->pc != 0x2A7094u) { return; }
    ctx->pc = 0x2A7094u;
    // 0x2a7094: 0xafc00028
    ctx->pc = 0x2a7094u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a7098:
    // 0x2a7098: 0x8fc30014
    ctx->pc = 0x2a7098u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a709c: 0x31202
    ctx->pc = 0x2a709cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 8));
    // 0x2a70a0: 0x30430001
    ctx->pc = 0x2a70a0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a70a4: 0x10600006
    ctx->pc = 0x2A70A4u;
    {
        const bool branch_taken_0x2a70a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a70a4) {
            ctx->pc = 0x2A70C0u;
            goto label_2a70c0;
        }
    }
    ctx->pc = 0x2A70ACu;
    // 0x2a70ac: 0x3c04003b
    ctx->pc = 0x2a70acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a70b0: 0x2484ed90
    ctx->pc = 0x2a70b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962576));
    // 0x2a70b4: 0xc0b4a34
    ctx->pc = 0x2A70B4u;
    SET_GPR_U32(ctx, 31, 0x2A70BCu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A70BCu; }
    }
    if (ctx->pc != 0x2A70BCu) { return; }
    ctx->pc = 0x2A70BCu;
    // 0x2a70bc: 0xafc00028
    ctx->pc = 0x2a70bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a70c0:
    // 0x2a70c0: 0x8fc30014
    ctx->pc = 0x2a70c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a70c4: 0x31242
    ctx->pc = 0x2a70c4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 9));
    // 0x2a70c8: 0x30430001
    ctx->pc = 0x2a70c8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a70cc: 0x10600006
    ctx->pc = 0x2A70CCu;
    {
        const bool branch_taken_0x2a70cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a70cc) {
            ctx->pc = 0x2A70E8u;
            goto label_2a70e8;
        }
    }
    ctx->pc = 0x2A70D4u;
    // 0x2a70d4: 0x3c04003b
    ctx->pc = 0x2a70d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a70d8: 0x2484edb0
    ctx->pc = 0x2a70d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962608));
    // 0x2a70dc: 0xc0b4a34
    ctx->pc = 0x2A70DCu;
    SET_GPR_U32(ctx, 31, 0x2A70E4u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A70E4u; }
    }
    if (ctx->pc != 0x2A70E4u) { return; }
    ctx->pc = 0x2A70E4u;
    // 0x2a70e4: 0xafc00028
    ctx->pc = 0x2a70e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a70e8:
    // 0x2a70e8: 0x8fc30014
    ctx->pc = 0x2a70e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a70ec: 0x31282
    ctx->pc = 0x2a70ecu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 10));
    // 0x2a70f0: 0x30430001
    ctx->pc = 0x2a70f0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a70f4: 0x10600006
    ctx->pc = 0x2A70F4u;
    {
        const bool branch_taken_0x2a70f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a70f4) {
            ctx->pc = 0x2A7110u;
            goto label_2a7110;
        }
    }
    ctx->pc = 0x2A70FCu;
    // 0x2a70fc: 0x3c04003b
    ctx->pc = 0x2a70fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7100: 0x2484edd0
    ctx->pc = 0x2a7100u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962640));
    // 0x2a7104: 0xc0b4a34
    ctx->pc = 0x2A7104u;
    SET_GPR_U32(ctx, 31, 0x2A710Cu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A710Cu; }
    }
    if (ctx->pc != 0x2A710Cu) { return; }
    ctx->pc = 0x2A710Cu;
    // 0x2a710c: 0xafc00028
    ctx->pc = 0x2a710cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a7110:
    // 0x2a7110: 0x8fc30014
    ctx->pc = 0x2a7110u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7114: 0x312c2
    ctx->pc = 0x2a7114u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 11));
    // 0x2a7118: 0x30430001
    ctx->pc = 0x2a7118u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a711c: 0x10600006
    ctx->pc = 0x2A711Cu;
    {
        const bool branch_taken_0x2a711c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a711c) {
            ctx->pc = 0x2A7138u;
            goto label_2a7138;
        }
    }
    ctx->pc = 0x2A7124u;
    // 0x2a7124: 0x3c04003b
    ctx->pc = 0x2a7124u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7128: 0x2484edf0
    ctx->pc = 0x2a7128u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962672));
    // 0x2a712c: 0xc0b4a34
    ctx->pc = 0x2A712Cu;
    SET_GPR_U32(ctx, 31, 0x2A7134u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7134u; }
    }
    if (ctx->pc != 0x2A7134u) { return; }
    ctx->pc = 0x2A7134u;
    // 0x2a7134: 0xafc00028
    ctx->pc = 0x2a7134u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a7138:
    // 0x2a7138: 0x8fc30014
    ctx->pc = 0x2a7138u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a713c: 0x31302
    ctx->pc = 0x2a713cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 12));
    // 0x2a7140: 0x30430001
    ctx->pc = 0x2a7140u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a7144: 0x10600006
    ctx->pc = 0x2A7144u;
    {
        const bool branch_taken_0x2a7144 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7144) {
            ctx->pc = 0x2A7160u;
            goto label_2a7160;
        }
    }
    ctx->pc = 0x2A714Cu;
    // 0x2a714c: 0x3c04003b
    ctx->pc = 0x2a714cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7150: 0x2484ee28
    ctx->pc = 0x2a7150u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962728));
    // 0x2a7154: 0xc0b4a34
    ctx->pc = 0x2A7154u;
    SET_GPR_U32(ctx, 31, 0x2A715Cu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A715Cu; }
    }
    if (ctx->pc != 0x2A715Cu) { return; }
    ctx->pc = 0x2A715Cu;
    // 0x2a715c: 0xafc00028
    ctx->pc = 0x2a715cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a7160:
    // 0x2a7160: 0x8fc30014
    ctx->pc = 0x2a7160u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7164: 0x31342
    ctx->pc = 0x2a7164u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 13));
    // 0x2a7168: 0x30430001
    ctx->pc = 0x2a7168u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a716c: 0x10600006
    ctx->pc = 0x2A716Cu;
    {
        const bool branch_taken_0x2a716c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a716c) {
            ctx->pc = 0x2A7188u;
            goto label_2a7188;
        }
    }
    ctx->pc = 0x2A7174u;
    // 0x2a7174: 0x3c04003b
    ctx->pc = 0x2a7174u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7178: 0x2484ee48
    ctx->pc = 0x2a7178u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962760));
    // 0x2a717c: 0xc0b4a34
    ctx->pc = 0x2A717Cu;
    SET_GPR_U32(ctx, 31, 0x2A7184u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7184u; }
    }
    if (ctx->pc != 0x2A7184u) { return; }
    ctx->pc = 0x2A7184u;
    // 0x2a7184: 0xafc00028
    ctx->pc = 0x2a7184u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a7188:
    // 0x2a7188: 0x8fc30014
    ctx->pc = 0x2a7188u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a718c: 0x315c2
    ctx->pc = 0x2a718cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 23));
    // 0x2a7190: 0x30430001
    ctx->pc = 0x2a7190u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a7194: 0x10600006
    ctx->pc = 0x2A7194u;
    {
        const bool branch_taken_0x2a7194 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7194) {
            ctx->pc = 0x2A71B0u;
            goto label_2a71b0;
        }
    }
    ctx->pc = 0x2A719Cu;
    // 0x2a719c: 0x3c04003b
    ctx->pc = 0x2a719cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a71a0: 0x2484ee80
    ctx->pc = 0x2a71a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962816));
    // 0x2a71a4: 0xc0b4a34
    ctx->pc = 0x2A71A4u;
    SET_GPR_U32(ctx, 31, 0x2A71ACu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A71ACu; }
    }
    if (ctx->pc != 0x2A71ACu) { return; }
    ctx->pc = 0x2A71ACu;
    // 0x2a71ac: 0xafc00028
    ctx->pc = 0x2a71acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a71b0:
    // 0x2a71b0: 0x8fc20028
    ctx->pc = 0x2a71b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x2a71b4: 0x10400005
    ctx->pc = 0x2A71B4u;
    {
        const bool branch_taken_0x2a71b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a71b4) {
            ctx->pc = 0x2A71CCu;
            goto label_2a71cc;
        }
    }
    ctx->pc = 0x2A71BCu;
    // 0x2a71bc: 0x3c04003b
    ctx->pc = 0x2a71bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a71c0: 0x2484eec0
    ctx->pc = 0x2a71c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962880));
    // 0x2a71c4: 0xc0b4a34
    ctx->pc = 0x2A71C4u;
    SET_GPR_U32(ctx, 31, 0x2A71CCu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A71CCu; }
    }
    if (ctx->pc != 0x2A71CCu) { return; }
    ctx->pc = 0x2A71CCu;
label_2a71cc:
    // 0x2a71cc: 0x3c04003b
    ctx->pc = 0x2a71ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a71d0: 0x2484eed0
    ctx->pc = 0x2a71d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962896));
    // 0x2a71d4: 0x3c051000
    ctx->pc = 0x2a71d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x2a71d8: 0x8ca53c80
    ctx->pc = 0x2a71d8u;
    SET_GPR_U32(ctx, 5, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 15488))); // MMIO: 0x10003c80
    // 0x2a71dc: 0xc0b4a34
    ctx->pc = 0x2A71DCu;
    SET_GPR_U32(ctx, 31, 0x2A71E4u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A71E4u; }
    }
    if (ctx->pc != 0x2A71E4u) { return; }
    ctx->pc = 0x2A71E4u;
    // 0x2a71e4: 0x3c04003b
    ctx->pc = 0x2a71e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a71e8: 0x2484ec38
    ctx->pc = 0x2a71e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962232));
    // 0x2a71ec: 0xc0b4a34
    ctx->pc = 0x2A71ECu;
    SET_GPR_U32(ctx, 31, 0x2A71F4u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A71F4u; }
    }
    if (ctx->pc != 0x2A71F4u) { return; }
    ctx->pc = 0x2A71F4u;
    // 0x2a71f4: 0x3c04003b
    ctx->pc = 0x2a71f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a71f8: 0x2484eef0
    ctx->pc = 0x2a71f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962928));
    // 0x2a71fc: 0x8fc50000
    ctx->pc = 0x2a71fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7200: 0xc0b4a34
    ctx->pc = 0x2A7200u;
    SET_GPR_U32(ctx, 31, 0x2A7208u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7208u; }
    }
    if (ctx->pc != 0x2A7208u) { return; }
    ctx->pc = 0x2A7208u;
    // 0x2a7208: 0xafc00028
    ctx->pc = 0x2a7208u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
    // 0x2a720c: 0x8fc30018
    ctx->pc = 0x2a720cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a7210: 0x30620100
    ctx->pc = 0x2a7210u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 256));
    // 0x2a7214: 0x10400007
    ctx->pc = 0x2A7214u;
    {
        const bool branch_taken_0x2a7214 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7214) {
            ctx->pc = 0x2A7234u;
            goto label_2a7234;
        }
    }
    ctx->pc = 0x2A721Cu;
    // 0x2a721c: 0x3c04003b
    ctx->pc = 0x2a721cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7220: 0x2484ebc8
    ctx->pc = 0x2a7220u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962120));
    // 0x2a7224: 0xc0b4a34
    ctx->pc = 0x2A7224u;
    SET_GPR_U32(ctx, 31, 0x2A722Cu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A722Cu; }
    }
    if (ctx->pc != 0x2A722Cu) { return; }
    ctx->pc = 0x2A722Cu;
    // 0x2a722c: 0x10000007
    ctx->pc = 0x2A722Cu;
    {
        const bool branch_taken_0x2a722c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a722c) {
            ctx->pc = 0x2A724Cu;
            goto label_2a724c;
        }
    }
    ctx->pc = 0x2A7234u;
label_2a7234:
    // 0x2a7234: 0x3c04003b
    ctx->pc = 0x2a7234u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7238: 0x2484ebf8
    ctx->pc = 0x2a7238u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962168));
    // 0x2a723c: 0xc0b4a34
    ctx->pc = 0x2A723Cu;
    SET_GPR_U32(ctx, 31, 0x2A7244u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7244u; }
    }
    if (ctx->pc != 0x2A7244u) { return; }
    ctx->pc = 0x2A7244u;
    // 0x2a7244: 0x24020001
    ctx->pc = 0x2a7244u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7248: 0xafc20028
    ctx->pc = 0x2a7248u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
label_2a724c:
    // 0x2a724c: 0x8fc30018
    ctx->pc = 0x2a724cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a7250: 0x30620200
    ctx->pc = 0x2a7250u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 512));
    // 0x2a7254: 0x10400006
    ctx->pc = 0x2A7254u;
    {
        const bool branch_taken_0x2a7254 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7254) {
            ctx->pc = 0x2A7270u;
            goto label_2a7270;
        }
    }
    ctx->pc = 0x2A725Cu;
    // 0x2a725c: 0x3c04003b
    ctx->pc = 0x2a725cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7260: 0x2484ec50
    ctx->pc = 0x2a7260u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962256));
    // 0x2a7264: 0xc0b4a34
    ctx->pc = 0x2A7264u;
    SET_GPR_U32(ctx, 31, 0x2A726Cu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A726Cu; }
    }
    if (ctx->pc != 0x2A726Cu) { return; }
    ctx->pc = 0x2A726Cu;
    // 0x2a726c: 0xafc00028
    ctx->pc = 0x2a726cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a7270:
    // 0x2a7270: 0x8fc30018
    ctx->pc = 0x2a7270u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a7274: 0x30620400
    ctx->pc = 0x2a7274u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1024));
    // 0x2a7278: 0x10400006
    ctx->pc = 0x2A7278u;
    {
        const bool branch_taken_0x2a7278 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7278) {
            ctx->pc = 0x2A7294u;
            goto label_2a7294;
        }
    }
    ctx->pc = 0x2A7280u;
    // 0x2a7280: 0x3c04003b
    ctx->pc = 0x2a7280u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7284: 0x2484ec68
    ctx->pc = 0x2a7284u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962280));
    // 0x2a7288: 0xc0b4a34
    ctx->pc = 0x2A7288u;
    SET_GPR_U32(ctx, 31, 0x2A7290u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7290u; }
    }
    if (ctx->pc != 0x2A7290u) { return; }
    ctx->pc = 0x2A7290u;
    // 0x2a7290: 0xafc00028
    ctx->pc = 0x2a7290u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a7294:
    // 0x2a7294: 0x8fc30018
    ctx->pc = 0x2a7294u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a7298: 0x30620800
    ctx->pc = 0x2a7298u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2048));
    // 0x2a729c: 0x10400006
    ctx->pc = 0x2A729Cu;
    {
        const bool branch_taken_0x2a729c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a729c) {
            ctx->pc = 0x2A72B8u;
            goto label_2a72b8;
        }
    }
    ctx->pc = 0x2A72A4u;
    // 0x2a72a4: 0x3c04003b
    ctx->pc = 0x2a72a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a72a8: 0x2484ec80
    ctx->pc = 0x2a72a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962304));
    // 0x2a72ac: 0xc0b4a34
    ctx->pc = 0x2A72ACu;
    SET_GPR_U32(ctx, 31, 0x2A72B4u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A72B4u; }
    }
    if (ctx->pc != 0x2A72B4u) { return; }
    ctx->pc = 0x2A72B4u;
    // 0x2a72b4: 0xafc00028
    ctx->pc = 0x2a72b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a72b8:
    // 0x2a72b8: 0x8fc20028
    ctx->pc = 0x2a72b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x2a72bc: 0x10400005
    ctx->pc = 0x2A72BCu;
    {
        const bool branch_taken_0x2a72bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a72bc) {
            ctx->pc = 0x2A72D4u;
            goto label_2a72d4;
        }
    }
    ctx->pc = 0x2A72C4u;
    // 0x2a72c4: 0x3c04003b
    ctx->pc = 0x2a72c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a72c8: 0x2484eca0
    ctx->pc = 0x2a72c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962336));
    // 0x2a72cc: 0xc0b4a34
    ctx->pc = 0x2A72CCu;
    SET_GPR_U32(ctx, 31, 0x2A72D4u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A72D4u; }
    }
    if (ctx->pc != 0x2A72D4u) { return; }
    ctx->pc = 0x2A72D4u;
label_2a72d4:
    // 0x2a72d4: 0x8fc30018
    ctx->pc = 0x2a72d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a72d8: 0x30621000
    ctx->pc = 0x2a72d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4096));
    // 0x2a72dc: 0x10400005
    ctx->pc = 0x2A72DCu;
    {
        const bool branch_taken_0x2a72dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a72dc) {
            ctx->pc = 0x2A72F4u;
            goto label_2a72f4;
        }
    }
    ctx->pc = 0x2A72E4u;
    // 0x2a72e4: 0x3c04003b
    ctx->pc = 0x2a72e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a72e8: 0x2484ef00
    ctx->pc = 0x2a72e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962944));
    // 0x2a72ec: 0xc0b4a34
    ctx->pc = 0x2A72ECu;
    SET_GPR_U32(ctx, 31, 0x2A72F4u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A72F4u; }
    }
    if (ctx->pc != 0x2A72F4u) { return; }
    ctx->pc = 0x2A72F4u;
label_2a72f4:
    // 0x2a72f4: 0x3c04003b
    ctx->pc = 0x2a72f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a72f8: 0x2484ec38
    ctx->pc = 0x2a72f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962232));
    // 0x2a72fc: 0xc0b4a34
    ctx->pc = 0x2A72FCu;
    SET_GPR_U32(ctx, 31, 0x2A7304u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7304u; }
    }
    if (ctx->pc != 0x2A7304u) { return; }
    ctx->pc = 0x2A7304u;
    // 0x2a7304: 0x3c04003b
    ctx->pc = 0x2a7304u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7308: 0x2484ef18
    ctx->pc = 0x2a7308u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962968));
    // 0x2a730c: 0x8fc50000
    ctx->pc = 0x2a730cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7310: 0xc0b4a34
    ctx->pc = 0x2A7310u;
    SET_GPR_U32(ctx, 31, 0x2A7318u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7318u; }
    }
    if (ctx->pc != 0x2A7318u) { return; }
    ctx->pc = 0x2A7318u;
    // 0x2a7318: 0x24020001
    ctx->pc = 0x2a7318u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a731c: 0xafc20028
    ctx->pc = 0x2a731cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
    // 0x2a7320: 0x8fc30020
    ctx->pc = 0x2a7320u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a7324: 0x310c2
    ctx->pc = 0x2a7324u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 3));
    // 0x2a7328: 0x30430001
    ctx->pc = 0x2a7328u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a732c: 0x1060000d
    ctx->pc = 0x2A732Cu;
    {
        const bool branch_taken_0x2a732c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a732c) {
            ctx->pc = 0x2A7364u;
            goto label_2a7364;
        }
    }
    ctx->pc = 0x2A7334u;
    // 0x2a7334: 0x8fc20028
    ctx->pc = 0x2a7334u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x2a7338: 0x10400006
    ctx->pc = 0x2A7338u;
    {
        const bool branch_taken_0x2a7338 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7338) {
            ctx->pc = 0x2A7354u;
            goto label_2a7354;
        }
    }
    ctx->pc = 0x2A7340u;
    // 0x2a7340: 0x3c04003b
    ctx->pc = 0x2a7340u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7344: 0x2484ec28
    ctx->pc = 0x2a7344u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962216));
    // 0x2a7348: 0xc0b4a34
    ctx->pc = 0x2A7348u;
    SET_GPR_U32(ctx, 31, 0x2A7350u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7350u; }
    }
    if (ctx->pc != 0x2A7350u) { return; }
    ctx->pc = 0x2A7350u;
    // 0x2a7350: 0xafc00028
    ctx->pc = 0x2a7350u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a7354:
    // 0x2a7354: 0x3c04003b
    ctx->pc = 0x2a7354u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7358: 0x2484ef28
    ctx->pc = 0x2a7358u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962984));
    // 0x2a735c: 0xc0b4a34
    ctx->pc = 0x2A735Cu;
    SET_GPR_U32(ctx, 31, 0x2A7364u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7364u; }
    }
    if (ctx->pc != 0x2A7364u) { return; }
    ctx->pc = 0x2A7364u;
label_2a7364:
    // 0x2a7364: 0x8fc30020
    ctx->pc = 0x2a7364u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a7368: 0x31182
    ctx->pc = 0x2a7368u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 6));
    // 0x2a736c: 0x30430001
    ctx->pc = 0x2a736cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a7370: 0x1060000d
    ctx->pc = 0x2A7370u;
    {
        const bool branch_taken_0x2a7370 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7370) {
            ctx->pc = 0x2A73A8u;
            goto label_2a73a8;
        }
    }
    ctx->pc = 0x2A7378u;
    // 0x2a7378: 0x8fc20028
    ctx->pc = 0x2a7378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x2a737c: 0x10400006
    ctx->pc = 0x2A737Cu;
    {
        const bool branch_taken_0x2a737c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a737c) {
            ctx->pc = 0x2A7398u;
            goto label_2a7398;
        }
    }
    ctx->pc = 0x2A7384u;
    // 0x2a7384: 0x3c04003b
    ctx->pc = 0x2a7384u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7388: 0x2484ec28
    ctx->pc = 0x2a7388u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962216));
    // 0x2a738c: 0xc0b4a34
    ctx->pc = 0x2A738Cu;
    SET_GPR_U32(ctx, 31, 0x2A7394u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7394u; }
    }
    if (ctx->pc != 0x2A7394u) { return; }
    ctx->pc = 0x2A7394u;
    // 0x2a7394: 0xafc00028
    ctx->pc = 0x2a7394u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a7398:
    // 0x2a7398: 0x3c04003b
    ctx->pc = 0x2a7398u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a739c: 0x2484ef48
    ctx->pc = 0x2a739cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963016));
    // 0x2a73a0: 0xc0b4a34
    ctx->pc = 0x2A73A0u;
    SET_GPR_U32(ctx, 31, 0x2A73A8u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A73A8u; }
    }
    if (ctx->pc != 0x2A73A8u) { return; }
    ctx->pc = 0x2A73A8u;
label_2a73a8:
    // 0x2a73a8: 0x8fc30020
    ctx->pc = 0x2a73a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a73ac: 0x311c2
    ctx->pc = 0x2a73acu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 7));
    // 0x2a73b0: 0x30430001
    ctx->pc = 0x2a73b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a73b4: 0x1060000d
    ctx->pc = 0x2A73B4u;
    {
        const bool branch_taken_0x2a73b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a73b4) {
            ctx->pc = 0x2A73ECu;
            goto label_2a73ec;
        }
    }
    ctx->pc = 0x2A73BCu;
    // 0x2a73bc: 0x8fc20028
    ctx->pc = 0x2a73bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x2a73c0: 0x10400006
    ctx->pc = 0x2A73C0u;
    {
        const bool branch_taken_0x2a73c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a73c0) {
            ctx->pc = 0x2A73DCu;
            goto label_2a73dc;
        }
    }
    ctx->pc = 0x2A73C8u;
    // 0x2a73c8: 0x3c04003b
    ctx->pc = 0x2a73c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a73cc: 0x2484ec28
    ctx->pc = 0x2a73ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962216));
    // 0x2a73d0: 0xc0b4a34
    ctx->pc = 0x2A73D0u;
    SET_GPR_U32(ctx, 31, 0x2A73D8u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A73D8u; }
    }
    if (ctx->pc != 0x2A73D8u) { return; }
    ctx->pc = 0x2A73D8u;
    // 0x2a73d8: 0xafc00028
    ctx->pc = 0x2a73d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a73dc:
    // 0x2a73dc: 0x3c04003b
    ctx->pc = 0x2a73dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a73e0: 0x2484ef68
    ctx->pc = 0x2a73e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963048));
    // 0x2a73e4: 0xc0b4a34
    ctx->pc = 0x2A73E4u;
    SET_GPR_U32(ctx, 31, 0x2A73ECu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A73ECu; }
    }
    if (ctx->pc != 0x2A73ECu) { return; }
    ctx->pc = 0x2A73ECu;
label_2a73ec:
    // 0x2a73ec: 0x8fc30020
    ctx->pc = 0x2a73ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a73f0: 0x31202
    ctx->pc = 0x2a73f0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 8));
    // 0x2a73f4: 0x30430001
    ctx->pc = 0x2a73f4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a73f8: 0x1060000d
    ctx->pc = 0x2A73F8u;
    {
        const bool branch_taken_0x2a73f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a73f8) {
            ctx->pc = 0x2A7430u;
            goto label_2a7430;
        }
    }
    ctx->pc = 0x2A7400u;
    // 0x2a7400: 0x8fc20028
    ctx->pc = 0x2a7400u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x2a7404: 0x10400006
    ctx->pc = 0x2A7404u;
    {
        const bool branch_taken_0x2a7404 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7404) {
            ctx->pc = 0x2A7420u;
            goto label_2a7420;
        }
    }
    ctx->pc = 0x2A740Cu;
    // 0x2a740c: 0x3c04003b
    ctx->pc = 0x2a740cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7410: 0x2484ec28
    ctx->pc = 0x2a7410u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962216));
    // 0x2a7414: 0xc0b4a34
    ctx->pc = 0x2A7414u;
    SET_GPR_U32(ctx, 31, 0x2A741Cu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A741Cu; }
    }
    if (ctx->pc != 0x2A741Cu) { return; }
    ctx->pc = 0x2A741Cu;
    // 0x2a741c: 0xafc00028
    ctx->pc = 0x2a741cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a7420:
    // 0x2a7420: 0x3c04003b
    ctx->pc = 0x2a7420u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7424: 0x2484ef90
    ctx->pc = 0x2a7424u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963088));
    // 0x2a7428: 0xc0b4a34
    ctx->pc = 0x2A7428u;
    SET_GPR_U32(ctx, 31, 0x2A7430u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7430u; }
    }
    if (ctx->pc != 0x2A7430u) { return; }
    ctx->pc = 0x2A7430u;
label_2a7430:
    // 0x2a7430: 0x8fc30020
    ctx->pc = 0x2a7430u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a7434: 0x31242
    ctx->pc = 0x2a7434u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 9));
    // 0x2a7438: 0x30430001
    ctx->pc = 0x2a7438u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a743c: 0x10600012
    ctx->pc = 0x2A743Cu;
    {
        const bool branch_taken_0x2a743c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a743c) {
            ctx->pc = 0x2A7488u;
            goto label_2a7488;
        }
    }
    ctx->pc = 0x2A7444u;
    // 0x2a7444: 0x8fc30020
    ctx->pc = 0x2a7444u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a7448: 0x31282
    ctx->pc = 0x2a7448u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 10));
    // 0x2a744c: 0x30430003
    ctx->pc = 0x2a744cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 3));
    // 0x2a7450: 0x1460000d
    ctx->pc = 0x2A7450u;
    {
        const bool branch_taken_0x2a7450 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a7450) {
            ctx->pc = 0x2A7488u;
            goto label_2a7488;
        }
    }
    ctx->pc = 0x2A7458u;
    // 0x2a7458: 0x8fc20028
    ctx->pc = 0x2a7458u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x2a745c: 0x10400006
    ctx->pc = 0x2A745Cu;
    {
        const bool branch_taken_0x2a745c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a745c) {
            ctx->pc = 0x2A7478u;
            goto label_2a7478;
        }
    }
    ctx->pc = 0x2A7464u;
    // 0x2a7464: 0x3c04003b
    ctx->pc = 0x2a7464u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7468: 0x2484ec28
    ctx->pc = 0x2a7468u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962216));
    // 0x2a746c: 0xc0b4a34
    ctx->pc = 0x2A746Cu;
    SET_GPR_U32(ctx, 31, 0x2A7474u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7474u; }
    }
    if (ctx->pc != 0x2A7474u) { return; }
    ctx->pc = 0x2A7474u;
    // 0x2a7474: 0xafc00028
    ctx->pc = 0x2a7474u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a7478:
    // 0x2a7478: 0x3c04003b
    ctx->pc = 0x2a7478u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a747c: 0x2484efb8
    ctx->pc = 0x2a747cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963128));
    // 0x2a7480: 0xc0b4a34
    ctx->pc = 0x2A7480u;
    SET_GPR_U32(ctx, 31, 0x2A7488u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7488u; }
    }
    if (ctx->pc != 0x2A7488u) { return; }
    ctx->pc = 0x2A7488u;
label_2a7488:
    // 0x2a7488: 0x8fc30020
    ctx->pc = 0x2a7488u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a748c: 0x31282
    ctx->pc = 0x2a748cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 10));
    // 0x2a7490: 0x30430003
    ctx->pc = 0x2a7490u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 3));
    // 0x2a7494: 0x14600011
    ctx->pc = 0x2A7494u;
    {
        const bool branch_taken_0x2a7494 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a7494) {
            ctx->pc = 0x2A74DCu;
            goto label_2a74dc;
        }
    }
    ctx->pc = 0x2A749Cu;
    // 0x2a749c: 0x8fc20028
    ctx->pc = 0x2a749cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x2a74a0: 0x10400008
    ctx->pc = 0x2A74A0u;
    {
        const bool branch_taken_0x2a74a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a74a0) {
            ctx->pc = 0x2A74C4u;
            goto label_2a74c4;
        }
    }
    ctx->pc = 0x2A74A8u;
    // 0x2a74a8: 0x3c04003b
    ctx->pc = 0x2a74a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a74ac: 0x2484ebf8
    ctx->pc = 0x2a74acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962168));
    // 0x2a74b0: 0xc0b4a34
    ctx->pc = 0x2A74B0u;
    SET_GPR_U32(ctx, 31, 0x2A74B8u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A74B8u; }
    }
    if (ctx->pc != 0x2A74B8u) { return; }
    ctx->pc = 0x2A74B8u;
    // 0x2a74b8: 0xafc00028
    ctx->pc = 0x2a74b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
    // 0x2a74bc: 0x10000005
    ctx->pc = 0x2A74BCu;
    {
        const bool branch_taken_0x2a74bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a74bc) {
            ctx->pc = 0x2A74D4u;
            goto label_2a74d4;
        }
    }
    ctx->pc = 0x2A74C4u;
label_2a74c4:
    // 0x2a74c4: 0x3c04003b
    ctx->pc = 0x2a74c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a74c8: 0x2484efe8
    ctx->pc = 0x2a74c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963176));
    // 0x2a74cc: 0xc0b4a34
    ctx->pc = 0x2A74CCu;
    SET_GPR_U32(ctx, 31, 0x2A74D4u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A74D4u; }
    }
    if (ctx->pc != 0x2A74D4u) { return; }
    ctx->pc = 0x2A74D4u;
label_2a74d4:
    // 0x2a74d4: 0x10000011
    ctx->pc = 0x2A74D4u;
    {
        const bool branch_taken_0x2a74d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a74d4) {
            ctx->pc = 0x2A751Cu;
            goto label_2a751c;
        }
    }
    ctx->pc = 0x2A74DCu;
label_2a74dc:
    // 0x2a74dc: 0x8fc20028
    ctx->pc = 0x2a74dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x2a74e0: 0x10400006
    ctx->pc = 0x2A74E0u;
    {
        const bool branch_taken_0x2a74e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a74e0) {
            ctx->pc = 0x2A74FCu;
            goto label_2a74fc;
        }
    }
    ctx->pc = 0x2A74E8u;
    // 0x2a74e8: 0x3c04003b
    ctx->pc = 0x2a74e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a74ec: 0x2484ec28
    ctx->pc = 0x2a74ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962216));
    // 0x2a74f0: 0xc0b4a34
    ctx->pc = 0x2A74F0u;
    SET_GPR_U32(ctx, 31, 0x2A74F8u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A74F8u; }
    }
    if (ctx->pc != 0x2A74F8u) { return; }
    ctx->pc = 0x2A74F8u;
    // 0x2a74f8: 0xafc00028
    ctx->pc = 0x2a74f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_2a74fc:
    // 0x2a74fc: 0x8fc30020
    ctx->pc = 0x2a74fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a7500: 0x31282
    ctx->pc = 0x2a7500u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 10));
    // 0x2a7504: 0x30430003
    ctx->pc = 0x2a7504u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 3));
    // 0x2a7508: 0x3c04003b
    ctx->pc = 0x2a7508u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a750c: 0x2484eff0
    ctx->pc = 0x2a750cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963184));
    // 0x2a7510: 0x60282d
    ctx->pc = 0x2a7510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7514: 0xc0b4a34
    ctx->pc = 0x2A7514u;
    SET_GPR_U32(ctx, 31, 0x2A751Cu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A751Cu; }
    }
    if (ctx->pc != 0x2A751Cu) { return; }
    ctx->pc = 0x2A751Cu;
label_2a751c:
    // 0x2a751c: 0x8fc30020
    ctx->pc = 0x2a751cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a7520: 0x31302
    ctx->pc = 0x2a7520u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 12));
    // 0x2a7524: 0x30430001
    ctx->pc = 0x2a7524u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a7528: 0x10600005
    ctx->pc = 0x2A7528u;
    {
        const bool branch_taken_0x2a7528 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7528) {
            ctx->pc = 0x2A7540u;
            goto label_2a7540;
        }
    }
    ctx->pc = 0x2A7530u;
    // 0x2a7530: 0x3c04003b
    ctx->pc = 0x2a7530u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7534: 0x2484f010
    ctx->pc = 0x2a7534u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963216));
    // 0x2a7538: 0xc0b4a34
    ctx->pc = 0x2A7538u;
    SET_GPR_U32(ctx, 31, 0x2A7540u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7540u; }
    }
    if (ctx->pc != 0x2A7540u) { return; }
    ctx->pc = 0x2A7540u;
label_2a7540:
    // 0x2a7540: 0x8fc30020
    ctx->pc = 0x2a7540u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a7544: 0x31142
    ctx->pc = 0x2a7544u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 5));
    // 0x2a7548: 0x30430001
    ctx->pc = 0x2a7548u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a754c: 0x10600005
    ctx->pc = 0x2A754Cu;
    {
        const bool branch_taken_0x2a754c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a754c) {
            ctx->pc = 0x2A7564u;
            goto label_2a7564;
        }
    }
    ctx->pc = 0x2A7554u;
    // 0x2a7554: 0x3c04003b
    ctx->pc = 0x2a7554u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7558: 0x2484f028
    ctx->pc = 0x2a7558u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963240));
    // 0x2a755c: 0xc0b4a34
    ctx->pc = 0x2A755Cu;
    SET_GPR_U32(ctx, 31, 0x2A7564u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7564u; }
    }
    if (ctx->pc != 0x2A7564u) { return; }
    ctx->pc = 0x2A7564u;
label_2a7564:
    // 0x2a7564: 0x8fc30020
    ctx->pc = 0x2a7564u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a7568: 0x31602
    ctx->pc = 0x2a7568u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 24));
    // 0x2a756c: 0x3043001f
    ctx->pc = 0x2a756cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 31));
    // 0x2a7570: 0x3c04003b
    ctx->pc = 0x2a7570u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7574: 0x2484f040
    ctx->pc = 0x2a7574u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963264));
    // 0x2a7578: 0x60282d
    ctx->pc = 0x2a7578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a757c: 0xc0b4a34
    ctx->pc = 0x2A757Cu;
    SET_GPR_U32(ctx, 31, 0x2A7584u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7584u; }
    }
    if (ctx->pc != 0x2A7584u) { return; }
    ctx->pc = 0x2A7584u;
    // 0x2a7584: 0x8fc30020
    ctx->pc = 0x2a7584u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a7588: 0x30620003
    ctx->pc = 0x2a7588u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
    // 0x2a758c: 0x14400005
    ctx->pc = 0x2A758Cu;
    {
        const bool branch_taken_0x2a758c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a758c) {
            ctx->pc = 0x2A75A4u;
            goto label_2a75a4;
        }
    }
    ctx->pc = 0x2A7594u;
    // 0x2a7594: 0x3c04003b
    ctx->pc = 0x2a7594u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7598: 0x2484f068
    ctx->pc = 0x2a7598u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963304));
    // 0x2a759c: 0xc0b4a34
    ctx->pc = 0x2A759Cu;
    SET_GPR_U32(ctx, 31, 0x2A75A4u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A75A4u; }
    }
    if (ctx->pc != 0x2A75A4u) { return; }
    ctx->pc = 0x2A75A4u;
label_2a75a4:
    // 0x2a75a4: 0x8fc30020
    ctx->pc = 0x2a75a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a75a8: 0x30620003
    ctx->pc = 0x2a75a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
    // 0x2a75ac: 0x24030001
    ctx->pc = 0x2a75acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a75b0: 0x14430005
    ctx->pc = 0x2A75B0u;
    {
        const bool branch_taken_0x2a75b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2a75b0) {
            ctx->pc = 0x2A75C8u;
            goto label_2a75c8;
        }
    }
    ctx->pc = 0x2A75B8u;
    // 0x2a75b8: 0x3c04003b
    ctx->pc = 0x2a75b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a75bc: 0x2484f080
    ctx->pc = 0x2a75bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963328));
    // 0x2a75c0: 0xc0b4a34
    ctx->pc = 0x2A75C0u;
    SET_GPR_U32(ctx, 31, 0x2A75C8u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A75C8u; }
    }
    if (ctx->pc != 0x2A75C8u) { return; }
    ctx->pc = 0x2A75C8u;
label_2a75c8:
    // 0x2a75c8: 0x8fc30020
    ctx->pc = 0x2a75c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a75cc: 0x30620003
    ctx->pc = 0x2a75ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
    // 0x2a75d0: 0x24030002
    ctx->pc = 0x2a75d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a75d4: 0x14430005
    ctx->pc = 0x2A75D4u;
    {
        const bool branch_taken_0x2a75d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2a75d4) {
            ctx->pc = 0x2A75ECu;
            goto label_2a75ec;
        }
    }
    ctx->pc = 0x2A75DCu;
    // 0x2a75dc: 0x3c04003b
    ctx->pc = 0x2a75dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a75e0: 0x2484f0a0
    ctx->pc = 0x2a75e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963360));
    // 0x2a75e4: 0xc0b4a34
    ctx->pc = 0x2A75E4u;
    SET_GPR_U32(ctx, 31, 0x2A75ECu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A75ECu; }
    }
    if (ctx->pc != 0x2A75ECu) { return; }
    ctx->pc = 0x2A75ECu;
label_2a75ec:
    // 0x2a75ec: 0x8fc30020
    ctx->pc = 0x2a75ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a75f0: 0x30620003
    ctx->pc = 0x2a75f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
    // 0x2a75f4: 0x24030003
    ctx->pc = 0x2a75f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a75f8: 0x14430005
    ctx->pc = 0x2A75F8u;
    {
        const bool branch_taken_0x2a75f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2a75f8) {
            ctx->pc = 0x2A7610u;
            goto label_2a7610;
        }
    }
    ctx->pc = 0x2A7600u;
    // 0x2a7600: 0x3c04003b
    ctx->pc = 0x2a7600u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7604: 0x2484f0c0
    ctx->pc = 0x2a7604u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963392));
    // 0x2a7608: 0xc0b4a34
    ctx->pc = 0x2A7608u;
    SET_GPR_U32(ctx, 31, 0x2A7610u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7610u; }
    }
    if (ctx->pc != 0x2A7610u) { return; }
    ctx->pc = 0x2A7610u;
label_2a7610:
    // 0x2a7610: 0x8fc30020
    ctx->pc = 0x2a7610u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a7614: 0x31082
    ctx->pc = 0x2a7614u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 2));
    // 0x2a7618: 0x30430001
    ctx->pc = 0x2a7618u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a761c: 0x14600007
    ctx->pc = 0x2A761Cu;
    {
        const bool branch_taken_0x2a761c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a761c) {
            ctx->pc = 0x2A763Cu;
            goto label_2a763c;
        }
    }
    ctx->pc = 0x2A7624u;
    // 0x2a7624: 0x3c04003b
    ctx->pc = 0x2a7624u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7628: 0x2484f0e0
    ctx->pc = 0x2a7628u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963424));
    // 0x2a762c: 0xc0b4a34
    ctx->pc = 0x2A762Cu;
    SET_GPR_U32(ctx, 31, 0x2A7634u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7634u; }
    }
    if (ctx->pc != 0x2A7634u) { return; }
    ctx->pc = 0x2A7634u;
    // 0x2a7634: 0x10000005
    ctx->pc = 0x2A7634u;
    {
        const bool branch_taken_0x2a7634 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7634) {
            ctx->pc = 0x2A764Cu;
            goto label_2a764c;
        }
    }
    ctx->pc = 0x2A763Cu;
label_2a763c:
    // 0x2a763c: 0x3c04003b
    ctx->pc = 0x2a763cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7640: 0x2484f0f8
    ctx->pc = 0x2a7640u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963448));
    // 0x2a7644: 0xc0b4a34
    ctx->pc = 0x2A7644u;
    SET_GPR_U32(ctx, 31, 0x2A764Cu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A764Cu; }
    }
    if (ctx->pc != 0x2A764Cu) { return; }
    ctx->pc = 0x2A764Cu;
label_2a764c:
    // 0x2a764c: 0x3c04003b
    ctx->pc = 0x2a764cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7650: 0x2484ec38
    ctx->pc = 0x2a7650u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962232));
    // 0x2a7654: 0xc0b4a34
    ctx->pc = 0x2A7654u;
    SET_GPR_U32(ctx, 31, 0x2A765Cu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A765Cu; }
    }
    if (ctx->pc != 0x2A765Cu) { return; }
    ctx->pc = 0x2A765Cu;
    // 0x2a765c: 0x3c04003b
    ctx->pc = 0x2a765cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7660: 0x2484f110
    ctx->pc = 0x2a7660u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963472));
    // 0x2a7664: 0x8fc50000
    ctx->pc = 0x2a7664u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7668: 0xc0b4a34
    ctx->pc = 0x2A7668u;
    SET_GPR_U32(ctx, 31, 0x2A7670u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7670u; }
    }
    if (ctx->pc != 0x2A7670u) { return; }
    ctx->pc = 0x2A7670u;
    // 0x2a7670: 0x8fc30024
    ctx->pc = 0x2a7670u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x2a7674: 0x31382
    ctx->pc = 0x2a7674u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 14));
    // 0x2a7678: 0x30430003
    ctx->pc = 0x2a7678u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 3));
    // 0x2a767c: 0x14600005
    ctx->pc = 0x2A767Cu;
    {
        const bool branch_taken_0x2a767c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a767c) {
            ctx->pc = 0x2A7694u;
            goto label_2a7694;
        }
    }
    ctx->pc = 0x2A7684u;
    // 0x2a7684: 0x3c04003b
    ctx->pc = 0x2a7684u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7688: 0x2484f120
    ctx->pc = 0x2a7688u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963488));
    // 0x2a768c: 0xc0b4a34
    ctx->pc = 0x2A768Cu;
    SET_GPR_U32(ctx, 31, 0x2A7694u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7694u; }
    }
    if (ctx->pc != 0x2A7694u) { return; }
    ctx->pc = 0x2A7694u;
label_2a7694:
    // 0x2a7694: 0x8fc30024
    ctx->pc = 0x2a7694u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x2a7698: 0x31382
    ctx->pc = 0x2a7698u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 14));
    // 0x2a769c: 0x30430003
    ctx->pc = 0x2a769cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 3));
    // 0x2a76a0: 0x24020001
    ctx->pc = 0x2a76a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a76a4: 0x14620005
    ctx->pc = 0x2A76A4u;
    {
        const bool branch_taken_0x2a76a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2a76a4) {
            ctx->pc = 0x2A76BCu;
            goto label_2a76bc;
        }
    }
    ctx->pc = 0x2A76ACu;
    // 0x2a76ac: 0x3c04003b
    ctx->pc = 0x2a76acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a76b0: 0x2484f140
    ctx->pc = 0x2a76b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963520));
    // 0x2a76b4: 0xc0b4a34
    ctx->pc = 0x2A76B4u;
    SET_GPR_U32(ctx, 31, 0x2A76BCu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A76BCu; }
    }
    if (ctx->pc != 0x2A76BCu) { return; }
    ctx->pc = 0x2A76BCu;
label_2a76bc:
    // 0x2a76bc: 0x8fc30024
    ctx->pc = 0x2a76bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x2a76c0: 0x31382
    ctx->pc = 0x2a76c0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 14));
    // 0x2a76c4: 0x30430003
    ctx->pc = 0x2a76c4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 3));
    // 0x2a76c8: 0x24020002
    ctx->pc = 0x2a76c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a76cc: 0x14620005
    ctx->pc = 0x2A76CCu;
    {
        const bool branch_taken_0x2a76cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2a76cc) {
            ctx->pc = 0x2A76E4u;
            goto label_2a76e4;
        }
    }
    ctx->pc = 0x2A76D4u;
    // 0x2a76d4: 0x3c04003b
    ctx->pc = 0x2a76d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a76d8: 0x2484f150
    ctx->pc = 0x2a76d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963536));
    // 0x2a76dc: 0xc0b4a34
    ctx->pc = 0x2A76DCu;
    SET_GPR_U32(ctx, 31, 0x2A76E4u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A76E4u; }
    }
    if (ctx->pc != 0x2A76E4u) { return; }
    ctx->pc = 0x2A76E4u;
label_2a76e4:
    // 0x2a76e4: 0x8fc30024
    ctx->pc = 0x2a76e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x2a76e8: 0x31382
    ctx->pc = 0x2a76e8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 14));
    // 0x2a76ec: 0x30430003
    ctx->pc = 0x2a76ecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 3));
    // 0x2a76f0: 0x24020003
    ctx->pc = 0x2a76f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a76f4: 0x14620005
    ctx->pc = 0x2A76F4u;
    {
        const bool branch_taken_0x2a76f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2a76f4) {
            ctx->pc = 0x2A770Cu;
            goto label_2a770c;
        }
    }
    ctx->pc = 0x2A76FCu;
    // 0x2a76fc: 0x3c04003b
    ctx->pc = 0x2a76fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7700: 0x2484f170
    ctx->pc = 0x2a7700u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963568));
    // 0x2a7704: 0xc0b4a34
    ctx->pc = 0x2A7704u;
    SET_GPR_U32(ctx, 31, 0x2A770Cu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A770Cu; }
    }
    if (ctx->pc != 0x2A770Cu) { return; }
    ctx->pc = 0x2A770Cu;
label_2a770c:
    // 0x2a770c: 0x8fc30024
    ctx->pc = 0x2a770cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x2a7710: 0x30620001
    ctx->pc = 0x2a7710u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2a7714: 0x10400005
    ctx->pc = 0x2A7714u;
    {
        const bool branch_taken_0x2a7714 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7714) {
            ctx->pc = 0x2A772Cu;
            goto label_2a772c;
        }
    }
    ctx->pc = 0x2A771Cu;
    // 0x2a771c: 0x3c04003b
    ctx->pc = 0x2a771cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7720: 0x2484f1a0
    ctx->pc = 0x2a7720u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963616));
    // 0x2a7724: 0xc0b4a34
    ctx->pc = 0x2A7724u;
    SET_GPR_U32(ctx, 31, 0x2A772Cu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A772Cu; }
    }
    if (ctx->pc != 0x2A772Cu) { return; }
    ctx->pc = 0x2A772Cu;
label_2a772c:
    // 0x2a772c: 0x8fc30024
    ctx->pc = 0x2a772cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x2a7730: 0x31042
    ctx->pc = 0x2a7730u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2a7734: 0x30430001
    ctx->pc = 0x2a7734u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a7738: 0x10600005
    ctx->pc = 0x2A7738u;
    {
        const bool branch_taken_0x2a7738 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7738) {
            ctx->pc = 0x2A7750u;
            goto label_2a7750;
        }
    }
    ctx->pc = 0x2A7740u;
    // 0x2a7740: 0x3c04003b
    ctx->pc = 0x2a7740u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7744: 0x2484f1b8
    ctx->pc = 0x2a7744u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963640));
    // 0x2a7748: 0xc0b4a34
    ctx->pc = 0x2A7748u;
    SET_GPR_U32(ctx, 31, 0x2A7750u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7750u; }
    }
    if (ctx->pc != 0x2A7750u) { return; }
    ctx->pc = 0x2A7750u;
label_2a7750:
    // 0x2a7750: 0x8fc30024
    ctx->pc = 0x2a7750u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x2a7754: 0x31082
    ctx->pc = 0x2a7754u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 2));
    // 0x2a7758: 0x30430001
    ctx->pc = 0x2a7758u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a775c: 0x10600005
    ctx->pc = 0x2A775Cu;
    {
        const bool branch_taken_0x2a775c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a775c) {
            ctx->pc = 0x2A7774u;
            goto label_2a7774;
        }
    }
    ctx->pc = 0x2A7764u;
    // 0x2a7764: 0x3c04003b
    ctx->pc = 0x2a7764u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7768: 0x2484f1d0
    ctx->pc = 0x2a7768u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963664));
    // 0x2a776c: 0xc0b4a34
    ctx->pc = 0x2A776Cu;
    SET_GPR_U32(ctx, 31, 0x2A7774u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7774u; }
    }
    if (ctx->pc != 0x2A7774u) { return; }
    ctx->pc = 0x2A7774u;
label_2a7774:
    // 0x2a7774: 0x8fc30024
    ctx->pc = 0x2a7774u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x2a7778: 0x310c2
    ctx->pc = 0x2a7778u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 3));
    // 0x2a777c: 0x30430001
    ctx->pc = 0x2a777cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a7780: 0x10600005
    ctx->pc = 0x2A7780u;
    {
        const bool branch_taken_0x2a7780 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7780) {
            ctx->pc = 0x2A7798u;
            goto label_2a7798;
        }
    }
    ctx->pc = 0x2A7788u;
    // 0x2a7788: 0x3c04003b
    ctx->pc = 0x2a7788u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a778c: 0x2484f1e8
    ctx->pc = 0x2a778cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963688));
    // 0x2a7790: 0xc0b4a34
    ctx->pc = 0x2A7790u;
    SET_GPR_U32(ctx, 31, 0x2A7798u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7798u; }
    }
    if (ctx->pc != 0x2A7798u) { return; }
    ctx->pc = 0x2A7798u;
label_2a7798:
    // 0x2a7798: 0x3c04003b
    ctx->pc = 0x2a7798u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a779c: 0x2484ec38
    ctx->pc = 0x2a779cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962232));
    // 0x2a77a0: 0xc0b4a34
    ctx->pc = 0x2A77A0u;
    SET_GPR_U32(ctx, 31, 0x2A77A8u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A77A8u; }
    }
    if (ctx->pc != 0x2A77A8u) { return; }
    ctx->pc = 0x2A77A8u;
    // 0x2a77a8: 0x3c0e82d
    ctx->pc = 0x2a77a8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a77ac: 0xdfbf0050
    ctx->pc = 0x2a77acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a77b0: 0xdfbe0040
    ctx->pc = 0x2a77b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a77b4: 0xdfb00030
    ctx->pc = 0x2a77b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a77b8: 0x27bd0060
    ctx->pc = 0x2a77b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a77bc: 0x3e00008
    ctx->pc = 0x2A77BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A6E68u: goto label_2a6e68;
            case 0x2A6E78u: goto label_2a6e78;
            case 0x2A6EC8u: goto label_2a6ec8;
            case 0x2A6EE0u: goto label_2a6ee0;
            case 0x2A6F04u: goto label_2a6f04;
            case 0x2A6F28u: goto label_2a6f28;
            case 0x2A6F4Cu: goto label_2a6f4c;
            case 0x2A6F68u: goto label_2a6f68;
            case 0x2A6FB4u: goto label_2a6fb4;
            case 0x2A6FD8u: goto label_2a6fd8;
            case 0x2A6FFCu: goto label_2a6ffc;
            case 0x2A7020u: goto label_2a7020;
            case 0x2A7048u: goto label_2a7048;
            case 0x2A7070u: goto label_2a7070;
            case 0x2A7098u: goto label_2a7098;
            case 0x2A70C0u: goto label_2a70c0;
            case 0x2A70E8u: goto label_2a70e8;
            case 0x2A7110u: goto label_2a7110;
            case 0x2A7138u: goto label_2a7138;
            case 0x2A7160u: goto label_2a7160;
            case 0x2A7188u: goto label_2a7188;
            case 0x2A71B0u: goto label_2a71b0;
            case 0x2A71CCu: goto label_2a71cc;
            case 0x2A7234u: goto label_2a7234;
            case 0x2A724Cu: goto label_2a724c;
            case 0x2A7270u: goto label_2a7270;
            case 0x2A7294u: goto label_2a7294;
            case 0x2A72B8u: goto label_2a72b8;
            case 0x2A72D4u: goto label_2a72d4;
            case 0x2A72F4u: goto label_2a72f4;
            case 0x2A7354u: goto label_2a7354;
            case 0x2A7364u: goto label_2a7364;
            case 0x2A7398u: goto label_2a7398;
            case 0x2A73A8u: goto label_2a73a8;
            case 0x2A73DCu: goto label_2a73dc;
            case 0x2A73ECu: goto label_2a73ec;
            case 0x2A7420u: goto label_2a7420;
            case 0x2A7430u: goto label_2a7430;
            case 0x2A7478u: goto label_2a7478;
            case 0x2A7488u: goto label_2a7488;
            case 0x2A74C4u: goto label_2a74c4;
            case 0x2A74D4u: goto label_2a74d4;
            case 0x2A74DCu: goto label_2a74dc;
            case 0x2A74FCu: goto label_2a74fc;
            case 0x2A751Cu: goto label_2a751c;
            case 0x2A7540u: goto label_2a7540;
            case 0x2A7564u: goto label_2a7564;
            case 0x2A75A4u: goto label_2a75a4;
            case 0x2A75C8u: goto label_2a75c8;
            case 0x2A75ECu: goto label_2a75ec;
            case 0x2A7610u: goto label_2a7610;
            case 0x2A763Cu: goto label_2a763c;
            case 0x2A764Cu: goto label_2a764c;
            case 0x2A7694u: goto label_2a7694;
            case 0x2A76BCu: goto label_2a76bc;
            case 0x2A76E4u: goto label_2a76e4;
            case 0x2A770Cu: goto label_2a770c;
            case 0x2A772Cu: goto label_2a772c;
            case 0x2A7750u: goto label_2a7750;
            case 0x2A7774u: goto label_2a7774;
            case 0x2A7798u: goto label_2a7798;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A77C4u;
}
