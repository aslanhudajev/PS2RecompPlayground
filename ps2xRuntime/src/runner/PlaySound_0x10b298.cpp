#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlaySound
// Address: 0x10b298 - 0x10b3d0
void PlaySound_0x10b298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b298u;

    // 0x10b298: 0x27bdff90
    ctx->pc = 0x10b298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10b29c: 0x8f828390
    ctx->pc = 0x10b29cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x10b2a0: 0xffb50050
    ctx->pc = 0x10b2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10b2a4: 0xffb30030
    ctx->pc = 0x10b2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10b2a8: 0xa0a82d
    ctx->pc = 0x10b2a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2ac: 0xffb10010
    ctx->pc = 0x10b2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10b2b0: 0xc0982d
    ctx->pc = 0x10b2b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2b4: 0xffbf0060
    ctx->pc = 0x10b2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10b2b8: 0x80882d
    ctx->pc = 0x10b2b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2bc: 0xffb40040
    ctx->pc = 0x10b2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10b2c0: 0xffb20020
    ctx->pc = 0x10b2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10b2c4: 0x14400039
    ctx->pc = 0x10B2C4u;
    {
        const bool branch_taken_0x10b2c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B2C8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x10b2c4) {
            ctx->pc = 0x10B3ACu;
            goto label_10b3ac;
        }
    }
    ctx->pc = 0x10B2CCu;
    // 0x10b2cc: 0x2a220018
    ctx->pc = 0x10b2ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 24));
    // 0x10b2d0: 0x14400003
    ctx->pc = 0x10B2D0u;
    {
        const bool branch_taken_0x10b2d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B2D4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b2d0) {
            ctx->pc = 0x10B2E0u;
            goto label_10b2e0;
        }
    }
    ctx->pc = 0x10B2D8u;
    // 0x10b2d8: 0x2631ffe8
    ctx->pc = 0x10b2d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967272));
    // 0x10b2dc: 0x24140001
    ctx->pc = 0x10b2dcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_10b2e0:
    // 0x10b2e0: 0x111040
    ctx->pc = 0x10b2e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 1));
    // 0x10b2e4: 0x24040001
    ctx->pc = 0x10b2e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b2e8: 0x2828025
    ctx->pc = 0x10b2e8u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10b2ec: 0x34058010
    ctx->pc = 0x10b2ecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x10b2f0: 0x200302d
    ctx->pc = 0x10b2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2f4: 0xc045c80
    ctx->pc = 0x10B2F4u;
    SET_GPR_U32(ctx, 31, 0x10B2FCu);
    ctx->pc = 0x10B2F8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B2FCu; }
    }
    if (ctx->pc != 0x10B2FCu) { return; }
    ctx->pc = 0x10B2FCu;
    // 0x10b2fc: 0x2412ffff
    ctx->pc = 0x10b2fcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b300: 0x14520005
    ctx->pc = 0x10B300u;
    {
        const bool branch_taken_0x10b300 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x10B304u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b300) {
            ctx->pc = 0x10B318u;
            goto label_10b318;
        }
    }
    ctx->pc = 0x10B308u;
    // 0x10b308: 0x3c040017
    ctx->pc = 0x10b308u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b30c: 0xc04ace4
    ctx->pc = 0x10B30Cu;
    SET_GPR_U32(ctx, 31, 0x10B314u);
    ctx->pc = 0x10B310u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24240));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B314u; }
    }
    if (ctx->pc != 0x10B314u) { return; }
    ctx->pc = 0x10B314u;
    // 0x10b314: 0x260382d
    ctx->pc = 0x10b314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10b318:
    // 0x10b318: 0x24040001
    ctx->pc = 0x10b318u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b31c: 0x34058010
    ctx->pc = 0x10b31cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x10b320: 0xc045c80
    ctx->pc = 0x10B320u;
    SET_GPR_U32(ctx, 31, 0x10B328u);
    ctx->pc = 0x10B324u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 256));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B328u; }
    }
    if (ctx->pc != 0x10B328u) { return; }
    ctx->pc = 0x10B328u;
    // 0x10b328: 0x14520005
    ctx->pc = 0x10B328u;
    {
        const bool branch_taken_0x10b328 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x10B32Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 512));
        if (branch_taken_0x10b328) {
            ctx->pc = 0x10B340u;
            goto label_10b340;
        }
    }
    ctx->pc = 0x10B330u;
    // 0x10b330: 0x3c040017
    ctx->pc = 0x10b330u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b334: 0xc04ace4
    ctx->pc = 0x10B334u;
    SET_GPR_U32(ctx, 31, 0x10B33Cu);
    ctx->pc = 0x10B338u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24248));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B33Cu; }
    }
    if (ctx->pc != 0x10B33Cu) { return; }
    ctx->pc = 0x10B33Cu;
    // 0x10b33c: 0x36060200
    ctx->pc = 0x10b33cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 512));
