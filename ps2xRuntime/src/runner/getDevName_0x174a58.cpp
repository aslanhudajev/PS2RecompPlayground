#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getDevName
// Address: 0x174a58 - 0x174ba0
void getDevName_0x174a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getDevName");


    ctx->pc = 0x174a58u;

    // 0x174a58: 0x27bdffd0
    ctx->pc = 0x174a58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x174a5c: 0xffb10010
    ctx->pc = 0x174a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x174a60: 0xffb00000
    ctx->pc = 0x174a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174a64: 0xa0882d
    ctx->pc = 0x174a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a68: 0xffbf0020
    ctx->pc = 0x174a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x174a6c: 0x10c00047
    ctx->pc = 0x174A6Cu;
    {
        const bool branch_taken_0x174a6c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x174A70u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174a6c) {
            ctx->pc = 0x174B8Cu;
            goto label_174b8c;
        }
    }
    ctx->pc = 0x174A74u;
    // 0x174a74: 0x80c30000
    ctx->pc = 0x174a74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x174a78: 0x2402003a
    ctx->pc = 0x174a78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 58));
    // 0x174a7c: 0x10620012
    ctx->pc = 0x174A7Cu;
    {
        const bool branch_taken_0x174a7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x174A80u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174a7c) {
            ctx->pc = 0x174AC8u;
            goto label_174ac8;
        }
    }
    ctx->pc = 0x174A84u;
    // 0x174a84: 0x10600016
    ctx->pc = 0x174A84u;
    {
        const bool branch_taken_0x174a84 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x174A88u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174a84) {
            ctx->pc = 0x174AE0u;
            goto label_174ae0;
        }
    }
    ctx->pc = 0x174A8Cu;
    // 0x174a8c: 0x2071821
    ctx->pc = 0x174a8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_174a90:
    // 0x174a90: 0x90840000
    ctx->pc = 0x174a90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x174a94: 0x24e70001
    ctx->pc = 0x174a94u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x174a98: 0x28e20129
    ctx->pc = 0x174a98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 297));
    // 0x174a9c: 0x1040000c
    ctx->pc = 0x174A9Cu;
    {
        const bool branch_taken_0x174a9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174AA0u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x174a9c) {
            ctx->pc = 0x174AD0u;
            goto label_174ad0;
        }
    }
    ctx->pc = 0x174AA4u;
    // 0x174aa4: 0xc72021
    ctx->pc = 0x174aa4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x174aa8: 0x2402003a
    ctx->pc = 0x174aa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 58));
    // 0x174aac: 0x80830000
    ctx->pc = 0x174aacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x174ab0: 0x50620009
    ctx->pc = 0x174AB0u;
    {
        const bool branch_taken_0x174ab0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x174ab0) {
            ctx->pc = 0x174AB4u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x174AD8u;
            goto label_174ad8;
        }
    }
    ctx->pc = 0x174AB8u;
    // 0x174ab8: 0x1460fff5
    ctx->pc = 0x174AB8u;
    {
        const bool branch_taken_0x174ab8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x174ABCu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        if (branch_taken_0x174ab8) {
            ctx->pc = 0x174A90u;
            goto label_174a90;
        }
    }
    ctx->pc = 0x174AC0u;
    // 0x174ac0: 0x10000005
    ctx->pc = 0x174AC0u;
    {
        const bool branch_taken_0x174ac0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174AC4u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x174ac0) {
            ctx->pc = 0x174AD8u;
            goto label_174ad8;
        }
    }
    ctx->pc = 0x174AC8u;
label_174ac8:
    // 0x174ac8: 0x10000002
    ctx->pc = 0x174AC8u;
    {
        const bool branch_taken_0x174ac8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174ACCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174ac8) {
            ctx->pc = 0x174AD4u;
            goto label_174ad4;
        }
    }
    ctx->pc = 0x174AD0u;
label_174ad0:
    // 0x174ad0: 0xc72021
    ctx->pc = 0x174ad0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_174ad4:
    // 0x174ad4: 0x80820000
    ctx->pc = 0x174ad4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_174ad8:
    // 0x174ad8: 0x1440000b
    ctx->pc = 0x174AD8u;
    {
        const bool branch_taken_0x174ad8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x174ADCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        if (branch_taken_0x174ad8) {
            ctx->pc = 0x174B08u;
            goto label_174b08;
        }
    }
    ctx->pc = 0x174AE0u;
