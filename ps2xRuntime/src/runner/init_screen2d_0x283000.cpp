#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_screen2d
// Address: 0x283000 - 0x2832fc
void init_screen2d_0x283000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x283000u;

    // 0x283000: 0x27bdff40
    ctx->pc = 0x283000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x283004: 0xffbf00b0
    ctx->pc = 0x283004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x283008: 0xffbe00a0
    ctx->pc = 0x283008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x28300c: 0xffb70090
    ctx->pc = 0x28300cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x283010: 0xffb60080
    ctx->pc = 0x283010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x283014: 0xffb50070
    ctx->pc = 0x283014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x283018: 0xffb40060
    ctx->pc = 0x283018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x28301c: 0xffb30050
    ctx->pc = 0x28301cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x283020: 0xffb20040
    ctx->pc = 0x283020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x283024: 0xffb10030
    ctx->pc = 0x283024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x283028: 0xffb00020
    ctx->pc = 0x283028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x28302c: 0x80802d
    ctx->pc = 0x28302cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283030: 0xa0a02d
    ctx->pc = 0x283030u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283034: 0x3c060035
    ctx->pc = 0x283034u;
    SET_GPR_U32(ctx, 6, ((uint32_t)53 << 16));
    // 0x283038: 0x3c050035
    ctx->pc = 0x283038u;
    SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
    // 0x28303c: 0x3c040035
    ctx->pc = 0x28303cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x283040: 0x3c030035
    ctx->pc = 0x283040u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x283044: 0x2402ffff
    ctx->pc = 0x283044u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x283048: 0xac629ba8
    ctx->pc = 0x283048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941608), GPR_U32(ctx, 2));
    // 0x28304c: 0xac829bb0
    ctx->pc = 0x28304cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294941616), GPR_U32(ctx, 2));
    // 0x283050: 0xaca29bb4
    ctx->pc = 0x283050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294941620), GPR_U32(ctx, 2));
    // 0x283054: 0xacc29bac
    ctx->pc = 0x283054u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294941612), GPR_U32(ctx, 2));
    // 0x283058: 0x34048004
    ctx->pc = 0x283058u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32772));
    // 0x28305c: 0xc0a0896
    ctx->pc = 0x28305Cu;
    SET_GPR_U32(ctx, 31, 0x283064u);
    ctx->pc = 0x283060u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x282258u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_attract_mode_0x282258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283064u; }
    }
    if (ctx->pc != 0x283064u) { return; }
    ctx->pc = 0x283064u;
    // 0x283064: 0x3c04003b
    ctx->pc = 0x283064u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x283068: 0x2484c480
    ctx->pc = 0x283068u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952064));
    // 0x28306c: 0x3c05003a
    ctx->pc = 0x28306cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x283070: 0x24a52550
    ctx->pc = 0x283070u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x283074: 0x302d
    ctx->pc = 0x283074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283078: 0xc0b1b04
    ctx->pc = 0x283078u;
    SET_GPR_U32(ctx, 31, 0x283080u);
    ctx->pc = 0x28307Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283080u; }
    }
    if (ctx->pc != 0x283080u) { return; }
    ctx->pc = 0x283080u;
    // 0x283080: 0x1680000f
    ctx->pc = 0x283080u;
    {
        const bool branch_taken_0x283080 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x283084u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x283080) {
            ctx->pc = 0x2830C0u;
            goto label_2830c0;
        }
    }
    ctx->pc = 0x283088u;
    // 0x283088: 0x24020001
    ctx->pc = 0x283088u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28308c: 0xac629ba4
    ctx->pc = 0x28308cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941604), GPR_U32(ctx, 2));
    // 0x283090: 0x3c04003b
    ctx->pc = 0x283090u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x283094: 0x2484c490
    ctx->pc = 0x283094u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952080));
    // 0x283098: 0x282d
    ctx->pc = 0x283098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28309c: 0xc0b0c08
    ctx->pc = 0x28309Cu;
    SET_GPR_U32(ctx, 31, 0x2830A4u);
    ctx->pc = 0x2830A0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2830A4u; }
    }
    if (ctx->pc != 0x2830A4u) { return; }
    ctx->pc = 0x2830A4u;
    // 0x2830a4: 0x3c03003c
    ctx->pc = 0x2830a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2830a8: 0xac623b08
    ctx->pc = 0x2830a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15112), GPR_U32(ctx, 2));
    // 0x2830ac: 0x40202d
    ctx->pc = 0x2830acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2830b0: 0xc0b0ce8
    ctx->pc = 0x2830B0u;
    SET_GPR_U32(ctx, 31, 0x2830B8u);
    ctx->pc = 0x2830B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2830B8u; }
    }
    if (ctx->pc != 0x2830B8u) { return; }
    ctx->pc = 0x2830B8u;
    // 0x2830b8: 0x10000008
    ctx->pc = 0x2830B8u;
    {
        const bool branch_taken_0x2830b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2830BCu;
        SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
        if (branch_taken_0x2830b8) {
            ctx->pc = 0x2830DCu;
            goto label_2830dc;
        }
    }
    ctx->pc = 0x2830C0u;
