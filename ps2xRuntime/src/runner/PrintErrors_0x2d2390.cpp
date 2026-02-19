#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PrintErrors
// Address: 0x2d2390 - 0x2d24b8
void PrintErrors_0x2d2390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d2390u;

    // 0x2d2390: 0x27bdff70
    ctx->pc = 0x2d2390u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d2394: 0xffbf0080
    ctx->pc = 0x2d2394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d2398: 0xffb70070
    ctx->pc = 0x2d2398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2d239c: 0xffb60060
    ctx->pc = 0x2d239cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2d23a0: 0xffb50050
    ctx->pc = 0x2d23a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2d23a4: 0xffb40040
    ctx->pc = 0x2d23a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d23a8: 0xffb30030
    ctx->pc = 0x2d23a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d23ac: 0xffb20020
    ctx->pc = 0x2d23acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d23b0: 0xffb10010
    ctx->pc = 0x2d23b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d23b4: 0xffb00000
    ctx->pc = 0x2d23b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d23b8: 0x80a02d
    ctx->pc = 0x2d23b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23bc: 0x3c02003a
    ctx->pc = 0x2d23bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d23c0: 0x8c421d04
    ctx->pc = 0x2d23c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7428)));
    // 0x2d23c4: 0x24510001
    ctx->pc = 0x2d23c4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d23c8: 0x3c02003d
    ctx->pc = 0x2d23c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d23cc: 0x90422a5a
    ctx->pc = 0x2d23ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10842)));
    // 0x2d23d0: 0x2228823
    ctx->pc = 0x2d23d0u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d23d4: 0x3c02003a
    ctx->pc = 0x2d23d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d23d8: 0x24030001
    ctx->pc = 0x2d23d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d23dc: 0xac431be4
    ctx->pc = 0x2d23dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7140), GPR_U32(ctx, 3));
    // 0x2d23e0: 0x3c02003a
    ctx->pc = 0x2d23e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d23e4: 0xac431be8
    ctx->pc = 0x2d23e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7144), GPR_U32(ctx, 3));
    // 0x2d23e8: 0xc0b144c
    ctx->pc = 0x2D23E8u;
    SET_GPR_U32(ctx, 31, 0x2D23F0u);
    ctx->pc = 0x2D23ECu;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D23F0u; }
    }
    if (ctx->pc != 0x2D23F0u) { return; }
    ctx->pc = 0x2D23F0u;
    // 0x2d23f0: 0x12800005
    ctx->pc = 0x2D23F0u;
    {
        const bool branch_taken_0x2d23f0 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D23F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
        if (branch_taken_0x2d23f0) {
            ctx->pc = 0x2D2408u;
            goto label_2d2408;
        }
    }
    ctx->pc = 0x2D23F8u;
    // 0x2d23f8: 0x3c04003b
    ctx->pc = 0x2d23f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d23fc: 0xc0b4a34
    ctx->pc = 0x2D23FCu;
    SET_GPR_U32(ctx, 31, 0x2D2404u);
    ctx->pc = 0x2D2400u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30624));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2404u; }
    }
    if (ctx->pc != 0x2D2404u) { return; }
    ctx->pc = 0x2D2404u;
    // 0x2d2404: 0x3c02003d
    ctx->pc = 0x2d2404u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
label_2d2408:
    // 0x2d2408: 0x90502a58
    ctx->pc = 0x2d2408u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10840)));
    // 0x2d240c: 0x3c02003d
    ctx->pc = 0x2d240cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d2410: 0x90422a5a
    ctx->pc = 0x2d2410u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10842)));
    // 0x2d2414: 0x10400019
    ctx->pc = 0x2D2414u;
    {
        const bool branch_taken_0x2d2414 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2418u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d2414) {
            ctx->pc = 0x2D247Cu;
            goto label_2d247c;
        }
    }
    ctx->pc = 0x2D241Cu;
    // 0x2d241c: 0x3c17003b
    ctx->pc = 0x2d241cu;
    SET_GPR_U32(ctx, 23, ((uint32_t)59 << 16));
    // 0x2d2420: 0x3c02003d
    ctx->pc = 0x2d2420u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d2424: 0x24532a60
    ctx->pc = 0x2d2424u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 10848));
    // 0x2d2428: 0x3c16003a
    ctx->pc = 0x2d2428u;
    SET_GPR_U32(ctx, 22, ((uint32_t)58 << 16));
    // 0x2d242c: 0x3c15003d
    ctx->pc = 0x2d242cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)61 << 16));
