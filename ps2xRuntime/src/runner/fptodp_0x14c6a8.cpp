#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: fptodp
// Address: 0x14c6a8 - 0x14c6e8
void fptodp_0x14c6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("fptodp");


    ctx->pc = 0x14c6a8u;

    // 0x14c6a8: 0x27bdffd0
    ctx->pc = 0x14c6a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14c6ac: 0xffbf0020
    ctx->pc = 0x14c6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14c6b0: 0x27a40010
    ctx->pc = 0x14c6b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x14c6b4: 0xe7ac0010
    ctx->pc = 0x14c6b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x14c6b8: 0xc052f06
    ctx->pc = 0x14C6B8u;
    SET_GPR_U32(ctx, 31, 0x14C6C0u);
    ctx->pc = 0x14C6BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14BC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x14bc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6C0u; }
        else if (ctx->pc != 0x14C6C0u) { ctx->pc = 0x14C6C0u; }
    }
    if (ctx->pc != 0x14C6C0u) { return; }
    ctx->pc = 0x14C6C0u;
    // 0x14c6c0: 0x8fa7000c
    ctx->pc = 0x14c6c0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x14c6c4: 0x8fa40000
    ctx->pc = 0x14c6c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c6c8: 0x7383c
    ctx->pc = 0x14c6c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x14c6cc: 0x8fa50004
    ctx->pc = 0x14c6ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14c6d0: 0x8fa60008
    ctx->pc = 0x14c6d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14c6d4: 0xc052ea0
    ctx->pc = 0x14C6D4u;
    SET_GPR_U32(ctx, 31, 0x14C6DCu);
    ctx->pc = 0x14C6D8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 2);
    ctx->pc = 0x14BA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___make_dp_0x14ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6DCu; }
        else if (ctx->pc != 0x14C6DCu) { ctx->pc = 0x14C6DCu; }
    }
    if (ctx->pc != 0x14C6DCu) { return; }
    ctx->pc = 0x14C6DCu;
    // 0x14c6dc: 0xdfbf0020
    ctx->pc = 0x14c6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c6e0: 0x3e00008
    ctx->pc = 0x14C6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C6E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14C6E8u;
}
