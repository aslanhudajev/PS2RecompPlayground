#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_STAT_00__15OverlayMgrClassFP11DATAENT_REQ
// Address: 0x201f30 - 0x202014
void entryExec_STAT_00__15OverlayMgrClassFP11DATAENT_REQ_0x201f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_STAT_00__15OverlayMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x201f30u;

    // 0x201f30: 0x27bdffb0
    ctx->pc = 0x201f30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x201f34: 0x7fbf0040
    ctx->pc = 0x201f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x201f38: 0x7fb30030
    ctx->pc = 0x201f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x201f3c: 0x7fb20020
    ctx->pc = 0x201f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x201f40: 0x7fb10010
    ctx->pc = 0x201f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x201f44: 0x7fb00000
    ctx->pc = 0x201f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x201f48: 0x8cb00008
    ctx->pc = 0x201f48u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x201f4c: 0x24020002
    ctx->pc = 0x201f4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x201f50: 0x70809e28
    ctx->pc = 0x201f50u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x201f54: 0x70a09628
    ctx->pc = 0x201f54u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x201f58: 0x901821
    ctx->pc = 0x201f58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x201f5c: 0x80630000
    ctx->pc = 0x201f5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201f60: 0x14620003
    ctx->pc = 0x201F60u;
    {
        const bool branch_taken_0x201f60 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x201F64u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 11));
        if (branch_taken_0x201f60) {
            ctx->pc = 0x201F70u;
            goto label_201f70;
        }
    }
    ctx->pc = 0x201F68u;
    // 0x201f68: 0x10000023
    ctx->pc = 0x201F68u;
    {
        const bool branch_taken_0x201f68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x201F6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x201f68) {
            ctx->pc = 0x201FF8u;
            goto label_201ff8;
        }
    }
    ctx->pc = 0x201F70u;
label_201f70:
    // 0x201f70: 0x3c020027
    ctx->pc = 0x201f70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x201f74: 0x111900
    ctx->pc = 0x201f74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 4));
    // 0x201f78: 0x2442bcc0
    ctx->pc = 0x201f78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950080));
    // 0x201f7c: 0x433021
    ctx->pc = 0x201f7cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201f80: 0x3c020050
    ctx->pc = 0x201f80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x201f84: 0x24440b40
    ctx->pc = 0x201f84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2880));
    // 0x201f88: 0x3c020027
    ctx->pc = 0x201f88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x201f8c: 0xc07a5ac
    ctx->pc = 0x201F8Cu;
    SET_GPR_U32(ctx, 31, 0x201F94u);
    ctx->pc = 0x201F90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 9584));
    ctx->pc = 0x1E96B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFileName__12FileMgrClassFPCcPCc_0x1e96b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F94u; }
        else if (ctx->pc != 0x201F94u) { ctx->pc = 0x201F94u; }
    }
    if (ctx->pc != 0x201F94u) { return; }
    ctx->pc = 0x201F94u;
    // 0x201f94: 0x70402628
    ctx->pc = 0x201f94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x201f98: 0xc05ad72
    ctx->pc = 0x201F98u;
    SET_GPR_U32(ctx, 31, 0x201FA0u);
    ctx->pc = 0x201F9Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Open_0x16b5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201FA0u; }
        else if (ctx->pc != 0x201FA0u) { ctx->pc = 0x201FA0u; }
    }
    if (ctx->pc != 0x201FA0u) { return; }
    ctx->pc = 0x201FA0u;
    // 0x201fa0: 0xae620018
    ctx->pc = 0x201fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x201fa4: 0x8e650018
    ctx->pc = 0x201fa4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x201fa8: 0x3c020050
    ctx->pc = 0x201fa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x201fac: 0x112080
    ctx->pc = 0x201facu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 2));
    // 0x201fb0: 0x24420c60
    ctx->pc = 0x201fb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3168));
    // 0x201fb4: 0x442021
    ctx->pc = 0x201fb4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x201fb8: 0x3c02002d
    ctx->pc = 0x201fb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x201fbc: 0x101880
    ctx->pc = 0x201fbcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x201fc0: 0x244255d0
    ctx->pc = 0x201fc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 21968));
    // 0x201fc4: 0xac850000
    ctx->pc = 0x201fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x201fc8: 0x431021
    ctx->pc = 0x201fc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201fcc: 0x8c420000
    ctx->pc = 0x201fccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201fd0: 0xae620014
    ctx->pc = 0x201fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x201fd4: 0xc05afe2
    ctx->pc = 0x201FD4u;
    SET_GPR_U32(ctx, 31, 0x201FDCu);
    ctx->pc = 0x201FD8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->pc = 0x16BF88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetFsizeSct_0x16bf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201FDCu; }
        else if (ctx->pc != 0x201FDCu) { ctx->pc = 0x201FDCu; }
    }
    if (ctx->pc != 0x201FDCu) { return; }
    ctx->pc = 0x201FDCu;
    // 0x201fdc: 0xae620010
    ctx->pc = 0x201fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x201fe0: 0x8e650010
    ctx->pc = 0x201fe0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x201fe4: 0x8e660014
    ctx->pc = 0x201fe4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x201fe8: 0xc05aeba
    ctx->pc = 0x201FE8u;
    SET_GPR_U32(ctx, 31, 0x201FF0u);
    ctx->pc = 0x201FECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201FF0u; }
        else if (ctx->pc != 0x201FF0u) { ctx->pc = 0x201FF0u; }
    }
    if (ctx->pc != 0x201FF0u) { return; }
    ctx->pc = 0x201FF0u;
    // 0x201ff0: 0x24020001
    ctx->pc = 0x201ff0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x201ff4: 0xae42000c
    ctx->pc = 0x201ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_201ff8:
    // 0x201ff8: 0x7bbf0040
    ctx->pc = 0x201ff8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201ffc: 0x7bb30030
    ctx->pc = 0x201ffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202000: 0x7bb20020
    ctx->pc = 0x202000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202004: 0x7bb10010
    ctx->pc = 0x202004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202008: 0x7bb00000
    ctx->pc = 0x202008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20200c: 0x3e00008
    ctx->pc = 0x20200Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202010u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201F70u: goto label_201f70;
            case 0x201FF8u: goto label_201ff8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202014u;
}
