#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Disp__10ErsPplTaskFv
// Address: 0x20d660 - 0x20d6d4
void Disp__10ErsPplTaskFv_0x20d660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Disp__10ErsPplTaskFv");


    ctx->pc = 0x20d660u;

    // 0x20d660: 0x27bdffe0
    ctx->pc = 0x20d660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20d664: 0x7fbf0010
    ctx->pc = 0x20d664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20d668: 0x7fb00000
    ctx->pc = 0x20d668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20d66c: 0x70808628
    ctx->pc = 0x20d66cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20d670: 0x8f848cb0
    ctx->pc = 0x20d670u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x20d674: 0x24030001
    ctx->pc = 0x20d674u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d678: 0x30840004
    ctx->pc = 0x20d678u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 4));
    // 0x20d67c: 0x4180a
    ctx->pc = 0x20d67cu;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x20d680: 0x14600010
    ctx->pc = 0x20D680u;
    {
        const bool branch_taken_0x20d680 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20d680) {
            ctx->pc = 0x20D6C4u;
            goto label_20d6c4;
        }
    }
    ctx->pc = 0x20D688u;
    // 0x20d688: 0xc0810b8
    ctx->pc = 0x20D688u;
    SET_GPR_U32(ctx, 31, 0x20D690u);
    ctx->pc = 0x20D68Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7548)));
    ctx->pc = 0x2042E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LocalLightOn__FP10PeopleTask_0x2042e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D690u; }
        else if (ctx->pc != 0x20D690u) { ctx->pc = 0x20D690u; }
    }
    if (ctx->pc != 0x20D690u) { return; }
    ctx->pc = 0x20D690u;
    // 0x20d690: 0x12000003
    ctx->pc = 0x20D690u;
    {
        const bool branch_taken_0x20d690 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D694u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20d690) {
            ctx->pc = 0x20D6A0u;
            goto label_20d6a0;
        }
    }
    ctx->pc = 0x20D698u;
    // 0x20d698: 0x8e060030
    ctx->pc = 0x20d698u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20d69c: 0x0
    ctx->pc = 0x20d69cu;
    // NOP
label_20d6a0:
    // 0x20d6a0: 0x12000002
    ctx->pc = 0x20D6A0u;
    {
        const bool branch_taken_0x20d6a0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D6A4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20d6a0) {
            ctx->pc = 0x20D6ACu;
            goto label_20d6ac;
        }
    }
    ctx->pc = 0x20D6A8u;
    // 0x20d6a8: 0x24a50030
    ctx->pc = 0x20d6a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_20d6ac:
    // 0x20d6ac: 0x3c02004a
    ctx->pc = 0x20d6acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x20d6b0: 0x260700a0
    ctx->pc = 0x20d6b0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 160));
    // 0x20d6b4: 0xc07e480
    ctx->pc = 0x20D6B4u;
    SET_GPR_U32(ctx, 31, 0x20D6BCu);
    ctx->pc = 0x20D6B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
    ctx->pc = 0x1F9200u;
    {
        const uint32_t __entryPc = ctx->pc;
        ctrl__12BodyMgrClassFP10MotObjTaskP9MvObjTaskP6MOPRTS_0x1f9200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D6BCu; }
        else if (ctx->pc != 0x20D6BCu) { ctx->pc = 0x20D6BCu; }
    }
    if (ctx->pc != 0x20D6BCu) { return; }
    ctx->pc = 0x20D6BCu;
    // 0x20d6bc: 0xc0810e8
    ctx->pc = 0x20D6BCu;
    SET_GPR_U32(ctx, 31, 0x20D6C4u);
    ctx->pc = 0x2043A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LocalLightOff__Fv_0x2043a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D6C4u; }
        else if (ctx->pc != 0x20D6C4u) { ctx->pc = 0x20D6C4u; }
    }
    if (ctx->pc != 0x20D6C4u) { return; }
    ctx->pc = 0x20D6C4u;
label_20d6c4:
    // 0x20d6c4: 0x7bbf0010
    ctx->pc = 0x20d6c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d6c8: 0x7bb00000
    ctx->pc = 0x20d6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d6cc: 0x3e00008
    ctx->pc = 0x20D6CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D6D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D6A0u: goto label_20d6a0;
            case 0x20D6ACu: goto label_20d6ac;
            case 0x20D6C4u: goto label_20d6c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20D6D4u;
}
