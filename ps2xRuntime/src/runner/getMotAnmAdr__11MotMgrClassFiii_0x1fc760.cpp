#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getMotAnmAdr__11MotMgrClassFiii
// Address: 0x1fc760 - 0x1fc814
void getMotAnmAdr__11MotMgrClassFiii_0x1fc760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getMotAnmAdr__11MotMgrClassFiii");


    ctx->pc = 0x1fc760u;

    // 0x1fc760: 0x27bdffc0
    ctx->pc = 0x1fc760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fc764: 0x7fbf0030
    ctx->pc = 0x1fc764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1fc768: 0x7fb20020
    ctx->pc = 0x1fc768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fc76c: 0x7fb10010
    ctx->pc = 0x1fc76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fc770: 0x7fb00000
    ctx->pc = 0x1fc770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fc774: 0x3c020050
    ctx->pc = 0x1fc774u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1fc778: 0x680c0
    ctx->pc = 0x1fc778u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 6), 3));
    // 0x1fc77c: 0x24420e30
    ctx->pc = 0x1fc77cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3632));
    // 0x1fc780: 0x501021
    ctx->pc = 0x1fc780u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fc784: 0x8c430000
    ctx->pc = 0x1fc784u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc788: 0x70a09628
    ctx->pc = 0x1fc788u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fc78c: 0x3c028000
    ctx->pc = 0x1fc78cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x1fc790: 0x621024
    ctx->pc = 0x1fc790u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc794: 0x14400009
    ctx->pc = 0x1FC794u;
    {
        const bool branch_taken_0x1fc794 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FC798u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fc794) {
            ctx->pc = 0x1FC7BCu;
            goto label_1fc7bc;
        }
    }
    ctx->pc = 0x1FC79Cu;
    // 0x1fc79c: 0x61040
    ctx->pc = 0x1fc79cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1fc7a0: 0x3c0101fb
    ctx->pc = 0x1fc7a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x1fc7a4: 0x410821
    ctx->pc = 0x1fc7a4u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1fc7a8: 0x94233000
    ctx->pc = 0x1fc7a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 12288)));
    // 0x1fc7ac: 0x3c020051
    ctx->pc = 0x1fc7acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1fc7b0: 0x244437a0
    ctx->pc = 0x1fc7b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    // 0x1fc7b4: 0xc0863f4
    ctx->pc = 0x1FC7B4u;
    SET_GPR_U32(ctx, 31, 0x1FC7BCu);
    ctx->pc = 0x1FC7B8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 9));
    ctx->pc = 0x218FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankMotImm__13EntryDatClassFi_0x218fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC7BCu; }
        else if (ctx->pc != 0x1FC7BCu) { ctx->pc = 0x1FC7BCu; }
    }
    if (ctx->pc != 0x1FC7BCu) { return; }
    ctx->pc = 0x1FC7BCu;
label_1fc7bc:
    // 0x1fc7bc: 0x121040
    ctx->pc = 0x1fc7bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
    // 0x1fc7c0: 0x3c0101f3
    ctx->pc = 0x1fc7c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)499 << 16));
    // 0x1fc7c4: 0x410821
    ctx->pc = 0x1fc7c4u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1fc7c8: 0x84259860
    ctx->pc = 0x1fc7c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294940768)));
    // 0x1fc7cc: 0x3c020050
    ctx->pc = 0x1fc7ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1fc7d0: 0x24420e34
    ctx->pc = 0x1fc7d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3636));
    // 0x1fc7d4: 0x501021
    ctx->pc = 0x1fc7d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fc7d8: 0x2403fffc
    ctx->pc = 0x1fc7d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1fc7dc: 0x8c420000
    ctx->pc = 0x1fc7dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc7e0: 0x52040
    ctx->pc = 0x1fc7e0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fc7e4: 0x852021
    ctx->pc = 0x1fc7e4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fc7e8: 0x42040
    ctx->pc = 0x1fc7e8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1fc7ec: 0x2484000f
    ctx->pc = 0x1fc7ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15));
    // 0x1fc7f0: 0x831824
    ctx->pc = 0x1fc7f0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fc7f4: 0x2231818
    ctx->pc = 0x1fc7f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1fc7f8: 0x7bbf0030
    ctx->pc = 0x1fc7f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc7fc: 0x7bb20020
    ctx->pc = 0x1fc7fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc800: 0x7bb00000
    ctx->pc = 0x1fc800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc804: 0x7bb10010
    ctx->pc = 0x1fc804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc808: 0x431021
    ctx->pc = 0x1fc808u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc80c: 0x3e00008
    ctx->pc = 0x1FC80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC810u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FC7BCu: goto label_1fc7bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FC814u;
}
