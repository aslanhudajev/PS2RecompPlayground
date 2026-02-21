#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNodeLastSibling
// Address: 0x2cf950 - 0x2cf98c
void MBNodeLastSibling_0x2cf950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cf950u;

    // 0x2cf950: 0x80102d
    ctx->pc = 0x2cf950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf954: 0x8c43007c
    ctx->pc = 0x2cf954u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x2cf958: 0x1060000a
    ctx->pc = 0x2CF958u;
    {
        const bool branch_taken_0x2cf958 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cf958) {
            ctx->pc = 0x2CF984u;
            goto label_2cf984;
        }
    }
    ctx->pc = 0x2CF960u;
    // 0x2cf960: 0x10620008
    ctx->pc = 0x2CF960u;
    {
        const bool branch_taken_0x2cf960 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2cf960) {
            ctx->pc = 0x2CF984u;
            goto label_2cf984;
        }
    }
    ctx->pc = 0x2CF968u;
    // 0x2cf968: 0x60102d
    ctx->pc = 0x2cf968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf96c: 0x0
    ctx->pc = 0x2cf96cu;
    // NOP
label_2cf970:
    // 0x2cf970: 0x8c43007c
    ctx->pc = 0x2cf970u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x2cf974: 0x10600003
    ctx->pc = 0x2CF974u;
    {
        const bool branch_taken_0x2cf974 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cf974) {
            ctx->pc = 0x2CF984u;
            goto label_2cf984;
        }
    }
    ctx->pc = 0x2CF97Cu;
    // 0x2cf97c: 0x5464fffc
    ctx->pc = 0x2CF97Cu;
    {
        const bool branch_taken_0x2cf97c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x2cf97c) {
            ctx->pc = 0x2CF980u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2CF970u;
            goto label_2cf970;
        }
    }
    ctx->pc = 0x2CF984u;
label_2cf984:
    // 0x2cf984: 0x3e00008
    ctx->pc = 0x2CF984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CF970u: goto label_2cf970;
            case 0x2CF984u: goto label_2cf984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CF98Cu;
}
