#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _fpadd_parts
// Address: 0x2f8ac0 - 0x2f8d00
void _fpadd_parts_0x2f8ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f8ac0u;

    // 0x2f8ac0: 0x80402d
    ctx->pc = 0x2f8ac0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8ac4: 0x8d040000
    ctx->pc = 0x2f8ac4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2f8ac8: 0x2c820002
    ctx->pc = 0x2f8ac8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 2));
    // 0x2f8acc: 0x50400003
    ctx->pc = 0x2F8ACCu;
    {
        const bool branch_taken_0x2f8acc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f8acc) {
            ctx->pc = 0x2F8AD0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x2F8ADCu;
            goto label_2f8adc;
        }
    }
    ctx->pc = 0x2F8AD4u;
label_2f8ad4:
    // 0x2f8ad4: 0x3e00008
    ctx->pc = 0x2F8AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8AD8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F8AD4u: goto label_2f8ad4;
            case 0x2F8ADCu: goto label_2f8adc;
            case 0x2F8AE8u: goto label_2f8ae8;
            case 0x2F8AF0u: goto label_2f8af0;
            case 0x2F8B18u: goto label_2f8b18;
            case 0x2F8B5Cu: goto label_2f8b5c;
            case 0x2F8BA0u: goto label_2f8ba0;
            case 0x2F8BC4u: goto label_2f8bc4;
            case 0x2F8BCCu: goto label_2f8bcc;
            case 0x2F8BD8u: goto label_2f8bd8;
            case 0x2F8BFCu: goto label_2f8bfc;
            case 0x2F8C14u: goto label_2f8c14;
            case 0x2F8C20u: goto label_2f8c20;
            case 0x2F8C34u: goto label_2f8c34;
            case 0x2F8C4Cu: goto label_2f8c4c;
            case 0x2F8C5Cu: goto label_2f8c5c;
            case 0x2F8C88u: goto label_2f8c88;
            case 0x2F8CB4u: goto label_2f8cb4;
            case 0x2F8CC4u: goto label_2f8cc4;
            case 0x2F8CF8u: goto label_2f8cf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F8ADCu;
label_2f8adc:
    // 0x2f8adc: 0x2c620002
    ctx->pc = 0x2f8adcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x2f8ae0: 0x10400003
    ctx->pc = 0x2F8AE0u;
    {
        const bool branch_taken_0x2f8ae0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8AE4u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x2f8ae0) {
            ctx->pc = 0x2F8AF0u;
            goto label_2f8af0;
        }
    }
    ctx->pc = 0x2F8AE8u;
label_2f8ae8:
    // 0x2f8ae8: 0x3e00008
    ctx->pc = 0x2F8AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8AECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F8AD4u: goto label_2f8ad4;
            case 0x2F8ADCu: goto label_2f8adc;
            case 0x2F8AE8u: goto label_2f8ae8;
            case 0x2F8AF0u: goto label_2f8af0;
            case 0x2F8B18u: goto label_2f8b18;
            case 0x2F8B5Cu: goto label_2f8b5c;
            case 0x2F8BA0u: goto label_2f8ba0;
            case 0x2F8BC4u: goto label_2f8bc4;
            case 0x2F8BCCu: goto label_2f8bcc;
            case 0x2F8BD8u: goto label_2f8bd8;
            case 0x2F8BFCu: goto label_2f8bfc;
            case 0x2F8C14u: goto label_2f8c14;
            case 0x2F8C20u: goto label_2f8c20;
            case 0x2F8C34u: goto label_2f8c34;
            case 0x2F8C4Cu: goto label_2f8c4c;
            case 0x2F8C5Cu: goto label_2f8c5c;
            case 0x2F8C88u: goto label_2f8c88;
            case 0x2F8CB4u: goto label_2f8cb4;
            case 0x2F8CC4u: goto label_2f8cc4;
            case 0x2F8CF8u: goto label_2f8cf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F8AF0u;
