#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: oskDispFunc__10ErsPplTaskFii
// Address: 0x20d7c0 - 0x20d834
void oskDispFunc__10ErsPplTaskFii_0x20d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("oskDispFunc__10ErsPplTaskFii");


    ctx->pc = 0x20d7c0u;

    // 0x20d7c0: 0x27bdffc0
    ctx->pc = 0x20d7c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20d7c4: 0x7fbf0030
    ctx->pc = 0x20d7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x20d7c8: 0x7fb20020
    ctx->pc = 0x20d7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20d7cc: 0x7fb10010
    ctx->pc = 0x20d7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20d7d0: 0x7fb00000
    ctx->pc = 0x20d7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20d7d4: 0xc48c1cd0
    ctx->pc = 0x20d7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20d7d8: 0x70a08e28
    ctx->pc = 0x20d7d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x20d7dc: 0x70c08628
    ctx->pc = 0x20d7dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20d7e0: 0xc06b218
    ctx->pc = 0x20D7E0u;
    SET_GPR_U32(ctx, 31, 0x20D7E8u);
    ctx->pc = 0x20D7E4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D7E8u; }
        else if (ctx->pc != 0x20D7E8u) { ctx->pc = 0x20D7E8u; }
    }
    if (ctx->pc != 0x20D7E8u) { return; }
    ctx->pc = 0x20D7E8u;
    // 0x20d7e8: 0x101100
    ctx->pc = 0x20d7e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 4));
    // 0x20d7ec: 0x501023
    ctx->pc = 0x20d7ecu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20d7f0: 0x21100
    ctx->pc = 0x20d7f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20d7f4: 0x521021
    ctx->pc = 0x20d7f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20d7f8: 0x8c440164
    ctx->pc = 0x20d7f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x20d7fc: 0x50800005
    ctx->pc = 0x20D7FCu;
    {
        const bool branch_taken_0x20d7fc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x20d7fc) {
            ctx->pc = 0x20D800u;
            SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
            ctx->pc = 0x20D814u;
            goto label_20d814;
        }
    }
    ctx->pc = 0x20D804u;
    // 0x20d804: 0xc06a0c8
    ctx->pc = 0x20D804u;
    SET_GPR_U32(ctx, 31, 0x20D80Cu);
    ctx->pc = 0x1A8320u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutForce_0x1a8320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D80Cu; }
        else if (ctx->pc != 0x20D80Cu) { ctx->pc = 0x20D80Cu; }
    }
    if (ctx->pc != 0x20D80Cu) { return; }
    ctx->pc = 0x20D80Cu;
    // 0x20d80c: 0x10000004
    ctx->pc = 0x20D80Cu;
    {
        const bool branch_taken_0x20d80c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D810u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x20d80c) {
            ctx->pc = 0x20D820u;
            goto label_20d820;
        }
    }
    ctx->pc = 0x20D814u;
label_20d814:
    // 0x20d814: 0xc0853c8
    ctx->pc = 0x20D814u;
    SET_GPR_U32(ctx, 31, 0x20D81Cu);
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D81Cu; }
        else if (ctx->pc != 0x20D81Cu) { ctx->pc = 0x20D81Cu; }
    }
    if (ctx->pc != 0x20D81Cu) { return; }
    ctx->pc = 0x20D81Cu;
    // 0x20d81c: 0x7bbf0030
    ctx->pc = 0x20d81cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20d820:
    // 0x20d820: 0x7bb20020
    ctx->pc = 0x20d820u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d824: 0x7bb10010
    ctx->pc = 0x20d824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d828: 0x7bb00000
    ctx->pc = 0x20d828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d82c: 0x3e00008
    ctx->pc = 0x20D82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D830u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D814u: goto label_20d814;
            case 0x20D820u: goto label_20d820;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20D834u;
}
