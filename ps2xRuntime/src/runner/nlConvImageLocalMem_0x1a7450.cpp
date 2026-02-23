#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlConvImageLocalMem
// Address: 0x1a7450 - 0x1a7710
void nlConvImageLocalMem_0x1a7450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlConvImageLocalMem");


    ctx->pc = 0x1a7450u;

    // 0x1a7450: 0x27bdfcb0
    ctx->pc = 0x1a7450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966448));
    // 0x1a7454: 0x7fbf0040
    ctx->pc = 0x1a7454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1a7458: 0x7fb30030
    ctx->pc = 0x1a7458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a745c: 0x7fb20020
    ctx->pc = 0x1a745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a7460: 0x7fb10010
    ctx->pc = 0x1a7460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a7464: 0x70808e28
    ctx->pc = 0x1a7464u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a7468: 0x70a09e28
    ctx->pc = 0x1a7468u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a746c: 0xc069558
    ctx->pc = 0x1A746Cu;
    SET_GPR_U32(ctx, 31, 0x1A7474u);
    ctx->pc = 0x1A7470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A5560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoStat_0x1a5560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7474u; }
        else if (ctx->pc != 0x1A7474u) { ctx->pc = 0x1A7474u; }
    }
    if (ctx->pc != 0x1A7474u) { return; }
    ctx->pc = 0x1A7474u;
    // 0x1a7474: 0x70408628
    ctx->pc = 0x1a7474u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7478: 0x27a20050
    ctx->pc = 0x1a7478u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a747c: 0xafa20290
    ctx->pc = 0x1a747cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
    // 0x1a7480: 0x86640008
    ctx->pc = 0x1a7480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a7484: 0x24030001
    ctx->pc = 0x1a7484u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7488: 0x24020002
    ctx->pc = 0x1a7488u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a748c: 0xa7a40294
    ctx->pc = 0x1a748cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 660), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a7490: 0x86640006
    ctx->pc = 0x1a7490u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1a7494: 0x42180
    ctx->pc = 0x1a7494u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 6));
    // 0x1a7498: 0xa7a40296
    ctx->pc = 0x1a7498u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 662), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a749c: 0x86640010
    ctx->pc = 0x1a749cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1a74a0: 0xa7a40298
    ctx->pc = 0x1a74a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 664), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a74a4: 0xa7a3029a
    ctx->pc = 0x1a74a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 666), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a74a8: 0x86630008
    ctx->pc = 0x1a74a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a74ac: 0x10620005
    ctx->pc = 0x1A74ACu;
    {
        const bool branch_taken_0x1a74ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A74B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
        if (branch_taken_0x1a74ac) {
            ctx->pc = 0x1A74C4u;
            goto label_1a74c4;
        }
    }
    ctx->pc = 0x1A74B4u;
    // 0x1a74b4: 0x24020032
    ctx->pc = 0x1a74b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
    // 0x1a74b8: 0x14620004
    ctx->pc = 0x1A74B8u;
    {
        const bool branch_taken_0x1a74b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1A74BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x1a74b8) {
            ctx->pc = 0x1A74CCu;
            goto label_1a74cc;
        }
    }
    ctx->pc = 0x1A74C0u;
    // 0x1a74c0: 0x24020032
    ctx->pc = 0x1a74c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
label_1a74c4:
    // 0x1a74c4: 0x10000002
    ctx->pc = 0x1A74C4u;
    {
        const bool branch_taken_0x1a74c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A74C8u;
        WRITE16(ADD32(GPR_U32(ctx, 29), 668), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1a74c4) {
            ctx->pc = 0x1A74D0u;
            goto label_1a74d0;
        }
    }
    ctx->pc = 0x1A74CCu;
label_1a74cc:
    // 0x1a74cc: 0xa7a2029c
    ctx->pc = 0x1a74ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 668), (uint16_t)GPR_U32(ctx, 2));
