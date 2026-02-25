#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPadDataClean
// Address: 0x1568a0 - 0x156d20
void wrsPadDataClean_0x1568a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPadDataClean_0x1568a0");
#endif

    ctx->pc = 0x1568a0u;

    // 0x1568a0: 0x1480008f  bnez        $a0, . + 4 + (0x8F << 2)
    ctx->pc = 0x1568A0u;
    {
        const bool branch_taken_0x1568a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1568A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1568A0u;
            // 0x1568a4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568a0) {
            ctx->pc = 0x156AE0u;
            goto label_156ae0;
        }
    }
    ctx->pc = 0x1568A8u;
    // 0x1568a8: 0xac2025a0  sw          $zero, 0x25A0($at)
    ctx->pc = 0x1568a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9632), GPR_U32(ctx, 0));
    // 0x1568ac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1568acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1568b0: 0xac2025a8  sw          $zero, 0x25A8($at)
    ctx->pc = 0x1568b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9640), GPR_U32(ctx, 0));
    // 0x1568b4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1568b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1568b8: 0xac2025b0  sw          $zero, 0x25B0($at)
    ctx->pc = 0x1568b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9648), GPR_U32(ctx, 0));
    // 0x1568bc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1568bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1568c0: 0xac2025b8  sw          $zero, 0x25B8($at)
    ctx->pc = 0x1568c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9656), GPR_U32(ctx, 0));
    // 0x1568c4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1568c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1568c8: 0xac2025c0  sw          $zero, 0x25C0($at)
    ctx->pc = 0x1568c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9664), GPR_U32(ctx, 0));
    // 0x1568cc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1568ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1568d0: 0xac2025c8  sw          $zero, 0x25C8($at)
    ctx->pc = 0x1568d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9672), GPR_U32(ctx, 0));
    // 0x1568d4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1568d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1568d8: 0xac2025d0  sw          $zero, 0x25D0($at)
    ctx->pc = 0x1568d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9680), GPR_U32(ctx, 0));
    // 0x1568dc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1568dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1568e0: 0xac2025d8  sw          $zero, 0x25D8($at)
    ctx->pc = 0x1568e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9688), GPR_U32(ctx, 0));
    // 0x1568e4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1568e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1568e8: 0xac202570  sw          $zero, 0x2570($at)
    ctx->pc = 0x1568e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9584), GPR_U32(ctx, 0));
    // 0x1568ec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1568ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1568f0: 0xac202578  sw          $zero, 0x2578($at)
    ctx->pc = 0x1568f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9592), GPR_U32(ctx, 0));
    // 0x1568f4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1568f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1568f8: 0xac202580  sw          $zero, 0x2580($at)
    ctx->pc = 0x1568f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9600), GPR_U32(ctx, 0));
    // 0x1568fc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1568fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156900: 0xac202588  sw          $zero, 0x2588($at)
    ctx->pc = 0x156900u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9608), GPR_U32(ctx, 0));
    // 0x156904: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156908: 0xac202590  sw          $zero, 0x2590($at)
    ctx->pc = 0x156908u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9616), GPR_U32(ctx, 0));
    // 0x15690c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15690cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156910: 0xac202598  sw          $zero, 0x2598($at)
    ctx->pc = 0x156910u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9624), GPR_U32(ctx, 0));
    // 0x156914: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156918: 0xac2024c0  sw          $zero, 0x24C0($at)
    ctx->pc = 0x156918u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9408), GPR_U32(ctx, 0));
    // 0x15691c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15691cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156920: 0xac2024c8  sw          $zero, 0x24C8($at)
    ctx->pc = 0x156920u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9416), GPR_U32(ctx, 0));
    // 0x156924: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156928: 0xac2024d0  sw          $zero, 0x24D0($at)
    ctx->pc = 0x156928u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9424), GPR_U32(ctx, 0));
    // 0x15692c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15692cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156930: 0xac2024d8  sw          $zero, 0x24D8($at)
    ctx->pc = 0x156930u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9432), GPR_U32(ctx, 0));
    // 0x156934: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156938: 0xac2024e0  sw          $zero, 0x24E0($at)
    ctx->pc = 0x156938u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9440), GPR_U32(ctx, 0));
    // 0x15693c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15693cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156940: 0xac2024e8  sw          $zero, 0x24E8($at)
    ctx->pc = 0x156940u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9448), GPR_U32(ctx, 0));
    // 0x156944: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156948: 0xac2024f0  sw          $zero, 0x24F0($at)
    ctx->pc = 0x156948u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9456), GPR_U32(ctx, 0));
    // 0x15694c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15694cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156950: 0xac2024f8  sw          $zero, 0x24F8($at)
    ctx->pc = 0x156950u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9464), GPR_U32(ctx, 0));
    // 0x156954: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156958: 0xac202490  sw          $zero, 0x2490($at)
    ctx->pc = 0x156958u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9360), GPR_U32(ctx, 0));
    // 0x15695c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15695cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156960: 0xac202498  sw          $zero, 0x2498($at)
    ctx->pc = 0x156960u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9368), GPR_U32(ctx, 0));
    // 0x156964: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156968: 0xac2024a0  sw          $zero, 0x24A0($at)
    ctx->pc = 0x156968u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9376), GPR_U32(ctx, 0));
    // 0x15696c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15696cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156970: 0xac2024a8  sw          $zero, 0x24A8($at)
    ctx->pc = 0x156970u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9384), GPR_U32(ctx, 0));
    // 0x156974: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156978: 0xac2024b0  sw          $zero, 0x24B0($at)
    ctx->pc = 0x156978u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9392), GPR_U32(ctx, 0));
    // 0x15697c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15697cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156980: 0xac2024b8  sw          $zero, 0x24B8($at)
    ctx->pc = 0x156980u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9400), GPR_U32(ctx, 0));
    // 0x156984: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156988: 0xac2023e0  sw          $zero, 0x23E0($at)
    ctx->pc = 0x156988u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9184), GPR_U32(ctx, 0));
    // 0x15698c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15698cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156990: 0xac2023e8  sw          $zero, 0x23E8($at)
    ctx->pc = 0x156990u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9192), GPR_U32(ctx, 0));
    // 0x156994: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156998: 0xac2023f0  sw          $zero, 0x23F0($at)
    ctx->pc = 0x156998u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9200), GPR_U32(ctx, 0));
    // 0x15699c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15699cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1569a0: 0xac2023f8  sw          $zero, 0x23F8($at)
    ctx->pc = 0x1569a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9208), GPR_U32(ctx, 0));
    // 0x1569a4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1569a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1569a8: 0xac202400  sw          $zero, 0x2400($at)
    ctx->pc = 0x1569a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9216), GPR_U32(ctx, 0));
    // 0x1569ac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1569acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1569b0: 0xac202408  sw          $zero, 0x2408($at)
    ctx->pc = 0x1569b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9224), GPR_U32(ctx, 0));
    // 0x1569b4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1569b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1569b8: 0xac202410  sw          $zero, 0x2410($at)
    ctx->pc = 0x1569b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9232), GPR_U32(ctx, 0));
    // 0x1569bc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1569bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1569c0: 0xac202418  sw          $zero, 0x2418($at)
    ctx->pc = 0x1569c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9240), GPR_U32(ctx, 0));
    // 0x1569c4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1569c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1569c8: 0xac2023b0  sw          $zero, 0x23B0($at)
    ctx->pc = 0x1569c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9136), GPR_U32(ctx, 0));
    // 0x1569cc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1569ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1569d0: 0xac2023b8  sw          $zero, 0x23B8($at)
    ctx->pc = 0x1569d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9144), GPR_U32(ctx, 0));
    // 0x1569d4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1569d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1569d8: 0xac2023c0  sw          $zero, 0x23C0($at)
    ctx->pc = 0x1569d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9152), GPR_U32(ctx, 0));
    // 0x1569dc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1569dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1569e0: 0xac2023c8  sw          $zero, 0x23C8($at)
    ctx->pc = 0x1569e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9160), GPR_U32(ctx, 0));
    // 0x1569e4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1569e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1569e8: 0xac2023d0  sw          $zero, 0x23D0($at)
    ctx->pc = 0x1569e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9168), GPR_U32(ctx, 0));
    // 0x1569ec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1569ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1569f0: 0xac2023d8  sw          $zero, 0x23D8($at)
    ctx->pc = 0x1569f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9176), GPR_U32(ctx, 0));
    // 0x1569f4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1569f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1569f8: 0xac202300  sw          $zero, 0x2300($at)
    ctx->pc = 0x1569f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8960), GPR_U32(ctx, 0));
    // 0x1569fc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1569fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a00: 0xac202308  sw          $zero, 0x2308($at)
    ctx->pc = 0x156a00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8968), GPR_U32(ctx, 0));
    // 0x156a04: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a08: 0xac202310  sw          $zero, 0x2310($at)
    ctx->pc = 0x156a08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8976), GPR_U32(ctx, 0));
    // 0x156a0c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a10: 0xac202318  sw          $zero, 0x2318($at)
    ctx->pc = 0x156a10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8984), GPR_U32(ctx, 0));
    // 0x156a14: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a18: 0xac202320  sw          $zero, 0x2320($at)
    ctx->pc = 0x156a18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8992), GPR_U32(ctx, 0));
    // 0x156a1c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a20: 0xac202328  sw          $zero, 0x2328($at)
    ctx->pc = 0x156a20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9000), GPR_U32(ctx, 0));
    // 0x156a24: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a28: 0xac202330  sw          $zero, 0x2330($at)
    ctx->pc = 0x156a28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9008), GPR_U32(ctx, 0));
    // 0x156a2c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a30: 0xac202338  sw          $zero, 0x2338($at)
    ctx->pc = 0x156a30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9016), GPR_U32(ctx, 0));
    // 0x156a34: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a38: 0xac2022d0  sw          $zero, 0x22D0($at)
    ctx->pc = 0x156a38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8912), GPR_U32(ctx, 0));
    // 0x156a3c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a40: 0xac2022d8  sw          $zero, 0x22D8($at)
    ctx->pc = 0x156a40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8920), GPR_U32(ctx, 0));
    // 0x156a44: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a48: 0xac2022e0  sw          $zero, 0x22E0($at)
    ctx->pc = 0x156a48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8928), GPR_U32(ctx, 0));
    // 0x156a4c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a50: 0xac2022e8  sw          $zero, 0x22E8($at)
    ctx->pc = 0x156a50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8936), GPR_U32(ctx, 0));
    // 0x156a54: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a58: 0xac2022f0  sw          $zero, 0x22F0($at)
    ctx->pc = 0x156a58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8944), GPR_U32(ctx, 0));
    // 0x156a5c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a60: 0xac2022f8  sw          $zero, 0x22F8($at)
    ctx->pc = 0x156a60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8952), GPR_U32(ctx, 0));
    // 0x156a64: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a68: 0xac202220  sw          $zero, 0x2220($at)
    ctx->pc = 0x156a68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8736), GPR_U32(ctx, 0));
    // 0x156a6c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a70: 0xac202228  sw          $zero, 0x2228($at)
    ctx->pc = 0x156a70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8744), GPR_U32(ctx, 0));
    // 0x156a74: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a78: 0xac202230  sw          $zero, 0x2230($at)
    ctx->pc = 0x156a78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8752), GPR_U32(ctx, 0));
    // 0x156a7c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a80: 0xac202238  sw          $zero, 0x2238($at)
    ctx->pc = 0x156a80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8760), GPR_U32(ctx, 0));
    // 0x156a84: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a88: 0xac202240  sw          $zero, 0x2240($at)
    ctx->pc = 0x156a88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8768), GPR_U32(ctx, 0));
    // 0x156a8c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a90: 0xac202248  sw          $zero, 0x2248($at)
    ctx->pc = 0x156a90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8776), GPR_U32(ctx, 0));
    // 0x156a94: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156a98: 0xac202250  sw          $zero, 0x2250($at)
    ctx->pc = 0x156a98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8784), GPR_U32(ctx, 0));
    // 0x156a9c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156aa0: 0xac202258  sw          $zero, 0x2258($at)
    ctx->pc = 0x156aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8792), GPR_U32(ctx, 0));
    // 0x156aa4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156aa8: 0xac2021b0  sw          $zero, 0x21B0($at)
    ctx->pc = 0x156aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8624), GPR_U32(ctx, 0));
    // 0x156aac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156ab0: 0xac2021b8  sw          $zero, 0x21B8($at)
    ctx->pc = 0x156ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8632), GPR_U32(ctx, 0));
    // 0x156ab4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156ab8: 0xac2021c0  sw          $zero, 0x21C0($at)
    ctx->pc = 0x156ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8640), GPR_U32(ctx, 0));
    // 0x156abc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156ac0: 0xac2021c8  sw          $zero, 0x21C8($at)
    ctx->pc = 0x156ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8648), GPR_U32(ctx, 0));
    // 0x156ac4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156ac8: 0xac2021d0  sw          $zero, 0x21D0($at)
    ctx->pc = 0x156ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8656), GPR_U32(ctx, 0));
    // 0x156acc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156ad0: 0xac2021d8  sw          $zero, 0x21D8($at)
    ctx->pc = 0x156ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8664), GPR_U32(ctx, 0));
    // 0x156ad4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156ad8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x156AD8u;
    {
        const bool branch_taken_0x156ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156AD8u;
            // 0x156adc: 0xac2025e0  sw          $zero, 0x25E0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ad8) {
            ctx->pc = 0x156D18u;
            goto label_156d18;
        }
    }
    ctx->pc = 0x156AE0u;
