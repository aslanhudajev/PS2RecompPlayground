#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitCustomEffectSub
// Address: 0x279900 - 0x279b48
void InitCustomEffectSub_0x279900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x279900u;

    // 0x279900: 0x27bdff70
    ctx->pc = 0x279900u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x279904: 0xffbf0080
    ctx->pc = 0x279904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x279908: 0xffb50070
    ctx->pc = 0x279908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x27990c: 0xffb40060
    ctx->pc = 0x27990cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x279910: 0xffb30050
    ctx->pc = 0x279910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x279914: 0xffb20040
    ctx->pc = 0x279914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x279918: 0xffb10030
    ctx->pc = 0x279918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x27991c: 0xffb00020
    ctx->pc = 0x27991cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x279920: 0x80902d
    ctx->pc = 0x279920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279924: 0xa0802d
    ctx->pc = 0x279924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279928: 0xc0a02d
    ctx->pc = 0x279928u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27992c: 0xe0a82d
    ctx->pc = 0x27992cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279930: 0x100982d
    ctx->pc = 0x279930u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279934: 0x1200006b
    ctx->pc = 0x279934u;
    {
        const bool branch_taken_0x279934 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x279938u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279934) {
            ctx->pc = 0x279AE4u;
            goto label_279ae4;
        }
    }
    ctx->pc = 0x27993Cu;
    // 0x27993c: 0x82020000
    ctx->pc = 0x27993cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x279940: 0x10400068
    ctx->pc = 0x279940u;
    {
        const bool branch_taken_0x279940 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x279944u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x279940) {
            ctx->pc = 0x279AE4u;
            goto label_279ae4;
        }
    }
    ctx->pc = 0x279948u;
    // 0x279948: 0x8c42e880
    ctx->pc = 0x279948u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961280)));
    // 0x27994c: 0x10400010
    ctx->pc = 0x27994Cu;
    {
        const bool branch_taken_0x27994c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x279950u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x27994c) {
            ctx->pc = 0x279990u;
            goto label_279990;
        }
    }
    ctx->pc = 0x279954u;
    // 0x279954: 0x8c43d934
    ctx->pc = 0x279954u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x279958: 0x460000d
    ctx->pc = 0x279958u;
    {
        const bool branch_taken_0x279958 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27995Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 35));
        if (branch_taken_0x279958) {
            ctx->pc = 0x279990u;
            goto label_279990;
        }
    }
    ctx->pc = 0x279960u;
    // 0x279960: 0x1462000b
    ctx->pc = 0x279960u;
    {
        const bool branch_taken_0x279960 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x279964u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279960) {
            ctx->pc = 0x279990u;
            goto label_279990;
        }
    }
    ctx->pc = 0x279968u;
    // 0x279968: 0x3c05003b
    ctx->pc = 0x279968u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x27996c: 0xc0bf270
    ctx->pc = 0x27996Cu;
    SET_GPR_U32(ctx, 31, 0x279974u);
    ctx->pc = 0x279970u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950016));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279974u; }
    }
    if (ctx->pc != 0x279974u) { return; }
    ctx->pc = 0x279974u;
    // 0x279974: 0x14400006
    ctx->pc = 0x279974u;
    {
        const bool branch_taken_0x279974 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x279978u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279974) {
            ctx->pc = 0x279990u;
            goto label_279990;
        }
    }
    ctx->pc = 0x27997Cu;
    // 0x27997c: 0x3c05003b
    ctx->pc = 0x27997cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x279980: 0x24a5bc88
    ctx->pc = 0x279980u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950024));
    // 0x279984: 0xc0b6252
    ctx->pc = 0x279984u;
    SET_GPR_U32(ctx, 31, 0x27998Cu);
    ctx->pc = 0x279988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27998Cu; }
    }
    if (ctx->pc != 0x27998Cu) { return; }
    ctx->pc = 0x27998Cu;
    // 0x27998c: 0x3a0802d
    ctx->pc = 0x27998cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_279990:
    // 0x279990: 0x12400005
    ctx->pc = 0x279990u;
    {
        const bool branch_taken_0x279990 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x279994u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279990) {
            ctx->pc = 0x2799A8u;
            goto label_2799a8;
        }
    }
    ctx->pc = 0x279998u;
    // 0x279998: 0x200282d
    ctx->pc = 0x279998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27999c: 0xc0847fc
    ctx->pc = 0x27999Cu;
    SET_GPR_U32(ctx, 31, 0x2799A4u);
    ctx->pc = 0x2799A0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2799A4u; }
    }
    if (ctx->pc != 0x2799A4u) { return; }
    ctx->pc = 0x2799A4u;
    // 0x2799a4: 0x40882d
    ctx->pc = 0x2799a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2799a8:
    // 0x2799a8: 0x1620002c
    ctx->pc = 0x2799A8u;
    {
        const bool branch_taken_0x2799a8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2799ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2799a8) {
            ctx->pc = 0x279A5Cu;
            goto label_279a5c;
        }
    }
    ctx->pc = 0x2799B0u;
    // 0x2799b0: 0x3c020034
    ctx->pc = 0x2799b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2799b4: 0x8c44cda8
    ctx->pc = 0x2799b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954408)));
    // 0x2799b8: 0x10800004
    ctx->pc = 0x2799B8u;
    {
        const bool branch_taken_0x2799b8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2799BCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2799b8) {
            ctx->pc = 0x2799CCu;
            goto label_2799cc;
        }
    }
    ctx->pc = 0x2799C0u;
    // 0x2799c0: 0xc0847fc
    ctx->pc = 0x2799C0u;
    SET_GPR_U32(ctx, 31, 0x2799C8u);
    ctx->pc = 0x2799C4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2799C8u; }
    }
    if (ctx->pc != 0x2799C8u) { return; }
    ctx->pc = 0x2799C8u;
    // 0x2799c8: 0x40882d
    ctx->pc = 0x2799c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2799cc:
    // 0x2799cc: 0x16200023
    ctx->pc = 0x2799CCu;
    {
        const bool branch_taken_0x2799cc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2799D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2799cc) {
            ctx->pc = 0x279A5Cu;
            goto label_279a5c;
        }
    }
    ctx->pc = 0x2799D4u;
    // 0x2799d4: 0x3c020034
    ctx->pc = 0x2799d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2799d8: 0x8c44cdac
    ctx->pc = 0x2799d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954412)));
    // 0x2799dc: 0x10800004
    ctx->pc = 0x2799DCu;
    {
        const bool branch_taken_0x2799dc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2799E0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2799dc) {
            ctx->pc = 0x2799F0u;
            goto label_2799f0;
        }
    }
    ctx->pc = 0x2799E4u;
    // 0x2799e4: 0xc0847fc
    ctx->pc = 0x2799E4u;
    SET_GPR_U32(ctx, 31, 0x2799ECu);
    ctx->pc = 0x2799E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2799ECu; }
    }
    if (ctx->pc != 0x2799ECu) { return; }
    ctx->pc = 0x2799ECu;
    // 0x2799ec: 0x40882d
    ctx->pc = 0x2799ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2799f0:
    // 0x2799f0: 0x1620001a
    ctx->pc = 0x2799F0u;
    {
        const bool branch_taken_0x2799f0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2799F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2799f0) {
            ctx->pc = 0x279A5Cu;
            goto label_279a5c;
        }
    }
    ctx->pc = 0x2799F8u;
    // 0x2799f8: 0x3c020034
    ctx->pc = 0x2799f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2799fc: 0x8c44cda0
    ctx->pc = 0x2799fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954400)));
    // 0x279a00: 0x10800004
    ctx->pc = 0x279A00u;
    {
        const bool branch_taken_0x279a00 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x279A04u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279a00) {
            ctx->pc = 0x279A14u;
            goto label_279a14;
        }
    }
    ctx->pc = 0x279A08u;
    // 0x279a08: 0xc0847fc
    ctx->pc = 0x279A08u;
    SET_GPR_U32(ctx, 31, 0x279A10u);
    ctx->pc = 0x279A0Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279A10u; }
    }
    if (ctx->pc != 0x279A10u) { return; }
    ctx->pc = 0x279A10u;
    // 0x279a10: 0x40882d
    ctx->pc = 0x279a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279a14:
    // 0x279a14: 0x16200011
    ctx->pc = 0x279A14u;
    {
        const bool branch_taken_0x279a14 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x279A18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x279a14) {
            ctx->pc = 0x279A5Cu;
            goto label_279a5c;
        }
    }
    ctx->pc = 0x279A1Cu;
    // 0x279a1c: 0x3c020034
    ctx->pc = 0x279a1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x279a20: 0x8c44cda4
    ctx->pc = 0x279a20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954404)));
    // 0x279a24: 0x10800004
    ctx->pc = 0x279A24u;
    {
        const bool branch_taken_0x279a24 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x279A28u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279a24) {
            ctx->pc = 0x279A38u;
            goto label_279a38;
        }
    }
    ctx->pc = 0x279A2Cu;
    // 0x279a2c: 0xc0847fc
    ctx->pc = 0x279A2Cu;
    SET_GPR_U32(ctx, 31, 0x279A34u);
    ctx->pc = 0x279A30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279A34u; }
    }
    if (ctx->pc != 0x279A34u) { return; }
    ctx->pc = 0x279A34u;
    // 0x279a34: 0x40882d
    ctx->pc = 0x279a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279a38:
    // 0x279a38: 0x16200008
    ctx->pc = 0x279A38u;
    {
        const bool branch_taken_0x279a38 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x279A3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x279a38) {
            ctx->pc = 0x279A5Cu;
            goto label_279a5c;
        }
    }
    ctx->pc = 0x279A40u;
    // 0x279a40: 0x12600028
    ctx->pc = 0x279A40u;
    {
        const bool branch_taken_0x279a40 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x279A44u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x279a40) {
            ctx->pc = 0x279AE4u;
            goto label_279ae4;
        }
    }
    ctx->pc = 0x279A48u;
    // 0x279a48: 0x2484bc90
    ctx->pc = 0x279a48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950032));
    // 0x279a4c: 0xc0b492e
    ctx->pc = 0x279A4Cu;
    SET_GPR_U32(ctx, 31, 0x279A54u);
    ctx->pc = 0x279A50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279A54u; }
    }
    if (ctx->pc != 0x279A54u) { return; }
    ctx->pc = 0x279A54u;
    // 0x279a54: 0x10000033
    ctx->pc = 0x279A54u;
    {
        const bool branch_taken_0x279a54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x279A58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x279a54) {
            ctx->pc = 0x279B24u;
            goto label_279b24;
        }
    }
    ctx->pc = 0x279A5Cu;
