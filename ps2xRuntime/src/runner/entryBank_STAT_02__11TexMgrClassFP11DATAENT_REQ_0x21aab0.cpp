#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBank_STAT_02__11TexMgrClassFP11DATAENT_REQ
// Address: 0x21aab0 - 0x21ab94
void entryBank_STAT_02__11TexMgrClassFP11DATAENT_REQ_0x21aab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBank_STAT_02__11TexMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x21aab0u;

    // 0x21aab0: 0x27bdffc0
    ctx->pc = 0x21aab0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21aab4: 0x7fbf0030
    ctx->pc = 0x21aab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x21aab8: 0x7fb20020
    ctx->pc = 0x21aab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21aabc: 0x7fb10010
    ctx->pc = 0x21aabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21aac0: 0x7fb00000
    ctx->pc = 0x21aac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21aac4: 0x8ca30008
    ctx->pc = 0x21aac4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x21aac8: 0x3c020092
    ctx->pc = 0x21aac8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)146 << 16));
    // 0x21aacc: 0x70808e28
    ctx->pc = 0x21aaccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21aad0: 0x3c010050
    ctx->pc = 0x21aad0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21aad4: 0x8c240c6c
    ctx->pc = 0x21aad4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3180)));
    // 0x21aad8: 0x24424d00
    ctx->pc = 0x21aad8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19712));
    // 0x21aadc: 0x3287c
    ctx->pc = 0x21aadcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 1));
    // 0x21aae0: 0x5287e
    ctx->pc = 0x21aae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 1));
    // 0x21aae4: 0x518c0
    ctx->pc = 0x21aae4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x21aae8: 0x651823
    ctx->pc = 0x21aae8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21aaec: 0x31880
    ctx->pc = 0x21aaecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21aaf0: 0x439021
    ctx->pc = 0x21aaf0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21aaf4: 0xc05b018
    ctx->pc = 0x21AAF4u;
    SET_GPR_U32(ctx, 31, 0x21AAFCu);
    ctx->pc = 0x21AAF8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AAFCu; }
        else if (ctx->pc != 0x21AAFCu) { ctx->pc = 0x21AAFCu; }
    }
    if (ctx->pc != 0x21AAFCu) { return; }
    ctx->pc = 0x21AAFCu;
    // 0x21aafc: 0x24030004
    ctx->pc = 0x21aafcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x21ab00: 0x1443000d
    ctx->pc = 0x21AB00u;
    {
        const bool branch_taken_0x21ab00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x21AB04u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21ab00) {
            ctx->pc = 0x21AB38u;
            goto label_21ab38;
        }
    }
    ctx->pc = 0x21AB08u;
    // 0x21ab08: 0x8f828d10
    ctx->pc = 0x21ab08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x21ab0c: 0x3c010050
    ctx->pc = 0x21ab0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21ab10: 0x24420001
    ctx->pc = 0x21ab10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21ab14: 0xaf828d10
    ctx->pc = 0x21ab14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 2));
    // 0x21ab18: 0x8e460004
    ctx->pc = 0x21ab18u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x21ab1c: 0x8e45000c
    ctx->pc = 0x21ab1cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x21ab20: 0xc05aeba
    ctx->pc = 0x21AB20u;
    SET_GPR_U32(ctx, 31, 0x21AB28u);
    ctx->pc = 0x21AB24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3180)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AB28u; }
        else if (ctx->pc != 0x21AB28u) { ctx->pc = 0x21AB28u; }
    }
    if (ctx->pc != 0x21AB28u) { return; }
    ctx->pc = 0x21AB28u;
    // 0x21ab28: 0x3c010050
    ctx->pc = 0x21ab28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21ab2c: 0xc05b018
    ctx->pc = 0x21AB2Cu;
    SET_GPR_U32(ctx, 31, 0x21AB34u);
    ctx->pc = 0x21AB30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3180)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AB34u; }
        else if (ctx->pc != 0x21AB34u) { ctx->pc = 0x21AB34u; }
    }
    if (ctx->pc != 0x21AB34u) { return; }
    ctx->pc = 0x21AB34u;
    // 0x21ab34: 0x24030001
    ctx->pc = 0x21ab34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_21ab38:
    // 0x21ab38: 0x10430004
    ctx->pc = 0x21AB38u;
    {
        const bool branch_taken_0x21ab38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x21AB3Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x21ab38) {
            ctx->pc = 0x21AB4Cu;
            goto label_21ab4c;
        }
    }
    ctx->pc = 0x21AB40u;
    // 0x21ab40: 0x24030003
    ctx->pc = 0x21ab40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x21ab44: 0x14430006
    ctx->pc = 0x21AB44u;
    {
        const bool branch_taken_0x21ab44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x21ab44) {
            ctx->pc = 0x21AB60u;
            goto label_21ab60;
        }
    }
    ctx->pc = 0x21AB4Cu;
label_21ab4c:
    // 0x21ab4c: 0xc05ae0c
    ctx->pc = 0x21AB4Cu;
    SET_GPR_U32(ctx, 31, 0x21AB54u);
    ctx->pc = 0x21AB50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3180)));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AB54u; }
        else if (ctx->pc != 0x21AB54u) { ctx->pc = 0x21AB54u; }
    }
    if (ctx->pc != 0x21AB54u) { return; }
    ctx->pc = 0x21AB54u;
    // 0x21ab54: 0x3c010050
    ctx->pc = 0x21ab54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21ab58: 0xac200c6c
    ctx->pc = 0x21ab58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3180), GPR_U32(ctx, 0));
    // 0x21ab5c: 0x24100001
    ctx->pc = 0x21ab5cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_21ab60:
    // 0x21ab60: 0x12000005
    ctx->pc = 0x21AB60u;
    {
        const bool branch_taken_0x21ab60 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x21ab60) {
            ctx->pc = 0x21AB78u;
            goto label_21ab78;
        }
    }
    ctx->pc = 0x21AB68u;
    // 0x21ab68: 0x8e2303a8
    ctx->pc = 0x21ab68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 936)));
    // 0x21ab6c: 0x8c62000c
    ctx->pc = 0x21ab6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21ab70: 0x24420001
    ctx->pc = 0x21ab70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21ab74: 0xac62000c
    ctx->pc = 0x21ab74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_21ab78:
    // 0x21ab78: 0x7bbf0030
    ctx->pc = 0x21ab78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ab7c: 0x7bb20020
    ctx->pc = 0x21ab7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ab80: 0x7bb10010
    ctx->pc = 0x21ab80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ab84: 0x7bb00000
    ctx->pc = 0x21ab84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ab88: 0x24020001
    ctx->pc = 0x21ab88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ab8c: 0x3e00008
    ctx->pc = 0x21AB8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AB90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21AB38u: goto label_21ab38;
            case 0x21AB4Cu: goto label_21ab4c;
            case 0x21AB60u: goto label_21ab60;
            case 0x21AB78u: goto label_21ab78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21AB94u;
}