label_1a74d0:
    // 0x1a74d0: 0x86630004
    ctx->pc = 0x1a74d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1a74d4: 0x2402ffff
    ctx->pc = 0x1a74d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a74d8: 0x27a40290
    ctx->pc = 0x1a74d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 656));
    // 0x1a74dc: 0x31a00
    ctx->pc = 0x1a74dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a74e0: 0xafa302a0
    ctx->pc = 0x1a74e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 3));
    // 0x1a74e4: 0xafa202a4
    ctx->pc = 0x1a74e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 2));
    // 0x1a74e8: 0xc06c44c
    ctx->pc = 0x1A74E8u;
    SET_GPR_U32(ctx, 31, 0x1A74F0u);
    ctx->pc = 0x1A74ECu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 0));
    ctx->pc = 0x1B1130u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRendtxCreateEnv_0x1b1130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74F0u; }
        else if (ctx->pc != 0x1A74F0u) { ctx->pc = 0x1A74F0u; }
    }
    if (ctx->pc != 0x1A74F0u) { return; }
    ctx->pc = 0x1A74F0u;
    // 0x1a74f0: 0x16000004
    ctx->pc = 0x1A74F0u;
    {
        const bool branch_taken_0x1a74f0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A74F4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
        if (branch_taken_0x1a74f0) {
            ctx->pc = 0x1A7504u;
            goto label_1a7504;
        }
    }
    ctx->pc = 0x1A74F8u;
    // 0x1a74f8: 0xc0694bc
    ctx->pc = 0x1A74F8u;
    SET_GPR_U32(ctx, 31, 0x1A7500u);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7500u; }
        else if (ctx->pc != 0x1A7500u) { ctx->pc = 0x1A7500u; }
    }
    if (ctx->pc != 0x1A7500u) { return; }
    ctx->pc = 0x1A7500u;
    // 0x1a7500: 0x27a40050
    ctx->pc = 0x1a7500u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
label_1a7504:
    // 0x1a7504: 0xc06bcc4
    ctx->pc = 0x1A7504u;
    SET_GPR_U32(ctx, 31, 0x1A750Cu);
    ctx->pc = 0x1A7508u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF310u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSysBeginScene_0x1af310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A750Cu; }
        else if (ctx->pc != 0x1A750Cu) { ctx->pc = 0x1A750Cu; }
    }
    if (ctx->pc != 0x1A750Cu) { return; }
    ctx->pc = 0x1A750Cu;
    // 0x1a750c: 0xc06bd64
    ctx->pc = 0x1A750Cu;
    SET_GPR_U32(ctx, 31, 0x1A7514u);
    ctx->pc = 0x1AF590u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSysEndScene_0x1af590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7514u; }
        else if (ctx->pc != 0x1A7514u) { ctx->pc = 0x1A7514u; }
    }
    if (ctx->pc != 0x1A7514u) { return; }
    ctx->pc = 0x1A7514u;
    // 0x1a7514: 0x1200000f
    ctx->pc = 0x1A7514u;
    {
        const bool branch_taken_0x1a7514 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7518u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a7514) {
            ctx->pc = 0x1A7554u;
            goto label_1a7554;
        }
    }
    ctx->pc = 0x1A751Cu;
    // 0x1a751c: 0xc069528
    ctx->pc = 0x1A751Cu;
    SET_GPR_U32(ctx, 31, 0x1A7524u);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7524u; }
        else if (ctx->pc != 0x1A7524u) { ctx->pc = 0x1A7524u; }
    }
    if (ctx->pc != 0x1A7524u) { return; }
    ctx->pc = 0x1A7524u;
    // 0x1a7524: 0x70409628
    ctx->pc = 0x1a7524u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1a7528:
    // 0x1a7528: 0x3c011001
    ctx->pc = 0x1a7528u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a752c: 0x8c22d000
    ctx->pc = 0x1a752cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1a7530: 0x30420100
    ctx->pc = 0x1a7530u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1a7534: 0x0
    ctx->pc = 0x1a7534u;
    // NOP
    // 0x1a7538: 0x0
    ctx->pc = 0x1a7538u;
    // NOP
    // 0x1a753c: 0x1440fffa
    ctx->pc = 0x1A753Cu;
    {
        const bool branch_taken_0x1a753c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a753c) {
            ctx->pc = 0x1A7528u;
            goto label_1a7528;
        }
    }
    ctx->pc = 0x1A7544u;
    // 0x1a7544: 0x3c021000
    ctx->pc = 0x1a7544u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1a7548: 0x34420009
    ctx->pc = 0x1a7548u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 9));
    // 0x1a754c: 0x10000007
    ctx->pc = 0x1A754Cu;
    {
        const bool branch_taken_0x1a754c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7550u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1a754c) {
            ctx->pc = 0x1A756Cu;
            goto label_1a756c;
        }
    }
    ctx->pc = 0x1A7554u;
