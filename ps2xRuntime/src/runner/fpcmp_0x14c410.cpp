#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: fpcmp
// Address: 0x14c410 - 0x14c45c
void fpcmp_0x14c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("fpcmp");


    ctx->pc = 0x14c410u;

    // 0x14c410: 0x27bdffb0
    ctx->pc = 0x14c410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14c414: 0xffb00030
    ctx->pc = 0x14c414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x14c418: 0x27a40020
    ctx->pc = 0x14c418u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x14c41c: 0xffbf0040
    ctx->pc = 0x14c41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14c420: 0x3a0282d
    ctx->pc = 0x14c420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c424: 0xe7ac0020
    ctx->pc = 0x14c424u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14c428: 0xc052f06
    ctx->pc = 0x14C428u;
    SET_GPR_U32(ctx, 31, 0x14C430u);
    ctx->pc = 0x14C42Cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x14BC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x14bc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C430u; }
        else if (ctx->pc != 0x14C430u) { ctx->pc = 0x14C430u; }
    }
    if (ctx->pc != 0x14C430u) { return; }
    ctx->pc = 0x14C430u;
    // 0x14c430: 0x27b00010
    ctx->pc = 0x14c430u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x14c434: 0x27a40024
    ctx->pc = 0x14c434u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 36));
    // 0x14c438: 0xc052f06
    ctx->pc = 0x14C438u;
    SET_GPR_U32(ctx, 31, 0x14C440u);
    ctx->pc = 0x14C43Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14BC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x14bc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C440u; }
        else if (ctx->pc != 0x14C440u) { ctx->pc = 0x14C440u; }
    }
    if (ctx->pc != 0x14C440u) { return; }
    ctx->pc = 0x14C440u;
    // 0x14c440: 0x200282d
    ctx->pc = 0x14c440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c444: 0xc0530be
    ctx->pc = 0x14C444u;
    SET_GPR_U32(ctx, 31, 0x14C44Cu);
    ctx->pc = 0x14C448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14C2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fpcmp_parts_f_0x14c2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C44Cu; }
        else if (ctx->pc != 0x14C44Cu) { ctx->pc = 0x14C44Cu; }
    }
    if (ctx->pc != 0x14C44Cu) { return; }
    ctx->pc = 0x14C44Cu;
    // 0x14c44c: 0xdfbf0040
    ctx->pc = 0x14c44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14c450: 0xdfb00030
    ctx->pc = 0x14c450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14c454: 0x3e00008
    ctx->pc = 0x14C454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C458u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14C45Cu;
}
