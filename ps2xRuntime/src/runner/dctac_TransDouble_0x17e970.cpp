#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dctac_TransDouble
// Address: 0x17e970 - 0x17eaf4
void dctac_TransDouble_0x17e970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dctac_TransDouble");


    ctx->pc = 0x17e970u;

    // 0x17e970: 0x27bdfd50
    ctx->pc = 0x17e970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x17e974: 0xafa40200
    ctx->pc = 0x17e974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 4));
    // 0x17e978: 0xffbf02a0
    ctx->pc = 0x17e978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 31));
    // 0x17e97c: 0x202d
    ctx->pc = 0x17e97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e980: 0xffbe0290
    ctx->pc = 0x17e980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 30));
    // 0x17e984: 0xffb70280
    ctx->pc = 0x17e984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 23));
    // 0x17e988: 0xffb60270
    ctx->pc = 0x17e988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 22));
    // 0x17e98c: 0xffb50260
    ctx->pc = 0x17e98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 21));
    // 0x17e990: 0xffb40250
    ctx->pc = 0x17e990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 20));
    // 0x17e994: 0xffb30240
    ctx->pc = 0x17e994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 19));
    // 0x17e998: 0xffb20230
    ctx->pc = 0x17e998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 18));
    // 0x17e99c: 0xffb10220
    ctx->pc = 0x17e99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 17));
    // 0x17e9a0: 0xffb00210
    ctx->pc = 0x17e9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 16));
    // 0x17e9a4: 0xafa50204
    ctx->pc = 0x17e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 5));
    // 0x17e9a8: 0xafa60208
    ctx->pc = 0x17e9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 6));
    // 0x17e9ac: 0x4f180
    ctx->pc = 0x17e9acu;
    SET_GPR_U32(ctx, 30, SLL32(GPR_U32(ctx, 4), 6));
label_17e9b0:
    // 0x17e9b0: 0xa02d
    ctx->pc = 0x17e9b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9b4: 0x4a8c0
    ctx->pc = 0x17e9b4u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 4), 3));
    // 0x17e9b8: 0x24960001
    ctx->pc = 0x17e9b8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 4), 1));
    // 0x17e9bc: 0x0
    ctx->pc = 0x17e9bcu;
    // NOP
label_17e9c0:
    // 0x17e9c0: 0x8fa30208
    ctx->pc = 0x17e9c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x17e9c4: 0x1410c0
    ctx->pc = 0x17e9c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 3));
    // 0x17e9c8: 0x8fa50200
    ctx->pc = 0x17e9c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x17e9cc: 0x982d
    ctx->pc = 0x17e9ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9d0: 0x628821
    ctx->pc = 0x17e9d0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17e9d4: 0x26970001
    ctx->pc = 0x17e9d4u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 20), 1));
    // 0x17e9d8: 0x3c58021
    ctx->pc = 0x17e9d8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
    // 0x17e9dc: 0x24120007
    ctx->pc = 0x17e9dcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 7));
label_17e9e0:
    // 0x17e9e0: 0xde240000
    ctx->pc = 0x17e9e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17e9e4: 0x2652ffff
    ctx->pc = 0x17e9e4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17e9e8: 0xde050000
    ctx->pc = 0x17e9e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17e9ec: 0x26310040
    ctx->pc = 0x17e9ecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 64));
    // 0x17e9f0: 0xc052cb8
    ctx->pc = 0x17E9F0u;
    SET_GPR_U32(ctx, 31, 0x17E9F8u);
    ctx->pc = 0x17E9F4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E9F8u; }
        else if (ctx->pc != 0x17E9F8u) { ctx->pc = 0x17E9F8u; }
    }
    if (ctx->pc != 0x17E9F8u) { return; }
    ctx->pc = 0x17E9F8u;
    // 0x17e9f8: 0x260202d
    ctx->pc = 0x17e9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9fc: 0xc052c88
    ctx->pc = 0x17E9FCu;
    SET_GPR_U32(ctx, 31, 0x17EA04u);
    ctx->pc = 0x17EA00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA04u; }
        else if (ctx->pc != 0x17EA04u) { ctx->pc = 0x17EA04u; }
    }
    if (ctx->pc != 0x17EA04u) { return; }
    ctx->pc = 0x17EA04u;
    // 0x17ea04: 0x641fff6
    ctx->pc = 0x17EA04u;
    {
        const bool branch_taken_0x17ea04 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x17EA08u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17ea04) {
            ctx->pc = 0x17E9E0u;
            goto label_17e9e0;
        }
    }
    ctx->pc = 0x17EA0Cu;
    // 0x17ea0c: 0x2b41021
    ctx->pc = 0x17ea0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x17ea10: 0x210c0
    ctx->pc = 0x17ea10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x17ea14: 0x2e0a02d
    ctx->pc = 0x17ea14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea18: 0x3a21821
    ctx->pc = 0x17ea18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x17ea1c: 0x2a840008
    ctx->pc = 0x17ea1cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 20), 8));
    // 0x17ea20: 0x1480ffe7
    ctx->pc = 0x17EA20u;
    {
        const bool branch_taken_0x17ea20 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x17EA24u;
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 19));
        if (branch_taken_0x17ea20) {
            ctx->pc = 0x17E9C0u;
            goto label_17e9c0;
        }
    }
    ctx->pc = 0x17EA28u;
    // 0x17ea28: 0x2c0202d
    ctx->pc = 0x17ea28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea2c: 0x28820008
    ctx->pc = 0x17ea2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8));
    // 0x17ea30: 0x1440ffdf
    ctx->pc = 0x17EA30u;
    {
        const bool branch_taken_0x17ea30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17EA34u;
        SET_GPR_U32(ctx, 30, SLL32(GPR_U32(ctx, 4), 6));
        if (branch_taken_0x17ea30) {
            ctx->pc = 0x17E9B0u;
            goto label_17e9b0;
        }
    }
    ctx->pc = 0x17EA38u;
    // 0x17ea38: 0xa02d
    ctx->pc = 0x17ea38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea3c: 0x202d
    ctx->pc = 0x17ea3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ea40:
    // 0x17ea40: 0x26970001
    ctx->pc = 0x17ea40u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 20), 1));
    // 0x17ea44: 0x14f0c0
    ctx->pc = 0x17ea44u;
    SET_GPR_U32(ctx, 30, SLL32(GPR_U32(ctx, 20), 3));