label_2f8af0:
    // 0x2f8af0: 0x14400009
    ctx->pc = 0x2F8AF0u;
    {
        const bool branch_taken_0x2f8af0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F8AF4u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x2f8af0) {
            ctx->pc = 0x2F8B18u;
            goto label_2f8b18;
        }
    }
    ctx->pc = 0x2F8AF8u;
    // 0x2f8af8: 0x1440fff6
    ctx->pc = 0x2F8AF8u;
    {
        const bool branch_taken_0x2f8af8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f8af8) {
            ctx->pc = 0x2F8AD4u;
            goto label_2f8ad4;
        }
    }
    ctx->pc = 0x2F8B00u;
    // 0x2f8b00: 0x8ca30004
    ctx->pc = 0x2f8b00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f8b04: 0x8d020004
    ctx->pc = 0x2f8b04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2f8b08: 0x1043fff2
    ctx->pc = 0x2F8B08u;
    {
        const bool branch_taken_0x2f8b08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2F8B0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
        if (branch_taken_0x2f8b08) {
            ctx->pc = 0x2F8AD4u;
            goto label_2f8ad4;
        }
    }
    ctx->pc = 0x2F8B10u;
    // 0x2f8b10: 0x3e00008
    ctx->pc = 0x2F8B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8B14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15864));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F8AD4u: goto label_2f8ad4;
            case 0x2F8ADCu: goto label_2f8adc;
            case 0x2F8AE8u: goto label_2f8ae8;
            case 0x2F8AF0u: goto label_2f8af0;
            case 0x2F8B18u: goto label_2f8b18;
            case 0x2F8B5Cu: goto label_2f8b5c;
            case 0x2F8BA0u: goto label_2f8ba0;
            case 0x2F8BC4u: goto label_2f8bc4;
            case 0x2F8BCCu: goto label_2f8bcc;
            case 0x2F8BD8u: goto label_2f8bd8;
            case 0x2F8BFCu: goto label_2f8bfc;
            case 0x2F8C14u: goto label_2f8c14;
            case 0x2F8C20u: goto label_2f8c20;
            case 0x2F8C34u: goto label_2f8c34;
            case 0x2F8C4Cu: goto label_2f8c4c;
            case 0x2F8C5Cu: goto label_2f8c5c;
            case 0x2F8C88u: goto label_2f8c88;
            case 0x2F8CB4u: goto label_2f8cb4;
            case 0x2F8CC4u: goto label_2f8cc4;
            case 0x2F8CF8u: goto label_2f8cf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F8B18u;
label_2f8b18:
    // 0x2f8b18: 0x1040fff3
    ctx->pc = 0x2F8B18u;
    {
        const bool branch_taken_0x2f8b18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8B1Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2f8b18) {
            ctx->pc = 0x2F8AE8u;
            goto label_2f8ae8;
        }
    }
    ctx->pc = 0x2F8B20u;
    // 0x2f8b20: 0x1440000e
    ctx->pc = 0x2F8B20u;
    {
        const bool branch_taken_0x2f8b20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F8B24u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x2f8b20) {
            ctx->pc = 0x2F8B5Cu;
            goto label_2f8b5c;
        }
    }
    ctx->pc = 0x2F8B28u;
    // 0x2f8b28: 0x1440ffea
    ctx->pc = 0x2F8B28u;
    {
        const bool branch_taken_0x2f8b28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F8B2Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f8b28) {
            ctx->pc = 0x2F8AD4u;
            goto label_2f8ad4;
        }
    }
    ctx->pc = 0x2F8B30u;
    // 0x2f8b30: 0xdd040000
    ctx->pc = 0x2f8b30u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2f8b34: 0xfcc40000
    ctx->pc = 0x2f8b34u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2f8b38: 0xdd030008
    ctx->pc = 0x2f8b38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2f8b3c: 0xfcc30008
    ctx->pc = 0x2f8b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x2f8b40: 0xdd040010
    ctx->pc = 0x2f8b40u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2f8b44: 0xfcc40010
    ctx->pc = 0x2f8b44u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x2f8b48: 0x8d030004
    ctx->pc = 0x2f8b48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2f8b4c: 0x8ca40004
    ctx->pc = 0x2f8b4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f8b50: 0x641824
    ctx->pc = 0x2f8b50u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f8b54: 0x3e00008
    ctx->pc = 0x2F8B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8B58u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F8AD4u: goto label_2f8ad4;
            case 0x2F8ADCu: goto label_2f8adc;
            case 0x2F8AE8u: goto label_2f8ae8;
            case 0x2F8AF0u: goto label_2f8af0;
            case 0x2F8B18u: goto label_2f8b18;
            case 0x2F8B5Cu: goto label_2f8b5c;
            case 0x2F8BA0u: goto label_2f8ba0;
            case 0x2F8BC4u: goto label_2f8bc4;
            case 0x2F8BCCu: goto label_2f8bcc;
            case 0x2F8BD8u: goto label_2f8bd8;
            case 0x2F8BFCu: goto label_2f8bfc;
            case 0x2F8C14u: goto label_2f8c14;
            case 0x2F8C20u: goto label_2f8c20;
            case 0x2F8C34u: goto label_2f8c34;
            case 0x2F8C4Cu: goto label_2f8c4c;
            case 0x2F8C5Cu: goto label_2f8c5c;
            case 0x2F8C88u: goto label_2f8c88;
            case 0x2F8CB4u: goto label_2f8cb4;
            case 0x2F8CC4u: goto label_2f8cc4;
            case 0x2F8CF8u: goto label_2f8cf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F8B5Cu;
