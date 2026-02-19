#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetDma
// Address: 0x2a5be0 - 0x2a5c4c
void pbResetDma_0x2a5be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5be0u;

    // 0x2a5be0: 0x27bdffd0
    ctx->pc = 0x2a5be0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5be4: 0xffbf0020
    ctx->pc = 0x2a5be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a5be8: 0xffbe0010
    ctx->pc = 0x2a5be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2a5bec: 0xffb00000
    ctx->pc = 0x2a5becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a5bf0: 0x3a0f02d
    ctx->pc = 0x2a5bf0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5bf4: 0x3c100036
    ctx->pc = 0x2a5bf4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a5bf8: 0x8e10dee0
    ctx->pc = 0x2a5bf8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294958816)));
    // 0x2a5bfc: 0x8e020020
    ctx->pc = 0x2a5bfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5c00: 0x10400003
    ctx->pc = 0x2A5C00u;
    {
        const bool branch_taken_0x2a5c00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a5c00) {
            ctx->pc = 0x2A5C10u;
            goto label_2a5c10;
        }
    }
    ctx->pc = 0x2A5C08u;
    // 0x2a5c08: 0xc0a9714
    ctx->pc = 0x2A5C08u;
    SET_GPR_U32(ctx, 31, 0x2A5C10u);
    ctx->pc = 0x2A5C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseDma_0x2a5c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C10u; }
    }
    if (ctx->pc != 0x2A5C10u) { return; }
    ctx->pc = 0x2A5C10u;
label_2a5c10:
    // 0x2a5c10: 0x8e020020
    ctx->pc = 0x2a5c10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5c14: 0x14400004
    ctx->pc = 0x2A5C14u;
    {
        const bool branch_taken_0x2a5c14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a5c14) {
            ctx->pc = 0x2A5C28u;
            goto label_2a5c28;
        }
    }
    ctx->pc = 0x2A5C1Cu;
    // 0x2a5c1c: 0x3c020037
    ctx->pc = 0x2a5c1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a5c20: 0x244280e0
    ctx->pc = 0x2a5c20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934752));
    // 0x2a5c24: 0xae020020
    ctx->pc = 0x2a5c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_2a5c28:
    // 0x2a5c28: 0xc0a979a
    ctx->pc = 0x2A5C28u;
    SET_GPR_U32(ctx, 31, 0x2A5C30u);
    ctx->pc = 0x2A5E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitDmaManager_0x2a5e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C30u; }
    }
    if (ctx->pc != 0x2A5C30u) { return; }
    ctx->pc = 0x2A5C30u;
    // 0x2a5c30: 0x3c0e82d
    ctx->pc = 0x2a5c30u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c34: 0xdfbf0020
    ctx->pc = 0x2a5c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5c38: 0xdfbe0010
    ctx->pc = 0x2a5c38u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5c3c: 0xdfb00000
    ctx->pc = 0x2a5c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5c40: 0x27bd0030
    ctx->pc = 0x2a5c40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a5c44: 0x3e00008
    ctx->pc = 0x2A5C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A5C10u: goto label_2a5c10;
            case 0x2A5C28u: goto label_2a5c28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A5C4Cu;
}
