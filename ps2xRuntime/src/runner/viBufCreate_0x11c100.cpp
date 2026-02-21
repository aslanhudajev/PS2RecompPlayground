#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufCreate
// Address: 0x11c100 - 0x11c178
void viBufCreate_0x11c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11c100u;

    // 0x11c100: 0x3c020fff
    ctx->pc = 0x11c100u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x11c104: 0x27bdffc0
    ctx->pc = 0x11c104u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11c108: 0x3442ffff
    ctx->pc = 0x11c108u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11c10c: 0xffb00020
    ctx->pc = 0x11c10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11c110: 0xc23024
    ctx->pc = 0x11c110u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11c114: 0x3c032000
    ctx->pc = 0x11c114u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
    // 0x11c118: 0x80802d
    ctx->pc = 0x11c118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c11c: 0xffbf0030
    ctx->pc = 0x11c11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11c120: 0xc33025
    ctx->pc = 0x11c120u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11c124: 0x712c0
    ctx->pc = 0x11c124u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 11));
    // 0x11c128: 0xae050000
    ctx->pc = 0x11c128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x11c12c: 0x24030001
    ctx->pc = 0x11c12cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c130: 0xae060004
    ctx->pc = 0x11c130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x11c134: 0x3a0202d
    ctx->pc = 0x11c134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c138: 0xae020018
    ctx->pc = 0x11c138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x11c13c: 0xae080050
    ctx->pc = 0x11c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
    // 0x11c140: 0xae090054
    ctx->pc = 0x11c140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x11c144: 0xafa30004
    ctx->pc = 0x11c144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x11c148: 0xae070008
    ctx->pc = 0x11c148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x11c14c: 0xc0438a8
    ctx->pc = 0x11C14Cu;
    SET_GPR_U32(ctx, 31, 0x11C154u);
    ctx->pc = 0x11C150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x10E2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x10e2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C154u; }
    }
    if (ctx->pc != 0x11C154u) { return; }
    ctx->pc = 0x11C154u;
    // 0x11c154: 0xae020040
    ctx->pc = 0x11c154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x11c158: 0xc04705e
    ctx->pc = 0x11C158u;
    SET_GPR_U32(ctx, 31, 0x11C160u);
    ctx->pc = 0x11C15Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11C178u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufReset_0x11c178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C160u; }
    }
    if (ctx->pc != 0x11C160u) { return; }
    ctx->pc = 0x11C160u;
    // 0x11c160: 0xfe000048
    ctx->pc = 0x11c160u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    // 0x11c164: 0x24020001
    ctx->pc = 0x11c164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c168: 0xdfbf0030
    ctx->pc = 0x11c168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c16c: 0xdfb00020
    ctx->pc = 0x11c16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c170: 0x3e00008
    ctx->pc = 0x11C170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C174u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11C178u;
}
