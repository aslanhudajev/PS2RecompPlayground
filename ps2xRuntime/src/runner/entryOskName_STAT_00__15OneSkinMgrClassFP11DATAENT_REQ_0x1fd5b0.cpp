#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryOskName_STAT_00__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fd5b0 - 0x1fd6ec
void entryOskName_STAT_00__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryOskName_STAT_00__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fd5b0u;

    // 0x1fd5b0: 0x27bdffe0
    ctx->pc = 0x1fd5b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd5b4: 0x7fbf0010
    ctx->pc = 0x1fd5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fd5b8: 0x7fb00000
    ctx->pc = 0x1fd5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fd5bc: 0x8ca40008
    ctx->pc = 0x1fd5bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fd5c0: 0x3c010052
    ctx->pc = 0x1fd5c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd5c4: 0x3c020027
    ctx->pc = 0x1fd5c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1fd5c8: 0x2443cfb0
    ctx->pc = 0x1fd5c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294954928));
    // 0x1fd5cc: 0x3c020052
    ctx->pc = 0x1fd5ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fd5d0: 0x244294d0
    ctx->pc = 0x1fd5d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x1fd5d4: 0xac2494b0
    ctx->pc = 0x1fd5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939824), GPR_U32(ctx, 4));
    // 0x1fd5d8: 0x3c010052
    ctx->pc = 0x1fd5d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd5dc: 0x8c2494b0
    ctx->pc = 0x1fd5dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fd5e0: 0x42080
    ctx->pc = 0x1fd5e0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fd5e4: 0x641821
    ctx->pc = 0x1fd5e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd5e8: 0x8c630000
    ctx->pc = 0x1fd5e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd5ec: 0x3c010052
    ctx->pc = 0x1fd5ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd5f0: 0xac2394b4
    ctx->pc = 0x1fd5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939828), GPR_U32(ctx, 3));
    // 0x1fd5f4: 0x3c010052
    ctx->pc = 0x1fd5f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd5f8: 0x8c2394b0
    ctx->pc = 0x1fd5f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fd5fc: 0x431021
    ctx->pc = 0x1fd5fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd600: 0x80420000
    ctx->pc = 0x1fd600u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd604: 0x14400034
    ctx->pc = 0x1FD604u;
    {
        const bool branch_taken_0x1fd604 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FD608u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fd604) {
            ctx->pc = 0x1FD6D8u;
            goto label_1fd6d8;
        }
    }
    ctx->pc = 0x1FD60Cu;
    // 0x1fd60c: 0x8f838cf8
    ctx->pc = 0x1fd60cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x1fd610: 0x3c010052
    ctx->pc = 0x1fd610u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd614: 0x3c020027
    ctx->pc = 0x1fd614u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1fd618: 0x2442ddf0
    ctx->pc = 0x1fd618u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958576));
    // 0x1fd61c: 0xac2394c4
    ctx->pc = 0x1fd61cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939844), GPR_U32(ctx, 3));
    // 0x1fd620: 0x3c010052
    ctx->pc = 0x1fd620u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd624: 0x8c2394b0
    ctx->pc = 0x1fd624u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fd628: 0x31880
    ctx->pc = 0x1fd628u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fd62c: 0x431021
    ctx->pc = 0x1fd62cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd630: 0x8c420000
    ctx->pc = 0x1fd630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd634: 0x3c010052
    ctx->pc = 0x1fd634u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd638: 0xac2294c8
    ctx->pc = 0x1fd638u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939848), GPR_U32(ctx, 2));
    // 0x1fd63c: 0x3c010052
    ctx->pc = 0x1fd63cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd640: 0xac2094cc
    ctx->pc = 0x1fd640u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939852), GPR_U32(ctx, 0));
    // 0x1fd644: 0x3c010052
    ctx->pc = 0x1fd644u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd648: 0x8c2294cc
    ctx->pc = 0x1fd648u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939852)));
    // 0x1fd64c: 0x14400011
    ctx->pc = 0x1FD64Cu;
    {
        const bool branch_taken_0x1fd64c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FD650u;
        SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
        if (branch_taken_0x1fd64c) {
            ctx->pc = 0x1FD694u;
            goto label_1fd694;
        }
    }
    ctx->pc = 0x1FD654u;
    // 0x1fd654: 0x8c2394c8
    ctx->pc = 0x1fd654u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939848)));
    // 0x1fd658: 0x3c020027
    ctx->pc = 0x1fd658u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1fd65c: 0x2442b1d0
    ctx->pc = 0x1fd65cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947280));
    // 0x1fd660: 0x31840
    ctx->pc = 0x1fd660u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fd664: 0x431021
    ctx->pc = 0x1fd664u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd668: 0x84450000
    ctx->pc = 0x1fd668u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd66c: 0xc05adc4
    ctx->pc = 0x1FD66Cu;
    SET_GPR_U32(ctx, 31, 0x1FD674u);
    ctx->pc = 0x1FD670u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B710u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_OpenAfs_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD674u; }
        else if (ctx->pc != 0x1FD674u) { ctx->pc = 0x1FD674u; }
    }
    if (ctx->pc != 0x1FD674u) { return; }
    ctx->pc = 0x1FD674u;
    // 0x1fd674: 0x3c010050
    ctx->pc = 0x1fd674u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fd678: 0xac220c80
    ctx->pc = 0x1fd678u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3200), GPR_U32(ctx, 2));
    // 0x1fd67c: 0x3c010050
    ctx->pc = 0x1fd67cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fd680: 0xc05afe2
    ctx->pc = 0x1FD680u;
    SET_GPR_U32(ctx, 31, 0x1FD688u);
    ctx->pc = 0x1FD684u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    ctx->pc = 0x16BF88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetFsizeSct_0x16bf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD688u; }
        else if (ctx->pc != 0x1FD688u) { ctx->pc = 0x1FD688u; }
    }
    if (ctx->pc != 0x1FD688u) { return; }
    ctx->pc = 0x1FD688u;
    // 0x1fd688: 0x3c010052
    ctx->pc = 0x1fd688u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd68c: 0x10000008
    ctx->pc = 0x1FD68Cu;
    {
        const bool branch_taken_0x1fd68c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD690u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294939840), GPR_U32(ctx, 2));
        if (branch_taken_0x1fd68c) {
            ctx->pc = 0x1FD6B0u;
            goto label_1fd6b0;
        }
    }
    ctx->pc = 0x1FD694u;
