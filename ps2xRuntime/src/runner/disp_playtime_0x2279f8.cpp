#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: disp_playtime
// Address: 0x2279f8 - 0x227b74
void disp_playtime_0x2279f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2279f8u;

    // 0x2279f8: 0x27bdff80
    ctx->pc = 0x2279f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2279fc: 0xffbf0070
    ctx->pc = 0x2279fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x227a00: 0xffb50060
    ctx->pc = 0x227a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x227a04: 0xffb40050
    ctx->pc = 0x227a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x227a08: 0xffb30040
    ctx->pc = 0x227a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x227a0c: 0xffb20030
    ctx->pc = 0x227a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x227a10: 0xffb10020
    ctx->pc = 0x227a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x227a14: 0xffb00010
    ctx->pc = 0x227a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x227a18: 0x80a82d
    ctx->pc = 0x227a18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a1c: 0x3c02003c
    ctx->pc = 0x227a1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x227a20: 0x24421858
    ctx->pc = 0x227a20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6232));
    // 0x227a24: 0x8ea50000
    ctx->pc = 0x227a24u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x227a28: 0x52880
    ctx->pc = 0x227a28u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x227a2c: 0xa21021
    ctx->pc = 0x227a2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x227a30: 0x8c500000
    ctx->pc = 0x227a30u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227a34: 0x2402003c
    ctx->pc = 0x227a34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x227a38: 0x202001a
    ctx->pc = 0x227a38u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x227a3c: 0x8012
    ctx->pc = 0x227a3cu;
    SET_GPR_U32(ctx, 16, ctx->lo);
    // 0x227a40: 0x50400001
    ctx->pc = 0x227A40u;
    {
        const bool branch_taken_0x227a40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x227a40) {
            ctx->pc = 0x227A44u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x227A48u;
            goto label_227a48;
        }
    }
    ctx->pc = 0x227A48u;
label_227a48:
    // 0x227a48: 0x2403003c
    ctx->pc = 0x227a48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
    // 0x227a4c: 0x202001a
    ctx->pc = 0x227a4cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x227a50: 0x8012
    ctx->pc = 0x227a50u;
    SET_GPR_U32(ctx, 16, ctx->lo);
    // 0x227a54: 0xa010
    ctx->pc = 0x227a54u;
    SET_GPR_U32(ctx, 20, ctx->hi);
    // 0x227a58: 0x50600001
    ctx->pc = 0x227A58u;
    {
        const bool branch_taken_0x227a58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x227a58) {
            ctx->pc = 0x227A5Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x227A60u;
            goto label_227a60;
        }
    }
    ctx->pc = 0x227A60u;
label_227a60:
    // 0x227a60: 0x50600001
    ctx->pc = 0x227A60u;
    {
        const bool branch_taken_0x227a60 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x227a60) {
            ctx->pc = 0x227A64u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x227A68u;
            goto label_227a68;
        }
    }
    ctx->pc = 0x227A68u;
label_227a68:
    // 0x227a68: 0x202001a
    ctx->pc = 0x227a68u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x227a6c: 0x8012
    ctx->pc = 0x227a6cu;
    SET_GPR_U32(ctx, 16, ctx->lo);
    // 0x227a70: 0x9810
    ctx->pc = 0x227a70u;
    SET_GPR_U32(ctx, 19, ctx->hi);
    // 0x227a74: 0x50600001
    ctx->pc = 0x227A74u;
    {
        const bool branch_taken_0x227a74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x227a74) {
            ctx->pc = 0x227A78u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x227A7Cu;
            goto label_227a7c;
        }
    }
    ctx->pc = 0x227A7Cu;
label_227a7c:
    // 0x227a7c: 0x50400001
    ctx->pc = 0x227A7Cu;
    {
        const bool branch_taken_0x227a7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x227a7c) {
            ctx->pc = 0x227A80u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x227A84u;
            goto label_227a84;
        }
    }
    ctx->pc = 0x227A84u;