label_2f8b5c:
    // 0x2f8b5c: 0x1040ffe2
    ctx->pc = 0x2F8B5Cu;
    {
        const bool branch_taken_0x2f8b5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8B60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2f8b5c) {
            ctx->pc = 0x2F8AE8u;
            goto label_2f8ae8;
        }
    }
    ctx->pc = 0x2F8B64u;
    // 0x2f8b64: 0x8d070008
    ctx->pc = 0x2f8b64u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2f8b68: 0x8ca90008
    ctx->pc = 0x2f8b68u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2f8b6c: 0xdd0b0010
    ctx->pc = 0x2f8b6cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2f8b70: 0xe91823
    ctx->pc = 0x2f8b70u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2f8b74: 0x43102a
    ctx->pc = 0x2f8b74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2f8b78: 0x32023
    ctx->pc = 0x2f8b78u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2f8b7c: 0x82180a
    ctx->pc = 0x2f8b7cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x2f8b80: 0x28630040
    ctx->pc = 0x2f8b80u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 64));
    // 0x2f8b84: 0x1060001d
    ctx->pc = 0x2F8B84u;
    {
        const bool branch_taken_0x2f8b84 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8B88u;
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        if (branch_taken_0x2f8b84) {
            ctx->pc = 0x2F8BFCu;
            goto label_2f8bfc;
        }
    }
    ctx->pc = 0x2F8B8Cu;
    // 0x2f8b8c: 0x127102a
    ctx->pc = 0x2f8b8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 7)));
    // 0x2f8b90: 0x1040000c
    ctx->pc = 0x2F8B90u;
    {
        const bool branch_taken_0x2f8b90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8B94u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 4)));
        if (branch_taken_0x2f8b90) {
            ctx->pc = 0x2F8BC4u;
            goto label_2f8bc4;
        }
    }
    ctx->pc = 0x2F8B98u;
    // 0x2f8b98: 0x8ca50004
    ctx->pc = 0x2f8b98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f8b9c: 0x0
    ctx->pc = 0x2f8b9cu;
    // NOP
label_2f8ba0:
    // 0x2f8ba0: 0xa107a
    ctx->pc = 0x2f8ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x2f8ba4: 0x25290001
    ctx->pc = 0x2f8ba4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x2f8ba8: 0x31430001
    ctx->pc = 0x2f8ba8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 10), 1));
    // 0x2f8bac: 0x127202a
    ctx->pc = 0x2f8bacu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 7)));
    // 0x2f8bb0: 0x625025
    ctx->pc = 0x2f8bb0u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f8bb4: 0x1480fffa
    ctx->pc = 0x2F8BB4u;
    {
        const bool branch_taken_0x2f8bb4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f8bb4) {
            ctx->pc = 0x2F8BA0u;
            goto label_2f8ba0;
        }
    }
    ctx->pc = 0x2F8BBCu;
    // 0x2f8bbc: 0x10000003
    ctx->pc = 0x2F8BBCu;
    {
        const bool branch_taken_0x2f8bbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8BC0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 9)));
        if (branch_taken_0x2f8bbc) {
            ctx->pc = 0x2F8BCCu;
            goto label_2f8bcc;
        }
    }
    ctx->pc = 0x2F8BC4u;
label_2f8bc4:
    // 0x2f8bc4: 0x8ca50004
    ctx->pc = 0x2f8bc4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f8bc8: 0xe9102a
    ctx->pc = 0x2f8bc8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 9)));
label_2f8bcc:
    // 0x2f8bcc: 0x10400014
    ctx->pc = 0x2F8BCCu;
    {
        const bool branch_taken_0x2f8bcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f8bcc) {
            ctx->pc = 0x2F8C20u;
            goto label_2f8c20;
        }
    }
    ctx->pc = 0x2F8BD4u;
    // 0x2f8bd4: 0x1273823
    ctx->pc = 0x2f8bd4u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_2f8bd8:
    // 0x2f8bd8: 0xb187a
    ctx->pc = 0x2f8bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x2f8bdc: 0x31620001
    ctx->pc = 0x2f8bdcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 11), 1));
    // 0x2f8be0: 0x435825
    ctx->pc = 0x2f8be0u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f8be4: 0x24e7ffff
    ctx->pc = 0x2f8be4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2f8be8: 0x0
    ctx->pc = 0x2f8be8u;
    // NOP
    // 0x2f8bec: 0x14e0fffa
    ctx->pc = 0x2F8BECu;
    {
        const bool branch_taken_0x2f8bec = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f8bec) {
            ctx->pc = 0x2F8BD8u;
            goto label_2f8bd8;
        }
    }
    ctx->pc = 0x2F8BF4u;
    // 0x2f8bf4: 0x1000000a
    ctx->pc = 0x2F8BF4u;
    {
        const bool branch_taken_0x2f8bf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8BF8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f8bf4) {
            ctx->pc = 0x2F8C20u;
            goto label_2f8c20;
        }
    }
    ctx->pc = 0x2F8BFCu;
