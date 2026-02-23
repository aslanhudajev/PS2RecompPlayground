#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SyncDCache
// Address: 0x155130 - 0x1551ac
void SyncDCache_0x155130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SyncDCache");


    ctx->pc = 0x155130u;

    // 0x155130: 0x27bdffc0
    ctx->pc = 0x155130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x155134: 0xffb20020
    ctx->pc = 0x155134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x155138: 0xffb10010
    ctx->pc = 0x155138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x15513c: 0x80902d
    ctx->pc = 0x15513cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155140: 0xffbf0030
    ctx->pc = 0x155140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x155144: 0xa0882d
    ctx->pc = 0x155144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155148: 0xffb00000
    ctx->pc = 0x155148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15514c: 0x40106000
    ctx->pc = 0x15514cu;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x155150: 0x3c020001
    ctx->pc = 0x155150u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x155154: 0x2028024
    ctx->pc = 0x155154u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x155158: 0x12000003
    ctx->pc = 0x155158u;
    {
        const bool branch_taken_0x155158 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x155158) {
            ctx->pc = 0x155168u;
            goto label_155168;
        }
    }
    ctx->pc = 0x155160u;
    // 0x155160: 0xc05725c
    ctx->pc = 0x155160u;
    SET_GPR_U32(ctx, 31, 0x155168u);
    ctx->pc = 0x15C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x15c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155168u; }
        else if (ctx->pc != 0x155168u) { ctx->pc = 0x155168u; }
    }
    if (ctx->pc != 0x155168u) { return; }
    ctx->pc = 0x155168u;
label_155168:
    // 0x155168: 0x3c04ffff
    ctx->pc = 0x155168u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x15516c: 0x3484ffc0
    ctx->pc = 0x15516cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65472));
    // 0x155170: 0x2242824
    ctx->pc = 0x155170u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x155174: 0xc055422
    ctx->pc = 0x155174u;
    SET_GPR_U32(ctx, 31, 0x15517Cu);
    ctx->pc = 0x155178u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->pc = 0x155088u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceSDC_0x155088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15517Cu; }
        else if (ctx->pc != 0x15517Cu) { ctx->pc = 0x15517Cu; }
    }
    if (ctx->pc != 0x15517Cu) { return; }
    ctx->pc = 0x15517Cu;
    // 0x15517c: 0x12000006
    ctx->pc = 0x15517Cu;
    {
        const bool branch_taken_0x15517c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x155180u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x15517c) {
            ctx->pc = 0x155198u;
            goto label_155198;
        }
    }
    ctx->pc = 0x155184u;
    // 0x155184: 0xdfb20020
    ctx->pc = 0x155184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155188: 0xdfb10010
    ctx->pc = 0x155188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15518c: 0xdfb00000
    ctx->pc = 0x15518cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155190: 0x805726e
    ctx->pc = 0x155190u;
    ctx->pc = 0x155194u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x15C9B8u;
    EIntr_0x15c9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x155198u;
label_155198:
    // 0x155198: 0xdfb20020
    ctx->pc = 0x155198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15519c: 0xdfb10010
    ctx->pc = 0x15519cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1551a0: 0xdfb00000
    ctx->pc = 0x1551a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1551a4: 0x3e00008
    ctx->pc = 0x1551A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1551A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155168u: goto label_155168;
            case 0x155198u: goto label_155198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1551ACu;
}
