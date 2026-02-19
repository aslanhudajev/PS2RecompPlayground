#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSFX2
// Address: 0x222928 - 0x222984
void AudioSFX2_0x222928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x222928u;

    // 0x222928: 0x27bdfff0
    ctx->pc = 0x222928u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22292c: 0xffbf0000
    ctx->pc = 0x22292cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222930: 0x80182d
    ctx->pc = 0x222930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222934: 0xa0402d
    ctx->pc = 0x222934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222938: 0x3c020031
    ctx->pc = 0x222938u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22293c: 0x8c420018
    ctx->pc = 0x22293cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x222940: 0x30428000
    ctx->pc = 0x222940u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x222944: 0x10400005
    ctx->pc = 0x222944u;
    {
        const bool branch_taken_0x222944 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x222948u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x222944) {
            ctx->pc = 0x22295Cu;
            goto label_22295c;
        }
    }
    ctx->pc = 0x22294Cu;
    // 0x22294c: 0x3c020032
    ctx->pc = 0x22294cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222950: 0x8c42fd60
    ctx->pc = 0x222950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966624)));
    // 0x222954: 0x10400008
    ctx->pc = 0x222954u;
    {
        const bool branch_taken_0x222954 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x222958u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x222954) {
            ctx->pc = 0x222978u;
            goto label_222978;
        }
    }
    ctx->pc = 0x22295Cu;
label_22295c:
    // 0x22295c: 0x4610003
    ctx->pc = 0x22295Cu;
    {
        const bool branch_taken_0x22295c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x222960u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x22295c) {
            ctx->pc = 0x22296Cu;
            goto label_22296c;
        }
    }
    ctx->pc = 0x222964u;
    // 0x222964: 0x10000004
    ctx->pc = 0x222964u;
    {
        const bool branch_taken_0x222964 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222968u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x222964) {
            ctx->pc = 0x222978u;
            goto label_222978;
        }
    }
    ctx->pc = 0x22296Cu;
label_22296c:
    // 0x22296c: 0x60282d
    ctx->pc = 0x22296cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222970: 0xc088958
    ctx->pc = 0x222970u;
    SET_GPR_U32(ctx, 31, 0x222978u);
    ctx->pc = 0x222974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x222560u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrack4_0x222560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222978u; }
    }
    if (ctx->pc != 0x222978u) { return; }
    ctx->pc = 0x222978u;
label_222978:
    // 0x222978: 0xdfbf0000
    ctx->pc = 0x222978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22297c: 0x3e00008
    ctx->pc = 0x22297Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222980u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22295Cu: goto label_22295c;
            case 0x22296Cu: goto label_22296c;
            case 0x222978u: goto label_222978;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222984u;
}