label_2f8bfc:
    // 0x2f8bfc: 0x127102a
    ctx->pc = 0x2f8bfcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 7)));
    // 0x2f8c00: 0x10400004
    ctx->pc = 0x2F8C00u;
    {
        const bool branch_taken_0x2f8c00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8C04u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 4)));
        if (branch_taken_0x2f8c00) {
            ctx->pc = 0x2F8C14u;
            goto label_2f8c14;
        }
    }
    ctx->pc = 0x2F8C08u;
    // 0x2f8c08: 0x502d
    ctx->pc = 0x2f8c08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8c0c: 0x10000004
    ctx->pc = 0x2F8C0Cu;
    {
        const bool branch_taken_0x2f8c0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8C10u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x2f8c0c) {
            ctx->pc = 0x2F8C20u;
            goto label_2f8c20;
        }
    }
    ctx->pc = 0x2F8C14u;
label_2f8c14:
    // 0x2f8c14: 0x120382d
    ctx->pc = 0x2f8c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8c18: 0x8ca50004
    ctx->pc = 0x2f8c18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f8c1c: 0x582d
    ctx->pc = 0x2f8c1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8c20:
    // 0x2f8c20: 0x11050024
    ctx->pc = 0x2F8C20u;
    {
        const bool branch_taken_0x2f8c20 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 5));
        ctx->pc = 0x2F8C24u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        if (branch_taken_0x2f8c20) {
            ctx->pc = 0x2F8CB4u;
            goto label_2f8cb4;
        }
    }
    ctx->pc = 0x2F8C28u;
    // 0x2f8c28: 0x15000002
    ctx->pc = 0x2F8C28u;
    {
        const bool branch_taken_0x2f8c28 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F8C2Cu;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        if (branch_taken_0x2f8c28) {
            ctx->pc = 0x2F8C34u;
            goto label_2f8c34;
        }
    }
    ctx->pc = 0x2F8C30u;
    // 0x2f8c30: 0x16a102f
    ctx->pc = 0x2f8c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
label_2f8c34:
    // 0x2f8c34: 0x4400005
    ctx->pc = 0x2F8C34u;
    {
        const bool branch_taken_0x2f8c34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F8C38u;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        if (branch_taken_0x2f8c34) {
            ctx->pc = 0x2F8C4Cu;
            goto label_2f8c4c;
        }
    }
    ctx->pc = 0x2F8C3Cu;
    // 0x2f8c3c: 0xacc70008
    ctx->pc = 0x2f8c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x2f8c40: 0xfcc20010
    ctx->pc = 0x2f8c40u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x2f8c44: 0x10000005
    ctx->pc = 0x2F8C44u;
    {
        const bool branch_taken_0x2f8c44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8C48u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x2f8c44) {
            ctx->pc = 0x2F8C5Cu;
            goto label_2f8c5c;
        }
    }
    ctx->pc = 0x2F8C4Cu;
