#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSysRestoreScene
// Address: 0x1b1340 - 0x1b1460
void nlSysRestoreScene_0x1b1340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSysRestoreScene");


    ctx->pc = 0x1b1340u;

    // 0x1b1340: 0x27bdffe0
    ctx->pc = 0x1b1340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1344: 0x7fbf0010
    ctx->pc = 0x1b1344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1b1348: 0x7fb00000
    ctx->pc = 0x1b1348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b134c: 0x70808628
    ctx->pc = 0x1b134cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1b1350: 0x3c020030
    ctx->pc = 0x1b1350u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1b1354: 0x26060010
    ctx->pc = 0x1b1354u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b1358: 0x24453c20
    ctx->pc = 0x1b1358u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 15392));
    // 0x1b135c: 0x24040008
    ctx->pc = 0x1b135cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_1b1360:
    // 0x1b1360: 0x78c30000
    ctx->pc = 0x1b1360u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b1364: 0x78c20010
    ctx->pc = 0x1b1364u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1b1368: 0x2484ffff
    ctx->pc = 0x1b1368u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1b136c: 0x7ca30000
    ctx->pc = 0x1b136cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1b1370: 0x7ca20010
    ctx->pc = 0x1b1370u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x1b1374: 0x24c60020
    ctx->pc = 0x1b1374u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
    // 0x1b1378: 0x1c80fff9
    ctx->pc = 0x1B1378u;
    {
        const bool branch_taken_0x1b1378 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1B137Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
        if (branch_taken_0x1b1378) {
            ctx->pc = 0x1B1360u;
            goto label_1b1360;
        }
    }
    ctx->pc = 0x1B1380u;
    // 0x1b1380: 0x3c020030
    ctx->pc = 0x1b1380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1b1384: 0x244455f0
    ctx->pc = 0x1b1384u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 22000));
    // 0x1b1388: 0xc069108
    ctx->pc = 0x1B1388u;
    SET_GPR_U32(ctx, 31, 0x1B1390u);
    ctx->pc = 0x1B138Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 272));
    ctx->pc = 0x1A4420u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlCopyMatrix_0x1a4420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1390u; }
        else if (ctx->pc != 0x1B1390u) { ctx->pc = 0x1B1390u; }
    }
    if (ctx->pc != 0x1B1390u) { return; }
    ctx->pc = 0x1B1390u;
    // 0x1b1390: 0x3c020030
    ctx->pc = 0x1b1390u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1b1394: 0x244455b0
    ctx->pc = 0x1b1394u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 21936));
    // 0x1b1398: 0xc069108
    ctx->pc = 0x1B1398u;
    SET_GPR_U32(ctx, 31, 0x1B13A0u);
    ctx->pc = 0x1B139Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 336));
    ctx->pc = 0x1A4420u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlCopyMatrix_0x1a4420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B13A0u; }
        else if (ctx->pc != 0x1B13A0u) { ctx->pc = 0x1B13A0u; }
    }
    if (ctx->pc != 0x1B13A0u) { return; }
    ctx->pc = 0x1B13A0u;
    // 0x1b13a0: 0xc6000190
    ctx->pc = 0x1b13a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b13a4: 0x3c020030
    ctx->pc = 0x1b13a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1b13a8: 0x24442160
    ctx->pc = 0x1b13a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8544));
    // 0x1b13ac: 0x2605019c
    ctx->pc = 0x1b13acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 412));
    // 0x1b13b0: 0x24060010
    ctx->pc = 0x1b13b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b13b4: 0xe7808a18
    ctx->pc = 0x1b13b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937112), bits); }
    // 0x1b13b8: 0xc6000194
    ctx->pc = 0x1b13b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b13bc: 0xe7808a14
    ctx->pc = 0x1b13bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937108), bits); }
    // 0x1b13c0: 0x82020198
    ctx->pc = 0x1b13c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x1b13c4: 0xc06ac24
    ctx->pc = 0x1B13C4u;
    SET_GPR_U32(ctx, 31, 0x1B13CCu);
    ctx->pc = 0x1B13C8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937004), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1AB090u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB090_0x1ab090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B13CCu; }
        else if (ctx->pc != 0x1B13CCu) { ctx->pc = 0x1B13CCu; }
    }
    if (ctx->pc != 0x1B13CCu) { return; }
    ctx->pc = 0x1B13CCu;
    // 0x1b13cc: 0x8605019a
    ctx->pc = 0x1b13ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 410)));
    // 0x1b13d0: 0xc06ac66
    ctx->pc = 0x1B13D0u;
    SET_GPR_U32(ctx, 31, 0x1B13D8u);
    ctx->pc = 0x1B13D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 480));
    ctx->pc = 0x1AB198u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB198_0x1ab198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B13D8u; }
        else if (ctx->pc != 0x1B13D8u) { ctx->pc = 0x1B13D8u; }
    }
    if (ctx->pc != 0x1B13D8u) { return; }
    ctx->pc = 0x1B13D8u;
    // 0x1b13d8: 0xc069558
    ctx->pc = 0x1B13D8u;
    SET_GPR_U32(ctx, 31, 0x1B13E0u);
    ctx->pc = 0x1A5560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoStat_0x1a5560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B13E0u; }
        else if (ctx->pc != 0x1B13E0u) { ctx->pc = 0x1B13E0u; }
    }
    if (ctx->pc != 0x1B13E0u) { return; }
    ctx->pc = 0x1B13E0u;
    // 0x1b13e0: 0x70408628
    ctx->pc = 0x1b13e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b13e4: 0x16000004
    ctx->pc = 0x1B13E4u;
    {
        const bool branch_taken_0x1b13e4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B13E8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1b13e4) {
            ctx->pc = 0x1B13F8u;
            goto label_1b13f8;
        }
    }
    ctx->pc = 0x1B13ECu;
    // 0x1b13ec: 0xc0694bc
    ctx->pc = 0x1B13ECu;
    SET_GPR_U32(ctx, 31, 0x1B13F4u);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B13F4u; }
        else if (ctx->pc != 0x1B13F4u) { ctx->pc = 0x1B13F4u; }
    }
    if (ctx->pc != 0x1B13F4u) { return; }
    ctx->pc = 0x1B13F4u;
    // 0x1b13f4: 0x70002628
    ctx->pc = 0x1b13f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b13f8:
    // 0x1b13f8: 0xc0552d8
    ctx->pc = 0x1B13F8u;
    SET_GPR_U32(ctx, 31, 0x1B1400u);
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1400u; }
        else if (ctx->pc != 0x1B1400u) { ctx->pc = 0x1B1400u; }
    }
    if (ctx->pc != 0x1B1400u) { return; }
    ctx->pc = 0x1B1400u;
    // 0x1b1400: 0xc069528
    ctx->pc = 0x1B1400u;
    SET_GPR_U32(ctx, 31, 0x1B1408u);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1408u; }
        else if (ctx->pc != 0x1B1408u) { ctx->pc = 0x1B1408u; }
    }
    if (ctx->pc != 0x1B1408u) { return; }
    ctx->pc = 0x1B1408u;
