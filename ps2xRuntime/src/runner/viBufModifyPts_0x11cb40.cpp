#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufModifyPts
// Address: 0x11cb40 - 0x11ccac
void viBufModifyPts_0x11cb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11cb40u;

    // 0x11cb40: 0x27bdfff0
    ctx->pc = 0x11cb40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11cb44: 0x80582d
    ctx->pc = 0x11cb44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb48: 0xffb00000
    ctx->pc = 0x11cb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11cb4c: 0xa0682d
    ctx->pc = 0x11cb4cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb50: 0x24180001
    ctx->pc = 0x11cb50u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cb54: 0x8d62005c
    ctx->pc = 0x11cb54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 92)));
    // 0x11cb58: 0x8d650058
    ctx->pc = 0x11cb58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 11), 88)));
    // 0x11cb5c: 0x8d690054
    ctx->pc = 0x11cb5cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 11), 84)));
    // 0x11cb60: 0x451023
    ctx->pc = 0x11cb60u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11cb64: 0x491021
    ctx->pc = 0x11cb64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x11cb68: 0x51200001
    ctx->pc = 0x11CB68u;
    {
        const bool branch_taken_0x11cb68 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        if (branch_taken_0x11cb68) {
            ctx->pc = 0x11CB6Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11CB70u;
            goto label_11cb70;
        }
    }
    ctx->pc = 0x11CB70u;
label_11cb70:
    // 0x11cb70: 0x49001a
    ctx->pc = 0x11cb70u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11cb74: 0x8d630008
    ctx->pc = 0x11cb74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x11cb78: 0x352c0
    ctx->pc = 0x11cb78u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 3), 11));
    // 0x11cb7c: 0x2010
    ctx->pc = 0x11cb7cu;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x11cb80: 0x18a00046
    ctx->pc = 0x11CB80u;
    {
        const bool branch_taken_0x11cb80 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x11CB84u;
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11cb80) {
            ctx->pc = 0x11CC9Cu;
            goto label_11cc9c;
        }
    }
    ctx->pc = 0x11CB88u;
    // 0x11cb88: 0x24020018
    ctx->pc = 0x11cb88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x11cb8c: 0x8d630050
    ctx->pc = 0x11cb8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x11cb90: 0x1821018
    ctx->pc = 0x11cb90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x11cb94: 0x622821
    ctx->pc = 0x11cb94u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11cb98: 0x8ca80014
    ctx->pc = 0x11cb98u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x11cb9c: 0x11000040
    ctx->pc = 0x11CB9Cu;
    {
        const bool branch_taken_0x11cb9c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CBA0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11cb9c) {
            ctx->pc = 0x11CCA0u;
            goto label_11cca0;
        }
    }
    ctx->pc = 0x11CBA4u;
    // 0x11cba4: 0x8da70014
    ctx->pc = 0x11cba4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x11cba8: 0x10e0003c
    ctx->pc = 0x11CBA8u;
    {
        const bool branch_taken_0x11cba8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CBACu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11cba8) {
            ctx->pc = 0x11CC9Cu;
            goto label_11cc9c;
        }
    }
    ctx->pc = 0x11CBB0u;
    // 0x11cbb0: 0x782d
    ctx->pc = 0x11cbb0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cbb4: 0x240effff
    ctx->pc = 0x11cbb4u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11cbb8: 0x24190018
    ctx->pc = 0x11cbb8u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 24));
    // 0x11cbbc: 0x0
    ctx->pc = 0x11cbbcu;
    // NOP
label_11cbc0:
    // 0x11cbc0: 0x8ca40010
    ctx->pc = 0x11cbc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x11cbc4: 0x51400001
    ctx->pc = 0x11CBC4u;
    {
        const bool branch_taken_0x11cbc4 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        if (branch_taken_0x11cbc4) {
            ctx->pc = 0x11CBC8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11CBCCu;
            goto label_11cbcc;
        }
    }
    ctx->pc = 0x11CBCCu;
label_11cbcc:
    // 0x11cbcc: 0x8da60010
    ctx->pc = 0x11cbccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x11cbd0: 0x8a1021
    ctx->pc = 0x11cbd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x11cbd4: 0x461023
    ctx->pc = 0x11cbd4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11cbd8: 0x4a001a
    ctx->pc = 0x11cbd8u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11cbdc: 0x1810
    ctx->pc = 0x11cbdcu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x11cbe0: 0x67182a
    ctx->pc = 0x11cbe0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 7)));
    // 0x11cbe4: 0x1060001b
    ctx->pc = 0x11CBE4u;
    {
        const bool branch_taken_0x11cbe4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CBE8u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        if (branch_taken_0x11cbe4) {
            ctx->pc = 0x11CC54u;
            goto label_11cc54;
        }
    }
    ctx->pc = 0x11CBECu;
    // 0x11cbec: 0x514f0001
    ctx->pc = 0x11CBECu;
    {
        const bool branch_taken_0x11cbec = (GPR_U32(ctx, 10) == GPR_U32(ctx, 15));
        if (branch_taken_0x11cbec) {
            ctx->pc = 0x11CBF0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11CBF4u;
            goto label_11cbf4;
        }
    }
    ctx->pc = 0x11CBF4u;
