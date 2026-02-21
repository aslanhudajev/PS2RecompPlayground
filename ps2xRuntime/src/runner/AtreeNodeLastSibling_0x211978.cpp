#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeNodeLastSibling
// Address: 0x211978 - 0x2119b4
void AtreeNodeLastSibling_0x211978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x211978u;

    // 0x211978: 0x80102d
    ctx->pc = 0x211978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21197c: 0x8c43000c
    ctx->pc = 0x21197cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x211980: 0x1060000a
    ctx->pc = 0x211980u;
    {
        const bool branch_taken_0x211980 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x211980) {
            ctx->pc = 0x2119ACu;
            goto label_2119ac;
        }
    }
    ctx->pc = 0x211988u;
    // 0x211988: 0x10620008
    ctx->pc = 0x211988u;
    {
        const bool branch_taken_0x211988 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x211988) {
            ctx->pc = 0x2119ACu;
            goto label_2119ac;
        }
    }
    ctx->pc = 0x211990u;
    // 0x211990: 0x60102d
    ctx->pc = 0x211990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211994: 0x0
    ctx->pc = 0x211994u;
    // NOP
label_211998:
    // 0x211998: 0x8c43000c
    ctx->pc = 0x211998u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21199c: 0x10600003
    ctx->pc = 0x21199Cu;
    {
        const bool branch_taken_0x21199c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x21199c) {
            ctx->pc = 0x2119ACu;
            goto label_2119ac;
        }
    }
    ctx->pc = 0x2119A4u;
    // 0x2119a4: 0x5464fffc
    ctx->pc = 0x2119A4u;
    {
        const bool branch_taken_0x2119a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x2119a4) {
            ctx->pc = 0x2119A8u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x211998u;
            goto label_211998;
        }
    }
    ctx->pc = 0x2119ACu;
label_2119ac:
    // 0x2119ac: 0x3e00008
    ctx->pc = 0x2119ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211998u: goto label_211998;
            case 0x2119ACu: goto label_2119ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2119B4u;
}
