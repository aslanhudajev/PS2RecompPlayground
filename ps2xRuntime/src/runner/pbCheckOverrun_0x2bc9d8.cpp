#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbCheckOverrun
// Address: 0x2bc9d8 - 0x2bcb0c
void pbCheckOverrun_0x2bc9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bc9d8u;

    // 0x2bc9d8: 0x27bdfef0
    ctx->pc = 0x2bc9d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2bc9dc: 0xffbf0100
    ctx->pc = 0x2bc9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x2bc9e0: 0xffbe00f0
    ctx->pc = 0x2bc9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x2bc9e4: 0xffb700e0
    ctx->pc = 0x2bc9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x2bc9e8: 0xffb600d0
    ctx->pc = 0x2bc9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2bc9ec: 0xffb500c0
    ctx->pc = 0x2bc9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x2bc9f0: 0xffb400b0
    ctx->pc = 0x2bc9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2bc9f4: 0xffb300a0
    ctx->pc = 0x2bc9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x2bc9f8: 0xffb20090
    ctx->pc = 0x2bc9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2bc9fc: 0xffb10080
    ctx->pc = 0x2bc9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x2bca00: 0xffb00070
    ctx->pc = 0x2bca00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2bca04: 0x80a82d
    ctx->pc = 0x2bca04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca08: 0x24120001
    ctx->pc = 0x2bca08u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bca0c: 0x982d
    ctx->pc = 0x2bca0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca10: 0xa02d
    ctx->pc = 0x2bca10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca14: 0x3c1e003b
    ctx->pc = 0x2bca14u;
    SET_GPR_U32(ctx, 30, ((uint32_t)59 << 16));
    // 0x2bca18: 0x3c17ffff
    ctx->pc = 0x2bca18u;
    SET_GPR_U32(ctx, 23, ((uint32_t)65535 << 16));
    // 0x2bca1c: 0x36f7ffff
    ctx->pc = 0x2bca1cu;
    SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 23), 65535));
    // 0x2bca20: 0x3c16dead
    ctx->pc = 0x2bca20u;
    SET_GPR_U32(ctx, 22, ((uint32_t)57005 << 16));
    // 0x2bca24: 0x36d6beef
    ctx->pc = 0x2bca24u;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 22), 48879));
    // 0x2bca28: 0x882d
    ctx->pc = 0x2bca28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca2c: 0x0
    ctx->pc = 0x2bca2cu;
    // NOP
label_2bca30:
    // 0x2bca30: 0x802d
    ctx->pc = 0x2bca30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca34: 0x0
    ctx->pc = 0x2bca34u;
    // NOP
label_2bca38:
    // 0x2bca38: 0x3a0202d
    ctx->pc = 0x2bca38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca3c: 0x27c562e8
    ctx->pc = 0x2bca3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 25320));
    // 0x2bca40: 0x280302d
    ctx->pc = 0x2bca40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca44: 0xc0b6252
    ctx->pc = 0x2BCA44u;
    SET_GPR_U32(ctx, 31, 0x2BCA4Cu);
    ctx->pc = 0x2BCA48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA4Cu; }
    }
    if (ctx->pc != 0x2BCA4Cu) { return; }
    ctx->pc = 0x2BCA4Cu;
    // 0x2bca4c: 0x2a0202d
    ctx->pc = 0x2bca4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca50: 0x3a0282d
    ctx->pc = 0x2bca50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca54: 0xc0acd4a
    ctx->pc = 0x2BCA54u;
    SET_GPR_U32(ctx, 31, 0x2BCA5Cu);
    ctx->pc = 0x2BCA58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3528u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1DataI_0x2b3528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA5Cu; }
    }
    if (ctx->pc != 0x2BCA5Cu) { return; }
    ctx->pc = 0x2BCA5Cu;
    // 0x2bca5c: 0x10570003
    ctx->pc = 0x2BCA5Cu;
    {
        const bool branch_taken_0x2bca5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 23));
        ctx->pc = 0x2BCA60u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        if (branch_taken_0x2bca5c) {
            ctx->pc = 0x2BCA6Cu;
            goto label_2bca6c;
        }
    }
    ctx->pc = 0x2BCA64u;
    // 0x2bca64: 0x561026
    ctx->pc = 0x2bca64u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2bca68: 0x62980b
    ctx->pc = 0x2bca68u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
