#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isinf
// Address: 0x2d7510 - 0x2d7578
void isinf_0x2d7510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d7510u;

    // 0x2d7510: 0x27bdffe0
    ctx->pc = 0x2d7510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d7514: 0xffbf0010
    ctx->pc = 0x2d7514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d7518: 0xffa40000
    ctx->pc = 0x2d7518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x2d751c: 0xdfa40000
    ctx->pc = 0x2d751cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7520: 0x4153e
    ctx->pc = 0x2d7520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (32 + 20));
    // 0x2d7524: 0x304207ff
    ctx->pc = 0x2d7524u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
    // 0x2d7528: 0x240307ff
    ctx->pc = 0x2d7528u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2047));
    // 0x2d752c: 0x5443000f
    ctx->pc = 0x2D752Cu;
    {
        const bool branch_taken_0x2d752c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2d752c) {
            ctx->pc = 0x2D7530u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2D756Cu;
            goto label_2d756c;
        }
    }
    ctx->pc = 0x2D7534u;
    // 0x2d7534: 0x3c02800f
    ctx->pc = 0x2d7534u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32783 << 16));
    // 0x2d7538: 0x3442ffff
    ctx->pc = 0x2d7538u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2d753c: 0x21438
    ctx->pc = 0x2d753cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2d7540: 0x3442ffff
    ctx->pc = 0x2d7540u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2d7544: 0x21438
    ctx->pc = 0x2d7544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2d7548: 0x3442ffff
    ctx->pc = 0x2d7548u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2d754c: 0x821024
    ctx->pc = 0x2d754cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d7550: 0xffa20000
    ctx->pc = 0x2d7550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2d7554: 0xdfa40000
    ctx->pc = 0x2d7554u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7558: 0xc0be4ba
    ctx->pc = 0x2D7558u;
    SET_GPR_U32(ctx, 31, 0x2D7560u);
    ctx->pc = 0x2D755Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7560u; }
    }
    if (ctx->pc != 0x2D7560u) { return; }
    ctx->pc = 0x2D7560u;
    // 0x2d7560: 0x24030001
    ctx->pc = 0x2d7560u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7564: 0x2180b
    ctx->pc = 0x2d7564u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x2d7568: 0x60102d
    ctx->pc = 0x2d7568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d756c:
    // 0x2d756c: 0xdfbf0010
    ctx->pc = 0x2d756cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7570: 0x3e00008
    ctx->pc = 0x2D7570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7574u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D756Cu: goto label_2d756c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D7578u;
}
