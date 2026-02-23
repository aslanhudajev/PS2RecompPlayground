#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFHDS_ReprocessHdr
// Address: 0x193138 - 0x193184
void SFHDS_ReprocessHdr_0x193138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFHDS_ReprocessHdr");


    ctx->pc = 0x193138u;

    // 0x193138: 0x27bdffe0
    ctx->pc = 0x193138u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19313c: 0xffb00000
    ctx->pc = 0x19313cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193140: 0xffbf0010
    ctx->pc = 0x193140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193144: 0xc064c62
    ctx->pc = 0x193144u;
    SET_GPR_U32(ctx, 31, 0x19314Cu);
    ctx->pc = 0x193148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193188u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_GetHd_0x193188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19314Cu; }
        else if (ctx->pc != 0x19314Cu) { ctx->pc = 0x19314Cu; }
    }
    if (ctx->pc != 0x19314Cu) { return; }
    ctx->pc = 0x19314Cu;
    // 0x19314c: 0x1040000a
    ctx->pc = 0x19314Cu;
    {
        const bool branch_taken_0x19314c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x193150u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19314c) {
            ctx->pc = 0x193178u;
            goto label_193178;
        }
    }
    ctx->pc = 0x193154u;
    // 0x193154: 0x2610006c
    ctx->pc = 0x193154u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 108));
    // 0x193158: 0x40282d
    ctx->pc = 0x193158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19315c: 0xc064c1a
    ctx->pc = 0x19315Cu;
    SET_GPR_U32(ctx, 31, 0x193164u);
    ctx->pc = 0x193160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193068u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CopyFhd_0x193068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193164u; }
        else if (ctx->pc != 0x193164u) { ctx->pc = 0x193164u; }
    }
    if (ctx->pc != 0x193164u) { return; }
    ctx->pc = 0x193164u;
    // 0x193164: 0x200202d
    ctx->pc = 0x193164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193168: 0xdfbf0010
    ctx->pc = 0x193168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19316c: 0xdfb00000
    ctx->pc = 0x19316cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193170: 0x8064c74
    ctx->pc = 0x193170u;
    ctx->pc = 0x193174u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1931D0u;
    SFHDS_ProcessHdr_0x1931d0(rdram, ctx, runtime); return;
    ctx->pc = 0x193178u;
label_193178:
    // 0x193178: 0xdfb00000
    ctx->pc = 0x193178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19317c: 0x3e00008
    ctx->pc = 0x19317Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193180u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193178u: goto label_193178;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193184u;
}
