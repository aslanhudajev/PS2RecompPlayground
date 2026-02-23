#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvhdec_Recover
// Address: 0x187a18 - 0x187b80
void mpvhdec_Recover_0x187a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvhdec_Recover");


    ctx->pc = 0x187a18u;

    // 0x187a18: 0x27bdff90
    ctx->pc = 0x187a18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x187a1c: 0xffb50050
    ctx->pc = 0x187a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x187a20: 0xffb30030
    ctx->pc = 0x187a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x187a24: 0xa0a82d
    ctx->pc = 0x187a24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a28: 0xffb20020
    ctx->pc = 0x187a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x187a2c: 0x100982d
    ctx->pc = 0x187a2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a30: 0xffb10010
    ctx->pc = 0x187a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x187a34: 0xc0902d
    ctx->pc = 0x187a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a38: 0xffb00000
    ctx->pc = 0x187a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x187a3c: 0xe0882d
    ctx->pc = 0x187a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a40: 0xffbf0060
    ctx->pc = 0x187a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x187a44: 0x249001bc
    ctx->pc = 0x187a44u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 444));
    // 0x187a48: 0xffb40040
    ctx->pc = 0x187a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x187a4c: 0x8c820c60
    ctx->pc = 0x187a4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 3168)));
    // 0x187a50: 0x1040000c
    ctx->pc = 0x187A50u;
    {
        const bool branch_taken_0x187a50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x187A54u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 4), 364)));
        if (branch_taken_0x187a50) {
            ctx->pc = 0x187A84u;
            goto label_187a84;
        }
    }
    ctx->pc = 0x187A58u;
    // 0x187a58: 0x8c830c64
    ctx->pc = 0x187a58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 3172)));
    // 0x187a5c: 0xac800c60
    ctx->pc = 0x187a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3168), GPR_U32(ctx, 0));
    // 0x187a60: 0x24630001
    ctx->pc = 0x187a60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x187a64: 0xac830c64
    ctx->pc = 0x187a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3172), GPR_U32(ctx, 3));
    // 0x187a68: 0x8e02000c
    ctx->pc = 0x187a68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x187a6c: 0x24420001
    ctx->pc = 0x187a6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x187a70: 0x1280001a
    ctx->pc = 0x187A70u;
    {
        const bool branch_taken_0x187a70 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x187A74u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x187a70) {
            ctx->pc = 0x187ADCu;
            goto label_187adc;
        }
    }
    ctx->pc = 0x187A78u;
    // 0x187a78: 0x8e020010
    ctx->pc = 0x187a78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x187a7c: 0x24420001
    ctx->pc = 0x187a7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x187a80: 0xae020010
    ctx->pc = 0x187a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_187a84:
    // 0x187a84: 0x8e220000
    ctx->pc = 0x187a84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187a88: 0x28420004
    ctx->pc = 0x187a88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x187a8c: 0x1040000a
    ctx->pc = 0x187A8Cu;
    {
        const bool branch_taken_0x187a8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x187a8c) {
            ctx->pc = 0x187AB8u;
            goto label_187ab8;
        }
    }
    ctx->pc = 0x187A94u;
    // 0x187a94: 0x8e04000c
    ctx->pc = 0x187a94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x187a98: 0x3c03ffff
    ctx->pc = 0x187a98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x187a9c: 0x3c02ffff
    ctx->pc = 0x187a9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x187aa0: 0x3463fffe
    ctx->pc = 0x187aa0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65534));
    // 0x187aa4: 0x24840001
    ctx->pc = 0x187aa4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x187aa8: 0x3442fffd
    ctx->pc = 0x187aa8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65533));
    // 0x187aac: 0x74100a
    ctx->pc = 0x187aacu;
    if (GPR_U32(ctx, 20) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x187ab0: 0x1000002a
    ctx->pc = 0x187AB0u;
    {
        const bool branch_taken_0x187ab0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187AB4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
        if (branch_taken_0x187ab0) {
            ctx->pc = 0x187B5Cu;
            goto label_187b5c;
        }
    }
    ctx->pc = 0x187AB8u;
label_187ab8:
    // 0x187ab8: 0xc061610
    ctx->pc = 0x187AB8u;
    SET_GPR_U32(ctx, 31, 0x187AC0u);
    ctx->pc = 0x187ABCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x185840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_CheckDelim_0x185840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AC0u; }
        else if (ctx->pc != 0x187AC0u) { ctx->pc = 0x187AC0u; }
    }
    if (ctx->pc != 0x187AC0u) { return; }
    ctx->pc = 0x187AC0u;
    // 0x187ac0: 0x551024
    ctx->pc = 0x187ac0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x187ac4: 0x14400025
    ctx->pc = 0x187AC4u;
    {
        const bool branch_taken_0x187ac4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x187AC8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x187ac4) {
            ctx->pc = 0x187B5Cu;
            goto label_187b5c;
        }
    }
    ctx->pc = 0x187ACCu;
    // 0x187acc: 0x8e02000c
    ctx->pc = 0x187accu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x187ad0: 0x24420001
    ctx->pc = 0x187ad0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x187ad4: 0x16800004
    ctx->pc = 0x187AD4u;
    {
        const bool branch_taken_0x187ad4 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x187AD8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x187ad4) {
            ctx->pc = 0x187AE8u;
            goto label_187ae8;
        }
    }
    ctx->pc = 0x187ADCu;