label_156ae0:
    // 0x156ae0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156ae4: 0xac202530  sw          $zero, 0x2530($at)
    ctx->pc = 0x156ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9520), GPR_U32(ctx, 0));
    // 0x156ae8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156aec: 0xac202538  sw          $zero, 0x2538($at)
    ctx->pc = 0x156aecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9528), GPR_U32(ctx, 0));
    // 0x156af0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156af4: 0xac202540  sw          $zero, 0x2540($at)
    ctx->pc = 0x156af4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9536), GPR_U32(ctx, 0));
    // 0x156af8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156afc: 0xac202548  sw          $zero, 0x2548($at)
    ctx->pc = 0x156afcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9544), GPR_U32(ctx, 0));
    // 0x156b00: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b04: 0xac202550  sw          $zero, 0x2550($at)
    ctx->pc = 0x156b04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9552), GPR_U32(ctx, 0));
    // 0x156b08: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b0c: 0xac202558  sw          $zero, 0x2558($at)
    ctx->pc = 0x156b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9560), GPR_U32(ctx, 0));
    // 0x156b10: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b14: 0xac202560  sw          $zero, 0x2560($at)
    ctx->pc = 0x156b14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9568), GPR_U32(ctx, 0));
    // 0x156b18: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b1c: 0xac202568  sw          $zero, 0x2568($at)
    ctx->pc = 0x156b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9576), GPR_U32(ctx, 0));
    // 0x156b20: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b24: 0xac202500  sw          $zero, 0x2500($at)
    ctx->pc = 0x156b24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9472), GPR_U32(ctx, 0));
    // 0x156b28: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b2c: 0xac202508  sw          $zero, 0x2508($at)
    ctx->pc = 0x156b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9480), GPR_U32(ctx, 0));
    // 0x156b30: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b34: 0xac202510  sw          $zero, 0x2510($at)
    ctx->pc = 0x156b34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9488), GPR_U32(ctx, 0));
    // 0x156b38: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b3c: 0xac202518  sw          $zero, 0x2518($at)
    ctx->pc = 0x156b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9496), GPR_U32(ctx, 0));
    // 0x156b40: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b44: 0xac202520  sw          $zero, 0x2520($at)
    ctx->pc = 0x156b44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9504), GPR_U32(ctx, 0));
    // 0x156b48: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b4c: 0xac202528  sw          $zero, 0x2528($at)
    ctx->pc = 0x156b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9512), GPR_U32(ctx, 0));
    // 0x156b50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b54: 0xac202450  sw          $zero, 0x2450($at)
    ctx->pc = 0x156b54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9296), GPR_U32(ctx, 0));
    // 0x156b58: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b5c: 0xac202458  sw          $zero, 0x2458($at)
    ctx->pc = 0x156b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9304), GPR_U32(ctx, 0));
    // 0x156b60: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b64: 0xac202460  sw          $zero, 0x2460($at)
    ctx->pc = 0x156b64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9312), GPR_U32(ctx, 0));
    // 0x156b68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b6c: 0xac202468  sw          $zero, 0x2468($at)
    ctx->pc = 0x156b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9320), GPR_U32(ctx, 0));
    // 0x156b70: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b74: 0xac202470  sw          $zero, 0x2470($at)
    ctx->pc = 0x156b74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9328), GPR_U32(ctx, 0));
    // 0x156b78: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b7c: 0xac202478  sw          $zero, 0x2478($at)
    ctx->pc = 0x156b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9336), GPR_U32(ctx, 0));
    // 0x156b80: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b84: 0xac202480  sw          $zero, 0x2480($at)
    ctx->pc = 0x156b84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9344), GPR_U32(ctx, 0));
    // 0x156b88: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b8c: 0xac202488  sw          $zero, 0x2488($at)
    ctx->pc = 0x156b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9352), GPR_U32(ctx, 0));
    // 0x156b90: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b94: 0xac202420  sw          $zero, 0x2420($at)
    ctx->pc = 0x156b94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9248), GPR_U32(ctx, 0));
    // 0x156b98: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156b9c: 0xac202428  sw          $zero, 0x2428($at)
    ctx->pc = 0x156b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9256), GPR_U32(ctx, 0));
    // 0x156ba0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156ba4: 0xac202430  sw          $zero, 0x2430($at)
    ctx->pc = 0x156ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9264), GPR_U32(ctx, 0));
    // 0x156ba8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156bac: 0xac202438  sw          $zero, 0x2438($at)
    ctx->pc = 0x156bacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9272), GPR_U32(ctx, 0));
    // 0x156bb0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156bb4: 0xac202440  sw          $zero, 0x2440($at)
    ctx->pc = 0x156bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9280), GPR_U32(ctx, 0));
    // 0x156bb8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156bbc: 0xac202448  sw          $zero, 0x2448($at)
    ctx->pc = 0x156bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9288), GPR_U32(ctx, 0));
    // 0x156bc0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156bc4: 0xac202370  sw          $zero, 0x2370($at)
    ctx->pc = 0x156bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9072), GPR_U32(ctx, 0));
    // 0x156bc8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156bcc: 0xac202378  sw          $zero, 0x2378($at)
    ctx->pc = 0x156bccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9080), GPR_U32(ctx, 0));
    // 0x156bd0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156bd4: 0xac202380  sw          $zero, 0x2380($at)
    ctx->pc = 0x156bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9088), GPR_U32(ctx, 0));
    // 0x156bd8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156bdc: 0xac202388  sw          $zero, 0x2388($at)
    ctx->pc = 0x156bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9096), GPR_U32(ctx, 0));
    // 0x156be0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156be4: 0xac202390  sw          $zero, 0x2390($at)
    ctx->pc = 0x156be4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9104), GPR_U32(ctx, 0));
    // 0x156be8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156bec: 0xac202398  sw          $zero, 0x2398($at)
    ctx->pc = 0x156becu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9112), GPR_U32(ctx, 0));
    // 0x156bf0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156bf4: 0xac2023a0  sw          $zero, 0x23A0($at)
    ctx->pc = 0x156bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9120), GPR_U32(ctx, 0));
    // 0x156bf8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156bfc: 0xac2023a8  sw          $zero, 0x23A8($at)
    ctx->pc = 0x156bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9128), GPR_U32(ctx, 0));
    // 0x156c00: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c04: 0xac202340  sw          $zero, 0x2340($at)
    ctx->pc = 0x156c04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9024), GPR_U32(ctx, 0));
    // 0x156c08: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c0c: 0xac202348  sw          $zero, 0x2348($at)
    ctx->pc = 0x156c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9032), GPR_U32(ctx, 0));
    // 0x156c10: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c14: 0xac202350  sw          $zero, 0x2350($at)
    ctx->pc = 0x156c14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9040), GPR_U32(ctx, 0));
    // 0x156c18: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c1c: 0xac202358  sw          $zero, 0x2358($at)
    ctx->pc = 0x156c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9048), GPR_U32(ctx, 0));
    // 0x156c20: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c24: 0xac202360  sw          $zero, 0x2360($at)
    ctx->pc = 0x156c24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9056), GPR_U32(ctx, 0));
    // 0x156c28: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c2c: 0xac202368  sw          $zero, 0x2368($at)
    ctx->pc = 0x156c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9064), GPR_U32(ctx, 0));
    // 0x156c30: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c34: 0xac2021e0  sw          $zero, 0x21E0($at)
    ctx->pc = 0x156c34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8672), GPR_U32(ctx, 0));
    // 0x156c38: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c3c: 0xac2021e8  sw          $zero, 0x21E8($at)
    ctx->pc = 0x156c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8680), GPR_U32(ctx, 0));
    // 0x156c40: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c44: 0xac2021f0  sw          $zero, 0x21F0($at)
    ctx->pc = 0x156c44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8688), GPR_U32(ctx, 0));
    // 0x156c48: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c4c: 0xac2021f8  sw          $zero, 0x21F8($at)
    ctx->pc = 0x156c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8696), GPR_U32(ctx, 0));
    // 0x156c50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c54: 0xac202200  sw          $zero, 0x2200($at)
    ctx->pc = 0x156c54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8704), GPR_U32(ctx, 0));
    // 0x156c58: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c5c: 0xac202208  sw          $zero, 0x2208($at)
    ctx->pc = 0x156c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8712), GPR_U32(ctx, 0));
    // 0x156c60: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c64: 0xac202210  sw          $zero, 0x2210($at)
    ctx->pc = 0x156c64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8720), GPR_U32(ctx, 0));
    // 0x156c68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c6c: 0xac202218  sw          $zero, 0x2218($at)
    ctx->pc = 0x156c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8728), GPR_U32(ctx, 0));
    // 0x156c70: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c74: 0xac202290  sw          $zero, 0x2290($at)
    ctx->pc = 0x156c74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8848), GPR_U32(ctx, 0));
    // 0x156c78: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c7c: 0xac202298  sw          $zero, 0x2298($at)
    ctx->pc = 0x156c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8856), GPR_U32(ctx, 0));
    // 0x156c80: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c84: 0xac2022a0  sw          $zero, 0x22A0($at)
    ctx->pc = 0x156c84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8864), GPR_U32(ctx, 0));
    // 0x156c88: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c8c: 0xac2022a8  sw          $zero, 0x22A8($at)
    ctx->pc = 0x156c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8872), GPR_U32(ctx, 0));
    // 0x156c90: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c94: 0xac2022b0  sw          $zero, 0x22B0($at)
    ctx->pc = 0x156c94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8880), GPR_U32(ctx, 0));
    // 0x156c98: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156c9c: 0xac2022b8  sw          $zero, 0x22B8($at)
    ctx->pc = 0x156c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8888), GPR_U32(ctx, 0));
    // 0x156ca0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156ca4: 0xac2022c0  sw          $zero, 0x22C0($at)
    ctx->pc = 0x156ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8896), GPR_U32(ctx, 0));
    // 0x156ca8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156cac: 0xac2022c8  sw          $zero, 0x22C8($at)
    ctx->pc = 0x156cacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8904), GPR_U32(ctx, 0));
    // 0x156cb0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156cb4: 0xac202260  sw          $zero, 0x2260($at)
    ctx->pc = 0x156cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8800), GPR_U32(ctx, 0));
    // 0x156cb8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156cbc: 0xac202268  sw          $zero, 0x2268($at)
    ctx->pc = 0x156cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8808), GPR_U32(ctx, 0));
    // 0x156cc0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156cc4: 0xac202270  sw          $zero, 0x2270($at)
    ctx->pc = 0x156cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8816), GPR_U32(ctx, 0));
    // 0x156cc8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156ccc: 0xac202278  sw          $zero, 0x2278($at)
    ctx->pc = 0x156cccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8824), GPR_U32(ctx, 0));
    // 0x156cd0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156cd4: 0xac202280  sw          $zero, 0x2280($at)
    ctx->pc = 0x156cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8832), GPR_U32(ctx, 0));
    // 0x156cd8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156cdc: 0xac202288  sw          $zero, 0x2288($at)
    ctx->pc = 0x156cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8840), GPR_U32(ctx, 0));
    // 0x156ce0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156ce4: 0xac202180  sw          $zero, 0x2180($at)
    ctx->pc = 0x156ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8576), GPR_U32(ctx, 0));
    // 0x156ce8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156cec: 0xac202188  sw          $zero, 0x2188($at)
    ctx->pc = 0x156cecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8584), GPR_U32(ctx, 0));
    // 0x156cf0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156cf4: 0xac202190  sw          $zero, 0x2190($at)
    ctx->pc = 0x156cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8592), GPR_U32(ctx, 0));
    // 0x156cf8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156cfc: 0xac202198  sw          $zero, 0x2198($at)
    ctx->pc = 0x156cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8600), GPR_U32(ctx, 0));
    // 0x156d00: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156d04: 0xac2021a0  sw          $zero, 0x21A0($at)
    ctx->pc = 0x156d04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8608), GPR_U32(ctx, 0));
    // 0x156d08: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156d0c: 0xac2021a8  sw          $zero, 0x21A8($at)
    ctx->pc = 0x156d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 0));
    // 0x156d10: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156d14: 0xac2025e4  sw          $zero, 0x25E4($at)
    ctx->pc = 0x156d14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9700), GPR_U32(ctx, 0));
label_156d18:
    // 0x156d18: 0x3e00008  jr          $ra
    ctx->pc = 0x156D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156AE0u: goto label_156ae0;
            case 0x156D18u: goto label_156d18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x156D20u;
}
