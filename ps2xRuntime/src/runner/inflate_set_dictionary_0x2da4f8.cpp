#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflate_set_dictionary
// Address: 0x2da4f8 - 0x2da53c
void inflate_set_dictionary_0x2da4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2da4f8u;

    // 0x2da4f8: 0x27bdffd0
    ctx->pc = 0x2da4f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2da4fc: 0xffbf0020
    ctx->pc = 0x2da4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2da500: 0xffb10010
    ctx->pc = 0x2da500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2da504: 0xffb00000
    ctx->pc = 0x2da504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2da508: 0x80882d
    ctx->pc = 0x2da508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da50c: 0xc0802d
    ctx->pc = 0x2da50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da510: 0xc0bec59
    ctx->pc = 0x2DA510u;
    SET_GPR_U32(ctx, 31, 0x2DA518u);
    ctx->pc = 0x2DA514u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA518u; }
    }
    if (ctx->pc != 0x2DA518u) { return; }
    ctx->pc = 0x2DA518u;
    // 0x2da518: 0x8e220024
    ctx->pc = 0x2da518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2da51c: 0x2028021
    ctx->pc = 0x2da51cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2da520: 0xae300030
    ctx->pc = 0x2da520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
    // 0x2da524: 0xae30002c
    ctx->pc = 0x2da524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
    // 0x2da528: 0xdfbf0020
    ctx->pc = 0x2da528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da52c: 0xdfb10010
    ctx->pc = 0x2da52cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da530: 0xdfb00000
    ctx->pc = 0x2da530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da534: 0x3e00008
    ctx->pc = 0x2DA534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA538u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DA53Cu;
}