label_227a84:
    // 0x227a84: 0x3c020032
    ctx->pc = 0x227a84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x227a88: 0x24420740
    ctx->pc = 0x227a88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1856));
    // 0x227a8c: 0xa21021
    ctx->pc = 0x227a8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x227a90: 0x8c440000
    ctx->pc = 0x227a90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227a94: 0x3c120032
    ctx->pc = 0x227a94u;
    SET_GPR_U32(ctx, 18, ((uint32_t)50 << 16));
    // 0x227a98: 0x26520770
    ctx->pc = 0x227a98u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1904));
    // 0x227a9c: 0xb22821
    ctx->pc = 0x227a9cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x227aa0: 0x3c110032
    ctx->pc = 0x227aa0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x227aa4: 0x26310780
    ctx->pc = 0x227aa4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1920));
    // 0x227aa8: 0x8ca20000
    ctx->pc = 0x227aa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x227aac: 0x8e250014
    ctx->pc = 0x227aacu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x227ab0: 0x24840007
    ctx->pc = 0x227ab0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7));
    // 0x227ab4: 0x452821
    ctx->pc = 0x227ab4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x227ab8: 0x24060007
    ctx->pc = 0x227ab8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x227abc: 0x3c0700ff
    ctx->pc = 0x227abcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x227ac0: 0x34e7ffff
    ctx->pc = 0x227ac0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x227ac4: 0x3c013f00
    ctx->pc = 0x227ac4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x227ac8: 0x44816000
    ctx->pc = 0x227ac8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x227acc: 0x3c08003a
    ctx->pc = 0x227accu;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x227ad0: 0xc080510
    ctx->pc = 0x227AD0u;
    SET_GPR_U32(ctx, 31, 0x227AD8u);
    ctx->pc = 0x227AD4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 27992));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227AD8u; }
    }
    if (ctx->pc != 0x227AD8u) { return; }
    ctx->pc = 0x227AD8u;
    // 0x227ad8: 0x3a0202d
    ctx->pc = 0x227ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227adc: 0x3c05003a
    ctx->pc = 0x227adcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x227ae0: 0x24a56d68
    ctx->pc = 0x227ae0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28008));
    // 0x227ae4: 0x200302d
    ctx->pc = 0x227ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ae8: 0x260382d
    ctx->pc = 0x227ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227aec: 0xc0b6252
    ctx->pc = 0x227AECu;
    SET_GPR_U32(ctx, 31, 0x227AF4u);
    ctx->pc = 0x227AF0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227AF4u; }
    }
    if (ctx->pc != 0x227AF4u) { return; }
    ctx->pc = 0x227AF4u;
    // 0x227af4: 0x3a0202d
    ctx->pc = 0x227af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227af8: 0x3c013f00
    ctx->pc = 0x227af8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x227afc: 0x44816000
    ctx->pc = 0x227afcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x227b00: 0xc080552
    ctx->pc = 0x227B00u;
    SET_GPR_U32(ctx, 31, 0x227B08u);
    ctx->pc = 0x227B04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B08u; }
    }
    if (ctx->pc != 0x227B08u) { return; }
    ctx->pc = 0x227B08u;
    // 0x227b08: 0x3c040032
    ctx->pc = 0x227b08u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x227b0c: 0x24840760
    ctx->pc = 0x227b0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1888));
    // 0x227b10: 0x8ea30000
    ctx->pc = 0x227b10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x227b14: 0x31880
    ctx->pc = 0x227b14u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x227b18: 0x642021
    ctx->pc = 0x227b18u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x227b1c: 0x8c840000
    ctx->pc = 0x227b1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x227b20: 0x721821
    ctx->pc = 0x227b20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x227b24: 0x8c630000
    ctx->pc = 0x227b24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227b28: 0x8e250014
    ctx->pc = 0x227b28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x227b2c: 0x822023
    ctx->pc = 0x227b2cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x227b30: 0x652821
    ctx->pc = 0x227b30u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x227b34: 0x24060007
    ctx->pc = 0x227b34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x227b38: 0x3c0700ff
    ctx->pc = 0x227b38u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x227b3c: 0x34e7ffff
    ctx->pc = 0x227b3cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x227b40: 0x3c013f00
    ctx->pc = 0x227b40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x227b44: 0x44816000
    ctx->pc = 0x227b44u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x227b48: 0xc080510
    ctx->pc = 0x227B48u;
    SET_GPR_U32(ctx, 31, 0x227B50u);
    ctx->pc = 0x227B4Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B50u; }
    }
    if (ctx->pc != 0x227B50u) { return; }
    ctx->pc = 0x227B50u;
    // 0x227b50: 0xdfbf0070
    ctx->pc = 0x227b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x227b54: 0xdfb50060
    ctx->pc = 0x227b54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x227b58: 0xdfb40050
    ctx->pc = 0x227b58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227b5c: 0xdfb30040
    ctx->pc = 0x227b5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x227b60: 0xdfb20030
    ctx->pc = 0x227b60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x227b64: 0xdfb10020
    ctx->pc = 0x227b64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227b68: 0xdfb00010
    ctx->pc = 0x227b68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227b6c: 0x3e00008
    ctx->pc = 0x227B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227B70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227A48u: goto label_227a48;
            case 0x227A60u: goto label_227a60;
            case 0x227A68u: goto label_227a68;
            case 0x227A7Cu: goto label_227a7c;
            case 0x227A84u: goto label_227a84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x227B74u;
}