label_1fd694:
    // 0x1fd694: 0x8c43000c
    ctx->pc = 0x1fd694u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1fd698: 0x4610003
    ctx->pc = 0x1FD698u;
    {
        const bool branch_taken_0x1fd698 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FD69Cu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        if (branch_taken_0x1fd698) {
            ctx->pc = 0x1FD6A8u;
            goto label_1fd6a8;
        }
    }
    ctx->pc = 0x1FD6A0u;
    // 0x1fd6a0: 0x246207ff
    ctx->pc = 0x1fd6a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x1fd6a4: 0x212c3
    ctx->pc = 0x1fd6a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_1fd6a8:
    // 0x1fd6a8: 0x3c010052
    ctx->pc = 0x1fd6a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd6ac: 0xac2294c0
    ctx->pc = 0x1fd6acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939840), GPR_U32(ctx, 2));
label_1fd6b0:
    // 0x1fd6b0: 0x3c010052
    ctx->pc = 0x1fd6b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd6b4: 0x8c2494b0
    ctx->pc = 0x1fd6b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fd6b8: 0x3c020052
    ctx->pc = 0x1fd6b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fd6bc: 0x244394d0
    ctx->pc = 0x1fd6bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x1fd6c0: 0x2405ffff
    ctx->pc = 0x1fd6c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd6c4: 0x24020001
    ctx->pc = 0x1fd6c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd6c8: 0x641821
    ctx->pc = 0x1fd6c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd6cc: 0xa0650000
    ctx->pc = 0x1fd6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fd6d0: 0x10000002
    ctx->pc = 0x1FD6D0u;
    {
        const bool branch_taken_0x1fd6d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD6D4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1fd6d0) {
            ctx->pc = 0x1FD6DCu;
            goto label_1fd6dc;
        }
    }
    ctx->pc = 0x1FD6D8u;
label_1fd6d8:
    // 0x1fd6d8: 0x2402ffff
    ctx->pc = 0x1fd6d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fd6dc:
    // 0x1fd6dc: 0x7bbf0010
    ctx->pc = 0x1fd6dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd6e0: 0x7bb00000
    ctx->pc = 0x1fd6e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd6e4: 0x3e00008
    ctx->pc = 0x1FD6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD6E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD694u: goto label_1fd694;
            case 0x1FD6A8u: goto label_1fd6a8;
            case 0x1FD6B0u: goto label_1fd6b0;
            case 0x1FD6D8u: goto label_1fd6d8;
            case 0x1FD6DCu: goto label_1fd6dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD6ECu;
}
