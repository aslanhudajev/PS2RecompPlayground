#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _fpadd_parts
// Address: 0x1289e0 - 0x128c20
void _fpadd_parts_0x1289e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1289e0u;

    // 0x1289e0: 0x80402d
    ctx->pc = 0x1289e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289e4: 0x8d040000
    ctx->pc = 0x1289e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1289e8: 0x2c820002
    ctx->pc = 0x1289e8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 2));
    // 0x1289ec: 0x50400003
    ctx->pc = 0x1289ECu;
    {
        const bool branch_taken_0x1289ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1289ec) {
            ctx->pc = 0x1289F0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x1289FCu;
            goto label_1289fc;
        }
    }
    ctx->pc = 0x1289F4u;
label_1289f4:
    // 0x1289f4: 0x3e00008
    ctx->pc = 0x1289F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1289F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1289F4u: goto label_1289f4;
            case 0x1289FCu: goto label_1289fc;
            case 0x128A08u: goto label_128a08;
            case 0x128A10u: goto label_128a10;
            case 0x128A38u: goto label_128a38;
            case 0x128A7Cu: goto label_128a7c;
            case 0x128AC0u: goto label_128ac0;
            case 0x128AE4u: goto label_128ae4;
            case 0x128AECu: goto label_128aec;
            case 0x128AF8u: goto label_128af8;
            case 0x128B1Cu: goto label_128b1c;
            case 0x128B34u: goto label_128b34;
            case 0x128B40u: goto label_128b40;
            case 0x128B54u: goto label_128b54;
            case 0x128B6Cu: goto label_128b6c;
            case 0x128B7Cu: goto label_128b7c;
            case 0x128BA8u: goto label_128ba8;
            case 0x128BD4u: goto label_128bd4;
            case 0x128BE4u: goto label_128be4;
            case 0x128C18u: goto label_128c18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1289FCu;
label_1289fc:
    // 0x1289fc: 0x2c620002
    ctx->pc = 0x1289fcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x128a00: 0x10400003
    ctx->pc = 0x128A00u;
    {
        const bool branch_taken_0x128a00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x128A04u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x128a00) {
            ctx->pc = 0x128A10u;
            goto label_128a10;
        }
    }
    ctx->pc = 0x128A08u;
label_128a08:
    // 0x128a08: 0x3e00008
    ctx->pc = 0x128A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128A0Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1289F4u: goto label_1289f4;
            case 0x1289FCu: goto label_1289fc;
            case 0x128A08u: goto label_128a08;
            case 0x128A10u: goto label_128a10;
            case 0x128A38u: goto label_128a38;
            case 0x128A7Cu: goto label_128a7c;
            case 0x128AC0u: goto label_128ac0;
            case 0x128AE4u: goto label_128ae4;
            case 0x128AECu: goto label_128aec;
            case 0x128AF8u: goto label_128af8;
            case 0x128B1Cu: goto label_128b1c;
            case 0x128B34u: goto label_128b34;
            case 0x128B40u: goto label_128b40;
            case 0x128B54u: goto label_128b54;
            case 0x128B6Cu: goto label_128b6c;
            case 0x128B7Cu: goto label_128b7c;
            case 0x128BA8u: goto label_128ba8;
            case 0x128BD4u: goto label_128bd4;
            case 0x128BE4u: goto label_128be4;
            case 0x128C18u: goto label_128c18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128A10u;
