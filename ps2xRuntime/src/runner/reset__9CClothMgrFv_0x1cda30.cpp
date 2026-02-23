#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: reset__9CClothMgrFv
// Address: 0x1cda30 - 0x1cdb34
void reset__9CClothMgrFv_0x1cda30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("reset__9CClothMgrFv");


    ctx->pc = 0x1cda30u;

    // 0x1cda30: 0x27bdffd0
    ctx->pc = 0x1cda30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cda34: 0x7fbf0020
    ctx->pc = 0x1cda34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1cda38: 0x7fb10010
    ctx->pc = 0x1cda38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cda3c: 0x7fb00000
    ctx->pc = 0x1cda3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cda40: 0x8c850000
    ctx->pc = 0x1cda40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cda44: 0x24030014
    ctx->pc = 0x1cda44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cda48: 0x10a3002b
    ctx->pc = 0x1CDA48u;
    {
        const bool branch_taken_0x1cda48 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDA4Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cda48) {
            ctx->pc = 0x1CDAF8u;
            goto label_1cdaf8;
        }
    }
    ctx->pc = 0x1CDA50u;
    // 0x1cda50: 0x24030021
    ctx->pc = 0x1cda50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
    // 0x1cda54: 0x10a3001c
    ctx->pc = 0x1CDA54u;
    {
        const bool branch_taken_0x1cda54 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDA58u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cda54) {
            ctx->pc = 0x1CDAC8u;
            goto label_1cdac8;
        }
    }
    ctx->pc = 0x1CDA5Cu;
    // 0x1cda5c: 0x24030047
    ctx->pc = 0x1cda5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 71));
    // 0x1cda60: 0x10a30012
    ctx->pc = 0x1CDA60u;
    {
        const bool branch_taken_0x1cda60 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDA64u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
        if (branch_taken_0x1cda60) {
            ctx->pc = 0x1CDAACu;
            goto label_1cdaac;
        }
    }
    ctx->pc = 0x1CDA68u;
    // 0x1cda68: 0x10a30009
    ctx->pc = 0x1CDA68u;
    {
        const bool branch_taken_0x1cda68 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDA6Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x1cda68) {
            ctx->pc = 0x1CDA90u;
            goto label_1cda90;
        }
    }
    ctx->pc = 0x1CDA70u;
    // 0x1cda70: 0x10a30007
    ctx->pc = 0x1CDA70u;
    {
        const bool branch_taken_0x1cda70 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDA74u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
        if (branch_taken_0x1cda70) {
            ctx->pc = 0x1CDA90u;
            goto label_1cda90;
        }
    }
    ctx->pc = 0x1CDA78u;
    // 0x1cda78: 0x10a30005
    ctx->pc = 0x1CDA78u;
    {
        const bool branch_taken_0x1cda78 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDA7Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 67));
        if (branch_taken_0x1cda78) {
            ctx->pc = 0x1CDA90u;
            goto label_1cda90;
        }
    }
    ctx->pc = 0x1CDA80u;
    // 0x1cda80: 0x10a30003
    ctx->pc = 0x1CDA80u;
    {
        const bool branch_taken_0x1cda80 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1cda80) {
            ctx->pc = 0x1CDA90u;
            goto label_1cda90;
        }
    }
    ctx->pc = 0x1CDA88u;
    // 0x1cda88: 0x10000026
    ctx->pc = 0x1CDA88u;
    {
        const bool branch_taken_0x1cda88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDA8Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1cda88) {
            ctx->pc = 0x1CDB24u;
            goto label_1cdb24;
        }
    }
    ctx->pc = 0x1CDA90u;
label_1cda90:
    // 0x1cda90: 0x8c840008
    ctx->pc = 0x1cda90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cda94: 0x10800022
    ctx->pc = 0x1CDA94u;
    {
        const bool branch_taken_0x1cda94 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cda94) {
            ctx->pc = 0x1CDB20u;
            goto label_1cdb20;
        }
    }
    ctx->pc = 0x1CDA9Cu;
    // 0x1cda9c: 0xc073b2c
    ctx->pc = 0x1CDA9Cu;
    SET_GPR_U32(ctx, 31, 0x1CDAA4u);
    ctx->pc = 0x1CECB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        resetPhysics__6CClothFv_0x1cecb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDAA4u; }
        else if (ctx->pc != 0x1CDAA4u) { ctx->pc = 0x1CDAA4u; }
    }
    if (ctx->pc != 0x1CDAA4u) { return; }
    ctx->pc = 0x1CDAA4u;
    // 0x1cdaa4: 0x1000001e
    ctx->pc = 0x1CDAA4u;
    {
        const bool branch_taken_0x1cdaa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cdaa4) {
            ctx->pc = 0x1CDB20u;
            goto label_1cdb20;
        }
    }
    ctx->pc = 0x1CDAACu;