label_1b1408:
    // 0x1b1408: 0x3c011001
    ctx->pc = 0x1b1408u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1b140c: 0x8c23d000
    ctx->pc = 0x1b140cu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1b1410: 0x30630100
    ctx->pc = 0x1b1410u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1b1414: 0x0
    ctx->pc = 0x1b1414u;
    // NOP
    // 0x1b1418: 0x0
    ctx->pc = 0x1b1418u;
    // NOP
    // 0x1b141c: 0x1460fffa
    ctx->pc = 0x1B141Cu;
    {
        const bool branch_taken_0x1b141c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b141c) {
            ctx->pc = 0x1B1408u;
            goto label_1b1408;
        }
    }
    ctx->pc = 0x1B1424u;
    // 0x1b1424: 0x70402628
    ctx->pc = 0x1b1424u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b1428: 0x3c020030
    ctx->pc = 0x1b1428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1b142c: 0x24453c20
    ctx->pc = 0x1b142cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 15392));
    // 0x1b1430: 0xc06ac36
    ctx->pc = 0x1B1430u;
    SET_GPR_U32(ctx, 31, 0x1B1438u);
    ctx->pc = 0x1B1434u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1438u; }
        else if (ctx->pc != 0x1B1438u) { ctx->pc = 0x1B1438u; }
    }
    if (ctx->pc != 0x1B1438u) { return; }
    ctx->pc = 0x1B1438u;
    // 0x1b1438: 0xc06952c
    ctx->pc = 0x1B1438u;
    SET_GPR_U32(ctx, 31, 0x1B1440u);
    ctx->pc = 0x1B143Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1440u; }
        else if (ctx->pc != 0x1B1440u) { ctx->pc = 0x1B1440u; }
    }
    if (ctx->pc != 0x1B1440u) { return; }
    ctx->pc = 0x1B1440u;
    // 0x1b1440: 0x16000003
    ctx->pc = 0x1B1440u;
    {
        const bool branch_taken_0x1b1440 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B1444u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1b1440) {
            ctx->pc = 0x1B1450u;
            goto label_1b1450;
        }
    }
    ctx->pc = 0x1B1448u;
    // 0x1b1448: 0xc0694e8
    ctx->pc = 0x1B1448u;
    SET_GPR_U32(ctx, 31, 0x1B1450u);
    ctx->pc = 0x1B144Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1450u; }
        else if (ctx->pc != 0x1B1450u) { ctx->pc = 0x1B1450u; }
    }
    if (ctx->pc != 0x1B1450u) { return; }
    ctx->pc = 0x1B1450u;
label_1b1450:
    // 0x1b1450: 0x7bbf0010
    ctx->pc = 0x1b1450u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1454: 0x7bb00000
    ctx->pc = 0x1b1454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1458: 0x3e00008
    ctx->pc = 0x1B1458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B145Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1360u: goto label_1b1360;
            case 0x1B13F8u: goto label_1b13f8;
            case 0x1B1408u: goto label_1b1408;
            case 0x1B1450u: goto label_1b1450;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1460u;
}
