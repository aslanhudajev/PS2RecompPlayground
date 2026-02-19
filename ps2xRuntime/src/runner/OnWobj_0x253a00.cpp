#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: OnWobj
// Address: 0x253a00 - 0x253b08
void OnWobj_0x253a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x253a00u;

    // 0x253a00: 0x27bdff80
    ctx->pc = 0x253a00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x253a04: 0xffbf0070
    ctx->pc = 0x253a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x253a08: 0xffb60060
    ctx->pc = 0x253a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x253a0c: 0xffb50050
    ctx->pc = 0x253a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x253a10: 0xffb40040
    ctx->pc = 0x253a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x253a14: 0xffb30030
    ctx->pc = 0x253a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x253a18: 0xffb20020
    ctx->pc = 0x253a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x253a1c: 0xffb10010
    ctx->pc = 0x253a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x253a20: 0xffb00000
    ctx->pc = 0x253a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253a24: 0x80982d
    ctx->pc = 0x253a24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a28: 0xa0b02d
    ctx->pc = 0x253a28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a2c: 0x3c020032
    ctx->pc = 0x253a2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x253a30: 0x24511bc0
    ctx->pc = 0x253a30u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x253a34: 0x3c020033
    ctx->pc = 0x253a34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x253a38: 0x2452dfd0
    ctx->pc = 0x253a38u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x253a3c: 0x802d
    ctx->pc = 0x253a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a40: 0x24150001
    ctx->pc = 0x253a40u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
    // 0x253a44: 0x24140008
    ctx->pc = 0x253a44u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 8));
label_253a48:
    // 0x253a48: 0x8e2200fc
    ctx->pc = 0x253a48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x253a4c: 0x50550008
    ctx->pc = 0x253A4Cu;
    {
        const bool branch_taken_0x253a4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 21));
        if (branch_taken_0x253a4c) {
            ctx->pc = 0x253A50u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2204)));
            ctx->pc = 0x253A70u;
            goto label_253a70;
        }
    }
    ctx->pc = 0x253A54u;
    // 0x253a54: 0x50540006
    ctx->pc = 0x253A54u;
    {
        const bool branch_taken_0x253a54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 20));
        if (branch_taken_0x253a54) {
            ctx->pc = 0x253A58u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2204)));
            ctx->pc = 0x253A70u;
            goto label_253a70;
        }
    }
    ctx->pc = 0x253A5Cu;
    // 0x253a5c: 0xc08cbd0
    ctx->pc = 0x253A5Cu;
    SET_GPR_U32(ctx, 31, 0x253A64u);
    ctx->pc = 0x253A60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x232F40u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerSelecting_0x232f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253A64u; }
    }
    if (ctx->pc != 0x253A64u) { return; }
    ctx->pc = 0x253A64u;
    // 0x253a64: 0x50400006
    ctx->pc = 0x253A64u;
    {
        const bool branch_taken_0x253a64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x253a64) {
            ctx->pc = 0x253A68u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x253A80u;
            goto label_253a80;
        }
    }
    ctx->pc = 0x253A6Cu;
    // 0x253a6c: 0x8e22089c
    ctx->pc = 0x253a6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2204)));
label_253a70:
    // 0x253a70: 0x14530003
    ctx->pc = 0x253A70u;
    {
        const bool branch_taken_0x253a70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x253A74u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x253a70) {
            ctx->pc = 0x253A80u;
            goto label_253a80;
        }
    }
    ctx->pc = 0x253A78u;
    // 0x253a78: 0x10000019
    ctx->pc = 0x253A78u;
    {
        const bool branch_taken_0x253a78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x253A7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x253a78) {
            ctx->pc = 0x253AE0u;
            goto label_253ae0;
        }
    }
    ctx->pc = 0x253A80u;
