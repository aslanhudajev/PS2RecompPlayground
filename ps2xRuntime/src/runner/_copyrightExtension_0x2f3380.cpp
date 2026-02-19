#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _copyrightExtension
// Address: 0x2f3380 - 0x2f342c
void _copyrightExtension_0x2f3380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f3380u;

    // 0x2f3380: 0x27bdffc0
    ctx->pc = 0x2f3380u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f3384: 0x24040001
    ctx->pc = 0x2f3384u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3388: 0xffb20020
    ctx->pc = 0x2f3388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f338c: 0xffb10010
    ctx->pc = 0x2f338cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f3390: 0x3c12003a
    ctx->pc = 0x2f3390u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2f3394: 0xffb00000
    ctx->pc = 0x2f3394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f3398: 0x3c11003a
    ctx->pc = 0x2f3398u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f339c: 0xffbf0030
    ctx->pc = 0x2f339cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f33a0: 0xc0bca32
    ctx->pc = 0x2F33A0u;
    SET_GPR_U32(ctx, 31, 0x2F33A8u);
    ctx->pc = 0x2F33A4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F33A8u; }
    }
    if (ctx->pc != 0x2F33A8u) { return; }
    ctx->pc = 0x2F33A8u;
    // 0x2f33a8: 0xae023244
    ctx->pc = 0x2f33a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12868), GPR_U32(ctx, 2));
    // 0x2f33ac: 0xc0bca32
    ctx->pc = 0x2F33ACu;
    SET_GPR_U32(ctx, 31, 0x2F33B4u);
    ctx->pc = 0x2F33B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F33B4u; }
    }
    if (ctx->pc != 0x2F33B4u) { return; }
    ctx->pc = 0x2F33B4u;
    // 0x2f33b4: 0x3c10003a
    ctx->pc = 0x2f33b4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f33b8: 0xae223248
    ctx->pc = 0x2f33b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12872), GPR_U32(ctx, 2));
    // 0x2f33bc: 0xc0bca32
    ctx->pc = 0x2F33BCu;
    SET_GPR_U32(ctx, 31, 0x2F33C4u);
    ctx->pc = 0x2F33C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F33C4u; }
    }
    if (ctx->pc != 0x2F33C4u) { return; }
    ctx->pc = 0x2F33C4u;
    // 0x2f33c4: 0x3c11003a
    ctx->pc = 0x2f33c4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f33c8: 0xae02324c
    ctx->pc = 0x2f33c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12876), GPR_U32(ctx, 2));
    // 0x2f33cc: 0xc0bca32
    ctx->pc = 0x2F33CCu;
    SET_GPR_U32(ctx, 31, 0x2F33D4u);
    ctx->pc = 0x2F33D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F33D4u; }
    }
    if (ctx->pc != 0x2F33D4u) { return; }
    ctx->pc = 0x2F33D4u;
    // 0x2f33d4: 0x3c10003a
    ctx->pc = 0x2f33d4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f33d8: 0xc0bca32
    ctx->pc = 0x2F33D8u;
    SET_GPR_U32(ctx, 31, 0x2F33E0u);
    ctx->pc = 0x2F33DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F33E0u; }
    }
    if (ctx->pc != 0x2F33E0u) { return; }
    ctx->pc = 0x2F33E0u;
    // 0x2f33e0: 0xc0bca32
    ctx->pc = 0x2F33E0u;
    SET_GPR_U32(ctx, 31, 0x2F33E8u);
    ctx->pc = 0x2F33E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F33E8u; }
    }
    if (ctx->pc != 0x2F33E8u) { return; }
    ctx->pc = 0x2F33E8u;
    // 0x2f33e8: 0xae223250
    ctx->pc = 0x2f33e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12880), GPR_U32(ctx, 2));
    // 0x2f33ec: 0xc0bca32
    ctx->pc = 0x2F33ECu;
    SET_GPR_U32(ctx, 31, 0x2F33F4u);
    ctx->pc = 0x2F33F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F33F4u; }
    }
    if (ctx->pc != 0x2F33F4u) { return; }
    ctx->pc = 0x2F33F4u;
    // 0x2f33f4: 0xc0bca32
    ctx->pc = 0x2F33F4u;
    SET_GPR_U32(ctx, 31, 0x2F33FCu);
    ctx->pc = 0x2F33F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F33FCu; }
    }
    if (ctx->pc != 0x2F33FCu) { return; }
    ctx->pc = 0x2F33FCu;
    // 0x2f33fc: 0xae023254
    ctx->pc = 0x2f33fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12884), GPR_U32(ctx, 2));
    // 0x2f3400: 0xc0bca32
    ctx->pc = 0x2F3400u;
    SET_GPR_U32(ctx, 31, 0x2F3408u);
    ctx->pc = 0x2F3404u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3408u; }
    }
    if (ctx->pc != 0x2F3408u) { return; }
    ctx->pc = 0x2F3408u;
    // 0x2f3408: 0xc0bca32
    ctx->pc = 0x2F3408u;
    SET_GPR_U32(ctx, 31, 0x2F3410u);
    ctx->pc = 0x2F340Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3410u; }
    }
    if (ctx->pc != 0x2F3410u) { return; }
    ctx->pc = 0x2F3410u;
    // 0x2f3410: 0xae423258
    ctx->pc = 0x2f3410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12888), GPR_U32(ctx, 2));
    // 0x2f3414: 0xdfbf0030
    ctx->pc = 0x2f3414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f3418: 0xdfb20020
    ctx->pc = 0x2f3418u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f341c: 0xdfb10010
    ctx->pc = 0x2f341cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3420: 0xdfb00000
    ctx->pc = 0x2f3420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3424: 0x3e00008
    ctx->pc = 0x2F3424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3428u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F342Cu;
}