label_2d2430:
    // 0x2d2430: 0x12800004
    ctx->pc = 0x2D2430u;
    {
        const bool branch_taken_0x2d2430 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2434u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 16), 6));
        if (branch_taken_0x2d2430) {
            ctx->pc = 0x2D2444u;
            goto label_2d2444;
        }
    }
    ctx->pc = 0x2D2438u;
    // 0x2d2438: 0x26e477c0
    ctx->pc = 0x2d2438u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 23), 30656));
    // 0x2d243c: 0xc0b4a34
    ctx->pc = 0x2D243Cu;
    SET_GPR_U32(ctx, 31, 0x2D2444u);
    ctx->pc = 0x2D2440u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2444u; }
    }
    if (ctx->pc != 0x2D2444u) { return; }
    ctx->pc = 0x2D2444u;
label_2d2444:
    // 0x2d2444: 0x103180
    ctx->pc = 0x2d2444u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 16), 6));
    // 0x2d2448: 0x24040002
    ctx->pc = 0x2d2448u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d244c: 0x1128c0
    ctx->pc = 0x2d244cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d2450: 0xc0b135a
    ctx->pc = 0x2D2450u;
    SET_GPR_U32(ctx, 31, 0x2D2458u);
    ctx->pc = 0x2D2454u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    ctx->pc = 0x2C4D68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawText_0x2c4d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2458u; }
    }
    if (ctx->pc != 0x2D2458u) { return; }
    ctx->pc = 0x2D2458u;
    // 0x2d2458: 0x26100001
    ctx->pc = 0x2d2458u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d245c: 0x8ec21d08
    ctx->pc = 0x2d245cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 7432)));
    // 0x2d2460: 0x202102a
    ctx->pc = 0x2d2460u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2d2464: 0x2800a
    ctx->pc = 0x2d2464u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
    // 0x2d2468: 0x26520001
    ctx->pc = 0x2d2468u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d246c: 0x92a22a5a
    ctx->pc = 0x2d246cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 10842)));
    // 0x2d2470: 0x242102a
    ctx->pc = 0x2d2470u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x2d2474: 0x1440ffee
    ctx->pc = 0x2D2474u;
    {
        const bool branch_taken_0x2d2474 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D2478u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2d2474) {
            ctx->pc = 0x2D2430u;
            goto label_2d2430;
        }
    }
    ctx->pc = 0x2D247Cu;
label_2d247c:
    // 0x2d247c: 0x3c02003a
    ctx->pc = 0x2d247cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d2480: 0xac401be4
    ctx->pc = 0x2d2480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7140), GPR_U32(ctx, 0));
    // 0x2d2484: 0x3c02003a
    ctx->pc = 0x2d2484u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d2488: 0xac401be8
    ctx->pc = 0x2d2488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7144), GPR_U32(ctx, 0));
    // 0x2d248c: 0xdfbf0080
    ctx->pc = 0x2d248cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d2490: 0xdfb70070
    ctx->pc = 0x2d2490u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d2494: 0xdfb60060
    ctx->pc = 0x2d2494u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d2498: 0xdfb50050
    ctx->pc = 0x2d2498u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d249c: 0xdfb40040
    ctx->pc = 0x2d249cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d24a0: 0xdfb30030
    ctx->pc = 0x2d24a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d24a4: 0xdfb20020
    ctx->pc = 0x2d24a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d24a8: 0xdfb10010
    ctx->pc = 0x2d24a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d24ac: 0xdfb00000
    ctx->pc = 0x2d24acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d24b0: 0x3e00008
    ctx->pc = 0x2D24B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D24B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D2408u: goto label_2d2408;
            case 0x2D2430u: goto label_2d2430;
            case 0x2D2444u: goto label_2d2444;
            case 0x2D247Cu: goto label_2d247c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D24B8u;
}