label_253a80:
    // 0x253a80: 0x2a020004
    ctx->pc = 0x253a80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x253a84: 0x1440fff0
    ctx->pc = 0x253A84u;
    {
        const bool branch_taken_0x253a84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x253A88u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        if (branch_taken_0x253a84) {
            ctx->pc = 0x253A48u;
            goto label_253a48;
        }
    }
    ctx->pc = 0x253A8Cu;
    // 0x253a8c: 0x12c00013
    ctx->pc = 0x253A8Cu;
    {
        const bool branch_taken_0x253a8c = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x253A90u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x253a8c) {
            ctx->pc = 0x253ADCu;
            goto label_253adc;
        }
    }
    ctx->pc = 0x253A94u;
    // 0x253a94: 0x8c423c00
    ctx->pc = 0x253a94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15360)));
    // 0x253a98: 0x18400010
    ctx->pc = 0x253A98u;
    {
        const bool branch_taken_0x253a98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x253A9Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x253a98) {
            ctx->pc = 0x253ADCu;
            goto label_253adc;
        }
    }
    ctx->pc = 0x253AA0u;
    // 0x253aa0: 0x24040001
    ctx->pc = 0x253aa0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x253aa4: 0x3c020033
    ctx->pc = 0x253aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x253aa8: 0x8c433c00
    ctx->pc = 0x253aa8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 15360)));
    // 0x253aac: 0x0
    ctx->pc = 0x253aacu;
    // NOP
label_253ab0:
    // 0x253ab0: 0x8e4200c8
    ctx->pc = 0x253ab0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x253ab4: 0x14440006
    ctx->pc = 0x253AB4u;
    {
        const bool branch_taken_0x253ab4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x253AB8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x253ab4) {
            ctx->pc = 0x253AD0u;
            goto label_253ad0;
        }
    }
    ctx->pc = 0x253ABCu;
    // 0x253abc: 0x8e4202ac
    ctx->pc = 0x253abcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 684)));
    // 0x253ac0: 0x14530004
    ctx->pc = 0x253AC0u;
    {
        const bool branch_taken_0x253ac0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x253AC4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
        if (branch_taken_0x253ac0) {
            ctx->pc = 0x253AD4u;
            goto label_253ad4;
        }
    }
    ctx->pc = 0x253AC8u;
    // 0x253ac8: 0x10000005
    ctx->pc = 0x253AC8u;
    {
        const bool branch_taken_0x253ac8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x253ACCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x253ac8) {
            ctx->pc = 0x253AE0u;
            goto label_253ae0;
        }
    }
    ctx->pc = 0x253AD0u;
label_253ad0:
    // 0x253ad0: 0x203102a
    ctx->pc = 0x253ad0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
label_253ad4:
    // 0x253ad4: 0x1440fff6
    ctx->pc = 0x253AD4u;
    {
        const bool branch_taken_0x253ad4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x253AD8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 944));
        if (branch_taken_0x253ad4) {
            ctx->pc = 0x253AB0u;
            goto label_253ab0;
        }
    }
    ctx->pc = 0x253ADCu;
label_253adc:
    // 0x253adc: 0x102d
    ctx->pc = 0x253adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253ae0:
    // 0x253ae0: 0xdfbf0070
    ctx->pc = 0x253ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x253ae4: 0xdfb60060
    ctx->pc = 0x253ae4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x253ae8: 0xdfb50050
    ctx->pc = 0x253ae8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253aec: 0xdfb40040
    ctx->pc = 0x253aecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253af0: 0xdfb30030
    ctx->pc = 0x253af0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253af4: 0xdfb20020
    ctx->pc = 0x253af4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253af8: 0xdfb10010
    ctx->pc = 0x253af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253afc: 0xdfb00000
    ctx->pc = 0x253afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253b00: 0x3e00008
    ctx->pc = 0x253B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253B04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x253A48u: goto label_253a48;
            case 0x253A70u: goto label_253a70;
            case 0x253A80u: goto label_253a80;
            case 0x253AB0u: goto label_253ab0;
            case 0x253AD0u: goto label_253ad0;
            case 0x253AD4u: goto label_253ad4;
            case 0x253ADCu: goto label_253adc;
            case 0x253AE0u: goto label_253ae0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x253B08u;
}
