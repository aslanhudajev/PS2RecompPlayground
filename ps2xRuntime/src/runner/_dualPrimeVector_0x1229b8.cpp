#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _dualPrimeVector
// Address: 0x1229b8 - 0x122b40
void _dualPrimeVector_0x1229b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1229b8u;

    // 0x1229b8: 0x3c080017
    ctx->pc = 0x1229b8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)23 << 16));
    // 0x1229bc: 0x24020003
    ctx->pc = 0x1229bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1229c0: 0x8d0319ac
    ctx->pc = 0x1229c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 6572)));
    // 0x1229c4: 0x14620045
    ctx->pc = 0x1229C4u;
    {
        const bool branch_taken_0x1229c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1229C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x1229c4) {
            ctx->pc = 0x122ADCu;
            goto label_122adc;
        }
    }
    ctx->pc = 0x1229CCu;
    // 0x1229cc: 0x8c4319b0
    ctx->pc = 0x1229ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6576)));
    // 0x1229d0: 0x50600024
    ctx->pc = 0x1229D0u;
    {
        const bool branch_taken_0x1229d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1229d0) {
            ctx->pc = 0x1229D4u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x122A64u;
            goto label_122a64;
        }
    }
    ctx->pc = 0x1229D8u;
    // 0x1229d8: 0x18c00004
    ctx->pc = 0x1229D8u;
    {
        const bool branch_taken_0x1229d8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1229DCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x1229d8) {
            ctx->pc = 0x1229ECu;
            goto label_1229ec;
        }
    }
    ctx->pc = 0x1229E0u;
    // 0x1229e0: 0x24c20001
    ctx->pc = 0x1229e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1229e4: 0x10000002
    ctx->pc = 0x1229E4u;
    {
        const bool branch_taken_0x1229e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1229E8u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x1229e4) {
            ctx->pc = 0x1229F0u;
            goto label_1229f0;
        }
    }
    ctx->pc = 0x1229ECu;
label_1229ec:
    // 0x1229ec: 0x61043
    ctx->pc = 0x1229ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
label_1229f0:
    // 0x1229f0: 0x431021
    ctx->pc = 0x1229f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1229f4: 0xac820000
    ctx->pc = 0x1229f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1229f8: 0x18e00004
    ctx->pc = 0x1229F8u;
    {
        const bool branch_taken_0x1229f8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1229FCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x1229f8) {
            ctx->pc = 0x122A0Cu;
            goto label_122a0c;
        }
    }
    ctx->pc = 0x122A00u;
    // 0x122a00: 0x24e20001
    ctx->pc = 0x122a00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
    // 0x122a04: 0x10000002
    ctx->pc = 0x122A04u;
    {
        const bool branch_taken_0x122a04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122A08u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x122a04) {
            ctx->pc = 0x122A10u;
            goto label_122a10;
        }
    }
    ctx->pc = 0x122A0Cu;
label_122a0c:
    // 0x122a0c: 0x71043
    ctx->pc = 0x122a0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_122a10:
    // 0x122a10: 0x431021
    ctx->pc = 0x122a10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x122a14: 0x2442ffff
    ctx->pc = 0x122a14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x122a18: 0xac820004
    ctx->pc = 0x122a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x122a1c: 0x61040
    ctx->pc = 0x122a1cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
    // 0x122a20: 0x461021
    ctx->pc = 0x122a20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x122a24: 0x18c00002
    ctx->pc = 0x122A24u;
    {
        const bool branch_taken_0x122a24 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x122A28u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x122a24) {
            ctx->pc = 0x122A30u;
            goto label_122a30;
        }
    }
    ctx->pc = 0x122A2Cu;
    // 0x122a2c: 0x24420001
    ctx->pc = 0x122a2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_122a30:
    // 0x122a30: 0x21043
    ctx->pc = 0x122a30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x122a34: 0x431021
    ctx->pc = 0x122a34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x122a38: 0xac820008
    ctx->pc = 0x122a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x122a3c: 0x71040
    ctx->pc = 0x122a3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
    // 0x122a40: 0x471021
    ctx->pc = 0x122a40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x122a44: 0x18e00002
    ctx->pc = 0x122A44u;
    {
        const bool branch_taken_0x122a44 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x122A48u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x122a44) {
            ctx->pc = 0x122A50u;
            goto label_122a50;
        }
    }
    ctx->pc = 0x122A4Cu;
    // 0x122a4c: 0x24420001
    ctx->pc = 0x122a4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_122a50:
    // 0x122a50: 0x21043
    ctx->pc = 0x122a50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_122a54:
    // 0x122a54: 0x451021
    ctx->pc = 0x122a54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x122a58: 0x24420001
    ctx->pc = 0x122a58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x122a5c: 0x3e00008
    ctx->pc = 0x122A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122A60u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1229ECu: goto label_1229ec;
            case 0x1229F0u: goto label_1229f0;
            case 0x122A0Cu: goto label_122a0c;
            case 0x122A10u: goto label_122a10;
            case 0x122A30u: goto label_122a30;
            case 0x122A50u: goto label_122a50;
            case 0x122A54u: goto label_122a54;
            case 0x122A64u: goto label_122a64;
            case 0x122A74u: goto label_122a74;
            case 0x122A94u: goto label_122a94;
            case 0x122AB8u: goto label_122ab8;
            case 0x122ABCu: goto label_122abc;
            case 0x122AD4u: goto label_122ad4;
            case 0x122ADCu: goto label_122adc;
            case 0x122AF0u: goto label_122af0;
            case 0x122AF4u: goto label_122af4;
            case 0x122B10u: goto label_122b10;
            case 0x122B14u: goto label_122b14;
            case 0x122B34u: goto label_122b34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122A64u;
