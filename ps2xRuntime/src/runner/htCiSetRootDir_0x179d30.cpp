#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiSetRootDir
// Address: 0x179d30 - 0x179d90
void htCiSetRootDir_0x179d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiSetRootDir");


    ctx->pc = 0x179d30u;

    // 0x179d30: 0x80282d
    ctx->pc = 0x179d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d34: 0x10a00013
    ctx->pc = 0x179D34u;
    {
        const bool branch_taken_0x179d34 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x179D38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
        if (branch_taken_0x179d34) {
            ctx->pc = 0x179D84u;
            goto label_179d84;
        }
    }
    ctx->pc = 0x179D3Cu;
    // 0x179d3c: 0x80a30000
    ctx->pc = 0x179d3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179d40: 0x1062000c
    ctx->pc = 0x179D40u;
    {
        const bool branch_taken_0x179d40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x179D44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 92));
        if (branch_taken_0x179d40) {
            ctx->pc = 0x179D74u;
            goto label_179d74;
        }
    }
    ctx->pc = 0x179D48u;
    // 0x179d48: 0x1062000a
    ctx->pc = 0x179D48u;
    {
        const bool branch_taken_0x179d48 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x179D4Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x179d48) {
            ctx->pc = 0x179D74u;
            goto label_179d74;
        }
    }
    ctx->pc = 0x179D50u;
    // 0x179d50: 0x3c02002c
    ctx->pc = 0x179d50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x179d54: 0x2448b898
    ctx->pc = 0x179d54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294949016));
    // 0x179d58: 0x2487a440
    ctx->pc = 0x179d58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 4294943808));
    // 0x179d5c: 0x81030000
    ctx->pc = 0x179d5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x179d60: 0x81060001
    ctx->pc = 0x179d60u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x179d64: 0xa0e30000
    ctx->pc = 0x179d64u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x179d68: 0xa0e60001
    ctx->pc = 0x179d68u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x179d6c: 0x10000003
    ctx->pc = 0x179D6Cu;
    {
        const bool branch_taken_0x179d6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x179d6c) {
            ctx->pc = 0x179D7Cu;
            goto label_179d7c;
        }
    }
    ctx->pc = 0x179D74u;
label_179d74:
    // 0x179d74: 0x3c040024
    ctx->pc = 0x179d74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x179d78: 0xa080a440
    ctx->pc = 0x179d78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294943808), (uint8_t)GPR_U32(ctx, 0));
label_179d7c:
    // 0x179d7c: 0x805150e
    ctx->pc = 0x179D7Cu;
    ctx->pc = 0x179D80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943808));
    ctx->pc = 0x145438u;
    strcpy_0x145438(rdram, ctx, runtime); return;
    ctx->pc = 0x179D84u;
label_179d84:
    // 0x179d84: 0x3c020024
    ctx->pc = 0x179d84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x179d88: 0x3e00008
    ctx->pc = 0x179D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179D8Cu;
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294943808), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179D74u: goto label_179d74;
            case 0x179D7Cu: goto label_179d7c;
            case 0x179D84u: goto label_179d84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179D90u;
}
