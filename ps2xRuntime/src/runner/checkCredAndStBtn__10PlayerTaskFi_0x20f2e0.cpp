#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: checkCredAndStBtn__10PlayerTaskFi
// Address: 0x20f2e0 - 0x20f374
void checkCredAndStBtn__10PlayerTaskFi_0x20f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("checkCredAndStBtn__10PlayerTaskFi");


    ctx->pc = 0x20f2e0u;

    // 0x20f2e0: 0x27bdffc0
    ctx->pc = 0x20f2e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20f2e4: 0x7fbf0030
    ctx->pc = 0x20f2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x20f2e8: 0x7fb20020
    ctx->pc = 0x20f2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20f2ec: 0x7fb10010
    ctx->pc = 0x20f2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20f2f0: 0x7fb00000
    ctx->pc = 0x20f2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20f2f4: 0x70809628
    ctx->pc = 0x20f2f4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20f2f8: 0x8c841cb8
    ctx->pc = 0x20f2f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 7352)));
    // 0x20f2fc: 0x70a08e28
    ctx->pc = 0x20f2fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x20f300: 0xc08091c
    ctx->pc = 0x20F300u;
    SET_GPR_U32(ctx, 31, 0x20F308u);
    ctx->pc = 0x20F304u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x202470u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressStart__Fi_0x202470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F308u; }
        else if (ctx->pc != 0x20F308u) { ctx->pc = 0x20F308u; }
    }
    if (ctx->pc != 0x20F308u) { return; }
    ctx->pc = 0x20F308u;
    // 0x20f308: 0x10400009
    ctx->pc = 0x20F308u;
    {
        const bool branch_taken_0x20f308 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F30Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x20f308) {
            ctx->pc = 0x20F330u;
            goto label_20f330;
        }
    }
    ctx->pc = 0x20F310u;
    // 0x20f310: 0x8423e504
    ctx->pc = 0x20f310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20f314: 0x2402000a
    ctx->pc = 0x20f314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20f318: 0x14620005
    ctx->pc = 0x20F318u;
    {
        const bool branch_taken_0x20f318 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20f318) {
            ctx->pc = 0x20F330u;
            goto label_20f330;
        }
    }
    ctx->pc = 0x20F320u;
    // 0x20f320: 0x8f828cb0
    ctx->pc = 0x20f320u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x20f324: 0x30420002
    ctx->pc = 0x20f324u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x20f328: 0x14400006
    ctx->pc = 0x20F328u;
    {
        const bool branch_taken_0x20f328 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F32Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20f328) {
            ctx->pc = 0x20F344u;
            goto label_20f344;
        }
    }
    ctx->pc = 0x20F330u;
label_20f330:
    // 0x20f330: 0x8e421cbc
    ctx->pc = 0x20f330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20f334: 0x8c420018
    ctx->pc = 0x20f334u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20f338: 0x10400005
    ctx->pc = 0x20F338u;
    {
        const bool branch_taken_0x20f338 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20f338) {
            ctx->pc = 0x20F350u;
            goto label_20f350;
        }
    }
    ctx->pc = 0x20F340u;
    // 0x20f340: 0x72202e28
    ctx->pc = 0x20f340u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_20f344:
    // 0x20f344: 0xc083ce0
    ctx->pc = 0x20F344u;
    SET_GPR_U32(ctx, 31, 0x20F34Cu);
    ctx->pc = 0x20F348u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20F380u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkCredSt__10PlayerTaskFi_0x20f380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F34Cu; }
        else if (ctx->pc != 0x20F34Cu) { ctx->pc = 0x20F34Cu; }
    }
    if (ctx->pc != 0x20F34Cu) { return; }
    ctx->pc = 0x20F34Cu;
    // 0x20f34c: 0x70408628
    ctx->pc = 0x20f34cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20f350:
    // 0x20f350: 0x8e431cbc
    ctx->pc = 0x20f350u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20f354: 0x72001628
    ctx->pc = 0x20f354u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20f358: 0xac600018
    ctx->pc = 0x20f358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x20f35c: 0x7bbf0030
    ctx->pc = 0x20f35cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f360: 0x7bb20020
    ctx->pc = 0x20f360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f364: 0x7bb10010
    ctx->pc = 0x20f364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f368: 0x7bb00000
    ctx->pc = 0x20f368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f36c: 0x3e00008
    ctx->pc = 0x20F36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F370u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F330u: goto label_20f330;
            case 0x20F344u: goto label_20f344;
            case 0x20F350u: goto label_20f350;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F374u;
}