label_128a10:
    // 0x128a10: 0x14400009
    ctx->pc = 0x128A10u;
    {
        const bool branch_taken_0x128a10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x128A14u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x128a10) {
            ctx->pc = 0x128A38u;
            goto label_128a38;
        }
    }
    ctx->pc = 0x128A18u;
    // 0x128a18: 0x1440fff6
    ctx->pc = 0x128A18u;
    {
        const bool branch_taken_0x128a18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x128a18) {
            ctx->pc = 0x1289F4u;
            goto label_1289f4;
        }
    }
    ctx->pc = 0x128A20u;
    // 0x128a20: 0x8ca30004
    ctx->pc = 0x128a20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x128a24: 0x8d020004
    ctx->pc = 0x128a24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x128a28: 0x1043fff2
    ctx->pc = 0x128A28u;
    {
        const bool branch_taken_0x128a28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x128A2Cu;
        SET_GPR_S32(ctx, 2, ((uint32_t)117 << 16));
        if (branch_taken_0x128a28) {
            ctx->pc = 0x1289F4u;
            goto label_1289f4;
        }
    }
    ctx->pc = 0x128A30u;
    // 0x128a30: 0x3e00008
    ctx->pc = 0x128A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128A34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294960368));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1289F4u: goto label_1289f4;
            case 0x1289FCu: goto label_1289fc;
            case 0x128A08u: goto label_128a08;
            case 0x128A10u: goto label_128a10;
            case 0x128A38u: goto label_128a38;
            case 0x128A7Cu: goto label_128a7c;
            case 0x128AC0u: goto label_128ac0;
            case 0x128AE4u: goto label_128ae4;
            case 0x128AECu: goto label_128aec;
            case 0x128AF8u: goto label_128af8;
            case 0x128B1Cu: goto label_128b1c;
            case 0x128B34u: goto label_128b34;
            case 0x128B40u: goto label_128b40;
            case 0x128B54u: goto label_128b54;
            case 0x128B6Cu: goto label_128b6c;
            case 0x128B7Cu: goto label_128b7c;
            case 0x128BA8u: goto label_128ba8;
            case 0x128BD4u: goto label_128bd4;
            case 0x128BE4u: goto label_128be4;
            case 0x128C18u: goto label_128c18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128A38u;
label_128a38:
    // 0x128a38: 0x1040fff3
    ctx->pc = 0x128A38u;
    {
        const bool branch_taken_0x128a38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x128A3Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x128a38) {
            ctx->pc = 0x128A08u;
            goto label_128a08;
        }
    }
    ctx->pc = 0x128A40u;
    // 0x128a40: 0x1440000e
    ctx->pc = 0x128A40u;
    {
        const bool branch_taken_0x128a40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x128A44u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x128a40) {
            ctx->pc = 0x128A7Cu;
            goto label_128a7c;
        }
    }
    ctx->pc = 0x128A48u;
    // 0x128a48: 0x1440ffea
    ctx->pc = 0x128A48u;
    {
        const bool branch_taken_0x128a48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x128A4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x128a48) {
            ctx->pc = 0x1289F4u;
            goto label_1289f4;
        }
    }
    ctx->pc = 0x128A50u;
    // 0x128a50: 0xdd040000
    ctx->pc = 0x128a50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x128a54: 0xfcc40000
    ctx->pc = 0x128a54u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x128a58: 0xdd030008
    ctx->pc = 0x128a58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x128a5c: 0xfcc30008
    ctx->pc = 0x128a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x128a60: 0xdd040010
    ctx->pc = 0x128a60u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x128a64: 0xfcc40010
    ctx->pc = 0x128a64u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x128a68: 0x8d030004
    ctx->pc = 0x128a68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x128a6c: 0x8ca40004
    ctx->pc = 0x128a6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x128a70: 0x641824
    ctx->pc = 0x128a70u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128a74: 0x3e00008
    ctx->pc = 0x128A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128A78u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1289F4u: goto label_1289f4;
            case 0x1289FCu: goto label_1289fc;
            case 0x128A08u: goto label_128a08;
            case 0x128A10u: goto label_128a10;
            case 0x128A38u: goto label_128a38;
            case 0x128A7Cu: goto label_128a7c;
            case 0x128AC0u: goto label_128ac0;
            case 0x128AE4u: goto label_128ae4;
            case 0x128AECu: goto label_128aec;
            case 0x128AF8u: goto label_128af8;
            case 0x128B1Cu: goto label_128b1c;
            case 0x128B34u: goto label_128b34;
            case 0x128B40u: goto label_128b40;
            case 0x128B54u: goto label_128b54;
            case 0x128B6Cu: goto label_128b6c;
            case 0x128B7Cu: goto label_128b7c;
            case 0x128BA8u: goto label_128ba8;
            case 0x128BD4u: goto label_128bd4;
            case 0x128BE4u: goto label_128be4;
            case 0x128C18u: goto label_128c18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128A7Cu;