label_122a64:
    // 0x122a64: 0x8ca30000
    ctx->pc = 0x122a64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122a68: 0x18c00002
    ctx->pc = 0x122A68u;
    {
        const bool branch_taken_0x122a68 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x122A6Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        if (branch_taken_0x122a68) {
            ctx->pc = 0x122A74u;
            goto label_122a74;
        }
    }
    ctx->pc = 0x122A70u;
    // 0x122a70: 0x24420001
    ctx->pc = 0x122a70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_122a74:
    // 0x122a74: 0x21043
    ctx->pc = 0x122a74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x122a78: 0x431021
    ctx->pc = 0x122a78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x122a7c: 0xac820000
    ctx->pc = 0x122a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x122a80: 0x71040
    ctx->pc = 0x122a80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
    // 0x122a84: 0x471021
    ctx->pc = 0x122a84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x122a88: 0x18e00002
    ctx->pc = 0x122A88u;
    {
        const bool branch_taken_0x122a88 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x122A8Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x122a88) {
            ctx->pc = 0x122A94u;
            goto label_122a94;
        }
    }
    ctx->pc = 0x122A90u;
    // 0x122a90: 0x24420001
    ctx->pc = 0x122a90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_122a94:
    // 0x122a94: 0x21043
    ctx->pc = 0x122a94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x122a98: 0x431021
    ctx->pc = 0x122a98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x122a9c: 0x2442ffff
    ctx->pc = 0x122a9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x122aa0: 0xac820004
    ctx->pc = 0x122aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x122aa4: 0x18c00004
    ctx->pc = 0x122AA4u;
    {
        const bool branch_taken_0x122aa4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x122AA8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x122aa4) {
            ctx->pc = 0x122AB8u;
            goto label_122ab8;
        }
    }
    ctx->pc = 0x122AACu;
    // 0x122aac: 0x24c20001
    ctx->pc = 0x122aacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 1));
    // 0x122ab0: 0x10000002
    ctx->pc = 0x122AB0u;
    {
        const bool branch_taken_0x122ab0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122AB4u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x122ab0) {
            ctx->pc = 0x122ABCu;
            goto label_122abc;
        }
    }
    ctx->pc = 0x122AB8u;
label_122ab8:
    // 0x122ab8: 0x61043
    ctx->pc = 0x122ab8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
label_122abc:
    // 0x122abc: 0x431021
    ctx->pc = 0x122abcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x122ac0: 0xac820008
    ctx->pc = 0x122ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x122ac4: 0x18e00003
    ctx->pc = 0x122AC4u;
    {
        const bool branch_taken_0x122ac4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x122AC8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x122ac4) {
            ctx->pc = 0x122AD4u;
            goto label_122ad4;
        }
    }
    ctx->pc = 0x122ACCu;
    // 0x122acc: 0x1000ffe0
    ctx->pc = 0x122ACCu;
    {
        const bool branch_taken_0x122acc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122AD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x122acc) {
            ctx->pc = 0x122A50u;
            goto label_122a50;
        }
    }
    ctx->pc = 0x122AD4u;
label_122ad4:
    // 0x122ad4: 0x1000ffdf
    ctx->pc = 0x122AD4u;
    {
        const bool branch_taken_0x122ad4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122AD8u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        if (branch_taken_0x122ad4) {
            ctx->pc = 0x122A54u;
            goto label_122a54;
        }
    }
    ctx->pc = 0x122ADCu;
