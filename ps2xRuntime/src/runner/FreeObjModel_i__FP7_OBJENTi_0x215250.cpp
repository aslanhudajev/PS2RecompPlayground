#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FreeObjModel_i__FP7_OBJENTi
// Address: 0x215250 - 0x2152a0
void FreeObjModel_i__FP7_OBJENTi_0x215250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FreeObjModel_i__FP7_OBJENTi");


    ctx->pc = 0x215250u;

    // 0x215250: 0x27bdffd0
    ctx->pc = 0x215250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215254: 0x7fbf0020
    ctx->pc = 0x215254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x215258: 0x7fb10010
    ctx->pc = 0x215258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21525c: 0x7fb00000
    ctx->pc = 0x21525cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x215260: 0x70808e28
    ctx->pc = 0x215260u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x215264: 0x8c840000
    ctx->pc = 0x215264u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x215268: 0x10800003
    ctx->pc = 0x215268u;
    {
        const bool branch_taken_0x215268 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x21526Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x215268) {
            ctx->pc = 0x215278u;
            goto label_215278;
        }
    }
    ctx->pc = 0x215270u;
    // 0x215270: 0xc0687c0
    ctx->pc = 0x215270u;
    SET_GPR_U32(ctx, 31, 0x215278u);
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215278u; }
        else if (ctx->pc != 0x215278u) { ctx->pc = 0x215278u; }
    }
    if (ctx->pc != 0x215278u) { return; }
    ctx->pc = 0x215278u;
label_215278:
    // 0x215278: 0x3c020051
    ctx->pc = 0x215278u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x21527c: 0x72002e28
    ctx->pc = 0x21527cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x215280: 0x24442250
    ctx->pc = 0x215280u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
    // 0x215284: 0xc07f8a0
    ctx->pc = 0x215284u;
    SET_GPR_U32(ctx, 31, 0x21528Cu);
    ctx->pc = 0x215288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1FE280u;
    {
        const uint32_t __entryPc = ctx->pc;
        free_obj__15OneSkinMgrClassFi_0x1fe280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21528Cu; }
        else if (ctx->pc != 0x21528Cu) { ctx->pc = 0x21528Cu; }
    }
    if (ctx->pc != 0x21528Cu) { return; }
    ctx->pc = 0x21528Cu;
    // 0x21528c: 0x7bbf0020
    ctx->pc = 0x21528cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215290: 0x7bb10010
    ctx->pc = 0x215290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215294: 0x7bb00000
    ctx->pc = 0x215294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215298: 0x3e00008
    ctx->pc = 0x215298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21529Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215278u: goto label_215278;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2152A0u;
}
