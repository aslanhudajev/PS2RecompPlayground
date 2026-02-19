#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ToLower
// Address: 0x2d2238 - 0x2d229c
void ToLower_0x2d2238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d2238u;

    // 0x2d2238: 0x27bdffe0
    ctx->pc = 0x2d2238u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d223c: 0xffbf0010
    ctx->pc = 0x2d223cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d2240: 0xffb00000
    ctx->pc = 0x2d2240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d2244: 0xc0bf306
    ctx->pc = 0x2D2244u;
    SET_GPR_U32(ctx, 31, 0x2D224Cu);
    ctx->pc = 0x2D2248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D224Cu; }
    }
    if (ctx->pc != 0x2D224Cu) { return; }
    ctx->pc = 0x2D224Cu;
    // 0x2d224c: 0x40302d
    ctx->pc = 0x2d224cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2250: 0x18c0000e
    ctx->pc = 0x2D2250u;
    {
        const bool branch_taken_0x2d2250 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2D2254u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d2250) {
            ctx->pc = 0x2D228Cu;
            goto label_2d228c;
        }
    }
    ctx->pc = 0x2D2258u;
    // 0x2d2258: 0x3c02003c
    ctx->pc = 0x2d2258u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2d225c: 0x2447a781
    ctx->pc = 0x2d225cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294944641));
label_2d2260:
    // 0x2d2260: 0x82040000
    ctx->pc = 0x2d2260u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d2264: 0x871021
    ctx->pc = 0x2d2264u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d2268: 0x90420000
    ctx->pc = 0x2d2268u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d226c: 0x30420001
    ctx->pc = 0x2d226cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2d2270: 0x24830020
    ctx->pc = 0x2d2270u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 32));
    // 0x2d2274: 0x62200b
    ctx->pc = 0x2d2274u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2d2278: 0xa2040000
    ctx->pc = 0x2d2278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d227c: 0x24a50001
    ctx->pc = 0x2d227cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d2280: 0xa6102a
    ctx->pc = 0x2d2280u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x2d2284: 0x1440fff6
    ctx->pc = 0x2D2284u;
    {
        const bool branch_taken_0x2d2284 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D2288u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x2d2284) {
            ctx->pc = 0x2D2260u;
            goto label_2d2260;
        }
    }
    ctx->pc = 0x2D228Cu;
label_2d228c:
    // 0x2d228c: 0xdfbf0010
    ctx->pc = 0x2d228cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2290: 0xdfb00000
    ctx->pc = 0x2d2290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2294: 0x3e00008
    ctx->pc = 0x2D2294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2298u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D2260u: goto label_2d2260;
            case 0x2D228Cu: goto label_2d228c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D229Cu;
}
