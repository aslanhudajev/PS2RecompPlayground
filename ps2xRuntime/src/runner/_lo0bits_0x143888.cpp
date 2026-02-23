#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _lo0bits
// Address: 0x143888 - 0x143948
void _lo0bits_0x143888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_lo0bits");


    ctx->pc = 0x143888u;

    // 0x143888: 0x8c830000
    ctx->pc = 0x143888u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14388c: 0x30620007
    ctx->pc = 0x14388cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 7));
    // 0x143890: 0x1040000e
    ctx->pc = 0x143890u;
    {
        const bool branch_taken_0x143890 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x143894u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x143890) {
            ctx->pc = 0x1438CCu;
            goto label_1438cc;
        }
    }
    ctx->pc = 0x143898u;
    // 0x143898: 0x10400003
    ctx->pc = 0x143898u;
    {
        const bool branch_taken_0x143898 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14389Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x143898) {
            ctx->pc = 0x1438A8u;
            goto label_1438a8;
        }
    }
    ctx->pc = 0x1438A0u;
    // 0x1438a0: 0x3e00008
    ctx->pc = 0x1438A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1438A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1438A8u: goto label_1438a8;
            case 0x1438C0u: goto label_1438c0;
            case 0x1438CCu: goto label_1438cc;
            case 0x1438E0u: goto label_1438e0;
            case 0x1438F8u: goto label_1438f8;
            case 0x14390Cu: goto label_14390c;
            case 0x143920u: goto label_143920;
            case 0x14393Cu: goto label_14393c;
            case 0x143940u: goto label_143940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1438A8u;
label_1438a8:
    // 0x1438a8: 0x50400005
    ctx->pc = 0x1438A8u;
    {
        const bool branch_taken_0x1438a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1438a8) {
            ctx->pc = 0x1438ACu;
            SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 2));
            ctx->pc = 0x1438C0u;
            goto label_1438c0;
        }
    }
    ctx->pc = 0x1438B0u;
    // 0x1438b0: 0x31842
    ctx->pc = 0x1438b0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x1438b4: 0x24020001
    ctx->pc = 0x1438b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1438b8: 0x3e00008
    ctx->pc = 0x1438B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1438BCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1438A8u: goto label_1438a8;
            case 0x1438C0u: goto label_1438c0;
            case 0x1438CCu: goto label_1438cc;
            case 0x1438E0u: goto label_1438e0;
            case 0x1438F8u: goto label_1438f8;
            case 0x14390Cu: goto label_14390c;
            case 0x143920u: goto label_143920;
            case 0x14393Cu: goto label_14393c;
            case 0x143940u: goto label_143940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1438C0u;
label_1438c0:
    // 0x1438c0: 0x24020002
    ctx->pc = 0x1438c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1438c4: 0x3e00008
    ctx->pc = 0x1438C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1438C8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1438A8u: goto label_1438a8;
            case 0x1438C0u: goto label_1438c0;
            case 0x1438CCu: goto label_1438cc;
            case 0x1438E0u: goto label_1438e0;
            case 0x1438F8u: goto label_1438f8;
            case 0x14390Cu: goto label_14390c;
            case 0x143920u: goto label_143920;
            case 0x14393Cu: goto label_14393c;
            case 0x143940u: goto label_143940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1438CCu;
label_1438cc:
    // 0x1438cc: 0x3062ffff
    ctx->pc = 0x1438ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1438d0: 0x14400003
    ctx->pc = 0x1438D0u;
    {
        const bool branch_taken_0x1438d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1438D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1438d0) {
            ctx->pc = 0x1438E0u;
            goto label_1438e0;
        }
    }
    ctx->pc = 0x1438D8u;
    // 0x1438d8: 0x24050010
    ctx->pc = 0x1438d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1438dc: 0x31c02
    ctx->pc = 0x1438dcu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 16));
label_1438e0:
    // 0x1438e0: 0x306200ff
    ctx->pc = 0x1438e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
    // 0x1438e4: 0x14400004
    ctx->pc = 0x1438E4u;
    {
        const bool branch_taken_0x1438e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1438E8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
        if (branch_taken_0x1438e4) {
            ctx->pc = 0x1438F8u;
            goto label_1438f8;
        }
    }
    ctx->pc = 0x1438ECu;
    // 0x1438ec: 0x24a50008
    ctx->pc = 0x1438ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x1438f0: 0x31a02
    ctx->pc = 0x1438f0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 8));
    // 0x1438f4: 0x3062000f
    ctx->pc = 0x1438f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
label_1438f8:
    // 0x1438f8: 0x14400004
    ctx->pc = 0x1438F8u;
    {
        const bool branch_taken_0x1438f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1438FCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x1438f8) {
            ctx->pc = 0x14390Cu;
            goto label_14390c;
        }
    }
    ctx->pc = 0x143900u;
    // 0x143900: 0x24a50004
    ctx->pc = 0x143900u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x143904: 0x31902
    ctx->pc = 0x143904u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 4));
    // 0x143908: 0x30620003
    ctx->pc = 0x143908u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
label_14390c:
    // 0x14390c: 0x14400004
    ctx->pc = 0x14390Cu;
    {
        const bool branch_taken_0x14390c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x143910u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x14390c) {
            ctx->pc = 0x143920u;
            goto label_143920;
        }
    }
    ctx->pc = 0x143914u;
    // 0x143914: 0x24a50002
    ctx->pc = 0x143914u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x143918: 0x31882
    ctx->pc = 0x143918u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 2));
    // 0x14391c: 0x30620001
    ctx->pc = 0x14391cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_143920:
    // 0x143920: 0x54400007
    ctx->pc = 0x143920u;
    {
        const bool branch_taken_0x143920 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x143920) {
            ctx->pc = 0x143924u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->pc = 0x143940u;
            goto label_143940;
        }
    }
    ctx->pc = 0x143928u;
    // 0x143928: 0x31842
    ctx->pc = 0x143928u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x14392c: 0x14600003
    ctx->pc = 0x14392Cu;
    {
        const bool branch_taken_0x14392c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x143930u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x14392c) {
            ctx->pc = 0x14393Cu;
            goto label_14393c;
        }
    }
    ctx->pc = 0x143934u;
    // 0x143934: 0x3e00008
    ctx->pc = 0x143934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143938u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1438A8u: goto label_1438a8;
            case 0x1438C0u: goto label_1438c0;
            case 0x1438CCu: goto label_1438cc;
            case 0x1438E0u: goto label_1438e0;
            case 0x1438F8u: goto label_1438f8;
            case 0x14390Cu: goto label_14390c;
            case 0x143920u: goto label_143920;
            case 0x14393Cu: goto label_14393c;
            case 0x143940u: goto label_143940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14393Cu;
label_14393c:
    // 0x14393c: 0xac830000
    ctx->pc = 0x14393cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_143940:
    // 0x143940: 0x3e00008
    ctx->pc = 0x143940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143944u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1438A8u: goto label_1438a8;
            case 0x1438C0u: goto label_1438c0;
            case 0x1438CCu: goto label_1438cc;
            case 0x1438E0u: goto label_1438e0;
            case 0x1438F8u: goto label_1438f8;
            case 0x14390Cu: goto label_14390c;
            case 0x143920u: goto label_143920;
            case 0x14393Cu: goto label_14393c;
            case 0x143940u: goto label_143940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143948u;
}
