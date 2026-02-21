#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cstdio>

// Function: pbPageEnd
// Address: 0x2a8440 - 0x2a85c8
void pbPageEnd_0x2a8440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    static int _pbPageEnd_count = 0;
    ++_pbPageEnd_count;

    ctx->pc = 0x2a8440u;

    printf("[pbPageEnd #%d] ENTRY  a0=0x%x  ra=0x%x  sp=0x%x  (flushes texture DMA / ends texture page)\n",
        _pbPageEnd_count, GPR_U32(ctx, 4), GPR_U32(ctx, 31), GPR_U32(ctx, 29));

    // 0x2a8440: 0x27bdffd0
    ctx->pc = 0x2a8440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a8444: 0xffbf0020
    ctx->pc = 0x2a8444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a8448: 0xffbe0010
    ctx->pc = 0x2a8448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2a844c: 0x3a0f02d
    ctx->pc = 0x2a844cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8450: 0xafc40000
    ctx->pc = 0x2a8450u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a8454: 0x0
    ctx->pc = 0x2a8454u;
    // NOP
label_2a8458:
    // 0x2a8458: 0x42000039
    ctx->pc = 0x2a8458u;
    ctx->cop0_status &= ~0x10000; // DI: clear EIE (R5900)
    // 0x2a845c: 0x40f
    ctx->pc = 0x2a845cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2a8460: 0x40026000
    ctx->pc = 0x2a8460u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x2a8464: 0x40182d
    ctx->pc = 0x2a8464u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8468: 0xafc30004
    ctx->pc = 0x2a8468u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x2a846c: 0x8fc20004
    ctx->pc = 0x2a846cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a8470: 0x3c030001
    ctx->pc = 0x2a8470u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x2a8474: 0x431024
    ctx->pc = 0x2a8474u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a8478: 0x14400003
    ctx->pc = 0x2A8478u;
    {
        const bool branch_taken_0x2a8478 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a8478) {
            ctx->pc = 0x2A8488u;
            goto label_2a8488;
        }
    }
    ctx->pc = 0x2A8480u;
    // 0x2a8480: 0x10000003
    ctx->pc = 0x2A8480u;
    {
        const bool branch_taken_0x2a8480 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8480) {
            ctx->pc = 0x2A8490u;
            goto label_2a8490;
        }
    }
    ctx->pc = 0x2A8488u;
label_2a8488:
    // 0x2a8488: 0x1000fff3
    ctx->pc = 0x2A8488u;
    {
        const bool branch_taken_0x2a8488 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8488) {
            ctx->pc = 0x2A8458u;
            goto label_2a8458;
        }
    }
    ctx->pc = 0x2A8490u;
label_2a8490:
    // 0x2a8490: 0x3c040037
    ctx->pc = 0x2a8490u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2a8494: 0x8c842940
    ctx->pc = 0x2a8494u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 10560)));
    // 0x2a8498: 0xc0b0142
    ctx->pc = 0x2A8498u;
    SET_GPR_U32(ctx, 31, 0x2A84A0u);
    ctx->pc = 0x2C0508u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbTexDmaEnd_0x2c0508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A84A0u; }
    }
    if (ctx->pc != 0x2A84A0u) { return; }
    ctx->pc = 0x2A84A0u;
    // 0x2a84a0: 0x3c040037
    ctx->pc = 0x2a84a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2a84a4: 0x8c842940
    ctx->pc = 0x2a84a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 10560)));
    // 0x2a84a8: 0xc0b01a6
    ctx->pc = 0x2A84A8u;
    SET_GPR_U32(ctx, 31, 0x2A84B0u);
    ctx->pc = 0x2C0698u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbObjDmaEnd_0x2c0698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A84B0u; }
    }
    if (ctx->pc != 0x2A84B0u) { return; }
    ctx->pc = 0x2A84B0u;
    // 0x2a84b0: 0x3c020037
    ctx->pc = 0x2a84b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a84b4: 0x8c422940
    ctx->pc = 0x2a84b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10560)));
    // 0x2a84b8: 0x3c010037
    ctx->pc = 0x2a84b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2a84bc: 0xac222948
    ctx->pc = 0x2a84bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10568), GPR_U32(ctx, 2));
    // 0x2a84c0: 0x42000038
    ctx->pc = 0x2a84c0u;
    ctx->cop0_status |= 0x10000; // EI: set EIE (R5900)
    // 0x2a84c4: 0xc0b04c0
    ctx->pc = 0x2A84C4u;
    SET_GPR_U32(ctx, 31, 0x2A84CCu);
    ctx->pc = 0x2C1300u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbBlitNewPage_0x2c1300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A84CCu; }
    }
    if (ctx->pc != 0x2A84CCu) { return; }
    ctx->pc = 0x2A84CCu;
    // 0x2a84cc: 0xc0aff06
    ctx->pc = 0x2A84CCu;
    SET_GPR_U32(ctx, 31, 0x2A84D4u);
    ctx->pc = 0x2BFC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetDORegs_0x2bfc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A84D4u; }
    }
    if (ctx->pc != 0x2A84D4u) { return; }
    ctx->pc = 0x2A84D4u;
    // 0x2a84d4: 0x202d
    ctx->pc = 0x2a84d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a84d8: 0xc0aa208
    ctx->pc = 0x2A84D8u;
    SET_GPR_U32(ctx, 31, 0x2A84E0u);
    ctx->pc = 0x2A8820u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaPageHandler_0x2a8820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A84E0u; }
    }
    if (ctx->pc != 0x2A84E0u) { return; }
    ctx->pc = 0x2A84E0u;
    // 0x2a84e0: 0x3c020037
    ctx->pc = 0x2a84e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a84e4: 0x8c4280c4
    ctx->pc = 0x2a84e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294934724)));
    // 0x2a84e8: 0x10400005
    ctx->pc = 0x2A84E8u;
    {
        const bool branch_taken_0x2a84e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a84e8) {
            ctx->pc = 0x2A8500u;
            goto label_2a8500;
        }
    }
    ctx->pc = 0x2A84F0u;
    // 0x2a84f0: 0x202d
    ctx->pc = 0x2a84f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a84f4: 0x282d
    ctx->pc = 0x2a84f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a84f8: 0xc0b8338
    ctx->pc = 0x2A84F8u;
    SET_GPR_U32(ctx, 31, 0x2A8500u);
    ctx->pc = 0x2E0CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x2e0ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8500u; }
    }
    if (ctx->pc != 0x2A8500u) { return; }
    ctx->pc = 0x2A8500u;