label_187adc:
    // 0x187adc: 0x3c02ffff
    ctx->pc = 0x187adcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x187ae0: 0x1000001e
    ctx->pc = 0x187AE0u;
    {
        const bool branch_taken_0x187ae0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187AE4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
        if (branch_taken_0x187ae0) {
            ctx->pc = 0x187B5Cu;
            goto label_187b5c;
        }
    }
    ctx->pc = 0x187AE8u;
label_187ae8:
    // 0x187ae8: 0x8e440000
    ctx->pc = 0x187ae8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187aec: 0x2a0302d
    ctx->pc = 0x187aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187af0: 0xc061676
    ctx->pc = 0x187AF0u;
    SET_GPR_U32(ctx, 31, 0x187AF8u);
    ctx->pc = 0x187AF4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1859D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_SearchDelim_0x1859d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AF8u; }
        else if (ctx->pc != 0x187AF8u) { ctx->pc = 0x187AF8u; }
    }
    if (ctx->pc != 0x187AF8u) { return; }
    ctx->pc = 0x187AF8u;
    // 0x187af8: 0x1440000c
    ctx->pc = 0x187AF8u;
    {
        const bool branch_taken_0x187af8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x187AFCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        if (branch_taken_0x187af8) {
            ctx->pc = 0x187B2Cu;
            goto label_187b2c;
        }
    }
    ctx->pc = 0x187B00u;
    // 0x187b00: 0x8e250000
    ctx->pc = 0x187b00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187b04: 0x3c02ffff
    ctx->pc = 0x187b04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x187b08: 0x8e630000
    ctx->pc = 0x187b08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x187b0c: 0x3442fffd
    ctx->pc = 0x187b0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65533));
    // 0x187b10: 0x651821
    ctx->pc = 0x187b10u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x187b14: 0xae630000
    ctx->pc = 0x187b14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x187b18: 0x8e250000
    ctx->pc = 0x187b18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187b1c: 0xae200000
    ctx->pc = 0x187b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x187b20: 0x852021
    ctx->pc = 0x187b20u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x187b24: 0x1000000d
    ctx->pc = 0x187B24u;
    {
        const bool branch_taken_0x187b24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187B28u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x187b24) {
            ctx->pc = 0x187B5Cu;
            goto label_187b5c;
        }
    }
    ctx->pc = 0x187B2Cu;
label_187b2c:
    // 0x187b2c: 0x8e630000
    ctx->pc = 0x187b2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x187b30: 0x442023
    ctx->pc = 0x187b30u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x187b34: 0xae420000
    ctx->pc = 0x187b34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x187b38: 0x641821
    ctx->pc = 0x187b38u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187b3c: 0xae630000
    ctx->pc = 0x187b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x187b40: 0x8e220000
    ctx->pc = 0x187b40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187b44: 0x441023
    ctx->pc = 0x187b44u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x187b48: 0xae220000
    ctx->pc = 0x187b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x187b4c: 0x8e030010
    ctx->pc = 0x187b4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x187b50: 0x24630001
    ctx->pc = 0x187b50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x187b54: 0xae030010
    ctx->pc = 0x187b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x187b58: 0x102d
    ctx->pc = 0x187b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187b5c:
    // 0x187b5c: 0xdfbf0060
    ctx->pc = 0x187b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x187b60: 0xdfb50050
    ctx->pc = 0x187b60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x187b64: 0xdfb40040
    ctx->pc = 0x187b64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187b68: 0xdfb30030
    ctx->pc = 0x187b68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187b6c: 0xdfb20020
    ctx->pc = 0x187b6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187b70: 0xdfb10010
    ctx->pc = 0x187b70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187b74: 0xdfb00000
    ctx->pc = 0x187b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187b78: 0x3e00008
    ctx->pc = 0x187B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187B7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187A84u: goto label_187a84;
            case 0x187AB8u: goto label_187ab8;
            case 0x187ADCu: goto label_187adc;
            case 0x187AE8u: goto label_187ae8;
            case 0x187B2Cu: goto label_187b2c;
            case 0x187B5Cu: goto label_187b5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187B80u;
}
