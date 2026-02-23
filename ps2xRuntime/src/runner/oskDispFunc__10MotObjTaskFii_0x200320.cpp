#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: oskDispFunc__10MotObjTaskFii
// Address: 0x200320 - 0x200350
void oskDispFunc__10MotObjTaskFii_0x200320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("oskDispFunc__10MotObjTaskFii");


    ctx->pc = 0x200320u;

    // 0x200320: 0x27bdffe0
    ctx->pc = 0x200320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200324: 0x7fbf0010
    ctx->pc = 0x200324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x200328: 0x7fb00000
    ctx->pc = 0x200328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20032c: 0xc48c1ca0
    ctx->pc = 0x20032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x200330: 0xc06b218
    ctx->pc = 0x200330u;
    SET_GPR_U32(ctx, 31, 0x200338u);
    ctx->pc = 0x200334u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200338u; }
        else if (ctx->pc != 0x200338u) { ctx->pc = 0x200338u; }
    }
    if (ctx->pc != 0x200338u) { return; }
    ctx->pc = 0x200338u;
    // 0x200338: 0xc0853ac
    ctx->pc = 0x200338u;
    SET_GPR_U32(ctx, 31, 0x200340u);
    ctx->pc = 0x20033Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200340u; }
        else if (ctx->pc != 0x200340u) { ctx->pc = 0x200340u; }
    }
    if (ctx->pc != 0x200340u) { return; }
    ctx->pc = 0x200340u;
    // 0x200340: 0x7bbf0010
    ctx->pc = 0x200340u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200344: 0x7bb00000
    ctx->pc = 0x200344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200348: 0x3e00008
    ctx->pc = 0x200348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20034Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200350u;
}
