#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iirflt_create
// Address: 0x16eb80 - 0x16ebd4
void iirflt_create_0x16eb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iirflt_create");


    ctx->pc = 0x16eb80u;

    // 0x16eb80: 0x3c020023
    ctx->pc = 0x16eb80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16eb84: 0x202d
    ctx->pc = 0x16eb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb88: 0x80437200
    ctx->pc = 0x16eb88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29184)));
    // 0x16eb8c: 0x1060000c
    ctx->pc = 0x16EB8Cu;
    {
        const bool branch_taken_0x16eb8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EB90u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 29184));
        if (branch_taken_0x16eb8c) {
            ctx->pc = 0x16EBC0u;
            goto label_16ebc0;
        }
    }
    ctx->pc = 0x16EB94u;
    // 0x16eb94: 0xc0282d
    ctx->pc = 0x16eb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb98: 0xc0182d
    ctx->pc = 0x16eb98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb9c: 0x0
    ctx->pc = 0x16eb9cu;
    // NOP
label_16eba0:
    // 0x16eba0: 0x24840001
    ctx->pc = 0x16eba0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x16eba4: 0x24a5000c
    ctx->pc = 0x16eba4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12));
    // 0x16eba8: 0x28820010
    ctx->pc = 0x16eba8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 16));
    // 0x16ebac: 0x10400004
    ctx->pc = 0x16EBACu;
    {
        const bool branch_taken_0x16ebac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EBB0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12));
        if (branch_taken_0x16ebac) {
            ctx->pc = 0x16EBC0u;
            goto label_16ebc0;
        }
    }
    ctx->pc = 0x16EBB4u;
    // 0x16ebb4: 0x80a20000
    ctx->pc = 0x16ebb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ebb8: 0x1440fff9
    ctx->pc = 0x16EBB8u;
    {
        const bool branch_taken_0x16ebb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16EBBCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ebb8) {
            ctx->pc = 0x16EBA0u;
            goto label_16eba0;
        }
    }
    ctx->pc = 0x16EBC0u;
label_16ebc0:
    // 0x16ebc0: 0x2403000f
    ctx->pc = 0x16ebc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x16ebc4: 0x102d
    ctx->pc = 0x16ebc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ebc8: 0x64182a
    ctx->pc = 0x16ebc8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x16ebcc: 0x3e00008
    ctx->pc = 0x16EBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EBD0u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EBA0u: goto label_16eba0;
            case 0x16EBC0u: goto label_16ebc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EBD4u;
}
