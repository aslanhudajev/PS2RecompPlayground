#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init1st15__13SoundMgrClassFv
// Address: 0x2175f0 - 0x21761c
void init1st15__13SoundMgrClassFv_0x2175f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init1st15__13SoundMgrClassFv");


    ctx->pc = 0x2175f0u;

    // 0x2175f0: 0x27bdffe0
    ctx->pc = 0x2175f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2175f4: 0x7fbf0010
    ctx->pc = 0x2175f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2175f8: 0x7fb00000
    ctx->pc = 0x2175f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2175fc: 0xc06b39c
    ctx->pc = 0x2175FCu;
    SET_GPR_U32(ctx, 31, 0x217604u);
    ctx->pc = 0x217600u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ACE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndInit1st_0x1ace70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217604u; }
        else if (ctx->pc != 0x217604u) { ctx->pc = 0x217604u; }
    }
    if (ctx->pc != 0x217604u) { return; }
    ctx->pc = 0x217604u;
    // 0x217604: 0xc0861f0
    ctx->pc = 0x217604u;
    SET_GPR_U32(ctx, 31, 0x21760Cu);
    ctx->pc = 0x217608u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2187C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        voiceReqInit__13SoundMgrClassFv_0x2187c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21760Cu; }
        else if (ctx->pc != 0x21760Cu) { ctx->pc = 0x21760Cu; }
    }
    if (ctx->pc != 0x21760Cu) { return; }
    ctx->pc = 0x21760Cu;
    // 0x21760c: 0x7bbf0010
    ctx->pc = 0x21760cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217610: 0x7bb00000
    ctx->pc = 0x217610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217614: 0x3e00008
    ctx->pc = 0x217614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217618u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21761Cu;
}
