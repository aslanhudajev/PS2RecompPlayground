#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ipuVdec
// Address: 0x2f24c0 - 0x2f2674
void _ipuVdec_0x2f24c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f24c0u;

    // 0x2f24c0: 0x27bdff80
    ctx->pc = 0x2f24c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f24c4: 0x3c021000
    ctx->pc = 0x2f24c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f24c8: 0xffb10010
    ctx->pc = 0x2f24c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f24cc: 0x34422010
    ctx->pc = 0x2f24ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x2f24d0: 0xffbf0070
    ctx->pc = 0x2f24d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f24d4: 0x3c058000
    ctx->pc = 0x2f24d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x2f24d8: 0xffb60060
    ctx->pc = 0x2f24d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2f24dc: 0x34a54000
    ctx->pc = 0x2f24dcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16384));
    // 0x2f24e0: 0xffb50050
    ctx->pc = 0x2f24e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f24e4: 0x882d
    ctx->pc = 0x2f24e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f24e8: 0xffb40040
    ctx->pc = 0x2f24e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f24ec: 0x302d
    ctx->pc = 0x2f24ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f24f0: 0xffb30030
    ctx->pc = 0x2f24f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f24f4: 0xffb20020
    ctx->pc = 0x2f24f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f24f8: 0xffb00000
    ctx->pc = 0x2f24f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f24fc: 0x8c430000
    ctx->pc = 0x2f24fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2500: 0x3c028000
    ctx->pc = 0x2f2500u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x2f2504: 0x651824
    ctx->pc = 0x2f2504u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f2508: 0x1462001a
    ctx->pc = 0x2F2508u;
    {
        const bool branch_taken_0x2f2508 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F250Cu;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 4), 26));
        if (branch_taken_0x2f2508) {
            ctx->pc = 0x2F2574u;
            goto label_2f2574;
        }
    }
    ctx->pc = 0x2F2510u;
    // 0x2f2510: 0x3c13003a
    ctx->pc = 0x2f2510u;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x2f2514: 0x3c12003a
    ctx->pc = 0x2f2514u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2f2518: 0x3c15003a
    ctx->pc = 0x2f2518u;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
    // 0x2f251c: 0x3c14003a
    ctx->pc = 0x2f251cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2f2520: 0x3c16003a
    ctx->pc = 0x2f2520u;
    SET_GPR_U32(ctx, 22, ((uint32_t)58 << 16));
    // 0x2f2524: 0x0
    ctx->pc = 0x2f2524u;
    // NOP
label_2f2528:
    // 0x2f2528: 0xc0102d
    ctx->pc = 0x2f2528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f252c: 0x28421389
    ctx->pc = 0x2f252cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x2f2530: 0x14400005
    ctx->pc = 0x2F2530u;
    {
        const bool branch_taken_0x2f2530 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F2534u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x2f2530) {
            ctx->pc = 0x2F2548u;
            goto label_2f2548;
        }
    }
    ctx->pc = 0x2F2538u;
    // 0x2f2538: 0x3c02003a
    ctx->pc = 0x2f2538u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f253c: 0xc0bb848
    ctx->pc = 0x2F253Cu;
    SET_GPR_U32(ctx, 31, 0x2F2544u);
    ctx->pc = 0x2F2540u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12324)));
    ctx->pc = 0x2EE120u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x2ee120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2544u; }
    }
    if (ctx->pc != 0x2F2544u) { return; }
    ctx->pc = 0x2F2544u;
    // 0x2f2544: 0x302d
    ctx->pc = 0x2f2544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2548:
    // 0x2f2548: 0x3c031000
    ctx->pc = 0x2f2548u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f254c: 0x3c048000
    ctx->pc = 0x2f254cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x2f2550: 0x34632010
    ctx->pc = 0x2f2550u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x2f2554: 0x34844000
    ctx->pc = 0x2f2554u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 16384));
    // 0x2f2558: 0x8c620000
    ctx->pc = 0x2f2558u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2f255c: 0x3c058000
    ctx->pc = 0x2f255cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x2f2560: 0x441024
    ctx->pc = 0x2f2560u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f2564: 0x1045fff0
    ctx->pc = 0x2F2564u;
    {
        const bool branch_taken_0x2f2564 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x2F2568u;
        SET_GPR_U32(ctx, 3, ((uint32_t)12288 << 16));
        if (branch_taken_0x2f2564) {
            ctx->pc = 0x2F2528u;
            goto label_2f2528;
        }
    }
    ctx->pc = 0x2F256Cu;
    // 0x2f256c: 0x10000008
    ctx->pc = 0x2F256Cu;
    {
        const bool branch_taken_0x2f256c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F2570u;
        SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
        if (branch_taken_0x2f256c) {
            ctx->pc = 0x2F2590u;
            goto label_2f2590;
        }
    }
    ctx->pc = 0x2F2574u;
