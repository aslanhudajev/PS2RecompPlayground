#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__16MainModeMgrClassFi
// Address: 0x1f4120 - 0x1f414c
void init__16MainModeMgrClassFi_0x1f4120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__16MainModeMgrClassFi");


    ctx->pc = 0x1f4120u;

label_1f4120:
    // 0x1f4120: 0x27bdfff0
    ctx->pc = 0x1f4120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f4124:
    // 0x1f4124: 0x7fbf0000
    ctx->pc = 0x1f4124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1f4128:
    // 0x1f4128: 0xac800008
    ctx->pc = 0x1f4128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_1f412c:
    // 0x1f412c: 0xa4850006
    ctx->pc = 0x1f412cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 5));
label_1f4130:
    // 0x1f4130: 0x8c990000
    ctx->pc = 0x1f4130u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f4134:
    // 0x1f4134: 0x8f390010
    ctx->pc = 0x1f4134u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f4138:
    // 0x1f4138: 0x320f809
label_1f413c:
    if (ctx->pc == 0x1F413Cu) {
        ctx->pc = 0x1F4140u;
        goto label_1f4140;
    }
    ctx->pc = 0x1F4138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F4140u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F4120u: goto label_1f4120;
            case 0x1F4124u: goto label_1f4124;
            case 0x1F4128u: goto label_1f4128;
            case 0x1F412Cu: goto label_1f412c;
            case 0x1F4130u: goto label_1f4130;
            case 0x1F4134u: goto label_1f4134;
            case 0x1F4138u: goto label_1f4138;
            case 0x1F413Cu: goto label_1f413c;
            case 0x1F4140u: goto label_1f4140;
            case 0x1F4144u: goto label_1f4144;
            case 0x1F4148u: goto label_1f4148;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F4140u; }
            if (ctx->pc != 0x1F4140u) { return; }
        }
    }
    ctx->pc = 0x1F4140u;
label_1f4140:
    // 0x1f4140: 0x7bbf0000
    ctx->pc = 0x1f4140u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4144:
    // 0x1f4144: 0x3e00008
label_1f4148:
    if (ctx->pc == 0x1F4148u) {
        ctx->pc = 0x1F4148u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1F414Cu;
        goto label_fallthrough_0x1f4144;
    }
    ctx->pc = 0x1F4144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4148u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F4120u: goto label_1f4120;
            case 0x1F4124u: goto label_1f4124;
            case 0x1F4128u: goto label_1f4128;
            case 0x1F412Cu: goto label_1f412c;
            case 0x1F4130u: goto label_1f4130;
            case 0x1F4134u: goto label_1f4134;
            case 0x1F4138u: goto label_1f4138;
            case 0x1F413Cu: goto label_1f413c;
            case 0x1F4140u: goto label_1f4140;
            case 0x1F4144u: goto label_1f4144;
            case 0x1F4148u: goto label_1f4148;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f4144:
    ctx->pc = 0x1F414Cu;
}
