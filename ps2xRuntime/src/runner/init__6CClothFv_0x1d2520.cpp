#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__6CClothFv
// Address: 0x1d2520 - 0x1d2780
void init__6CClothFv_0x1d2520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__6CClothFv");


    ctx->pc = 0x1d2520u;

    // 0x1d2520: 0x27bdff70
    ctx->pc = 0x1d2520u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d2524: 0x7fbf0080
    ctx->pc = 0x1d2524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x1d2528: 0x7fb70070
    ctx->pc = 0x1d2528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d252c: 0x7fb60060
    ctx->pc = 0x1d252cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d2530: 0x7fb50050
    ctx->pc = 0x1d2530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d2534: 0x7fb40040
    ctx->pc = 0x1d2534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d2538: 0x7fb30030
    ctx->pc = 0x1d2538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d253c: 0x7fb20020
    ctx->pc = 0x1d253cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d2540: 0x7fb10010
    ctx->pc = 0x1d2540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2544: 0x7fb00000
    ctx->pc = 0x1d2544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2548: 0x8c920000
    ctx->pc = 0x1d2548u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d254c: 0x8c87002c
    ctx->pc = 0x1d254cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1d2550: 0x24030001
    ctx->pc = 0x1d2550u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2554: 0x7080b628
    ctx->pc = 0x1d2554u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d2558: 0x70002e28
    ctx->pc = 0x1d2558u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d255c: 0x70004628
    ctx->pc = 0x1d255cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d2560: 0xa4830020
    ctx->pc = 0x1d2560u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d2564: 0x84910018
    ctx->pc = 0x1d2564u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1d2568: 0x8483001a
    ctx->pc = 0x1d2568u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x1d256c: 0x8c860000
    ctx->pc = 0x1d256cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d2570: 0x1000001b
    ctx->pc = 0x1D2570u;
    {
        const bool branch_taken_0x1d2570 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2574u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
        if (branch_taken_0x1d2570) {
            ctx->pc = 0x1D25E0u;
            goto label_1d25e0;
        }
    }
    ctx->pc = 0x1D2578u;
label_1d2578:
    // 0x1d2578: 0x8ec30014
    ctx->pc = 0x1d2578u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x1d257c: 0xc4e00000
    ctx->pc = 0x1d257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2580: 0x24a50001
    ctx->pc = 0x1d2580u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d2584: 0x681821
    ctx->pc = 0x1d2584u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1d2588: 0x84640000
    ctx->pc = 0x1d2588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d258c: 0x25080002
    ctx->pc = 0x1d258cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
    // 0x1d2590: 0x41880
    ctx->pc = 0x1d2590u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d2594: 0x641821
    ctx->pc = 0x1d2594u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2598: 0x31900
    ctx->pc = 0x1d2598u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d259c: 0xc31821
    ctx->pc = 0x1d259cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d25a0: 0xe4600018
    ctx->pc = 0x1d25a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1d25a4: 0xc4e00004
    ctx->pc = 0x1d25a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d25a8: 0xe460001c
    ctx->pc = 0x1d25a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x1d25ac: 0xc4e00008
    ctx->pc = 0x1d25acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d25b0: 0xe4600020
    ctx->pc = 0x1d25b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1d25b4: 0xc4600018
    ctx->pc = 0x1d25b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d25b8: 0x24e7000c
    ctx->pc = 0x1d25b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 12));
    // 0x1d25bc: 0xe4600024
    ctx->pc = 0x1d25bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1d25c0: 0xc460001c
    ctx->pc = 0x1d25c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d25c4: 0xe4600028
    ctx->pc = 0x1d25c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1d25c8: 0xc4600020
    ctx->pc = 0x1d25c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d25cc: 0xe460002c
    ctx->pc = 0x1d25ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x1d25d0: 0xac60003c
    ctx->pc = 0x1d25d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x1d25d4: 0xac600040
    ctx->pc = 0x1d25d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x1d25d8: 0xac600044
    ctx->pc = 0x1d25d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x1d25dc: 0x0
    ctx->pc = 0x1d25dcu;
    // NOP