label_2f2574:
    // 0x2f2574: 0x3c13003a
    ctx->pc = 0x2f2574u;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x2f2578: 0x3c12003a
    ctx->pc = 0x2f2578u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2f257c: 0x3c15003a
    ctx->pc = 0x2f257cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
    // 0x2f2580: 0x3c14003a
    ctx->pc = 0x2f2580u;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2f2584: 0x3c16003a
    ctx->pc = 0x2f2584u;
    SET_GPR_U32(ctx, 22, ((uint32_t)58 << 16));
    // 0x2f2588: 0x3c033000
    ctx->pc = 0x2f2588u;
    SET_GPR_U32(ctx, 3, ((uint32_t)12288 << 16));
    // 0x2f258c: 0x3c041000
    ctx->pc = 0x2f258cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
label_2f2590:
    // 0x2f2590: 0x2031825
    ctx->pc = 0x2f2590u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2f2594: 0x34842000
    ctx->pc = 0x2f2594u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8192));
    // 0x2f2598: 0x31703
    ctx->pc = 0x2f2598u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 28));
    // 0x2f259c: 0xac830000
    ctx->pc = 0x2f259cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x2f25a0: 0x26453948
    ctx->pc = 0x2f25a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 14664));
    // 0x2f25a4: 0x21080
    ctx->pc = 0x2f25a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f25a8: 0x451021
    ctx->pc = 0x2f25a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f25ac: 0xdc860000
    ctx->pc = 0x2f25acu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f25b0: 0x8c430000
    ctx->pc = 0x2f25b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f25b4: 0x4c1000f
    ctx->pc = 0x2F25B4u;
    {
        const bool branch_taken_0x2f25b4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2F25B8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 12388), GPR_U32(ctx, 3));
        if (branch_taken_0x2f25b4) {
            ctx->pc = 0x2F25F4u;
            goto label_2f25f4;
        }
    }
    ctx->pc = 0x2F25BCu;
    // 0x2f25bc: 0x3c101000
    ctx->pc = 0x2f25bcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)4096 << 16));
    // 0x2f25c0: 0x3c12003a
    ctx->pc = 0x2f25c0u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2f25c4: 0x36102000
    ctx->pc = 0x2f25c4u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 8192));
    // 0x2f25c8: 0x220102d
    ctx->pc = 0x2f25c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f25cc: 0x0
    ctx->pc = 0x2f25ccu;
    // NOP
label_2f25d0:
    // 0x2f25d0: 0x28421389
    ctx->pc = 0x2f25d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x2f25d4: 0x14400004
    ctx->pc = 0x2F25D4u;
    {
        const bool branch_taken_0x2f25d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F25D8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2f25d4) {
            ctx->pc = 0x2F25E8u;
            goto label_2f25e8;
        }
    }
    ctx->pc = 0x2F25DCu;
    // 0x2f25dc: 0x8e443024
    ctx->pc = 0x2f25dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12324)));
    // 0x2f25e0: 0xc0bb848
    ctx->pc = 0x2F25E0u;
    SET_GPR_U32(ctx, 31, 0x2F25E8u);
    ctx->pc = 0x2F25E4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE120u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x2ee120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F25E8u; }
    }
    if (ctx->pc != 0x2F25E8u) { return; }
    ctx->pc = 0x2F25E8u;