label_2830c0:
    // 0x2830c0: 0xc098f70
    ctx->pc = 0x2830C0u;
    SET_GPR_U32(ctx, 31, 0x2830C8u);
    ctx->pc = 0x2830C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x263DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadGauntWorldStart_0x263dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2830C8u; }
    }
    if (ctx->pc != 0x2830C8u) { return; }
    ctx->pc = 0x2830C8u;
    // 0x2830c8: 0x3c030035
    ctx->pc = 0x2830c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x2830cc: 0xac629ba8
    ctx->pc = 0x2830ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941608), GPR_U32(ctx, 2));
    // 0x2830d0: 0x3c02003c
    ctx->pc = 0x2830d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2830d4: 0xac403b08
    ctx->pc = 0x2830d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15112), GPR_U32(ctx, 0));
    // 0x2830d8: 0x3c13003c
    ctx->pc = 0x2830d8u;
    SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
label_2830dc:
    // 0x2830dc: 0x3c020035
    ctx->pc = 0x2830dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2830e0: 0x8c449bbc
    ctx->pc = 0x2830e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294941628)));
    // 0x2830e4: 0xae643b00
    ctx->pc = 0x2830e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 15104), GPR_U32(ctx, 4));
    // 0x2830e8: 0x3c02003c
    ctx->pc = 0x2830e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2830ec: 0xac543b04
    ctx->pc = 0x2830ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15108), GPR_U32(ctx, 20));
    // 0x2830f0: 0x24110140
    ctx->pc = 0x2830f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2830f4: 0x2918818
    ctx->pc = 0x2830f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2830f8: 0x24120050
    ctx->pc = 0x2830f8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 80));
    // 0x2830fc: 0x922018
    ctx->pc = 0x2830fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x283100: 0x3c100035
    ctx->pc = 0x283100u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x283104: 0x26109cc0
    ctx->pc = 0x283104u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294941888));
    // 0x283108: 0x902021
    ctx->pc = 0x283108u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x28310c: 0x2242021
    ctx->pc = 0x28310cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x283110: 0x282d
    ctx->pc = 0x283110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283114: 0x302d
    ctx->pc = 0x283114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283118: 0xc080d22
    ctx->pc = 0x283118u;
    SET_GPR_U32(ctx, 31, 0x283120u);
    ctx->pc = 0x28311Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283120u; }
    }
    if (ctx->pc != 0x283120u) { return; }
    ctx->pc = 0x283120u;
    // 0x283120: 0x3c03003c
    ctx->pc = 0x283120u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x283124: 0xac623ae8
    ctx->pc = 0x283124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15080), GPR_U32(ctx, 2));
    // 0x283128: 0x8e623b00
    ctx->pc = 0x283128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 15104)));
    // 0x28312c: 0x521818
    ctx->pc = 0x28312cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x283130: 0x711021
    ctx->pc = 0x283130u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x283134: 0x2028021
    ctx->pc = 0x283134u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x283138: 0x8e020038
    ctx->pc = 0x283138u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x28313c: 0x4400004
    ctx->pc = 0x28313Cu;
    {
        const bool branch_taken_0x28313c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x283140u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x28313c) {
            ctx->pc = 0x283150u;
            goto label_283150;
        }
    }
    ctx->pc = 0x283144u;
    // 0x283144: 0x2484c4a0
    ctx->pc = 0x283144u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952096));
    // 0x283148: 0xc0803c4
    ctx->pc = 0x283148u;
    SET_GPR_U32(ctx, 31, 0x283150u);
    ctx->pc = 0x28314Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x200F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontInitSpecial_0x200f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283150u; }
    }
    if (ctx->pc != 0x283150u) { return; }
    ctx->pc = 0x283150u;
label_283150:
    // 0x283150: 0x802d
    ctx->pc = 0x283150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283154: 0x24020140
    ctx->pc = 0x283154u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
    // 0x283158: 0x2828818
    ctx->pc = 0x283158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28315c: 0x3c1e003c
    ctx->pc = 0x28315cu;
    SET_GPR_U32(ctx, 30, ((uint32_t)60 << 16));
    // 0x283160: 0x24170050
    ctx->pc = 0x283160u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 80));
    // 0x283164: 0x3c020035
    ctx->pc = 0x283164u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x283168: 0x24569cc0
    ctx->pc = 0x283168u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294941888));
    // 0x28316c: 0x3c020035
    ctx->pc = 0x28316cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x283170: 0x24559ca0
    ctx->pc = 0x283170u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294941856));
    // 0x283174: 0x3c020035
    ctx->pc = 0x283174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x283178: 0x24539ca4
    ctx->pc = 0x283178u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294941860));
    // 0x28317c: 0x3c02003c
    ctx->pc = 0x28317cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x283180: 0x24523ad8
    ctx->pc = 0x283180u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 15064));
    // 0x283184: 0x8fc63b00
    ctx->pc = 0x283184u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 15104)));
