#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioVQueAdd4
// Address: 0x25c458 - 0x25c4ac
void AudioVQueAdd4_0x25c458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25c458u;

    // 0x25c458: 0x27bdfff0
    ctx->pc = 0x25c458u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25c45c: 0xffbf0000
    ctx->pc = 0x25c45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c460: 0x80182d
    ctx->pc = 0x25c460u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c464: 0xa0482d
    ctx->pc = 0x25c464u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c468: 0xc0502d
    ctx->pc = 0x25c468u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c46c: 0x3c020034
    ctx->pc = 0x25c46cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25c470: 0x8c42e8fc
    ctx->pc = 0x25c470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961404)));
    // 0x25c474: 0x28420003
    ctx->pc = 0x25c474u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x25c478: 0x14400004
    ctx->pc = 0x25C478u;
    {
        const bool branch_taken_0x25c478 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25C47Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25c478) {
            ctx->pc = 0x25C48Cu;
            goto label_25c48c;
        }
    }
    ctx->pc = 0x25C480u;
    // 0x25c480: 0x44800000
    ctx->pc = 0x25c480u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x25c484: 0x10000007
    ctx->pc = 0x25C484u;
    {
        const bool branch_taken_0x25c484 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C488u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x25c484) {
            ctx->pc = 0x25C4A4u;
            goto label_25c4a4;
        }
    }
    ctx->pc = 0x25C48Cu;
label_25c48c:
    // 0x25c48c: 0x24040001
    ctx->pc = 0x25c48cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c490: 0x60282d
    ctx->pc = 0x25c490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c494: 0x120302d
    ctx->pc = 0x25c494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c498: 0xc088bd2
    ctx->pc = 0x25C498u;
    SET_GPR_U32(ctx, 31, 0x25C4A0u);
    ctx->pc = 0x25C49Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x222F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAnyQueAdd4_0x222f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C4A0u; }
    }
    if (ctx->pc != 0x25C4A0u) { return; }
    ctx->pc = 0x25C4A0u;
    // 0x25c4a0: 0xdfbf0000
    ctx->pc = 0x25c4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25c4a4:
    // 0x25c4a4: 0x3e00008
    ctx->pc = 0x25C4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C4A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25C48Cu: goto label_25c48c;
            case 0x25C4A4u: goto label_25c4a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25C4ACu;
}
