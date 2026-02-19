#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SyncDCache
// Address: 0x303e88 - 0x303efc
void SyncDCache_0x303e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303e88u;

    // 0x303e88: 0x27bdffe0
    ctx->pc = 0x303e88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x303e8c: 0x80302d
    ctx->pc = 0x303e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e90: 0xffbf0010
    ctx->pc = 0x303e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x303e94: 0xffb00000
    ctx->pc = 0x303e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x303e98: 0x40106000
    ctx->pc = 0x303e98u;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x303e9c: 0x3c020001
    ctx->pc = 0x303e9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x303ea0: 0x2028024
    ctx->pc = 0x303ea0u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x303ea4: 0x12000009
    ctx->pc = 0x303EA4u;
    {
        const bool branch_taken_0x303ea4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x303EA8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
        if (branch_taken_0x303ea4) {
            ctx->pc = 0x303ECCu;
            goto label_303ecc;
        }
    }
    ctx->pc = 0x303EACu;
    // 0x303eac: 0x0
    ctx->pc = 0x303eacu;
    // NOP
label_303eb0:
    // 0x303eb0: 0x42000039
    ctx->pc = 0x303eb0u;
    ctx->cop0_status &= ~0x1; // Disable interrupts
    // 0x303eb4: 0x40f
    ctx->pc = 0x303eb4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x303eb8: 0x40026000
    ctx->pc = 0x303eb8u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x303ebc: 0x431024
    ctx->pc = 0x303ebcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x303ec0: 0x0
    ctx->pc = 0x303ec0u;
    // NOP
    // 0x303ec4: 0x1440fffa
    ctx->pc = 0x303EC4u;
    {
        const bool branch_taken_0x303ec4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x303ec4) {
            ctx->pc = 0x303EB0u;
            goto label_303eb0;
        }
    }
    ctx->pc = 0x303ECCu;
label_303ecc:
    // 0x303ecc: 0x3c04ffff
    ctx->pc = 0x303eccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x303ed0: 0x3484ffc0
    ctx->pc = 0x303ed0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65472));
    // 0x303ed4: 0xa42824
    ctx->pc = 0x303ed4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x303ed8: 0xc0c0f78
    ctx->pc = 0x303ED8u;
    SET_GPR_U32(ctx, 31, 0x303EE0u);
    ctx->pc = 0x303EDCu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->pc = 0x303DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceSDC_0x303de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303EE0u; }
    }
    if (ctx->pc != 0x303EE0u) { return; }
    ctx->pc = 0x303EE0u;
    // 0x303ee0: 0x12000003
    ctx->pc = 0x303EE0u;
    {
        const bool branch_taken_0x303ee0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x303EE4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x303ee0) {
            ctx->pc = 0x303EF0u;
            goto label_303ef0;
        }
    }
    ctx->pc = 0x303EE8u;
    // 0x303ee8: 0x42000038
    ctx->pc = 0x303ee8u;
    ctx->cop0_status |= 0x1; // Enable interrupts
    // 0x303eec: 0xdfbf0010
    ctx->pc = 0x303eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_303ef0:
    // 0x303ef0: 0xdfb00000
    ctx->pc = 0x303ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303ef4: 0x3e00008
    ctx->pc = 0x303EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303EF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x303EB0u: goto label_303eb0;
            case 0x303ECCu: goto label_303ecc;
            case 0x303EF0u: goto label_303ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x303EFCu;
}
