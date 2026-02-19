#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioStreamStart
// Address: 0x25d130 - 0x25d190
void AudioStreamStart_0x25d130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25d130u;

    // 0x25d130: 0x27bdffd0
    ctx->pc = 0x25d130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d134: 0xffbf0020
    ctx->pc = 0x25d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25d138: 0xffb10010
    ctx->pc = 0x25d138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25d13c: 0xffb00000
    ctx->pc = 0x25d13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25d140: 0x80302d
    ctx->pc = 0x25d140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d144: 0xa0882d
    ctx->pc = 0x25d144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d148: 0x3c100032
    ctx->pc = 0x25d148u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x25d14c: 0x2604fda8
    ctx->pc = 0x25d14cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294966696));
    // 0x25d150: 0x3c05003b
    ctx->pc = 0x25d150u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25d154: 0xc0b6252
    ctx->pc = 0x25D154u;
    SET_GPR_U32(ctx, 31, 0x25D15Cu);
    ctx->pc = 0x25D158u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939080));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D15Cu; }
    }
    if (ctx->pc != 0x25D15Cu) { return; }
    ctx->pc = 0x25D15Cu;
    // 0x25d15c: 0x2604fda8
    ctx->pc = 0x25d15cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294966696));
    // 0x25d160: 0x3c05003b
    ctx->pc = 0x25d160u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25d164: 0xc0bf1c1
    ctx->pc = 0x25D164u;
    SET_GPR_U32(ctx, 31, 0x25D16Cu);
    ctx->pc = 0x25D168u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939104));
    ctx->pc = 0x2FC704u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x2fc704(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D16Cu; }
    }
    if (ctx->pc != 0x25D16Cu) { return; }
    ctx->pc = 0x25D16Cu;
    // 0x25d16c: 0x3c020032
    ctx->pc = 0x25d16cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25d170: 0x9444fd68
    ctx->pc = 0x25d170u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294966632)));
    // 0x25d174: 0x282d
    ctx->pc = 0x25d174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d178: 0x220302d
    ctx->pc = 0x25d178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d17c: 0xdfbf0020
    ctx->pc = 0x25d17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d180: 0xdfb10010
    ctx->pc = 0x25d180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d184: 0xdfb00000
    ctx->pc = 0x25d184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d188: 0x80883fc
    ctx->pc = 0x25D188u;
    ctx->pc = 0x25D18Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x220FF0u;
    AudioStreamPlay_0x220ff0(rdram, ctx, runtime); return;
    ctx->pc = 0x25D190u;
}
