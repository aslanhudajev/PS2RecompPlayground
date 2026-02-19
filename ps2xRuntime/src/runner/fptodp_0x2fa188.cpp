#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fptodp
// Address: 0x2fa188 - 0x2fa1c8
void fptodp_0x2fa188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2fa188u;

    // 0x2fa188: 0x27bdffd0
    ctx->pc = 0x2fa188u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fa18c: 0xffbf0020
    ctx->pc = 0x2fa18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fa190: 0x27a40010
    ctx->pc = 0x2fa190u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa194: 0xe7ac0010
    ctx->pc = 0x2fa194u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2fa198: 0xc0be5be
    ctx->pc = 0x2FA198u;
    SET_GPR_U32(ctx, 31, 0x2FA1A0u);
    ctx->pc = 0x2FA19Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F96F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x2f96f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA1A0u; }
    }
    if (ctx->pc != 0x2FA1A0u) { return; }
    ctx->pc = 0x2FA1A0u;
    // 0x2fa1a0: 0x8fa7000c
    ctx->pc = 0x2fa1a0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2fa1a4: 0x8fa40000
    ctx->pc = 0x2fa1a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa1a8: 0x7383c
    ctx->pc = 0x2fa1a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2fa1ac: 0x8fa50004
    ctx->pc = 0x2fa1acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fa1b0: 0x8fa60008
    ctx->pc = 0x2fa1b0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fa1b4: 0xc0be558
    ctx->pc = 0x2FA1B4u;
    SET_GPR_U32(ctx, 31, 0x2FA1BCu);
    ctx->pc = 0x2FA1B8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 2);
    ctx->pc = 0x2F9560u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___make_dp_0x2f9560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA1BCu; }
    }
    if (ctx->pc != 0x2FA1BCu) { return; }
    ctx->pc = 0x2FA1BCu;
    // 0x2fa1bc: 0xdfbf0020
    ctx->pc = 0x2fa1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa1c0: 0x3e00008
    ctx->pc = 0x2FA1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA1C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FA1C8u;
}