label_279a5c:
    // 0x279a5c: 0x8c425528
    ctx->pc = 0x279a5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 21800)));
    // 0x279a60: 0x18400018
    ctx->pc = 0x279A60u;
    {
        const bool branch_taken_0x279a60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x279A64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279a60) {
            ctx->pc = 0x279AC4u;
            goto label_279ac4;
        }
    }
    ctx->pc = 0x279A68u;
    // 0x279a68: 0x3c020034
    ctx->pc = 0x279a68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x279a6c: 0x8c424f44
    ctx->pc = 0x279a6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20292)));
    // 0x279a70: 0x1040000f
    ctx->pc = 0x279A70u;
    {
        const bool branch_taken_0x279a70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x279A74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x279a70) {
            ctx->pc = 0x279AB0u;
            goto label_279ab0;
        }
    }
    ctx->pc = 0x279A78u;
    // 0x279a78: 0x8c435528
    ctx->pc = 0x279a78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 21800)));
    // 0x279a7c: 0x3c020034
    ctx->pc = 0x279a7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x279a80: 0x24474ab8
    ctx->pc = 0x279a80u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 19128));
    // 0x279a84: 0x2405000c
    ctx->pc = 0x279a84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    // 0x279a88: 0x24840001
    ctx->pc = 0x279a88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x279a8c: 0x0
    ctx->pc = 0x279a8cu;
    // NOP
