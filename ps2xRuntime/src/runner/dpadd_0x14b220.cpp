#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dpadd
// Address: 0x14b220 - 0x14b278
void dpadd_0x14b220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dpadd");


    ctx->pc = 0x14b220u;

    // 0x14b220: 0x27bdff70
    ctx->pc = 0x14b220u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x14b224: 0xffa40060
    ctx->pc = 0x14b224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x14b228: 0xffa50068
    ctx->pc = 0x14b228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x14b22c: 0x27a40060
    ctx->pc = 0x14b22cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x14b230: 0xffb00070
    ctx->pc = 0x14b230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x14b234: 0xffbf0080
    ctx->pc = 0x14b234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x14b238: 0xc052bd0
    ctx->pc = 0x14B238u;
    SET_GPR_U32(ctx, 31, 0x14B240u);
    ctx->pc = 0x14B23Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14AF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x14af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B240u; }
        else if (ctx->pc != 0x14B240u) { ctx->pc = 0x14B240u; }
    }
    if (ctx->pc != 0x14B240u) { return; }
    ctx->pc = 0x14B240u;
    // 0x14b240: 0x27b00020
    ctx->pc = 0x14b240u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x14b244: 0x27a40068
    ctx->pc = 0x14b244u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 104));
    // 0x14b248: 0xc052bd0
    ctx->pc = 0x14B248u;
    SET_GPR_U32(ctx, 31, 0x14B250u);
    ctx->pc = 0x14B24Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14AF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x14af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B250u; }
        else if (ctx->pc != 0x14B250u) { ctx->pc = 0x14B250u; }
    }
    if (ctx->pc != 0x14B250u) { return; }
    ctx->pc = 0x14B250u;
    // 0x14b250: 0x200282d
    ctx->pc = 0x14b250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b254: 0x27a60040
    ctx->pc = 0x14b254u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x14b258: 0xc052bf8
    ctx->pc = 0x14B258u;
    SET_GPR_U32(ctx, 31, 0x14B260u);
    ctx->pc = 0x14B25Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14AFE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x14afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B260u; }
        else if (ctx->pc != 0x14B260u) { ctx->pc = 0x14B260u; }
    }
    if (ctx->pc != 0x14B260u) { return; }
    ctx->pc = 0x14B260u;
    // 0x14b260: 0xc052b84
    ctx->pc = 0x14B260u;
    SET_GPR_U32(ctx, 31, 0x14B268u);
    ctx->pc = 0x14B264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14AE10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x14ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B268u; }
        else if (ctx->pc != 0x14B268u) { ctx->pc = 0x14B268u; }
    }
    if (ctx->pc != 0x14B268u) { return; }
    ctx->pc = 0x14B268u;
    // 0x14b268: 0xdfbf0080
    ctx->pc = 0x14b268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14b26c: 0xdfb00070
    ctx->pc = 0x14b26cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b270: 0x3e00008
    ctx->pc = 0x14B270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B274u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B278u;
}
