#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufStopDMA
// Address: 0x2df7d8 - 0x2df8d8
void viBufStopDMA_0x2df7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2df7d8u;

    // 0x2df7d8: 0x27bdffe0
    ctx->pc = 0x2df7d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df7dc: 0xffbf0010
    ctx->pc = 0x2df7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2df7e0: 0xffb00000
    ctx->pc = 0x2df7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2df7e4: 0x80802d
    ctx->pc = 0x2df7e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df7e8: 0xc0c0d88
    ctx->pc = 0x2DF7E8u;
    SET_GPR_U32(ctx, 31, 0x2DF7F0u);
    ctx->pc = 0x2DF7ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x303620u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x303620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF7F0u; }
    }
    if (ctx->pc != 0x2DF7F0u) { return; }
    ctx->pc = 0x2DF7F0u;
    // 0x2df7f0: 0xae000044
    ctx->pc = 0x2df7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2df7f4: 0xc0b7c80
    ctx->pc = 0x2DF7F4u;
    SET_GPR_U32(ctx, 31, 0x2DF7FCu);
    ctx->pc = 0x2DF7F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x2DF200u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x2df200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF7FCu; }
    }
    if (ctx->pc != 0x2DF7FCu) { return; }
    ctx->pc = 0x2DF7FCu;
    // 0x2df7fc: 0x3c021000
    ctx->pc = 0x2df7fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2df800: 0x3442b410
    ctx->pc = 0x2df800u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46096));
    // 0x2df804: 0x8c420000
    ctx->pc = 0x2df804u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2df808: 0xae02001c
    ctx->pc = 0x2df808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2df80c: 0x3c021000
    ctx->pc = 0x2df80cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2df810: 0x3442b430
    ctx->pc = 0x2df810u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46128));
    // 0x2df814: 0x8c420000
    ctx->pc = 0x2df814u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2df818: 0xae020020
    ctx->pc = 0x2df818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2df81c: 0x3c021000
    ctx->pc = 0x2df81cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2df820: 0x3442b420
    ctx->pc = 0x2df820u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46112));
    // 0x2df824: 0x8c420000
    ctx->pc = 0x2df824u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2df828: 0xae020024
    ctx->pc = 0x2df828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x2df82c: 0x3c021000
    ctx->pc = 0x2df82cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2df830: 0x3442b400
    ctx->pc = 0x2df830u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46080));
    // 0x2df834: 0x8c420000
    ctx->pc = 0x2df834u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2df838: 0xae020028
    ctx->pc = 0x2df838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x2df83c: 0x3c031000
    ctx->pc = 0x2df83cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2df840: 0x34632010
    ctx->pc = 0x2df840u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x2df844: 0x0
    ctx->pc = 0x2df844u;
    // NOP
label_2df848:
    // 0x2df848: 0x8c620000
    ctx->pc = 0x2df848u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2df84c: 0x304200f0
    ctx->pc = 0x2df84cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 240));
    // 0x2df850: 0x0
    ctx->pc = 0x2df850u;
    // NOP
    // 0x2df854: 0x0
    ctx->pc = 0x2df854u;
    // NOP
    // 0x2df858: 0x0
    ctx->pc = 0x2df858u;
    // NOP
    // 0x2df85c: 0x1440fffa
    ctx->pc = 0x2DF85Cu;
    {
        const bool branch_taken_0x2df85c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2df85c) {
            ctx->pc = 0x2DF848u;
            goto label_2df848;
        }
    }
    ctx->pc = 0x2DF864u;
    // 0x2df864: 0xc0b7c64
    ctx->pc = 0x2DF864u;
    SET_GPR_U32(ctx, 31, 0x2DF86Cu);
    ctx->pc = 0x2DF868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD3_CHCR_0x2df190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF86Cu; }
    }
    if (ctx->pc != 0x2DF86Cu) { return; }
    ctx->pc = 0x2DF86Cu;
    // 0x2df86c: 0x3c021000
    ctx->pc = 0x2df86cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2df870: 0x3442b010
    ctx->pc = 0x2df870u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45072));
    // 0x2df874: 0x8c420000
    ctx->pc = 0x2df874u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2df878: 0xae02002c
    ctx->pc = 0x2df878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2df87c: 0x3c021000
    ctx->pc = 0x2df87cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2df880: 0x3442b020
    ctx->pc = 0x2df880u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45088));
    // 0x2df884: 0x8c420000
    ctx->pc = 0x2df884u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2df888: 0xae020030
    ctx->pc = 0x2df888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2df88c: 0x3c021000
    ctx->pc = 0x2df88cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2df890: 0x3442b000
    ctx->pc = 0x2df890u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45056));
    // 0x2df894: 0x8c420000
    ctx->pc = 0x2df894u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2df898: 0xae020034
    ctx->pc = 0x2df898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x2df89c: 0x3c021000
    ctx->pc = 0x2df89cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2df8a0: 0x34422020
    ctx->pc = 0x2df8a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8224));
    // 0x2df8a4: 0x8c420000
    ctx->pc = 0x2df8a4u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2df8a8: 0xae020038
    ctx->pc = 0x2df8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2df8ac: 0x3c021000
    ctx->pc = 0x2df8acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2df8b0: 0x34422010
    ctx->pc = 0x2df8b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x2df8b4: 0x8c420000
    ctx->pc = 0x2df8b4u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2df8b8: 0xae02003c
    ctx->pc = 0x2df8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2df8bc: 0xc0c0d80
    ctx->pc = 0x2DF8BCu;
    SET_GPR_U32(ctx, 31, 0x2DF8C4u);
    ctx->pc = 0x2DF8C0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x303600u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x303600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF8C4u; }
    }
    if (ctx->pc != 0x2DF8C4u) { return; }
    ctx->pc = 0x2DF8C4u;
    // 0x2df8c4: 0x24020001
    ctx->pc = 0x2df8c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df8c8: 0xdfbf0010
    ctx->pc = 0x2df8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df8cc: 0xdfb00000
    ctx->pc = 0x2df8ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df8d0: 0x3e00008
    ctx->pc = 0x2DF8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF8D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DF848u: goto label_2df848;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DF8D8u;
}