label_1d25e0:
    // 0x1d25e0: 0x86c3000c
    ctx->pc = 0x1d25e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1d25e4: 0xa3182a
    ctx->pc = 0x1d25e4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x1d25e8: 0x1460ffe3
    ctx->pc = 0x1D25E8u;
    {
        const bool branch_taken_0x1d25e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D25ECu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
        if (branch_taken_0x1d25e8) {
            ctx->pc = 0x1D2578u;
            goto label_1d2578;
        }
    }
    ctx->pc = 0x1D25F0u;
    // 0x1d25f0: 0x10200025
    ctx->pc = 0x1D25F0u;
    {
        const bool branch_taken_0x1d25f0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D25F4u;
        SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d25f0) {
            ctx->pc = 0x1D2688u;
            goto label_1d2688;
        }
    }
    ctx->pc = 0x1D25F8u;
    // 0x1d25f8: 0x171880
    ctx->pc = 0x1d25f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 23), 2));
label_1d25fc:
    // 0x1d25fc: 0x771821
    ctx->pc = 0x1d25fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x1d2600: 0x31900
    ctx->pc = 0x1d2600u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2604: 0x243a021
    ctx->pc = 0x1d2604u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1d2608: 0x2f11821
    ctx->pc = 0x1d2608u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x1d260c: 0x72e09e28
    ctx->pc = 0x1d260cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1d2610: 0x10000015
    ctx->pc = 0x1D2610u;
    {
        const bool branch_taken_0x1d2610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2614u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 4294967295));
        if (branch_taken_0x1d2610) {
            ctx->pc = 0x1D2668u;
            goto label_1d2668;
        }
    }
    ctx->pc = 0x1D2618u;
label_1d2618:
    // 0x1d2618: 0xc683001c
    ctx->pc = 0x1d2618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d261c: 0xc682006c
    ctx->pc = 0x1d261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d2620: 0xc6850018
    ctx->pc = 0x1d2620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1d2624: 0xc6840068
    ctx->pc = 0x1d2624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d2628: 0xc6810020
    ctx->pc = 0x1d2628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d262c: 0xc6800070
    ctx->pc = 0x1d262cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2630: 0x46021881
    ctx->pc = 0x1d2630u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1d2634: 0x460008c1
    ctx->pc = 0x1d2634u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d2638: 0x46042901
    ctx->pc = 0x1d2638u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1d263c: 0x46042042
    ctx->pc = 0x1d263cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1d2640: 0x46021002
    ctx->pc = 0x1d2640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1d2644: 0x46000818
    ctx->pc = 0x1d2644u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d2648: 0xc06c2a8
    ctx->pc = 0x1D2648u;
    SET_GPR_U32(ctx, 31, 0x1D2650u);
    ctx->pc = 0x1D264Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2650u; }
        else if (ctx->pc != 0x1D2650u) { ctx->pc = 0x1D2650u; }
    }
    if (ctx->pc != 0x1D2650u) { return; }
    ctx->pc = 0x1D2650u;
    // 0x1d2650: 0xc6c10060
    ctx->pc = 0x1d2650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d2654: 0x26730001
    ctx->pc = 0x1d2654u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d2658: 0x46010002
    ctx->pc = 0x1d2658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d265c: 0xe6800048
    ctx->pc = 0x1d265cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
    // 0x1d2660: 0x26940050
    ctx->pc = 0x1d2660u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 80));
    // 0x1d2664: 0x0
    ctx->pc = 0x1d2664u;
    // NOP