label_128a7c:
    // 0x128a7c: 0x1040ffe2
    ctx->pc = 0x128A7Cu;
    {
        const bool branch_taken_0x128a7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x128A80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x128a7c) {
            ctx->pc = 0x128A08u;
            goto label_128a08;
        }
    }
    ctx->pc = 0x128A84u;
    // 0x128a84: 0x8d070008
    ctx->pc = 0x128a84u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x128a88: 0x8ca90008
    ctx->pc = 0x128a88u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x128a8c: 0xdd0b0010
    ctx->pc = 0x128a8cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x128a90: 0xe91823
    ctx->pc = 0x128a90u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x128a94: 0x43102a
    ctx->pc = 0x128a94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x128a98: 0x32023
    ctx->pc = 0x128a98u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x128a9c: 0x82180a
    ctx->pc = 0x128a9cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x128aa0: 0x28630040
    ctx->pc = 0x128aa0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 64));
    // 0x128aa4: 0x1060001d
    ctx->pc = 0x128AA4u;
    {
        const bool branch_taken_0x128aa4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x128AA8u;
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        if (branch_taken_0x128aa4) {
            ctx->pc = 0x128B1Cu;
            goto label_128b1c;
        }
    }
    ctx->pc = 0x128AACu;
    // 0x128aac: 0x127102a
    ctx->pc = 0x128aacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 7)));
    // 0x128ab0: 0x1040000c
    ctx->pc = 0x128AB0u;
    {
        const bool branch_taken_0x128ab0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x128AB4u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 4)));
        if (branch_taken_0x128ab0) {
            ctx->pc = 0x128AE4u;
            goto label_128ae4;
        }
    }
    ctx->pc = 0x128AB8u;
    // 0x128ab8: 0x8ca50004
    ctx->pc = 0x128ab8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x128abc: 0x0
    ctx->pc = 0x128abcu;
    // NOP
label_128ac0:
    // 0x128ac0: 0xa107a
    ctx->pc = 0x128ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x128ac4: 0x25290001
    ctx->pc = 0x128ac4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x128ac8: 0x31430001
    ctx->pc = 0x128ac8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 10), 1));
    // 0x128acc: 0x127202a
    ctx->pc = 0x128accu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 7)));
    // 0x128ad0: 0x625025
    ctx->pc = 0x128ad0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x128ad4: 0x1480fffa
    ctx->pc = 0x128AD4u;
    {
        const bool branch_taken_0x128ad4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x128ad4) {
            ctx->pc = 0x128AC0u;
            goto label_128ac0;
        }
    }
    ctx->pc = 0x128ADCu;
    // 0x128adc: 0x10000003
    ctx->pc = 0x128ADCu;
    {
        const bool branch_taken_0x128adc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128AE0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 9)));
        if (branch_taken_0x128adc) {
            ctx->pc = 0x128AECu;
            goto label_128aec;
        }
    }
    ctx->pc = 0x128AE4u;
label_128ae4:
    // 0x128ae4: 0x8ca50004
    ctx->pc = 0x128ae4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x128ae8: 0xe9102a
    ctx->pc = 0x128ae8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 9)));
label_128aec:
    // 0x128aec: 0x10400014
    ctx->pc = 0x128AECu;
    {
        const bool branch_taken_0x128aec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x128aec) {
            ctx->pc = 0x128B40u;
            goto label_128b40;
        }
    }
    ctx->pc = 0x128AF4u;
    // 0x128af4: 0x1273823
    ctx->pc = 0x128af4u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_128af8:
    // 0x128af8: 0xb187a
    ctx->pc = 0x128af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x128afc: 0x31620001
    ctx->pc = 0x128afcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 11), 1));
    // 0x128b00: 0x435825
    ctx->pc = 0x128b00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x128b04: 0x24e7ffff
    ctx->pc = 0x128b04u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x128b08: 0x0
    ctx->pc = 0x128b08u;
    // NOP
    // 0x128b0c: 0x14e0fffa
    ctx->pc = 0x128B0Cu;
    {
        const bool branch_taken_0x128b0c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x128b0c) {
            ctx->pc = 0x128AF8u;
            goto label_128af8;
        }
    }
    ctx->pc = 0x128B14u;
    // 0x128b14: 0x1000000a
    ctx->pc = 0x128B14u;
    {
        const bool branch_taken_0x128b14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128B18u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x128b14) {
            ctx->pc = 0x128B40u;
            goto label_128b40;
        }
    }
    ctx->pc = 0x128B1Cu;
