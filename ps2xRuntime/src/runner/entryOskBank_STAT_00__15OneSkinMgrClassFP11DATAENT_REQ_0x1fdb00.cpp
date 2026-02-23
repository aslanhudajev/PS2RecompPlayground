#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryOskBank_STAT_00__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fdb00 - 0x1fdb9c
void entryOskBank_STAT_00__15OneSkinMgrClassFP11DATAENT_REQ_0x1fdb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryOskBank_STAT_00__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fdb00u;

    // 0x1fdb00: 0x27bdffe0
    ctx->pc = 0x1fdb00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fdb04: 0x7fbf0010
    ctx->pc = 0x1fdb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fdb08: 0x7fb00000
    ctx->pc = 0x1fdb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fdb0c: 0x8ca30008
    ctx->pc = 0x1fdb0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fdb10: 0x3c010052
    ctx->pc = 0x1fdb10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdb14: 0x3c020052
    ctx->pc = 0x1fdb14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fdb18: 0x24429860
    ctx->pc = 0x1fdb18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940768));
    // 0x1fdb1c: 0xac2394c8
    ctx->pc = 0x1fdb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939848), GPR_U32(ctx, 3));
    // 0x1fdb20: 0x3c010052
    ctx->pc = 0x1fdb20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdb24: 0x8c2394c8
    ctx->pc = 0x1fdb24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939848)));
    // 0x1fdb28: 0x431021
    ctx->pc = 0x1fdb28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdb2c: 0x80420000
    ctx->pc = 0x1fdb2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fdb30: 0x14400015
    ctx->pc = 0x1FDB30u;
    {
        const bool branch_taken_0x1fdb30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FDB34u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fdb30) {
            ctx->pc = 0x1FDB88u;
            goto label_1fdb88;
        }
    }
    ctx->pc = 0x1FDB38u;
    // 0x1fdb38: 0x3c020027
    ctx->pc = 0x1fdb38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1fdb3c: 0x31840
    ctx->pc = 0x1fdb3cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fdb40: 0x2442b1d0
    ctx->pc = 0x1fdb40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947280));
    // 0x1fdb44: 0x431021
    ctx->pc = 0x1fdb44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdb48: 0x84450000
    ctx->pc = 0x1fdb48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fdb4c: 0xc05adc4
    ctx->pc = 0x1FDB4Cu;
    SET_GPR_U32(ctx, 31, 0x1FDB54u);
    ctx->pc = 0x1FDB50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B710u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_OpenAfs_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDB54u; }
        else if (ctx->pc != 0x1FDB54u) { ctx->pc = 0x1FDB54u; }
    }
    if (ctx->pc != 0x1FDB54u) { return; }
    ctx->pc = 0x1FDB54u;
    // 0x1fdb54: 0x3c010050
    ctx->pc = 0x1fdb54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fdb58: 0xac220c80
    ctx->pc = 0x1fdb58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3200), GPR_U32(ctx, 2));
    // 0x1fdb5c: 0x3c010050
    ctx->pc = 0x1fdb5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fdb60: 0xc05afe2
    ctx->pc = 0x1FDB60u;
    SET_GPR_U32(ctx, 31, 0x1FDB68u);
    ctx->pc = 0x1FDB64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    ctx->pc = 0x16BF88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetFsizeSct_0x16bf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDB68u; }
        else if (ctx->pc != 0x1FDB68u) { ctx->pc = 0x1FDB68u; }
    }
    if (ctx->pc != 0x1FDB68u) { return; }
    ctx->pc = 0x1FDB68u;
    // 0x1fdb68: 0x8f838cf8
    ctx->pc = 0x1fdb68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x1fdb6c: 0x3c010052
    ctx->pc = 0x1fdb6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdb70: 0xac2294c0
    ctx->pc = 0x1fdb70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939840), GPR_U32(ctx, 2));
    // 0x1fdb74: 0x3c010052
    ctx->pc = 0x1fdb74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdb78: 0x24020001
    ctx->pc = 0x1fdb78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdb7c: 0xac2394c4
    ctx->pc = 0x1fdb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939844), GPR_U32(ctx, 3));
    // 0x1fdb80: 0x10000002
    ctx->pc = 0x1FDB80u;
    {
        const bool branch_taken_0x1fdb80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FDB84u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1fdb80) {
            ctx->pc = 0x1FDB8Cu;
            goto label_1fdb8c;
        }
    }
    ctx->pc = 0x1FDB88u;
label_1fdb88:
    // 0x1fdb88: 0x2402ffff
    ctx->pc = 0x1fdb88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fdb8c:
    // 0x1fdb8c: 0x7bbf0010
    ctx->pc = 0x1fdb8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdb90: 0x7bb00000
    ctx->pc = 0x1fdb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdb94: 0x3e00008
    ctx->pc = 0x1FDB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDB98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FDB88u: goto label_1fdb88;
            case 0x1FDB8Cu: goto label_1fdb8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FDB9Cu;
}
