#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetScreenSub
// Address: 0x2d0d78 - 0x2d0e08
void GetScreenSub_0x2d0d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0d78u;

    // 0x2d0d78: 0x27bdffc0
    ctx->pc = 0x2d0d78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d0d7c: 0xffbf0030
    ctx->pc = 0x2d0d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d0d80: 0xffb20020
    ctx->pc = 0x2d0d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d0d84: 0xffb10010
    ctx->pc = 0x2d0d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d0d88: 0xffb00000
    ctx->pc = 0x2d0d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0d8c: 0xc0802d
    ctx->pc = 0x2d0d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d90: 0xe0882d
    ctx->pc = 0x2d0d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d94: 0x3c020036
    ctx->pc = 0x2d0d94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2d0d98: 0xc0b4fa0
    ctx->pc = 0x2D0D98u;
    SET_GPR_U32(ctx, 31, 0x2D0DA0u);
    ctx->pc = 0x2D0D9Cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DA0u; }
    }
    if (ctx->pc != 0x2D0DA0u) { return; }
    ctx->pc = 0x2D0DA0u;
    // 0x2d0da0: 0x2118018
    ctx->pc = 0x2d0da0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2d0da4: 0x108040
    ctx->pc = 0x2d0da4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0da8: 0x50102a
    ctx->pc = 0x2d0da8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x2d0dac: 0x1040000e
    ctx->pc = 0x2D0DACu;
    {
        const bool branch_taken_0x2d0dac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d0dac) {
            ctx->pc = 0x2D0DE8u;
            goto label_2d0de8;
        }
    }
    ctx->pc = 0x2D0DB4u;
    // 0x2d0db4: 0xc0b4fa0
    ctx->pc = 0x2D0DB4u;
    SET_GPR_U32(ctx, 31, 0x2D0DBCu);
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DBCu; }
    }
    if (ctx->pc != 0x2D0DBCu) { return; }
    ctx->pc = 0x2D0DBCu;
    // 0x2d0dbc: 0x8e430010
    ctx->pc = 0x2d0dbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2d0dc0: 0x8c660024
    ctx->pc = 0x2d0dc0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2d0dc4: 0x8c630020
    ctx->pc = 0x2d0dc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d0dc8: 0xc33018
    ctx->pc = 0x2d0dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2d0dcc: 0x3c04003b
    ctx->pc = 0x2d0dccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d0dd0: 0x24847760
    ctx->pc = 0x2d0dd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30560));
    // 0x2d0dd4: 0x40282d
    ctx->pc = 0x2d0dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0dd8: 0xc0b492e
    ctx->pc = 0x2D0DD8u;
    SET_GPR_U32(ctx, 31, 0x2D0DE0u);
    ctx->pc = 0x2D0DDCu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DE0u; }
    }
    if (ctx->pc != 0x2D0DE0u) { return; }
    ctx->pc = 0x2D0DE0u;
    // 0x2d0de0: 0x10000003
    ctx->pc = 0x2D0DE0u;
    {
        const bool branch_taken_0x2d0de0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0DE4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d0de0) {
            ctx->pc = 0x2D0DF0u;
            goto label_2d0df0;
        }
    }
    ctx->pc = 0x2D0DE8u;
label_2d0de8:
    // 0x2d0de8: 0xc0b4f86
    ctx->pc = 0x2D0DE8u;
    SET_GPR_U32(ctx, 31, 0x2D0DF0u);
    ctx->pc = 0x2D3E18u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMemBase_0x2d3e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DF0u; }
    }
    if (ctx->pc != 0x2D0DF0u) { return; }
    ctx->pc = 0x2D0DF0u;
label_2d0df0:
    // 0x2d0df0: 0xdfbf0030
    ctx->pc = 0x2d0df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0df4: 0xdfb20020
    ctx->pc = 0x2d0df4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0df8: 0xdfb10010
    ctx->pc = 0x2d0df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0dfc: 0xdfb00000
    ctx->pc = 0x2d0dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0e00: 0x3e00008
    ctx->pc = 0x2D0E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0E04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0DE8u: goto label_2d0de8;
            case 0x2D0DF0u: goto label_2d0df0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D0E08u;
}