label_283188:
    // 0x283188: 0xd71018
    ctx->pc = 0x283188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28318c: 0x563021
    ctx->pc = 0x28318cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x283190: 0x2263021
    ctx->pc = 0x283190u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x283194: 0x3a0202d
    ctx->pc = 0x283194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283198: 0x3c03003b
    ctx->pc = 0x283198u;
    SET_GPR_U32(ctx, 3, ((uint32_t)59 << 16));
    // 0x28319c: 0x2465c4a8
    ctx->pc = 0x28319cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x2831a0: 0x24c60020
    ctx->pc = 0x2831a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
    // 0x2831a4: 0xc0b6252
    ctx->pc = 0x2831A4u;
    SET_GPR_U32(ctx, 31, 0x2831ACu);
    ctx->pc = 0x2831A8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2831ACu; }
    }
    if (ctx->pc != 0x2831ACu) { return; }
    ctx->pc = 0x2831ACu;
    // 0x2831ac: 0x1010c0
    ctx->pc = 0x2831acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
    // 0x2831b0: 0x551821
    ctx->pc = 0x2831b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2831b4: 0x531021
    ctx->pc = 0x2831b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2831b8: 0x3a0202d
    ctx->pc = 0x2831b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2831bc: 0x8c650000
    ctx->pc = 0x2831bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2831c0: 0xc0b0c08
    ctx->pc = 0x2831C0u;
    SET_GPR_U32(ctx, 31, 0x2831C8u);
    ctx->pc = 0x2831C4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2831C8u; }
    }
    if (ctx->pc != 0x2831C8u) { return; }
    ctx->pc = 0x2831C8u;
    // 0x2831c8: 0x101880
    ctx->pc = 0x2831c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2831cc: 0x721821
    ctx->pc = 0x2831ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2831d0: 0xac620000
    ctx->pc = 0x2831d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2831d4: 0x26100001
    ctx->pc = 0x2831d4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2831d8: 0x2a020004
    ctx->pc = 0x2831d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x2831dc: 0x1440ffea
    ctx->pc = 0x2831DCu;
    {
        const bool branch_taken_0x2831dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2831E0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 15104)));
        if (branch_taken_0x2831dc) {
            ctx->pc = 0x283188u;
            goto label_283188;
        }
    }
    ctx->pc = 0x2831E4u;
    // 0x2831e4: 0xc0a0876
    ctx->pc = 0x2831E4u;
    SET_GPR_U32(ctx, 31, 0x2831ECu);
    ctx->pc = 0x2821D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        audio_in_attract_0x2821d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2831ECu; }
    }
    if (ctx->pc != 0x2831ECu) { return; }
    ctx->pc = 0x2831ECu;
    // 0x2831ec: 0x3c030032
    ctx->pc = 0x2831ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2831f0: 0x10400013
    ctx->pc = 0x2831F0u;
    {
        const bool branch_taken_0x2831f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2831F4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966624), GPR_U32(ctx, 2));
        if (branch_taken_0x2831f0) {
            ctx->pc = 0x283240u;
            goto label_283240;
        }
    }
    ctx->pc = 0x2831F8u;
    // 0x2831f8: 0x3c020035
    ctx->pc = 0x2831f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2831fc: 0x24479cc0
    ctx->pc = 0x2831fcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294941888));
    // 0x283200: 0x3c02003c
    ctx->pc = 0x283200u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x283204: 0x8c433b00
    ctx->pc = 0x283204u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 15104)));
    // 0x283208: 0x24020050
    ctx->pc = 0x283208u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x28320c: 0x621818
    ctx->pc = 0x28320cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x283210: 0x24020140
    ctx->pc = 0x283210u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
    // 0x283214: 0x2822818
    ctx->pc = 0x283214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x283218: 0x653021
    ctx->pc = 0x283218u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28321c: 0xc71021
    ctx->pc = 0x28321cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x283220: 0x8042003c
    ctx->pc = 0x283220u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x283224: 0x10400006
    ctx->pc = 0x283224u;
    {
        const bool branch_taken_0x283224 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283228u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        if (branch_taken_0x283224) {
            ctx->pc = 0x283240u;
            goto label_283240;
        }
    }
    ctx->pc = 0x28322Cu;
    // 0x28322c: 0xa42021
    ctx->pc = 0x28322cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x283230: 0xe61021
    ctx->pc = 0x283230u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x283234: 0x2484003c
    ctx->pc = 0x283234u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 60));
    // 0x283238: 0xc09744c
    ctx->pc = 0x283238u;
    SET_GPR_U32(ctx, 31, 0x283240u);
    ctx->pc = 0x28323Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 76)));
    ctx->pc = 0x25D130u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStreamStart_0x25d130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283240u; }
    }
    if (ctx->pc != 0x283240u) { return; }
    ctx->pc = 0x283240u;
