#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: WAIT_ENALV__13EventCtrlTaskFv
// Address: 0x1e38c0 - 0x1e3948
void WAIT_ENALV__13EventCtrlTaskFv_0x1e38c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("WAIT_ENALV__13EventCtrlTaskFv");


    ctx->pc = 0x1e38c0u;

    // 0x1e38c0: 0x8c83000c
    ctx->pc = 0x1e38c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e38c4: 0x84630004
    ctx->pc = 0x1e38c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e38c8: 0xa7838c18
    ctx->pc = 0x1e38c8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937624), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e38cc: 0x80830004
    ctx->pc = 0x1e38ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e38d0: 0x10600003
    ctx->pc = 0x1E38D0u;
    {
        const bool branch_taken_0x1e38d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E38D4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e38d0) {
            ctx->pc = 0x1E38E0u;
            goto label_1e38e0;
        }
    }
    ctx->pc = 0x1E38D8u;
    // 0x1e38d8: 0x10000003
    ctx->pc = 0x1E38D8u;
    {
        const bool branch_taken_0x1e38d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E38DCu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937616)));
        if (branch_taken_0x1e38d8) {
            ctx->pc = 0x1E38E8u;
            goto label_1e38e8;
        }
    }
    ctx->pc = 0x1E38E0u;
label_1e38e0:
    // 0x1e38e0: 0x10000017
    ctx->pc = 0x1E38E0u;
    {
        const bool branch_taken_0x1e38e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E38E4u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1e38e0) {
            ctx->pc = 0x1E3940u;
            goto label_1e3940;
        }
    }
    ctx->pc = 0x1E38E8u;
label_1e38e8:
    // 0x1e38e8: 0x87838c18
    ctx->pc = 0x1e38e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937624)));
    // 0x1e38ec: 0x65082a
    ctx->pc = 0x1e38ecu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x1e38f0: 0x14200013
    ctx->pc = 0x1E38F0u;
    {
        const bool branch_taken_0x1e38f0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e38f0) {
            ctx->pc = 0x1E3940u;
            goto label_1e3940;
        }
    }
    ctx->pc = 0x1E38F8u;
    // 0x1e38f8: 0x83838b2c
    ctx->pc = 0x1e38f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x1e38fc: 0x10600010
    ctx->pc = 0x1E38FCu;
    {
        const bool branch_taken_0x1e38fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e38fc) {
            ctx->pc = 0x1E3940u;
            goto label_1e3940;
        }
    }
    ctx->pc = 0x1E3904u;
    // 0x1e3904: 0x8f838c48
    ctx->pc = 0x1e3904u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1e3908: 0x24050001
    ctx->pc = 0x1e3908u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e390c: 0xa06500d6
    ctx->pc = 0x1e390cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 214), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e3910: 0x8f838c48
    ctx->pc = 0x1e3910u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1e3914: 0x806300d5
    ctx->pc = 0x1e3914u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 213)));
    // 0x1e3918: 0x14600004
    ctx->pc = 0x1E3918u;
    {
        const bool branch_taken_0x1e3918 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e3918) {
            ctx->pc = 0x1E392Cu;
            goto label_1e392c;
        }
    }
    ctx->pc = 0x1E3920u;
    // 0x1e3920: 0x80830005
    ctx->pc = 0x1e3920u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1e3924: 0x10600006
    ctx->pc = 0x1E3924u;
    {
        const bool branch_taken_0x1e3924 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e3924) {
            ctx->pc = 0x1E3940u;
            goto label_1e3940;
        }
    }
    ctx->pc = 0x1E392Cu;
label_1e392c:
    // 0x1e392c: 0xa0800004
    ctx->pc = 0x1e392cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3930: 0xa7808c18
    ctx->pc = 0x1e3930u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937624), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e3934: 0x8c83000c
    ctx->pc = 0x1e3934u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3938: 0x24630008
    ctx->pc = 0x1e3938u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e393c: 0xac83000c
    ctx->pc = 0x1e393cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1e3940:
    // 0x1e3940: 0x3e00008
    ctx->pc = 0x1E3940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E38E0u: goto label_1e38e0;
            case 0x1E38E8u: goto label_1e38e8;
            case 0x1E392Cu: goto label_1e392c;
            case 0x1E3940u: goto label_1e3940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3948u;
}
