#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetMojiCode2__11TrnMojiUchiFPCc
// Address: 0x2260a0 - 0x226184
void GetMojiCode2__11TrnMojiUchiFPCc_0x2260a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetMojiCode2__11TrnMojiUchiFPCc");


    ctx->pc = 0x2260a0u;

    // 0x2260a0: 0x27bdffd0
    ctx->pc = 0x2260a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2260a4: 0x7fbf0020
    ctx->pc = 0x2260a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2260a8: 0x7fb10010
    ctx->pc = 0x2260a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2260ac: 0x7fb00000
    ctx->pc = 0x2260acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2260b0: 0x70a08628
    ctx->pc = 0x2260b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2260b4: 0x70808e28
    ctx->pc = 0x2260b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2260b8: 0xc089814
    ctx->pc = 0x2260B8u;
    SET_GPR_U32(ctx, 31, 0x2260C0u);
    ctx->pc = 0x2260BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x226050u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMojiCodeNo2__11TrnMojiUchiFPCc_0x226050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2260C0u; }
        else if (ctx->pc != 0x2260C0u) { ctx->pc = 0x2260C0u; }
    }
    if (ctx->pc != 0x2260C0u) { return; }
    ctx->pc = 0x2260C0u;
    // 0x2260c0: 0x72002e28
    ctx->pc = 0x2260c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2260c4: 0x72202628
    ctx->pc = 0x2260c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2260c8: 0xc089814
    ctx->pc = 0x2260C8u;
    SET_GPR_U32(ctx, 31, 0x2260D0u);
    ctx->pc = 0x2260CCu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x226050u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMojiCodeNo2__11TrnMojiUchiFPCc_0x226050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2260D0u; }
        else if (ctx->pc != 0x2260D0u) { ctx->pc = 0x2260D0u; }
    }
    if (ctx->pc != 0x2260D0u) { return; }
    ctx->pc = 0x2260D0u;
    // 0x2260d0: 0x218c0
    ctx->pc = 0x2260d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
    // 0x2260d4: 0x621021
    ctx->pc = 0x2260d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2260d8: 0x21080
    ctx->pc = 0x2260d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2260dc: 0x2021021
    ctx->pc = 0x2260dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2260e0: 0x2403050f
    ctx->pc = 0x2260e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1295));
    // 0x2260e4: 0x14430003
    ctx->pc = 0x2260E4u;
    {
        const bool branch_taken_0x2260e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2260E8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1283));
        if (branch_taken_0x2260e4) {
            ctx->pc = 0x2260F4u;
            goto label_2260f4;
        }
    }
    ctx->pc = 0x2260ECu;
    // 0x2260ec: 0x10000020
    ctx->pc = 0x2260ECu;
    {
        const bool branch_taken_0x2260ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2260F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 192));
        if (branch_taken_0x2260ec) {
            ctx->pc = 0x226170u;
            goto label_226170;
        }
    }
    ctx->pc = 0x2260F4u;
label_2260f4:
    // 0x2260f4: 0x14430003
    ctx->pc = 0x2260F4u;
    {
        const bool branch_taken_0x2260f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2260F8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1282));
        if (branch_taken_0x2260f4) {
            ctx->pc = 0x226104u;
            goto label_226104;
        }
    }
    ctx->pc = 0x2260FCu;
    // 0x2260fc: 0x1000001c
    ctx->pc = 0x2260FCu;
    {
        const bool branch_taken_0x2260fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226100u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2260fc) {
            ctx->pc = 0x226170u;
            goto label_226170;
        }
    }
    ctx->pc = 0x226104u;
label_226104:
    // 0x226104: 0x14430003
    ctx->pc = 0x226104u;
    {
        const bool branch_taken_0x226104 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x226108u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1281));
        if (branch_taken_0x226104) {
            ctx->pc = 0x226114u;
            goto label_226114;
        }
    }
    ctx->pc = 0x22610Cu;
    // 0x22610c: 0x10000018
    ctx->pc = 0x22610Cu;
    {
        const bool branch_taken_0x22610c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226110u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x22610c) {
            ctx->pc = 0x226170u;
            goto label_226170;
        }
    }
    ctx->pc = 0x226114u;
