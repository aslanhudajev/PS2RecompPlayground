#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SelectLoadDone
// Address: 0x285e78 - 0x285ec4
void SelectLoadDone_0x285e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x285e78u;

    // 0x285e78: 0x27bdffe0
    ctx->pc = 0x285e78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x285e7c: 0xffbf0010
    ctx->pc = 0x285e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x285e80: 0xffb00000
    ctx->pc = 0x285e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x285e84: 0x3c100035
    ctx->pc = 0x285e84u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x285e88: 0x8e02a434
    ctx->pc = 0x285e88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294943796)));
    // 0x285e8c: 0x14400009
    ctx->pc = 0x285E8Cu;
    {
        const bool branch_taken_0x285e8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x285E90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x285e8c) {
            ctx->pc = 0x285EB4u;
            goto label_285eb4;
        }
    }
    ctx->pc = 0x285E94u;
    // 0x285e94: 0xc0b1e3e
    ctx->pc = 0x285E94u;
    SET_GPR_U32(ctx, 31, 0x285E9Cu);
    ctx->pc = 0x2C78F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_BGLoadModelDone_0x2c78f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285E9Cu; }
    }
    if (ctx->pc != 0x285E9Cu) { return; }
    ctx->pc = 0x285E9Cu;
    // 0x285e9c: 0x10400005
    ctx->pc = 0x285E9Cu;
    {
        const bool branch_taken_0x285e9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x285EA0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x285e9c) {
            ctx->pc = 0x285EB4u;
            goto label_285eb4;
        }
    }
    ctx->pc = 0x285EA4u;
    // 0x285ea4: 0xc0898b8
    ctx->pc = 0x285EA4u;
    SET_GPR_U32(ctx, 31, 0x285EACu);
    ctx->pc = 0x285EA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2262E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LockModels_0x2262e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285EACu; }
    }
    if (ctx->pc != 0x285EACu) { return; }
    ctx->pc = 0x285EACu;
    // 0x285eac: 0x24020001
    ctx->pc = 0x285eacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x285eb0: 0xae02a434
    ctx->pc = 0x285eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943796), GPR_U32(ctx, 2));
label_285eb4:
    // 0x285eb4: 0xdfbf0010
    ctx->pc = 0x285eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285eb8: 0xdfb00000
    ctx->pc = 0x285eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285ebc: 0x3e00008
    ctx->pc = 0x285EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285EC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285EB4u: goto label_285eb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285EC4u;
}