label_10b340:
    // 0x10b340: 0x2a0382d
    ctx->pc = 0x10b340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b344: 0x24040001
    ctx->pc = 0x10b344u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b348: 0xc045c80
    ctx->pc = 0x10B348u;
    SET_GPR_U32(ctx, 31, 0x10B350u);
    ctx->pc = 0x10B34Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B350u; }
    }
    if (ctx->pc != 0x10B350u) { return; }
    ctx->pc = 0x10B350u;
    // 0x10b350: 0x14520005
    ctx->pc = 0x10B350u;
    {
        const bool branch_taken_0x10b350 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x10B354u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10b350) {
            ctx->pc = 0x10B368u;
            goto label_10b368;
        }
    }
    ctx->pc = 0x10B358u;
    // 0x10b358: 0x3c040017
    ctx->pc = 0x10b358u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b35c: 0xc04ace4
    ctx->pc = 0x10B35Cu;
    SET_GPR_U32(ctx, 31, 0x10B364u);
    ctx->pc = 0x10B360u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14464));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B364u; }
    }
    if (ctx->pc != 0x10B364u) { return; }
    ctx->pc = 0x10B364u;
    // 0x10b364: 0x24070001
    ctx->pc = 0x10b364u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_10b368:
    // 0x10b368: 0x36861500
    ctx->pc = 0x10b368u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 20), 5376));
    // 0x10b36c: 0x2273804
    ctx->pc = 0x10b36cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x10b370: 0x24040001
    ctx->pc = 0x10b370u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b374: 0xc045c80
    ctx->pc = 0x10B374u;
    SET_GPR_U32(ctx, 31, 0x10B37Cu);
    ctx->pc = 0x10B378u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32816));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B37Cu; }
    }
    if (ctx->pc != 0x10B37Cu) { return; }
    ctx->pc = 0x10B37Cu;
    // 0x10b37c: 0x1452000c
    ctx->pc = 0x10B37Cu;
    {
        const bool branch_taken_0x10b37c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x10B380u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x10b37c) {
            ctx->pc = 0x10B3B0u;
            goto label_10b3b0;
        }
    }
    ctx->pc = 0x10B384u;
    // 0x10b384: 0x3c040017
    ctx->pc = 0x10b384u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b388: 0xdfb50050
    ctx->pc = 0x10b388u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b38c: 0x24843898
    ctx->pc = 0x10b38cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14488));
    // 0x10b390: 0xdfb40040
    ctx->pc = 0x10b390u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b394: 0xdfb30030
    ctx->pc = 0x10b394u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b398: 0xdfb20020
    ctx->pc = 0x10b398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b39c: 0xdfb10010
    ctx->pc = 0x10b39cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b3a0: 0xdfb00000
    ctx->pc = 0x10b3a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b3a4: 0x804ace4
    ctx->pc = 0x10B3A4u;
    ctx->pc = 0x10B3A8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x12B390u;
    printf_0x12b390(rdram, ctx, runtime); return;
    ctx->pc = 0x10B3ACu;
label_10b3ac:
    // 0x10b3ac: 0xdfbf0060
    ctx->pc = 0x10b3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10b3b0:
    // 0x10b3b0: 0xdfb50050
    ctx->pc = 0x10b3b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b3b4: 0xdfb40040
    ctx->pc = 0x10b3b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b3b8: 0xdfb30030
    ctx->pc = 0x10b3b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b3bc: 0xdfb20020
    ctx->pc = 0x10b3bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b3c0: 0xdfb10010
    ctx->pc = 0x10b3c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b3c4: 0xdfb00000
    ctx->pc = 0x10b3c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b3c8: 0x3e00008
    ctx->pc = 0x10B3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B3CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B2E0u: goto label_10b2e0;
            case 0x10B318u: goto label_10b318;
            case 0x10B340u: goto label_10b340;
            case 0x10B368u: goto label_10b368;
            case 0x10B3ACu: goto label_10b3ac;
            case 0x10B3B0u: goto label_10b3b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B3D0u;
}