label_279a90:
    // 0x279a90: 0x83102a
    ctx->pc = 0x279a90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x279a94: 0x1040000b
    ctx->pc = 0x279A94u;
    {
        const bool branch_taken_0x279a94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x279A98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 97));
        if (branch_taken_0x279a94) {
            ctx->pc = 0x279AC4u;
            goto label_279ac4;
        }
    }
    ctx->pc = 0x279A9Cu;
    // 0x279a9c: 0x453018
    ctx->pc = 0x279a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x279aa0: 0xc71021
    ctx->pc = 0x279aa0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x279aa4: 0x8c420000
    ctx->pc = 0x279aa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279aa8: 0x5440fff9
    ctx->pc = 0x279AA8u;
    {
        const bool branch_taken_0x279aa8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x279aa8) {
            ctx->pc = 0x279AACu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x279A90u;
            goto label_279a90;
        }
    }
    ctx->pc = 0x279AB0u;
label_279ab0:
    // 0x279ab0: 0x3c020034
    ctx->pc = 0x279ab0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x279ab4: 0x8c425528
    ctx->pc = 0x279ab4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 21800)));
    // 0x279ab8: 0x82102a
    ctx->pc = 0x279ab8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x279abc: 0x1440000f
    ctx->pc = 0x279ABCu;
    {
        const bool branch_taken_0x279abc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x279AC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 97));
        if (branch_taken_0x279abc) {
            ctx->pc = 0x279AFCu;
            goto label_279afc;
        }
    }
    ctx->pc = 0x279AC4u;