label_283240:
    // 0x283240: 0x3c020035
    ctx->pc = 0x283240u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x283244: 0xac40a2d8
    ctx->pc = 0x283244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943448), GPR_U32(ctx, 0));
    // 0x283248: 0x3c05003c
    ctx->pc = 0x283248u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x28324c: 0x3c040035
    ctx->pc = 0x28324cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x283250: 0x24849cc0
    ctx->pc = 0x283250u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941888));
    // 0x283254: 0x3c02003c
    ctx->pc = 0x283254u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x283258: 0x8c433b00
    ctx->pc = 0x283258u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 15104)));
    // 0x28325c: 0x24020050
    ctx->pc = 0x28325cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x283260: 0x621818
    ctx->pc = 0x283260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x283264: 0x24020140
    ctx->pc = 0x283264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
    // 0x283268: 0x2821018
    ctx->pc = 0x283268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28326c: 0x621821
    ctx->pc = 0x28326cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x283270: 0x832021
    ctx->pc = 0x283270u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x283274: 0x8c820034
    ctx->pc = 0x283274u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x283278: 0xaca23aec
    ctx->pc = 0x283278u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 15084), GPR_U32(ctx, 2));
    // 0x28327c: 0x3c02003c
    ctx->pc = 0x28327cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x283280: 0xac403af8
    ctx->pc = 0x283280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15096), GPR_U32(ctx, 0));
    // 0x283284: 0x3c02003c
    ctx->pc = 0x283284u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x283288: 0xac403afc
    ctx->pc = 0x283288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15100), GPR_U32(ctx, 0));
    // 0x28328c: 0x3c02003c
    ctx->pc = 0x28328cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x283290: 0xac403af0
    ctx->pc = 0x283290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15088), GPR_U32(ctx, 0));
    // 0x283294: 0x3c02003c
    ctx->pc = 0x283294u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x283298: 0xac403b0c
    ctx->pc = 0x283298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15116), GPR_U32(ctx, 0));
    // 0x28329c: 0x3c02003c
    ctx->pc = 0x28329cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2832a0: 0xac403b10
    ctx->pc = 0x2832a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15120), GPR_U32(ctx, 0));
    // 0x2832a4: 0x3c03003c
    ctx->pc = 0x2832a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2832a8: 0x2402ffff
    ctx->pc = 0x2832a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2832ac: 0xac623b14
    ctx->pc = 0x2832acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15124), GPR_U32(ctx, 2));
    // 0x2832b0: 0x3c02003c
    ctx->pc = 0x2832b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2832b4: 0xac403b18
    ctx->pc = 0x2832b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15128), GPR_U32(ctx, 0));
    // 0x2832b8: 0x3c02003c
    ctx->pc = 0x2832b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2832bc: 0xc089994
    ctx->pc = 0x2832BCu;
    SET_GPR_U32(ctx, 31, 0x2832C4u);
    ctx->pc = 0x2832C0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15168), GPR_U32(ctx, 0));
    ctx->pc = 0x226650u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMBMem_0x226650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2832C4u; }
    }
    if (ctx->pc != 0x2832C4u) { return; }
    ctx->pc = 0x2832C4u;
    // 0x2832c4: 0x3c020035
    ctx->pc = 0x2832c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2832c8: 0x8c429ba8
    ctx->pc = 0x2832c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941608)));
    // 0x2832cc: 0xdfbf00b0
    ctx->pc = 0x2832ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2832d0: 0xdfbe00a0
    ctx->pc = 0x2832d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2832d4: 0xdfb70090
    ctx->pc = 0x2832d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2832d8: 0xdfb60080
    ctx->pc = 0x2832d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2832dc: 0xdfb50070
    ctx->pc = 0x2832dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2832e0: 0xdfb40060
    ctx->pc = 0x2832e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2832e4: 0xdfb30050
    ctx->pc = 0x2832e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2832e8: 0xdfb20040
    ctx->pc = 0x2832e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2832ec: 0xdfb10030
    ctx->pc = 0x2832ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2832f0: 0xdfb00020
    ctx->pc = 0x2832f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2832f4: 0x3e00008
    ctx->pc = 0x2832F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2832F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2830C0u: goto label_2830c0;
            case 0x2830DCu: goto label_2830dc;
            case 0x283150u: goto label_283150;
            case 0x283188u: goto label_283188;
            case 0x283240u: goto label_283240;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2832FCu;
}
