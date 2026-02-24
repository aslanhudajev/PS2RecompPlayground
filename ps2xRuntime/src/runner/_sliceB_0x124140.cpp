#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sliceB
// Address: 0x124140 - 0x1241ac
void _sliceB_0x124140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124140u;

    // 0x124140: 0x27bdffe0
    ctx->pc = 0x124140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124144: 0x24040005
    ctx->pc = 0x124144u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x124148: 0xffb00000
    ctx->pc = 0x124148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12414c: 0xffbf0010
    ctx->pc = 0x12414cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x124150: 0xc048fdc
    ctx->pc = 0x124150u;
    SET_GPR_U32(ctx, 31, 0x124158u);
    ctx->pc = 0x124154u;
    SET_GPR_S32(ctx, 16, ((uint32_t)23 << 16));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124158u; }
    }
    if (ctx->pc != 0x124158u) { return; }
    ctx->pc = 0x124158u;
    // 0x124158: 0xae021a40
    ctx->pc = 0x124158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6720), GPR_U32(ctx, 2));
    // 0x12415c: 0xc048fdc
    ctx->pc = 0x12415Cu;
    SET_GPR_U32(ctx, 31, 0x124164u);
    ctx->pc = 0x124160u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124164u; }
    }
    if (ctx->pc != 0x124164u) { return; }
    ctx->pc = 0x124164u;
    // 0x124164: 0x1040000a
    ctx->pc = 0x124164u;
    {
        const bool branch_taken_0x124164 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x124168u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x124164) {
            ctx->pc = 0x124190u;
            goto label_124190;
        }
    }
    ctx->pc = 0x12416Cu;
    // 0x12416c: 0xc048fdc
    ctx->pc = 0x12416Cu;
    SET_GPR_U32(ctx, 31, 0x124174u);
    ctx->pc = 0x124170u;
    SET_GPR_S32(ctx, 16, ((uint32_t)23 << 16));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124174u; }
    }
    if (ctx->pc != 0x124174u) { return; }
    ctx->pc = 0x124174u;
    // 0x124174: 0xae0220c0
    ctx->pc = 0x124174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8384), GPR_U32(ctx, 2));
    // 0x124178: 0xc048f96
    ctx->pc = 0x124178u;
    SET_GPR_U32(ctx, 31, 0x124180u);
    ctx->pc = 0x12417Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x123E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x123e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124180u; }
    }
    if (ctx->pc != 0x124180u) { return; }
    ctx->pc = 0x124180u;
    // 0x124180: 0xc0491a2
    ctx->pc = 0x124180u;
    SET_GPR_U32(ctx, 31, 0x124188u);
    ctx->pc = 0x124688u;
    {
        const uint32_t __entryPc = ctx->pc;
        _extrainfo_0x124688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124188u; }
    }
    if (ctx->pc != 0x124188u) { return; }
    ctx->pc = 0x124188u;
    // 0x124188: 0x10000004
    ctx->pc = 0x124188u;
    {
        const bool branch_taken_0x124188 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12418Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x124188) {
            ctx->pc = 0x12419Cu;
            goto label_12419c;
        }
    }
    ctx->pc = 0x124190u;
label_124190:
    // 0x124190: 0x3c020017
    ctx->pc = 0x124190u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x124194: 0xac4020c0
    ctx->pc = 0x124194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8384), GPR_U32(ctx, 0));
    // 0x124198: 0xdfbf0010
    ctx->pc = 0x124198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12419c:
    // 0x12419c: 0x102d
    ctx->pc = 0x12419cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1241a0: 0xdfb00000
    ctx->pc = 0x1241a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1241a4: 0x3e00008
    ctx->pc = 0x1241A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1241A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124190u: goto label_124190;
            case 0x12419Cu: goto label_12419c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1241ACu;
}