label_1a7554:
    // 0x1a7554: 0xc0694e8
    ctx->pc = 0x1A7554u;
    SET_GPR_U32(ctx, 31, 0x1A755Cu);
    ctx->pc = 0x1A7558u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A755Cu; }
        else if (ctx->pc != 0x1A755Cu) { ctx->pc = 0x1A755Cu; }
    }
    if (ctx->pc != 0x1A755Cu) { return; }
    ctx->pc = 0x1A755Cu;
    // 0x1a755c: 0x3c027000
    ctx->pc = 0x1a755cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x1a7560: 0x34420009
    ctx->pc = 0x1a7560u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 9));
    // 0x1a7564: 0x27b202b0
    ctx->pc = 0x1a7564u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 688));
    // 0x1a7568: 0xafa202b0
    ctx->pc = 0x1a7568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 2));
label_1a756c:
    // 0x1a756c: 0x8666000a
    ctx->pc = 0x1a756cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x1a7570: 0x8fa90290
    ctx->pc = 0x1a7570u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a7574: 0x86620010
    ctx->pc = 0x1a7574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1a7578: 0x8665000c
    ctx->pc = 0x1a7578u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1a757c: 0x8664000e
    ctx->pc = 0x1a757cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1a7580: 0x8623000a
    ctx->pc = 0x1a7580u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1a7584: 0x63900
    ctx->pc = 0x1a7584u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a7588: 0x95280040
    ctx->pc = 0x1a7588u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x1a758c: 0x95260044
    ctx->pc = 0x1a758cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x1a7590: 0x25100
    ctx->pc = 0x1a7590u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7594: 0x862c000c
    ctx->pc = 0x1a7594u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a7598: 0x862b000e
    ctx->pc = 0x1a7598u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1a759c: 0x52900
    ctx->pc = 0x1a759cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a75a0: 0x1071021
    ctx->pc = 0x1a75a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1a75a4: 0x44900
    ctx->pc = 0x1a75a4u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a75a8: 0x493821
    ctx->pc = 0x1a75a8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1a75ac: 0x86290010
    ctx->pc = 0x1a75acu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a75b0: 0x32100
    ctx->pc = 0x1a75b0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a75b4: 0xc51821
    ctx->pc = 0x1a75b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a75b8: 0x3c08808b
    ctx->pc = 0x1a75b8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)32907 << 16));
    // 0x1a75bc: 0x6a3021
    ctx->pc = 0x1a75bcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1a75c0: 0x3c055100
    ctx->pc = 0x1a75c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)20736 << 16));
    // 0x1a75c4: 0x34aa0009
    ctx->pc = 0x1a75c4u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 5), 9));
    // 0x1a75c8: 0xae400004
    ctx->pc = 0x1a75c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1a75cc: 0xc2900
    ctx->pc = 0x1a75ccu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 12), 4));
    // 0x1a75d0: 0xae400008
    ctx->pc = 0x1a75d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1a75d4: 0xae4a000c
    ctx->pc = 0x1a75d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 10));
    // 0x1a75d8: 0xb6100
    ctx->pc = 0x1a75d8u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 11), 4));
    // 0x1a75dc: 0x35084000
    ctx->pc = 0x1a75dcu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 16384));
    // 0x1a75e0: 0x8583c
    ctx->pc = 0x1a75e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1a75e4: 0x340a8001
    ctx->pc = 0x1a75e4u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 0), 32769));
    // 0x1a75e8: 0x14b5025
    ctx->pc = 0x1a75e8u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1a75ec: 0xfe4a0010
    ctx->pc = 0x1a75ecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 10));
    // 0x1a75f0: 0x3c0a5351
    ctx->pc = 0x1a75f0u;
    SET_GPR_U32(ctx, 10, ((uint32_t)21329 << 16));
    // 0x1a75f4: 0x354a36ee
    ctx->pc = 0x1a75f4u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), 14062));
    // 0x1a75f8: 0xfe4a0018
    ctx->pc = 0x1a75f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 10));
    // 0x1a75fc: 0x3c0a0003
    ctx->pc = 0x1a75fcu;
    SET_GPR_U32(ctx, 10, ((uint32_t)3 << 16));
    // 0x1a7600: 0xfe4a0020
    ctx->pc = 0x1a7600u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 10));
    // 0x1a7604: 0x240a0047
    ctx->pc = 0x1a7604u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 71));
    // 0x1a7608: 0xfe4a0028
    ctx->pc = 0x1a7608u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 10));
    // 0x1a760c: 0x240a0001
    ctx->pc = 0x1a760cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7610: 0xfe4a0030
    ctx->pc = 0x1a7610u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 10));
    // 0x1a7614: 0x240a0014
    ctx->pc = 0x1a7614u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a7618: 0xfe4a0038
    ctx->pc = 0x1a7618u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 10));
    // 0x1a761c: 0x240a0080
    ctx->pc = 0x1a761cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a7620: 0xae4a0060
    ctx->pc = 0x1a7620u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 10));
    // 0x1a7624: 0xae4a0064
    ctx->pc = 0x1a7624u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 10));
    // 0x1a7628: 0xae4a0068
    ctx->pc = 0x1a7628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 10));
    // 0x1a762c: 0xae4a006c
    ctx->pc = 0x1a762cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 10));
    // 0x1a7630: 0x8c4021
    ctx->pc = 0x1a7630u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x1a7634: 0x96900
    ctx->pc = 0x1a7634u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 9), 4));
    // 0x1a7638: 0x25090008
    ctx->pc = 0x1a7638u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 8), 8));
    // 0x1a763c: 0xad4021
    ctx->pc = 0x1a763cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x1a7640: 0x240a0002
    ctx->pc = 0x1a7640u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7644: 0xa583c
    ctx->pc = 0x1a7644u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1a7648: 0x340aa800
    ctx->pc = 0x1a7648u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 0), 43008));
    // 0x1a764c: 0xa5438
    ctx->pc = 0x1a764cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1a7650: 0x862d0006
    ctx->pc = 0x1a7650u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1a7654: 0x14b5025
    ctx->pc = 0x1a7654u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1a7658: 0x862e0004
    ctx->pc = 0x1a7658u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a765c: 0x862c0008
    ctx->pc = 0x1a765cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a7660: 0x25080008
    ctx->pc = 0x1a7660u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 8));
    // 0x1a7664: 0xd5bb8
    ctx->pc = 0x1a7664u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) << 14);
    // 0x1a7668: 0x1cb6825
    ctx->pc = 0x1a7668u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x1a766c: 0xc5d38
    ctx->pc = 0x1a766cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 20);
    // 0x1a7670: 0x16d5825
    ctx->pc = 0x1a7670u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x1a7674: 0x16a5025
    ctx->pc = 0x1a7674u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1a7678: 0xfe4a0040
    ctx->pc = 0x1a7678u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 10));
    // 0x1a767c: 0xae440050
    ctx->pc = 0x1a767cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 4));
    // 0x1a7680: 0xae450054
    ctx->pc = 0x1a7680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 5));
    // 0x1a7684: 0xae490080
    ctx->pc = 0x1a7684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 9));
    // 0x1a7688: 0xae480084
    ctx->pc = 0x1a7688u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 8));
    // 0x1a768c: 0xae420070
    ctx->pc = 0x1a768cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x1a7690: 0xae430074
    ctx->pc = 0x1a7690u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
    // 0x1a7694: 0x2402ffff
    ctx->pc = 0x1a7694u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7698: 0xae420078
    ctx->pc = 0x1a7698u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    // 0x1a769c: 0xae470090
    ctx->pc = 0x1a769cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 7));
    // 0x1a76a0: 0xae460094
    ctx->pc = 0x1a76a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 6));
    // 0x1a76a4: 0x12000005
    ctx->pc = 0x1A76A4u;
    {
        const bool branch_taken_0x1a76a4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A76A8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
        if (branch_taken_0x1a76a4) {
            ctx->pc = 0x1A76BCu;
            goto label_1a76bc;
        }
    }
    ctx->pc = 0x1A76ACu;
    // 0x1a76ac: 0xc06952c
    ctx->pc = 0x1A76ACu;
    SET_GPR_U32(ctx, 31, 0x1A76B4u);
    ctx->pc = 0x1A76B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76B4u; }
        else if (ctx->pc != 0x1A76B4u) { ctx->pc = 0x1A76B4u; }
    }
    if (ctx->pc != 0x1A76B4u) { return; }
    ctx->pc = 0x1A76B4u;
    // 0x1a76b4: 0x10000010
    ctx->pc = 0x1A76B4u;
    {
        const bool branch_taken_0x1a76b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A76B8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1a76b4) {
            ctx->pc = 0x1A76F8u;
            goto label_1a76f8;
        }
    }
    ctx->pc = 0x1A76BCu;
