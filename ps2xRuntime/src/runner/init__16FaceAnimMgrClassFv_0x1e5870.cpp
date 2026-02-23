#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__16FaceAnimMgrClassFv
// Address: 0x1e5870 - 0x1e5960
void init__16FaceAnimMgrClassFv_0x1e5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__16FaceAnimMgrClassFv");


    ctx->pc = 0x1e5870u;

    // 0x1e5870: 0x3c030050
    ctx->pc = 0x1e5870u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e5874: 0x70002e28
    ctx->pc = 0x1e5874u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e5878: 0x246408b0
    ctx->pc = 0x1e5878u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 2224));
label_1e587c:
    // 0x1e587c: 0xac800000
    ctx->pc = 0x1e587cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1e5880: 0xac800004
    ctx->pc = 0x1e5880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1e5884: 0xac800008
    ctx->pc = 0x1e5884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1e5888: 0xac80000c
    ctx->pc = 0x1e5888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1e588c: 0xac800010
    ctx->pc = 0x1e588cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1e5890: 0xac800014
    ctx->pc = 0x1e5890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1e5894: 0xac800018
    ctx->pc = 0x1e5894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1e5898: 0x24a50008
    ctx->pc = 0x1e5898u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e589c: 0xac80001c
    ctx->pc = 0x1e589cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1e58a0: 0x28a3006a
    ctx->pc = 0x1e58a0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 106));
    // 0x1e58a4: 0x1460fff5
    ctx->pc = 0x1E58A4u;
    {
        const bool branch_taken_0x1e58a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E58A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x1e58a4) {
            ctx->pc = 0x1E587Cu;
            goto label_1e587c;
        }
    }
    ctx->pc = 0x1E58ACu;
    // 0x1e58ac: 0x28a10072
    ctx->pc = 0x1e58acu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 114));
    // 0x1e58b0: 0x1020000d
    ctx->pc = 0x1E58B0u;
    {
        const bool branch_taken_0x1e58b0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e58b0) {
            ctx->pc = 0x1E58E8u;
            goto label_1e58e8;
        }
    }
    ctx->pc = 0x1E58B8u;
    // 0x1e58b8: 0x3c030050
    ctx->pc = 0x1e58b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e58bc: 0x52080
    ctx->pc = 0x1e58bcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e58c0: 0x246308b0
    ctx->pc = 0x1e58c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2224));
    // 0x1e58c4: 0x642021
    ctx->pc = 0x1e58c4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e58c8:
    // 0x1e58c8: 0x24a50001
    ctx->pc = 0x1e58c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e58cc: 0xac800000
    ctx->pc = 0x1e58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1e58d0: 0x28a30072
    ctx->pc = 0x1e58d0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 114));
    // 0x1e58d4: 0x24840004
    ctx->pc = 0x1e58d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x1e58d8: 0x0
    ctx->pc = 0x1e58d8u;
    // NOP
    // 0x1e58dc: 0x1460fffa
    ctx->pc = 0x1E58DCu;
    {
        const bool branch_taken_0x1e58dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e58dc) {
            ctx->pc = 0x1E58C8u;
            goto label_1e58c8;
        }
    }
    ctx->pc = 0x1E58E4u;
    // 0x1e58e4: 0x0
    ctx->pc = 0x1e58e4u;
    // NOP
label_1e58e8:
    // 0x1e58e8: 0x3c030050
    ctx->pc = 0x1e58e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e58ec: 0x70002e28
    ctx->pc = 0x1e58ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e58f0: 0x24640a80
    ctx->pc = 0x1e58f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 2688));
label_1e58f4:
    // 0x1e58f4: 0xac800000
    ctx->pc = 0x1e58f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1e58f8: 0xac800004
    ctx->pc = 0x1e58f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1e58fc: 0xac800008
    ctx->pc = 0x1e58fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1e5900: 0xac80000c
    ctx->pc = 0x1e5900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1e5904: 0xac800010
    ctx->pc = 0x1e5904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1e5908: 0xac800014
    ctx->pc = 0x1e5908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1e590c: 0xac800018
    ctx->pc = 0x1e590cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1e5910: 0x24a50008
    ctx->pc = 0x1e5910u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e5914: 0xac80001c
    ctx->pc = 0x1e5914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1e5918: 0x28a30026
    ctx->pc = 0x1e5918u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 38));
    // 0x1e591c: 0x1460fff5
    ctx->pc = 0x1E591Cu;
    {
        const bool branch_taken_0x1e591c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E5920u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x1e591c) {
            ctx->pc = 0x1E58F4u;
            goto label_1e58f4;
        }
    }
    ctx->pc = 0x1E5924u;
    // 0x1e5924: 0x28a1002e
    ctx->pc = 0x1e5924u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 46));
    // 0x1e5928: 0x1020000b
    ctx->pc = 0x1E5928u;
    {
        const bool branch_taken_0x1e5928 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E592Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
        if (branch_taken_0x1e5928) {
            ctx->pc = 0x1E5958u;
            goto label_1e5958;
        }
    }
    ctx->pc = 0x1E5930u;
    // 0x1e5930: 0x52080
    ctx->pc = 0x1e5930u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e5934: 0x24630a80
    ctx->pc = 0x1e5934u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2688));
    // 0x1e5938: 0x642021
    ctx->pc = 0x1e5938u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e593c:
    // 0x1e593c: 0x24a50001
    ctx->pc = 0x1e593cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e5940: 0xac800000
    ctx->pc = 0x1e5940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1e5944: 0x28a3002e
    ctx->pc = 0x1e5944u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 46));
    // 0x1e5948: 0x24840004
    ctx->pc = 0x1e5948u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x1e594c: 0x0
    ctx->pc = 0x1e594cu;
    // NOP
    // 0x1e5950: 0x1460fffa
    ctx->pc = 0x1E5950u;
    {
        const bool branch_taken_0x1e5950 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e5950) {
            ctx->pc = 0x1E593Cu;
            goto label_1e593c;
        }
    }
    ctx->pc = 0x1E5958u;
label_1e5958:
    // 0x1e5958: 0x3e00008
    ctx->pc = 0x1E5958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E587Cu: goto label_1e587c;
            case 0x1E58C8u: goto label_1e58c8;
            case 0x1E58E8u: goto label_1e58e8;
            case 0x1E58F4u: goto label_1e58f4;
            case 0x1E593Cu: goto label_1e593c;
            case 0x1E5958u: goto label_1e5958;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5960u;
}