label_2bca6c:
    // 0x2bca6c: 0x26100001
    ctx->pc = 0x2bca6cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2bca70: 0x2a020004
    ctx->pc = 0x2bca70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x2bca74: 0x1440fff0
    ctx->pc = 0x2BCA74u;
    {
        const bool branch_taken_0x2bca74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BCA78u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x2bca74) {
            ctx->pc = 0x2BCA38u;
            goto label_2bca38;
        }
    }
    ctx->pc = 0x2BCA7Cu;
    // 0x2bca7c: 0x26310001
    ctx->pc = 0x2bca7cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2bca80: 0x2a220004
    ctx->pc = 0x2bca80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x2bca84: 0x5440ffec
    ctx->pc = 0x2BCA84u;
    {
        const bool branch_taken_0x2bca84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bca84) {
            ctx->pc = 0x2BCA88u;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2BCA38u;
            goto label_2bca38;
        }
    }
    ctx->pc = 0x2BCA8Cu;
    // 0x2bca8c: 0x26940001
    ctx->pc = 0x2bca8cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x2bca90: 0x2a820002
    ctx->pc = 0x2bca90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 2));
    // 0x2bca94: 0x1440ffe6
    ctx->pc = 0x2BCA94u;
    {
        const bool branch_taken_0x2bca94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BCA98u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bca94) {
            ctx->pc = 0x2BCA30u;
            goto label_2bca30;
        }
    }
    ctx->pc = 0x2BCA9Cu;
    // 0x2bca9c: 0x1260000f
    ctx->pc = 0x2BCA9Cu;
    {
        const bool branch_taken_0x2bca9c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BCAA0u;
        SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
        if (branch_taken_0x2bca9c) {
            ctx->pc = 0x2BCADCu;
            goto label_2bcadc;
        }
    }
    ctx->pc = 0x2BCAA4u;
    // 0x2bcaa4: 0xc0b4a34
    ctx->pc = 0x2BCAA4u;
    SET_GPR_U32(ctx, 31, 0x2BCAACu);
    ctx->pc = 0x2BCAA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 25336));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAACu; }
    }
    if (ctx->pc != 0x2BCAACu) { return; }
    ctx->pc = 0x2BCAACu;
    // 0x2bcaac: 0x3c04003b
    ctx->pc = 0x2bcaacu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bcab0: 0x24846330
    ctx->pc = 0x2bcab0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25392));
    // 0x2bcab4: 0xc0b4a34
    ctx->pc = 0x2BCAB4u;
    SET_GPR_U32(ctx, 31, 0x2BCABCu);
    ctx->pc = 0x2BCAB8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCABCu; }
    }
    if (ctx->pc != 0x2BCABCu) { return; }
    ctx->pc = 0x2BCABCu;
    // 0x2bcabc: 0x3c04003b
    ctx->pc = 0x2bcabcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bcac0: 0xc0b4a34
    ctx->pc = 0x2BCAC0u;
    SET_GPR_U32(ctx, 31, 0x2BCAC8u);
    ctx->pc = 0x2BCAC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25448));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAC8u; }
    }
    if (ctx->pc != 0x2BCAC8u) { return; }
    ctx->pc = 0x2BCAC8u;
    // 0x2bcac8: 0xc0b4a34
    ctx->pc = 0x2BCAC8u;
    SET_GPR_U32(ctx, 31, 0x2BCAD0u);
    ctx->pc = 0x2BCACCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 25336));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAD0u; }
    }
    if (ctx->pc != 0x2BCAD0u) { return; }
    ctx->pc = 0x2BCAD0u;
    // 0x2bcad0: 0x8ea30000
    ctx->pc = 0x2bcad0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2bcad4: 0x24020027
    ctx->pc = 0x2bcad4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 39));
    // 0x2bcad8: 0xac62003c
    ctx->pc = 0x2bcad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
label_2bcadc:
    // 0x2bcadc: 0xdfbf0100
    ctx->pc = 0x2bcadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bcae0: 0xdfbe00f0
    ctx->pc = 0x2bcae0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bcae4: 0xdfb700e0
    ctx->pc = 0x2bcae4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bcae8: 0xdfb600d0
    ctx->pc = 0x2bcae8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bcaec: 0xdfb500c0
    ctx->pc = 0x2bcaecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bcaf0: 0xdfb400b0
    ctx->pc = 0x2bcaf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2bcaf4: 0xdfb300a0
    ctx->pc = 0x2bcaf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bcaf8: 0xdfb20090
    ctx->pc = 0x2bcaf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bcafc: 0xdfb10080
    ctx->pc = 0x2bcafcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bcb00: 0xdfb00070
    ctx->pc = 0x2bcb00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bcb04: 0x3e00008
    ctx->pc = 0x2BCB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCB08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BCA30u: goto label_2bca30;
            case 0x2BCA38u: goto label_2bca38;
            case 0x2BCA6Cu: goto label_2bca6c;
            case 0x2BCADCu: goto label_2bcadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BCB0Cu;
}
