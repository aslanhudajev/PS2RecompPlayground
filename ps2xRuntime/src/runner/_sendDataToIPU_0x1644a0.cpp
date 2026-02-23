#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _sendDataToIPU
// Address: 0x1644a0 - 0x164574
void _sendDataToIPU_0x1644a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_sendDataToIPU");


    ctx->pc = 0x1644a0u;

    // 0x1644a0: 0x3c0f002e
    ctx->pc = 0x1644a0u;
    SET_GPR_U32(ctx, 15, ((uint32_t)46 << 16));
    // 0x1644a4: 0x3c020fff
    ctx->pc = 0x1644a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x1644a8: 0x25e3c380
    ctx->pc = 0x1644a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 15), 4294951808));
    // 0x1644ac: 0x3442ffff
    ctx->pc = 0x1644acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1644b0: 0x621824
    ctx->pc = 0x1644b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1644b4: 0x3c062000
    ctx->pc = 0x1644b4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)8192 << 16));
    // 0x1644b8: 0x665825
    ctx->pc = 0x1644b8u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1644bc: 0xa0402d
    ctx->pc = 0x1644bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644c0: 0x1900001d
    ctx->pc = 0x1644C0u;
    {
        const bool branch_taken_0x1644c0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1644C4u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1644c0) {
            ctx->pc = 0x164538u;
            goto label_164538;
        }
    }
    ctx->pc = 0x1644C8u;
    // 0x1644c8: 0x3c09000f
    ctx->pc = 0x1644c8u;
    SET_GPR_U32(ctx, 9, ((uint32_t)15 << 16));
    // 0x1644cc: 0x3c0c0fff
    ctx->pc = 0x1644ccu;
    SET_GPR_U32(ctx, 12, ((uint32_t)4095 << 16));
    // 0x1644d0: 0x3529ff40
    ctx->pc = 0x1644d0u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 65344));
    // 0x1644d4: 0x358cffff
    ctx->pc = 0x1644d4u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 12), 65535));
    // 0x1644d8: 0x240e0003
    ctx->pc = 0x1644d8u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1644dc: 0x240dffff
    ctx->pc = 0x1644dcu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1644e0:
    // 0x1644e0: 0x128102a
    ctx->pc = 0x1644e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 8)));
    // 0x1644e4: 0x120382d
    ctx->pc = 0x1644e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644e8: 0x102380a
    ctx->pc = 0x1644e8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 8));
    // 0x1644ec: 0x182d
    ctx->pc = 0x1644ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644f0: 0x24e6000f
    ctx->pc = 0x1644f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 15));
    // 0x1644f4: 0x24e2001e
    ctx->pc = 0x1644f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 30));
    // 0x1644f8: 0x1a6282a
    ctx->pc = 0x1644f8u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 6)));
    // 0x1644fc: 0x1074023
    ctx->pc = 0x1644fcu;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x164500: 0xc5100b
    ctx->pc = 0x164500u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x164504: 0x14c2024
    ctx->pc = 0x164504u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x164508: 0x1c8180b
    ctx->pc = 0x164508u;
    if (GPR_U32(ctx, 8) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 14));
    // 0x16450c: 0x21103
    ctx->pc = 0x16450cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x164510: 0x4203c
    ctx->pc = 0x164510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x164514: 0x31f38
    ctx->pc = 0x164514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x164518: 0x2103c
    ctx->pc = 0x164518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x16451c: 0x832025
    ctx->pc = 0x16451cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x164520: 0x2103e
    ctx->pc = 0x164520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x164524: 0x1475021
    ctx->pc = 0x164524u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x164528: 0x822025
    ctx->pc = 0x164528u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16452c: 0xfd640000
    ctx->pc = 0x16452cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 4));
    // 0x164530: 0x1d00ffeb
    ctx->pc = 0x164530u;
    {
        const bool branch_taken_0x164530 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x164534u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 16));
        if (branch_taken_0x164530) {
            ctx->pc = 0x1644E0u;
            goto label_1644e0;
        }
    }
    ctx->pc = 0x164538u;
label_164538:
    // 0x164538: 0x3c020fff
    ctx->pc = 0x164538u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x16453c: 0x25e4c380
    ctx->pc = 0x16453cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 15), 4294951808));
    // 0x164540: 0x3442ffff
    ctx->pc = 0x164540u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x164544: 0x3c031000
    ctx->pc = 0x164544u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x164548: 0x822024
    ctx->pc = 0x164548u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16454c: 0x3463b430
    ctx->pc = 0x16454cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46128));
    // 0x164550: 0x3c021000
    ctx->pc = 0x164550u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x164554: 0xac640000
    ctx->pc = 0x164554u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x164558: 0x3442b420
    ctx->pc = 0x164558u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46112));
    // 0x16455c: 0x3c031000
    ctx->pc = 0x16455cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x164560: 0xac400000
    ctx->pc = 0x164560u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x164564: 0x3463b400
    ctx->pc = 0x164564u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46080));
    // 0x164568: 0x24020105
    ctx->pc = 0x164568u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 261));
    // 0x16456c: 0x3e00008
    ctx->pc = 0x16456Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164570u;
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1644E0u: goto label_1644e0;
            case 0x164538u: goto label_164538;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164574u;
}
