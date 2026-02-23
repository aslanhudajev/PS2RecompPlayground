#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyHdrToolVer
// Address: 0x1a0080 - 0x1a00d4
void SFH_AnlyHdrToolVer_0x1a0080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyHdrToolVer");


    ctx->pc = 0x1a0080u;

    // 0x1a0080: 0x27bdffa0
    ctx->pc = 0x1a0080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a0084: 0xffb00030
    ctx->pc = 0x1a0084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1a0088: 0xffb10040
    ctx->pc = 0x1a0088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x1a008c: 0xa0802d
    ctx->pc = 0x1a008cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0090: 0xffbf0050
    ctx->pc = 0x1a0090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a0094: 0xc0882d
    ctx->pc = 0x1a0094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0098: 0xc067ffc
    ctx->pc = 0x1A0098u;
    SET_GPR_U32(ctx, 31, 0x1A00A0u);
    ctx->pc = 0x1A009Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19FFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFH_AnlyHdrToolInf_0x19fff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A00A0u; }
        else if (ctx->pc != 0x1A00A0u) { ctx->pc = 0x1A00A0u; }
    }
    if (ctx->pc != 0x1A00A0u) { return; }
    ctx->pc = 0x1A00A0u;
    // 0x1a00a0: 0x14400003
    ctx->pc = 0x1A00A0u;
    {
        const bool branch_taken_0x1a00a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A00A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a00a0) {
            ctx->pc = 0x1A00B0u;
            goto label_1a00b0;
        }
    }
    ctx->pc = 0x1A00A8u;
    // 0x1a00a8: 0x10000005
    ctx->pc = 0x1A00A8u;
    {
        const bool branch_taken_0x1a00a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A00ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a00a8) {
            ctx->pc = 0x1A00C0u;
            goto label_1a00c0;
        }
    }
    ctx->pc = 0x1A00B0u;
label_1a00b0:
    // 0x1a00b0: 0x220302d
    ctx->pc = 0x1a00b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a00b4: 0xc0680b8
    ctx->pc = 0x1A00B4u;
    SET_GPR_U32(ctx, 31, 0x1A00BCu);
    ctx->pc = 0x1A00B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A02E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getToolVer_0x1a02e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A00BCu; }
        else if (ctx->pc != 0x1A00BCu) { ctx->pc = 0x1A00BCu; }
    }
    if (ctx->pc != 0x1A00BCu) { return; }
    ctx->pc = 0x1A00BCu;
    // 0x1a00bc: 0x2102b
    ctx->pc = 0x1a00bcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1a00c0:
    // 0x1a00c0: 0xdfbf0050
    ctx->pc = 0x1a00c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a00c4: 0xdfb10040
    ctx->pc = 0x1a00c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a00c8: 0xdfb00030
    ctx->pc = 0x1a00c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a00cc: 0x3e00008
    ctx->pc = 0x1A00CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A00D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A00B0u: goto label_1a00b0;
            case 0x1A00C0u: goto label_1a00c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A00D4u;
}