label_2a8500:
    // 0x2a8500: 0xc0aa226
    ctx->pc = 0x2A8500u;
    SET_GPR_U32(ctx, 31, 0x2A8508u);
    ctx->pc = 0x2A8898u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbNextTexPage_0x2a8898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8508u; }
    }
    if (ctx->pc != 0x2A8508u) { return; }
    ctx->pc = 0x2A8508u;
    // 0x2a8508: 0x3c020037
    ctx->pc = 0x2a8508u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a850c: 0x8c422940
    ctx->pc = 0x2a850cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10560)));
    // 0x2a8510: 0x24430001
    ctx->pc = 0x2a8510u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a8514: 0x3c010037
    ctx->pc = 0x2a8514u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2a8518: 0xac232940
    ctx->pc = 0x2a8518u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10560), GPR_U32(ctx, 3));
    // 0x2a851c: 0x3c020037
    ctx->pc = 0x2a851cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a8520: 0x8c422940
    ctx->pc = 0x2a8520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10560)));
    // 0x2a8524: 0x3c030037
    ctx->pc = 0x2a8524u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a8528: 0x8c632944
    ctx->pc = 0x2a8528u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10564)));
    // 0x2a852c: 0x62102a
    ctx->pc = 0x2a852cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2a8530: 0x10400005
    ctx->pc = 0x2A8530u;
    {
        const bool branch_taken_0x2a8530 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8530) {
            ctx->pc = 0x2A8548u;
            goto label_2a8548;
        }
    }
    ctx->pc = 0x2A8538u;
    // 0x2a8538: 0x3c020037
    ctx->pc = 0x2a8538u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a853c: 0x8c422940
    ctx->pc = 0x2a853cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10560)));
    // 0x2a8540: 0x3c010037
    ctx->pc = 0x2a8540u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2a8544: 0xac222944
    ctx->pc = 0x2a8544u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10564), GPR_U32(ctx, 2));
label_2a8548:
    // 0x2a8548: 0x3c020037
    ctx->pc = 0x2a8548u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a854c: 0x8c422940
    ctx->pc = 0x2a854cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10560)));
    // 0x2a8550: 0x40182d
    ctx->pc = 0x2a8550u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8554: 0x31080
    ctx->pc = 0x2a8554u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a8558: 0x3c030037
    ctx->pc = 0x2a8558u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a855c: 0x24632990
    ctx->pc = 0x2a855cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 10640));
    // 0x2a8560: 0x621021
    ctx->pc = 0x2a8560u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a8564: 0x3c030037
    ctx->pc = 0x2a8564u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a8568: 0x8c63295c
    ctx->pc = 0x2a8568u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10588)));
    // 0x2a856c: 0xac430000
    ctx->pc = 0x2a856cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a8570: 0x3c020037
    ctx->pc = 0x2a8570u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a8574: 0x8c422940
    ctx->pc = 0x2a8574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10560)));
    // 0x2a8578: 0x40182d
    ctx->pc = 0x2a8578u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a857c: 0x31080
    ctx->pc = 0x2a857cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a8580: 0x3c030037
    ctx->pc = 0x2a8580u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a8584: 0x24632d90
    ctx->pc = 0x2a8584u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11664));
    // 0x2a8588: 0x621021
    ctx->pc = 0x2a8588u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a858c: 0x3c030037
    ctx->pc = 0x2a858cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a8590: 0x8c632970
    ctx->pc = 0x2a8590u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10608)));
    // 0x2a8594: 0xac430000
    ctx->pc = 0x2a8594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a8598: 0x8fc20000
    ctx->pc = 0x2a8598u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a859c: 0x10400004
    ctx->pc = 0x2A859Cu;
    {
        const bool branch_taken_0x2a859c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a859c) {
            ctx->pc = 0x2A85B0u;
            goto label_2a85b0;
        }
    }
    ctx->pc = 0x2A85A4u;
    // 0x2a85a4: 0x24020001
    ctx->pc = 0x2a85a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a85a8: 0x3c010037
    ctx->pc = 0x2a85a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2a85ac: 0xac22293c
    ctx->pc = 0x2a85acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10556), GPR_U32(ctx, 2));
label_2a85b0:
    // 0x2a85b0: 0x3c0e82d
    ctx->pc = 0x2a85b0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85b4: 0xdfbf0020
    ctx->pc = 0x2a85b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a85b8: 0xdfbe0010
    ctx->pc = 0x2a85b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a85bc: 0x27bd0030
    ctx->pc = 0x2a85bcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a85c0: 0x3e00008
    ctx->pc = 0x2A85C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A8458u: goto label_2a8458;
            case 0x2A8488u: goto label_2a8488;
            case 0x2A8490u: goto label_2a8490;
            case 0x2A8500u: goto label_2a8500;
            case 0x2A8548u: goto label_2a8548;
            case 0x2A85B0u: goto label_2a85b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A85C8u;
}