label_128b1c:
    // 0x128b1c: 0x127102a
    ctx->pc = 0x128b1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 7)));
    // 0x128b20: 0x10400004
    ctx->pc = 0x128B20u;
    {
        const bool branch_taken_0x128b20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x128B24u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 4)));
        if (branch_taken_0x128b20) {
            ctx->pc = 0x128B34u;
            goto label_128b34;
        }
    }
    ctx->pc = 0x128B28u;
    // 0x128b28: 0x502d
    ctx->pc = 0x128b28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b2c: 0x10000004
    ctx->pc = 0x128B2Cu;
    {
        const bool branch_taken_0x128b2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128B30u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x128b2c) {
            ctx->pc = 0x128B40u;
            goto label_128b40;
        }
    }
    ctx->pc = 0x128B34u;
label_128b34:
    // 0x128b34: 0x120382d
    ctx->pc = 0x128b34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b38: 0x8ca50004
    ctx->pc = 0x128b38u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x128b3c: 0x582d
    ctx->pc = 0x128b3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128b40:
    // 0x128b40: 0x11050024
    ctx->pc = 0x128B40u;
    {
        const bool branch_taken_0x128b40 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 5));
        ctx->pc = 0x128B44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        if (branch_taken_0x128b40) {
            ctx->pc = 0x128BD4u;
            goto label_128bd4;
        }
    }
    ctx->pc = 0x128B48u;
    // 0x128b48: 0x15000002
    ctx->pc = 0x128B48u;
    {
        const bool branch_taken_0x128b48 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x128B4Cu;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        if (branch_taken_0x128b48) {
            ctx->pc = 0x128B54u;
            goto label_128b54;
        }
    }
    ctx->pc = 0x128B50u;
    // 0x128b50: 0x16a102f
    ctx->pc = 0x128b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
label_128b54:
    // 0x128b54: 0x4400005
    ctx->pc = 0x128B54u;
    {
        const bool branch_taken_0x128b54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x128B58u;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        if (branch_taken_0x128b54) {
            ctx->pc = 0x128B6Cu;
            goto label_128b6c;
        }
    }
    ctx->pc = 0x128B5Cu;
    // 0x128b5c: 0xacc70008
    ctx->pc = 0x128b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x128b60: 0xfcc20010
    ctx->pc = 0x128b60u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x128b64: 0x10000005
    ctx->pc = 0x128B64u;
    {
        const bool branch_taken_0x128b64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128B68u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x128b64) {
            ctx->pc = 0x128B7Cu;
            goto label_128b7c;
        }
    }
    ctx->pc = 0x128B6Cu;
