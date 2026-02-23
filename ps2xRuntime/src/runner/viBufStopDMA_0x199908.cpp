#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: viBufStopDMA
// Address: 0x199908 - 0x199a08
void viBufStopDMA_0x199908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("viBufStopDMA");


    ctx->pc = 0x199908u;

    // 0x199908: 0x27bdffe0
    ctx->pc = 0x199908u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19990c: 0xffb00000
    ctx->pc = 0x19990cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199910: 0xffbf0010
    ctx->pc = 0x199910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x199914: 0x80802d
    ctx->pc = 0x199914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199918: 0xc055248
    ctx->pc = 0x199918u;
    SET_GPR_U32(ctx, 31, 0x199920u);
    ctx->pc = 0x19991Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x154920u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x154920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199920u; }
        else if (ctx->pc != 0x199920u) { ctx->pc = 0x199920u; }
    }
    if (ctx->pc != 0x199920u) { return; }
    ctx->pc = 0x199920u;
    // 0x199920: 0xae000044
    ctx->pc = 0x199920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x199924: 0xc0664c4
    ctx->pc = 0x199924u;
    SET_GPR_U32(ctx, 31, 0x19992Cu);
    ctx->pc = 0x199928u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x199310u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x199310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19992Cu; }
        else if (ctx->pc != 0x19992Cu) { ctx->pc = 0x19992Cu; }
    }
    if (ctx->pc != 0x19992Cu) { return; }
    ctx->pc = 0x19992Cu;
    // 0x19992c: 0x3c021000
    ctx->pc = 0x19992cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x199930: 0x3c061000
    ctx->pc = 0x199930u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x199934: 0x3442b410
    ctx->pc = 0x199934u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46096));
    // 0x199938: 0x34c6b430
    ctx->pc = 0x199938u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 46128));
    // 0x19993c: 0x8c430000
    ctx->pc = 0x19993cu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x199940: 0x3c041000
    ctx->pc = 0x199940u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x199944: 0x3484b420
    ctx->pc = 0x199944u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46112));
    // 0x199948: 0x3c051000
    ctx->pc = 0x199948u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x19994c: 0xae03001c
    ctx->pc = 0x19994cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x199950: 0x34a5b400
    ctx->pc = 0x199950u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 46080));
    // 0x199954: 0x3c071000
    ctx->pc = 0x199954u;
    SET_GPR_U32(ctx, 7, ((uint32_t)4096 << 16));
    // 0x199958: 0x8cc30000
    ctx->pc = 0x199958u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19995c: 0x34e72010
    ctx->pc = 0x19995cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 8208));
    // 0x199960: 0xae030020
    ctx->pc = 0x199960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x199964: 0x8c820000
    ctx->pc = 0x199964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199968: 0xae020024
    ctx->pc = 0x199968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x19996c: 0x8ca30000
    ctx->pc = 0x19996cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x199970: 0xae030028
    ctx->pc = 0x199970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x199974: 0x0
    ctx->pc = 0x199974u;
    // NOP
label_199978:
    // 0x199978: 0x8ce20000
    ctx->pc = 0x199978u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19997c: 0x304200f0
    ctx->pc = 0x19997cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 240));
    // 0x199980: 0x0
    ctx->pc = 0x199980u;
    // NOP
    // 0x199984: 0x0
    ctx->pc = 0x199984u;
    // NOP
    // 0x199988: 0x0
    ctx->pc = 0x199988u;
    // NOP
    // 0x19998c: 0x1440fffa
    ctx->pc = 0x19998Cu;
    {
        const bool branch_taken_0x19998c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19998c) {
            ctx->pc = 0x199978u;
            goto label_199978;
        }
    }
    ctx->pc = 0x199994u;
    // 0x199994: 0xc0664aa
    ctx->pc = 0x199994u;
    SET_GPR_U32(ctx, 31, 0x19999Cu);
    ctx->pc = 0x199998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1992A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD3_CHCR_0x1992a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19999Cu; }
        else if (ctx->pc != 0x19999Cu) { ctx->pc = 0x19999Cu; }
    }
    if (ctx->pc != 0x19999Cu) { return; }
    ctx->pc = 0x19999Cu;
    // 0x19999c: 0x3c021000
    ctx->pc = 0x19999cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1999a0: 0x3c081000
    ctx->pc = 0x1999a0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)4096 << 16));
    // 0x1999a4: 0x3442b010
    ctx->pc = 0x1999a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45072));
    // 0x1999a8: 0x3508b020
    ctx->pc = 0x1999a8u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 45088));
    // 0x1999ac: 0x8c430000
    ctx->pc = 0x1999acu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1999b0: 0x3c061000
    ctx->pc = 0x1999b0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x1999b4: 0x34c6b000
    ctx->pc = 0x1999b4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 45056));
    // 0x1999b8: 0x3c071000
    ctx->pc = 0x1999b8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)4096 << 16));
    // 0x1999bc: 0xae03002c
    ctx->pc = 0x1999bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1999c0: 0x34e72020
    ctx->pc = 0x1999c0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 8224));
    // 0x1999c4: 0x3c051000
    ctx->pc = 0x1999c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x1999c8: 0x8e040040
    ctx->pc = 0x1999c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1999cc: 0x8d030000
    ctx->pc = 0x1999ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1999d0: 0x34a52010
    ctx->pc = 0x1999d0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 8208));
    // 0x1999d4: 0xae030030
    ctx->pc = 0x1999d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x1999d8: 0x8cc20000
    ctx->pc = 0x1999d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1999dc: 0xae020034
    ctx->pc = 0x1999dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1999e0: 0x8ce30000
    ctx->pc = 0x1999e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1999e4: 0xae030038
    ctx->pc = 0x1999e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1999e8: 0x8ca20000
    ctx->pc = 0x1999e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1999ec: 0xc055240
    ctx->pc = 0x1999ECu;
    SET_GPR_U32(ctx, 31, 0x1999F4u);
    ctx->pc = 0x1999F0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->pc = 0x154900u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x154900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999F4u; }
        else if (ctx->pc != 0x1999F4u) { ctx->pc = 0x1999F4u; }
    }
    if (ctx->pc != 0x1999F4u) { return; }
    ctx->pc = 0x1999F4u;
    // 0x1999f4: 0xdfbf0010
    ctx->pc = 0x1999f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1999f8: 0x24020001
    ctx->pc = 0x1999f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1999fc: 0xdfb00000
    ctx->pc = 0x1999fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199a00: 0x3e00008
    ctx->pc = 0x199A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199A04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199978u: goto label_199978;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199A08u;
}