label_279ac4:
    // 0x279ac4: 0x3c020034
    ctx->pc = 0x279ac4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x279ac8: 0x8c455528
    ctx->pc = 0x279ac8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 21800)));
    // 0x279acc: 0x28a20079
    ctx->pc = 0x279accu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 121));
    // 0x279ad0: 0x14400006
    ctx->pc = 0x279AD0u;
    {
        const bool branch_taken_0x279ad0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x279AD4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x279ad0) {
            ctx->pc = 0x279AECu;
            goto label_279aec;
        }
    }
    ctx->pc = 0x279AD8u;
    // 0x279ad8: 0x3c04003b
    ctx->pc = 0x279ad8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x279adc: 0xc0b492e
    ctx->pc = 0x279ADCu;
    SET_GPR_U32(ctx, 31, 0x279AE4u);
    ctx->pc = 0x279AE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950064));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279AE4u; }
    }
    if (ctx->pc != 0x279AE4u) { return; }
    ctx->pc = 0x279AE4u;
label_279ae4:
    // 0x279ae4: 0x1000000f
    ctx->pc = 0x279AE4u;
    {
        const bool branch_taken_0x279ae4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x279AE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x279ae4) {
            ctx->pc = 0x279B24u;
            goto label_279b24;
        }
    }
    ctx->pc = 0x279AECu;
label_279aec:
    // 0x279aec: 0x8c625528
    ctx->pc = 0x279aecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 21800)));
    // 0x279af0: 0x24420001
    ctx->pc = 0x279af0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x279af4: 0xac625528
    ctx->pc = 0x279af4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21800), GPR_U32(ctx, 2));
    // 0x279af8: 0x24820061
    ctx->pc = 0x279af8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 97));
label_279afc:
    // 0x279afc: 0x3c030034
    ctx->pc = 0x279afcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x279b00: 0x24634ab8
    ctx->pc = 0x279b00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19128));
    // 0x279b04: 0x2404000c
    ctx->pc = 0x279b04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x279b08: 0x442018
    ctx->pc = 0x279b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x279b0c: 0x832821
    ctx->pc = 0x279b0cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x279b10: 0xacb10000
    ctx->pc = 0x279b10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x279b14: 0x642821
    ctx->pc = 0x279b14u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x279b18: 0xacb40004
    ctx->pc = 0x279b18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 20));
    // 0x279b1c: 0xa0182d
    ctx->pc = 0x279b1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279b20: 0xac750008
    ctx->pc = 0x279b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 21));
label_279b24:
    // 0x279b24: 0xdfbf0080
    ctx->pc = 0x279b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x279b28: 0xdfb50070
    ctx->pc = 0x279b28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x279b2c: 0xdfb40060
    ctx->pc = 0x279b2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x279b30: 0xdfb30050
    ctx->pc = 0x279b30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x279b34: 0xdfb20040
    ctx->pc = 0x279b34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279b38: 0xdfb10030
    ctx->pc = 0x279b38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279b3c: 0xdfb00020
    ctx->pc = 0x279b3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279b40: 0x3e00008
    ctx->pc = 0x279B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279B44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279990u: goto label_279990;
            case 0x2799A8u: goto label_2799a8;
            case 0x2799CCu: goto label_2799cc;
            case 0x2799F0u: goto label_2799f0;
            case 0x279A14u: goto label_279a14;
            case 0x279A38u: goto label_279a38;
            case 0x279A5Cu: goto label_279a5c;
            case 0x279A90u: goto label_279a90;
            case 0x279AB0u: goto label_279ab0;
            case 0x279AC4u: goto label_279ac4;
            case 0x279AE4u: goto label_279ae4;
            case 0x279AECu: goto label_279aec;
            case 0x279AFCu: goto label_279afc;
            case 0x279B24u: goto label_279b24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x279B48u;
}
