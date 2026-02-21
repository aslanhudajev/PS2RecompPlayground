#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: anybody_playing
// Address: 0x232948 - 0x2329a0
void anybody_playing_0x232948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x232948u;

    // 0x232948: 0x3c020032
    ctx->pc = 0x232948u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23294c: 0x8c420810
    ctx->pc = 0x23294cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
    // 0x232950: 0x10400003
    ctx->pc = 0x232950u;
    {
        const bool branch_taken_0x232950 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x232954u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x232950) {
            ctx->pc = 0x232960u;
            goto label_232960;
        }
    }
    ctx->pc = 0x232958u;
    // 0x232958: 0x3e00008
    ctx->pc = 0x232958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23295Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232960u: goto label_232960;
            case 0x232970u: goto label_232970;
            case 0x232984u: goto label_232984;
            case 0x23298Cu: goto label_23298c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232960u;
label_232960:
    // 0x232960: 0x3c020032
    ctx->pc = 0x232960u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x232964: 0x24431bc0
    ctx->pc = 0x232964u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x232968: 0x24060001
    ctx->pc = 0x232968u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23296c: 0x24050008
    ctx->pc = 0x23296cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
label_232970:
    // 0x232970: 0x8c6200fc
    ctx->pc = 0x232970u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x232974: 0x10460003
    ctx->pc = 0x232974u;
    {
        const bool branch_taken_0x232974 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        if (branch_taken_0x232974) {
            ctx->pc = 0x232984u;
            goto label_232984;
        }
    }
    ctx->pc = 0x23297Cu;
    // 0x23297c: 0x14450003
    ctx->pc = 0x23297Cu;
    {
        const bool branch_taken_0x23297c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x232980u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x23297c) {
            ctx->pc = 0x23298Cu;
            goto label_23298c;
        }
    }
    ctx->pc = 0x232984u;
label_232984:
    // 0x232984: 0x3e00008
    ctx->pc = 0x232984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232988u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232960u: goto label_232960;
            case 0x232970u: goto label_232970;
            case 0x232984u: goto label_232984;
            case 0x23298Cu: goto label_23298c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23298Cu;
label_23298c:
    // 0x23298c: 0x28820004
    ctx->pc = 0x23298cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x232990: 0x1440fff7
    ctx->pc = 0x232990u;
    {
        const bool branch_taken_0x232990 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x232994u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11008));
        if (branch_taken_0x232990) {
            ctx->pc = 0x232970u;
            goto label_232970;
        }
    }
    ctx->pc = 0x232998u;
    // 0x232998: 0x3e00008
    ctx->pc = 0x232998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23299Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232960u: goto label_232960;
            case 0x232970u: goto label_232970;
            case 0x232984u: goto label_232984;
            case 0x23298Cu: goto label_23298c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2329A0u;
}