label_17ea48:
    // 0x17ea48: 0x8fa20208
    ctx->pc = 0x17ea48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x17ea4c: 0x4a8c0
    ctx->pc = 0x17ea4cu;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 4), 3));
    // 0x17ea50: 0x24960001
    ctx->pc = 0x17ea50u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 4), 1));
    // 0x17ea54: 0x982d
    ctx->pc = 0x17ea54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea58: 0x3dd8821
    ctx->pc = 0x17ea58u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 29)));
    // 0x17ea5c: 0x558021
    ctx->pc = 0x17ea5cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x17ea60: 0x24120007
    ctx->pc = 0x17ea60u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 7));
    // 0x17ea64: 0x0
    ctx->pc = 0x17ea64u;
    // NOP
label_17ea68:
    // 0x17ea68: 0xde040000
    ctx->pc = 0x17ea68u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17ea6c: 0x2652ffff
    ctx->pc = 0x17ea6cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17ea70: 0xde250000
    ctx->pc = 0x17ea70u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17ea74: 0x26100040
    ctx->pc = 0x17ea74u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
    // 0x17ea78: 0xc052cb8
    ctx->pc = 0x17EA78u;
    SET_GPR_U32(ctx, 31, 0x17EA80u);
    ctx->pc = 0x17EA7Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 64));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA80u; }
        else if (ctx->pc != 0x17EA80u) { ctx->pc = 0x17EA80u; }
    }
    if (ctx->pc != 0x17EA80u) { return; }
    ctx->pc = 0x17EA80u;
    // 0x17ea80: 0x260202d
    ctx->pc = 0x17ea80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea84: 0xc052c88
    ctx->pc = 0x17EA84u;
    SET_GPR_U32(ctx, 31, 0x17EA8Cu);
    ctx->pc = 0x17EA88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA8Cu; }
        else if (ctx->pc != 0x17EA8Cu) { ctx->pc = 0x17EA8Cu; }
    }
    if (ctx->pc != 0x17EA8Cu) { return; }
    ctx->pc = 0x17EA8Cu;
    // 0x17ea8c: 0x641fff6
    ctx->pc = 0x17EA8Cu;
    {
        const bool branch_taken_0x17ea8c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x17EA90u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17ea8c) {
            ctx->pc = 0x17EA68u;
            goto label_17ea68;
        }
    }
    ctx->pc = 0x17EA94u;
    // 0x17ea94: 0x8fa50204
    ctx->pc = 0x17ea94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x17ea98: 0x2b41021
    ctx->pc = 0x17ea98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x17ea9c: 0x210c0
    ctx->pc = 0x17ea9cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x17eaa0: 0x2c0202d
    ctx->pc = 0x17eaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eaa4: 0x451021
    ctx->pc = 0x17eaa4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17eaa8: 0x28830008
    ctx->pc = 0x17eaa8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 8));
    // 0x17eaac: 0x1460ffe6
    ctx->pc = 0x17EAACu;
    {
        const bool branch_taken_0x17eaac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17EAB0u;
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 19));
        if (branch_taken_0x17eaac) {
            ctx->pc = 0x17EA48u;
            goto label_17ea48;
        }
    }
    ctx->pc = 0x17EAB4u;
    // 0x17eab4: 0x2e0a02d
    ctx->pc = 0x17eab4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eab8: 0x2a820008
    ctx->pc = 0x17eab8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 8));
    // 0x17eabc: 0x5440ffe0
    ctx->pc = 0x17EABCu;
    {
        const bool branch_taken_0x17eabc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17eabc) {
            ctx->pc = 0x17EAC0u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x17EA40u;
            goto label_17ea40;
        }
    }
    ctx->pc = 0x17EAC4u;
    // 0x17eac4: 0xdfbf02a0
    ctx->pc = 0x17eac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x17eac8: 0xdfbe0290
    ctx->pc = 0x17eac8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x17eacc: 0xdfb70280
    ctx->pc = 0x17eaccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x17ead0: 0xdfb60270
    ctx->pc = 0x17ead0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x17ead4: 0xdfb50260
    ctx->pc = 0x17ead4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x17ead8: 0xdfb40250
    ctx->pc = 0x17ead8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x17eadc: 0xdfb30240
    ctx->pc = 0x17eadcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x17eae0: 0xdfb20230
    ctx->pc = 0x17eae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x17eae4: 0xdfb10220
    ctx->pc = 0x17eae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x17eae8: 0xdfb00210
    ctx->pc = 0x17eae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x17eaec: 0x3e00008
    ctx->pc = 0x17EAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EAF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 688));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E9B0u: goto label_17e9b0;
            case 0x17E9C0u: goto label_17e9c0;
            case 0x17E9E0u: goto label_17e9e0;
            case 0x17EA40u: goto label_17ea40;
            case 0x17EA48u: goto label_17ea48;
            case 0x17EA68u: goto label_17ea68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17EAF4u;
}