label_1a76bc:
    // 0x1a76bc: 0x3c011001
    ctx->pc = 0x1a76bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a76c0: 0x8c229000
    ctx->pc = 0x1a76c0u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294938624))); // MMIO: 0x10009000
    // 0x1a76c4: 0x30420100
    ctx->pc = 0x1a76c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1a76c8: 0x0
    ctx->pc = 0x1a76c8u;
    // NOP
    // 0x1a76cc: 0x0
    ctx->pc = 0x1a76ccu;
    // NOP
    // 0x1a76d0: 0x1440fffa
    ctx->pc = 0x1A76D0u;
    {
        const bool branch_taken_0x1a76d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a76d0) {
            ctx->pc = 0x1A76BCu;
            goto label_1a76bc;
        }
    }
    ctx->pc = 0x1A76D8u;
    // 0x1a76d8: 0xc0552d8
    ctx->pc = 0x1A76D8u;
    SET_GPR_U32(ctx, 31, 0x1A76E0u);
    ctx->pc = 0x1A76DCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76E0u; }
        else if (ctx->pc != 0x1A76E0u) { ctx->pc = 0x1A76E0u; }
    }
    if (ctx->pc != 0x1A76E0u) { return; }
    ctx->pc = 0x1A76E0u;
    // 0x1a76e0: 0xc0547e4
    ctx->pc = 0x1A76E0u;
    SET_GPR_U32(ctx, 31, 0x1A76E8u);
    ctx->pc = 0x1A76E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x151F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x151f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76E8u; }
        else if (ctx->pc != 0x1A76E8u) { ctx->pc = 0x1A76E8u; }
    }
    if (ctx->pc != 0x1A76E8u) { return; }
    ctx->pc = 0x1A76E8u;
    // 0x1a76e8: 0x72402e28
    ctx->pc = 0x1a76e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a76ec: 0xc0548b8
    ctx->pc = 0x1A76ECu;
    SET_GPR_U32(ctx, 31, 0x1A76F4u);
    ctx->pc = 0x1A76F0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1522E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x1522e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76F4u; }
        else if (ctx->pc != 0x1A76F4u) { ctx->pc = 0x1A76F4u; }
    }
    if (ctx->pc != 0x1A76F4u) { return; }
    ctx->pc = 0x1A76F4u;
    // 0x1a76f4: 0x7bbf0040
    ctx->pc = 0x1a76f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a76f8:
    // 0x1a76f8: 0x7bb30030
    ctx->pc = 0x1a76f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a76fc: 0x7bb20020
    ctx->pc = 0x1a76fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7700: 0x7bb10010
    ctx->pc = 0x1a7700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7704: 0x7bb00000
    ctx->pc = 0x1a7704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7708: 0x3e00008
    ctx->pc = 0x1A7708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A770Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 848));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A74C4u: goto label_1a74c4;
            case 0x1A74CCu: goto label_1a74cc;
            case 0x1A74D0u: goto label_1a74d0;
            case 0x1A7504u: goto label_1a7504;
            case 0x1A7528u: goto label_1a7528;
            case 0x1A7554u: goto label_1a7554;
            case 0x1A756Cu: goto label_1a756c;
            case 0x1A76BCu: goto label_1a76bc;
            case 0x1A76F8u: goto label_1a76f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7710u;
}