label_226114:
    // 0x226114: 0x14430003
    ctx->pc = 0x226114u;
    {
        const bool branch_taken_0x226114 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x226118u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1284));
        if (branch_taken_0x226114) {
            ctx->pc = 0x226124u;
            goto label_226124;
        }
    }
    ctx->pc = 0x22611Cu;
    // 0x22611c: 0x10000014
    ctx->pc = 0x22611Cu;
    {
        const bool branch_taken_0x22611c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226120u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x22611c) {
            ctx->pc = 0x226170u;
            goto label_226170;
        }
    }
    ctx->pc = 0x226124u;
label_226124:
    // 0x226124: 0x14430003
    ctx->pc = 0x226124u;
    {
        const bool branch_taken_0x226124 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x226128u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1286));
        if (branch_taken_0x226124) {
            ctx->pc = 0x226134u;
            goto label_226134;
        }
    }
    ctx->pc = 0x22612Cu;
    // 0x22612c: 0x10000010
    ctx->pc = 0x22612Cu;
    {
        const bool branch_taken_0x22612c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226130u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x22612c) {
            ctx->pc = 0x226170u;
            goto label_226170;
        }
    }
    ctx->pc = 0x226134u;
label_226134:
    // 0x226134: 0x14430003
    ctx->pc = 0x226134u;
    {
        const bool branch_taken_0x226134 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x226138u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1287));
        if (branch_taken_0x226134) {
            ctx->pc = 0x226144u;
            goto label_226144;
        }
    }
    ctx->pc = 0x22613Cu;
    // 0x22613c: 0x1000000c
    ctx->pc = 0x22613Cu;
    {
        const bool branch_taken_0x22613c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226140u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967290));
        if (branch_taken_0x22613c) {
            ctx->pc = 0x226170u;
            goto label_226170;
        }
    }
    ctx->pc = 0x226144u;
label_226144:
    // 0x226144: 0x14430003
    ctx->pc = 0x226144u;
    {
        const bool branch_taken_0x226144 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x226148u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1289));
        if (branch_taken_0x226144) {
            ctx->pc = 0x226154u;
            goto label_226154;
        }
    }
    ctx->pc = 0x22614Cu;
    // 0x22614c: 0x10000008
    ctx->pc = 0x22614Cu;
    {
        const bool branch_taken_0x22614c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226150u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967289));
        if (branch_taken_0x22614c) {
            ctx->pc = 0x226170u;
            goto label_226170;
        }
    }
    ctx->pc = 0x226154u;
label_226154:
    // 0x226154: 0x14430003
    ctx->pc = 0x226154u;
    {
        const bool branch_taken_0x226154 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x226158u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1285));
        if (branch_taken_0x226154) {
            ctx->pc = 0x226164u;
            goto label_226164;
        }
    }
    ctx->pc = 0x22615Cu;
    // 0x22615c: 0x10000004
    ctx->pc = 0x22615Cu;
    {
        const bool branch_taken_0x22615c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226160u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967288));
        if (branch_taken_0x22615c) {
            ctx->pc = 0x226170u;
            goto label_226170;
        }
    }
    ctx->pc = 0x226164u;
label_226164:
    // 0x226164: 0x14430002
    ctx->pc = 0x226164u;
    {
        const bool branch_taken_0x226164 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x226164) {
            ctx->pc = 0x226170u;
            goto label_226170;
        }
    }
    ctx->pc = 0x22616Cu;
    // 0x22616c: 0x2402fffb
    ctx->pc = 0x22616cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
label_226170:
    // 0x226170: 0x7bbf0020
    ctx->pc = 0x226170u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226174: 0x7bb10010
    ctx->pc = 0x226174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226178: 0x7bb00000
    ctx->pc = 0x226178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22617c: 0x3e00008
    ctx->pc = 0x22617Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226180u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2260F4u: goto label_2260f4;
            case 0x226104u: goto label_226104;
            case 0x226114u: goto label_226114;
            case 0x226124u: goto label_226124;
            case 0x226134u: goto label_226134;
            case 0x226144u: goto label_226144;
            case 0x226154u: goto label_226154;
            case 0x226164u: goto label_226164;
            case 0x226170u: goto label_226170;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226184u;
}
