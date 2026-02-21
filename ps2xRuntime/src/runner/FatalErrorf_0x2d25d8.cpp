#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cstdio>

// Function: FatalErrorf
// Address: 0x2d25d8 - 0x2d2694
void FatalErrorf_0x2d25d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    static int _fatalf_count = 0;
    ++_fatalf_count;

    ctx->pc = 0x2d25d8u;

    printf("[FatalErrorf #%d] ENTRY  a0(fmt)=0x%x  a1=0x%x a2=0x%x a3=0x%x  ra=0x%x  sp=0x%x\n",
        _fatalf_count, GPR_U32(ctx, 4), GPR_U32(ctx, 5), GPR_U32(ctx, 6), GPR_U32(ctx, 7),
        GPR_U32(ctx, 31), GPR_U32(ctx, 29));

    // 0x2d25d8: 0x27bdff30
    ctx->pc = 0x2d25d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2d25dc: 0xffbf0040
    ctx->pc = 0x2d25dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d25e0: 0xffb10030
    ctx->pc = 0x2d25e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2d25e4: 0xffb00020
    ctx->pc = 0x2d25e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d25e8: 0xffa50098
    ctx->pc = 0x2d25e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 5));
    // 0x2d25ec: 0xffa600a0
    ctx->pc = 0x2d25ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 6));
    // 0x2d25f0: 0xffa700a8
    ctx->pc = 0x2d25f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 7));
    // 0x2d25f4: 0xffa800b0
    ctx->pc = 0x2d25f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 8));
    // 0x2d25f8: 0xffa900b8
    ctx->pc = 0x2d25f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 9));
    // 0x2d25fc: 0xffaa00c0
    ctx->pc = 0x2d25fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 10));
    // 0x2d2600: 0xffab00c8
    ctx->pc = 0x2d2600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 11));
    // 0x2d2604: 0xc0b48c6
    ctx->pc = 0x2D2604u;
    SET_GPR_U32(ctx, 31, 0x2D260Cu);
    ctx->pc = 0x2D2608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D2318u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextErrorStr_0x2d2318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D260Cu; }
    }
    if (ctx->pc != 0x2D260Cu) { return; }
    ctx->pc = 0x2D260Cu;
    // 0x2d260c: 0x40802d
    ctx->pc = 0x2d260cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2610: 0x200202d
    ctx->pc = 0x2d2610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2614: 0x220282d
    ctx->pc = 0x2d2614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2618: 0xc0b5d5e
    ctx->pc = 0x2D2618u;
    SET_GPR_U32(ctx, 31, 0x2D2620u);
    ctx->pc = 0x2D261Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 152));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2620u; }
    }
    if (ctx->pc != 0x2D2620u) { return; }
    ctx->pc = 0x2D2620u;
    // 0x2d2620: 0xa200003f
    ctx->pc = 0x2d2620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2624: 0xc0b48e4
    ctx->pc = 0x2D2624u;
    SET_GPR_U32(ctx, 31, 0x2D262Cu);
    ctx->pc = 0x2D2628u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D2390u;
    {
        const uint32_t __entryPc = ctx->pc;
        PrintErrors_0x2d2390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D262Cu; }
    }
    if (ctx->pc != 0x2D262Cu) { return; }
    ctx->pc = 0x2D262Cu;
    // 0x2d262c: 0x3a0202d
    ctx->pc = 0x2d262cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2630: 0x3c05003b
    ctx->pc = 0x2d2630u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2d2634: 0x24a577e0
    ctx->pc = 0x2d2634u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30688));
    // 0x2d2638: 0x3c060031
    ctx->pc = 0x2d2638u;
    SET_GPR_U32(ctx, 6, ((uint32_t)49 << 16));
    // 0x2d263c: 0xc0b6252
    ctx->pc = 0x2D263Cu;
    SET_GPR_U32(ctx, 31, 0x2D2644u);
    ctx->pc = 0x2D2640u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294963584));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2644u; }
    }
    if (ctx->pc != 0x2D2644u) { return; }
    ctx->pc = 0x2D2644u;
    // 0x2d2644: 0x200202d
    ctx->pc = 0x2d2644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2648: 0xc0bf1c1
    ctx->pc = 0x2D2648u;
    SET_GPR_U32(ctx, 31, 0x2D2650u);
    ctx->pc = 0x2D264Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FC704u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x2fc704(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2650u; }
    }
    if (ctx->pc != 0x2D2650u) { return; }
    ctx->pc = 0x2D2650u;
    // 0x2d2650: 0xc0a9606
    ctx->pc = 0x2D2650u;
    SET_GPR_U32(ctx, 31, 0x2D2658u);
    ctx->pc = 0x2D2654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A5818u;
    {
        const uint32_t __entryPc = ctx->pc;
        bulletproof_printf_0x2a5818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2658u; }
    }
    if (ctx->pc != 0x2D2658u) { return; }
    ctx->pc = 0x2D2658u;
    // 0x2d2658: 0x3c04003b
    ctx->pc = 0x2d2658u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d265c: 0xc0b4a34
    ctx->pc = 0x2D265Cu;
    SET_GPR_U32(ctx, 31, 0x2D2664u);
    ctx->pc = 0x2D2660u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30704));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2664u; }
    }
    if (ctx->pc != 0x2D2664u) { return; }
    ctx->pc = 0x2D2664u;
    // 0x2d2664: 0xc0b4a34
    ctx->pc = 0x2D2664u;
    SET_GPR_U32(ctx, 31, 0x2D266Cu);
    ctx->pc = 0x2D2668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D266Cu; }
    }
    if (ctx->pc != 0x2D266Cu) { return; }
    ctx->pc = 0x2D266Cu;
    // 0x2d266c: 0x3c04003b
    ctx->pc = 0x2d266cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d2670: 0xc0b4a34
    ctx->pc = 0x2D2670u;
    SET_GPR_U32(ctx, 31, 0x2D2678u);
    ctx->pc = 0x2D2674u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30744));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2678u; }
    }
    if (ctx->pc != 0x2D2678u) { return; }
    ctx->pc = 0x2D2678u;
    // 0x2d2678: 0xc0a95b4
    ctx->pc = 0x2D2678u;
    SET_GPR_U32(ctx, 31, 0x2D2680u);
    ctx->pc = 0x2A56D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbErrorDie_0x2a56d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2680u; }
    }
    if (ctx->pc != 0x2D2680u) { return; }
    ctx->pc = 0x2D2680u;
    // 0x2d2680: 0xdfbf0040
    ctx->pc = 0x2d2680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2684: 0xdfb10030
    ctx->pc = 0x2d2684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2688: 0xdfb00020
    ctx->pc = 0x2d2688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d268c: 0x3e00008
    ctx->pc = 0x2D268Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2690u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2694u;
}
