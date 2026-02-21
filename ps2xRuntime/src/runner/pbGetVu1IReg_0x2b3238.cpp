#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu1IReg
// Address: 0x2b3238 - 0x2b3280
void pbGetVu1IReg_0x2b3238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3238u;

    // 0x2b3238: 0x27bdffe0
    ctx->pc = 0x2b3238u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b323c: 0xffbf0010
    ctx->pc = 0x2b323cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b3240: 0xffb00000
    ctx->pc = 0x2b3240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3244: 0x80802d
    ctx->pc = 0x2b3244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3248: 0xa0302d
    ctx->pc = 0x2b3248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b324c: 0x8e020000
    ctx->pc = 0x2b324cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b3250: 0xc0acc50
    ctx->pc = 0x2B3250u;
    SET_GPR_U32(ctx, 31, 0x2B3258u);
    ctx->pc = 0x2B3254u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->pc = 0x2B3140u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1RegNum_0x2b3140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3258u; }
    }
    if (ctx->pc != 0x2B3258u) { return; }
    ctx->pc = 0x2B3258u;
    // 0x2b3258: 0x40182d
    ctx->pc = 0x2b3258u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b325c: 0x4600004
    ctx->pc = 0x2B325Cu;
    {
        const bool branch_taken_0x2b325c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2B3260u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2b325c) {
            ctx->pc = 0x2B3270u;
            goto label_2b3270;
        }
    }
    ctx->pc = 0x2B3264u;
    // 0x2b3264: 0x8e020004
    ctx->pc = 0x2b3264u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b3268: 0x431021
    ctx->pc = 0x2b3268u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b326c: 0x94420220
    ctx->pc = 0x2b326cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 544)));
label_2b3270:
    // 0x2b3270: 0xdfbf0010
    ctx->pc = 0x2b3270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3274: 0xdfb00000
    ctx->pc = 0x2b3274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3278: 0x3e00008
    ctx->pc = 0x2B3278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B327Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B3270u: goto label_2b3270;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B3280u;
}