label_11cbf4:
    // 0x11cbf4: 0x441023
    ctx->pc = 0x11cbf4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11cbf8: 0x102182a
    ctx->pc = 0x11cbf8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 2)));
    // 0x11cbfc: 0x103100b
    ctx->pc = 0x11cbfcu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 8));
    // 0x11cc00: 0x822021
    ctx->pc = 0x11cc00u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11cc04: 0x8a001a
    ctx->pc = 0x11cc04u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11cc08: 0x1021023
    ctx->pc = 0x11cc08u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x11cc0c: 0xaca20014
    ctx->pc = 0x11cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x11cc10: 0x1810
    ctx->pc = 0x11cc10u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x11cc14: 0x14400011
    ctx->pc = 0x11CC14u;
    {
        const bool branch_taken_0x11cc14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11CC18u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        if (branch_taken_0x11cc14) {
            ctx->pc = 0x11CC5Cu;
            goto label_11cc5c;
        }
    }
    ctx->pc = 0x11CC1Cu;
    // 0x11cc1c: 0xdca20000
    ctx->pc = 0x11cc1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11cc20: 0x4420006
    ctx->pc = 0x11CC20u;
    {
        const bool branch_taken_0x11cc20 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x11cc20) {
            ctx->pc = 0x11CC24u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 88)));
            ctx->pc = 0x11CC3Cu;
            goto label_11cc3c;
        }
    }
    ctx->pc = 0x11CC28u;
    // 0x11cc28: 0xaca00014
    ctx->pc = 0x11cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x11cc2c: 0xfcae0000
    ctx->pc = 0x11cc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 14));
    // 0x11cc30: 0xfcae0008
    ctx->pc = 0x11cc30u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 14));
    // 0x11cc34: 0xaca00010
    ctx->pc = 0x11cc34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x11cc38: 0x8d620058
    ctx->pc = 0x11cc38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 88)));
label_11cc3c:
    // 0x11cc3c: 0x8d690054
    ctx->pc = 0x11cc3cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 11), 84)));
    // 0x11cc40: 0x2442ffff
    ctx->pc = 0x11cc40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11cc44: 0x1c2182a
    ctx->pc = 0x11cc44u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 14), GPR_S32(ctx, 2)));
    // 0x11cc48: 0x3100a
    ctx->pc = 0x11cc48u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x11cc4c: 0x10000004
    ctx->pc = 0x11CC4Cu;
    {
        const bool branch_taken_0x11cc4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CC50u;
        WRITE32(ADD32(GPR_U32(ctx, 11), 88), GPR_U32(ctx, 2));
        if (branch_taken_0x11cc4c) {
            ctx->pc = 0x11CC60u;
            goto label_11cc60;
        }
    }
    ctx->pc = 0x11CC54u;
label_11cc54:
    // 0x11cc54: 0x10000002
    ctx->pc = 0x11CC54u;
    {
        const bool branch_taken_0x11cc54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CC58u;
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11cc54) {
            ctx->pc = 0x11CC60u;
            goto label_11cc60;
        }
    }
    ctx->pc = 0x11CC5Cu;
label_11cc5c:
    // 0x11cc5c: 0x8d690054
    ctx->pc = 0x11cc5cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 11), 84)));
label_11cc60:
    // 0x11cc60: 0x25820001
    ctx->pc = 0x11cc60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 12), 1));
    // 0x11cc64: 0x512f0001
    ctx->pc = 0x11CC64u;
    {
        const bool branch_taken_0x11cc64 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 15));
        if (branch_taken_0x11cc64) {
            ctx->pc = 0x11CC68u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11CC6Cu;
            goto label_11cc6c;
        }
    }
    ctx->pc = 0x11CC6Cu;
label_11cc6c:
    // 0x11cc6c: 0x49001a
    ctx->pc = 0x11cc6cu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11cc70: 0x1810
    ctx->pc = 0x11cc70u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x11cc74: 0x13000009
    ctx->pc = 0x11CC74u;
    {
        const bool branch_taken_0x11cc74 = (GPR_U32(ctx, 24) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CC78u;
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11cc74) {
            ctx->pc = 0x11CC9Cu;
            goto label_11cc9c;
        }
    }
    ctx->pc = 0x11CC7Cu;
    // 0x11cc7c: 0x1991018
    ctx->pc = 0x11cc7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x11cc80: 0x502821
    ctx->pc = 0x11cc80u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11cc84: 0x8ca20014
    ctx->pc = 0x11cc84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x11cc88: 0x10400004
    ctx->pc = 0x11CC88u;
    {
        const bool branch_taken_0x11cc88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CC8Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11cc88) {
            ctx->pc = 0x11CC9Cu;
            goto label_11cc9c;
        }
    }
    ctx->pc = 0x11CC90u;
    // 0x11cc90: 0x8da20014
    ctx->pc = 0x11cc90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x11cc94: 0x1440ffca
    ctx->pc = 0x11CC94u;
    {
        const bool branch_taken_0x11cc94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11CC98u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11cc94) {
            ctx->pc = 0x11CBC0u;
            goto label_11cbc0;
        }
    }
    ctx->pc = 0x11CC9Cu;
label_11cc9c:
    // 0x11cc9c: 0xdfb00000
    ctx->pc = 0x11cc9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11cca0:
    // 0x11cca0: 0x102d
    ctx->pc = 0x11cca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cca4: 0x3e00008
    ctx->pc = 0x11CCA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CCA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CB70u: goto label_11cb70;
            case 0x11CBC0u: goto label_11cbc0;
            case 0x11CBCCu: goto label_11cbcc;
            case 0x11CBF4u: goto label_11cbf4;
            case 0x11CC3Cu: goto label_11cc3c;
            case 0x11CC54u: goto label_11cc54;
            case 0x11CC5Cu: goto label_11cc5c;
            case 0x11CC60u: goto label_11cc60;
            case 0x11CC6Cu: goto label_11cc6c;
            case 0x11CC9Cu: goto label_11cc9c;
            case 0x11CCA0u: goto label_11cca0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CCACu;
}
