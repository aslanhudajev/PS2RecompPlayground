#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioQueAdd4
// Address: 0x223218 - 0x223250
void AudioQueAdd4_0x223218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223218u;

    // 0x223218: 0x27bdfff0
    ctx->pc = 0x223218u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22321c: 0xffbf0000
    ctx->pc = 0x22321cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223220: 0x80102d
    ctx->pc = 0x223220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223224: 0xa0182d
    ctx->pc = 0x223224u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223228: 0xc0482d
    ctx->pc = 0x223228u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22322c: 0xe0402d
    ctx->pc = 0x22322cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223230: 0x202d
    ctx->pc = 0x223230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223234: 0x40282d
    ctx->pc = 0x223234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223238: 0x60302d
    ctx->pc = 0x223238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22323c: 0xc088bd2
    ctx->pc = 0x22323Cu;
    SET_GPR_U32(ctx, 31, 0x223244u);
    ctx->pc = 0x223240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x222F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAnyQueAdd4_0x222f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223244u; }
    }
    if (ctx->pc != 0x223244u) { return; }
    ctx->pc = 0x223244u;
    // 0x223244: 0xdfbf0000
    ctx->pc = 0x223244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223248: 0x3e00008
    ctx->pc = 0x223248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22324Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223250u;
}
