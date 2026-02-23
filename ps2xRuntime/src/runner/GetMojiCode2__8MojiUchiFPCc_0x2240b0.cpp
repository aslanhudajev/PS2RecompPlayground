#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetMojiCode2__8MojiUchiFPCc
// Address: 0x2240b0 - 0x224164
void GetMojiCode2__8MojiUchiFPCc_0x2240b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetMojiCode2__8MojiUchiFPCc");


    ctx->pc = 0x2240b0u;

    // 0x2240b0: 0x27bdffd0
    ctx->pc = 0x2240b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2240b4: 0x7fbf0020
    ctx->pc = 0x2240b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2240b8: 0x7fb10010
    ctx->pc = 0x2240b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2240bc: 0x7fb00000
    ctx->pc = 0x2240bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2240c0: 0x70a08628
    ctx->pc = 0x2240c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2240c4: 0x70808e28
    ctx->pc = 0x2240c4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2240c8: 0xc089018
    ctx->pc = 0x2240C8u;
    SET_GPR_U32(ctx, 31, 0x2240D0u);
    ctx->pc = 0x2240CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x224060u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMojiCodeNo2__8MojiUchiFPCc_0x224060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2240D0u; }
        else if (ctx->pc != 0x2240D0u) { ctx->pc = 0x2240D0u; }
    }
    if (ctx->pc != 0x2240D0u) { return; }
    ctx->pc = 0x2240D0u;
    // 0x2240d0: 0x72002e28
    ctx->pc = 0x2240d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2240d4: 0x72202628
    ctx->pc = 0x2240d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2240d8: 0xc089018
    ctx->pc = 0x2240D8u;
    SET_GPR_U32(ctx, 31, 0x2240E0u);
    ctx->pc = 0x2240DCu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x224060u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMojiCodeNo2__8MojiUchiFPCc_0x224060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2240E0u; }
        else if (ctx->pc != 0x2240E0u) { ctx->pc = 0x2240E0u; }
    }
    if (ctx->pc != 0x2240E0u) { return; }
    ctx->pc = 0x2240E0u;
    // 0x2240e0: 0x218c0
    ctx->pc = 0x2240e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
    // 0x2240e4: 0x621021
    ctx->pc = 0x2240e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2240e8: 0x21080
    ctx->pc = 0x2240e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2240ec: 0x2021021
    ctx->pc = 0x2240ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2240f0: 0x2403050f
    ctx->pc = 0x2240f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1295));
    // 0x2240f4: 0x14430003
    ctx->pc = 0x2240F4u;
    {
        const bool branch_taken_0x2240f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2240F8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1283));
        if (branch_taken_0x2240f4) {
            ctx->pc = 0x224104u;
            goto label_224104;
        }
    }
    ctx->pc = 0x2240FCu;
    // 0x2240fc: 0x10000014
    ctx->pc = 0x2240FCu;
    {
        const bool branch_taken_0x2240fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224100u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 192));
        if (branch_taken_0x2240fc) {
            ctx->pc = 0x224150u;
            goto label_224150;
        }
    }
    ctx->pc = 0x224104u;
label_224104:
    // 0x224104: 0x14430003
    ctx->pc = 0x224104u;
    {
        const bool branch_taken_0x224104 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x224108u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1282));
        if (branch_taken_0x224104) {
            ctx->pc = 0x224114u;
            goto label_224114;
        }
    }
    ctx->pc = 0x22410Cu;
    // 0x22410c: 0x10000010
    ctx->pc = 0x22410Cu;
    {
        const bool branch_taken_0x22410c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224110u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x22410c) {
            ctx->pc = 0x224150u;
            goto label_224150;
        }
    }
    ctx->pc = 0x224114u;
label_224114:
    // 0x224114: 0x14430003
    ctx->pc = 0x224114u;
    {
        const bool branch_taken_0x224114 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x224118u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1281));
        if (branch_taken_0x224114) {
            ctx->pc = 0x224124u;
            goto label_224124;
        }
    }
    ctx->pc = 0x22411Cu;
    // 0x22411c: 0x1000000c
    ctx->pc = 0x22411Cu;
    {
        const bool branch_taken_0x22411c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224120u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x22411c) {
            ctx->pc = 0x224150u;
            goto label_224150;
        }
    }
    ctx->pc = 0x224124u;
label_224124:
    // 0x224124: 0x14430003
    ctx->pc = 0x224124u;
    {
        const bool branch_taken_0x224124 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x224128u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1284));
        if (branch_taken_0x224124) {
            ctx->pc = 0x224134u;
            goto label_224134;
        }
    }
    ctx->pc = 0x22412Cu;
    // 0x22412c: 0x10000008
    ctx->pc = 0x22412Cu;
    {
        const bool branch_taken_0x22412c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224130u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x22412c) {
            ctx->pc = 0x224150u;
            goto label_224150;
        }
    }
    ctx->pc = 0x224134u;
label_224134:
    // 0x224134: 0x14430003
    ctx->pc = 0x224134u;
    {
        const bool branch_taken_0x224134 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x224138u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1285));
        if (branch_taken_0x224134) {
            ctx->pc = 0x224144u;
            goto label_224144;
        }
    }
    ctx->pc = 0x22413Cu;
    // 0x22413c: 0x10000004
    ctx->pc = 0x22413Cu;
    {
        const bool branch_taken_0x22413c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224140u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x22413c) {
            ctx->pc = 0x224150u;
            goto label_224150;
        }
    }
    ctx->pc = 0x224144u;
label_224144:
    // 0x224144: 0x14430002
    ctx->pc = 0x224144u;
    {
        const bool branch_taken_0x224144 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x224144) {
            ctx->pc = 0x224150u;
            goto label_224150;
        }
    }
    ctx->pc = 0x22414Cu;
    // 0x22414c: 0x2402fffb
    ctx->pc = 0x22414cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
label_224150:
    // 0x224150: 0x7bbf0020
    ctx->pc = 0x224150u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224154: 0x7bb10010
    ctx->pc = 0x224154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224158: 0x7bb00000
    ctx->pc = 0x224158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22415c: 0x3e00008
    ctx->pc = 0x22415Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224160u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224104u: goto label_224104;
            case 0x224114u: goto label_224114;
            case 0x224124u: goto label_224124;
            case 0x224134u: goto label_224134;
            case 0x224144u: goto label_224144;
            case 0x224150u: goto label_224150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224164u;
}