label_128b6c:
    // 0x128b6c: 0xacc70008
    ctx->pc = 0x128b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x128b70: 0x24020001
    ctx->pc = 0x128b70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x128b74: 0xfcc30010
    ctx->pc = 0x128b74u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x128b78: 0xacc20004
    ctx->pc = 0x128b78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_128b7c:
    // 0x128b7c: 0xdcc50010
    ctx->pc = 0x128b7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x128b80: 0x2402ffff
    ctx->pc = 0x128b80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128b84: 0x21178
    ctx->pc = 0x128b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x128b88: 0x2113a
    ctx->pc = 0x128b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x128b8c: 0x64a3ffff
    ctx->pc = 0x128b8cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)4294967295);
    // 0x128b90: 0x43102b
    ctx->pc = 0x128b90u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128b94: 0x14400013
    ctx->pc = 0x128B94u;
    {
        const bool branch_taken_0x128b94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x128B98u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x128b94) {
            ctx->pc = 0x128BE4u;
            goto label_128be4;
        }
    }
    ctx->pc = 0x128B9Cu;
    // 0x128b9c: 0x2405ffff
    ctx->pc = 0x128b9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128ba0: 0x52978
    ctx->pc = 0x128ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x128ba4: 0x5293a
    ctx->pc = 0x128ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_128ba8:
    // 0x128ba8: 0x8cc20008
    ctx->pc = 0x128ba8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x128bac: 0x72078
    ctx->pc = 0x128bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x128bb0: 0x6483ffff
    ctx->pc = 0x128bb0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)4294967295);
    // 0x128bb4: 0xfcc40010
    ctx->pc = 0x128bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x128bb8: 0x2442ffff
    ctx->pc = 0x128bb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x128bbc: 0xa3182b
    ctx->pc = 0x128bbcu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x128bc0: 0xacc20008
    ctx->pc = 0x128bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x128bc4: 0x1060fff8
    ctx->pc = 0x128BC4u;
    {
        const bool branch_taken_0x128bc4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x128BC8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x128bc4) {
            ctx->pc = 0x128BA8u;
            goto label_128ba8;
        }
    }
    ctx->pc = 0x128BCCu;
    // 0x128bcc: 0x10000005
    ctx->pc = 0x128BCCu;
    {
        const bool branch_taken_0x128bcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128BD0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x128bcc) {
            ctx->pc = 0x128BE4u;
            goto label_128be4;
        }
    }
    ctx->pc = 0x128BD4u;
label_128bd4:
    // 0x128bd4: 0xacc80004
    ctx->pc = 0x128bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x128bd8: 0xacc70008
    ctx->pc = 0x128bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x128bdc: 0x40282d
    ctx->pc = 0x128bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128be0: 0xfcc20010
    ctx->pc = 0x128be0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_128be4:
    // 0x128be4: 0x24030003
    ctx->pc = 0x128be4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x128be8: 0x2402ffff
    ctx->pc = 0x128be8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128bec: 0x210fa
    ctx->pc = 0x128becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x128bf0: 0x45102b
    ctx->pc = 0x128bf0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x128bf4: 0x10400008
    ctx->pc = 0x128BF4u;
    {
        const bool branch_taken_0x128bf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x128BF8u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x128bf4) {
            ctx->pc = 0x128C18u;
            goto label_128c18;
        }
    }
    ctx->pc = 0x128BFCu;
    // 0x128bfc: 0x8cc20008
    ctx->pc = 0x128bfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x128c00: 0x5207a
    ctx->pc = 0x128c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x128c04: 0x30a30001
    ctx->pc = 0x128c04u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 1));
    // 0x128c08: 0x641825
    ctx->pc = 0x128c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x128c0c: 0x24420001
    ctx->pc = 0x128c0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x128c10: 0xfcc30010
    ctx->pc = 0x128c10u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x128c14: 0xacc20008
    ctx->pc = 0x128c14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_128c18:
    // 0x128c18: 0x3e00008
    ctx->pc = 0x128C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128C1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1289F4u: goto label_1289f4;
            case 0x1289FCu: goto label_1289fc;
            case 0x128A08u: goto label_128a08;
            case 0x128A10u: goto label_128a10;
            case 0x128A38u: goto label_128a38;
            case 0x128A7Cu: goto label_128a7c;
            case 0x128AC0u: goto label_128ac0;
            case 0x128AE4u: goto label_128ae4;
            case 0x128AECu: goto label_128aec;
            case 0x128AF8u: goto label_128af8;
            case 0x128B1Cu: goto label_128b1c;
            case 0x128B34u: goto label_128b34;
            case 0x128B40u: goto label_128b40;
            case 0x128B54u: goto label_128b54;
            case 0x128B6Cu: goto label_128b6c;
            case 0x128B7Cu: goto label_128b7c;
            case 0x128BA8u: goto label_128ba8;
            case 0x128BD4u: goto label_128bd4;
            case 0x128BE4u: goto label_128be4;
            case 0x128C18u: goto label_128c18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128C20u;
}