label_1cdaac:
    // 0x1cdaac: 0x8c840180
    ctx->pc = 0x1cdaacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x1cdab0: 0x1080001b
    ctx->pc = 0x1CDAB0u;
    {
        const bool branch_taken_0x1cdab0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cdab0) {
            ctx->pc = 0x1CDB20u;
            goto label_1cdb20;
        }
    }
    ctx->pc = 0x1CDAB8u;
    // 0x1cdab8: 0xc0802f8
    ctx->pc = 0x1CDAB8u;
    SET_GPR_U32(ctx, 31, 0x1CDAC0u);
    ctx->pc = 0x200BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        resetPhysics__6COsageFv_0x200be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDAC0u; }
        else if (ctx->pc != 0x1CDAC0u) { ctx->pc = 0x1CDAC0u; }
    }
    if (ctx->pc != 0x1CDAC0u) { return; }
    ctx->pc = 0x1CDAC0u;
    // 0x1cdac0: 0x10000017
    ctx->pc = 0x1CDAC0u;
    {
        const bool branch_taken_0x1cdac0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cdac0) {
            ctx->pc = 0x1CDB20u;
            goto label_1cdb20;
        }
    }
    ctx->pc = 0x1CDAC8u;
label_1cdac8:
    // 0x1cdac8: 0x70008628
    ctx->pc = 0x1cdac8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cdacc:
    // 0x1cdacc: 0x8e240060
    ctx->pc = 0x1cdaccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1cdad0: 0x50800004
    ctx->pc = 0x1CDAD0u;
    {
        const bool branch_taken_0x1cdad0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cdad0) {
            ctx->pc = 0x1CDAD4u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x1CDAE4u;
            goto label_1cdae4;
        }
    }
    ctx->pc = 0x1CDAD8u;
    // 0x1cdad8: 0xc073b2c
    ctx->pc = 0x1CDAD8u;
    SET_GPR_U32(ctx, 31, 0x1CDAE0u);
    ctx->pc = 0x1CECB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        resetPhysics__6CClothFv_0x1cecb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDAE0u; }
        else if (ctx->pc != 0x1CDAE0u) { ctx->pc = 0x1CDAE0u; }
    }
    if (ctx->pc != 0x1CDAE0u) { return; }
    ctx->pc = 0x1CDAE0u;
    // 0x1cdae0: 0x26100001
    ctx->pc = 0x1cdae0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1cdae4:
    // 0x1cdae4: 0x2a030004
    ctx->pc = 0x1cdae4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 4));
    // 0x1cdae8: 0x1460fff8
    ctx->pc = 0x1CDAE8u;
    {
        const bool branch_taken_0x1cdae8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CDAECu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1cdae8) {
            ctx->pc = 0x1CDACCu;
            goto label_1cdacc;
        }
    }
    ctx->pc = 0x1CDAF0u;
    // 0x1cdaf0: 0x1000000b
    ctx->pc = 0x1CDAF0u;
    {
        const bool branch_taken_0x1cdaf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cdaf0) {
            ctx->pc = 0x1CDB20u;
            goto label_1cdb20;
        }
    }
    ctx->pc = 0x1CDAF8u;
label_1cdaf8:
    // 0x1cdaf8: 0x70008628
    ctx->pc = 0x1cdaf8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cdafc:
    // 0x1cdafc: 0x8e240060
    ctx->pc = 0x1cdafcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1cdb00: 0x50800004
    ctx->pc = 0x1CDB00u;
    {
        const bool branch_taken_0x1cdb00 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cdb00) {
            ctx->pc = 0x1CDB04u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x1CDB14u;
            goto label_1cdb14;
        }
    }
    ctx->pc = 0x1CDB08u;
    // 0x1cdb08: 0xc073b2c
    ctx->pc = 0x1CDB08u;
    SET_GPR_U32(ctx, 31, 0x1CDB10u);
    ctx->pc = 0x1CECB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        resetPhysics__6CClothFv_0x1cecb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDB10u; }
        else if (ctx->pc != 0x1CDB10u) { ctx->pc = 0x1CDB10u; }
    }
    if (ctx->pc != 0x1CDB10u) { return; }
    ctx->pc = 0x1CDB10u;
    // 0x1cdb10: 0x26100001
    ctx->pc = 0x1cdb10u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1cdb14:
    // 0x1cdb14: 0x2a030002
    ctx->pc = 0x1cdb14u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2));
    // 0x1cdb18: 0x1460fff8
    ctx->pc = 0x1CDB18u;
    {
        const bool branch_taken_0x1cdb18 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CDB1Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1cdb18) {
            ctx->pc = 0x1CDAFCu;
            goto label_1cdafc;
        }
    }
    ctx->pc = 0x1CDB20u;
label_1cdb20:
    // 0x1cdb20: 0x7bbf0020
    ctx->pc = 0x1cdb20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cdb24:
    // 0x1cdb24: 0x7bb10010
    ctx->pc = 0x1cdb24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdb28: 0x7bb00000
    ctx->pc = 0x1cdb28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdb2c: 0x3e00008
    ctx->pc = 0x1CDB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDB30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CDA90u: goto label_1cda90;
            case 0x1CDAACu: goto label_1cdaac;
            case 0x1CDAC8u: goto label_1cdac8;
            case 0x1CDACCu: goto label_1cdacc;
            case 0x1CDAE4u: goto label_1cdae4;
            case 0x1CDAF8u: goto label_1cdaf8;
            case 0x1CDAFCu: goto label_1cdafc;
            case 0x1CDB14u: goto label_1cdb14;
            case 0x1CDB20u: goto label_1cdb20;
            case 0x1CDB24u: goto label_1cdb24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CDB34u;
}