label_1d2668:
    // 0x1d2668: 0x275182a
    ctx->pc = 0x1d2668u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 21)));
    // 0x1d266c: 0x1460ffea
    ctx->pc = 0x1D266Cu;
    {
        const bool branch_taken_0x1d266c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d266c) {
            ctx->pc = 0x1D2618u;
            goto label_1d2618;
        }
    }
    ctx->pc = 0x1D2674u;
    // 0x1d2674: 0x2f1b821
    ctx->pc = 0x1d2674u;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x1d2678: 0x2f0182a
    ctx->pc = 0x1d2678u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 16)));
    // 0x1d267c: 0x1460ffdf
    ctx->pc = 0x1D267Cu;
    {
        const bool branch_taken_0x1d267c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2680u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 23), 2));
        if (branch_taken_0x1d267c) {
            ctx->pc = 0x1D25FCu;
            goto label_1d25fc;
        }
    }
    ctx->pc = 0x1D2684u;
    // 0x1d2684: 0x0
    ctx->pc = 0x1d2684u;
    // NOP
label_1d2688:
    // 0x1d2688: 0x10082a
    ctx->pc = 0x1d2688u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
    // 0x1d268c: 0x1020002c
    ctx->pc = 0x1D268Cu;
    {
        const bool branch_taken_0x1d268c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2690u;
        SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d268c) {
            ctx->pc = 0x1D2740u;
            goto label_1d2740;
        }
    }
    ctx->pc = 0x1D2694u;
    // 0x1d2694: 0x171880
    ctx->pc = 0x1d2694u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 23), 2));
label_1d2698:
    // 0x1d2698: 0x771821
    ctx->pc = 0x1d2698u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x1d269c: 0x31900
    ctx->pc = 0x1d269cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d26a0: 0x72e0ae28
    ctx->pc = 0x1d26a0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1d26a4: 0x2439821
    ctx->pc = 0x1d26a4u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1d26a8: 0x1000001d
    ctx->pc = 0x1D26A8u;
    {
        const bool branch_taken_0x1d26a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D26ACu;
        SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        if (branch_taken_0x1d26a8) {
            ctx->pc = 0x1D2720u;
            goto label_1d2720;
        }
    }
    ctx->pc = 0x1D26B0u;
    // 0x1d26b0: 0x2b11021
    ctx->pc = 0x1d26b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_1d26b4:
    // 0x1d26b4: 0x16000002
    ctx->pc = 0x1D26B4u;
    {
        const bool branch_taken_0x1d26b4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D26B8u;
        { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1d26b4) {
            ctx->pc = 0x1D26C0u;
            goto label_1d26c0;
        }
    }
    ctx->pc = 0x1D26BCu;
    // 0x1d26bc: 0x1cd
    ctx->pc = 0x1d26bcu;
    runtime->handleBreak(rdram, ctx);
label_1d26c0:
    // 0x1d26c0: 0x1810
    ctx->pc = 0x1d26c0u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x1d26c4: 0xc663001c
    ctx->pc = 0x1d26c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d26c8: 0xc6640018
    ctx->pc = 0x1d26c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d26cc: 0x31080
    ctx->pc = 0x1d26ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d26d0: 0x431021
    ctx->pc = 0x1d26d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d26d4: 0x21100
    ctx->pc = 0x1d26d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d26d8: 0x2421021
    ctx->pc = 0x1d26d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d26dc: 0xc442001c
    ctx->pc = 0x1d26dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d26e0: 0xc4450018
    ctx->pc = 0x1d26e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1d26e4: 0xc4400020
    ctx->pc = 0x1d26e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d26e8: 0xc6610020
    ctx->pc = 0x1d26e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d26ec: 0x46021881
    ctx->pc = 0x1d26ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1d26f0: 0x460008c1
    ctx->pc = 0x1d26f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d26f4: 0x46052101
    ctx->pc = 0x1d26f4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x1d26f8: 0x46042042
    ctx->pc = 0x1d26f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1d26fc: 0x46021002
    ctx->pc = 0x1d26fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1d2700: 0x46000818
    ctx->pc = 0x1d2700u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d2704: 0xc06c2a8
    ctx->pc = 0x1D2704u;
    SET_GPR_U32(ctx, 31, 0x1D270Cu);
    ctx->pc = 0x1D2708u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D270Cu; }
        else if (ctx->pc != 0x1D270Cu) { ctx->pc = 0x1D270Cu; }
    }
    if (ctx->pc != 0x1D270Cu) { return; }
    ctx->pc = 0x1D270Cu;
    // 0x1d270c: 0xc6c10060
    ctx->pc = 0x1d270cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d2710: 0x26b50001
    ctx->pc = 0x1d2710u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    // 0x1d2714: 0x46010002
    ctx->pc = 0x1d2714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d2718: 0xe660004c
    ctx->pc = 0x1d2718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
    // 0x1d271c: 0x26730050
    ctx->pc = 0x1d271cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 80));
