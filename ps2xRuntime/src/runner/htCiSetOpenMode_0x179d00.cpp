#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiSetOpenMode
// Address: 0x179d00 - 0x179d2c
void htCiSetOpenMode_0x179d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiSetOpenMode");


    ctx->pc = 0x179d00u;

    // 0x179d00: 0x10800006
    ctx->pc = 0x179D00u;
    {
        const bool branch_taken_0x179d00 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x179D04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x179d00) {
            ctx->pc = 0x179D1Cu;
            goto label_179d1c;
        }
    }
    ctx->pc = 0x179D08u;
    // 0x179d08: 0x14820005
    ctx->pc = 0x179D08u;
    {
        const bool branch_taken_0x179d08 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x179D0Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
        if (branch_taken_0x179d08) {
            ctx->pc = 0x179D20u;
            goto label_179d20;
        }
    }
    ctx->pc = 0x179D10u;
    // 0x179d10: 0x3c020024
    ctx->pc = 0x179d10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x179d14: 0x3e00008
    ctx->pc = 0x179D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179D18u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943800), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179D1Cu: goto label_179d1c;
            case 0x179D20u: goto label_179d20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179D1Cu;
label_179d1c:
    // 0x179d1c: 0x3c030024
    ctx->pc = 0x179d1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_179d20:
    // 0x179d20: 0x34028001
    ctx->pc = 0x179d20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32769));
    // 0x179d24: 0x3e00008
    ctx->pc = 0x179D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179D28u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943800), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179D1Cu: goto label_179d1c;
            case 0x179D20u: goto label_179d20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179D2Cu;
}
