#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_alloc
// Address: 0x178c58 - 0x178c8c
void htci_alloc_0x178c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_alloc");


    ctx->pc = 0x178c58u;

    // 0x178c58: 0x3c020024
    ctx->pc = 0x178c58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x178c5c: 0x202d
    ctx->pc = 0x178c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c60: 0x2443a120
    ctx->pc = 0x178c60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294943008));
    // 0x178c64: 0x246501d4
    ctx->pc = 0x178c64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 468));
label_178c68:
    // 0x178c68: 0x80620000
    ctx->pc = 0x178c68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178c6c: 0x62200a
    ctx->pc = 0x178c6cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x178c70: 0x24630024
    ctx->pc = 0x178c70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 36));
    // 0x178c74: 0x65102a
    ctx->pc = 0x178c74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x178c78: 0x0
    ctx->pc = 0x178c78u;
    // NOP
    // 0x178c7c: 0x1440fffa
    ctx->pc = 0x178C7Cu;
    {
        const bool branch_taken_0x178c7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x178c7c) {
            ctx->pc = 0x178C68u;
            goto label_178c68;
        }
    }
    ctx->pc = 0x178C84u;
    // 0x178c84: 0x3e00008
    ctx->pc = 0x178C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C88u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178C68u: goto label_178c68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178C8Cu;
}
