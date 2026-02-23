#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_Init
// Address: 0x193810 - 0x193870
void SFD_Init_0x193810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_Init");
    ctx->pc = 0x193810u;

    // 0x193810: 0x27bdffe0
    ctx->pc = 0x193810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193814: 0x3c030026
    ctx->pc = 0x193814u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x193818: 0x24026828
    ctx->pc = 0x193818u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 26664));
    // 0x19381c: 0xffb00000
    ctx->pc = 0x19381cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193820: 0xac62df3c
    ctx->pc = 0x193820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958908), GPR_U32(ctx, 2));
    // 0x193824: 0xffbf0010
    ctx->pc = 0x193824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193828: 0xc064e00
    ctx->pc = 0x193828u;
    SET_GPR_U32(ctx, 31, 0x193830u);
    ctx->pc = 0x19382Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193800u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_GetVersionStr_0x193800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193830u; }
        else if (ctx->pc != 0x193830u) { ctx->pc = 0x193830u; }
    }
    if (ctx->pc != 0x193830u) { return; }
    ctx->pc = 0x193830u;
    // 0x193830: 0x3c03002f
    ctx->pc = 0x193830u;
    SET_GPR_U32(ctx, 3, ((uint32_t)47 << 16));
    // 0x193834: 0xc064f28
    ctx->pc = 0x193834u;
    SET_GPR_U32(ctx, 31, 0x19383Cu);
    ctx->pc = 0x193838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953088), GPR_U32(ctx, 2));
    ctx->pc = 0x193CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sflib_InitBaseLib_0x193ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19383Cu; }
        else if (ctx->pc != 0x19383Cu) { ctx->pc = 0x19383Cu; }
    }
    if (ctx->pc != 0x19383Cu) { return; }
    ctx->pc = 0x19383Cu;
    // 0x19383c: 0xc064e1c
    ctx->pc = 0x19383Cu;
    SET_GPR_U32(ctx, 31, 0x193844u);
    ctx->pc = 0x193840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sflib_InitLibWork_0x193870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193844u; }
        else if (ctx->pc != 0x193844u) { ctx->pc = 0x193844u; }
    }
    if (ctx->pc != 0x193844u) { return; }
    ctx->pc = 0x193844u;
    // 0x193844: 0x14400007
    ctx->pc = 0x193844u;
    {
        const bool branch_taken_0x193844 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x193848u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x193844) {
            ctx->pc = 0x193864u;
            goto label_193864;
        }
    }
    ctx->pc = 0x19384Cu;
    // 0x19384c: 0xc064f2c
    ctx->pc = 0x19384Cu;
    SET_GPR_U32(ctx, 31, 0x193854u);
    ctx->pc = 0x193CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sflib_InitSub_0x193cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193854u; }
        else if (ctx->pc != 0x193854u) { ctx->pc = 0x193854u; }
    }
    if (ctx->pc != 0x193854u) { return; }
    ctx->pc = 0x193854u;
    // 0x193854: 0xc064f36
    ctx->pc = 0x193854u;
    SET_GPR_U32(ctx, 31, 0x19385Cu);
    ctx->pc = 0x193CD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sflib_InitCs_0x193cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19385Cu; }
        else if (ctx->pc != 0x19385Cu) { ctx->pc = 0x19385Cu; }
    }
    if (ctx->pc != 0x19385Cu) { return; }
    ctx->pc = 0x19385Cu;
    // 0x19385c: 0x102d
    ctx->pc = 0x19385cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193860: 0xdfbf0010
    ctx->pc = 0x193860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_193864:
    // 0x193864: 0xdfb00000
    ctx->pc = 0x193864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193868: 0x3e00008
    ctx->pc = 0x193868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19386Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193864u: goto label_193864;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193870u;
}
