#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: can_DecPlayerLife__Fi
// Address: 0x213100 - 0x2131b0
void can_DecPlayerLife__Fi_0x213100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("can_DecPlayerLife__Fi");


    ctx->pc = 0x213100u;

    // 0x213100: 0x8f838c48
    ctx->pc = 0x213100u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x213104: 0x24020002
    ctx->pc = 0x213104u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x213108: 0x806300d2
    ctx->pc = 0x213108u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 210)));
    // 0x21310c: 0x10620003
    ctx->pc = 0x21310Cu;
    {
        const bool branch_taken_0x21310c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x21310c) {
            ctx->pc = 0x21311Cu;
            goto label_21311c;
        }
    }
    ctx->pc = 0x213114u;
    // 0x213114: 0x10000024
    ctx->pc = 0x213114u;
    {
        const bool branch_taken_0x213114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213118u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x213114) {
            ctx->pc = 0x2131A8u;
            goto label_2131a8;
        }
    }
    ctx->pc = 0x21311Cu;
label_21311c:
    // 0x21311c: 0x10800006
    ctx->pc = 0x21311Cu;
    {
        const bool branch_taken_0x21311c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x21311c) {
            ctx->pc = 0x213138u;
            goto label_213138;
        }
    }
    ctx->pc = 0x213124u;
    // 0x213124: 0x24020001
    ctx->pc = 0x213124u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x213128: 0x10820003
    ctx->pc = 0x213128u;
    {
        const bool branch_taken_0x213128 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x213128) {
            ctx->pc = 0x213138u;
            goto label_213138;
        }
    }
    ctx->pc = 0x213130u;
    // 0x213130: 0x1000001d
    ctx->pc = 0x213130u;
    {
        const bool branch_taken_0x213130 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213134u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x213130) {
            ctx->pc = 0x2131A8u;
            goto label_2131a8;
        }
    }
    ctx->pc = 0x213138u;
label_213138:
    // 0x213138: 0x3c010050
    ctx->pc = 0x213138u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21313c: 0x8423e504
    ctx->pc = 0x21313cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x213140: 0x2402000a
    ctx->pc = 0x213140u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x213144: 0x10620004
    ctx->pc = 0x213144u;
    {
        const bool branch_taken_0x213144 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x213148u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x213144) {
            ctx->pc = 0x213158u;
            goto label_213158;
        }
    }
    ctx->pc = 0x21314Cu;
    // 0x21314c: 0x10000016
    ctx->pc = 0x21314Cu;
    {
        const bool branch_taken_0x21314c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213150u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21314c) {
            ctx->pc = 0x2131A8u;
            goto label_2131a8;
        }
    }
    ctx->pc = 0x213154u;
    // 0x213154: 0x41100
    ctx->pc = 0x213154u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 4));
label_213158:
    // 0x213158: 0x441823
    ctx->pc = 0x213158u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21315c: 0x310c0
    ctx->pc = 0x21315cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x213160: 0x431023
    ctx->pc = 0x213160u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x213164: 0x218c0
    ctx->pc = 0x213164u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
    // 0x213168: 0x3c020050
    ctx->pc = 0x213168u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x21316c: 0x2442dd24
    ctx->pc = 0x21316cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958372));
    // 0x213170: 0x431021
    ctx->pc = 0x213170u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x213174: 0x8c430000
    ctx->pc = 0x213174u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213178: 0x24020005
    ctx->pc = 0x213178u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x21317c: 0x1062000a
    ctx->pc = 0x21317Cu;
    {
        const bool branch_taken_0x21317c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x213180u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21317c) {
            ctx->pc = 0x2131A8u;
            goto label_2131a8;
        }
    }
    ctx->pc = 0x213184u;
    // 0x213184: 0x24020004
    ctx->pc = 0x213184u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x213188: 0x10620006
    ctx->pc = 0x213188u;
    {
        const bool branch_taken_0x213188 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x213188) {
            ctx->pc = 0x2131A4u;
            goto label_2131a4;
        }
    }
    ctx->pc = 0x213190u;
    // 0x213190: 0x24020001
    ctx->pc = 0x213190u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x213194: 0x10620003
    ctx->pc = 0x213194u;
    {
        const bool branch_taken_0x213194 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x213194) {
            ctx->pc = 0x2131A4u;
            goto label_2131a4;
        }
    }
    ctx->pc = 0x21319Cu;
    // 0x21319c: 0x10000002
    ctx->pc = 0x21319Cu;
    {
        const bool branch_taken_0x21319c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2131A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x21319c) {
            ctx->pc = 0x2131A8u;
            goto label_2131a8;
        }
    }
    ctx->pc = 0x2131A4u;
label_2131a4:
    // 0x2131a4: 0x70001628
    ctx->pc = 0x2131a4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2131a8:
    // 0x2131a8: 0x3e00008
    ctx->pc = 0x2131A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21311Cu: goto label_21311c;
            case 0x213138u: goto label_213138;
            case 0x213158u: goto label_213158;
            case 0x2131A4u: goto label_2131a4;
            case 0x2131A8u: goto label_2131a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2131B0u;
}