label_122adc:
    // 0x122adc: 0x18c00004
    ctx->pc = 0x122ADCu;
    {
        const bool branch_taken_0x122adc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x122AE0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x122adc) {
            ctx->pc = 0x122AF0u;
            goto label_122af0;
        }
    }
    ctx->pc = 0x122AE4u;
    // 0x122ae4: 0x24c20001
    ctx->pc = 0x122ae4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 1));
    // 0x122ae8: 0x10000002
    ctx->pc = 0x122AE8u;
    {
        const bool branch_taken_0x122ae8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122AECu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x122ae8) {
            ctx->pc = 0x122AF4u;
            goto label_122af4;
        }
    }
    ctx->pc = 0x122AF0u;
label_122af0:
    // 0x122af0: 0x61043
    ctx->pc = 0x122af0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
label_122af4:
    // 0x122af4: 0x431021
    ctx->pc = 0x122af4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x122af8: 0xac820000
    ctx->pc = 0x122af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x122afc: 0x18e00004
    ctx->pc = 0x122AFCu;
    {
        const bool branch_taken_0x122afc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x122B00u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x122afc) {
            ctx->pc = 0x122B10u;
            goto label_122b10;
        }
    }
    ctx->pc = 0x122B04u;
    // 0x122b04: 0x24e20001
    ctx->pc = 0x122b04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
    // 0x122b08: 0x10000002
    ctx->pc = 0x122B08u;
    {
        const bool branch_taken_0x122b08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122B0Cu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x122b08) {
            ctx->pc = 0x122B14u;
            goto label_122b14;
        }
    }
    ctx->pc = 0x122B10u;
label_122b10:
    // 0x122b10: 0x71043
    ctx->pc = 0x122b10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_122b14:
    // 0x122b14: 0x452821
    ctx->pc = 0x122b14u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x122b18: 0x8d0319ac
    ctx->pc = 0x122b18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 6572)));
    // 0x122b1c: 0x24020001
    ctx->pc = 0x122b1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x122b20: 0x14620004
    ctx->pc = 0x122B20u;
    {
        const bool branch_taken_0x122b20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x122B24u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x122b20) {
            ctx->pc = 0x122B34u;
            goto label_122b34;
        }
    }
    ctx->pc = 0x122B28u;
    // 0x122b28: 0x24a2ffff
    ctx->pc = 0x122b28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x122b2c: 0x3e00008
    ctx->pc = 0x122B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122B30u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1229ECu: goto label_1229ec;
            case 0x1229F0u: goto label_1229f0;
            case 0x122A0Cu: goto label_122a0c;
            case 0x122A10u: goto label_122a10;
            case 0x122A30u: goto label_122a30;
            case 0x122A50u: goto label_122a50;
            case 0x122A54u: goto label_122a54;
            case 0x122A64u: goto label_122a64;
            case 0x122A74u: goto label_122a74;
            case 0x122A94u: goto label_122a94;
            case 0x122AB8u: goto label_122ab8;
            case 0x122ABCu: goto label_122abc;
            case 0x122AD4u: goto label_122ad4;
            case 0x122ADCu: goto label_122adc;
            case 0x122AF0u: goto label_122af0;
            case 0x122AF4u: goto label_122af4;
            case 0x122B10u: goto label_122b10;
            case 0x122B14u: goto label_122b14;
            case 0x122B34u: goto label_122b34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122B34u;
label_122b34:
    // 0x122b34: 0x24a20001
    ctx->pc = 0x122b34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
    // 0x122b38: 0x3e00008
    ctx->pc = 0x122B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122B3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1229ECu: goto label_1229ec;
            case 0x1229F0u: goto label_1229f0;
            case 0x122A0Cu: goto label_122a0c;
            case 0x122A10u: goto label_122a10;
            case 0x122A30u: goto label_122a30;
            case 0x122A50u: goto label_122a50;
            case 0x122A54u: goto label_122a54;
            case 0x122A64u: goto label_122a64;
            case 0x122A74u: goto label_122a74;
            case 0x122A94u: goto label_122a94;
            case 0x122AB8u: goto label_122ab8;
            case 0x122ABCu: goto label_122abc;
            case 0x122AD4u: goto label_122ad4;
            case 0x122ADCu: goto label_122adc;
            case 0x122AF0u: goto label_122af0;
            case 0x122AF4u: goto label_122af4;
            case 0x122B10u: goto label_122b10;
            case 0x122B14u: goto label_122b14;
            case 0x122B34u: goto label_122b34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122B40u;
}
