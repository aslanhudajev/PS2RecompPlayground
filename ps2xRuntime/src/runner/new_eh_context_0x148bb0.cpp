#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_eh_context
// Address: 0x148bb0 - 0x148c04
void new_eh_context_0x148bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_eh_context");


    ctx->pc = 0x148bb0u;

    // 0x148bb0: 0x27bdffe0
    ctx->pc = 0x148bb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148bb4: 0xffb00000
    ctx->pc = 0x148bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x148bb8: 0xffbf0010
    ctx->pc = 0x148bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148bbc: 0xc0509a0
    ctx->pc = 0x148BBCu;
    SET_GPR_U32(ctx, 31, 0x148BC4u);
    ctx->pc = 0x148BC0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x142680u;
    {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x142680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148BC4u; }
        else if (ctx->pc != 0x148BC4u) { ctx->pc = 0x148BC4u; }
    }
    if (ctx->pc != 0x148BC4u) { return; }
    ctx->pc = 0x148BC4u;
    // 0x148bc4: 0x40802d
    ctx->pc = 0x148bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148bc8: 0x16000004
    ctx->pc = 0x148BC8u;
    {
        const bool branch_taken_0x148bc8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x148BCCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x148bc8) {
            ctx->pc = 0x148BDCu;
            goto label_148bdc;
        }
    }
    ctx->pc = 0x148BD0u;
    // 0x148bd0: 0xc0522d4
    ctx->pc = 0x148BD0u;
    SET_GPR_U32(ctx, 31, 0x148BD8u);
    ctx->pc = 0x148B50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___terminate_0x148b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148BD8u; }
        else if (ctx->pc != 0x148BD8u) { ctx->pc = 0x148BD8u; }
    }
    if (ctx->pc != 0x148BD8u) { return; }
    ctx->pc = 0x148BD8u;
    // 0x148bd8: 0x200202d
    ctx->pc = 0x148bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_148bdc:
    // 0x148bdc: 0x282d
    ctx->pc = 0x148bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148be0: 0xc050cfe
    ctx->pc = 0x148BE0u;
    SET_GPR_U32(ctx, 31, 0x148BE8u);
    ctx->pc = 0x148BE4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148BE8u; }
        else if (ctx->pc != 0x148BE8u) { ctx->pc = 0x148BE8u; }
    }
    if (ctx->pc != 0x148BE8u) { return; }
    ctx->pc = 0x148BE8u;
    // 0x148be8: 0x26030010
    ctx->pc = 0x148be8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 16));
    // 0x148bec: 0x200102d
    ctx->pc = 0x148becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148bf0: 0xae030004
    ctx->pc = 0x148bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x148bf4: 0xdfbf0010
    ctx->pc = 0x148bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148bf8: 0xdfb00000
    ctx->pc = 0x148bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148bfc: 0x3e00008
    ctx->pc = 0x148BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148C00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148BDCu: goto label_148bdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x148C04u;
}