label_174ae0:
    // 0x174ae0: 0x2071021
    ctx->pc = 0x174ae0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x174ae4: 0x200202d
    ctx->pc = 0x174ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ae8: 0xc051554
    ctx->pc = 0x174AE8u;
    SET_GPR_U32(ctx, 31, 0x174AF0u);
    ctx->pc = 0x174AECu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AF0u; }
        else if (ctx->pc != 0x174AF0u) { ctx->pc = 0x174AF0u; }
    }
    if (ctx->pc != 0x174AF0u) { return; }
    ctx->pc = 0x174AF0u;
    // 0x174af0: 0x220202d
    ctx->pc = 0x174af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174af4: 0x24460001
    ctx->pc = 0x174af4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 1));
    // 0x174af8: 0xc050c90
    ctx->pc = 0x174AF8u;
    SET_GPR_U32(ctx, 31, 0x174B00u);
    ctx->pc = 0x174AFCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B00u; }
        else if (ctx->pc != 0x174B00u) { ctx->pc = 0x174B00u; }
    }
    if (ctx->pc != 0x174B00u) { return; }
    ctx->pc = 0x174B00u;
    // 0x174b00: 0x10000022
    ctx->pc = 0x174B00u;
    {
        const bool branch_taken_0x174b00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174B04u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x174b00) {
            ctx->pc = 0x174B8Cu;
            goto label_174b8c;
        }
    }
    ctx->pc = 0x174B08u;
label_174b08:
    // 0x174b08: 0x24030002
    ctx->pc = 0x174b08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x174b0c: 0x24e70001
    ctx->pc = 0x174b0cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x174b10: 0x14e30003
    ctx->pc = 0x174B10u;
    {
        const bool branch_taken_0x174b10 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 3));
        ctx->pc = 0x174B14u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x174b10) {
            ctx->pc = 0x174B20u;
            goto label_174b20;
        }
    }
    ctx->pc = 0x174B18u;
    // 0x174b18: 0xa2000000
    ctx->pc = 0x174b18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x174b1c: 0x382d
    ctx->pc = 0x174b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174b20:
    // 0x174b20: 0x28e20129
    ctx->pc = 0x174b20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 297));
    // 0x174b24: 0x10400010
    ctx->pc = 0x174B24u;
    {
        const bool branch_taken_0x174b24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174B28u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174b24) {
            ctx->pc = 0x174B68u;
            goto label_174b68;
        }
    }
    ctx->pc = 0x174B2Cu;
    // 0x174b2c: 0xc71821
    ctx->pc = 0x174b2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x174b30: 0x80620000
    ctx->pc = 0x174b30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174b34: 0x1040000c
    ctx->pc = 0x174B34u;
    {
        const bool branch_taken_0x174b34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174B38u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174b34) {
            ctx->pc = 0x174B68u;
            goto label_174b68;
        }
    }
    ctx->pc = 0x174B3Cu;
    // 0x174b3c: 0xa71823
    ctx->pc = 0x174b3cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_174b40:
    // 0x174b40: 0x90420000
    ctx->pc = 0x174b40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174b44: 0x2231821
    ctx->pc = 0x174b44u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x174b48: 0x24a50001
    ctx->pc = 0x174b48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x174b4c: 0x28a40129
    ctx->pc = 0x174b4cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), 297));
    // 0x174b50: 0x10800005
    ctx->pc = 0x174B50u;
    {
        const bool branch_taken_0x174b50 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x174B54u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x174b50) {
            ctx->pc = 0x174B68u;
            goto label_174b68;
        }
    }
    ctx->pc = 0x174B58u;
    // 0x174b58: 0xc51021
    ctx->pc = 0x174b58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x174b5c: 0x80430000
    ctx->pc = 0x174b5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174b60: 0x1460fff7
    ctx->pc = 0x174B60u;
    {
        const bool branch_taken_0x174b60 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x174B64u;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        if (branch_taken_0x174b60) {
            ctx->pc = 0x174B40u;
            goto label_174b40;
        }
    }
    ctx->pc = 0x174B68u;
label_174b68:
    // 0x174b68: 0xa71023
    ctx->pc = 0x174b68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x174b6c: 0x200202d
    ctx->pc = 0x174b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b70: 0x2221021
    ctx->pc = 0x174b70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x174b74: 0xdfbf0020
    ctx->pc = 0x174b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174b78: 0xdfb10010
    ctx->pc = 0x174b78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174b7c: 0xdfb00000
    ctx->pc = 0x174b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174b80: 0xa0400000
    ctx->pc = 0x174b80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x174b84: 0x805d168
    ctx->pc = 0x174B84u;
    ctx->pc = 0x174B88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1745A0u;
    toUpperStr_0x1745a0(rdram, ctx, runtime); return;
    ctx->pc = 0x174B8Cu;
label_174b8c:
    // 0x174b8c: 0xdfbf0020
    ctx->pc = 0x174b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174b90: 0xdfb10010
    ctx->pc = 0x174b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174b94: 0xdfb00000
    ctx->pc = 0x174b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174b98: 0x3e00008
    ctx->pc = 0x174B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174B9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174A90u: goto label_174a90;
            case 0x174AC8u: goto label_174ac8;
            case 0x174AD0u: goto label_174ad0;
            case 0x174AD4u: goto label_174ad4;
            case 0x174AD8u: goto label_174ad8;
            case 0x174AE0u: goto label_174ae0;
            case 0x174B08u: goto label_174b08;
            case 0x174B20u: goto label_174b20;
            case 0x174B40u: goto label_174b40;
            case 0x174B68u: goto label_174b68;
            case 0x174B8Cu: goto label_174b8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174BA0u;
}
