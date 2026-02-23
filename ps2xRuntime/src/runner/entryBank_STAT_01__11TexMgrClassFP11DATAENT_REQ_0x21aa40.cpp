#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBank_STAT_01__11TexMgrClassFP11DATAENT_REQ
// Address: 0x21aa40 - 0x21aaac
void entryBank_STAT_01__11TexMgrClassFP11DATAENT_REQ_0x21aa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBank_STAT_01__11TexMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x21aa40u;

    // 0x21aa40: 0x27bdffe0
    ctx->pc = 0x21aa40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21aa44: 0x7fbf0010
    ctx->pc = 0x21aa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x21aa48: 0x7fb00000
    ctx->pc = 0x21aa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21aa4c: 0x8ca30008
    ctx->pc = 0x21aa4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x21aa50: 0x3c020092
    ctx->pc = 0x21aa50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)146 << 16));
    // 0x21aa54: 0x24424d00
    ctx->pc = 0x21aa54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19712));
    // 0x21aa58: 0x70808628
    ctx->pc = 0x21aa58u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21aa5c: 0x3c010050
    ctx->pc = 0x21aa5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21aa60: 0x3287c
    ctx->pc = 0x21aa60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 1));
    // 0x21aa64: 0x5287e
    ctx->pc = 0x21aa64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 1));
    // 0x21aa68: 0x518c0
    ctx->pc = 0x21aa68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x21aa6c: 0x651823
    ctx->pc = 0x21aa6cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21aa70: 0x31880
    ctx->pc = 0x21aa70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21aa74: 0x431021
    ctx->pc = 0x21aa74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21aa78: 0x8c460004
    ctx->pc = 0x21aa78u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21aa7c: 0x8c45000c
    ctx->pc = 0x21aa7cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21aa80: 0xc05aeba
    ctx->pc = 0x21AA80u;
    SET_GPR_U32(ctx, 31, 0x21AA88u);
    ctx->pc = 0x21AA84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3180)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AA88u; }
        else if (ctx->pc != 0x21AA88u) { ctx->pc = 0x21AA88u; }
    }
    if (ctx->pc != 0x21AA88u) { return; }
    ctx->pc = 0x21AA88u;
    // 0x21aa88: 0x8e0403a8
    ctx->pc = 0x21aa88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 936)));
    // 0x21aa8c: 0x24020001
    ctx->pc = 0x21aa8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21aa90: 0x8c83000c
    ctx->pc = 0x21aa90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21aa94: 0x24630001
    ctx->pc = 0x21aa94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x21aa98: 0xac83000c
    ctx->pc = 0x21aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x21aa9c: 0x7bbf0010
    ctx->pc = 0x21aa9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21aaa0: 0x7bb00000
    ctx->pc = 0x21aaa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21aaa4: 0x3e00008
    ctx->pc = 0x21AAA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AAA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21AAACu;
}
