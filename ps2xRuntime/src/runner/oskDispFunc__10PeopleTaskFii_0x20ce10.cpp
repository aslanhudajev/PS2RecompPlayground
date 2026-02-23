#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: oskDispFunc__10PeopleTaskFii
// Address: 0x20ce10 - 0x20ce40
void oskDispFunc__10PeopleTaskFii_0x20ce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("oskDispFunc__10PeopleTaskFii");


    ctx->pc = 0x20ce10u;

    // 0x20ce10: 0x27bdffe0
    ctx->pc = 0x20ce10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20ce14: 0x7fbf0010
    ctx->pc = 0x20ce14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20ce18: 0x7fb00000
    ctx->pc = 0x20ce18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20ce1c: 0xc48c1cd0
    ctx->pc = 0x20ce1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20ce20: 0xc06b218
    ctx->pc = 0x20CE20u;
    SET_GPR_U32(ctx, 31, 0x20CE28u);
    ctx->pc = 0x20CE24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE28u; }
        else if (ctx->pc != 0x20CE28u) { ctx->pc = 0x20CE28u; }
    }
    if (ctx->pc != 0x20CE28u) { return; }
    ctx->pc = 0x20CE28u;
    // 0x20ce28: 0xc0853ac
    ctx->pc = 0x20CE28u;
    SET_GPR_U32(ctx, 31, 0x20CE30u);
    ctx->pc = 0x20CE2Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE30u; }
        else if (ctx->pc != 0x20CE30u) { ctx->pc = 0x20CE30u; }
    }
    if (ctx->pc != 0x20CE30u) { return; }
    ctx->pc = 0x20CE30u;
    // 0x20ce30: 0x7bbf0010
    ctx->pc = 0x20ce30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ce34: 0x7bb00000
    ctx->pc = 0x20ce34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ce38: 0x3e00008
    ctx->pc = 0x20CE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CE3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20CE40u;
}