label_2f8c4c:
    // 0x2f8c4c: 0xacc70008
    ctx->pc = 0x2f8c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x2f8c50: 0x24020001
    ctx->pc = 0x2f8c50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8c54: 0xfcc30010
    ctx->pc = 0x2f8c54u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x2f8c58: 0xacc20004
    ctx->pc = 0x2f8c58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_2f8c5c:
    // 0x2f8c5c: 0xdcc50010
    ctx->pc = 0x2f8c5cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2f8c60: 0x2402ffff
    ctx->pc = 0x2f8c60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f8c64: 0x21178
    ctx->pc = 0x2f8c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x2f8c68: 0x2113a
    ctx->pc = 0x2f8c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2f8c6c: 0x64a3ffff
    ctx->pc = 0x2f8c6cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)4294967295);
    // 0x2f8c70: 0x43102b
    ctx->pc = 0x2f8c70u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f8c74: 0x14400013
    ctx->pc = 0x2F8C74u;
    {
        const bool branch_taken_0x2f8c74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F8C78u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f8c74) {
            ctx->pc = 0x2F8CC4u;
            goto label_2f8cc4;
        }
    }
    ctx->pc = 0x2F8C7Cu;
    // 0x2f8c7c: 0x2405ffff
    ctx->pc = 0x2f8c7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f8c80: 0x52978
    ctx->pc = 0x2f8c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x2f8c84: 0x5293a
    ctx->pc = 0x2f8c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_2f8c88:
    // 0x2f8c88: 0x8cc20008
    ctx->pc = 0x2f8c88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2f8c8c: 0x72078
    ctx->pc = 0x2f8c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x2f8c90: 0x6483ffff
    ctx->pc = 0x2f8c90u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)4294967295);
    // 0x2f8c94: 0xfcc40010
    ctx->pc = 0x2f8c94u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x2f8c98: 0x2442ffff
    ctx->pc = 0x2f8c98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f8c9c: 0xa3182b
    ctx->pc = 0x2f8c9cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f8ca0: 0xacc20008
    ctx->pc = 0x2f8ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x2f8ca4: 0x1060fff8
    ctx->pc = 0x2F8CA4u;
    {
        const bool branch_taken_0x2f8ca4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8CA8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f8ca4) {
            ctx->pc = 0x2F8C88u;
            goto label_2f8c88;
        }
    }
    ctx->pc = 0x2F8CACu;
    // 0x2f8cac: 0x10000005
    ctx->pc = 0x2F8CACu;
    {
        const bool branch_taken_0x2f8cac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8CB0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f8cac) {
            ctx->pc = 0x2F8CC4u;
            goto label_2f8cc4;
        }
    }
    ctx->pc = 0x2F8CB4u;
label_2f8cb4:
    // 0x2f8cb4: 0xacc80004
    ctx->pc = 0x2f8cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x2f8cb8: 0xacc70008
    ctx->pc = 0x2f8cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x2f8cbc: 0x40282d
    ctx->pc = 0x2f8cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8cc0: 0xfcc20010
    ctx->pc = 0x2f8cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_2f8cc4:
    // 0x2f8cc4: 0x24030003
    ctx->pc = 0x2f8cc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f8cc8: 0x2402ffff
    ctx->pc = 0x2f8cc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f8ccc: 0x210fa
    ctx->pc = 0x2f8cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2f8cd0: 0x45102b
    ctx->pc = 0x2f8cd0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f8cd4: 0x10400008
    ctx->pc = 0x2F8CD4u;
    {
        const bool branch_taken_0x2f8cd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F8CD8u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x2f8cd4) {
            ctx->pc = 0x2F8CF8u;
            goto label_2f8cf8;
        }
    }
    ctx->pc = 0x2F8CDCu;
    // 0x2f8cdc: 0x8cc20008
    ctx->pc = 0x2f8cdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2f8ce0: 0x5207a
    ctx->pc = 0x2f8ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x2f8ce4: 0x30a30001
    ctx->pc = 0x2f8ce4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 1));
    // 0x2f8ce8: 0x641825
    ctx->pc = 0x2f8ce8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f8cec: 0x24420001
    ctx->pc = 0x2f8cecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f8cf0: 0xfcc30010
    ctx->pc = 0x2f8cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x2f8cf4: 0xacc20008
    ctx->pc = 0x2f8cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_2f8cf8:
    // 0x2f8cf8: 0x3e00008
    ctx->pc = 0x2F8CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8CFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F8AD4u: goto label_2f8ad4;
            case 0x2F8ADCu: goto label_2f8adc;
            case 0x2F8AE8u: goto label_2f8ae8;
            case 0x2F8AF0u: goto label_2f8af0;
            case 0x2F8B18u: goto label_2f8b18;
            case 0x2F8B5Cu: goto label_2f8b5c;
            case 0x2F8BA0u: goto label_2f8ba0;
            case 0x2F8BC4u: goto label_2f8bc4;
            case 0x2F8BCCu: goto label_2f8bcc;
            case 0x2F8BD8u: goto label_2f8bd8;
            case 0x2F8BFCu: goto label_2f8bfc;
            case 0x2F8C14u: goto label_2f8c14;
            case 0x2F8C20u: goto label_2f8c20;
            case 0x2F8C34u: goto label_2f8c34;
            case 0x2F8C4Cu: goto label_2f8c4c;
            case 0x2F8C5Cu: goto label_2f8c5c;
            case 0x2F8C88u: goto label_2f8c88;
            case 0x2F8CB4u: goto label_2f8cb4;
            case 0x2F8CC4u: goto label_2f8cc4;
            case 0x2F8CF8u: goto label_2f8cf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F8D00u;
}