label_1d2720:
    // 0x1d2720: 0x2b4182a
    ctx->pc = 0x1d2720u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 20)));
    // 0x1d2724: 0x5460ffe3
    ctx->pc = 0x1D2724u;
    {
        const bool branch_taken_0x1d2724 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d2724) {
            ctx->pc = 0x1D2728u;
            SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
            ctx->pc = 0x1D26B4u;
            goto label_1d26b4;
        }
    }
    ctx->pc = 0x1D272Cu;
    // 0x1d272c: 0x2f1b821
    ctx->pc = 0x1d272cu;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x1d2730: 0x2f0182a
    ctx->pc = 0x1d2730u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 16)));
    // 0x1d2734: 0x1460ffd8
    ctx->pc = 0x1D2734u;
    {
        const bool branch_taken_0x1d2734 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2738u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 23), 2));
        if (branch_taken_0x1d2734) {
            ctx->pc = 0x1D2698u;
            goto label_1d2698;
        }
    }
    ctx->pc = 0x1D273Cu;
    // 0x1d273c: 0x0
    ctx->pc = 0x1d273cu;
    // NOP
label_1d2740:
    // 0x1d2740: 0x3c033d75
    ctx->pc = 0x1d2740u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15733 << 16));
    // 0x1d2744: 0x3463c28f
    ctx->pc = 0x1d2744u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49807));
    // 0x1d2748: 0xaec30050
    ctx->pc = 0x1d2748u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 80), GPR_U32(ctx, 3));
    // 0x1d274c: 0xaec00054
    ctx->pc = 0x1d274cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 84), GPR_U32(ctx, 0));
    // 0x1d2750: 0xaec00058
    ctx->pc = 0x1d2750u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 88), GPR_U32(ctx, 0));
    // 0x1d2754: 0x7bbf0080
    ctx->pc = 0x1d2754u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d2758: 0x7bb70070
    ctx->pc = 0x1d2758u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d275c: 0x7bb60060
    ctx->pc = 0x1d275cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d2760: 0x7bb50050
    ctx->pc = 0x1d2760u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d2764: 0x7bb40040
    ctx->pc = 0x1d2764u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2768: 0x7bb30030
    ctx->pc = 0x1d2768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d276c: 0x7bb20020
    ctx->pc = 0x1d276cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2770: 0x7bb10010
    ctx->pc = 0x1d2770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2774: 0x7bb00000
    ctx->pc = 0x1d2774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2778: 0x3e00008
    ctx->pc = 0x1D2778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D277Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2578u: goto label_1d2578;
            case 0x1D25E0u: goto label_1d25e0;
            case 0x1D25FCu: goto label_1d25fc;
            case 0x1D2618u: goto label_1d2618;
            case 0x1D2668u: goto label_1d2668;
            case 0x1D2688u: goto label_1d2688;
            case 0x1D2698u: goto label_1d2698;
            case 0x1D26B4u: goto label_1d26b4;
            case 0x1D26C0u: goto label_1d26c0;
            case 0x1D2720u: goto label_1d2720;
            case 0x1D2740u: goto label_1d2740;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2780u;
}