label_2f25e8:
    // 0x2f25e8: 0xde060000
    ctx->pc = 0x2f25e8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f25ec: 0x4c0fff8
    ctx->pc = 0x2F25ECu;
    {
        const bool branch_taken_0x2f25ec = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2F25F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f25ec) {
            ctx->pc = 0x2F25D0u;
            goto label_2f25d0;
        }
    }
    ctx->pc = 0x2F25F4u;
label_2f25f4:
    // 0x2f25f4: 0x3c021000
    ctx->pc = 0x2f25f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f25f8: 0x3c041000
    ctx->pc = 0x2f25f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2f25fc: 0xdc842030
    ctx->pc = 0x2f25fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x2f2600: 0x34422020
    ctx->pc = 0x2f2600u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8224));
    // 0x2f2604: 0x8c420000
    ctx->pc = 0x2f2604u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2f2608: 0x4183c
    ctx->pc = 0x2f2608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2f260c: 0x3183f
    ctx->pc = 0x2f260cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2f2610: 0x4810005
    ctx->pc = 0x2F2610u;
    {
        const bool branch_taken_0x2f2610 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2F2614u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 14552), GPR_U32(ctx, 3));
        if (branch_taken_0x2f2610) {
            ctx->pc = 0x2F2628u;
            goto label_2f2628;
        }
    }
    ctx->pc = 0x2F2618u;
    // 0x2f2618: 0x3042001f
    ctx->pc = 0x2f2618u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 31));
    // 0x2f261c: 0x21023
    ctx->pc = 0x2f261cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2f2620: 0x10000002
    ctx->pc = 0x2F2620u;
    {
        const bool branch_taken_0x2f2620 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F2624u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 31));
        if (branch_taken_0x2f2620) {
            ctx->pc = 0x2F262Cu;
            goto label_2f262c;
        }
    }
    ctx->pc = 0x2F2628u;
label_2f2628:
    // 0x2f2628: 0x24020020
    ctx->pc = 0x2f2628u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_2f262c:
    // 0x2f262c: 0xae8238dc
    ctx->pc = 0x2f262cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 14556), GPR_U32(ctx, 2));
    // 0x2f2630: 0x6183c
    ctx->pc = 0x2f2630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2f2634: 0x3183f
    ctx->pc = 0x2f2634u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2f2638: 0x30c2ffff
    ctx->pc = 0x2f2638u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 65535));
    // 0x2f263c: 0x2c630001
    ctx->pc = 0x2f263cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 1));
    // 0x2f2640: 0x21400
    ctx->pc = 0x2f2640u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x2f2644: 0xaec33148
    ctx->pc = 0x2f2644u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12616), GPR_U32(ctx, 3));
    // 0x2f2648: 0x21403
    ctx->pc = 0x2f2648u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2f264c: 0xdfbf0070
    ctx->pc = 0x2f264cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f2650: 0xdfb60060
    ctx->pc = 0x2f2650u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f2654: 0xdfb50050
    ctx->pc = 0x2f2654u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2658: 0xdfb40040
    ctx->pc = 0x2f2658u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f265c: 0xdfb30030
    ctx->pc = 0x2f265cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2660: 0xdfb20020
    ctx->pc = 0x2f2660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2664: 0xdfb10010
    ctx->pc = 0x2f2664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2668: 0xdfb00000
    ctx->pc = 0x2f2668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f266c: 0x3e00008
    ctx->pc = 0x2F266Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2670u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F2528u: goto label_2f2528;
            case 0x2F2548u: goto label_2f2548;
            case 0x2F2574u: goto label_2f2574;
            case 0x2F2590u: goto label_2f2590;
            case 0x2F25D0u: goto label_2f25d0;
            case 0x2F25E8u: goto label_2f25e8;
            case 0x2F25F4u: goto label_2f25f4;
            case 0x2F2628u: goto label_2f2628;
            case 0x2F262Cu: goto label_2f262c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F2674u;
}
